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
from plotExcludedAlphaVsMass import best_over_epsilon, best_observed_over_epsilon  # noqa: E402
from plotSigmaVsMass_withDD import DD_CURVES, DD_GRAY, DD_INK     # noqa: E402

plt.style.use(hep.style.CMS)

# The band colors used by the analysis' own 1D limit plots (exp_lim/set_limit_alphaMax.py
# lines 478-485), so the two figures read as one set: mplhep-recommended blue/gold rather than
# the green/yellow Brazil bands.
BAND_95 = "#85D1FB"     # +-2 sigma expected, blue
BAND_68 = "#FFDF7F"     # +-1 sigma expected, gold
MEDIAN = "black"        # median expected, dashed

# Capture kinematics, as in DarkCapPy (DarkPhoton.EminEmaxIntersection): a single elastic scatter
# can capture chi only if it arrives slower than u_int = v_esc * sqrt(B / (A - B)), with
# A = m_chi/2, B = 2 mu^2 / m_N. Iron dominates the capture, and the core has the largest v_esc.
M_FE_GEV = 55.845 * 0.93149
M_XE_GEV = 131.29 * 0.93149
VESC_CORE_KMS = 14.97       # max of sqrt(escVel2_List) in DarkCapPy PlanetData
C_KMS = 2.998e5

# Label anchors used with --dd-mass-cut for the curves whose default anchor lies above the cut.
DD_LABELS_CUT = {
    "WIMPSI_LZ_2024_2410.17036":        (55., 0.25),
    "WIMPSI_XENONnT_2025_2502.18005":   (30., 80.),
    "WIMPSI_PandaX_4T_2025_2408.00664": (65., 5.0),
}


# --proton-only: the dark photon couples to the EM current, i.e. to protons only (f_n = 0),
# whereas the published SI limits assume f_p = f_n and are quoted per nucleon. At fixed rate
# sigma_p(f_n=0) = sigma_p(f_p=f_n) * sum_i n_i A_i^2 / sum_i n_i Z_i^2 (number-weighted over the
# target nuclei; mu_N^2 factors cancel for a single element and for m_chi << m_N in compounds).
def _a2_over_z2(nuclei):
    """nuclei: [(number fraction, A, Z)]"""
    return sum(n * a * a for n, a, z in nuclei) / sum(n * z * z for n, a, z in nuclei)


TARGETS = {
    "Xe":      _a2_over_z2([(1, 131.293, 54)]),
    "Ar":      _a2_over_z2([(1, 39.948, 18)]),
    "Si":      _a2_over_z2([(1, 28.0855, 14)]),
    "Al2O3":   _a2_over_z2([(2, 26.9815, 13), (3, 15.999, 8)]),     # CRESST SOS: sapphire only
    "W45Si55": _a2_over_z2([(0.45, 183.84, 74), (0.55, 28.0855, 14)]),  # QROCODILE WSi film
}
DD_TARGET = {
    "WIMPSI_LZ_2024_2410.17036":                      "Xe",
    "WIMPSI_XENONnT_2025_2502.18005":                 "Xe",
    "WIMPSI_PandaX_4T_2025_2408.00664":               "Xe",
    "WIMPSI_DarkSide50_2018_lowE_noquench":           "Ar",
    "WIMPSI_DAMIC_2020":                              "Si",
    "WIMPSI_CRESST_2405.06527":                       "Al2O3",
    "WIMPSI_TESSERACT_2025_2503.03683":               "Si",
    "WIMPSI_QROCODILE_2025_2412.16279_heavymediator": "W45Si55",
    "nufog_OHare_2021_2109.03116":                    "Xe",    # O'Hare 2021 fog is for xenon
}


def capture_speed_kms(m_gev):
    """Largest halo speed (Earth frame) at which chi can still be captured on iron."""
    mu = M_FE_GEV * m_gev / (M_FE_GEV + m_gev)
    a, b = m_gev / 2., 2. * mu**2 / M_FE_GEV
    return VESC_CORE_KMS * np.sqrt(b / (a - b))


