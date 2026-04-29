import os
import array
import ROOT, cmsstyle as CMS
from tqdm import tqdm

ROOT.gROOT.SetBatch(True)
ROOT.gErrorIgnoreLevel = ROOT.kWarning
CMS.SetExtraText("Work in Progress")

base_path = '/ceph/cms/store/user/tvami/EarthAsDM/Ntuples/Ntuples_v4.1.1'
# collections = ['matched_muon', 'track', 'muon', 'tuneP']
collections = ['matched_muon']
region = 'sr'  # sr, vr1, vr2

samples_dict = {
    "Cosmic Bkg":    ["BkgMC",  "CosmicToMu_Par-MinP-4-MaxP-3000-MinTheta-0-MaxTheta-75_cosmuogen.root"],
    "Neutrino Bkg":  ["BkgMC",  "CosmicToMu_Par-MinP-10-MaxP-10000-MinTheta-91-MaxTheta-179_cosmuogen.root"],
    "M_{DM} = 2 TeV":   ["Signal", "CosmicToMu_Par-MinP-1000-MinTheta-91-MaxTheta-179-SurfaceDepth-e2_cosmuogen.root"],
    "M_{DM} = 10 TeV":  ["Signal", "CosmicToMu_Par-MinP-5000-MinTheta-91-MaxTheta-179-SurfaceDepth-e2_cosmuogen.root"],
    "M_{DM} = 20 TeV":  ["Signal", "CosmicToMu_Par-MinP-10000-MinTheta-91-MaxTheta-179-SurfaceDepth-e2_cosmuogen.root"],
    "M_{DM} = 180 TeV": ["Signal", "CosmicToMu_Par-MinP-90000-MinTheta-91-MaxTheta-179-SurfaceDepth-e2_cosmuogen.root"],
    "Run-3 Cosmics": ["Data",   "Ntuplizer-Cosmics_All_v4.root"],
}


def get_branches(collection):
    """Return (pt, ptErr, eta, phi, chi2, ndof, nhits) branch names for a given collection."""
    if collection == 'matched_muon':
        return ('muon_fromGenTrack_Pt', 'muon_fromGenTrack_PtErr', 'muon_fromGenTrack_Eta',
                'muon_fromGenTrack_Phi',
                'muon_fromGenTrack_Chi2', 'muon_fromGenTrack_Ndof', 'muon_fromGenTrack_NumValidHits')
    elif collection == 'tuneP':
        return ('muon_tuneP_Pt', 'muon_tuneP_PtErr', 'muon_tuneP_Eta',
                'muon_tuneP_Phi',
                'muon_chi2', 'muon_comb_ndof', 'muon_numberOfValidHits')
    elif collection == 'track':
        return ('track_pt', 'track_ptErr', 'track_eta',
                'track_phi',
                'track_chi2', 'track_ndof', 'track_numberOfValidHits')
    else:  # muon
        return ('muon_pt', 'muon_ptErr', 'muon_eta',
                'muon_phi',
                'muon_chi2', 'muon_comb_ndof', 'muon_numberOfValidHits')


def make_quality_df(df, collection, region='sr'):
    """Attach per-object quality mask and derived columns."""
    pt_br, ptErr_br, eta_br, phi_br, chi2_br, ndof_br, nhits_br = get_branches(collection)

    pt_cond = f"{pt_br} > 200" if region in ('sr', 'vr1') else f"{pt_br} < 200"

    return (df
        .Define("_chi2ndof",
                f"ROOT::VecOps::Where({ndof_br} != 0, {chi2_br}/{ndof_br}, 999.f)")
        .Define("_ptErrOverPt2",
                f"ROOT::VecOps::Where({pt_br} > 0, "
                f"{ptErr_br}/({pt_br}*{pt_br}), 999.f)")
        .Define("_pass",
                f"{nhits_br} > 7 && _chi2ndof < 35.f "
                f"&& _ptErrOverPt2 < 1e-3f "
                f"&& abs({eta_br}) < 0.9f "
                f"&& {pt_cond}")
    )


def sample_color(idx, is_data):
    """Match the colouring of plot_presel_skimmedNtuples.py:
    start at 7, decrement before use, skip kBlack (1) -> 9."""
    if is_data:
        return ROOT.kBlack
    color_numerator = 7
    for _ in range(idx + 1):
        color_numerator -= 1
        if color_numerator == 1:   # skip kBlack
            color_numerator = 9
    return color_numerator


def draw_legend_and_pave(leg, collection, extra_line=''):
    leg.Draw()
    pave = ROOT.TPaveText(0.18, 0.78, 0.50, 0.90, "NDC")
    pave.SetFillColor(0)
    pave.SetBorderSize(0)
    pave.SetTextAlign(12)
    pave.SetTextSize(0.025)
    pave.AddText(f"Collection = {collection}")
    if extra_line:
        pave.AddText(extra_line)
    pave.Draw()
    return pave  # keep reference alive


garbage = []
os.makedirs("figures/pt_syst", exist_ok=True)

# Helper: count quality-passing objects whose pT is unique (no other object
# in the same event has |pT_i - pT_j| < 1e-5).
ROOT.gInterpreter.Declare("""
int count_unique_pt(const ROOT::RVec<float>& pt,
                    const ROOT::RVec<bool>&  pass,
                    float thr = 1e-5f) {
    auto pt_good = pt[pass];
    if (pt_good.size() == 0) return 0;
    // Sort then count how many distinct pT groups exist
    ROOT::RVec<float> sorted = pt_good;
    std::sort(sorted.begin(), sorted.end());
    int n = 1;
    for (size_t i = 1; i < sorted.size(); i++) {
        if (std::abs(sorted[i] - sorted[i-1]) >= thr) n++;
    }
    return n;
}
""")

# ============================================================
# pT bins used in the resolution study (GeV)
# ============================================================
PT_BINS = array.array('d', [200, 300, 400, 500, 700, 1000, 1200, 1500, 10000])

