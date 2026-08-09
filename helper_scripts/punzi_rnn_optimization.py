#!/usr/bin/env python3
"""
Punzi optimization of the RNN score cut.

    FOM(t) = eps_sig(t) / (a/2 + sqrt(B(t)))

  - eps_sig(t) : absolute signal efficiency for RNNScore >= t, i.e. (events passing the
                 region selection AND the RNN cut) / (all generated events, h_cutflow bin 1)
  - B(t)       : background yield for RNNScore >= t.  Two sources, selected with B_SOURCE:

                 '2da' (default) -- the data-driven RNN-axis 2DAlphabet estimate.  That fit
                 estimates the RNN score distribution at pT > 200 GeV from a control region at
                 pT < 200 GeV, blinded above RNNScore = 0.99.  See
                 runWith1DVanilla_v26_RNNSR_M3000GeV_e4.py.

                 'mc' -- the legacy cosmic-bkg-MC yield, scaled so that the bkg MC total at
                 preselection matches the Run-3 cosmics data in the same region.  The analysis
                 has no absolute bkg MC normalization (2DAlphabet uses a data-driven fail->pass
                 transfer function), but the Punzi a/2 term is additive, so the absolute scale of
                 B determines where the FOM peaks.  The cosmic MC runs out of statistics well
                 before the working point, so B -> 0 there, the FOM degenerates to eps/(a/2), and
                 its maximum is set by where the MC ran out rather than by any real trade-off.
                 That failure is what the '2da' source exists to fix.

  - a          : significance parameter (3 by default, as in punzi_optimization.py)

One curve per signal MC, one canvas per SurfaceDepth.  The threshold is scanned uniformly in
-log10(1 - t) rather than in t: the RNN score piles up against 1 and the current SR cut,
0.9999, sits at x = 4 on that axis.

RNNScore is a per-event scalar branch that exists only in the _wRNN ntuples and only for the
matched_muon collection.

BLINDING: the pass region of the RNN-axis fit is blinded above RNNScore = 0.99.  Nothing here
reads pass-region data above that point -- the '2da' B(t) above the blind point is the fitted
extrapolation, never the observed yield.
"""

import os
import re
import csv
import glob
import ROOT
import cmsstyle as CMS
import numpy as np
from array import array

ROOT.gROOT.SetBatch(True)
ROOT.gErrorIgnoreLevel = ROOT.kWarning
ROOT.EnableImplicitMT()
CMS.SetExtraText("Work in Progress")

# ---------------------------------------------------------------------------
# Configuration (env-overridable, matching the style of plot_presel_skimmedNtuples.py)
# ---------------------------------------------------------------------------
base_path = os.environ.get('BASE_PATH', '/ceph/cms/store/user/tvami/EarthAsDM/Ntuples/Ntuples_v5.0.4_wRNN')
region = os.environ.get('REGION', 'sr')
collection = os.environ.get('COLLECTION', 'matched_muon')
depths = os.environ.get('DEPTHS', 'e2,e3,e4,e5,e6').split(',')
a_param = float(os.environ.get('A_PARAM', '3'))
x_max = float(os.environ.get('XMAX', '7.0'))     # axis max in -log10(1 - score)
x_step = float(os.environ.get('XSTEP', '0.01'))  # threshold granularity
min_bkg_mc = float(os.environ.get('MIN_BKG_MC', '10'))  # raw MC events below which the FOM is unreliable
n_bins_dist = int(os.environ.get('NBINS_DIST', '50'))  # bins for the RNN-score distribution plot
# Mass axis of the optimal-threshold summary plot: the samples run 2 -> 180 TeV and are sampled far
# more densely below 10 TeV, so log-x by default
logx_mass = os.environ.get('LOGX_MASS', '1') not in ('0', 'false', 'False')

# Background source: '2da' = data-driven RNN-axis 2DAlphabet estimate, 'mc' = cosmic bkg MC
b_source = os.environ.get('B_SOURCE', '2da').lower()

# Inputs for the '2da' background source.  The area name follows
# runWith1DVanilla_v26_RNNSR_M3000GeV_e4.py: <workingArea>/<signal>-<tf>_area.
# NOTE: keep BASE_PATH above on the same ntuple generation the 2DAlphabet inputs were built from
# (make_rnn_axis_2DA_histograms.py also defaults to Ntuples_v5.0.4_wRNN), otherwise eps_sig and B
# come from different generations.
#
# Both areas (RNNSR_v26/, histograms_for_2DAlphabet_v26/) live in src/, one directory above this
# script, not in the current working directory -- anchor the defaults to __file__ so B_SOURCE=2da
# resolves regardless of where the script is invoked from.
_src_dir = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
twoda_area = os.environ.get('TWODA_AREA',
                            os.path.join(_src_dir, 'RNNSR_v26/Signal_M3000GeV_e4_RNNSR-1x0_area'))
twoda_hist_file = os.environ.get('TWODA_HIST_FILE',
                                 os.path.join(_src_dir,
                                     'histograms_for_2DAlphabet_v26/EaDM_Run3_Cosmics_Data_All_RNNSR.root'))
# X-axis scale of the RNN-axis fit: it fills 100*(-log10(1 - RNNScore)), so 1 fine bin = 0.01 in x
twoda_x_scale = 100.0

n_bins = int(round(x_max / x_step))
# Current SR working point, for reference lines and the summary table
sr_cut = 0.9999
sr_cut_x = -np.log10(1.0 - sr_cut)

# Reference -log10(1 - RNN Score) marked on the optimum-vs-mass summary plot
ref_line_y = 5.0

# Blind point of the RNN-axis fit.  Above this the '2da' B(t) is a fitted extrapolation, not data,
# and is drawn dashed to say so.
blind_cut = 0.99
blind_cut_x = -np.log10(1.0 - blind_cut)
# Low edge of the RNN-axis fit: below this there is no data-driven estimate (the RNNScore ~ 0 spike
# is excluded from the fit axis because its pass/fail ratio is ~4x lower than the rest).
twoda_x_min = 0.2

