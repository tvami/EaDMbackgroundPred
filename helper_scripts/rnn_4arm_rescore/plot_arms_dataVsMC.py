#!/usr/bin/env python3
"""Data vs cosmic Bkg MC for the retrained RNN arms, in the 3-pad layout of
figures/vr2_rnn_hotrun_study/vr2_RNNScore_dataVsMC_t0shift8ns.

Pads: (1) area-normalized distribution in T = -log10(1-S), so the pass boundary
S >= 0.9999 sits at T = 4; (2) bin-by-bin MC/data; (3) tail-integral MC/data --
for each bin, the MC/data ratio of the integral from that bin up, i.e. what a cut
at that RNN value would select.

NO t0 shift and NO smearing anywhere: the point of the retraining is to test
whether the arms still need the +8 ns patch, and arm 4's smearing is training-time
augmentation only. Each network defines its own score, so data and MC are both
re-scored per arm and every ratio is internal to that arm.

Writes one figure per arm plus a combined overlay of the ratios.
Run with plain cmsenv (NOT twoD-env, which shadows cmsstyle).
"""
import os, sys, glob
import numpy as np
import ROOT, cmsstyle as CMS

ROOT.gROOT.SetBatch(True)
ROOT.gErrorIgnoreLevel = ROOT.kWarning
CMS.SetExtraText('Work in Progress')

SD = os.path.dirname(os.path.abspath(__file__))
OUT = ('/home/users/tvami/EarthAsDM/CMSSW_14_1_0_pre4/src/helper_scripts/figures/'
       'rnn_4arm_dataVsMC')
os.makedirs(OUT, exist_ok=True)

REGION = sys.argv[1] if len(sys.argv) > 1 else 'vr2'
NB, TLO, THI, T_PASS = 60, 0.0, 6.0, 4.0
REGLAB = {'vr2': 'VR2:  p_{T} < 200 GeV', 'vr1': 'VR1:  p_{T} > 200 GeV',
          'sr': 'SR:  p_{T} > 200 GeV'}[REGION]

# The deployed-v5 reference is the STORED RNNScore branch, not the re-scored
# 'old_v5' column. Both are the same network, but the re-score is built at nMax=64 to
# match how arms 2/3/4 were trained, whereas v5 was trained and deployed at the
# per-file max multiplicity -- so for the ~0.1% of events with >64 DT segments the
# clipped re-score disagrees badly (mean|diff| 7e-5 but max|diff| 0.998). That is a
# 1e-4-level distortion sitting right on top of a 2e-5 pass fraction, so the
# reference has to come from the production branch. The 'old_v5' column stays in the
# npz purely as the nMax-consistency diagnostic that revealed this.
#
# ONLY_ARMS=E1_match,arm5_match (comma-separated) restricts the overlay to a subset
# -- twelve networks in one legend is unreadable, and the round-2 question is only
# about the variant grid against the v5 reference.
ARMS = [('RNNScore',     'v5 network (deployed, stored score)',  ROOT.kGray + 2),
        ('arm2_control', 'arm 2  absoluteT0 control',            ROOT.kAzure + 1),
        ('arm3_shift8',  'arm 3  shift8ns_absolute',             ROOT.kGreen + 2),
        ('arm4_smear12', 'arm 4  smear12ns_absolute',            ROOT.kRed + 1),
        ('arm5_match',   'arm 5  matchL0toData (+12.2, #sigma7.2)', ROOT.kOrange + 7),
        ('arm1_center',  'arm 1  centeredT0_median',             ROOT.kViolet + 1),
        ('arm5b_match',  'arm 5b  (+11.6, #sigma8.3)',           ROOT.kOrange + 3),
        ('E1_match',     'E1  matched point (+11.0, #sigma7.7)', ROOT.kBlue + 2),
        ('J_jitter2p8',  'J  E1 + 2.8 ns segment jitter',        ROOT.kTeal + 3),
        ('Jo_jitter1p5', 'Jo  E1 + 1.5 ns segment jitter',       ROOT.kSpring + 4),
        ('N_noNeutrino', 'N  no-neutrino label 1, absolute t_{0}', ROOT.kMagenta + 2),
        ('NJ_noNu_E1',   'NJ  no-neutrino + E1',                 ROOT.kPink + 7),
        ('Sp_shift13',   'Sp  shift gradient (+13.0, #sigma7.7)', ROOT.kCyan + 2),
        ('Wp_smear11',   'Wp  smear gradient (+11.0, #sigma11.0)', ROOT.kOrange + 10),
        ('cone89',       'C89  0-89 cone label 0',                ROOT.kRed + 3),
        ('cone75n',      'C75n  0-75 cone, same campaign',        ROOT.kBlue - 7)]
