"""Exclusion in the (m_chi, alpha_X) plane, at fixed epsilon.

Why this plot exists
--------------------
The (m_chi, epsilon) limits are quoted at a benchmark coupling
alpha_X^max = 0.17 (m_chi/TeV)^1.61, which exceeds 1 above 3.0 TeV and reaches 282 at 100 TeV,
so over most of the mass range the benchmark is non-perturbative. Rather than pick a different
fixed benchmark -- every physically allowed choice is SMALLER than alpha_max and therefore gives a
weaker limit -- this turns the coupling into the observable and shows what the data exclude.

It is free of new fits. In the equilibrium regime the DarkCapPy signal rate is exactly linear in
alpha_X (Gamma_ann = 0.5*C_cap and C_cap ~ epsilon^2 * alpha_X; measured exponent 1.000 over 7324
parquet points at m_chi >= 20 TeV), so the excluded coupling is just the benchmark scaled by the
signal strength the fit excludes:

    alpha_excluded(m) = alpha_max(m) * R_excluded(m) / R_predicted(m, eps)

with R_excluded = r_lim * 100 / livetime_months (combine's r is relative to the 100-event
reference template) and R_predicted read from the rate table that fed the limit. Couplings ABOVE
the curve are excluded.

Usage (from .../CMSSW_14_1_0_pre4/src, cmsenv only -- do NOT source twoD-env, it shadows mplhep):
    python3 helper_scripts/plotExcludedAlphaVsMass.py \
        -s exp_lim/signal_<LIMITDIR>_alpha_max.txt -L 20.7 -e 4e-08
    # overlay a second rate scenario, e.g. the cosmicInTracker-corrected one:
    python3 helper_scripts/plotExcludedAlphaVsMass.py -s <nominal>.txt --compare <tracker>.txt ...
"""

import argparse
import os

import matplotlib
matplotlib.use("Agg")
import matplotlib.pyplot as plt
import mplhep as hep
import numpy as np
import ROOT

ROOT.gROOT.SetBatch(True)
plt.style.use(hep.style.CMS)

# The benchmark printed on the (m_chi, epsilon) plots, and the thermal-relic coupling. The thermal
# form is fitted from the parquet's alphax column: 0.0977/4 = 0.4886/20 = 2.443/100 = 0.02443.
ALPHA_MAX = lambda m_tev: 0.17 * m_tev ** 1.61
ALPHA_THERMAL = lambda m_tev: 0.02443 * m_tev
REFERENCE_EVENTS = 100.0        # signal templates are normalised to this, so r is relative to it

# --- (m_chi, sigma_chi-p) recast ---------------------------------------------------------------
# The dark photon mixes with the photon, so DM-nucleus scattering couples to the electromagnetic
# current and is coherent in the proton number Z. Eq. (17) of arXiv:1602.01465 is
#     dsigma_N/dE_R = 8 pi eps^2 alpha_X alpha Z_N^2 m_N |F_N|^2 / (w^2 (2 m_N E_R + m_A'^2)^2),
# and the contact ("EFT") limit 2 m_N E_R << m_A'^2 applies here by a wide margin: m_A'^2 = 0.053
# GeV^2 against 2 m_N E_R ~ 1e-7 GeV^2 for the ~10 MeV momentum transfer of a Newtonian estimate.
# Matching the E_R -> 0 form to the standard parametrisation
#     dsigma/dE_R = m_N sigma_0 F^2(E_R) / (2 mu^2 v^2)
# gives the per-PROTON spin-independent cross section
#     sigma_chi-p = 16 pi eps^2 alpha alpha_X mu_chi-p^2 / m_A'^4.
# The Z_N^2 and the nuclear reduced mass live in the usual A-scaling, so what is plotted is the
# per-nucleon number that direct-detection experiments quote. Only alpha_X carries the exclusion:
# eps and m_A' are inputs, and mu -> m_p to within 0.05% over the whole 2-900 TeV range, so this
# axis is a near-constant rescaling of alpha_X at fixed epsilon.
ALPHA_EM = 1.0 / 137.035999
M_PROTON = 0.938272             # GeV
GEV_M2_TO_CM2 = 3.893793e-28    # (hbar c)^2: 1 GeV^-2 expressed in cm^2


