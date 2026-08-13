"""The EaDM cosmic-muon exclusion on the standard direct-detection (m_chi, sigma_SI) plane.

Puts the recast of helper_scripts/plotExcludedAlphaVsMass.py --yaxis sigma next to the current
WIMP-nucleon limits, so the search can be read against the direct-detection frontier. The
context curves are vendored under helper_scripts/dd_limits/ -- see the README there for
provenance and for the per-file column trap that load_dd.py exists to defuse.

Two things make this plot different from the textbook version, and both are deliberate:

* The x axis runs to 1e6 GeV. Direct detection stops at ~10 TeV; the EaDM signal only exists
  ABOVE ~2 TeV, so the two live in nearly disjoint mass ranges and the usual 1e-2..1e4 GeV
  window would show none of this result. Every DD curve is drawn over its own support only and
  is never extrapolated past its last published point.
* By default the EaDM curve is the ENVELOPE over epsilon -- at each mass, the smallest sigma
  any epsilon can exclude. In this model epsilon fixes both the scattering cross section AND
  the dark photon decay length, so, unlike a DD limit, the exclusion is not a function of sigma
  alone and no single epsilon is best everywhere. The envelope is the fair one-curve summary;
  pass -e to draw fixed-epsilon slices instead.

Design: the DD curves are context, so they are recessive gray and carry identity in direct
labels rather than in hue (as on the reference figure). Color is spent only on the result. The
two EaDM hues pass all six checks of the palette validator (CVD dE 16.1 protan, 24.9 normal).

Usage (from .../CMSSW_14_1_0_pre4/src, cmsenv only -- do NOT source twoD-env, it shadows mplhep):
    python3 helper_scripts/plotSigmaVsMass_withDD.py \
        -s exp_lim/signal_<...>_tracker_core_to1000_alpha_max.txt -L 20.7 -e 2e-08 -e 5e-08
"""

import argparse
import os
import sys

import matplotlib
matplotlib.use("Agg")
import matplotlib.pyplot as plt
import mplhep as hep
import numpy as np

sys.path.insert(0, os.path.join(os.path.dirname(os.path.abspath(__file__)), "dd_limits"))
import load_dd                                                          # noqa: E402
from plotExcludedAlphaVsMass import (benchmark_excluded, best_over_epsilon,   # noqa: E402
                                     excluded_alpha, sigma_chi_p)

plt.style.use(hep.style.CMS)

# (metadata stem, mass in GeV anchoring the direct label, multiplicative y offset, label text
# or None to take it from the metadata). The anchor is chosen where the curve is locally flat
# and uncrowded and the offset lifts the text clear of the line; a few metadata labels are
# overridden because their parenthetical qualifiers are long enough to collide in the crowded
# sub-GeV corner. Every placement is checked on the rendered PNG, per step 7 of the method.
DD_CURVES = [
    ("WIMPSI_LZ_2024_2410.17036",                      2.2e3,  0.40, None),
    ("WIMPSI_XENONnT_2025_2502.18005",                 2.2e2,  3.6,  None),
    ("WIMPSI_PandaX_4T_2025_2408.00664",               4.5e3,  3.4,  None),
    ("WIMPSI_DarkSide50_2018_lowE_noquench",           9.0e0,  0.22, "DarkSide-50"),
    ("WIMPSI_DAMIC_2020",                              1.3e0,  4.5,  None),
    ("WIMPSI_CRESST_2405.06527",                       1.6e-1, 5.0,  "CRESST-III"),
    ("WIMPSI_TESSERACT_2025_2503.03683",               5.0e-1, 0.16, "TESSERACT"),
    ("WIMPSI_QROCODILE_2025_2412.16279_heavymediator", 2.2e0,  2.2,  "QROCODILE"),
]
DD_GRAY = "#8C8C8C"
DD_INK = "#4F4F4F"
EADM_COLORS = ["#C0504D", "#2E75B6"]   # validated: see module docstring