bkg_file = "CosmicToMu_Par-MinP-4-MaxP-3000-MinTheta-0-MaxTheta-75_cosmuogen_v5.0.0.root"
data_file = "Ntuplizer-Cosmics_All_v5a_v5.0.0.root"

out_dir = "figures/punzi_rnn_optimization"

# Keep drawn ROOT objects alive; PyROOT will otherwise garbage-collect them mid-canvas
garbage_protect_list = []


def sample_path(sample_type, filename):
    """Skimmed-ntuple path convention shared by all the plotting scripts."""
    return (f'{base_path}/{sample_type}/{region}/{collection}/'
            f'skimmed_{collection}_{region}_{filename}')


def x_to_score(x):
    """Inverse of the -log10(1 - score) axis transform."""
    return 1.0 - 10.0 ** (-x)


def bin_for_x(x):
    """1-indexed histogram bin whose low edge is x (thresholds sit on bin low edges)."""
    return int(round(x / x_step)) + 1


def cumulative_yields(path, name):
    """
    Single RDataFrame pass over one file -> N(RNNScore >= t) for every threshold on the grid,
    plus a coarse (n_bins_dist-bin) histogram of the same variable for the score-distribution
    diagnostic plot.  Both histograms are booked as lazy actions on the same RDataFrame, so
    they are filled together in one event loop.

    Returns (yields, total, h_dist) where yields[i] corresponds to threshold x_i = i * x_step,
    h_dist is a TH1F with n_bins_dist bins over [0, x_max] (overflow folded into the last bin),
    or (None, 0, None) if the file is unusable.
    """
    if not os.path.exists(path):
        print(f"  WARNING: missing {path} - skipping")
        return None, 0.0, None

    df = ROOT.RDataFrame("tree", path)
    # Clamp just below 1 so log10(1 - score) stays finite.  float32 RNNScore only resolves
    # ~1e-7 from 1, so saturated events land beyond x_max and are picked up by the overflow
    # bin, which the Integral() below includes.
    df = df.Define("RNNt", "-log10(1.0 - (RNNScore < 0.9999999999 ? RNNScore : 0.9999999999))")
    h_ptr = df.Histo1D((name, "", n_bins, 0.0, x_max), "RNNt")
    h_dist_ptr = df.Histo1D((name + "_dist", "", n_bins_dist, 0.0, x_max), "RNNt")
    h = h_ptr.GetValue()  # triggers one event loop that fills both booked histograms
    h_dist = h_dist_ptr.GetValue()
    h.SetDirectory(0)
    h_dist.SetDirectory(0)

    # Integral(i, n_bins + 1) includes the overflow bin -> events at or above threshold i
    yields = np.array([h.Integral(i, n_bins + 1) for i in range(1, n_bins + 1)])

    # Fold saturated/overflow events into the last visible bin of the distribution histogram
    h_dist.SetBinContent(n_bins_dist, h_dist.GetBinContent(n_bins_dist) + h_dist.GetBinContent(n_bins_dist + 1))
    h_dist.SetBinContent(n_bins_dist + 1, 0.0)

    return yields, h.Integral(0, n_bins + 1), h_dist


def total_generated(path):
    """h_cutflow bin 1 ('All events') -- the denominator for an absolute efficiency."""
    f = ROOT.TFile.Open(path)
    if not f or f.IsZombie():
        return 0.0
    h = f.Get("h_cutflow")
    if not h or not h.InheritsFrom("TH1"):
        print(f"  WARNING: h_cutflow not found in {path}")
        f.Close()
        return 0.0
    n = h.GetBinContent(1)
    f.Close()
    return n


