import os
import ROOT, cmsstyle as CMS
import mplhep as hep

ROOT.gROOT.SetBatch(True)
ROOT.gErrorIgnoreLevel = ROOT.kWarning
CMS.SetExtraText("Internal")
#CMS.SetLumi(None)
#CMS.SetEnergy(13.1, unit = '')

base_path = '/home/users/tvami/EarthAsDM/Ntuples_v4.0.4'
collections = ['track', 'muon', 'matched_muon', 'tuneP']
region = 'sr' # sr vr

samples_dict = {"Cosmic Bkg": ["BkgMC", "CosmicToMu_Par-MinP-4-MaxP-3000-MinTheta-0-MaxTheta-75_cosmuogen.root"],
                "Neutrino Bkg": ["BkgMC", "CosmicToMu_Par-MinP-10-MaxP-10000-MinTheta-91-MaxTheta-179_cosmuogen.root"],
                "M_{DM} = 2 TeV": ["Signal", "CosmicToMu_Par-MinP-1000-MinTheta-91-MaxTheta-179_cosmuogen.root"],
                "M_{DM} = 10 TeV": ["Signal", "CosmicToMu_Par-MinP-5000-MinTheta-91-MaxTheta-179_cosmuogen.root"],
                "M_{DM} = 20 TeV": ["Signal", "CosmicToMu_Par-MinP-10000-MinTheta-91-MaxTheta-179_cosmuogen.root"],
                "M_{DM} = 180 TeV": ["Signal", "CosmicToMu_Par-MinP-90000-MinTheta-91-MaxTheta-179_cosmuogen.root"],
                "2023D Cosmics": ["Data", "Ntuplizer-Cosmics_Run2023D-CosmicTP-PromptReco-v2_v4.root"]
                }

base_var_dict = {
            "eta": [0, 25, -2.5, 2.5, 'eta_pretrigger', 'eta_trigger', 'eta_nminus1', 'eta_final', '#eta'],
            "pt": [1, 500, 0, 5000, 'pt_pretrigger', 'pt_trigger', 'pt_nminus1', 'pt_final', 'p_{T} [GeV]'],
            "phi": [2, 25, -3.15, 3.15, 'phi_pretrigger', 'phi_trigger', None, 'phi_final', '#phi'],
            "ntrack": [3, 20, 0, 20, None, 'ntrack_trigger', 'ntrack_nminus1', 'ntrack_final', 'n_{Tracks}'],
            "nseg": [4, 20, 0, 20, None, 'nseg_trigger', 'nseg_nminus1', 'nseg_final', 'n_{Seg}'],
            "nhits": [5, 80, 0, 80, None, 'nhits_trigger', 'nhits_nminus1', 'nhits_final', 'n_{Hits}'],
            "chi2ndof": [6, 100, 0, 100, None, 'chi2ndof_trigger', 'chi2ndof_nminus1', 'chi2ndof_final', '#chi^{2}/n_{DoF}'],
            "ptErrPerPt2": [7, 100, 0, 0.01, None, 'ptErrPerPt2', 'ptErrPerPt2_nminus1', 'ptErrPerPt2_final', 'p_{T} Error / p_{T}^{2} [GeV^{-1}]'],
            "ptErrPerPt2_zoom": [8, 100, 0, 0.002, None, 'ptErrPerPt2_zoom', 'ptErrPerPt2_nminus1_zoom', 'ptErrPerPt2_final', 'p_{T} Error / p_{T}^{2} [GeV^{-1}]'],
            "pTErrPerPtVsPt": [9, 50, 0, 10, None, 'pTErrPerPtVsPt', 'pTErrPerPtVsPt_nminus1', 'pTErrPerPtVsPt_final', '#sigma_{p_{T}} / p_{T}'],
            "ptErrPerPt2VsPt": [10, 50, 0, 10, None, 'ptErrPerPt2VsPt', 'ptErrPerPt2VsPt_nminus1', 'ptErrPerPt2VsPt_final', '#sigma_{p_{T}} / p_{T}^{2} [GeV^{-1}]'],
            "nobj_quality": [12, 20, 0, 20, None, None, 'nobj_quality_nminus1', None, 'n (#chi^{2}/n_{DoF} < 35, n_{Hits} > 7)'],
            "ptErrPerPt2_quality": [13, 100, 0, 0.01, None, None, 'ptErrPerPt2_quality_nminus1', None, 'p_{T} Error / p_{T}^{2} [GeV^{-1}] (quality cuts)'],
            "ptErrPerPt2_quality_zoom": [14, 100, 0, 0.002, None, None, 'ptErrPerPt2_quality_nminus1_zoom', None, 'p_{T} Error / p_{T}^{2} [GeV^{-1}] (quality cuts)'],
            "ptErrPerPt_quality": [15, 50, 0, 10, None, None, 'ptErrPerPt_quality_nminus1', None, '#sigma_{p_{T}} / p_{T} (quality cuts)'],
            "pt_quality": [16, 500, 0, 5000, None, None, 'pt_quality_nminus1', None, 'p_{T} [GeV] (quality cuts)'],
            "ptErrPerPtVsPt_quality": [17, 50, 0, 10, None, None, 'ptErrPerPtVsPt_quality_nminus1', None, '#sigma_{p_{T}} / p_{T} (quality cuts)'],
            "ptErrPerPt_lowPt": [18, 50, 0, 10, None, 'ptErrPerPt_lowPt', 'ptErrPerPt_lowPt_nminus1', 'ptErrPerPt_lowPt_final', '#sigma_{p_{T}} / p_{T} (p_{T} < 5 TeV)'],
            "ptErrPerPt_highPt": [19, 50, 0, 10, None, 'ptErrPerPt_highPt', 'ptErrPerPt_highPt_nminus1', 'ptErrPerPt_highPt_final', '#sigma_{p_{T}} / p_{T} (p_{T} > 5 TeV)'],
            "ptErrPerPt2_lowPt": [20, 100, 0, 0.01, None, 'ptErrPerPt2_lowPt', 'ptErrPerPt2_lowPt_nminus1', 'ptErrPerPt2_lowPt_final', 'p_{T} Error / p_{T}^{2} [GeV^{-1}] (p_{T} < 5 TeV)'],
            "ptErrPerPt2_highPt": [21, 100, 0, 0.01, None, 'ptErrPerPt2_highPt', 'ptErrPerPt2_highPt_nminus1', 'ptErrPerPt2_highPt_final', 'p_{T} Error / p_{T}^{2} [GeV^{-1}] (p_{T} > 5 TeV)'],
            }

