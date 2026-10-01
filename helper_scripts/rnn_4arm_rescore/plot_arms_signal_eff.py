#!/usr/bin/env python3
"""SR pass efficiency (S >= 0.9999, pT>200) vs mass for the retrained RNN arms.

Same cut value and the same signal grid as
figures/vr2_rnn_hotrun_study/signal_SReff_vs_mass_t0shift, no t0 shift anywhere.

IMPORTANT: the four masses MinP 1000/5000/10000/90000 were HELD OUT of the arm
training, so only those give an unbiased efficiency for arms 2/3/4. The other 14
grid points were in the training set. They are drawn with open markers and the
held-out ones filled; the printed table flags them too.
"""
import os, sys, glob, re
import numpy as np
import ROOT, cmsstyle as CMS

ROOT.gROOT.SetBatch(True)
ROOT.gErrorIgnoreLevel = ROOT.kWarning
CMS.SetExtraText('Work in Progress')

SD = os.path.dirname(os.path.abspath(__file__))
# Which SurfaceDepth grid. e4 is the nominal one the arm study used; e2 is shallower,
# so the muons arrive with a different pT/multiplicity mix and the arms need not rank
# the same way. Pass as argv[1] or DEPTH=.
DEPTH = (sys.argv[1] if len(sys.argv) > 1 else os.environ.get('DEPTH', 'e4')).strip()
# full match: 'sig_e4_[0-9]*.npz' would also swallow sig_e4_1000_shift8.npz and
# silently average the shifted and unshifted samples together.
FPAT = re.compile(rf'sig_{DEPTH}_(\d+)\.npz$')
OUT = ('/home/users/tvami/EarthAsDM/CMSSW_14_1_0_pre4/src/helper_scripts/figures/'
       'rnn_4arm_dataVsMC')
os.makedirs(OUT, exist_ok=True)
CUT = 0.9999
HELD_OUT = (1000, 5000, 10000, 90000)
# MEASURED in this pipeline by patched_v5_baseline.py (cluster 371700): the +8 ns patch
# costs the deployed v5 this fraction of its signal efficiency. The older 0.88 was an
# estimate from a different pipeline.
PATCH = 0.869

ARMS = [('RNNScore',     'v5 network (deployed, stored score)',  ROOT.kGray + 2,  20),
        ('arm2_control', 'arm 2  absoluteT0 control',            ROOT.kAzure + 1, 21),
        ('arm3_shift8',  'arm 3  shift8ns_absolute',             ROOT.kGreen + 2, 22),
        ('arm4_smear12', 'arm 4  smear12ns_absolute',            ROOT.kRed + 1,   23),
        ('arm5_match',   'arm 5  matchL0toData (+12.2, #sigma7.2)', ROOT.kOrange + 7, 33),
        ('arm1_center',  'arm 1  centeredT0_median',             ROOT.kViolet + 1, 34),
        ('arm5b_match',  'arm 5b  (+11.6, #sigma8.3)',           ROOT.kOrange + 3, 25),
        ('E1_match',     'E1  matched point (+11.0, #sigma7.7)', ROOT.kBlue + 2,   20),
        ('J_jitter2p8',  'J  E1 + 2.8 ns segment jitter',        ROOT.kTeal + 3,   21),
        ('Jo_jitter1p5', 'Jo  E1 + 1.5 ns segment jitter',       ROOT.kSpring + 4, 22),
        ('N_noNeutrino', 'N  no-neutrino label 1, absolute t_{0}', ROOT.kMagenta + 2, 23),
        ('NJ_noNu_E1',   'NJ  no-neutrino + E1',                 ROOT.kPink + 7,   33),
        ('Sp_shift13',   'Sp  shift gradient (+13.0, #sigma7.7)', ROOT.kCyan + 2,  29),
        ('Wp_smear11',   'Wp  smear gradient (+11.0, #sigma11.0)', ROOT.kOrange + 10, 30),
        ('cone89',       'C89  0-89 cone label 0',                ROOT.kRed + 3,   27),
        ('cone75n',      'C75n  0-75 cone, same campaign',        ROOT.kBlue - 7,  28)]
# same subsetting hook as plot_arms_dataVsMC.py; RNNScore is always kept because it
# is the denominator of every ratio here.
_only = os.environ.get('ONLY_ARMS', '').strip()
if _only:
    want = [s.strip() for s in _only.split(',')]
    missing = [w for w in want if w not in [k for k, *_ in ARMS]]
    if missing:
        raise SystemExit(f'ONLY_ARMS: unknown arm(s) {missing}')
    ARMS = [a for a in ARMS if a[0] in want or a[0] == 'RNNScore']

files = sorted([f for f in glob.glob(f'{SD}/out/sig_{DEPTH}_*.npz')
                if FPAT.search(os.path.basename(f))],
               key=lambda x: int(FPAT.search(os.path.basename(x)).group(1)))
if not files:
    raise SystemExit(f'no sig_{DEPTH}_*.npz in {SD}/out')
masses, eff, err, nev = [], {k: [] for k, *_ in ARMS}, {k: [] for k, *_ in ARMS}, []
for p in files:
    m = int(FPAT.search(os.path.basename(p)).group(1))
    z = np.load(p)
    masses.append(m)
    nev.append(len(z['RNNScore']))
    for k, *_ in ARMS:
        s = z[k].astype(np.float64)
        e = float(np.mean(s >= CUT))
        eff[k].append(e)
        err[k].append(np.sqrt(max(e * (1 - e), 1e-12) / len(s)))

print(f'=== SR pass efficiency (S >= {CUT}), pT>200, {DEPTH} signals, no t0 shift ===')
hdr = f'{"M_DM":>9s} {"MinP":>7s} {"N":>7s}'
for k, *_ in ARMS:
    hdr += f' {k:>14s}'
