"""Write the monthly signal-rate table consumed by exp_lim/set_limit_alphaMax.py.

Output layout: three header lines (template paths, DM masses, a constant 100),
then one line per epsilon point of the parquet grid, each holding one rate per
DM mass. The `labels` list in set_limit_alphaMax.py indexes those lines
positionally, so it must match the epsilon grid printed to the console here.
"""

import argparse
import contextlib

import numpy as np
import pandas as pd

PARQUET = ('helper_scripts/parquet_files/rates_muons_electrons_both_alphas_KAPPAS_10_1000000'
           '_varying_steps_coarse_grain_epsilon_and_mas_WITH_CALC_ACCEPTANCES-2.parquet')
MA = 0.23
ALPHA = 'MAX'
FINAL_STATE = 'muons'


VOLUME_ICECUBE = 1000 ** 3  # m^3, the volume rate_1yr is quoted in
LIVETIME_FRACTION = 1 / 12  # CMS livetime relative to the parquet's one year
TEMPLATE_MASS_CAP = 90000   # GeV, heaviest signal template available

MASS_GRIDS = {
    'e0': [1600, 1800, 2000, 2200, 2600, 2800, 3000, 3200, 3400, 3600, 3800, 4000, 4200, 4400, 4600, 4800, 5000, 5400, 5600, 5800, 6000, 6500, 7000, 7500, 8000, 8500, 9000, 9500, 25000, 30000, 35000, 40000, 45000, 50000, 55000, 60000, 70000, 75000, 80000, 85000, 90000, 95000, 100000, 110000, 120000, 130000, 140000, 150000, 160000, 170000, 180000, 185000, 190000, 195000, 200000, 225000, 250000, 275000, 300000, 325000, 350000, 375000, 400000, 425000, 450000, 475000, 500000, 600000, 700000, 800000, 900000, 1000000],
    'e2': [2000, 3000, 4000, 6000, 7000, 8000, 9000, 10000, 20000, 40000, 60000, 80000, 100000, 120000, 140000, 160000, 180000, 185000, 190000, 195000, 200000, 225000, 250000, 275000, 300000, 325000, 350000, 375000, 400000, 425000, 450000, 475000, 500000, 600000, 700000, 800000, 900000],
    'e3': [2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000, 10000, 20000, 40000, 60000, 80000, 100000, 120000, 140000, 160000, 180000, 185000, 190000, 195000, 200000, 225000, 250000, 275000, 300000, 325000, 350000, 375000, 400000, 425000, 450000, 475000, 500000, 600000, 700000, 800000, 900000],
    'e4': [2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000, 10000, 20000, 40000, 60000, 80000, 100000, 120000, 140000, 160000, 180000, 185000, 190000, 195000, 200000, 225000, 250000, 275000, 300000, 325000, 350000, 375000, 400000, 425000, 450000, 475000, 500000, 600000, 700000, 800000, 900000],
    'e5': [2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000, 10000, 20000, 40000, 60000, 80000, 100000, 120000, 140000, 160000, 180000, 185000, 190000, 195000, 200000, 225000, 250000, 275000, 300000, 325000, 350000, 375000, 400000, 425000, 450000, 475000, 500000, 600000, 700000, 800000, 900000],
    'e6': [3000, 4000, 5000, 6000, 7000, 8000, 9000, 10000, 20000, 40000, 60000, 80000, 100000, 120000, 140000, 160000, 180000, 185000, 190000, 195000, 200000, 225000, 250000, 275000, 300000, 325000, 350000, 375000, 400000, 425000, 450000, 475000, 500000, 600000, 700000, 800000, 900000],
}


def eff_func(mass):
    return 0.06758539099355372 * np.exp(-3.9610274911588674e-05 * mass) + 0.016782590921269932


def load_slice():
    df = pd.read_parquet(PARQUET)
    sel = df.loc[np.isclose(df['ma'], MA)
                 & (df['alpha_therm_or_max'] == ALPHA)
                 & (df['final_state_particles'] == FINAL_STATE)
                 & (df['depth_scale'] == 1.0)]
    if sel.empty:
        raise SystemExit(f"No rows in {PARQUET} for ma={MA}, alpha={ALPHA}, {FINAL_STATE}. "
                         f"Available ma values: {np.unique(df['ma'].to_numpy())}")
    return sel


