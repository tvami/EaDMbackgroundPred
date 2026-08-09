from optparse import OptionParser
import subprocess
import array
from  array import array
import os
import numpy as np
import re

import ROOT
from ROOT import *

import header
from header import WaitForJobs, make_smooth_graph, Inter
import tdrstyle, CMS_lumi

gStyle.SetOptStat(0)
gROOT.SetBatch(kTRUE)

parser = OptionParser()

parser.add_option('-L', '--lumiLabel',metavar='F', type='string', action='store',
                default   =   'Run-3 Cosmics',
                dest      =   'lumiLabel',
                help      =   'Top right label of limit plot')
parser.add_option('-s', '--signals', metavar='FILE', type='string', action='store',
                default   =   'bstar_signalsLH.txt',
                dest      =   'signals',
                help      =   'Text file containing the signal names and their corresponding cross sections')
parser.add_option('-n', '--numRates', type='int',
                default       =       0,
                dest          =       'num_rate',
                help          =       'Number of sets of rates')
parser.add_option('--outdir', type='string', action='store',
                default       =       './limit_test_dir',
                dest          =       'outdir',
                help          =       'Output directory')
parser.add_option('-P', '--plotOnly', action="store_true",
                default   =   False,
                dest      =   'plotOnly',
                help      =   'Only plots if True')
parser.add_option('--unblind', action="store_false",
                default   =   True,
                dest      =   'blind',
                help      =   'Only plot observed limit if false')
parser.add_option('--drawIntersection', action="store_true",
                default   =   False,
                dest      =   'drawIntersection',
                help      =   'Draw intersection values')
parser.add_option('--single', action="store_true",
                default   =   False,
                dest      =   'single',
                help      =   'Single-depth mode: use each signal\'s own combine limit '
                              'directly (this_tree.limit), for the fixed-depth pipeline. '
                              'Default (off) is the nominal VOLUME mode: the median is the '
                              'depth-weighted average over e3..e6 via props_dict.')
parser.add_option('-l', '--lumi', metavar='F', type='string', action='store',
                default       =       '16.7', #137.44
                dest          =       'lumi',
                help          =       'Luminosity option (IN MONTHS)')
parser.add_option('-m', '--mod', metavar='F', type='string', action='store',
                default       =       '',
                dest          =       'mod',
                help          =       'Modification to limit title on y-axis. For example, different handedness of the signal')
parser.add_option('-p', '--particle', type='string', action='store',
                default       =       "#chi",
                dest          =       'particle',
                help          =       'Name of Dark Photon. e.g. A^{#prime}')
parser.add_option('-x', '--process', type='string', action='store',
                default       =       "A'#rightarrow#mu#mu",
                dest          =       'process',
                help          =       'Name of HSCP. e.g. pp#rightarrow#tilde{g}#tilde{g}')
parser.add_option('-o', '--xsorder', type='string', action='store',
                default       =       'LO',
                dest          =       'xsorder',
                help          =       'Order of XS calculation. e.g. NNLO+NNLL')
parser.add_option('-d', '--debug', type='int',
                default       =       0,
                dest          =       'debug',
                help          =       'Debug level')

(options, args) = parser.parse_args()

debug = options.debug

total_theory_xsec_list = []
# eps grid: matches the coarse 45-point grid actually sampled in the new
# consolidated parquet (...KAPPAS_10_1000000_..._coarse_grain_epsilon_and_mas...)
# -- 9 mantissas x 5 decades, 1e-11 to 9e-07.
# MUST stay identical to eps_list in helper_scripts/ .py.
labels = [1e-11, 2e-11, 3e-11, 4e-11, 5e-11, 6e-11, 7e-11, 8e-11, 9e-11, 1e-10, 2e-10, 3e-10, 4e-10, 5e-10, 6e-10, 7e-10, 8e-10, 9e-10, 1e-09, 2e-09, 3e-09, 4e-09, 5e-09, 6e-09, 7e-09, 8e-09, 9e-09, 1e-08, 2e-08, 3e-08, 4e-08, 5e-08, 6e-08, 7e-08, 8e-08, 9e-08, 1e-07, 2e-07, 3e-07, 4e-07, 5e-07, 6e-07, 7e-07, 8e-07, 9e-07]
A = 1.6e-21 * 3e8
ctau_labels = [A * e**(-2) for e in labels]
exp_lim = []
closed_exp_lim = []
exp_lim_upper = []
exp_lim_lower = []
# Closed (upper-mass) edges of the 68% band crossings. up_hi is the -1sigma
# (outer/wider) upper crossing, low_hi the +1sigma (inner/narrower) upper crossing.
# Previously computed by signed_window() but discarded; now persisted so the 2D
# plot can show all four theory<->68%-band overlap points.
exp_lim_upper_closed = []
exp_lim_lower_closed = []
# Same four arrays for the 95% band (-2sigma outer / +2sigma inner theory crossings).
exp_lim_upper95 = []
exp_lim_lower95 = []
exp_lim_upper95_closed = []
exp_lim_lower95_closed = []
if options.num_rate == 0: num_rate = len(labels)
else: num_rate = options.num_rate

