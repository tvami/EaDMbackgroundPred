#!/usr/bin/env python3
"""CMS-style limit on the isotropic upward muon intensity vs muon pT (HybridNew CLs N95): observed, expected, 68/95% bands."""
import array, json, os, sys
import numpy as np
import ROOT
import cmsstyle as CMS

W = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))  # HybridNew CLs inputs (collect.py) in ../out
out = sys.argv[1]
full_cms = len(sys.argv) > 2 and sys.argv[2] == "fullCMS"
# full CMS cylinder (r = 7.3 m, |z| < 10.8 m) vs the cosmicInTracker one, both (pi/2) S
AOM_FLT = 0.5 * np.pi * (2 * np.pi * 80 * 424 + 2 * np.pi * 80 ** 2)
AOM_CMS = 0.5 * np.pi * (2 * np.pi * 730 * 2160 + 2 * np.pi * 730 ** 2)
SCALE = AOM_FLT / AOM_CMS if full_cms else 1.0
ROOT.gROOT.SetBatch(True)
CMS.SetExtraText("Preliminary")
CMS.SetEnergy(0, unit=""); CMS.SetLumi(None, run="2021-2026 (14.9 months)")
import cmsstyle.cmsstyle as CMSmod  # one-column (246 pt) font sizes: CMS 10, Preliminary/lumi 8, titles 9.5, ticks 8, legend 7
CMS.SetCmsText("CMS", size=0.862); CMSmod.extraOverCmsTextSize = 0.814
TSIZE, LSIZE, LUMISCALE, LEGSIZE = 0.0576, 0.0482, 1.176, 0.0435
A = lambda v: array.array("d", [float(x) for x in v])
allrows = json.load(open(f"{W}/out/expected_bands_iso_hn.json"))
rows = [r for r in allrows if r["P"] >= 250]  # all momenta, 10 TeV included
x = np.array([float(r["P"]) for r in rows]); o = np.argsort(x); rows = [rows[i] for i in o]; x = x[o]
obs = np.array([r["obs"] for r in rows]) * SCALE; e = np.array([r["exp"] for r in rows]) * SCALE  # 2.5,16,50,84,97.5

def band(lo, hi, col):
    g = ROOT.TGraph(2 * len(x), A(np.concatenate([x, x[::-1]])), A(np.concatenate([lo, hi[::-1]])))
    g.SetFillColor(ROOT.TColor.GetColor(col)); g.SetLineWidth(0); return g

c = CMS.cmsCanvas("c", 200, 12000, 1.5e-12, 1.5e-10, "Muon momentum p [GeV]",
                  "#Phi_{#mu}^{up} [cm^{-2} s^{-1} sr^{-1}]", square=False, iPos=0, extraSpace=0.02, yTitOffset=1.35)
ROOT.gPad.SetLogx(); ROOT.gPad.SetLogy(); ROOT.gPad.SetLeftMargin(0.16); ROOT.gPad.SetRightMargin(0.05)
for p in [p for p in ROOT.gPad.GetListOfPrimitives() if p.InheritsFrom("TLatex")]:
    ROOT.gPad.GetListOfPrimitives().Remove(p)  # redraw the CMS label for the wider margin
CMS.CMS_lumi(ROOT.gPad, 0, scaleLumi=LUMISCALE)
fr = next(p for p in ROOT.gPad.GetListOfPrimitives() if p.InheritsFrom("TH1"))
for ax in (fr.GetXaxis(), fr.GetYaxis()): ax.SetTitleSize(TSIZE); ax.SetLabelSize(LSIZE)
fr.GetXaxis().SetMoreLogLabels(True); fr.GetXaxis().SetNoExponent(True)
b95 = band(e[:, 0], e[:, 4], "#85D1FB"); b95.Draw("F SAME")
b68 = band(e[:, 1], e[:, 3], "#FFDF7F"); b68.Draw("F SAME")
gexp = ROOT.TGraph(len(x), A(x), A(e[:, 2])); gexp.SetLineStyle(2); gexp.SetLineWidth(3); gexp.Draw("L SAME")
gobs = ROOT.TGraph(len(x), A(x), A(obs)); gobs.SetLineWidth(2); gobs.SetMarkerStyle(20); gobs.SetMarkerSize(0.6); gobs.Draw("LP SAME")
leg = CMS.cmsLeg(0.45, 0.61, 0.93, 0.89, textSize=LEGSIZE)
leg.SetHeader("95% CL upper limits")
leg.AddEntry(gobs, "Observed", "lp"); leg.AddEntry(gexp, "Median expected", "l")
leg.AddEntry(b68, "68% expected", "f"); leg.AddEntry(b95, "95% expected", "f")
leg.Draw()
t = ROOT.TLatex(); t.SetNDC(); t.SetTextFont(42); t.SetTextSize(LEGSIZE)
ty = 0.60
if full_cms:
    t.DrawLatex(0.45, 0.49, f"Projection: full CMS, A#Omega #times {1 / SCALE:.0f}")
    t.DrawLatex(0.45, 0.445, "same efficiency per muon")
print("A Omega ratio full CMS / cosmicInTracker:", AOM_CMS / AOM_FLT)
sep = ROOT.TLine(9000., 1.5e-12, 9000., 6e-11); sep.SetLineStyle(2); sep.SetLineWidth(2); sep.SetLineColor(ROOT.kGray + 2); sep.Draw()
tv = ROOT.TLatex(); tv.SetTextFont(42); tv.SetTextSize(LEGSIZE); tv.SetTextAngle(90)
tv.DrawLatex(8150, 1.3e-11, "p_{T} overflow edge")  # 10 TeV muons are mostly reconstructed above 7 TeV
ROOT.gPad.RedrawAxis()
c.SaveAs(out + ".pdf"); c.SaveAs(out + ".png")
