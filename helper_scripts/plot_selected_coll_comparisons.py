import os
import ROOT, cmsstyle as CMS
from tqdm import tqdm

ROOT.gROOT.SetBatch(True)
ROOT.gErrorIgnoreLevel = ROOT.kWarning
CMS.SetExtraText("Work in Progress")

base_path = '/home/users/tvami/EarthAsDM/Ntuples_v4.0.9'
# collections = ['track', 'muon', 'matched_muon', 'tuneP']
# collections = ['matched_muon', 'muon']
# collections = ['matched_muon', 'track']
collections = ['muon', 'tuneP']
region = 'sr'

samples_dict = {
    "Cosmic Bkg":       ["BkgMC",  "CosmicToMu_Par-MinP-4-MaxP-3000-MinTheta-0-MaxTheta-75_cosmuogen.root"],
    "Neutrino Bkg":     ["BkgMC",  "CosmicToMu_Par-MinP-10-MaxP-10000-MinTheta-91-MaxTheta-179_cosmuogen.root"],
    "M_{DM} = 2 TeV":   ["Signal", "CosmicToMu_Par-MinP-1000-MinTheta-91-MaxTheta-179-SurfaceDepth-e2_cosmuogen.root"],
    "M_{DM} = 10 TeV":  ["Signal", "CosmicToMu_Par-MinP-5000-MinTheta-91-MaxTheta-179-SurfaceDepth-e2_cosmuogen.root"],
    "M_{DM} = 20 TeV":  ["Signal", "CosmicToMu_Par-MinP-10000-MinTheta-91-MaxTheta-179-SurfaceDepth-e2_cosmuogen.root"],
    "M_{DM} = 180 TeV": ["Signal", "CosmicToMu_Par-MinP-90000-MinTheta-91-MaxTheta-179-SurfaceDepth-e2_cosmuogen.root"],
    "Run-3 Cosmics": ["Data", "Ntuplizer-Cosmics_All_v4.root"]
}

# Variables to plot: {name: [hist_name_in_file, nbins, xmin, xmax, x_title, rebin]}
var_dict = {
    "eta":           ["h_eta_final",           25,  -2.5,   2.5,   '#eta',                                  1],
    "pt":            ["h_pt_final",           100,   0,   10000,   'p_{T} [GeV]',                           5],
    "phi":           ["h_phi_final",           25, -3.15,  3.15,   '#phi',                                  1],
    "nseg":          ["h_nseg_final",          20,   0,     20,    'n_{Seg}',                                1],
    "nhits":         ["h_nhits_final",         80,   0,     80,    'n_{Hits}',                               1],
    "chi2ndof":      ["h_chi2ndof_final",     100,   0,    100,    '#chi^{2}/n_{DoF}',                      1],
    "ptErrPerPt2":   ["h_ptErrPerPt2_final",  100,   0,   0.01,   '#sigma(p_{T})/p_{T}^{2} [GeV^{-1}]',   1],
}

# Colors matching plot_presel_skimmedNtuples.py convention
sample_colors = {}
_cn = 7
for _s in samples_dict:
    _cn -= 1
    if _cn == 1:  # skip kBlack (reserved for data)
        _cn = 9
    if samples_dict[_s][0] == "Data":
        sample_colors[_s] = ROOT.kBlack
    else:
        sample_colors[_s] = _cn

# Line styles for the 4 collections
collection_styles = {
    'track':         2,   # dashed
    'muon':          3,   # dotted
    'matched_muon':  1,   # solid
    'tuneP':         6,   # dash-dotted
}

collection_labels = {
    'track':         'Track',
    'muon':          'Muon',
    'matched_muon':  'Matched Muon',
    'tuneP':         'TuneP',
}

garbage_protect_list = []
coll_tag = "_".join(collections)
out_dir = "figures/selected_collection_comparisons"
os.makedirs(out_dir, exist_ok=True)


def fold_overflow(h):
    nb = h.GetNbinsX()
    h.SetBinContent(1, h.GetBinContent(0) + h.GetBinContent(1))
    h.SetBinContent(nb, h.GetBinContent(nb) + h.GetBinContent(nb + 1))
    h.SetBinContent(0, 0)
    h.SetBinContent(nb + 1, 0)


