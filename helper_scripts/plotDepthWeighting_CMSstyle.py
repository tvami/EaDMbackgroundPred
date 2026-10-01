#!/usr/bin/env python3
"""The six decay-depth weighting figures for AN-23-122 Appendix, in CMS style.

Each panel is written as its own square figure so the AN can place them two per row.
All six are built from the SAME two inputs the analysis itself uses: the per-depth
signal histograms of one input version, and the `dist_from_depths_at_detector`
parquets that `depthFractionCalcScript.py` reads.

  depthWeighting_effVsDepth      the conditional SR efficiency of the generated depths
  depthWeighting_effVsParr       the same points against arriving momentum (collapse fails)
  depthWeighting_looClosure      leave-one-out closure of the log-z interpolation
  depthWeighting_cdfAndEff       f(z) and eps(z) for one mass, with the samples marked
  depthWeighting_weights         less-than / greater-than / continuous weights per sample
  depthWeighting_yieldRatio      less-than / greater-than yield relative to continuous

The depth grid is read from the histograms (keyed by depth in mm, as in
depthWeightsContinuous.py), so the same script serves the six-depth v30 grid and the
v31 grid with 2e5/3e5/5e5; the shell weights are the production ones, D.shell_weights.

Usage (from .../CMSSW_14_1_0_pre4/src, cmsenv; needs pandas + pyarrow + mplhep on PYTHONPATH,
e.g. PYTHONPATH=~/EarthAsDM/earthshine-pylibs:$PYTHONPATH):
    python3 helper_scripts/plotDepthWeighting_CMSstyle.py -H histograms_for_2DAlphabet_v30
    python3 helper_scripts/plotDepthWeighting_CMSstyle.py -H histograms_for_2DAlphabet_v31 \
        -o ../../AN/AN-23-122/Figures/DMModels -s _v31
"""

import argparse
import os
import sys

import matplotlib
matplotlib.use("Agg")
import matplotlib.pyplot as plt          # noqa: E402
import mplhep as hep                     # noqa: E402
import numpy as np                       # noqa: E402

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import depthWeightsContinuous as D       # noqa: E402

plt.style.use(hep.style.CMS)

# Petroff palette, one color+marker per generated depth (in mm), consistent across every figure.
DCOL = {1: "#9C9CA1", 100: "#5790FC", 1000: "#F89C20", 10000: "#E42536",
        100000: "#964A8B", 200000: "#A96B59", 300000: "#92DADD", 500000: "#717581",
        1000000: "#000000"}
DMRK = {1: ".", 100: "o", 1000: "s", 10000: "^", 100000: "D", 200000: "v",
        300000: "P", 500000: "X", 1000000: "*"}
REF_MINP = 2000                                          # m_DM = 4 TeV, the illustration point
ACCENT = "#E42536"
SUFFIX = ""


def zlabel(d):
    """1e5 mm -> '$10^{5}$', 2e5 mm -> '$2\\times10^{5}$'."""
    tag = D.TAG_OF_DEPTH[d]
    k, e = (tag.split("e") + [""])[:2]
    return rf"$10^{{{e}}}$" if not k else rf"${k}\times10^{{{e}}}$"


def grid_depths(grid):
    """Every generated depth present in the grid, shallowest first (mm)."""
    return sorted({d for mp in grid for d in grid[mp] if np.isfinite(grid[mp][d])})


def cms(ax, rlabel="Run 3 Cosmics"):
    # data=False already prints "Simulation", so the extra text must not repeat it
    hep.cms.label("Work in Progress", data=False, loc=0, ax=ax,
                  fontsize=17, rlabel=rlabel)


def save(fig, outdir, name):
    os.makedirs(outdir, exist_ok=True)
    base = os.path.join(outdir, name + SUFFIX)
    for ext in ("pdf", "png"):
        fig.savefig(f"{base}.{ext}", bbox_inches="tight")
    plt.close(fig)
    print(f"  wrote {base}.pdf / .png")


