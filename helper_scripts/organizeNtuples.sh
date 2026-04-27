#!/usr/bin/env bash
set -euo pipefail

# Destination base directory
# BASE=/home/users/tvami/EarthAsDM/Ntuples_v4.1.1/
BASE=/ceph/cms/store/user/tvami/EarthAsDM/Ntuples/Ntuples_v4.0.9/
#BASE=/home/users/tvami/EarthAsDM/v2/

# ------------------------------------------------------------------
# 1) Create full directory tree
# ------------------------------------------------------------------
for sample in Data Signal BkgMC ExpressData; do
  for region in sr vr1 vr2; do
    for object in matched_muon muon track tuneP; do
      mkdir -p "$BASE/$sample/$region/$object"
    done
  done
done

# Create unmerged directory
mkdir -p unmerged

# ------------------------------------------------------------------
# 2) Merge or rename chunked job files
# ------------------------------------------------------------------
shopt -s nullglob

echo "=== Step 1: Merging/renaming chunked job files ==="

# Find all unique base names (without _jobN suffix)
declare -A file_groups

for f in ./skimmed_*.root ./trigger_study_*.root; do
  fname=$(basename "$f")

  # Remove _jobN suffix if present to get base name
  if [[ "$fname" =~ ^(.+)_job[0-9]+\.root$ ]]; then
    base_name="${BASH_REMATCH[1]}.root"
  else
    base_name="$fname"
  fi

  # Add to group
  if [[ -z "${file_groups[$base_name]:-}" ]]; then
    file_groups[$base_name]="$f"
  else
    file_groups[$base_name]="${file_groups[$base_name]} $f"
  fi
done

# Process each group
for base_name in "${!file_groups[@]}"; do
  files=(${file_groups[$base_name]})
  num_files=${#files[@]}

  echo ""
  echo "Processing group: $base_name ($num_files file(s))"

  if [[ $num_files -eq 1 ]]; then
    # Single file - just rename if it has _jobN suffix
    single_file="${files[0]}"
    if [[ "$single_file" =~ _job[0-9]+\.root$ ]]; then
      echo "  Renaming: $single_file -> $base_name"
      mv "$single_file" "$base_name"
    else
      echo "  Already correct name: $single_file"
    fi
  else
    # Multiple files - hadd them
    echo "  Merging ${num_files} files into $base_name"
    echo "    Files: ${files[@]}"

    # Check if merged file already exists
    if [[ -f "$base_name" ]]; then
      echo "  WARNING: $base_name already exists, skipping hadd"
    else
      # Perform hadd
      hadd -f "$base_name" "${files[@]}"

      # Move individual job files to unmerged directory
      for job_file in "${files[@]}"; do
        echo "    Moving $job_file to unmerged/"
        mv "$job_file" unmerged/
      done
    fi
  fi
done

echo ""
echo "=== Step 2: Organizing files into directory structure ==="

# ------------------------------------------------------------------
# 3) Move merged/renamed ROOT files into the tree
# ------------------------------------------------------------------
for f in ./skimmed_*.root ./trigger_study_*.root; do
  fname=$(basename "$f")

  # Determine output base: append "_trigger_study" for trigger_study files
  if [[ "$fname" == trigger_study_* ]]; then
    OUTBASE="${BASE%/}_trigger_study/"
    prefix=trigger_study
  else
    OUTBASE="$BASE"
    prefix=skimmed
  fi

  # Extract region
  if [[ "$fname" == *_sr_* ]]; then
    region=sr
  elif [[ "$fname" == *_vr1_* ]]; then
    region=vr1
  elif [[ "$fname" == *_vr2_* ]]; then
    region=vr2
  else
    echo "WARNING: cannot determine region for $fname — skipping"
    continue
  fi

  # Extract object (explicit mapping)
  case "$fname" in
    ${prefix}_matched_muon_*) object=matched_muon ;;
    ${prefix}_muon_*)         object=muon ;;
    ${prefix}_track_*)        object=track ;;
    ${prefix}_tuneP_*)        object=tuneP ;;
    *)
      echo "WARNING: cannot determine object for $fname — skipping"
      continue
      ;;
  esac

  # Determine sample type (priority order)
  if [[ "$fname" == *MaxP* ]]; then
    sample=BkgMC
  elif [[ "$fname" == *ExpressCosmics* ]]; then
    sample=ExpressData
  elif [[ "$fname" == *Ntuplizer-Cosmics* ]]; then
    sample=Data
  else
    sample=Signal
  fi

  mkdir -p "$OUTBASE/$sample/$region/$object"
  echo "Moving: $fname -> $OUTBASE/$sample/$region/$object/"
  mv "$f" "$OUTBASE/$sample/$region/$object/"
done

echo ""
echo "=== Step 3: Merging all files in each directory ==="

# ------------------------------------------------------------------
# 4) Merge all files in each sample/region/object directory
# ------------------------------------------------------------------

# Determine sample identifier for output filename
get_sample_identifier() {
  local sample=$1
  case "$sample" in
    Data)        echo "Ntuplizer-Cosmics" ;;
    ExpressData) echo "ExpressCosmics" ;;
    BkgMC)       echo "MaxP" ;;
    Signal)      echo "Signal" ;;
    *)           echo "$sample" ;;
  esac
}

# Process both regular and trigger_study directories
for base_dir in "$BASE" "${BASE%/}_trigger_study/"; do
  if [[ ! -d "$base_dir" ]]; then
    continue
  fi

  # Determine prefix for output filename
  if [[ "$base_dir" == *"_trigger_study"* ]]; then
    prefix="trigger_study"
  else
    prefix="skimmed"
  fi

  for sample in Data; do
    for region in sr vr1 vr2; do
      for object in matched_muon muon track tuneP; do
        dir="$base_dir/$sample/$region/$object"

        if [[ ! -d "$dir" ]]; then
          continue
        fi

        # Find all ROOT files in this directory
        files=("$dir"/${prefix}_*.root)

        # Check if any files exist (avoid issues with glob not matching)
        if [[ ! -e "${files[0]}" ]]; then
          continue
        fi

        num_files=${#files[@]}

        if [[ $num_files -eq 0 ]]; then
          continue
        fi

        # Get sample identifier for filename
        sample_id=$(get_sample_identifier "$sample")

        # Output filename
        output_file="$dir/${prefix}_${object}_${region}_${sample_id}_All_v4.root"

        if [[ $num_files -eq 1 ]]; then
          echo "  Only 1 file in $sample/$region/$object, renaming to All_v4"
          single_file="${files[0]}"
          mv "$single_file" "$output_file"
        else
          echo "  Merging $num_files files in $sample/$region/$object"
          echo "    Output: $(basename "$output_file")"

          if [[ -f "$output_file" ]]; then
            echo "  WARNING: $output_file already exists, skipping"
          else
            hadd -f "$output_file" "${files[@]}"

            # Remove individual files after successful merge
            for f in "${files[@]}"; do
              if [[ "$f" != "$output_file" ]]; then
                rm "$f"
              fi
            done
          fi
        fi
      done
    done
  done
done

echo ""
echo "=== Organization complete ==="
echo "Unmerged job files are in: ./unmerged/"
