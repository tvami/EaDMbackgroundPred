#!/bin/bash
# Generate chunked job input from input file
# Each directory is split into chunks of FILES_PER_JOB files
# Output: <input_file>_chunked.txt with columns: object region base_dir validate save_snapshot job_index files_per_job

INPUT="${1:?Usage: $0 <input_file> [files_per_job]}"
FILES_PER_JOB=${2:-500}
OUTPUT="${INPUT%.txt}_chunked.txt"

> "$OUTPUT"
total_jobs=0

while IFS=' ' read -r object region base_dir validate save_snapshot; do
    # Set defaults if validate and save_snapshot are not provided
    [[ -z "$validate" ]] && validate="false"
    [[ -z "$save_snapshot" ]] && save_snapshot="true"

    [[ -z "$object" || -z "$region" || -z "$base_dir" ]] && continue
    nfiles=$(find "$base_dir" -name '*.root' 2>/dev/null | wc -l)
    njobs=$(( (nfiles + FILES_PER_JOB - 1) / FILES_PER_JOB ))
    if [[ $njobs -eq 0 ]]; then
        echo "Warning: no .root files in $base_dir, skipping"
        continue
    fi
    for (( j=0; j<njobs; j++ )); do
        echo "$object $region $base_dir $validate $save_snapshot $j $FILES_PER_JOB" >> "$OUTPUT"
    done
    echo "$base_dir: $nfiles files -> $njobs jobs"
    total_jobs=$((total_jobs + njobs))
done < "$INPUT"

echo "Written $total_jobs jobs to $OUTPUT"
