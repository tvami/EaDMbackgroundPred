# Unblinded SR RNN-score plot for the EXO-26-004 approval talk (v5.0.11, final dataset); see README "Supplementary material".
# x = -log10(1 - RNNScore), 1 - S clipped at 1e-8; WP S >= 0.99999 sits at x = 5.
# Selection follows skimmed_ntuple_processing_script.py: pT_max of quality muons > 200 GeV,
# PASS = RNNScore >= 0.99999 && dtTopBot > 50 ns (dtTopBot NaN = empty hemisphere -> fails).
import sys, glob, argparse
sys.path.insert(0, '/home/users/tvami/EarthAsDM/CMSSW_14_1_0_pre4/venv/el8_amd64_gcc12/lib/python3.9/site-packages')
import ROOT
import cmsstyle as CMS

p = argparse.ArgumentParser()
p.add_argument('--out', default='/ceph/cms/store/user/tvami/EarthAsDM/work/cwr_rnn_sr/out')
args = p.parse_args()

ROOT.gROOT.SetBatch(True)
ROOT.EnableImplicitMT(8)

NT = '/ceph/cms/store/user/tvami/EarthAsDM/Ntuples/Ntuples_v5.0.11_wRNN/'
DATA = sorted(glob.glob(NT + 'Data/sr/matched_muon/skimmed_matched_muon_sr_*.root'))
BKG = [NT + 'BkgMC/sr/matched_muon/skimmed_matched_muon_sr_CosmicToMu_Par-MinP-4-MaxP-3000-MinTheta-0-MaxTheta-75_cosmuogen_v5.0.0.root']
# signal at depth e4, muon momentum = m_chi / 2; (MinP, m_chi label, color, line style)
SIGNALS = [(500, '1 TeV', ROOT.kOrange + 7, 7), (3000, '6 TeV', ROOT.kRed + 1, 2), (20000, '40 TeV', ROOT.kMagenta + 2, 3)]
SIG = {f'sig{p}': [NT + f'Signal/sr/matched_muon/skimmed_matched_muon_sr_CosmicToMu_Par-MinP-{p}-MinTheta-91-MaxTheta-179-SurfaceDepth-e4_cosmuogen_v5.0.0.root']
       for p, *_ in SIGNALS}
assert len(DATA) == 58, len(DATA)  # 58 files + the 2DA subdir

RNN_CUT, DT_CUT, PT_CUT = 0.99999, 50.0, 200.0
NB, XMIN, XMAX = 32, 0.0, 8.0  # 0.25 wide, WP on a bin edge


def frame(files):
    v = ROOT.std.vector('string')()
    for f in files:
        v.push_back(f)
    df = ROOT.RDataFrame('tree', v)
    return (df.Define('chi2ndof', 'ROOT::VecOps::Where(muon_fromGenTrack_Ndof != 0, muon_fromGenTrack_Chi2/muon_fromGenTrack_Ndof, 999.)')
              .Define('ptErrOverPt2', 'ROOT::VecOps::Where(muon_fromGenTrack_Pt > 0, muon_fromGenTrack_PtErr / (muon_fromGenTrack_Pt * muon_fromGenTrack_Pt), 999.)')
              .Define('quality_mask', 'chi2ndof < 35. && muon_fromGenTrack_NumValidHits > 7 && ptErrOverPt2 < 1e-3 && abs(muon_fromGenTrack_Eta) < 0.9')
              .Define('nq', 'ROOT::VecOps::Sum(quality_mask)')
              .Define('pT_max', 'nq > 0 ? double(ROOT::VecOps::Max(muon_fromGenTrack_Pt[quality_mask])) : -1.')
              .Define('xrnn', 'std::min(-std::log10(std::max(1. - double(RNNScore), 1e-8)), 8. - 1e-9)')
              .Define('isPass', f'RNNScore >= {RNN_CUT}')
              .Define('dtOK', f'dtTopBot > {DT_CUT}'))


samples = {'data': DATA, 'bkg': BKG, **SIG}
res = {}
for k, files in samples.items():
    df = frame(files)
    tot = df.Count()
    sr = df.Filter(f'pT_max > {PT_CUT}')
    srdt = sr.Filter('dtOK')
    res[k] = dict(
        tot=tot, sr=sr.Count(), srdt=srdt.Count(),
        pass_nodt=sr.Filter('isPass').Count(), pass_dt=srdt.Filter('isPass').Count(),
        pass_dt_x=srdt.Filter('xrnn >= 5.').Count(),
        nan_dt=sr.Filter('std::isnan(dtTopBot)').Count(),
        h_dt=srdt.Histo1D((f'h_{k}_dt', '', NB, XMIN, XMAX), 'xrnn'),
        h_nodt=sr.Histo1D((f'h_{k}_nodt', '', NB, XMIN, XMAX), 'xrnn'),
    )