track_var_dict={"track_numberOfValidHits": [8, 77, 0, 77, None, 'track_numberOfValidHits', 'track_numberOfValidHits_nminus1', 'track_numberOfValidHits_final', '# of Valid Track Hits'],
                "track_validFraction": [9, 110, 0, 1.1, None, 'track_validFraction_trigger', 'track_validFraction_nminus1', 'track_validFraction_final', 'Track Valid Fraction'],
                }

muon_var_dict={"muon_comb_ndof": [11, 100, 0, 100, None, 'muon_comb_ndof', 'muon_comb_ndof_nminus1', 'muon_comb_ndof_final', 'Combined n_{DoF}'],
               # "muon_trkIso": [12, 100, 0, 1, None, 'muon_trkIso', 'muon_trkIso_nminus1', 'muon_trkIso_final', 'Track Isolation [GeV]'],
               "muon_d0": [13, 200, -200, 200, None, 'muon_d0', 'muon_d0_nminus1', 'muon_d0_final', 'd_{0} [cm]'],
               "muon_dZ": [14, 200, -500, 500, None, 'muon_dZ', 'muon_dZ_nminus1', 'muon_dZ_final', 'd_{Z} [cm]'],
               "muon_validFractionTrackerHits": [15, 110, 0, 1.1, None, 'muon_validFractionTrackerHits', 'muon_validFractionTrackerHits_nminus1', 'muon_validFractionTrackerHits_final', 'Valid Fraction Tracker Hits'],
               "muon_numberOfValidHits": [16, 80, 0, 80, None, 'muon_numberOfValidHits', 'muon_numberOfValidHits_nminus1', 'muon_numberOfValidHits_final', '# of Valid Hits'],
               # I removed these at v4.0.4 becasue they werent helpful at all
               #"muon_isLoose": [17, 2, 0, 2, None, 'muon_isLoose', 'muon_isLoose_nminus1', 'muon_isLoose_final', 'isLoose'],
               #"muon_isMedium": [18, 2, 0, 2, None, 'muon_isMedium', 'muon_isMedium_nminus1', 'muon_isMedium_final', 'isMedium'],
               #"muon_isTight": [19, 2, 0, 2, None, 'muon_isTight', 'muon_isTight_nminus1', 'muon_isTight_final', 'isTight'],
               #"muon_isTrackerHighPtMuon": [20, 2, 0, 2, None, 'muon_isTrackerHighPtMuon', 'muon_isTrackerHighPtMuon_nminus1', 'muon_isTrackerHighPtMuon_final', 'isTrackerHighPt'],
               #"muon_isHighPtMuon": [21, 2, 0, 2, None, 'muon_isHighPtMuon', 'muon_isHighPtMuon_nminus1', 'muon_isHighPtMuon_final', 'isHighPt'],
               #"muon_type": [22, 32, 0, 32, None, 'muon_type', 'muon_type_nminus1', 'muon_type_final', 'Muon Type'],
               #"muon_quality": [23, 16, 0, 16, None, 'muon_quality', 'muon_quality_nminus1', 'muon_quality_final', 'Muon Quality'],
               }

