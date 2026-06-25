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
///       v5.0.0: added per-hemisphere L1 DT Local Trigger tag-and-probe (port of
///           test/L1TriggerEfficiency.py); booked as 2D (probe pT vs fired) histograms
///           so plot_trigger_study.py builds the TEfficiency and overlays samples
///       v5.0.1: also booked the L1 DT tag-and-probe efficiency vs the probe-leg phi and
///           eta (_phi / _eta histogram variants), in addition to the pT ones

#include "ROOT/RVec.hxx"
#include <set>
#include <cmath>
#include <vector>

// --- L1 DT Local Trigger tag-and-probe helpers (port of L1TriggerEfficiency.py) ---
constexpr double L1DT_PI = 3.14159265358979323846;

static inline double l1dt_dphi(double a, double b) {
    double d = a - b;
    while (d >  L1DT_PI) d -= 2 * L1DT_PI;
    while (d < -L1DT_PI) d += 2 * L1DT_PI;
    return d;
}
static inline double l1dt_dR(double e1, double p1, double e2, double p2) {
    double de = e1 - e2, dp = l1dt_dphi(p1, p2);
    return std::sqrt(de * de + dp * dp);
}
static inline double l1dt_circ_mean(const std::vector<float>& a) {
    double s = 0, c = 0;
    for (auto x : a) { s += std::sin((double)x); c += std::cos((double)x); }
    return std::atan2(s, c);
}
// Paper-like fiducial cuts: probe pT > 5, >= 2 DT stations, away from sector phi-cracks.
static inline bool l1dt_passes_acceptance(double leg_phi, int n_stations, double pt) {
    if (pt < 5.0) return false;
    if (n_stations < 2) return false;
    double pos = std::fmod(leg_phi * 180.0 / L1DT_PI, 30.0);  // python % keeps sign of divisor
    if (pos < 0) pos += 30.0;
    if (std::abs(pos - 15.0) < 5.0) return false;
    return true;
}

// Per-event tag-and-probe result: probe kinematics (pT, plus probe-leg phi and eta)
// and fired flag (0/1) for each probe direction, for the default (no acceptance) and
// _acc (with acceptance) variants. pt is the leading offline muon momentum (shared by
// both legs); phi/eta are the probe leg's DT-segment direction.
struct L1DTResult {
    ROOT::VecOps::RVec<double> pt_comb, pt_up, pt_low, pt_comb_acc, pt_up_acc, pt_low_acc;
    ROOT::VecOps::RVec<double> phi_comb, phi_up, phi_low, phi_comb_acc, phi_up_acc, phi_low_acc;
    ROOT::VecOps::RVec<double> eta_comb, eta_up, eta_low, eta_comb_acc, eta_up_acc, eta_low_acc;
    ROOT::VecOps::RVec<int>    fired_comb, fired_up, fired_low, fired_comb_acc, fired_up_acc, fired_low_acc;
};

