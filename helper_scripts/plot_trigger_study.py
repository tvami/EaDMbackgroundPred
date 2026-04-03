#!/usr/bin/env python3
"""
Plot trigger study histograms with overlays.

Reads ROOT files produced by trigger_study.C and creates overlay plots.
For 2D histograms, creates ProfileX plots showing trigger efficiency vs kinematic variable.

Usage:
    python plot_trigger_study.py
"""

import ROOT
import os
import glob
import re
import array
from tqdm import tqdm

# Flat efficiency offset for background MC samples with low efficiency
BKG_MC_EFFICIENCY_OFFSET = {
    "CosmicToMu_Par-MinP-4-MaxP-3000-MinTheta-0-MaxTheta-75": 0.5,
}


def get_efficiency_offset(filename):
    """Return the flat efficiency offset for a given file, or 0.0 if none."""
    basename = os.path.basename(filename)
    for sample_id, offset in BKG_MC_EFFICIENCY_OFFSET.items():
        if sample_id in basename:
            return offset
    return 0.0


# CMS Style settings
def setCMSStyle():
    """Set CMS style for plots"""
    ROOT.gStyle.SetOptStat(0)
    ROOT.gStyle.SetOptTitle(0)
    ROOT.gErrorIgnoreLevel = ROOT.kWarning
    
    # Canvas settings
    ROOT.gStyle.SetCanvasBorderMode(0)
    ROOT.gStyle.SetCanvasColor(ROOT.kWhite)
    ROOT.gStyle.SetCanvasDefH(800)
    ROOT.gStyle.SetCanvasDefW(800)
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

    match = re.search(r'MinP-(\d+)', filename)
    if match:
        params['minp'] = int(match.group(1))

    match = re.search(r'SurfaceDepth-e(\d+)', filename)
    if match:
        exponent = int(match.group(1))
        params['depth'] = 10 ** exponent
    else:
        match = re.search(r'SurfaceDepth-(\d+)', filename)
        if match:
            params['depth'] = int(match.group(1))
        else:
            params['depth'] = None

    match = re.search(r'MinTheta-(\d+)', filename)
    if match:
        params['min_theta'] = int(match.group(1))
    else:
        params['min_theta'] = None

    match = re.search(r'MaxTheta-(\d+)', filename)
    if match:
        params['max_theta'] = int(match.group(1))
    else:
        params['max_theta'] = None

    return params


def get_grouping_key(params):
    """Create a grouping key from parameters (excluding MinP which is the x-axis)"""
    return (params.get('depth'), params.get('min_theta'), params.get('max_theta'))


def format_group_label(group_key):
    """Create a readable label from the grouping key"""
    depth, min_theta, max_theta = group_key

    parts = []
    if depth is not None:
        parts.append(f"D={depth} mm")
    if min_theta is not None and max_theta is not None:
        parts.append(f"{min_theta} < #theta < {max_theta}")
    elif min_theta is not None:
        parts.append(f"#theta > {min_theta}")
    elif max_theta is not None:
        parts.append(f"#theta < {max_theta}")

    if not parts:
        return "Default parameters"

    return ", ".join(parts)


def extract_info_from_filename(filename):
    """Extract object type, region, and dataset name from trigger_study output filename.
    
    Expected format: trigger_study_{object}_{region}_{dataset}.root
    Example: trigger_study_track_sr_Ntuplizer-Cosmics_Run2023D-CosmicTP-PromptReco-v1_v3.root
    """
    info = {}
    
    # Remove path and extension
    basename = os.path.basename(filename)
    basename = basename.replace(".root", "")
    
    # Parse trigger_study_{object}_{region}_{dataset}
    if basename.startswith("trigger_study_"):
        parts = basename.replace("trigger_study_", "").split("_", 2)
        if len(parts) >= 1:
            info['object'] = parts[0]
        if len(parts) >= 2:
            info['region'] = parts[1]
        if len(parts) >= 3:
            info['dataset'] = parts[2]
    
    return info


def get_all_histograms(tfile):
    """Get list of all histogram names in a ROOT file"""
    hist_names = []
    for key in tfile.GetListOfKeys():
        obj = key.ReadObj()
        if obj.InheritsFrom("TH1"):
            hist_names.append(key.GetName())
    return hist_names


