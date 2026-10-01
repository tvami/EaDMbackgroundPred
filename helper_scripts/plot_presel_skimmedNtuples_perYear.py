#!/usr/bin/env python3
"""
Per-year version of plot_presel_skimmedNtuples.py.

Instead of overlaying samples (Run-3 Cosmics / Bkg / signal), this overlays the
DATA split by year, summing the per-dataset skimmed histograms within each year:
  - Prompt-reco Cosmics (Run2022, Run2023, Run2024, Run2025) -> solid lines
  - Commissioning data, one curve per year (Commissioning2021..2025) -> dashed,
    each in its own distinct color so the commissioning contribution stands out.

Same plots/style as the original: the pre-made h_<var>_<step> histograms for the
preselection variables (4 cutflow steps), plus the RNN-score plot from the tree.

Env vars:
  REGION    sr | vr1 | vr2     (default sr)
  ONLY_RNN  1 -> only the RNN-score plot
  BASE_PATH override input base dir
"""
import os
import re
import glob
import ROOT, cmsstyle as CMS

ROOT.gROOT.SetBatch(True)
ROOT.gErrorIgnoreLevel = ROOT.kWarning
CMS.SetExtraText("Work in Progress")

base_path = os.environ.get(
    'BASE_PATH',
    '/ceph/cms/store/user/tvami/EarthAsDM/Ntuples/Ntuples_v5.0.1_wRNN')
collections = ['matched_muon']
region = os.environ.get('REGION', 'sr')
ONLY_RNN = os.environ.get('ONLY_RNN', '0') == '1'
# Lower Y-axis bound for the (log-scale) preselection-variable plots.
PRESEL_YMIN = float(os.environ.get('PRESEL_YMIN', '1e-5'))

# Active preselection variables (mirrors the original base_var_dict).
# Layout: [_, nbins, xmin, xmax, h_pretrigger, h_trigger, h_nminus1, h_final, xtitle]
base_var_dict = {
    "eta":               [0, 25, -2.5, 2.5, 'eta_pretrigger', 'eta_trigger', 'eta_nminus1', 'eta_final', '#eta'],
    "pt":                [1, 500, 0, 10000, 'pt_pretrigger', 'pt_trigger', 'pt_nminus1', 'pt_final', 'p_{T} [GeV]'],
    "phi":               [2, 25, -3.15, 3.15, 'phi_pretrigger', 'phi_trigger', 'phi_nminus1', 'phi_final', '#phi'],
    "nseg":              [4, 20, 0, 20, 'nseg_pretrigger', 'nseg_trigger', 'nseg_nminus1', 'nseg_final', 'n_{Seg}'],
    "nhits":             [5, 80, 0, 80, 'nhits_pretrigger', 'nhits_trigger', 'nhits_nminus1', 'nhits_final', 'n_{Hits}'],
    "chi2ndof":          [6, 100, 0, 100, 'chi2ndof_pretrigger', 'chi2ndof_trigger', 'chi2ndof_nminus1', 'chi2ndof_final', '#chi^{2}/n_{DoF}'],
    "ptErrPerPt2":       [7, 100, 0, 0.01, 'ptErrPerPt2_pretrigger', 'ptErrPerPt2_trigger', 'ptErrPerPt2_nminus1', 'ptErrPerPt2_final', 'p_{T} Error / p_{T}^{2} [GeV^{-1}]'],
    "ptErrPerPt2_zoom":  [8, 100, 0, 0.002, 'ptErrPerPt2_zoom_pretrigger', 'ptErrPerPt2_zoom_trigger', 'ptErrPerPt2_zoom_nminus1', 'ptErrPerPt2_zoom_final', 'p_{T} Error / p_{T}^{2} [GeV^{-1}]'],
    "ptErrPerPt":        [9, 100, 0, 1, 'ptErrPerPt_pretrigger', 'ptErrPerPt_trigger', 'ptErrPerPt_nminus1', 'ptErrPerPt_final', 'p_{T} Error / p_{T}'],
    "nhits_highpt":      [23, 80, 0, 80, None, None, None, 'nhits_highpt', 'N_{valid hits} (highest p_{T})'],
    "chi2ndof_highpt":   [24, 100, 0, 100, None, None, None, 'chi2ndof_highpt', '#chi^{2}/n_{DoF} (highest p_{T})'],
    "ptErrPerPt2_highpt":[25, 100, 0, 0.01, None, None, None, 'ptErrPerPt2_highpt', '#sigma(p_{T})/p_{T}^{2} [GeV^{-1}] (highest p_{T})'],
    "eta_highpt":        [26, 100, -3, 3, None, None, None, 'eta_highpt', '#eta (highest p_{T})'],
    "phi_highpt":        [27, 100, -3.15, 3.15, None, None, None, 'phi_highpt', '#phi (highest p_{T})'],
    "pt_highpt":         [28, 500, 0, 10000, None, None, None, 'pt_highpt', 'p_{T} [GeV] (highest p_{T})'],
}

