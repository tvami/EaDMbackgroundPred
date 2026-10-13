#!/usr/bin/env python3
# AN figures for the RNN-PASS timing study and the DT segment cleaning (v31 vs v33)
# usage: plot_an.py <out dir>   (run from helper_scripts/timing_flip_study, needs out/ from the study)
import sys, os, json, pickle
import numpy as np
import ROOT
import cmsstyle as CMS

ROOT.gROOT.SetBatch(True)
ROOT.gErrorIgnoreLevel = ROOT.kWarning
OUT = sys.argv[1]
os.makedirs(OUT, exist_ok=True)
WP = 0.99999
LIMJSON = "out/eadm_expected_limits_v31_v33.json"  # per-mass limits and efficiencies exported from the 2DA areas
keep = []


def style(extra, run="Run 3 cosmics"):
    CMS.SetExtraText(extra)
    CMS.SetEnergy(0, unit="")
    CMS.SetLumi(None, run=run)


def save(c, name):
    c.RedrawAxis()
    for ext in ("pdf", "png"):
        c.SaveAs(os.path.join(OUT, f"{name}.{ext}"))
    c.Close()


def legend(x1, y1, x2, y2):
    lg = ROOT.TLegend(x1, y1, x2, y2)
    lg.SetBorderSize(0); lg.SetFillStyle(0); lg.SetTextFont(42); lg.SetTextSize(0.035)
    keep.append(lg)
    return lg


# 1) top minus bottom mean t0, VR2 data, PASS vs FAIL
d = dict(np.load("out/summary_Data_vr2.npz"))
P = d["rnn"] >= WP
both = (d["ntop"] > 0) & (d["nbot"] > 0)
dt = d["t0top"] - d["t0bot"]
style("Work in Progress")
c = CMS.cmsCanvas("c_dt", -100, 150, 1e-4, 2, "#LTt_{0}#GT_{top} #minus #LTt_{0}#GT_{bottom} [ns]", "Fraction of events / 10 ns",
                  square=True, iPos=11, extraSpace=0.01)
c.SetLogy(True)
hF = ROOT.TH1D("hF", "", 25, -100, 150); hP = ROOT.TH1D("hP", "", 25, -100, 150)
for h in (hF, hP):
    h.Sumw2()
for v in dt[~P & both]:
    hF.Fill(min(max(v, -99.9), 149.9))
for v in dt[P & both]:
    hP.Fill(min(max(v, -99.9), 149.9))
hF.Scale(1.0 / hF.Integral()); hP.Scale(1.0 / hP.Integral())
CMS.cmsDraw(hF, "hist", lcolor=ROOT.kAzure + 1, lwidth=2, fstyle=0)
CMS.cmsDraw(hP, "pe", marker=20, mcolor=ROOT.kBlack)
ln = ROOT.TLine(50, 1e-4, 50, 2); ln.SetLineStyle(2); ln.SetLineColor(ROOT.kGray + 2); ln.Draw(); keep.append(ln)
lg = legend(0.50, 0.70, 0.90, 0.84)
lg.AddEntry(hP, f"VR2 RNN PASS ({int((P & both).sum())} events)", "pe")
lg.AddEntry(hF, "VR2 RNN FAIL (1/100 sample)", "l")
lg.Draw()
save(c, "dt_top_bottom_vr2")

# 2) event display of one PASS event with a twin segment
ev = [e for e in pickle.load(open("out/passsegs_Data_vr2.pkl", "rb")) if e["run"] == 349078 and e["event"] == 8234183][0]
t = np.array(ev["muon_dtSeg_t0timing"]); y = np.array(ev["muon_dtSeg_globY"]) / 100.0
x = np.array(ev["muon_dtSeg_globX"]); z = np.array(ev["muon_dtSeg_globZ"])
ok = (t > -998) & (t < 9998)
twin = np.zeros(len(t), bool)
for i in range(len(t)):
    for j in range(i + 1, len(t)):
        if ok[i] and ok[j] and np.hypot(np.hypot(x[i] - x[j], y[i] * 100 - y[j] * 100), z[i] - z[j]) < 30 and abs(t[i] - t[j]) > 15:
            twin[i] = twin[j] = True
style("Work in Progress")
c = CMS.cmsCanvas("c_ev", -9, 9, -40, 60, "Segment global y [m]", "Segment t_{0} [ns]", square=True, iPos=11, extraSpace=0.01)
gN = ROOT.TGraph(); gT = ROOT.TGraph()
for i in np.where(ok)[0]:
    (gT if twin[i] else gN).AddPoint(y[i], t[i])
