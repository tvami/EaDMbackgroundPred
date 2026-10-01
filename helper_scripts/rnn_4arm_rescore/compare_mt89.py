#!/usr/bin/env python3
"""Score-distribution comparison for the re-ntuplized MaxTheta-89 cone sample.

Answers one question: when the label-0 MC is re-ntuplized with the CURRENT tvami
ntuplizer, does the cone89 network's data/MC agreement change?

Three curves, one arm at a time, all in that arm's own score:
  data      Run-3 Cosmics                     (out/data_<region>_*.npz)
  MC-75     deployed MaxTheta-75 cosmic MC    (out/cosmicMC_<region>.npz)
  MC-89new  re-ntuplized MaxTheta-89 v5a      (out/cosmicMC89_<region>.npz, cluster 372454)

WHY THIS IS NOT plot_arms_dataVsMC.py. That script reads ONE MC file and needs an
'RNNScore' column in every npz -- it is the reference all its ratios are quoted
against. The 89 skim lives in the plain Ntuples_v5.0.0 tree and carries no stored
RNNScore branch (rescore_arms.py drops missing EXTRA branches at line 179), exactly
like the smasanam cone skims. So the 89 npz has no such column and cannot be fed to
that script. Here every ratio is internal to the chosen arm, so none is needed.

WHAT THE COMPARISON DOES AND DOES NOT ISOLATE. cone89 trained label 0 on smasanam's
Ntuplizer-0to89Theta campaign; this sample re-ntuplizes THE SAME underlying RAWtoReco
events with the current ntuplizer. So MC-89new is essentially cone89's own training
events seen through a different ntuplizer. That removes the campaign half of the
cone-vs-deployed confound, but it is NOT an independent test set, and it does not
close the 2.5x label-0 statistics gap. Read a change here as an ntuplizer effect on
an in-domain sample, nothing stronger.

Usage: compare_mt89.py [region] [arm]        (defaults: vr2 cone89)
"""
import os, sys, glob
import numpy as np
import ROOT, cmsstyle as CMS

ROOT.gROOT.SetBatch(True)
ROOT.gErrorIgnoreLevel = ROOT.kWarning
# cmsstyle leaves the stats box on; Clone() then carries it into every ratio pad.
ROOT.gStyle.SetOptStat(0)
CMS.SetExtraText('Work in Progress')

SD = os.path.dirname(os.path.abspath(__file__))
OUT = ('/home/users/tvami/EarthAsDM/CMSSW_14_1_0_pre4/src/helper_scripts/figures/'
       'rnn_4arm_dataVsMC')
os.makedirs(OUT, exist_ok=True)

REGION = sys.argv[1] if len(sys.argv) > 1 else 'vr2'
ARM = sys.argv[2] if len(sys.argv) > 2 else 'cone89'
# Same binning/limits/pass point as plot_arms_dataVsMC.py, so numbers are comparable
# line-for-line with analysis_16net_*.{vr1,vr2}.txt.
NB, TLO, THI, T_PASS = 60, 0.0, 6.0, 4.0
REGLAB = {'vr2': 'VR2:  p_{T} < 200 GeV', 'vr1': 'VR1:  p_{T} > 200 GeV',
          'sr': 'SR:  p_{T} > 200 GeV'}[REGION]

T = lambda s: np.where(s >= 1.0, 5.99, -np.log10(np.clip(1.0 - s, 1e-8, None)))
keep = []


def load(pat, col):
    fs = sorted(glob.glob(f'{SD}/out/{pat}'))
    if not fs:
        raise SystemExit(f'no score files match {pat} -- has the re-score finished?')
    zs = [np.load(f) for f in fs]
    missing = [f for f, z in zip(fs, zs) if col not in z]
    if missing:
        raise SystemExit(f'column {col!r} absent from {os.path.basename(missing[0])}')
    return np.concatenate([z[col] for z in zs]), len(fs)


def mk(vals, name):
    h = ROOT.TH1D(name, '', NB, TLO, THI)
    h.SetDirectory(0)
    t = np.minimum(T(np.asarray(vals, float)), 5.99)
    cnt, _ = np.histogram(t, bins=NB, range=(TLO, THI))
    for ib in range(NB):
        h.SetBinContent(ib + 1, float(cnt[ib]))
        h.SetBinError(ib + 1, float(np.sqrt(cnt[ib])))
    n = h.Integral()
    if n > 0:
        h.Scale(1.0 / n)
    keep.append(h)
    return h