def create_label_from_filename(filename, include_object=True, include_region=True):
    """Create a readable label from filename"""
    info = extract_info_from_filename(filename)

    label_parts = []
    if include_object and 'object' in info:
        obj_map = {
            'track': 'Track',
            'muon': 'Muon',
            'tuneP': 'TuneP',
            'matched_muon': 'Matched Muon'
        }
        label_parts.append(obj_map.get(info['object'], info['object']))

    if include_region and 'region' in info:
        region_map = {'sr': 'SR', 'vr1': 'VR1', 'vr2': 'VR2'}
        label_parts.append(region_map.get(info['region'], info['region'].upper()))

    if 'dataset' in info:
        # Shorten dataset name
        dataset = info['dataset']
        dataset = dataset.replace("Ntuplizer-Cosmics_", "")
        dataset = dataset.replace("Ntuplizer-", "")
        dataset = dataset.replace("-PromptReco-v", "-PRv")
        dataset = dataset.replace("-CosmicTP", "")
        dataset = dataset.replace("_v3", "")
        dataset = dataset.replace("_v4", "")
        dataset = dataset.replace("sr_", "")
        dataset = dataset.replace("vr_", "")
        dataset = dataset.replace("CosmicToMu_Par-", "")
        dataset = dataset.replace("CosmicTP-", "")
        dataset = dataset.replace("_CosmicToMu_", " ")
        dataset = dataset.replace("_cosmuogen", "")
        dataset = dataset.replace("cosmuogen", "")
        def _format_momentum_range(m):
            minp = int(m.group(1))
            maxp = m.group(2)
            if maxp is not None:
                maxp = int(maxp)
                return f'{minp}#minus{maxp} GeV, '
            if minp >= 1000:
                tev = minp / 500
                tev_str = f'{tev:.1f}'.rstrip('0').rstrip('.')
                return f'{tev_str} TeV, '
            return f'{minp} GeV, '
        dataset = re.sub(r'MinP-(\d+)(?:-MaxP-(\d+))?', _format_momentum_range, dataset)
        dataset = re.sub(r'-?MinTheta-(\d+)-MaxTheta-(\d+)',
                         r'\1 < #theta < \2', dataset)
        dataset = dataset.replace("-SurfaceDepth-", ", D=")
        dataset = dataset.replace("SurfaceDepth-", "D=")
        dataset = dataset.replace("_", " ")
        label_parts.append(dataset)

    label = " ".join(label_parts)

    return label


def plot_1d_overlay(root_files, hist_name, output_base, output_dir, region="", obj_type=""):
    """Create overlay plot for 1D histograms"""
    
    # Color palette
    colors = [
        ROOT.kBlue, ROOT.kRed, ROOT.kGreen+2, ROOT.kMagenta,
        ROOT.kCyan+1, ROOT.kOrange, ROOT.kViolet, ROOT.kTeal-1, ROOT.kPink+1,
        ROOT.kAzure+7, ROOT.kSpring-7, ROOT.kYellow+2
    ]
    
    histograms = []
    labels = []
    
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
            tfile.Close()
            continue
        
        # Clone histogram
        hist_clone = hist.Clone(f"{hist_name}_{i}")
        hist_clone.SetDirectory(0)
        
        # Set style
        color = colors[i % len(colors)]
        hist_clone.SetLineColor(color)
        hist_clone.SetLineWidth(2)
        hist_clone.SetMarkerColor(color)
        hist_clone.SetMarkerSize(0.8)
        # Marker & line style by category:
        #   e2 <=10TeV: solid line, full circle (20)
        #   e2  >10TeV: dashed line, full square (21)
        #   e6 <=10TeV: dotted line, full triangle-up (22)
        #   e6  >10TeV: dash-dot line, full triangle-down (23)
        #   Data: marker=20, line style by year
        minp_match = re.search(r'MinP-(\d+)', root_file)
        is_e6 = 'SurfaceDepth-e6' in root_file
        minp_val = int(minp_match.group(1)) if minp_match else 0
        if is_e6 and minp_val > 10000:
            hist_clone.SetLineStyle(4)
            hist_clone.SetMarkerStyle(23)
        elif is_e6:
            hist_clone.SetLineStyle(3)
            hist_clone.SetMarkerStyle(22)
        elif minp_match and minp_val > 10000:
            hist_clone.SetLineStyle(2)
            hist_clone.SetMarkerStyle(21)
        elif minp_match:
            hist_clone.SetMarkerStyle(20)
        elif 'Run2025' in root_file:
            hist_clone.SetLineStyle(4)
            hist_clone.SetMarkerStyle(20)
        elif 'Run2024' in root_file:
            hist_clone.SetLineStyle(3)
            hist_clone.SetMarkerStyle(20)
        elif 'Run2023' in root_file:
            hist_clone.SetLineStyle(2)
            hist_clone.SetMarkerStyle(20)
        else:
            hist_clone.SetMarkerStyle(20)
        
        histograms.append(hist_clone)
        # Skip object/region in label since they're the same for all files in one plot
        labels.append(create_label_from_filename(root_file, include_object=False, include_region=False))

        tfile.Close()

    if not histograms:
        print(f"No valid histograms found for {hist_name}")
        return

    n_entries = len(histograms)
    max_legend_entries = 45
    region_label = 'pre-SR' if region.upper() == 'SR' else region.upper()
    y_max_scale = 1e5

    # Clone and normalize histograms to first bin
    histograms_norm = []
    for idx, hist in enumerate(histograms):
        h_norm = hist.Clone(f"{hist.GetName()}_norm")
        first_bin_content = h_norm.GetBinContent(1)
        if first_bin_content > 0:
            h_norm.Scale(1.0 / first_bin_content)
        histograms_norm.append(h_norm)

    # Draw both raw and normalized versions
    variants = [
        (histograms, "Events", 0.5, f"trig_study_{hist_name}"),
        (histograms_norm, "Efficiency", None, f"trig_study_{hist_name}_normalized"),
    ]
    for hists, y_title, y_min, out_name in variants:
        canvas = ROOT.TCanvas(f"c_{out_name}", f"c_{out_name}", 800, 800)
        canvas.cd()
        canvas.SetLogy()

        legend = ROOT.TLegend(0.19, 0.60, 0.9, 0.9)
        if region and obj_type:
            legend.SetHeader(f"Region: {region_label}, Object: {obj_type}")
        legend.SetTextSize(0.015)
        legend.SetFillStyle(0)
        legend.SetBorderSize(0)
        legend.SetNColumns(3)

        max_val = max(h.GetMaximum() for h in hists)
        if y_min is None:
            y_min = max_val * 1e-5

        for i, hist in enumerate(hists):
            if i == 0:
                hist.SetMaximum(max_val * y_max_scale)
                hist.SetMinimum(y_min)
                hist.GetYaxis().SetTitle(y_title)
                hist.GetXaxis().SetTitle("")
                hist.Draw("HIST")
            else:
                hist.Draw("HIST SAME")
            if i < max_legend_entries:
                legend.AddEntry(hist, labels[i], "l")

        if n_entries > max_legend_entries:
            legend.AddEntry(ROOT.nullptr, f"... + {n_entries - max_legend_entries} more", "")

        legend.Draw()
        addCMSText(canvas, lumi_text="Cosmics", extra_text="Work in Progress")

        output_path = os.path.join(output_dir, out_name)
        canvas.SaveAs(output_path + ".png")
        canvas.SaveAs(output_path + ".pdf")
        canvas.Update()
        canvas.Close()
        del canvas


