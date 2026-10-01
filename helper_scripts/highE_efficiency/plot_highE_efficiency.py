#!/usr/bin/env python3
"""Signal efficiency vs muon energy, up to the highest energy probed (EXO-26-004 pre-approval).

Uses only the v5.0.8_wRNN signal skims: the h_cutflow histogram (denominator = all generated
events of the dataset) plus the RNNScore of the events passing the preselection. For the
shallow samples (SurfaceDepth e2, e3, e4, at most 10 m of rock) the muon reaches CMS with
essentially its generated momentum MinP, so efficiency vs MinP is efficiency vs muon energy
at CMS. The deep samples are shown separately, vs the momentum at production.

Writes square cmsstyle PDFs:
  highE_cumeff_vs_E_shallow       cumulative efficiency per cutflow step, e2+e3+e4 pooled
  highE_releff_vs_E_shallow       efficiency of each step relative to the previous one
  highE_eff_vs_minp_depth         trigger, N_hits + chi2/ndof, and final efficiency per depth
  highE_trigeff_vs_E_shallow      trigger efficiency only (trigger chapter)
  highE_l1dt_tagprobe_logpt       L1 DT tag-and-probe, data vs MC, log pT bins, no overflow
  highE_offqual_tagprobe_logpt    offline quality tag-and-probe, data vs MC
plus highE_efficiency_summary.json with the numbers quoted in the AN.

Usage (cmsenv):
  python3 plot_highE_efficiency.py --tp-dir prod_highE_tagprobe \
      --trig-out ../../../AN/AN-23-122/Figures/3Trigger --presel-out ../../../AN/AN-23-122/Figures/Preselection
"""
import argparse, glob, json, os, re
import numpy as np
import uproot
import ROOT
import cmsstyle as CMS
from scipy.stats import beta

ROOT.gROOT.SetBatch(True)
ROOT.gErrorIgnoreLevel = ROOT.kWarning

SKIM_DIR = "/ceph/cms/store/user/tvami/EarthAsDM/Ntuples/Ntuples_v5.0.8_wRNN/Signal/sr/matched_muon"
RNN_WP = 0.99999
# h_cutflow bins used (0 = all, 1 = B > 0.1 T), then the RNN step
CF_BINS = [2, 3, 4, 5, 6, 7, 8, 9]
STEP_LABELS = ["L1 trigger", "+ N_{obj} > 0", "+ N_{hits} > 7", "+ #chi^{2}/ndof < 35",
               "+ #sigma(p_{T})/p_{T}^{2} < 10^{-3}", "+ |#eta| < 0.9", "+ p_{T} > 200 GeV", "+ N_{seg} > 2",
               "+ RNN > 0.99999"]
REL_LABELS = ["L1 trigger", "N_{obj} > 0", "N_{hits} > 7", "#chi^{2}/ndof < 35", "#sigma(p_{T})/p_{T}^{2} < 10^{-3}",
              "|#eta| < 0.9", "p_{T} > 200 GeV", "N_{seg} > 2", "RNN > 0.99999"]
COLORS = [ROOT.TColor.GetColor(c) for c in
          ["#3f90da", "#ffa90e", "#bd1f01", "#94a4a2", "#832db6", "#a96b59", "#e76300", "#b9ac70", "#000000"]]
MARKERS = [20, 21, 22, 23, 33, 34, 29, 47, 20]
SHALLOW = ["e2", "e3", "e4"]
DEPTHS = ["e2", "e3", "e4", "e5", "2e5", "3e5", "5e5", "e6"]
DEPTH_LABEL = {"e2": "10 cm", "e3": "1 m", "e4": "10 m", "e5": "100 m", "2e5": "200 m", "3e5": "300 m",
               "5e5": "500 m", "e6": "1 km"}