void trigger_study(TString object = "track", TString region = "sr", TString base_dir = "/ceph/cms/store/user/tvami/EarthAsDM/Cosmics/crab_Ntuplizer-Cosmics_Run2023D-CosmicTP-PromptReco-v1_v3/", bool validate = false,
                   int l1dt_qual = 4, int l1dt_bx = 2, double l1dt_dr = 0.4, int l1dt_minseg = 1) {

    ROOT::EnableImplicitMT();

    // Configuration
    TString base_dir_copy = base_dir;
    if (base_dir_copy.EndsWith("/")) base_dir_copy.Remove(base_dir_copy.Length()-1);
    TString dataset_name = base_dir_copy(base_dir_copy.Last('/')+1, base_dir_copy.Length());
    dataset_name.ReplaceAll("crab_", "");
    if (dataset_name.EndsWith(".root")) dataset_name.Remove(dataset_name.Length()-5);
    // Ntuple version (see README "Skimmed Ntuple Versions", vX.Y.Z convention). Bump this
    // whenever the input ntuples change so different versions never overwrite each other.
    const TString NTUPLE_VERSION = "v5.0.1";
    // Filename layout: trigger_study_<object>_<region>_<dataset>_<version>.root
    TString output_file = TString::Format("trigger_study_%s_%s_%s_%s.root", object.Data(), region.Data(), dataset_name.Data(), NTUPLE_VERSION.Data());

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
    if (region != "sr" && region != "vr1" && region != "vr2") {
        std::cerr << "Error: Unknown region '" << region << "'. Use 'sr', 'vr1', or 'vr2'.\n";
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
    // L1 DT Local Trigger efficiency (per-hemisphere tag-and-probe)
    // ============================================================
    // Port of test/L1TriggerEfficiency.py. Independent of `object`: always uses
    // muon_tuneP_Pt for the probe pT and the offline DT segments to define the
    // upper/lower hemisphere legs. We book 2D (probe pT vs fired 0/1) histograms;
    // plot_trigger_study.py turns them into TEfficiency and overlays samples.
    // Two variants per probe direction: default (no acceptance) and _acc (paper-like
    // fiducial cuts: pT > 5, >= 2 stations on probe leg, away from DT sector phi-cracks).
    const double L1DT_PTBINS[] = {2, 3, 5, 7, 10, 15, 20, 25, 30, 40, 50,
                                  70, 100, 150, 200, 300, 500, 1000};
    const int    L1DT_NPT = 17;            // 18 edges above
    const double L1DT_YBINS[] = {-0.5, 0.5, 1.5};

    auto df_l1dt = df_with_count
        .Define("l1dt_result", [l1dt_qual, l1dt_bx, l1dt_dr, l1dt_minseg](
            const ROOT::VecOps::RVec<float>& muPt,
            const ROOT::VecOps::RVec<float>& segY,
            const ROOT::VecOps::RVec<float>& segEta,
            const ROOT::VecOps::RVec<float>& segPhi,
            const ROOT::VecOps::RVec<int>&   segSta,
            const ROOT::VecOps::RVec<float>& trY,
            const ROOT::VecOps::RVec<int>&   trBx,
            const ROOT::VecOps::RVec<int>&   trQual,
            const ROOT::VecOps::RVec<float>& trEta,
            const ROOT::VecOps::RVec<float>& trPhi) {
            L1DTResult R;
            // probe pT = leading offline tuneP muon (both legs share the same momentum)
            double pt = -1;
            for (auto p : muPt) if (p > 0 && p < 1e4 && p > pt) pt = p;
            if (pt < 0) return R;
            // offline legs from DT segments, split by global-Y sign (position-based hemispheres)
            std::vector<float> upEta, upPhi, lowEta, lowPhi;
            std::set<int> upSta, lowSta;
            for (size_t j = 0; j < segY.size(); ++j) {
                float y = segY[j];
                if (std::abs(y) > 9000) continue;
                if (y > 0) { upEta.push_back(segEta[j]);  upPhi.push_back(segPhi[j]);  upSta.insert(segSta[j]); }
                else       { lowEta.push_back(segEta[j]); lowPhi.push_back(segPhi[j]); lowSta.insert(segSta[j]); }
            }
            if ((int)upEta.size() < l1dt_minseg || (int)lowEta.size() < l1dt_minseg) return R;
            auto mean = [](const std::vector<float>& v){ double s = 0; for (auto x : v) s += x; return s / v.size(); };
            double upLegEta = mean(upEta),  upLegPhi  = l1dt_circ_mean(upPhi);
            double lowLegEta = mean(lowEta), lowLegPhi = l1dt_circ_mean(lowPhi);
            int up_nst = (int)upSta.size(), low_nst = (int)lowSta.size();
            // did the DT Local Trigger fire in a given hemisphere, matched to the offline leg?
            auto fired = [&](double le, double lp, bool wantUpper) -> bool {
                for (size_t k = 0; k < trY.size(); ++k) {
                    float y = trY[k];
                    if (std::abs(y) > 9000 || ((y > 0) != wantUpper)) continue;
                    if (std::abs(trBx[k]) > l1dt_bx || trQual[k] < l1dt_qual) continue;
                    if (l1dt_dR(le, lp, trEta[k], trPhi[k]) < l1dt_dr) return true;
                }
                return false;
            };
            bool up_fired  = fired(upLegEta,  upLegPhi,  true);
            bool low_fired = fired(lowLegEta, lowLegPhi, false);
            // tag = lower, probe = upper (probe-leg direction = upper leg)
            if (low_fired) {
                int f = up_fired ? 1 : 0;
                R.pt_up.push_back(pt);   R.phi_up.push_back(upLegPhi);   R.eta_up.push_back(upLegEta);   R.fired_up.push_back(f);
                R.pt_comb.push_back(pt); R.phi_comb.push_back(upLegPhi); R.eta_comb.push_back(upLegEta); R.fired_comb.push_back(f);
                if (l1dt_passes_acceptance(upLegPhi, up_nst, pt)) {
                    R.pt_up_acc.push_back(pt);   R.phi_up_acc.push_back(upLegPhi);   R.eta_up_acc.push_back(upLegEta);   R.fired_up_acc.push_back(f);
                    R.pt_comb_acc.push_back(pt); R.phi_comb_acc.push_back(upLegPhi); R.eta_comb_acc.push_back(upLegEta); R.fired_comb_acc.push_back(f);
                }
            }
            // tag = upper, probe = lower (probe-leg direction = lower leg)
            if (up_fired) {
                int f = low_fired ? 1 : 0;
                R.pt_low.push_back(pt);  R.phi_low.push_back(lowLegPhi);  R.eta_low.push_back(lowLegEta);  R.fired_low.push_back(f);
                R.pt_comb.push_back(pt); R.phi_comb.push_back(lowLegPhi); R.eta_comb.push_back(lowLegEta); R.fired_comb.push_back(f);
                if (l1dt_passes_acceptance(lowLegPhi, low_nst, pt)) {
                    R.pt_low_acc.push_back(pt);  R.phi_low_acc.push_back(lowLegPhi);  R.eta_low_acc.push_back(lowLegEta);  R.fired_low_acc.push_back(f);
                    R.pt_comb_acc.push_back(pt); R.phi_comb_acc.push_back(lowLegPhi); R.eta_comb_acc.push_back(lowLegEta); R.fired_comb_acc.push_back(f);
                }
            }
            return R;
        }, {"muon_tuneP_Pt", "muon_dtSeg_globY", "muon_dtSeg_eta", "muon_dtSeg_phi", "muon_dtSeg_Station_",
            "dtTrigPh_globY", "dtTrigPh_bx", "dtTrigPh_quality", "dtTrigPh_globEta", "dtTrigPh_globPhi"})
        .Define("l1dt_pt_comb",        [](const L1DTResult& r){ return r.pt_comb; },        {"l1dt_result"})
        .Define("l1dt_fired_comb",     [](const L1DTResult& r){ return r.fired_comb; },     {"l1dt_result"})
        .Define("l1dt_pt_up",          [](const L1DTResult& r){ return r.pt_up; },          {"l1dt_result"})
        .Define("l1dt_fired_up",       [](const L1DTResult& r){ return r.fired_up; },       {"l1dt_result"})
        .Define("l1dt_pt_low",         [](const L1DTResult& r){ return r.pt_low; },         {"l1dt_result"})
        .Define("l1dt_fired_low",      [](const L1DTResult& r){ return r.fired_low; },      {"l1dt_result"})
        .Define("l1dt_pt_comb_acc",    [](const L1DTResult& r){ return r.pt_comb_acc; },    {"l1dt_result"})
        .Define("l1dt_fired_comb_acc", [](const L1DTResult& r){ return r.fired_comb_acc; }, {"l1dt_result"})
        .Define("l1dt_pt_up_acc",      [](const L1DTResult& r){ return r.pt_up_acc; },      {"l1dt_result"})
        .Define("l1dt_fired_up_acc",   [](const L1DTResult& r){ return r.fired_up_acc; },   {"l1dt_result"})
        .Define("l1dt_pt_low_acc",     [](const L1DTResult& r){ return r.pt_low_acc; },     {"l1dt_result"})
        .Define("l1dt_fired_low_acc",  [](const L1DTResult& r){ return r.fired_low_acc; },  {"l1dt_result"})
        .Define("l1dt_phi_comb",       [](const L1DTResult& r){ return r.phi_comb; },       {"l1dt_result"})
        .Define("l1dt_phi_up",         [](const L1DTResult& r){ return r.phi_up; },         {"l1dt_result"})
        .Define("l1dt_phi_low",        [](const L1DTResult& r){ return r.phi_low; },        {"l1dt_result"})
        .Define("l1dt_phi_comb_acc",   [](const L1DTResult& r){ return r.phi_comb_acc; },   {"l1dt_result"})
        .Define("l1dt_phi_up_acc",     [](const L1DTResult& r){ return r.phi_up_acc; },     {"l1dt_result"})
        .Define("l1dt_phi_low_acc",    [](const L1DTResult& r){ return r.phi_low_acc; },    {"l1dt_result"})
        .Define("l1dt_eta_comb",       [](const L1DTResult& r){ return r.eta_comb; },       {"l1dt_result"})
        .Define("l1dt_eta_up",         [](const L1DTResult& r){ return r.eta_up; },         {"l1dt_result"})
        .Define("l1dt_eta_low",        [](const L1DTResult& r){ return r.eta_low; },        {"l1dt_result"})
        .Define("l1dt_eta_comb_acc",   [](const L1DTResult& r){ return r.eta_comb_acc; },   {"l1dt_result"})
        .Define("l1dt_eta_up_acc",     [](const L1DTResult& r){ return r.eta_up_acc; },     {"l1dt_result"})
        .Define("l1dt_eta_low_acc",    [](const L1DTResult& r){ return r.eta_low_acc; },    {"l1dt_result"});

    struct L1DTBook { const char* name; const char* title; const char* ptcol; const char* fcol; };
    std::vector<L1DTBook> l1dt_books = {
        {"h2_l1dt_eff_comb",           "L1 DT eff (both hemispheres);probe p_{T} [GeV];fired",       "l1dt_pt_comb",     "l1dt_fired_comb"},
        {"h2_l1dt_eff_probeUpper",     "L1 DT eff (probe=upper);probe p_{T} [GeV];fired",            "l1dt_pt_up",       "l1dt_fired_up"},
        {"h2_l1dt_eff_probeLower",     "L1 DT eff (probe=lower);probe p_{T} [GeV];fired",            "l1dt_pt_low",      "l1dt_fired_low"},
        {"h2_l1dt_eff_comb_acc",       "L1 DT eff (both hemispheres, acc.);probe p_{T} [GeV];fired", "l1dt_pt_comb_acc", "l1dt_fired_comb_acc"},
        {"h2_l1dt_eff_probeUpper_acc", "L1 DT eff (probe=upper, acc.);probe p_{T} [GeV];fired",      "l1dt_pt_up_acc",   "l1dt_fired_up_acc"},
        {"h2_l1dt_eff_probeLower_acc", "L1 DT eff (probe=lower, acc.);probe p_{T} [GeV];fired",      "l1dt_pt_low_acc",  "l1dt_fired_low_acc"},
    };
    std::vector<ROOT::RDF::RResultPtr<TH2D>> l1dt_hists;
    for (auto& b : l1dt_books) {
        l1dt_hists.push_back(df_l1dt.Histo2D(
            ROOT::RDF::TH2DModel(b.name, b.title, L1DT_NPT, L1DT_PTBINS, 2, L1DT_YBINS),
            b.ptcol, b.fcol));
    }

    // Same tag-and-probe efficiency, now vs the probe-leg phi and eta (uniform bins).
    // Naming mirrors the pT histos with a _phi / _eta infix kept *before* the _acc suffix
    // so the downstream endswith("_acc") acceptance check still works.
    const int    L1DT_NPHI = 18;
    const double L1DT_PHIMIN = -L1DT_PI, L1DT_PHIMAX = L1DT_PI;
    const int    L1DT_NETA = 25;
    const double L1DT_ETAMIN = -1.25, L1DT_ETAMAX = 1.25;
    struct L1DTBookAng { const char* name; const char* title; const char* xcol; const char* fcol;
                         int nb; double lo, hi; };
    std::vector<L1DTBookAng> l1dt_books_ang = {
        {"h2_l1dt_eff_comb_phi",           "L1 DT eff (both hemispheres);probe #phi;fired",       "l1dt_phi_comb",     "l1dt_fired_comb",     L1DT_NPHI, L1DT_PHIMIN, L1DT_PHIMAX},
        {"h2_l1dt_eff_probeUpper_phi",     "L1 DT eff (probe=upper);probe #phi;fired",            "l1dt_phi_up",       "l1dt_fired_up",       L1DT_NPHI, L1DT_PHIMIN, L1DT_PHIMAX},
        {"h2_l1dt_eff_probeLower_phi",     "L1 DT eff (probe=lower);probe #phi;fired",            "l1dt_phi_low",      "l1dt_fired_low",      L1DT_NPHI, L1DT_PHIMIN, L1DT_PHIMAX},
        {"h2_l1dt_eff_comb_phi_acc",       "L1 DT eff (both hemispheres, acc.);probe #phi;fired", "l1dt_phi_comb_acc", "l1dt_fired_comb_acc", L1DT_NPHI, L1DT_PHIMIN, L1DT_PHIMAX},
        {"h2_l1dt_eff_probeUpper_phi_acc", "L1 DT eff (probe=upper, acc.);probe #phi;fired",      "l1dt_phi_up_acc",   "l1dt_fired_up_acc",   L1DT_NPHI, L1DT_PHIMIN, L1DT_PHIMAX},
        {"h2_l1dt_eff_probeLower_phi_acc", "L1 DT eff (probe=lower, acc.);probe #phi;fired",      "l1dt_phi_low_acc",  "l1dt_fired_low_acc",  L1DT_NPHI, L1DT_PHIMIN, L1DT_PHIMAX},
        {"h2_l1dt_eff_comb_eta",           "L1 DT eff (both hemispheres);probe #eta;fired",       "l1dt_eta_comb",     "l1dt_fired_comb",     L1DT_NETA, L1DT_ETAMIN, L1DT_ETAMAX},
        {"h2_l1dt_eff_probeUpper_eta",     "L1 DT eff (probe=upper);probe #eta;fired",            "l1dt_eta_up",       "l1dt_fired_up",       L1DT_NETA, L1DT_ETAMIN, L1DT_ETAMAX},
        {"h2_l1dt_eff_probeLower_eta",     "L1 DT eff (probe=lower);probe #eta;fired",            "l1dt_eta_low",      "l1dt_fired_low",      L1DT_NETA, L1DT_ETAMIN, L1DT_ETAMAX},
        {"h2_l1dt_eff_comb_eta_acc",       "L1 DT eff (both hemispheres, acc.);probe #eta;fired", "l1dt_eta_comb_acc", "l1dt_fired_comb_acc", L1DT_NETA, L1DT_ETAMIN, L1DT_ETAMAX},
        {"h2_l1dt_eff_probeUpper_eta_acc", "L1 DT eff (probe=upper, acc.);probe #eta;fired",      "l1dt_eta_up_acc",   "l1dt_fired_up_acc",   L1DT_NETA, L1DT_ETAMIN, L1DT_ETAMAX},
        {"h2_l1dt_eff_probeLower_eta_acc", "L1 DT eff (probe=lower, acc.);probe #eta;fired",      "l1dt_eta_low_acc",  "l1dt_fired_low_acc",  L1DT_NETA, L1DT_ETAMIN, L1DT_ETAMAX},
    };
    for (auto& b : l1dt_books_ang) {
        l1dt_hists.push_back(df_l1dt.Histo2D(
            ROOT::RDF::TH2DModel(b.name, b.title, b.nb, b.lo, b.hi, 2, -0.5, 1.5),
            b.xcol, b.fcol));
    }

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
                if ((region == "sr" || region == "vr1") && pt[i] > pt_cut_value) n++;
                if (region == "vr2" && pt[i] < pt_cut_value) n++;
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
                if ((region == "sr" || region == "vr1") && pt[i] <= pt_cut_value) continue;
                if (region == "vr2" && pt[i] >= pt_cut_value) continue;
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
                if ((region == "sr" || region == "vr1") && pt[i] <= pt_cut_value) continue;
                if (region == "vr2" && pt[i] >= pt_cut_value) continue;
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

    // L1 DT Local Trigger tag-and-probe 2D (probe pT vs fired) histograms
    // plot_trigger_study.py builds the per-pT-bin TEfficiency from these
    for (auto& h : l1dt_hists) h->Write();

    f->Close();
    delete f;

    std::cout << "\n" << std::string(60, '=') << "\n";
    std::cout << "Output written to: " << output_file << "\n";
    std::cout << std::string(60, '=') << "\n";
}
