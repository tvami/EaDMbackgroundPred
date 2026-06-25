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
import math
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
        # strip the trailing ntuple version (e.g. _v5.0.0) and the crab tag (_v5a)
        dataset = re.sub(r'_v\d+\.\d+\.\d+$', '', dataset)
        dataset = dataset.replace("_v5a", "").replace("-v5a", "")
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


def plot_2d_teff_overlay(root_files, hist_name, output_base, output_dir, region="", obj_type=""):
    """Overlay TEfficiency (trigger fired vs kinematic) across samples.

    The 2D histograms store kinematic (x) vs trigger decision (y=0/1); this builds a
    Clopper-Pearson TEfficiency from the pass/fail slices, replacing the former
    ProfileX/TProfile approach (which only gave the mean with binomial-variance errors).
    """
    colors = [
        ROOT.kBlue, ROOT.kRed, ROOT.kGreen+2, ROOT.kMagenta,
        ROOT.kCyan+1, ROOT.kOrange, ROOT.kViolet, ROOT.kTeal-1, ROOT.kPink+1,
        ROOT.kAzure+7, ROOT.kSpring-7, ROOT.kYellow+2
    ]

    rebin = 10 if "_pt_" in hist_name else 2
    effs = []
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
        if not h2 or h2.GetEntries() == 0:
            tfile.Close()
            continue
        eff = build_teff_from_h2(h2, f"{hist_name}_eff_{i}", rebin=rebin)
        _style_by_filename(eff, root_file, colors[i % len(colors)])
        effs.append(eff)
        labels.append(create_label_from_filename(root_file, include_object=False, include_region=False))
        tfile.Close()

    if not effs:
        print(f"No valid 2D histograms found for {hist_name}")
        return

    x_title = ""
    if "_eta_" in hist_name:
        x_title = "#eta"
    elif "_phi_" in hist_name:
        x_title = "#phi"
    elif "_pt_" in hist_name:
        x_title = "p_{T} [GeV]"

    n_entries = len(effs)
    max_legend_entries = 45
    region_label = 'pre-SR' if region.upper() == 'SR' else region.upper()

    canvas = ROOT.TCanvas(f"c_teff_{hist_name}", f"c_teff_{hist_name}", 800, 800)
    canvas.cd()

    legend = ROOT.TLegend(0.19, 0.60, 0.9, 0.9)
    if region and obj_type:
        legend.SetHeader(f"Region: {region_label}, Object: {obj_type}")
    legend.SetTextSize(0.015)
    legend.SetFillStyle(0)
    legend.SetBorderSize(0)
    legend.SetNColumns(3)

    # Draw TEfficiencies - extend Y axis to make room for the legend
    for i, eff in enumerate(effs):
        if i == 0:
            eff.SetTitle(f";{x_title};Trigger efficiency")
            eff.Draw("AP")
            ROOT.gPad.Update()
            g = eff.GetPaintedGraph()
            if g:
                g.GetYaxis().SetRangeUser(0.0, 1.5)
                if "_pt_" in hist_name:
                    g.GetXaxis().SetNdivisions(510)
                    g.GetXaxis().SetLabelSize(0.03)
            ROOT.gPad.Update()
        else:
            eff.SetTitle("")
            eff.Draw("P SAME")
        if i < max_legend_entries:
            legend.AddEntry(eff, labels[i], "lep")

    if n_entries > max_legend_entries:
        legend.AddEntry(ROOT.nullptr, f"... + {n_entries - max_legend_entries} more", "")

    legend.Draw()
    addCMSText(canvas, lumi_text="Cosmics", extra_text="Work in Progress")

    output_path = os.path.join(output_dir, f"trig_study_teff_{hist_name}")
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
                    if not h2 or h2.GetEntries() == 0:
                        continue

                    # Build a Clopper-Pearson TEfficiency from the pass/fail 2D histogram
                    # (rebin less for eta/phi, more for pt)
                    rebin = 10 if var == "pt" else 2
                    eff = build_teff_from_h2(h2, f"{hist_name}_eff", rebin=rebin)

                    # Set style
                    color = stage_colors[stage]
                    eff.SetLineColor(color)
                    eff.SetLineWidth(2)
                    eff.SetMarkerColor(color)
                    eff.SetMarkerStyle(20)
                    eff.SetMarkerSize(0.8)

                    profiles.append((eff, stage))

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

                # Draw TEfficiencies - extend Y axis to make room for legend
                for i, (eff, stage) in enumerate(profiles):
                    if i == 0:
                        eff.SetTitle(f";{x_title};Trigger eff.")
                        eff.Draw("AP")
                        ROOT.gPad.Update()
                        g = eff.GetPaintedGraph()
                        if g:
                            g.GetYaxis().SetRangeUser(0.0, 1.5)
                            if var == "pt":
                                g.GetXaxis().SetNdivisions(510)
                                g.GetXaxis().SetLabelSize(0.03)
                        ROOT.gPad.Update()
                    else:
                        eff.SetTitle("")
                        eff.Draw("P SAME")
                    legend.AddEntry(eff, stage_labels[stage], "lep")
                
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

            eff, elo, ehi = binom_eff(last_bin, prev_bin)

            if group_key not in trigger_data_by_group:
                trigger_data_by_group[group_key] = []

            trigger_data_by_group[group_key].append((minp, eff, elo, ehi))

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
            exl = array.array('d', [0.0] * n_points)
            exh = array.array('d', [0.0] * n_points)
            eyl = array.array('d', [point[2] for point in data])
            eyh = array.array('d', [point[3] for point in data])

            graph = ROOT.TGraphAsymmErrors(n_points, x_array, y_array, exl, exh, eyl, eyh)

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

            eff, elo, ehi = binom_eff(last_bin, prev_bin)

            if group_key not in all_stage_data[hist_name]:
                all_stage_data[hist_name][group_key] = []
            all_stage_data[hist_name][group_key].append((minp, eff, elo, ehi))

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
            exl = array.array('d', [0.0] * n_points)
            exh = array.array('d', [0.0] * n_points)
            eyl = array.array('d', [point[2] for point in data])
            eyh = array.array('d', [point[3] for point in data])

            graph = ROOT.TGraphAsymmErrors(n_points, x_array, y_array, exl, exh, eyl, eyh)

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


