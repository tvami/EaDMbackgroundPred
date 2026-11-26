# Signal selection efficiency vs m_chi up to 1 PeV (CWR request): simulated templates up to
# 180 TeV, then the extrapolation used by the limits (limitRateInputScript.signal_rate).
# Efficiency = depth-weighted PASS yield of the merged-depth template / 100 (templates are
# scaled to 100 / n_generated, so this is per muon crossing the tracker volume).
import sys, math
sys.path.insert(0, '/home/users/tvami/EarthAsDM/CMSSW_14_1_0_pre4/venv/el8_amd64_gcc12/lib/python3.9/site-packages')
import ROOT
import cmsstyle as CMS

ROOT.gROOT.SetBatch(True)
SRC = '/home/users/tvami/EarthAsDM/CMSSW_14_1_0_pre4/src/'
AREA = SRC + 'rpf1x0pos_Binningv13_Inputv35_mergedDepths_SR_Unblind_all'
OUT = '/ceph/cms/store/user/tvami/EarthAsDM/work/cwr_eff_1pev/out/signal_eff_vs_mchi_1PeV'
MASSES = [200, 250, 300, 400, 500, 600, 750, 900, 1000, 1500, 2000, 2500, 3000, 3500, 4000, 4500,
          5000, 10000, 20000, 30000, 40000, 50000, 60000, 70000, 80000, 90000]  # template = m_chi / 2
CAP = 90000  # heaviest template [GeV]


def eff_func(m):  # same function as helper_scripts/limitRateInputScript.py
    return 0.06758539099355372 * math.exp(-3.9610274911588674e-05 * m) + 0.016782590921269932


g = ROOT.TGraphErrors()
for M in MASSES:
    f = ROOT.TFile(f'{AREA}/rpf2x0_Signal_M{M}GeV_mergedDepth_SR/organized_hists.root')
    h = f.Get(f'Signal_M{M}GeV_mergedDepth_SR_pass_FULL')
    n = h.Integral()
    k = g.GetN()
    g.SetPoint(k, 2 * M / 1000., n)  # percent: n / 100 * 100
    print(f'm_chi = {2 * M / 1000.:7.1f} TeV  eff = {n:.3f}%')
eff_cap = g.GetPointY(g.GetN() - 1)

gx = ROOT.TGraph()  # extrapolation used by the limits
for i in range(11):
    mchi = 180. * (1000. / 180.) ** (i / 10.)
    gx.SetPoint(i, mchi, eff_cap * eff_func(mchi * 500.) / eff_func(CAP))
gp = ROOT.TGraph()  # alternative: power law with the slope of the simulated points at 40-180 TeV
for i in range(11):
    mchi = 180. * (1000. / 180.) ** (i / 10.)
    gp.SetPoint(i, mchi, eff_cap * (mchi / 180.) ** -0.4496)
print(f'power law: 1 PeV {gp.GetPointY(10):.3f}%')
print(f'extrapolated: 180 TeV {eff_cap:.3f}%, 1 PeV {gx.GetPointY(10):.3f}% (ratio {gx.GetPointY(10) / eff_cap:.3f})')

# power-law fit to the simulated points at 40-180 TeV: solid over the fit range
import numpy as np
xs = np.array([g.GetPointX(i) for i in range(g.GetN())]); ys = np.array([g.GetPointY(i) for i in range(g.GetN())])
FIT_LO = float(sys.argv[1]) if len(sys.argv) > 1 else 20.
sel = xs >= FIT_LO - 1e-6
kfit, lnA = np.polyfit(np.log(xs[sel]), np.log(ys[sel]), 1)
print(f'power-law fit {FIT_LO:g}-180 TeV: slope {kfit:.4f}')
for i in range(gp.GetN()):
    gp.SetPoint(i, gp.GetPointX(i), eff_cap * (gp.GetPointX(i) / 180.) ** kfit)
TAG = '' if FIT_LO == 20. else f'_fit{FIT_LO:g}'
gf = ROOT.TGraph()
for i in range(11):
    mchi = FIT_LO * (180. / FIT_LO) ** (i / 10.)
    gf.SetPoint(i, mchi, math.exp(lnA) * mchi ** kfit)

CMS.SetLumi(None, run='')
CMS.SetEnergy(0, unit='')
CMS.ResetAdditionalInfo()
X0, X1, Y0, Y1 = 0.3, 1500, 0.02, 60
# v1: paper candidate, power law only (now the nominal), with its fit
# v2: internal comparison of the two extrapolations
for ver, extra, suffix in ((1, 'Simulation Preliminary', ''), (2, 'Internal', '_internal')):
    CMS.SetExtraText(extra)
    c = CMS.cmsCanvas(f'c{ver}', X0, X1, Y0, Y1, 'm_{#chi} [TeV]', 'Signal efficiency [%]', square=True, iPos=0, extraSpace=0.01)
    c.SetLogx(); c.SetLogy()
    box = ROOT.TBox(180, Y0, X1, Y1)
    box.SetFillColorAlpha(ROOT.kGray, 0.35); box.SetLineWidth(0); box.Draw()
    ln = ROOT.TLine(180, Y0, 180, Y1); ln.SetLineStyle(2); ln.SetLineColor(ROOT.kGray + 2); ln.Draw()
    gf.SetLineColor(ROOT.kAzure + 1); gf.SetLineWidth(3); gf.SetLineStyle(1); gf.Draw('L SAME')
    gp.SetLineColor(ROOT.kAzure + 1); gp.SetLineWidth(3); gp.SetLineStyle(3); gp.Draw('L SAME')
    if ver == 2:
        gx.SetLineColor(ROOT.kRed + 1); gx.SetLineWidth(3); gx.SetLineStyle(2); gx.Draw('L SAME')
    g.SetMarkerStyle(20); g.SetMarkerSize(1.1); g.SetMarkerColor(ROOT.kBlack); g.SetLineColor(ROOT.kBlack)
    g.Draw('P SAME')
    leg = CMS.cmsLeg(0.25, 0.15, 0.85, 0.31 if ver == 2 else 0.27, textSize=0.033)
    leg.AddEntry(g, 'Simulated (0.4 to 180 TeV)', 'p')
    leg.AddEntry(gf, f'Power-law fit ({FIT_LO:g} to 180 TeV)', 'l')
    leg.AddEntry(gp, 'Extrapolated, power law' if ver == 2 else 'Extrapolated', 'l')
    if ver == 2:
        leg.AddEntry(gx, 'Extrapolated, exp. + const.', 'l')
    leg.Draw()
    t = ROOT.TLatex(); t.SetTextFont(42); t.SetTextSize(0.035)
    t.DrawLatex(200, 25, 'Extrapolated')
    t.SetTextSize(0.03)
    t.DrawLatex(0.4, 25, 'Templates averaged over decay depth')
    CMS.UpdatePad(c); c.RedrawAxis()
    for ext in ('pdf', 'png', 'root'):
        c.SaveAs(f'{OUT}{TAG}{suffix}.{ext}')
