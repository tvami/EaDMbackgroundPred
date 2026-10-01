#!/usr/bin/env python3
# AN figures for the access-shaft study, from the npz files of project_to_surface.py
import os, sys, json
import numpy as np
import ROOT
import cmsstyle as CMS

ROOT.gROOT.SetBatch(True)
ROOT.gErrorIgnoreLevel = ROOT.kWarning

IND, OUT = sys.argv[1], sys.argv[2]
WP = 0.99999          # SR working point
VR1_LO, VR1_HI = 0.45, WP  # VR1 split: fail < 0.45 <= pass < WP
SHAFTS = {"PX56": (0.0, -1400.0, 1025.0), "mirror": (0.0, 1400.0, 1025.0),
          "PM54": (2660.0, 1610.0, 605.0), "PM56": (1822.0, -3823.0, 355.0)}
PT_EDGES = np.array([10, 34, 82, 200, 350, 538, 1027, 2157, 7001], float)
COL = [ROOT.TColor.GetColor(c) for c in ["#000000", "#3f90da", "#bd1f01", "#ffa90e", "#832db6"]]


def load(tag):
    d = np.load(os.path.join(IND, f"v2_{tag}.npz"))
    return d["xz"] / 100.0, d["pt"], d["rnn"]  # xz in m


def regions(xz):
    ok = np.isfinite(xz[:, 0])
    r = {k: ok & (np.hypot(xz[:, 0] - x / 100, xz[:, 1] - z / 100) < R / 100) for k, (x, z, R) in SHAFTS.items()}
    r["rest"] = ok & ~r["PX56"] & ~r["mirror"] & ~r["PM54"] & ~r["PM56"]
    r["ok"] = ok
    return r


def canvas(name, xmin, xmax, ymin, ymax, xt, yt, extra, logx=False, logy=False, z=False):
    CMS.SetExtraText(extra)
    CMS.SetEnergy(0, unit="")
    CMS.SetLumi(None, run="Run 3 cosmics" if "Simulation" not in extra else "")
    c = CMS.cmsCanvas(name, xmin, xmax, ymin, ymax, xt, yt, square=True, iPos=0, extraSpace=0.01, with_z_axis=z)
    c.SetLogx(logx); c.SetLogy(logy)
    return c


def save(c, name):
    os.makedirs(OUT, exist_ok=True)
    c.RedrawAxis()
    for ext in ("pdf", "png"):
        c.SaveAs(os.path.join(OUT, f"{name}.{ext}"))
    c.Close()


def draw_shafts():
    keep = []
    for k, (x, z, R) in SHAFTS.items():
        e = ROOT.TEllipse(z / 100, x / 100, R / 100, R / 100)
        e.SetFillStyle(0); e.SetLineWidth(2)
        e.SetLineColor(ROOT.kRed if k != "mirror" else ROOT.kGray + 2)
        e.SetLineStyle(1 if k != "mirror" else 2)
        e.Draw("same"); keep.append(e)
        t = ROOT.TLatex(z / 100, x / 100 + R / 100 + 1.5, k if k != "mirror" else "PX56 mirror")
        t.SetTextAlign(21); t.SetTextSize(0.028); t.SetTextFont(42)
        t.SetTextColor(ROOT.kRed if k != "mirror" else ROOT.kGray + 2)
        t.Draw(); keep.append(t)
    return keep


def surface_map(xz, sel, name, extra, note):
    h = ROOT.TH2D("h_" + name, "", 100, -50, 50, 100, -50, 50)
    x, z = xz[sel, 0], xz[sel, 1]
    h.FillN(len(x), np.ascontiguousarray(z, float), np.ascontiguousarray(x, float), np.ones(len(x)))
    c = canvas("c_" + name, -50, 50, -50, 50, "Surface intercept z [m]", "Surface intercept x [m]", extra, z=True)
    c.SetLogz(True)
    h.GetZaxis().SetTitle("Events / (1 m #times 1 m)")
    h.Draw("colz same")
    CMS.UpdatePalettePosition(h, c)
    k = draw_shafts()
    t = ROOT.TLatex(); t.SetNDC(); t.SetTextSize(0.03); t.SetTextFont(42); t.DrawLatex(0.17, 0.17, note)
    save(c, name)


def ratio_graph(num, den, color, marker, shift=1.0):
    g = ROOT.TGraphAsymmErrors()
    xc = np.sqrt(PT_EDGES[:-1] * PT_EDGES[1:])
    for i in range(len(xc)):
        n, d = num[i], den[i]
        if n < 5 or d < 5:
            continue
        r = n / d
        e = r * np.sqrt(1 / n + 1 / d)
        j = g.GetN()
        g.SetPoint(j, xc[i] * shift, r)
        g.SetPointError(j, xc[i] * shift - PT_EDGES[i], PT_EDGES[i + 1] - xc[i] * shift, e, e)
    g.SetMarkerColor(color); g.SetLineColor(color); g.SetMarkerStyle(marker); g.SetMarkerSize(1.1); g.SetLineWidth(2)
    return g