for g, col, m in ((gN, ROOT.kBlack, 20), (gT, ROOT.kRed + 1, 21)):
    g.SetMarkerStyle(m); g.SetMarkerColor(col); g.SetMarkerSize(1.4); g.Draw("P same"); keep.append(g)
lg = legend(0.18, 0.62, 0.60, 0.76)
lg.AddEntry(gN, "DT segments", "p"); lg.AddEntry(gT, "Same-chamber twins (#Deltat_{0} > 15 ns)", "p")
lg.Draw()
tx = ROOT.TLatex(); tx.SetNDC(); tx.SetTextFont(42); tx.SetTextSize(0.032)
tx.DrawLatex(0.18, 0.80, f"Run {ev['run']}, event {ev['event']}, RNN score {ev['RNNScore']:.6f}")
save(c, "event_display_twin")

# 3) and 4) from the exported v31/v33 per-mass table
rows = sorted(json.load(open(LIMJSON)), key=lambda r: r["dm_gev"])
m = np.array([r["dm_gev"] for r in rows], float) / 1000.0  # TeV


def graph(vals, col, mk, lo=None, hi=None):
    g = ROOT.TGraphAsymmErrors(len(m))
    for i in range(len(m)):
        g.SetPoint(i, m[i], vals[i])
        if lo is not None:
            g.SetPointError(i, 0, 0, vals[i] - lo[i], hi[i] - vals[i])
    g.SetLineColor(col); g.SetMarkerColor(col); g.SetMarkerStyle(mk); g.SetLineWidth(2); g.SetFillColorAlpha(col, 0.25)
    keep.append(g)
    return g


def ratio_graph(num, den, col):
    g = ROOT.TGraph(len(m))
    for i in range(len(m)):
        g.SetPoint(i, m[i], num[i] / den[i])
    g.SetLineColor(col); g.SetMarkerColor(col); g.SetMarkerStyle(20); g.SetLineWidth(2)
    keep.append(g)
    return g


for name, key, ytitle, ymin, ymax, logy, extra, run, band in (
        ("sig_eff_cleaning", "eff", "Signal efficiency (PASS / all)", 0.2, 0.75, False, "Simulation Work in Progress", "", False),
        ("exp_limit_cleaning", "masked", "Expected 95% CL limit on r", 0.5, 2000, True, "Work in Progress", "Run 3 cosmics", True)):
    style(extra, run)
    c = CMS.cmsDiCanvas("c_" + name, 0.3, 250, ymin, ymax, 0.5, 1.6 if key == "eff" else 1.15,
                        "Dark matter mass [TeV]", ytitle, "v33 / v31", square=True, iPos=11, extraSpace=0.01)
    c.cd(1); ROOT.gPad.SetLogx(True); ROOT.gPad.SetLogy(logy)
    if key == "eff":
        a = [r["eff_v31"] for r in rows]; b = [r["eff_v33"] for r in rows]
        g1 = graph(a, ROOT.kAzure + 1, 21); g3 = graph(b, ROOT.kBlack, 20)
        g1.Draw("LP same"); g3.Draw("LP same")
    else:
        a = [r[f"masked_v31_med"] for r in rows]; b = [r[f"masked_v33_med"] for r in rows]
        g1 = graph(a, ROOT.kAzure + 1, 21, [r["masked_v31_m1"] for r in rows], [r["masked_v31_p1"] for r in rows])
        g3 = graph(b, ROOT.kBlack, 20, [r["masked_v33_m1"] for r in rows], [r["masked_v33_p1"] for r in rows])
        g3.SetFillColorAlpha(ROOT.kGray + 1, 0.35)
        g1.Draw("3 same"); g3.Draw("3 same"); g1.Draw("LX same"); g3.Draw("LX same")
        one = ROOT.TLine(0.3, 1, 250, 1); one.SetLineStyle(2); one.SetLineColor(ROOT.kGray + 2); one.Draw(); keep.append(one)
    lg = legend(0.45, 0.68, 0.90, 0.80)
    lg.AddEntry(g1, "v31, all segments", "lf" if band else "lp")
    lg.AddEntry(g3, "v33, segment cleaning", "lf" if band else "lp")
    lg.Draw()
    c.cd(2); ROOT.gPad.SetLogx(True)
    rg = ratio_graph(b, a, ROOT.kBlack); rg.Draw("LP same")
    ref = ROOT.TLine(0.3, 1, 250, 1); ref.SetLineStyle(2); ref.SetLineColor(ROOT.kGray + 2); ref.Draw(); keep.append(ref)
    save(c, name)
print("wrote", sorted(os.listdir(OUT)))