def max_recoil_xe_kev(m_gev):
    """Largest xenon recoil a chi moving at the capture speed can produce."""
    mu = M_XE_GEV * m_gev / (M_XE_GEV + m_gev)
    return 2. * mu**2 * (capture_speed_kms(m_gev) / C_KMS)**2 / M_XE_GEV * 1e6


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
    parser.add_argument("--dd-mass-cut", type=float, default=None, metavar="GEV",
                        help="draw the direct-detection curves and the neutrino fog only below this "
                             "mass. Above ~100 GeV the chi that the Earth can capture recoils off "
                             "xenon below 1 keV (printed at runtime), so a detector cannot see that "
                             "population. Also prints the captured-chi speed on the figure.")
    parser.add_argument("--dd-show-all", action="store_true",
                        help="with --dd-mass-cut: keep the direct-detection curves and the fog over "
                             "their full published range, and also mark where LZ ends with the "
                             "captured-chi speed there.")
    parser.add_argument("--cms-label", default="Work in Progress",
                        help='text after "CMS" (e.g. "Preliminary")')
    parser.add_argument("--legend-title", default="This work",
                        help='header line of the legend box (default "This work")')
    parser.add_argument("--observed", action="store_true",
                        help="also draw the observed envelope (unblinded areas only)")
    parser.add_argument("--proton-only", action="store_true",
                        help="rescale every direct-detection curve and the (xenon) neutrino fog by "
                             "(A/Z)^2 of its target, converting the isospin-conserving per-nucleon "
                             "limits to a proton-only (f_n = 0) coupling, as for a kinetically mixed "
                             "dark photon")
    parser.add_argument("--lumi-unit", default="month", help='livetime unit (paper: "months")')
    parser.add_argument("--ylabel", default=r"$\sigma^{\mathrm{SI}}_{\chi N}$ [cm$^2$]")
    parser.add_argument("-o", "--outdir", default="figures")
    parser.add_argument("--name", default="SigmaVsMass_CMSstyle", help="output file stem")
    args = parser.parse_args()

    if "_tracker" not in os.path.basename(args.signals):
        print(f"WARNING: {os.path.basename(args.signals)} is not a _tracker rate table. This "
              "figure is meant to show the analysis result, which includes the cosmicInTracker "
              "acceptance.")

    fig, ax = plt.subplots(figsize=(10, 10))          # square, per the plotting convention

    cut = args.dd_mass_cut
    if args.dd_show_all and cut is None:
        raise SystemExit("--dd-show-all needs --dd-mass-cut")
    trim = None if args.dd_show_all else cut      # mass above which DD curves are dropped
    if cut is not None:
        print(f"  direct detection cut at {cut:g} GeV: captured chi has u < "
              f"{capture_speed_kms(cut):.1f} km/s there, max Xe recoil {max_recoil_xe_kev(cut):.2f} keV")

    # ---- context: direct detection, recessive, never extrapolated ----------------------
    dd_scaled = {}
    for stem, x_lab, dy, override in DD_CURVES:
        mass, sigma, label = load_dd.load(stem)
        if args.proton_only:
            if stem.startswith("WIMPSI_QROCODILE"):
                dy = 0.3                                  # below the curve, clear of the frame top
            f = TARGETS[DD_TARGET[stem]]
            sigma = sigma * f
            print(f"  proton-only: {stem} ({DD_TARGET[stem]}) x {f:.3f}")
        dd_scaled[stem] = (mass.copy(), sigma.copy())
        if stem == "WIMPSI_LZ_2024_2410.17036":
            lz_end = mass.max()
        if trim is not None:
            keep = mass <= trim
            if not keep.any():
                continue
            mass, sigma = mass[keep], sigma[keep]
            if x_lab > trim:
                x_lab, dy = DD_LABELS_CUT[stem]
        elif args.dd_show_all and stem == "WIMPSI_PandaX_4T_2025_2408.00664":
            x_lab = 1.5e3                                 # clear of the LZ-end line

        ax.plot(mass, sigma, color=DD_GRAY, lw=1.6, zorder=2)
        ax.text(x_lab, np.interp(x_lab, mass, sigma) * dy, override or label, color=DD_INK,
                fontsize=11.5, ha="center", va="center", zorder=6,
                bbox=dict(boxstyle="round,pad=0.13", fc="white", ec="none", alpha=0.8))

    if not args.no_fog:
        mass, fog, _ = load_dd.load("nufog_OHare_2021_2109.03116", column="nufloor")
        if args.proton_only:
            fog = fog * TARGETS["Xe"]
            print(f"  proton-only: neutrino fog (Xe) x {TARGETS['Xe']:.3f}")
        if args.extend_fog:
            # sigma ~ m_chi: the DM number density falls as 1/m_chi, so a fixed neutrino-limited
            # event rate needs a proportionally larger cross section. Slope fitted on the file's
            # own top decade is 0.996 (and 0.996 for the nufog_2d5 / nufog_3d0 contours too), so
            # this continues the curve's measured behavior and is drawn as one seamless band.
            m_ext = np.logspace(np.log10(mass.max()), 6, 120)[1:]
            mass = np.concatenate([mass, m_ext])
            fog = np.concatenate([fog, fog[-1] * (m_ext / m_ext[0])])
        if trim is not None:
            keep = mass <= trim
            mass, fog = mass[keep], fog[keep]
        ax.fill_between(mass, 1e-52, fog, color="0.74", alpha=0.5, lw=0, zorder=1)
        ax.text(20., 1.2e-49 * (TARGETS["Xe"] if args.proton_only else 1.), "Neutrino fog", color=DD_INK, fontsize=12, ha="center", zorder=6)

    if cut is not None:
        # Boundary above which captured chi recoils below threshold in xenon
        ax.axvline(cut, color=DD_INK, ls=":", lw=1.8, zorder=5)
        ax.text(cut * 1.18, 1e-39,  # up, clear of the scaled LZ/XENONnT/PandaX labels
                rf"Captured $\chi$: $E_R^{{\mathrm{{Xe}}}} < {max_recoil_xe_kev(cut):.0f}$ keV",
                rotation=90, color=DD_INK, fontsize=13, ha="left", va="bottom", zorder=6)
    if args.dd_show_all:
        # End of the published LZ curve, with the captured-chi speed there
        print(f"  LZ ends at {lz_end:g} GeV: captured chi has u < {capture_speed_kms(lz_end):.1f} "
              f"km/s there, max Xe recoil {max_recoil_xe_kev(lz_end) * 1e3:.0f} eV")
        # Stops below the result band, clear of the legend
        ax.vlines(lz_end, 1e-50, 1e-41, color=DD_INK, ls=":", lw=1.8, zorder=5)
        ax.text(lz_end * 1.18, 1.5e-50,
                rf"Captured $\chi$: $u < {capture_speed_kms(lz_end):.1f}$ km/s",
                rotation=90, color=DD_INK, fontsize=13, ha="left", va="bottom", zorder=6)
        ax.text(cut * 1.25, 3e-30, "Captured $\\chi$\nbelow Xe\nthreshold",  # top, next to the E_R line
                color=DD_INK, fontsize=13, ha="left", va="top", zorder=6)

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
    if args.observed:
        m_o, obs, eps_o = best_observed_over_epsilon(args.signals, args.livetime, args.ma, "sigma")
        ax.plot(m_o * 1000., obs, color="black", ls="-", lw=2.5, zorder=7, label="Observed")
        bo = int(np.argmin(obs))
        print(f"  observed: strongest {obs[bo]:.3g} cm^2 at m_chi = {m_o[bo]:g} TeV, "
              f"winning epsilon {eps_o.min():.3g} to {eps_o.max():.3g}")
    # how far below this result the LZ limit sits where both exist
    lz_m, lz_s = dd_scaled["WIMPSI_LZ_2024_2410.17036"]
    for tag, mm, yy in [("expected", m_gev, med)] + ([("observed", m_o * 1000., obs)] if args.observed else []):
        sel = (mm >= lz_m.min()) & (mm <= lz_m.max())
        if sel.any():
            ratio = yy[sel] / np.exp(np.interp(np.log(mm[sel]), np.log(lz_m), np.log(lz_s)))
            print(f"  {tag}/LZ{' (proton-only)' if args.proton_only else ''} over "
                  f"{mm[sel].min():g}-{mm[sel].max():g} GeV: ratio {ratio.min():.3g} to {ratio.max():.3g} "
                  f"(log10 {np.log10(ratio.min()):.2f} to {np.log10(ratio.max()):.2f})")



    ax.set_xscale("log")
    ax.set_yscale("log")
    # Starts at 0.1 GeV: that is where the neutrino fog begins, so nothing below it carries
    # context for this result. The three sub-100-MeV curves (QROCODILE from 15 MeV, TESSERACT
    # from 30 MeV, CRESST-III from 73 MeV) get clipped on the left, but every direct label is
    # anchored at 0.16 GeV or above, so all of them stay named on the canvas.
    ax.set_xlim(1e-1, 1e6)
    ax.set_ylim(1e-50, 1e-29)
    ax.set_xlabel(r"$m_\chi$ [GeV]")
    ax.set_ylabel(args.ylabel)
    # --proton-only scaling is stated in the paper caption, not on the canvas
    # Model line sits directly above the legend box, both flush to the same right edge, so the
    # two read as one block: what was assumed, then what was measured.
    ax.text(0.985, 0.955, rf"$m_{{A'}} = {args.ma:g}$ GeV,  $F_{{\mathrm{{DM}}}} = 1$",
            transform=ax.transAxes, fontsize=17, ha="right", va="top", zorder=7)
    leg_top = 0.915
    if cut is not None:
        # The capture speed falls with mass, so the fastest captured chi is at the lightest point.
        u_max = capture_speed_kms(m_gev.min())
        ax.text(0.985, 0.915, rf"Captured $\chi$: $u < {u_max:.0f}$ km/s",
                transform=ax.transAxes, fontsize=17, ha="right", va="top", zorder=7)
        leg_top = 0.875
    leg = ax.legend(loc="upper right", bbox_to_anchor=(0.99, leg_top),
                    bbox_transform=ax.transAxes, fontsize=15, framealpha=0.95,
                    title=args.legend_title)
    leg.get_title().set_fontsize(17)
    leg.get_title().set_fontweight("bold")
    hep.cms.label(args.cms_label, data=True, loc=0, ax=ax, fontsize=17,
                  rlabel=f"Run 3 Cosmics ({args.livetime:g} {args.lumi_unit})")

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
