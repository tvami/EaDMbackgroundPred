#!/bin/bash
# Submit the 2DAlphabet SR fits for the depth-MERGED v30 signals.
#
#   ./submit_2DA_mergedDepths_SR_v30.sh              # regenerate the list, then submit
#   ./submit_2DA_mergedDepths_SR_v30.sh --no-generate  # submit the existing list as-is
#   ./submit_2DA_mergedDepths_SR_v30.sh --dry-run      # validate + generate, submit nothing

set -euo pipefail

HISTO_DIR="histograms_for_2DAlphabet_v30"
TEMPLATE_CFG="config_Binningv13_Inputv30Template_SR_Blind.json"
INPUT_FILE="input_2DA_mergedDepths_SR_v30.txt"
CONDOR_CFG="step7_condor_2DA_mergedDepths_SR_v30.cfg"
PARENT_DIR="rpf2x0_Binningv13_Inputv30_mergedDepths_SR_Blind"
TF_TYPE="2x0"

generate="yes"
dry_run="no"
for arg in "$@"; do
    case "$arg" in
        --no-generate) generate="no" ;;
        --dry-run)     dry_run="yes" ;;
        -h|--help)     sed -n '2,6p' "$0"; exit 0 ;;
        *) echo "Unknown option: $arg"; exit 1 ;;
    esac
done

echo "=========================================="
echo "  2DA mergedDepths SR (Input v30)"
echo "=========================================="

for f in "$TEMPLATE_CFG" "$CONDOR_CFG"; do
    [ -f "$f" ] || { echo "ERROR: missing $f"; exit 1; }
done
[ -d "$HISTO_DIR" ] || { echo "ERROR: missing $HISTO_DIR"; exit 1; }

if [ "$generate" = "yes" ]; then
    echo -e "\n[1/3] Generating $INPUT_FILE from $HISTO_DIR"
    # The 4th field is the parent directory the batch script writes into and Condor
    # transfers back; it must match transfer_output_files in the cfg.
    : > "$INPUT_FILE"
    for f in "$HISTO_DIR"/EaDM_Signal_M*GeV_mergedDepth_SR.root; do
        [ -e "$f" ] || { echo "ERROR: no mergedDepth histograms in $HISTO_DIR."; \
            echo "  Build them first: python3 helper_scripts/merge_depths_2DA_hists.py -H $HISTO_DIR -r SR"; \
            exit 1; }
        signal=$(basename "$f" .root); signal=${signal#EaDM_}
        echo "$TEMPLATE_CFG,$signal,$TF_TYPE,$PARENT_DIR" >> "$INPUT_FILE"
    done
    # Sort by mass so the job order matches the per-depth production's
    sort -t'M' -k2 -n -o "$INPUT_FILE" "$INPUT_FILE"
else
    echo -e "\n[1/3] Reusing existing $INPUT_FILE"
fi

echo -e "\n[2/3] Validating"
[ -s "$INPUT_FILE" ] || { echo "ERROR: $INPUT_FILE is empty"; exit 1; }
njobs=$(wc -l < "$INPUT_FILE")
while IFS=, read -r cfg signal tf parent; do
    [ -f "$HISTO_DIR/EaDM_${signal}.root" ] || { echo "ERROR: missing $HISTO_DIR/EaDM_${signal}.root"; exit 1; }
    [ "$parent" = "$PARENT_DIR" ] || { echo "ERROR: parent dir mismatch for $signal: $parent"; exit 1; }
done < "$INPUT_FILE"
echo "  $njobs jobs, all histograms present"
mkdir -p logs

if [ "$dry_run" = "yes" ]; then
    echo -e "\n[3/3] --dry-run: not submitting. Input list:"
    cat "$INPUT_FILE"
    exit 0
fi

echo -e "\n[3/3] Submitting to Condor"
condor_submit "$CONDOR_CFG"

echo -e "\n=========================================="
echo "  Submitted $njobs jobs -> $PARENT_DIR"
echo "=========================================="
