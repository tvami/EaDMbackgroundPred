#!/usr/bin/env bash

# .../EarthAsDM/ExpressCosmics was a third base here. The express stream is retired and
# the directory no longer exists on ceph, so scanning it only added express datasets to
# regenerated lists that then had to be hand-removed before step 2.
#
# NB if you ever re-add a base that is a first-level child of another base: the skip loop
# below only drops a directory when it is itself listed in BASES. ExpressCosmics is safe
# to remove precisely because the path is gone; were it still there, dropping it from
# BASES would make the outer scan emit the container directory itself as a dataset.
BASES=(
    "/ceph/cms/store/user/tvami/EarthAsDM"
    "/ceph/cms/store/user/tvami/EarthAsDM/Cosmics"
)

# require argument
if [[ -z "$1" ]]; then
    echo "Usage: $0 <object>"
    echo "Example: $0 muon"
    exit 1
fi

OBJ="$1"
OUTFILE="input_cosmics_datasets_${OBJ}.txt"

# clear output file
: > "$OUTFILE"

# first-level directories only
for BASE in "${BASES[@]}"; do
    for dir in "$BASE"/*/; do
        [[ -d "$dir" ]] || continue
        dir="${dir%/}"

        # skip subdirectories that are themselves in BASES
        skip=false
        for b in "${BASES[@]}"; do
            [[ "$dir" == "$b" ]] && { skip=true; break; }
        done
        $skip && continue

        # Skip everything under EarthAsDM/ that is not a raw ntuple dataset. Without
        # this, a regenerated list picks up 8 non-dataset directories (24 lines) that
        # then have to be pruned by hand before step 2 -- the same manual step the
        # retired ExpressCosmics entries used to need.
        #
        # Patterns, not exact names, so the next *_RAWRECO / *_GENSIMRECO / Alcareco*
        # staging area is caught without editing this script again.
        dirname=$(basename "$dir")
        case "$dirname" in
            Ntuples|Ntuples_v*)   continue ;;  # organized/processed ntuples
            *_GENSIMRECO)         continue ;;  # GEN-SIM-RECO production staging
            *_RAWRECO)            continue ;;  # RAW-RECO production staging
            RNNtrainings)         continue ;;  # RNN checkpoint backups
            AlcarecoTrackMult*)   continue ;;  # ALCARECO track-multiplicity studies
            TkAlCosmics0T)        continue ;;  # tracker alignment
        esac

        echo "$OBJ sr $dir" >> "$OUTFILE"
        echo "$OBJ vr1 $dir" >> "$OUTFILE"
        echo "$OBJ vr2 $dir" >> "$OUTFILE"
    done
done

echo "Wrote output to $OUTFILE"