def hist_counts(pt, sel):
    return np.histogram(pt[sel], bins=PT_EDGES)[0].astype(float)


if __name__ == "__main__":
    dsr, dvr2 = load("Data_sr_"), load("Data_vr2_")
    msr, mvr2 = load("BkgMC_sr_MaxTheta-75"), load("BkgMC_vr2_MaxTheta-75")
    s4, s6 = load("Signal_sr_SurfaceDepth-e4"), load("Signal_sr_SurfaceDepth-e6")

    # blinding: data above 200 GeV enters only through the fail region (RNN < WP)
    def data_fail(d):
        xz, pt, rnn = d
        return xz[rnn < WP], pt[rnn < WP], rnn[rnn < WP]
    dsr_f = data_fail(dsr)
    data = tuple(np.concatenate([a, b]) for a, b in zip(dvr2, dsr_f))
    mc = tuple(np.concatenate([a, b]) for a, b in zip(mvr2, msr))
    sig = tuple(np.concatenate([a, b]) for a, b in zip(s4, s6))

    summary = {}
    for tag, (xz, pt, rnn) in [("data_lowpt", dvr2), ("data_highpt_fail", dsr_f), ("mc_lowpt", mvr2),
                               ("mc_highpt", msr), ("sig_e4", s4), ("sig_e6", s6)]:
        r = regions(xz)
        n_ok = int(r["ok"].sum())
        summary[tag] = {"N": int(len(pt)), "N_fit": n_ok}
        for k in ("PX56", "mirror", "PM54", "PM56", "rest"):
            summary[tag][k] = int(r[k].sum())
        summary[tag]["ratio"] = summary[tag]["PX56"] / summary[tag]["mirror"]
        summary[tag]["ratio_err"] = summary[tag]["ratio"] * np.sqrt(1 / summary[tag]["PX56"] + 1 / summary[tag]["mirror"])

    # expected SR-pass background in PX56 from the global pass/fail ratio (counts only, no per-bin pass yields)
    rs = regions(dsr[0]); rv = regions(dvr2[0])
    for tag, (xz, pt, rnn), r in [("highpt", dsr, rs), ("lowpt", dvr2, rv)]:
        npass = int(((rnn >= WP) & r["ok"]).sum()); nfail = int(((rnn < WP) & r["ok"]).sum())
        summary[f"pf_{tag}"] = {"pf": npass / nfail, "px56_fail": int((r["PX56"] & (rnn < WP)).sum()),
                                "px56_pass": int((r["PX56"] & (rnn >= WP)).sum()),
                                "px56_expected_pass": npass / nfail * int((r["PX56"] & (rnn < WP)).sum())}

    # VR1-type score ratio N(0.45 <= RNN < WP) / N(RNN < 0.45) per region and pT bin
    vr1 = {}
    for k in ("PX56", "mirror", "rest"):
        xz, pt, rnn = data
        r = regions(xz)
        num = hist_counts(pt, r[k] & (rnn >= VR1_LO) & (rnn < VR1_HI))
        den = hist_counts(pt, r[k] & (rnn < VR1_LO))
        vr1[k] = (num, den)
        summary[f"vr1_{k}"] = {"num": num.tolist(), "den": den.tolist()}

    os.makedirs(OUT, exist_ok=True)
    with open(os.path.join(OUT, "shaft_summary.json"), "w") as f:
        json.dump(summary, f, indent=1)
    print(json.dumps(summary, indent=1))

    # 1) surface-intercept maps
    r = regions(dvr2[0]); surface_map(dvr2[0], r["ok"], "shaft_map_data_lowpt", "Preliminary", "Data, p_{T} < 200 GeV")
    r = regions(dsr_f[0]); surface_map(dsr_f[0], r["ok"], "shaft_map_data_highpt", "Preliminary",
                                       "Data, p_{T} > 200 GeV, RNN fail")
    r = regions(mvr2[0]); surface_map(mvr2[0], r["ok"], "shaft_map_mc_lowpt", "Simulation Preliminary",
                                      "Cosmic #mu MC, p_{T} < 200 GeV")
    r = regions(s6[0]); surface_map(s6[0], r["ok"], "shaft_map_sig_e6", "Simulation Preliminary",
                                    "Signal MC, depth 10^{6} mm")

    # 2) mirror asymmetry N(-|z|) / N(+|z|) of the intercept in the |x| < 10.25 m strip
    c = canvas("c_zasym", 0, 50, 0, 6, "|Surface intercept z| [m]", "N(z = #minus|z|) / N(z = +|z|)", "Preliminary")
    leg = CMS.cmsLeg(0.45, 0.70, 0.93, 0.88, textSize=0.03)
    keep = []
    zb = np.linspace(0, 50, 26)
    for (xz, pt, rnn), lab, col, mk in [(dvr2, "Data, p_{T} < 200 GeV", COL[0], 20),
                                        (dsr_f, "Data, p_{T} > 200 GeV, RNN fail", COL[1], 24),
                                        (mvr2, "Cosmic #mu MC, p_{T} < 200 GeV", COL[2], 21),
                                        (s6, "Signal MC, depth 10^{6} mm", COL[4], 23)]:
        sel = np.isfinite(xz[:, 0]) & (np.abs(xz[:, 0]) < 10.25)
        z = xz[sel, 1]
        neg = np.histogram(-z[z < 0], bins=zb)[0].astype(float)
        pos = np.histogram(z[z >= 0], bins=zb)[0].astype(float)
        g = ROOT.TGraphErrors()
        for i in range(len(zb) - 1):
            if neg[i] < 5 or pos[i] < 5:
                continue
            r = neg[i] / pos[i]
            j = g.GetN(); g.SetPoint(j, 0.5 * (zb[i] + zb[i + 1]), r)
            g.SetPointError(j, 0.5 * (zb[i + 1] - zb[i]), r * np.sqrt(1 / neg[i] + 1 / pos[i]))
        g.SetMarkerColor(col); g.SetLineColor(col); g.SetMarkerStyle(mk); g.SetMarkerSize(1.1); g.SetLineWidth(2)
        g.Draw("PZ same"); leg.AddEntry(g, lab, "lp"); keep.append(g)
    for zz in (14 - 10.25, 14 + 10.25):
        l = ROOT.TLine(zz, 0, zz, 4.2); l.SetLineStyle(2); l.SetLineColor(ROOT.kGray + 2); l.Draw(); keep.append(l)
    one = ROOT.TLine(0, 1, 50, 1); one.SetLineStyle(3); one.Draw()
    t = ROOT.TLatex(); t.SetTextSize(0.03); t.SetTextFont(42); t.SetTextAlign(21); t.DrawLatex(14, 4.3, "PX56 extent")
    leg.Draw()
    save(c, "shaft_zasym")

    # 3) PX56 / mirror ratio vs pT
    c = canvas("c_ratio", 10, 7001, 0.5, 9, "Muon p_{T} [GeV]", "N(PX56) / N(PX56 mirror)", "Preliminary", logx=True)
    leg = CMS.cmsLeg(0.45, 0.68, 0.93, 0.88, textSize=0.03)
    keep = []
    for (xz, pt, rnn), lab, col, mk, sh in [(data, "Data (p_{T} > 200 GeV: RNN fail)", COL[0], 20, 1.0),
                                            (mc, "Cosmic #mu MC", COL[2], 24, 1.06),
                                            (s4, "Signal MC, depth 10^{4} mm", COL[1], 22, 0.94),
                                            (s6, "Signal MC, depth 10^{6} mm", COL[4], 23, 1.12)]:
        r = regions(xz)
        g = ratio_graph(hist_counts(pt, r["PX56"]), hist_counts(pt, r["mirror"]), col, mk, sh)
        g.Draw("PZ same"); leg.AddEntry(g, lab, "lp"); keep.append(g)
    one = ROOT.TLine(10, 1, 7001, 1); one.SetLineStyle(2); one.Draw()
    l2 = ROOT.TLine(200, 0.5, 200, 6.5); l2.SetLineStyle(3); l2.SetLineColor(ROOT.kGray + 2); l2.Draw()
    leg.Draw()
    save(c, "shaft_ratio_vs_pt")

    # 4) VR1-type score ratio vs pT in PX56, mirror, rest
    c = canvas("c_vr1", 10, 7001, 1e-3, 1, "Muon p_{T} [GeV]", "R_{int}",
               "Preliminary", logx=True, logy=True)
    leg = CMS.cmsLeg(0.50, 0.72, 0.93, 0.88, textSize=0.03)
    keep = []
    for (k, lab, col, mk, sh) in [("rest", "Rest of the sky", COL[0], 20, 1.0), ("PX56", "PX56 footprint", COL[2], 21, 1.07),
                                  ("mirror", "PX56 mirror", COL[1], 24, 0.93)]:
        g = ratio_graph(*vr1[k], col, mk, sh)
        g.Draw("PZ same"); leg.AddEntry(g, lab, "lp"); keep.append(g)
    leg.Draw()
    save(c, "shaft_vr1ratio_vs_pt")