def load_hist(collection, sample_name, hist_name, rebin=1):
    """Load a histogram from the skimmed ntuple file. Returns None on failure."""
    file_path = (f'{base_path}/{samples_dict[sample_name][0]}/{region}/'
                 f'{collection}/skimmed_{collection}_{region}_{samples_dict[sample_name][1]}')
    if not os.path.exists(file_path):
        return None
    f = ROOT.TFile(file_path)
    h = f.Get(hist_name)
    if not h or not h.InheritsFrom("TH1"):
        f.Close()
        return None
    h.SetDirectory(0)
    f.Close()
    if rebin > 1:
        h.Rebin(rebin)
    fold_overflow(h)
    if h.Integral() > 0:
        h.Scale(1.0 / h.Integral())
    return h


# =====================================================================
# Plot type 1: overlay samples (4 sig + 2 bkg) per collection
# =====================================================================
print("--- Overlay samples per collection ---")
for collection in tqdm(collections, desc="Collections"):
    for var_name, var_info in tqdm(var_dict.items(), desc=f"  {collection}", leave=False):
        hist_name, nbins, xmin, xmax, xtitle, rebin = var_info

        c = CMS.cmsCanvas('', 0, 1, 0, 1, '', '')
        c.SetLogy(True)
        c.SetLeftMargin(0.153)
        c.SetRightMargin(0.08)

        bin_width = (xmax - xmin) / nbins
        hframe = ROOT.TH1F("hframe", "", nbins + 1, xmin, xmax + bin_width)
        hframe.SetStats(False)
        hframe.GetXaxis().SetTitle(xtitle)
        hframe.GetYaxis().SetTitle("Fraction of Events")
        hframe.GetXaxis().SetLabelSize(0.04)
        hframe.GetYaxis().SetLabelSize(0.04)
        hframe.GetXaxis().SetMaxDigits(3)
        hframe.GetXaxis().SetNdivisions(510)
        hframe.SetMinimum(1e-5)
        hframe.SetMaximum(99.9)
        hframe.Draw()

        leg = ROOT.TLegend(0.60, 0.60, 0.88, 0.9)
        leg.SetBorderSize(0)
        leg.SetFillStyle(0)
        leg.SetTextFont(42)

        for sample_name in samples_dict:
            h = load_hist(collection, sample_name, hist_name, rebin)
            if h is None:
                continue
            col = sample_colors[sample_name]
            is_data = samples_dict[sample_name][0] == "Data"
            is_cosmic_bkg = sample_name == "Cosmic Bkg"
            h.SetLineColor(col)
            h.SetMarkerColor(col)
            h.SetMarkerStyle(20)
            h.SetMarkerSize(0.6 if is_data else 1.0)
            h.SetLineWidth(2)
            if is_cosmic_bkg:
                h.SetFillColor(col)
                h.SetFillStyle(3004)
            if is_data:
                h.Draw("P SAME")
                leg.AddEntry(h, sample_name, "p")
            elif is_cosmic_bkg:
                h.Draw("HIST SAME")
                leg.AddEntry(h, sample_name, "f")
            else:
                h.Draw("HIST SAME")
                leg.AddEntry(h, sample_name, "l")
            garbage_protect_list.append(h)

        pave = ROOT.TPaveText(0.18, 0.82, 0.40, 0.90, "NDC")
        pave.SetFillColor(0)
        pave.SetBorderSize(0)
        pave.SetTextAlign(12)
        pave.SetTextSize(0.025)
        pave.AddText(f"Collection = {collection}")
        pave.AddText("Signal Depth: 0.01 mm")
        pave.Draw()
        leg.Draw()

        overflow_line = ROOT.TLine(xmax, hframe.GetMinimum(), xmax, hframe.GetMaximum())
        overflow_line.SetLineStyle(2)
        overflow_line.SetLineColor(ROOT.kGray + 2)
        overflow_line.Draw()

        CMS.CMS_lumi(c, iPosX=0, scaleLumi=0)
        c.SaveAs(f"{out_dir}/samples_{collection}_{coll_tag}_{var_name}.png")
        c.SaveAs(f"{out_dir}/samples_{collection}_{coll_tag}_{var_name}.pdf")

        del c, hframe
        garbage_protect_list.clear()


