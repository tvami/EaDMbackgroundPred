#!/usr/bin/env python3
# Staged unblinding step 1: pulls of the constrained nuisances from clean MultiDimFits on data
# (B-only: r = 0 frozen; S+B: r >= 0). Replaces the FitDiagnostics pulls (covQual -1). r-hat not shown.
import os, subprocess
import ROOT
import cmsstyle as CMS

ROOT.gROOT.SetBatch(True)
AREA = "rpf1x0_Binningv13_Inputv34_mergedDepths_SR_M3000GeV_Unblind/Signal_M3000GeV_mergedDepth_SR-1x0_area"
os.chdir(os.path.join(AREA, "xcheck"))
OPT = "combine -d ../card.root -M MultiDimFit -m 120 --cminDefaultMinimizerStrategy 0 --saveFitResult"
subprocess.run(f"{OPT} -n _xc_b --setParameters r=0 --freezeParameters r > fit_b.log 2>&1", shell=True)
subprocess.run(f"{OPT} -n _xc_s --rMin 0 --rMax 50 > fit_s.log 2>&1", shell=True)
NUIS = ["RNN", "t0", "depthBin", "pT", "RNN_scale", "trig", "livetime"]
fits = {}
for k in ("b", "s"):
    fr = ROOT.TFile.Open(f"multidimfit_xc_{k}.root").Get("fit_mdf")
    print(f"fit_{k} status {fr.status()} covQual {fr.covQual()}")
    p = fr.floatParsFinal()
    fits[k] = [(p.find(f"CMS_EXO26004_{n}").getVal(), p.find(f"CMS_EXO26004_{n}").getError()) for n in NUIS]

N = len(NUIS)
CMS.SetExtraText("Work in Progress")
CMS.SetEnergy(0, unit="")
CMS.SetLumi(None, run="Run 3 cosmics")
c = CMS.cmsCanvas("c_pulls", -3, 3, 0, N, "(#hat{#theta} - #theta_{0}) / #Delta#theta", "", square=True, iPos=11, extraSpace=0.05)
ROOT.gPad.SetLeftMargin(0.24)
h = next(o for o in c.GetListOfPrimitives() if o.InheritsFrom("TH1"))  # frame hist
h.GetYaxis().SetLabelSize(0); h.GetYaxis().SetTickLength(0)
keep = []
for x0, x1, col in ((-2, 2, ROOT.kYellow - 9), (-1, 1, ROOT.kGreen - 9)):
    b = ROOT.TBox(x0, 0, x1, N); b.SetFillColor(col); b.Draw(); keep.append(b)
lab = ROOT.TLatex(); lab.SetTextFont(42); lab.SetTextSize(0.032); lab.SetTextAlign(32)
for i, n in enumerate(NUIS):
    lab.DrawLatexNDC(0.23, 0.12 + (0.83 - 0.12) * (i + 0.5) / N, n)  # approx pad frame
for k, off, col, mk in (("b", 0.62, ROOT.kBlue + 1, 20), ("s", 0.38, ROOT.kRed + 1, 24)):
    g = ROOT.TGraphAsymmErrors(N)
    for i, (v, e) in enumerate(fits[k]):
        g.SetPoint(i, v, i + off); g.SetPointError(i, e, e, 0, 0)
    g.SetMarkerStyle(mk); g.SetMarkerColor(col); g.SetLineColor(col); g.SetLineWidth(2); g.Draw("P same"); keep.append(g)
lg = ROOT.TLegend(0.30, 0.84, 0.90, 0.90); lg.SetNColumns(2); lg.SetBorderSize(0); lg.SetFillStyle(0); lg.SetTextFont(42); lg.SetTextSize(0.032)
lg.AddEntry(keep[-2], "B-only fit", "lp"); lg.AddEntry(keep[-1], "S+B fit", "lp"); lg.Draw()
c.RedrawAxis()
for ext in ("pdf", "png"):
    c.SaveAs(f"../nuisance_pulls_unblind1.{ext}")
for i, n in enumerate(NUIS):
    print(f"{n:10s} b {fits['b'][i][0]:+.3f}+/-{fits['b'][i][1]:.3f}  s {fits['s'][i][0]:+.3f}+/-{fits['s'][i][1]:.3f}")
