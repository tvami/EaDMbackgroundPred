# Overlays of the paper figures with the plateau (v10 paper) and power-law efficiency extrapolation
# above m_chi = 180 TeV: Fig. 3 (1 PeV contour), Fig. 4, Fig. 6, Fig. 7.
import sys, json, math
from array import array
sys.path.insert(0, '/home/users/tvami/EarthAsDM/CMSSW_14_1_0_pre4/venv/el8_amd64_gcc12/lib/python3.9/site-packages')
import numpy as np
import ROOT
import cmsstyle as CMS

ROOT.gROOT.SetBatch(True)
SRC = '/home/users/tvami/EarthAsDM/CMSSW_14_1_0_pre4/src/'
W = '/ceph/cms/store/user/tvami/EarthAsDM/work/'
OUT = W + 'cwr_eff_1pev/out/overlay_'
A = 'rpf1x0pos_Binningv13_Inputv35_mergedDepths_SR_Unblind_all'
CAP, SLOPE, LIVE = 90000., -0.4126, 14.9
NOM, PL = ROOT.kRed + 1, ROOT.kAzure + 1


def eff(m):  # helper_scripts/limitRateInputScript.py, m = template mass [GeV]
    return 0.06758539099355372 * math.exp(-3.9610274911588674e-05 * m) + 0.016782590921269932


def r_nom(m): return eff(m) / eff(CAP) if m > CAP else 1.0
def r_pl(m): return (m / CAP) ** SLOPE if m > CAP else 1.0


def style():
    CMS.SetExtraText('Preliminary')
    CMS.SetLumi(None, run='2021-2026 (14.9 months)')
    CMS.SetEnergy(0, unit='')
    CMS.ResetAdditionalInfo()


def graph(xs, ys, col, ls, lw=3):
    g = ROOT.TGraph(len(xs), array('d', xs), array('d', ys))
    g.SetLineColor(col); g.SetLineStyle(ls); g.SetLineWidth(lw)
    return g


def frame(c):
    return [o for o in c.GetListOfPrimitives() if o.InheritsFrom('TH1')][0]


def save(c, name):
    CMS.UpdatePad(c); c.RedrawAxis()
    for ext in ('pdf', 'png'):
        c.SaveAs(f'{OUT}{name}.{ext}')


style()
keep = []

# ---------------------------------------------------------------- Fig. 6
hn = {}
for l in open(SRC + A + '_HN/hn_inputs_used.txt'):
    if l.startswith('#') or not l.strip():
        continue
    M, q, r = l.split()[:3]
    hn.setdefault(int(M), {})[float(q)] = float(r)
tab = open(SRC + 'exp_lim/signal_' + A + '_HN_alpha_max.txt').read().splitlines()
masses = [float(x) for x in tab[1].split(',')]  # m_chi [GeV]
epsl = [float(x) for x in open(SRC + 'exp_lim/signal_' + A + '_HN_alpha_max.eps.txt') if x.strip()]
th = [float(x) for x in tab[3 + epsl.index(4e-08)].split(',')]
mt = [m / 1000 for m in masses]
lim = {k: [] for k in ('on', 'en', 'op', 'ep')}
th_bare = []
for m, t in zip(masses, th):
    tm = m / 2
    r = hn[int(min(tm, CAP))]
    lim['on'].append(r[-1.0] * 100 / LIVE / r_nom(tm)); lim['en'].append(r[0.5] * 100 / LIVE / r_nom(tm))
    lim['op'].append(r[-1.0] * 100 / LIVE / r_pl(tm)); lim['ep'].append(r[0.5] * 100 / LIVE / r_pl(tm))
    th_bare.append(t / r_nom(tm))
c = CMS.cmsCanvas('c6', 0.35, 1000, 0.2, 1e5, 'm_{#chi} [TeV]', 'Monthly DM-induced muon rate', square=True, iPos=11, extraSpace=0.01)
c.SetLogx(); c.SetLogy()
box = ROOT.TBox(180, 0.2, 1000, 1e5); box.SetFillColorAlpha(ROOT.kGray, 0.3); box.SetLineWidth(0); box.Draw(); keep.append(box)
gs = [graph(mt, th_bare, ROOT.kBlue + 2, 1, 2),
      graph(mt, lim['on'], NOM, 1), graph(mt, lim['en'], NOM, 2),
      graph(mt, lim['op'], PL, 1), graph(mt, lim['ep'], PL, 2)]
for g in gs:
    g.Draw('L SAME')
keep += gs
leg = CMS.cmsLeg(0.45, 0.62, 0.92, 0.88, textSize=0.032)
leg.AddEntry(gs[1], 'Observed, plateau (v10 paper)', 'l'); leg.AddEntry(gs[2], 'Expected, plateau (v10 paper)', 'l')
leg.AddEntry(gs[3], 'Observed, power law', 'l'); leg.AddEntry(gs[4], 'Expected, power law', 'l')
leg.AddEntry(gs[0], 'Predicted rate, #varepsilon = 4#times10^{-8}', 'l'); leg.Draw(); keep.append(leg)
save(c, 'fig6')