DEPTH_COLOR = dict(zip(DEPTHS, [ROOT.TColor.GetColor(c) for c in
                                ["#3f90da", "#ffa90e", "#bd1f01", "#94a4a2", "#832db6", "#a96b59", "#e76300", "#000000"]]))


def cp(k, n, cl=0.683):
    """Clopper-Pearson efficiency and asymmetric errors."""
    k, n = np.asarray(k, float), np.asarray(n, float)
    a = (1 - cl) / 2
    e = np.divide(k, n, out=np.zeros_like(k), where=n > 0)
    lo = np.where(k > 0, beta.ppf(a, k, n - k + 1), 0.0)
    hi = np.where(k < n, beta.ppf(1 - a, k + 1, n - k), 1.0)
    lo = np.nan_to_num(lo); hi = np.where(n > 0, np.nan_to_num(hi, nan=1.0), 0.0)
    return e, e - lo, hi - e


def graph(x, k, n, color, marker, xlo=None, xhi=None, min_n=1):
    """Efficiency graph at points x (x errors from xlo/xhi when given, i.e. bins)."""
    e, el, eh = cp(k, n)
    g = ROOT.TGraphAsymmErrors()
    for i in range(len(x)):
        if n[i] < min_n:
            continue
        j = g.GetN()
        g.SetPoint(j, x[i], e[i])
        g.SetPointError(j, 0 if xlo is None else x[i] - xlo[i], 0 if xhi is None else xhi[i] - x[i], el[i], eh[i])
    g.SetMarkerColor(color); g.SetLineColor(color); g.SetMarkerStyle(marker); g.SetMarkerSize(1.1)
    g.SetLineWidth(2)
    return g


def canvas(name, xmin, xmax, ymin, ymax, xt, yt, logx=True, logy=False, extra="Simulation Preliminary"):
    CMS.SetExtraText(extra)
    c = CMS.cmsCanvas(name, xmin, xmax, ymin, ymax, xt, yt, square=True, iPos=0, extraSpace=0.01)
    c.SetLogx(logx); c.SetLogy(logy)
    return c


def save(c, outdir, name):
    os.makedirs(outdir, exist_ok=True)
    c.RedrawAxis()
    c.SaveAs(os.path.join(outdir, name + ".pdf"))
    c.Close()


def note(text, x=0.18, y=0.55):
    t = ROOT.TLatex(); t.SetNDC(); t.SetTextSize(0.03); t.SetTextFont(42)
    t.DrawLatex(x, y, text)
    return t


def read_skims():
    """{(depth, minp): (n_all, counts per step)} from the skim cutflows + RNN."""
    out = {}
    for f in sorted(glob.glob(f"{SKIM_DIR}/skimmed_matched_muon_sr_CosmicToMu_Par-MinP-*_v5.0.0.root")):
        m = re.search(r"MinP-(\d+)-MinTheta-91-MaxTheta-179(?:-SurfaceDepth-(\w+?))?_cosmuogen", f)
        if not m:
            continue
        minp, depth = int(m.group(1)), (m.group(2) or "none")
        u = uproot.open(f)
        cf = u["h_cutflow"].values()
        rnn = u["tree"]["RNNScore"].array(library="np")
        k = np.append(cf[CF_BINS], np.sum(rnn >= RNN_WP))
        out[(depth, minp)] = (cf[0], k)
    return out


def pooled(skims, depths):
    minps = sorted({mp for (d, mp) in skims if d in depths})
    minps = [mp for mp in minps if all((d, mp) in skims for d in depths)]
    n = np.array([sum(skims[(d, mp)][0] for d in depths) for mp in minps])
    k = np.array([sum(skims[(d, mp)][1] for d in depths) for mp in minps]).T
    return np.array(minps, float), k, n


