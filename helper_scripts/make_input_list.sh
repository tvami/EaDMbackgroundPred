#!/usr/bin/env bash

BASE="/ceph/cms/store/user/tvami/EarthAsDM"

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
for dir in "$BASE"/*/; do
    [[ -d "$dir" ]] || continue
    dir="${dir%/}"

    echo "$OBJ sr $dir" >> "$OUTFILE"
    echo "$OBJ vr $dir" >> "$OUTFILE"
done

echo "Wrote output to $OUTFILE"

