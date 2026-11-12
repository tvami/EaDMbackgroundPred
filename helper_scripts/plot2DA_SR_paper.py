#!/usr/bin/env python3
"""Paper version of the 2DAlphabet post-fit pT projections (fail | pass, b-only fit).

Same numbers as TwoDAlphabet.plot.make_ax_1D (stacked post-fit background, its uncertainty, Garwood
data intervals, pulls = (data - fit) / sqrt(data_err^2 + bkg_err^2)), but drawn as ONE vector
figure with both regions side by side and with the ARC-requested paper labels:
full pass/fail conditions, larger fonts, no sigma on the pull axis, "months".

It never writes into a production fit area: point --area at a COPY of the rpf2x0_<SIG> directory
(top-level runConfig/binnings/ledger/organized_hists + <SIG>-<tf>_area/postfitshapes_b.root and
ledgers). TwoDAlphabet(loadPrevious=True) rewrites runConfig.json and Plotter rewrites
plots_fit_b/all_plots.root inside that copy.

Usage (from .../CMSSW_14_1_0_pre4/src, cmsenv + twoD-env):
    python3 helper_scripts/plot2DA_SR_paper.py --area paper_figs_arc4/fig1/rpf2x0_Signal_M3000GeV_mergedDepth_SR \
        --signal Signal_M3000GeV_mergedDepth_SR --tf 1x0 --out paper_figs_arc4/fig1/2DA_Run3_SR_unblinded_v35_1x0
    Add --panel fail (or pass) for a standalone single-panel figure (larger fonts, column width).
"""
import argparse
import os

import numpy as np
import matplotlib
matplotlib.use("Agg")
import matplotlib.pyplot as plt
import mplhep as hep

from TwoDAlphabet.twoDalphabet import TwoDAlphabet
from TwoDAlphabet import plot as tdaplot
from TwoDAlphabet.helpers import cd, hist2array
from TwoDAlphabet.plotstyle import stack_style, hatch_style, errorbar_style


def _select_signal(row, args):
    """Copy of run_single_signal_2DA._select_signal (that module parses sys.argv on import)."""
    signame, poly_order = args
    if row.process_type == 'SIGNAL':
        return signame in row.process
    if 'Background' in row.process:
        return row.process in ('CMS_EXO26004_Background_' + poly_order, 'CMS_EXO26004_Background')
    return True


def get_region_hists(plotter, region, projn='postfit_projx2'):
    group = plotter.df[plotter.df.region.eq(region)]
    bkgs_df = plotter._order_df_on_proc_list(group[group.process_type.eq('BKG')], proc_type='BKG',
                                             alphaBottom=False)
    sig_df = group[group.process_type.eq('SIGNAL')]
    sig_projn = projn
    if plotter.twoD.options.plotPrefitSigInFitB and plotter.fittag == 'b':
        sig_projn = projn.replace('postfit', 'prefit')
    data = plotter.Get(row=group.loc[group.process_type.eq('DATA')].iloc[0], hist_type=projn)
    total = plotter.Get(row=group.loc[group.process_type.eq('TOTAL')].iloc[0], hist_type=projn)
    bkgs = [plotter.Get(row=bkgs_df.iloc[i], hist_type=projn) for i in range(bkgs_df.shape[0])]
    sigs = [plotter.Get(row=sig_df.iloc[i], hist_type=sig_projn) for i in range(sig_df.shape[0])]
    return data, total, bkgs, sigs