def sigma_chi_p(alpha_x, m_tev, eps, ma):
    """Spin-independent DM-proton cross section in cm^2 for a dark coupling `alpha_x`."""
    m_gev = np.asarray(m_tev, dtype=float) * 1000.
    mu = M_PROTON * m_gev / (M_PROTON + m_gev)
    return 16 * np.pi * eps ** 2 * ALPHA_EM * alpha_x * mu ** 2 / ma ** 4 * GEV_M2_TO_CM2


def read_rate_table(path):
    """Return (areas, dm_masses_gev, {eps: [rate per mass]}) from a signals file + its sidecar."""
    with open(path) as handle:
        lines = [l.strip() for l in handle if l.strip()]
    areas = [p.strip() for p in lines[0].split(",")]
    masses = np.array([float(m) for m in lines[1].split(",")])
    rows = [np.array([float(v) for v in l.split(",")]) for l in lines[3:]]

    eps_file = os.path.splitext(path)[0] + ".eps.txt"
    if not os.path.exists(eps_file):
        raise SystemExit(f"No {eps_file}. Regenerate with helper_scripts/limitRateInputScript.py.")
    with open(eps_file) as handle:
        eps = [float(l) for l in handle if l.strip()]
    if len(eps) != len(rows):
        raise SystemExit(f"{path} has {len(rows)} rate rows but {len(eps)} epsilon values.")
    return areas, masses, dict(zip(eps, rows))


def combine_limits(area):
    """Expected r quantiles from an area's AsymptoticLimits file, or None.

    Returns (median, lo68, hi68, lo95, hi95). The first three entries are kept in that order so
    that callers written against the older 3-tuple keep working unchanged.
    """
    path = os.path.join(area, "higgsCombineTest.AsymptoticLimits.mH120.root")
    if not os.path.exists(path):
        return None
    handle = ROOT.TFile.Open(path)
    tree = handle.Get("limit")
    if not tree:
        handle.Close()
        return None
    out = {}
    for i in range(tree.GetEntries()):
        tree.GetEntry(i)
        out[round(tree.quantileExpected, 3)] = tree.limit
    handle.Close()
    # 0.16/0.84 are the +-1sigma bands, 0.025/0.975 the +-2sigma bands, 0.5 the median
    if 0.5 not in out:
        return None
    return (out[0.5], out.get(0.16, out[0.5]), out.get(0.84, out[0.5]),
            out.get(0.025, out[0.5]), out.get(0.975, out[0.5]))


def excluded_alpha(signals, eps_target, livetime):
    """alpha_excluded (median, lo, hi) vs DM mass in TeV, for the closest epsilon on the grid."""
    areas, masses, table = read_rate_table(signals)
    eps = min(table, key=lambda e: abs(np.log(e) - np.log(eps_target)))
    rates = table[eps]

    m_tev, med, lo, hi = [], [], [], []
    for area, mass, rate in zip(areas, masses, rates):
        lim = combine_limits(area)
        if lim is None or rate <= 0:
            continue
        # combine's r is relative to the 100-event template, and set_limit_alphaMax.py converts
        # with this_xsec = 100/lumi to get a MONTHLY rate. Same convention here.
        scale = REFERENCE_EVENTS / livetime / rate
        mt = mass / 1000.
        m_tev.append(mt)
        med.append(ALPHA_MAX(mt) * lim[0] * scale)
        lo.append(ALPHA_MAX(mt) * lim[1] * scale)
        hi.append(ALPHA_MAX(mt) * lim[2] * scale)
    if not m_tev:
        raise SystemExit(f"No usable combine limits found for {signals}")
    order = np.argsort(m_tev)
    return (eps, np.array(m_tev)[order], np.array(med)[order],
            np.array(lo)[order], np.array(hi)[order])


