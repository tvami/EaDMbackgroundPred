#!/usr/bin/env python3
import ROOT
import os
import glob
import re

# CMS Style settings
def setCMSStyle():
    """Set CMS style for plots"""
    ROOT.gStyle.SetOptStat(0)
    ROOT.gStyle.SetOptTitle(0)
    
    # Canvas settings
    ROOT.gStyle.SetCanvasBorderMode(0)
    ROOT.gStyle.SetCanvasColor(ROOT.kWhite)
    ROOT.gStyle.SetCanvasDefH(600)
    ROOT.gStyle.SetCanvasDefW(600)
    ROOT.gStyle.SetCanvasDefX(0)
    ROOT.gStyle.SetCanvasDefY(0)
    
    # Pad settings
    ROOT.gStyle.SetPadBorderMode(0)
    ROOT.gStyle.SetPadColor(ROOT.kWhite)
    ROOT.gStyle.SetPadGridX(False)
    ROOT.gStyle.SetPadGridY(False)
    ROOT.gStyle.SetGridColor(0)
    ROOT.gStyle.SetGridStyle(3)
    ROOT.gStyle.SetGridWidth(1)
    
    # Frame settings
    ROOT.gStyle.SetFrameBorderMode(0)
    ROOT.gStyle.SetFrameBorderSize(1)
    ROOT.gStyle.SetFrameFillColor(0)
    ROOT.gStyle.SetFrameFillStyle(0)
    ROOT.gStyle.SetFrameLineColor(1)
    ROOT.gStyle.SetFrameLineStyle(1)
    ROOT.gStyle.SetFrameLineWidth(1)
    
    # Margins
    ROOT.gStyle.SetPadTopMargin(0.08)
    ROOT.gStyle.SetPadBottomMargin(0.13)
    ROOT.gStyle.SetPadLeftMargin(0.16)
    ROOT.gStyle.SetPadRightMargin(0.05)
    
    # Axis settings
    ROOT.gStyle.SetTitleSize(0.05, "XYZ")
    ROOT.gStyle.SetTitleXOffset(0.9)
    ROOT.gStyle.SetTitleYOffset(1.4)
    ROOT.gStyle.SetLabelSize(0.04, "XYZ")
    ROOT.gStyle.SetLabelOffset(0.007, "XYZ")
    
    # Legend settings
    ROOT.gStyle.SetLegendBorderSize(0)
    ROOT.gStyle.SetLegendFillColor(0)
    ROOT.gStyle.SetLegendFont(42)
    ROOT.gStyle.SetLegendTextSize(0.03)
    
    ROOT.gStyle.SetPalette(ROOT.kBird)
    ROOT.gStyle.SetNumberContours(99)
    
    ROOT.gROOT.ForceStyle()

def addCMSText(canvas, lumi_text="Cosmics", extra_text="Preliminary"):
    """Add CMS label and luminosity text"""
    canvas.cd()
    
    latex = ROOT.TLatex()
    latex.SetNDC()
    latex.SetTextFont(42)
    
    # CMS text
    latex.SetTextSize(0.05)
    latex.SetTextFont(61)
    latex.DrawLatex(0.15, 0.93, "CMS")
    
    # Extra text (e.g., Preliminary)
    if extra_text:
        latex.SetTextSize(0.04)
        latex.SetTextFont(52)
        latex.DrawLatex(0.25, 0.93, extra_text)
    
    # Luminosity/energy text
    if lumi_text:
        latex.SetTextSize(0.04)
        latex.SetTextFont(42)
        latex.DrawLatex(0.70, 0.93, lumi_text)
    
    return latex

def extract_parameters(filename):
    """Extract MinP, SurfaceDepth, and other parameters from filename"""
    params = {}
    
    # Extract MinP
    match = re.search(r'MinP-(\d+)', filename)
    if match:
        params['minp'] = int(match.group(1))
    
    # Extract SurfaceDepth - handle both plain numbers and scientific notation (e2, e3, etc.)
    match = re.search(r'SurfaceDepth-e(\d+)', filename)
    if match:
        # Convert e2 -> 10^2 = 100, e3 -> 10^3 = 1000, etc.
        exponent = int(match.group(1))
        params['depth'] = 10 ** exponent
    else:
        # Try plain number format
        match = re.search(r'SurfaceDepth-(\d+)', filename)
        if match:
            params['depth'] = int(match.group(1))
        else:
            params['depth'] = None
    
    # Extract MinTheta
    match = re.search(r'MinTheta-(\d+)', filename)
    if match:
        params['min_theta'] = int(match.group(1))
    else:
        params['min_theta'] = None
    
    # Extract MaxTheta
    match = re.search(r'MaxTheta-(\d+)', filename)
    if match:
        params['max_theta'] = int(match.group(1))
    else:
        params['max_theta'] = None
    
    return params