# =====================================================================
# Plot type 2: overlay collections per sample
# =====================================================================
print("--- Overlay collections per sample ---")
for sample_name in tqdm(list(samples_dict.keys()), desc="Samples"):
    sample_tag = (sample_name.replace("{", "").replace("}", "")
                  .replace(" = ", "_").replace(" ", "_").replace("_TeV", "TeV"))

    for var_name, var_info in tqdm(var_dict.items(), desc=f"  {sample_tag}", leave=False):
        hist_name, nbins, xmin, xmax, xtitle, rebin = var_info

        c = CMS.cmsCanvas('', 0, 1, 0, 1, '', '')
        c.SetLogy(True)
        c.SetLeftMargin(0.153)
        c.SetRightMargin(0.08)

        bin_width = (xmax - xmin) / nbins
        hframe = ROOT.TH1F("hframe", "", nbins + 1, xmin, xmax + bin_width)
        hframe.SetStats(False)
        hframe.GetXaxis().SetTitle(xtitle)
        hframe.GetYaxis().SetTitle("Fraction of Events")
        hframe.GetXaxis().SetLabelSize(0.04)
        hframe.GetYaxis().SetLabelSize(0.04)
        hframe.GetXaxis().SetMaxDigits(3)
        hframe.GetXaxis().SetNdivisions(510)
        hframe.SetMinimum(1e-5)
        hframe.SetMaximum(99.9)
        hframe.Draw()

        leg = ROOT.TLegend(0.60, 0.72, 0.88, 0.9)
        leg.SetBorderSize(0)
        leg.SetFillStyle(0)
        leg.SetTextFont(42)

        is_data = samples_dict[sample_name][0] == "Data"
        base_color = sample_colors[sample_name]

        for coll in collections:
            h = load_hist(coll, sample_name, hist_name, rebin)
            if h is None:
                continue
            h.SetLineColor(base_color)
            h.SetMarkerColor(base_color)
            h.SetMarkerStyle(20 if is_data else 8)
            h.SetMarkerSize(0.6 if is_data else 1.0)
            h.SetLineWidth(2)
            h.SetLineStyle(collection_styles[coll])
            if is_data:
                h.Draw("P SAME")
            else:
                h.Draw("HIST SAME")
            leg.AddEntry(h, collection_labels[coll], "p" if is_data else "l")
            garbage_protect_list.append(h)

        pave = ROOT.TPaveText(0.18, 0.82, 0.40, 0.90, "NDC")
        pave.SetFillColor(0)
        pave.SetBorderSize(0)
        pave.SetTextAlign(12)
        pave.SetTextSize(0.025)
        pave.AddText(f"Sample = {sample_name}")
        pave.AddText("Signal Depth: 0.01 mm")
        pave.Draw()
        leg.Draw()

        overflow_line = ROOT.TLine(xmax, hframe.GetMinimum(), xmax, hframe.GetMaximum())
        overflow_line.SetLineStyle(2)
        overflow_line.SetLineColor(ROOT.kGray + 2)
        overflow_line.Draw()

        CMS.CMS_lumi(c, iPosX=0, scaleLumi=0)
        c.SaveAs(f"{out_dir}/collections_{sample_tag}_{coll_tag}_{var_name}.png")
        c.SaveAs(f"{out_dir}/collections_{sample_tag}_{coll_tag}_{var_name}.pdf")

        del c, hframe
        garbage_protect_list.clear()