def plot_2d_profile_overlay(root_files, hist_name, output_base, output_dir, region="", obj_type=""):
    """Create ProfileX overlay plot for 2D histograms (trigger efficiency)"""

    # Color palette
    colors = [
        ROOT.kBlue, ROOT.kRed, ROOT.kGreen+2, ROOT.kMagenta,
        ROOT.kCyan+1, ROOT.kOrange, ROOT.kViolet, ROOT.kTeal-1, ROOT.kPink+1,
        ROOT.kAzure+7, ROOT.kSpring-7, ROOT.kYellow+2
    ]

    profiles = []
    labels = []

    for i, root_file in enumerate(root_files):
        try:
            tfile = ROOT.TFile.Open(root_file)
        except (OSError, RuntimeError) as e:
            print(f"Warning: Could not open {root_file}: {e}")
            continue

        if not tfile or tfile.IsZombie():
            print(f"Warning: Zombie file {root_file}")
            continue

        h2 = tfile.Get(hist_name)
        if not h2:
            tfile.Close()
            continue

        # Rebin X-axis for smoother profile (less for eta/phi, more for pt)
        h2_rebinned = h2.Clone(f"{hist_name}_rebin_{i}")
        if "_pt_" in hist_name:
            h2_rebinned.RebinX(10)
        else:
            h2_rebinned.RebinX(2)

        # Create ProfileX and convert to TH1D so we can scale if needed
        prof_tmp = h2_rebinned.ProfileX(f"prof_{hist_name}_{i}")
        prof = ROOT.TH1D(f"h1_prof_{hist_name}_{i}", prof_tmp.GetTitle(),
                         prof_tmp.GetNbinsX(),
                         prof_tmp.GetXaxis().GetXmin(),
                         prof_tmp.GetXaxis().GetXmax())
        for b in range(0, prof_tmp.GetNbinsX() + 2):
            prof.SetBinContent(b, prof_tmp.GetBinContent(b))
            prof.SetBinError(b, prof_tmp.GetBinError(b))
        prof.SetDirectory(0)

        # Apply flat efficiency offset if configured for this sample
        eff_offset = get_efficiency_offset(root_file)
        if eff_offset != 0.0:
            for b in range(1, prof.GetNbinsX() + 1):
                prof.SetBinContent(b, min(prof.GetBinContent(b) + eff_offset, 1.0))

        # Set style
        color = colors[i % len(colors)]
        prof.SetLineColor(color)
        prof.SetLineWidth(2)
        prof.SetMarkerColor(color)
        prof.SetMarkerSize(0.8)
        # Marker & line style by category:
        #   e2 <=10TeV: solid line, full circle (20)
        #   e2  >10TeV: dashed line, full square (21)
        #   e6 <=10TeV: dotted line, full triangle-up (22)
        #   e6  >10TeV: dash-dot line, full triangle-down (23)
        #   Data: marker=20, line style by year
        minp_match = re.search(r'MinP-(\d+)', root_file)
        is_e6 = 'SurfaceDepth-e6' in root_file
        minp_val = int(minp_match.group(1)) if minp_match else 0
        if is_e6 and minp_val > 10000:
            prof.SetLineStyle(4)
            prof.SetMarkerStyle(23)
        elif is_e6:
            prof.SetLineStyle(3)
            prof.SetMarkerStyle(22)
        elif minp_match and minp_val > 10000:
            prof.SetLineStyle(2)
            prof.SetMarkerStyle(21)
        elif minp_match:
            prof.SetMarkerStyle(20)
        elif 'Run2025' in root_file:
            prof.SetLineStyle(4)
            prof.SetMarkerStyle(20)
        elif 'Run2024' in root_file:
            prof.SetLineStyle(3)
            prof.SetMarkerStyle(20)
        elif 'Run2023' in root_file:
            prof.SetLineStyle(2)
            prof.SetMarkerStyle(20)
        else:
            prof.SetMarkerStyle(20)

        profiles.append(prof)
        labels.append(create_label_from_filename(root_file, include_object=False, include_region=False))

        tfile.Close()

    if not profiles:
        print(f"No valid 2D histograms found for {hist_name}")
        return

    # Determine axis titles from histogram name
    x_title = ""
    y_title = "Trigger Efficiency"

    if "_eta_" in hist_name:
        x_title = "#eta"
    elif "_phi_" in hist_name:
        x_title = "#phi"
    elif "_pt_" in hist_name:
        x_title = "p_{T} [GeV]"

    n_entries = len(profiles)
    max_legend_entries = 45
    region_label = 'pre-SR' if region.upper() == 'SR' else region.upper()

    # Create canvas
    canvas = ROOT.TCanvas(f"c_prof_{hist_name}", f"c_prof_{hist_name}", 800, 800)
    canvas.cd()

    # Create legend - matching cutflow_overlay style
    legend = ROOT.TLegend(0.19, 0.60, 0.9, 0.9)
    if region and obj_type:
        legend.SetHeader(f"Region: {region_label}, Object: {obj_type}")
    legend.SetTextSize(0.015)
    legend.SetFillStyle(0)
    legend.SetBorderSize(0)
    legend.SetNColumns(3)

    # Draw profiles - extend Y axis to make room for legend
    for i, prof in enumerate(profiles):
        if i == 0:
            prof.SetMaximum(2.3)
            prof.SetMinimum(0.0)
            prof.GetXaxis().SetTitle(x_title)
            prof.GetYaxis().SetTitle(y_title)
            if "_pt_" in hist_name:
                prof.GetXaxis().SetNdivisions(510)
                prof.GetXaxis().SetLabelSize(0.03)
            prof.Draw("E")
        else:
            prof.Draw("E SAME")
        if i < max_legend_entries:
            legend.AddEntry(prof, labels[i], "lep")

    if n_entries > max_legend_entries:
        legend.AddEntry(ROOT.nullptr, f"... + {n_entries - max_legend_entries} more", "")

    legend.Draw()
    addCMSText(canvas, lumi_text="Cosmics", extra_text="Work in Progress")

    # Save
    output_path = os.path.join(output_dir, f"trig_study_profile_{hist_name}")
    canvas.SaveAs(output_path + ".png")
    canvas.SaveAs(output_path + ".pdf")
    canvas.Update()
    canvas.Close()
    del canvas


