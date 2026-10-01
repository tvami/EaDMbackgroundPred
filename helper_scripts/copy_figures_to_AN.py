#!/usr/bin/env python3
"""Copy a 2DAlphabet production's figures into the AN, under the names the .tex files use.

There was no such script before -- the AN figure swap was done by hand, which is how
`7Results.tex` ended up referencing three PDFs that were never copied over (the
--band68 --ribbon variants and the fixed-depth overlay; see --check).

Usage
-----
  # what would be copied, and what is missing at the source
  python3 helper_scripts/copy_figures_to_AN.py -v v30

  # actually copy
  python3 helper_scripts/copy_figures_to_AN.py -v v30 --do

  # report every Figures/... path the live .tex files reference but that does not exist
  python3 helper_scripts/copy_figures_to_AN.py --check

Nothing is copied without --do, and a copy aborts if any source in the selected group is
missing, so the AN never ends up with a half-swapped, half-v28 figure set.
"""
import argparse
import os
import re
import shutil
import sys

SRC = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
AN = '/home/users/tvami/EarthAsDM/AN/AN-23-122'

# The .tex files that are actually \input{} by AN-23-122.tex and own version-tagged figures.
LIVE_TEX = ['5ShapeAnalysis.tex', '6Systematics.tex', '7Results.tex']

SIGNAL = 'Signal_M3000GeV_e4_SR'
TF = '2x0'


def groups(v):
    """(source, destination) pairs per figure group, for input version `v` (e.g. 'v30')."""
    sr = 'rpf2x0_Binningv13_Input{v}_SR_M3000GeV_e4'.format(v=v)
    area = '{sr}/{sig}-{tf}_area'.format(sr=sr, sig=SIGNAL, tf=TF)
    tag = 'Binningv13_Input{v}_SR_M3000GeV_e4'.format(v=v)
    limdir = 'rpf2x0_Binningv13_Input{v}_SR_Blind'.format(v=v)
    syst = 'Figures/Systematics'
    res = 'Figures/7Results'

    g = {}

    # --- uncertainty shape plots. Names are identical at source and destination, and carry
    # no version token, so all five must come from the SAME production or the set silently
    # mixes working points.
    g['uncert'] = [
        ('{sr}/UncertPlots/Uncertainty_{sig}_pass_CMS_EXO26004_{s}_projX_ratio.png'.format(sr=sr, sig=SIGNAL, s=s),
         '{d}/Uncertainty_{sig}_pass_CMS_EXO26004_{s}_projX_ratio.png'.format(d=syst, sig=SIGNAL, s=s))
        for s in ('pT', 'trig', 'RNN', 't0', 'RNN_scale')
    ]

    # --- post-fit diagnostics
    g['diag'] = [
        ('{a}/impacts_t1.pdf'.format(a=area), '{d}/{t}_impacts_t1.pdf'.format(d=syst, t=tag)),
        ('{a}/impacts_t0.pdf'.format(a=area), '{d}/{t}_impacts_t0.pdf'.format(d=syst, t=tag)),
        ('{a}/nuisance_pulls.pdf'.format(a=area), '{d}/{t}_nuisance_pulls.pdf'.format(d=syst, t=tag)),
        ('{a}/plots_fit_b/correlation_matrix.pdf'.format(a=area),
         '{d}/{t}_correlation_matrix_b.pdf'.format(d=syst, t=tag)),
        ('{a}/plots_fit_s/correlation_matrix.pdf'.format(a=area),
         '{d}/{t}_correlation_matrix_s.pdf'.format(d=syst, t=tag)),
    ]

    # --- limits / exclusion. The ribbon and fixed-depth variants are NOT written by
    # make_limit_pdfs_*.sh -- they need exp_lim/make_limit_pdfs_extra_*.sh first.
    lt = '20.7'
    g['results'] = [
        ('exp_lim/signal_{L}_livetime_{lt}_limit/limits_combine_signal_{L}_alpha_max_3.4e-08.pdf'.format(L=limdir, lt=lt),
         '{d}/limits_combine_signal_{L}_alpha_max_3.4e-08.pdf'.format(d=res, L=limdir)),
        ('figures/ExcludedMass_mX_ep_explim_signal_{L}_livetime_{lt}_band68_ribbon.pdf'.format(L=limdir, lt=lt),
         '{d}/ExcludedMass_mX_ep_explim_signal_{L}_livetime_{lt}_band68_ribbon.pdf'.format(d=res, L=limdir, lt=lt)),
        ('figures/ExcludedMass_mX_ep_explim_signal_{L}_livetime_{lt}_band68_ribbon_lifetime.pdf'.format(L=limdir, lt=lt),
         '{d}/ExcludedMass_mX_ep_explim_signal_{L}_livetime_{lt}_band68_ribbon_lifetime.pdf'.format(d=res, L=limdir, lt=lt)),
        ('figures/ExcludedMass_mX_ep_explim_Run3_fixedDepth_livetime_{lt}.pdf'.format(lt=lt),
         '{d}/ExcludedMass_mX_ep_explim_Run3_fixedDepth_livetime_{lt}.pdf'.format(d=res, lt=lt)),
    ]

    # --- shape-analysis fit / GoF / F-test plots, one set per region and TF order.
    # 5ShapeAnalysis.tex uses version-free names, so these overwrite the previous production.
    shape = 'Figures/6ShapeAnalysis'
    regions = [
        ('MC_SR', 'rpf2x0_Binningv13_Input{v}_SR_BkgMC'.format(v=v), 'Signal_M3000GeV_e4_SR'),
        ('Run3_SR', sr, 'Signal_M3000GeV_e4_SR'),
        ('Run3_VR1', 'rpf2x0_Binningv13_Input{v}_VR1_M3000GeV_e4'.format(v=v), 'Signal_M3000GeV_e4_VR1'),
        ('Run3_VR2', 'rpf2x0_Binningv9alt_Input{v}_VR2_M3000GeV_e4'.format(v=v), 'Signal_M3000GeV_e4_VR2'),
    ]
    g['shape'] = []
    for key, wa, sig in regions:
        for tf in ('0x0', '1x0', '2x0'):
            a = '{wa}/{sig}-{tf}_area'.format(wa=wa, sig=sig, tf=tf)
            g['shape'] += [
                ('{a}/plots_fit_b/postfit_projx_logy.pdf'.format(a=a),
                 '{d}/2DA_{k}_{tf}.pdf'.format(d=shape, k=key, tf=tf)),
                ('{a}/gof_plot.pdf'.format(a=a),
                 '{d}/GoF_{k}_{tf}.pdf'.format(d=shape, k=key, tf=tf)),
            ]
        g['shape'].append(
            ('{wa}/ftest_1x0_vs_2x0_notoys.pdf'.format(wa=wa),
             '{d}/Ftest_{k}_1x0_2x0.pdf'.format(d=shape, k=key)))
    return g


