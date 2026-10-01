#!/usr/bin/env python3
"""One signal mass, every checkpoint overlaid, in T = -log10(1 - S).

The companion to plot_E1_signal_overlay.py: that one fixes the network and scans mass,
this one fixes the mass and scans networks.

IMPORTANT -- why two numbers are printed per arm. Comparing networks at the same
T >= 4 (S >= 0.9999) is NOT apples-to-apples: each network has its own score
calibration, and the retrained arms pass several times more DATA at that value than
the deployed v5. Part of any apparent signal gain at a fixed cut is just a looser cut.
So the table gives both:
  fixed    -- fraction above T = 4, what the plot's red line shows
  matched  -- fraction above the per-arm threshold that reproduces the deployed
              network's VR2 DATA pass rate; this is the honest one, and it is the
              number that appears in patched_v5_baseline.py's decision table.
The plot can only draw one vertical line, so it draws the fixed cut and marks each
arm's matched threshold with a tick along the top axis.

Usage: plot_onemass_allarms.py [MINP] [DEPTH]        defaults: 1000 e4
       (MINP is the file token; M_DM = 2 x MINP / 1000 TeV)
"""
import glob, os, sys
import numpy as np
import ROOT, cmsstyle as CMS

ROOT.gROOT.SetBatch(True)
ROOT.gErrorIgnoreLevel = ROOT.kWarning
CMS.SetExtraText('Work in Progress')

SD = os.path.dirname(os.path.abspath(__file__))
MINP = int(sys.argv[1]) if len(sys.argv) > 1 else 1000
DEPTH = sys.argv[2] if len(sys.argv) > 2 else 'e4'
OUT = ('/home/users/tvami/EarthAsDM/CMSSW_14_1_0_pre4/src/helper_scripts/figures/'
       'rnn_4arm_dataVsMC')
os.makedirs(OUT, exist_ok=True)
CUT = 0.9999
T_CUT = 4.0
NB, TLO, THI = 60, 0.0, 6.0
# The saturated events matter here: 30-60% of a signal sample lands at 1 - S < 1e-6,
# and burying that in the last regular bin makes the drawn histogram look like the
# whole distribution when it is barely half of it. So the last bin is a WIDER,
# explicitly labeled overflow, separated by a dashed line. Contents are normalized to
# fractions of all events (not densities), so the wider bin is still directly readable
# as "this fraction saturated" -- that is why the y axis says fraction, not density.
OVF_W = 0.6                       # drawn width of the overflow bin
EDGES = np.concatenate([np.linspace(TLO, THI, NB + 1), [THI + OVF_W]])

# same colors as plot_arms_dataVsMC.py so a reader can move between the figures
COL = [('RNNScore',     'v5 (deployed, stored)',        ROOT.kGray + 2),
       ('old_v5',       'v5 (re-scored, validation)',   ROOT.kBlack),
       ('arm1_center',  'arm 1  centeredT0',            ROOT.kViolet + 1),
       ('arm2_control', 'arm 2  absoluteT0 control',    ROOT.kAzure + 1),
       ('arm3_shift8',  'arm 3  shift 8 ns',            ROOT.kGreen + 2),
       ('arm4_smear12', 'arm 4  smear 12 ns',           ROOT.kRed + 1),
       ('arm5_match',   'arm 5  (12.2/7.2)',            ROOT.kOrange + 7),
       ('arm5b_match',  'arm 5b (11.6/8.3)',            ROOT.kOrange + 3),
       ('E1_match',     'E1  (11.0/7.7)',               ROOT.kBlue + 2),
       ('J_jitter2p8',  'J  E1 + 2.8 ns jitter',        ROOT.kTeal + 3),
       ('Jo_jitter1p5', 'Jo  E1 + 1.5 ns jitter',       ROOT.kSpring + 4),
       ('N_noNeutrino', 'N  no-neutrino',               ROOT.kMagenta + 2),
       ('NJ_noNu_E1',   'NJ  no-neutrino + E1',         ROOT.kPink + 7),
       ('Sp_shift13',   'Sp  shift only (13.0/7.7)',    ROOT.kCyan + 2),
       ('Wp_smear11',   'Wp  smear only (11.0/11.0)',   ROOT.kOrange + 10)]
# the two the eye should go to first
EMPH = ('E1_match', 'RNNScore')


def T(s):
    """No in-range sentinel: s >= 1 lands at T = 8 via the 1e-8 clip and is caught by
    the overflow bin, rather than being folded back to 5.99 and hidden inside the last
    regular bin."""
    s = np.asarray(s, dtype=np.float64)
    return -np.log10(np.clip(1.0 - s, 1e-8, None))


def fill(t):
    """Regular bins for T < 6, everything saturated into the overflow bin."""
    h = ROOT.TH1F(f'h{np.random.randint(1 << 30)}', '', NB + 1, EDGES)
    ovf_x = THI + 0.5 * OVF_W
    for v in t:
        h.Fill(ovf_x if v >= THI else max(v, TLO + 1e-6))
    if h.Integral() > 0:
        h.Scale(1.0 / h.Integral())
    return h


sp = f'{SD}/out/sig_{DEPTH}_{MINP}.npz'
if not os.path.exists(sp):
    raise SystemExit(f'no such signal file: {sp}')
z = np.load(sp)
arms = [(k, lab, c) for k, lab, c in COL if k in z.files]
missing = [k for k, *_ in COL if k not in z.files]
if missing:
    print(f'note: not in this npz, skipped -- {", ".join(missing)}')