def datadriven_yields():
    """
    B(t) from the RNN-axis 2DAlphabet fit, on the same x grid as the scan.

    The fit has only 12 coarse X bins, which is far too coarse for a threshold scan (the whole
    region of interest is a handful of bins).  So take the *shape* from the finely binned fail data
    -- 28M events, the control region, never blinded -- and only the per-coarse-bin *normalization*
    from the fit:

        B_fine(i) = hfail_fine(i) * R(coarse bin containing i),   R = TotalBkg_pass / TotalBkg_fail

    R is the postfit transfer factor, read from the same histograms plot.plot_transfer_funcs uses,
    so no TF form is re-implemented here and no fit result file is parsed.  The fine binning of the
    2DAlphabet inputs was chosen so one fine bin is exactly one step of this scan (x_step = 0.01).

    Above the blind point R comes from the masked fit, i.e. it is the extrapolation -- which is the
    entire point of the estimate.  No pass-region data above the blind point is read.

    Returns (yields, errors, x_min) where yields[i] is B at threshold x_i = i * x_step, errors[i]
    is its uncertainty, and x_min is the low edge of the fit axis (below which there is no
    estimate), or (None, None, None) if the inputs are missing.
    """
    fit_path = f'{twoda_area}/plots_fit_b/all_plots.root'
    if not os.path.exists(fit_path):
        print(f"  ERROR: {fit_path} not found - run runWith1DVanilla_v26_RNNSR_M3000GeV_e4.py first")
        return None, None, None
    if not os.path.exists(twoda_hist_file):
        print(f"  ERROR: {twoda_hist_file} not found - run make_rnn_axis_2DA_histograms.py first")
        return None, None, None

    f_fit = ROOT.TFile.Open(fit_path)
    h_pass = f_fit.Get('TotalBkg_pass_postfit_projx2')
    h_fail_coarse = f_fit.Get('TotalBkg_fail_postfit_projx2')
    if not h_pass or not h_fail_coarse:
        print(f"  ERROR: TotalBkg_{{pass,fail}}_postfit_projx2 missing from {fit_path}")
        f_fit.Close()
        return None, None, None

    # Postfit transfer factor and its relative error, per coarse bin (in fit-axis units).
    # Only the pass/fail *ratio* is taken, never the absolute pass yield, so this is insensitive to
    # whether plot._format_1Dhist rescaled the projections to events-per-unit (both regions share
    # one binning, so any per-bin-width factor cancels exactly).  The stitched projection carries
    # the real fit-axis edges (binning.CreateHist -> ProjectionX), hence the /twoda_x_scale below.
    coarse = []
    for i in range(1, h_pass.GetNbinsX() + 1):
        p, fl = h_pass.GetBinContent(i), h_fail_coarse.GetBinContent(i)
        r = p / fl if fl > 0 else 0.0
        rel = h_pass.GetBinError(i) / p if p > 0 else 0.0
        coarse.append((h_pass.GetXaxis().GetBinLowEdge(i) / twoda_x_scale,
                       h_pass.GetXaxis().GetBinUpEdge(i) / twoda_x_scale, r, rel))
    f_fit.Close()

    x_lo_fit = coarse[0][0]
    x_hi_fit = coarse[-1][1]

    # Fine fail-data spectrum, projected onto X and rebinned onto the scan grid
    f_h = ROOT.TFile.Open(twoda_hist_file)
    h_fail = f_h.Get('hfail')
    if not h_fail:
        print(f"  ERROR: hfail missing from {twoda_hist_file}")
        f_h.Close()
        return None, None, None
    h_fail_x = h_fail.ProjectionX('hfail_projx')
    h_fail_x.SetDirectory(0)
    f_h.Close()

    def transfer(x):
        """Postfit (ratio, relative error) at scan-axis position x; 0 outside the fit axis."""
        for lo, hi, r, rel in coarse:
            if lo <= x < hi:
                return r, rel
        return 0.0, 0.0

    # Differential B per scan bin, then the cumulative B(t >= x)
    b_diff = np.zeros(n_bins)
    b_diff_err = np.zeros(n_bins)
    for i in range(n_bins):
        x = i * x_step
        if x < x_lo_fit or x >= x_hi_fit:
            continue
        r, rel = transfer(x)
        # The fine input binning is 1 unit of the fit axis per bin = x_step of the scan axis, so
        # scan bin i maps onto fine bin i+1 (ROOT is 1-indexed).
        n_fail = h_fail_x.GetBinContent(i + 1)
        b_diff[i] = n_fail * r
        b_diff_err[i] = n_fail * r * rel

    yields = np.array([b_diff[i:].sum() for i in range(n_bins)])
    # Correlated across bins (one TF per coarse bin), so add the errors linearly rather than in
    # quadrature -- the conservative choice for a band that is only ever read qualitatively.
    errors = np.array([b_diff_err[i:].sum() for i in range(n_bins)])
    return yields, errors, x_lo_fit


def discover_signals(depth):
    """
    Signal files for one SurfaceDepth, sorted by mass.

    Returns a list of (mass_GeV, minP, full_path).  M_DM = 2 x MinP, matching the labels used
    in plot_presel_skimmedNtuples.py (MinP-1000 -> 2 TeV, MinP-90000 -> 180 TeV).
    """
    pattern = sample_path("Signal", f"CosmicToMu_Par-MinP-*-SurfaceDepth-{depth}_cosmuogen_*.root")
    found = []
    for path in glob.glob(pattern):
        m = re.search(r'MinP-(\d+)-', os.path.basename(path))
        if not m:
            continue
        minP = int(m.group(1))
        found.append((2 * minP, minP, path))
    return sorted(found)


def mass_label(mass_gev):
    """'M_{DM} = 2 TeV' style label, matching the other plotting scripts."""
    tev = mass_gev / 1000.0
    if abs(tev - round(tev)) < 1e-6:
        return f"M_{{DM}} = {int(round(tev))} TeV"
    return f"M_{{DM}} = {tev:g} TeV"


def palette_color(idx, total):
    """Spread `total` curves across the active palette (the 4-colour list is not enough)."""
    if total <= 1:
        return ROOT.TColor.GetColorPalette(0)
    return ROOT.TColor.GetColorPalette(int(idx * 254.0 / (total - 1)))


def draw_frame(name, y_min, y_max, y_title, logy=False, x_min=0.0):
    """Canvas + axis frame shared by both plot types."""
    c = CMS.cmsCanvas('', x_min, x_max, y_min, y_max, '', '')
    c.SetLeftMargin(0.18)
    c.SetRightMargin(0.06)
    c.SetBottomMargin(0.12)
    if logy:
        c.SetLogy(True)

    frame = ROOT.TH1F(name, "", n_bins, 0.0, x_max)
    frame.GetXaxis().SetRangeUser(x_min, x_max)
    frame.SetStats(False)
    frame.GetXaxis().SetTitle('-log_{10}(1 - RNN Score)')
    frame.GetYaxis().SetTitle(y_title)
    frame.GetXaxis().SetTitleSize(0.045)
    frame.GetYaxis().SetTitleSize(0.045)
    frame.GetXaxis().SetLabelSize(0.04)
    frame.GetYaxis().SetLabelSize(0.04)
    frame.GetYaxis().SetTitleOffset(1.8)
    frame.SetMinimum(y_min)
    frame.SetMaximum(y_max)
    frame.Draw()
    garbage_protect_list.append(frame)
    return c, frame