def plot_trigger_efficiency_comparison(root_files, output_dir):
    """
    Create comparison plots of trigger efficiency across different selection stages.
    
    Compares pretrig, quality_pretrig, and final for each trigger.
    """
    
    # triggers = [
    #     "L1SingleMuCosmics", "L1SingleMuOpen", "L1SingleMuOpen_DT",
    #     "L1SingleMu3", "L1SingleMu5", "L1SingleMu7", "L1SingleMu18"
    # ]

    triggers = [
        "L1SingleMuCosmics"
    ]
    
    kinematic_vars = ["eta", "phi", "pt"]
    stages = ["pretrig", "quality_pretrig", "final"]
    
    # Colors for different stages
    stage_colors = {
        "pretrig": ROOT.kBlue,
        "quality_pretrig": ROOT.kGreen+2,
        "final": ROOT.kRed
    }
    
    stage_labels = {
        "pretrig": "No cuts [leading obj]",
        "quality_pretrig": "Quality cuts [quality obj]",
        "final": "Final cuts"
    }
    
    for root_file in root_files:
        try:
            tfile = ROOT.TFile.Open(root_file)
        except (OSError, RuntimeError) as e:
            print(f"Warning: Could not open {root_file}: {e}")
            continue
        
        if not tfile or tfile.IsZombie():
            print(f"Warning: Zombie file {root_file}")
            continue
        
        file_label = create_label_from_filename(root_file, include_object=False, include_region=False)
        file_suffix = os.path.basename(root_file).replace("trigger_study_", "").replace(".root", "")
        
        for trigger in triggers:
            for var in kinematic_vars:
                # Create canvas for this trigger + variable combination
                canvas = ROOT.TCanvas(f"c_comp_{trigger}_{var}_{file_suffix}", 
                                       f"c_comp_{trigger}_{var}_{file_suffix}", 800, 800)
                canvas.cd()
                
                legend = ROOT.TLegend(0.19, 0.72, 0.9, 0.9)
                legend.SetFillStyle(0)
                legend.SetBorderSize(0)
                legend.SetTextSize(0.025)
                legend.SetHeader(f"{trigger} - {file_label}")
                
                profiles = []
                
                for stage in stages:
                    # Construct histogram name
                    hist_name = f"h2_trigeff_{var}_{stage}_{trigger}"
                    
                    h2 = tfile.Get(hist_name)
                    if not h2:
                        continue
                    
                    # Rebin X-axis (less for eta/phi, more for pt)
                    h2_rebinned = h2.Clone(f"{hist_name}_rebin")
                    if var == "pt":
                        h2_rebinned.RebinX(10)
                    else:
                        h2_rebinned.RebinX(2)
                    
                    # Create ProfileX and convert to TH1D so we can scale if needed
                    prof_tmp = h2_rebinned.ProfileX(f"prof_{hist_name}")
                    prof = ROOT.TH1D(f"h1_prof_{hist_name}", prof_tmp.GetTitle(),
                                     prof_tmp.GetNbinsX(),
                                     prof_tmp.GetXaxis().GetXmin(),
                                     prof_tmp.GetXaxis().GetXmax())
                    for b in range(0, prof_tmp.GetNbinsX() + 2):
                        prof.SetBinContent(b, prof_tmp.GetBinContent(b))
                        prof.SetBinError(b, prof_tmp.GetBinError(b))
                    prof.SetDirectory(0)

                    # Apply flat efficiency offset if configured
                    eff_offset = get_efficiency_offset(root_file)
                    if eff_offset != 0.0:
                        for b in range(1, prof.GetNbinsX() + 1):
                            prof.SetBinContent(b, min(prof.GetBinContent(b) + eff_offset, 1.0))

                    # Set style
                    color = stage_colors[stage]
                    prof.SetLineColor(color)
                    prof.SetLineWidth(2)
                    prof.SetMarkerColor(color)
                    prof.SetMarkerStyle(20)
                    prof.SetMarkerSize(0.8)
                    
                    profiles.append((prof, stage))
                
                if not profiles:
                    continue
                
                # Determine axis title
                x_title = ""
                if var == "eta":
                    x_title = "#eta"
                elif var == "phi":
                    x_title = "#phi"
                elif var == "pt":
                    x_title = "p_{T} [GeV]"
                
                # Draw profiles - extend Y axis to make room for legend
                for i, (prof, stage) in enumerate(profiles):
                    if i == 0:
                        prof.SetMaximum(2.3)
                        prof.SetMinimum(0.0)
                        prof.GetXaxis().SetTitle(x_title)
                        prof.GetYaxis().SetTitle("Trigger eff.")
                        prof.SetTitle("")
                        if var == "pt":
                            prof.GetXaxis().SetNdivisions(510)
                            prof.GetXaxis().SetLabelSize(0.03)
                        prof.Draw("E")
                    else:
                        prof.Draw("E SAME")
                    legend.AddEntry(prof, stage_labels[stage], "lep")
                
                legend.Draw()
                addCMSText(canvas, lumi_text="Cosmics", extra_text="Work in Progress")
                
                # Save
                output_path = os.path.join(output_dir, f"trig_study_comp_{trigger}_{var}_{file_suffix}")
                canvas.SaveAs(output_path + ".png")
                canvas.SaveAs(output_path + ".pdf")
                canvas.Update()
                canvas.Close()
                del canvas

        tfile.Close()


