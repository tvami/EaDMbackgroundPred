#!/usr/bin/env python3
"""
Script to automatically generate Condor input file based on signal ROOT files
in the histogram directory.
"""

import os
import re
import sys
from pathlib import Path

def extract_signal_names(histogram_dir, signal_pattern="e6"):
    """
    Scan histogram directory and extract signal names.

    Args:
        histogram_dir: Path to histogram directory
        signal_pattern: Pattern to filter signals (e.g., "e6", "e5", or None for all)

    Returns:
        List of signal names (e.g., ["Signal_M1500GeV_e6_SR", ...])
    """
    signal_names = []

    if not os.path.exists(histogram_dir):
        print(f"ERROR: Histogram directory {histogram_dir} does not exist!")
        sys.exit(1)

    # Pattern to match signal files: EaDM_Signal_M<mass>GeV_<pattern>_SR.root
    if signal_pattern:
        file_pattern = f"EaDM_Signal_M*GeV_{signal_pattern}_SR.root"
    else:
        file_pattern = "EaDM_Signal_M*GeV_SR.root"

    files = sorted(Path(histogram_dir).glob(file_pattern))

    for f in files:
        # Extract signal name from filename
        # EaDM_Signal_M1500GeV_e6_SR.root -> Signal_M1500GeV_e6_SR
        match = re.search(r'EaDM_(Signal_M\d+GeV.*?)\.root', f.name)
        if match:
            signal_name = match.group(1)
            signal_names.append(signal_name)

    # Sort by mass value
    def get_mass(sig):
        match = re.search(r'M(\d+)GeV', sig)
        return int(match.group(1)) if match else 0

    signal_names.sort(key=get_mass)

    return signal_names

def generate_input_file(signal_names, template_config, output_file, tf_type="2x0"):
    """
    Generate Condor input file.

    Args:
        signal_names: List of signal names
        template_config: Path to template config JSON
        output_file: Path to output input file
        tf_type: Transfer function type (default: "2x0")
    """
    # Use only basename of template config (file will be transferred to local dir)
    import os
    template_basename = os.path.basename(template_config)

    with open(output_file, 'w') as f:
        for signal in signal_names:
            f.write(f"{template_basename},{signal},{tf_type}\n")

    print(f"Generated {output_file} with {len(signal_names)} signals")

if __name__ == "__main__":
    # Configuration - EDIT THESE FOR YOUR ANALYSIS
    HISTOGRAM_DIR = "/home/users/tvami/EarthAsDM/CMSSW_14_1_0_pre4/src/histograms_for_2DAlphabet_v21"
    TEMPLATE_CONFIG = "/home/users/tvami/EarthAsDM/CMSSW_14_1_0_pre4/src/config_Binningv6_InputTemplate_SR_Blind.json"
    OUTPUT_FILE = "/home/users/tvami/EarthAsDM/CMSSW_14_1_0_pre4/src/input_2DA_SR.txt"

    # You can change these
    SIGNAL_PATTERN = "e6"  # Set to None for all signals, or "e6", "e5", etc.
    TF_TYPE = "2x0"

    print(f"Scanning {HISTOGRAM_DIR} for signals matching pattern: {SIGNAL_PATTERN}")
    signal_names = extract_signal_names(HISTOGRAM_DIR, SIGNAL_PATTERN)

    print(f"Found {len(signal_names)} signals:")
    for sig in signal_names:
        print(f"  - {sig}")

    print(f"\nGenerating input file: {OUTPUT_FILE}")
    generate_input_file(signal_names, TEMPLATE_CONFIG, OUTPUT_FILE, TF_TYPE)

    print("\nDone!")
