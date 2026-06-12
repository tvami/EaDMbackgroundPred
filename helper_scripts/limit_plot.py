# Overlay the median expected 95% CL limit vs mass for two TF scans (e.g. the
# unconstrained 2x0 vs the constrained-2x0/linear), with the expected band shaded.
# Produces two versions: the +-2sigma (95%) band and the +-1sigma (68%) band.
#
# Run from .../CMSSW_14_1_0_pre4/src with the environment active (cmsenv + venv), e.g.:
#   python3 helper_scripts/limit_plot.py
# Edit DIR_A / DIR_B / OUT below to point at the two scan output directories.

import ROOT, glob, re, array
ROOT.gErrorIgnoreLevel = ROOT.kError
ROOT.gROOT.SetBatch(True)

# --- configuration ---------------------------------------------------------
DIR_A = ('rpf2x0_Binningv9_Inputv25_SR_Blind',          'Unconstrained 2x0',                ROOT.kRed+1,   20)
DIR_B = ('rpf2x0Constrain_Binningv9_Inputv25_SR_Blind', 'Constrained 2x0 (#approx linear)', ROOT.kAzure+1, 21)
OUT   = 'SR_limit_TFcompare'   # output stem; '_95'/'_68' appended per band
# Only the nominal (no _e#) mass points are used, one curve per scan.
# ---------------------------------------------------------------------------

def harvest(topdir):
    '''full expected-limit quantile dict per nominal (no-epsilon) mass point.'''
    out = {}
    for f in glob.glob(topdir+'/*/*-2x0_area/higgsCombineTest.AsymptoticLimits.mH120.root'):
        m = re.search(r'Signal_(M(\d+)GeV)_SR', f)   # no _e# -> nominal points
        if not m:
            continue
        mass = int(m.group(2)); q = {}
        try:
            tf = ROOT.TFile.Open(f); t = tf.Get('limit')
            for i in range(t.GetEntries()):
                t.GetEntry(i); q[round(t.quantileExpected, 3)] = t.limit
            tf.Close()
            if 0.5 in q:
                out[mass] = q
        except Exception:
            pass
    return out

dA = harvest(DIR_A[0])
dB = harvest(DIR_B[0])
masses = sorted(set(dA) & set(dB))
print('nominal mass points matched:', len(masses))

def band_and_line(d, color, style, qlo, qhi):
    '''TGraphAsymmErrors (median + band) and median TGraph, at m_chi = 2*muon_pT.'''
    n = len(masses)
    x   = array.array('d', [2.0*mm/1000.0 for mm in masses])
    med = array.array('d', [d[mm][0.5] for mm in masses])
    lo  = array.array('d', [d[mm][0.5]-d[mm][qlo] for mm in masses])
    hi  = array.array('d', [d[mm][qhi]-d[mm][0.5] for mm in masses])
    z   = array.array('d', [0.0]*n)
    band = ROOT.TGraphAsymmErrors(n, x, med, z, z, lo, hi)
    band.SetFillColorAlpha(color, 0.30); band.SetLineWidth(0)
    line = ROOT.TGraph(n, x, med)
    line.SetLineColor(color); line.SetLineWidth(3)
    line.SetMarkerColor(color); line.SetMarkerStyle(style); line.SetMarkerSize(0.8)
    line.SetFillColorAlpha(color, 0.30)   # so the legend 'lf' swatch shows the band colour
    return band, line

def make_plot(qlo, qhi, band_txt, out, ymin, ymax):
    bandA, lineA = band_and_line(dA, DIR_A[2], DIR_A[3], qlo, qhi)
    bandB, lineB = band_and_line(dB, DIR_B[2], DIR_B[3], qlo, qhi)

    c = ROOT.TCanvas('c', 'c', 900, 700)
    c.SetLogx(); c.SetLogy()
    c.SetLeftMargin(0.13); c.SetRightMargin(0.05); c.SetTopMargin(0.08); c.SetBottomMargin(0.13)
    c.SetTickx(1); c.SetTicky(1)

    frame = c.DrawFrame(1.4, ymin, 200, ymax)
    frame.GetXaxis().SetTitle('m_{#chi} [TeV]')
    frame.GetYaxis().SetTitle('Median expected 95% CL limit on r')
    frame.GetXaxis().SetTitleSize(0.045); frame.GetYaxis().SetTitleSize(0.045)
    frame.GetXaxis().SetTitleOffset(1.25); frame.GetYaxis().SetTitleOffset(1.25)
    frame.GetXaxis().SetLabelSize(0.04); frame.GetYaxis().SetLabelSize(0.04)
    frame.GetXaxis().SetMoreLogLabels(); frame.GetXaxis().SetNoExponent()

    bandB.Draw('3 same'); bandA.Draw('3 same')   # shaded bands first
    lineB.Draw('LX same'); lineA.Draw('LX same') # median lines on top

    leg = ROOT.TLegend(0.17, 0.72, 0.66, 0.88)
    leg.SetBorderSize(0); leg.SetFillStyle(0); leg.SetTextFont(42); leg.SetTextSize(0.035)
    leg.SetHeader('Median %s expected' % band_txt)
    leg.AddEntry(lineB, DIR_B[1], 'lf')
    leg.AddEntry(lineA, DIR_A[1], 'lf')
    leg.Draw()

    latex = ROOT.TLatex(); latex.SetNDC(); latex.SetTextAlign(11)
    latex.SetTextFont(62); latex.SetTextSize(0.05); latex.DrawLatex(0.13, 0.93, 'CMS')
    latex.SetTextFont(52); latex.SetTextSize(0.04); latex.DrawLatex(0.23, 0.93, 'Internal')
    c.RedrawAxis()
    c.SaveAs(out+'.png'); c.SaveAs(out+'.pdf')
    print('saved %s.{png,pdf}' % out)

make_plot(0.025, 0.975, '#pm 2#sigma (95%)', OUT+'_95', 0.04, 40)
make_plot(0.16,  0.84,  '#pm 1#sigma (68%)', OUT+'_68', 0.1,  20)