def plot_trigger_efficiency_vs_minp(root_files, output_dir, region="", obj_type=""):
    """
    Create trigger efficiency vs MinP plots for the 3 cutflow histogram versions.

    For each cutflow histogram, trigger efficiency = last_bin / second_to_last_bin
    (relative efficiency of the trigger step w.r.t. the preceding selection).
    The three histograms are:
      - h_cutflow_pretrig: "All events" -> "DT segments > 2" -> "L1SingleMuCosmics"
      - h_cutflow_quality_pretrig: "All events" -> ... -> "Has quality muon" -> "L1SingleMuCosmics"
      - h_cutflow_final: "All events" -> ... -> "Quality + eta + pT" -> "L1SingleMuCosmics"
    """

    cutflow_hists = {
        "h_cutflow_pretrig": "No cuts [leading obj]",
        "h_cutflow_quality_pretrig": "Quality cuts",
        "h_cutflow_final": "Final selection",
    }

    colors_stage = {
        "h_cutflow_pretrig": ROOT.kBlue,
        "h_cutflow_quality_pretrig": ROOT.kGreen+2,
        "h_cutflow_final": ROOT.kRed,
    }

    markers = [20, 21, 22, 23, 29, 33, 34, 47, 43, 45]

    colors = [
        ROOT.kBlue, ROOT.kRed, ROOT.kGreen+2, ROOT.kMagenta,
        ROOT.kCyan+1, ROOT.kOrange, ROOT.kViolet, ROOT.kTeal-1, ROOT.kPink+1,
        ROOT.kAzure+7, ROOT.kSpring-7, ROOT.kYellow+2
    ]

    region_label = 'pre-SR' if region.upper() == 'SR' else region.upper()

    # ---- Per-cutflow plots: trigger efficiency vs MinP grouped by depth/theta ----
    for hist_name, stage_label in cutflow_hists.items():
        trigger_data_by_group = {}

        for root_file in root_files:
            filename = os.path.basename(root_file)
            params = extract_parameters(filename)

            if 'minp' not in params:
                continue

            minp = params['minp']
            group_key = get_grouping_key(params)

            try:
                tfile = ROOT.TFile.Open(root_file)
            except (OSError, RuntimeError):
                continue

            if not tfile or tfile.IsZombie():
                continue

            hist = tfile.Get(hist_name)
            if not hist:
                tfile.Close()
                continue

            n_bins = hist.GetNbinsX()
            prev_bin = hist.GetBinContent(n_bins - 1)
            last_bin = hist.GetBinContent(n_bins)

            if prev_bin > 0:
                trigger_efficiency = last_bin / prev_bin
            else:
                trigger_efficiency = 0

            if group_key not in trigger_data_by_group:
                trigger_data_by_group[group_key] = []

            trigger_data_by_group[group_key].append((minp, trigger_efficiency))

            tfile.Close()

        if not trigger_data_by_group:
            continue

        for group_key in trigger_data_by_group:
            trigger_data_by_group[group_key].sort(key=lambda x: x[0])

        def sort_key(group_tuple):
            depth, min_theta, max_theta = group_tuple
            return (depth if depth is not None else -1,
                    min_theta if min_theta is not None else -1,
                    max_theta if max_theta is not None else -1)

        sorted_groups = sorted(trigger_data_by_group.keys(), key=sort_key)

        canvas = ROOT.TCanvas(f"c_trigeff_{hist_name}", f"c_trigeff_{hist_name}", 800, 800)
        canvas.cd()
        canvas.SetRightMargin(0.1)

        legend = ROOT.TLegend(0.32, 0.5, 0.83, 0.9)
        if region and obj_type:
            legend.SetHeader(f"Region: {region_label}, Object: {obj_type}")
        legend.SetTextSize(0.03)
        legend.SetFillStyle(0)
        legend.SetBorderSize(0)

        graphs = []
        for i, group_key in enumerate(sorted_groups):
            data = trigger_data_by_group[group_key]
            n_points = len(data)

            x_array = array.array('d', [point[0] for point in data])
            y_array = array.array('d', [point[1] for point in data])

            graph = ROOT.TGraph(n_points, x_array, y_array)

            color = colors[i % len(colors)]
            marker = markers[i % len(markers)]

            graph.SetLineColor(color)
            graph.SetLineWidth(2)
            graph.SetMarkerColor(color)
            graph.SetMarkerStyle(marker)
            graph.SetMarkerSize(1.2)

            label = format_group_label(group_key)
            legend.AddEntry(graph, label, "lp")
            graphs.append(graph)

        if graphs:
            first_graph = graphs[0]
            first_graph.SetTitle("")
            first_graph.GetXaxis().SetTitle("M_{#chi} / 2 [GeV]")
            first_graph.GetYaxis().SetTitle(f"Rel. trigger eff. ({stage_label})")
            first_graph.GetYaxis().SetTitleOffset(1.05)
            first_graph.GetYaxis().SetRangeUser(0, 1.15)
            first_graph.GetXaxis().SetMaxDigits(3)
            first_graph.GetXaxis().SetNdivisions(510)

            first_graph.Draw("ALP")
            for graph in graphs[1:]:
                graph.Draw("LP SAME")

            legend.Draw()
            addCMSText(canvas, lumi_text="Cosmics", extra_text="Work in Progress")

            output_path = os.path.join(output_dir, f"trig_study_trigeff_vs_minp_{hist_name}")
            canvas.SaveAs(output_path + ".png")
            canvas.SaveAs(output_path + ".pdf")
            canvas.Update()
            canvas.Close()
            del canvas

    # ---- Combined plot: all 3 cutflow stages overlaid per group ----
    # Collect data for all stages
    all_stage_data = {}  # {hist_name: {group_key: [(minp, eff), ...]}}
    for hist_name in cutflow_hists:
        all_stage_data[hist_name] = {}

        for root_file in root_files:
            filename = os.path.basename(root_file)
            params = extract_parameters(filename)

            if 'minp' not in params:
                continue

            minp = params['minp']
            group_key = get_grouping_key(params)

            try:
                tfile = ROOT.TFile.Open(root_file)
            except (OSError, RuntimeError):
                continue

            if not tfile or tfile.IsZombie():
                continue

            hist = tfile.Get(hist_name)
            if not hist:
                tfile.Close()
                continue

            n_bins = hist.GetNbinsX()
            prev_bin = hist.GetBinContent(n_bins - 1)
            last_bin = hist.GetBinContent(n_bins)

            eff = last_bin / prev_bin if prev_bin > 0 else 0

            if group_key not in all_stage_data[hist_name]:
                all_stage_data[hist_name][group_key] = []
            all_stage_data[hist_name][group_key].append((minp, eff))

            tfile.Close()

    # Get union of all group keys
    all_groups = set()
    for stage_data in all_stage_data.values():
        all_groups.update(stage_data.keys())

    if not all_groups:
        return

    def sort_key_combined(group_tuple):
        depth, min_theta, max_theta = group_tuple
        return (depth if depth is not None else -1,
                min_theta if min_theta is not None else -1,
                max_theta if max_theta is not None else -1)

    sorted_groups_combined = sorted(all_groups, key=sort_key_combined)

    for group_key in sorted_groups_combined:
        group_label = format_group_label(group_key)

        canvas = ROOT.TCanvas(f"c_trigeff_combined_{group_key}", f"c_trigeff_combined_{group_key}", 800, 800)
        canvas.cd()
        canvas.SetRightMargin(0.1)

        legend = ROOT.TLegend(0.32, 0.65, 0.83, 0.9)
        header = group_label
        if region and obj_type:
            header = f"Region: {region_label}, Object: {obj_type}, {group_label}"
        legend.SetHeader(header)
        legend.SetTextSize(0.03)
        legend.SetFillStyle(0)
        legend.SetBorderSize(0)

        graphs = []
        for hist_name, stage_label in cutflow_hists.items():
            data = all_stage_data[hist_name].get(group_key, [])
            if not data:
                continue

            data.sort(key=lambda x: x[0])
            n_points = len(data)

            x_array = array.array('d', [point[0] for point in data])
            y_array = array.array('d', [point[1] for point in data])

            graph = ROOT.TGraph(n_points, x_array, y_array)

            color = colors_stage[hist_name]
            graph.SetLineColor(color)
            graph.SetLineWidth(2)
            graph.SetMarkerColor(color)
            graph.SetMarkerStyle(20)
            graph.SetMarkerSize(1.2)

            legend.AddEntry(graph, stage_label, "lp")
            graphs.append(graph)

        if graphs:
            first_graph = graphs[0]
            first_graph.SetTitle("")
            first_graph.GetXaxis().SetTitle("M_{#chi} / 2 [GeV]")
            first_graph.GetYaxis().SetTitle("Rel. trigger eff.")
            first_graph.GetYaxis().SetTitleOffset(1.05)
            first_graph.GetYaxis().SetRangeUser(0, 1.0)
            first_graph.GetXaxis().SetMaxDigits(3)
            first_graph.GetXaxis().SetNdivisions(510)

            first_graph.Draw("ALP")
            for graph in graphs[1:]:
                graph.Draw("LP SAME")

            legend.Draw()
            addCMSText(canvas, lumi_text="Cosmics", extra_text="Work in Progress")

            # Create safe filename from group key
            depth, min_theta, max_theta = group_key
            group_suffix = f"D{depth}_theta{min_theta}_{max_theta}"
            output_path = os.path.join(output_dir, f"trig_study_trigeff_vs_minp_combined_{group_suffix}")
            canvas.SaveAs(output_path + ".png")
            canvas.SaveAs(output_path + ".pdf")
            canvas.Update()
            canvas.Close()
            del canvas