def draw_annotations(frame, x_lowstat, depth, extra_lines=()):
    """Shaded unsupported band and the info box.

    For B_SOURCE='mc' the shaded band marks where the bkg MC has run out.  For B_SOURCE='2da' the
    MC statistics are irrelevant; the band instead marks x below the fit axis, where there is no
    data-driven estimate at all.
    """
    y_lo, y_hi = frame.GetMinimum(), frame.GetMaximum()

    if b_source == '2da':
        # Mark the blind point; B above it is the fitted extrapolation, drawn dashed.
        bline = ROOT.TLine(blind_cut_x, y_lo, blind_cut_x, y_hi)
        bline.SetLineStyle(3)
        bline.SetLineColor(ROOT.kAzure + 2)
        bline.SetLineWidth(2)
        bline.Draw()
        garbage_protect_list.append(bline)
    elif x_lowstat is not None and x_lowstat < x_max:
        # Past x_lowstat the raw bkg MC has run out, B -> 0 and the FOM flattens at eps/(a/2).
        # That plateau is a statistics artefact, not an optimum -- shade it so it is not read as one.
        box = ROOT.TBox(x_lowstat, y_lo, x_max, y_hi)
        box.SetFillColorAlpha(ROOT.kGray + 1, 0.25)
        box.SetLineWidth(0)
        box.Draw("SAME")
        garbage_protect_list.append(box)

        txt = ROOT.TLatex()
        txt.SetTextSize(0.025)
        txt.SetTextColor(ROOT.kGray + 3)
        txt.SetTextAngle(90)
        txt.DrawLatex(min(x_lowstat + 0.12, x_max - 0.05), y_lo, f"bkg MC < {min_bkg_mc:g} events")
        garbage_protect_list.append(txt)

    pave = ROOT.TPaveText(0.18, 0.68, 0.45, 0.87, "NDC")
    pave.SetFillColor(0)
    pave.SetBorderSize(0)
    pave.SetTextAlign(12)
    pave.SetTextSize(0.026)
    pave.AddText(f"Collection = {collection}")
    pave.AddText(f"Region = {region}")
    pave.AddText(f"Signal depth: 1{depth} mm")
    if b_source == '2da':
        pave.AddText("B: 2DAlphabet")
        pave.AddText(f"Blinded fit above {blind_cut} (dotted)")
    else:
        pave.AddText("B: cosmic bkg MC, scaled to data")
    for extra in extra_lines:
        pave.AddText(extra)
    pave.Draw()
    garbage_protect_list.append(pave)


def plot_opt_vs_mass(opt_by_depth):
    """
    Summary plot: the optimal threshold -log10(1 - RNN Score) against the DM mass, one line per
    SurfaceDepth.

    Takes the argmax of the Punzi FOM already computed per (depth, mass) in main() -- specifically
    the *supported* optimum (the dot drawn on the FOM plot), not the raw argmax, so a point that
    only wins where the background estimate does not exist never lands on this plot.

    The mass points span 2 -> 180 TeV and are sampled much more densely at the low end, so the
    x-axis is logarithmic by default (LOGX_MASS=0 to override).
    """
    depths_drawn = [d for d in depths if opt_by_depth.get(d)]
    if not depths_drawn:
        print("\nNo optimal-threshold points collected - skipping the RNNt vs mass summary plot.")
        return

    all_mass = [m for d in depths_drawn for m, _ in opt_by_depth[d]]
    all_opt = [t for d in depths_drawn for _, t in opt_by_depth[d]]

    if logx_mass:
        m_lo, m_hi = min(all_mass) / 1.6, max(all_mass) * 1.6
    else:
        pad = 0.05 * (max(all_mass) - min(all_mass)) or 1.0
        m_lo, m_hi = max(min(all_mass) - pad, 0.0), max(all_mass) + pad

    # Vertical range: the spread of the optima, with a floor on the span so a flat set of points
    # is not blown up into noise, plus headroom above for the legend.
    span = max(max(all_opt) - min(all_opt), 0.5)
    y_lo = max(min(all_opt) - 0.3 * span, 0.0)
    y_hi = max(all_opt) + 1.1 * span

    # Keep the reference line in view even when every optimum sits well away from it
    y_lo = min(y_lo, ref_line_y - 0.1 * span)
    y_hi = max(y_hi, ref_line_y + 0.3 * span)

    c = CMS.cmsCanvas('', m_lo, m_hi, y_lo, y_hi, '', '')
    c.SetLeftMargin(0.18)
    c.SetRightMargin(0.06)
    c.SetBottomMargin(0.12)
    if logx_mass:
        c.SetLogx(True)

    frame = ROOT.TH1F("frame_opt_vs_mass", "", 100, m_lo, m_hi)
    frame.SetStats(False)
    frame.GetXaxis().SetTitle('M_{DM} [TeV]')
    frame.GetYaxis().SetTitle('Optimal -log_{10}(1 - RNN Score)')
    frame.GetXaxis().SetTitleSize(0.045)
    frame.GetYaxis().SetTitleSize(0.045)
    frame.GetXaxis().SetLabelSize(0.04)
    frame.GetYaxis().SetLabelSize(0.04)
    frame.GetYaxis().SetTitleOffset(1.8)
    if logx_mass:
        # Without these ROOT labels a log axis only at the decades, which leaves 2-9 TeV unlabelled
        frame.GetXaxis().SetMoreLogLabels()
        frame.GetXaxis().SetNoExponent()
    frame.SetMinimum(y_lo)
    frame.SetMaximum(y_hi)
    frame.Draw()
    garbage_protect_list.append(frame)

    # Current SR working point, for the same reference the per-depth plots carry
    if y_lo < sr_cut_x < y_hi:
        line = ROOT.TLine(m_lo, sr_cut_x, m_hi, sr_cut_x)
        line.SetLineStyle(3)
        line.SetLineColor(ROOT.kGray + 2)
        line.SetLineWidth(2)
        line.Draw()
        garbage_protect_list.append(line)

        txt = ROOT.TLatex()
        txt.SetTextSize(0.025)
        txt.SetTextColor(ROOT.kGray + 3)
        txt.DrawLatex(m_lo * 1.15 if logx_mass else m_lo + 0.02 * (m_hi - m_lo),
                      sr_cut_x + 0.02 * (y_hi - y_lo), f"current SR cut ({sr_cut})")
        garbage_protect_list.append(txt)

    ref_line = ROOT.TLine(m_lo, ref_line_y, m_hi, ref_line_y)
    ref_line.SetLineStyle(3)
    ref_line.SetLineColor(ROOT.kBlack)
    ref_line.SetLineWidth(2)
    ref_line.Draw()
    garbage_protect_list.append(ref_line)

    pave = ROOT.TPaveText(0.18, 0.72, 0.45, 0.87, "NDC")
    pave.SetFillColor(0)
    pave.SetBorderSize(0)
    pave.SetTextAlign(12)
    pave.SetTextSize(0.026)
    pave.AddText(f"Collection = {collection}")
    pave.AddText(f"Region = {region}")
    pave.AddText(f"a = {a_param:g}")
    pave.AddText("B: 2DAlphabet" if b_source == '2da' else "B: cosmic bkg MC, scaled to data")
    pave.Draw()
    garbage_protect_list.append(pave)

    leg = ROOT.TLegend(0.52, 0.66, 0.92, 0.88)
    leg.SetBorderSize(0)
    leg.SetFillStyle(0)
    leg.SetTextFont(42)
    leg.SetTextSize(0.023)
    leg.SetNColumns(2)
    leg.SetMargin(0.13)

    for idx, depth in enumerate(depths_drawn):
        points = sorted(opt_by_depth[depth])  # sorted by mass, so the line connects left to right
        color = palette_color(idx, len(depths_drawn))
        g = ROOT.TGraph(len(points),
                        array('d', [m for m, _ in points]),
                        array('d', [t for _, t in points]))
        g.SetLineColor(color)
        g.SetMarkerColor(color)
        g.SetLineWidth(2)
        g.SetMarkerStyle(20)
        g.SetMarkerSize(0.7)
        g.Draw("LP SAME")
        leg.AddEntry(g, f"Depth = 1{depth} mm", "lp")
        garbage_protect_list.append(g)

    leg.Draw()
    garbage_protect_list.append(leg)
    CMS.CMS_lumi(c, iPosX=0, scaleLumi=0)
    c.SaveAs(f"{out_dir}/punzi_rnn_opt_vs_mass_{collection}_{region}_B{b_source}.png")
    c.SaveAs(f"{out_dir}/punzi_rnn_opt_vs_mass_{collection}_{region}_B{b_source}.pdf")
    del c
    garbage_protect_list.clear()


