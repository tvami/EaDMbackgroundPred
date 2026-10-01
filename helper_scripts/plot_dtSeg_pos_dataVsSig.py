#!/usr/bin/env python3
# DT segment x/y/z: Run-3 Cosmics data vs signal MC, both with theta_y > THETA_MIN (leading muon, folded w.r.t. vertical)
# Needs cmsstyle on PYTHONPATH ($HOME/.local/cmsstyle). Env: BASE_PATH, OUTDIR, THETA_MIN (deg, default 0), YABS_MIN (cm, drop segments with |y| below it, default 200), MC=sig|bkg (default sig), RW_ETA=1 reweights the MC to data in the leading-muon eta, DATA_RNN_MAX (data kept below this RNN score, default 0.99999 = FAIL region, blinding).
import os, glob
import ROOT, cmsstyle as CMS

ROOT.gROOT.SetBatch(True)
ROOT.gErrorIgnoreLevel = ROOT.kWarning
CMS.SetExtraText("Work in Progress")
CMS.SetLumi(None, run="Run 3 Cosmics")  # no lumi, no energy
CMS.SetEnergy(0, unit="")
ROOT.EnableImplicitMT(4)

B = os.environ.get('BASE_PATH', '/ceph/cms/store/user/tvami/EarthAsDM/Ntuples/Ntuples_v5.0.4_wRNN')
C = 'matched_muon'
data_files = sorted(f for f in glob.glob(f'{B}/Data/sr/{C}/skimmed_{C}_sr_Ntuplizer-Cosmics_*_v5a_v5.0.0.root') if '_All_' not in f)
theta_min = float(os.environ.get('THETA_MIN', '0'))
yabs_min = float(os.environ.get('YABS_MIN', '200'))
mc = os.environ.get('MC', 'sig')
mc_opts = {  # (file, legend, color)
    'sig': (f'{B}/Signal/sr/{C}/skimmed_{C}_sr_CosmicToMu_Par-MinP-10000-MinTheta-91-MaxTheta-179-SurfaceDepth-e2_cosmuogen_v5.0.0.root', 'Signal MC, M_{DM} = 20 TeV', ROOT.kRed + 1),
    'bkg': (f'{B}/BkgMC/sr/{C}/skimmed_{C}_sr_CosmicToMu_Par-MinP-4-MaxP-3000-MinTheta-0-MaxTheta-75_cosmuogen_v5.0.0.root', 'Cosmic Bkg MC', ROOT.kAzure + 1),
}
sig_file, mc_label, mc_color = mc_opts[mc]
rw_eta = os.environ.get('RW_ETA', '0') == '1'
data_rnn_max = float(os.environ.get('DATA_RNN_MAX', '0.99999'))
outdir = os.environ.get('OUTDIR', f'figures/dtSeg_pos_dataVs{mc.capitalize()}{"_rweta" if rw_eta else ""}_thy{theta_min:g}_yabs{yabs_min:g}_v504/matched_muon')
os.makedirs(outdir, exist_ok=True)

variables = {
    'globX': (100, -800., 800., 'DT segment global X [cm]'),
    'globY': (100, -800., 800., 'DT segment global Y [cm]'),
    'globZ': (100, -700., 700., 'DT segment global Z [cm]'),
}
keep = []


def frame(files):
    d = ROOT.RDataFrame('tree', files)
    if files is data_files:
        d = d.Filter(f'RNNScore < {data_rnn_max}')  # FAIL region only, keeps the SR blinded
    return (d.Filter('nmuon_fromGenTrack_Eta > 0')
            .Define('eta_lead', 'muon_fromGenTrack_Eta[ArgMax(muon_fromGenTrack_Pt)]'))


