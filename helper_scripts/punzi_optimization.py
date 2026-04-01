#!/usr/bin/env python3
"""
Punzi optimization script for nhits variable.
Calculates two figures of merit:
1. Punzi FOM = epsilon(t) / (a/2 + sqrt(B(t)))
2. Simple FOM = S(t) / sqrt(B(t))

where:
  - epsilon(t) is signal efficiency for nhits > t
  - S(t) is signal yield (number of events) for nhits > t
  - a = 3 (significance level parameter for Punzi FOM)
  - B(t) is background yield for nhits > t
"""

import os
import sys
import ROOT
import cmsstyle as CMS
import numpy as np
from array import array

ROOT.gROOT.SetBatch(True)
ROOT.gErrorIgnoreLevel = ROOT.kWarning
CMS.SetExtraText("Work in Progress")

# Configuration
base_path = '/ceph/cms/store/user/tvami/EarthAsDM/Ntuples/Ntuples_v4.0.9/'
region = 'sr'
collection = 'matched_muon'  # Choose collection: 'track', 'muon', 'matched_muon', 'tuneP'
hist_name = 'h_nhits_nminus1'  # N-1 histogram for nhits
a_param = 3  # Significance parameter for Punzi FOM

# Sample definitions
samples_dict = {
    "Cosmic Bkg":       ["BkgMC",  "CosmicToMu_Par-MinP-4-MaxP-3000-MinTheta-0-MaxTheta-75_cosmuogen.root"],
    "Neutrino Bkg":     ["BkgMC",  "CosmicToMu_Par-MinP-10-MaxP-10000-MinTheta-91-MaxTheta-179_cosmuogen.root"],
    "M_{DM} = 2 TeV":   ["Signal", "CosmicToMu_Par-MinP-1000-MinTheta-91-MaxTheta-179-SurfaceDepth-e2_cosmuogen.root"],
    "M_{DM} = 10 TeV":  ["Signal", "CosmicToMu_Par-MinP-5000-MinTheta-91-MaxTheta-179-SurfaceDepth-e2_cosmuogen.root"],
    "M_{DM} = 20 TeV":  ["Signal", "CosmicToMu_Par-MinP-10000-MinTheta-91-MaxTheta-179-SurfaceDepth-e2_cosmuogen.root"],
    "M_{DM} = 180 TeV": ["Signal", "CosmicToMu_Par-MinP-90000-MinTheta-91-MaxTheta-179-SurfaceDepth-e2_cosmuogen.root"],
}

# Output directory
out_dir = "figures/punzi_optimization"
os.makedirs(out_dir, exist_ok=True)


def load_hist(collection, sample_name, hist_name):
    """Load a histogram from the skimmed ntuple file. Returns None on failure."""
    file_path = (f'{base_path}/{samples_dict[sample_name][0]}/{region}/'
                 f'{collection}/skimmed_{collection}_{region}_{samples_dict[sample_name][1]}')
    if not os.path.exists(file_path):
        print(f"WARNING: File not found: {file_path}")
        return None
    f = ROOT.TFile(file_path)
    h = f.Get(hist_name)
    if not h or not h.InheritsFrom("TH1"):
        print(f"WARNING: Histogram {hist_name} not found in {file_path}")
        f.Close()
        return None
    h.SetDirectory(0)
    f.Close()
    return h


