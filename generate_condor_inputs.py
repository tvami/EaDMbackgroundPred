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
        # Match all signals including those with depth suffixes (e5, e6, etc.)
        file_pattern = "EaDM_Signal_M*GeV*_SR.root"

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
    BASE_DIR = "/home/users/tvami/EarthAsDM/CMSSW_14_1_0_pre4/src"

    # Configuration for each region
    configs = [
        {
            "name": "SR",
            "template": f"{BASE_DIR}/config_Binningv7_InputTemplate_SR_Blind.json",
            "output": f"{BASE_DIR}/input_2DA_SR.txt",
            "pattern": "_SR.root"
        },
        {
            "name": "VR1",
            "template": f"{BASE_DIR}/config_Binningv7_InputTemplate_VR1_Unblind.json",
            "output": f"{BASE_DIR}/input_2DA_VR1.txt",
            "pattern": "_VR1.root"
        },
        {
            "name": "VR2",
            "template": f"{BASE_DIR}/config_Binningv7alt_InputTemplate_VR2_Unblind.json",
            "output": f"{BASE_DIR}/input_2DA_VR2.txt",
            "pattern": "_VR2.root"
        }
    ]

    TF_TYPE = "2x0"

    print("=" * 60)
    print("  Generating Condor Input Files for 2DAlphabet")
    print("=" * 60)

    for config in configs:
        region = config["name"]
        print(f"\n[{region}] Processing {region} region...")
        print(f"  Histogram directory: {HISTOGRAM_DIR}")
        print(f"  Looking for files matching: *{config['pattern']}")

        # Find signal files for this region
        files = sorted(Path(HISTOGRAM_DIR).glob(f"EaDM_Signal_M*GeV*{config['pattern']}"))

        signal_names = []
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

        print(f"  Found {len(signal_names)} signals:")
        for sig in signal_names[:3]:  # Show first 3
            print(f"    - {sig}")
        if len(signal_names) > 3:
            print(f"    ... and {len(signal_names) - 3} more")

        print(f"  Template config: {os.path.basename(config['template'])}")
        print(f"  Output file: {os.path.basename(config['output'])}")

        # Generate input file
        generate_input_file(signal_names, config['template'], config['output'], TF_TYPE)

    print("\n" + "=" * 60)
    print("  All input files generated successfully!")
    print("=" * 60)