# ---------------------------------------------------------------- Fig. 4
f4 = json.load(open(W + 'cwr_eff_1pev/out/fig4_curves.json'))
c = CMS.cmsCanvas('c4', 0.35, 1000, 1e-41, 1e-34, 'm_{#chi} [TeV]', '#sigma^{SI}_{#chip} [cm^{2}]', square=True, iPos=11, extraSpace=0.01)
c.SetLogx(); c.SetLogy()
c.SetLeftMargin(0.19); frame(c).GetYaxis().SetTitleOffset(1.55)
box = ROOT.TBox(180, 1e-41, 1000, 1e-34); box.SetFillColorAlpha(ROOT.kGray, 0.3); box.SetLineWidth(0); box.Draw(); keep.append(box)
gs = []
for t, col in (('HN', NOM), ('HN_effPL', PL)):
    gs += [graph(f4[t]['m_obs'], f4[t]['obs'], col, 1), graph(f4[t]['m_exp'], f4[t]['exp'], col, 2)]
for g in gs:
    g.Draw('L SAME')
keep += gs
leg = CMS.cmsLeg(0.47, 0.17, 0.92, 0.37, textSize=0.032)
leg.AddEntry(gs[0], 'Observed, plateau (v10 paper)', 'l'); leg.AddEntry(gs[1], 'Expected, plateau (v10 paper)', 'l')
leg.AddEntry(gs[2], 'Observed, power law', 'l'); leg.AddEntry(gs[3], 'Expected, power law', 'l')
leg.Draw(); keep.append(leg)
save(c, 'fig4')

# ---------------------------------------------------------------- Fig. 7
def region(j, lo_k, hi_k):
    eps = j['eps']
    pts = [(e, lo, hi) for e, lo, hi in zip(eps, j[lo_k], j[hi_k]) if lo > 0]
    xs = [p[1] for p in pts] + [p[2] if p[2] > 0 else 1000. for p in reversed(pts)]
    ys = [p[0] for p in pts] + [p[0] for p in reversed(pts)]
    return xs + xs[:1], ys + ys[:1]


c = CMS.cmsCanvas('c7', 2, 1000, 1e-8, 1.5e-6, 'm_{#chi} [TeV]', '#varepsilon', square=True, iPos=11, extraSpace=0.01)
c.SetLogx(); c.SetLogy()
box = ROOT.TBox(180, 1e-8, 1000, 1.5e-6); box.SetFillColorAlpha(ROOT.kGray, 0.3); box.SetLineWidth(0); box.Draw(); keep.append(box)
gs = []
for v, col in (('effNOM', NOM), ('effPL', PL)):
    j = json.load(open(SRC + f'exp_lim/signal_{A}_HN_{v}_livetime_14.9_limit/exclusion_limits.json'))
    gs += [graph(*region(j, 'obs_lim', 'closed_obs_lim'), col, 1), graph(*region(j, 'exp_lim', 'closed_exp_lim'), col, 2)]
for g in gs:
    g.Draw('L SAME')
keep += gs
leg = CMS.cmsLeg(0.47, 0.17, 0.92, 0.37, textSize=0.032)
leg.AddEntry(gs[0], 'Observed, plateau (v10 paper)', 'l'); leg.AddEntry(gs[1], 'Expected, plateau (v10 paper)', 'l')
leg.AddEntry(gs[2], 'Observed, power law', 'l'); leg.AddEntry(gs[3], 'Expected, power law', 'l')
leg.Draw(); keep.append(leg)
save(c, 'fig7')

# ---------------------------------------------------------------- Fig. 3, m_chi = 1 PeV contour
gr = {s: np.load(W + f'arc3_epsma/data/grid_mchi1000000_HN_{s}.npz') for s in ('effNOM', 'effPL')}
g0 = gr['effNOM']
ma, eps, R = g0['ma'], g0['eps'], g0['R']
mae = np.concatenate([[ma[0] - (ma[1] - ma[0]) / 2], (ma[1:] + ma[:-1]) / 2, [ma[-1] + (ma[-1] - ma[-2]) / 2]])
le = np.log10(eps); lee = np.concatenate([[le[0] - (le[1] - le[0]) / 2], (le[1:] + le[:-1]) / 2, [le[-1] + (le[-1] - le[-2]) / 2]])
c = CMS.cmsCanvas('c3', 0.23, 0.44, 1e-8, 3e-6, "m_{A'} [GeV]", '#varepsilon', square=True, iPos=11, extraSpace=0.01)
c.SetLogy()
frame(c).GetXaxis().SetNdivisions(505)
txt = ROOT.TLatex(); txt.SetTextFont(42); txt.SetTextSize(0.035)
for s, col in (('effNOM', NOM), ('effPL', PL)):
    for q, ls in (('lim_obs', 1), ('lim_exp', 2)):
        h = ROOT.TH2D(f'h_{s}_{q}', '', len(ma), array('d', mae), len(eps), array('d', 10 ** lee))
        for i in range(len(ma)):
            for k in range(len(eps)):
                h.SetBinContent(i + 1, k + 1, R[i, k])
        h.SetContour(1, array('d', [float(gr[s][q])]))
        h.SetLineColor(col); h.SetLineStyle(ls); h.SetLineWidth(3)
        h.Draw('CONT3 SAME'); keep.append(h)
gl = [graph([0], [1], NOM, 1), graph([0], [1], NOM, 2), graph([0], [1], PL, 1), graph([0], [1], PL, 2)]
leg = CMS.cmsLeg(0.45, 0.18, 0.92, 0.40, textSize=0.032)
leg.SetHeader('m_{#chi} = 1000 TeV')
leg.AddEntry(gl[0], 'Observed, plateau (v10 paper)', 'l'); leg.AddEntry(gl[1], 'Expected, plateau (v10 paper)', 'l')
leg.AddEntry(gl[2], 'Observed, power law', 'l'); leg.AddEntry(gl[3], 'Expected, power law', 'l')
leg.Draw(); keep += gl + [leg]
save(c, 'fig3')
