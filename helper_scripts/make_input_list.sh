#!/usr/bin/env bash

BASES=(
    "/ceph/cms/store/user/tvami/EarthAsDM"
    "/ceph/cms/store/user/tvami/EarthAsDM/ExpressCosmics"
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

        echo "$OBJ sr $dir" >> "$OUTFILE"
        echo "$OBJ vr $dir" >> "$OUTFILE"
    done
done

echo "Wrote output to $OUTFILE"