# Dictionary that has proportions of each depth as a function of candidate mass.
# Only needed for the nominal (depth-weighted) VOLUME mode.
props_dict = None if options.single else np.load('exp_lim/props_dict.npy', allow_pickle=True).item()
def add_e(path, tag='e3'):
    # Insert after the mass token (e.g. M800GeV)
    path = re.sub(r'(M\d+GeV)', rf'\1_{tag}', path)
    return path

COMBINE_FILE = '/higgsCombineTest.AsymptoticLimits.mH120.root'

def signal_limit_points(this_name, this_mass):
    """Per-signal (quantileExpected, limit) points, or None to skip this masspoint.

    --single : read this signal's OWN combine limit directly (fixed-depth: the
               input paths already carry the _e<N> depth token).
    default  : nominal VOLUME mode -- the limit is the depth-weighted average over
               e3..e6 using the props_dict mass-dependent depth proportions.
    """
    # NB: keep every TFile bound to a local name for the lifetime of the read --
    # PyROOT garbage-collects an unreferenced TFile and its trees go invalid.
    if options.single:
        p = this_name + COMBINE_FILE
        if not os.path.exists(p):
            print('File not found'); return None
        tf = TFile.Open(p)
        t = tf.Get('limit')
        pts = []
        for ievent in range(int(t.GetEntries())):
            t.GetEntry(ievent)
            pts.append((t.quantileExpected, t.limit))
        return pts
    # VOLUME (depth-weighted)
    for tag in ('e3', 'e4', 'e5', 'e6'):
        if not os.path.exists(add_e(this_name, tag) + COMBINE_FILE):
            print('File not found'); return None
    key_mass = min(this_mass * 1000, 900000)
    if key_mass not in props_dict:
        return None
    print(props_dict[key_mass])
    w = props_dict[key_mass]
    tf3 = TFile.Open(add_e(this_name, 'e3') + COMBINE_FILE); e3 = tf3.Get('limit')
    tf4 = TFile.Open(add_e(this_name, 'e4') + COMBINE_FILE); e4 = tf4.Get('limit')
    tf5 = TFile.Open(add_e(this_name, 'e5') + COMBINE_FILE); e5 = tf5.Get('limit')
    tf6 = TFile.Open(add_e(this_name, 'e6') + COMBINE_FILE); e6 = tf6.Get('limit')
    pts = []
    for ievent in range(int(e3.GetEntries())):
        e3.GetEntry(ievent); e4.GetEntry(ievent); e5.GetEntry(ievent); e6.GetEntry(ievent)
        lim = (e3.limit*w[0] + e4.limit*w[1] + e5.limit*w[2] + e6.limit*(w[3]+w[4]))
        pts.append((e3.quantileExpected, lim))
    return pts

# Open signal file
signal_file = open(options.signals,'r')
# Read in names of project spaces as a list of strings and strip whitespace
signal_names = signal_file.readline().split(',')
signal_names = [n.strip() for n in signal_names]
print(len(signal_names))
# Read in mass as a list of strings, strip whitespace, and convert to ints
signal_mass = signal_file.readline().split(',')
signal_mass = [float(m.strip())/1000 for m in signal_mass]
print("min/max signal_mass (TeV):", min(signal_mass), max(signal_mass))
# Read in rate 2DA is normalized to (100 events always but depending on runtime, this is artifically lowered by a factor of 1/runtime)
signal_xsecs = signal_file.readline().split(',')
signal_xsecs = [100/float(options.lumi) for x in signal_xsecs]

for i in range(num_rate):
    # Read in xsecs as a list of strings, strip whitespace, and convert to floats
    theory_xsecs = signal_file.readline().split(',')
    theory_xsecs = [float(x.strip()) for x in theory_xsecs]
    total_theory_xsec_list.append(theory_xsecs)