def main():
    parser = argparse.ArgumentParser(description=__doc__,
                                     formatter_class=argparse.RawDescriptionHelpFormatter)
    parser.add_argument("-s", "--signals", required=True, help="rate table (alpha_max.txt)")
    parser.add_argument("-e", "--epsilon", action="append", type=float, default=[],
                        help="draw fixed-epsilon curves instead of the envelope, repeatable")
    parser.add_argument("-L", "--livetime", type=float, default=20.7, help="months")
    parser.add_argument("--ma", type=float, default=0.23, help="m_A' in GeV, must match the table")
    parser.add_argument("--no-fog", action="store_true", help="omit the neutrino fog band")
    parser.add_argument("--extrapolate", action="store_true",
                        help="Extend below the 2 TeV signal-MC floor by power-law extrapolating "
                             "combine's r. Drawn as a distinct thin/dotted section: it is an "
                             "optimistic bound on the reach, not a limit. See r_limit_lookup().")
    parser.add_argument("-o", "--outdir", default="figures")
    parser.add_argument("-c", "--compare", help="second rate table to overlay (envelope mode)")
    parser.add_argument("--label", default="This search", help="legend label for --signals")
    parser.add_argument("--compare-label", default="Comparison", help="legend label for --compare")
    parser.add_argument("--name", default="SigmaVsMass_withDD", help="output file stem")
    args = parser.parse_args()

    fig, ax = plt.subplots(figsize=(10, 10))          # square, per the plotting convention

    # ---- context: direct detection, recessive, never extrapolated ----------------------
    for stem, x_lab, dy, override in DD_CURVES:
        mass, sigma, label = load_dd.load(stem)
        ax.plot(mass, sigma, color=DD_GRAY, lw=1.6, zorder=2)
        y_lab = np.interp(x_lab, mass, sigma) * dy
        ax.text(x_lab, y_lab, override or label, color=DD_INK, fontsize=11.5,
                ha="center", va="center",
                zorder=6, bbox=dict(boxstyle="round,pad=0.13", fc="white", ec="none", alpha=0.8))

    if not args.no_fog:
        mass, fog, _ = load_dd.load("nufog_OHare_2021_2109.03116", column="nufloor")
        ax.fill_between(mass, 1e-52, fog, color="0.74", alpha=0.5, lw=0, zorder=1)
        ax.text(20., 1.2e-49, "Neutrino fog", color=DD_INK, fontsize=12, ha="center", zorder=6)

    # ---- the result --------------------------------------------------------------------
    # excluded_alpha and best_over_epsilon both return TeV; this plane is in GeV, so every EaDM
    # x goes through m_gev.
    summary = []
    if args.epsilon:
        for eps_req, color in zip(args.epsilon, EADM_COLORS):
            eps, m_tev, med, lo, hi = excluded_alpha(args.signals, eps_req, args.livetime)
            sig = sigma_chi_p(med, m_tev, eps, args.ma)
            ax.fill_between(m_tev * 1000., sigma_chi_p(lo, m_tev, eps, args.ma),
                            sigma_chi_p(hi, m_tev, eps, args.ma),
                            color=color, alpha=0.22, lw=0, zorder=3)
            ax.plot(m_tev * 1000., sig, color=color, lw=3, zorder=5,
                    label=rf"This search, $\epsilon = {eps:.3g}$")
            summary.append((f"eps={eps:.3g}", sig.min(), m_tev[int(np.argmin(sig))]))
    else:
        tables = [(args.signals, args.label, EADM_COLORS[0])]
        if args.compare:
            tables.append((args.compare, args.compare_label, EADM_COLORS[1]))
        for order, (path, label, color) in enumerate(tables):
            m_tev, sig, lo, hi, eps_best, is_ex = best_over_epsilon(
                path, args.livetime, args.ma, "sigma", args.extrapolate)
            m_gev = m_tev * 1000.
            ax.fill_between(m_gev, lo, hi, color=color, alpha=0.20, lw=0, zorder=3)

            # Solid where some epsilon actually excludes the alpha_X^max benchmark, faded where
            # the curve is only a quoted cross section. This is the part that moves with the
            # yield: the same x range is drawn either way, but the excluded band is what grows.
            mm, mask = benchmark_excluded(path, args.livetime, args.extrapolate)
            keep = dict(zip(np.round(mm, 6), mask))
            seg = np.array([keep.get(round(v, 6), False) for v in m_tev])
            solid = seg & ~is_ex
            ax.plot(m_gev, sig, color=color, lw=2, ls=(0, (4, 2)), alpha=0.55, zorder=4)
            ax.plot(np.where(solid, m_gev, np.nan), np.where(solid, sig, np.nan),
                    color=color, lw=3.5, zorder=5, label=label)
            if is_ex.any():
                # Bridge one point into the measured region so the two sections join up.
                span = is_ex | (np.cumsum(~is_ex) == 1)
                ax.plot(np.where(span, m_gev, np.nan), np.where(span, sig, np.nan),
                        color=color, lw=2.2, ls=(0, (1, 1.6)), zorder=5,
                        label=r"$\hookrightarrow$ extrapolated $r$")
            if seg.any():
                x_on = m_gev[seg][0]
                ax.axvline(x_on, color=color, lw=1.4, ls=":", alpha=0.8, zorder=4)
                # Stagger vertically: the two onsets are close in x and their labels collide.
                ax.text(x_on * 1.15, [2.5e-30, 1.2e-32][order % 2],
                        f"excludes\nfrom {m_tev[seg][0]:g} TeV",
                        color=color, fontsize=12.5, ha="left", va="top", zorder=7)
                print(f"  {label}: benchmark excluded from {m_tev[seg][0]:g} TeV "
                      f"({int(seg.sum())}/{len(seg)} masses)")
            summary.append((label, sig.min(), m_tev[int(np.argmin(sig))]))
            print(f"  {label}: winning epsilon {eps_best.min():.3g} to {eps_best.max():.3g}")

    # Note: both curves stop at 2 TeV because that is the lowest simulated DM mass
    # (template Signal_M1000GeV = muon pT m_chi/2). That edge is set by the signal MC, NOT by
    # the search losing sensitivity -- the envelope is still falling there.
    ax.set_xscale("log")
    ax.set_yscale("log")
    ax.set_xlim(1e-2, 1e6)
    ax.set_ylim(1e-50, 1e-29)
    ax.set_xlabel(r"$m_\chi$ [GeV]")
    ax.set_ylabel(r"$\sigma^{\mathrm{SI}}_{\chi N}$ [cm$^2$]")
    ax.grid(True, which="major", color="0.92", lw=0.6, zorder=0)
    ax.text(0.42, 0.93,
            "Dark photon recast\n" rf"$m_{{A'}} = {args.ma:g}$ GeV,  $F_{{\mathrm{{DM}}}} = 1$",
            transform=ax.transAxes, fontsize=17, va="top", zorder=7)
    ax.legend(loc="lower right", fontsize=14, framealpha=1.0, borderpad=0.6)
    hep.cms.label("Work in Progress", data=True, loc=0, ax=ax, fontsize=17,
                  rlabel=f"Run 3 Cosmics ({args.livetime:g} month)")

    os.makedirs(args.outdir, exist_ok=True)
    base = os.path.join(args.outdir, args.name)
    for ext in ("pdf", "png"):
        fig.savefig(f"{base}.{ext}", bbox_inches="tight")
    print(f"Wrote {base}.pdf / .png")
    for tag, smin, mbest in summary:
        print(f"  {tag}: strongest sigma = {smin:.3g} cm^2 at m_chi = {mbest:g} TeV")


if __name__ == "__main__":
    main()
