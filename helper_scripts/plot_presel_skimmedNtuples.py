import os
import re
import ROOT, cmsstyle as CMS
import mplhep as hep
from tqdm import tqdm

ROOT.gROOT.SetBatch(True)
ROOT.gErrorIgnoreLevel = ROOT.kWarning
CMS.SetExtraText("Work in Progress")

base_path = '/ceph/cms/store/user/tvami/EarthAsDM/Ntuples/Ntuples_v4.0.9_wRNN/'
# base_path = '/home/users/smasanam/EarthAsDMProject/samples/Ntuples_v4.0.7'
# collections = ['matched_muon', 'track', 'muon', 'tuneP']
collections = ['matched_muon']
region = 'sr' # sr vr

samples_dict = {"Cosmic Bkg": ["BkgMC", "CosmicToMu_Par-MinP-4-MaxP-3000-MinTheta-0-MaxTheta-75_cosmuogen.root"],
                "Neutrino Bkg": ["BkgMC", "CosmicToMu_Par-MinP-10-MaxP-10000-MinTheta-91-MaxTheta-179_cosmuogen.root"],
                "M_{DM} = 2 TeV": ["Signal", "CosmicToMu_Par-MinP-1000-MinTheta-91-MaxTheta-179-SurfaceDepth-e2_cosmuogen.root"],
                "M_{DM} = 10 TeV": ["Signal", "CosmicToMu_Par-MinP-5000-MinTheta-91-MaxTheta-179-SurfaceDepth-e2_cosmuogen.root"],
                "M_{DM} = 20 TeV": ["Signal", "CosmicToMu_Par-MinP-10000-MinTheta-91-MaxTheta-179-SurfaceDepth-e2_cosmuogen.root"],
                "M_{DM} = 180 TeV": ["Signal", "CosmicToMu_Par-MinP-90000-MinTheta-91-MaxTheta-179-SurfaceDepth-e2_cosmuogen.root"],
                #"2023D Cosmics": ["Data", "Ntuplizer-Cosmics_Run2023D-CosmicTP-PromptReco-v2_v4.root"]
                "Run-3 Cosmics": ["Data", "Ntuplizer-Cosmics_All_v4.root"]
                }

base_var_dict = {
            "eta": [0, 25, -2.5, 2.5, 'eta_pretrigger', 'eta_trigger', 'eta_nminus1', 'eta_final', '#eta'],
            "pt": [1, 500, 0, 10000, 'pt_pretrigger', 'pt_trigger', 'pt_nminus1', 'pt_final', 'p_{T} [GeV]'],
            "phi": [2, 25, -3.15, 3.15, 'phi_pretrigger', 'phi_trigger', 'phi_nminus1', 'phi_final', '#phi'],
            # "ntrack": [3, 20, 0, 20, None, 'ntrack_trigger', 'ntrack_nminus1', 'ntrack_final', 'n_{Tracks}'],
            "nseg": [4, 20, 0, 20, 'nseg_pretrigger', 'nseg_trigger', 'nseg_nminus1', 'nseg_final', 'n_{Seg}'],
            "nhits": [5, 80, 0, 80, 'nhits_pretrigger', 'nhits_trigger', 'nhits_nminus1', 'nhits_final', 'n_{Hits}'],
            "chi2ndof": [6, 100, 0, 100, 'chi2ndof_pretrigger', 'chi2ndof_trigger', 'chi2ndof_nminus1', 'chi2ndof_final', '#chi^{2}/n_{DoF}'],
            "ptErrPerPt2": [7, 100, 0, 0.01, 'ptErrPerPt2_pretrigger', 'ptErrPerPt2_trigger', 'ptErrPerPt2_nminus1', 'ptErrPerPt2_final', 'p_{T} Error / p_{T}^{2} [GeV^{-1}]'],
            # "ptErrPerPt2_zoom": [8, 100, 0, 0.002, None, 'ptErrPerPt2_zoom', 'ptErrPerPt2_nminus1_zoom', 'ptErrPerPt2_final', 'p_{T} Error / p_{T}^{2} [GeV^{-1}]'],
            # "pTErrPerPtVsPt": [9, 50, 0, 10, None, 'pTErrPerPtVsPt', 'pTErrPerPtVsPt_nminus1', 'pTErrPerPtVsPt_final', '#sigma_{p_{T}} / p_{T}'],
            # "ptErrPerPt2VsPt": [10, 50, 0, 10, None, 'ptErrPerPt2VsPt', 'ptErrPerPt2VsPt_nminus1', 'ptErrPerPt2VsPt_final', '#sigma_{p_{T}} / p_{T}^{2} [GeV^{-1}]'],
            # "ptErrPerPt2_quality": [13, 100, 0, 0.01, None, None, 'ptErrPerPt2_quality_nminus1', None, 'p_{T} Error / p_{T}^{2} [GeV^{-1}] (quality cuts)'],
            # "ptErrPerPt2_quality_zoom": [14, 100, 0, 0.002, None, None, 'ptErrPerPt2_quality_nminus1_zoom', None, 'p_{T} Error / p_{T}^{2} [GeV^{-1}] (quality cuts)'],
            # "ptErrPerPt_quality": [15, 50, 0, 10, None, None, 'ptErrPerPt_quality_nminus1', None, '#sigma_{p_{T}} / p_{T} (quality cuts)'],
            # "pt_quality": [16, 500, 0, 10000, None, None, 'pt_quality_nminus1', None, 'p_{T} [GeV] (quality cuts)'],
            # "ptErrPerPtVsPt_quality": [17, 50, 0, 10, None, None, 'ptErrPerPtVsPt_quality_nminus1', None, '#sigma_{p_{T}} / p_{T} (quality cuts)'],
            # "ptErrPerPt_lowPt": [18, 50, 0, 10, None, 'ptErrPerPt_lowPt', 'ptErrPerPt_lowPt_nminus1', 'ptErrPerPt_lowPt_final', '#sigma_{p_{T}} / p_{T} (p_{T} < 5 TeV)'],
            # "ptErrPerPt_highPt": [19, 50, 0, 10, None, 'ptErrPerPt_highPt', 'ptErrPerPt_highPt_nminus1', 'ptErrPerPt_highPt_final', '#sigma_{p_{T}} / p_{T} (p_{T} > 5 TeV)'],
            # "ptErrPerPt2_lowPt": [20, 100, 0, 0.01, None, 'ptErrPerPt2_lowPt', 'ptErrPerPt2_lowPt_nminus1', 'ptErrPerPt2_lowPt_final', 'p_{T} Error / p_{T}^{2} [GeV^{-1}] (p_{T} < 5 TeV)'],
            # "ptErrPerPt2_highPt": [21, 100, 0, 0.01, None, 'ptErrPerPt2_highPt', 'ptErrPerPt2_highPt_nminus1', 'ptErrPerPt2_highPt_final', 'p_{T} Error / p_{T}^{2} [GeV^{-1}] (p_{T} > 5 TeV)'],
            # "ptErrPerPt2_pretrig": [22, 100, 0, 0.01, 'ptErrPerPt2_pretrigger', None, None, None, 'p_{T} Error / p_{T}^{2} [GeV^{-1}]'],
            "nhits_highpt": [23, 80, 0, 80, None, None, None, 'nhits_highpt', 'N_{valid hits} (highest p_{T})'],
            "chi2ndof_highpt": [24, 100, 0, 100, None, None, None, 'chi2ndof_highpt', '#chi^{2}/n_{DoF} (highest p_{T})'],
            "ptErrPerPt2_highpt": [25, 100, 0, 0.01, None, None, None, 'ptErrPerPt2_highpt', '#sigma(p_{T})/p_{T}^{2} [GeV^{-1}] (highest p_{T})'],
            "eta_highpt": [26, 100, -3, 3, None, None, None, 'eta_highpt', '#eta (highest p_{T})'],
            "phi_highpt": [27, 100, -3.15, 3.15, None, None, None, 'phi_highpt', '#phi (highest p_{T})'],
            "pt_highpt": [28, 500, 0, 10000, None, None, None, 'pt_highpt', 'p_{T} [GeV] (highest p_{T})'],
            # "RNNScore": [0, 100, 0, 1, 'RNNScore', 'RNNScore_nminus1', 'RNNScore_final', 'Normalized Yield / Bin']
            }

track_var_dict={# "track_numberOfValidHits": [8, 77, 0, 77, 'track_numberOfValidHits', 'track_numberOfValidHits_nminus1', 'track_numberOfValidHits_final', '# of Valid Track Hits'],
                # "track_validFraction": [9, 110, 0, 1.1, 'track_validFraction_trigger', 'track_validFraction_nminus1', 'track_validFraction_final', 'Track Valid Fraction'],
                # "track_chi2": [10, 99, 1, 100, 'track_chi2', 'track_chi2_nminus1', 'track_chi2_final', '#chi^{2}/n_{DoF}'],
                }

