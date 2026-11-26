# Fig. 3 (m_A', eps) observed contours at several m_chi above 180 TeV: exp + const (solid) vs
# power law (dashed) efficiency extrapolation. Grids from arc3_epsma build_grid.py.
import sys
from array import array
sys.path.insert(0, '/home/users/tvami/EarthAsDM/CMSSW_14_1_0_pre4/venv/el8_amd64_gcc12/lib/python3.9/site-packages')
import numpy as np
import ROOT
import cmsstyle as CMS

ROOT.gROOT.SetBatch(True)
W = '/ceph/cms/store/user/tvami/EarthAsDM/work/'
OUT = W + 'cwr_eff_1pev/out/overlay_fig3_multi'
MASSES = [(200000, ROOT.kGreen + 2), (300000, ROOT.kOrange + 7), (500000, ROOT.kRed + 1), (1000000, ROOT.kViolet + 1)]

CMS.SetExtraText('Preliminary')
CMS.SetLumi(None, run='2021-2026 (14.9 months)')
CMS.SetEnergy(0, unit='')
CMS.ResetAdditionalInfo()
c = CMS.cmsCanvas('c', 0.23, 0.44, 3e-8, 2e-5, "m_{A'} [GeV]", '#varepsilon', square=True, iPos=11, extraSpace=0.01)
c.SetLogy()
[o for o in c.GetListOfPrimitives() if o.InheritsFrom('TH1')][0].GetXaxis().SetNdivisions(505)
keep = []
leg = CMS.cmsLeg(0.55, 0.60, 0.92, 0.88, textSize=0.03)
leg.SetHeader('Observed, 95% CL')
for m, col in MASSES:
    for s, ls in (('effNOM', 1), ('effPL', 2)):
        g = np.load(W + f'arc3_epsma/data/grid_mchi{m}_HN_{s}.npz')
        ma, eps, R = g['ma'], g['eps'], g['R']
        mae = np.concatenate([[ma[0] - (ma[1] - ma[0]) / 2], (ma[1:] + ma[:-1]) / 2, [ma[-1] + (ma[-1] - ma[-2]) / 2]])
        le = np.log10(eps)
        lee = np.concatenate([[le[0] - (le[1] - le[0]) / 2], (le[1:] + le[:-1]) / 2, [le[-1] + (le[-1] - le[-2]) / 2]])
        h = ROOT.TH2D(f'h_{m}_{s}', '', len(ma), array('d', mae), len(eps), array('d', 10 ** lee))
        for i in range(len(ma)):
            for k in range(len(eps)):
                h.SetBinContent(i + 1, k + 1, R[i, k])
        h.SetContour(1, array('d', [float(g['lim_obs'])]))
        h.SetLineColor(col); h.SetLineStyle(ls); h.SetLineWidth(3)
        h.Draw('CONT3 SAME'); keep.append(h)
    gl = ROOT.TGraph(1, array('d', [0]), array('d', [1])); gl.SetLineColor(col); gl.SetLineWidth(3)
    leg.AddEntry(gl, f'm_{{#chi}} = {m // 1000} TeV', 'l'); keep.append(gl)
gs = ROOT.TGraph(1, array('d', [0]), array('d', [1])); gs.SetLineWidth(3); gs.SetLineStyle(1)
gd = ROOT.TGraph(1, array('d', [0]), array('d', [1])); gd.SetLineWidth(3); gd.SetLineStyle(2)
leg.AddEntry(gs, 'exp. + const.', 'l'); leg.AddEntry(gd, 'power law', 'l')
leg.Draw(); keep += [gs, gd, leg]
CMS.UpdatePad(c); c.RedrawAxis()
for ext in ('pdf', 'png'):
    c.SaveAs(f'{OUT}.{ext}')