def plot_cumulative(x, k, n, outdir, name, text):
    c = canvas("c_" + name, 150, 1.2e5, 5e-3, 30, "Muon energy at CMS [GeV]", "Cumulative efficiency", logy=True)
    leg = CMS.cmsLeg(0.17, 0.62, 0.93, 0.88, textSize=0.028, columns=2)
    gs = []
    for i in range(9):
        g = graph(x, k[i], n, COLORS[i], MARKERS[i])
        g.Draw("PLZ same"); gs.append(g)
        leg.AddEntry(g, STEP_LABELS[i], "lp")
    leg.Draw()
    t = note(text)
    save(c, outdir, name)


def plot_relative(x, k, n, outdir, name, text):
    c = canvas("c_" + name, 150, 1.2e5, 0, 1.6, "Muon energy at CMS [GeV]", "Efficiency relative to previous step")
    leg = CMS.cmsLeg(0.17, 0.68, 0.93, 0.88, textSize=0.028, columns=3)
    gs, prev = [], n
    for i in range(9):
        g = graph(x, k[i], prev, COLORS[i], MARKERS[i])
        g.Draw("PLZ same"); gs.append(g)
        leg.AddEntry(g, REL_LABELS[i], "lp")
        prev = k[i]
    leg.Draw()
    t = note(text, x=0.40, y=0.20)
    save(c, outdir, name)


def plot_depths(skims, outdir):
    """Trigger, N_hits + chi2/ndof, and final efficiency vs MinP, one color per depth."""
    c = canvas("c_depth", 150, 1.2e5, 5e-3, 300, "Muon momentum at production [GeV]",
               "Cumulative efficiency", logy=True)
    leg = CMS.cmsLeg(0.17, 0.66, 0.93, 0.88, textSize=0.026, columns=4)
    gs = []
    for d in DEPTHS:
        x, k, n = pooled(skims, [d])
        for i, mk in [(0, 24), (3, 26), (8, 20)]:
            g = graph(x, k[i], n, DEPTH_COLOR[d], mk)
            g.Draw("PLZ same"); gs.append(g)
        leg.AddEntry(gs[-1], DEPTH_LABEL[d], "lp")
    leg.Draw()
    t = note("Open circles: L1 trigger, open triangles: + N_{hits}, #chi^{2}/ndof, full: all cuts", y=0.61)
    save(c, outdir, "highE_eff_vs_minp_depth")


def tp_hist(files, name):
    h = None
    for f in files:
        tf = ROOT.TFile.Open(f)
        if not tf or tf.IsZombie():
            continue
        o = tf.Get(name)
        if o:
            if h is None:
                h = o.Clone(name + "_sum_%d" % abs(hash(files[0]) % 10000)); h.SetDirectory(0)
            else:
                h.Add(o)
        tf.Close()
    return h


def merged_edges(n_den, edges, min_n):
    """Merge adjacent bins from the low side until each holds >= min_n probes; drop the leftover."""
    out, acc = [edges[0]], 0
    for i in range(len(n_den)):
        acc += n_den[i]
        if acc >= min_n:
            out.append(edges[i + 1]); acc = 0
    return np.array(out)


def rebin_counts(k, n, edges, new_edges):
    idx = np.digitize(np.sqrt(edges[:-1] * edges[1:]), new_edges) - 1
    m = len(new_edges) - 1
    ok = (idx >= 0) & (idx < m)
    return (np.bincount(idx[ok], weights=k[ok], minlength=m), np.bincount(idx[ok], weights=n[ok], minlength=m))