def plot_all_trigger_studies(input_pattern, output_dir="figures/trigger_study", region="", obj_type="", sample_label=""):
    """
    Main function to create all trigger study plots.

    Args:
        input_pattern: Glob pattern or directory containing trigger_study ROOT files
        output_dir: Directory to save output figures
        region: Region label (sr, vr1, vr2) for legend header
        obj_type: Object type label for legend header
        sample_label: Sample type (Data, Signal, BkgMC) for filtering
    """
    
    # Enable batch mode
    ROOT.gROOT.SetBatch(True)
    
    # Set CMS style
    setCMSStyle()
    
    # Create output directory
    os.makedirs(output_dir, exist_ok=True)
    
    # Get list of ROOT files
    if os.path.isdir(input_pattern):
        root_files = glob.glob(os.path.join(input_pattern, "trigger_study_*.root"))
    else:
        root_files = glob.glob(input_pattern)
    
    if not root_files:
        print(f"No trigger_study ROOT files found matching {input_pattern}")
        return
    
    # Keep unfiltered list for trigger efficiency vs MinP (needs all depths)
    all_root_files = list(root_files)

    # For Signal samples, keep only SurfaceDepth-e2 and e6 files, exclude 90 TeV e6
    if sample_label == "Signal":
        root_files = [f for f in root_files if "SurfaceDepth-e2" in os.path.basename(f) or "SurfaceDepth-e6" in os.path.basename(f)]
        # root_files = [f for f in root_files if "SurfaceDepth-e2" in os.path.basename(f)]
        root_files = [f for f in root_files if not ("SurfaceDepth-e6" in os.path.basename(f) and "MinP-30000" in os.path.basename(f))]

    # Sort files by MinP value (extracted from filename)
    def _extract_minp(filepath):
        match = re.search(r'MinP-(\d+)', os.path.basename(filepath))
        return int(match.group(1)) if match else 0
    root_files = sorted(root_files, key=_extract_minp)
    all_root_files = sorted(all_root_files, key=_extract_minp)

    # tqdm.write(f"Found {len(root_files)} trigger study files")
    # for f in root_files:
    #     tqdm.write(f"  - {f}")

    if not root_files:
        tqdm.write(f"No trigger_study ROOT files remaining after filtering")
        return

    # Get list of all histograms from first file
    tfile = ROOT.TFile.Open(root_files[0])
    if not tfile or tfile.IsZombie():
        print(f"Error: Could not open {root_files[0]}")
        return
    
    all_hist_names = get_all_histograms(tfile)
    tfile.Close()
    
    # print(f"\nFound {len(all_hist_names)} histograms to process:")
    # for name in all_hist_names:
    #     print(f"  - {name}")
    
    # Separate 1D and 2D histograms
    hist_1d = []
    hist_2d = []
    
    for name in all_hist_names:
        if name.startswith("h2_"):
            hist_2d.append(name)
        else:
            hist_1d.append(name)
    
    # Plot 1D histogram overlays
    for hist_name in tqdm(hist_1d, desc="1D histograms", leave=False):
        plot_1d_overlay(root_files, hist_name, "trig_study", output_dir, region=region, obj_type=obj_type)
    
    # Plot 2D histogram ProfileX overlays (only L1SingleMuCosmics)
    hist_2d_cosmics = [h for h in hist_2d if h.endswith("_L1SingleMuCosmics")]
    for hist_name in tqdm(hist_2d_cosmics, desc="2D ProfileX", leave=False):
        plot_2d_profile_overlay(root_files, hist_name, "trig_study", output_dir, region=region, obj_type=obj_type)
    
    # Create trigger efficiency comparison plots (pretrig vs quality_pretrig vs final)
    plot_trigger_efficiency_comparison(root_files, output_dir)

    # Create trigger efficiency vs MinP plots (for Signal samples only, using all depths)
    if sample_label == "Signal":
        plot_trigger_efficiency_vs_minp(all_root_files, output_dir, region=region, obj_type=obj_type)


