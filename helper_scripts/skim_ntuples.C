/// Skim ntuples using RDataFrame, applying cuts sequentially and saving a cutflow histogram
/// Usage:
///       root -l -b -q 'skim_ntuples.C("track", "/path/to/files/")'

void skim_ntuples(TString object = "track", TString base_dir = "/ceph/cms/store/user/tvami/EarthAsDM/Cosmics/crab_Ntuplizer-Cosmics_Run2023D-CosmicTP-PromptReco-v1_v3/") {
    
    // Enable multi-threading (use all available cores)
    ROOT::EnableImplicitMT();
    
    // Configuration
    // Extract the last directory name from base_dir path
    TString base_dir_copy = base_dir;
    if (base_dir_copy.EndsWith("/")) base_dir_copy.Remove(base_dir_copy.Length()-1);
    TString dataset_name = base_dir_copy(base_dir_copy.Last('/')+1, base_dir_copy.Length());
    dataset_name.ReplaceAll("crab_", "");
    TString output_file = TString::Format("skimmed_%s_%s.root", object.Data(), dataset_name.Data());
    
    // Set variable names based on object
    TString pt_var, eta_var, phi_var, n_var;
    if (object == "track") {
        pt_var = "track_pt";
        eta_var = "track_eta";
        phi_var = "track_phi";
        n_var = "track_n";
    } else if (object == "muon") {
        pt_var = "muon_pt";
        eta_var = "muon_eta";
        phi_var = "muon_phi";
        n_var = "muon_n";
    } else if (object == "tuneP") {
        pt_var = "muon_tuneP_Pt";
        eta_var = "muon_tuneP_Eta";
        phi_var = "muon_tuneP_Phi";
        n_var = "muon_n";

    } else if (object == "matched_muon") {
        pt_var = "muon_fromGenTrack_Pt";
        eta_var = "muon_fromGenTrack_Eta";
        phi_var = "muon_fromGenTrack_Phi";
        n_var = "muon_n"; 
    }
    
    std::cout << "Running with object: " << object << std::endl;
    std::cout << "Using variables: " << pt_var << ", " << eta_var << ", " << phi_var << ", " << n_var << std::endl;

    // Create TChain to handle directory structure
    TChain chain("muonPhiAnalyzer/tree");
    
    // Use find to get all .root files
    TString find_cmd = TString::Format("find %s -name '*.root' 2>/dev/null", base_dir.Data());
    FILE* pipe = popen(find_cmd.Data(), "r");
    if (!pipe) {
        std::cerr << "Error: cannot run find command\n";
        return;
    }
    
    char buffer[2048];
    int nfiles = 0;
    while (fgets(buffer, sizeof(buffer), pipe) != NULL) {
        TString filename = buffer;
        filename.ReplaceAll("\n", "");
        if (filename.Length() > 0) {
            chain.Add(filename.Data());
            nfiles++;
        }
    }
    pclose(pipe);
    
    // Check if any files were found
    if (nfiles == 0) {
        std::cerr << "Error: No ROOT files found in the specified directory.\n";
        return;
    }

    // Check number of entries in the chain
    std::cout << "Found " << nfiles << " files with " << chain.GetEntries() << " entries\n";
    
    // Create RDataFrame from TChain
    ROOT::RDataFrame df(chain);
    
    // Define new columns for convenience
    TString pt_max_expr = TString::Format("%s.size() > 0 ? *std::max_element(%s.begin(), %s.end()) : -999.0", 
                                          pt_var.Data(), pt_var.Data(), pt_var.Data());
    TString pt_argmax_expr = TString::Format("%s.size() > 0 ? std::distance(%s.begin(), std::max_element(%s.begin(), %s.end())) : -1",
                                             pt_var.Data(), pt_var.Data(), pt_var.Data(), pt_var.Data());
    TString eta_at_max_pt_expr = TString::Format("pt_argmax >= 0 ? %s[pt_argmax] : 999.0", eta_var.Data());
    
    auto df2 = df
        .Define("pt_max", pt_max_expr.Data())
        .Define("pt_argmax", pt_argmax_expr.Data())
        .Define("eta_at_max_pt", eta_at_max_pt_expr.Data());
    
    // Apply cuts sequentially for monitoring
    auto df_trigger = df2.Filter("HLT_L1SingleMuCosmics", "Trigger");
    auto df_track = df_trigger.Filter(TString::Format("%s > 0", n_var.Data()).Data(), "Has track/muon");
    auto df_eta = df_track.Filter("abs(eta_at_max_pt) < 0.9", "|eta| < 0.9");
    auto df_pt = df_eta.Filter("pt_max > 200.0", "pT > 200 GeV");
    
    // Count valid segments directly in the filter
    auto count_valid_segs = [](ROOT::VecOps::RVec<float> times) {
        int count = 0;
        for (auto t : times) {
            if (t > -998 && t < 9998) count++;
        }
        return count;
    };
    auto df_with_count = df_pt.Define("muon_dtSeg_valid_n", count_valid_segs, {"muon_dtSeg_t0timing"});
    auto df_seg = df_with_count.Filter("muon_dtSeg_valid_n > 2", "nSeg > 2");
    
    // Define branches to keep (drop all others) based on object
    std::vector<std::string> branches_to_keep = {
        "run",
        "ls",
        "event",
        "HLT_L1SingleMuCosmics",
        "muon_dtSeg_n",
        "muon_dtSeg_t0timing",
        "muon_dtSeg_globX",
        "muon_dtSeg_globY",
        "muon_dtSeg_globZ"
    };
    
    if (object == "track") {
        branches_to_keep.insert(branches_to_keep.end(), {
            "track_n",
            "track_pt",
            "track_eta",
            "track_phi",
            "track_chi2",
            "track_ndof",
            "track_numberOfValidHits",
            "track_validFraction"
        });
    } else if (object == "muon") {
        branches_to_keep.insert(branches_to_keep.end(), {
            "muon_n",
            "muon_pt",
            "muon_eta",
            "muon_phi",
            "muon_energy",
            "muon_chi2",
            "muon_comb_ndof"
        });
    } else if (object == "matched_muon") {
        branches_to_keep.insert(branches_to_keep.end(), {
            "muon_n",
            "muon_hasMatchedGenTrack",
            "muon_fromGenTrack_Pt",
            "muon_fromGenTrack_PtErr",
            "muon_fromGenTrack_Eta",
            "muon_fromGenTrack_Phi",
            "muon_fromGenTrack_Chi2",
            "muon_fromGenTrack_Ndof",
            "muon_fromGenTrack_Charge",
            "muon_fromGenTrack_NumValidHits",
            "muon_fromGenTrack_ValidFraction"
        });    
    } else if (object == "tuneP") {
        branches_to_keep.insert(branches_to_keep.end(), {
            "muon_n",
            "muon_tuneP_Pt",
            "muon_tuneP_PtErr",
            "muon_tuneP_Eta",
            "muon_tuneP_Phi",
            "muon_tuneP_MuonBestTrackType"
        });    
    } // end of branch selection
    
    std::cout << "\nStarting processing\n";
    
    // Define count actions BEFORE Snapshot so they run in the same event loop
    auto count_all = df.Count();
    auto count_trigger = df_trigger.Count();
    auto count_track = df_track.Count();
    auto count_eta = df_eta.Count();
    auto count_pt = df_pt.Count();
    auto count_seg = df_seg.Count();
    
    // Define histograms at different stages
    // 1. After trigger
    auto h_eta_trigger = df_trigger.Histo1D({"h_eta_trigger", "Track #eta after trigger;#eta;Events",100, -3, 3}, "eta_at_max_pt");
    auto h_pt_trigger = df_trigger.Histo1D({"h_pt_trigger", "Track p_{T} after trigger;p_{T} [GeV];Events", 50, 0, 500}, "pt_max");
    auto h_ntrack_trigger = df_trigger.Histo1D({"h_ntrack_trigger", "Number of tracks after trigger;N_{tracks};Events", 20, 0, 20}, n_var.Data());
    auto df_trigger_withcount = df_trigger.Define("muon_dtSeg_valid_n_trigger", count_valid_segs, {"muon_dtSeg_t0timing"});
    auto h_nseg_trigger = df_trigger_withcount.Histo1D({"h_nseg_trigger", "DT segments after trigger;nSeg;Events", 20, 0, 20}, "muon_dtSeg_valid_n_trigger");
    
    // 2. N-1 cuts for each variable
    // N-1 for track_n: apply trigger, eta, pT, nSeg (skip track_n)
    auto df_nminus1_ntrack = df_trigger.Filter("abs(eta_at_max_pt) < 0.9", "|eta| < 0.9")
                                        .Filter("pt_max > 200.0", "pT > 200 GeV");
    auto df_nminus1_ntrack_withcount = df_nminus1_ntrack.Define("muon_dtSeg_valid_n_ntrack", count_valid_segs, {"muon_dtSeg_t0timing"});
    auto df_nminus1_ntrack_final = df_nminus1_ntrack_withcount.Filter("muon_dtSeg_valid_n_ntrack > 2", "nSeg > 2");
    auto h_ntrack_nminus1 = df_nminus1_ntrack_final.Histo1D({"h_ntrack_nminus1", "Number of tracks N-1 cut (no track_n cut);N_{tracks};Events", 20, 0, 20}, n_var.Data());
    
    // N-1 for eta: apply trigger, track_n, pT, nSeg (skip eta)
    auto df_nminus1_eta = df_track.Filter("pt_max > 200.0", "pT > 200 GeV");
    auto df_nminus1_eta_withcount = df_nminus1_eta.Define("muon_dtSeg_valid_n", count_valid_segs, {"muon_dtSeg_t0timing"});
    auto df_nminus1_eta_final = df_nminus1_eta_withcount.Filter("muon_dtSeg_valid_n > 2", "nSeg > 2");
    auto h_eta_nminus1 = df_nminus1_eta_final.Histo1D({"h_eta_nminus1", "Track #eta N-1 cut (no #eta cut);#eta;Events",100, -3, 3}, "eta_at_max_pt");
    
    // N-1 for pT: apply trigger, track_n, eta, nSeg (skip pT)
    auto df_nminus1_pt_withcount = df_eta.Define("muon_dtSeg_valid_n_pt", count_valid_segs, {"muon_dtSeg_t0timing"});
    auto df_nminus1_pt_final = df_nminus1_pt_withcount.Filter("muon_dtSeg_valid_n_pt > 2", "nSeg > 2");
    auto h_pt_nminus1 = df_nminus1_pt_final.Histo1D({"h_pt_nminus1", "Track p_{T} N-1 cut (no p_{T} cut);p_{T} [GeV];Events", 50, 0, 500}, "pt_max");
    
    // N-1 for nSeg: apply trigger, track_n, eta, pT (skip nSeg)
    auto df_nminus1_nseg = df_pt.Define("muon_dtSeg_valid_n_nseg", count_valid_segs, {"muon_dtSeg_t0timing"});
    auto h_nseg_nminus1 = df_nminus1_nseg.Histo1D({"h_nseg_nminus1", "DT segments N-1 cut (no nSeg cut);nSeg;Events", 20, 0, 20}, "muon_dtSeg_valid_n_nseg");
    
    // 3. After all cuts
    auto h_eta_final = df_seg.Histo1D({"h_eta_final", "Track #eta after all cuts;#eta;Events",100, -3, 3}, "eta_at_max_pt");
    auto h_pt_final = df_seg.Histo1D({"h_pt_final", "Track p_{T} after all cuts;p_{T} [GeV];Events", 50, 0, 500}, "pt_max");
    auto h_ntrack_final = df_seg.Histo1D({"h_ntrack_final", "Number of tracks after all cuts;N_{tracks};Events", 20, 0, 20}, n_var.Data());
    auto h_nseg_final = df_seg.Histo1D({"h_nseg_final", "DT segments after all cuts;nSeg;Events", 20, 0, 20}, "muon_dtSeg_valid_n");
    
    // Write output (Snapshot triggers the event loop for all actions)
    df_seg.Snapshot("tree", output_file.Data(), branches_to_keep);
    
    // auto report = df_seg.Report();
    // report->Print();
    
    // Create and save cutflow histogram using the already-computed counts
    TFile* f = TFile::Open(output_file.Data(), "UPDATE");
    TH1F* h_cutflow = new TH1F("h_cutflow", "Cutflow Cumulative Yields;Cut;Cumulative Yields", 6, 0, 6);
    h_cutflow->GetXaxis()->SetBinLabel(1, "All events");
    h_cutflow->GetXaxis()->SetBinLabel(2, "Trigger");
    h_cutflow->GetXaxis()->SetBinLabel(3, "Has track");
    h_cutflow->GetXaxis()->SetBinLabel(4, "|eta| < 0.9");
    h_cutflow->GetXaxis()->SetBinLabel(5, "pT > 200 GeV");
    h_cutflow->GetXaxis()->SetBinLabel(6, "nSeg > 2");
    
    // Calculate cumulative cutflow from pre-computed counts
    double n_total = *count_all;
    h_cutflow->SetBinContent(1, n_total);
    h_cutflow->SetBinContent(2, *count_trigger);
    h_cutflow->SetBinContent(3, *count_track);
    h_cutflow->SetBinContent(4, *count_eta);
    h_cutflow->SetBinContent(5, *count_pt);
    h_cutflow->SetBinContent(6, *count_seg);
    
    h_cutflow->SetMinimum(0);
    h_cutflow->SetMaximum(1.1*n_total);
    h_cutflow->Write();
    
    // Write distribution histograms
    std::vector<ROOT::RDF::RResultPtr<TH1D>> histograms = {
        h_eta_trigger,
        h_eta_nminus1,
        h_eta_final,
        h_pt_trigger,
        h_pt_nminus1,
        h_pt_final,
        h_ntrack_trigger,
        h_ntrack_nminus1,
        h_ntrack_final,
        h_nseg_trigger,
        h_nseg_nminus1,
        h_nseg_final
    };
    
    for (auto& h : histograms) {
        h->Write();
    }
    
    f->Close();
    delete f;
    
    std::cout << "\n" << std::string(60, '=') << std::endl;
    std::cout << "Output written to: " << output_file << std::endl;
    std::cout << std::string(60, '=') << std::endl;
}