# per-arm threshold reproducing the deployed VR2 data rate (the honest comparison)
dfiles = sorted(glob.glob(f'{SD}/out/data_vr2_*.npz'))
dz = [np.load(f) for f in dfiles]
ref = np.concatenate([d['RNNScore'] for d in dz]).astype(np.float64)
target = float(np.mean(ref >= CUT))
thr = {}
for k, *_ in arms:
    v = np.concatenate([d[k] for d in dz]).astype(np.float64)
    thr[k] = float(np.quantile(v, 1.0 - target))
del dz

MDM = 2 * MINP / 1000.
print(f'\n=== M_DM = {MDM:g} TeV  (MinP {MINP}, SurfaceDepth {DEPTH}), '
      f'N = {len(z["RNNScore"])} events ===')
print(f'  VR2 data pass rate being matched: {target:.6e}\n')
print(f'{"arm":>14s} {"fixed T>4":>10s} {"matched thr (T)":>16s} {"matched eff":>12s} '
      f'{"vs v5 matched":>14s} {"saturated":>10s}')
hs, effs = [], {}
for k, lab, c in arms:
    t = T(z[k])
    hs.append((k, lab, c, fill(t)))
    effs[k] = (float(np.mean(t > T_CUT)),
               float(np.mean(z[k].astype(np.float64) >= thr[k])),
               float(np.mean(t >= THI)))
ref_m = effs['RNNScore'][1]
for k, lab, c, h in hs:
    f_, m_, o_ = effs[k]
    print(f'{k:>14s} {f_:10.4f} {min(T(thr[k]), 9.99):16.3f} {m_:12.4f} '
          f'{m_/ref_m if ref_m else 0:14.3f} {o_:10.4f}')
print(f'\n  "saturated" = fraction with 1 - S < 1e-6, i.e. the overflow bin. It is a\n'
      f'  large part of every signal sample, which is why it is drawn separately.')

# ------------------------------------------------------------------------ figure
keep = []
c = ROOT.TCanvas('c', '', 900, 900)          # square, per project convention
keep.append(c)
c.SetLeftMargin(.15); c.SetRightMargin(.05); c.SetTopMargin(.08); c.SetBottomMargin(.13)
c.SetLogy(True)
ymax = max(h.GetMaximum() for *_, h in hs)
fr = ROOT.TH1F('fr', '', NB + 1, EDGES)
keep.append(fr)
fr.SetStats(False); fr.SetMinimum(3e-4); fr.SetMaximum(ymax * 60)
fr.GetXaxis().SetTitle('T = #minus log_{10}(1 #minus S)')
fr.GetYaxis().SetTitle('fraction of events / bin')
fr.GetYaxis().SetTitleSize(.045); fr.GetXaxis().SetTitleSize(.045)
fr.GetYaxis().SetTitleOffset(1.45)
fr.GetYaxis().SetLabelSize(.038); fr.GetXaxis().SetLabelSize(.038)
fr.Draw()

for k, lab, col, h in hs:
    h.SetLineColor(col)
    h.SetLineWidth(4 if k in EMPH else 2)
    h.SetLineStyle(1 if k in EMPH else (2 if k == 'old_v5' else 1))
    h.Draw('HIST SAME')
    keep.append(h)
    # each arm's matched-rate threshold, as a tick just under the top frame
    tk = ROOT.TLine(T(thr[k]), ymax * 18, T(thr[k]), ymax * 34)
    tk.SetLineColor(col); tk.SetLineWidth(2); tk.Draw()
    keep.append(tk)

ln = ROOT.TLine(T_CUT, 3e-4, T_CUT, ymax * 16)
keep.append(ln)
ln.SetLineColor(ROOT.kRed + 1); ln.SetLineStyle(2); ln.SetLineWidth(3); ln.Draw()

# separate the overflow bin so nobody reads it as just another 0.1-wide bin
sep = ROOT.TLine(THI, 3e-4, THI, ymax * 60)
keep.append(sep)
sep.SetLineColor(ROOT.kBlack); sep.SetLineStyle(3); sep.SetLineWidth(2); sep.Draw()
ov = ROOT.TLatex(); keep.append(ov)
ov.SetTextSize(.024); ov.SetTextFont(42); ov.SetTextAlign(22)
ov.DrawLatex(THI + 0.5 * OVF_W, ymax * 110, '#splitline{over-}{flow}')
tx = ROOT.TLatex(); keep.append(tx)
tx.SetTextSize(.026); tx.SetTextColor(ROOT.kRed + 1); tx.SetTextAngle(90)
tx.DrawLatex(T_CUT - 0.15, ymax * 0.02, 'fixed cut  S #geq 0.9999')
tl = ROOT.TLatex(); keep.append(tl)
tl.SetNDC(); tl.SetTextSize(.021); tl.SetTextFont(42)
tl.DrawLatex(.17, .915, 'ticks = per-arm threshold matching the deployed VR2 data rate')

leg = ROOT.TLegend(.17, .55, .60, .885)
keep.append(leg)
leg.SetBorderSize(0); leg.SetFillStyle(0); leg.SetTextFont(42); leg.SetTextSize(.0195)
leg.SetNColumns(2)
leg.SetHeader(f'M_{{DM}} = {MDM:g} TeV,  SurfaceDepth {DEPTH}')
for k, lab, col, h in hs:
    leg.AddEntry(h, lab, 'l')
leg.Draw()

CMS.CMS_lumi(c, iPosX=0, scaleLumi=0)
base = f'{OUT}/signal_RNN_T_allarms_M{MDM:g}TeV_{DEPTH}'
for e in ('png', 'pdf'):
    c.SaveAs(f'{base}.{e}')
print(f'\nwrote {base}.{{png,pdf}}')