def draw_region(ax, rax, edges, data, total, bkgs, sigs, args, slicetitle, blinded):
    widths = np.diff(edges)
    bkg_arr = sum(hist2array(h, return_errors=True)[0] for h in bkgs)
    bkg_color = tdaplot.root_to_matplotlib_color(bkgs[0].GetFillColor())
    sig_arr = sum(hist2array(h) for h in sigs)
    sig_color = tdaplot.root_to_matplotlib_color(sigs[0].GetLineColor())
    data_arr = np.nan_to_num(hist2array(data))
    data_arr = np.array([int(round(v)) for v in data_arr])
    tot_arr, tot_err = hist2array(total, return_errors=True)

    ext = lambda a: np.hstack([a, a[-1:]])
    ax.stackplot(edges, ext(bkg_arr)[None, :], colors=[bkg_color], step='post',
                 labels=[args.bkg_label], **stack_style)
    ax.fill_between(edges, ext(bkg_arr) - ext(tot_err), ext(bkg_arr) + ext(tot_err),
                    step='post', label=args.unc_label, **hatch_style)
    centers = 0.5 * (edges[1:] + edges[:-1])
    lo, hi = tdaplot.poisson_conf_interval(data_arr)
    ax.errorbar(centers, data_arr, yerr=[data_arr - lo, hi - data_arr], xerr=widths / 2,
                label='Data', **errorbar_style)
    ax.step(edges, ext(sig_arr), where='post', color=sig_color, lw=2.5, label=args.sig_label)

    ax.set_yscale('log')
    ax.set_ylim(args.ymin, tot_arr.max() * args.yheadroom)
    ax.set_xlim(edges[0], edges[-1])
    ax.set_ylabel('Events / bin', fontsize=args.label_size)

    h, l = ax.get_legend_handles_labels()
    order = [l.index(k) for k in ('Data', args.sig_label, args.bkg_label, args.unc_label)]
    ax.legend([h[i] for i in order], [l[i] for i in order], loc='upper right',
              bbox_to_anchor=(1.0, args.legend_top), fontsize=args.legend_size,
              labelspacing=0.3, handlelength=1.6, borderaxespad=0.3)
    # CMS + label drawn by hand: hep.cms.label overlaps them in this 2x2 layout
    cms = ax.text(0.0, 1.012, 'CMS', transform=ax.transAxes, ha='left', va='bottom',
                  fontsize=args.cms_size, fontweight='bold', fontfamily='TeX Gyre Heros')
    if args.cms_label:
        ax.annotate(' ' + args.cms_label, xy=(1.0, 0.0), xycoords=cms, ha='left', va='bottom',
                    fontsize=args.cms_size * 0.78, fontstyle='italic', fontfamily='TeX Gyre Heros')
    ax.text(1.0, 1.012, args.lumi_text, transform=ax.transAxes, ha='right', va='bottom',
            fontsize=args.lumi_size)
    ax.text(0.03, 0.955, slicetitle, ha='left', va='top', fontsize=args.slice_size,
            transform=ax.transAxes)

    # pulls, identical to make_ax_1D
    dmb = np.where(data_arr == 0, 0, data_arr - tot_arr) if blinded else data_arr - tot_arr
    derr = np.where(dmb < 0, hi - data_arr, data_arr - lo)
    unc = np.sqrt(derr**2 + tot_err**2)
    unc[unc == 0.0] = 1e-5
    if rax is None:                                   # --no-pull: x axis on the main panel
        ax.set_xlabel(args.xlabel, fontsize=args.label_size)
        ax.tick_params(axis='both', which='major', labelsize=args.tick_size)
        return dict(pulls=dmb / unc, data=data_arr, bkg=tot_arr)
    rax.bar(centers, dmb / unc, width=widths, color='gray')
    rax.axhline(0.0, color='black', ls='--', lw=0.8, zorder=3)
    r = args.pull_range
    rax.set_ylim(-r, r)
    rax.set_yticks([-2, 0, 2] if r > 2.5 else [-1, 0, 1])
    rax.set_ylabel(args.pull_label, fontsize=args.pull_label_size, loc='center')
    rax.set_xlabel(args.xlabel, fontsize=args.label_size)
    rax.set_xlim(edges[0], edges[-1])
    for a in (ax, rax):
        a.tick_params(axis='both', which='major', labelsize=args.tick_size)
    return dict(pulls=dmb / unc, data=data_arr, bkg=tot_arr)


FONTS = {
    'both':   dict(tick_size=24, label_size=28, pull_label_size=26, legend_size=23, slice_size=22,
                   cms_size=26, lumi_size=18),
    'single': dict(tick_size=27, label_size=31, pull_label_size=27, legend_size=25, slice_size=24,
                   cms_size=28, lumi_size=19),
}