def _style_by_filename(obj, root_file, color):
    """Apply the standard marker/line style of this study based on the sample filename.

    Mirrors the convention used by plot_1d_overlay / plot_2d_teff_overlay so the
    L1 DT efficiency overlays match the rest of the trigger study plots.
    """
    obj.SetLineColor(color)
    obj.SetLineWidth(2)
    obj.SetMarkerColor(color)
    obj.SetMarkerSize(0.9)
    minp_match = re.search(r'MinP-(\d+)', root_file)
    is_e6 = 'SurfaceDepth-e6' in root_file
    minp_val = int(minp_match.group(1)) if minp_match else 0
    if is_e6 and minp_val > 10000:
        obj.SetLineStyle(4); obj.SetMarkerStyle(23)
    elif is_e6:
        obj.SetLineStyle(3); obj.SetMarkerStyle(22)
    elif minp_match and minp_val > 10000:
        obj.SetLineStyle(2); obj.SetMarkerStyle(21)
    elif minp_match:
        obj.SetMarkerStyle(20)
    elif 'Run2025' in root_file:
        obj.SetLineStyle(4); obj.SetMarkerStyle(20)
    elif 'Run2024' in root_file:
        obj.SetLineStyle(3); obj.SetMarkerStyle(20)
    elif 'Run2023' in root_file:
        obj.SetLineStyle(2); obj.SetMarkerStyle(20)
    else:
        obj.SetMarkerStyle(20)