def signed_window(gLimit, gTheory, first, last):
    """Correctly-signed excluded mass window (lo, hi) in TeV, from the crossings.

    Inter() returns (first, last) = (smallest, largest) theory<->limit crossing but
    NOT which side is excluded. The exclusion is where theory > limit, and for this
    model the theory rate is larger at LOW mass, so the excluded side must be resolved
    from the sign of (theory - limit) at the lowest simulated mass:
      - theory > limit at the lowest mass  => the region runs from that lowest mass UP
        to the first crossing (theory drops below the limit there): (x_lo, first).
        Without this, a single 'open' crossing was mis-drawn as excluded ABOVE it
        (i.e. [crossing, +inf)) instead of below -- the wrong side of the boundary.
      - theory < limit at the lowest mass  => the excluded region is the band between
        the first and last crossing (hi = -1 / open to the right if a single crossing).
    hi = -1 means 'no upper crossing' (open to the right plot edge). lo = x_lo caps the
    fill at the lowest simulated mass (no below-grid extrapolation)."""
    if first[0] <= 0:
        return (-1, -1)
    xs = [gLimit.GetPointX(i) for i in range(gLimit.GetN())]
    x_lo = min(xs)
    if gTheory.Eval(x_lo) > gLimit.Eval(x_lo):   # excluded at the lowest simulated mass
        return (x_lo, first[0])
    return (first[0], last[0])