# =====================================================================
# Plot type 3: overlay both samples AND collections on the same canvas
#   color  = sample identity
#   style  = collection identity
# =====================================================================
print("--- Combined: all samples x all collections ---")
for var_name, var_info in tqdm(var_dict.items(), desc="Combined"):
    hist_name, nbins, xmin, xmax, xtitle, rebin = var_info

    c = CMS.cmsCanvas('', 0, 1, 0, 1, '', '')
    c.SetLogy(True)
    c.SetLeftMargin(0.153)
    c.SetRightMargin(0.08)

    bin_width = (xmax - xmin) / nbins
    hframe = ROOT.TH1F("hframe", "", nbins + 1, xmin, xmax + bin_width)
    hframe.SetStats(False)
    hframe.GetXaxis().SetTitle(xtitle)
    hframe.GetYaxis().SetTitle("Fraction of Events")
    hframe.GetXaxis().SetLabelSize(0.04)
    hframe.GetYaxis().SetLabelSize(0.04)
    hframe.GetXaxis().SetMaxDigits(3)
    hframe.GetXaxis().SetNdivisions(510)
    hframe.SetMinimum(1e-5)
    hframe.SetMaximum(99.9)
    hframe.Draw()

    # Two-part legend: left = samples (by color), right = collections (by style)
    leg_samples = ROOT.TLegend(0.50, 0.55, 0.72, 0.90)
    leg_samples.SetBorderSize(0)
    leg_samples.SetFillStyle(0)
    leg_samples.SetTextFont(42)
    leg_samples.SetTextSize(0.025)
    leg_samples.SetHeader("Sample", "C")

    leg_colls = ROOT.TLegend(0.73, 0.72, 0.85, 0.90)
    leg_colls.SetBorderSize(0)
    leg_colls.SetFillStyle(0)
    leg_colls.SetTextFont(42)
    leg_colls.SetTextSize(0.025)
    leg_colls.SetHeader("Collection", "C")

    # Draw all curves
    for sample_name in samples_dict:
        is_data = samples_dict[sample_name][0] == "Data"
        for coll in collections:
            h = load_hist(coll, sample_name, hist_name, rebin)
            if h is None:
                continue
            col = sample_colors[sample_name]
            h.SetLineColor(col)
            h.SetMarkerColor(col)
            h.SetMarkerStyle(20 if is_data else 8)
            h.SetMarkerSize(0.6 if is_data else 1.0)
            h.SetLineWidth(2)
            h.SetLineStyle(collection_styles[coll])
            if is_data:
                h.Draw("P SAME")
            else:
                h.Draw("HIST SAME")
            garbage_protect_list.append(h)

    # Build sample legend entries (one dummy hist per sample, solid line)
    for sample_name in samples_dict:
        hd = ROOT.TH1F(f"hd_s_{sample_name}_{var_name}", "", 1, 0, 1)
        hd.SetLineColor(sample_colors[sample_name])
        hd.SetLineWidth(2)
        hd.SetLineStyle(1)
        is_data = samples_dict[sample_name][0] == "Data"
        is_cosmic_bkg = sample_name == "Cosmic Bkg"
        if is_data:
            hd.SetMarkerStyle(20)
            hd.SetMarkerSize(0.6)
            leg_samples.AddEntry(hd, sample_name, "p")
        elif is_cosmic_bkg:
            hd.SetFillColor(sample_colors[sample_name])
            hd.SetFillStyle(3004)
            leg_samples.AddEntry(hd, sample_name, "f")
        else:
            leg_samples.AddEntry(hd, sample_name, "l")
        garbage_protect_list.append(hd)

    # Build collection legend entries (one dummy hist per collection, black)
    for coll in collections:
        hd = ROOT.TH1F(f"hd_c_{coll}_{var_name}", "", 1, 0, 1)
        hd.SetLineColor(ROOT.kBlack)
        hd.SetLineWidth(2)
        hd.SetLineStyle(collection_styles[coll])
        leg_colls.AddEntry(hd, collection_labels[coll], "l")
        garbage_protect_list.append(hd)

    pave = ROOT.TPaveText(0.18, 0.82, 0.40, 0.90, "NDC")
    pave.SetFillColor(0)
    pave.SetBorderSize(0)
    pave.SetTextAlign(12)
    pave.SetTextSize(0.025)
    pave.AddText("All collections")
    pave.AddText("Signal Depth: 0.01 mm")
    pave.Draw()
    leg_samples.Draw()
    leg_colls.Draw()

    overflow_line = ROOT.TLine(xmax, hframe.GetMinimum(), xmax, hframe.GetMaximum())
    overflow_line.SetLineStyle(2)
    overflow_line.SetLineColor(ROOT.kGray + 2)
    overflow_line.Draw()

    CMS.CMS_lumi(c, iPosX=0, scaleLumi=0)
    c.SaveAs(f"{out_dir}/combined_{coll_tag}_{var_name}.png")
    c.SaveAs(f"{out_dir}/combined_{coll_tag}_{var_name}.pdf")

    del c, hframe
    garbage_protect_list.clear()

print("Done!")
