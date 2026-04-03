/// Trigger efficiency study: filter on HLT_Random and measure HLT_L1SingleMuCosmics efficiency
/// Usage:
///       root -l -b -q 'skim_ntuples_trigger.C("track", "sr", "/path/to/files/")'
///       root -l -b -q 'skim_ntuples_trigger.C("muon", "vr1", "/path/to/files/")'
///       root -l -b -q 'skim_ntuples_trigger.C("muon", "vr2", "/path/to/files/", true)'  // with file validation

void skim_ntuples_trigger(TString object = "track", TString region = "sr", TString base_dir = "/ceph/cms/store/user/tvami/EarthAsDM/Cosmics/crab_Ntuplizer-Cosmics_Run2023D-CosmicTP-PromptReco-v1_v3/", bool validate = false) {

    // Enable multi-threading (use all available cores)
    ROOT::EnableImplicitMT();

    // Extract the last directory name from base_dir path
    TString base_dir_copy = base_dir;
    if (base_dir_copy.EndsWith("/")) base_dir_copy.Remove(base_dir_copy.Length()-1);
    TString dataset_name = base_dir_copy(base_dir_copy.Last('/')+1, base_dir_copy.Length());
    dataset_name.ReplaceAll("crab_", "");
    if (dataset_name.EndsWith(".root")) dataset_name.Remove(dataset_name.Length() - 5);
    TString output_file = TString::Format("trigger_study_%s_%s_%s.root", object.Data(), region.Data(), dataset_name.Data());

    // Apply region-specific pT cut
    TString pt_cut_label;
    float pt_cut_value = 200.f;
    if (region == "sr" || region == "vr1") {
        pt_cut_label = "pT > 200 GeV";
    } else if (region == "vr2") {
        pt_cut_label = "pT < 200 GeV";
    } else {
        std::cerr << "Error: Unknown region '" << region << "'. Use 'sr', 'vr1', or 'vr2'.\n";
        return;
    }

    // Set variable names based on object
    TString pt_var, eta_var, phi_var, n_var, energy_var;
    bool has_energy_branch = false;
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
        energy_var = "muon_energy";
        has_energy_branch = true;
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
    } else {
        std::cerr << "Error: Unknown object '" << object << "'. Use 'track', 'muon', 'tuneP', or 'matched_muon'.\n";
        return;
    }

    std::cout << "Running trigger study with object: " << object << ", region: " << region << "\n";

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

    if (nfiles == 0) {
        std::cerr << "Error: No ROOT files found in the specified directory.\n";
        return;
    }

    std::cout << "Found " << nfiles << " files\n";

    // Create RDataFrame from TChain
    ROOT::RDataFrame df(chain);

    // Filter on HLT_Random
    auto df_random = df.Filter("HLT_Random", "HLT_Random");

    // Define HLT_L1SingleMuCosmics as int for histogramming
    auto df_trig = df_random.Define("cosmics_trig", "static_cast<int>(HLT_L1SingleMuCosmics)");

    // 1D histogram: HLT_L1SingleMuCosmics pass/fail
    auto h_cosmics = df_trig.Histo1D(
        {"h_HLT_L1SingleMuCosmics", "HLT_L1SingleMuCosmics (in HLT_Random events);HLT_L1SingleMuCosmics;Events",
         2, -0.5, 1.5},
        "cosmics_trig");

    // For the 2D histograms we need per-object entries paired with the event-level trigger decision.
    // Define flat vectors: one entry per object passing the region pT cut, each paired with the trigger value.
    auto df_obj = df_trig
    .Define("obj_pt_flat", [region, pt_cut_value](const ROOT::VecOps::RVec<float>& pt) {
        ROOT::VecOps::RVec<float> r;
        for (auto p : pt) {
            if (((region == "sr" || region == "vr1") && p > pt_cut_value) || (region == "vr2" && p < pt_cut_value)) r.push_back(p);
        }
        return r;
    }, {pt_var.Data()})
    .Define("obj_trig_for_pt", [](const ROOT::VecOps::RVec<float>& pt, int trig) {
        return ROOT::VecOps::RVec<int>(pt.size(), trig);
    }, {"obj_pt_flat", "cosmics_trig"});

    // 2D histogram: pT vs HLT_L1SingleMuCosmics
    auto h2_pt_vs_cosmics = df_obj.Histo2D(
        {"h2_pt_vs_HLT_L1SingleMuCosmics",
         "p_{T} vs HLT_L1SingleMuCosmics (in HLT_Random events);p_{T} [GeV];HLT_L1SingleMuCosmics",
         500, 0, 10000, 2, -0.5, 1.5},
        "obj_pt_flat", "obj_trig_for_pt");

    // 2D histogram: energy vs HLT_L1SingleMuCosmics
    ROOT::RDF::RResultPtr<TH2D> h2_energy_vs_cosmics;
    if (has_energy_branch) {
        // Use the existing energy branch directly, filtered by region pT cut
        auto df_energy = df_obj
        .Define("obj_energy_flat", [region, pt_cut_value](const ROOT::VecOps::RVec<float>& energy,
                                                          const ROOT::VecOps::RVec<float>& pt) {
            ROOT::VecOps::RVec<float> r;
            for (size_t i = 0; i < pt.size(); ++i) {
                if (((region == "sr" || region == "vr1") && pt[i] > pt_cut_value) || (region == "vr2" && pt[i] < pt_cut_value))
                    r.push_back(energy[i]);
            }
            return r;
        }, {energy_var.Data(), pt_var.Data()})
        .Define("obj_trig_for_energy", [](const ROOT::VecOps::RVec<float>& energy, int trig) {
            return ROOT::VecOps::RVec<int>(energy.size(), trig);
        }, {"obj_energy_flat", "cosmics_trig"});

        h2_energy_vs_cosmics = df_energy.Histo2D(
            {"h2_energy_vs_HLT_L1SingleMuCosmics",
             "Energy vs HLT_L1SingleMuCosmics (in HLT_Random events);Energy [GeV];HLT_L1SingleMuCosmics",
             500, 0, 10000, 2, -0.5, 1.5},
            "obj_energy_flat", "obj_trig_for_energy");
    } else {
        // Compute energy as E = pT * cosh(eta), filtered by region pT cut
        auto df_energy = df_obj
        .Define("obj_energy_calc", [region, pt_cut_value](const ROOT::VecOps::RVec<float>& pt,
                                      const ROOT::VecOps::RVec<float>& eta) {
            ROOT::VecOps::RVec<float> energy;
            for (size_t i = 0; i < pt.size(); ++i) {
                if (((region == "sr" || region == "vr1") && pt[i] > pt_cut_value) || (region == "vr2" && pt[i] < pt_cut_value))
                    energy.push_back(pt[i] * std::cosh(eta[i]));
            }
            return energy;
        }, {pt_var.Data(), eta_var.Data()})
        .Define("obj_trig_for_energy", [](const ROOT::VecOps::RVec<float>& energy, int trig) {
            return ROOT::VecOps::RVec<int>(energy.size(), trig);
        }, {"obj_energy_calc", "cosmics_trig"});

        h2_energy_vs_cosmics = df_energy.Histo2D(
            {"h2_energy_vs_HLT_L1SingleMuCosmics",
             "Energy vs HLT_L1SingleMuCosmics (in HLT_Random events);Energy [GeV];HLT_L1SingleMuCosmics",
             500, 0, 10000, 2, -0.5, 1.5},
            "obj_energy_calc", "obj_trig_for_energy");
    }

    // Count actions
    auto count_all = df.Count();
    auto count_random = df_random.Count();

    // Trigger the event loop by accessing a result
    std::cout << "\nTotal events: " << *count_all << "\n";
    std::cout << "Events passing HLT_Random: " << *count_random << "\n";

    // Write output
    TFile* f = TFile::Open(output_file.Data(), "RECREATE");
    h_cosmics->Write();
    h2_pt_vs_cosmics->Write();
    h2_energy_vs_cosmics->Write();
    f->Close();
    delete f;

    std::cout << "\n" << std::string(60, '=') << "\n";
    std::cout << "Output written to: " << output_file << "\n";
    std::cout << std::string(60, '=') << "\n";
}
