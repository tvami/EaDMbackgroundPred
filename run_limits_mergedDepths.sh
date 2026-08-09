#!/bin/bash
#
# Limit setting + plotting for the depth-merged SR results.
#
# Wraps the README "Step 8: Run Limits" pipeline, with the two changes the merged
# signals need (partial_limit_pipeline.sh cannot be used as-is):
#   1. limitRateInputScript.py has no mergedDepth path token, so we generate with
#      -d e3 (whose mass grid maps 1:1 onto the 18 merged masses) and rewrite the
#      _e3 token to _mergedDepth.
#   2. set_limit_alphaMax.py runs with --single: each signal's own combine limit,
#      instead of the default depth-weighted average over e3..e6, which does not
#      exist for a depth-merged signal.
#
# Usage:
#   ./run_limits_mergedDepths.sh                     # defaults below
#   ./run_limits_mergedDepths.sh -m 24.3             # different livetime
#   ./run_limits_mergedDepths.sh -d OTHERDIR -m 20.7
#   ./run_limits_mergedDepths.sh --skip-input        # reuse existing alpha_max.txt
#   ./run_limits_mergedDepths.sh --no-plot           # stop after limits (step 2)

set -u

cd "$(dirname "$0")" || exit 1

# ---------------------------- defaults ------------------------------------
LIMITDIR="rpf2x0_Binningv13_Inputv29_mergedDepths_SR_Blind"
MONTHS="20.7"          # livetime in MONTHS -- override with -m
DEPTH_KEY="e3"         # mass grid whose entries match the merged mass points
MERGE_TAG="_mergedDepth"
LUMILABEL="Run 3 Cosmics"
MODEL="core"
DO_INPUT=1
DO_PLOT=1
# --------------------------------------------------------------------------

usage() {
    echo "Usage: $0 [-d LIMITDIR] [-m MONTHS_OF_LIVETIME] [--skip-input] [--no-plot]"
    echo ""
    echo "  -d             2DA results directory (default: $LIMITDIR)"
    echo "  -m             livetime in months   (default: $MONTHS)"
    echo "  --skip-input   reuse the existing exp_lim/signal_<LIMITDIR>_alpha_max.txt"
    echo "  --no-plot      stop after step 2 (limits), skip the 2D exclusion plot"
    exit 1
}

while [ $# -gt 0 ]; do
    case "$1" in
        -d) LIMITDIR="${2:-}"; shift 2 ;;
        -m) MONTHS="${2:-}";   shift 2 ;;
        --skip-input) DO_INPUT=0; shift ;;
        --no-plot)    DO_PLOT=0;  shift ;;
        -h|--help) usage ;;
        *) echo "ERROR: unknown argument '$1'"; usage ;;
    esac
done

if [ -z "$LIMITDIR" ] || [ -z "$MONTHS" ]; then usage; fi

SIGFILE="exp_lim/signal_${LIMITDIR}_alpha_max.txt"
OUTDIR="exp_lim/signal_${LIMITDIR}_livetime_${MONTHS}_limit"

# ---------------------------- environment ---------------------------------
if [ -z "${CMSSW_BASE:-}" ]; then
    echo "[setup] cmsenv..."
    export SCRAM_ARCH=el8_amd64_gcc12
    source /cvmfs/cms.cern.ch/cmsset_default.sh
    eval `scramv1 runtime -sh`
fi
if [ -z "${VIRTUAL_ENV:-}" ]; then
    echo "[setup] activating twoD-env..."
    source twoD-env/bin/activate
fi

python3 -c "import pyarrow" 2>/dev/null
if [ $? -ne 0 ]; then
    echo "ERROR: pyarrow is not importable, and steps 1/3 read the parquet rate files."
    echo "       Install it into twoD-env (pip install pyarrow) or point PYTHONPATH at"
    echo "       a site-packages that has it (see README step 8 env notes)."
    exit 1
fi

# ---------------------------- validation ----------------------------------
echo "=========================================="
echo "  Limits for depth-merged SR"
echo "=========================================="
echo "  LIMITDIR : $LIMITDIR"
echo "  MONTHS   : $MONTHS   <-- livetime scales the y-axis (100/lumi); check it"
echo "  signals  : $SIGFILE"
echo "  outdir   : $OUTDIR"
echo ""

