import os
import ROOT, cmsstyle as CMS
import mplhep as hep

ROOT.gROOT.SetBatch(True)
ROOT.gErrorIgnoreLevel = ROOT.kWarning
CMS.SetExtraText("Internal")
#CMS.SetLumi(None)
#CMS.SetEnergy(13.1, unit = '')

base_path = '/home/users/tvami/EarthAsDM/Ntuples_v3.0.2'
collection = 'muon' # matched_muon  muon  track  tuneP
region = 'sr' # sr vr

samples_dict = {"Cosmic Bkg": ["BkgMC", "CosmicToMu_Par-MinP-4-MaxP-3000-MinTheta-0-MaxTheta-75_cosmuogen.root"], 
                "Neutrino Bkg": ["BkgMC", "CosmicToMu_Par-MinP-10-MaxP-10000-MinTheta-91-MaxTheta-179_cosmuogen.root"], 
                "M_{DM} = 2 TeV": ["Signal", "CosmicToMu_Par-MinP-1000-MinTheta-91-MaxTheta-179_cosmuogen.root"], 
                "M_{DM} = 10 TeV": ["Signal", "CosmicToMu_Par-MinP-5000-MinTheta-91-MaxTheta-179_cosmuogen.root"], 
                "M_{DM} = 20 TeV": ["Signal", "CosmicToMu_Par-MinP-10000-MinTheta-91-MaxTheta-179_cosmuogen.root"],
                "2023D Cosmics": ["Data", "Ntuplizer-Cosmics_Run2023D-CosmicTP-PromptReco-v2_v3.root"]
                }

var_dict = {"eta": [0, 25, -2.5, 2.5, 'eta_trigger', 'eta_nminus1', 'eta_final', '#eta'], 
            "pt": [1, 25, 0, 5000, 'pt_trigger', 'pt_nminus1', 'pT_final', 'p_{T} [GeV]'], 
            "ntrack": [2, 20, 0, 20, 'ntrack_trigger', 'ntrack_nminus1', 'ntrack_final', 'n_{Tracks}'], 
            "nseg": [3, 20, 0, 20, 'nseg_trigger', 'nseg_nminus1', 'nseg_final', 'n_{Seg}'],
            "ptErr": [4, 100, 0, 0.01, 'ptErr', 'ptErr_nminus1', 'ptErr_final', 'p_{T} Error / p_{T}^{2} [GeV^{-1}]'],
            "ptErr_2D": [5, 401, 0, 4.01, 'ptErr_2D', 'ptErr_2D_nminus1', 'ptErr_2D_final', '#sigma_{p_{T}} / p_{T}'],
            }

track_var_dict={"track_numberOfValidHits": [6, 77, 0, 77, 'track_numberOfValidHits', 'track_numberOfValidHits_nminus1', 'track_numberOfValidHits_final', '# of Valid Track Hits'],
                "track_validFraction": [7, 110, 0, 1.1, 'track_validFraction_trigger', 'track_validFraction_nminus1', 'track_validFraction_final', 'Track Valid Fraction'],
                "track_chi2": [8, 99, 1, 100, 'track_chi2', 'track_chi2_nminus1', 'track_chi2_final', '#chi^{2}/n_{DoF}'],
                }

muon_var_dict={"muon_comb_ndof": [6, 100, 0, 100, 'muon_comb_ndof', 'muon_comb_ndof_nminus1', 'muon_comb_ndof_final', 'Combined n_{DoF}'],
               "muon_trkIso": [7, 100, 0, 10, 'muon_trkIso', 'muon_trkIso_nminus1', 'muon_trkIso_final', 'Track Isolation [GeV]'],
               "muon_d0": [8, 200, -200, 200, 'muon_d0', 'muon_d0_nminus1', 'muon_d0_final', 'd_{0} [cm]'],
               "muon_dZ": [9, 200, -500, 500, 'muon_dZ', 'muon_dZ_nminus1', 'muon_dZ_final', 'd_{Z} [cm]'],
               "muon_validFractionTrackerHits": [10, 110, 0, 1.1, 'muon_validFractionTrackerHits', 'muon_validFractionTrackerHits_nminus1', 'muon_validFractionTrackerHits_final', 'Valid Fraction Tracker Hits'],
            #    "muon_numberOfValidHits": [11, 80, 0, 80, 'muon_numberOfValidHits', 'muon_numberOfValidHits_nminus1', 'muon_numberOfValidHits_final', '# of Valid Hits'],
               "muon_isLoose": [12, 2, 0, 2, 'muon_isLoose', 'muon_isLoose_nminus1', 'muon_isLoose_final', 'isLoose'],
               "muon_isMedium": [13, 2, 0, 2, 'muon_isMedium', 'muon_isMedium_nminus1', 'muon_isMedium_final', 'isMedium'],
               "muon_isTight": [14, 2, 0, 2, 'muon_isTight', 'muon_isTight_nminus1', 'muon_isTight_final', 'isTight'],
               "muon_isTrackerHighPtMuon": [15, 2, 0, 2, 'muon_isTrackerHighPtMuon', 'muon_isTrackerHighPtMuon_nminus1', 'muon_isTrackerHighPtMuon_final', 'isTrackerHighPt'],
               "muon_isHighPtMuon": [16, 2, 0, 2, 'muon_isHighPtMuon', 'muon_isHighPtMuon_nminus1', 'muon_isHighPtMuon_final', 'isHighPt'],
               "muon_type": [17, 32, 0, 32, 'muon_type', 'muon_type_nminus1', 'muon_type_final', 'Muon Type'],
               "muon_quality": [18, 16, 0, 16, 'muon_quality', 'muon_quality_nminus1', 'muon_quality_final', 'Muon Quality'],
               }