label_counter = 0
for theory_xsecs in total_theory_xsec_list:
    # Initialize arrays to eventually store the points on the TGraph
    x_mass = array('d')
    y_limit = array('d')
    y_mclimit  = array('d')
    y_mclimitlow68 = array('d')
    y_mclimitup68 = array('d')
    y_mclimitlow95 = array('d')
    y_mclimitup95 = array('d')

    tdrstyle.setTDRStyle()

    # For each signal
    for this_index, this_name in enumerate(signal_names):
        # Setup call for one of the signal
        print(this_index)
        this_xsec = signal_xsecs[this_index]
        this_mass = signal_mass[this_index]

        print('Processing ' + this_name + ' with mass ' + str(this_mass) + ' and xsec ' + str(this_xsec))
        # Per-signal (quantileExpected, limit) points -- single-depth or depth-weighted
        # depending on --single (see signal_limit_points()).
        points = signal_limit_points(this_name, this_mass)
        if points is None:
            continue

        # Set the mass (x axis)
        x_mass.append(this_mass)
        # Grab the cross section limits (y axis) -- dispatch each quantile to its list
        for quantile, lim in points:
            # Nominal expected
            if quantile == 0.5:
                y_mclimit.append(lim*this_xsec)
            # -1 sigma expected
            if round(quantile,2) == 0.16:
                y_mclimitlow68.append(lim*this_xsec)
            # +1 sigma expected
            if round(quantile,2) == 0.84:
                y_mclimitup68.append(lim*this_xsec)
            # -2 sigma expected
            if round(quantile,3) == 0.025:
                y_mclimitlow95.append(lim*this_xsec)
            # +2 sigma expected
            if round(quantile,3) == 0.975:
                y_mclimitup95.append(lim*this_xsec)
            if (debug > 0) : print("For " + str(this_mass) + " mc_limit is " +str(y_mclimit))
            # Observed (plot only if unblinded)
            if quantile == -1:
                if not options.blind:
                    if (debug > 0) : print('DEBUG : appending to y_limit')
                    if (debug > 0) : print(f'appending: {lim*this_xsec} to y_limit')
                    y_limit.append(lim*this_xsec)
                else:
                    y_limit.append(0.0)
        print(y_mclimit, x_mass)

    # Make Canvas and TGraphs (mostly stolen from other code that formats well)
    climits = TCanvas("climits", "climits",700, 600)
    climits.SetLogy(True)
    climits.SetLogx(True)
    climits.SetLeftMargin(.15)
    climits.SetBottomMargin(.15)
    climits.SetTopMargin(0.1)
    climits.SetRightMargin(0.05)

    # NOT GENERIC
    # if options.hand == 'LH':
    #     cstr = 'L'
    # elif options.hand == 'RH':
    #     cstr = 'R'
    # elif options.hand == 'VL':
    #     cstr = 'LR'
    # else:
    #     cstr = ''
    cstr = options.mod

    gStyle.SetTextFont(42)
    TPT = ROOT.TPaveText(.20, .22, .5, .27,"NDC")
    TPT.AddText("All-Hadronic Channel") # NOT GENERIC
    TPT.SetFillColor(0)
    TPT.SetBorderSize(0)
    TPT.SetTextAlign(12)

    # Expected
    if (debug > 0) : 
        print('---------DEBUG-----------')
        print('x_mass: {}'.format(x_mass))
        print('len x_mass: {}'.format(len(x_mass)))
        print('y_mclimit: {}'.format( ))
    g_mclimit = TGraph(len(x_mass), x_mass, y_mclimit)
    g_mclimit.SetTitle("")
    g_mclimit.SetMarkerStyle(21)
    g_mclimit.SetMarkerColor(1)
    g_mclimit.SetLineColor(1)
    g_mclimit.SetLineStyle(2)
    g_mclimit.SetLineWidth(3)
    g_mclimit.SetMarkerSize(0.)

    print(len(x_mass), len(y_mclimit))
    if (len(x_mass) != len(y_mclimit)) :
        print("\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!")
        print("Num of mass point not the same as the num of limit point")
        print("Check your input files, we exit now")
        # exit()

    # Observed
    if not options.blind:
        print('Not blinded')
        print('---------------DEBUG---------------------')
        print('x_mass: {}'.format(x_mass))
        print('len x_mass: {}'.format(len(x_mass)))
        print('y_limit: {}'.format(y_limit))
        g_limit = TGraph(len(x_mass), x_mass, y_limit)
        g_limit.SetTitle("")
        g_limit.SetMarkerStyle(7)
        g_limit.SetMarkerColor(1)
        g_limit.SetLineColor(1)
        g_limit.SetLineWidth(2)
        g_limit.SetMarkerSize(1) #0.5
        if ("tau" in cstr) :
            g_limit.GetXaxis().SetRangeUser(0.1, 1.5)
            g_limit.SetMinimum(5e-6) #0.005
            g_limit.SetMaximum(0.02)
        else:
            g_limit.GetXaxis().SetRangeUser(0.8, 3.0)
            g_limit.SetMinimum(5e-5) #0.005
            g_limit.SetMaximum(0.2)
        if ("Prime" in cstr) :
            g_limit.GetXaxis().SetRangeUser(0.8, 3.0)
            g_limit.SetMinimum(5e-6) #0.005
            g_limit.SetMaximum(0.02)
        if ("ZPrime" in cstr) :
            g_limit.GetXaxis().SetRangeUser(3.0, 7.0)
            g_limit.SetMinimum(5e-7) #0.005
            g_limit.SetMaximum(0.002)
        if ("BH" in cstr) :
            #g_limit.GetXaxis().SetRangeUser(2.5, 11.5)
            g_limit.GetXaxis().SetRangeUser(4.5, 11.5)
            g_limit.SetMaximum(1)
            g_limit.SetMinimum(1e-5)
    else:
        print('Blinded')
        g_mclimit.GetXaxis().SetTitle("M("+options.particle+") [TeV]")  # NOT GENERIC
        g_mclimit.GetYaxis().SetTitle("Cross Section [pb]") # NOT GENERIC
        if ("tau" in cstr) :
            g_mclimit.GetXaxis().SetRangeUser(0.1, 1.5)
            g_mclimit.SetMinimum(2e-6) #0.005
            g_mclimit.SetMaximum(0.02)
        else:
            g_mclimit.GetXaxis().SetRangeUser(1.1, 1000.0)
            g_mclimit.SetMinimum(2e-1) #0.005
            g_mclimit.SetMaximum(1e5)
        if ("Prime" in cstr) :
            g_mclimit.GetXaxis().SetRangeUser(0.8, 3.0)
            g_mclimit.SetMinimum(5e-6) #0.005
            g_mclimit.SetMaximum(0.02)
        if ("ZPrime" in cstr) :
            g_mclimit.GetXaxis().SetRangeUser(3.0, 7.0)
            g_mclimit.SetMinimum(5e-7) #0.005
            g_mclimit.SetMaximum(0.002)
        if ("BH" in cstr) :
            g_mclimit.GetXaxis().SetRangeUser(2.5, 11.5)
            g_mclimit.SetMaximum(1)
            g_mclimit.SetMinimum(1e-5)
    # Expected
    # g_mclimit = TGraph(len(x_mass), x_mass, y_mclimit)
    # g_mclimit.SetTitle("")
    # g_mclimit.SetMarkerStyle(21)
    # g_mclimit.SetMarkerColor(1)
    # g_mclimit.SetLineColor(1)
    # g_mclimit.SetLineStyle(2)
    # g_mclimit.SetLineWidth(3)
    # g_mclimit.SetMarkerSize(0.)
    # g_mclimit.GetXaxis().SetTitle("M_{b*} (TeV/c^{2})")
    # g_mclimit.GetYaxis().SetTitle("Upper Limit #sigma_{b*_{"+cstr+"}} #times b (pb)")
    # g_mclimit.GetYaxis().SetTitleSize(0.03)
    # g_mclimit.Draw("l")
    # g_mclimit.GetYaxis().SetRangeUser(0., 80.)

    # Will later be 1 and 2 sigma expected
    g_mcplus = TGraph(len(x_mass), x_mass, y_mclimitup68)
    g_mcminus = TGraph(len(x_mass), x_mass, y_mclimitlow68)

    g_mc2plus = TGraph(len(x_mass), x_mass, y_mclimitup95)
    g_mc2minus = TGraph(len(x_mass), x_mass, y_mclimitlow95)

    # Theory line
    graphWP = ROOT.TGraph()
    graphWP.SetTitle("")
    graphWP.SetMarkerStyle(23)
    graphWP.SetMarkerColor(4)
    graphWP.SetMarkerSize(0.5)
    #graphWP.GetYaxis().SetRangeUser(0., 80.)
    #graphWP.GetXaxis().SetRangeUser(1.0, 10.0)
    #graphWP.SetMinimum(0.3e-3) #0.005
    #graphWP.SetMaximum(100.)
    xsecAt1800 = 0
    for index,mass in enumerate(signal_mass):
        xsec = theory_xsecs[index]
        graphWP.SetPoint(index,    mass,   xsec    )
        if (mass == 1.8 ) : xsecAt1800 = theory_xsecs[index]

    graphWP.SetLineWidth(3)
    graphWP.SetLineColor(4)

    graphWPFixedAt1800  = ROOT.TGraph()
    graphWPFixedAt1800.SetPoint(0, 1.799, xsecAt1800*0.99)
    graphWPFixedAt1800.SetPoint(1, 1.8, xsecAt1800)
    graphWPFixedAt1800.SetPoint(2, 1.801, xsecAt1800*1.01)


    # Theory up and down unnecessary if not splitting PDF uncertainty into shape and norm
    #
    # # Theory up
    graphWPup = ROOT.TGraph()
    graphWPup.SetTitle("")
    graphWPup.SetMarkerStyle(23)
    graphWPup.SetMarkerColor(4)
    graphWPup.SetLineColor(4)
    graphWPup.SetLineWidth(2)
    graphWPup.SetMarkerSize(0.5)

    q = 0
    for index,mass in enumerate(signal_mass):
        rt_xsec = 1.1*theory_xsecs[index]
        graphWPup.SetPoint(q,    mass ,   rt_xsec    )
        q+=1

    # # Theory down
    graphWPdown = ROOT.TGraph()

    graphWPdown.SetTitle("")
    graphWPdown.SetMarkerStyle(23)
    graphWPdown.SetMarkerColor(4)
    graphWPdown.SetLineColor(4)
    graphWPdown.SetLineWidth(2)
    graphWPdown.SetMarkerSize(0.5)

    q = 0
    for index,mass in enumerate(signal_mass):
        rt_xsec = 0.9*theory_xsecs[index]

        q+=1

    graphWPup.SetLineStyle(2 )
    graphWPdown.SetLineStyle(2 )
    WPunc = make_smooth_graph(graphWPdown, graphWPup)
    WPunc.SetFillColor(4)
    WPunc.SetFillStyle(3004)
    WPunc.SetLineColor(0)

    # 95% central quantile band (outer). CMS mplhep recommended color #85D1FB (blue).
    g_error95 = make_smooth_graph(g_mc2minus, g_mc2plus)
    g_error95.SetFillColor(ROOT.TColor.GetColor("#85D1FB"))
    g_error95.SetLineColor(0)

    # 68% central quantile band (inner). CMS mplhep recommended color #FFDF7F (gold).
    g_error = make_smooth_graph(g_mcminus, g_mcplus)
    g_error.SetFillColor(ROOT.TColor.GetColor("#FFDF7F"))
    g_error.SetLineColor(0)

    if not options.blind:
        g_limit.GetXaxis().SetTitle("m("+options.particle+") [TeV]")  # NOT GENERIC
        g_limit.GetYaxis().SetTitle("Cross Section [pb]") # NOT GENERIC
        g_limit.GetXaxis().SetTitleSize(0.055)
        g_limit.GetYaxis().SetTitleSize(0.05)
        g_limit.Draw('ap')
        g_error95.Draw("lf")
        g_error.Draw("lf")
        g_mclimit.Draw("l")
        g_limit.Draw("lp")
        graphWP.Draw("l")
        g_limit.GetYaxis().SetTitleOffset(1.5)
        g_limit.GetXaxis().SetTitleOffset(1.25)

    else:
        g_mclimit.GetXaxis().SetTitle("m("+options.particle+") [TeV]")  # NOT GENERIC
        g_mclimit.GetYaxis().SetTitle("Monthly DM-induced muon rate") # NOT GENERIC
        g_mclimit.GetXaxis().SetTitleSize(0.055)
        g_mclimit.GetYaxis().SetTitleSize(0.05)
        g_mclimit.Draw("al")
        g_error95.Draw("lf")
        g_error.Draw("lf")
        g_mclimit.Draw("l")
        graphWP.Draw("l")
        g_mclimit.GetYaxis().SetTitleOffset(1.5)
        g_mclimit.GetXaxis().SetTitleOffset(1.25)
        g_mclimit.GetXaxis().SetRangeUser(1.1, 1000.0)
        g_mclimit.GetYaxis().SetRangeUser(0.000001, 1000.0)

    # Theory uncertainty curve dropped (was graphWPdown/graphWPup dashed lines)

    #graphWPFixedAt1800.SetMarkerStyle(29)
    #graphWPFixedAt1800.Draw("samep")

    # Finally calculate the intercept.
    # NOTE: below-grid extrapolation is intentionally NOT used here. Inter() supports
    # it via extrapolateBelow=True, but at small eps the only crossing is below the
    # lowest simulated mass, where the excluded region is m < crossing (~0.1 TeV) --
    # off the plot, below the 200 GeV selection, and mis-signed by the window plotter.
    # So we keep the nominal (in-grid only) behavior, which returns -1 when the theory
    # never rises above the expected limit inside the simulated mass range.
    expectedMassLimit,expectedCrossLimit = Inter(g_mclimit,graphWP) #if len(Inter(g_mclimit,graphWP)) > 0 else -1.0
    upLimit,upXsectionLim = Inter(g_mcminus,graphWP) if len(Inter(g_mcminus,graphWP)) > 0 else -1.0
    lowLimit,lowXsectionLim = Inter(g_mcplus,graphWP) if len(Inter(g_mcplus,graphWP)) > 0 else -1.0

    # Correctly-signed excluded windows (lo, hi) for the JSON / 2D plot. These replace
    # the raw (first, last) crossings so a single 'open' crossing is filled on the side
    # that is actually excluded (theory > limit) -- see signed_window().
    excl_lo, excl_hi = signed_window(g_mclimit, graphWP, expectedMassLimit, expectedCrossLimit)
    up_lo,  up_hi  = signed_window(g_mcminus, graphWP, upLimit,  upXsectionLim)
    low_lo, low_hi = signed_window(g_mcplus,  graphWP, lowLimit, lowXsectionLim)

    # 95% band crossings: g_mc2minus = -2sigma (outer/widest), g_mc2plus = +2sigma (inner).
    up95Limit,up95XsectionLim   = Inter(g_mc2minus,graphWP) if len(Inter(g_mc2minus,graphWP)) > 0 else -1.0
    low95Limit,low95XsectionLim = Inter(g_mc2plus,graphWP)  if len(Inter(g_mc2plus,graphWP))  > 0 else -1.0
    up95_lo,  up95_hi  = signed_window(g_mc2minus, graphWP, up95Limit,  up95XsectionLim)
    low95_lo, low95_hi = signed_window(g_mc2plus,  graphWP, low95Limit, low95XsectionLim)
    print(expectedMassLimit[0])
    a,expectedCrossLimitAt1800 = Inter(g_mclimit,graphWPFixedAt1800)[:2] #if len(Inter(g_mclimit,graphWPFixedAt1800)) > 0 else -1.0
    a,upXsectionLimAt1800 = Inter(g_mcminus,graphWPFixedAt1800)[:2] if len(Inter(g_mcminus,graphWPFixedAt1800)) > 0 else -1.0
    a,lowXsectionLimAt1800 = Inter(g_mcplus,graphWPFixedAt1800)[:2] if len(Inter(g_mcplus,graphWPFixedAt1800)) > 0 else -1.0


    expLine = TLine(expectedMassLimit[0],g_mclimit.GetMinimum(),expectedMassLimit[0],expectedMassLimit[1])
    expLine.SetLineStyle(2)

    #expLine.Draw()

    if options.drawIntersection:
        expLineLabel = TPaveText(expectedMassLimit[0]-300, expectedMassLimit[1]*2, expectedMassLimit[0]+300, expectedMassLimit[1]*15, "NB")
        expLineLabel.SetFillColorAlpha(kWhite,0)
        expLineLabel.AddText(str(round(expectedMassLimit[0],2))+' TeV')
        expLineLabel.Draw()

    #print('Expected mass limit: '+str(round(expectedMassLimit[0],3)) + '\\twoErr{'+str(round(upLimit[0]-expectedMassLimit[0],3)) +'}{'+str(round(expectedMassLimit[0]-lowLimit[0],3)) + '} \\TeV')
    #print('Expected xsection limit at excluded mass: '+str(round(expectedMassLimit[1],6)) + ' +'+str(round(expectedMassLimit[1]-upLimit[1],6)) +' -'+str(round(lowLimit[1]-expectedMassLimit[1],6)) + ' pb') 
    #print('Expected xsection limit @1800GeV: '+str(round(expectedCrossLimitAt1800,6)) + ' +'+str(round(expectedCrossLimitAt1800-upXsectionLimAt1800,6)) +' -'+str(round(lowXsectionLimAt1800-expectedCrossLimitAt1800,6)) + ' pb') 
    #print('Theory xsection limit @1800GeV: '+str(round(graphWP.Eval(1.8),6)) + ' pb')


    if not options.blind:
        obsMassLimit,obsCrossLimit = Inter(g_limit,graphWP) if len(Inter(g_limit,graphWP)) > 0 else -1.0
        print('Observed limit: '+str(obsMassLimit) + ' TeV')

        obsLine = TLine(obsMassLimit,g_mclimit.GetMinimum(),obsMassLimit,obsCrossLimit)
        obsLine.SetLineStyle(2)
        obsLine.Draw()

    # Legend and draw.
    # Bands are the 68% and 95% central quantiles of the upper-limit distribution
    # under the background-only hypothesis -- NOT +-1/+-2 sigma. The theory line
    # stays in the legend but WITHOUT its uncertainty (that curve was dropped).
    gStyle.SetLegendFont(62)
    legend = TLegend(0.5, 0.6, 0.92, 0.89, '')
    legend.SetHeader("95% CL upper limits")
    if not options.blind:
        legend.AddEntry(g_limit, "Observed", "lp")
    legend.AddEntry(g_mclimit, "Median expected", "l")
    legend.AddEntry(g_error,   "68% expected", "f")
    legend.AddEntry(g_error95, "95% expected", "f")
    legend.AddEntry(graphWP, "#sigma^{"+options.xsorder+"}_{th}("+options.process+")", "l")   # NOT GENERIC

    legend.SetBorderSize(0)
    legend.SetFillStyle(0)
    legend.SetLineColor(0)

    legend.Draw("same")

    tmpline = ROOT.TLine()

    # intersection line
    tmpline.SetLineColor(1)
    tmpline.SetLineWidth(1)
    tmpline.SetLineStyle(2)
    tmpline.SetLineColor(ROOT.kGray+2)
    tmpline.DrawLine(expectedMassLimit[0],0,expectedMassLimit[0],expectedMassLimit[1])

    text1 = ROOT.TLatex()
    # text1.SetNDC()
    text1.SetTextFont(43)
    text1.SetTextSize(14)
    text1.SetTextColor(ROOT.kGray+2)
    text1.SetTextAngle(90)
    text1.DrawLatex(expectedMassLimit[0]-0.005,0, "  %0.2f TeV"%(expectedMassLimit[0]))

    # second intersection line: theory vs median expected (closed/upper edge).
    # Inter() returns (first_crossing, last_crossing); expectedCrossLimit is the
    # last crossing, or (-1,-1) if there is only one. Draw only when it is real
    # and distinct from the first crossing.
    if expectedCrossLimit[0] > 0 and expectedCrossLimit[0] != expectedMassLimit[0]:
        tmpline.SetLineColor(ROOT.kGray+2)
        tmpline.SetLineWidth(1)
        tmpline.SetLineStyle(2)
        tmpline.DrawLine(expectedCrossLimit[0],0,expectedCrossLimit[0],expectedCrossLimit[1])

        text1b = ROOT.TLatex()
        text1b.SetTextFont(43)
        text1b.SetTextSize(14)
        text1b.SetTextColor(ROOT.kGray+2)
        text1b.SetTextAngle(90)
        text1b.DrawLatex(expectedCrossLimit[0]-0.005,0, "  %0.2f TeV"%(expectedCrossLimit[0]))

    text2 = ROOT.TLatex()
    # text2.SetNDC()
    text2.SetTextFont(43)
    text2.SetTextSize(14)
    text2.SetTextColor(1)
    text2.SetTextAngle(90)
    if not options.blind:
        text2.DrawLatex(obsMassLimit-0.005,0, "  %0.2f TeV"%(obsMassLimit))

    # text1 = ROOT.TLatex()
    # text1.SetNDC()
    # text1.SetTextFont(42)
    # text1.DrawLatex(0.17,0.88, "#scale[1.0]{CMS, L = "+options.lumi+" fb^{-1} at  #sqrt{s} = 13 TeV}") # NOT GENERIC

    # TPT.Draw()
    climits.RedrawAxis()

    #CMS_lumi.extraText = 'Preliminary'
    CMS_lumi.extraText = 'Work in Progress'
    CMS_lumi.lumiTextSize = 0.35

    CMS_lumi.cmsTextSize = 0.8
    lumiLabel = options.lumiLabel + f" ({options.lumi} month)"
    CMS_lumi.CMS_lumi(climits, lumiLabel, 0, 11, sim=False)

    print("Will save: ", excl_lo, "->", excl_hi)
    print("  68%% band crossings @ eps=%s : -1sigma[%s, %s]  +1sigma[%s, %s]"
          % (labels[label_counter], up_lo, up_hi, low_lo, low_hi))
    exp_lim.append(excl_lo)
    closed_exp_lim.append(excl_hi)
    exp_lim_upper.append(up_lo)
    exp_lim_lower.append(low_lo)
    exp_lim_upper_closed.append(up_hi)
    exp_lim_lower_closed.append(low_hi)
    exp_lim_upper95.append(up95_lo)
    exp_lim_lower95.append(low95_lo)
    exp_lim_upper95_closed.append(up95_hi)
    exp_lim_lower95_closed.append(low95_hi)

    if not os.path.exists(options.outdir):
        os.mkdir(options.outdir)

    pave = ROOT.TPaveText(0.20, 0.68, 0.43, 0.88, "NDC")
    pave.SetFillColor(0)
    pave.SetBorderSize(0)
    pave.SetTextAlign(12)  # left aligned
    pave.AddText("m_{A'} = 0.245 GeV")
    pave.AddText(f"c#tau = {ctau_labels[label_counter]:.3g} [m]")
    pave.AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}")
    pave.Draw()

    filename = "limits_combine_"+options.signals[options.signals.find('/')+1:options.signals.find('.')]+'_'+cstr+str(labels[label_counter])
    climits.SaveAs(os.path.join(options.outdir, filename+".pdf"))
    climits.SaveAs(os.path.join(options.outdir, filename+".png"))
    # climits.SaveAs(os.path.join(options.outdir, filename+".C"))
    label_counter += 1
    print(label_counter)

print(labels)
print("Exp lim: ", exp_lim)
print("Closed Exp lim: ", closed_exp_lim)
print("Lower Exp limt: ", exp_lim_lower)
print("Upper Exp limit: ", exp_lim_upper)

# Persist the intersection arrays so the next step (plotExcludedMassVsEp_2D.py)
# reads them from disk instead of having them pasted in by hand.
import json
limits_out = os.path.join(options.outdir, "exclusion_limits.json")
with open(limits_out, "w") as f:
    json.dump({
        "eps":            list(labels),
        "exp_lim":        list(exp_lim),
        "closed_exp_lim": list(closed_exp_lim),
        "exp_lim_lower":  list(exp_lim_lower),
        "exp_lim_upper":  list(exp_lim_upper),
        "exp_lim_lower_closed": list(exp_lim_lower_closed),
        "exp_lim_upper_closed": list(exp_lim_upper_closed),
        "exp_lim_lower95": list(exp_lim_lower95),
        "exp_lim_upper95": list(exp_lim_upper95),
        "exp_lim_lower95_closed": list(exp_lim_lower95_closed),
        "exp_lim_upper95_closed": list(exp_lim_upper95_closed),
    }, f, indent=2)
print("Wrote exclusion limits to: " + limits_out)