presel_steps_arr = ["pretrigger", "trigger", "nminus1", "final"]

# Distinct colors. Prompt-data years cycle through the first list (solid);
# commissioning years cycle through the second (dashed) so they never collide.
DATA_COLORS = [ROOT.kBlue + 1, ROOT.kGreen + 2, ROOT.kOrange + 1, ROOT.kRed + 1,
               ROOT.kBlack, ROOT.kCyan + 2]
COMM_COLORS = [ROOT.kMagenta + 1, ROOT.kAzure + 7, ROOT.kTeal + 3, ROOT.kGray + 2,
               ROOT.kPink + 7, ROOT.kViolet - 1]

garbage_protect_list = []


def fold_overflow(h):
    """Fold under/overflow into first/last visible bins (1D)."""
    nb = h.GetNbinsX()
    h.SetBinContent(1, h.GetBinContent(0) + h.GetBinContent(1))
    h.SetBinContent(nb, h.GetBinContent(nb) + h.GetBinContent(nb + 1))
    h.SetBinContent(0, 0)
    h.SetBinContent(nb + 1, 0)


def discover_year_groups(collection):
    """Find data skim files and group them by (kind, year).

    Returns an ordered list of dicts: prompt-data years first (ascending),
    then commissioning years (ascending). Each dict has label/color/style/files.
    """
    pattern = (f"{base_path}/Data/{region}/{collection}/"
               f"skimmed_{collection}_{region}_Ntuplizer-Cosmics_*.root")
    files = sorted(glob.glob(pattern))
    buckets = {}  # (is_comm, year) -> [files]
    for fp in files:
        m = re.search(r'Ntuplizer-Cosmics_(Commissioning|Run)(\d{4})', os.path.basename(fp))
        if not m:
            continue
        is_comm = m.group(1) == "Commissioning"
        year = m.group(2)
        buckets.setdefault((is_comm, year), []).append(fp)

    data_years = sorted(y for (c, y) in buckets if not c)
    comm_years = sorted(y for (c, y) in buckets if c)

    groups = []
    for i, y in enumerate(data_years):
        groups.append({
            "label": y,
            "files": buckets[(False, y)],
            "color": DATA_COLORS[i % len(DATA_COLORS)],
            "style": 1,            # solid
            "is_comm": False,
        })
    for i, y in enumerate(comm_years):
        groups.append({
            "label": f"Commissioning {y}",
            "files": buckets[(True, y)],
            "color": COMM_COLORS[i % len(COMM_COLORS)],
            "style": 2,            # dashed
            "is_comm": True,
        })
    return groups


def sum_named_hist(files, hist_name):
    """Sum a pre-made TH1 across a list of files. Returns a detached TH1 or None."""
    htot = None
    for fp in files:
        f = ROOT.TFile.Open(fp)
        if not f or f.IsZombie():
            continue
        h = f.Get(hist_name)
        if h and h.InheritsFrom("TH1"):
            h = h.Clone(f"{hist_name}_clone_{len(garbage_protect_list)}_{id(fp)}")
            h.SetDirectory(0)
            if htot is None:
                htot = h
            else:
                htot.Add(h)
        f.Close()
    return htot


def style_and_draw(h, group, leg):
    h.SetLineColor(group["color"])
    h.SetMarkerColor(group["color"])
    h.SetLineStyle(group["style"])
    h.SetLineWidth(2)
    h.Draw("HIST SAME")
    leg.AddEntry(h, group["label"], "l")
    garbage_protect_list.append(h)


