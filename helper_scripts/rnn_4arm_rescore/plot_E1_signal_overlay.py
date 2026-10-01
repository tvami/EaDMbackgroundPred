#!/usr/bin/env python3
"""E1 RNN score distribution for every signal mass point, overlaid.

Plotted in T = -log10(1 - S), the same variable the mid-RNN band is measured in.
The raw score is useless for this: every signal piles into the last bin at S ~ 1 and
the interesting structure lives in the 1e-4 to 1e-6 approach to 1. T spreads that out
linearly -- T = 4 is exactly the S >= 0.9999 SR cut, T = 6 is S >= 1e-6 from unity.

Curves are area-normalized so shapes are comparable across mass points with very
different statistics. The cosmic MC background (SR selection) is drawn as a filled
grey reference so the separation is visible, and the deployed v5 signal shape is drawn
dashed for the lightest and heaviest points as a sanity anchor.

Usage: plot_E1_signal_overlay.py [ARM] [DEPTH]      defaults: E1_match e4
"""
import glob, os, re, sys
import numpy as np
import ROOT, cmsstyle as CMS

ROOT.gROOT.SetBatch(True)
ROOT.gErrorIgnoreLevel = ROOT.kWarning
CMS.SetExtraText('Work in Progress')

SD = os.path.dirname(os.path.abspath(__file__))
ARM = sys.argv[1] if len(sys.argv) > 1 else 'E1_match'
DEPTH = sys.argv[2] if len(sys.argv) > 2 else 'e4'
OUT = ('/home/users/tvami/EarthAsDM/CMSSW_14_1_0_pre4/src/helper_scripts/figures/'
       'rnn_4arm_dataVsMC')
os.makedirs(OUT, exist_ok=True)
# full match so sig_e4_1000_shift8.npz is not swallowed -- it is the SHIFTED twin and
# mixing it in would average two different t0 frames into one curve.
FPAT = re.compile(rf'sig_{DEPTH}_(\d+)\.npz$')
HELD_OUT = (1000, 5000, 10000, 90000)
T_CUT = 4.0                      # S >= 0.9999, the SR cut
NB, TLO, THI = 60, 0.0, 6.0


def T(s):
    s = np.asarray(s, dtype=np.float64)
    return np.where(s >= 1.0, 5.99, -np.log10(np.clip(1.0 - s, 1e-8, None)))


def hist(vals, name, nb=NB):
    h = ROOT.TH1F(name, '', nb, TLO, THI)
    for v in vals:
        h.Fill(min(max(v, TLO + 1e-6), THI - 1e-6))
    if h.Integral() > 0:
        h.Scale(1.0 / h.Integral())
    return h


files = sorted([f for f in glob.glob(f'{SD}/out/sig_{DEPTH}_*.npz')
                if FPAT.search(os.path.basename(f))],
               key=lambda x: int(FPAT.search(os.path.basename(x)).group(1)))
if not files:
    raise SystemExit(f'no sig_{DEPTH}_*.npz in {SD}/out')

masses, hs = [], []
print(f'=== {ARM} score distribution per signal mass, {DEPTH} ===')
print(f'{"M_DM":>9s} {"MinP":>7s} {"N":>8s} {"mean T":>8s} {"frac T>4":>9s}  held-out')
for p in files:
    m = int(FPAT.search(os.path.basename(p)).group(1))
    z = np.load(p)
    if ARM not in z.files:
        raise SystemExit(f'{ARM} not a column in {p}; have {z.files}')
    t = T(z[ARM])
    masses.append(m)
    hs.append(hist(t, f'h_{m}'))
    print(f'{2*m/1000.:8.1f}T {m:7d} {len(t):8d} {t.mean():8.3f} '
          f'{np.mean(t > T_CUT):9.4f}  {"YES" if m in HELD_OUT else "-"}')

# background reference: cosmic MC in the SR selection, same arm, same normalization
bkg = None
bp = f'{SD}/out/cosmicMC_sr.npz'
if os.path.exists(bp):
    zb = np.load(bp)
    if ARM in zb.files:
        bkg = hist(T(zb[ARM]), 'h_bkg')
        print(f'\nbackground (cosmicMC sr): N={len(zb[ARM])}, '
              f'frac T>4 = {np.mean(T(zb[ARM]) > T_CUT):.4f}')