def densify(eps_grid, lo, hi, n):
    """Insert `n` log-spaced points into every gap of `eps_grid` that lies within [lo, hi].

    The parquet is coarse-grained in epsilon at 9 points per decade (1,2,...,9 x 10^k), so the
    1e-8 -> 2e-8 step is a factor of TWO -- the widest relative gap in the grid. The exclusion
    turns on inside exactly that gap (no window at 1e-8, a [2.2, 128] TeV window at 2e-8), so
    the drawn lower boundary collapses onto the 2e-8 grid line and the plot shows a flat edge
    with a hard kink instead of the real turn-on. Sampling the gap fixes that.
    """
    if n <= 0:
        return eps_grid
    out = []
    for a, b in zip(eps_grid[:-1], eps_grid[1:]):
        out.append(a)
        if a >= lo and b <= hi:
            out.extend(np.exp(np.linspace(np.log(a), np.log(b), n + 2))[1:-1])
    out.append(eps_grid[-1])
    return np.array(out)


def make_rate_lookup(sel, model):
    """Return (eps_grid, get_rate) for the given detector-volume model."""
    mx = sel['mx'].to_numpy()
    epsilon = sel['epsilon'].to_numpy()
    rate_1yr = sel['rate_1yr'].to_numpy()
    volume = sel[f'volume_m3_{model}'].to_numpy()
    acceptance = sel[f'frac_ecut10_{model}'].to_numpy()

    mx_grid = np.unique(mx)
    mx_set = set(mx_grid.tolist())
    eps_grid_parquet = np.unique(epsilon)

    def rate_on_grid(m, eps):
        row = (mx == m) & (epsilon == eps)
        return (rate_1yr[row][0] * LIVETIME_FRACTION
                * volume[row][0] / VOLUME_ICECUBE * acceptance[row][0])

    def rate_at(m, eps):
        """Monthly rate at a grid mass, log-log interpolated in epsilon when off-grid.

        Interpolating the RATE is the right thing to densify: it is the smooth input, whereas
        the exclusion window is the output and has a turn-on discontinuity. Only interpolation
        between bracketing parquet points is ever done, never extrapolation. Across the
        1e-8..2e-8 gap the rate rises monotonically by ~3x (local log-log slope ~1.6), well
        below the attenuation turnover that sets in above 2e-8, so this is well behaved.
        """
        # atol=0 is essential: np.isclose defaults to atol=1e-8, which is ENORMOUS next to an
        # epsilon of 1e-11, so every point below ~1e-8 would "match" the first grid value and
        # silently take the rate at 1e-11. Only the relative tolerance is meaningful here.
        exact = np.isclose(eps_grid_parquet, eps, rtol=1e-12, atol=0.0)
        if exact.any():
            return rate_on_grid(m, eps_grid_parquet[exact][0])

        below = eps_grid_parquet[eps_grid_parquet < eps]
        above = eps_grid_parquet[eps_grid_parquet > eps]
        if below.size == 0 or above.size == 0:
            raise SystemExit(f"epsilon {eps:g} is outside the parquet grid; refusing to extrapolate")
        e_lo, e_hi = below[-1], above[0]
        r_lo, r_hi = rate_on_grid(m, e_lo), rate_on_grid(m, e_hi)
        if r_lo <= 0 or r_hi <= 0:
            frac = (eps - e_lo) / (e_hi - e_lo)
            return r_lo + frac * (r_hi - r_lo)
        frac = (np.log(eps) - np.log(e_lo)) / (np.log(e_hi) - np.log(e_lo))
        return np.exp(np.log(r_lo) + frac * (np.log(r_hi) - np.log(r_lo)))

    def get_rate(dm_mass, eps):
        """Rate at a DM mass, log-interpolated between the bracketing grid
        points when the mass is off-grid (rate falls ~exponentially with mass);
        masses outside the grid are extrapolated from its two end points."""
        if dm_mass in mx_set:
            return rate_at(dm_mass, eps)

        if dm_mass > mx_grid[-1]:
            lo, hi = mx_grid[-2], mx_grid[-1]
        elif dm_mass < mx_grid[0]:
            lo, hi = mx_grid[0], mx_grid[1]
        else:
            lo = mx_grid[mx_grid < dm_mass][-1]
            hi = mx_grid[mx_grid > dm_mass][0]

        r_lo, r_hi = rate_at(lo, eps), rate_at(hi, eps)
        frac = (dm_mass - lo) / (hi - lo)
        if r_lo <= 0 or r_hi <= 0:
            return r_lo + frac * (r_hi - r_lo)
        return np.exp(np.log(r_lo) + frac * (np.log(r_hi) - np.log(r_lo)))

    return np.unique(epsilon), get_rate


