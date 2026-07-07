#!/usr/bin/env bash
set -euo pipefail

# ------------------------------------------------------------------
# Options
# ------------------------------------------------------------------
usage() {
  cat <<'EOF'
Usage: organizeNtuples.sh [options]

Moves skimmed_*/trigger_study_* ROOT files from the current directory into the
destination tree ($BASE/<sample>/<region>/<object>/).

This script ONLY moves/organizes files. It does NOT hadd/merge anything.

Options:
  -h, --help   Show this help and exit.
EOF
}

while [[ $# -gt 0 ]]; do
  case "$1" in
    -h|--help) usage; exit 0 ;;
    *) echo "Unknown option: $1" >&2; usage >&2; exit 1 ;;
  esac
done

# Destination base directory
# BASE=/home/users/tvami/EarthAsDM/Ntuples_v4.1.1/
BASE=/ceph/cms/store/user/tvami/EarthAsDM/Ntuples/Ntuples_v5.0.0/
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

shopt -s nullglob

# Skip files modified within the last 2 minutes — they may still be being written
MIN_AGE_SECONDS=120
is_recent() {
  local f=$1 now mtime
  now=$(date +%s)
  mtime=$(stat -c %Y "$f" 2>/dev/null) || return 1
  (( now - mtime < MIN_AGE_SECONDS ))
}

# ------------------------------------------------------------------
# 2) Move ROOT files into the directory tree
# ------------------------------------------------------------------
echo "=== Organizing files into directory structure ==="
for f in ./skimmed_*.root ./trigger_study_*.root; do
  if is_recent "$f"; then
    echo "  Skipping (modified <2 min ago, may still be writing): $f"
    continue
  fi
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
  # *MaxP*        : old cosmuogen full-spectrum bkg (MinP-10-MaxP-10000)
  # *realistic_deco* : new private cosmic MC bkg (Ntuplizer-0to*Theta-...-realistic_deco_v14-v2_s2/s3)
  if [[ "$fname" == *MaxP* || "$fname" == *realistic_deco* ]]; then
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
echo "=== Organization complete ==="
