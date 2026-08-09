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


def make_rate_lookup(sel, model):
    """Return (eps_grid, get_rate) for the given detector-volume model."""
    mx = sel['mx'].to_numpy()
    epsilon = sel['epsilon'].to_numpy()
    rate_1yr = sel['rate_1yr'].to_numpy()
    volume = sel[f'volume_m3_{model}'].to_numpy()
    acceptance = sel[f'frac_ecut10_{model}'].to_numpy()

    mx_grid = np.unique(mx)
    mx_set = set(mx_grid.tolist())

    def rate_at(m, eps):
        # eps always comes from the grid below, so an exact match is safe here
        # (a tolerance would merge neighbouring points at the bottom of the grid).
        row = (mx == m) & (epsilon == eps)
        return (rate_1yr[row][0] * LIVETIME_FRACTION
                * volume[row][0] / VOLUME_ICECUBE * acceptance[row][0])

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
    args = parser.parse_args()

    masses = MASS_GRIDS[args.depth]
    suffix = '' if args.depth == 'e0' else f'_{args.depth}'
    eps_grid, get_rate = make_rate_lookup(load_slice(), args.model)

    output_file = f"exp_lim/signal_{args.limit_directory}_alpha_max.txt"
    print(f"Saving to {output_file}")
    print(f"eps grid from parquet ({len(eps_grid)} points) -- keep `labels` in "
          "exp_lim/set_limit_alphaMax.py identical to:\n["
          + ", ".join(f"{e:.6g}" for e in eps_grid) + "]")

    with open(output_file, 'w') as f, contextlib.redirect_stdout(f):
        template = [f'Signal_M{min(int(m / 2), TEMPLATE_MASS_CAP)}GeV{suffix}_SR' for m in masses]
        print(",".join(f'{args.limit_directory}/rpf2x0_{t}/{t}-2x0_area' for t in template))
        print(",".join(str(m) for m in masses))
        print(",".join('100' for _ in masses))

        for eps in eps_grid:
            print(", ".join(f"{signal_rate(get_rate, m, eps):e}" for m in masses))


if __name__ == '__main__':
    main()