# ---------------------------------------------------------------- the six figures
def fig_eff_vs_depth(grid, outdir):
    """Efficiency of each generated depth. Flat over e2-e4, then all the action."""
    fig, ax = plt.subplots(figsize=(10, 10))
    mp_list = sorted(grid)
    colors = plt.cm.viridis(np.linspace(0, 0.9, len(mp_list)))
    ax.axvspan(1e5, 1.3e6, color="#F89C20", alpha=0.15, zorder=0)
    for c, mp in zip(colors, mp_list):
        d = sorted(k for k in grid[mp] if np.isfinite(grid[mp][k]))
        ax.plot([D.Z_OF_DEPTH[k] for k in d], [grid[mp][k] for k in d],
                "o-", ms=6, lw=1.6, color=c)
    for mp, txt, off in [(1000, r"$P_{\mu}$ = 1 TeV", (8, 8)),
                         (1500, r"1.5 TeV", (-6, 14)),
                         (90000, r"90 TeV", (10, -16))]:
        if mp not in grid:
            continue
        d = sorted(k for k in grid[mp] if np.isfinite(grid[mp][k]))
        ax.annotate(txt, (D.Z_OF_DEPTH[d[-1]], grid[mp][d[-1]]), fontsize=15,
                    xytext=off, textcoords="offset points")
    ax.set_xscale("log")
    ax.set_yscale("log")
    ax.set_ylim(3e-2, 120)
    ax.set_xlim(6e1, 2.2e6)
    ax.set_xlabel(r"Generated decay depth $z$ [mm]")
    ax.set_ylabel(r"SR efficiency [per 100 generated]")
    n_deep = sum(1e5 <= d <= 1e6 for d in grid_depths(grid))
    ax.text(0.04, 0.06,
            f"Shaded: the depth range that carries\nthe weight ({n_deep} generated depths). "
            r"$P_{\mu}$ = 1.5 TeV" "\n" r"dies at $z=10^6$ mm (arrives at 240 GeV)",
            transform=ax.transAxes, fontsize=15, color="0.3")
    cms(ax)
    save(fig, outdir, "depthWeighting_effVsDepth")


def fig_eff_vs_parr(grid, outdir):
    """The same points against arriving momentum. They do not collapse."""
    fig, ax = plt.subplots(figsize=(10, 10))
    for d in grid_depths(grid):
        if d < 100:
            continue
        pts = [(float(D.P_arrive(mp, D.Z_OF_DEPTH[d])), grid[mp][d])
               for mp in sorted(grid) if np.isfinite(grid[mp].get(d, np.nan))]
        if pts:
            ax.plot(*zip(*pts), DMRK[d], ms=17 if d == D.DEEPEST else 10, color=DCOL[d],
                    mec="k", mew=0.7, alpha=0.95, zorder=3 + np.log10(d),
                    label=rf"$z=${zlabel(d)} mm")
    ax.set_xscale("log")
    ax.set_yscale("log")
    ax.set_xlabel(r"Arriving muon momentum $P_{\mathrm{arr}}$ [GeV]")
    ax.set_ylabel(r"SR efficiency [per 100 generated]")
    ax.set_ylim(1.0, 60)
    ax.legend(fontsize=14, loc="lower left", title="Generated depth", ncol=2,
              columnspacing=0.8, handletextpad=0.3)
    ax.text(0.03, 0.96, "If depth were only energy loss,\nthese would lie on one curve",
            transform=ax.transAxes, fontsize=15, va="top", color="0.3")
    cms(ax)
    save(fig, outdir, "depthWeighting_effVsParr")


def loo_by_mass(grid):
    """{held-out depth: (MinP list, pred/true list)}, like D.leave_one_out but keeping the
    mass of every ratio so the curves can be drawn against P_mu."""
    out = {}
    depths = grid_depths(grid)
    for d in depths[1:-1]:
        mps, ratios = [], []
        for mp in sorted(grid):
            have = {k: v for k, v in grid[mp].items() if np.isfinite(v) and v > 0}
            others = [k for k in have if k != d]
            if d not in have or len(others) < 2:
                continue
            lz = np.log([D.Z_OF_DEPTH[k] for k in others])
            le = np.log([have[k] for k in others])
            o = np.argsort(lz)
            mps.append(mp)
            ratios.append(float(np.exp(np.interp(np.log(D.Z_OF_DEPTH[d]), lz[o], le[o])))
                          / have[d])
        out[d] = (mps, np.array(ratios))
    return out


