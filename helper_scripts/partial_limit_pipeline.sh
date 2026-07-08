#!/bin/bash
#
# partial_limit_pipeline.sh
#
# Runs a partial limit-setting pipeline, substituting in a limit directory
# name and a livetime (in months).
#
# Usage:
#   ./partial_limit_pipeline.sh -d LIMITDIR -m MONTHS_OF_LIVETIME
#
# Example:
#   ./partial_limit_pipeline.sh -d rpf2x0_Binningv13_Inputv28_SR_Blind -m 20.7
#
set -e  # exit immediately if any command fails

usage() {
    echo "Usage: $0 -d LIMITDIR -m MONTHS_OF_LIVETIME"
    echo ""
    echo "  -d   Name for LIMITDIR (e.g. my_test_run)"
    echo "  -m   Number of months of livetime (e.g. 6)"
    exit 1
}

# --- Parse flags ---
while getopts "d:m:h" opt; do
    case $opt in
        d) LIMITDIR="$OPTARG" ;;
        m) MONTHS_OF_LIVETIME="$OPTARG" ;;
        h) usage ;;
        *) usage ;;
    esac
done

# --- Validate ---
if [ -z "$LIMITDIR" ] || [ -z "$MONTHS_OF_LIVETIME" ]; then
    echo "Error: both -d LIMITDIR and -m MONTHS_OF_LIVETIME are required."
    echo ""
    usage
fi

echo "=========================================="
echo " LIMITDIR             = $LIMITDIR"
echo " MONTHS_OF_LIVETIME   = $MONTHS_OF_LIVETIME"
echo "=========================================="
echo ""

echo "============= COMMANDS TO RUN ============="
echo ">>> Step 1: python3 helper_scripts/limitRateInputScript.py -d e0 -l ${LIMITDIR}"
echo ">>> Step 2: python3 exp_lim/set_limit_general_modified_alphaMax_volumeLimits.py --outdir exp_lim/signal_${LIMITDIR}_livetime_${MONTHS_OF_LIVETIME}_Limit -s exp_lim/signal_${LIMITDIR}_alpha_max.txt -l ${MONTHS_OF_LIVETIME}"
echo ">>> Step 3: python3 helper_scripts/plotExcludedMassVsEp_2D.py -l ${LIMITDIR} -L ${MONTHS_OF_LIVETIME}"
echo ""

# --- Step 1: Generate rate input script ---
echo ">>> Step 1: Generating rate input file..."
python3 helper_scripts/limitRateInputScript.py -d e0 -l "${LIMITDIR}"
echo ""

# --- Step 2: Set limits ---
echo ">>> Step 2: Setting limits..."
python3 exp_lim/set_limit_general_modified_alphaMax_volumeLimits.py \
    --outdir "exp_lim/signal_${LIMITDIR}_livetime_${MONTHS_OF_LIVETIME}_limit" \
    -s "exp_lim/signal_${LIMITDIR}_alpha_max.txt" \
    -l "${MONTHS_OF_LIVETIME}"
echo ""

echo "=========================================="
echo " Pipeline complete."
echo "=========================================="