# ratio columns for the two current candidates, skipped if ONLY_ARMS dropped them
RAT = [k for k in ('E1_match', 'arm5_match') if k in [a[0] for a in ARMS]]
print(hdr + ''.join(f' {k[:6] + "/v5":>9s}' for k in RAT) + '  held-out')
for i, m in enumerate(masses):
    row = f'{2 * m / 1000.:8.1f}T {m:7d} {nev[i]:7d}'
    for k, *_ in ARMS:
        row += f' {eff[k][i]:14.4f}'
    r0 = eff['RNNScore'][i]
    for k in RAT:
        row += f' {eff[k][i] / r0 if r0 else 0:9.3f}'
    print(row + ('  YES' if m in HELD_OUT else '   -'))

sel = [i for i, m in enumerate(masses) if m in HELD_OUT]
print('\n--- held-out masses only (unbiased for arms 1-5) ---')
for k, *_ in ARMS:
    v = [eff[k][i] for i in sel]
    print(f'{k:>14s} mean eff = {np.mean(v):.4f}   '
          f'(per mass: ' + ', '.join(f'{x:.4f}' for x in v) + ')')
r0 = np.mean([eff['RNNScore'][i] for i in sel])
for k, *_ in ARMS:
    print(f'{k:>14s} / old_v5 = {np.mean([eff[k][i] for i in sel]) / r0:.3f}')
print(f'\nreference: the +8 ns patch costs the v5 network {(1-PATCH)*100:.1f}% of signal '
      f'efficiency, so the deployed\nworking point is old_v5 x {PATCH} -- that is the bar an '
      f'arm has to clear. NOTE this is a\nFIXED-CUT figure: the arms pass different amounts '
      f'of data at 0.9999, so part of any\napparent gain is just a looser threshold. '
      f'iso_background_eff.py is the honest version.')

# ------------------------------------------------------------------ figure
keep = []
c = ROOT.TCanvas('c', '', 900, 900)
keep.append(c)
c.SetLeftMargin(.15); c.SetRightMargin(.05); c.SetTopMargin(.08); c.SetBottomMargin(.13)
c.SetLogx(True)
fr = ROOT.TH1F('fr', '', 100, 1.5, 400)
keep.append(fr)
fr.SetStats(False); fr.SetMinimum(0.); fr.SetMaximum(0.95)
fr.GetXaxis().SetTitle('M_{DM} [TeV]')
fr.GetYaxis().SetTitle('SR pass efficiency  (S #geq 0.9999)')
fr.GetYaxis().SetTitleSize(.045); fr.GetXaxis().SetTitleSize(.045)
fr.GetYaxis().SetTitleOffset(1.45)
fr.GetYaxis().SetLabelSize(.038); fr.GetXaxis().SetLabelSize(.038)
fr.Draw()

x = np.array([2 * m / 1000. for m in masses], 'd')
_ncol = 2 if len(ARMS) > 7 else 1
leg = ROOT.TLegend(.42 if _ncol == 1 else .30, .68, .93, .89)
keep.append(leg)
leg.SetBorderSize(0); leg.SetFillStyle(0); leg.SetTextFont(42)
leg.SetTextSize(.030 if _ncol == 1 else .021)
leg.SetNColumns(_ncol)
leg.SetHeader('filled = held-out mass, open = in training set')
for k, lab, col, mst in ARMS:
    g = ROOT.TGraphErrors(len(x), x, np.array(eff[k], 'd'),
                          np.zeros(len(x)), np.array(err[k], 'd'))
    g.SetMarkerStyle(mst); g.SetMarkerSize(1.0)
    g.SetMarkerColor(col); g.SetLineColor(col); g.SetLineWidth(2)
    g.Draw('L SAME')
    keep.append(g)
    # open markers for trained masses, filled for the held-out ones
    for use_held, style in ((False, mst + 4), (True, mst)):
        ii = [i for i, m in enumerate(masses) if (m in HELD_OUT) == use_held]
        if not ii:
            continue
        gm = ROOT.TGraph(len(ii), x[ii], np.array([eff[k][i] for i in ii], 'd'))
        gm.SetMarkerStyle(style); gm.SetMarkerSize(1.3); gm.SetMarkerColor(col)
        gm.Draw('P SAME')
        keep.append(gm)
    leg.AddEntry(g, lab, 'pl')

# the bar to clear: the deployed v5 network AFTER its +8 ns patch
g88 = ROOT.TGraph(len(x), x, np.array(eff['RNNScore'], 'd') * PATCH)
keep.append(g88)
g88.SetLineColor(ROOT.kBlack); g88.SetLineStyle(2); g88.SetLineWidth(2)
g88.Draw('L SAME')
leg.AddEntry(g88, f'v5 network #times {PATCH} (deployed, with +8 ns patch)', 'l')
leg.Draw()

pv = ROOT.TPaveText(.19, .14, .62, .26, 'NDC')
keep.append(pv)
pv.SetFillColor(0); pv.SetBorderSize(0); pv.SetTextAlign(12); pv.SetTextSize(.031)
pv.AddText(f'SurfaceDepth {DEPTH},  p_{{T}} > 200 GeV,  no t_{{0}} shift')
pv.AddText('errors: MC stat')
pv.Draw()
CMS.CMS_lumi(c, iPosX=0, scaleLumi=0)
for e in ('png', 'pdf'):
    c.SaveAs(f'{OUT}/signal_SReff_vs_mass_{DEPTH}_allarms.{e}')
print('\nwrote', f'{OUT}/signal_SReff_vs_mass_{DEPTH}_allarms.{{png,pdf}}')
