#!/usr/bin/env python3
"""
Script to collect, merge, and organize 2DAlphabet histograms
Usage: python collect_and_merge_histograms.py --version v23
       python collect_and_merge_histograms.py --version v27 \
           --source-base /ceph/cms/store/user/tvami/EarthAsDM/Ntuples/Ntuples_v5.0.3_wRNN
"""

import os
import shutil
import subprocess
import argparse
from pathlib import Path

def run_command(cmd, description=""):
    """Execute shell command and handle errors"""
    if description:
        print(f"{description}...")
    print(f"Running: {cmd}")
    result = subprocess.run(cmd, shell=True, capture_output=True, text=True)
    if result.returncode != 0:
        print(f"Warning: Command failed with error:\n{result.stderr}")
    return result.returncode == 0

def main():
    # Parse arguments
    parser = argparse.ArgumentParser(description='Collect and merge 2DAlphabet histograms')
    parser.add_argument('-v', '--version', required=True, help='Version string (e.g., v23)')
    parser.add_argument('-s', '--source-base', default=None,
                        help='Base dir holding the Data/BkgMC/Signal step-6 trees '
                             '(each with <region>/matched_muon/2DA/). Defaults to the '
                             'local helper_scripts dir. Use e.g. a '
                             '/ceph/.../Ntuples_vX.Y.Z_wRNN path to collect from ceph.')
    args = parser.parse_args()

    version = args.version

    # Auto-detect if we're running from helper_scripts/ or from parent directory
    current_dir = os.path.basename(os.getcwd())
    if current_dir == "helper_scripts":
        # Running from inside helper_scripts, use current directory
        helper_scripts_dir = "."
        output_dir = f"histograms_for_2DAlphabet_{version}"
    else:
        # Running from parent (e.g., src/), use relative path
        helper_scripts_dir = "helper_scripts"
        output_dir = f"histograms_for_2DAlphabet_{version}"

    # Where the Data/BkgMC/Signal step-6 trees live. Defaults to the local
    # helper_scripts dir, but can point at ceph (e.g. Ntuples_vX.Y.Z_wRNN) once
    # organizeSkimmedNtuples.sh has moved the outputs there.
    source_base = args.source_base if args.source_base else helper_scripts_dir

    print(f"========================================")
    print(f"Collecting histograms for version {version}")
    print(f"Working directory: {os.getcwd()}")
    print(f"Helper scripts dir: {helper_scripts_dir}")
    print(f"Source base: {source_base}")
    print(f"========================================\n")

    # Create output directory
    print(f"Creating directory: {output_dir}")
    os.makedirs(output_dir, exist_ok=True)

    # ================================
    # Step 1: Move Data files
    # ================================
    print("\n=== Step 1: Moving Data files ===")
    # Match every per-era data file (Run202* prompt-reco AND Commissioning20XX);
    # the earlier "Run202*" glob silently dropped the commissioning eras, which
    # are kept on purpose from v5.0.1 onward. The merged "_All_" file is only
    # produced in the output dir, so it is never picked up here as a source.
    cmd = f"find {source_base}/Data -path '*/matched_muon/2DA/EaDM_Run3_Cosmics_Data_*' -type f 2>/dev/null"
    result = subprocess.run(cmd, shell=True, capture_output=True, text=True)
    files = result.stdout.strip().split('\n')

    for file in files:
        if file and os.path.exists(file):
            basename = os.path.basename(file)
            dest = os.path.join(output_dir, basename)
            print(f"  Copying {file} -> {dest}")
            shutil.copy2(file, dest)

    # ================================
    # Step 2: Merge Data files with hadd
    # ================================
    print("\n=== Step 2: Merging Data files ===")
    os.chdir(output_dir)

    regions = ['SR', 'VR1', 'VR2']
    for region in regions:
        output_file = f"EaDM_Run3_Cosmics_Data_All_{region}.root"
        input_pattern = f"EaDM_Run3_Cosmics_Data*{region}*.root"

        # Check if there are files to merge
        result = subprocess.run(f"ls {input_pattern} 2>/dev/null", shell=True, capture_output=True)
        if result.returncode == 0:
            run_command(
                f"hadd -f {output_file} {input_pattern}",
                f"Merging {region} data files"
            )

    # ================================
    # Step 3: Move unmerged files
    # ================================
    print("\n=== Step 3: Organizing merged/unmerged files ===")
    os.makedirs("unmerged", exist_ok=True)

    # Move individual data files to unmerged
    for region in regions:
        pattern = f"EaDM_Run3_Cosmics_Data*{region}*.root"
        cmd = f"ls {pattern} 2>/dev/null | grep -v 'All'"
        result = subprocess.run(cmd, shell=True, capture_output=True, text=True)
        files = result.stdout.strip().split('\n')

        for file in files:
            if file and os.path.exists(file):
                print(f"  Moving {file} to unmerged/")
                shutil.move(file, f"unmerged/{file}")

    # Move merged files back out
    for region in regions:
        merged_file = f"unmerged/EaDM_Run3_Cosmics_Data_All_{region}.root"
        if os.path.exists(merged_file):
            print(f"  Moving {merged_file} back to main directory")
            shutil.move(merged_file, ".")

    os.chdir("..")