def calculate_punzi_fom(sig_hist, bkg_hist, a=3):
    """
    Calculate Punzi FOM for each possible nhits threshold.

    Args:
        sig_hist: Signal histogram (h_nhits_nminus1)
        bkg_hist: Background histogram (h_nhits_nminus1)
        a: Significance parameter (default=3)

    Returns:
        Lists of (nhits_threshold, punzi_fom, signal_eff, bkg_yield, signal_yield)
    """
    nbins = sig_hist.GetNbinsX()

    # Get total integrals (for efficiency calculation)
    total_sig = sig_hist.Integral(0, nbins + 1)  # Include underflow and overflow
    total_bkg = bkg_hist.Integral(0, nbins + 1)

    if total_sig <= 0:
        print("ERROR: Signal histogram has zero or negative integral!")
        return [], [], [], [], []

    nhits_thresholds = []
    punzi_foms = []
    signal_effs = []
    bkg_yields = []
    signal_yields = []

    # Loop over bins (each bin represents a possible cut threshold)
    for ibin in range(1, nbins + 1):
        nhits_cut = sig_hist.GetBinLowEdge(ibin)

        # Calculate signal yield and efficiency
        S = sig_hist.Integral(ibin, nbins + 1)  # Include overflow
        epsilon = S / total_sig

        # Calculate background yield: integral from this bin to end
        B = bkg_hist.Integral(ibin, nbins + 1)  # Include overflow

        # Calculate Punzi FOM: epsilon / (a/2 + sqrt(B))
        denominator = a/2.0 + np.sqrt(B)
        if denominator > 0:
            punzi = epsilon / denominator
        else:
            punzi = 0

        # print(f"nhits > {nhits_cut:.0f}: epsilon = {epsilon:.3f}, B = {B:.1f}, Punzi = {punzi:.4f}")
        nhits_thresholds.append(nhits_cut)
        punzi_foms.append(punzi)
        signal_effs.append(epsilon)
        bkg_yields.append(B)
        signal_yields.append(S)

    return nhits_thresholds, punzi_foms, signal_effs, bkg_yields, signal_yields


