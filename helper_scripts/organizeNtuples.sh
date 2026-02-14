#!/usr/bin/env bash
set -euo pipefail

# Destination base directory
BASE=/home/users/tvami/EarthAsDM/Ntuples_v3.0.2/

# ------------------------------------------------------------------
# 1) Create full directory tree
# ------------------------------------------------------------------
for sample in Data Signal BkgMC; do
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
for f in ./skimmed_*.root; do
  fname=$(basename "$f")

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
    skimmed_matched_muon_*) object=matched_muon ;;
    skimmed_muon_*)         object=muon ;;
    skimmed_track_*)        object=track ;;
    skimmed_tuneP_*)        object=tuneP ;;
    *)
      echo "WARNING: cannot determine object for $fname — skipping"
      continue
      ;;
  esac

  # Determine sample type (priority order)
  if [[ "$fname" == *MaxP* ]]; then
    sample=BkgMC
  elif [[ "$fname" == *Ntuplizer-Cosmics* ]]; then
    sample=Data
  else
    sample=Signal
  fi

  mv "$f" "$BASE/$sample/$region/$object/"
done

