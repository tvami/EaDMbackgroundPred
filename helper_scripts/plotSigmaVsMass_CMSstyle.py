"""Result figure: EaDM cosmic-muon exclusion on the direct-detection (m_chi, sigma_SI) plane.

This is the RESULT plot, drawn CMS-style: median expected with the 68% and 95% expected bands in
the usual green/yellow, over the current WIMP-nucleon limits as recessive gray context.

It is deliberately narrower in scope than plotSigmaVsMass_withDD.py, which is the exploratory
version. Here:

* only the `_tracker` rates are shown -- the cosmicInTracker gen filter is part of the signal
  acceptance, so those are the analysis result. Full-CMS-volume rates are a projection of what a
  muon-system selection could reach and are not drawn on a result figure.
* no grid lines and no signal-MC truncation marker, so nothing on the canvas competes with the
  bands.

The curve is the envelope over epsilon: at each mass, the smallest sigma any epsilon on the grid
excludes. Epsilon fixes both the scattering cross section and the dark photon decay length, so
unlike a direct-detection limit the exclusion is not a function of sigma alone and no single
epsilon is best at every mass. The spanned epsilon range is printed on the figure.

Usage (from .../CMSSW_14_1_0_pre4/src, cmsenv only -- do NOT source twoD-env, it shadows mplhep):
    python3 helper_scripts/plotSigmaVsMass_CMSstyle.py \
        -s exp_lim/signal_<...>_tracker_core_to1000_alpha_max.txt -L 20.7
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
import load_dd                                                    # noqa: E402
from plotExcludedAlphaVsMass import best_over_epsilon             # noqa: E402
from plotSigmaVsMass_withDD import DD_CURVES, DD_GRAY, DD_INK     # noqa: E402

plt.style.use(hep.style.CMS)

# The band colors used by the analysis' own 1D limit plots (exp_lim/set_limit_alphaMax.py
# lines 478-485), so the two figures read as one set: mplhep-recommended blue/gold rather than
# the green/yellow Brazil bands.
BAND_95 = "#85D1FB"     # +-2 sigma expected, blue
BAND_68 = "#FFDF7F"     # +-1 sigma expected, gold
MEDIAN = "black"        # median expected, dashed


def main():
    parser = argparse.ArgumentParser(description=__doc__,
                                     formatter_class=argparse.RawDescriptionHelpFormatter)
    parser.add_argument("-s", "--signals", required=True,
                        help="rate table (alpha_max.txt); should be a _tracker one")
    parser.add_argument("-L", "--livetime", type=float, default=20.7, help="months")
    parser.add_argument("--ma", type=float, default=0.23, help="m_A' in GeV, must match the table")
    parser.add_argument("--no-fog", action="store_true", help="omit the neutrino fog band")
    parser.add_argument("--extend-fog", action="store_true",
                        help="continue the neutrino fog above its published 10 TeV endpoint as "
                             "sigma ~ m_chi. Measured slope of O'Hare's own curve over its top "
                             "decade is 0.996, which is the expected 1/n_chi scaling, so this is "
                             "a continuation rather than a guess -- but it is OUR extension of a "
                             "published curve, so it is drawn dashed and unfilled-edged.")
    parser.add_argument("--extrapolate", action="store_true",
                        help="extend below the signal-MC grid by extrapolating combine's r as a "
                             "power law in mass (see r_limit_lookup). Drawn hatched with a dotted "
                             "median because it is a reach estimate, not a measured limit.")
    parser.add_argument("--legend-title", default="This work",
                        help='header line of the legend box (default "This work")')
    parser.add_argument("-o", "--outdir", default="figures")
    parser.add_argument("--name", default="SigmaVsMass_CMSstyle", help="output file stem")
    args = parser.parse_args()

    if "_tracker" not in os.path.basename(args.signals):
        print(f"WARNING: {os.path.basename(args.signals)} is not a _tracker rate table. This "
              "figure is meant to show the analysis result, which includes the cosmicInTracker "
              "acceptance.")

    fig, ax = plt.subplots(figsize=(10, 10))          # square, per the plotting convention

    # ---- context: direct detection, recessive, never extrapolated ----------------------
    for stem, x_lab, dy, override in DD_CURVES:
        mass, sigma, label = load_dd.load(stem)
        ax.plot(mass, sigma, color=DD_GRAY, lw=1.6, zorder=2)
        ax.text(x_lab, np.interp(x_lab, mass, sigma) * dy, override or label, color=DD_INK,
                fontsize=11.5, ha="center", va="center", zorder=6,
                bbox=dict(boxstyle="round,pad=0.13", fc="white", ec="none", alpha=0.8))

    if not args.no_fog:
        mass, fog, _ = load_dd.load("nufog_OHare_2021_2109.03116", column="nufloor")
        if args.extend_fog:
            # sigma ~ m_chi: the DM number density falls as 1/m_chi, so a fixed neutrino-limited
            # event rate needs a proportionally larger cross section. Slope fitted on the file's
            # own top decade is 0.996 (and 0.996 for the nufog_2d5 / nufog_3d0 contours too), so
            # this continues the curve's measured behavior and is drawn as one seamless band.
            m_ext = np.logspace(np.log10(mass.max()), 6, 120)[1:]
            mass = np.concatenate([mass, m_ext])
            fog = np.concatenate([fog, fog[-1] * (m_ext / m_ext[0])])
        ax.fill_between(mass, 1e-52, fog, color="0.74", alpha=0.5, lw=0, zorder=1)
        ax.text(20., 1.2e-49, "Neutrino fog", color=DD_INK, fontsize=12, ha="center", zorder=6)

    # ---- the result: median + 68% + 95% expected -----------------------------------------
    # Two calls, one per band. best_over_epsilon picks the winning epsilon on the MEDIAN in both,
    # so the bands are nested consistently rather than each optimising its own edge.
    m, med, lo68, hi68, eps_best, is_ex = best_over_epsilon(
        args.signals, args.livetime, args.ma, "sigma", args.extrapolate, band="68")
    _, med95, lo95, hi95, _, _ = best_over_epsilon(
        args.signals, args.livetime, args.ma, "sigma", args.extrapolate, band="95")
    if not np.allclose(med, med95):
        raise SystemExit("the two band calls disagree on the median -- they are not comparable")

    m_gev = m * 1000.
    # Bands and median are drawn in one uninterrupted style across the whole mass range, so
    # NOTHING on the canvas marks where the signal MC stops (2 TeV) and the power-law
    # extrapolation of combine's r begins. With --extrapolate the sub-2-TeV section is a reach
    # estimate, not a measured limit, and r there almost certainly degrades faster than the
    # fitted power law -- so the caption has to carry that caveat instead.
    is_ex = np.asarray(is_ex, dtype=bool)
    if is_ex.any():
        print(f"  NOTE: {int(is_ex.sum())} extrapolated mass point(s) below "
              f"{m[~is_ex].min():g} TeV are drawn identically to the measured ones")

    ax.fill_between(m_gev, lo95, hi95, color=BAND_95, lw=0, zorder=3, label="95% expected")
    ax.fill_between(m_gev, lo68, hi68, color=BAND_68, lw=0, zorder=4, label="68% expected")
    ax.plot(m_gev, med, color=MEDIAN, ls="--", lw=2.5, zorder=6, label="Median expected")



    ax.set_xscale("log")
    ax.set_yscale("log")
    # Starts at 0.1 GeV: that is where the neutrino fog begins, so nothing below it carries
    # context for this result. The three sub-100-MeV curves (QROCODILE from 15 MeV, TESSERACT
    # from 30 MeV, CRESST-III from 73 MeV) get clipped on the left, but every direct label is
    # anchored at 0.16 GeV or above, so all of them stay named on the canvas.
    ax.set_xlim(1e-1, 1e6)
    ax.set_ylim(1e-50, 1e-29)
    ax.set_xlabel(r"$m_\chi$ [GeV]")
    ax.set_ylabel(r"$\sigma^{\mathrm{SI}}_{\chi N}$ [cm$^2$]")
    # Model line sits directly above the legend box, both flush to the same right edge, so the
    # two read as one block: what was assumed, then what was measured.
    ax.text(0.985, 0.955, rf"$m_{{A'}} = {args.ma:g}$ GeV,  $F_{{\mathrm{{DM}}}} = 1$",
            transform=ax.transAxes, fontsize=17, ha="right", va="top", zorder=7)
    leg = ax.legend(loc="upper right", bbox_to_anchor=(0.99, 0.915),
                    bbox_transform=ax.transAxes, fontsize=15, framealpha=0.95,
                    title=args.legend_title)
    leg.get_title().set_fontsize(17)
    leg.get_title().set_fontweight("bold")
    hep.cms.label("Work in Progress", data=True, loc=0, ax=ax, fontsize=17,
                  rlabel=f"Run 3 Cosmics ({args.livetime:g} month)")

    os.makedirs(args.outdir, exist_ok=True)
    base = os.path.join(args.outdir, args.name)
    for ext in ("pdf", "png"):
        fig.savefig(f"{base}.{ext}", bbox_inches="tight")
    print(f"Wrote {base}.pdf / .png")
    best = int(np.argmin(med))
    print(f"  median expected: strongest {med[best]:.3g} cm^2 at m_chi = {m[best]:g} TeV")
    print(f"  at that mass: 68% [{lo68[best]:.3g}, {hi68[best]:.3g}], "
          f"95% [{lo95[best]:.3g}, {hi95[best]:.3g}] cm^2")
    print(f"  winning epsilon spans {eps_best.min():.3g} to {eps_best.max():.3g}")


if __name__ == "__main__":
    main()
