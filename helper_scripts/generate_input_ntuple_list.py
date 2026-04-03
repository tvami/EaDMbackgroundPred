#!/usr/bin/env python3
"""
Script to generate input list for condor submission from a directory of ntuples.
Scans the directory structure and creates input_list.txt file.

Usage:
    python3 generate_input_list.py -d /ceph/cms/store/user/tvami/EarthAsDM/Ntuples/Ntuples_v4.0.9 -o input_ntuples_v4.0.9.txt -T Both -c matched_muon
"""

import os
import glob
import argparse
import re
from pathlib import Path

def extract_ntuple_version(base_dir):
    """Extract ntuple version from directory name (e.g., Ntuples_v4.0.9 -> 4.0.9)"""
    match = re.search(r'Ntuples_v([\d.]+)', base_dir)
    if match:
        return match.group(1)
    return "4.0.9"  # default

def generate_input_list(base_dir, output_file, run_type="Both", pattern="**/*.root", collection_filter=None):
    """
    Generate input list from directory structure.

    Expected directory structure:
    base_dir/
        {sample_type}/
            {region}/
                {collection}/
                    *.root

    Parameters:
    -----------
    base_dir : str
        Base directory containing ntuples (e.g., /path/to/Ntuples_v4.0.9)
    output_file : str
        Output file name for the input list
    run_type : str
        Run type (Process, 2DAInput, Both)
    pattern : str
        Glob pattern to match ROOT files
    collection_filter : str or None
        Filter by collection (e.g., 'matched_muon'). If None, include all collections.
    """

    # Extract ntuple version from directory name
    ntuple_version = extract_ntuple_version(base_dir)

    print(f"Scanning directory: {base_dir}")
    print(f"Ntuple version: {ntuple_version}")
    print(f"Run type: {run_type}")
    if collection_filter:
        print(f"Collection filter: {collection_filter}")
    print()

    # Find all ROOT files
    root_files = glob.glob(f"{base_dir}/{pattern}", recursive=True)

    if not root_files:
        print(f"No ROOT files found in {base_dir}/{pattern}")
        return

    print(f"Found {len(root_files)} ROOT files")

    # Parse directory structure and generate list
    entries = []
    skipped = []

    for root_file in sorted(root_files):
        # Get relative path from base_dir
        rel_path = os.path.relpath(root_file, base_dir)
        parts = rel_path.split(os.sep)

        # Expected structure: {sample_type}/{region}/{collection}/filename.root
        if len(parts) >= 4:
            sample_type = parts[0]
            region = parts[1]
            collection = parts[2]

            # Validate sample_type
            valid_sample_types = ['Data', 'Signal', 'BkgMC', 'ExpressData']
            if sample_type not in valid_sample_types:
                skipped.append((root_file, f"Invalid sample_type: {sample_type}"))
                continue

            # Validate region
            valid_path_regions = ['sr', 'vr1', 'vr2']
            if region not in valid_path_regions:
                skipped.append((root_file, f"Invalid region: {region}"))
                continue

            # Validate collection
            valid_collections = ['matched_muon', 'muon', 'track', 'tuneP']
            if collection not in valid_collections:
                skipped.append((root_file, f"Invalid collection: {collection}"))
                continue

            # Apply collection filter if specified
            if collection_filter and collection != collection_filter:
                skipped.append((root_file, f"Filtered out: collection '{collection}' != '{collection_filter}'"))
                continue

            # Create entry for the region
            entry = f"{root_file}, {ntuple_version}, {sample_type}, {region}, {collection}, {run_type}"
            entries.append(entry)
        else:
            skipped.append((root_file, "Path structure does not match expected format"))

    # Write to output file
    with open(output_file, 'w') as f:
        for entry in entries:
            f.write(entry + "\n")

    print(f"\nGenerated {len(entries)} entries")
    print(f"Output written to: {output_file}")

    if skipped:
        print(f"\nSkipped {len(skipped)} files:")
        for file, reason in skipped[:10]:  # Show first 10
            print(f"  - {file}: {reason}")
        if len(skipped) > 10:
            print(f"  ... and {len(skipped) - 10} more")

    # Print summary by sample type
    print("\nSummary by sample type:")
    from collections import Counter
    sample_counts = Counter()
    for entry in entries:
        parts = entry.split(', ')
        if len(parts) >= 3:
            sample_counts[parts[2]] += 1

    for sample_type, count in sorted(sample_counts.items()):
        print(f"  {sample_type}: {count} files")


def main():
    parser = argparse.ArgumentParser(
        description='Generate input list for condor submission from ntuple directory',
        formatter_class=argparse.RawDescriptionHelpFormatter,
        epilog="""
Examples:
  # Generate input list for all files in directory
  python generate_input_list.py -d /ceph/cms/store/user/tvami/EarthAsDM/Ntuples/Ntuples_v4.0.1

  # Generate for matched_muon collection only
  python generate_input_list.py -d /ceph/cms/store/user/tvami/EarthAsDM/Ntuples/Ntuples_v4.0.1 -c matched_muon

  # Generate for specific sample type
  python generate_input_list.py -d /ceph/cms/store/user/tvami/EarthAsDM/Ntuples/Ntuples_v4.0.1 -p "Data/**/*.root"

  # Specify collection and output file
  python generate_input_list.py -d /ceph/cms/store/user/tvami/EarthAsDM/Ntuples/Ntuples_v4.0.1 -c matched_muon -o input_list.txt
        """
    )

    parser.add_argument('-d', '--directory', required=True,
                        help='Base directory containing ntuples (e.g., /path/to/Ntuples_v4.0.9)')
    parser.add_argument('-o', '--output', default='input_list.txt',
                        help='Output file name (default: input_list.txt)')
    parser.add_argument('-T', '--runType', default='Both',
                        help='Run type: Process, 2DAInput, Both (default: Both)')
    parser.add_argument('-p', '--pattern', default='**/*.root',
                        help='Glob pattern for ROOT files (default: **/*.root)')
    parser.add_argument('-c', '--collection', default=None,
                        help='Filter by collection: matched_muon, muon, track, tuneP (default: None, include all)')

    args = parser.parse_args()

    # Check if directory exists
    if not os.path.isdir(args.directory):
        print(f"Error: Directory not found: {args.directory}")
        return 1

    # Generate the input list
    generate_input_list(
        base_dir=args.directory,
        output_file=args.output,
        run_type=args.runType,
        pattern=args.pattern,
        collection_filter=args.collection
    )

    return 0


if __name__ == '__main__':
    exit(main())