def r_limit_lookup(areas, masses_gev, extrapolate=False):
    """{mass_gev: (median, lo, hi)} of combine's r, optionally extended below the MC grid.

    Signal MC stops at m_chi = 2 TeV (template Signal_M1000GeV), but the analysis accepts muons
    from p_T > 200 GeV, i.e. m_chi > 400 GeV. Nothing about the fit forbids a limit there: the
    M1000GeV point already peaks inside the four unblinded LOW bins that constrain the transfer
    function and still returns r = 5.09, because a localised signal bump is not degenerate with
    a smooth 3-parameter TF. The limit is simply weaker.

    So below the grid r is extrapolated as a power law in mass, fitted to the lowest few
    simulated points. Masses covered this way are reported separately so they can be drawn as
    extrapolation rather than as measurement.

    CAVEAT, and it is not a small one: the power law is fitted where the background is already
    falling steeply, and the fail-region yield keeps rising toward 200 GeV, so the true r almost
    certainly degrades FASTER than this. Treat the extrapolated section as an upper bound on the
    reach, not as a limit.
    """
    have, order = {}, []
    for area, mass in zip(areas, masses_gev):
        lim = combine_limits(area)
        if lim is not None:
            have[mass] = lim
            order.append(mass)
    if not extrapolate or not order:
        return have, set()

    known = np.array(sorted(order))
    lowest = known[:min(4, len(known))]                 # fit the low-mass end only
    slope = np.polyfit(np.log(lowest), np.log([have[m][0] for m in lowest]), 1)[0]
    ref_m = known[0]
    ref = have[ref_m]

    extrapolated = set()
    for mass in masses_gev:
        if mass in have or mass >= ref_m:
            continue
        factor = (mass / ref_m) ** slope
        have[mass] = tuple(v * factor for v in ref)
        extrapolated.add(mass)
    return have, extrapolated


def best_over_epsilon(signals, livetime, ma, metric="sigma", extrapolate=False, band="68"):
    """Envelope over the whole epsilon grid: the strongest limit any epsilon reaches, per mass.

    In this model epsilon fixes both the coupling and the dark photon decay length, so no single
    epsilon is best at every mass and a fixed-epsilon slice understates what the search can do.
    The envelope is the fair one-curve summary. It is NOT a constant-epsilon contour -- the
    winning epsilon is returned so it can be quoted alongside.

    `metric` decides what is minimised, and it matters: alpha_excl ~ 1/rate, so minimising alpha
    maximises the rate, whereas sigma ~ eps^2 * alpha_excl minimises eps^2/rate. Different
    epsilon wins in each case, so the minimisation is always done on the quantity being plotted.

    Combine limits are read once per mass, not once per (mass, epsilon): r is relative to the
    fixed 100-event template and does not depend on the rate table at all.

    `band` selects which expected band lo/hi carry, "68" or "95". The winning epsilon is picked
    on the MEDIAN either way, so the two bands are mutually consistent and can be drawn together
    by calling this twice.

    Returns (m_tev, med, lo, hi, eps_best), with med/lo/hi already in the requested metric.
    """
    if band not in ("68", "95"):
        raise ValueError(f"band must be '68' or '95', got {band!r}")
    idx_lo, idx_hi = (1, 2) if band == "68" else (3, 4)
    areas, masses_gev, table = read_rate_table(signals)
    eps_grid = sorted(table)
    scale = REFERENCE_EVENTS / livetime
    rlim, extrap = r_limit_lookup(areas, masses_gev, extrapolate)

    m_tev, med_o, lo_o, hi_o, eps_o, ex_o = [], [], [], [], [], []
    for idx, (area, mass_gev) in enumerate(zip(areas, masses_gev)):
        lim = rlim.get(mass_gev)
        if lim is None:
            continue
        mt = mass_gev / 1000.
        best = None
        for eps in eps_grid:
            rate = table[eps][idx]
            if rate <= 0 or not np.isfinite(rate):
                continue
            trio = [ALPHA_MAX(mt) * lim[i] * scale / rate for i in (0, idx_lo, idx_hi)]
            if metric == "sigma":
                trio = [sigma_chi_p(a, mt, eps, ma) for a in trio]
            if not np.isfinite(trio[0]) or trio[0] <= 0:
                continue
            if best is None or trio[0] < best[0][0]:
                best = (trio, eps)
        if best is None:
            continue
        (med, lo, hi), eps = best
        m_tev.append(mt); med_o.append(med); lo_o.append(lo); hi_o.append(hi); eps_o.append(eps)
        ex_o.append(mass_gev in extrap)

    if not m_tev:
        raise SystemExit(f"No usable combine limits found for {signals}")
    order = np.argsort(m_tev)
    return tuple(np.array(a)[order] for a in (m_tev, med_o, lo_o, hi_o, eps_o, ex_o))