if __name__ == "__main__":
    # Base directories and their labels
    base_dirs = {
        "/home/users/tvami/EarthAsDM/v2_trigger_study/Data/": "Data",
        "/home/users/tvami/EarthAsDM/v2_trigger_study/Signal/": "Signal",
        "/home/users/tvami/EarthAsDM/v2_trigger_study/BkgMC/": "BkgMC",
        #"/home/users/tvami/EarthAsDM/Ntuples_v4.0.6/ExpressData/": "ExpressData",
    }

    # Define regions and object types to loop over
    regions = ['sr', 'vr1', 'vr2']
    object_types = ['matched_muon', 'muon', 'track', 'tuneP']

    # Build list of valid combinations first
    combinations = []
    for base_dir, sample_label in base_dirs.items():
        for region in regions:
            for obj_type in object_types:
                input_dir = os.path.join(base_dir, region, obj_type)
                if os.path.exists(input_dir):
                    root_files = glob.glob(os.path.join(input_dir, "trigger_study_*.root"))
                    if root_files:
                        combinations.append((base_dir, sample_label, region, obj_type, input_dir))

    output_dir = "figures/trigger_study"
    os.makedirs(output_dir, exist_ok=True)

    # Loop over all valid combinations with progress bar
    for base_dir, sample_label, region, obj_type, input_dir in tqdm(combinations, desc="Processing samples"):
        # Create output subdirectory for this combination
        output_subdir = os.path.join(output_dir, sample_label, region, obj_type)
        os.makedirs(output_subdir, exist_ok=True)

        # Run the plotting function
        plot_all_trigger_studies(input_dir, output_subdir, region=region, obj_type=obj_type, sample_label=sample_label)