def check_an():
    """Report Figures/... paths referenced by the live .tex files that do not exist."""
    missing = 0
    for tex in LIVE_TEX:
        path = os.path.join(AN, tex)
        with open(path) as fh:
            body = fh.read()
        for ref in re.findall(r'\\includegraphics\[[^\]]*\]\{(Figures/[^}]+)\}', body):
            if not os.path.isfile(os.path.join(AN, ref)):
                print('MISSING  {tex}: {ref}'.format(tex=tex, ref=ref))
                missing += 1
    print('\n{n} referenced figure(s) missing.'.format(n=missing))
    return missing


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('-v', '--version', help="input version token, e.g. 'v30'")
    ap.add_argument('-g', '--group', action='append',
                    choices=['uncert', 'diag', 'results', 'shape'],
                    help='limit to these groups (repeatable); default is all')
    ap.add_argument('--do', action='store_true', help='actually copy (default is a dry run)')
    ap.add_argument('--check', action='store_true',
                    help='only report missing figures referenced by the live .tex files')
    args = ap.parse_args()

    if args.check:
        sys.exit(1 if check_an() else 0)
    if not args.version:
        ap.error('-v/--version is required unless --check is given')

    g = groups(args.version)
    selected = args.group or list(g)
    rc = 0
    for name in selected:
        pairs = g[name]
        absent = [s for s, _ in pairs if not os.path.isfile(os.path.join(SRC, s))]
        print('\n=== {n}  ({k}/{t} sources present)'.format(n=name, k=len(pairs) - len(absent), t=len(pairs)))
        for s in absent:
            print('  ABSENT  {s}'.format(s=s))
        if absent:
            print('  -> group skipped; a partial copy would leave the AN mixing productions.')
            rc = 1
            continue
        for s, d in pairs:
            print('  {s}\n    -> {d}'.format(s=s, d=d))
            if args.do:
                shutil.copyfile(os.path.join(SRC, s), os.path.join(AN, d))
    if not args.do:
        print('\nDry run. Re-run with --do to copy.')
    sys.exit(rc)


if __name__ == '__main__':
    main()