def build_teff_from_h2(h2, name, rebin=1, fold_overflow=False):
    """Build a per-x-bin TEfficiency from a 2D (x vs fired 0/1) histogram.

    The y axis encodes the trigger decision: y bin 1 = [-0.5, 0.5] -> not fired (fail),
    y bin 2 = [0.5, 1.5] -> fired (pass). total = projection over both y bins,
    passed = the fired slice. Uses Clopper-Pearson (kFCP) intervals.

    rebin         : RebinX factor applied before projecting (coarser, smoother bins).
    fold_overflow : merge the x under/overflow into the first/last visible bin so entries
                    beyond the axis range (e.g. high-momentum cosmics) are not dropped.
    """
    h = h2.Clone(name + "_clone")
    h.SetDirectory(0)
    if rebin and rebin > 1:
        h.RebinX(rebin)
    total = h.ProjectionX(name + "_tot", 1, 2)
    passed = h.ProjectionX(name + "_pas", 2, 2)
    total.SetDirectory(0)
    passed.SetDirectory(0)
    if fold_overflow:
        for hh in (total, passed):
            n = hh.GetNbinsX()
            hh.SetBinContent(1, hh.GetBinContent(1) + hh.GetBinContent(0))      # underflow -> first
            hh.SetBinContent(n, hh.GetBinContent(n) + hh.GetBinContent(n + 1))  # overflow -> last
            hh.SetBinContent(0, 0.0)
            hh.SetBinContent(n + 1, 0.0)
    # guard against any pass>total from rounding (shouldn't happen with integer fills)
    for b in range(0, total.GetNbinsX() + 2):
        if passed.GetBinContent(b) > total.GetBinContent(b):
            passed.SetBinContent(b, total.GetBinContent(b))
    eff = ROOT.TEfficiency(passed, total)
    eff.SetStatisticOption(ROOT.TEfficiency.kFCP)  # Clopper-Pearson
    eff.SetName(name)
    return eff


def build_l1dt_teff(h2, name, fold_overflow=True):
    """L1 DT (probe pT vs fired) TEfficiency. Variable-bin x, overflow folded by default
    so high-momentum cosmics (pT > top edge) stay in the last bin (matches FWLite counts).
    """
    return build_teff_from_h2(h2, name, rebin=1, fold_overflow=fold_overflow)


def l1dt_axis_props(hist_name):
    """Return (x_title, logx, fold_overflow) for an L1 DT 2D histogram from the probe
    variable encoded in its name. pT histos (no _phi/_eta infix) use a log x-axis with
    the top bin overflow-folded; the _phi/_eta variants are linear, fixed-range, no fold.
    """
    base = hist_name[:-4] if hist_name.endswith("_acc") else hist_name
    if base.endswith("_phi"):
        return "probe muon #phi", False, False
    if base.endswith("_eta"):
        return "probe muon #eta", False, False
    return "probe muon p_{T} [GeV]", True, True


def binom_eff(passed, total, level=0.6827):
    """Return (efficiency, err_low, err_high) for passed/total with Clopper-Pearson
    (binomial) intervals, matching the kFCP statistic option used by the TEfficiency plots.
    """
    if total <= 0:
        return 0.0, 0.0, 0.0
    p = passed / total
    ti, pi = int(round(total)), int(round(min(passed, total)))
    lo = ROOT.TEfficiency.ClopperPearson(ti, pi, level, False)
    hi = ROOT.TEfficiency.ClopperPearson(ti, pi, level, True)
    return p, max(0.0, p - lo), max(0.0, hi - p)