matched_muon_var_dict={
               "muon_fromGenTrack_NumValidHits": [11, 77, 0, 77, None, 'muon_fromGenTrack_NumValidHits', 'muon_fromGenTrack_NumValidHits_nminus1', 'muon_fromGenTrack_NumValidHits_final', '# of Valid Hits'],
               "muon_fromGenTrack_ValidFraction": [12, 110, 0, 1.1, None, 'muon_fromGenTrack_ValidFraction', 'muon_fromGenTrack_ValidFraction_nminus1', 'muon_fromGenTrack_ValidFraction_final', 'Valid Fraction'],
               }

tuneP_var_dict={
               "muon_tuneP_MuonBestTrackType": [11, 10, 0, 10, None, 'muon_tuneP_MuonBestTrackType', 'muon_tuneP_MuonBestTrackType_nminus1', 'muon_tuneP_MuonBestTrackType_final', 'Best Track Type'],
               }

presel_steps_arr = ["pretrigger", "trigger", "nminus1", "final"]

garbage_protect_list = []

def fold_overflow(h):
    """Fold underflow/overflow into first/last visible bins."""
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

print("Starting!")
for collection in collections:
    print(f"\n{'='*60}")
    print(f"Collection: {collection}")
    print(f"{'='*60}")

    var_dict = dict(base_var_dict)
    if collection == 'track': var_dict.update(track_var_dict)
    if collection == 'muon': var_dict.update(muon_var_dict)
    if collection == 'matched_muon': var_dict.update(matched_muon_var_dict)
    if collection == 'tuneP': var_dict.update(tuneP_var_dict)

    for main_var in list(var_dict.keys()):
        print(f"Making {main_var} plots")
        # For variables that aren't current preselection variables, only run nmin1 step
        if main_var[:5] == 'track' or main_var.startswith('muon_') or main_var in ('ptErrPerPt2', 'ptErrPerPt2_zoom', 'nobj_quality', 'ptErrPerPt2_quality', 'ptErrPerPt2_quality_zoom', 'ptErrPerPt_quality', 'pt_quality', 'ptErrPerPt_lowPt', 'ptErrPerPt_highPt', 'ptErrPerPt2_lowPt', 'ptErrPerPt2_highPt'):
            for num in range(2, 3):
                if main_var in ('nobj_quality', 'ptErrPerPt2_quality', 'ptErrPerPt2_quality_zoom', 'ptErrPerPt_quality', 'pt_quality') and collection == 'tuneP':
                    continue  # tuneP has no chi2/ndof/nhits branches
                print(f"Making {var_dict[main_var][4+num]} plot")
                nbins = var_dict[main_var][1]
                min = var_dict[main_var][2]
                max = var_dict[main_var][3]

                c = CMS.cmsCanvas('', 0, 1, 0, 1, '', '')
                c.SetLogy(True)
                c.SetLeftMargin(0.153)
                c.SetRightMargin(0.1)

                # define axis ranges (one extra bin so the overflow line at x=max is visible)
                bin_width = (max - min) / nbins
                hframe = ROOT.TH1F("hframe", "", nbins + 1, min, max + bin_width)
                hframe.SetStats(False)
                hframe.GetXaxis().SetTitle(var_dict[main_var][8])
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
                    print(f"\tSample: {sample}")
                    color_numerator -= 1
                    if color_numerator == 1:  # skip kBlack (reserved for data)
                        color_numerator = 9
                    file_path = f'{base_path}/{samples_dict[sample][0]}/{region}/{collection}/skimmed_{collection}_{region}'
                    df = ROOT.RDataFrame("tree", f"{file_path}_{samples_dict[sample][1]}")
                    h = 0

                    if main_var in ('ptErrPerPt2', 'ptErrPerPt2_zoom'):
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
                    elif main_var == 'nobj_quality':
                        if collection == 'track':
                            chi2_var, ndof_var, nhits_var = 'track_chi2', 'track_ndof', 'track_numberOfValidHits'
                        elif collection == 'matched_muon':
                            chi2_var, ndof_var, nhits_var = 'muon_fromGenTrack_Chi2', 'muon_fromGenTrack_Ndof', 'muon_fromGenTrack_NumValidHits'
                        else:  # muon
                            chi2_var, ndof_var, nhits_var = 'muon_chi2', 'muon_comb_ndof', 'muon_numberOfValidHits'
                        df2 = df.Define("chi2ndof_vec", f"ROOT::VecOps::Where({ndof_var} != 0, {chi2_var}/{ndof_var}, 999.)")
                        df2 = df2.Define("n_quality", f"(int)Sum(chi2ndof_vec < 35. && {nhits_var} > 7)")
                        h = df2.Histo1D(
                            (f"h_nobj_quality_{sample}", "", nbins, min, max),
                            "n_quality"
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
                        df2 = df2.Define("pt_qual", f"{pt_var}[quality_mask_ptq]")
                        h = df2.Histo1D(
                            (f"h_pt_quality_{sample}", "", nbins, min, max),
                            "pt_qual"
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

                pave = ROOT.TPaveText(0.18, 0.80, 0.32, 0.90, "NDC")
                pave.SetFillColor(0)
                pave.SetBorderSize(0)
                pave.SetTextAlign(12)  # left aligned
                pave.SetTextSize(0.025)
                pave.AddText(f"Collection = {collection}")
                pave.AddText("Signal Depth: 0 mm")
                pave.AddText(presel_steps_arr[num])
                pave.Draw()
                leg.Draw()

                overflow_line = ROOT.TLine(max - bin_width, hframe.GetMinimum(), max - bin_width, hframe.GetMaximum())
                overflow_line.SetLineStyle(2)
                overflow_line.SetLineColor(ROOT.kGray + 2)
                overflow_line.Draw()

                CMS.CMS_lumi(c, iPosX=0, scaleLumi=0)
                c.SaveAs(f"figures/presel_ch_skimmedNtuples/{collection}_{var_dict[main_var][4+num]}.png")
                c.SaveAs(f"figures/presel_ch_skimmedNtuples/{collection}_{var_dict[main_var][4+num]}.pdf")

                del c
                del hframe
                del h
                del histo
        elif main_var in ('pTErrPerPtVsPt', 'ptErrPerPt2VsPt', 'ptErrPerPtVsPt_quality'):
            if main_var == 'ptErrPerPtVsPt_quality' and collection == 'tuneP':
                continue  # tuneP has no chi2/ndof/nhits branches
            num = 2  # nminus1 step index
            nbins = var_dict[main_var][1]
            min = var_dict[main_var][2]
            max = var_dict[main_var][3]

            c = CMS.cmsCanvas('', 0, 1, 0, 1, '', '')
            c.SetLeftMargin(0.2)
            c.SetRightMargin(0.2)

            # define axis ranges
            hframe = ROOT.TH2F("hframe", "", 1230, 200, 12500, nbins, min, max)
            hframe.SetStats(False)
            hframe.GetXaxis().SetTitle('p_{T} [GeV]')
            hframe.GetYaxis().SetTitle(var_dict[main_var][8])
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
            for sample in ["2023D Cosmics", "Cosmic Bkg", "Neutrino Bkg", "M_{DM} = 2 TeV", "M_{DM} = 10 TeV", "M_{DM} = 20 TeV"]:
                print(f"\tSample = {sample}")
                file_path = f'{base_path}/{samples_dict[sample][0]}/{region}/{collection}/skimmed_{collection}_{region}'
                df = ROOT.RDataFrame("tree", f"{file_path}_{samples_dict[sample][1]}")
                h = 0

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

                if main_var == 'ptErrPerPtVsPt_quality':
                    if collection == 'track':
                        chi2_br, ndof_br, nhits_br = 'track_chi2', 'track_ndof', 'track_numberOfValidHits'
                    elif collection == 'matched_muon':
                        chi2_br, ndof_br, nhits_br = 'muon_fromGenTrack_Chi2', 'muon_fromGenTrack_Ndof', 'muon_fromGenTrack_NumValidHits'
                    else:  # muon
                        chi2_br, ndof_br, nhits_br = 'muon_chi2', 'muon_comb_ndof', 'muon_numberOfValidHits'
                    df2 = (df
                    .Define("chi2ndof_2d", f"ROOT::VecOps::Where({ndof_br} != 0, {chi2_br}/{ndof_br}, 999.)")
                    .Define("qmask_2d", f"chi2ndof_2d < 35. && {nhits_br} > 7")
                    .Define("pt_q", f"{pt_branch}[qmask_2d]")
                    .Define("ptErr_q", f"{ptErr_branch}[qmask_2d]")
                    .Define("imax", "pt_q.size()>0 ? int(std::distance(pt_q.begin(), std::max_element(pt_q.begin(), pt_q.end()))) : -1")
                    .Define("pt_max", "imax>=0 ? pt_q[imax] : -999.")
                    .Define("ratio", "imax>=0 && pt_q[imax]>0 ? ptErr_q[imax]/pt_q[imax] : -999.")
                    )
                else:
                    df2 = (df
                    .Define("imax", f"{pt_branch}.size()>0 ? int(std::distance({pt_branch}.begin(), std::max_element({pt_branch}.begin(), {pt_branch}.end()))) : -1")
                    .Define("pt_max", f"imax>=0 ? {pt_branch}[imax] : -999.")
                    .Define("ratio",  f"imax>=0 && {pt_branch}[imax]>0 ? {ptErr_branch}[imax]/{pt_branch}[imax] : -999.")
                    )

                df2 = df2.Filter("imax>=0 && pt_max>0 && ratio>0 && ratio<9000 && std::isfinite(ratio)")
                h = df2.Histo2D(("h2","",1230,200,12500,200,0,10), "pt_max", "ratio")


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

                pave = ROOT.TPaveText(0.25, 0.80, 0.46, 0.90, "NDC")
                pave.SetFillColor(0)
                pave.SetBorderSize(0)
                pave.SetTextAlign(12)  # left aligned
                pave.SetTextSize(0.025)
                pave.AddText(f"collection = {collection}")
                pave.AddText("Depth: 0 mm")
                pave.AddText(presel_steps_arr[num])
                pave.AddText(sample)
                pave.Draw()
                #leg.Draw()

                CMS.CMS_lumi(c, iPosX=0, scaleLumi=0)
                sample_tag = sample.replace("{", "").replace("}", "").replace(" = ", "_").replace(" ", "_").replace("_TeV", "TeV")
                c.SaveAs(f"figures/presel_ch_skimmedNtuples/{collection}_{var_dict[main_var][4+num]}_{sample_tag}.png")
                c.SaveAs(f"figures/presel_ch_skimmedNtuples/{collection}_{var_dict[main_var][4+num]}_{sample_tag}.pdf")

            del c
            del hframe
            del h
            del histo
        else: # For variables with pre-existing histograms, run all available steps
            for num in range(4):
                if var_dict[main_var][4+num] is None:
                    continue
                print(f"Making {var_dict[main_var][4+num]} plot")
                nbins = var_dict[main_var][1]
                min = var_dict[main_var][2]
                max = var_dict[main_var][3]

                c = CMS.cmsCanvas('', 0, 1, 0, 1, '', '')
                c.SetLogy(True)
                c.SetLeftMargin(0.153)
                c.SetRightMargin(0.08)

                print(nbins, "bins")
                # define axis ranges (one extra bin so the overflow line at x=max is visible)
                bin_width = (max - min) / nbins
                hframe = ROOT.TH1F("hframe", "", nbins + 1, min, max + bin_width)
                hframe.SetStats(False)
                hframe.GetXaxis().SetTitle(var_dict[main_var][8])
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
                    print(sample, f"h_{main_var}_{presel_steps_arr[num]}")
                    color_numerator -= 1
                    if color_numerator == 1:  # skip kBlack (reserved for data)
                        color_numerator = 9
                    file_path = f'{base_path}/{samples_dict[sample][0]}/{region}/{collection}/skimmed_{collection}_{region}'
                    f = ROOT.TFile(f"{file_path}_{samples_dict[sample][1]}")
                    h = f.Get(f"h_{main_var}_{presel_steps_arr[num]}")
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

                pave = ROOT.TPaveText(0.18, 0.80, 0.32, 0.90, "NDC")
                pave.SetFillColor(0)
                pave.SetBorderSize(0)
                pave.SetTextAlign(12)
                pave.SetTextSize(0.025)
                pave.AddText(f"collection = {collection}")
                pave.AddText("Depth: 0 mm")
                pave.AddText(presel_steps_arr[num])
                pave.Draw()
                leg.Draw()

                overflow_line = ROOT.TLine(max - bin_width, hframe.GetMinimum(), max - bin_width, hframe.GetMaximum())
                overflow_line.SetLineStyle(2)
                overflow_line.SetLineColor(ROOT.kGray + 2)
                overflow_line.Draw()

                CMS.CMS_lumi(c, iPosX=0, scaleLumi=0)
                c.SaveAs(f"figures/presel_ch_skimmedNtuples/{collection}_{var_dict[main_var][4+num]}.png")
                c.SaveAs(f"figures/presel_ch_skimmedNtuples/{collection}_{var_dict[main_var][4+num]}.pdf")

                del c
                del hframe

        # -----------------------------------------------------------------
        # Profile plot: mean sigma(pT)/pT  vs  pT  for each sample
        # -----------------------------------------------------------------
        print("  Profile: mean sigma(pT)/pT vs pT")
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

        if collection == 'matched_muon':
            prof_pt_branch = 'muon_fromGenTrack_Pt'
            prof_ptErr_branch = 'muon_fromGenTrack_PtErr'
        elif collection == 'tuneP':
            prof_pt_branch = 'muon_tuneP_Pt'
            prof_ptErr_branch = 'muon_tuneP_PtErr'
        elif collection == 'track':
            prof_pt_branch = 'track_pt'
            prof_ptErr_branch = 'track_ptErr'
        else:
            prof_pt_branch = 'muon_pt'
            prof_ptErr_branch = 'muon_ptErr'

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

            df2 = (df
            .Define("pt_argmax", f"{prof_pt_branch}.size()>0 ? int(std::distance({prof_pt_branch}.begin(), std::max_element({prof_pt_branch}.begin(), {prof_pt_branch}.end()))) : -1")
            .Define("pt_max",    f"pt_argmax>=0 ? {prof_pt_branch}[pt_argmax] : -999.")
            .Define("ptErr_abs", f"pt_argmax>=0 ? {prof_ptErr_branch}[pt_argmax] : -999.")
            .Define("ptErr_ratio",
                    "pt_argmax>=0 && pt_max>0 ? ptErr_abs/pt_max : -999.")
            )

            df_valid = df2.Filter(
            "pt_argmax>=0 && pt_max>0"
            " && ptErr_abs>0 && ptErr_abs<9000"
            " && ptErr_ratio>0 && ptErr_ratio<9000"
            " && std::isfinite(ptErr_ratio)"
            )


            prof = df_valid.Profile1D((f"prof_ptErr_{sample}", "", pt_nbins, pt_lo, pt_hi), "pt_max", "ptErr_ratio")
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
        c.SaveAs(f"figures/presel_ch_skimmedNtuples/{collection}_profile_ptErrRatio_vs_pT.png")
        c.SaveAs(f"figures/presel_ch_skimmedNtuples/{collection}_profile_ptErrRatio_vs_pT.pdf")
        del c
        del hframe_prof

        # -----------------------------------------------------------------
        # Quality profile: mean sigma(pT)/pT vs pT for quality objects
        # (chi2/ndof < 35 && nhits > 7)
        # -----------------------------------------------------------------
        if collection != 'tuneP':  # tuneP has no chi2/ndof/nhits branches
            print("  Quality profile: mean sigma(pT)/pT vs pT (quality cuts)")
            pt_lo_q, pt_hi_q, pt_nbins_q = 200, 12500, 123

            c = CMS.cmsCanvas('', 0, 1, 0, 1, '', '')
            c.SetLeftMargin(0.153)
            c.SetRightMargin(0.1)
            c.SetLogy(True)

            hframe_prof_q = ROOT.TH1F("hframe_prof_q", "", pt_nbins_q, pt_lo_q, pt_hi_q)
            hframe_prof_q.SetStats(False)
            hframe_prof_q.GetXaxis().SetTitle("Leading muon p_{T} [GeV] (quality cuts)")
            hframe_prof_q.GetYaxis().SetTitle("Mean #sigma(p_{T}) / p_{T}")
            hframe_prof_q.GetXaxis().SetLabelSize(0.04)
            hframe_prof_q.GetYaxis().SetLabelSize(0.04)
            hframe_prof_q.GetXaxis().SetMaxDigits(3)
            hframe_prof_q.GetXaxis().SetNdivisions(510)
            hframe_prof_q.SetMinimum(1e-2)
            hframe_prof_q.SetMaximum(1e1)
            hframe_prof_q.Draw()

            leg_prof_q = ROOT.TLegend(0.55, 0.72, 0.88, 0.9)
            leg_prof_q.SetBorderSize(0)
            leg_prof_q.SetFillStyle(0)
            leg_prof_q.SetTextFont(42)

            if collection == 'matched_muon':
                prof_pt_br = 'muon_fromGenTrack_Pt'
                prof_ptErr_br = 'muon_fromGenTrack_PtErr'
                prof_chi2_br = 'muon_fromGenTrack_Chi2'
                prof_ndof_br = 'muon_fromGenTrack_Ndof'
                prof_nhits_br = 'muon_fromGenTrack_NumValidHits'
            elif collection == 'track':
                prof_pt_br = 'track_pt'
                prof_ptErr_br = 'track_ptErr'
                prof_chi2_br = 'track_chi2'
                prof_ndof_br = 'track_ndof'
                prof_nhits_br = 'track_numberOfValidHits'
            else:  # muon
                prof_pt_br = 'muon_pt'
                prof_ptErr_br = 'muon_ptErr'
                prof_chi2_br = 'muon_chi2'
                prof_ndof_br = 'muon_comb_ndof'
                prof_nhits_br = 'muon_numberOfValidHits'

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

                df2 = (df
                .Define("chi2ndof_prof", f"ROOT::VecOps::Where({prof_ndof_br} != 0, {prof_chi2_br}/{prof_ndof_br}, 999.)")
                .Define("qmask_prof", f"chi2ndof_prof < 35. && {prof_nhits_br} > 7")
                .Define("pt_q", f"{prof_pt_br}[qmask_prof]")
                .Define("ptErr_q", f"{prof_ptErr_br}[qmask_prof]")
                .Define("pt_argmax_q", "pt_q.size()>0 ? int(std::distance(pt_q.begin(), std::max_element(pt_q.begin(), pt_q.end()))) : -1")
                .Define("pt_max_q", "pt_argmax_q>=0 ? pt_q[pt_argmax_q] : -999.")
                .Define("ptErr_abs_q", "pt_argmax_q>=0 ? ptErr_q[pt_argmax_q] : -999.")
                .Define("ptErr_ratio_q", "pt_argmax_q>=0 && pt_max_q>0 ? ptErr_abs_q/pt_max_q : -999.")
                )

                df_valid = df2.Filter(
                "pt_argmax_q>=0 && pt_max_q>0"
                " && ptErr_abs_q>0 && ptErr_abs_q<9000"
                " && ptErr_ratio_q>0 && ptErr_ratio_q<9000"
                " && std::isfinite(ptErr_ratio_q)"
                )

                prof = df_valid.Profile1D((f"prof_ptErr_quality_{sample}", "", pt_nbins_q, pt_lo_q, pt_hi_q), "pt_max_q", "ptErr_ratio_q")
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
                    leg_prof_q.AddEntry(p, sample, "p")
                elif is_cosmic_bkg:
                    p.SetMarkerStyle(0)
                    p.Draw("HIST SAME")
                    leg_prof_q.AddEntry(p, sample, "f")
                else:
                    p.SetMarkerStyle(0)
                    p.Draw("HIST SAME")
                    leg_prof_q.AddEntry(p, sample, "l")

            pave = ROOT.TPaveText(0.18, 0.82, 0.42, 0.90, "NDC")
            pave.SetFillColor(0)
            pave.SetBorderSize(0)
            pave.SetTextAlign(12)
            pave.SetTextSize(0.025)
            pave.AddText(f"collection = {collection}")
            pave.AddText("quality cuts")
            pave.Draw()
            leg_prof_q.Draw()

            CMS.CMS_lumi(c, iPosX=0, scaleLumi=0)
            c.SaveAs(f"figures/presel_ch_skimmedNtuples/{collection}_profile_ptErrRatio_vs_pT_quality.png")
            c.SaveAs(f"figures/presel_ch_skimmedNtuples/{collection}_profile_ptErrRatio_vs_pT_quality.pdf")
            del c
            del hframe_prof_q

        # -----------------------------------------------------------------
        # Profile plot: mean sigma(pT)/pT^2  vs  pT  for each sample
        # -----------------------------------------------------------------
        print("  Profile: mean sigma(pT)/pT^2 vs pT")
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

        if collection == 'matched_muon':
            prof_pt_branch2 = 'muon_fromGenTrack_Pt'
            prof_ptErr_branch2 = 'muon_fromGenTrack_PtErr'
        elif collection == 'tuneP':
            prof_pt_branch2 = 'muon_tuneP_Pt'
            prof_ptErr_branch2 = 'muon_tuneP_PtErr'
        elif collection == 'track':
            prof_pt_branch2 = 'track_pt'
            prof_ptErr_branch2 = 'track_ptErr'
        else:
            prof_pt_branch2 = 'muon_pt'
            prof_ptErr_branch2 = 'muon_ptErr'

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

            df2 = (df
            .Define("pt_argmax2", f"{prof_pt_branch2}.size()>0 ? int(std::distance({prof_pt_branch2}.begin(), std::max_element({prof_pt_branch2}.begin(), {prof_pt_branch2}.end()))) : -1")
            .Define("pt_max2",    f"pt_argmax2>=0 ? {prof_pt_branch2}[pt_argmax2] : -999.")
            .Define("ptErr_abs2", f"pt_argmax2>=0 ? {prof_ptErr_branch2}[pt_argmax2] : -999.")
            .Define("ptErr_ratio2",
                    "pt_argmax2>=0 && pt_max2>0 ? ptErr_abs2/(pt_max2*pt_max2) : -999.")
            )

            df_valid = df2.Filter(
            "pt_argmax2>=0 && pt_max2>0"
            " && ptErr_abs2>0 && ptErr_abs2<9000"
            " && ptErr_ratio2>0 && ptErr_ratio2<9000"
            " && std::isfinite(ptErr_ratio2)"
            )

            prof = df_valid.Profile1D((f"prof_ptErrPerPt2_{sample}", "", pt_nbins2, pt_lo2, pt_hi2), "pt_max2", "ptErr_ratio2")
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
        c.SaveAs(f"figures/presel_ch_skimmedNtuples/{collection}_profile_ptErrPerPt2_vs_pT.png")
        c.SaveAs(f"figures/presel_ch_skimmedNtuples/{collection}_profile_ptErrPerPt2_vs_pT.pdf")
        del c
        del hframe_prof2

        # -----------------------------------------------------------------
        # Quality profile: mean sigma(pT)/pT^2 vs pT for quality objects
        # (chi2/ndof < 35 && nhits > 7)
        # -----------------------------------------------------------------
        if collection != 'tuneP':
            print("  Quality profile: mean sigma(pT)/pT^2 vs pT (quality cuts)")
            pt_lo2q, pt_hi2q, pt_nbins2q = 200, 12500, 123

            c = CMS.cmsCanvas('', 0, 1, 0, 1, '', '')
            c.SetLeftMargin(0.153)
            c.SetRightMargin(0.1)
            c.SetLogy(True)

            hframe_prof2q = ROOT.TH1F("hframe_prof2q", "", pt_nbins2q, pt_lo2q, pt_hi2q)
            hframe_prof2q.SetStats(False)
            hframe_prof2q.GetXaxis().SetTitle("Leading muon p_{T} [GeV] (quality cuts)")
            hframe_prof2q.GetYaxis().SetTitle("Mean #sigma(p_{T}) / p_{T}^{2} [GeV^{-1}]")
            hframe_prof2q.GetXaxis().SetLabelSize(0.04)
            hframe_prof2q.GetYaxis().SetLabelSize(0.04)
            hframe_prof2q.GetXaxis().SetMaxDigits(3)
            hframe_prof2q.GetXaxis().SetNdivisions(510)
            hframe_prof2q.SetMinimum(1e-6)
            hframe_prof2q.SetMaximum(1e-1)
            hframe_prof2q.Draw()

            leg_prof2q = ROOT.TLegend(0.55, 0.72, 0.88, 0.9)
            leg_prof2q.SetBorderSize(0)
            leg_prof2q.SetFillStyle(0)
            leg_prof2q.SetTextFont(42)

            if collection == 'matched_muon':
                prof_pt_br2 = 'muon_fromGenTrack_Pt'
                prof_ptErr_br2 = 'muon_fromGenTrack_PtErr'
                prof_chi2_br2 = 'muon_fromGenTrack_Chi2'
                prof_ndof_br2 = 'muon_fromGenTrack_Ndof'
                prof_nhits_br2 = 'muon_fromGenTrack_NumValidHits'
            elif collection == 'track':
                prof_pt_br2 = 'track_pt'
                prof_ptErr_br2 = 'track_ptErr'
                prof_chi2_br2 = 'track_chi2'
                prof_ndof_br2 = 'track_ndof'
                prof_nhits_br2 = 'track_numberOfValidHits'
            else:  # muon
                prof_pt_br2 = 'muon_pt'
                prof_ptErr_br2 = 'muon_ptErr'
                prof_chi2_br2 = 'muon_chi2'
                prof_ndof_br2 = 'muon_comb_ndof'
                prof_nhits_br2 = 'muon_numberOfValidHits'

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

                df2 = (df
                .Define("chi2ndof_prof2", f"ROOT::VecOps::Where({prof_ndof_br2} != 0, {prof_chi2_br2}/{prof_ndof_br2}, 999.)")
                .Define("qmask_prof2", f"chi2ndof_prof2 < 35. && {prof_nhits_br2} > 7")
                .Define("pt_q2", f"{prof_pt_br2}[qmask_prof2]")
                .Define("ptErr_q2", f"{prof_ptErr_br2}[qmask_prof2]")
                .Define("pt_argmax_q2", "pt_q2.size()>0 ? int(std::distance(pt_q2.begin(), std::max_element(pt_q2.begin(), pt_q2.end()))) : -1")
                .Define("pt_max_q2", "pt_argmax_q2>=0 ? pt_q2[pt_argmax_q2] : -999.")
                .Define("ptErr_abs_q2", "pt_argmax_q2>=0 ? ptErr_q2[pt_argmax_q2] : -999.")
                .Define("ptErr_ratio_q2", "pt_argmax_q2>=0 && pt_max_q2>0 ? ptErr_abs_q2/(pt_max_q2*pt_max_q2) : -999.")
                )

                df_valid = df2.Filter(
                "pt_argmax_q2>=0 && pt_max_q2>0"
                " && ptErr_abs_q2>0 && ptErr_abs_q2<9000"
                " && ptErr_ratio_q2>0 && ptErr_ratio_q2<9000"
                " && std::isfinite(ptErr_ratio_q2)"
                )

                prof = df_valid.Profile1D((f"prof_ptErrPerPt2_quality_{sample}", "", pt_nbins2q, pt_lo2q, pt_hi2q), "pt_max_q2", "ptErr_ratio_q2")
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
                    leg_prof2q.AddEntry(p, sample, "p")
                elif is_cosmic_bkg:
                    p.SetMarkerStyle(0)
                    p.Draw("HIST SAME")
                    leg_prof2q.AddEntry(p, sample, "f")
                else:
                    p.SetMarkerStyle(0)
                    p.Draw("HIST SAME")
                    leg_prof2q.AddEntry(p, sample, "l")

            pave = ROOT.TPaveText(0.18, 0.82, 0.42, 0.90, "NDC")
            pave.SetFillColor(0)
            pave.SetBorderSize(0)
            pave.SetTextAlign(12)
            pave.SetTextSize(0.025)
            pave.AddText(f"collection = {collection}")
            pave.AddText("quality cuts")
            pave.Draw()
            leg_prof2q.Draw()

            CMS.CMS_lumi(c, iPosX=0, scaleLumi=0)
            c.SaveAs(f"figures/presel_ch_skimmedNtuples/{collection}_profile_ptErrPerPt2_vs_pT_quality.png")
            c.SaveAs(f"figures/presel_ch_skimmedNtuples/{collection}_profile_ptErrPerPt2_vs_pT_quality.pdf")
            del c
            del hframe_prof2q

        garbage_protect_list.clear()

print("Done!")