def get_grouping_key(params):
    """
    Create a grouping key from parameters (excluding MinP which is the x-axis)
    Returns a tuple of (depth, min_theta, max_theta)
    """
    return (params.get('depth'), params.get('min_theta'), params.get('max_theta'))

def format_group_label(group_key):
    """Create a readable label from the grouping key"""
    depth, min_theta, max_theta = group_key
    
    parts = []
    if depth is not None:
        parts.append(f"D={depth} mm")
    if min_theta is not None:
        parts.append(f"#theta_{{min}}={min_theta}#circ")
    if max_theta is not None:
        parts.append(f"#theta_{{max}}={max_theta}#circ")
    
    if not parts:
        return "Default parameters"
    
    return ", ".join(parts)

def plot_all_cutflow_analysis(input_dir="skimmed_volt2", hist_name="h_cutflow", output_name="cutflow_overlay.png"):
    """
    Create all cutflow plots: 1D overlay, 2D heatmap, and efficiency vs MinP
    
    Args:
        input_dir: Directory containing ROOT files
        hist_name: Name of the histogram to overlay
        output_name: Base output filename for the plots
    """
    
    # Enable batch mode
    ROOT.gROOT.SetBatch(True)
    
    # Set CMS style
    setCMSStyle()
    
    # Get list of ROOT files
    root_files = glob.glob(os.path.join(input_dir, "*.root"))
    
    if not root_files:
        print(f"No ROOT files found in {input_dir}")
        return
    
    # Sort files by MinP value
    def extract_minp(filename):
        """Extract MinP value from filename for sorting"""
        match = re.search(r'MinP-(\d+)', filename)
        if match:
            return int(match.group(1))
        return 0  # Default value if MinP not found
    
    root_files = sorted(root_files, key=extract_minp)
    
    print(f"Found {len(root_files)} ROOT files")
    
    # Extract region and object type for unique canvas names
    path_parts = input_dir.rstrip('/').split('/')
    canvas_suffix = ""
    for part in reversed(path_parts):
        if part in ['track', 'muon', 'matched_muon', 'tuneP', 'vr', 'sr']:
            canvas_suffix = part + "_" + canvas_suffix
    canvas_suffix = canvas_suffix.rstrip('_')
    
    # Color palette - expanded for 30+ curves
    colors = [
        ROOT.kBlack, ROOT.kRed, ROOT.kBlue, ROOT.kGreen+2, ROOT.kMagenta, 
        ROOT.kCyan+1, ROOT.kOrange, ROOT.kViolet, ROOT.kTeal-1, ROOT.kPink+1,
        ROOT.kAzure+7, ROOT.kSpring-7, ROOT.kYellow+2, ROOT.kRed+2, ROOT.kBlue+2,
        ROOT.kGreen+3, ROOT.kMagenta+2, ROOT.kCyan+3, ROOT.kOrange+7, ROOT.kViolet+2,
        ROOT.kTeal+2, ROOT.kPink-2, ROOT.kAzure-3, ROOT.kSpring+3, ROOT.kYellow-2,
        ROOT.kRed-3, ROOT.kBlue-3, ROOT.kGreen-2, ROOT.kMagenta-3, ROOT.kOrange-3,
        ROOT.kViolet-3, ROOT.kTeal-3, ROOT.kPink+3, ROOT.kAzure+2, ROOT.kSpring-2
    ]
    
    histograms = []
    histogram_labels = []  # Store labels for reuse
    
    # Loop over files and get histograms
    for i, root_file in enumerate(root_files):
        try:
            tfile = ROOT.TFile.Open(root_file)
        except (OSError, RuntimeError) as e:
            print(f"Warning: Could not open {root_file}: {e}")
            continue
        
        if not tfile or tfile.IsZombie():
            print(f"Warning: Zombie file {root_file}")
            continue
        
        hist = tfile.Get(hist_name)
        if not hist:
            print(f"Warning: {hist_name} not found in {root_file}")
            tfile.Close()
            continue
        
        # Clone histogram to keep it after file closes
        hist_clone = hist.Clone(f"h_{i}")
        hist_clone.SetDirectory(0)
        
        # Extract meaningful label from filename
        filename = os.path.basename(root_file)
        label = filename.replace("skimmed_", "").replace(".root", "")
        
        # Clean up label: remove CosmicToMu and format parameters
        label = label.replace("CosmicToMu_Par-", "")
        label = label.replace("_CosmicToMu_", "_")
        label = label.replace("matched_muon", "#mu-match")
        label = label.replace("MinP-", " p = ")
        label = label.replace("MinTheta-", " #theta = ")
        label = label.replace("MaxTheta-", "")        
        label = label.replace("-SurfaceDepth-", " D=")
        label = label.replace("_cosmuogen", "")
        label = label.replace("cosmuogen", "")
        label = label.replace("_", " ")
        
        # Set style
        color = colors[i % len(colors)]
        hist_clone.SetLineColor(color)
        hist_clone.SetLineWidth(2)
        hist_clone.SetMarkerColor(color)
        hist_clone.SetMarkerStyle(20)
        hist_clone.SetMarkerSize(0.8)
        
        histograms.append((hist_clone, tfile))
        histogram_labels.append(label)
    
    if not histograms:
        print("No valid histograms found!")
        return
    
    # Extract region and object type from input_dir for output filenames
    path_parts = input_dir.rstrip('/').split('/')
    region = ""
    object_type = ""
    for part in reversed(path_parts):
        if part in ['track', 'muon', 'matched_muon', 'tuneP']:
            object_type = part
        elif part in ['vr', 'sr']:
            region = part
        if region and object_type:
            break
    
    # Create base name with region and object type
    base_name = output_name.replace(".png", "").replace(".pdf", "")
    if region and object_type:
        base_name = f"{base_name}_{region}_{object_type}"
    elif region:
        base_name = f"{base_name}_{region}"
    elif object_type:
        base_name = f"{base_name}_{object_type}"
    
    # ===== Create normalized version (normalized to first bin) =====
    canvas2 = ROOT.TCanvas(f"c2_{canvas_suffix}", f"c2_{canvas_suffix}", 800, 800)
    canvas2.cd()
    
    # Create new legend for normalized plot - spanning full width
    legend2 = ROOT.TLegend(0.17, 0.5, 0.9, 0.9)
    legend2.SetTextSize(0.015)
    legend2.SetNColumns(2)
    
    histograms_norm = []
    max_y_norm = 0
    min_y_norm = 1.0
    
    # Normalize each histogram to its first bin
    for i, (hist, tfile) in enumerate(histograms):
        hist_norm = hist.Clone(f"h_norm_{i}")
        
        # Get first bin content
        first_bin_content = hist_norm.GetBinContent(1)
        
        if first_bin_content > 0:
            # Normalize to first bin
            hist_norm.Scale(1.0 / first_bin_content)
        
        # Track maximum and minimum (excluding zeros)
        for bin_i in range(1, hist_norm.GetNbinsX() + 1):
            bin_content = hist_norm.GetBinContent(bin_i)
            if bin_content > 0:
                if bin_content > max_y_norm:
                    max_y_norm = bin_content
                if bin_content < min_y_norm:
                    min_y_norm = bin_content
        
        histograms_norm.append(hist_norm)
    
    if not histograms_norm:
        print("No valid normalized histograms found!")
        return
    
    # Set axis range on first histogram BEFORE drawing anything
    first_hist_norm = histograms_norm[0]
    first_hist_norm.GetYaxis().SetTitle("Pre-selection efficiency")
    first_hist_norm.GetXaxis().SetTitle("")
    
    # Use fixed Y-axis range for normalized plot
    first_hist_norm.SetMaximum(1e5)
    first_hist_norm.SetMinimum(1e-4)
    
    # Set log scale AFTER setting range
    canvas2.SetLogy()
    
    # Draw normalized histograms
    for i, hist_norm in enumerate(histograms_norm):
        draw_option = "HISTTEXT0" if i == 0 else "HISTTEXT0 SAME"
        hist_norm.Draw(draw_option)
        
        # Use the stored label
        label = histogram_labels[i]
        
        # Add to legend
        legend2.AddEntry(hist_norm, label, "l")
    
    # Draw legend
    legend2.Draw()
    
    # Add CMS text
    addCMSText(canvas2, lumi_text="Cosmics", extra_text="Work in Progress")
    
    # Save normalized canvas
    png_name_norm = base_name + "_normalized.png"
    pdf_name_norm = base_name + "_normalized.pdf"
    
    canvas2.SaveAs(png_name_norm)
    # canvas2.SaveAs(pdf_name_norm)
    
    canvas2.Update()
    
    # ===== Create 2D histogram (cutflow vs samples) =====
    canvas3 = ROOT.TCanvas(f"c3_{canvas_suffix}", f"c3_{canvas_suffix}", 1200, 800)
    canvas3.cd()
    canvas3.SetRightMargin(0.15)
    canvas3.SetLeftMargin(0.2)
    canvas3.SetBottomMargin(0.07)
    
    # Get number of bins from first histogram
    n_bins = histograms_norm[0].GetNbinsX()
    n_samples = len(histograms_norm)
    
    # Create 2D histogram
    h2d = ROOT.TH2F("h2d_cutflow", "Cutflow vs Samples", 
                    n_bins, 0.5, n_bins + 0.5,
                    n_samples, 0.5, n_samples + 0.5)
    
    # Set X-axis bin labels (cutflow steps)
    for bin_x in range(1, n_bins + 1):
        h2d.GetXaxis().SetBinLabel(bin_x, histograms_norm[0].GetXaxis().GetBinLabel(bin_x))

    # Fill the 2D histogram and set Y-axis bin labels
    for i, hist_norm in enumerate(histograms_norm):
        # Use the stored label (already sorted by MinP)
        label = histogram_labels[i]
        
        # Set Y-axis label for this sample
        h2d.GetYaxis().SetBinLabel(i + 1, label)

        # Fill each bin
        for bin_x in range(1, n_bins + 1):
            yield_value = hist_norm.GetBinContent(bin_x)
            h2d.SetBinContent(bin_x, i + 1, yield_value)
    
    # Set axis titles
    # h2d.GetXaxis().SetTitle("Cut Step")
    # h2d.GetYaxis().SetTitle("Sample")
    h2d.GetZaxis().SetTitle("Pre-selection efficiency")
    
    # Set label size for readability
    h2d.GetYaxis().SetLabelSize(0.02)
    h2d.GetXaxis().SetLabelSize(0.04)
    
    # Set Z-axis range
    h2d.SetMinimum(1e-4)
    h2d.SetMaximum(1.0)
    
    # Draw with COLZ option for color scale, and TEXT for bin values
    ROOT.gStyle.SetPalette(ROOT.kBird)
    ROOT.gStyle.SetPaintTextFormat("4.3f")
    h2d.Draw("COLZ TEXT")
    
    # Set log scale for Z-axis
    canvas3.SetLogz()
    
    # Add CMS text
    addCMSText(canvas3, lumi_text="Cosmics", extra_text="Work in Progress")
    
    # Save 2D plot
    png_name_2d = base_name + "_2d_cutflow.png"
    pdf_name_2d = base_name + "_2d_cutflow.pdf"
    
    canvas3.SaveAs(png_name_2d)
    canvas3.SaveAs(pdf_name_2d)
    
    canvas3.Update()
    
    # ===== Create efficiency vs MinP plots =====
    print("\nCreating efficiency vs MinP plots...")
    
    # Dictionary to organize data by parameter combinations
    data_by_group = {}
    
    # Loop over files again and extract efficiency data
    for root_file in root_files:
        # Extract parameters from filename
        filename = os.path.basename(root_file)
        params = extract_parameters(filename)
        
        if 'minp' not in params:
            continue
        
        minp = params['minp']
        group_key = get_grouping_key(params)
        
        # Open ROOT file and get histogram
        try:
            tfile = ROOT.TFile.Open(root_file)
        except (OSError, RuntimeError) as e:
            continue
        
        if not tfile or tfile.IsZombie():
            continue
        
        hist = tfile.Get(hist_name)
        if not hist:
            tfile.Close()
            continue
        
        # Get efficiency from the last cut step
        n_bins = hist.GetNbinsX()
        first_bin = hist.GetBinContent(1)
        last_bin = hist.GetBinContent(n_bins)
        
        if first_bin > 0:
            efficiency = last_bin / first_bin
        else:
            efficiency = 0
        
        # Store data
        if group_key not in data_by_group:
            data_by_group[group_key] = []
        
        data_by_group[group_key].append((minp, efficiency))
        
        tfile.Close()
    
    if data_by_group:
        # Print grouping information
        # print(f"Found {len(data_by_group)} different parameter combinations:")
        # for group_key in data_by_group:
        #     label = format_group_label(group_key)
        #     print(f"  - {label}: {len(data_by_group[group_key])} points")
        
        # Sort data for each group
        for group_key in data_by_group:
            data_by_group[group_key].sort(key=lambda x: x[0])
        
        # Create canvas for efficiency vs MinP
        canvas_eff = ROOT.TCanvas("c_eff_vs_minp", "c_eff_vs_minp", 800, 800)
        canvas_eff.cd()
        canvas_eff.SetLeftMargin(0.12)
        canvas_eff.SetRightMargin(0.11)
        canvas_eff.SetBottomMargin(0.11)
        
        # Marker styles
        markers = [20, 21, 22, 23, 29, 33, 34, 47, 43, 45]
        
        # Create TGraphs for each parameter combination
        graphs = []
        legend_eff = ROOT.TLegend(0.3, 0.6, 0.88, 0.92)
        legend_eff.SetHeader(f"Region: {region.upper()}, Object: {obj_type}")
        legend_eff.SetTextSize(0.03)
        legend_eff.SetFillStyle(0)
        legend_eff.SetBorderSize(0)
        
        # Sort groups for consistent ordering
        # Use a custom key to handle None values (put them first)
        def sort_key(group_tuple):
            depth, min_theta, max_theta = group_tuple
            # Convert None to -1 for sorting purposes
            return (depth if depth is not None else -1,
                    min_theta if min_theta is not None else -1,
                    max_theta if max_theta is not None else -1)
        
        sorted_groups = sorted(data_by_group.keys(), key=sort_key)
        
        for i, group_key in enumerate(sorted_groups):
            data = data_by_group[group_key]
            n_points = len(data)
            
            # Create arrays for TGraph
            import array
            x_array = array.array('d', [point[0] for point in data])
            y_array = array.array('d', [point[1] for point in data])
            
            graph = ROOT.TGraph(n_points, x_array, y_array)
            
            # Set style
            color = colors[i % len(colors)]
            marker = markers[i % len(markers)]
            
            graph.SetLineColor(color)
            graph.SetLineWidth(2)
            graph.SetMarkerColor(color)
            graph.SetMarkerStyle(marker)
            graph.SetMarkerSize(1.2)
            
            # Create label
            label = format_group_label(group_key)
            
            legend_eff.AddEntry(graph, label, "lp")
            graphs.append(graph)
        
        if graphs:
            # Draw graphs
            first_graph = graphs[0]
            first_graph.SetTitle("")
            first_graph.GetXaxis().SetTitle("p [GeV]")
            first_graph.GetYaxis().SetTitle("Pre-selection efficiency")
            first_graph.GetYaxis().SetTitleOffset(1.05)
            
            # Set axis ranges
            first_graph.GetYaxis().SetRangeUser(0, 0.6)
            first_graph.GetXaxis().SetMaxDigits(3)  # Use scientific notation for large numbers
            first_graph.GetXaxis().SetNdivisions(510) 

            first_graph.Draw("ALP")
            
            for graph in graphs[1:]:
                graph.Draw("LP SAME")
            
            # Draw legend
            legend_eff.Draw()
            
            # Add CMS text
            addCMSText(canvas_eff, lumi_text="Cosmics", extra_text="Work in Progress")
            
            # Save canvas
            png_name_eff = base_name.replace("cutflow_overlay", "efficiency_vs_minp") + ".png"
            pdf_name_eff = base_name.replace("cutflow_overlay", "efficiency_vs_minp") + ".pdf"
            
            canvas_eff.SaveAs(png_name_eff)
            canvas_eff.SaveAs(pdf_name_eff)
            
            canvas_eff.Update()
            
            print(f"Saved efficiency vs MinP plot: {png_name_eff}")
    
    # Cleanup
    for hist, tfile in histograms:
        tfile.Close()

if __name__ == "__main__":
    # Base directory for all skimmed ntuples
    base_dir = "/home/users/tvami/work/EarthAsDM/Skimmed_ntuples/Signal/"
    
    # Define regions and object types to loop over
    regions = ['sr', 'vr']
    object_types = ['matched_muon', 'muon', 'track', 'tuneP']
    
    # Loop over all combinations
    for region in regions:
        for obj_type in object_types:
            input_dir = os.path.join(base_dir, region, obj_type)
            
            # Check if directory exists
            if not os.path.exists(input_dir):
                print(f"Warning: Directory {input_dir} does not exist, skipping...")
                continue
            
            print(f"\n{'='*100}")
            print(f"Processing: {region}/{obj_type}")
            print(f"{'='*100}\n")
            
            # Run the plotting function (creates all three types of plots)
            plot_all_cutflow_analysis(
                input_dir=input_dir,
                hist_name="h_cutflow",
                output_name="cutflow_overlay.png"
            )