def fig_loo(grid, outdir):
    """Leave-one-out closure of the log-z interpolation, for depths >= 1e3 mm."""
    fig, ax = plt.subplots(figsize=(10, 10))
    loo = loo_by_mass(grid)
    ax.axhspan(0.9, 1.1, color="0.85", zorder=0)
    ax.axhline(1, color="k", lw=1.4, ls="--", zorder=1)
    print("  leave-one-out closure, median pred/true and median |dev|, MinP >= 1000:")
    for d, (mps, r) in loo.items():
        if d < 1000:
            continue
        hi = r[np.array(mps) >= 1000]
        med, dev = np.median(hi), np.median(np.abs(hi - 1))
        print(f"    {D.TAG_OF_DEPTH[d]:>4}: n={len(hi):2d}  median {med:.3f}  |dev| {100 * dev:.1f}%")
        ax.plot(mps, r, DMRK[d] + "-", ms=10, lw=1.6, color=DCOL[d], mec="k", mew=0.7,
                label=rf"{zlabel(d)} mm (median {med:.2f})")
    ax.set_xscale("log")
    ax.set_yscale("log")
    ax.set_ylim(3e-2, 5)
    ax.set_xlabel(r"Muon momentum $P_{\mu}$ [GeV]")
    ax.set_ylabel("Predicted / true efficiency")
    ax.legend(fontsize=14, loc="lower right", title="Held-out depth")
    ax.text(0.03, 0.06, r"Gray band: $\pm$10%. Median predicted / true" "\n"
            r"for $P_{\mu} \geq$ 1 TeV in the legend",
            transform=ax.transAxes, fontsize=15, va="bottom", color="0.3")
    cms(ax)
    save(fig, outdir, "depthWeighting_looClosure")


def fig_cdf_and_eff(grid, frames, turnon, outdir):
    """f(z) and eps(z) for the illustration mass, with the generated samples marked."""
    fig, ax = plt.subplots(figsize=(10, 10))
    axr = ax.twinx()
    lo, hi, p = D.decay_pdf(frames, 2 * REF_MINP)
    z = np.geomspace(1, D.Z_MAX, 3000)
    cdf = np.interp(z, np.concatenate([lo[:1], hi]), np.concatenate([[0.], np.cumsum(p)]))

    ax.axvspan(1e5, D.Z_MAX, color="#F89C20", alpha=0.15, zorder=0)
    ax.plot(z, cdf, color="black", lw=2.6, label=r"$f(z)$, decays reaching CMS")
    axr.plot(z, D.eps_of_z(grid, turnon, REF_MINP, z), color=ACCENT, lw=2.6,
             label=r"$\varepsilon(z)$, interpolated")
    d = sorted(k for k in grid[REF_MINP] if np.isfinite(grid[REF_MINP][k]))
    axr.plot([D.Z_OF_DEPTH[k] for k in d], [grid[REF_MINP][k] for k in d], "o",
             ms=13, color=ACCENT, mec="k", mew=1.4, zorder=5, label="Generated samples")
    for k in d:
        ax.axvline(D.Z_OF_DEPTH[k], color="0.75", ls=":", lw=1.2, zorder=0)

    ax.set_xscale("log")
    ax.set_xlim(1, D.Z_MAX)
    ax.set_ylim(0, 1.18)
    ax.set_xlabel(r"Decay depth $z$ [mm]")
    ax.set_ylabel("Cumulative fraction of decays")
    axr.set_ylabel(r"SR efficiency $\varepsilon$", color=ACCENT)
    axr.tick_params(axis="y", colors=ACCENT)
    axr.set_ylim(0, 19)
    h1, l1 = ax.get_legend_handles_labels()
    h2, l2 = axr.get_legend_handles_labels()
    ax.legend(h1 + h2, l1 + l2, fontsize=16, loc="upper left",
              title=rf"$m_{{\chi}}$ = {2 * REF_MINP / 1000:g} TeV")
    frac = 1 - float(np.interp(1e5, np.concatenate([lo[:1], hi]),
                               np.concatenate([[0.], np.cumsum(p)])))
    n_in = sum(1e5 <= k <= 1e6 for k in d)
    ax.text(0.30, 0.27, f"{100 * frac:.0f}% of decays land\nin the shaded range,\n"
            f"bracketed by {n_in} samples",
            transform=ax.transAxes, fontsize=15, color="#8B4500", ha="center")
    cms(ax)
    save(fig, outdir, "depthWeighting_cdfAndEff")