def plot_l1dt_efficiency_overlay(root_files, hist_name, output_dir, region="", obj_type=""):
    """Overlay the per-hemisphere L1 DT trigger efficiency across samples.

    Reads the 2D (probe pT vs fired) histogram `hist_name` from each ROOT file,
    builds a Clopper-Pearson TEfficiency vs probe pT, and overlays them (data vs MC,
    or multiple data eras / signal points) on a log-x axis.
    """
    colors = [
        ROOT.kBlue, ROOT.kRed, ROOT.kGreen+2, ROOT.kMagenta,
        ROOT.kCyan+1, ROOT.kOrange, ROOT.kViolet, ROOT.kTeal-1, ROOT.kPink+1,
        ROOT.kAzure+7, ROOT.kSpring-7, ROOT.kYellow+2
    ]

    x_title, logx, fold = l1dt_axis_props(hist_name)

    effs = []
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
        if not h2 or h2.GetEntries() == 0:
            tfile.Close()
            continue

        eff = build_l1dt_teff(h2, f"{hist_name}_eff_{i}", fold_overflow=fold)
        _style_by_filename(eff, root_file, colors[i % len(colors)])
        effs.append(eff)
        labels.append(create_label_from_filename(root_file, include_object=False, include_region=False))
        tfile.Close()

    if not effs:
        print(f"No valid L1 DT histograms found for {hist_name}")
        return

    n_entries = len(effs)
    max_legend_entries = 45
    region_label = 'pre-SR' if region.upper() == 'SR' else region.upper()

    canvas = ROOT.TCanvas(f"c_l1dt_{hist_name}", f"c_l1dt_{hist_name}", 800, 800)
    canvas.cd()
    canvas.SetLogx(logx)
    canvas.SetGridy(True)

    legend = ROOT.TLegend(0.19, 0.60, 0.9, 0.9)
    if region and obj_type:
        legend.SetHeader(f"Region: {region_label}, Object: {obj_type}")
    legend.SetTextSize(0.015)
    legend.SetFillStyle(0)
    legend.SetBorderSize(0)
    legend.SetNColumns(3)

    for i, eff in enumerate(effs):
        if i == 0:
            # axis titles via the TEfficiency title string (reliable for the painted frame)
            eff.SetTitle(f";{x_title};L1 DT efficiency")
            eff.Draw("AP")
            ROOT.gPad.Update()
            g = eff.GetPaintedGraph()
            if g:
                g.GetYaxis().SetRangeUser(0.0, 1.3)
                # decade-only log labels (10, 10^2, 10^3 ...), as in the DT paper Fig. 12
            ROOT.gPad.Update()
        else:
            eff.SetTitle("")
            eff.Draw("P SAME")
        if i < max_legend_entries:
            legend.AddEntry(eff, labels[i], "lep")

    if n_entries > max_legend_entries:
        legend.AddEntry(ROOT.nullptr, f"... + {n_entries - max_legend_entries} more", "")

    legend.Draw()
    addCMSText(canvas, lumi_text="Cosmics", extra_text="Work in Progress")

    output_path = os.path.join(output_dir, f"trig_study_{hist_name}")
    canvas.SaveAs(output_path + ".png")
    canvas.SaveAs(output_path + ".pdf")
    canvas.Update()
    canvas.Close()
    del canvas


def _sum_l1dt_h2(files, hist_name):
    """Sum an L1 DT 2D (probe pT vs fired) histogram across a list of ROOT files."""
    total = None
    for path in files:
        try:
            tf = ROOT.TFile.Open(path)
        except (OSError, RuntimeError):
            continue
        if not tf or tf.IsZombie():
            continue
        h = tf.Get(hist_name)
        if h:
            if total is None:
                total = h.Clone(hist_name + "_sum")
                total.SetDirectory(0)
            else:
                total.Add(h)
        tf.Close()
    return total