def plot_punzi_vs_nhits(signal_samples, background_samples):
    """
    Create plots of Punzi FOM vs nhits threshold for different signal samples.

    Args:
        signal_samples: List of signal sample names
        background_samples: List of background sample names (will be combined)
    """
    # Load and combine background histograms
    print(f"\nLoading background samples...")
    bkg_hist_combined = None
    for bkg_sample in background_samples:
        h_bkg = load_hist(collection, bkg_sample, hist_name)
        if h_bkg is None:
            continue
        if bkg_hist_combined is None:
            bkg_hist_combined = h_bkg.Clone("h_bkg_combined")
        else:
            bkg_hist_combined.Add(h_bkg)
        print(f"  Added {bkg_sample}: {h_bkg.Integral()} events")

    if bkg_hist_combined is None:
        print("ERROR: Could not load any background histograms!")
        return

    print(f"  Total background: {bkg_hist_combined.Integral()} events")

    # Create canvas for Punzi FOM plot
    c_punzi = CMS.cmsCanvas('c_punzi', 0, 1, 0, 1, '', '')
    c_punzi.SetLeftMargin(0.15)
    c_punzi.SetRightMargin(0.08)
    c_punzi.SetBottomMargin(0.12)

    # Create legend
    leg = ROOT.TLegend(0.55, 0.65, 0.88, 0.88)
    leg.SetBorderSize(0)
    leg.SetFillStyle(0)
    leg.SetTextFont(42)
    leg.SetTextSize(0.03)
    leg.SetHeader("Signal Sample", "C")

    # Color scheme for different signal masses
    colors = [ROOT.kRed, ROOT.kBlue, ROOT.kGreen+2, ROOT.kMagenta+1]

    graphs = []
    max_punzi = 0
    optimal_cuts = {}

    # Process each signal sample
    for idx, sig_sample in enumerate(signal_samples):
        print(f"\nProcessing {sig_sample}...")
        h_sig = load_hist(collection, sig_sample, hist_name)
        if h_sig is None:
            continue

        print(f"  Signal events: {h_sig.Integral()}")

        # Calculate Punzi FOM
        nhits_vals, punzi_vals, sig_effs, bkg_vals, sig_yields = calculate_punzi_fom(
            h_sig, bkg_hist_combined, a=a_param
        )

        if not punzi_vals:
            continue

        # Find optimal cut (maximum Punzi FOM)
        max_idx = np.argmax(punzi_vals)
        optimal_nhits = nhits_vals[max_idx]
        max_punzi_val = punzi_vals[max_idx]
        optimal_sig_eff = sig_effs[max_idx]
        optimal_bkg = bkg_vals[max_idx]

        optimal_cuts[sig_sample] = {
            'nhits': optimal_nhits,
            'punzi': max_punzi_val,
            'sig_eff': optimal_sig_eff,
            'bkg_yield': optimal_bkg
        }

        print(f"  Optimal cut: nhits > {optimal_nhits:.0f}")
        print(f"  Maximum Punzi FOM: {max_punzi_val:.4f}")
        print(f"  Signal efficiency: {optimal_sig_eff:.3f}")
        print(f"  Background yield: {optimal_bkg:.1f}")

        # Print FOM values around the peak to verify
        print(f"  FOM values around peak:")
        for i in range(max(0, max_idx-3), min(len(nhits_vals), max_idx+4)):
            print(f"    nhits > {nhits_vals[i]:.0f}: Punzi = {punzi_vals[i]:.4f}, ε = {sig_effs[i]:.3f}, B = {bkg_vals[i]:.1f}")

        # Create TGraph
        n_points = len(nhits_vals)
        graph = ROOT.TGraph(n_points,
                           array('d', nhits_vals),
                           array('d', punzi_vals))
        graph.SetLineColor(colors[idx % len(colors)])
        graph.SetLineWidth(3)
        graph.SetMarkerColor(colors[idx % len(colors)])
        graph.SetMarkerStyle(20)
        graph.SetMarkerSize(0.8)

        graphs.append(graph)
        leg.AddEntry(graph, sig_sample, "lp")

        # Update max for y-axis
        max_punzi = max(max_punzi, max(punzi_vals))

        # Mark optimal point
        marker = ROOT.TMarker(8, max_punzi_val, 29)
        marker.SetMarkerColor(colors[idx % len(colors)])
        marker.SetMarkerSize(2)
        graphs.append(marker)  # Keep in list to prevent deletion


    if not graphs:
        print("ERROR: No signal samples could be processed!")
        return

    # Create frame
    frame = ROOT.TH1F("frame", "", 80, 0, 80)
    frame.SetStats(False)
    frame.GetXaxis().SetTitle("n_{Hits} Threshold")
    frame.GetYaxis().SetTitle("Punzi FOM")
    frame.GetXaxis().SetTitleSize(0.045)
    frame.GetYaxis().SetTitleSize(0.045)
    frame.GetXaxis().SetLabelSize(0.04)
    frame.GetYaxis().SetLabelSize(0.04)
    frame.SetMinimum(0)
    frame.SetMaximum(max_punzi * 1.3)
    frame.Draw()

    # Draw graphs
    for graph in graphs:
        if isinstance(graph, ROOT.TGraph):
            graph.Draw("LP SAME")
        elif isinstance(graph, ROOT.TMarker):
            graph.Draw("SAME")
        elif isinstance(graph, ROOT.TLatex):
            graph.Draw("SAME")

    leg.Draw()

    # Add text box with parameters
    pave = ROOT.TPaveText(0.18, 0.78, 0.45, 0.88, "NDC")
    pave.SetFillColor(0)
    pave.SetBorderSize(0)
    pave.SetTextAlign(12)
    pave.SetTextSize(0.03)
    pave.AddText(f"Collection: {collection}")
    pave.Draw()

    CMS.CMS_lumi(c_punzi, iPosX=0, scaleLumi=0)

    # Save plot
    c_punzi.SaveAs(f"{out_dir}/punzi_fom_vs_nhits_{collection}.png")
    c_punzi.SaveAs(f"{out_dir}/punzi_fom_vs_nhits_{collection}.pdf")
    print(f"\nSaved plot to {out_dir}/punzi_fom_vs_nhits_{collection}.png")

    # Print summary
    print("\n" + "="*70)
    print("OPTIMAL CUTS SUMMARY")
    print("="*70)
    for sig_sample, results in optimal_cuts.items():
        print(f"\n{sig_sample}:")
        print(f"  Optimal nhits cut:     > {results['nhits']:.0f}")
        print(f"  Punzi FOM:             {results['punzi']:.4f}")
        print(f"  Signal efficiency:     {results['sig_eff']:.3f} ({results['sig_eff']*100:.1f}%)")
        print(f"  Background yield:      {results['bkg_yield']:.1f}")
    print("="*70)