_only = os.environ.get('ONLY_ARMS', '').strip()
if _only:
    want = [s.strip() for s in _only.split(',')]
    missing = [w for w in want if w not in [k for k, *_ in ARMS]]
    if missing:
        raise SystemExit(f'ONLY_ARMS: unknown arm(s) {missing}')
    # RNNScore is not optional: it is the reference the band table and the bin
    # lookups are built from, and every ratio is quoted against it.
    ARMS = [a for a in ARMS if a[0] in want or a[0] == 'RNNScore']

keep = []
T = lambda s: np.where(s >= 1.0, 5.99, -np.log10(np.clip(1.0 - s, 1e-8, None)))


def mk(vals, name):
    """Area-normalized T histogram. np.histogram, not TH1::Fill -- filling 28.45M
    events one at a time from Python is prohibitively slow."""
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
    return h, n


def load(pat):
    fs = sorted(glob.glob(f'{SD}/out/{pat}'))
    if not fs:
        raise SystemExit(f'no score files match {pat}')
    zs = [np.load(f) for f in fs]
    return {k: np.concatenate([z[k] for z in zs]) for k, *_ in ARMS}, len(fs)


dat, nfd = load(f'data_{REGION}_*.npz')
mc, _ = load(f'cosmicMC_{REGION}.npz')
ndat, nmc = len(dat['RNNScore']), len(mc['RNNScore'])
print(f'{REGION}: data {ndat} events ({nfd} shards), cosmic MC {nmc} events')

h_d, h_m = {}, {}
for k, *_ in ARMS:
    h_d[k], _ = mk(dat[k], f'hd_{k}')
    h_m[k], _ = mk(mc[k], f'hm_{k}')


def tail_ratio(hmc, hdat, name):
    r = hdat.Clone(name)
    r.SetDirectory(0)
    r.Reset()
    nb = hdat.GetNbinsX()
    for ib in range(1, nb + 1):
        di, mi = hdat.Integral(ib, nb), hmc.Integral(ib, nb)
        if di > 0 and mi > 0:
            r.SetBinContent(ib, mi / di)
            # Poisson on the raw MC tail count, recovered from the normalized
            # fraction; the data statistical error is negligible next to it
            r.SetBinError(ib, (mi / di) / np.sqrt(max(mi * nmc, 1e-9)))
        else:
            r.SetBinContent(ib, 0.)
            r.SetBinError(ib, 0.)
    keep.append(r)
    return r


def sty(h, yt, tsz, osz, lsz, xlab):
    h.SetStats(False)
    h.SetMinimum(0.)
    h.SetMaximum(3.2)
    h.GetYaxis().SetTitle(yt)
    h.GetYaxis().SetNdivisions(505)
    h.GetYaxis().SetTitleSize(tsz)
    h.GetYaxis().SetTitleOffset(osz)
    h.GetYaxis().SetLabelSize(lsz)
    h.SetFillStyle(0)
    h.SetMarkerSize(.8)
    if xlab:
        h.GetXaxis().SetTitle('-log_{10}(1 - RNN Score)')
        h.GetXaxis().SetTitleSize(.165)
        h.GetXaxis().SetTitleOffset(1.00)
        h.GetXaxis().SetLabelSize(.145)
    else:
        h.GetXaxis().SetLabelSize(0)
        h.GetXaxis().SetTitleSize(0)


def make_pads(cname):
    c = ROOT.TCanvas(cname, '', 900, 900)
    pm = ROOT.TPad('pm' + cname, '', 0, .42, 1, 1.)
    r1p = ROOT.TPad('r1p' + cname, '', 0, .21, 1, .42)
    r2p = ROOT.TPad('r2p' + cname, '', 0, 0., 1, .21)
    keep.extend([c, pm, r1p, r2p])
    for p in (pm, r1p, r2p):
        p.SetLeftMargin(.15)
        p.SetRightMargin(.05)
    pm.SetBottomMargin(.02)
    pm.SetTopMargin(.08)
    r1p.SetTopMargin(.03)
    r1p.SetBottomMargin(.04)
    r2p.SetTopMargin(.03)
    r2p.SetBottomMargin(.40)
    pm.SetLogy(True)
    pm.Draw()
    r1p.Draw()
    r2p.Draw()
    return c, pm, r1p, r2p


