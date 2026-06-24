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
                default   =   '2023D Cosmics',
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
labels = [4e-09, 5e-09, 6e-09, 7e-09, 8e-09, 9e-09, 1e-08, 1.1e-08, 1.2e-08, 1.3e-08, 1.4e-08, 1.5e-08, 1.6e-08, 1.7e-08, 1.8e-08, 1.9e-08, 2e-08, 2.1e-08, 2.2e-08, 2.3e-08, 2.4e-08, 3.4e-08, 4.4e-08, 5.4e-08, 6.4e-08, 7.4e-08, 8.4e-08, 9.4e-08, 1.04e-07, 1.14e-07, 1.24e-07, 1.34e-07, 1.44e-07, 1.54e-07, 1.64e-07, 1.74e-07, 1.84e-07, 1.94e-07, 2.04e-07, 2.14e-07, 2.24e-07, 2.34e-07, 2.44e-07, 2.54e-07, 2.64e-07, 2.74e-07, 2.84e-07, 2.94e-07, 3.04e-07, 3.28e-07, 3.52e-07, 3.76e-07, 4.00e-07, 4.24e-07, 4.48e-07, 4.72e-07, 4.96e-07, 5.20e-07, 5.44e-07, 5.68e-07, 5.92e-07, 6.16e-07, 6.40e-07, 6.64e-07, 6.88e-07, 7.12e-07, 7.36e-07, 7.60e-07, 7.84e-07, 8.08e-07, 8.32e-07, 8.56e-07, 8.80e-07, 9.04e-07, 9.28e-07, 9.52e-07, 9.76e-07, 1.00e-06]
exp_lim = []
closed_exp_lim = []
exp_lim_upper = []
exp_lim_lower = []
if options.num_rate == 0: num_rate = len(labels)
else: num_rate = options.num_rate

