#!/bin/bash
#
# make_1D_limit_plots.sh
#
# Re-makes the 1D limit plots (rate vs m_chi, one PDF+PNG per epsilon point:
# limits_combine_<signals>_alpha_max_<eps>.{pdf,png}) plus exclusion_limits.json.
#
# This is only the *plotting* step: set_limit_alphaMax.py never calls combine, it
# just reads the existing higgsCombine* trees under the working areas listed in
# the signals txt. So it is safe/cheap to rerun after a cosmetic change (e.g. the
# ctau label in the TPaveText) without redoing any fit.
#
# Default (volume) mode is what produces
#   exp_lim/signal_rpf2x0_Binningv13_Inputv28_SR_Blind_livetime_20.7_limit/
#     limits_combine_signal_rpf2x0_Binningv13_Inputv28_SR_Blind_alpha_max_3.4e-08.pdf
# and the other 167 epsilon points.
#
# Usage:
#   ./helper_scripts/make_1D_limit_plots.sh [-d LIMITDIR] [-m MONTHS] [-r] [-s]
#
#   -d   working-area/limit dir name  (default rpf2x0_Binningv13_Inputv28_SR_Blind)
#   -m   livetime in months          (default 20.7)
#   -r   also regenerate the rate input txt first (limitRateInputScript.py -d e0);
#        needed only if the mass points / signal dirs changed
#   -s   --single (fixed-depth) mode instead of the nominal volume mode; writes to
#        ..._${DEPTH}_fixedDepth_limit and needs -D <depth>
#   -D   depth token for -s mode (default e0)
#
# Run from .../CMSSW_14_1_0_pre4/src. On an el9 host the script re-execs itself
# inside cmssw-el8 (the release is built for SCRAM_ARCH=el8).
set -e

LIMITDIR=rpf2x0_Binningv13_Inputv28_SR_Blind
MONTHS=20.7
REGEN=0
SINGLE=0
DEPTH=e0

while getopts "d:m:D:rsh" opt; do
    case $opt in
        d) LIMITDIR="$OPTARG" ;;
        m) MONTHS="$OPTARG" ;;
        D) DEPTH="$OPTARG" ;;
        r) REGEN=1 ;;
        s) SINGLE=1 ;;
        h) sed -n '2,32p' "$0"; exit 0 ;;
        *) sed -n '2,32p' "$0"; exit 1 ;;
    esac
done

SRCDIR=/home/users/tvami/EarthAsDM/CMSSW_14_1_0_pre4/src

# --- el8 container re-exec (skipped once we are inside it) ---
if [ -z "$INSIDE_EL8" ]; then
    # /etc/redhat-release says "AlmaLinux release 9.8 ..." on the el9 uafs, so key off
    # the major VERSION_ID rather than an "el9" substring.
    OSMAJOR=$(. /etc/os-release 2>/dev/null && echo "${VERSION_ID%%.*}")
    if [ "$OSMAJOR" != "8" ]; then
        export INSIDE_EL8=1
        exec cmssw-el8 -- bash -c "cd $SRCDIR && eval \`scram runtime -sh\` \
            && source twoD-env/bin/activate && INSIDE_EL8=1 $0 $*"
    fi
fi

cd "$SRCDIR"

INPUT=exp_lim/signal_${LIMITDIR}_alpha_max.txt

if [ "$SINGLE" -eq 1 ]; then
    OUT=exp_lim/signal_${LIMITDIR}_livetime_${MONTHS}_${DEPTH}_fixedDepth_limit
    MODE="--single"
    # fixed-depth needs the _e<N> paths inside the txt, so always regenerate
    REGEN=1
else
    OUT=exp_lim/signal_${LIMITDIR}_livetime_${MONTHS}_limit
    MODE=""
    DEPTH=e0
fi

echo "=========================================="
echo " LIMITDIR = $LIMITDIR"
echo " MONTHS   = $MONTHS"
echo " MODE     = ${MODE:-volume (depth-weighted e3..e6)}"
echo " OUTDIR   = $OUT"
echo "=========================================="

if [ "$REGEN" -eq 1 ]; then
    echo ">>> regenerating rate input ($DEPTH) -> $INPUT"
    python3 helper_scripts/limitRateInputScript.py -d "$DEPTH" -l "$LIMITDIR"
fi

echo ">>> making 1D limit plots"
python3 exp_lim/set_limit_alphaMax.py $MODE \
    -L "Run 3 Cosmics" \
    --outdir "$OUT" \
    -s "$INPUT" \
    -l "$MONTHS"

if [ "$SINGLE" -eq 1 ]; then
    # leave the volume pipeline's default (e0) input in place
    python3 helper_scripts/limitRateInputScript.py -d e0 -l "$LIMITDIR" >/dev/null 2>&1
fi

echo "=========================================="
echo " done -> $OUT"
echo " e.g. $OUT/limits_combine_signal_${LIMITDIR}_alpha_max_3.4e-08.pdf"
echo "=========================================="