dat, nfd = load(f'data_{REGION}_*.npz', ARM)
mc75, _ = load(f'cosmicMC_{REGION}.npz', ARM)
mc89, _ = load(f'cosmicMC89_{REGION}.npz', ARM)
ndat, n75, n89 = len(dat), len(mc75), len(mc89)
print(f'{REGION} / {ARM}: data {ndat} ({nfd} shards), MC-75 {n75}, MC-89new {n89}')

h_d, h_75, h_89 = mk(dat, 'hd'), mk(mc75, 'h75'), mk(mc89, 'h89')
raw = {'MC-75': (h_75, n75), 'MC-89new': (h_89, n89)}


def ratio(hm, hd, nmc, name):
    r = hm.Clone(name)
    r.SetDirectory(0)
    for ib in range(1, NB + 1):
        d, m = hd.GetBinContent(ib), hm.GetBinContent(ib)
        r.SetBinContent(ib, m / d if d > 0 else 0.0)
        # Poisson on the raw MC count, recovered from the normalized content
        r.SetBinError(ib, (m / d) / np.sqrt(max(m * nmc, 1e-9)) if d > 0 and m > 0 else 0.0)
    keep.append(r)
    return r


def tail_ratio(hm, hd, nmc, name):
    r = hm.Clone(name)
    r.SetDirectory(0)
    for ib in range(1, NB + 1):
        di, mi = hd.Integral(ib, NB), hm.Integral(ib, NB)
        r.SetBinContent(ib, mi / di if di > 0 else 0.0)
        r.SetBinError(ib, (mi / di) / np.sqrt(max(mi * nmc, 1e-9)) if di > 0 and mi > 0 else 0.0)
    keep.append(r)
    return r


# ------------------------------------------------------------------ numbers
ilo, ihi = h_d.FindBin(0.26 + 1e-6), h_d.FindBin(3.0 - 1e-6)
ip = h_d.FindBin(T_PASS + 1e-6)
dband, dp = h_d.Integral(ilo, ihi), h_d.Integral(ip, NB)

print(f'\n=== {REGION} / {ARM}: mid-RNN band (0.26<T<3) and pass region (S>=0.9999) ===')
print(f'{"MC sample":>10s} {"band MC/data":>13s} {"pass MC/data":>13s} '
      f'{"n_MC pass":>10s} {"n_data pass":>12s}')
for lab, (h, n) in raw.items():
    mband, mp = h.Integral(ilo, ihi), h.Integral(ip, NB)
    print(f'{lab:>10s} {mband / dband if dband else 0:13.3f} '
          f'{mp / dp if dp else 0:13.3f} {mp * n:10.1f} {dp * ndat:12.0f}')

print(f'\n=== {REGION} / {ARM}: tail-integral MC/data (fraction above the bin low edge) ===')
print(f'{"T>":>6s} {"S>":>11s} {"MC-75":>10s} {"MC-89new":>10s}')
for t in (0.0, 0.26, 1.0, 2.0, 3.0, 4.0, 5.0):
    ib = h_d.FindBin(t + 1e-6)
    di = h_d.Integral(ib, NB)
    vals = []
    for lab, (h, n) in raw.items():
        vals.append(h.Integral(ib, NB) / di if di > 0 else 0.0)
    print(f'{t:6.2f} {1 - 10 ** (-t):11.6f} {vals[0]:10.3f} {vals[1]:10.3f}')

# ------------------------------------------------------------------ figure
r1_75, r1_89 = ratio(h_75, h_d, n75, 'r1_75'), ratio(h_89, h_d, n89, 'r1_89')
r2_75, r2_89 = tail_ratio(h_75, h_d, n75, 'r2_75'), tail_ratio(h_89, h_d, n89, 'r2_89')

C75, C89 = ROOT.kAzure + 2, ROOT.kRed + 1