ROOT.RDF.RunGraphs([r[q] for r in res.values() for q in r])

for k, r in res.items():
    print(f'[{k}] tree={r["tot"].GetValue()} pT>200={r["sr"].GetValue()} +dt>50={r["srdt"].GetValue()} '
          f'NaN-dt={r["nan_dt"].GetValue()} | PASS(no dt)={r["pass_nodt"].GetValue()} '
          f'PASS(dt)={r["pass_dt"].GetValue()} x>=5(dt)={r["pass_dt_x"].GetValue()}')

npass = res['data']['pass_dt'].GetValue()
if npass != 19 or res['data']['pass_dt_x'].GetValue() != 19:
    sys.exit(f'STOP: data PASS = {npass} (x>=5: {res["data"]["pass_dt_x"].GetValue()}), expected 19')

# ---------------------------------------------------------------- plotting
CMS.SetExtraText('Preliminary')
CMS.SetLumi(None, run='2021-2026 (14.9 months)')
CMS.SetEnergy(0, unit='')
CMS.ResetAdditionalInfo()
WPBIN = 5.0
ib5 = int(round((WPBIN - XMIN) / ((XMAX - XMIN) / NB)))  # last bin below the WP


def make(tag, label):
    # background MC dropped: only 16 of 3929 downward MC events pass dtTopBot > 50 ns
    hd = res['data'][tag].GetValue().Clone(f'd_{tag}')
    hd.SetDirectory(0)
    hss = []
    for p, mlab, col, ls in SIGNALS:
        hs = res[f'sig{p}'][tag].GetValue().Clone(f's{p}_{tag}')
        hs.SetDirectory(0)
        hs.Scale(hd.Integral() / hs.Integral())  # each signal shape normalized to the total data yield
        hss.append((hs, mlab, col, ls))

    ymax = max([hd.GetMaximum()] + [h.GetMaximum() for h, *_ in hss]) * 1e3
    c = CMS.cmsCanvas(f'c_{tag}', XMIN, XMAX, 0.5, ymax, '-log_{10}(1 - RNN score)', 'Events / 0.25',
                      square=True, iPos=0, extraSpace=0.01)
    c.SetLogy()
    for hs, mlab, col, ls in hss:
        CMS.cmsDraw(hs, 'HIST', fstyle=0, lcolor=col, lwidth=3, lstyle=ls, mcolor=col)
    g = ROOT.TGraphAsymmErrors()  # Poisson (Garwood) errors, empty bins not drawn
    for i in range(1, NB + 1):
        n = hd.GetBinContent(i)
        if n <= 0:
            continue
        lo = ROOT.Math.gamma_quantile(0.1586555, n, 1.0)
        hi = ROOT.Math.gamma_quantile_c(0.1586555, n + 1, 1.0)
        k = g.GetN()
        g.SetPoint(k, hd.GetBinCenter(i), n)
        g.SetPointError(k, 0, 0, n - lo, hi - n)
    g.SetMarkerStyle(20); g.SetMarkerSize(1.0); g.SetLineWidth(2)
    g.Draw('P SAME')
    wp = ROOT.TLine(WPBIN, 0.5, WPBIN, 0.5 * (ymax / 0.5) ** 0.55)  # stop below the legend
    CMS.cmsDrawLine(wp, lcolor=ROOT.kBlack, lstyle=ROOT.kDashed, lwidth=2)
    leg = CMS.cmsLeg(0.45, 0.65, 0.90, 0.89, textSize=0.032)
    leg.SetHeader(label)
    leg.AddEntry(g, 'Data', 'pe')
    for hs, mlab, *_ in hss:
        leg.AddEntry(hs, f'Signal, m_{{#chi}} = {mlab}', 'l')
    leg.Draw()
    CMS.UpdatePad(c); c.RedrawAxis()

    stem = f'{args.out}/sr_rnn_unblinded' + ('' if tag == 'h_dt' else '_nodtcut')
    c.SaveAs(stem + '.pdf'); c.SaveAs(stem + '.png'); c.SaveAs(stem + '.root')
    print(f'--- {tag}: data total {hd.Integral():.0f}, above WP {hd.Integral(ib5 + 1, NB + 1):.0f}; signal fraction above WP: '
          + ', '.join(f'{mlab} {hs.Integral(ib5 + 1, NB + 1) / hs.Integral():.3f}' for hs, mlab, *_ in hss))


make('h_dt', 'p_{T} > 200 GeV, #Deltat_{TB} > 50 ns')
make('h_nodt', 'p_{T} > 200 GeV, no #Deltat_{TB} requirement')