for collection in tqdm(collections, desc="Collections"):
    tqdm.write(f"\n=== Collection: {collection} ===")
    pt_br, ptErr_br, eta_br, phi_br, chi2_br, ndof_br, nhits_br = get_branches(collection)

    # -------------------------------------------------------
    # Plot 1 – Number of objects per event (#geq 1 passes quality)
    # -------------------------------------------------------
    c1 = CMS.cmsCanvas('', 0, 1, 0, 1, '', '')
    c1.SetLogy(True)
    c1.SetLeftMargin(0.153)
    c1.SetRightMargin(0.08)

    hf1 = ROOT.TH1F("hframe_nall", "", 21, -0.5, 20.5)
    hf1.SetStats(False)
    hf1.GetXaxis().SetTitle("Number of objects per event")
    hf1.GetYaxis().SetTitle("Fraction of Events")
    hf1.SetMinimum(1e-5)
    hf1.SetMaximum(99.9)
    hf1.Draw()

    leg1 = ROOT.TLegend(0.55, 0.70, 0.88, 0.90)
    leg1.SetBorderSize(0)
    leg1.SetFillStyle(0)
    leg1.SetTextFont(42)

    for idx, sample in enumerate(samples_dict):
        file_path = (f'{base_path}/{samples_dict[sample][0]}/{region}/{collection}'
                     f'/skimmed_{collection}_{region}_{samples_dict[sample][1]}')
        if not os.path.exists(file_path):
            tqdm.write(f"  SKIP (missing): {file_path}")
            continue
        df = ROOT.RDataFrame("tree", file_path)
        df_q = make_quality_df(df, collection, region)
        df_q = (df_q
            .Define("n_good", "Sum(_pass)")
            .Define("n_all",  f"(int){pt_br}.size()")
            .Filter("n_good >= 1")
        )
        h = df_q.Histo1D((f"h_nall_{collection}_{idx}", "", 21, -0.5, 20.5), "n_all")
        garbage.append(h)
        hv = h.GetValue()
        hv.SetDirectory(0)
        if hv.Integral() > 0:
            hv.Scale(1.0 / hv.Integral())
        is_data = samples_dict[sample][0] == "Data"
        is_cosmic = sample == "Cosmic Bkg"
        col = sample_color(idx, is_data)
        hv.SetLineColor(col)
        hv.SetMarkerColor(col)
        hv.SetLineWidth(2)
        hv.SetMarkerStyle(20 if is_data else 8)
        hv.SetMarkerSize(0.6 if is_data else 1.0)
        if is_cosmic:
            hv.SetFillColor(col)
            hv.SetFillStyle(3004)
        draw_opt = "P SAME" if is_data else "HIST SAME"
        leg_opt = "p" if is_data else ("f" if is_cosmic else "l")
        hv.Draw(draw_opt)
        leg1.AddEntry(hv, sample, leg_opt)
        garbage.append(hv)

    pave1 = draw_legend_and_pave(leg1, collection, "#geq 1 object passing quality cuts")
    garbage.append(pave1)
    CMS.CMS_lumi(c1, iPosX=0, scaleLumi=0)
    c1.SaveAs(f"figures/pt_syst/nobj_all_{collection}.png")
    c1.SaveAs(f"figures/pt_syst/nobj_all_{collection}.pdf")
    del c1, hf1

    # -------------------------------------------------------
    # Plot 2 – Number of objects per event (ALL pass quality)
    # -------------------------------------------------------
    c2 = CMS.cmsCanvas('', 0, 1, 0, 1, '', '')
    c2.SetLogy(True)
    c2.SetLeftMargin(0.153)
    c2.SetRightMargin(0.08)

    hf2 = ROOT.TH1F("hframe_ngood", "", 21, -0.5, 20.5)
    hf2.SetStats(False)
    hf2.GetXaxis().SetTitle("Number of objects per event")
    hf2.GetYaxis().SetTitle("Fraction of Events")
    hf2.SetMinimum(1e-5)
    hf2.SetMaximum(99.9)
    hf2.Draw()

    leg2 = ROOT.TLegend(0.55, 0.70, 0.88, 0.90)
    leg2.SetBorderSize(0)
    leg2.SetFillStyle(0)
    leg2.SetTextFont(42)

    for idx, sample in enumerate(samples_dict):
        file_path = (f'{base_path}/{samples_dict[sample][0]}/{region}/{collection}'
                     f'/skimmed_{collection}_{region}_{samples_dict[sample][1]}')
        if not os.path.exists(file_path):
            continue
        df = ROOT.RDataFrame("tree", file_path)
        df_q = make_quality_df(df, collection, region)
        df_q = (df_q
            .Define("n_good", "Sum(_pass)")
            .Define("n_all",  f"(int){pt_br}.size()")
            .Filter("n_good == n_all")
        )
        h = df_q.Histo1D((f"h_ngood_{collection}_{idx}", "", 21, -0.5, 20.5), "n_all")
        garbage.append(h)
        hv = h.GetValue()
        hv.SetDirectory(0)
        if hv.Integral() > 0:
            hv.Scale(1.0 / hv.Integral())
        is_data = samples_dict[sample][0] == "Data"
        is_cosmic = sample == "Cosmic Bkg"
        col = sample_color(idx, is_data)
        hv.SetLineColor(col)
        hv.SetMarkerColor(col)
        hv.SetLineWidth(2)
        hv.SetMarkerStyle(20 if is_data else 8)
        hv.SetMarkerSize(0.6 if is_data else 1.0)
        if is_cosmic:
            hv.SetFillColor(col)
            hv.SetFillStyle(3004)
        draw_opt = "P SAME" if is_data else "HIST SAME"
        leg_opt = "p" if is_data else ("f" if is_cosmic else "l")
        hv.Draw(draw_opt)
        leg2.AddEntry(hv, sample, leg_opt)
        garbage.append(hv)

    pave2 = draw_legend_and_pave(leg2, collection, "All objects passing quality cuts")
    garbage.append(pave2)
    CMS.CMS_lumi(c2, iPosX=0, scaleLumi=0)
    c2.SaveAs(f"figures/pt_syst/nobj_good_{collection}.png")
    c2.SaveAs(f"figures/pt_syst/nobj_good_{collection}.pdf")
    del c2, hf2

    # -------------------------------------------------------
    # Plot 2b – Number of non-duplicate quality objects per event
    #           (exclude tracks sharing pT within 1e-5)
    # -------------------------------------------------------
    c2b = CMS.cmsCanvas('', 0, 1, 0, 1, '', '')
    c2b.SetLogy(True)
    c2b.SetLeftMargin(0.153)
    c2b.SetRightMargin(0.08)

    hf2b = ROOT.TH1F("hframe_nuniq", "", 21, -0.5, 20.5)
    hf2b.SetStats(False)
    hf2b.GetXaxis().SetTitle("N unique quality objects")
    hf2b.GetYaxis().SetTitle("Fraction of Events")
    hf2b.SetMinimum(1e-5)
    hf2b.SetMaximum(99.9)
    hf2b.Draw()

    leg2b = ROOT.TLegend(0.55, 0.70, 0.88, 0.90)
    leg2b.SetBorderSize(0)
    leg2b.SetFillStyle(0)
    leg2b.SetTextFont(42)

    for idx, sample in enumerate(samples_dict):
        file_path = (f'{base_path}/{samples_dict[sample][0]}/{region}/{collection}'
                     f'/skimmed_{collection}_{region}_{samples_dict[sample][1]}')
        if not os.path.exists(file_path):
            continue
        df = ROOT.RDataFrame("tree", file_path)
        df_q = make_quality_df(df, collection, region)
        df_q = df_q.Define("n_unique_good",
                           f"count_unique_pt({pt_br}, _pass)")
        h = df_q.Histo1D((f"h_nuniq_{collection}_{idx}", "", 21, -0.5, 20.5),
                         "n_unique_good")
        garbage.append(h)
        hv = h.GetValue()
        hv.SetDirectory(0)
        if hv.Integral() > 0:
            hv.Scale(1.0 / hv.Integral())
        is_data = samples_dict[sample][0] == "Data"
        is_cosmic = sample == "Cosmic Bkg"
        col = sample_color(idx, is_data)
        hv.SetLineColor(col)
        hv.SetMarkerColor(col)
        hv.SetLineWidth(2)
        hv.SetMarkerStyle(20 if is_data else 8)
        hv.SetMarkerSize(0.6 if is_data else 1.0)
        if is_cosmic:
            hv.SetFillColor(col)
            hv.SetFillStyle(3004)
        draw_opt = "P SAME" if is_data else "HIST SAME"
        leg_opt = "p" if is_data else ("f" if is_cosmic else "l")
        hv.Draw(draw_opt)
        leg2b.AddEntry(hv, sample, leg_opt)
        garbage.append(hv)

    pave2b = draw_legend_and_pave(leg2b, collection,
                                  "Quality objects, |#Deltap_{T}| > 10^{-5}")
    garbage.append(pave2b)
    CMS.CMS_lumi(c2b, iPosX=0, scaleLumi=0)
    c2b.SaveAs(f"figures/pt_syst/nobj_unique_{collection}.png")
    c2b.SaveAs(f"figures/pt_syst/nobj_unique_{collection}.pdf")
    del c2b, hf2b

    # -------------------------------------------------------
    # Plot 2b2 – Number of unique quality objects per event (|delta pT| > 10 GeV)
    # -------------------------------------------------------
    c2b2 = CMS.cmsCanvas('', 0, 1, 0, 1, '', '')
    c2b2.SetLogy(True)
    c2b2.SetLeftMargin(0.153)
    c2b2.SetRightMargin(0.08)

    hf2b2 = ROOT.TH1F("hframe_nuniq10", "", 21, -0.5, 20.5)
    hf2b2.SetStats(False)
    hf2b2.GetXaxis().SetTitle("N unique quality objects")
    hf2b2.GetYaxis().SetTitle("Fraction of Events")
    hf2b2.SetMinimum(1e-5)
    hf2b2.SetMaximum(99.9)
    hf2b2.Draw()

    leg2b2 = ROOT.TLegend(0.55, 0.70, 0.88, 0.90)
    leg2b2.SetBorderSize(0)
    leg2b2.SetFillStyle(0)
    leg2b2.SetTextFont(42)

    for idx, sample in enumerate(samples_dict):
        file_path = (f'{base_path}/{samples_dict[sample][0]}/{region}/{collection}'
                     f'/skimmed_{collection}_{region}_{samples_dict[sample][1]}')
        if not os.path.exists(file_path):
            continue
        df = ROOT.RDataFrame("tree", file_path)
        df_q = make_quality_df(df, collection, region)
        df_q = df_q.Define("n_unique_good_10",
                           f"count_unique_pt({pt_br}, _pass, 10.f)")
        h = df_q.Histo1D((f"h_nuniq10_{collection}_{idx}", "", 21, -0.5, 20.5),
                         "n_unique_good_10")
        garbage.append(h)
        hv = h.GetValue()
        hv.SetDirectory(0)
        if hv.Integral() > 0:
            hv.Scale(1.0 / hv.Integral())
        is_data = samples_dict[sample][0] == "Data"
        is_cosmic = sample == "Cosmic Bkg"
        col = sample_color(idx, is_data)
        hv.SetLineColor(col)
        hv.SetMarkerColor(col)
        hv.SetLineWidth(2)
        hv.SetMarkerStyle(20 if is_data else 8)
        hv.SetMarkerSize(0.6 if is_data else 1.0)
        if is_cosmic:
            hv.SetFillColor(col)
            hv.SetFillStyle(3004)
        draw_opt = "P SAME" if is_data else "HIST SAME"
        leg_opt = "p" if is_data else ("f" if is_cosmic else "l")
        hv.Draw(draw_opt)
        leg2b2.AddEntry(hv, sample, leg_opt)
        garbage.append(hv)

    pave2b2 = draw_legend_and_pave(leg2b2, collection,
                                   "Quality objects, |#Deltap_{T}| > 10 GeV")
    garbage.append(pave2b2)
    CMS.CMS_lumi(c2b2, iPosX=0, scaleLumi=0)
    c2b2.SaveAs(f"figures/pt_syst/nobj_unique10_{collection}.png")
    c2b2.SaveAs(f"figures/pt_syst/nobj_unique10_{collection}.pdf")
    del c2b2, hf2b2

    # -------------------------------------------------------
    # Plot 2b3 – Number of unique quality objects per event (|delta pT| > 100 GeV)
    # -------------------------------------------------------
    c2b3 = CMS.cmsCanvas('', 0, 1, 0, 1, '', '')
    c2b3.SetLogy(True)
    c2b3.SetLeftMargin(0.153)
    c2b3.SetRightMargin(0.08)

    hf2b3 = ROOT.TH1F("hframe_nuniq100", "", 21, -0.5, 20.5)
    hf2b3.SetStats(False)
    hf2b3.GetXaxis().SetTitle("N unique quality objects")
    hf2b3.GetYaxis().SetTitle("Fraction of Events")
    hf2b3.SetMinimum(1e-5)
    hf2b3.SetMaximum(99.9)
    hf2b3.Draw()

    leg2b3 = ROOT.TLegend(0.55, 0.70, 0.88, 0.90)
    leg2b3.SetBorderSize(0)
    leg2b3.SetFillStyle(0)
    leg2b3.SetTextFont(42)

    for idx, sample in enumerate(samples_dict):
        file_path = (f'{base_path}/{samples_dict[sample][0]}/{region}/{collection}'
                     f'/skimmed_{collection}_{region}_{samples_dict[sample][1]}')
        if not os.path.exists(file_path):
            continue
        df = ROOT.RDataFrame("tree", file_path)
        df_q = make_quality_df(df, collection, region)
        df_q = df_q.Define("n_unique_good_100",
                           f"count_unique_pt({pt_br}, _pass, 100.f)")
        h = df_q.Histo1D((f"h_nuniq100_{collection}_{idx}", "", 21, -0.5, 20.5),
                         "n_unique_good_100")
        garbage.append(h)
        hv = h.GetValue()
        hv.SetDirectory(0)
        if hv.Integral() > 0:
            hv.Scale(1.0 / hv.Integral())
        is_data = samples_dict[sample][0] == "Data"
        is_cosmic = sample == "Cosmic Bkg"
        col = sample_color(idx, is_data)
        hv.SetLineColor(col)
        hv.SetMarkerColor(col)
        hv.SetLineWidth(2)
        hv.SetMarkerStyle(20 if is_data else 8)
        hv.SetMarkerSize(0.6 if is_data else 1.0)
        if is_cosmic:
            hv.SetFillColor(col)
            hv.SetFillStyle(3004)
        draw_opt = "P SAME" if is_data else "HIST SAME"
        leg_opt = "p" if is_data else ("f" if is_cosmic else "l")
        hv.Draw(draw_opt)
        leg2b3.AddEntry(hv, sample, leg_opt)
        garbage.append(hv)

    pave2b3 = draw_legend_and_pave(leg2b3, collection,
                                   "Quality objects, |#Deltap_{T}| > 100 GeV")
    garbage.append(pave2b3)
    CMS.CMS_lumi(c2b3, iPosX=0, scaleLumi=0)
    c2b3.SaveAs(f"figures/pt_syst/nobj_unique100_{collection}.png")
    c2b3.SaveAs(f"figures/pt_syst/nobj_unique100_{collection}.pdf")
    del c2b3, hf2b3

    # -------------------------------------------------------
    # Plot 2c – pT distribution for events with exactly 1, 2, or 3 unique quality objects
    # -------------------------------------------------------
    for n_uniq_req in [1, 2, 3]:
        c2c = CMS.cmsCanvas('', 0, 1, 0, 1, '', '')
        c2c.SetLogy(True)
        c2c.SetLeftMargin(0.153)
        c2c.SetRightMargin(0.08)

        hf2c = ROOT.TH1F(f"hframe_pt_nuniq{n_uniq_req}", "", 100, 0, 5000)
        hf2c.SetStats(False)
        hf2c.GetXaxis().SetTitle("p_{T} [GeV]")
        hf2c.GetYaxis().SetTitle("Fraction of Events")
        hf2c.SetMinimum(1e-5)
        hf2c.SetMaximum(99.9)
        hf2c.Draw()

        leg2c = ROOT.TLegend(0.55, 0.70, 0.88, 0.90)
        leg2c.SetBorderSize(0)
        leg2c.SetFillStyle(0)
        leg2c.SetTextFont(42)

        for idx, sample in enumerate(samples_dict):
            file_path = (f'{base_path}/{samples_dict[sample][0]}/{region}/{collection}'
                         f'/skimmed_{collection}_{region}_{samples_dict[sample][1]}')
            if not os.path.exists(file_path):
                continue
            df = ROOT.RDataFrame("tree", file_path)
            df_q = make_quality_df(df, collection, region)
            df_q = (df_q
                .Define("n_unique_good", f"count_unique_pt({pt_br}, _pass)")
                .Filter(f"n_unique_good == {n_uniq_req}")
                .Define("_pt_good", f"{pt_br}[_pass]")
            )
            h = df_q.Histo1D(
                (f"h_pt_nuniq{n_uniq_req}_{collection}_{idx}", "", 100, 0, 5000),
                "_pt_good")
            garbage.append(h)
            hv = h.GetValue()
            hv.SetDirectory(0)
            if hv.Integral() > 0:
                hv.Scale(1.0 / hv.Integral())
            is_data = samples_dict[sample][0] == "Data"
            is_cosmic = sample == "Cosmic Bkg"
            col = sample_color(idx, is_data)
            hv.SetLineColor(col)
            hv.SetMarkerColor(col)
            hv.SetLineWidth(2)
            hv.SetMarkerStyle(20 if is_data else 8)
            hv.SetMarkerSize(0.6 if is_data else 1.0)
            if is_cosmic:
                hv.SetFillColor(col)
                hv.SetFillStyle(3004)
            draw_opt = "P SAME" if is_data else "HIST SAME"
            leg_opt = "p" if is_data else ("f" if is_cosmic else "l")
            hv.Draw(draw_opt)
            leg2c.AddEntry(hv, sample, leg_opt)
            garbage.append(hv)

        pave2c = draw_legend_and_pave(leg2c, collection,
                                      f"N unique quality objects = {n_uniq_req}")
        garbage.append(pave2c)
        CMS.CMS_lumi(c2c, iPosX=0, scaleLumi=0)
        c2c.SaveAs(f"figures/pt_syst/pt_nuniq{n_uniq_req}_{collection}.png")
        c2c.SaveAs(f"figures/pt_syst/pt_nuniq{n_uniq_req}_{collection}.pdf")
        del c2c, hf2c

    # -------------------------------------------------------
    # Plot 3 – Tag-and-probe pT resolution (events with == 2 good objects)
    #
    # Strategy:
    #   • Keep only events where exactly 2 objects pass quality.
    #   • Sort passing pTs descending: tag = higher pT, probe = lower pT.
    #   • Compute delta = (pt_tag - pt_probe) / pt_avg,  pt_avg = (pt_tag+pt_probe)/2.
    #   • Fill 2D(pt_avg, delta), then profile → mean and RMS per pT bin.
    #   • The RMS of delta in each pT bin is the pT resolution for that pT.
    # -------------------------------------------------------

    # --- 3a: 1D distribution of delta (all pT together) ---
    c3a = CMS.cmsCanvas('', 0, 1, 0, 1, '', '')
    c3a.SetLogy(True)
    c3a.SetLeftMargin(0.153)
    c3a.SetRightMargin(0.08)

    hf3a = ROOT.TH1F("hframe_delta", "", 100, -0.4, 0.4)
    hf3a.SetStats(False)
    hf3a.GetXaxis().SetTitle("(p_{T}^{tag} #minus p_{T}^{probe}) / p_{T}^{avg}")
    hf3a.GetYaxis().SetTitle("Fraction of Events")
    hf3a.SetMinimum(1e-5)
    hf3a.SetMaximum(99.9)
    hf3a.Draw()

    leg3a = ROOT.TLegend(0.55, 0.70, 0.88, 0.90)
    leg3a.SetBorderSize(0)
    leg3a.SetFillStyle(0)
    leg3a.SetTextFont(42)

    for idx, sample in enumerate(samples_dict):
        file_path = (f'{base_path}/{samples_dict[sample][0]}/{region}/{collection}'
                     f'/skimmed_{collection}_{region}_{samples_dict[sample][1]}')
        if not os.path.exists(file_path):
            continue
        df = ROOT.RDataFrame("tree", file_path)
        df_q = make_quality_df(df, collection, region)

        # keep only events with exactly 2 good objects
        df_2 = (df_q
            .Filter("Sum(_pass) == 2")
            .Define("_pt_good",  f"{pt_br}[_pass]")
            .Define("pt_tag",    "(double)std::max(_pt_good[0], _pt_good[1])")
            .Define("pt_probe",  "(double)std::min(_pt_good[0], _pt_good[1])")
            .Define("pt_avg",    "(pt_tag + pt_probe) / 2.0")
            .Define("delta_pt",  "(pt_tag - pt_probe) / pt_avg")
            .Filter("delta_pt > 1e-9")  # remove exact duplicates (same float)
        )

        h = df_2.Histo1D((f"h_delta_{collection}_{idx}", "", 100, -1.0, 1.0), "delta_pt")
        garbage.append(h)
        hv = h.GetValue()
        hv.SetDirectory(0)
        if hv.Integral() > 0:
            hv.Scale(1.0 / hv.Integral())
        is_data = samples_dict[sample][0] == "Data"
        is_cosmic = sample == "Cosmic Bkg"
        col = sample_color(idx, is_data)
        hv.SetLineColor(col)
        hv.SetMarkerColor(col)
        hv.SetLineWidth(2)
        hv.SetMarkerStyle(20 if is_data else 8)
        hv.SetMarkerSize(0.6 if is_data else 1.0)
        if is_cosmic:
            hv.SetFillColor(col)
            hv.SetFillStyle(3004)
        draw_opt = "P SAME" if is_data else "HIST SAME"
        leg_opt = "p" if is_data else ("f" if is_cosmic else "l")
        hv.Draw(draw_opt)
        leg3a.AddEntry(hv, sample, leg_opt)
        garbage.append(hv)

    pave3a = draw_legend_and_pave(leg3a, collection, "Events with exactly 2 good objects")
    garbage.append(pave3a)
    CMS.CMS_lumi(c3a, iPosX=0, scaleLumi=0)
    c3a.SaveAs(f"figures/pt_syst/delta_pt_{collection}.png")
    c3a.SaveAs(f"figures/pt_syst/delta_pt_{collection}.pdf")
    del c3a, hf3a

    # --- 3a2: delta-phi between tag and probe (expect back-to-back -> |delta_phi| ~ pi) ---
    c3a2 = CMS.cmsCanvas('', 0, 1, 0, 1, '', '')
    c3a2.SetLogy(True)
    c3a2.SetLeftMargin(0.153)
    c3a2.SetRightMargin(0.08)

    hf3a2 = ROOT.TH1F("hframe_dphi", "", 64, -3.2, 3.2)
    hf3a2.SetStats(False)
    hf3a2.GetXaxis().SetTitle("#Delta#phi (tag, probe)")
    hf3a2.GetYaxis().SetTitle("Fraction of Events")
    hf3a2.SetMinimum(1e-5)
    hf3a2.SetMaximum(99.9)
    hf3a2.Draw()

    leg3a2 = ROOT.TLegend(0.55, 0.70, 0.88, 0.90)
    leg3a2.SetBorderSize(0)
    leg3a2.SetFillStyle(0)
    leg3a2.SetTextFont(42)

    for idx, sample in enumerate(samples_dict):
        file_path = (f'{base_path}/{samples_dict[sample][0]}/{region}/{collection}'
                     f'/skimmed_{collection}_{region}_{samples_dict[sample][1]}')
        if not os.path.exists(file_path):
            continue
        df = ROOT.RDataFrame("tree", file_path)
        df_q = make_quality_df(df, collection, region)

        df_2 = (df_q
            .Filter("Sum(_pass) == 2")
            .Define("_pt_good",  f"{pt_br}[_pass]")
            .Define("_phi_good", f"{phi_br}[_pass]")
            .Define("pt_tag",    "(double)std::max(_pt_good[0], _pt_good[1])")
            .Define("pt_probe",  "(double)std::min(_pt_good[0], _pt_good[1])")
            .Define("pt_avg",    "(pt_tag + pt_probe) / 2.0")
            .Define("delta_pt",  "(pt_tag - pt_probe) / pt_avg")
            .Filter("delta_pt > 1e-9")
            # tag = higher pT leg; pick phi accordingly
            .Define("phi_tag",   "(double)(_pt_good[0] >= _pt_good[1] ? _phi_good[0] : _phi_good[1])")
            .Define("phi_probe", "(double)(_pt_good[0] >= _pt_good[1] ? _phi_good[1] : _phi_good[0])")
            # delta phi in [-pi, pi]
            .Define("delta_phi",
                    "double dp = phi_tag - phi_probe;"
                    "while (dp >  M_PI) dp -= 2*M_PI;"
                    "while (dp < -M_PI) dp += 2*M_PI;"
                    "return dp;")
        )

        h = df_2.Histo1D((f"h_dphi_{collection}_{idx}", "", 64, -3.2, 3.2), "delta_phi")
        garbage.append(h)
        hv = h.GetValue()
        hv.SetDirectory(0)
        if hv.Integral() > 0:
            hv.Scale(1.0 / hv.Integral())
        is_data = samples_dict[sample][0] == "Data"
        is_cosmic = sample == "Cosmic Bkg"
        col = sample_color(idx, is_data)
        hv.SetLineColor(col)
        hv.SetMarkerColor(col)
        hv.SetLineWidth(2)
        hv.SetMarkerStyle(20 if is_data else 8)
        hv.SetMarkerSize(0.6 if is_data else 1.0)
        if is_cosmic:
            hv.SetFillColor(col)
            hv.SetFillStyle(3004)
        draw_opt = "P SAME" if is_data else "HIST SAME"
        leg_opt = "p" if is_data else ("f" if is_cosmic else "l")
        hv.Draw(draw_opt)
        leg3a2.AddEntry(hv, sample, leg_opt)
        garbage.append(hv)

    # vertical line at +/- pi
    pi_line_pos = ROOT.TLine( 3.14159, hf3a2.GetMinimum(),  3.14159, hf3a2.GetMaximum())
    pi_line_neg = ROOT.TLine(-3.14159, hf3a2.GetMinimum(), -3.14159, hf3a2.GetMaximum())
    for ln in (pi_line_pos, pi_line_neg):
        ln.SetLineStyle(2)
        ln.SetLineColor(ROOT.kGray + 2)
        ln.Draw()
        garbage.append(ln)

    pave3a2 = draw_legend_and_pave(leg3a2, collection, "Events with exactly 2 good objects")
    garbage.append(pave3a2)
    CMS.CMS_lumi(c3a2, iPosX=0, scaleLumi=0)
    c3a2.SaveAs(f"figures/pt_syst/delta_phi_{collection}.png")
    c3a2.SaveAs(f"figures/pt_syst/delta_phi_{collection}.pdf")
    del c3a2, hf3a2

    # --- 3a3: same delta-phi but requiring unique tracks (|pT_tag - pT_probe| > 1e-5) ---
    c3a3 = CMS.cmsCanvas('', 0, 1, 0, 1, '', '')
    c3a3.SetLogy(True)
    c3a3.SetLeftMargin(0.153)
    c3a3.SetRightMargin(0.08)

    hf3a3 = ROOT.TH1F("hframe_dphi_uniq", "", 64, -3.2, 3.2)
    hf3a3.SetStats(False)
    hf3a3.GetXaxis().SetTitle("#Delta#phi (tag, probe)")
    hf3a3.GetYaxis().SetTitle("Fraction of Events")
    hf3a3.SetMinimum(1e-5)
    hf3a3.SetMaximum(99.9)
    hf3a3.Draw()

    leg3a3 = ROOT.TLegend(0.55, 0.70, 0.88, 0.90)
    leg3a3.SetBorderSize(0)
    leg3a3.SetFillStyle(0)
    leg3a3.SetTextFont(42)

    for idx, sample in enumerate(samples_dict):
        file_path = (f'{base_path}/{samples_dict[sample][0]}/{region}/{collection}'
                     f'/skimmed_{collection}_{region}_{samples_dict[sample][1]}')
        if not os.path.exists(file_path):
            continue
        df = ROOT.RDataFrame("tree", file_path)
        df_q = make_quality_df(df, collection, region)

        df_2 = (df_q
            .Filter("Sum(_pass) == 2")
            .Define("_pt_good",  f"{pt_br}[_pass]")
            .Define("_phi_good", f"{phi_br}[_pass]")
            .Define("pt_tag",    "(double)std::max(_pt_good[0], _pt_good[1])")
            .Define("pt_probe",  "(double)std::min(_pt_good[0], _pt_good[1])")
            .Filter("std::abs(pt_tag - pt_probe) > 1e-5")  # unique tracks only
            .Define("phi_tag",   "(double)(_pt_good[0] >= _pt_good[1] ? _phi_good[0] : _phi_good[1])")
            .Define("phi_probe", "(double)(_pt_good[0] >= _pt_good[1] ? _phi_good[1] : _phi_good[0])")
            .Define("delta_phi",
                    "double dp = phi_tag - phi_probe;"
                    "while (dp >  M_PI) dp -= 2*M_PI;"
                    "while (dp < -M_PI) dp += 2*M_PI;"
                    "return dp;")
        )

        h = df_2.Histo1D((f"h_dphi_uniq_{collection}_{idx}", "", 64, -3.2, 3.2), "delta_phi")
        garbage.append(h)
        hv = h.GetValue()
        hv.SetDirectory(0)
        if hv.Integral() > 0:
            hv.Scale(1.0 / hv.Integral())
        is_data = samples_dict[sample][0] == "Data"
        is_cosmic = sample == "Cosmic Bkg"
        col = sample_color(idx, is_data)
        hv.SetLineColor(col)
        hv.SetMarkerColor(col)
        hv.SetLineWidth(2)
        hv.SetMarkerStyle(20 if is_data else 8)
        hv.SetMarkerSize(0.6 if is_data else 1.0)
        if is_cosmic:
            hv.SetFillColor(col)
            hv.SetFillStyle(3004)
        draw_opt = "P SAME" if is_data else "HIST SAME"
        leg_opt = "p" if is_data else ("f" if is_cosmic else "l")
        hv.Draw(draw_opt)
        leg3a3.AddEntry(hv, sample, leg_opt)
        garbage.append(hv)

    pi_line_pos2 = ROOT.TLine( 3.14159, hf3a3.GetMinimum(),  3.14159, hf3a3.GetMaximum())
    pi_line_neg2 = ROOT.TLine(-3.14159, hf3a3.GetMinimum(), -3.14159, hf3a3.GetMaximum())
    for ln in (pi_line_pos2, pi_line_neg2):
        ln.SetLineStyle(2)
        ln.SetLineColor(ROOT.kGray + 2)
        ln.Draw()
        garbage.append(ln)

    pave3a3 = draw_legend_and_pave(leg3a3, collection,
                                   "2 good objects, |#Deltap_{T}| > 10^{-5} (unique tracks)")
    garbage.append(pave3a3)
    CMS.CMS_lumi(c3a3, iPosX=0, scaleLumi=0)
    c3a3.SaveAs(f"figures/pt_syst/delta_phi_unique_{collection}.png")
    c3a3.SaveAs(f"figures/pt_syst/delta_phi_unique_{collection}.pdf")
    del c3a3, hf3a3

    # --- 3a4: delta-eta between tag and probe (unique tracks) ---
    c3a4 = CMS.cmsCanvas('', 0, 1, 0, 1, '', '')
    c3a4.SetLogy(True)
    c3a4.SetLeftMargin(0.153)
    c3a4.SetRightMargin(0.08)

    hf3a4 = ROOT.TH1F("hframe_deta", "", 80, -2.0, 2.0)
    hf3a4.SetStats(False)
    hf3a4.GetXaxis().SetTitle("#Delta#eta (tag, probe)")
    hf3a4.GetYaxis().SetTitle("Fraction of Events")
    hf3a4.SetMinimum(1e-5)
    hf3a4.SetMaximum(99.9)
    hf3a4.Draw()

    leg3a4 = ROOT.TLegend(0.55, 0.70, 0.88, 0.90)
    leg3a4.SetBorderSize(0)
    leg3a4.SetFillStyle(0)
    leg3a4.SetTextFont(42)

    for idx, sample in enumerate(samples_dict):
        file_path = (f'{base_path}/{samples_dict[sample][0]}/{region}/{collection}'
                     f'/skimmed_{collection}_{region}_{samples_dict[sample][1]}')
        if not os.path.exists(file_path):
            continue
        df = ROOT.RDataFrame("tree", file_path)
        df_q = make_quality_df(df, collection, region)

        df_2 = (df_q
            .Filter("Sum(_pass) == 2")
            .Define("_pt_good",  f"{pt_br}[_pass]")
            .Define("_eta_good", f"{eta_br}[_pass]")
            .Define("pt_tag",    "(double)std::max(_pt_good[0], _pt_good[1])")
            .Define("pt_probe",  "(double)std::min(_pt_good[0], _pt_good[1])")
            .Filter("std::abs(pt_tag - pt_probe) > 1e-5")  # unique tracks only
            .Define("eta_tag",   "(double)(_pt_good[0] >= _pt_good[1] ? _eta_good[0] : _eta_good[1])")
            .Define("eta_probe", "(double)(_pt_good[0] >= _pt_good[1] ? _eta_good[1] : _eta_good[0])")
            .Define("delta_eta", "eta_tag - eta_probe")
        )

        h = df_2.Histo1D((f"h_deta_{collection}_{idx}", "", 80, -2.0, 2.0), "delta_eta")
        garbage.append(h)
        hv = h.GetValue()
        hv.SetDirectory(0)
        if hv.Integral() > 0:
            hv.Scale(1.0 / hv.Integral())
        is_data = samples_dict[sample][0] == "Data"
        is_cosmic = sample == "Cosmic Bkg"
        col = sample_color(idx, is_data)
        hv.SetLineColor(col)
        hv.SetMarkerColor(col)
        hv.SetLineWidth(2)
        hv.SetMarkerStyle(20 if is_data else 8)
        hv.SetMarkerSize(0.6 if is_data else 1.0)
        if is_cosmic:
            hv.SetFillColor(col)
            hv.SetFillStyle(3004)
        draw_opt = "P SAME" if is_data else "HIST SAME"
        leg_opt = "p" if is_data else ("f" if is_cosmic else "l")
        hv.Draw(draw_opt)
        leg3a4.AddEntry(hv, sample, leg_opt)
        garbage.append(hv)

    pave3a4 = draw_legend_and_pave(leg3a4, collection,
                                   "2 good objects, |#Deltap_{T}| > 10^{-5} (unique tracks)")
    garbage.append(pave3a4)
    CMS.CMS_lumi(c3a4, iPosX=0, scaleLumi=0)
    c3a4.SaveAs(f"figures/pt_syst/delta_eta_unique_{collection}.png")
    c3a4.SaveAs(f"figures/pt_syst/delta_eta_unique_{collection}.pdf")
    del c3a4, hf3a4

    # --- 3b: pT-binned resolution: RMS(delta) vs pt_avg ---
    # One TGraphErrors per sample, overlaid on a single canvas
    n_pt_bins = len(PT_BINS) - 1

    c3b = CMS.cmsCanvas('', 0, 1, 0, 1, '', '')
    c3b.SetLeftMargin(0.153)
    c3b.SetRightMargin(0.08)
    c3b.SetLogy(True)

    hf3b = ROOT.TH1F("hframe_res", "", 100, PT_BINS[0], PT_BINS[-1])
    hf3b.SetStats(False)
    hf3b.GetXaxis().SetTitle("p_{T}^{avg} [GeV]")
    hf3b.GetXaxis().SetLabelSize(0.03)
    hf3b.GetXaxis().SetMaxDigits(4)
    hf3b.GetYaxis().SetTitle("Resolution #left[(p_{T}^{tag} #minus p_{T}^{probe}) / p_{T}^{avg}#right]")
    hf3b.GetYaxis().SetTitleOffset(1.25)
    hf3b.SetMinimum(1e-3)
    hf3b.SetMaximum(50.0)
    hf3b.Draw()

    leg3b = ROOT.TLegend(0.55, 0.70, 0.88, 0.90)
    leg3b.SetBorderSize(0)
    leg3b.SetFillStyle(0)
    leg3b.SetTextFont(42)

    for idx, sample in enumerate(samples_dict):
        file_path = (f'{base_path}/{samples_dict[sample][0]}/{region}/{collection}'
                     f'/skimmed_{collection}_{region}_{samples_dict[sample][1]}')
        if not os.path.exists(file_path):
            continue
        df = ROOT.RDataFrame("tree", file_path)
        df_q = make_quality_df(df, collection, region)

        df_2 = (df_q
            .Filter("Sum(_pass) == 2")
            .Define("_pt_good",  f"{pt_br}[_pass]")
            .Define("pt_tag",    "(double)std::max(_pt_good[0], _pt_good[1])")
            .Define("pt_probe",  "(double)std::min(_pt_good[0], _pt_good[1])")
            .Define("pt_avg",    "(pt_tag + pt_probe) / 2.0")
            .Define("delta_pt",  "(pt_tag - pt_probe) / pt_avg")
            .Filter("delta_pt > 1e-9")  # remove exact duplicates (same float)
        )

        # Fill 2D: x = pt_avg, y = delta_pt
        h2 = df_2.Histo2D(
            (f"h2_res_{collection}_{idx}", "",
             n_pt_bins, PT_BINS,
             200, -0.4, 0.4),
            "pt_avg", "delta_pt"
        )
        garbage.append(h2)
        h2v = h2.GetValue()
        h2v.SetDirectory(0)
        garbage.append(h2v)

        # Extract resolution per pT bin:
        #   Cosmic Bkg -> use RMS directly
        #   All others -> one-sided Gaussian fit sigma
        is_cosmic = sample == "Cosmic Bkg"
        x_vals, y_vals, ex_vals, ey_vals = [], [], [], []
        for ibin in range(1, n_pt_bins + 1):
            py = h2v.ProjectionY(f"_py_res_{collection}_{idx}_{ibin}", ibin, ibin)
            n_entries = py.GetEntries()
            if n_entries > 10:
                rms_val = py.GetRMS()
                if is_cosmic:
                    x_vals.append(h2v.GetXaxis().GetBinCenter(ibin))
                    ex_vals.append(h2v.GetXaxis().GetBinWidth(ibin) / 2.0)
                    y_vals.append(rms_val)
                    ey_vals.append(py.GetRMSError())
                else:
                    f_g = ROOT.TF1(f"_fg_{collection}_{idx}_{ibin}",
                                   "[0]*exp(-0.5*(x/[1])^2)", 0.0, 0.4)
                    f_g.SetParameter(0, py.GetMaximum())
                    f_g.SetParameter(1, rms_val if rms_val > 0 else 0.02)
                    f_g.SetParLimits(1, 1e-5, 1.0)
                    py.Fit(f_g, "QNR0")
                    sigma_fit = abs(f_g.GetParameter(1))
                    sigma_err = f_g.GetParError(1)
                    x_vals.append(h2v.GetXaxis().GetBinCenter(ibin))
                    ex_vals.append(h2v.GetXaxis().GetBinWidth(ibin) / 2.0)
                    y_vals.append(sigma_fit)
                    ey_vals.append(sigma_err)
                    f_g.Delete()
            py.Delete()

        if not x_vals:
            continue

        gr = ROOT.TGraphErrors(
            len(x_vals),
            array.array('d', x_vals),
            array.array('d', y_vals),
            array.array('d', ex_vals),
            array.array('d', ey_vals),
        )
        garbage.append(gr)

        is_data = samples_dict[sample][0] == "Data"
        col = sample_color(idx, is_data)
        gr.SetLineColor(col)
        gr.SetMarkerColor(col)
        gr.SetMarkerStyle(20 if is_data else 24)
        gr.SetMarkerSize(0.8)
        gr.SetLineWidth(2)
        gr.Draw("P SAME")
        leg_label = f"{sample}"
        leg3b.AddEntry(gr, leg_label, "lp")

    pave3b = draw_legend_and_pave(leg3b, collection, "2 good objects, tag-and-probe")
    garbage.append(pave3b)
    CMS.CMS_lumi(c3b, iPosX=0, scaleLumi=0)
    c3b.SaveAs(f"figures/pt_syst/pt_resolution_{collection}.png")
    c3b.SaveAs(f"figures/pt_syst/pt_resolution_{collection}.pdf")
    del c3b, hf3b

    # --- 3d: per-sample, per-pT-bin fit visualisation (log + linear) ---
    for idx, sample in enumerate(samples_dict):
        file_path = (f'{base_path}/{samples_dict[sample][0]}/{region}/{collection}'
                     f'/skimmed_{collection}_{region}_{samples_dict[sample][1]}')
        if not os.path.exists(file_path):
            continue
        df = ROOT.RDataFrame("tree", file_path)
        df_q = make_quality_df(df, collection, region)
        df_2 = (df_q
            .Filter("Sum(_pass) == 2")
            .Define("_pt_good",  f"{pt_br}[_pass]")
            .Define("_phi_good", f"{phi_br}[_pass]")
            .Define("pt_tag",    "(double)std::max(_pt_good[0], _pt_good[1])")
            .Define("pt_probe",  "(double)std::min(_pt_good[0], _pt_good[1])")
            .Define("pt_avg",    "(pt_tag + pt_probe) / 2.0")
            .Define("delta_pt",  "(pt_tag - pt_probe) / pt_avg")
            .Filter("delta_pt > 1e-9")  # remove exact duplicates (same float)
            .Define("phi_tag",   "(double)(_pt_good[0] >= _pt_good[1] ? _phi_good[0] : _phi_good[1])")
            .Define("phi_probe", "(double)(_pt_good[0] >= _pt_good[1] ? _phi_good[1] : _phi_good[0])")
            .Define("delta_phi_tp",
                    "double dp = phi_tag - phi_probe;"
                    "while (dp >  M_PI) dp -= 2*M_PI;"
                    "while (dp < -M_PI) dp += 2*M_PI;"
                    "return dp;")
            .Filter("std::abs(delta_phi_tp) > M_PI/2")  # require back-to-back, remove duplicates
        )
        h2 = df_2.Histo2D(
            (f"h2_fit_{collection}_{idx}", "",
             n_pt_bins, PT_BINS,
             200, -0.4, 0.4),
            "pt_avg", "delta_pt"
        )
        garbage.append(h2)
        h2v = h2.GetValue()
        h2v.SetDirectory(0)
        garbage.append(h2v)

        sample_tag = (sample.replace("{", "").replace("}", "")
                      .replace(" = ", "_").replace(" ", "_").replace("_TeV", "TeV"))

        # for use_log in [True, False]:
        for use_log in [True]:
            suffix = "log" if use_log else "lin"
            n_pads = n_pt_bins + 1  # extra pad for inclusive
            n_cols = 3
            n_rows = 3

            c3d = ROOT.TCanvas(f"c3d_{collection}_{idx}_{suffix}", "",
                               500 * n_cols, 500 * n_rows)
            c3d.Divide(n_cols, n_rows)

            for ipad in range(1, n_pads + 1):
                c3d.cd(ipad)
                ROOT.gPad.SetTopMargin(0.10)
                ROOT.gPad.SetBottomMargin(0.17)
                ROOT.gPad.SetLeftMargin(0.15)
                ROOT.gPad.SetRightMargin(0.05)
                if use_log:
                    ROOT.gPad.SetLogy(True)

                if ipad <= n_pt_bins:
                    # Individual pT bin
                    py = h2v.ProjectionY(
                        f"_py_fit_{collection}_{idx}_{ipad}_{suffix}",
                        ipad, ipad)
                    lo = h2v.GetXaxis().GetBinLowEdge(ipad)
                    hi = h2v.GetXaxis().GetBinUpEdge(ipad)
                    label = f"{lo:.0f} < p_{{T}}^{{avg}} < {hi:.0f} GeV"
                else:
                    # Inclusive: all pT bins
                    py = h2v.ProjectionY(
                        f"_py_fit_{collection}_{idx}_incl_{suffix}",
                        1, n_pt_bins)
                    label = f"{PT_BINS[0]:.0f} < p_{{T}}^{{avg}} < {PT_BINS[-1]:.0f} GeV (inclusive)"

                py.SetDirectory(0)
                py.SetStats(False)
                py.SetTitle("")
                py.GetXaxis().SetTitle("(p_{T}^{tag} #minus p_{T}^{probe}) / p_{T}^{avg}")
                py.GetXaxis().SetTitleSize(0.05)
                py.GetXaxis().SetTitleOffset(1.2)
                py.GetXaxis().SetLabelSize(0.04)
                py.GetYaxis().SetTitle("Entries")
                py.GetYaxis().SetTitleSize(0.05)
                py.SetLineColor(ROOT.kBlack)
                if use_log:
                    py.SetMinimum(0.5)
                    py.SetMaximum(py.GetMaximum() * 50)
                else:
                    py.SetMinimum(0)
                    py.SetMaximum(py.GetMaximum() * 1.6)
                py.Draw("HIST")
                garbage.append(py)

                # pT range label at top of pad
                pave_pt = ROOT.TPaveText(0.15, 0.91, 0.92, 0.99, "NDC")
                pave_pt.SetFillColor(0)
                pave_pt.SetBorderSize(0)
                pave_pt.SetTextSize(0.045)
                pave_pt.AddText(label)
                pave_pt.Draw()
                garbage.append(pave_pt)

                rms_val = py.GetRMS()

                if py.GetEntries() > 10:
                    if sample == "Cosmic Bkg":
                        # Show RMS directly for Cosmic Bkg
                        pave_f = ROOT.TPaveText(0.16, 0.55, 0.55, 0.88, "NDC")
                        pave_f.SetFillColor(0)
                        pave_f.SetBorderSize(0)
                        pave_f.SetTextSize(0.035)
                        pave_f.SetTextAlign(12)
                        pave_f.AddText(f"RMS = {rms_val:.4f}")
                        pave_f.AddText(f"Entries = {int(py.GetEntries())}")
                        pave_f.Draw()
                        garbage.append(pave_f)
                    else:
                        f_g = ROOT.TF1(
                            f"_fg_draw_{collection}_{idx}_{ipad}_{suffix}",
                            "[0]*exp(-0.5*(x/[1])^2)", 0.0, 0.4)
                        f_g.SetParameter(0, py.GetMaximum())
                        f_g.SetParameter(1, rms_val if rms_val > 0 else 0.02)
                        f_g.SetParLimits(1, 1e-5, 1.0)
                        py.Fit(f_g, "QR0")
                        sigma_fit = abs(f_g.GetParameter(1))
                        f_g.SetLineColor(ROOT.kRed)
                        f_g.SetLineWidth(2)
                        f_g.Draw("SAME")
                        garbage.append(f_g)

                        # Text box in the negative-x region (empty space)
                        pave_f = ROOT.TPaveText(0.16, 0.55, 0.53, 0.88, "NDC")
                        pave_f.SetFillColor(0)
                        pave_f.SetBorderSize(0)
                        pave_f.SetTextSize(0.035)
                        pave_f.SetTextAlign(12)
                        pave_f.AddText(f"#sigma_{{Gauss}} = {sigma_fit:.4f}")
                        pave_f.AddText(f"RMS = {rms_val:.4f}")
                        pave_f.AddText(f"Entries = {int(py.GetEntries())}")
                        pave_f.Draw()
                        garbage.append(pave_f)

            c3d.SaveAs(
                f"figures/pt_syst/pt_fits_{suffix}_{collection}_{sample_tag}.png")
            c3d.SaveAs(
                f"figures/pt_syst/pt_fits_{suffix}_{collection}_{sample_tag}.pdf")
            del c3d

    garbage.clear()

tqdm.write("\nDone. Plots saved to figures/pt_syst/")