/* Documentation of original branches (for reference):

  outputTree_->Branch("run",    &runNumber_);
  outputTree_->Branch("ls",     &lsNumber_);
  outputTree_->Branch("event",  &eventNumber_);
  
  outputTree_ -> Branch ( "HLT_L1SingleMu3",       &HLT_L1SingleMu3_) ;
  outputTree_ -> Branch ( "HLT_L1SingleMu5",       &HLT_L1SingleMu5_) ;
  outputTree_ -> Branch ( "HLT_L1SingleMu7",       &HLT_L1SingleMu7_) ;
  outputTree_ -> Branch ( "HLT_L1SingleMu18",      &HLT_L1SingleMu18_) ;
  outputTree_ -> Branch ( "HLT_L2Mu23NoVtx_2Cha_CosmicSeed",
                                                   &HLT_L2Mu23NoVtx_2Cha_CosmicSeed_) ;
  outputTree_ -> Branch ( "HLT_L1SingleMuOpen",    &HLT_L1SingleMuOpen_) ;
  outputTree_ -> Branch ( "HLT_L1SingleMuOpen_DT", &HLT_L1SingleMuOpen_DT_) ;
  outputTree_ -> Branch ( "HLT_L1SingleMuCosmics", &HLT_L1SingleMuCosmics_) ;
  outputTree_ -> Branch ( "HLT_Random",            &HLT_Random_) ;
  
  outputTree_ -> Branch ( "gen_n",            &gen_n_) ;
  outputTree_ -> Branch ( "gen_pdg",          &gen_pdg_);
  outputTree_ -> Branch ( "gen_pt",           &gen_pt_);
  outputTree_ -> Branch ( "gen_eta",          &gen_eta_);
  outputTree_ -> Branch ( "gen_phi",          &gen_phi_);
  outputTree_ -> Branch ( "gen_mass",         &gen_mass_);
  outputTree_ -> Branch ( "gen_vx",           &gen_vx_);
  outputTree_ -> Branch ( "gen_vy",           &gen_vy_);
  outputTree_ -> Branch ( "gen_vz",           &gen_vz_);
  outputTree_ -> Branch ( "gen_isHardProcess",&gen_isHardProcess_);
  outputTree_ -> Branch ( "gen_status",       &gen_status_);
  outputTree_ -> Branch ( "gen_moth_pdg",     &gen_moth_pdg_);
  outputTree_ -> Branch ( "gen_daughter_n",   &gen_daughter_n_);
  outputTree_ -> Branch ( "gen_daughter_pdg", &gen_daughter_pdg_);
  
  outputTree_ -> Branch ( "muon_n",           &muon_n_);
  outputTree_ -> Branch ( "muon_pt",          &muon_pt_);
  outputTree_ -> Branch ( "muon_ptErr",       &muon_ptErr_);
  outputTree_ -> Branch ( "muon_p",           &muon_p_);
  outputTree_ -> Branch ( "muon_eta",         &muon_eta_);
  outputTree_ -> Branch ( "muon_phi",         &muon_phi_);
  outputTree_ -> Branch ( "muon_energy",      &muon_energy_);
  outputTree_ -> Branch ( "muon_charge",      &muon_charge_);
  outputTree_ -> Branch ( "muon_chi2",        &muon_chi2_);

  outputTree_ -> Branch ( "muon_isLoose",     &muon_isLoose_);
  outputTree_ -> Branch ( "muon_isMedium",    &muon_isMedium_);
  outputTree_ -> Branch ( "muon_isTight",     &muon_isTight_);
  outputTree_ -> Branch ( "muon_isTrackerHighPtMuon",
                                              &muon_isTrackerHighPtMuon_);
  outputTree_ -> Branch ( "muon_isHighPtMuon",&muon_isHighPtMuon_);
  outputTree_ -> Branch ( "muon_type",        &muon_type_);
  outputTree_ -> Branch ( "muon_quality",     &muon_quality_);

  outputTree_ -> Branch ( "muon_hasMatchedGenTrack", &muon_hasMatchedGenTrack_);
  outputTree_ -> Branch ( "muon_fromGenTrack_Vx",    &muon_fromGenTrack_Vx_);
  outputTree_ -> Branch ( "muon_fromGenTrack_Vy",    &muon_fromGenTrack_Vy_);
  outputTree_ -> Branch ( "muon_fromGenTrack_Vz",    &muon_fromGenTrack_Vz_);
  outputTree_ -> Branch ( "muon_fromGenTrack_Pt",    &muon_fromGenTrack_Pt_);
  outputTree_ -> Branch ( "muon_fromGenTrack_PtErr", &muon_fromGenTrack_PtErr_);
  outputTree_ -> Branch ( "muon_fromGenTrack_Eta",   &muon_fromGenTrack_Eta_);
  outputTree_ -> Branch ( "muon_fromGenTrack_Phi",   &muon_fromGenTrack_Phi_);
  outputTree_ -> Branch ( "muon_fromGenTrack_Chi2",  &muon_fromGenTrack_Chi2_);
  outputTree_ -> Branch ( "muon_fromGenTrack_Ndof",  &muon_fromGenTrack_Ndof_);
  outputTree_ -> Branch ( "muon_fromGenTrack_Charge",&muon_fromGenTrack_Charge_);
  outputTree_ -> Branch ( "muon_fromGenTrack_NumValidHits",
                                               &muon_fromGenTrack_NumValidHits_);
  outputTree_ -> Branch ( "muon_fromGenTrack_ValidFraction",
                                                &muon_fromGenTrack_ValidFraction_);

  outputTree_ -> Branch ( "muon_d0",          &muon_d0_);
  outputTree_ -> Branch ( "muon_d0Err",       &muon_d0Err_);
  outputTree_ -> Branch ( "muon_dZ",          &muon_dZ_);

  outputTree_ -> Branch ( "muon_pileupIso",     &muon_pileupIso_);
  outputTree_ -> Branch ( "muon_chargedIso",    &muon_chargedIso_);
  outputTree_ -> Branch ( "muon_photonIso",     &muon_photonIso_);
  outputTree_ -> Branch ( "muon_neutralHadIso", &muon_neutralHadIso_);
  outputTree_ -> Branch ( "muon_validFractionTrackerHits",
                                                &muon_validFractionTrackerHits_);

  outputTree_ -> Branch ( "muon_tuneP_Pt",      &muon_tuneP_Pt_);
  outputTree_ -> Branch ( "muon_tuneP_PtErr",   &muon_tuneP_PtErr_);
  outputTree_ -> Branch ( "muon_tuneP_Eta",     &muon_tuneP_Eta_);
  outputTree_ -> Branch ( "muon_tuneP_Phi",     &muon_tuneP_Phi_);
  outputTree_ -> Branch ( "muon_tuneP_MuonBestTrackType",
                                                &muon_tuneP_MuonBestTrackType_);

  outputTree_ -> Branch ( "muon_trkIso",           &muon_trkIso_);
  outputTree_ -> Branch ( "muon_normChi2",         &muon_normChi2_);
  outputTree_ -> Branch ( "muon_chi2LocalPosition",&muon_chi2LocalPosition_);
  outputTree_ -> Branch ( "muon_kinkFinder",       &muon_kinkFinder_);
  outputTree_ -> Branch ( "muon_segmentCompatability",
                                                   &muon_segmentCompatability_);

  outputTree_ -> Branch ( "muon_dtSeg_n",          &muon_dtSeg_n_);
  outputTree_ -> Branch ( "muon_dtSeg_t0timing",   &muon_dtSeg_t0timing_);
  outputTree_ -> Branch ( "muon_dtSeg_found",      &muon_dtSeg_found_);
  outputTree_ -> Branch ( "muon_dtSeg_globX",      &muon_dtSeg_globX_);
  outputTree_ -> Branch ( "muon_dtSeg_globY",      &muon_dtSeg_globY_);
  outputTree_ -> Branch ( "muon_dtSeg_globZ",      &muon_dtSeg_globZ_);
  outputTree_ -> Branch ( "muon_dtSeg_eta",        &muon_dtSeg_eta_);
  outputTree_ -> Branch ( "muon_dtSeg_phi",        &muon_dtSeg_phi_);
  outputTree_ -> Branch( "muon_dtSeg_Station_",    &muon_dtSeg_Station_);
  outputTree_ -> Branch( "muon_dtSeg_Sector_",      &muon_dtSeg_Sector_);

  outputTree_ -> Branch ( "simHit_n",          &simHit_n_);
  outputTree_ -> Branch ( "simHit_globX",      &simHit_globX_);
  outputTree_ -> Branch ( "simHit_globY",      &simHit_globY_);
  outputTree_ -> Branch ( "simHit_globZ",      &simHit_globZ_);
  outputTree_ -> Branch ( "simHit_tof",        &simHit_tof_);

  outputTree_ -> Branch ( "muon_avgEtaFromDTseg",       &muon_avgEtaFromDTseg_);
  outputTree_ -> Branch ( "muon_avgPhiFromDTseg",       &muon_avgPhiFromDTseg_);
  
  outputTree_ -> Branch ( "muon_comb_ndof",             &muon_comb_ndof_);
  outputTree_ -> Branch ( "muon_comb_timeAtIpInOut",    &muon_comb_timeAtIpInOut_);
  outputTree_ -> Branch ( "muon_comb_timeAtIpInOutErr", &muon_comb_timeAtIpInOutErr_);
  outputTree_ -> Branch ( "muon_comb_timeAtIpOutIn",    &muon_comb_timeAtIpOutIn_);
  outputTree_ -> Branch ( "muon_comb_timeAtIpOutInErr", &muon_comb_timeAtIpOutInErr_);
  outputTree_ -> Branch ( "muon_comb_invBeta",          &muon_comb_invBeta_);
  outputTree_ -> Branch ( "muon_comb_freeInvBeta",      &muon_comb_freeInvBeta_);

  outputTree_ -> Branch( "track_n",          &track_n_);
  outputTree_ -> Branch( "track_vx",         &track_vx_);
  outputTree_ -> Branch( "track_vy",         &track_vy_);
  outputTree_ -> Branch( "track_vz",         &track_vz_);
  outputTree_ -> Branch( "track_phi",        &track_phi_);
  outputTree_ -> Branch( "track_eta",        &track_eta_);
  outputTree_ -> Branch( "track_pt",         &track_pt_);
  outputTree_ -> Branch( "track_ptErr",      &track_ptErr_);
  outputTree_ -> Branch( "track_chi2",       &track_chi2_);
  outputTree_ -> Branch( "track_ndof",       &track_ndof_);
  outputTree_ -> Branch( "track_charge",     &track_charge_);
  outputTree_ -> Branch( "track_numberOfValidHits", &track_numberOfValidHits_);
  outputTree_ -> Branch( "track_validFraction",   &track_validFraction_);
*/