# ------------------------------------------------------------------------ figure
ROOT.gStyle.SetPalette(ROOT.kViridis)
ncol = ROOT.TColor.GetNumberOfColors()
keep = []
c = ROOT.TCanvas('c', '', 900, 900)          # square, per project convention
keep.append(c)
c.SetLeftMargin(.15); c.SetRightMargin(.05); c.SetTopMargin(.08); c.SetBottomMargin(.13)
c.SetLogy(True)

ymax = max(h.GetMaximum() for h in hs)
fr = ROOT.TH1F('fr', '', NB, TLO, THI)
keep.append(fr)
fr.SetStats(False)
fr.SetMinimum(2e-5); fr.SetMaximum(ymax * 12)
fr.GetXaxis().SetTitle('T = #minus log_{10}(1 #minus S)')
fr.GetYaxis().SetTitle('fraction of events / bin')
fr.GetYaxis().SetTitleSize(.045); fr.GetXaxis().SetTitleSize(.045)
fr.GetYaxis().SetTitleOffset(1.45)
fr.GetYaxis().SetLabelSize(.038); fr.GetXaxis().SetLabelSize(.038)
fr.Draw()

if bkg is not None:
    bkg.SetFillColorAlpha(ROOT.kGray + 1, 0.55)
    bkg.SetLineColor(ROOT.kGray + 3); bkg.SetLineWidth(2)
    bkg.Draw('HIST SAME')
    keep.append(bkg)

for i, (m, h) in enumerate(zip(masses, hs)):
    col = ROOT.TColor.GetColorPalette(int(i * (ncol - 1) / max(len(masses) - 1, 1)))
    h.SetLineColor(col); h.SetLineWidth(3 if m in HELD_OUT else 2)
    h.SetLineStyle(1 if m in HELD_OUT else 7)
    h.Draw('HIST SAME')
    keep.append(h)

# the SR cut
ln = ROOT.TLine(T_CUT, 2e-5, T_CUT, ymax * 12)
keep.append(ln)
ln.SetLineColor(ROOT.kRed + 1); ln.SetLineStyle(2); ln.SetLineWidth(3); ln.Draw()
tx = ROOT.TLatex(); keep.append(tx)
tx.SetNDC(False); tx.SetTextSize(.030); tx.SetTextColor(ROOT.kRed + 1)
tx.SetTextAngle(90)
tx.DrawLatex(T_CUT - 0.16, ymax * 0.06, 'SR cut  S #geq 0.9999')

# legend: one entry per decade of mass rather than all 18, plus the endpoints
leg = ROOT.TLegend(.19, .60, .58, .89)
keep.append(leg)
leg.SetBorderSize(0); leg.SetFillStyle(0); leg.SetTextFont(42); leg.SetTextSize(.022)
leg.SetHeader(f'{ARM},  SurfaceDepth {DEPTH}')
if bkg is not None:
    leg.AddEntry(bkg, 'cosmic MC background (SR)', 'f')
show = [masses[0], masses[len(masses)//3], masses[2*len(masses)//3], masses[-1]]
for m in show:
    h = hs[masses.index(m)]
    leg.AddEntry(h, f'M_{{DM}} = {2*m/1000.:g} TeV', 'l')
leg.AddEntry(0, 'solid = held-out mass, dashed = trained', '')
leg.AddEntry(0, f'colour: {2*masses[0]/1000.:g} #rightarrow '
                f'{2*masses[-1]/1000.:g} TeV (dark #rightarrow light)', '')
leg.Draw()

CMS.CMS_lumi(c, iPosX=0, scaleLumi=0)
base = f'{OUT}/signal_RNN_T_overlay_{ARM}_{DEPTH}'
for e in ('png', 'pdf'):
    c.SaveAs(f'{base}.{e}')
print(f'\nwrote {base}.{{png,pdf}}')