muon_var_dict={# "muon_comb_ndof": [11, 100, 0, 100, 'muon_comb_ndof', 'muon_comb_ndof_nminus1', 'muon_comb_ndof_final', 'Combined n_{DoF}'],
            #    "muon_trkIso": [12, 100, 0, 1, 'muon_trkIso', 'muon_trkIso_nminus1', 'muon_trkIso_final', 'Track Isolation [GeV]'],
            #    "muon_d0": [13, 200, -200, 200, 'muon_d0', 'muon_d0_nminus1', 'muon_d0_final', 'd_{0} [cm]'],
            #    "muon_dZ": [14, 200, -500, 500, 'muon_dZ', 'muon_dZ_nminus1', 'muon_dZ_final', 'd_{Z} [cm]'],
            #    "muon_validFractionTrackerHits": [15, 110, 0, 1.1, 'muon_validFractionTrackerHits', 'muon_validFractionTrackerHits_nminus1', 'muon_validFractionTrackerHits_final', 'Valid Fraction Tracker Hits'],
            #    "muon_numberOfValidHits": [16, 80, 0, 80, 'muon_numberOfValidHits', 'muon_numberOfValidHits_nminus1', 'muon_numberOfValidHits_final', '# of Valid Hits'],
            #    "muon_isLoose": [17, 2, 0, 2, 'muon_isLoose', 'muon_isLoose_nminus1', 'muon_isLoose_final', 'isLoose'],
            #    "muon_isMedium": [18, 2, 0, 2, 'muon_isMedium', 'muon_isMedium_nminus1', 'muon_isMedium_final', 'isMedium'],
            #    "muon_isTight": [19, 2, 0, 2, 'muon_isTight', 'muon_isTight_nminus1', 'muon_isTight_final', 'isTight'],
            #    "muon_isTrackerHighPtMuon": [20, 2, 0, 2, 'muon_isTrackerHighPtMuon', 'muon_isTrackerHighPtMuon_nminus1', 'muon_isTrackerHighPtMuon_final', 'isTrackerHighPt'],
            #    "muon_isHighPtMuon": [21, 2, 0, 2, 'muon_isHighPtMuon', 'muon_isHighPtMuon_nminus1', 'muon_isHighPtMuon_final', 'isHighPt'],
            #    "muon_type": [22, 32, 0, 32, 'muon_type', 'muon_type_nminus1', 'muon_type_final', 'Muon Type'],
            #    "muon_quality": [23, 16, 0, 16, 'muon_quality', 'muon_quality_nminus1', 'muon_quality_final', 'Muon Quality'],
               }

matched_muon_var_dict={
               # "muon_fromGenTrack_NumValidHits": [11, 77, 0, 77, 'muon_fromGenTrack_NumValidHits', 'muon_fromGenTrack_NumValidHits_nminus1', 'muon_fromGenTrack_NumValidHits_final', '# of Valid Hits'],
            #    "muon_fromGenTrack_ValidFraction": [12, 110, 0, 1.1, 'muon_fromGenTrack_ValidFraction', 'muon_fromGenTrack_ValidFraction_nminus1', 'muon_fromGenTrack_ValidFraction_final', 'Valid Fraction'],
            #    "muon_fromGenTrack_Chi2": [13, 99, 1, 100, 'muon_fromGenTrack_Chi2', 'muon_fromGenTrack_Chi2_nminus1', 'muon_fromGenTrack_Chi2_final', '#chi^{2}/n_{DoF}'],
               }

tuneP_var_dict={
            #    "muon_tuneP_MuonBestTrackType": [11, 10, 0, 10, None, 'muon_tuneP_MuonBestTrackType', 'muon_tuneP_MuonBestTrackType_nminus1', 'muon_tuneP_MuonBestTrackType_final', 'Best Track Type'],
               }

presel_steps_arr = ["pretrigger", "trigger", "nminus1", "final"]

garbage_protect_list = []

def fold_overflow(h):
    """Fold underflow/overflow into first/last visible bins (for 2D/profile)."""
    if h.InheritsFrom("TH2"):
        nx, ny = h.GetNbinsX(), h.GetNbinsY()
        for iy in range(0, ny + 2):
            h.SetBinContent(1, iy, h.GetBinContent(0, iy) + h.GetBinContent(1, iy))
            h.SetBinContent(nx, iy, h.GetBinContent(nx+1, iy) + h.GetBinContent(nx, iy))
            h.SetBinContent(0, iy, 0)
            h.SetBinContent(nx+1, iy, 0)
        for ix in range(0, nx + 2):
            h.SetBinContent(ix, 1, h.GetBinContent(ix, 0) + h.GetBinContent(ix, 1))
            h.SetBinContent(ix, ny, h.GetBinContent(ix, ny+1) + h.GetBinContent(ix, ny))
            h.SetBinContent(ix, 0, 0)
            h.SetBinContent(ix, ny+1, 0)
    else:
        nb = h.GetNbinsX()
        h.SetBinContent(1, h.GetBinContent(0) + h.GetBinContent(1))
        h.SetBinContent(nb, h.GetBinContent(nb) + h.GetBinContent(nb+1))
        h.SetBinContent(0, 0)
        h.SetBinContent(nb+1, 0)

def make_overflow_visible(h_orig):
    """Return a new 1D histogram with one extra bin showing overflow."""
    nb = h_orig.GetNbinsX()
    xmin = h_orig.GetXaxis().GetXmin()
    xmax = h_orig.GetXaxis().GetXmax()
    bw = (xmax - xmin) / nb
    h_new = ROOT.TH1F(h_orig.GetName() + "_ov", h_orig.GetTitle(),
                       nb + 1, xmin, xmax + bw)
    h_new.SetDirectory(0)
    # Fold underflow into first visible bin
    h_new.SetBinContent(1, h_orig.GetBinContent(0) + h_orig.GetBinContent(1))
    h_new.SetBinError(1, (h_orig.GetBinError(0)**2 + h_orig.GetBinError(1)**2)**0.5)
    # Copy bins 2..nb
    for i in range(2, nb + 1):
        h_new.SetBinContent(i, h_orig.GetBinContent(i))
        h_new.SetBinError(i, h_orig.GetBinError(i))
    # Move overflow into the visible extra bin
    h_new.SetBinContent(nb + 1, h_orig.GetBinContent(nb + 1))
    h_new.SetBinError(nb + 1, h_orig.GetBinError(nb + 1))
    return h_new

def get_cutflow_df(df, collection, region='sr'):
    """Apply full cutflow per-object selection (matching skim_ntuples.C) and define highest-pT object properties."""
    if collection == 'matched_muon':
        pt_br, ptErr_br, eta_br = 'muon_fromGenTrack_Pt', 'muon_fromGenTrack_PtErr', 'muon_fromGenTrack_Eta'
        chi2_br, ndof_br, nhits_br = 'muon_fromGenTrack_Chi2', 'muon_fromGenTrack_Ndof', 'muon_fromGenTrack_NumValidHits'
    elif collection == 'tuneP':
        pt_br, ptErr_br, eta_br = 'muon_tuneP_Pt', 'muon_tuneP_PtErr', 'muon_tuneP_Eta'
        chi2_br, ndof_br, nhits_br = 'muon_chi2', 'muon_comb_ndof', 'muon_numberOfValidHits'
    elif collection == 'track':
        pt_br, ptErr_br, eta_br = 'track_pt', 'track_ptErr', 'track_eta'
        chi2_br, ndof_br, nhits_br = 'track_chi2', 'track_ndof', 'track_numberOfValidHits'
    else:  # muon
        pt_br, ptErr_br, eta_br = 'muon_pt', 'muon_ptErr', 'muon_eta'
        chi2_br, ndof_br, nhits_br = 'muon_chi2', 'muon_comb_ndof', 'muon_numberOfValidHits'

    pt_cond = f"{pt_br} > 200" if region == 'sr' else f"{pt_br} < 200"

    return (df
        .Define("_cf_chi2ndof", f"ROOT::VecOps::Where({ndof_br} != 0, {chi2_br}/{ndof_br}, 999.)")
        .Define("_cf_pass",
                f"{nhits_br} > 7 && _cf_chi2ndof < 35. "
                f"&& {pt_br} > 0 && {ptErr_br}/({pt_br}*{pt_br}) < 1e-3 "
                f"&& abs({eta_br}) < 0.9 && {pt_cond}")
        .Define("_cf_pt_masked",
                f"ROOT::VecOps::Where(_cf_pass, {pt_br}, "
                f"ROOT::VecOps::RVec<float>({pt_br}.size(), -1.f))")
        .Define("_cf_best",
                "_cf_pt_masked.size()>0 ? (int)std::distance("
                "_cf_pt_masked.begin(), std::max_element("
                "_cf_pt_masked.begin(), _cf_pt_masked.end())) : -1")
        .Filter("_cf_best >= 0 && _cf_pt_masked[_cf_best] > 0")
        .Define("highpt_pt", f"(double){pt_br}[_cf_best]")
        .Define("highpt_ptErr", f"(double){ptErr_br}[_cf_best]")
        .Define("highpt_ptErrPerPt", "highpt_ptErr / highpt_pt")
        .Define("highpt_ptErrPerPt2", "highpt_ptErr / (highpt_pt * highpt_pt)")
    )

