#!/usr/bin/env python3
"""CMS-style upward muon intensity limit vs cos(zenith) (HybridNew CLs N95), fixed momentum."""
import array, json, sys
import numpy as np
import ROOT
import cmsstyle as CMS

W = "/ceph/cms/store/user/tvami/EarthAsDM/work/arc4_appB_hn"  # HybridNew CLs inputs (collect.py)
P, out = int(sys.argv[1]), sys.argv[2]
COS = len(sys.argv) > 3 and sys.argv[3] == "cos"
ROOT.gROOT.SetBatch(True)
CMS.SetExtraText("Preliminary")
CMS.SetEnergy(0, unit=""); CMS.SetLumi(None, run="2021-2026 (14.9 months)")
import cmsstyle.cmsstyle as CMSmod  # one-column (246 pt) font sizes: CMS 10, Preliminary/lumi 8, titles 9.5, ticks 8, legend 7
CMS.SetCmsText("CMS", size=0.862); CMSmod.extraOverCmsTextSize = 0.814
TSIZE, LSIZE, LUMISCALE, LEGSIZE = 0.0576, 0.0482, 1.176, 0.0435
A = lambda v: array.array("d", [float(x) for x in v])
if COS:
    rows = sorted([r for r in json.load(open(f"{W}/out/limit_vs_angle_P{P}_cos_hn.json")) if r["eps"] > 0.01], key=lambda r: r["cos_lo"])
    xe = [r["cos_lo"] for r in rows] + [rows[-1]["cos_hi"]]
else:
    rows = [r for r in json.load(open(f"{W}/out/limit_vs_angle_P{P}.json")) if r["zen_lo"] >= 109.9]  # drop near-horizontal bins
    xe = [r["zen_lo"] for r in rows] + [rows[-1]["zen_hi"]]
xs = np.repeat(xe, 2)[1:-1]  # step coordinates
st = lambda v: np.repeat(v, 2)
obs = np.array([r["obs"] for r in rows]); e = np.array([r["exp"] for r in rows])

def band(lo, hi, col):
    g = ROOT.TGraph(2 * len(xs), A(np.concatenate([xs, xs[::-1]])), A(np.concatenate([st(lo), st(hi)[::-1]])))
    g.SetFillColor(ROOT.TColor.GetColor(col)); g.SetLineWidth(0); return g

c = CMS.cmsCanvas("c", xe[0], xe[-1], 8e-12 if COS else 5e-12, 2.5e-10 if COS else 1e-9, "cos #theta_{zenith}" if COS else "Zenith angle [deg]", "#Phi_{#mu}^{up} [cm^{-2} s^{-1} sr^{-1}]",
                  square=False, iPos=0, extraSpace=0.02, yTitOffset=1.35)
ROOT.gPad.SetLogy(); ROOT.gPad.SetLeftMargin(0.16); ROOT.gPad.SetRightMargin(0.05)
for p in [p for p in ROOT.gPad.GetListOfPrimitives() if p.InheritsFrom("TLatex")]:
    ROOT.gPad.GetListOfPrimitives().Remove(p)  # redraw the CMS label for the wider margin
CMS.CMS_lumi(ROOT.gPad, 0, scaleLumi=LUMISCALE)
fr = next(p for p in ROOT.gPad.GetListOfPrimitives() if p.InheritsFrom("TH1"))
for ax in (fr.GetXaxis(), fr.GetYaxis()): ax.SetTitleSize(TSIZE); ax.SetLabelSize(LSIZE)
b95 = band(e[:, 0], e[:, 4], "#85D1FB"); b95.Draw("F SAME")
b68 = band(e[:, 1], e[:, 3], "#FFDF7F"); b68.Draw("F SAME")
gexp = ROOT.TGraph(len(xs), A(xs), A(st(e[:, 2]))); gexp.SetLineStyle(2); gexp.SetLineWidth(3); gexp.Draw("L SAME")
gobs = ROOT.TGraph(len(xs), A(xs), A(st(obs))); gobs.SetLineWidth(3); gobs.Draw("L SAME")
leg = CMS.cmsLeg(0.19, 0.61, 0.55, 0.89, textSize=LEGSIZE)
leg.SetHeader("95% CL upper limits")
leg.AddEntry(gobs, "Observed", "l"); leg.AddEntry(gexp, "Median expected", "l")
leg.AddEntry(b68, "68% expected", "f"); leg.AddEntry(b95, "95% expected", "f")
leg.Draw()
t = ROOT.TLatex(); t.SetNDC(); t.SetTextFont(42); t.SetTextSize(LEGSIZE)
t.DrawLatex(0.62, 0.84, f"p_{{#mu}} = {P / 1000:g} TeV")
ROOT.gPad.RedrawAxis()
c.SaveAs(out + ".pdf"); c.SaveAs(out + ".png")