def plot_eff_over_sqrtB_vs_nhits(signal_samples, background_samples):
    """
    Create plots of Signal Yield / sqrt(B) vs nhits threshold.

    Args:
        signal_samples: List of signal sample names
        background_samples: List of background sample names (will be combined)
    """
    # Load and combine background histograms
    print(f"\n{'='*70}")
    print("CREATING S/√B PLOT")
    print(f"{'='*70}")
    print(f"\nLoading background samples...")
    bkg_hist_combined = None
    for bkg_sample in background_samples:
        h_bkg = load_hist(collection, bkg_sample, hist_name)
        if h_bkg is None:
            continue
        if bkg_hist_combined is None:
            bkg_hist_combined = h_bkg.Clone("h_bkg_combined")
        else:
            bkg_hist_combined.Add(h_bkg)
        print(f"  Added {bkg_sample}: {h_bkg.Integral()} events")

    if bkg_hist_combined is None:
        print("ERROR: Could not load any background histograms!")
        return

    print(f"  Total background: {bkg_hist_combined.Integral()} events")

    # Create canvas
    c_simple = CMS.cmsCanvas('c_simple', 0, 1, 0, 1, '', '')
    c_simple.SetLeftMargin(0.15)
    c_simple.SetRightMargin(0.08)
    c_simple.SetBottomMargin(0.12)

    # Create legend
    leg = ROOT.TLegend(0.55, 0.65, 0.88, 0.88)
    leg.SetBorderSize(0)
    leg.SetFillStyle(0)
    leg.SetTextFont(42)
    leg.SetTextSize(0.03)
    leg.SetHeader("Signal Sample", "C")

    # Color scheme for different signal masses
    colors = [ROOT.kRed, ROOT.kBlue, ROOT.kGreen+2, ROOT.kMagenta+1]

    graphs = []
    max_fom = 0
    optimal_cuts = {}

    # Process each signal sample
    for idx, sig_sample in enumerate(signal_samples):
        print(f"\nProcessing {sig_sample}...")
        h_sig = load_hist(collection, sig_sample, hist_name)
        if h_sig is None:
            continue

        print(f"  Signal events: {h_sig.Integral()}")

        # Calculate signal yield and background yield
        nhits_vals, _, sig_effs, bkg_vals, sig_yields = calculate_punzi_fom(
            h_sig, bkg_hist_combined, a=a_param
        )

        if not sig_yields:
            continue

        # Calculate S/√B for each threshold
        simple_fom_vals = []
        for S, B in zip(sig_yields, bkg_vals):
            if B > 0:
                simple_fom = S / np.sqrt(B)
            else:
                simple_fom = 0
            simple_fom_vals.append(simple_fom)

        # Find optimal cut (maximum S/√B)
        max_idx = np.argmax(simple_fom_vals)
        optimal_nhits = nhits_vals[max_idx]
        max_fom_val = simple_fom_vals[max_idx]
        optimal_sig_yield = sig_yields[max_idx]
        optimal_sig_eff = sig_effs[max_idx]
        optimal_bkg = bkg_vals[max_idx]

        optimal_cuts[sig_sample] = {
            'nhits': optimal_nhits,
            'fom': max_fom_val,
            'sig_yield': optimal_sig_yield,
            'sig_eff': optimal_sig_eff,
            'bkg_yield': optimal_bkg
        }

        print(f"  Optimal cut: nhits > {optimal_nhits:.0f}")
        print(f"  Maximum S/√B: {max_fom_val:.1f}")
        print(f"  Signal yield: {optimal_sig_yield:.1f} (ε = {optimal_sig_eff:.3f})")
        print(f"  Background yield: {optimal_bkg:.1f}")

        # Print FOM values around the peak to verify
        print(f"  FOM values around peak:")
        for i in range(max(0, max_idx-3), min(len(nhits_vals), max_idx+4)):
            print(f"    nhits > {nhits_vals[i]:.0f}: S/√B = {simple_fom_vals[i]:.1f}, S = {sig_yields[i]:.1f}, B = {bkg_vals[i]:.1f}")

        # Create TGraph
        n_points = len(nhits_vals)
        graph = ROOT.TGraph(n_points,
                           array('d', nhits_vals),
                           array('d', simple_fom_vals))
        graph.SetLineColor(colors[idx % len(colors)])
        graph.SetLineWidth(3)
        graph.SetMarkerColor(colors[idx % len(colors)])
        graph.SetMarkerStyle(20)
        graph.SetMarkerSize(0.8)

        graphs.append(graph)
        leg.AddEntry(graph, sig_sample, "lp")

        # Update max for y-axis
        max_fom = max(max_fom, max(simple_fom_vals))

        # Mark optimal point
        marker = ROOT.TMarker(8, max_fom_val, 29)
        marker.SetMarkerColor(colors[idx % len(colors)])
        marker.SetMarkerSize(2)
        graphs.append(marker)  # Keep in list to prevent deletion

    if not graphs:
        print("ERROR: No signal samples could be processed!")
        return

    # Create frame
    frame = ROOT.TH1F("frame2", "", 80, 0, 80)
    frame.SetStats(False)
    frame.GetXaxis().SetTitle("n_{Hits} Threshold")
    frame.GetYaxis().SetTitle("S/#sqrt{B}")
    frame.GetXaxis().SetTitleSize(0.045)
    frame.GetYaxis().SetTitleSize(0.045)
    frame.GetXaxis().SetLabelSize(0.04)
    frame.GetYaxis().SetLabelSize(0.04)
    frame.SetMinimum(0)
    frame.SetMaximum(max_fom * 1.3)
    frame.Draw()

    # Draw graphs
    for graph in graphs:
        if isinstance(graph, ROOT.TGraph):
            graph.Draw("LP SAME")
        elif isinstance(graph, ROOT.TMarker):
            graph.Draw("SAME")
        elif isinstance(graph, ROOT.TLatex):
            graph.Draw("SAME")

    leg.Draw()

    # Add text box with parameters
    pave = ROOT.TPaveText(0.18, 0.78, 0.45, 0.88, "NDC")
    pave.SetFillColor(0)
    pave.SetBorderSize(0)
    pave.SetTextAlign(12)
    pave.SetTextSize(0.03)
    pave.AddText(f"Collection: {collection}")
    pave.Draw()

    CMS.CMS_lumi(c_simple, iPosX=0, scaleLumi=0)

    # Save plot
    c_simple.SaveAs(f"{out_dir}/eff_over_sqrtB_vs_nhits_{collection}.png")
    c_simple.SaveAs(f"{out_dir}/eff_over_sqrtB_vs_nhits_{collection}.pdf")
    print(f"\nSaved plot to {out_dir}/eff_over_sqrtB_vs_nhits_{collection}.png")

    # Print summary
    print("\n" + "="*70)
    print("OPTIMAL CUTS SUMMARY (S/√B)")
    print("="*70)
    for sig_sample, results in optimal_cuts.items():
        print(f"\n{sig_sample}:")
        print(f"  Optimal nhits cut:     > {results['nhits']:.0f}")
        print(f"  Maximum S/√B:          {results['fom']:.1f}")
        print(f"  Signal yield:          {results['sig_yield']:.1f} events")
        print(f"  Signal efficiency:     {results['sig_eff']:.3f} ({results['sig_eff']*100:.1f}%)")
        print(f"  Background yield:      {results['bkg_yield']:.1f} events")
    print("="*70)


def main():
    # Separate samples by type
    signal_samples = [s for s in samples_dict if samples_dict[s][0] == "Signal"]
    background_samples = [s for s in samples_dict if samples_dict[s][0] == "BkgMC"]

    print("="*70)
    print("PUNZI OPTIMIZATION FOR NHITS")
    print("="*70)
    print(f"Collection: {collection}")
    print(f"Region: {region}")
    print(f"Histogram: {hist_name}")
    print(f"Significance parameter a: {a_param}")
    print(f"\nSignal samples: {len(signal_samples)}")
    for s in signal_samples:
        print(f"  - {s}")
    print(f"\nBackground samples: {len(background_samples)}")
    for s in background_samples:
        print(f"  - {s}")

    # Create Punzi FOM plots
    plot_punzi_vs_nhits(signal_samples, background_samples)

    # Create S/√B plots
    plot_eff_over_sqrtB_vs_nhits(signal_samples, background_samples)

    print("\nDone!")


if __name__ == "__main__":
    main()
