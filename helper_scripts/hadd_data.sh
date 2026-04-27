#!/usr/bin/env bash
set -euo pipefail

# Destination base directory
BASE=/home/users/tvami/EarthAsDM/Ntuples_v4.1.1/

echo "=== Merging all Data files in each directory ==="

# ------------------------------------------------------------------
# Merge all files in each Data/region/object directory
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
echo "=== Data merging complete ==="