def main():
    p = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    p.add_argument('--area', required=True, help='COPY of the rpf2x0_<SIG> area (never a production one)')
    p.add_argument('--signal', required=True)
    p.add_argument('--tf', default='1x0')
    p.add_argument('--out', required=True, help='output stem (.pdf and .png written)')
    p.add_argument('--cms-label', default='Preliminary')
    p.add_argument('--lumi-text', default='Run 3 Cosmics (14.9 months)')
    p.add_argument('--fail-label', default=r'Fail: $\mathrm{RNN} < 0.99999$ or $\Delta t \leq 50$ ns')
    p.add_argument('--pass-label', default=r'Pass: $\mathrm{RNN} \geq 0.99999$ and $\Delta t > 50$ ns')
    p.add_argument('--sig-label', default=r'DM signal ($m_{\chi}$ = 6 TeV)')
    p.add_argument('--bkg-label', default='Background')
    p.add_argument('--unc-label', default='Bkg. unc.')
    p.add_argument('--pull-label', default=r'$\dfrac{\mathrm{Data} - \mathrm{fit}}{\mathrm{unc.}}$')
    p.add_argument('--xlabel', default=r'Muon $p_{\mathrm{T}}$ [GeV]')
    p.add_argument('--panel-size', type=float, default=8.5, help='inches per (square) panel')
    # font sizes: default None -> FONTS[both|single] below (single panel is shown at column width)
    for k in FONTS['both']:
        p.add_argument('--' + k.replace('_', '-'), type=float, default=None)
    p.add_argument('--legend-top', type=float, default=0.89)
    p.add_argument('--panel', choices=('both', 'fail', 'pass'), default='both',
                   help='both = two-panel figure (default); fail/pass = one standalone panel')
    p.add_argument('--pull-range', type=float, default=3.0, help='pull panel y range is +-this')
    p.add_argument('--no-pull', action='store_true', help='no pull panel (e.g. the fail region, whose pulls vanish)')
    p.add_argument('--ymin', type=float, default=1e-4)
    p.add_argument('--yheadroom', type=float, default=1e6)
    args = p.parse_args()
    for k, v in FONTS['both' if args.panel == 'both' else 'single'].items():
        if getattr(args, k) is None:
            setattr(args, k, v)

    out = os.path.abspath(args.out)
    area = os.path.normpath(args.area)
    sub = f'{area}/{args.signal}-{args.tf}_area'
    twoD = TwoDAlphabet(area, f'{area}/runConfig.json', loadPrevious=True)
    subset = twoD.ledger.select(_select_signal, args.signal, args.tf)
    with cd(sub):
        os.makedirs('plots_fit_b/base_figs', exist_ok=True)
        plotter = tdaplot.Plotter(subset, twoD, 'b')
        plotter.df_path = None                      # do not write df.csv on deletion

        plt.style.use(hep.style.CMS)
        s = args.panel_size
        regions = ('fail', 'pass') if args.panel == 'both' else (args.panel,)
        if args.no_pull:
            fig, axs = plt.subplots(1, len(regions), figsize=(len(regions) * s, s), squeeze=False,
                                    gridspec_kw={'wspace': 0.30})
        else:
            fig, axs = plt.subplots(2, len(regions), figsize=(len(regions) * s, s), sharex='col',
                                    squeeze=False,
                                    gridspec_kw={'height_ratios': (3, 1), 'hspace': 0.0, 'wspace': 0.30})
        res = {}
        for col, region in enumerate(regions):
            binning, _ = twoD.GetBinningFor(region)
            xb = binning.xbinByCat
            edges = np.array(xb['LOW'][:-1] + xb['SIG'][:-1] + xb['HIGH'], dtype=float)
            data, total, bkgs, sigs = get_region_hists(plotter, region)
            res[region] = draw_region(axs[0, col], None if args.no_pull else axs[1, col], edges, data, total, bkgs, sigs, args,
                                      args.fail_label if region == 'fail' else args.pass_label,
                                      region in twoD.options.blindedPlots)
        if not args.no_pull:
            for col in range(len(regions)):
                fig.align_ylabels(axs[:, col])
        for ext in ('pdf', 'png'):
            fig.savefig(f'{out}.{ext}', bbox_inches='tight')
        plt.close(fig)
    for r, d in res.items():
        print(f'{r}: data={d["data"].tolist()}')
        print(f'{r}: pulls={np.round(d["pulls"], 2).tolist()}')
    print(f'Wrote {out}.pdf / .png')


if __name__ == '__main__':
    main()