def signal_rate(get_rate, dm_mass, eps):
    rate = get_rate(dm_mass, eps)
    # Templates freeze at TEMPLATE_MASS_CAP, so correct the resulting
    # efficiency mismatch on the template-mass scale.
    template_mass = dm_mass / 2
    if template_mass > TEMPLATE_MASS_CAP:
        rate *= eff_func(template_mass) / eff_func(TEMPLATE_MASS_CAP)
    return rate


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('-d', '--depth', required=True, choices=sorted(MASS_GRIDS),
                        help='Depth')
    parser.add_argument('-l', '--limit_directory', required=True, help='Limit directory')
    parser.add_argument('-m', '--model', required=True, choices=['core', 'floating'],
                        help='Detector-volume model')
    # Defaults cover the sensitivity turn-on (see densify()). Each inserted point costs one more
    # row here and one more 1D limit PDF downstream, so this stays targeted rather than global.
    parser.add_argument('--densify-lo', type=float, default=1e-8,
                        help='Densify parquet epsilon gaps at or above this value (default 1e-8)')
    parser.add_argument('--densify-hi', type=float, default=2e-8,
                        help='Densify parquet epsilon gaps at or below this value (default 2e-8)')
    parser.add_argument('--densify-n', type=int, default=4,
                        help='Points to insert per gap in that range; 0 disables (default 4)')
    args = parser.parse_args()

    masses = MASS_GRIDS[args.depth]
    suffix = '' if args.depth == 'e0' else f'_{args.depth}'
    eps_grid, get_rate = make_rate_lookup(load_slice(), args.model)
    n_parquet = len(eps_grid)
    eps_grid = densify(eps_grid, args.densify_lo, args.densify_hi, args.densify_n)

    output_file = f"exp_lim/signal_{args.limit_directory}_alpha_max.txt"
    eps_file = f"exp_lim/signal_{args.limit_directory}_alpha_max.eps.txt"
    print(f"Saving to {output_file}")
    print(f"eps grid: {n_parquet} parquet points -> {len(eps_grid)} after densifying "
          f"[{args.densify_lo:g}, {args.densify_hi:g}] with {args.densify_n} per gap")
    # The row order of the rate table and the epsilon values are the same information, and
    # keeping a second hand-maintained copy in set_limit_alphaMax.py is what silently mis-paired
    # limits with epsilons before. Write the grid next to the table and let the consumer read it.
    with open(eps_file, 'w') as fh:
        fh.write("\n".join(repr(float(e)) for e in eps_grid) + "\n")
    print(f"Wrote the epsilon grid to {eps_file} (set_limit_alphaMax.py reads it)")

    with open(output_file, 'w') as f, contextlib.redirect_stdout(f):
        template = [f'Signal_M{min(int(m / 2), TEMPLATE_MASS_CAP)}GeV{suffix}_SR' for m in masses]
        print(",".join(f'{args.limit_directory}/rpf2x0_{t}/{t}-2x0_area' for t in template))
        print(",".join(str(m) for m in masses))
        print(",".join('100' for _ in masses))

        for eps in eps_grid:
            print(", ".join(f"{signal_rate(get_rate, m, eps):e}" for m in masses))


if __name__ == '__main__':
    main()