def sty(h, title, tsz, toff, lsz, xlab):
    h.GetYaxis().SetTitle(title)
    h.GetYaxis().SetTitleSize(tsz)
    h.GetYaxis().SetTitleOffset(toff)
    h.GetYaxis().SetLabelSize(lsz)
    h.GetYaxis().SetNdivisions(505)
    h.GetXaxis().SetTitle('-log_{10}(1 - RNN Score)' if xlab else '')
    h.GetXaxis().SetTitleSize(.145 if xlab else 0)
    h.GetXaxis().SetLabelSize(.145 if xlab else 0)
    h.SetMinimum(0.0)
    h.SetMaximum(3.0)


c = ROOT.TCanvas('c', '', 800, 800)
p1 = ROOT.TPad('p1', '', 0, .46, 1, 1); p1.SetBottomMargin(.02); p1.SetLogy(); p1.Draw()
p2 = ROOT.TPad('p2', '', 0, .24, 1, .46); p2.SetTopMargin(.02); p2.SetBottomMargin(.04); p2.Draw()
p3 = ROOT.TPad('p3', '', 0, 0, 1, .24); p3.SetTopMargin(.02); p3.SetBottomMargin(.34); p3.Draw()
for p in (p1, p2, p3):
    p.SetLeftMargin(.13); p.SetRightMargin(.04); p.SetTicks(1, 1)

p1.cd()
h_d.SetMarkerStyle(20); h_d.SetMarkerSize(.6); h_d.SetLineColor(ROOT.kBlack)
h_d.GetYaxis().SetTitle('Normalized yield / bin')
h_d.GetYaxis().SetTitleSize(.055); h_d.GetYaxis().SetTitleOffset(1.15)
h_d.GetXaxis().SetLabelSize(0)
h_d.SetMinimum(3e-7); h_d.SetMaximum(3.0)
h_d.Draw('E')
for h, col in ((h_75, C75), (h_89, C89)):
    h.SetLineColor(col); h.SetLineWidth(2); h.Draw('HIST SAME')
h_d.Draw('E SAME')

leg = ROOT.TLegend(.42, .66, .95, .90)
leg.SetBorderSize(0); leg.SetFillStyle(0); leg.SetTextSize(.040)
leg.AddEntry(h_d, 'Run-3 Cosmics (all runs)', 'lep')
leg.AddEntry(h_75, f'MC MaxTheta-75, deployed ({n75})', 'l')
leg.AddEntry(h_89, f'MC MaxTheta-89 re-ntuplized ({n89})', 'l')
leg.Draw()

lat = ROOT.TLatex(); lat.SetNDC(); lat.SetTextSize(.042)
lat.DrawLatex(.17, .30, REGLAB)
lat.DrawLatex(.17, .24, f'arm: {ARM},  no t_{{0}} shift, area-normalized')
lat.DrawLatex(.17, .18, 'same events, same network - only the MC sample differs')

ln = ROOT.TLine(T_PASS, 3e-7, T_PASS, 3.0)
ln.SetLineColor(ROOT.kRed + 2); ln.SetLineStyle(2); ln.Draw()
CMS.CMS_lumi(p1, 0, 0)

for pad, (a, b, lab, xlab) in ((p2, (r1_75, r1_89, 'MC / data', False)),
                               (p3, (r2_75, r2_89, '#int_{bin}^{#infty} MC/data', True))):
    pad.cd()
    sty(a, lab, .165 if not xlab else .130, .38 if not xlab else .46, .145, xlab)
    a.SetLineColor(C75); a.SetMarkerColor(C75); a.SetMarkerStyle(20); a.SetMarkerSize(.5)
    b.SetLineColor(C89); b.SetMarkerColor(C89); b.SetMarkerStyle(21); b.SetMarkerSize(.5)
    a.Draw('E'); b.Draw('E SAME')
    one = ROOT.TLine(TLO, 1, THI, 1); one.SetLineStyle(1); one.Draw(); keep.append(one)
    lp = ROOT.TLine(T_PASS, 0, T_PASS, 3.0)
    lp.SetLineColor(ROOT.kRed + 2); lp.SetLineStyle(2); lp.Draw(); keep.append(lp)

for e in ('png', 'pdf'):
    c.SaveAs(f'{OUT}/{REGION}_RNNScore_mt89compare_{ARM}.{e}')
print(f'\nwrote {OUT}/{REGION}_RNNScore_mt89compare_{ARM}.{{png,pdf}}')