os.makedirs("figures/presel_ch_skimmedNtuples", exist_ok=True)
for collection in tqdm(collections, desc="Collections"):
    os.makedirs(f"figures/presel_ch_skimmedNtuples/{collection}", exist_ok=True)
    tqdm.write(f"Collection: {collection}")

    var_dict = dict(base_var_dict)
    if collection == 'track': var_dict.update(track_var_dict)
    if collection == 'muon': var_dict.update(muon_var_dict)
    if collection == 'matched_muon': var_dict.update(matched_muon_var_dict)
    if collection == 'tuneP': var_dict.update(tuneP_var_dict)

    _profiles_done = False
    for main_var in tqdm(list(var_dict.keys()), desc=f"  {collection} vars", leave=False):
        # For variables that aren't current preselection variables, only run nmin1 step
        if main_var[:5] == 'track' or main_var.startswith('muon_') or main_var == 'sumPt':
            for num in range(1, 2):
                nbins = var_dict[main_var][1]
                min = var_dict[main_var][2]
                max = var_dict[main_var][3]

                c = CMS.cmsCanvas('', 0, 1, 0, 1, '', '')
                c.SetLogy(True)
                c.SetLeftMargin(0.153)
                c.SetRightMargin(0.1)

                # define axis ranges (extend by one bin so overflow line is visible)
                bin_width = (max - min) / nbins
                hframe = ROOT.TH1F("hframe", "", nbins + 1, min, max + bin_width)
                hframe.SetStats(False)
                hframe.GetXaxis().SetTitle(var_dict[main_var][-1])
                hframe.GetYaxis().SetTitle("Normalized Yields / Bin")
                hframe.GetXaxis().SetLabelSize(0.04)
                hframe.GetYaxis().SetLabelSize(0.04)
                hframe.GetXaxis().SetMaxDigits(3)
                hframe.GetXaxis().SetNdivisions(510)
                hframe.SetMinimum(1e-5)
                hframe.SetMaximum(9.99)
                hframe.Draw()

                leg = ROOT.TLegend(0.60, 0.7, 0.80, 0.9)
                leg.SetBorderSize(0)
                leg.SetFillStyle(0)
                leg.SetTextFont(42)

                color_numerator = 7
                for sample in list(samples_dict.keys()):

                    color_numerator -= 1
                    if color_numerator == 1:  # skip kBlack (reserved for data)
                        color_numerator = 9
                    file_path = f'{base_path}/{samples_dict[sample][0]}/{region}/{collection}/skimmed_{collection}_{region}'
                    df = ROOT.RDataFrame("tree", f"{file_path}_{samples_dict[sample][1]}")
                    h = 0

                    if main_var == 'track_chi2':
                        df2 = df.Define( "ratio", "ROOT::VecOps::Where(track_ndof != 0, track_chi2/track_ndof, -1.)" )
                        h = df2.Histo1D(
                            (f"h_ratio_{sample}", "", nbins, min, max),
                            "ratio"
                        )
                    elif main_var == 'muon_fromGenTrack_Chi2':
                        df2 = df.Define( "ratio", "ROOT::VecOps::Where(muon_fromGenTrack_Ndof != 0, muon_fromGenTrack_Chi2/muon_fromGenTrack_Ndof, -1.)" )
                        h = df2.Histo1D(
                            (f"h_ratio_{sample}", "", nbins, min, max),
                            "ratio"
                        )
                    elif main_var in ['sumPt', 'sumPtquality']:
                        if collection == 'matched_muon': 
                            coll_tmp = 'muon_fromGenTrack'
                            coll_tmp_2 = 'muon'
                            main_var_tmp = 'Pt'
                            validHits_tmp = 'NumValidHits'
                            chi2_ndof_tmp = ['Chi2', 'Ndof']
                        elif collection == 'tuneP':
                            coll_tmp = 'muon_tuneP'
                            coll_tmp_2 = 'muon'
                            main_var_tmp = 'Pt'
                            validHits_tmp = 'numberOfValidHits'
                            chi2_ndof_tmp = ['comb_chi2', 'comb_ndof']
                        elif collection == 'muon':
                            coll_tmp = 'muon'
                            coll_tmp_2 = 'muon'
                            main_var_tmp = 'pt'
                            validHits_tmp = 'numberOfValidHits'
                            chi2_ndof_tmp = ['comb_chi2', 'comb_ndof']
                        else: 
                            coll_tmp = collection
                            coll_tmp_2 = collection
                            main_var_tmp = 'pt'
                            validHits_tmp = 'numberOfValidHits'
                            chi2_ndof_tmp = ['chi2', 'ndof']
                        if var_dict[main_var][0] == 1:
                            df2 = (
                                df.Define("mask", f"{coll_tmp}_{chi2_ndof_tmp[0]}/{coll_tmp}_{chi2_ndof_tmp[1]} < 35 & {coll_tmp}_{validHits_tmp} > 7")
                                .Define("n_pass", "Sum(mask)")
                                .Define("sum_pT", f"n_pass > 0 ? Sum({coll_tmp}_{main_var_tmp}[mask]) : -1.")
                                .Define("avg_pT", "n_pass > 0 ? sum_pT/n_pass : -1.")
                            )
                            h = df2.Histo1D(
                                (f"h_sum_pT_{sample}", "", nbins, min, max),
                                "avg_pT"
                            )
                        elif var_dict[main_var][0] == 0:
                            df2 = df.Define( "sum_pT", f"Sum({coll_tmp}_{main_var_tmp})/{coll_tmp_2}_n" )
                            h = df2.Histo1D(
                                (f"h_sum_pT_{sample}", "", nbins, min, max),
                                "sum_pT"
                            )
                    elif main_var in ('ptErrPerPt2', 'ptErrPerPt2_zoom'):
                        if collection == 'matched_muon':
                            coll_tmp = 'muon_fromGenTrack'
                            main_var_tmp = 'PtErr'
                        elif collection == 'tuneP':
                            coll_tmp = 'muon_tuneP'
                            main_var_tmp = 'PtErr'
                        elif collection == 'muon':
                            coll_tmp = collection
                            main_var_tmp = 'ptErr'
                        elif collection == 'track':
                            coll_tmp = collection
                            main_var_tmp = 'ptErr'
                        else:
                            coll_tmp = collection
                            main_var_tmp = main_var
                        df2 = df.Define( "ratio", f"{coll_tmp}_{main_var_tmp}/({coll_tmp}_{main_var_tmp[:2]}*{coll_tmp}_{main_var_tmp[:2]})" )
                        h = df2.Histo1D(
                            (f"h_ratio_{sample}", "", nbins, min, max),
                            "ratio"
                        )
                    elif main_var in ('ptErrPerPt_lowPt', 'ptErrPerPt_highPt', 'ptErrPerPt2_lowPt', 'ptErrPerPt2_highPt'):
                        if collection == 'matched_muon':
                            pt_var_c = 'muon_fromGenTrack_Pt'
                            ptErr_var_c = 'muon_fromGenTrack_PtErr'
                        elif collection == 'tuneP':
                            pt_var_c = 'muon_tuneP_Pt'
                            ptErr_var_c = 'muon_tuneP_PtErr'
                        elif collection == 'muon':
                            pt_var_c = 'muon_pt'
                            ptErr_var_c = 'muon_ptErr'
                        else:  # track
                            pt_var_c = 'track_pt'
                            ptErr_var_c = 'track_ptErr'
                        pt_cut = "< 5000" if "lowPt" in main_var else "> 5000"
                        df2 = df.Define("pt_mask_cut", f"{pt_var_c} {pt_cut}")
                        if 'ptErrPerPt2' in main_var:
                            df2 = df2.Define("ratio_ptcut", f"{ptErr_var_c}[pt_mask_cut] / ({pt_var_c}[pt_mask_cut] * {pt_var_c}[pt_mask_cut])")
                        else:
                            df2 = df2.Define("ratio_ptcut", f"{ptErr_var_c}[pt_mask_cut] / {pt_var_c}[pt_mask_cut]")
                        h = df2.Histo1D(
                            (f"h_{main_var}_{sample}", "", nbins, min, max),
                            "ratio_ptcut"
                        )
                    elif main_var in ('ptErrPerPt2_quality', 'ptErrPerPt2_quality_zoom'):
                        if collection == 'track':
                            chi2_var, ndof_var, nhits_var = 'track_chi2', 'track_ndof', 'track_numberOfValidHits'
                            pt_var, ptErr_var = 'track_pt', 'track_ptErr'
                        elif collection == 'matched_muon':
                            chi2_var, ndof_var, nhits_var = 'muon_fromGenTrack_Chi2', 'muon_fromGenTrack_Ndof', 'muon_fromGenTrack_NumValidHits'
                            pt_var, ptErr_var = 'muon_fromGenTrack_Pt', 'muon_fromGenTrack_PtErr'
                        else:  # muon
                            chi2_var, ndof_var, nhits_var = 'muon_chi2', 'muon_comb_ndof', 'muon_numberOfValidHits'
                            pt_var, ptErr_var = 'muon_pt', 'muon_ptErr'
                        df2 = df.Define("chi2ndof_vec_q", f"ROOT::VecOps::Where({ndof_var} != 0, {chi2_var}/{ndof_var}, 999.)")
                        df2 = df2.Define("quality_mask", f"chi2ndof_vec_q < 35. && {nhits_var} > 7")
                        df2 = df2.Define("ratio_quality", f"{ptErr_var}[quality_mask] / ({pt_var}[quality_mask] * {pt_var}[quality_mask])")
                        h = df2.Histo1D(
                            (f"h_ptErrPerPt2_quality_{sample}", "", nbins, min, max),
                            "ratio_quality"
                        )
                    elif main_var == 'ptErrPerPt_quality':
                        if collection == 'track':
                            chi2_var, ndof_var, nhits_var = 'track_chi2', 'track_ndof', 'track_numberOfValidHits'
                            pt_var, ptErr_var = 'track_pt', 'track_ptErr'
                        elif collection == 'matched_muon':
                            chi2_var, ndof_var, nhits_var = 'muon_fromGenTrack_Chi2', 'muon_fromGenTrack_Ndof', 'muon_fromGenTrack_NumValidHits'
                            pt_var, ptErr_var = 'muon_fromGenTrack_Pt', 'muon_fromGenTrack_PtErr'
                        else:  # muon
                            chi2_var, ndof_var, nhits_var = 'muon_chi2', 'muon_comb_ndof', 'muon_numberOfValidHits'
                            pt_var, ptErr_var = 'muon_pt', 'muon_ptErr'
                        df2 = df.Define("chi2ndof_vec_q2", f"ROOT::VecOps::Where({ndof_var} != 0, {chi2_var}/{ndof_var}, 999.)")
                        df2 = df2.Define("quality_mask2", f"chi2ndof_vec_q2 < 35. && {nhits_var} > 7")
                        df2 = df2.Define("ratio_pt_quality", f"{ptErr_var}[quality_mask2] / {pt_var}[quality_mask2]")
                        h = df2.Histo1D(
                            (f"h_ptErrPerPt_quality_{sample}", "", nbins, min, max),
                            "ratio_pt_quality"
                        )
                    elif main_var == 'pt_quality':
                        if collection == 'track':
                            chi2_var, ndof_var, nhits_var = 'track_chi2', 'track_ndof', 'track_numberOfValidHits'
                            pt_var = 'track_pt'
                        elif collection == 'matched_muon':
                            chi2_var, ndof_var, nhits_var = 'muon_fromGenTrack_Chi2', 'muon_fromGenTrack_Ndof', 'muon_fromGenTrack_NumValidHits'
                            pt_var = 'muon_fromGenTrack_Pt'
                        else:  # muon
                            chi2_var, ndof_var, nhits_var = 'muon_chi2', 'muon_comb_ndof', 'muon_numberOfValidHits'
                            pt_var = 'muon_pt'
                        df2 = df.Define("chi2ndof_vec_ptq", f"ROOT::VecOps::Where({ndof_var} != 0, {chi2_var}/{ndof_var}, 999.)")
                        df2 = df2.Define("quality_mask_ptq", f"chi2ndof_vec_ptq < 35. && {nhits_var} > 7")
                        df2 = df2.Define("pt_quality_val", f"{pt_var}[quality_mask_ptq]")
                        h = df2.Histo1D(
                            (f"h_pt_quality_{sample}", "", nbins, min, max),
                            "pt_quality_val"
                        )
                    else:
                        h = df.Histo1D(
                            (f"h_{main_var}_{sample}", "", nbins, min, max),  # (name, title, nbins, xmin, xmax)
                            main_var               # column of type RVec<int>
                        )
                    garbage_protect_list.append(h)
                    histo = h.GetValue()
                    histo.SetDirectory(0)
                    fold_overflow(histo)
                    if histo.Integral() > 0:
                        histo.Scale(1/histo.Integral())
                    is_data = samples_dict[sample][0] == "Data"
                    is_cosmic_bkg = sample == "Cosmic Bkg"
                    histo.SetLineColor(ROOT.kBlack if is_data else color_numerator)
                    histo.SetMarkerColor(ROOT.kBlack if is_data else color_numerator)
                    histo.SetMarkerStyle(20)
                    histo.SetMarkerSize(0.6 if is_data else 1.0)
                    histo.SetLineWidth(2)
                    if is_cosmic_bkg:
                        histo.SetFillColor(color_numerator)
                        histo.SetFillStyle(3004)
                    if is_data:
                        histo.Draw("P SAME")
                        leg.AddEntry(histo, sample, "p")
                    elif is_cosmic_bkg:
                        histo.Draw("HIST SAME")
                        leg.AddEntry(histo, sample, "f")
                    else:
                        histo.Draw("HIST SAME")
                        leg.AddEntry(histo, sample, "l")
                    garbage_protect_list.append(histo)

                pave = ROOT.TPaveText(0.18, 0.80, 0.32, 0.90, "NDC")
                pave.SetFillColor(0)
                pave.SetBorderSize(0)
                pave.SetTextAlign(12)  # left aligned
                pave.SetTextSize(0.025)
                pave.AddText(f"Collection = {collection}")
                pave.AddText("Signal Depth: 0.01 mm")
                pave.AddText(presel_steps_arr[num])
                pave.Draw()
                leg.Draw()

                overflow_line = ROOT.TLine(max, hframe.GetMinimum(), max, hframe.GetMaximum())
                overflow_line.SetLineStyle(2)
                overflow_line.SetLineColor(ROOT.kGray + 2)
                overflow_line.Draw()

                CMS.CMS_lumi(c, iPosX=0, scaleLumi=0)
                c.SaveAs(f"figures/presel_ch_skimmedNtuples/presoverlay_{collection}_{var_dict[main_var][4+num]}.png")
                c.SaveAs(f"figures/presel_ch_skimmedNtuples/presoverlay_{collection}_{var_dict[main_var][4+num]}.pdf")

                del c
                del hframe
                del h
                del histo
        elif main_var == 'pTErrPerPtVsPt' or main_var == 'pTErrPerPtVsPt_zoom' or main_var == 'ptErrPerPt2VsPt' or main_var == 'sumPtperPt':
            num = 1
            nbins = var_dict[main_var][1]
            min = var_dict[main_var][2]
            max = var_dict[main_var][3]

            c = CMS.cmsCanvas('', 0, 1, 0, 1, '', '')
            c.SetLeftMargin(0.2)
            c.SetRightMargin(0.2)

            # define axis ranges
            hframe = ROOT.TH2F("hframe", "", 800, 200, 10000, nbins, min, max)
            hframe.SetStats(False)
            hframe.GetXaxis().SetTitle('Leading Object p_{T} [GeV]')
            hframe.GetYaxis().SetTitle(var_dict[main_var][7])
            hframe.GetXaxis().SetLabelSize(0.04)
            hframe.GetYaxis().SetLabelSize(0.04)
            hframe.GetXaxis().SetMaxDigits(3)
            hframe.GetXaxis().SetNdivisions(510)
            hframe.Draw()

            leg = ROOT.TLegend(0.60, 0.7, 0.80, 0.9)
            leg.SetBorderSize(0)
            leg.SetFillStyle(0)
            leg.SetTextFont(42)

            color_numerator = 1
            #for sample in ["2023D Cosmics", "Cosmic Bkg", "Neutrino Bkg", "M_{DM} = 2 TeV", "M_{DM} = 10 TeV", "M_{DM} = 20 TeV"]:
            for sample in ["Run-3 Cosmics", "Cosmic Bkg", "Neutrino Bkg", "M_{DM} = 2 TeV", "M_{DM} = 10 TeV", "M_{DM} = 20 TeV"]:

                file_path = f'{base_path}/{samples_dict[sample][0]}/{region}/{collection}/skimmed_{collection}_{region}'
                df = ROOT.RDataFrame("tree", f"{file_path}_{samples_dict[sample][1]}")
                h = 0
                
                if main_var != 'sumPtperPt':
                    if collection == 'matched_muon':
                        coll_tmp = 'muon_fromGenTrack'
                        main_var_tmp = 'PtErr'
                        pT_tmp = 'Pt'
                    elif collection == 'tuneP':
                        coll_tmp = 'muon_tuneP'
                        main_var_tmp = 'PtErr'
                        pT_tmp = 'Pt'
                    else:
                        coll_tmp = collection
                        main_var_tmp = 'ptErr'
                        pT_tmp = 'pt'

                    pt_branch = f"{coll_tmp}_{pT_tmp}"
                    ptErr_branch = f"{coll_tmp}_{main_var_tmp}"
                    df2 = (df
                    .Define("imax", f"{pt_branch}.size()>0 ? int(std::distance({pt_branch}.begin(), std::max_element({pt_branch}.begin(), {pt_branch}.end()))) : -1")
                    .Define("pt_max", f"imax>=0 ? {pt_branch}[imax] : -999.")
                    .Define("ratio",  f"imax>=0 && {pt_branch}[imax]>0 ? {ptErr_branch}[imax]/{pt_branch}[imax] : -999.")
                    )

                    df2 = df2.Filter("imax>=0 && pt_max>0 && ratio>0 && ratio<9000 && std::isfinite(ratio)")
                    h = df2.Histo2D(("h2","",1230,200,12500,200,0,10), "pt_max", "ratio")
                else:
                    if collection == 'matched_muon': 
                        coll_tmp = 'muon_fromGenTrack'
                        coll_tmp_2 = 'muon'
                        main_var_tmp = 'Pt'
                        validHits_tmp = 'NumValidHits'
                        chi2_ndof_tmp = ['Chi2', 'Ndof']
                    elif collection == 'tuneP':
                        coll_tmp = 'muon_tuneP'
                        coll_tmp_2 = 'muon'
                        main_var_tmp = 'Pt'
                        validHits_tmp = 'numberOfValidHits'
                        chi2_ndof_tmp = ['comb_chi2', 'comb_ndof']
                    elif collection == 'muon':
                        coll_tmp = 'muon'
                        coll_tmp_2 = 'muon'
                        main_var_tmp = 'pt'
                        validHits_tmp = 'numberOfValidHits'
                        chi2_ndof_tmp = ['comb_chi2', 'comb_ndof']
                    else: 
                        coll_tmp = collection
                        coll_tmp_2 = collection
                        main_var_tmp = 'pt'
                        validHits_tmp = 'numberOfValidHits'
                        chi2_ndof_tmp = ['chi2', 'ndof']

                    df2 = (
                                df.Define("mask", f"{coll_tmp}_{chi2_ndof_tmp[0]}/{coll_tmp}_{chi2_ndof_tmp[1]} < 35 & {coll_tmp}_{validHits_tmp} > 7")
                                .Define("n_pass", "Sum(mask)")
                                .Define("sum_pT", f"n_pass > 0 ? Sum({coll_tmp}_{main_var_tmp}[mask]) : -1.")
                                .Define("avg_pT", "n_pass > 0 ? n_pass/sum_pT : -1.")
                    )
                    h = df2.Histo2D(
                        (f"h_ratio_{sample}", "", 800, 200, 10000, nbins, min, max),
                        f"{coll_tmp}_{main_var_tmp}", "avg_pT"
                    )

                garbage_protect_list.append(h)
                histo = h.GetValue()
                histo.SetDirectory(0)
                fold_overflow(histo)
                #histo.Scale(1/histo.Integral())
                #histo.SetLineColor(color_numerator)
                #histo.SetMarkerColor(color_numerator)
                #histo.SetMarkerStyle(20)
                #histo.SetLineWidth(2)
                histo.Draw("COL SAME")
                #h.Draw("P SAME")
                #leg.AddEntry(histo, sample, "l")

                pave = ROOT.TPaveText(0.25, 0.75, 0.46, 0.90, "NDC")
                pave.SetFillColor(0)
                pave.SetBorderSize(0)
                pave.SetTextAlign(12)  # left aligned
                pave.SetTextSize(0.025)
                pave.AddText(base_path[-6:])
                pave.AddText(f"collection = {collection}")
                pave.AddText("Depth: 0.01 mm")
                pave.AddText(presel_steps_arr[num])
                pave.AddText(sample)
                pave.Draw()
                #leg.Draw()

                f = ROOT.TF1("f", "1/x", 0, 10000)
                f_2 = ROOT.TF1("f_2", "2/x", 0, 10000)
                f_3 = ROOT.TF1("f_1.5", "1.5/(x-5000)", 0, 10000)

                # Style
                f.SetLineColor(ROOT.kRed)
                f.SetLineWidth(1)

                f_2.SetLineColor(ROOT.kRed)
                f_2.SetLineWidth(1)

                f_3.SetLineColor(ROOT.kRed)
                f_3.SetLineWidth(1)

                # Draw on top
                f.Draw("SAME")
                f_2.Draw("SAME")
                #f_3.Draw("SAME")

                CMS.CMS_lumi(c, iPosX=0, scaleLumi=0)
                sample_tag = sample.replace("{", "").replace("}", "").replace(" = ", "_").replace(" ", "_").replace("_TeV", "TeV")
                c.SaveAs(f"figures/presel_ch_skimmedNtuples/presoverlay_{collection}_{var_dict[main_var][4+num]}_{sample_tag}.png")
                c.SaveAs(f"figures/presel_ch_skimmedNtuples/presoverlay_{collection}_{var_dict[main_var][4+num]}_{sample_tag}.pdf")

            del c
            del hframe
            del h
            del histo
        elif main_var == 'RNNScore':
            num = 2
            nbins = var_dict[main_var][1]
            min = var_dict[main_var][2]
            max = var_dict[main_var][3]

            c = CMS.cmsCanvas('', 0, 1, 0, 1, '', '')
            c.SetLeftMargin(0.2)
            c.SetRightMargin(0.2)
            c.SetLogy(True)

            # define axis ranges
            hframe = ROOT.TH1F("hframe", "", nbins, min, max)
            hframe.SetStats(False)
            hframe.GetXaxis().SetTitle('RNN Score')
            hframe.GetYaxis().SetTitle(var_dict[main_var][7])
            hframe.GetXaxis().SetLabelSize(0.04)
            hframe.GetYaxis().SetLabelSize(0.04)
            hframe.GetXaxis().SetMaxDigits(3)
            hframe.GetXaxis().SetNdivisions(510)
            hframe.Draw()

            hframe.SetMinimum(5e-5)  # force log Y minimum
            hframe.SetMaximum(1)     # optional

            leg = ROOT.TLegend(0.525, 0.7, 0.725, 0.9)
            leg.SetBorderSize(0)
            leg.SetFillStyle(0)
            leg.SetTextFont(42)

            color_numerator = 7
            # for sample in ["2023D Cosmics", "Cosmic Bkg", "Neutrino Bkg", "M_{DM} = 2 TeV", "M_{DM} = 10 TeV", "M_{DM} = 20 TeV"]:
            for sample in ["Run-3 Cosmics", "Cosmic Bkg", "Neutrino Bkg", "M_{DM} = 2 TeV", "M_{DM} = 10 TeV", "M_{DM} = 20 TeV"]:

                file_path = f'{base_path}/{samples_dict[sample][0]}/{region}/{collection}/skimmed_{collection}_{region}'
                df = ROOT.RDataFrame("tree", f"{file_path}_{samples_dict[sample][1]}")
                h = 0
                h = df.Histo1D(
                        (f"h_RNNScore_{sample}", "", nbins, min, max),
                        "RNNScore"
                    )

                garbage_protect_list.append(h)
                histo = h.GetValue()
                histo.SetDirectory(0)
                fold_overflow(histo)
                if histo.Integral() > 0:
                    histo.Scale(1/histo.Integral())
                is_data = samples_dict[sample][0] == "Data"
                is_cosmic_bkg = sample == "Cosmic Bkg"
                histo.SetLineColor(ROOT.kBlack if is_data else color_numerator)
                histo.SetMarkerColor(ROOT.kBlack if is_data else color_numerator)
                histo.SetMarkerStyle(20)
                histo.SetMarkerSize(0.6 if is_data else 1.0)
                histo.SetLineWidth(2)
                if is_cosmic_bkg:
                    histo.SetFillColor(color_numerator)
                    histo.SetFillStyle(3004)
                if is_data:
                    histo.Draw("P SAME")
                    leg.AddEntry(histo, sample, "p")
                elif is_cosmic_bkg:
                    histo.Draw("HIST SAME")
                    leg.AddEntry(histo, sample, "f")
                else:
                    histo.Draw("HIST SAME")
                    leg.AddEntry(histo, sample, "l")
                color_numerator -= 1

            pave = ROOT.TPaveText(0.23, 0.80, 0.38, 0.90, "NDC")
            pave.SetFillColor(0)
            pave.SetBorderSize(0)
            pave.SetTextAlign(12)  # left aligned
            pave.SetTextSize(0.025)
            pave.AddText(f"Collection = {collection}")
            pave.AddText("Signal Depth: 0 mm")
            pave.AddText(presel_steps_arr[num])
            pave.Draw()
            leg.Draw()
            
            # overflow_line = ROOT.TLine(max - bin_width, hframe.GetMinimum(), max - bin_width, hframe.GetMaximum())
            # overflow_line.SetLineStyle(2)
            # overflow_line.SetLineColor(ROOT.kGray + 2)
            # overflow_line.Draw()

            CMS.CMS_lumi(c, iPosX=0, scaleLumi=0)
            c.SaveAs(f"figures/presel_ch_skimmedNtuples/{collection}/{collection}_{var_dict[main_var][4+num]}.png")
            c.SaveAs(f"figures/presel_ch_skimmedNtuples/{collection}/{collection}_{var_dict[main_var][4+num]}.pdf")

        else: # For variables that are current preselection variables, run all steps (pretrigger, trigger, nminus1, final)
            for num in range(4):
                if var_dict[main_var][4+num] is None:
                    continue
                nbins = var_dict[main_var][1]
                min = var_dict[main_var][2]
                max = var_dict[main_var][3]

                c = CMS.cmsCanvas('', 0, 1, 0, 1, '', '')
                c.SetLogy(True)
                c.SetLeftMargin(0.153)
                c.SetRightMargin(0.08)

                # define axis ranges (extend by one bin so overflow line is visible)
                bin_width = (max - min) / nbins
                hframe = ROOT.TH1F("hframe", "", nbins + 1, min, max + bin_width)
                hframe.SetStats(False)
                hframe.GetXaxis().SetTitle(var_dict[main_var][-1])
                hframe.GetYaxis().SetTitle("Fraction of Events")
                hframe.GetXaxis().SetLabelSize(0.04)
                hframe.GetYaxis().SetLabelSize(0.04)
                hframe.GetXaxis().SetMaxDigits(3)
                hframe.GetXaxis().SetNdivisions(510)
                hframe.SetMinimum(1e-5)
                hframe.SetMaximum(9.99)
                hframe.Draw()

                leg = ROOT.TLegend(0.60, 0.7, 0.80, 0.9)
                leg.SetBorderSize(0)
                leg.SetFillStyle(0)
                leg.SetTextFont(42)

                color_numerator = 7
                for sample in list(samples_dict.keys()):
                    hist_name = f"h_{var_dict[main_var][4+num]}"

                    color_numerator -= 1
                    if color_numerator == 1:  # skip kBlack (reserved for data)
                        color_numerator = 9
                    file_path = f'{base_path}/{samples_dict[sample][0]}/{region}/{collection}/skimmed_{collection}_{region}'
                    f = ROOT.TFile(f"{file_path}_{samples_dict[sample][1]}")
                    h = f.Get(hist_name)
                    if not h or not h.InheritsFrom("TH1"):
                        tqdm.write(f"  WARNING: {hist_name} not found in {file_path}_{samples_dict[sample][1]}")
                        f.Close()
                        continue
                    h.SetDirectory(0)
                    f.Close()
                    fold_overflow(h)
                    if h.Integral() > 0:
                        h.Scale(1/h.Integral())
                    is_data = samples_dict[sample][0] == "Data"
                    is_cosmic_bkg = sample == "Cosmic Bkg"
                    h.SetLineColor(ROOT.kBlack if is_data else color_numerator)
                    h.SetMarkerColor(ROOT.kBlack if is_data else color_numerator)
                    h.SetMarkerStyle(20 if is_data else 8)
                    h.SetMarkerSize(0.6 if is_data else 1.0)
                    h.SetLineWidth(2)
                    if is_cosmic_bkg:
                        h.SetFillColor(color_numerator)
                        h.SetFillStyle(3004)
                    if is_data:
                        h.Draw("P SAME")
                        leg.AddEntry(h, sample, "p")
                    elif is_cosmic_bkg:
                        h.Draw("HIST SAME")
                        leg.AddEntry(h, sample, "f")
                    else:
                        h.Draw("HIST SAME")
                        leg.AddEntry(h, sample, "l")
                    garbage_protect_list.append(h)

                pave = ROOT.TPaveText(0.18, 0.80, 0.32, 0.90, "NDC")
                pave.SetFillColor(0)
                pave.SetBorderSize(0)
                pave.SetTextAlign(12)
                pave.SetTextSize(0.025)
                pave.AddText(f"Collection = {collection}")
                pave.AddText("Depth: 0.01 mm")
                pave.AddText(presel_steps_arr[num])
                pave.Draw()
                leg.Draw()

                overflow_line = ROOT.TLine(max, hframe.GetMinimum(), max, hframe.GetMaximum())
                overflow_line.SetLineStyle(2)
                overflow_line.SetLineColor(ROOT.kGray + 2)
                overflow_line.Draw()

                CMS.CMS_lumi(c, iPosX=0, scaleLumi=0)
                c.SaveAs(f"figures/presel_ch_skimmedNtuples/presoverlay_{collection}_{var_dict[main_var][4+num]}.png")
                c.SaveAs(f"figures/presel_ch_skimmedNtuples/presoverlay_{collection}_{var_dict[main_var][4+num]}.pdf")

                del c
                del hframe

        # Skip profile sections if already done for this collection
        if _profiles_done:
            garbage_protect_list.clear()
            continue
        _profiles_done = True

        # -----------------------------------------------------------------
        # Profile plot: mean sigma(pT)/pT  vs  pT  (full cutflow)
        # -----------------------------------------------------------------
        # print("  Profile: mean sigma(pT)/pT vs pT")
        pt_lo, pt_hi, pt_nbins = 200, 12500, 123

        c = CMS.cmsCanvas('', 0, 1, 0, 1, '', '')
        c.SetLeftMargin(0.153)
        c.SetRightMargin(0.1)
        c.SetLogy(True)

        hframe_prof = ROOT.TH1F("hframe_prof", "", pt_nbins, pt_lo, pt_hi)
        hframe_prof.SetStats(False)
        hframe_prof.GetXaxis().SetTitle("Leading muon p_{T} [GeV]")
        hframe_prof.GetYaxis().SetTitle("Mean #sigma(p_{T}) / p_{T}")
        hframe_prof.GetXaxis().SetLabelSize(0.04)
        hframe_prof.GetYaxis().SetLabelSize(0.04)
        hframe_prof.GetXaxis().SetMaxDigits(3)
        hframe_prof.GetXaxis().SetNdivisions(510)
        hframe_prof.SetMinimum(1e-2)
        hframe_prof.SetMaximum(1e1)
        hframe_prof.Draw()

        leg_prof = ROOT.TLegend(0.55, 0.72, 0.88, 0.9)
        leg_prof.SetBorderSize(0)
        leg_prof.SetFillStyle(0)
        leg_prof.SetTextFont(42)

        color_numerator = 7
        for sample in list(samples_dict.keys()):
            color_numerator -= 1
            if color_numerator == 1:  # skip kBlack (reserved for data)
                color_numerator = 9
            file_path = f'{base_path}/{samples_dict[sample][0]}/{region}/{collection}/skimmed_{collection}_{region}'
            full_path = f"{file_path}_{samples_dict[sample][1]}"
            if not os.path.exists(full_path):
                continue
            df = ROOT.RDataFrame("tree", full_path)

            df_cut = get_cutflow_df(df, collection, region)

            prof = df_cut.Profile1D((f"prof_ptErr_{sample}", "", pt_nbins, pt_lo, pt_hi), "highpt_pt", "highpt_ptErrPerPt")
            garbage_protect_list.append(prof)

            is_data = samples_dict[sample][0] == 'Data'
            is_cosmic_bkg = sample == "Cosmic Bkg"
            col = ROOT.kBlack if is_data else color_numerator

            p = prof.GetValue()
            p.SetDirectory(0)
            fold_overflow(p)
            p.SetLineColor(col)
            p.SetLineWidth(2)
            p.SetMarkerColor(col)
            if is_cosmic_bkg:
                p.SetFillColor(color_numerator)
                p.SetFillStyle(3004)
            if is_data:
                p.SetMarkerStyle(20)
                p.SetMarkerSize(0.6)
                p.Draw("P SAME")
                leg_prof.AddEntry(p, sample, "p")
            elif is_cosmic_bkg:
                p.SetMarkerStyle(0)
                p.Draw("HIST SAME")
                leg_prof.AddEntry(p, sample, "f")
            else:
                p.SetMarkerStyle(0)
                p.Draw("HIST SAME")
                leg_prof.AddEntry(p, sample, "l")

        pave = ROOT.TPaveText(0.18, 0.82, 0.42, 0.90, "NDC")
        pave.SetFillColor(0)
        pave.SetBorderSize(0)
        pave.SetTextAlign(12)
        pave.SetTextSize(0.025)
        pave.AddText(f"collection = {collection}")
        pave.Draw()
        leg_prof.Draw()

        CMS.CMS_lumi(c, iPosX=0, scaleLumi=0)
        c.SaveAs(f"figures/presel_ch_skimmedNtuples/presoverlay_{collection}_profile_ptErrRatio_vs_pT.png")
        c.SaveAs(f"figures/presel_ch_skimmedNtuples/presoverlay_{collection}_profile_ptErrRatio_vs_pT.pdf")
        del c
        del hframe_prof

        # -----------------------------------------------------------------
        # Profile plot: mean sigma(pT)/pT^2  vs  pT  (full cutflow)
        # -----------------------------------------------------------------
        # print("  Profile: mean sigma(pT)/pT^2 vs pT")
        pt_lo2, pt_hi2, pt_nbins2 = 200, 12500, 123

        c = CMS.cmsCanvas('', 0, 1, 0, 1, '', '')
        c.SetLeftMargin(0.153)
        c.SetRightMargin(0.1)
        c.SetLogy(True)

        hframe_prof2 = ROOT.TH1F("hframe_prof2", "", pt_nbins2, pt_lo2, pt_hi2)
        hframe_prof2.SetStats(False)
        hframe_prof2.GetXaxis().SetTitle("Leading muon p_{T} [GeV]")
        hframe_prof2.GetYaxis().SetTitle("Mean #sigma(p_{T}) / p_{T}^{2} [GeV^{-1}]")
        hframe_prof2.GetXaxis().SetLabelSize(0.04)
        hframe_prof2.GetYaxis().SetLabelSize(0.04)
        hframe_prof2.GetXaxis().SetMaxDigits(3)
        hframe_prof2.GetXaxis().SetNdivisions(510)
        hframe_prof2.SetMinimum(1e-6)
        hframe_prof2.SetMaximum(1e-1)
        hframe_prof2.Draw()

        leg_prof2 = ROOT.TLegend(0.55, 0.72, 0.88, 0.9)
        leg_prof2.SetBorderSize(0)
        leg_prof2.SetFillStyle(0)
        leg_prof2.SetTextFont(42)

        color_numerator = 7
        for sample in list(samples_dict.keys()):
            color_numerator -= 1
            if color_numerator == 1:
                color_numerator = 9
            file_path = f'{base_path}/{samples_dict[sample][0]}/{region}/{collection}/skimmed_{collection}_{region}'
            full_path = f"{file_path}_{samples_dict[sample][1]}"
            if not os.path.exists(full_path):
                continue
            df = ROOT.RDataFrame("tree", full_path)

            df_cut = get_cutflow_df(df, collection, region)

            prof = df_cut.Profile1D((f"prof_ptErrPerPt2_{sample}", "", pt_nbins2, pt_lo2, pt_hi2), "highpt_pt", "highpt_ptErrPerPt2")
            garbage_protect_list.append(prof)

            is_data = samples_dict[sample][0] == 'Data'
            is_cosmic_bkg = sample == "Cosmic Bkg"
            col = ROOT.kBlack if is_data else color_numerator

            p = prof.GetValue()
            p.SetDirectory(0)
            fold_overflow(p)
            p.SetLineColor(col)
            p.SetLineWidth(2)
            p.SetMarkerColor(col)
            if is_cosmic_bkg:
                p.SetFillColor(color_numerator)
                p.SetFillStyle(3004)
            if is_data:
                p.SetMarkerStyle(20)
                p.SetMarkerSize(0.6)
                p.Draw("P SAME")
                leg_prof2.AddEntry(p, sample, "p")
            elif is_cosmic_bkg:
                p.SetMarkerStyle(0)
                p.Draw("HIST SAME")
                leg_prof2.AddEntry(p, sample, "f")
            else:
                p.SetMarkerStyle(0)
                p.Draw("HIST SAME")
                leg_prof2.AddEntry(p, sample, "l")

        pave = ROOT.TPaveText(0.18, 0.82, 0.42, 0.90, "NDC")
        pave.SetFillColor(0)
        pave.SetBorderSize(0)
        pave.SetTextAlign(12)
        pave.SetTextSize(0.025)
        pave.AddText(f"collection = {collection}")
        pave.Draw()
        leg_prof2.Draw()

        CMS.CMS_lumi(c, iPosX=0, scaleLumi=0)
        c.SaveAs(f"figures/presel_ch_skimmedNtuples/presoverlay_{collection}_profile_ptErrPerPt2_vs_pT.png")
        c.SaveAs(f"figures/presel_ch_skimmedNtuples/presoverlay_{collection}_profile_ptErrPerPt2_vs_pT.pdf")
        del c
        del hframe_prof2

        garbage_protect_list.clear()

    # -----------------------------------------------------------------
    # Object count profile: <N_obj> +/- std(N_obj) at each cutflow step
    # -----------------------------------------------------------------

    c = CMS.cmsCanvas('', 0, 1, 0, 1, '', '')
    c.SetLeftMargin(0.153)
    c.SetRightMargin(0.1)

    hframe_nobj = ROOT.TH1F("hframe_nobj", "", 6, -0.5, 5.5)
    hframe_nobj.SetStats(False)
    hframe_nobj.GetXaxis().SetTitle("")
    hframe_nobj.GetYaxis().SetTitle("<N_{obj}>")
    hframe_nobj.GetYaxis().SetTitleOffset(1.2)
    hframe_nobj.GetXaxis().SetLabelSize(0.03)
    hframe_nobj.GetYaxis().SetLabelSize(0.04)
    hframe_nobj.SetMinimum(0)
    hframe_nobj.SetMaximum(10)
    hframe_nobj.Draw()

    leg_nobj = ROOT.TLegend(0.45, 0.65, 0.88, 0.9)
    leg_nobj.SetBorderSize(0)
    leg_nobj.SetFillStyle(0)
    leg_nobj.SetTextFont(42)

    labels_set = False
    color_numerator = 7
    for sample in list(samples_dict.keys()):
        color_numerator -= 1
        if color_numerator == 1:
            color_numerator = 9
        file_path = f'{base_path}/{samples_dict[sample][0]}/{region}/{collection}/skimmed_{collection}_{region}'
        full_path = f"{file_path}_{samples_dict[sample][1]}"
        if not os.path.exists(full_path):
            continue
        f = ROOT.TFile(full_path)
        h2 = f.Get("h2_cutflow_nobj")
        if not h2:
            f.Close()
            continue

        h2.SetDirectory(0)

        # Copy bin labels from original h2 (only once)
        if not labels_set:
            for b in range(1, h2.GetNbinsX() + 1):
                label = h2.GetXaxis().GetBinLabel(b)
                if label:
                    hframe_nobj.GetXaxis().SetBinLabel(b, label)
            labels_set = True

        f.Close()

        # Build TH1F with mean as content and std dev as error
        nx = h2.GetNbinsX()
        h_mean = ROOT.TH1F(f"h_mean_nobj_{sample}", "", nx, h2.GetXaxis().GetXmin(), h2.GetXaxis().GetXmax())
        h_mean.SetDirectory(0)
        for b in range(1, nx + 1):
            proj = h2.ProjectionY(f"_py_{sample}_{b}", b, b)
            h_mean.SetBinContent(b, proj.GetMean())
            h_mean.SetBinError(b, proj.GetStdDev())
            del proj

        # Get mean at last bin for legend
        mean_last = h_mean.GetBinContent(nx)

        is_data = samples_dict[sample][0] == "Data"
        is_cosmic_bkg = sample == "Cosmic Bkg"
        col = ROOT.kBlack if is_data else color_numerator

        h_mean.SetLineColor(col)
        h_mean.SetLineWidth(2)
        h_mean.SetMarkerColor(col)
        h_mean.SetMarkerStyle(20)
        h_mean.SetMarkerSize(0.6 if is_data else 1.0)
        if is_cosmic_bkg:
            h_mean.SetFillColor(color_numerator)
            h_mean.SetFillStyle(3004)
        h_mean.Draw("E1 SAME")
        leg_nobj.AddEntry(h_mean, f"{sample} ({mean_last:.2f})", "lep")

        garbage_protect_list.append(h_mean)

    pave = ROOT.TPaveText(0.18, 0.82, 0.42, 0.90, "NDC")
    pave.SetFillColor(0)
    pave.SetBorderSize(0)
    pave.SetTextAlign(12)
    pave.SetTextSize(0.025)
    pave.AddText(f"collection = {collection}")
    pave.AddText("error bars = std(N_{obj})")
    pave.Draw()
    leg_nobj.Draw()

    CMS.CMS_lumi(c, iPosX=0, scaleLumi=0)
    c.SaveAs(f"figures/presel_ch_skimmedNtuples/presoverlay_{collection}_objcount_profile.png")
    c.SaveAs(f"figures/presel_ch_skimmedNtuples/presoverlay_{collection}_objcount_profile.pdf")
    del c
    del hframe_nobj
    garbage_protect_list.clear()

    # -----------------------------------------------------------------
    # N_obj distribution at each cutflow step (projection of each x-bin)
    # -----------------------------------------------------------------
    # Read one file first to determine binning and step labels
    nobj_nbins, nobj_lo, nobj_hi = 20, 0, 20  # defaults
    nobj_nx = 0
    step_labels = {}
    for sample in list(samples_dict.keys()):
        file_path = f'{base_path}/{samples_dict[sample][0]}/{region}/{collection}/skimmed_{collection}_{region}'
        full_path = f"{file_path}_{samples_dict[sample][1]}"
        if not os.path.exists(full_path):
            continue
        f = ROOT.TFile(full_path)
        h2 = f.Get("h2_cutflow_nobj")
        if h2:
            nobj_nbins = h2.GetNbinsY()
            nobj_lo = h2.GetYaxis().GetXmin()
            nobj_hi = h2.GetYaxis().GetXmax()
            nobj_nx = h2.GetNbinsX()
            for b in range(1, nobj_nx + 1):
                lbl = h2.GetXaxis().GetBinLabel(b)
                step_labels[b] = lbl if lbl else f"step{b}"
        f.Close()
        break

    for step_bin in range(1, nobj_nx + 1):
        step_label = step_labels.get(step_bin, f"step{step_bin}")
        step_tag = step_label.replace(" ", "_").replace("#", "").replace("{", "").replace("}", "").replace("/", "over").replace("^", "").replace("<", "lt").replace(">", "gt").replace("|", "abs").replace(",", "").replace("(", "").replace(")", "").replace("=", "eq").replace("-", "m")

        c = CMS.cmsCanvas('', 0, 1, 0, 1, '', '')
        c.SetLeftMargin(0.153)
        c.SetRightMargin(0.1)
        c.SetLogy(True)

        hframe_nobj_dist = ROOT.TH1F(f"hframe_nobj_dist_{step_bin}", "", nobj_nbins, nobj_lo, nobj_hi)
        hframe_nobj_dist.SetStats(False)
        hframe_nobj_dist.GetXaxis().SetTitle("N_{obj}")
        hframe_nobj_dist.GetYaxis().SetTitle("Fraction of Events")
        hframe_nobj_dist.GetXaxis().SetLabelSize(0.04)
        hframe_nobj_dist.GetYaxis().SetLabelSize(0.04)
        hframe_nobj_dist.SetMinimum(1e-5)
        hframe_nobj_dist.SetMaximum(9.99)
        hframe_nobj_dist.Draw()

        leg_nobj_dist = ROOT.TLegend(0.55, 0.65, 0.88, 0.9)
        leg_nobj_dist.SetBorderSize(0)
        leg_nobj_dist.SetFillStyle(0)
        leg_nobj_dist.SetTextFont(42)

        color_numerator = 7
        for sample in list(samples_dict.keys()):
            color_numerator -= 1
            if color_numerator == 1:
                color_numerator = 9
            file_path = f'{base_path}/{samples_dict[sample][0]}/{region}/{collection}/skimmed_{collection}_{region}'
            full_path = f"{file_path}_{samples_dict[sample][1]}"
            if not os.path.exists(full_path):
                continue
            f = ROOT.TFile(full_path)
            h2 = f.Get("h2_cutflow_nobj")
            if not h2:
                f.Close()
                continue

            h2.SetDirectory(0)
            f.Close()

            proj = h2.ProjectionY(f"proj_nobj_s{step_bin}_{sample}", step_bin, step_bin)
            proj.SetDirectory(0)

            if proj.Integral() > 0:
                proj.Scale(1.0 / proj.Integral())

            is_data = samples_dict[sample][0] == "Data"
            is_cosmic_bkg = sample == "Cosmic Bkg"
            col = ROOT.kBlack if is_data else color_numerator

            proj.SetLineColor(col)
            proj.SetLineWidth(2)
            proj.SetMarkerColor(col)
            if is_cosmic_bkg:
                proj.SetFillColor(color_numerator)
                proj.SetFillStyle(3004)
            if is_data:
                proj.SetMarkerStyle(20)
                proj.SetMarkerSize(0.6)
                proj.Draw("P SAME")
                leg_nobj_dist.AddEntry(proj, sample, "p")
            elif is_cosmic_bkg:
                proj.SetMarkerStyle(0)
                proj.Draw("HIST SAME")
                leg_nobj_dist.AddEntry(proj, sample, "f")
            else:
                proj.SetMarkerStyle(0)
                proj.Draw("HIST SAME")
                leg_nobj_dist.AddEntry(proj, sample, "l")

            garbage_protect_list.append(proj)

        pave = ROOT.TPaveText(0.18, 0.80, 0.42, 0.90, "NDC")
        pave.SetFillColor(0)
        pave.SetBorderSize(0)
        pave.SetTextAlign(12)
        pave.SetTextSize(0.025)
        pave.AddText(f"collection = {collection}")
        pave.AddText(f"cutflow step: {step_label}")
        pave.Draw()
        leg_nobj_dist.Draw()

        CMS.CMS_lumi(c, iPosX=0, scaleLumi=0)
        c.SaveAs(f"figures/presel_ch_skimmedNtuples/presoverlay_{collection}_nobj_dist_at_cf_step{step_bin}.png")
        c.SaveAs(f"figures/presel_ch_skimmedNtuples/presoverlay_{collection}_nobj_dist_at_cf_step{step_bin}.pdf")
        del c
        del hframe_nobj_dist
        garbage_protect_list.clear()

    # -----------------------------------------------------------------
    # Cutflow overlay plot (h_cutflow, drop "All events", normalise to Trigger)
    # -----------------------------------------------------------------
    c = CMS.cmsCanvas('', 0, 1, 0, 1, '', '')
    c.SetLeftMargin(0.153)
    c.SetRightMargin(0.08)
    c.SetLogy(True)

    # Read one file first to determine binning and labels (skip bin 1 = "All events")
    cf_nbins_raw = 0
    cf_bin_labels = []
    for sample in list(samples_dict.keys()):
        file_path = f'{base_path}/{samples_dict[sample][0]}/{region}/{collection}/skimmed_{collection}_{region}'
        full_path = f"{file_path}_{samples_dict[sample][1]}"
        if not os.path.exists(full_path):
            continue
        f = ROOT.TFile(full_path)
        h_cf = f.Get("h_cutflow")
        if h_cf:
            cf_nbins_raw = h_cf.GetNbinsX()
            for b in range(2, cf_nbins_raw + 1):  # start from bin 2
                lbl = h_cf.GetXaxis().GetBinLabel(b)
                cf_bin_labels.append(lbl if lbl else f"Cut {b}")
        f.Close()
        break

    cf_nbins = cf_nbins_raw - 1  # number of bins after dropping "All events"

    if cf_nbins > 0:
        hframe_cf = ROOT.TH1F("hframe_cf", "", cf_nbins, 0.5, cf_nbins + 0.5)
        hframe_cf.SetStats(False)
        hframe_cf.GetXaxis().SetTitle("")
        hframe_cf.GetYaxis().SetTitle("Efficiency")
        hframe_cf.GetYaxis().SetTitleOffset(1.0)
        hframe_cf.GetXaxis().SetLabelSize(0.03)
        hframe_cf.GetYaxis().SetLabelSize(0.04)
        hframe_cf.SetMinimum(1e-4)
        hframe_cf.SetMaximum(1e4)
        for b in range(1, cf_nbins + 1):
            hframe_cf.GetXaxis().SetBinLabel(b, cf_bin_labels[b - 1])
        hframe_cf.Draw()

        leg_cf = ROOT.TLegend(0.55, 0.65, 0.88, 0.9)
        leg_cf.SetBorderSize(0)
        leg_cf.SetFillStyle(0)
        leg_cf.SetTextFont(42)

        color_numerator = 7
        for sample in list(samples_dict.keys()):
            color_numerator -= 1
            if color_numerator == 1:
                color_numerator = 9
            file_path = f'{base_path}/{samples_dict[sample][0]}/{region}/{collection}/skimmed_{collection}_{region}'
            full_path = f"{file_path}_{samples_dict[sample][1]}"
            if not os.path.exists(full_path):
                continue
            f = ROOT.TFile(full_path)
            h_cf_raw = f.Get("h_cutflow")
            if not h_cf_raw:
                f.Close()
                continue

            # Build a new histogram dropping bin 1, normalised to bin 2 (Trigger)
            trigger_val = h_cf_raw.GetBinContent(2)
            h_cf = ROOT.TH1F(f"h_cf_{sample}", "", cf_nbins, 0.5, cf_nbins + 0.5)
            h_cf.SetDirectory(0)
            for b in range(2, cf_nbins_raw + 1):
                val = h_cf_raw.GetBinContent(b) / trigger_val if trigger_val > 0 else 0
                h_cf.SetBinContent(b - 1, val)
            f.Close()

            is_data = samples_dict[sample][0] == "Data"
            is_cosmic_bkg = sample == "Cosmic Bkg"
            col = ROOT.kBlack if is_data else color_numerator

            h_cf.SetLineColor(col)
            h_cf.SetLineWidth(2)
            h_cf.SetMarkerColor(col)
            h_cf.SetMarkerStyle(20 if is_data else 8)
            h_cf.SetMarkerSize(0.6 if is_data else 1.0)
            if is_cosmic_bkg:
                h_cf.SetFillColor(color_numerator)
                h_cf.SetFillStyle(3004)
            if is_data:
                h_cf.Draw("P SAME")
                leg_cf.AddEntry(h_cf, sample, "p")
            elif is_cosmic_bkg:
                h_cf.Draw("HIST SAME")
                leg_cf.AddEntry(h_cf, sample, "f")
            else:
                h_cf.Draw("HIST SAME")
                leg_cf.AddEntry(h_cf, sample, "l")
            garbage_protect_list.append(h_cf)

        pave = ROOT.TPaveText(0.18, 0.82, 0.42, 0.90, "NDC")
        pave.SetFillColor(0)
        pave.SetBorderSize(0)
        pave.SetTextAlign(12)
        pave.SetTextSize(0.025)
        pave.AddText(f"collection = {collection}")
        pave.Draw()
        leg_cf.Draw()

        CMS.CMS_lumi(c, iPosX=0, scaleLumi=0)
        c.SaveAs(f"figures/presel_ch_skimmedNtuples/presoverlay_{collection}_cutflow.png")
        c.SaveAs(f"figures/presel_ch_skimmedNtuples/presoverlay_{collection}_cutflow.pdf")
        del c
        del hframe_cf
        garbage_protect_list.clear()

    # -----------------------------------------------------------------
    # Cutflow LaTeX table (drop "All events", normalise to Trigger bin)
    # -----------------------------------------------------------------
    if cf_nbins > 0:
        # Collect efficiencies per sample (bins 2..N, normalised to bin 2)
        table_data = {}  # sample_name -> list of efficiencies
        for sample in list(samples_dict.keys()):
            file_path = f'{base_path}/{samples_dict[sample][0]}/{region}/{collection}/skimmed_{collection}_{region}'
            full_path = f"{file_path}_{samples_dict[sample][1]}"
            if not os.path.exists(full_path):
                continue
            f = ROOT.TFile(full_path)
            h_cf = f.Get("h_cutflow")
            if not h_cf:
                f.Close()
                continue
            trigger_bin = h_cf.GetBinContent(2)  # Trigger bin
            effs = []
            for b in range(2, cf_nbins_raw + 1):  # skip bin 1 ("All events")
                if trigger_bin > 0:
                    effs.append(h_cf.GetBinContent(b) / trigger_bin * 100.0)
                else:
                    effs.append(0.0)
            table_data[sample] = effs
            f.Close()

        # Build LaTeX table
        n_samples = len(table_data)
        sample_names = list(table_data.keys())

        # Column spec: l for cuts, then one c per sample
        col_spec = "l " + " ".join(["c"] * n_samples)

        lines = []
        lines.append(r"\begin{table}[h!]")
        lines.append(r"  \centering")
        lines.append(r"  \begin{tabular}{" + col_spec + "}")

        # Escape underscores for plain-text LaTeX contexts
        def latex_escape(s):
            return s.replace("_", r"\_")

        def root_label_to_latex(s):
            """Convert a ROOT histogram bin label to LaTeX with math mode."""
            # Replace ROOT Greek-letter notation: #chi -> \chi, #eta -> \eta, ...
            s = re.sub(r'#([a-zA-Z]+)', r'\\\1', s)
            # If the label contains math-like characters, wrap in $...$
            if any(c in s for c in ['\\', '^', '_', '<', '>', '|']):
                return f'${s}$'
            return s

        # Separate samples by category
        signal_samples = [s for s in sample_names if samples_dict[s][0] == "Signal"]
        bkg_samples = [s for s in sample_names if samples_dict[s][0] == "BkgMC"]
        data_samples = [s for s in sample_names if samples_dict[s][0] == "Data"]
        non_signal = bkg_samples + data_samples
        n_signal = len(signal_samples)
        n_other = len(non_signal)

        # Extract short mass labels from signal sample names (e.g. "M_{DM} = 2 TeV" -> "2")
        def extract_mass(sname):
            m = re.search(r'=\s*(\d+)', sname)
            return m.group(1) if m else sname

        # Column spec: l for cuts, c for each signal, then l for bkg/data
        col_spec = "l " + "c " * n_signal + "l " * n_other

        # Two-row header with multicolumn for signal masses
        header1 = "    "
        if n_signal > 0:
            header1 += rf"& \multicolumn{{{n_signal}}}{{c}}{{$M_{{\rm DM}}$ (TeV)}} "
        for s in non_signal:
            header1 += "& "
        header1 += r"\\[-0.5ex]"
        lines.append(header1)

        header2 = "    Cuts"
        for s in signal_samples:
            header2 += f" & {extract_mass(s)}"
        for s in non_signal:
            header2 += f" & {s}"
        header2 += r" \\"
        lines.append(header2)
        lines.append(r"    \hline")

        # Ordered list for data rows
        ordered_samples = signal_samples + non_signal

        # Data rows
        for b in range(cf_nbins):
            label = cf_bin_labels[b]
            row = f"    {root_label_to_latex(label)}"
            for sname in ordered_samples:
                eff = table_data[sname][b]
                if eff >= 10:
                    row += f" & {eff:.1f}\\%"
                else:
                    row += f" & {eff:.2f}\\%"
            row += r" \\"
            lines.append(row)

        lines.append(r"    \hline")
        lines.append(r"  \end{tabular}")
        lines.append(f"  \\caption{{Cumulative cut efficiencies for the {latex_escape(collection)} collection "
                     f"in the {'pre-SR' if region == 'sr' else region.upper()} region, normalised to the first cutflow bin.}}")
        lines.append(f"  \\label{{tab:cut_efficiency_{collection}_{region}}}")
        lines.append(r"\end{table}")

        table_str = "\n".join(lines)

        os.makedirs("figures/presel_ch_skimmedNtuples", exist_ok=True)
        tex_path = f"figures/presel_ch_skimmedNtuples/cutflow_table_{collection}_{region}.tex"
        with open(tex_path, "w") as tex_file:
            tex_file.write(table_str + "\n")
        tqdm.write(f"  Cutflow table written to {tex_path}")

print("Done!")