def fig_weights(grid, frames, turnon, outdir):
    """The three weightings side by side for the illustration mass."""
    fig, ax = plt.subplots(figsize=(10, 10))
    depths = [d for d in grid_depths(grid) if d >= 100]
    w_less = D.shell_weights(frames, REF_MINP, depths, "less")
    w_great = D.shell_weights(frames, REF_MINP, depths, "greater")
    _, w_cont = D.weights_for(grid, frames, turnon, REF_MINP)

    x = np.arange(len(depths))
    width = 0.27
    for i, (w, lab, c) in enumerate([
            (w_less, "Less than", "#5790FC"),
            (w_great, "Greater than", "#F89C20"),
            (w_cont, "Continuous integral", ACCENT)]):
        ax.bar(x + (i - 1) * width, [w.get(d, 0) for d in depths], width,
               label=lab, color=c, edgecolor="k", lw=0.8)
    ax.set_xticks(x)
    ax.set_xticklabels([zlabel(d) for d in depths], fontsize=16 if len(depths) > 6 else None)
    ax.set_yscale("log")
    ax.set_ylim(1e-4, 8)
    ax.set_xlabel(r"Generated depth sample $z$ [mm]")
    ax.set_ylabel("Weight")
    ax.legend(fontsize=16, loc="upper left",
              title=rf"$m_{{\chi}}$ = {2 * REF_MINP / 1000:g} TeV")
    ax.grid(alpha=0.3, axis="y")
    cms(ax)
    save(fig, outdir, "depthWeighting_weights")


def fig_yield_ratio(grid, frames, turnon, outdir):
    """Less-than and greater-than yields relative to the continuous nominal, against DM mass."""
    fig, ax = plt.subplots(figsize=(10, 10))
    depths = grid_depths(grid)
    mdm, r_less, r_great = [], [], []
    for mp in sorted(grid):
        eff = {d: grid[mp][d] for d in grid[mp] if np.isfinite(grid[mp][d])}
        w_less = D.shell_weights(frames, mp, depths, "less")
        w_great = D.shell_weights(frames, mp, depths, "greater")
        n_less = sum(w_less.get(d, 0.) * e for d, e in eff.items())
        n_great = sum(w_great.get(d, 0.) * e for d, e in eff.items())
        n_cont, _ = D.weights_for(grid, frames, turnon, mp)
        if n_cont <= 0:
            continue
        mdm.append(2 * mp / 1000.)
        r_less.append(n_less / n_cont)
        r_great.append(n_great / n_cont)

    ax.axhline(1, color="k", lw=1.4, ls=":")
    ax.plot(mdm, r_great, "s-", color="#F89C20", lw=2.0, ms=8, label=r"Greater than ($+1\sigma$)")
    ax.plot(mdm, r_less, "o-", color="#5790FC", lw=2.0, ms=8, label=r"Less than ($-1\sigma$)")
    ax.set_xscale("log")
    ax.set_yscale("log")
    ax.set_ylim(0.3, 7)
    ax.set_xlabel(r"$m_{\chi}$ [TeV]")
    ax.set_ylabel("Yield / continuous weighting")
    ax.legend(fontsize=16, loc="upper right", title="Shell assignment")
    cms(ax)
    save(fig, outdir, "depthWeighting_yieldRatio")


def main():
    global SUFFIX
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("-H", "--histDir", required=True)
    ap.add_argument("-r", "--region", default="SR")
    ap.add_argument("-p", "--parquetDir", default=D.PARQUET_DIR)
    ap.add_argument("-o", "--outdir", default="helper_scripts/figures")
    ap.add_argument("-s", "--suffix", default="", help="appended to every file name, e.g. _v31")
    args = ap.parse_args()
    SUFFIX = args.suffix

    grid = D.read_eff_grid(args.histDir, args.region)
    if not grid:
        raise SystemExit(f"ERROR: no per-depth {args.region} signal files in {args.histDir}")
    frames = D.load_parquets(args.parquetDir)
    turnon = D.make_turnon(grid)
    print(f"Loaded {len(grid)} mass points from {args.histDir} ({args.region}), "
          f"depths {[D.TAG_OF_DEPTH[d] for d in grid_depths(grid)]}")

    fig_eff_vs_depth(grid, args.outdir)
    fig_eff_vs_parr(grid, args.outdir)
    fig_loo(grid, args.outdir)
    fig_cdf_and_eff(grid, frames, turnon, args.outdir)
    fig_weights(grid, frames, turnon, args.outdir)
    fig_yield_ratio(grid, frames, turnon, args.outdir)


if __name__ == "__main__":
    main()