# eta reweighting map, MC -> data, in the eta of the highest-pT muon
ETA_BINS = (36, -0.9, 0.9)
if rw_eta:
    he_d = frame(data_files).Histo1D(('he_d', '', *ETA_BINS), 'eta_lead').GetValue().Clone()
    he_m = frame(sig_file).Histo1D(('he_m', '', *ETA_BINS), 'eta_lead').GetValue().Clone()
    he_d.Scale(1. / he_d.Integral()); he_m.Scale(1. / he_m.Integral()); he_d.Divide(he_m)
    ROOT.gInterpreter.Declare('TH1D* gEtaW = nullptr;')
    ROOT.gEtaW = he_d


def hist(files, v, spec, weighted=False):
    br = f'muon_dtSeg_{v}'
    d = (frame(files)
         # angle to the vertical, independent of the direction of travel
         .Define('thy', 'TMath::ACos(std::abs(std::sin(muon_fromGenTrack_Phi[0]))/std::cosh(muon_fromGenTrack_Eta[0]))*180./TMath::Pi()')
         .Filter(f'thy > {theta_min}')
         .Define('vg', f'{br}[{br} > -998 && {br} < 9998 && abs(muon_dtSeg_globY) >= {yabs_min}]'))
    if weighted:
        d = d.Define('vw', 'ROOT::RVecD(vg.size(), gEtaW->GetBinContent(gEtaW->FindFixBin(std::clamp((double)eta_lead, -0.899, 0.899))))')
        h = d.Histo1D((f'h{len(keep)}', '', *spec[:3]), 'vg', 'vw').GetValue().Clone()
    else:
        h = d.Histo1D((f'h{len(keep)}', '', *spec[:3]), 'vg').GetValue().Clone()
    h.SetDirectory(0); h.Sumw2()
    nb = h.GetNbinsX()  # fold under/overflow into the edge bins
    h.SetBinContent(1, h.GetBinContent(0) + h.GetBinContent(1)); h.SetBinContent(nb, h.GetBinContent(nb) + h.GetBinContent(nb + 1))
    h.Scale(1. / h.Integral()); keep.append(h)
    return h


for v, spec in variables.items():
    hd = hist(data_files, v, spec)
    hm = hist(sig_file, v, spec, weighted=rw_eta)

    c = CMS.cmsDiCanvas(f'c_{v}', spec[1], spec[2], 1e-5, 1., 0.3, 1.7, spec[3], 'Fraction of segments', 'Data / MC', square=True, iPos=0, extraSpace=0.02)
    c.cd(1); ROOT.gPad.SetLogy()
    hm.SetLineColor(mc_color); hm.SetLineWidth(2); hm.Draw('HIST SAME')
    hd.SetMarkerStyle(20); hd.SetMarkerSize(0.6); hd.SetLineColor(ROOT.kBlack); hd.Draw('P SAME')
    leg = CMS.cmsLeg(0.45, 0.74, 0.93, 0.88, textSize=0.035)
    leg.AddEntry(hd, 'Run-3 Cosmics', 'p'); leg.AddEntry(hm, mc_label, 'l')  # the eta weighting is stated in the AN caption
    tx = ROOT.TLatex(); tx.SetNDC(); tx.SetTextSize(0.035)
    if theta_min > 0: tx.DrawLatex(0.18, 0.79, f'#theta_{{y}} > {theta_min:g}#circ')
    if yabs_min > 0: tx.DrawLatex(0.18, 0.84, f'|y_{{seg}}| > {yabs_min:g} cm')
    c.cd(2)
    r = hd.Clone(); r.Divide(hm); r.Draw('P SAME'); keep.append(r)
    ln = ROOT.TLine(spec[1], 1, spec[2], 1); ln.SetLineStyle(2); ln.Draw(); keep.append(ln)
    c.SaveAs(f'{outdir}/sr_dtSeg_{v}.png'); c.SaveAs(f'{outdir}/sr_dtSeg_{v}.pdf')
    dev = sum(abs(r.GetBinContent(i) - 1) * hd.GetBinContent(i) for i in range(1, r.GetNbinsX() + 1) if hm.GetBinContent(i) > 0 and hd.GetBinContent(i) > 0)
    print(f'{v:6s} data/{mc} occupancy-weighted <|data/MC-1|> = {dev:.3f}')