def top_frame():
    fr = ROOT.TH1F('fr' + str(len(keep)), '', NB, TLO, THI)
    keep.append(fr)
    fr.SetStats(False)
    fr.SetMinimum(2e-7)
    fr.SetMaximum(4.)
    fr.GetYaxis().SetTitle('Normalized yield / bin')
    fr.GetYaxis().SetTitleSize(.055)
    fr.GetYaxis().SetTitleOffset(1.20)
    fr.GetYaxis().SetLabelSize(.045)
    fr.GetXaxis().SetLabelSize(0)
    fr.Draw()
    return fr


def pass_line(ymax_top=4e-2):
    ln = ROOT.TLine(T_PASS, 2e-7, T_PASS, ymax_top)
    keep.append(ln)
    ln.SetLineStyle(2)
    ln.SetLineWidth(2)
    ln.SetLineColor(ROOT.kRed + 1)
    ln.Draw()
    tx = ROOT.TLatex()
    keep.append(tx)
    tx.SetTextSize(.040)
    tx.SetTextColor(ROOT.kRed + 1)
    tx.SetTextAngle(90)
    tx.DrawLatex(T_PASS - .16, 1e-5, 'PASS: S #geq 0.9999')


def ratio_pass_line():
    lp = ROOT.TLine(T_PASS, 0, T_PASS, 3.2)
    keep.append(lp)
    lp.SetLineStyle(2)
    lp.SetLineColor(ROOT.kRed + 1)
    lp.Draw()


def pave(extra=''):
    pv = ROOT.TPaveText(.18, .06, .60, .22, 'NDC')
    keep.append(pv)
    pv.SetFillColor(0)
    pv.SetBorderSize(0)
    pv.SetTextAlign(12)
    pv.SetTextSize(.037)
    pv.AddText(REGLAB)
    pv.AddText('no t_{0} shift, area-normalized')
    if extra:
        pv.AddText(extra)
    pv.Draw()


# ---------------------------------------------------------------- per-arm figures
for k, lab, col in ARMS:
    c, pm, r1p, r2p = make_pads('c_' + k)
    pm.cd()
    top_frame()
    hm, hd = h_m[k], h_d[k]
    hm.SetLineColor(col)
    hm.SetLineWidth(3)
    hm.Draw('HIST SAME')
    hd.SetMarkerStyle(20)
    hd.SetMarkerSize(.7)
    hd.SetMarkerColor(ROOT.kBlack)
    hd.SetLineColor(ROOT.kBlack)
    hd.Draw('P E SAME')
    leg = ROOT.TLegend(.34, .70, .95, .90)
    keep.append(leg)
    leg.SetBorderSize(0)
    leg.SetFillStyle(0)
    leg.SetTextFont(42)
    leg.SetTextSize(.038)
    leg.AddEntry(hd, 'Run-3 Cosmics (all runs)', 'pe')
    leg.AddEntry(hm, 'Cosmic Bkg MC', 'l')
    leg.Draw()
    pass_line()
    pave(lab)
    CMS.CMS_lumi(pm, iPosX=0, scaleLumi=0)

    r1p.cd()
    r1 = hm.Clone('r1o_' + k)
    r1.Divide(hd)
    keep.append(r1)
    sty(r1, 'MC / data', .165, .38, .145, False)
    r1.SetMarkerStyle(20)
    r1.SetMarkerColor(col)
    r1.SetLineColor(col)
    r1.Draw('P E')
    ROOT.TLine().DrawLine(TLO, 1, THI, 1)
    ratio_pass_line()

    r2p.cd()
    r2 = tail_ratio(hm, hd, 'r2o_' + k)
    sty(r2, '#int_{bin}^{#infty} MC/data', .130, .46, .145, True)
    r2.SetMarkerStyle(20)
    r2.SetMarkerColor(col)
    r2.SetLineColor(col)
    r2.Draw('P E')
    ROOT.TLine().DrawLine(TLO, 1, THI, 1)
    ratio_pass_line()

    for e in ('png', 'pdf'):
        c.SaveAs(f'{OUT}/{REGION}_RNNScore_dataVsMC_{k}.{e}')
    print(f'wrote {OUT}/{REGION}_RNNScore_dataVsMC_{k}.{{png,pdf}}')