if [ ! -d "$LIMITDIR" ]; then
    echo "ERROR: results directory $LIMITDIR not found in $(pwd)"
    exit 1
fi

nlimit=$(ls "$LIMITDIR"/*/*-2x0_area/higgsCombineTest.AsymptoticLimits.mH120.root 2>/dev/null | wc -l)
narea=$(ls -d "$LIMITDIR"/*/ 2>/dev/null | wc -l)
echo "Found $nlimit combine limit file(s) in $narea work area(s)."
if [ "$nlimit" -eq 0 ]; then
    echo "ERROR: no higgsCombineTest.AsymptoticLimits.mH120.root under $LIMITDIR."
    echo "       Run the fits first (./run_all_mergedDepths_local.sh) and move the"
    echo "       work areas into $LIMITDIR."
    exit 1
fi
if [ "$nlimit" -ne "$narea" ]; then
    echo "WARNING: $narea work areas but only $nlimit combine limit files --"
    echo "         some signals did not finish; they will be skipped in the curve."
fi

# ---------------------------- step 1 --------------------------------------
echo ""
if [ $DO_INPUT -eq 1 ]; then
    echo ">>> Step 1: generating $SIGFILE (-d $DEPTH_KEY, then ${DEPTH_KEY} -> mergedDepth)"
    python3 helper_scripts/limitRateInputScript.py -d "$DEPTH_KEY" -l "$LIMITDIR" -m "$MODEL"
    if [ $? -ne 0 ] || [ ! -f "$SIGFILE" ]; then
        echo "ERROR: limitRateInputScript.py failed to write $SIGFILE"
        exit 1
    fi
    sed -i "s/_${DEPTH_KEY}_SR/${MERGE_TAG}_SR/g" "$SIGFILE"
    echo "    rewrote _${DEPTH_KEY}_SR -> ${MERGE_TAG}_SR"
else
    echo ">>> Step 1: skipped (--skip-input), using existing $SIGFILE"
    if [ ! -f "$SIGFILE" ]; then
        echo "ERROR: $SIGFILE does not exist; drop --skip-input"
        exit 1
    fi
fi

# Sanity check: do the paths in the signal file actually exist on disk?
nmiss=0; ntot=0
for p in $(head -1 "$SIGFILE" | tr ',' ' '); do
    ntot=$((ntot + 1))
    [ -f "${p}/higgsCombineTest.AsymptoticLimits.mH120.root" ] || nmiss=$((nmiss + 1))
done
echo "    $((ntot - nmiss)) / $ntot entries resolve to a combine limit file"
if [ "$nmiss" -eq "$ntot" ]; then
    echo "ERROR: none of the paths in $SIGFILE exist. Check LIMITDIR and the"
    echo "       ${MERGE_TAG} naming of the work areas."
    exit 1
fi

# ---------------------------- step 2 --------------------------------------
echo ""
echo ">>> Step 2: set_limit_alphaMax.py --single"
python3 exp_lim/set_limit_alphaMax.py --single \
    -L "$LUMILABEL" \
    --outdir "$OUTDIR" \
    -s "$SIGFILE" \
    -l "$MONTHS"
if [ $? -ne 0 ]; then
    echo "ERROR: set_limit_alphaMax.py failed"
    exit 1
fi

# ---------------------------- step 3 --------------------------------------
if [ $DO_PLOT -eq 1 ]; then
    echo ""
    echo ">>> Step 3: plotExcludedMassVsEp_2D.py"
    python3 helper_scripts/plotExcludedMassVsEp_2D.py -l "$LIMITDIR" -L "$MONTHS" --band68 --use-cache
    if [ $? -ne 0 ]; then
        echo "ERROR: plotExcludedMassVsEp_2D.py failed"
        exit 1
    fi
else
    echo ""
    echo ">>> Step 3: skipped (--no-plot)"
fi

# ---------------------------- summary -------------------------------------
echo ""
echo "=========================================="
echo "  Done."
echo "  1D limit plots : $OUTDIR/limits_combine_*.pdf ($(ls "$OUTDIR"/limits_combine_*.pdf 2>/dev/null | wc -l) files)"
echo "  JSON           : $OUTDIR/exclusion_limits.json"
if [ $DO_PLOT -eq 1 ]; then
    echo "  2D exclusion   : figures/ (see plotExcludedMassVsEp_2D.py output above)"
fi
echo "=========================================="