def plot_l1dt_data_mc_ratio(data_files, mc_files, hist_name, output_dir,
                            rightlabel="Cosmics", region="", obj_type=""):
    """CMS-style two-pad Data/MC comparison of the L1 DT efficiency.

    Sums the (probe pT vs fired) 2D histogram `hist_name` over all data files and over
    all MC files, builds a Clopper-Pearson TEfficiency for each, and draws the
    efficiency overlay (top) with the Data/MC ratio (bottom). Mirrors draw_cms_ratio
    from test/L1TriggerEfficiency.py.
    """
    hd = _sum_l1dt_h2(data_files, hist_name)
    hm = _sum_l1dt_h2(mc_files, hist_name)
    if not hd or not hm or hd.GetEntries() == 0 or hm.GetEntries() == 0:
        print(f"Data/MC ratio: missing or empty histograms for {hist_name}")
        return

    x_title, logx, fold = l1dt_axis_props(hist_name)
    eff_data = build_l1dt_teff(hd, hist_name + "_data", fold_overflow=fold)
    eff_mc = build_l1dt_teff(hm, hist_name + "_mc", fold_overflow=fold)

    xmin = hd.GetXaxis().GetBinLowEdge(1)
    xmax = hd.GetXaxis().GetBinUpEdge(hd.GetNbinsX())

    c = ROOT.TCanvas("c_ratio_" + hist_name, "c", 700, 700)
    p1 = ROOT.TPad("p1_" + hist_name, "p1", 0, 0.31, 1, 1.0)
    p1.SetBottomMargin(0.02); p1.SetLeftMargin(0.13); p1.SetRightMargin(0.04)
    p1.SetTopMargin(0.07); p1.SetTicks(1, 1); p1.SetLogx(logx); p1.SetGridy(); p1.Draw()
    p2 = ROOT.TPad("p2_" + hist_name, "p2", 0, 0.0, 1, 0.31)
    p2.SetTopMargin(0.03); p2.SetBottomMargin(0.37); p2.SetLeftMargin(0.13); p2.SetRightMargin(0.04)
    p2.SetTicks(1, 1); p2.SetLogx(logx); p2.SetGridy(); p2.Draw()

    # ---- top pad: efficiencies (data black, MC red) ----
    p1.cd()
    for e, col, mk in ((eff_data, ROOT.kBlack, 20), (eff_mc, ROOT.kRed, 24)):
        e.SetLineColor(col); e.SetMarkerColor(col); e.SetMarkerStyle(mk); e.SetMarkerSize(1.0)
    eff_data.SetTitle("")
    eff_data.Draw("AP"); ROOT.gPad.Update()
    gd = eff_data.GetPaintedGraph()
    if gd:
        gd.GetYaxis().SetRangeUser(0.0, 1.08)
        gd.GetXaxis().SetLimits(xmin, xmax)
        gd.GetYaxis().SetTitle("L1 DT efficiency")
        gd.GetYaxis().SetTitleSize(0.055); gd.GetYaxis().SetTitleOffset(1.10); gd.GetYaxis().SetLabelSize(0.048)
        gd.GetXaxis().SetLabelSize(0.0); gd.GetXaxis().SetTitleSize(0.0)
    eff_mc.Draw("P SAME"); ROOT.gPad.Update()

    legd = ROOT.TLegend(0.55, 0.18, 0.92, 0.42)
    legd.SetBorderSize(0); legd.SetFillStyle(0); legd.SetTextSize(0.05)
    if region and obj_type:
        region_label = 'pre-SR' if region.upper() == 'SR' else region.upper()
        legd.SetHeader(f"{region_label}, {obj_type}")
    legd.AddEntry(eff_data, "Data", "lp")
    legd.AddEntry(eff_mc, "MC", "lp")
    legd.Draw()

    # CMS label (top-left of the upper pad)
    t = p1.GetTopMargin(); l = p1.GetLeftMargin(); r = p1.GetRightMargin()
    lat = ROOT.TLatex(); lat.SetNDC(); lat.SetTextAngle(0)
    lat.SetTextFont(61); lat.SetTextSize(0.75 * t); lat.SetTextAlign(11)
    lat.DrawLatex(l, 1 - 0.8 * t, "CMS")
    lat.SetTextFont(52); lat.SetTextSize(0.6 * t)
    lat.DrawLatex(l + 0.10, 1 - 0.8 * t, "Work in Progress")
    lat.SetTextFont(42); lat.SetTextSize(0.6 * t); lat.SetTextAlign(31)
    lat.DrawLatex(1 - r, 1 - 0.8 * t, rightlabel)

    # ---- bottom pad: Data/MC ratio ----
    p2.cd()
    htot = eff_data.GetTotalHistogram()
    n = htot.GetNbinsX()
    rat = ROOT.TGraphAsymmErrors(); k = 0
    for i in range(1, n + 1):
        td = eff_data.GetTotalHistogram().GetBinContent(i)
        tm = eff_mc.GetTotalHistogram().GetBinContent(i)
        if td == 0 or tm == 0:
            continue
        ed = eff_data.GetEfficiency(i); em = eff_mc.GetEfficiency(i)
        if ed == 0 or em == 0:
            continue
        rr = ed / em
        relh = math.hypot(eff_data.GetEfficiencyErrorUp(i) / ed, eff_mc.GetEfficiencyErrorUp(i) / em)
        rell = math.hypot(eff_data.GetEfficiencyErrorLow(i) / ed, eff_mc.GetEfficiencyErrorLow(i) / em)
        x = htot.GetBinCenter(i)
        xl = x - htot.GetBinLowEdge(i)
        xh = htot.GetBinLowEdge(i + 1) - x
        rat.SetPoint(k, x, rr); rat.SetPointError(k, xl, xh, rr * rell, rr * relh); k += 1
    rat.SetMarkerStyle(20); rat.SetMarkerColor(ROOT.kBlack); rat.SetLineColor(ROOT.kBlack)
    rat.SetTitle(""); rat.Draw("AP"); ROOT.gPad.Update()
    ax = rat.GetXaxis(); ay = rat.GetYaxis()
    ax.SetLimits(xmin, xmax); ax.SetTitle(x_title)
    ax.SetTitleSize(0.13); ax.SetLabelSize(0.11); ax.SetTitleOffset(1.15)  # decade-only log labels
    ay.SetRangeUser(0.5, 1.5); ay.SetTitle("Data / MC"); ay.SetNdivisions(505)
    ay.SetTitleSize(0.12); ay.SetLabelSize(0.10); ay.SetTitleOffset(0.45)
    line = ROOT.TLine(xmin, 1.0, xmax, 1.0)
    line.SetLineStyle(2); line.SetLineColor(ROOT.kRed); line.Draw()
    rat.Draw("P SAME")

    output_path = os.path.join(output_dir, f"trig_study_{hist_name}_dataMC_ratio")
    c.SaveAs(output_path + ".png")
    c.SaveAs(output_path + ".pdf")
    c.Close()
    del c


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
    
    # L1 DT tag-and-probe efficiency overlays (2D probe pT vs fired -> TEfficiency)
    hist_l1dt = [h for h in hist_2d if h.startswith("h2_l1dt_")]
    for hist_name in tqdm(hist_l1dt, desc="L1 DT TEff", leave=False):
        plot_l1dt_efficiency_overlay(root_files, hist_name, output_dir, region=region, obj_type=obj_type)

    # Plot 2D trigger-efficiency TEfficiency overlays (only L1SingleMuCosmics, excluding L1 DT histos)
    hist_2d_cosmics = [h for h in hist_2d if h.endswith("_L1SingleMuCosmics") and not h.startswith("h2_l1dt_")]
    for hist_name in tqdm(hist_2d_cosmics, desc="2D TEff", leave=False):
        plot_2d_teff_overlay(root_files, hist_name, "trig_study", output_dir, region=region, obj_type=obj_type)
    
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

    # ---- L1 DT Data vs BkgMC efficiency + ratio (cross-sample) ----
    # Produced once per (region, object) when both a Data and a BkgMC dir have files.
    label_to_base = {lbl: bd for bd, lbl in base_dirs.items()}
    data_base = label_to_base.get("Data")
    mc_base = label_to_base.get("BkgMC")
    l1dt_ratio_hists = [
        "h2_l1dt_eff_comb", "h2_l1dt_eff_comb_acc",
        "h2_l1dt_eff_probeUpper", "h2_l1dt_eff_probeLower",
        "h2_l1dt_eff_probeUpper_acc", "h2_l1dt_eff_probeLower_acc",
        # probe-leg phi
        "h2_l1dt_eff_comb_phi", "h2_l1dt_eff_comb_phi_acc",
        "h2_l1dt_eff_probeUpper_phi", "h2_l1dt_eff_probeLower_phi",
        "h2_l1dt_eff_probeUpper_phi_acc", "h2_l1dt_eff_probeLower_phi_acc",
        # probe-leg eta
        "h2_l1dt_eff_comb_eta", "h2_l1dt_eff_comb_eta_acc",
        "h2_l1dt_eff_probeUpper_eta", "h2_l1dt_eff_probeLower_eta",
        "h2_l1dt_eff_probeUpper_eta_acc", "h2_l1dt_eff_probeLower_eta_acc",
    ]
    if data_base and mc_base:
        ratio_combos = []
        for region in regions:
            for obj_type in object_types:
                data_files = glob.glob(os.path.join(data_base, region, obj_type, "trigger_study_*.root"))
                mc_files = glob.glob(os.path.join(mc_base, region, obj_type, "trigger_study_*.root"))
                if data_files and mc_files:
                    ratio_combos.append((region, obj_type, data_files, mc_files))
        for region, obj_type, data_files, mc_files in tqdm(ratio_combos, desc="L1 DT Data/MC"):
            ratio_outdir = os.path.join(output_dir, "DataMC", region, obj_type)
            os.makedirs(ratio_outdir, exist_ok=True)
            for hist_name in l1dt_ratio_hists:
                rlabel = "Cosmics (acc.)" if hist_name.endswith("_acc") else "Cosmics"
                plot_l1dt_data_mc_ratio(data_files, mc_files, hist_name, ratio_outdir,
                                        rightlabel=rlabel, region=region, obj_type=obj_type)
