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
MA = 0.23          # default m_A' [GeV]; override with --ma
ALPHA = 'MAX'      # default coupling scenario; override with --alpha-scenario
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


def load_slice(ma=MA, alpha=ALPHA):
    df = pd.read_parquet(PARQUET)
    sel = df.loc[np.isclose(df['ma'], ma)
                 & (df['alpha_therm_or_max'] == alpha)
                 & (df['final_state_particles'] == FINAL_STATE)
                 & (df['depth_scale'] == 1.0)]
    if sel.empty:
        raise SystemExit(f"No rows in {PARQUET} for ma={ma}, alpha={alpha}, {FINAL_STATE}. "
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


# Which parquet acceptance column answers "does the muon reach the part of CMS the analysis
# needs". 'chambers' = frac_ecut10 (E > 10 GeV at CMS and the muon intersects the muon chambers);
# 'tracker' = frac_hit_id_ecut10 (the same, and it additionally intersects the inner detector).
# The analysis selection needs inner-detector hits and the signal MC is generated behind the
# cosmicInTracker gen filter, so 'tracker' is the self-consistent choice -- see main().
ACCEPTANCE_COLUMNS = {'chambers': 'frac_ecut10_{model}', 'tracker': 'frac_hit_id_ecut10_{model}'}

# Cylinder geometries, (radius, half-length) in metres, that the tracker acceptance depends on:
#
#   EARTHSHINE_ID   the "inner detector" EarthShine counts hits in, i.e. what frac_hit_id_ecut10
#                   actually means. EarthShine/background_and_signal_acceptance_studies/
#                   generate_signal_events_CL_v2.py:56-57 (--inner-detector-radius 1.0,
#                   --inner-detector-half-len 2.5), matching dm_generation_tools.py:376.
#   EARTHSHINE_OUT  its outer detector, the denominator of frac_ecut10 (same file, lines 54-55).
#   COSMIC_FILTER   the cylinder the cosmicInTracker gen filter actually requires the muon to
#                   reach, from GeneratorInterface/GenFilters/python/CosmicGenFilterHelix_cfi.py:
#                   radius = 80 cm, minZ/maxZ = -/+ 212 cm.
#   CMS_TRACKER     the full CMS tracker, quoted in the comment of that same cfi file
#                   ("full tracker: r=112, z=+/- 270").
#
# The filter is deliberately tighter than the tracker it is named after -- the cfi comments say
# radius 80 cm is "at least for barrel layers" and z 212 cm "at least four TEC discs" -- so it
# throws away muons that do cross the real tracker and would have been reconstructed.
EARTHSHINE_ID = (1.00, 2.50)
EARTHSHINE_OUT = (7.50, 15.0)
COSMIC_FILTER = (0.80, 2.12)
CMS_TRACKER = (1.12, 2.70)


def shadow_area(rz):
    """Projected area, r * half-length, of a cylinder seen by straight tracks crossing it.

    For a track that is a straight line, the acceptance of a cylinder of radius R and half-length
    Z is set by its SHADOW in the plane transverse to the track, which is a 2R x 2Z rectangle --
    so acceptances scale as R*Z, not as the volume R^2*Z. That is not a modelling assumption: the
    parquet's own frac_hit_id_ecut10 / frac_ecut10 for the core model is 0.0221, and
    shadow_area(EARTHSHINE_ID) / shadow_area(EARTHSHINE_OUT) = 2.50 / 112.5 = 0.02222. The two
    agree to 0.05%, which both confirms the geometry constants above and shows the muons are
    effectively straight vertical tracks over the detector. Using a volume ratio instead would be
    wrong by R_target/R_source, i.e. 12% for the CMS_TRACKER / EARTHSHINE_ID rescale.
    """
    return rz[0] * rz[1]


def make_rate_lookup(sel, model, acceptance_kind='tracker'):
    """Return (eps_grid, get_rate) for the given detector-volume model."""
    mx = sel['mx'].to_numpy()
    epsilon = sel['epsilon'].to_numpy()
    rate_1yr = sel['rate_1yr'].to_numpy()
    volume = sel[f'volume_m3_{model}'].to_numpy()
    acceptance = sel[ACCEPTANCE_COLUMNS[acceptance_kind].format(model=model)].to_numpy()

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


# The coupling the parquet rates were generated at: alpha_X^max = 0.17 (m_chi/TeV)^1.61. Swapping
# to a different power law is a pure reweighting because the rate is LINEAR in alpha_X in the
# equilibrium regime (Gamma_ann = 0.5*C_cap, C_cap ~ eps^2 * alpha_X; measured exponent 1.000 over
# 7324 parquet points at m_chi >= 20 TeV). Only the exponent matters, the 0.17 cancels in the ratio.
ALPHA_MAX_EXPONENT = 1.61
ALPHA_MAX_COEFF = 0.17


def alpha_reweight(dm_mass, exponent, coeff=None):
    """Rate factor for moving from 0.17*m^1.61 to `coeff`*m^`exponent`.

    Linear in alpha_X, so the factor is just the ratio of the two benchmarks.

    NOTE this changes the (m_chi, epsilon) contour but NOT the excluded coupling: alpha_excl =
    alpha_bench * R_limit / R_pred(alpha_bench), and reparameterising scales alpha_bench and
    R_pred by the same factor, so it cancels exactly (verified: the tracker table reads 19.6 at
    8 TeV whether built at 0.17*m^1.61 or 9.4*m^1.61). Only a genuine change to the predicted
    rate -- the cosmicInTracker filter, i.e. --rate-scale -- moves alpha_excl. A coefficient of
    9.4 undoes a 1/55 filter in the contour while leaving the physics content unchanged.
    """
    if exponent is None and coeff is None:
        return 1.0
    expo = ALPHA_MAX_EXPONENT if exponent is None else exponent
    c = ALPHA_MAX_COEFF if coeff is None else coeff
    return (c / ALPHA_MAX_COEFF) * (dm_mass / 1000.) ** (expo - ALPHA_MAX_EXPONENT)


def signal_rate(get_rate, dm_mass, eps, rate_scale=1.0, alpha_exponent=None, alpha_coeff=None):
    rate = get_rate(dm_mass, eps) * rate_scale * alpha_reweight(dm_mass, alpha_exponent, alpha_coeff)
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
    #
    # THE WINDOW HAS TO TRACK THE TURN-ON. It was [1e-8, 2e-8] while the rates carried the old flat
    # 0.018 tracker factor. Correcting that acceptance raised every rate by ~1.49x, which moved the
    # turn-on UP the epsilon grid -- there is now no exclusion at 3e-8 and a [16.8, 59.9] TeV window
    # at 4e-8 -- so the old window sampled a region with no exclusion in it at all while the real
    # turn-on sat in an unsampled gap. The contour's lower edge then collapsed onto the 4e-8 grid
    # line and the 2D plots grew a flat epsilon floor. Widening to [1e-8, 1e-7] covers the turn-on
    # wherever it lands between those decades. If you change the rate normalization again, CHECK
    # where the first non-empty window is (the `Exp lim:` printout of set_limit_alphaMax.py) and
    # make sure this window still brackets it.
    parser.add_argument('--densify-lo', type=float, default=1e-8,
                        help='Densify parquet epsilon gaps at or above this value (default 1e-8)')
    parser.add_argument('--densify-hi', type=float, default=1e-7,
                        help='Densify parquet epsilon gaps at or below this value (default 1e-7)')
    parser.add_argument('--densify-n', type=int, default=4,
                        help='Points to insert per gap in that range; 0 disables (default 4)')
    # The signal MC denominator is the cosmicInTracker-accepted subset (the muon must reach the
    # tracker), so the predicted yield is over-estimated unless the same requirement is folded into
    # the acceptance. Do that with --acceptance tracker, which reads the parquet's OWN
    # inner-detector column, rather than with a flat --rate-scale: the flat 0.018 taken from
    # helper_scripts/cosmicInTracker_efficiency.csv is a filter efficiency measured against the
    # 8 m x 15 m CosMuoGen target cylinder, which is a different denominator from "muons that
    # reach the muon chambers" and is 1.14-1.34x too small as a result.
    parser.add_argument('--acceptance', choices=sorted(ACCEPTANCE_COLUMNS), default='tracker',
                        help="Which parquet geometric-acceptance column to use. 'tracker' "
                             "(default) = frac_hit_id_ecut10, the muon reaches the muon chambers "
                             "AND the inner detector; 'chambers' = frac_ecut10, muon chambers "
                             "only. 'tracker' matches the signal MC's cosmicInTracker denominator.")
    parser.add_argument('--tracker-volume-scale', type=float, default=None,
                        help='Flat factor rescaling the parquet tracker acceptance from the '
                             'EarthShine inner detector it was computed in (r = 1.00 m, '
                             '|z| < 2.50 m) to the full CMS tracker (r = 1.12 m, |z| < 2.70 m). '
                             'Default is the projected-area ratio '
                             f'{shadow_area(CMS_TRACKER) / shadow_area(EARTHSHINE_ID):.4f}; pass '
                             '1.0 to disable. Only applied with --acceptance tracker.')
    parser.add_argument('--rate-scale', type=float, default=1.0,
                        help='Flat multiplicative factor on every rate (default 1.0). Legacy knob; '
                             'prefer --acceptance/--tracker-volume-scale, which are named.')
    parser.add_argument('--ma', type=float, default=MA,
                        help=f"Dark photon mass in GeV; must be on the parquet grid "
                             f"(0.22-1.00 in 0.01 steps). Default {MA}.")
    parser.add_argument('--alpha-exponent', type=float, default=None,
                        help='Reweight to alpha_X ~ (m_chi/TeV)^EXP instead of the generated '
                             '^1.61, at the same 0.17 coefficient. Mass dependent, so it is not '
                             'expressible as --rate-scale. E.g. 2 for the quadratic benchmark.')
    parser.add_argument('--alpha-scenario', default=ALPHA, choices=['MAX', 'THERMAL'],
                        help="Which coupling scenario's rates to read from the parquet. THERMAL is "
                             "alpha_X = 0.0244 (m/TeV) from relic abundance; MAX is the CMB bound "
                             "0.17 (m/TeV)^1.61. These are separate rows, not a reweight, so this "
                             "is exact rather than assuming linearity in alpha. Default MAX.")
    parser.add_argument('--alpha-coeff', type=float, default=None,
                        help=f'Coefficient of the alpha_X benchmark, replacing the generated '
                             f'{ALPHA_MAX_COEFF}. Scales every rate by coeff/{ALPHA_MAX_COEFF}.')
    parser.add_argument('--tag', default='',
                        help="Suffix for the output filenames only, e.g. '_tracker'. The combine "
                             "area paths still come from -l, so this does not affect what is read.")
    # The e2..e6 grids stop at 900 TeV while the parquet and the (m_chi, epsilon) plots run to
    # 1000 TeV, so the coupling/cross-section plots ended one point short of the others. Any mass
    # added here reuses the TEMPLATE_MASS_CAP template with the eff_func correction, exactly as the
    # 600-900 TeV points already do, so it introduces no approximation those points do not have.
    parser.add_argument('--extra-mass', action='append', type=int, default=[], metavar='GEV',
                        help='Extra DM mass in GeV to append to the depth grid, repeatable. '
                             'Must lie on (or inside) the parquet mx grid. E.g. --extra-mass 1000000.')
    args = parser.parse_args()

    masses = sorted(set(MASS_GRIDS[args.depth]) | set(args.extra_mass))
    suffix = '' if args.depth == 'e0' else f'_{args.depth}'

    # Two independent corrections turn the parquet acceptance into the one this analysis needs,
    # and they must not be confused with each other:
    #   1. the acceptance COLUMN (--acceptance tracker): frac_hit_id_ecut10 instead of
    #      frac_ecut10, i.e. require the muon to reach an inner detector at all. This replaces the
    #      old flat --rate-scale 0.018, which was a cosmicInTracker efficiency measured against
    #      the CosMuoGen target cylinder -- a different denominator, and 1.14-1.34x too small.
    #   2. the tracker VOLUME (--tracker-volume-scale): EarthShine counted those hits in a
    #      1.00 x 2.50 m cylinder, while the CMS tracker is 1.12 x 2.70 m, so the parquet
    #      undercounts muons that cross the real tracker near its edge.
    volume_scale = 1.0
    if args.acceptance == 'tracker':
        volume_scale = (shadow_area(CMS_TRACKER) / shadow_area(EARTHSHINE_ID)
                        if args.tracker_volume_scale is None else args.tracker_volume_scale)
    elif args.tracker_volume_scale is not None:
        raise SystemExit('--tracker-volume-scale only means something with --acceptance tracker')

    eps_grid, get_rate = make_rate_lookup(load_slice(args.ma, args.alpha_scenario), args.model,
                                          args.acceptance)
    n_parquet = len(eps_grid)
    eps_grid = densify(eps_grid, args.densify_lo, args.densify_hi, args.densify_n)

    output_file = f"exp_lim/signal_{args.limit_directory}{args.tag}_alpha_max.txt"
    eps_file = f"exp_lim/signal_{args.limit_directory}{args.tag}_alpha_max.eps.txt"
    print(f"Saving to {output_file}")
    print(f"m_A' = {args.ma:g} GeV, alpha scenario {args.alpha_scenario}")
    print(f"acceptance column: {ACCEPTANCE_COLUMNS[args.acceptance].format(model=args.model)}")
    if volume_scale != 1.0:
        print(f"tracker volume rescale EarthShine {EARTHSHINE_ID} -> CMS {CMS_TRACKER}: "
              f"x{volume_scale:.4f}")
    if args.rate_scale != 1.0:
        print(f"Scaling every rate by {args.rate_scale:g}")
    if args.alpha_coeff is not None:
        print(f"alpha_X coefficient {ALPHA_MAX_COEFF} -> {args.alpha_coeff:g}: flat rate factor "
              f"x{args.alpha_coeff / ALPHA_MAX_COEFF:.4g}")
    if args.alpha_exponent is not None:
        print(f"Reweighting alpha_X from ^{ALPHA_MAX_EXPONENT} to ^{args.alpha_exponent:g}: "
              f"rate factor (m/TeV)^{args.alpha_exponent - ALPHA_MAX_EXPONENT:+.2f} "
              f"(x{alpha_reweight(2000., args.alpha_exponent):.2f} at 2 TeV, "
              f"x{alpha_reweight(100000., args.alpha_exponent):.2f} at 100 TeV)")
    print(f"eps grid: {n_parquet} parquet points -> {len(eps_grid)} after densifying "
          f"[{args.densify_lo:g}, {args.densify_hi:g}] with {args.densify_n} per gap")
    # The row order of the rate table and the epsilon values are the same information, and
    # keeping a second hand-maintained copy in set_limit_alphaMax.py is what silently mis-paired
    # limits with epsilons before. Write the grid next to the table and let the consumer read it.
    # %.10g, not repr(): the parquet stores 3e-08 as 3.0000000000000004e-08, and these values end
    # up in the 1D limit PDF filenames. 10 significant digits is far more than the grid needs and
    # still round-trips inside the rtol=1e-12 match in rate_at().
    with open(eps_file, 'w') as fh:
        fh.write("\n".join(f"{e:.10g}" for e in eps_grid) + "\n")
    print(f"Wrote the epsilon grid to {eps_file} (set_limit_alphaMax.py reads it)")

    with open(output_file, 'w') as f, contextlib.redirect_stdout(f):
        template = [f'Signal_M{min(int(m / 2), TEMPLATE_MASS_CAP)}GeV{suffix}_SR' for m in masses]
        print(",".join(f'{args.limit_directory}/rpf2x0_{t}/{t}-2x0_area' for t in template))
        print(",".join(str(m) for m in masses))
        print(",".join('100' for _ in masses))

        for eps in eps_grid:
            print(", ".join(f"{signal_rate(get_rate, m, eps, args.rate_scale * volume_scale, args.alpha_exponent, args.alpha_coeff):e}"
                            for m in masses))


if __name__ == '__main__':
    main()