def benchmark_excluded(signals, livetime, extrapolate=False):
    """Per mass: does ANY epsilon on the grid exclude the model at the alpha_X^max benchmark?

    The sigma-vs-mass curve is defined at every simulated mass, so on its own it cannot say
    where the search actually rules the model out -- a reader sees the same x range whatever
    the yield is. This is the union over epsilon of the (m_chi, epsilon) exclusion windows, and
    it is what changes when the yield changes: with 55x more signal the excluded band extends
    to much lower mass. Returns (m_tev, mask).
    """
    areas, masses_gev, table = read_rate_table(signals)
    scale = REFERENCE_EVENTS / livetime
    rlim, _ = r_limit_lookup(areas, masses_gev, extrapolate)

    m_tev, mask = [], []
    for idx, (area, mass_gev) in enumerate(zip(areas, masses_gev)):
        lim = rlim.get(mass_gev)
        if lim is None:
            continue
        mt = mass_gev / 1000.
        hit = False
        for eps in table:
            rate = table[eps][idx]
            if rate <= 0 or not np.isfinite(rate):
                continue
            # Excluded when the benchmark coupling is above the coupling the fit can exclude.
            if ALPHA_MAX(mt) > ALPHA_MAX(mt) * lim[0] * scale / rate:
                hit = True
                break
        m_tev.append(mt)
        mask.append(hit)
    order = np.argsort(m_tev)
    return np.array(m_tev)[order], np.array(mask)[order]