# Dictionary that has proportions of each depth as a function of candidate mass
props_dict = np.load('props_dict.npy', allow_pickle=True).item()
def add_e(path, tag='e3'):
    # Insert after the mass token (e.g. M800GeV)
    path = re.sub(r'(M\d+GeV)', rf'\1_{tag}', path)
    return path

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

        # Check if e3, e4, e5, and e6 depths are present, otherwise skip masspoint
        print('Processing ' + this_name + ' with mass ' + str(this_mass) + ' and xsec ' + str(this_xsec))
        if not os.path.exists(this_name+'/higgsCombineTest.AsymptoticLimits.mH120.root'): 
            print(f'File not found')
            continue
        elif not os.path.exists(add_e(this_name, 'e3')+'/higgsCombineTest.AsymptoticLimits.mH120.root'):
            print(f'File not found')
            continue
        elif not os.path.exists(add_e(this_name, 'e4')+'/higgsCombineTest.AsymptoticLimits.mH120.root'):
            print(f'File not found')
            continue
        elif not os.path.exists(add_e(this_name, 'e5')+'/higgsCombineTest.AsymptoticLimits.mH120.root'):
            print(f'File not found')
            continue
        elif not os.path.exists(add_e(this_name, 'e6')+'/higgsCombineTest.AsymptoticLimits.mH120.root'):
            print(f'File not found')
            continue
        
        # Open limits
        zeroDepth_output = TFile.Open(this_name+'/higgsCombineTest.AsymptoticLimits.mH120.root')
        zeroDepth_tree = zeroDepth_output.Get('limit')
        e3_output = TFile.Open(add_e(this_name, 'e3')+'/higgsCombineTest.AsymptoticLimits.mH120.root')
        e3_tree = e3_output.Get('limit')
        e4_output = TFile.Open(add_e(this_name, 'e4')+'/higgsCombineTest.AsymptoticLimits.mH120.root')
        e4_tree = e4_output.Get('limit')
        e5_output = TFile.Open(add_e(this_name, 'e5')+'/higgsCombineTest.AsymptoticLimits.mH120.root')
        e5_tree = e5_output.Get('limit')
        e6_output = TFile.Open(add_e(this_name, 'e6')+'/higgsCombineTest.AsymptoticLimits.mH120.root')
        e6_tree = e6_output.Get('limit')

        # Set the mass (x axis)
        key_mass = min(this_mass*1000, 900000)
        if key_mass in props_dict: print(props_dict[key_mass])
        else: continue
        x_mass.append(this_mass)
        # Grab the cross section limits (y axis)
        for ievent in range(int(zeroDepth_tree.GetEntries())):
            zeroDepth_tree.GetEntry(ievent)
            e3_tree.GetEntry(ievent)
            e4_tree.GetEntry(ievent)
            e5_tree.GetEntry(ievent)
            e6_tree.GetEntry(ievent)
            
            # Calculate limit through weighted average of each depth
            lim_quantity = (e3_tree.limit*props_dict[key_mass][0]+e4_tree.limit*props_dict[key_mass][1]+e5_tree.limit*props_dict[key_mass][2]+e6_tree.limit*(props_dict[key_mass][3]+props_dict[key_mass][4]))
            
            # Using zeroDepth_tree.quantileExpected to append lim_quantity to the correct list
            # Nominal expected
            if zeroDepth_tree.quantileExpected == 0.5:
                y_mclimit.append(lim_quantity*this_xsec)
            # -1 sigma expected
            if round(zeroDepth_tree.quantileExpected,2) == 0.16:
                y_mclimitlow68.append(lim_quantity*this_xsec)
            # +1 sigma expected
            if round(zeroDepth_tree.quantileExpected,2) == 0.84:
                y_mclimitup68.append(lim_quantity*this_xsec)
            # -2 sigma expected
            if round(zeroDepth_tree.quantileExpected,3) == 0.025:
                y_mclimitlow95.append(lim_quantity*this_xsec)
            # +2 sigma expected
            if round(zeroDepth_tree.quantileExpected,3) == 0.975:
                y_mclimitup95.append(lim_quantity*this_xsec)
            if (debug > 0) : print("For " + str(this_mass) + " mc_limit is " +str(y_mclimit))
            # Observed (plot only if unblinded)
            if zeroDepth_tree.quantileExpected == -1:
                if not options.blind:
                    if (debug > 0) : print('DEBUG : appending to y_limit')
                    if (debug > 0) : print('appending: {} to y_limit'.format(zeroDepth_tree.limit*this_xsec))
                    y_limit.append(zeroDepth_tree.limit*this_xsec)
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

    # 2 sigma expected
    g_error95 = make_smooth_graph(g_mc2minus, g_mc2plus)
    g_error95.SetFillColor(kOrange)
    g_error95.SetLineColor(0)

    # 1 sigma expected
    g_error = make_smooth_graph(g_mcminus, g_mcplus)
    g_error.SetFillColor( kGreen+1)
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

    graphWPdown.Draw("l")
    graphWPup.Draw("l")

    #graphWPFixedAt1800.SetMarkerStyle(29)
    #graphWPFixedAt1800.Draw("samep")

    # Finally calculate the intercept
    expectedMassLimit,expectedCrossLimit = Inter(g_mclimit,graphWP) #if len(Inter(g_mclimit,graphWP)) > 0 else -1.0
    upLimit,upXsectionLim = Inter(g_mcminus,graphWP) if len(Inter(g_mcminus,graphWP)) > 0 else -1.0
    lowLimit,lowXsectionLim = Inter(g_mcplus,graphWP) if len(Inter(g_mcplus,graphWP)) > 0 else -1.0
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

    # Legend and draw
    gStyle.SetLegendFont(62)
    legend = TLegend(0.5, 0.6, 0.92, 0.89, '')
    legend.SetHeader("95% CL Upper Limits")
    if not options.blind:
        legend.AddEntry(g_limit, "Observed Limit", "l")
    legend.AddEntry(g_error95, "Expected Limit #pm1#sigma, #pm2#sigma","f")
    # legend.AddEntry(g_error95, "#pm1#sigma, 2#sigma", "f")
    # legend.AddEntry(g_error95, "#pm2#sigma", "f")
    legend.AddEntry(graphWP, "#sigma^{"+options.xsorder+"}_{th}("+options.process+")#pm1#sigma", "l")   # NOT GENERIC

    legend.SetBorderSize(0)
    legend.SetFillStyle(0)
    legend.SetLineColor(0)

    legend.Draw("same")

    # this is to fake the green+yellow band in the legend
    tmpcolor = g_error.GetFillColor()
    tmpline = ROOT.TLine()
    tmpline.SetLineColor(tmpcolor)
    tmLineWidth = 22  if options.blind else 15
    tmpline.SetLineWidth(tmLineWidth)
    tmpyposition = 0.75 if options.blind else 0.713
    tmpline.DrawLineNDC(0.517,tmpyposition,0.588,tmpyposition)

    # legend line for median point
    tmpline.SetLineColor(1)
    tmpline.SetLineWidth(3)
    tmpline.SetLineStyle(2)
    tmpline.DrawLineNDC(0.517,tmpyposition,0.588,tmpyposition)


    # legend lines for theory
    tmpyposition = 0.66 if options.blind else 0.65
    tmpline.SetLineColor(4)
    tmpline.SetLineStyle(2)
    tmpline.SetLineWidth(2)
    tmpline.DrawLineNDC(0.517,tmpyposition,0.588,tmpyposition)

    tmpyposition = 0.64 if options.blind else 0.625
    tmpline.SetLineColor(4)
    tmpline.SetLineStyle(2)
    tmpline.SetLineWidth(2)
    tmpline.DrawLineNDC(0.517,tmpyposition,0.588,tmpyposition)


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
    CMS_lumi.lumiTextSize = 0.5

    CMS_lumi.cmsTextSize = 0.8
    CMS_lumi.CMS_lumi(climits, options.lumiLabel, 0, 11, sim=False)

    print("Will save: ", expectedMassLimit[0])
    exp_lim.append(expectedMassLimit[0])
    closed_exp_lim.append(expectedCrossLimit[0])
    exp_lim_upper.append(upLimit[0])
    exp_lim_lower.append(lowLimit[0])

    if not os.path.exists(options.outdir):
        os.mkdir(options.outdir)

    pave = ROOT.TPaveText(0.20, 0.68, 0.43, 0.88, "NDC")
    pave.SetFillColor(0)
    pave.SetBorderSize(0)
    pave.SetTextAlign(12)  # left aligned
    pave.AddText("m_{A'} = 0.245 GeV")
    pave.AddText(f"#varepsilon = {labels[label_counter]}")
    pave.AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}")
    pave.Draw()

    filename = "limits_combine_"+options.signals[options.signals.find('/')+1:options.signals.find('.')]+'_'+cstr+str(labels[label_counter])
    climits.SaveAs(os.path.join(options.outdir, filename+".pdf"))
    climits.SaveAs(os.path.join(options.outdir, filename+".C"))
    label_counter += 1
    print(label_counter)

print(labels)
print("Exp lim: ", exp_lim)
print("Closed Exp lim: ", closed_exp_lim)
print("Lower Exp limt: ", exp_lim_lower)
print("Upper Exp limit: ", exp_lim_upper)