# ---------------------------------------------------------------- combined overlay
c, pm, r1p, r2p = make_pads('c_all')
pm.cd()
top_frame()
# two columns past ~7 entries: twelve rows at .033 runs off the pad
_ncol = 2 if len(ARMS) > 7 else 1
leg = ROOT.TLegend(.28 if _ncol == 1 else .22, .58, .95, .90)
keep.append(leg)
leg.SetBorderSize(0)
leg.SetFillStyle(0)
leg.SetTextFont(42)
leg.SetTextSize(.033 if _ncol == 1 else .023)
leg.SetNColumns(_ncol)
leg.SetHeader('lines = Cosmic Bkg MC,  markers = Run-3 Cosmics data')
for k, lab, col in ARMS:
    h_m[k].SetLineColor(col)
    h_m[k].SetLineWidth(3)
    h_m[k].SetLineStyle(2 if k == 'RNNScore' else 1)
    h_m[k].Draw('HIST SAME')
    h_d[k].SetMarkerStyle(20)
    h_d[k].SetMarkerSize(.5)
    h_d[k].SetMarkerColor(col)
    h_d[k].SetLineColor(col)
    h_d[k].Draw('P E SAME')
    leg.AddEntry(h_m[k], lab, 'l')
leg.Draw()
pass_line()
pave()
CMS.CMS_lumi(pm, iPosX=0, scaleLumi=0)

r1p.cd()
for i, (k, lab, col) in enumerate(ARMS):
    r = h_m[k].Clone('r1c_' + k)
    r.Divide(h_d[k])
    keep.append(r)
    r.SetMarkerStyle(24 if k == 'RNNScore' else 20)
    r.SetMarkerColor(col)
    r.SetLineColor(col)
    if i == 0:
        sty(r, 'MC / data', .165, .38, .145, False)
        r.Draw('P E')
    else:
        r.Draw('P E SAME')
ROOT.TLine().DrawLine(TLO, 1, THI, 1)
ratio_pass_line()

r2p.cd()
for i, (k, lab, col) in enumerate(ARMS):
    r = tail_ratio(h_m[k], h_d[k], 'r2c_' + k)
    r.SetMarkerStyle(24 if k == 'RNNScore' else 20)
    r.SetMarkerColor(col)
    r.SetLineColor(col)
    if i == 0:
        sty(r, '#int_{bin}^{#infty} MC/data', .130, .46, .145, True)
        r.Draw('P E')
    else:
        r.Draw('P E SAME')
ROOT.TLine().DrawLine(TLO, 1, THI, 1)
ratio_pass_line()

for e in ('png', 'pdf'):
    c.SaveAs(f'{OUT}/{REGION}_RNNScore_dataVsMC_allarms.{e}')
print(f'wrote {OUT}/{REGION}_RNNScore_dataVsMC_allarms.{{png,pdf}}')

# ------------------------------------------------------------------------ numbers
print(f'\n=== {REGION}: tail-integral MC/data (fraction above the bin low edge) ===')
hdr = f'{"T>":>6s} {"S>":>10s}'
for k, *_ in ARMS:
    hdr += f' {k:>14s}'
print(hdr + f' {"data frac(v5)":>14s}')
for tc in (0.0, 0.26, 1.0, 2.0, 3.0, 4.0, 5.0):
    ib = h_d['RNNScore'].FindBin(tc + 1e-6)
    row = f'{tc:6.2f} {1 - 10 ** (-tc):10.6f}'
    for k, *_ in ARMS:
        di, mi = h_d[k].Integral(ib, NB), h_m[k].Integral(ib, NB)
        row += f' {mi / di if di else 0:14.3f}'
    print(row + f' {h_d["RNNScore"].Integral(ib, NB):14.4e}')

print(f'\n=== {REGION}: mid-RNN band (0.26<T<3) and pass region (S>=0.9999) ===')
ilo, ihi = h_d['RNNScore'].FindBin(0.26 + 1e-6), h_d['RNNScore'].FindBin(3.0 - 1e-6)
print(f'{"arm":>14s} {"band MC/data":>13s} {"data pass":>11s} {"MC pass":>11s} '
      f'{"pass MC/data":>13s} {"n_MC pass":>10s} {"n_data pass":>12s}')
for k, *_ in ARMS:
    dband, mband = h_d[k].Integral(ilo, ihi), h_m[k].Integral(ilo, ihi)
    ip = h_d[k].FindBin(T_PASS + 1e-6)
    dp, mp = h_d[k].Integral(ip, NB), h_m[k].Integral(ip, NB)
    print(f'{k:>14s} {mband / dband if dband else 0:13.3f} {dp:11.4e} {mp:11.4e} '
          f'{mp / dp if dp else 0:13.3f} {mp * nmc:10.1f} {dp * ndat:12.0f}')