def main():
    os.makedirs(out_dir, exist_ok=True) # Make fig directory if it doesn't exist
    ROOT.gStyle.SetPalette(ROOT.kRainBow)  # palette that palette_color() samples from below

    x_vals = np.arange(n_bins) * x_step  # threshold grid, x_i = i * x_step, shared by every array in this script

    print("=" * 74)
    print("PUNZI OPTIMIZATION OF THE RNN SCORE CUT")
    print("=" * 74)
    print(f"Base path:  {base_path}")
    print(f"Region:     {region}")
    print(f"Collection: {collection}")
    print(f"a:          {a_param}")
    print(f"B source:   {b_source}")
    print(f"Scan:       {n_bins} thresholds, -log10(1-t) in [0, {x_max}] step {x_step}")

    if region != 'sr':
        print(f"\nWARNING: region '{region}' is not the SR.  VR1 in particular is defined as "
              f"RNNScore < {sr_cut}, so the scan above x = {sr_cut_x:g} is empty by construction.")

    sr_bin = bin_for_x(sr_cut_x) - 1  # 0-indexed into the arrays, used below to read off values at the current SR cut

    # ---- background: computed once, reused for every depth and mass ----------------------
    # B(t) does not depend on the signal mass or SurfaceDepth, only on the scan grid, so it is
    # computed exactly once here and shared by every curve drawn below.
    # h_bkg_dist is the cosmic MC RNN-score shape, used by the distribution plot in both modes.
    print("\nLoading cosmic background MC...")
    bkg_yields, bkg_total, h_bkg_dist = cumulative_yields(sample_path("BkgMC", bkg_file), "h_bkg")
    if bkg_yields is None:
        print("ERROR: could not load the cosmic background MC.")
        return

    B_errs = None

    if b_source == '2da':
        print("\nLoading the data-driven RNN-axis 2DAlphabet background estimate...")
        print(f"  fit area:   {twoda_area}")
        print(f"  fine hists: {twoda_hist_file}")
        B_vals, B_errs, x_fit_min = datadriven_yields()
        if B_vals is None:
            print("ERROR: could not load the 2DAlphabet estimate. Set B_SOURCE=mc to fall back "
                  "to the cosmic MC.")
            return
        # The shaded band now marks x below the fit axis, not where the MC ran out.
        x_lowstat = x_fit_min
        print(f"  fit axis starts at -log10(1-t) = {x_fit_min:.2f}  "
              f"(t = {x_to_score(x_fit_min):.6f}); no estimate below that")
        print(f"  B at the current SR cut ({sr_cut}) = {B_vals[sr_bin]:.2f} "
              f"+/- {B_errs[sr_bin]:.2f}")
        print(f"  B is a blinded extrapolation above t = {blind_cut} "
              f"(-log10(1-t) = {blind_cut_x:g})")
    else:
        print("Loading data (for the background normalization)...")
        _, data_total, _ = cumulative_yields(sample_path("Data", data_file), "h_data")

        if data_total > 0 and bkg_total > 0:
            sf = data_total / bkg_total
        else:
            print("WARNING: could not normalize bkg MC to data - falling back to raw MC counts (sf = 1).")
            sf = 1.0

        print(f"  N_data   (presel, {region}) = {data_total:.0f}")
        print(f"  N_bkgMC  (presel, {region}) = {bkg_total:.0f}")
        print(f"  scale factor sf             = {sf:.6g}")

        B_vals = sf * bkg_yields

        # First threshold at which the raw MC has fewer than min_bkg_mc events left
        below = np.nonzero(bkg_yields < min_bkg_mc)[0]
        x_lowstat = float(x_vals[below[0]]) if len(below) else None
        if x_lowstat is not None:
            print(f"  raw bkg MC drops below {min_bkg_mc:g} events at "
                  f"-log10(1-t) = {x_lowstat:.2f}  (t = {x_to_score(x_lowstat):.8f})")

        print(f"  bkg MC at the current SR cut ({sr_cut}): {bkg_yields[sr_bin]:.0f} raw, "
              f"{B_vals[sr_bin]:.1f} scaled")

        if bkg_yields[sr_bin] < min_bkg_mc:
            print("\n" + "!" * 74)
            print(f"  The cosmic bkg MC has {bkg_yields[sr_bin]:.0f} raw events left at the current SR cut")
            print(f"  ({sr_cut}), and drops below {min_bkg_mc:g} events already at "
                  f"t = {x_to_score(x_lowstat):.6f}.")
            print("  B(t) is therefore zero over the whole region around the working point, the")
            print("  Punzi FOM degenerates to eps/(a/2) there, and its maximum is set by where the")
            print("  MC runs out rather than by any real signal/background trade-off.")
            print("  Treat everything inside the shaded band on the plots as uninformative.")
            print("  Use B_SOURCE=2da for the data-driven estimate instead.")
            print("!" * 74)

    # Punzi denominator a/2 + sqrt(B(t)), one array over the whole threshold grid, reused for
    # every signal curve (only eps_sig(t) differs between signals).
    denom = a_param / 2.0 + np.sqrt(B_vals)

    summary_rows = []  # one dict per (depth, signal) pair, written out as a CSV at the end
    opt_by_depth = {}  # depth -> [(mass in TeV, optimal -log10(1-t))], for the summary plot below

    # ---- one canvas per depth ------------------------------------------------------------
    for depth in depths:
        signals = discover_signals(depth)
        if not signals:
            print(f"\nWARNING: no signal files found for depth {depth} - skipping.")
            continue

        print(f"\n{'=' * 74}\nDepth {depth}  ({len(signals)} signal samples)\n{'=' * 74}")

        curves = []  # (mass, label, fom array, eps array, opt index, h_sig_dist)
        for mass_gev, minP, path in signals:
            # sig_yields[i] = N(RNNScore >= x_i) for this signal MC, one RDataFrame pass per file
            sig_yields, _, h_sig_dist = cumulative_yields(path, f"h_sig_{depth}_{minP}")
            if sig_yields is None:
                continue

            n_gen = total_generated(path)
            if n_gen <= 0:
                print(f"  WARNING: no generated-event count for {filename} - skipping")
                continue

            eps = sig_yields / n_gen  # absolute signal efficiency vs threshold, eps_sig(t)
            fom = eps / denom  # Punzi FOM(t) = eps_sig(t) / (a/2 + sqrt(B(t)))

            # Raw argmax over the whole scan, plus the argmax restricted to the range the
            # background estimate actually supports.
            #
            # For B_SOURCE='mc' the unsupported range is *above* x_lowstat, where the MC has run
            # out, B -> 0 and the FOM flattens at eps/(a/2) -- a statistics artefact, not an
            # optimum.  For B_SOURCE='2da' the unsupported range is *below* x_lowstat, which is
            # the low edge of the fit axis; the estimate is valid all the way up, so the restricted
            # optimum is normally the raw one.
            opt = int(np.argmax(fom))
            if x_lowstat is None:
                opt_unsupported = False
                opt_rel = opt
            elif b_source == '2da':
                opt_unsupported = x_vals[opt] < x_lowstat
                opt_rel = int(np.argmax(np.where(x_vals >= x_lowstat, fom, -1.0)))
            else:
                opt_unsupported = x_vals[opt] >= x_lowstat
                opt_rel = int(np.argmax(np.where(x_vals < x_lowstat, fom, -1.0)))

            curves.append((mass_gev, mass_label(mass_gev), fom, eps, opt_rel, h_sig_dist))

            flag = "  [!] raw optimum is outside the supported range" if opt_unsupported else ""
            print(f"  {mass_label(mass_gev):<22} "
                  f"supported opt t = {x_to_score(x_vals[opt_rel]):.6f} (x = {x_vals[opt_rel]:.2f})  "
                  f"FOM = {fom[opt_rel]:.4g}  eps = {eps[opt_rel]:.4g}  B = {B_vals[opt_rel]:.1f}   |   "
                  f"at {sr_cut}: FOM = {fom[sr_bin]:.4g}  eps = {eps[sr_bin]:.4g}{flag}")

            summary_rows.append({
                'depth': depth,
                'minP': minP,
                'mass_GeV': mass_gev,
                'B_source': b_source,
                'opt_score': f"{x_to_score(x_vals[opt]):.10f}",
                'opt_x': f"{x_vals[opt]:.2f}",
                'max_fom': f"{fom[opt]:.6g}",
                'eps_at_opt': f"{eps[opt]:.6g}",
                'B_at_opt': f"{B_vals[opt]:.4f}",
                'B_err_at_opt': f"{B_errs[opt]:.4f}" if B_errs is not None else '',
                'opt_unsupported': int(opt_unsupported),
                'x_lowstat': f"{x_lowstat:.2f}" if x_lowstat is not None else '',
                'opt_x_supported': f"{x_vals[opt_rel]:.2f}",
                'opt_score_supported': f"{x_to_score(x_vals[opt_rel]):.10f}",
                'fom_at_opt_supported': f"{fom[opt_rel]:.6g}",
                'fom_at_0p9999': f"{fom[sr_bin]:.6g}",
                'eps_at_0p9999': f"{eps[sr_bin]:.6g}",
                'B_at_0p9999': f"{B_vals[sr_bin]:.4f}",
                'B_err_at_0p9999': f"{B_errs[sr_bin]:.4f}" if B_errs is not None else '',
            })

        if not curves:
            print(f"  No usable signal samples for depth {depth}.")
            continue

        # Optimal threshold per mass point, for the RNNt vs mass summary plot drawn after the loop.
        # c[4] is opt_rel, the argmax restricted to the supported range -- the marked point.
        opt_by_depth[depth] = [(c[0] / 1000.0, float(x_vals[c[4]])) for c in curves]

        # ---- Punzi FOM plot --------------------------------------------------------------
        fom_x_min = 0.2  # left edge of the drawn range; below this the curves are visually uninteresting
        max_fom = max(c[2].max() for c in curves)  # sets the y-axis scale below (headroom for the legend)
        # Weakest signal's peak FOM -- a floor below which the FOM is worse for every mass point.
        # Uses each curve's supported optimum (the marked point), not the raw argmax.
        weakest_idx = int(np.argmin([c[2][c[4]] for c in curves]))
        weakest_x = x_vals[curves[weakest_idx][4]]
        c_fom, frame = draw_frame(f"frame_fom_{depth}", 0.0, max_fom * 2,
                                  "Punzi FOM:  #varepsilon / (a/2 + #sqrt{B})", x_min=fom_x_min)
        draw_annotations(frame, x_lowstat, depth,
                          extra_lines=[f"a = {a_param:g}"])

        leg = ROOT.TLegend(0.55, 0.60, 0.94, 0.88)
        leg.SetBorderSize(0)
        leg.SetFillStyle(0)
        leg.SetTextFont(42)
        leg.SetTextSize(0.021)
        leg.SetNColumns(2)
        # Default margin (0.25 of the column width) is all line stub; shrink it so the two
        # columns sit closer together and the labels stay inside the frame.
        leg.SetMargin(0.13)

        for idx, (mass_gev, label, fom, eps, opt, h_sig_dist) in enumerate(curves):
            color = palette_color(idx, len(curves))
            g = ROOT.TGraph(n_bins, array('d', x_vals), array('d', fom))  # one FOM(t) curve for this mass point
            g.SetLineColor(color)
            g.SetLineWidth(2)
            g.Draw("L SAME")
            leg.AddEntry(g, label, "l")
            garbage_protect_list.append(g)  # PyROOT owns no reference to g once this loop iteration ends

            # Dot marks this curve's supported optimum (opt_rel from the loop above), not the raw argmax
            marker = ROOT.TMarker(x_vals[opt], fom[opt], 20)
            marker.SetMarkerSize(0.6)
            marker.Draw("SAME")
            garbage_protect_list.append(marker)

        # min_max_line = ROOT.TLine(weakest_x, frame.GetMinimum(), weakest_x, frame.GetMaximum())
        # min_max_line.SetLineStyle(3)
        # min_max_line.SetLineColor(ROOT.kBlack)
        # min_max_line.SetLineWidth(2)
        # min_max_line.Draw()
        # garbage_protect_list.append(min_max_line)

        leg.Draw()
        garbage_protect_list.append(leg)
        CMS.CMS_lumi(c_fom, iPosX=0, scaleLumi=0)
        c_fom.SaveAs(f"{out_dir}/punzi_rnn_{collection}_{region}_{depth}_B{b_source}.png")
        c_fom.SaveAs(f"{out_dir}/punzi_rnn_{collection}_{region}_{depth}_B{b_source}.pdf")
        del c_fom

        # ---- diagnostic plot: the FOM inputs ---------------------------------------------
        # Shows eps_sig(t) and B(t) separately (log-y), so a change in the FOM shape can be traced
        # back to the signal or the background side rather than only seen in the ratio.
        positive_B = B_vals[B_vals > 0]  # zeros would break the log-y axis, so excluded from the range calc
        y_hi = max(B_vals.max(), 1.0) * 10  # headroom above the largest B(t) value
        # Lowest positive value across all eps curves and B, with margin, sets the log-y floor
        y_lo = min(min(c[3][c[3] > 0].min() for c in curves if (c[3] > 0).any()),
                   positive_B.min() if len(positive_B) else 1.0) / 10

        c_in, frame_in = draw_frame(f"frame_in_{depth}", y_lo, y_hi * 1000,
                                    "Signal efficiency   /   Background yield", logy=True)
        draw_annotations(frame_in, x_lowstat, depth)

        leg_in = ROOT.TLegend(0.55, 0.60, 0.87, 0.88)
        leg_in.SetBorderSize(0)
        leg_in.SetFillStyle(0)
        leg_in.SetTextFont(42)
        leg_in.SetTextSize(0.021)
        leg_in.SetNColumns(2)
        leg_in.SetMargin(0.13)

        for idx, (mass_gev, label, fom, eps, opt, h_sig_dist) in enumerate(curves):
            g = ROOT.TGraph(n_bins, array('d', x_vals), array('d', eps))  # eps_sig(t) for this mass point
            g.SetLineColor(palette_color(idx, len(curves)))
            g.SetLineWidth(2)
            g.Draw("L SAME")
            leg_in.AddEntry(g, f"#varepsilon, {label}", "l")
            garbage_protect_list.append(g)

        if b_source == '2da':
            # Uncertainty band from the postfit transfer factor, drawn as a closed polygon: the
            # first n_bins points trace the upper edge (B + err) left-to-right, the remaining
            # n_bins trace the lower edge (B - err) back right-to-left, so "F" fills between them.
            if B_errs is not None:
                band = ROOT.TGraph(2 * n_bins)
                for i in range(n_bins):
                    band.SetPoint(i, x_vals[i], max(B_vals[i] + B_errs[i], y_lo))
                    band.SetPoint(2 * n_bins - 1 - i, x_vals[i], max(B_vals[i] - B_errs[i], y_lo))
                band.SetFillColorAlpha(ROOT.kBlack, 0.18)
                band.SetLineWidth(0)
                band.Draw("F SAME")
                garbage_protect_list.append(band)

            # Solid below the blind point (constrained by unblinded pass data), dashed above it
            # (pure extrapolation from the masked fit).
            split = bin_for_x(blind_cut_x) - 1
            for lo, hi, style in ((0, split + 1, 1), (split, n_bins, 2)):
                seg = ROOT.TGraph(hi - lo, array('d', x_vals[lo:hi]), array('d', B_vals[lo:hi]))
                seg.SetLineColor(ROOT.kBlack)
                seg.SetLineWidth(3)
                seg.SetLineStyle(style)
                seg.Draw("L SAME")
                garbage_protect_list.append(seg)
                if style == 1:
                    leg_in.AddEntry(seg, f"B (2DA, fit above {blind_cut})", "l")
        else:
            g_bkg = ROOT.TGraph(n_bins, array('d', x_vals), array('d', B_vals))
            g_bkg.SetLineColor(ROOT.kBlack)
            g_bkg.SetLineWidth(3)
            g_bkg.SetLineStyle(2)
            g_bkg.Draw("L SAME")
            leg_in.AddEntry(g_bkg, "B (bkg MC, scaled to data)", "l")
            garbage_protect_list.append(g_bkg)

        leg_in.Draw()
        garbage_protect_list.append(leg_in)
        CMS.CMS_lumi(c_in, iPosX=0, scaleLumi=0)
        c_in.SaveAs(f"{out_dir}/punzi_rnn_inputs_{collection}_{region}_{depth}_B{b_source}.png")
        c_in.SaveAs(f"{out_dir}/punzi_rnn_inputs_{collection}_{region}_{depth}_B{b_source}.pdf")
        del c_in

        # ---- diagnostic plot: RNN score distribution, signal vs background ---------------
        # Signal and background have wildly different absolute scales (efficiency vs raw MC
        # counts), so area-normalize each histogram to unit integral (a density, hence values
        # can exceed 1 - the bin width is < 1) to compare shapes on one axis.  Coarser binning
        # than the fine 700-point FOM scan, since this is a shape/overlap comparison, not a
        # threshold scan.
        def to_density(h):
            """Clone h and rescale so the histogram integrates to 1 over its range."""
            hd = h.Clone(h.GetName() + "_density")
            hd.SetDirectory(0)
            integral = hd.Integral()
            if integral > 0:
                hd.Scale(1.0 / (integral))
            return hd

        h_bkg_density = to_density(h_bkg_dist)
        sig_densities = [to_density(c[5]) for c in curves]

        def positive_bins(h):
            """Bin contents excluding empty/zero bins, which would break the log-y axis."""
            return [h.GetBinContent(i) for i in range(1, h.GetNbinsX() + 1) if h.GetBinContent(i) > 0]

        # Log-y range spanning every density histogram (signals + background) with margin
        positive_vals = [v for h in sig_densities + [h_bkg_density] for v in positive_bins(h)]
        y_lo_d = min(positive_vals) / 10
        y_hi_d = max(positive_vals) * 10

        c_dist, frame_dist = draw_frame(f"frame_dist_{depth}", y_lo_d, y_hi_d,
                                        "Normalized events / bin  (a.u.)", logy=True)
        draw_annotations(frame_dist, x_lowstat, depth, extra_lines=[f"{n_bins_dist} bins"])

        leg_dist = ROOT.TLegend(0.55, 0.60, 0.94, 0.88)
        leg_dist.SetBorderSize(0)
        leg_dist.SetFillStyle(0)
        leg_dist.SetTextFont(42)
        leg_dist.SetTextSize(0.021)
        leg_dist.SetNColumns(2)
        leg_dist.SetMargin(0.13)

        for idx, (h_sig_density, (mass_gev, label, fom, eps, opt, h_sig_dist)) in enumerate(zip(sig_densities, curves)):
            h_sig_density.SetLineColor(palette_color(idx, len(curves)))
            h_sig_density.SetLineWidth(2)
            h_sig_density.Draw("HIST SAME")
            leg_dist.AddEntry(h_sig_density, label, "l")
            garbage_protect_list.append(h_sig_density)

        h_bkg_density.SetLineColor(ROOT.kBlack)
        h_bkg_density.SetLineWidth(3)
        h_bkg_density.SetLineStyle(2)
        h_bkg_density.Draw("HIST SAME")
        leg_dist.AddEntry(h_bkg_density, "Background (Cosmic MC)", "l")
        garbage_protect_list.append(h_bkg_density)

        leg_dist.Draw()
        garbage_protect_list.append(leg_dist)
        CMS.CMS_lumi(c_dist, iPosX=0, scaleLumi=0)
        c_dist.SaveAs(f"{out_dir}/punzi_rnn_score_dist_{collection}_{region}_{depth}.png")
        c_dist.SaveAs(f"{out_dir}/punzi_rnn_score_dist_{collection}_{region}_{depth}.pdf")
        del c_dist

        garbage_protect_list.clear()  # safe to drop refs now that all three canvases for this depth are saved

    # ---- summary plot: optimal threshold vs mass, one line per depth ----------------------
    plot_opt_vs_mass(opt_by_depth)

    # ---- summary table -------------------------------------------------------------------
    # One row per (depth, signal), covering every depth processed above, written after the loop
    # so a single CSV summarizes the whole run rather than one per depth.
    if summary_rows:
        csv_path = f"{out_dir}/punzi_rnn_summary_{collection}_{region}_B{b_source}.csv"
        with open(csv_path, 'w', newline='') as f:
            writer = csv.DictWriter(f, fieldnames=list(summary_rows[0].keys()))
            writer.writeheader()
            writer.writerows(summary_rows)
        print(f"\nWrote {len(summary_rows)} rows to {csv_path}")

    print(f"Plots in {out_dir}/")
    print("Done!")


if __name__ == "__main__":
    main()