# ================================
    # Step 5: Move and rename BkgMC files
    # ================================
    print("\n=== Step 5: Moving and renaming BkgMC files ===")

    # Move BkgMC files from sr, vr1, vr2
    bkgmc_paths = [
        f"{source_base}/BkgMC/sr/matched_muon/2DA",
        f"{source_base}/BkgMC/vr1/matched_muon/2DA",
        f"{source_base}/BkgMC/vr2/matched_muon/2DA",
    ]

    for bkgmc_path in bkgmc_paths:
        if os.path.exists(bkgmc_path):
            for file in Path(bkgmc_path).glob("*.root"):
                # Rename Signal to BkgMC in filename
                new_name = file.name.replace("EaDM_Signal_", "EaDM_BkgMC_")
                dest = os.path.join(output_dir, new_name)
                print(f"  Copying {file} -> {dest}")
                shutil.copy2(str(file), dest)

    # ================================
    # Step 6: Rename any remaining BkgMC files that still have Signal prefix
    # (must run before Signal files are moved in, so only BkgMC files are present)
    # ================================
    print("\n=== Step 6: Renaming remaining BkgMC files with Signal prefix ===")
    os.chdir(output_dir)

    for file in Path(".").glob("EaDM_Signal_*.root"):
        new_name = file.name.replace("EaDM_Signal_", "EaDM_BkgMC_")
        print(f"  Renaming {file} -> {new_name}")
        shutil.move(str(file), new_name)

    os.chdir("..")

    # ================================
    # Step 7: Move Signal files
    # ================================
    print("\n=== Step 7: Copying Signal files ===")
    signal_paths = [
        f"{source_base}/Signal/sr/matched_muon/2DA",
        f"{source_base}/Signal/vr1/matched_muon/2DA",
        f"{source_base}/Signal/vr2/matched_muon/2DA",
    ]

    for signal_path in signal_paths:
        if os.path.exists(signal_path):
            for file in Path(signal_path).glob("*.root"):
                dest = os.path.join(output_dir, file.name)
                print(f"  Copying {file} -> {dest}")
                shutil.copy2(str(file), dest)

    # ================================
    # Summary
    # ================================
    print("\n========================================")
    print("Summary of collected histograms:")
    print("========================================")

    os.chdir(output_dir)
    print("\nMerged Data files:")
    for region in regions:
        merged_file = f"EaDM_Run3_Cosmics_Data_All_{region}.root"
        if os.path.exists(merged_file):
            size = os.path.getsize(merged_file) / (1024**2)  # MB
            print(f"  {merged_file} ({size:.2f} MB)")

    print("\nBkgMC files:")
    for file in sorted(Path(".").glob("EaDM_BkgMC_*.root")):
        size = os.path.getsize(file) / (1024**2)  # MB
        print(f"  {file.name} ({size:.2f} MB)")

    print("\nSignal files:")
    for file in sorted(Path(".").glob("EaDM_Signal_*.root")):
        size = os.path.getsize(file) / (1024**2)  # MB
        print(f"  {file.name} ({size:.2f} MB)")

    os.chdir("..")

    print(f"\n========================================")
    print(f"All histograms collected in: {output_dir}/")
    print(f"Unmerged data files in: {output_dir}/unmerged/")
    print(f"========================================")

if __name__ == "__main__":
    main()