if collection == 'track': var_dict.update(track_var_dict)
if collection == 'muon': var_dict.update(muon_var_dict)

presel_steps_arr = ["trigger", "nminus1", "final"]

garbage_protect_list = []

os.makedirs(f"figures/presel_ch_skimmedNtuples/{collection}", exist_ok=True)

print("Starting!")
for main_var in list(var_dict.keys()):
    print(f"Making {main_var} plots")
    if main_var[:5] == 'track' or main_var.startswith('muon_') or main_var == 'ptErr': # For variables that aren't current preselection variables, only run nmin1 step
        for num in range(1, 2):
            print(f"Making {var_dict[main_var][4+num]} plot")
            nbins = var_dict[main_var][1]
            min = var_dict[main_var][2]
            max = var_dict[main_var][3]

            c = CMS.cmsCanvas('', 0, 1, 0, 1, '', '')
            c.SetLogy(True)
            c.SetLeftMargin(0.153)
            c.SetRightMargin(0.1)

            # define axis ranges
            hframe = ROOT.TH1F("hframe", "", nbins, min, max)
            hframe.SetStats(False)
            hframe.GetXaxis().SetTitle(var_dict[main_var][7])
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
                file_path = f'{base_path}/{samples_dict[sample][0]}/{region}/{collection}/skimmed_{collection}_{region}'
                df = ROOT.RDataFrame("tree", f"{file_path}_{samples_dict[sample][1]}")
                h = 0
                
                if main_var == 'track_chi2':
                    df2 = df.Define( "ratio", "ROOT::VecOps::Where(track_ndof != 0, track_chi2/track_ndof, -1.)" )
                    h = df2.Histo1D(
                        (f"h_ratio_{sample}", "", nbins, min, max),
                        "ratio"
                    )
                elif main_var == 'ptErr':
                    if collection == 'matched_muon': 
                        coll_tmp = 'muon_fromGenTrack'
                        main_var_tmp = 'PtErr'
                    elif collection == 'tuneP':
                        coll_tmp = 'muon_tuneP'
                        main_var_tmp = 'PtErr'
                    else: 
                        coll_tmp = collection
                        main_var_tmp = main_var
                    df2 = df.Define( "ratio", f"{coll_tmp}_{main_var_tmp}/({coll_tmp}_{main_var_tmp[:2]}*{coll_tmp}_{main_var_tmp[:2]})" )
                    h = df2.Histo1D(
                        (f"h_ratio_{sample}", "", nbins, min, max),
                        "ratio"
                    )
                else:
                    h = df.Histo1D(
                        (f"h_{main_var}_{sample}", "", nbins, min, max),  # (name, title, nbins, xmin, xmax)
                        main_var               # column of type RVec<int>
                    )
                garbage_protect_list.append(h)
                histo = h.GetValue()
                histo.SetDirectory(0)
                if histo.Integral() > 0:
                    histo.Scale(1/histo.Integral())
                is_data = samples_dict[sample][0] == "Data"
                histo.SetLineColor(ROOT.kBlack if is_data else color_numerator)
                histo.SetMarkerColor(ROOT.kBlack if is_data else color_numerator)
                histo.SetMarkerStyle(20)
                histo.SetMarkerSize(0.6 if is_data else 1.0)
                histo.SetLineWidth(1)
                if is_data:
                    histo.Draw("P SAME")
                    leg.AddEntry(histo, sample, "p")
                else:
                    histo.Draw("HIST SAME")
                    leg.AddEntry(histo, sample, "l")
            
            pave = ROOT.TPaveText(0.18, 0.80, 0.32, 0.90, "NDC")
            pave.SetFillColor(0)
            pave.SetBorderSize(0)
            pave.SetTextAlign(12)  # left aligned
            pave.SetTextSize(0.025)
            pave.AddText(f"collection = {collection}")
            pave.AddText("Depth: 0 mm")
            pave.AddText(presel_steps_arr[num])
            pave.Draw()
            leg.Draw()
            
            CMS.CMS_lumi(c, iPosX=0, scaleLumi=0)
            c.SaveAs(f"figures/presel_ch_skimmedNtuples/{collection}/{var_dict[main_var][4+num]}.png")
            c.SaveAs(f"figures/presel_ch_skimmedNtuples/{collection}/{var_dict[main_var][4+num]}.pdf")

            del c
            del hframe
            del h
            del histo
    elif main_var == 'ptErr_2D':
        print(f"Making {var_dict[main_var][4+num]} plot")
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
        for sample in ["2023D Cosmics"]:
            print(sample)
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
            
            df2 = df.Define( "ratio", f"ROOT::VecOps::Where(({coll_tmp}_{main_var_tmp}/{coll_tmp}_{main_var_tmp[:2]})<3.99, {coll_tmp}_{main_var_tmp}/{coll_tmp}_{main_var_tmp[:2]}, 3.99)" )
            h = df2.Histo2D(
                (f"h_ratio_{sample}", "", 1230, 200, 12500, nbins, min, max),
                f"{coll_tmp}_{pT_tmp}", "ratio"
            )
            
            garbage_protect_list.append(h)
            histo = h.GetValue()
            histo.SetDirectory(0)
            #histo.Scale(1/histo.Integral())
            #histo.SetLineColor(color_numerator)
            #histo.SetMarkerColor(color_numerator)
            #histo.SetMarkerStyle(20)
            #histo.SetLineWidth(1)
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
        pave.AddText("2023D Cosmics")
        pave.Draw()
        #leg.Draw()
        
        CMS.CMS_lumi(c, iPosX=0, scaleLumi=0)
        c.SaveAs(f"figures/presel_ch_skimmedNtuples/{collection}/{var_dict[main_var][4+num]}.png")
        c.SaveAs(f"figures/presel_ch_skimmedNtuples/{collection}/{var_dict[main_var][4+num]}.pdf")

        del c
        del hframe
        del h
        del histo
    else: # For variables that aren't current preselection variables, run trigger, nminus1, and final steps
        for num in range(3):
            print(f"Making {var_dict[main_var][4+num]} plot")
            nbins = var_dict[main_var][1]
            min = var_dict[main_var][2]
            max = var_dict[main_var][3]

            c = CMS.cmsCanvas('', 0, 1, 0, 1, '', '')
            c.SetLogy(True)
            c.SetLeftMargin(0.153)
            c.SetRightMargin(0.08)

            print(nbins, "bins")
            # define axis ranges
            hframe = ROOT.TH1F("hframe", "", nbins, min, max)
            hframe.SetStats(False)
            hframe.GetXaxis().SetTitle(var_dict[main_var][7])
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
                file_path = f'{base_path}/{samples_dict[sample][0]}/{region}/{collection}/skimmed_{collection}_{region}'
                f = ROOT.TFile(f"{file_path}_{samples_dict[sample][1]}")
                h = f.Get(f"h_{main_var}_{presel_steps_arr[num]}")
                h.SetDirectory(0)
                f.Close()
                if h.Integral() > 0:
                    h.Scale(1/h.Integral())
                is_data = samples_dict[sample][0] == "Data"
                h.SetLineColor(ROOT.kBlack if is_data else color_numerator)
                h.SetMarkerColor(ROOT.kBlack if is_data else color_numerator)
                h.SetMarkerStyle(20 if is_data else 8)
                h.SetMarkerSize(0.6 if is_data else 1.0)
                h.SetLineWidth(1)
                if is_data:
                    h.Draw("P SAME")
                    leg.AddEntry(h, sample, "p")
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

            CMS.CMS_lumi(c, iPosX=0, scaleLumi=0)
            c.SaveAs(f"figures/presel_ch_skimmedNtuples/{collection}/{var_dict[main_var][4+num]}.png")
            c.SaveAs(f"figures/presel_ch_skimmedNtuples/{collection}/{var_dict[main_var][4+num]}.pdf")

            del c
            del hframe