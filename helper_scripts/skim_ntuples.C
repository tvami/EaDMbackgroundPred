/// Skim ntuples using RDataFrame, applying cuts sequentially and saving a cutflow histogram
/// Usage:
///       root -l -b -q 'skim_ntuples.C("track", "sr", "/path/to/files/")'
///       root -l -b -q 'skim_ntuples.C("track", "sr", "/path/to/files/", true)'  // with file validation

// Version: v4.0.6a
// Version history:
// v4.0.0: Added alternative cutflow ordering (object+eta before trigger) for comparison
// v4.0.2: Included HLT_Random trigger for Express datasets, added more histograms for trigger efficiency vs eta/phi/pT, added number of valid hits for muons
// v4.0.2: Snapshot now uses df_trigger for trigger studies and df_seg for regular skimming
// v4.0.4: Highest pT requires at least 8 hits, require chi2/ndof < 35, added N-1 plots for both of these, drop unused branches
// v4.0.5: Add cut on pT error (ptErr/pt^2 < 1e-3) for highest-pT object, add corresponding N-1 plot, add histograms of ptErr/pt^2 at trigger level (with no quality cuts) for monitoring
// v4.0.6: Move cutflow to be object level, so that it's more inclusive. Removed alternative cutflow and trigger studies. Add N-1 plot with object level
// v4.0.7: Move pt boundary to 10000 GeV
// v4.0.8: Add 2D histograms of leading object (and leading quality object) kinematics vs trigger
void skim_ntuples(TString object = "track", TString region = "sr", TString base_dir = "/ceph/cms/store/user/tvami/EarthAsDM/Cosmics/crab_Ntuplizer-Cosmics_Run2023D-CosmicTP-PromptReco-v1_v3/", bool validate = false) {

    // Enable multi-threading (use all available cores)
    ROOT::EnableImplicitMT();

    // Configuration
    // Extract the last directory name from base_dir path
    TString base_dir_copy = base_dir;
    if (base_dir_copy.EndsWith("/")) base_dir_copy.Remove(base_dir_copy.Length()-1);
    TString dataset_name = base_dir_copy(base_dir_copy.Last('/')+1, base_dir_copy.Length());
    dataset_name.ReplaceAll("crab_", "");
    if (dataset_name.EndsWith(".root")) dataset_name.Remove(dataset_name.Length()-5);
    TString output_file = TString::Format("skimmed_%s_%s_%s.root", object.Data(), region.Data(), dataset_name.Data());

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

    std::cout << "Running with object: " << object << "\n";
    std::cout << "Using variables: " << pt_var << ", " << eta_var << ", " << phi_var << ", " << n_var << ", " << nhits_var << "\n";

    // Create TChain to handle directory structure
    TChain chain("muonPhiAnalyzer/tree");

    // Use find to get all .root files
    TString find_cmd = TString::Format("find %s -name '*.root' 2>/dev/null", base_dir.Data());
    FILE* pipe = popen(find_cmd.Data(), "r");
    if (!pipe) {
        std::cerr << "Error: cannot run find command\n";
        return;
    }

    std::cout << "Reading filenames from pipe\n";

    char buffer[2048];
    int nfiles = 0;
    int nzombie = 0;
    while (fgets(buffer, sizeof(buffer), pipe) != NULL) {
        TString filename = buffer;
        filename.ReplaceAll("\n", "");
        if (filename.Length() > 0) {
            if (validate) {
                // Check if file is valid and not a zombie
                TFile* test_file = TFile::Open(filename.Data(), "READ");
                if (test_file && !test_file->IsZombie() && test_file->GetNkeys() > 0) {
                    test_file->Close();
                    delete test_file;
                    chain.Add(filename.Data());
                    if (nfiles % 10 == 0) std::cout << "Added " << nfiles << " files...\r" << std::flush;
                    nfiles++;
                } else {
                    std::cerr << "Warning: Skipping corrupted or zombie file: " << filename << "\n";
                    nzombie++;
                    if (test_file) {
                        delete test_file;
                    }
                }
            } else {
                chain.Add(filename.Data());
                nfiles++;
                if (nfiles % 10 == 0) std::cout << "Added " << nfiles << " files...\r" << std::flush;
            }
        }
    }
    pclose(pipe);

    if (nzombie > 0) {
        std::cerr << "Skipped " << nzombie << " corrupted/zombie files\n";
    }

    // Check if any files were found
    if (nfiles == 0) {
        std::cerr << "Error: No ROOT files found in the specified directory.\n";
        return;
    }

    std::cout << "Found " << nfiles << " files\n";

    // Create RDataFrame from TChain
    ROOT::RDataFrame df(chain);

    // Apply region-specific pT cut
    TString pt_cut_label;
    float pt_cut_value = 200.f;
    if (region == "sr") {
        pt_cut_label = "pT > 200 GeV";
    } else if (region == "vr") {
        pt_cut_label = "pT < 200 GeV";
    } else {
        std::cerr << "Error: Unknown region '" << region << "'. Use 'sr' or 'vr'.\n";
        return;
    }

    // Count valid DT segments
    auto count_valid_segs = [](ROOT::VecOps::RVec<float> times) {
        int count = 0;
        for (auto t : times) {
            if (t > -998 && t < 9998) count++;
        }
        return count;
    };

    auto df_with_count = df.Define("muon_dtSeg_valid_n", count_valid_segs, {"muon_dtSeg_t0timing"});

    // 0. Pre-trigger level: all objects before any cuts
    auto df_pretrig_histos = df_with_count
    .Define("obj_chi2ndof_pretrig", [](const ROOT::VecOps::RVec<float>& chi2,
                                       const ROOT::VecOps::RVec<float>& ndof) {
        ROOT::VecOps::RVec<float> r(chi2.size());
        for (size_t i = 0; i < chi2.size(); ++i)
            r[i] = ndof[i] > 0 ? chi2[i]/ndof[i] : 999.f;
        return r;
    }, {chi2_var.Data(), ndof_var.Data()})
    .Define("obj_ptErrPerPt2_pretrig", [](const ROOT::VecOps::RVec<float>& pt,
                                          const ROOT::VecOps::RVec<float>& ptErr) {
        ROOT::VecOps::RVec<float> r(pt.size());
        for (size_t i = 0; i < pt.size(); ++i)
            r[i] = pt[i] > 0 ? ptErr[i]/(pt[i]*pt[i]) : 999.f;
        return r;
    }, {pt_var.Data(), ptErr_var.Data()});

    auto h_nhits_pretrigger = df_pretrig_histos.Histo1D({"h_nhits_pretrigger", "Valid hits (pretrigger);N_{valid hits};Objects", 80, 0, 80}, nhits_var.Data());
    auto h_chi2ndof_pretrigger = df_pretrig_histos.Histo1D({"h_chi2ndof_pretrigger", "#chi^{2}/ndof (pretrigger);#chi^{2}/ndof;Objects", 100, 0, 100}, "obj_chi2ndof_pretrig");
    auto h_ptErrPerPt2_pretrigger = df_pretrig_histos.Histo1D({"h_ptErrPerPt2_pretrigger", "#sigma(p_{T})/p_{T}^{2} (pretrigger);#sigma(p_{T})/p_{T}^{2} [GeV^{-1}];Objects", 100, 0, 0.01}, "obj_ptErrPerPt2_pretrig");
    auto h_eta_pretrigger = df_pretrig_histos.Histo1D({"h_eta_pretrigger", "#eta (pretrigger);#eta;Objects", 100, -3, 3}, eta_var.Data());
    auto h_phi_pretrigger = df_pretrig_histos.Histo1D({"h_phi_pretrigger", "#phi (pretrigger);#phi;Objects", 100, -3.15, 3.15}, phi_var.Data());
    auto h_pt_pretrigger = df_pretrig_histos.Histo1D({"h_pt_pretrigger", "p_{T} (pretrigger);p_{T} [GeV];Objects", 500, 0, 10000}, pt_var.Data());
    auto h_nseg_pretrigger = df_with_count.Histo1D({"h_nseg_pretrigger", "DT segments (pretrigger);N_{seg};Events", 20, 0, 20}, "muon_dtSeg_valid_n");

    // 2D histograms: leading object kinematics vs trigger (before any cuts)
    auto df_leading_vs_trigger = df_with_count
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
    .Define("leading_energy_pretrig", [](const ROOT::VecOps::RVec<float>& pt, const ROOT::VecOps::RVec<float>& eta, int idx) {
        return static_cast<double>(pt[idx] * std::cosh(eta[idx]));
    }, {pt_var.Data(), eta_var.Data(), "leading_idx_pretrig"})
    .Define("trigger_passed", "static_cast<double>(HLT_L1SingleMuCosmics)");

    auto h_eta_vs_trigger = df_leading_vs_trigger.Histo2D(
        {"h_eta_vs_trigger", "Leading obj #eta vs trigger;#eta;Trigger", 100, -3, 3, 2, -0.5, 1.5},
        "leading_eta_pretrig", "trigger_passed");
    auto h_phi_vs_trigger = df_leading_vs_trigger.Histo2D(
        {"h_phi_vs_trigger", "Leading obj #phi vs trigger;#phi;Trigger", 100, -3.15, 3.15, 2, -0.5, 1.5},
        "leading_phi_pretrig", "trigger_passed");
    auto h_pt_vs_trigger = df_leading_vs_trigger.Histo2D(
        {"h_pt_vs_trigger", "Leading obj p_{T} vs trigger;p_{T} [GeV];Trigger", 500, 0, 10000, 2, -0.5, 1.5},
        "leading_pt_pretrig", "trigger_passed");
    auto h_energy_vs_trigger = df_leading_vs_trigger.Histo2D(
        {"h_energy_vs_trigger", "Leading obj energy vs trigger;E [GeV];Trigger", 500, 0, 10000, 2, -0.5, 1.5},
        "leading_energy_pretrig", "trigger_passed");

    // 2D histograms: leading quality object kinematics vs trigger (before any cuts)
    // Quality: nHits > 7, chi2/ndof < 35, ptErr/pT^2 < 1e-3
    auto df_quality_vs_trigger = df_with_count
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
    .Define("quality_leading_energy", [](const ROOT::VecOps::RVec<float>& pt, const ROOT::VecOps::RVec<float>& eta, int idx) {
        return static_cast<double>(pt[idx] * std::cosh(eta[idx]));
    }, {pt_var.Data(), eta_var.Data(), "quality_leading_idx"})
    .Define("trigger_passed_q", "static_cast<double>(HLT_L1SingleMuCosmics)");

    auto h_eta_vs_trigger_with_quality_obj = df_quality_vs_trigger.Histo2D(
        {"h_eta_vs_trigger_with_quality_obj", "Leading quality obj #eta vs trigger;#eta;Trigger", 100, -3, 3, 2, -0.5, 1.5},
        "quality_leading_eta", "trigger_passed_q");
    auto h_phi_vs_trigger_with_quality_obj = df_quality_vs_trigger.Histo2D(
        {"h_phi_vs_trigger_with_quality_obj", "Leading quality obj #phi vs trigger;#phi;Trigger", 100, -3.15, 3.15, 2, -0.5, 1.5},
        "quality_leading_phi", "trigger_passed_q");
    auto h_pt_vs_trigger_with_quality_obj = df_quality_vs_trigger.Histo2D(
        {"h_pt_vs_trigger_with_quality_obj", "Leading quality obj p_{T} vs trigger;p_{T} [GeV];Trigger", 500, 0, 10000, 2, -0.5, 1.5},
        "quality_leading_pt", "trigger_passed_q");
    auto h_energy_vs_trigger_with_quality_obj = df_quality_vs_trigger.Histo2D(
        {"h_energy_vs_trigger_with_quality_obj", "Leading quality obj energy vs trigger;E [GeV];Trigger", 500, 0, 10000, 2, -0.5, 1.5},
        "quality_leading_energy", "trigger_passed_q");

    // --- Object-level cutflow ---
    // Each step counts objects passing progressively tighter cuts,
    // then requires at least one such object in the event.

    // Step 1: Trigger
    auto df_trigger = df_with_count.Filter("HLT_L1SingleMuCosmics", "Trigger");

    // Step 2: At least one object
    auto df_cf_hasobjs = df_trigger.Filter(TString::Format("%s > 0", n_var.Data()).Data(), "n > 0");

    // Step 3: At least one object with nHits > 7
    auto df_cf_nhits = df_cf_hasobjs
    .Define("nobj_nhits", [](const ROOT::VecOps::RVec<int>& nhits){
        int n = 0;
        for (auto h : nhits) if (h > 7) n++;
        return n;
    }, {nhits_var.Data()})
    .Filter("nobj_nhits > 0", "nHits > 7");

    // Step 4: + chi2/ndof < 35
    auto df_cf_nhits_chi2ndof = df_cf_nhits
    .Define("nobj_chi2ndof", [](const ROOT::VecOps::RVec<int>& nhits,
                               const ROOT::VecOps::RVec<float>& chi2,
                               const ROOT::VecOps::RVec<float>& ndof){
        int n = 0;
        for (size_t i = 0; i < nhits.size(); ++i)
            if (nhits[i] > 7 && ndof[i] > 0 && chi2[i]/ndof[i] < 35) n++;
        return n;
    }, {nhits_var.Data(), chi2_var.Data(), ndof_var.Data()})
    .Filter("nobj_chi2ndof > 0", "#chi^{2}/ndof < 35");

    // Step 5: + ptErr/pT^2 < 1e-3
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
    .Filter("nobj_quality > 0", "#sigma(p_{T})/p_{T}^{2} < 10^{-3}");

    // Step 6: + |eta| < 0.9
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
    .Filter("nobj_eta > 0", "|#eta| < 0.9");

    // Step 7: + pT cut (region-dependent)
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
    .Filter("nobj_pt > 0", pt_cut_label.Data());

    // Step 8: + enough DT segments
    auto df_cf_seg = df_cf_pt.Filter("muon_dtSeg_valid_n > 2", "nSeg > 2");

    // Define count actions BEFORE Snapshot so they run in the same event loop
    auto count_all = df.Count();
    auto count_trigger = df_trigger.Count();
    auto count_track = df_cf_hasobjs.Count();
    auto count_cf_nhits = df_cf_nhits.Count();
    auto count_cf_nhits_chi2 = df_cf_nhits_chi2ndof.Count();
    auto count_cf_quality = df_cf_quality.Count();
    auto count_cf_eta = df_cf_eta.Count();
    auto count_cf_pt = df_cf_pt.Count();
    auto count_cf_seg = df_cf_seg.Count();

    // 2D histogram: object multiplicity at each cutflow step (for events passing all cuts)
    auto h2_cutflow_nobj = df_cf_seg
    .Define("nobj_exists", 
        "static_cast<int>(" + std::string(n_var.Data()) + ")")
    .Define("cf_step", [](int n, int nhits, int chi2ndof, int quality, int eta, int pt) {
        return ROOT::VecOps::RVec<double>{0., 1., 2., 3., 4., 5.};
    }, {"nobj_exists", "nobj_nhits", "nobj_chi2ndof", "nobj_quality", "nobj_eta", "nobj_pt"})
    .Define("cf_nobj", [](int n, int nhits, int chi2ndof, int quality, int eta, int pt) {
        return ROOT::VecOps::RVec<double>{(double)n, (double)nhits, (double)chi2ndof, (double)quality, (double)eta, (double)pt};
    }, {"nobj_exists", "nobj_nhits", "nobj_chi2ndof", "nobj_quality", "nobj_eta", "nobj_pt"})
    .Histo2D({"h2_cutflow_nobj", "Object multiplicity at each cutflow step;Cutflow step;N_{obj}",
              6, -0.5, 5.5, 20, 0.5, 20.5}, "cf_step", "cf_nobj");

    // 1. Trigger level: all objects in triggered events, no quality cuts
    auto df_trig_histos = df_trigger
    .Define("obj_chi2ndof_trig", [](const ROOT::VecOps::RVec<float>& chi2,
                                     const ROOT::VecOps::RVec<float>& ndof) {
        ROOT::VecOps::RVec<float> r(chi2.size());
        for (size_t i = 0; i < chi2.size(); ++i)
            r[i] = ndof[i] > 0 ? chi2[i]/ndof[i] : 999.f;
        return r;
    }, {chi2_var.Data(), ndof_var.Data()})
    .Define("obj_ptErrPerPt2_trig", [](const ROOT::VecOps::RVec<float>& pt,
                                        const ROOT::VecOps::RVec<float>& ptErr) {
        ROOT::VecOps::RVec<float> r(pt.size());
        for (size_t i = 0; i < pt.size(); ++i)
            r[i] = pt[i] > 0 ? ptErr[i]/(pt[i]*pt[i]) : 999.f;
        return r;
    }, {pt_var.Data(), ptErr_var.Data()});

    auto h_nhits_trigger = df_trig_histos.Histo1D({"h_nhits_trigger", "Valid hits (trigger);N_{valid hits};Objects", 80, 0, 80}, nhits_var.Data());
    auto h_chi2ndof_trigger = df_trig_histos.Histo1D({"h_chi2ndof_trigger", "#chi^{2}/ndof (trigger);#chi^{2}/ndof;Objects", 100, 0, 100}, "obj_chi2ndof_trig");
    auto h_ptErrPerPt2_trigger = df_trig_histos.Histo1D({"h_ptErrPerPt2_trigger", "#sigma(p_{T})/p_{T}^{2} (trigger);#sigma(p_{T})/p_{T}^{2} [GeV^{-1}];Objects", 100, 0, 0.01}, "obj_ptErrPerPt2_trig");
    auto h_eta_trigger = df_trig_histos.Histo1D({"h_eta_trigger", "#eta (trigger);#eta;Objects", 100, -3, 3}, eta_var.Data());
    auto h_phi_trigger = df_trig_histos.Histo1D({"h_phi_trigger", "#phi (trigger);#phi;Objects", 100, -3.15, 3.15}, phi_var.Data());
    auto h_pt_trigger = df_trig_histos.Histo1D({"h_pt_trigger", "p_{T} (trigger);p_{T} [GeV];Objects", 500, 0, 10000}, pt_var.Data());
    auto h_nseg_trigger = df_trigger.Histo1D({"h_nseg_trigger", "DT segments (trigger);N_{seg};Events", 20, 0, 20}, "muon_dtSeg_valid_n");

    // 2-3. Final and N-1 histograms using per-object bitmask on df_cf_seg
    // Bit 0: nhits > 7,  Bit 1: chi2/ndof < 35,  Bit 2: ptErr/pT^2 < 1e-3,
    // Bit 3: |eta| < 0.9,  Bit 4: pT cut
    // ALL = 31 (0b11111)
    // N-1 masks: no_nhits=30, no_chi2=29, no_ptErr=27, no_eta=23, no_pt=15
    auto df_seg_histos = df_cf_seg
    .Define("obj_cut_mask", [region, pt_cut_value](
            const ROOT::VecOps::RVec<int>& nhits,
            const ROOT::VecOps::RVec<float>& chi2,
            const ROOT::VecOps::RVec<float>& ndof,
            const ROOT::VecOps::RVec<float>& pt,
            const ROOT::VecOps::RVec<float>& ptErr,
            const ROOT::VecOps::RVec<float>& eta) {
        ROOT::VecOps::RVec<int> mask(nhits.size());
        for (size_t i = 0; i < nhits.size(); ++i) {
            int m = 0;
            if (nhits[i] > 7) m |= 1;
            if (ndof[i] > 0 && chi2[i]/ndof[i] < 35) m |= 2;
            if (pt[i] > 0 && ptErr[i]/(pt[i]*pt[i]) < 1e-3) m |= 4;
            if (std::abs(eta[i]) < 0.9) m |= 8;
            if ((region == "sr" && pt[i] > pt_cut_value) || (region == "vr" && pt[i] < pt_cut_value)) m |= 16;
            mask[i] = m;
        }
        return mask;
    }, {nhits_var.Data(), chi2_var.Data(), ndof_var.Data(), pt_var.Data(), ptErr_var.Data(), eta_var.Data()})
    // _final: objects passing all cuts (mask == 31)
    .Define("nhits_final", [](const ROOT::VecOps::RVec<int>& v, const ROOT::VecOps::RVec<int>& m) {
        ROOT::VecOps::RVec<int> r; for (size_t i = 0; i < v.size(); ++i) if (m[i] == 31) r.push_back(v[i]); return r;
    }, {nhits_var.Data(), "obj_cut_mask"})
    .Define("chi2ndof_final", [](const ROOT::VecOps::RVec<float>& chi2, const ROOT::VecOps::RVec<float>& ndof, const ROOT::VecOps::RVec<int>& m) {
        ROOT::VecOps::RVec<float> r; for (size_t i = 0; i < chi2.size(); ++i) if (m[i] == 31) r.push_back(chi2[i]/ndof[i]); return r;
    }, {chi2_var.Data(), ndof_var.Data(), "obj_cut_mask"})
    .Define("ptErrPerPt2_final", [](const ROOT::VecOps::RVec<float>& pt, const ROOT::VecOps::RVec<float>& ptErr, const ROOT::VecOps::RVec<int>& m) {
        ROOT::VecOps::RVec<float> r; for (size_t i = 0; i < pt.size(); ++i) if (m[i] == 31) r.push_back(ptErr[i]/(pt[i]*pt[i])); return r;
    }, {pt_var.Data(), ptErr_var.Data(), "obj_cut_mask"})
    .Define("eta_final", [](const ROOT::VecOps::RVec<float>& v, const ROOT::VecOps::RVec<int>& m) {
        ROOT::VecOps::RVec<float> r; for (size_t i = 0; i < v.size(); ++i) if (m[i] == 31) r.push_back(v[i]); return r;
    }, {eta_var.Data(), "obj_cut_mask"})
    .Define("pt_final", [](const ROOT::VecOps::RVec<float>& v, const ROOT::VecOps::RVec<int>& m) {
        ROOT::VecOps::RVec<float> r; for (size_t i = 0; i < v.size(); ++i) if (m[i] == 31) r.push_back(v[i]); return r;
    }, {pt_var.Data(), "obj_cut_mask"})
    // _nminus1: objects passing all cuts except the plotted variable
    .Define("nhits_nminus1", [](const ROOT::VecOps::RVec<int>& v, const ROOT::VecOps::RVec<int>& m) {
        ROOT::VecOps::RVec<int> r; for (size_t i = 0; i < v.size(); ++i) if ((m[i] & 30) == 30) r.push_back(v[i]); return r;
    }, {nhits_var.Data(), "obj_cut_mask"})
    .Define("chi2ndof_nminus1", [](const ROOT::VecOps::RVec<float>& chi2, const ROOT::VecOps::RVec<float>& ndof, const ROOT::VecOps::RVec<int>& m) {
        ROOT::VecOps::RVec<float> r; for (size_t i = 0; i < chi2.size(); ++i) if ((m[i] & 29) == 29) r.push_back(ndof[i] > 0 ? chi2[i]/ndof[i] : 999.f); return r;
    }, {chi2_var.Data(), ndof_var.Data(), "obj_cut_mask"})
    .Define("ptErrPerPt2_nminus1", [](const ROOT::VecOps::RVec<float>& pt, const ROOT::VecOps::RVec<float>& ptErr, const ROOT::VecOps::RVec<int>& m) {
        ROOT::VecOps::RVec<float> r; for (size_t i = 0; i < pt.size(); ++i) if ((m[i] & 27) == 27) r.push_back(pt[i] > 0 ? ptErr[i]/(pt[i]*pt[i]) : 999.f); return r;
    }, {pt_var.Data(), ptErr_var.Data(), "obj_cut_mask"})
    .Define("eta_nminus1", [](const ROOT::VecOps::RVec<float>& v, const ROOT::VecOps::RVec<int>& m) {
        ROOT::VecOps::RVec<float> r; for (size_t i = 0; i < v.size(); ++i) if ((m[i] & 23) == 23) r.push_back(v[i]); return r;
    }, {eta_var.Data(), "obj_cut_mask"})
    .Define("pt_nminus1", [](const ROOT::VecOps::RVec<float>& v, const ROOT::VecOps::RVec<int>& m) {
        ROOT::VecOps::RVec<float> r; for (size_t i = 0; i < v.size(); ++i) if ((m[i] & 15) == 15) r.push_back(v[i]); return r;
    }, {pt_var.Data(), "obj_cut_mask"})
    .Define("phi_final", [](const ROOT::VecOps::RVec<float>& v, const ROOT::VecOps::RVec<int>& m) {
        ROOT::VecOps::RVec<float> r; for (size_t i = 0; i < v.size(); ++i) if (m[i] == 31) r.push_back(v[i]); return r;
    }, {phi_var.Data(), "obj_cut_mask"})
    .Define("phi_nminus1", [](const ROOT::VecOps::RVec<float>& v, const ROOT::VecOps::RVec<int>& m) {
        ROOT::VecOps::RVec<float> r; for (size_t i = 0; i < v.size(); ++i) if (m[i] == 31) r.push_back(v[i]); return r;
    }, {phi_var.Data(), "obj_cut_mask"})
    // _highpt: properties of the highest-pT object passing all cuts (mask == 31)
    .Define("highpt_idx", [](const ROOT::VecOps::RVec<float>& pt, const ROOT::VecOps::RVec<int>& m) {
        int best = -1; float best_pt = -1;
        for (size_t i = 0; i < pt.size(); ++i)
            if (m[i] == 31 && pt[i] > best_pt) { best = i; best_pt = pt[i]; }
        return best;
    }, {pt_var.Data(), "obj_cut_mask"})
    .Define("nhits_highpt", [](const ROOT::VecOps::RVec<int>& v, int idx) { return v[idx]; }, {nhits_var.Data(), "highpt_idx"})
    .Define("chi2ndof_highpt", [](const ROOT::VecOps::RVec<float>& chi2, const ROOT::VecOps::RVec<float>& ndof, int idx) {
        return chi2[idx]/ndof[idx];
    }, {chi2_var.Data(), ndof_var.Data(), "highpt_idx"})
    .Define("ptErrPerPt2_highpt", [](const ROOT::VecOps::RVec<float>& pt, const ROOT::VecOps::RVec<float>& ptErr, int idx) {
        return ptErr[idx]/(pt[idx]*pt[idx]);
    }, {pt_var.Data(), ptErr_var.Data(), "highpt_idx"})
    .Define("eta_highpt", [](const ROOT::VecOps::RVec<float>& v, int idx) { return v[idx]; }, {eta_var.Data(), "highpt_idx"})
    .Define("phi_highpt", [](const ROOT::VecOps::RVec<float>& v, int idx) { return v[idx]; }, {phi_var.Data(), "highpt_idx"})
    .Define("pt_highpt", [](const ROOT::VecOps::RVec<float>& v, int idx) { return v[idx]; }, {pt_var.Data(), "highpt_idx"});

    // Book final histograms
    auto h_nhits_final = df_seg_histos.Histo1D({"h_nhits_final", "Valid hits (final);N_{valid hits};Objects", 80, 0, 80}, "nhits_final");
    auto h_chi2ndof_final = df_seg_histos.Histo1D({"h_chi2ndof_final", "#chi^{2}/ndof (final);#chi^{2}/ndof;Objects", 100, 0, 100}, "chi2ndof_final");
    auto h_ptErrPerPt2_final = df_seg_histos.Histo1D({"h_ptErrPerPt2_final", "#sigma(p_{T})/p_{T}^{2} (final);#sigma(p_{T})/p_{T}^{2} [GeV^{-1}];Objects", 100, 0, 0.01}, "ptErrPerPt2_final");
    auto h_eta_final = df_seg_histos.Histo1D({"h_eta_final", "#eta (final);#eta;Objects", 100, -3, 3}, "eta_final");
    auto h_phi_final = df_seg_histos.Histo1D({"h_phi_final", "#phi (final);#phi;Objects", 100, -3.15, 3.15}, "phi_final");
    auto h_pt_final = df_seg_histos.Histo1D({"h_pt_final", "p_{T} (final);p_{T} [GeV];Objects", 500, 0, 10000}, "pt_final");
    auto h_nseg_final = df_cf_seg.Histo1D({"h_nseg_final", "DT segments (final);N_{seg};Events", 20, 0, 20}, "muon_dtSeg_valid_n");

    // Book highest-pT histograms
    auto h_nhits_highpt = df_seg_histos.Histo1D({"h_nhits_highpt", "Valid hits (highest p_{T});N_{valid hits};Events", 80, 0, 80}, "nhits_highpt");
    auto h_chi2ndof_highpt = df_seg_histos.Histo1D({"h_chi2ndof_highpt", "#chi^{2}/ndof (highest p_{T});#chi^{2}/ndof;Events", 100, 0, 100}, "chi2ndof_highpt");
    auto h_ptErrPerPt2_highpt = df_seg_histos.Histo1D({"h_ptErrPerPt2_highpt", "#sigma(p_{T})/p_{T}^{2} (highest p_{T});#sigma(p_{T})/p_{T}^{2} [GeV^{-1}];Events", 100, 0, 0.01}, "ptErrPerPt2_highpt");
    auto h_eta_highpt = df_seg_histos.Histo1D({"h_eta_highpt", "#eta (highest p_{T});#eta;Events", 100, -3, 3}, "eta_highpt");
    auto h_phi_highpt = df_seg_histos.Histo1D({"h_phi_highpt", "#phi (highest p_{T});#phi;Events", 100, -3.15, 3.15}, "phi_highpt");
    auto h_pt_highpt = df_seg_histos.Histo1D({"h_pt_highpt", "p_{T} (highest p_{T});p_{T} [GeV];Events", 500, 0, 10000}, "pt_highpt");

    // Book N-1 histograms
    auto h_nhits_nminus1 = df_seg_histos.Histo1D({"h_nhits_nminus1", "Valid hits (N-1);N_{valid hits};Objects", 80, 0, 80}, "nhits_nminus1");
    auto h_chi2ndof_nminus1 = df_seg_histos.Histo1D({"h_chi2ndof_nminus1", "#chi^{2}/ndof (N-1);#chi^{2}/ndof;Objects", 100, 0, 100}, "chi2ndof_nminus1");
    auto h_ptErrPerPt2_nminus1 = df_seg_histos.Histo1D({"h_ptErrPerPt2_nminus1", "#sigma(p_{T})/p_{T}^{2} (N-1);#sigma(p_{T})/p_{T}^{2} [GeV^{-1}];Objects", 100, 0, 0.01}, "ptErrPerPt2_nminus1");
    auto h_eta_nminus1 = df_seg_histos.Histo1D({"h_eta_nminus1", "#eta (N-1);#eta;Objects", 100, -3, 3}, "eta_nminus1");
    auto h_phi_nminus1 = df_seg_histos.Histo1D({"h_phi_nminus1", "#phi (N-1);#phi;Objects", 100, -3.15, 3.15}, "phi_nminus1");
    auto h_pt_nminus1 = df_seg_histos.Histo1D({"h_pt_nminus1", "p_{T} (N-1);p_{T} [GeV];Objects", 500, 0, 10000}, "pt_nminus1");
    // N-1 for nseg: events passing all object cuts, no nseg requirement (= df_cf_pt)
    auto h_nseg_nminus1 = df_cf_pt.Histo1D({"h_nseg_nminus1", "DT segments (N-1);N_{seg};Events", 20, 0, 20}, "muon_dtSeg_valid_n");

    // Define branches to keep (drop all others) based on object
    std::vector<std::string> branches_to_keep = {
        "run",
        "ls",
        "event",
        "HLT_L1SingleMuCosmics",
        "HLT_Random",
        "muon_dtSeg_n",
        "muon_dtSeg_t0timing",
        "muon_dtSeg_globX",
        "muon_dtSeg_globY",
        "muon_dtSeg_globZ",
    };

    if (object == "track") {
        branches_to_keep.insert(branches_to_keep.end(), {
            "track_n",
            "track_pt",
            "track_ptErr",
            "track_eta",
            "track_phi",
            "track_chi2",
            "track_ndof",
            "track_numberOfValidHits",
            "track_validFraction",
        });
    } else if (object == "muon") {
        branches_to_keep.insert(branches_to_keep.end(), {
            "muon_n",
            "muon_pt",
            "muon_ptErr",
            "muon_eta",
            "muon_phi",
            "muon_energy",
            "muon_chi2",
            "muon_comb_ndof",
            "muon_d0",
            "muon_dZ",
            "muon_validFractionTrackerHits",
            "muon_numberOfValidHits",
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
            "muon_fromGenTrack_NumValidHits",
            "muon_fromGenTrack_ValidFraction",
        });
    } else if (object == "tuneP") {
        branches_to_keep.insert(branches_to_keep.end(), {
            "muon_n",
            "muon_tuneP_Pt",
            "muon_tuneP_PtErr",
            "muon_tuneP_Eta",
            "muon_tuneP_Phi",
            "muon_tuneP_MuonBestTrackType",
            "muon_chi2",
            "muon_comb_ndof",
            "muon_numberOfValidHits",
        });
    } // end of branch selection

    // Write output (Snapshot triggers the event loop for all actions)
    df_cf_seg.Snapshot("tree", output_file.Data(), branches_to_keep);

    auto report = df_cf_seg.Report();
    report->Print();

    // Create and save cutflow histogram using the already-computed counts
    TFile* f = TFile::Open(output_file.Data(), "UPDATE");
    TH1F* h_cutflow = new TH1F("h_cutflow", "Cutflow Cumulative Yields;Cut;Cumulative Yields", 9, 0, 9);
    h_cutflow->GetXaxis()->SetBinLabel(1, "All events");
    h_cutflow->GetXaxis()->SetBinLabel(2, "Trigger");
    h_cutflow->GetXaxis()->SetBinLabel(3, "N_{obj} > 0");
    h_cutflow->GetXaxis()->SetBinLabel(4, "N_{hits} > 7");
    h_cutflow->GetXaxis()->SetBinLabel(5, "#chi^{2}/ndof < 35");
    h_cutflow->GetXaxis()->SetBinLabel(6, "#sigma(p_{T})/p_{T}^{2} < 10^{-3}");
    h_cutflow->GetXaxis()->SetBinLabel(7, "|#eta| < 0.9");
    h_cutflow->GetXaxis()->SetBinLabel(8, pt_cut_label.Data());
    h_cutflow->GetXaxis()->SetBinLabel(9, "N_{seg} > 2");

    double n_total = *count_all;
    h_cutflow->SetBinContent(1, n_total);
    h_cutflow->SetBinContent(2, *count_trigger);
    h_cutflow->SetBinContent(3, *count_track);
    h_cutflow->SetBinContent(4, *count_cf_nhits);
    h_cutflow->SetBinContent(5, *count_cf_nhits_chi2);
    h_cutflow->SetBinContent(6, *count_cf_quality);
    h_cutflow->SetBinContent(7, *count_cf_eta);
    h_cutflow->SetBinContent(8, *count_cf_pt);
    h_cutflow->SetBinContent(9, *count_cf_seg);

    h_cutflow->SetMinimum(0);
    h_cutflow->SetMaximum(1.1*n_total);
    h_cutflow->Write();

    // Write 2D cutflow histogram with bin labels
    auto* h2_objcount = h2_cutflow_nobj.GetPtr();
    h2_objcount->GetXaxis()->SetBinLabel(1, "N_{obj} > 0");
    h2_objcount->GetXaxis()->SetBinLabel(2, "w/ hits > 7");
    h2_objcount->GetXaxis()->SetBinLabel(3, "w/ #chi^{2}/ndof < 35");
    h2_objcount->GetXaxis()->SetBinLabel(4, "w/ #sigma(p_{T})/p_{T}^{2} < 10^{-3}");
    h2_objcount->GetXaxis()->SetBinLabel(5, "w/ |#eta| < 0.9");
    h2_objcount->GetXaxis()->SetBinLabel(6, TString::Format("w/ %s", pt_cut_label.Data()).Data());
    h2_objcount->Write();

    // Write distribution histograms (trigger, N-1, final)
    std::vector<ROOT::RDF::RResultPtr<TH1D>> histograms_1d = {
        h_nhits_pretrigger, h_chi2ndof_pretrigger, h_ptErrPerPt2_pretrigger,
        h_eta_pretrigger, h_phi_pretrigger, h_pt_pretrigger, h_nseg_pretrigger,
        h_nhits_trigger, h_chi2ndof_trigger, h_ptErrPerPt2_trigger,
        h_eta_trigger, h_phi_trigger, h_pt_trigger, h_nseg_trigger,
        h_nhits_nminus1, h_chi2ndof_nminus1, h_ptErrPerPt2_nminus1,
        h_eta_nminus1, h_phi_nminus1, h_pt_nminus1, h_nseg_nminus1,
        h_nhits_final, h_chi2ndof_final, h_ptErrPerPt2_final,
        h_eta_final, h_phi_final, h_pt_final, h_nseg_final,
        h_nhits_highpt, h_chi2ndof_highpt, h_ptErrPerPt2_highpt,
        h_eta_highpt, h_phi_highpt, h_pt_highpt
    };
    for (auto& h : histograms_1d) h->Write();

    std::vector<ROOT::RDF::RResultPtr<TH2D>> histograms_2d = {
        h_eta_vs_trigger, h_phi_vs_trigger, h_pt_vs_trigger, h_energy_vs_trigger,
        h_eta_vs_trigger_with_quality_obj, h_phi_vs_trigger_with_quality_obj,
        h_pt_vs_trigger_with_quality_obj, h_energy_vs_trigger_with_quality_obj
    };
    for (auto& h : histograms_2d) h->Write();

    f->Close();
    delete f;

    std::cout << "\n" << std::string(60, '=') << "\n";
    std::cout << "Output written to: " << output_file << "\n";
    std::cout << std::string(60, '=') << "\n";
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
  outputTree_ -> Branch ( "muon_numberOfValidHits", &muon_numberOfValidHits_);

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