def plot_tagprobe(tp_dir, outdir, min_n=30):
    files = sorted(glob.glob(os.path.join(tp_dir, "*.root")))
    sets = {"Data": [f for f in files if os.path.basename(f).startswith("Data_")],
            "Bkg. MC (MinP-10, #nu-induced)": [f for f in files if "BkgMC_MinP-10__" in f],
            "Signal MC (all)": [f for f in files if os.path.basename(f).startswith("Signal_") and "-MaxP-" not in f]}
    style = {"Data": (ROOT.kBlack, 20), "Bkg. MC (MinP-10, #nu-induced)": (COLORS[0], 24),
             "Signal MC (all)": (COLORS[2], 26)}
    summary = {}
    for hname, yt, out, passbin in [("h2_l1dt_eff_probeUpper_logpt", "L1 DT Local Trigger efficiency",
                                     "highE_l1dt_tagprobe_logpt", 1),
                                    ("h2_offqual_logpt", "Track-quality efficiency",
                                     "highE_offqual_tagprobe_logpt", 3)]:
        c = canvas("c_" + out, 5, 1e4, 0, 1.5, "Probe p_{T} [GeV]", yt, extra="Preliminary")
        leg = CMS.cmsLeg(0.17, 0.72, 0.75, 0.88, textSize=0.03)
        gs, summary[out] = [], {}
        for lab, fl in sets.items():
            h = tp_hist(fl, hname)
            if h is None:
                continue
            nx = h.GetNbinsX()
            edges = np.array([h.GetXaxis().GetBinLowEdge(i) for i in range(1, nx + 2)])
            v = np.array([[h.GetBinContent(i, j) for j in range(1, h.GetNbinsY() + 1)] for i in range(1, nx + 1)])
            if edges[-1] - edges[-2] < 0.1 * (edges[-2] - edges[-3]):  # fold the sliver bin below 10 TeV
                v[-2] += v[-1]; v = v[:-1]; edges = np.delete(edges, -2)
            n = v.sum(axis=1); k = v[:, passbin]
            ne = merged_edges(n, edges, min_n)
            k2, n2 = rebin_counts(k, n, edges, ne)
            xc = np.sqrt(ne[:-1] * ne[1:])
            g = graph(xc, k2, n2, *style[lab], xlo=ne[:-1], xhi=ne[1:])
            g.Draw("PZ same"); gs.append(g); leg.AddEntry(g, lab, "lp")
            e, el, eh = cp(k2, n2)
            summary[out][lab] = dict(edges=ne.tolist(), k=k2.tolist(), n=n2.tolist(), eff=e.tolist(),
                                     err_lo=el.tolist(), err_hi=eh.tolist())
        leg.Draw()
        save(c, outdir, out)
    return summary


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--tp-dir", default=None)
    ap.add_argument("--trig-out", required=True)
    ap.add_argument("--presel-out", required=True)
    ap.add_argument("--summary", default="highE_efficiency_summary.json")
    args = ap.parse_args()
    CMS.SetEnergy(0, unit=""); CMS.SetLumi(None, run="Run 3 cosmics")

    skims = read_skims()
    x, k, n = pooled(skims, SHALLOW)
    text = "Surface depth 10 cm, 1 m, 10 m (pooled)"
    plot_cumulative(x, k, n, args.presel_out, "highE_cumeff_vs_E_shallow", text)
    plot_relative(x, k, n, args.presel_out, "highE_releff_vs_E_shallow", text)
    plot_depths(skims, args.presel_out)

    c = canvas("c_trig", 150, 1.2e5, 0, 0.8, "Muon energy at CMS [GeV]", "L1SingleMuCosmics efficiency")
    g = graph(x, k[0], n, COLORS[0], 20); g.Draw("PLZ same")
    t = note(text, y=0.83)
    save(c, args.trig_out, "highE_trigeff_vs_E_shallow")

    summ = {"shallow_pooled": dict(minp=x.tolist(), n=n.tolist(), k=k.tolist(), steps=REL_LABELS),
            "per_depth": {f"{d}_{mp}": dict(n=float(v[0]), k=v[1].tolist()) for (d, mp), v in skims.items()}}
    if args.tp_dir:
        summ["tagprobe"] = plot_tagprobe(args.tp_dir, args.trig_out)
    with open(args.summary, "w") as f:
        json.dump(summ, f, indent=1)
    print("wrote", args.summary)


if __name__ == "__main__":
    main()