for collection in collections:
    groups = discover_year_groups(collection)
    if not groups:
        print(f"No data files found under {base_path}/Data/{region}/{collection}/ - skipping")
        continue
    print(f"[{collection}/{region}] year groups: "
          + ", ".join(f"{g['label']}({len(g['files'])})" for g in groups))

    outdir = f"figures/presel_perYear_skimmedNtuples/{collection}"
    os.makedirs(outdir, exist_ok=True)

    # ---------------------------------------------------------------
    # RNN-score plot (from the tree, summed per year via RDataFrame)
    # ---------------------------------------------------------------
    nbins, xlo, xhi = 100, 0, 1
    c = CMS.cmsCanvas('', 0, 1, 0, 1, '', '')
    c.SetLeftMargin(0.2)
    c.SetRightMargin(0.2)
    c.SetLogy(True)
    hframe = ROOT.TH1F("hframe_rnn", "", nbins, xlo, xhi)
    hframe.SetStats(False)
    hframe.GetXaxis().SetTitle('RNN Score')
    hframe.GetYaxis().SetTitle('Normalized Yield / Bin')
    hframe.GetXaxis().SetLabelSize(0.04)
    hframe.GetYaxis().SetLabelSize(0.04)
    hframe.GetXaxis().SetMaxDigits(3)
    hframe.GetXaxis().SetNdivisions(510)
    hframe.SetMinimum(5e-5)
    hframe.SetMaximum(1)
    hframe.Draw()

    leg = ROOT.TLegend(0.50, 0.62, 0.80, 0.90)
    leg.SetBorderSize(0)
    leg.SetFillStyle(0)
    leg.SetTextFont(42)
    leg.SetTextSize(0.028)

    for g in groups:
        flist = ROOT.std.vector('string')()
        for fp in g["files"]:
            flist.push_back(fp)
        df = ROOT.RDataFrame("tree", flist)
        h = df.Histo1D((f"h_RNN_{g['label']}".replace(' ', '_'), "", nbins, xlo, xhi), "RNNScore")
        histo = h.GetValue().Clone()
        histo.SetDirectory(0)
        fold_overflow(histo)
        if histo.Integral() > 0:
            histo.Scale(1.0 / histo.Integral())
        style_and_draw(histo, g, leg)

    pave = ROOT.TPaveText(0.23, 0.80, 0.45, 0.90, "NDC")
    pave.SetFillColor(0)
    pave.SetBorderSize(0)
    pave.SetTextAlign(12)
    pave.SetTextSize(0.025)
    pave.AddText(f"Collection = {collection}")
    pave.AddText(f"Region = {region}")
    pave.AddText("trigger")
    pave.Draw()
    leg.Draw()
    CMS.CMS_lumi(c, iPosX=0, scaleLumi=0)
    c.SaveAs(f"{outdir}/{collection}_{region}_RNNScore_perYear.png")
    c.SaveAs(f"{outdir}/{collection}_{region}_RNNScore_perYear.pdf")
    del c, hframe
    garbage_protect_list.clear()

    if ONLY_RNN:
        continue

    # ---------------------------------------------------------------
    # Preselection variables: one overlay per (variable, cutflow step)
    # ---------------------------------------------------------------
    for main_var, vd in base_var_dict.items():
        nbins, vmin, vmax = vd[1], vd[2], vd[3]
        for num in range(4):
            base_name = vd[4 + num]
            if base_name is None:
                continue
            hist_name = f"h_{base_name}"

            c = CMS.cmsCanvas('', 0, 1, 0, 1, '', '')
            c.SetLogy(True)
            c.SetLeftMargin(0.153)
            c.SetRightMargin(0.08)

            bin_width = (vmax - vmin) / nbins
            hframe = ROOT.TH1F("hframe", "", nbins + 1, vmin, vmax + bin_width)
            hframe.SetStats(False)
            hframe.GetXaxis().SetTitle(vd[-1])
            hframe.GetYaxis().SetTitle("Fraction of Events")
            hframe.GetXaxis().SetLabelSize(0.04)
            hframe.GetYaxis().SetLabelSize(0.04)
            hframe.GetXaxis().SetMaxDigits(3)
            hframe.GetXaxis().SetNdivisions(510)
            hframe.SetMinimum(PRESEL_YMIN)
            hframe.SetMaximum(9.99)
            hframe.Draw()

            leg = ROOT.TLegend(0.60, 0.62, 0.80, 0.90)
            leg.SetBorderSize(0)
            leg.SetFillStyle(0)
            leg.SetTextFont(42)
            leg.SetTextSize(0.026)

            drew_any = False
            for g in groups:
                htot = sum_named_hist(g["files"], hist_name)
                if htot is None:
                    continue
                fold_overflow(htot)
                if htot.Integral() > 0:
                    htot.Scale(1.0 / htot.Integral())
                style_and_draw(htot, g, leg)
                drew_any = True

            if not drew_any:
                del c, hframe
                continue

            pave = ROOT.TPaveText(0.18, 0.80, 0.40, 0.90, "NDC")
            pave.SetFillColor(0)
            pave.SetBorderSize(0)
            pave.SetTextAlign(12)
            pave.SetTextSize(0.025)
            pave.AddText(f"Collection = {collection}")
            pave.AddText(f"Region = {region}")
            pave.AddText(presel_steps_arr[num])
            pave.Draw()
            leg.Draw()

            overflow_line = ROOT.TLine(vmax, hframe.GetMinimum(), vmax, hframe.GetMaximum())
            overflow_line.SetLineStyle(2)
            overflow_line.SetLineColor(ROOT.kGray + 2)
            overflow_line.Draw()

            CMS.CMS_lumi(c, iPosX=0, scaleLumi=0)
            c.SaveAs(f"{outdir}/perYear_{collection}_{region}_{base_name}.png")
            c.SaveAs(f"{outdir}/perYear_{collection}_{region}_{base_name}.pdf")
            del c, hframe
            garbage_protect_list.clear()

print("Done.")
