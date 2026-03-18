/// Trigger study using RDataFrame for cosmic muon analysis
/// Based on skim_ntuples.C but only saves trigger-related histograms (no event output)
///
/// Trigger efficiency measured at:
///   - Pre-trigger level: all objects / leading object / leading quality object
///   - End of cutflow: after all quality + eta + pT + segment cuts
///
/// Usage:
///       root -l -b -q 'trigger_study.C("track", "sr", "/path/to/files/")'
///       root -l -b -q 'trigger_study.C("muon", "sr", "/path/to/files/", true)'  // with file validation
/// Version:
///       v1: initial version, 10 TeV pT range
///       v2: restricted pT range to 5 TeV, added cutflows, and subleading object plots

void trigger_study(TString object = "track", TString region = "sr", TString base_dir = "/ceph/cms/store/user/tvami/EarthAsDM/Cosmics/crab_Ntuplizer-Cosmics_Run2023D-CosmicTP-PromptReco-v1_v3/", bool validate = false) {

    ROOT::EnableImplicitMT();

    // Configuration
    TString base_dir_copy = base_dir;
    if (base_dir_copy.EndsWith("/")) base_dir_copy.Remove(base_dir_copy.Length()-1);
    TString dataset_name = base_dir_copy(base_dir_copy.Last('/')+1, base_dir_copy.Length());
    dataset_name.ReplaceAll("crab_", "");
    if (dataset_name.EndsWith(".root")) dataset_name.Remove(dataset_name.Length()-5);
    TString output_file = TString::Format("trigger_study_%s_%s_%s.root", object.Data(), region.Data(), dataset_name.Data());

    // Set variable names based on object
    TString pt_var, eta_var, phi_var, n_var, nhits_var, chi2_var, ndof_var, ptErr_var;
    if (object == "track") {
        pt_var = "track_pt";
        eta_var = "track_eta";
        phi_var = "track_phi";
        n_var = "track_n";
        nhits_var = "track_numberOfValidHits";
        chi2_var = "track_chi2";
        ndof_var = "track_ndof";
        ptErr_var = "track_ptErr";
    } else if (object == "muon") {
        pt_var = "muon_pt";
        eta_var = "muon_eta";
        phi_var = "muon_phi";
        n_var = "muon_n";
        nhits_var = "muon_numberOfValidHits";
        chi2_var = "muon_chi2";
        ndof_var = "muon_comb_ndof";
        ptErr_var = "muon_ptErr";
    } else if (object == "tuneP") {
        pt_var = "muon_tuneP_Pt";
        eta_var = "muon_tuneP_Eta";
        phi_var = "muon_tuneP_Phi";
        n_var = "muon_n";
        nhits_var = "muon_numberOfValidHits";
        chi2_var = "muon_chi2";
        ndof_var = "muon_comb_ndof";
        ptErr_var = "muon_tuneP_PtErr";
    } else if (object == "matched_muon") {
        pt_var = "muon_fromGenTrack_Pt";
        eta_var = "muon_fromGenTrack_Eta";
        phi_var = "muon_fromGenTrack_Phi";
        n_var = "muon_n";
        nhits_var = "muon_fromGenTrack_NumValidHits";
        chi2_var = "muon_fromGenTrack_Chi2";
        ndof_var = "muon_fromGenTrack_Ndof";
        ptErr_var = "muon_fromGenTrack_PtErr";
    }

    std::cout << "Running trigger study with object: " << object << "\n";
    std::cout << "Using variables: " << pt_var << ", " << eta_var << ", " << phi_var << ", " << n_var << ", " << nhits_var << "\n";

    // Create TChain
    TChain chain("muonPhiAnalyzer/tree");

    TString find_cmd = TString::Format("find %s -name '*.root' 2>/dev/null", base_dir.Data());
    FILE* pipe = popen(find_cmd.Data(), "r");
    if (!pipe) {
        std::cerr << "Error: cannot run find command\n";
        return;
    }

    std::cout << "Reading filenames from pipe\n";

    char buffer[2048];
    int nfiles = 0, nzombie = 0;
    while (fgets(buffer, sizeof(buffer), pipe) != NULL) {
        TString filename = buffer;
        filename.ReplaceAll("\n", "");
        if (filename.Length() > 0) {
            if (validate) {
                TFile* test_file = TFile::Open(filename.Data(), "READ");
                if (test_file && !test_file->IsZombie() && test_file->GetNkeys() > 0) {
                    test_file->Close();
                    delete test_file;
                    chain.Add(filename.Data());
                    nfiles++;
                } else {
                    std::cerr << "Warning: Skipping zombie: " << filename << "\n";
                    nzombie++;
                    if (test_file) delete test_file;
                }
            } else {
                chain.Add(filename.Data());
                nfiles++;
            }
            if (nfiles % 10 == 0) std::cout << "Added " << nfiles << " files...\r" << std::flush;
        }
    }
    pclose(pipe);

    if (nzombie > 0) std::cerr << "Skipped " << nzombie << " corrupted files\n";
    if (nfiles == 0) {
        std::cerr << "Error: No ROOT files found.\n";
        return;
    }
    std::cout << "Processing " << nfiles << " files\n";

    ROOT::RDataFrame df(chain);

    // Region-specific pT cut
    float pt_cut_value = 200.f;
    if (region != "sr" && region != "vr") {
        std::cerr << "Error: Unknown region '" << region << "'. Use 'sr' or 'vr'.\n";
        return;
    }

    // Count valid DT segments
    auto df_with_count = df.Define("muon_dtSeg_valid_n", [](ROOT::VecOps::RVec<float> times) {
        int count = 0;
        for (auto t : times) {
            if (t > -998 && t < 9998) count++;
        }
        return count;
    }, {"muon_dtSeg_t0timing"});

    // ============================================================
    // Trigger efficiency at pre-trigger level (beginning of cutflow)
    // ============================================================

    // Individual trigger flags
    struct TrigInfo { std::string col; std::string label; };
    std::vector<TrigInfo> triggers = {
        {"trig_L1SingleMuCosmics",  "L1SingleMuCosmics"},
        {"trig_L1SingleMuOpen",     "L1SingleMuOpen"},
        {"trig_L1SingleMuOpen_DT",  "L1SingleMuOpen_DT"},
        {"trig_L1SingleMu3",        "L1SingleMu3"},
        {"trig_L1SingleMu5",        "L1SingleMu5"},
        {"trig_L1SingleMu7",        "L1SingleMu7"},
        {"trig_L1SingleMu18",       "L1SingleMu18"},
    };

    // --- Leading object kinematics vs trigger (pre-trigger, no quality cuts) ---
    auto df_leading_pretrig = df_with_count
        .Filter(TString::Format("%s > 0", n_var.Data()).Data())
        .Define("leading_idx_pretrig", [](const ROOT::VecOps::RVec<float>& pt) {
            int best = -1; float best_pt = -1;
            for (size_t i = 0; i < pt.size(); ++i)
                if (pt[i] > best_pt) { best = i; best_pt = pt[i]; }
            return best;
        }, {pt_var.Data()})
        .Define("leading_eta_pretrig", [](const ROOT::VecOps::RVec<float>& v, int idx) { return static_cast<double>(v[idx]); }, {eta_var.Data(), "leading_idx_pretrig"})
        .Define("leading_phi_pretrig", [](const ROOT::VecOps::RVec<float>& v, int idx) { return static_cast<double>(v[idx]); }, {phi_var.Data(), "leading_idx_pretrig"})
        .Define("leading_pt_pretrig", [](const ROOT::VecOps::RVec<float>& v, int idx) { return static_cast<double>(v[idx]); }, {pt_var.Data(), "leading_idx_pretrig"})
        // Define all trigger flags
        .Define("trig_L1SingleMuCosmics",  "(int)(HLT_L1SingleMuCosmics)")
        .Define("trig_L1SingleMuOpen",     "(int)(HLT_L1SingleMuOpen)")
        .Define("trig_L1SingleMuOpen_DT",  "(int)(HLT_L1SingleMuOpen_DT)")
        .Define("trig_L1SingleMu3",        "(int)(HLT_L1SingleMu3)")
        .Define("trig_L1SingleMu5",        "(int)(HLT_L1SingleMu5)")
        .Define("trig_L1SingleMu7",        "(int)(HLT_L1SingleMu7)")
        .Define("trig_L1SingleMu18",       "(int)(HLT_L1SingleMu18)");

    // Book 2D trigger efficiency histograms for leading object (pre-trigger)
    std::vector<ROOT::RDF::RResultPtr<TH2D>> trigeff_pretrig;
    for (auto& t : triggers) {
        trigeff_pretrig.push_back(df_leading_pretrig.Histo2D(
            {("h2_trigeff_eta_pretrig_" + t.label).c_str(),
             (t.label + " vs leading obj #eta (pretrig);#eta;" + t.label).c_str(),
             100, -3, 3, 2, -0.5, 1.5},
            "leading_eta_pretrig", t.col));
        trigeff_pretrig.push_back(df_leading_pretrig.Histo2D(
            {("h2_trigeff_phi_pretrig_" + t.label).c_str(),
             (t.label + " vs leading obj #phi (pretrig);#phi;" + t.label).c_str(),
             100, -3.15, 3.15, 2, -0.5, 1.5},
            "leading_phi_pretrig", t.col));
        trigeff_pretrig.push_back(df_leading_pretrig.Histo2D(
            {("h2_trigeff_pt_pretrig_" + t.label).c_str(),
             (t.label + " vs leading obj p_{T} (pretrig);p_{T} [GeV];" + t.label).c_str(),
             250, 0, 5000, 2, -0.5, 1.5},
            "leading_pt_pretrig", t.col));
    }

    // --- Subleading object kinematics vs trigger (pre-trigger) ---
    // Same event selection as leading, but plot subleading object kinematics
    auto df_subleading_pretrig = df_leading_pretrig
        .Define("subleading_idx_pretrig", [](const ROOT::VecOps::RVec<float>& pt) {
            int best = -1, second = -1;
            float best_pt = -1, second_pt = -1;
            for (size_t i = 0; i < pt.size(); ++i) {
                if (pt[i] > best_pt) {
                    second = best; second_pt = best_pt;
                    best = i; best_pt = pt[i];
                } else if (pt[i] > second_pt) {
                    second = i; second_pt = pt[i];
                }
            }
            return second;
        }, {pt_var.Data()})
        .Filter("subleading_idx_pretrig >= 0")
        .Define("subleading_eta_pretrig", [](const ROOT::VecOps::RVec<float>& v, int idx) { return static_cast<double>(v[idx]); }, {eta_var.Data(), "subleading_idx_pretrig"})
        .Define("subleading_phi_pretrig", [](const ROOT::VecOps::RVec<float>& v, int idx) { return static_cast<double>(v[idx]); }, {phi_var.Data(), "subleading_idx_pretrig"})
        .Define("subleading_pt_pretrig", [](const ROOT::VecOps::RVec<float>& v, int idx) { return static_cast<double>(v[idx]); }, {pt_var.Data(), "subleading_idx_pretrig"});

    // Book 2D trigger efficiency histograms for subleading object (pre-trigger)
    std::vector<ROOT::RDF::RResultPtr<TH2D>> trigeff_subleading_pretrig;
    for (auto& t : triggers) {
        trigeff_subleading_pretrig.push_back(df_subleading_pretrig.Histo2D(
            {("h2_trigeff_eta_subleading_pretrig_" + t.label).c_str(),
             (t.label + " vs subleading obj #eta (pretrig);#eta;" + t.label).c_str(),
             100, -3, 3, 2, -0.5, 1.5},
            "subleading_eta_pretrig", t.col));
        trigeff_subleading_pretrig.push_back(df_subleading_pretrig.Histo2D(
            {("h2_trigeff_phi_subleading_pretrig_" + t.label).c_str(),
             (t.label + " vs subleading obj #phi (pretrig);#phi;" + t.label).c_str(),
             100, -3.15, 3.15, 2, -0.5, 1.5},
            "subleading_phi_pretrig", t.col));
        trigeff_subleading_pretrig.push_back(df_subleading_pretrig.Histo2D(
            {("h2_trigeff_pt_subleading_pretrig_" + t.label).c_str(),
             (t.label + " vs subleading obj p_{T} (pretrig);p_{T} [GeV];" + t.label).c_str(),
             250, 0, 5000, 2, -0.5, 1.5},
            "subleading_pt_pretrig", t.col));
    }

    // --- Both legs: fill leading AND subleading kinematics with same trigger (pre-trigger) ---
    // This gives an OR-style efficiency: "given a muon at this eta/phi/pt, does the event trigger?"
    auto df_bothlegs_pretrig = df_subleading_pretrig
        .Define("bothlegs_eta_pretrig", [](double lead_eta, double sub_eta) {
            return ROOT::VecOps::RVec<double>{lead_eta, sub_eta};
        }, {"leading_eta_pretrig", "subleading_eta_pretrig"})
        .Define("bothlegs_phi_pretrig", [](double lead_phi, double sub_phi) {
            return ROOT::VecOps::RVec<double>{lead_phi, sub_phi};
        }, {"leading_phi_pretrig", "subleading_phi_pretrig"})
        .Define("bothlegs_pt_pretrig", [](double lead_pt, double sub_pt) {
            return ROOT::VecOps::RVec<double>{lead_pt, sub_pt};
        }, {"leading_pt_pretrig", "subleading_pt_pretrig"})
        .Define("bothlegs_trig_L1SingleMuCosmics", [](int trig) { return ROOT::VecOps::RVec<int>{trig, trig}; }, {"trig_L1SingleMuCosmics"});

    // Book 2D trigger efficiency histograms for both legs (pre-trigger) - L1SingleMuCosmics only
    std::vector<ROOT::RDF::RResultPtr<TH2D>> trigeff_bothlegs_pretrig;
    trigeff_bothlegs_pretrig.push_back(df_bothlegs_pretrig.Histo2D(
        {"h2_trigeff_eta_bothlegs_pretrig_L1SingleMuCosmics",
         "L1SingleMuCosmics vs both legs #eta (pretrig);#eta;L1SingleMuCosmics",
         100, -3, 3, 2, -0.5, 1.5},
        "bothlegs_eta_pretrig", "bothlegs_trig_L1SingleMuCosmics"));
    trigeff_bothlegs_pretrig.push_back(df_bothlegs_pretrig.Histo2D(
        {"h2_trigeff_phi_bothlegs_pretrig_L1SingleMuCosmics",
         "L1SingleMuCosmics vs both legs #phi (pretrig);#phi;L1SingleMuCosmics",
         100, -3.15, 3.15, 2, -0.5, 1.5},
        "bothlegs_phi_pretrig", "bothlegs_trig_L1SingleMuCosmics"));
    trigeff_bothlegs_pretrig.push_back(df_bothlegs_pretrig.Histo2D(
        {"h2_trigeff_pt_bothlegs_pretrig_L1SingleMuCosmics",
         "L1SingleMuCosmics vs both legs p_{T} (pretrig);p_{T} [GeV];L1SingleMuCosmics",
         250, 0, 5000, 2, -0.5, 1.5},
        "bothlegs_pt_pretrig", "bothlegs_trig_L1SingleMuCosmics"));

    // --- Leading quality object kinematics vs trigger (pre-trigger) ---
    // Selection: object exists + quality cuts (nHits > 7, chi2/ndof < 35, ptErr/pT^2 < 1e-3)
    // No eta, pT, or DT segment requirements
    auto df_quality_pretrig = df_with_count
        .Filter(TString::Format("%s > 0", n_var.Data()).Data())
        .Define("quality_leading_idx", [](const ROOT::VecOps::RVec<float>& pt,
                                           const ROOT::VecOps::RVec<int>& nhits,
                                           const ROOT::VecOps::RVec<float>& chi2,
                                           const ROOT::VecOps::RVec<float>& ndof,
                                           const ROOT::VecOps::RVec<float>& ptErr) {
            int best = -1; float best_pt = -1;
            for (size_t i = 0; i < pt.size(); ++i) {
                if (nhits[i] > 7 && ndof[i] > 0 && chi2[i]/ndof[i] < 35 &&
                    pt[i] > 0 && ptErr[i]/(pt[i]*pt[i]) < 1e-3 && pt[i] > best_pt) {
                    best = i; best_pt = pt[i];
                }
            }
            return best;
        }, {pt_var.Data(), nhits_var.Data(), chi2_var.Data(), ndof_var.Data(), ptErr_var.Data()})
        .Filter("quality_leading_idx >= 0")
        .Define("quality_leading_eta", [](const ROOT::VecOps::RVec<float>& v, int idx) { return static_cast<double>(v[idx]); }, {eta_var.Data(), "quality_leading_idx"})
        .Define("quality_leading_phi", [](const ROOT::VecOps::RVec<float>& v, int idx) { return static_cast<double>(v[idx]); }, {phi_var.Data(), "quality_leading_idx"})
        .Define("quality_leading_pt", [](const ROOT::VecOps::RVec<float>& v, int idx) { return static_cast<double>(v[idx]); }, {pt_var.Data(), "quality_leading_idx"})
        .Define("trig_L1SingleMuCosmics",  "(int)(HLT_L1SingleMuCosmics)")
        .Define("trig_L1SingleMuOpen",     "(int)(HLT_L1SingleMuOpen)")
        .Define("trig_L1SingleMuOpen_DT",  "(int)(HLT_L1SingleMuOpen_DT)")
        .Define("trig_L1SingleMu3",        "(int)(HLT_L1SingleMu3)")
        .Define("trig_L1SingleMu5",        "(int)(HLT_L1SingleMu5)")
        .Define("trig_L1SingleMu7",        "(int)(HLT_L1SingleMu7)")
        .Define("trig_L1SingleMu18",       "(int)(HLT_L1SingleMu18)");

    std::vector<ROOT::RDF::RResultPtr<TH2D>> trigeff_quality_pretrig;
    for (auto& t : triggers) {
        trigeff_quality_pretrig.push_back(df_quality_pretrig.Histo2D(
            {("h2_trigeff_eta_quality_pretrig_" + t.label).c_str(),
             (t.label + " vs quality obj #eta (pretrig);#eta;" + t.label).c_str(),
             100, -3, 3, 2, -0.5, 1.5},
            "quality_leading_eta", t.col));
        trigeff_quality_pretrig.push_back(df_quality_pretrig.Histo2D(
            {("h2_trigeff_phi_quality_pretrig_" + t.label).c_str(),
             (t.label + " vs quality obj #phi (pretrig);#phi;" + t.label).c_str(),
             100, -3.15, 3.15, 2, -0.5, 1.5},
            "quality_leading_phi", t.col));
        trigeff_quality_pretrig.push_back(df_quality_pretrig.Histo2D(
            {("h2_trigeff_pt_quality_pretrig_" + t.label).c_str(),
             (t.label + " vs quality obj p_{T} (pretrig);p_{T} [GeV];" + t.label).c_str(),
             250, 0, 5000, 2, -0.5, 1.5},
            "quality_leading_pt", t.col));
    }

    // --- Subleading quality object kinematics vs trigger (pre-trigger) ---
    // Same event selection as leading quality, but plot subleading quality object kinematics
    auto df_quality_subleading_pretrig = df_quality_pretrig
        .Define("quality_subleading_idx", [](const ROOT::VecOps::RVec<float>& pt,
                                              const ROOT::VecOps::RVec<int>& nhits,
                                              const ROOT::VecOps::RVec<float>& chi2,
                                              const ROOT::VecOps::RVec<float>& ndof,
                                              const ROOT::VecOps::RVec<float>& ptErr) {
            int best = -1, second = -1;
            float best_pt = -1, second_pt = -1;
            for (size_t i = 0; i < pt.size(); ++i) {
                if (nhits[i] > 7 && ndof[i] > 0 && chi2[i]/ndof[i] < 35 &&
                    pt[i] > 0 && ptErr[i]/(pt[i]*pt[i]) < 1e-3) {
                    if (pt[i] > best_pt) {
                        second = best; second_pt = best_pt;
                        best = i; best_pt = pt[i];
                    } else if (pt[i] > second_pt) {
                        second = i; second_pt = pt[i];
                    }
                }
            }
            return second;
        }, {pt_var.Data(), nhits_var.Data(), chi2_var.Data(), ndof_var.Data(), ptErr_var.Data()})
        .Filter("quality_subleading_idx >= 0")
        .Define("quality_subleading_eta", [](const ROOT::VecOps::RVec<float>& v, int idx) { return static_cast<double>(v[idx]); }, {eta_var.Data(), "quality_subleading_idx"})
        .Define("quality_subleading_phi", [](const ROOT::VecOps::RVec<float>& v, int idx) { return static_cast<double>(v[idx]); }, {phi_var.Data(), "quality_subleading_idx"})
        .Define("quality_subleading_pt", [](const ROOT::VecOps::RVec<float>& v, int idx) { return static_cast<double>(v[idx]); }, {pt_var.Data(), "quality_subleading_idx"});

    std::vector<ROOT::RDF::RResultPtr<TH2D>> trigeff_quality_subleading_pretrig;
    for (auto& t : triggers) {
        trigeff_quality_subleading_pretrig.push_back(df_quality_subleading_pretrig.Histo2D(
            {("h2_trigeff_eta_quality_subleading_pretrig_" + t.label).c_str(),
             (t.label + " vs quality subleading obj #eta (pretrig);#eta;" + t.label).c_str(),
             100, -3, 3, 2, -0.5, 1.5},
            "quality_subleading_eta", t.col));
        trigeff_quality_subleading_pretrig.push_back(df_quality_subleading_pretrig.Histo2D(
            {("h2_trigeff_phi_quality_subleading_pretrig_" + t.label).c_str(),
             (t.label + " vs quality subleading obj #phi (pretrig);#phi;" + t.label).c_str(),
             100, -3.15, 3.15, 2, -0.5, 1.5},
            "quality_subleading_phi", t.col));
        trigeff_quality_subleading_pretrig.push_back(df_quality_subleading_pretrig.Histo2D(
            {("h2_trigeff_pt_quality_subleading_pretrig_" + t.label).c_str(),
             (t.label + " vs quality subleading obj p_{T} (pretrig);p_{T} [GeV];" + t.label).c_str(),
             250, 0, 5000, 2, -0.5, 1.5},
            "quality_subleading_pt", t.col));
    }

    // --- Both legs: fill leading AND subleading quality kinematics with same trigger (pre-trigger) ---
    auto df_quality_bothlegs_pretrig = df_quality_subleading_pretrig
        .Define("quality_bothlegs_eta", [](double lead_eta, double sub_eta) {
            return ROOT::VecOps::RVec<double>{lead_eta, sub_eta};
        }, {"quality_leading_eta", "quality_subleading_eta"})
        .Define("quality_bothlegs_phi", [](double lead_phi, double sub_phi) {
            return ROOT::VecOps::RVec<double>{lead_phi, sub_phi};
        }, {"quality_leading_phi", "quality_subleading_phi"})
        .Define("quality_bothlegs_pt", [](double lead_pt, double sub_pt) {
            return ROOT::VecOps::RVec<double>{lead_pt, sub_pt};
        }, {"quality_leading_pt", "quality_subleading_pt"})
        .Define("quality_bothlegs_trig_L1SingleMuCosmics", [](int trig) { return ROOT::VecOps::RVec<int>{trig, trig}; }, {"trig_L1SingleMuCosmics"});

    // Book 2D trigger efficiency histograms for both quality legs (pre-trigger) - L1SingleMuCosmics only
    std::vector<ROOT::RDF::RResultPtr<TH2D>> trigeff_quality_bothlegs_pretrig;
    trigeff_quality_bothlegs_pretrig.push_back(df_quality_bothlegs_pretrig.Histo2D(
        {"h2_trigeff_eta_quality_bothlegs_pretrig_L1SingleMuCosmics",
         "L1SingleMuCosmics vs quality both legs #eta (pretrig);#eta;L1SingleMuCosmics",
         100, -3, 3, 2, -0.5, 1.5},
        "quality_bothlegs_eta", "quality_bothlegs_trig_L1SingleMuCosmics"));
    trigeff_quality_bothlegs_pretrig.push_back(df_quality_bothlegs_pretrig.Histo2D(
        {"h2_trigeff_phi_quality_bothlegs_pretrig_L1SingleMuCosmics",
         "L1SingleMuCosmics vs quality both legs #phi (pretrig);#phi;L1SingleMuCosmics",
         100, -3.15, 3.15, 2, -0.5, 1.5},
        "quality_bothlegs_phi", "quality_bothlegs_trig_L1SingleMuCosmics"));
    trigeff_quality_bothlegs_pretrig.push_back(df_quality_bothlegs_pretrig.Histo2D(
        {"h2_trigeff_pt_quality_bothlegs_pretrig_L1SingleMuCosmics",
         "L1SingleMuCosmics vs quality both legs p_{T} (pretrig);p_{T} [GeV];L1SingleMuCosmics",
         250, 0, 5000, 2, -0.5, 1.5},
        "quality_bothlegs_pt", "quality_bothlegs_trig_L1SingleMuCosmics"));

    // 1D cutflow at quality_pretrig level: DT segments > 2 -> Has quality muon -> L1SingleMuCosmics Triggered
    // Start from df_with_count to count all events, then filter for quality muon
    auto df_all_events_for_quality = df_with_count
        .Define("trig_L1SingleMuCosmics_all", "(int)(HLT_L1SingleMuCosmics)")
        .Define("has_dt_segments_quality", [](int n) { return n > 2 ? 1 : 0; }, {"muon_dtSeg_valid_n"})
        .Define("has_quality_muon", [](const ROOT::VecOps::RVec<float>& pt,
                                        const ROOT::VecOps::RVec<int>& nhits,
                                        const ROOT::VecOps::RVec<float>& chi2,
                                        const ROOT::VecOps::RVec<float>& ndof,
                                        const ROOT::VecOps::RVec<float>& ptErr) {
            for (size_t i = 0; i < pt.size(); ++i) {
                if (nhits[i] > 7 && ndof[i] > 0 && chi2[i]/ndof[i] < 35 &&
                    pt[i] > 0 && ptErr[i]/(pt[i]*pt[i]) < 1e-3) return 1;
            }
            return 0;
        }, {pt_var.Data(), nhits_var.Data(), chi2_var.Data(), ndof_var.Data(), ptErr_var.Data()})
        .Define("cutflow_quality_pretrig_bins", [](int has_dt, int has_quality, int trig) {
            ROOT::VecOps::RVec<double> bins;
            bins.push_back(0.);  // All events
            if (has_dt) bins.push_back(1.);  // Has DT segments
            if (has_dt && has_quality) bins.push_back(2.);  // Has quality muon
            if (has_dt && has_quality && trig) bins.push_back(3.);  // Triggered
            return bins;
        }, {"has_dt_segments_quality", "has_quality_muon", "trig_L1SingleMuCosmics_all"});
    auto h_cutflow_quality_pretrig = df_all_events_for_quality.Histo1D(
        {"h_cutflow_quality_pretrig", "Cutflow (quality pretrig);Selection;Events", 4, -0.5, 3.5},
        "cutflow_quality_pretrig_bins");

    // 1D histogram: which triggers fire (pre-trigger level, leading object exists)
    auto df_trig_bins_pretrig = df_leading_pretrig
        .Define("trig_fired_bins", [](int t0, int t1, int t2, int t3, int t4, int t5, int t6) {
            ROOT::VecOps::RVec<double> bins;
            bins.push_back(0.);  // "All" - always filled
            if (t0) bins.push_back(1.);
            if (t1) bins.push_back(2.);
            if (t2) bins.push_back(3.);
            if (t3) bins.push_back(4.);
            if (t4) bins.push_back(5.);
            if (t5) bins.push_back(6.);
            if (t6) bins.push_back(7.);
            return bins;
        }, {"trig_L1SingleMuCosmics", "trig_L1SingleMuOpen", "trig_L1SingleMuOpen_DT",
            "trig_L1SingleMu3", "trig_L1SingleMu5", "trig_L1SingleMu7",
            "trig_L1SingleMu18"});
    auto h_trig_fired = df_trig_bins_pretrig.Histo1D(
        {"h_trig_fired", "Individual trigger counts (pretrig);Trigger;Events", 8, -0.5, 7.5},
        "trig_fired_bins");

    // 1D cutflow at pretrig level: All events -> DT segments > 2 -> L1SingleMuCosmics Triggered
    auto df_pretrig_cutflow = df_leading_pretrig
        .Define("has_dt_segments_pretrig", [](int n) { return n > 2 ? 1 : 0; }, {"muon_dtSeg_valid_n"})
        .Define("cutflow_pretrig_bins", [](int has_dt, int trig) {
            ROOT::VecOps::RVec<double> bins;
            bins.push_back(0.);  // All events
            if (has_dt) bins.push_back(1.);  // Has DT segments
            if (has_dt && trig) bins.push_back(2.);  // Triggered
            return bins;
        }, {"has_dt_segments_pretrig", "trig_L1SingleMuCosmics"});
    auto h_cutflow_pretrig = df_pretrig_cutflow.Histo1D(
        {"h_cutflow_pretrig", "Cutflow (pretrig);Selection;Events", 3, -0.5, 2.5},
        "cutflow_pretrig_bins");

    // ============================================================
    // Trigger efficiency at end of cutflow
    // ============================================================
    // Apply all quality cuts but NOT the trigger, then measure trigger efficiency

    // Step: At least one object
    auto df_cf_hasobjs = df_with_count.Filter(TString::Format("%s > 0", n_var.Data()).Data());

    // Step: nHits > 7
    auto df_cf_nhits = df_cf_hasobjs
        .Define("nobj_nhits", [](const ROOT::VecOps::RVec<int>& nhits){
            int n = 0;
            for (auto h : nhits) if (h > 7) n++;
            return n;
        }, {nhits_var.Data()})
        .Filter("nobj_nhits > 0");

    // Step: + chi2/ndof < 35
    auto df_cf_nhits_chi2ndof = df_cf_nhits
        .Define("nobj_chi2ndof", [](const ROOT::VecOps::RVec<int>& nhits,
                                   const ROOT::VecOps::RVec<float>& chi2,
                                   const ROOT::VecOps::RVec<float>& ndof){
            int n = 0;
            for (size_t i = 0; i < nhits.size(); ++i)
                if (nhits[i] > 7 && ndof[i] > 0 && chi2[i]/ndof[i] < 35) n++;
            return n;
        }, {nhits_var.Data(), chi2_var.Data(), ndof_var.Data()})
        .Filter("nobj_chi2ndof > 0");

    // Step: + ptErr/pT^2 < 1e-3
    auto df_cf_quality = df_cf_nhits_chi2ndof
        .Define("nobj_quality", [](const ROOT::VecOps::RVec<int>& nhits,
                                      const ROOT::VecOps::RVec<float>& chi2,
                                      const ROOT::VecOps::RVec<float>& ndof,
                                      const ROOT::VecOps::RVec<float>& pt,
                                      const ROOT::VecOps::RVec<float>& ptErr){
            int n = 0;
            for (size_t i = 0; i < pt.size(); ++i)
                if (nhits[i] > 7 && ndof[i] > 0 && chi2[i]/ndof[i] < 35 &&
                    pt[i] > 0 && ptErr[i]/(pt[i]*pt[i]) < 1e-3) n++;
            return n;
        }, {nhits_var.Data(), chi2_var.Data(), ndof_var.Data(), pt_var.Data(), ptErr_var.Data()})
        .Filter("nobj_quality > 0");

    // Step: + |eta| < 0.9
    auto df_cf_eta = df_cf_quality
        .Define("nobj_eta", [](const ROOT::VecOps::RVec<int>& nhits,
                                 const ROOT::VecOps::RVec<float>& chi2,
                                 const ROOT::VecOps::RVec<float>& ndof,
                                 const ROOT::VecOps::RVec<float>& pt,
                                 const ROOT::VecOps::RVec<float>& ptErr,
                                 const ROOT::VecOps::RVec<float>& eta){
            int n = 0;
            for (size_t i = 0; i < pt.size(); ++i)
                if (nhits[i] > 7 && ndof[i] > 0 && chi2[i]/ndof[i] < 35 &&
                    pt[i] > 0 && ptErr[i]/(pt[i]*pt[i]) < 1e-3 &&
                    std::abs(eta[i]) < 0.9) n++;
            return n;
        }, {nhits_var.Data(), chi2_var.Data(), ndof_var.Data(), pt_var.Data(), ptErr_var.Data(), eta_var.Data()})
        .Filter("nobj_eta > 0");

    // Step: + pT cut (region-dependent)
    auto df_cf_pt = df_cf_eta
        .Define("nobj_pt", [region, pt_cut_value]
            (const ROOT::VecOps::RVec<int>& nhits,
                                 const ROOT::VecOps::RVec<float>& chi2,
                                 const ROOT::VecOps::RVec<float>& ndof,
                                 const ROOT::VecOps::RVec<float>& pt,
                                 const ROOT::VecOps::RVec<float>& ptErr,
                                 const ROOT::VecOps::RVec<float>& eta){
            int n = 0;
            for (size_t i = 0; i < pt.size(); ++i) {
                bool pass_quality =
                    nhits[i] > 7 &&
                    ndof[i] > 0 &&
                    chi2[i]/ndof[i] < 35 &&
                    pt[i] > 0 &&
                    ptErr[i]/(pt[i]*pt[i]) < 1e-3 &&
                    std::abs(eta[i]) < 0.9;
                if (!pass_quality) continue;
                if (region == "sr" && pt[i] > pt_cut_value) n++;
                if (region == "vr" && pt[i] < pt_cut_value) n++;
            }
            return n;
        }, {nhits_var.Data(), chi2_var.Data(), ndof_var.Data(), pt_var.Data(), ptErr_var.Data(), eta_var.Data()})
        .Filter("nobj_pt > 0");

    // Step: + enough DT segments
    auto df_cf_seg = df_cf_pt.Filter("muon_dtSeg_valid_n > 2");

    // Find highest-pT quality object in fully-selected events (no trigger requirement)
    // Selection: quality cuts + |eta| < 0.9 + pT cut + >2 DT segments
    auto df_final_notrig = df_cf_seg
        .Define("final_highpt_idx", [region, pt_cut_value](
                const ROOT::VecOps::RVec<float>& pt,
                const ROOT::VecOps::RVec<float>& eta,
                const ROOT::VecOps::RVec<int>& nhits,
                const ROOT::VecOps::RVec<float>& chi2,
                const ROOT::VecOps::RVec<float>& ndof,
                const ROOT::VecOps::RVec<float>& ptErr) {
            int best = -1; float best_pt = -1;
            for (size_t i = 0; i < pt.size(); ++i) {
                bool pass = nhits[i] > 7 && ndof[i] > 0 && chi2[i]/ndof[i] < 35 &&
                    pt[i] > 0 && ptErr[i]/(pt[i]*pt[i]) < 1e-3 && std::abs(eta[i]) < 0.9;
                if (!pass) continue;
                if (region == "sr" && pt[i] <= pt_cut_value) continue;
                if (region == "vr" && pt[i] >= pt_cut_value) continue;
                if (pt[i] > best_pt) { best = i; best_pt = pt[i]; }
            }
            return best;
        }, {pt_var.Data(), eta_var.Data(), nhits_var.Data(), chi2_var.Data(), ndof_var.Data(), ptErr_var.Data()})
        .Filter("final_highpt_idx >= 0")
        .Define("final_eta", [](const ROOT::VecOps::RVec<float>& v, int idx) { return static_cast<double>(v[idx]); }, {eta_var.Data(), "final_highpt_idx"})
        .Define("final_phi", [](const ROOT::VecOps::RVec<float>& v, int idx) { return static_cast<double>(v[idx]); }, {phi_var.Data(), "final_highpt_idx"})
        .Define("final_pt", [](const ROOT::VecOps::RVec<float>& v, int idx) { return static_cast<double>(v[idx]); }, {pt_var.Data(), "final_highpt_idx"})
        .Define("trig_L1SingleMuCosmics",  "(int)(HLT_L1SingleMuCosmics)")
        .Define("trig_L1SingleMuOpen",     "(int)(HLT_L1SingleMuOpen)")
        .Define("trig_L1SingleMuOpen_DT",  "(int)(HLT_L1SingleMuOpen_DT)")
        .Define("trig_L1SingleMu3",        "(int)(HLT_L1SingleMu3)")
        .Define("trig_L1SingleMu5",        "(int)(HLT_L1SingleMu5)")
        .Define("trig_L1SingleMu7",        "(int)(HLT_L1SingleMu7)")
        .Define("trig_L1SingleMu18",       "(int)(HLT_L1SingleMu18)");

    // Book 2D trigger efficiency histograms at end of cutflow
    std::vector<ROOT::RDF::RResultPtr<TH2D>> trigeff_final;
    for (auto& t : triggers) {
        trigeff_final.push_back(df_final_notrig.Histo2D(
            {("h2_trigeff_eta_final_" + t.label).c_str(),
             (t.label + " vs #eta (final);#eta;" + t.label).c_str(),
             100, -3, 3, 2, -0.5, 1.5},
            "final_eta", t.col));
        trigeff_final.push_back(df_final_notrig.Histo2D(
            {("h2_trigeff_phi_final_" + t.label).c_str(),
             (t.label + " vs #phi (final);#phi;" + t.label).c_str(),
             100, -3.15, 3.15, 2, -0.5, 1.5},
            "final_phi", t.col));
        trigeff_final.push_back(df_final_notrig.Histo2D(
            {("h2_trigeff_pt_final_" + t.label).c_str(),
             (t.label + " vs p_{T} (final);p_{T} [GeV];" + t.label).c_str(),
             250, 0, 5000, 2, -0.5, 1.5},
            "final_pt", t.col));
    }

    // --- Subleading quality object at final level ---
    // Same event selection as leading final, but plot subleading object kinematics
    auto df_final_subleading_notrig = df_final_notrig
        .Define("final_subleading_idx", [region, pt_cut_value](
                const ROOT::VecOps::RVec<float>& pt,
                const ROOT::VecOps::RVec<float>& eta,
                const ROOT::VecOps::RVec<int>& nhits,
                const ROOT::VecOps::RVec<float>& chi2,
                const ROOT::VecOps::RVec<float>& ndof,
                const ROOT::VecOps::RVec<float>& ptErr) {
            int best = -1, second = -1;
            float best_pt = -1, second_pt = -1;
            for (size_t i = 0; i < pt.size(); ++i) {
                bool pass = nhits[i] > 7 && ndof[i] > 0 && chi2[i]/ndof[i] < 35 &&
                    pt[i] > 0 && ptErr[i]/(pt[i]*pt[i]) < 1e-3 && std::abs(eta[i]) < 0.9;
                if (!pass) continue;
                if (region == "sr" && pt[i] <= pt_cut_value) continue;
                if (region == "vr" && pt[i] >= pt_cut_value) continue;
                if (pt[i] > best_pt) {
                    second = best; second_pt = best_pt;
                    best = i; best_pt = pt[i];
                } else if (pt[i] > second_pt) {
                    second = i; second_pt = pt[i];
                }
            }
            return second;
        }, {pt_var.Data(), eta_var.Data(), nhits_var.Data(), chi2_var.Data(), ndof_var.Data(), ptErr_var.Data()})
        .Filter("final_subleading_idx >= 0")
        .Define("final_subleading_eta", [](const ROOT::VecOps::RVec<float>& v, int idx) { return static_cast<double>(v[idx]); }, {eta_var.Data(), "final_subleading_idx"})
        .Define("final_subleading_phi", [](const ROOT::VecOps::RVec<float>& v, int idx) { return static_cast<double>(v[idx]); }, {phi_var.Data(), "final_subleading_idx"})
        .Define("final_subleading_pt", [](const ROOT::VecOps::RVec<float>& v, int idx) { return static_cast<double>(v[idx]); }, {pt_var.Data(), "final_subleading_idx"});

    // Book 2D trigger efficiency histograms for subleading object at end of cutflow
    std::vector<ROOT::RDF::RResultPtr<TH2D>> trigeff_subleading_final;
    for (auto& t : triggers) {
        trigeff_subleading_final.push_back(df_final_subleading_notrig.Histo2D(
            {("h2_trigeff_eta_subleading_final_" + t.label).c_str(),
             (t.label + " vs subleading #eta (final);#eta;" + t.label).c_str(),
             100, -3, 3, 2, -0.5, 1.5},
            "final_subleading_eta", t.col));
        trigeff_subleading_final.push_back(df_final_subleading_notrig.Histo2D(
            {("h2_trigeff_phi_subleading_final_" + t.label).c_str(),
             (t.label + " vs subleading #phi (final);#phi;" + t.label).c_str(),
             100, -3.15, 3.15, 2, -0.5, 1.5},
            "final_subleading_phi", t.col));
        trigeff_subleading_final.push_back(df_final_subleading_notrig.Histo2D(
            {("h2_trigeff_pt_subleading_final_" + t.label).c_str(),
             (t.label + " vs subleading p_{T} (final);p_{T} [GeV];" + t.label).c_str(),
             250, 0, 5000, 2, -0.5, 1.5},
            "final_subleading_pt", t.col));
    }

    // --- Both legs: fill leading AND subleading final kinematics with same trigger ---
    auto df_final_bothlegs_notrig = df_final_subleading_notrig
        .Define("final_bothlegs_eta", [](double lead_eta, double sub_eta) {
            return ROOT::VecOps::RVec<double>{lead_eta, sub_eta};
        }, {"final_eta", "final_subleading_eta"})
        .Define("final_bothlegs_phi", [](double lead_phi, double sub_phi) {
            return ROOT::VecOps::RVec<double>{lead_phi, sub_phi};
        }, {"final_phi", "final_subleading_phi"})
        .Define("final_bothlegs_pt", [](double lead_pt, double sub_pt) {
            return ROOT::VecOps::RVec<double>{lead_pt, sub_pt};
        }, {"final_pt", "final_subleading_pt"})
        .Define("final_bothlegs_trig_L1SingleMuCosmics", [](int trig) { return ROOT::VecOps::RVec<int>{trig, trig}; }, {"trig_L1SingleMuCosmics"});

    // Book 2D trigger efficiency histograms for both legs at final level - L1SingleMuCosmics only
    std::vector<ROOT::RDF::RResultPtr<TH2D>> trigeff_bothlegs_final;
    trigeff_bothlegs_final.push_back(df_final_bothlegs_notrig.Histo2D(
        {"h2_trigeff_eta_bothlegs_final_L1SingleMuCosmics",
         "L1SingleMuCosmics vs both legs #eta (final);#eta;L1SingleMuCosmics",
         100, -3, 3, 2, -0.5, 1.5},
        "final_bothlegs_eta", "final_bothlegs_trig_L1SingleMuCosmics"));
    trigeff_bothlegs_final.push_back(df_final_bothlegs_notrig.Histo2D(
        {"h2_trigeff_phi_bothlegs_final_L1SingleMuCosmics",
         "L1SingleMuCosmics vs both legs #phi (final);#phi;L1SingleMuCosmics",
         100, -3.15, 3.15, 2, -0.5, 1.5},
        "final_bothlegs_phi", "final_bothlegs_trig_L1SingleMuCosmics"));
    trigeff_bothlegs_final.push_back(df_final_bothlegs_notrig.Histo2D(
        {"h2_trigeff_pt_bothlegs_final_L1SingleMuCosmics",
         "L1SingleMuCosmics vs both legs p_{T} (final);p_{T} [GeV];L1SingleMuCosmics",
         250, 0, 5000, 2, -0.5, 1.5},
        "final_bothlegs_pt", "final_bothlegs_trig_L1SingleMuCosmics"));

    // 1D histogram: which triggers fire at end of cutflow
    auto df_trig_bins_final = df_final_notrig
        .Define("trig_fired_bins_final", [](int t0, int t1, int t2, int t3, int t4, int t5, int t6) {
            ROOT::VecOps::RVec<double> bins;
            bins.push_back(0.);  // "All" - always filled
            if (t0) bins.push_back(1.);
            if (t1) bins.push_back(2.);
            if (t2) bins.push_back(3.);
            if (t3) bins.push_back(4.);
            if (t4) bins.push_back(5.);
            if (t5) bins.push_back(6.);
            if (t6) bins.push_back(7.);
            return bins;
        }, {"trig_L1SingleMuCosmics", "trig_L1SingleMuOpen", "trig_L1SingleMuOpen_DT",
            "trig_L1SingleMu3", "trig_L1SingleMu5", "trig_L1SingleMu7",
            "trig_L1SingleMu18"});
    auto h_trig_fired_final = df_trig_bins_final.Histo1D(
        {"h_trig_fired_final", "Individual trigger counts (final);Trigger;Events", 8, -0.5, 7.5},
        "trig_fired_bins_final");

    // 1D cutflow at final level: DT segments > 2 -> Has quality muon -> Quality + eta + pT -> L1SingleMuCosmics Triggered
    auto df_all_events_for_final = df_with_count
        .Define("trig_L1SingleMuCosmics_final", "(int)(HLT_L1SingleMuCosmics)")
        .Define("has_dt_segments_final", [](int n) { return n > 2 ? 1 : 0; }, {"muon_dtSeg_valid_n"})
        .Define("has_quality_muon_final", [](const ROOT::VecOps::RVec<float>& pt,
                                              const ROOT::VecOps::RVec<int>& nhits,
                                              const ROOT::VecOps::RVec<float>& chi2,
                                              const ROOT::VecOps::RVec<float>& ndof,
                                              const ROOT::VecOps::RVec<float>& ptErr) {
            for (size_t i = 0; i < pt.size(); ++i) {
                if (nhits[i] > 7 && ndof[i] > 0 && chi2[i]/ndof[i] < 35 &&
                    pt[i] > 0 && ptErr[i]/(pt[i]*pt[i]) < 1e-3) return 1;
            }
            return 0;
        }, {pt_var.Data(), nhits_var.Data(), chi2_var.Data(), ndof_var.Data(), ptErr_var.Data()})
        .Define("has_quality_muon_eta_pt", [region, pt_cut_value](const ROOT::VecOps::RVec<float>& pt,
                                                                   const ROOT::VecOps::RVec<float>& eta,
                                                                   const ROOT::VecOps::RVec<int>& nhits,
                                                                   const ROOT::VecOps::RVec<float>& chi2,
                                                                   const ROOT::VecOps::RVec<float>& ndof,
                                                                   const ROOT::VecOps::RVec<float>& ptErr) {
            for (size_t i = 0; i < pt.size(); ++i) {
                bool pass_quality = nhits[i] > 7 && ndof[i] > 0 && chi2[i]/ndof[i] < 35 &&
                                    pt[i] > 0 && ptErr[i]/(pt[i]*pt[i]) < 1e-3;
                if (!pass_quality) continue;
                if (std::abs(eta[i]) >= 0.9) continue;
                if (region == "sr" && pt[i] <= pt_cut_value) continue;
                if (region == "vr" && pt[i] >= pt_cut_value) continue;
                return 1;
            }
            return 0;
        }, {pt_var.Data(), eta_var.Data(), nhits_var.Data(), chi2_var.Data(), ndof_var.Data(), ptErr_var.Data()})
        .Define("cutflow_final_bins", [](int has_dt, int has_quality, int has_quality_eta_pt, int trig) {
            ROOT::VecOps::RVec<double> bins;
            bins.push_back(0.);  // All events
            if (has_dt) bins.push_back(1.);  // Has DT segments
            if (has_dt && has_quality) bins.push_back(2.);  // Has quality muon
            if (has_dt && has_quality_eta_pt) bins.push_back(3.);  // Has quality muon with eta+pT
            if (has_dt && has_quality_eta_pt && trig) bins.push_back(4.);  // Triggered
            return bins;
        }, {"has_dt_segments_final", "has_quality_muon_final", "has_quality_muon_eta_pt", "trig_L1SingleMuCosmics_final"});
    auto h_cutflow_final = df_all_events_for_final.Histo1D(
        {"h_cutflow_final", "Cutflow (final);Selection;Events", 5, -0.5, 4.5},
        "cutflow_final_bins");

    // ============================================================
    // Write output
    // ============================================================

    TFile* f = TFile::Open(output_file.Data(), "RECREATE");

    // Write trigger fired histograms with bin labels
    std::vector<std::string> trig_labels = {
        "All", "L1SingleMuCosmics", "L1SingleMuOpen", "L1SingleMuOpen_DT",
        "L1SingleMu3", "L1SingleMu5", "L1SingleMu7", "L1SingleMu18"
    };

    auto* h_tf = h_trig_fired.GetPtr();
    for (int i = 0; i < 8; ++i) h_tf->GetXaxis()->SetBinLabel(i+1, trig_labels[i].c_str());
    h_tf->Write();

    auto* h_tf_final = h_trig_fired_final.GetPtr();
    for (int i = 0; i < 8; ++i) h_tf_final->GetXaxis()->SetBinLabel(i+1, trig_labels[i].c_str());
    h_tf_final->Write();

    // Write cutflow histograms with bin labels
    std::vector<std::string> cutflow_pretrig_labels = {"All events", "DT segments > 2", "L1SingleMuCosmics"};
    auto* h_cf_pretrig = h_cutflow_pretrig.GetPtr();
    for (size_t i = 0; i < cutflow_pretrig_labels.size(); ++i)
        h_cf_pretrig->GetXaxis()->SetBinLabel(i+1, cutflow_pretrig_labels[i].c_str());
    h_cf_pretrig->Write();

    std::vector<std::string> cutflow_quality_labels = {"All events", "DT segments > 2", "Has quality muon", "L1SingleMuCosmics"};
    auto* h_cf_quality = h_cutflow_quality_pretrig.GetPtr();
    for (size_t i = 0; i < cutflow_quality_labels.size(); ++i)
        h_cf_quality->GetXaxis()->SetBinLabel(i+1, cutflow_quality_labels[i].c_str());
    h_cf_quality->Write();

    std::vector<std::string> cutflow_final_labels = {"All events", "DT segments > 2", "Has quality muon", "Quality + eta + pT", "L1SingleMuCosmics"};
    auto* h_cf_final = h_cutflow_final.GetPtr();
    for (size_t i = 0; i < cutflow_final_labels.size(); ++i)
        h_cf_final->GetXaxis()->SetBinLabel(i+1, cutflow_final_labels[i].c_str());
    h_cf_final->Write();

    // Write 2D trigger efficiency histograms
    // pre-trigger histograms show trigger efficiency vs leading object kinematics
    // before any quality cuts, eta, pT, or segment requirements
    for (auto& h : trigeff_pretrig) h->Write();
    // subleading pre-trigger histograms
    for (auto& h : trigeff_subleading_pretrig) h->Write();
    // bothlegs pre-trigger histograms (OR of leading and subleading)
    for (auto& h : trigeff_bothlegs_pretrig) h->Write();
    // quality pre-trigger histograms show trigger efficiency for leading object that 
    // passes quality cuts, but before any eta, pT, or segment requirements
    for (auto& h : trigeff_quality_pretrig) h->Write();
    // subleading quality pre-trigger histograms
    for (auto& h : trigeff_quality_subleading_pretrig) h->Write();
    // bothlegs quality pre-trigger histograms
    for (auto& h : trigeff_quality_bothlegs_pretrig) h->Write();
    // final is defined after all cuts except trigger, so directly measures trigger efficiency of final selection
    // (i.e. At least one object exists nHits > 7, chi2/ndof < 35, ptErr/pT² < 1e-3, |eta| < 0.9
    //      pT cut (>200 for SR, <200 for VR), >2 valid DT segments )
    for (auto& h : trigeff_final) h->Write();
    // subleading final histograms
    for (auto& h : trigeff_subleading_final) h->Write();
    // bothlegs final histograms (OR of leading and subleading)
    for (auto& h : trigeff_bothlegs_final) h->Write();

    f->Close();
    delete f;

    std::cout << "\n" << std::string(60, '=') << "\n";
    std::cout << "Output written to: " << output_file << "\n";
    std::cout << std::string(60, '=') << "\n";
}
