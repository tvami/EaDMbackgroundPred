#!/usr/bin/env bash
set -euo pipefail

# Destination base directory
#BASE=/home/users/tvami/EarthAsDM/Ntuples_v4.0.8/
BASE=/home/users/tvami/EarthAsDM/v2/

# ------------------------------------------------------------------
# 1) Create full directory tree
# ------------------------------------------------------------------
for sample in Data Signal BkgMC ExpressData; do
  for region in sr vr; do
    for object in matched_muon muon track tuneP; do
      mkdir -p "$BASE/$sample/$region/$object"
    done
  done
done

# ------------------------------------------------------------------
# 2) Move skimmed ROOT files from ./ into the tree
# ------------------------------------------------------------------
shopt -s nullglob
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
  elif [[ "$fname" == *_vr_* ]]; then
    region=vr
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
  mv "$f" "$OUTBASE/$sample/$region/$object/"
done

