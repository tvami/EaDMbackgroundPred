#!/bin/bash
#
# Run the full mergedDepths SR set locally (login node), instead of on Condor.
# Same per-signal work as run_2DA_mergedDepths_SR_batch.sh, minus the node setup.
#
# Usage:
#   ./run_all_mergedDepths_local.sh          # 6 signals at a time
#   ./run_all_mergedDepths_local.sh 10       # 10 at a time
#
# Signals that already have a 'done' marker are skipped, so re-running after an
# interrupt resumes where it left off. Per-signal output goes to logs_local/.

set -u

cd "$(dirname "$0")" || exit 1

NPAR=${1:-6}
# Overridable so a new input version does not need a forked copy of this script. Defaults are the
# v29 set this was written for, so a bare invocation behaves exactly as before. For v30:
#   INPUT_FILE=input_2DA_mergedDepths_SR_v30.txt \
#   TEMPLATE_CFG=config_Binningv13_Inputv30Template_SR_Blind.json \
#   LOGDIR=logs_local_v30 OUTPARENT=rpf2x0_Binningv13_Inputv30_mergedDepths_SR_Blind \
#   ./run_all_mergedDepths_local.sh 6
INPUT_FILE="${INPUT_FILE:-input_2DA_mergedDepths_SR.txt}"
TEMPLATE_CFG="${TEMPLATE_CFG:-config_Binningv13_Inputv29Template_SR_Blind.json}"
TF_TYPE="${TF_TYPE:-2x0}"
LOGDIR="${LOGDIR:-logs_local}"
# Where finished work areas end up. Empty = leave them in the CWD, which is what this script did
# before and means they must be moved into the limit dir by hand afterwards. Set it and each area
# is moved on completion, so run_limits_mergedDepths.sh -d "$OUTPARENT" can run straight after.
OUTPARENT="${OUTPARENT:-}"

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

python3 -c "import TwoDAlphabet" 2>/dev/null
if [ $? -ne 0 ]; then
    echo "ERROR: TwoDAlphabet not importable. Is twoD-env set up in $(pwd)?"
    exit 1
fi

for f in "$INPUT_FILE" "$TEMPLATE_CFG"; do
    if [ ! -f "$f" ]; then
        echo "ERROR: $f not found in $(pwd)"
        exit 1
    fi
done

mkdir -p "$LOGDIR"

# ---------------------------- worker --------------------------------------
run_one() {
    local s="$1"
    local area="rpf2x0_${s}"
    local cfg="config_${s}.json"

    # Resume check has to look wherever finished areas live, or a rerun redoes everything
    if [ -f "${area}/${s}-${TF_TYPE}_area/done" ] || \
       { [ -n "$OUTPARENT" ] && [ -f "${OUTPARENT}/${area}/${s}-${TF_TYPE}_area/done" ]; }; then
        echo "[$(date +%H:%M:%S)] SKIP    $s (already done)"
        return 0
    fi

    echo "[$(date +%H:%M:%S)] START   $s"
    sed "s/SIGNAME_PLACEHOLDER/${s}/g" "$TEMPLATE_CFG" > "$cfg"
    python3 run_single_signal_2DA.py "$area" "$cfg" "$s" "$TF_TYPE" \
        > "${LOGDIR}/${s}.log" 2>&1
    local rc=$?

    if [ $rc -eq 0 ]; then
        if [ -n "$OUTPARENT" ] && [ -d "$area" ]; then
            mkdir -p "$OUTPARENT"
            mv "$area" "$OUTPARENT"/ && echo "[$(date +%H:%M:%S)] MOVED   $s -> $OUTPARENT/"
        fi
        echo "[$(date +%H:%M:%S)] OK      $s"
    else
        echo "[$(date +%H:%M:%S)] FAIL    $s (exit $rc, see ${LOGDIR}/${s}.log)"
    fi
    return $rc
}
export -f run_one
export TEMPLATE_CFG TF_TYPE LOGDIR OUTPARENT

# ---------------------------- run -----------------------------------------
nsig=$(cut -d',' -f2 "$INPUT_FILE" | grep -c '[^[:space:]]')
echo "=========================================="
echo "  Local 2DA run: $nsig signals, $NPAR at a time"
echo "  Logs: $LOGDIR/<signal>.log"
echo "=========================================="

cut -d',' -f2 "$INPUT_FILE" | grep '[^[:space:]]' \
    | xargs -P "$NPAR" -I{} bash -c 'run_one "$1"' _ {}

# ---------------------------- summary -------------------------------------
echo ""
echo "=========================================="
ndone=$(ls -d ${OUTPARENT:+$OUTPARENT/}rpf2x0_Signal_M*_mergedDepth_SR/*-${TF_TYPE}_area/done 2>/dev/null | wc -l)
echo "  Completed: $ndone / $nsig"
if [ "$ndone" -ne "$nsig" ]; then
    echo "  Failures (no SUCCESS line in log):"
    grep -L "SUCCESS: Completed" "$LOGDIR"/Signal_M*_mergedDepth_SR.log 2>/dev/null \
        | sed 's/^/    /'
fi
echo "=========================================="
