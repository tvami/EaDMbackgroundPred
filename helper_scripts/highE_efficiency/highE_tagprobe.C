/// High-pT tag-and-probe for the efficiency vs energy study (EXO-26-004 pre-approval).
///
/// Books, in log-spaced pT bins from 5 GeV to 10 TeV with no overflow folding:
///   - the L1 DT Local Trigger tag-and-probe of trigger_study.C (same l1dt_tagprobe()), vs probe pT
///   - an offline quality tag-and-probe: probe = each muon with a matched inner track at
///     |eta| < 0.9, x = its tuneP pT, y = last of N_hits > 7, chi2/ndof < 35,
///     sigma(pT)/pT^2 < 1e-3 passed (cumulative). A two-leg version finds no partner leg in
///     data (pp tracking gives one inner track per cosmic), so it is not used.
///
/// Usage (cmsenv):
///   root -l -b -q 'highE_tagprobe.C("filelist.txt", "out.root")'

#if __has_include("trigger_study.C")  // condor sandbox is flat
#include "trigger_study.C"
#else
#include "../trigger_study.C"
#endif
#include <fstream>

void highE_tagprobe(const char* filelist, const char* outname) {
    ROOT::EnableImplicitMT(1);
    std::ifstream in(filelist);
    TChain chain("muonPhiAnalyzer/tree");
    int nf = 0;
    for (std::string l; std::getline(in, l);) if (!l.empty()) { chain.Add(l.c_str()); nf++; }
    std::cout << "files: " << nf << "\n";

    // log bins, 10 per factor of ten, 5 GeV to 10 TeV
    std::vector<double> edges;
    for (double x = std::log10(5.); x < 4. + 1e-9; x += 0.1) edges.push_back(std::pow(10., x));
    if (edges.back() < 1e4 - 1) edges.push_back(1e4);
    const int nb = edges.size() - 1;

    ROOT::RDataFrame df(chain);
    bool has_bfield = chain.GetBranch("bField") != nullptr;
    ROOT::RDF::RNode d0 = has_bfield ? ROOT::RDF::RNode(df.Filter("bField > 0.1"))
                                     : ROOT::RDF::RNode(df);
    auto d = d0.Filter("HLT_L1SingleMuCosmics");

    auto dl1 = d.Define("r", [](const ROOT::VecOps::RVec<float>& muPt, const ROOT::VecOps::RVec<float>& segY,
                                const ROOT::VecOps::RVec<float>& segEta, const ROOT::VecOps::RVec<float>& segPhi,
                                const ROOT::VecOps::RVec<int>& segSta, const ROOT::VecOps::RVec<float>& trY,
                                const ROOT::VecOps::RVec<int>& trBx, const ROOT::VecOps::RVec<int>& trQual,
                                const ROOT::VecOps::RVec<float>& trEta, const ROOT::VecOps::RVec<float>& trPhi) {
                return l1dt_tagprobe(muPt, segY, segEta, segPhi, segSta, trY, trBx, trQual, trEta, trPhi, 4, 2, 0.4, 1);
            }, {"muon_tuneP_Pt", "muon_dtSeg_globY", "muon_dtSeg_eta", "muon_dtSeg_phi", "muon_dtSeg_Station_",
                "dtTrigPh_globY", "dtTrigPh_bx", "dtTrigPh_quality", "dtTrigPh_globEta", "dtTrigPh_globPhi"})
        .Define("pt_up", "r.pt_up").Define("f_up", "r.fired_up")
        .Define("pt_up_acc", "r.pt_up_acc").Define("f_up_acc", "r.fired_up_acc")
        .Define("pt_comb", "r.pt_comb").Define("f_comb", "r.fired_comb");

    const double yb[] = {-0.5, 0.5, 1.5};
    auto h_up = dl1.Histo2D({"h2_l1dt_eff_probeUpper_logpt", ";probe p_{T} [GeV];fired", nb, edges.data(), 2, yb}, "pt_up", "f_up");
    auto h_upa = dl1.Histo2D({"h2_l1dt_eff_probeUpper_acc_logpt", ";probe p_{T} [GeV];fired", nb, edges.data(), 2, yb}, "pt_up_acc", "f_up_acc");
    auto h_cb = dl1.Histo2D({"h2_l1dt_eff_comb_logpt", ";probe p_{T} [GeV];fired", nb, edges.data(), 2, yb}, "pt_comb", "f_comb");

    // offline quality tag-and-probe: every muon with a matched inner track at |eta| < 0.9 is a
    // probe, x = its tuneP pT; pass = cumulative N_hits > 7, chi2/ndof < 35, sigma(pT)/pT^2 < 1e-3
    auto doff = d.Define("probe_pt", [](const ROOT::VecOps::RVec<bool>& has, const ROOT::VecOps::RVec<float>& eta,
                                        const ROOT::VecOps::RVec<float>& tp) {
            ROOT::VecOps::RVec<double> v;
            for (size_t i = 0; i < has.size(); ++i)
                if (has[i] && std::abs(eta[i]) < 0.9 && tp[i] > 0) v.push_back(tp[i]);
            return v;
        }, {"muon_hasMatchedGenTrack", "muon_fromGenTrack_Eta", "muon_tuneP_Pt"})
        .Define("probe_pass", [](const ROOT::VecOps::RVec<bool>& has, const ROOT::VecOps::RVec<float>& eta,
                                 const ROOT::VecOps::RVec<float>& tp, const ROOT::VecOps::RVec<float>& pt,
                                 const ROOT::VecOps::RVec<float>& pterr, const ROOT::VecOps::RVec<float>& chi2,
                                 const ROOT::VecOps::RVec<float>& ndof, const ROOT::VecOps::RVec<int>& nh) {
            // 0 = fails N_hits, 1 = fails chi2/ndof, 2 = fails sigma(pT)/pT^2, 3 = passes all
            ROOT::VecOps::RVec<double> v;
            for (size_t i = 0; i < has.size(); ++i) {
                if (!(has[i] && std::abs(eta[i]) < 0.9 && tp[i] > 0)) continue;
                int s = 0;
                if (nh[i] > 7) { s = 1;
                    if (ndof[i] > 0 && chi2[i] / ndof[i] < 35) { s = 2;
                        if (pt[i] > 0 && pterr[i] / (pt[i] * pt[i]) < 1e-3) s = 3; } }
                v.push_back(s);
            }
            return v;
        }, {"muon_hasMatchedGenTrack", "muon_fromGenTrack_Eta", "muon_tuneP_Pt", "muon_fromGenTrack_Pt",
            "muon_fromGenTrack_PtErr", "muon_fromGenTrack_Chi2", "muon_fromGenTrack_Ndof", "muon_fromGenTrack_NumValidHits"});
    const double sb[] = {-0.5, 0.5, 1.5, 2.5, 3.5};
    auto h_oq = doff.Histo2D({"h2_offqual_logpt", ";probe tuneP p_{T} [GeV];last quality step passed", nb, edges.data(), 4, sb},
                             "probe_pt", "probe_pass");

    TFile f(outname, "RECREATE");
    h_up->Write(); h_upa->Write(); h_cb->Write(); h_oq->Write();
    f.Close();
    std::cout << "wrote " << outname << "\n";
}