def main():
    parser = argparse.ArgumentParser(description=__doc__,
                                     formatter_class=argparse.RawDescriptionHelpFormatter)
    parser.add_argument("-s", "--signals", required=True, help="signals/rate table (alpha_max.txt)")
    parser.add_argument("-c", "--compare", help="second rate table to overlay (e.g. the tracker one)")
    parser.add_argument("--label", default="Nominal rates")
    parser.add_argument("--compare-label", default="Tracker only filter")
    parser.add_argument("-L", "--livetime", type=float, default=20.7, help="months")
    parser.add_argument("-e", "--epsilon", type=float, default=4e-08)
    parser.add_argument("--ma", type=float, default=0.23,
                        help="Dark photon mass in GeV, for the annotation. Must match the --ma the "
                             "rate table was built with. Default 0.23.")
    parser.add_argument("--alpha-curve", action="append", default=[], metavar="COEFF:EXP:LABEL",
                        help="Extra benchmark alpha_X = COEFF*(m/TeV)^EXP to overlay, repeatable. "
                             "Relic abundance gives <sigma v> ~ alpha^2/m^2 = const, i.e. EXP=1; "
                             "anything steeper is not a relic-abundance curve.")
    parser.add_argument("--hide-benchmarks", action="store_true",
                        help="Drop the two benchmark coupling lines (CMB-bound and relic). They are "
                             "drawn by default; the excluded coupling itself does not depend on them.")
    parser.add_argument("--yaxis", choices=["alpha", "sigma"], default="alpha",
                        help="Vertical axis: 'alpha' (default) is the dark coupling alpha_X; "
                             "'sigma' converts it to the spin-independent DM-proton cross section "
                             "in cm^2, the direct-detection plane. The conversion is exact given "
                             "epsilon and m_A' (see sigma_chi_p) and monotonic, so the excluded "
                             "region and the bands are the same points on a rescaled axis.")
    parser.add_argument("--envelope", action="store_true",
                        help="Instead of one epsilon, plot the envelope over the whole epsilon "
                             "grid: at each mass the strongest limit any epsilon reaches. Not a "
                             "constant-epsilon contour -- the winning epsilon is printed and "
                             "annotated. Ignores -e/--epsilon and --compare.")
    parser.add_argument("-o", "--outdir", default="figures")
    args = parser.parse_args()

    sigma_mode = args.yaxis == "sigma"
    if args.envelope:
        m, med, lo, hi, eps_best, _is_extrap = best_over_epsilon(
            args.signals, args.livetime, args.ma, "sigma" if sigma_mode else "alpha")
        eps = None
        # med/lo/hi already carry the requested metric, and each mass has its own winning
        # epsilon, so the single-epsilon transform below must not be applied to them again.
        Y = (lambda alpha, mass: sigma_chi_p(alpha, mass,
                                             np.interp(mass, m, eps_best), args.ma)) if sigma_mode \
            else (lambda alpha, mass: np.asarray(alpha, dtype=float))
    else:
        eps, m, med, lo, hi = excluded_alpha(args.signals, args.epsilon, args.livetime)
        # One transform for every curve on the canvas, so the y axis cannot disagree with itself.
        Y = (lambda alpha, mass: sigma_chi_p(alpha, mass, eps, args.ma)) if sigma_mode \
            else (lambda alpha, mass: np.asarray(alpha, dtype=float))
    # In envelope mode med/lo/hi already carry the requested metric (each at its own winning
    # epsilon), so only the benchmark curves go through Y; applying it to the data too would
    # convert alpha->sigma a second time.
    Ydata = (lambda v, mass: np.asarray(v, dtype=float)) if args.envelope else Y

    # The alpha panel's fixed 1e-3..1e6 window, carried through the same transform so both
    # variants frame the identical physical range. mu is flat in mass, so a reference mass is
    # enough to fix the limits.
    m_ref = np.sqrt(min(m) * max(m))
    y_lo, y_hi = Y(1e-3, m_ref), Y(1e6, m_ref)

    fig, ax = plt.subplots(figsize=(10, 10))          # square, per the plotting convention
    ax.fill_between(m, Ydata(lo, m), Ydata(hi, m), color="#FFDF7F", alpha=0.9, lw=0, zorder=2,
                    label=r"68% expected")
    med_label = r"Median expected $\sigma_{\chi p}^{\,\mathrm{excl}}$" if sigma_mode \
        else r"Median expected $\alpha_\chi^{\,\mathrm{excl}}$"
    if args.envelope:
        med_label += r"  (best over $\epsilon$)"
    ax.plot(m, Ydata(med, m), "k--", lw=2.5, zorder=4, label=med_label)
    ax.fill_between(m, Ydata(med, m), y_hi, color="0.85", alpha=0.55, lw=0, zorder=1)
    ax.text(0.60, 0.86, "Excluded", transform=ax.transAxes, fontsize=22,
            color="0.35", rotation=0, zorder=5)

    if args.compare and not args.envelope:
        eps_c, m_c, med_c, _, _ = excluded_alpha(args.compare, args.epsilon, args.livetime)
        ax.plot(m_c, Y(med_c, m_c), ls="--", color="#C0504D", lw=2.5, zorder=4,
                label=args.compare_label)

    grid = np.logspace(np.log10(min(m)), np.log10(max(m)), 200)
    # Benchmark lines are labelled by their formula alone -- no ^max / ^therm superscripts, which
    # name a scenario rather than say what is plotted.
    if not args.hide_benchmarks:
        ax.plot(grid, Y(ALPHA_MAX(grid), grid), color="#5B9BD5", lw=2, zorder=3,
                label=r"$\alpha_\chi=0.17\,(m_\chi/\mathrm{TeV})^{1.61}$")
        ax.plot(grid, Y(ALPHA_THERMAL(grid), grid), color="#70AD47", lw=2, ls=":", zorder=3,
                label=r"$\alpha_\chi=0.0244\,(m_\chi/\mathrm{TeV})$")
    # Extra "coeff:exponent:label" benchmarks, e.g. --alpha-curve 0.0244:2:quadratic to ask what a
    # steeper mass dependence would look like against the same exclusion.
    for spec, color in zip(args.alpha_curve, ["#7030A0", "#ED7D31", "#C00000"]):
        try:
            coeff, expo, lab = spec.split(":", 2)
            coeff, expo = float(coeff), float(expo)
        except ValueError:
            raise SystemExit(f"--alpha-curve wants coeff:exponent:label, got {spec!r}")
        ax.plot(grid, Y(coeff * grid ** expo, grid), color=color, lw=2, ls=(0, (5, 2, 1, 2)),
                zorder=3, label=rf"$\alpha_\chi={coeff:g}\,(m_\chi/\mathrm{{TeV}})^{{{expo:g}}}$")
    # alpha_X = 1 is the perturbativity boundary the theory correspondence flags: above it the Born
    # approximation behind the annihilation rate breaks down. In sigma it is a line rather than a
    # constant only through mu(m_chi), which is flat here, so it reads as horizontal either way.
    ax.plot(grid, Y(np.ones_like(grid), grid), color="k", lw=1.6, ls="-.", zorder=3)
    ax.text(1.05 * min(m), Y(1.25, 1.05 * min(m)), r"$\alpha_\chi=1$ (perturbativity)",
            fontsize=17, va="bottom")

    ax.set_xscale("log")
    ax.set_yscale("log")
    ax.set_xlabel(r"$m_\chi$ [TeV]")
    ax.set_ylabel(r"$\sigma_{\chi p}^{\mathrm{SI}}$ [cm$^2$]" if sigma_mode else r"$\alpha_\chi$")
    ax.set_xlim(min(m), max(m))
    ax.set_ylim(y_lo, y_hi)
    eps_note = (rf"$\epsilon$ envelope {eps_best.min():.3g}-{eps_best.max():.3g}"
                if args.envelope else rf"$\epsilon = {eps:.3g}$")
    ax.text(0.04, 0.94, rf"$m_{{A'}} = {args.ma:g}$ GeV" "\n" + eps_note,
            transform=ax.transAxes, fontsize=21, va="top")
    ax.legend(loc="lower right", fontsize=15, framealpha=0.95)
    # fontsize is explicit: at the default the "Work in Progress" tag and the right-hand livetime
    # label collide on a square 10x10 canvas.
    hep.cms.label("Work in Progress", data=True, loc=0, ax=ax, fontsize=17,
                  rlabel=f"Run 3 Cosmics ({args.livetime:g} month)")

    os.makedirs(args.outdir, exist_ok=True)
    stem = os.path.basename(args.signals).replace("_alpha_max.txt", "")
    prefix = "ExcludedSigma" if sigma_mode else "ExcludedAlpha"
    eps_tag = "envelope" if args.envelope else f"{eps:.3g}"
    base = os.path.join(args.outdir, f"{prefix}_mX_{stem}_livetime_{args.livetime:g}"
                                     f"_eps_{eps_tag}")
    for ext in ("pdf", "png"):
        fig.savefig(f"{base}.{ext}", bbox_inches="tight")
    print(f"Wrote {base}.pdf / .png")

    if args.envelope:
        best = int(np.argmin(med))
        unit = "cm^2" if sigma_mode else ""
        print(f"envelope over {len(m)} mass points; winning epsilon "
              f"{eps_best.min():.3g} to {eps_best.max():.3g}")
        print(f"strongest {med[best]:.3g} {unit} at m_chi = {m[best]:g} TeV")
    else:
        frac = np.mean(med > 1.0)
        print(f"epsilon used: {eps:.4g}  ({len(m)} mass points)")
        print(f"alpha_excluded spans {med.min():.3g} to {med.max():.3g}; "
              f"{100*frac:.0f}% of mass points need a non-perturbative coupling")
        if sigma_mode:
            sig = sigma_chi_p(med, m, eps, args.ma)
            best = int(np.argmin(sig))
            print(f"sigma_chi-p excluded spans {sig.min():.3g} to {sig.max():.3g} cm^2; "
                  f"strongest {sig[best]:.3g} cm^2 at m_chi = {m[best]:g} TeV")


if __name__ == "__main__":
    main()
