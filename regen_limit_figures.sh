#!/bin/bash
#
# Full regeneration of the AN limit figures after the tracker-acceptance fix and the
# epsilon-densification fix. Written to be run detached under screen:
#
#     screen -dmS eadm_regen bash regen_limit_figures.sh
#     screen -r eadm_regen                       # reattach
#     tail -f logs/regen_<timestamp>.log         # or just watch the log
#
# What it rebuilds, in order:
#   1. mergedDepths rate table + limits  ->  fig:exp_lim (1D at fixed eps)
#   2. the two --ribbon 2D plots (NO --use-cache)  ->  fig:exp_lim_vs_epsilon_vol
#   3. per-depth limits + overlay  ->  fig:exp_lim_vs_epsilon
#   4. the low-mass tracker table + the sigma-vs-mass plot  ->  fig:sigma_vs_mass
#   5. copies everything into AN/AN-23-122/Figures/7Results/ and into UploadToOverleaf/
#
# Everything downstream picks up the new epsilon grid automatically: limitRateInputScript.py
# writes it next to the rate table as *.eps.txt and set_limit_alphaMax.py reads it from there.

set -u
cd "$(dirname "$0")" || exit 1
SRC=$(pwd)

STAMP=$(date +%Y%m%d_%H%M%S)
mkdir -p logs
LOG="$SRC/logs/regen_${STAMP}.log"
exec > >(tee -a "$LOG") 2>&1

MERGED=rpf2x0_Binningv13_Inputv30_mergedDepths_SR_Blind
FIXED=rpf2x0_Binningv13_Inputv30_SR_Blind
LT=20.7
ANFIG=/home/users/tvami/EarthAsDM/AN/AN-23-122/Figures/7Results
UPLOAD=/home/users/tvami/UploadToOverleaf
PYA=/home/users/smasanam/EarthAsDMProject/CMSSW_14_1_0_pre5/src/twoD-env/lib/python3.9/site-packages

echo "=============================================================="
echo " EaDM limit-figure regeneration"
echo " started : $(date)"
echo " log     : $LOG"
echo " host    : $(hostname)"
echo "=============================================================="

fail() { echo ""; echo "!!!! FAILED at: $*"; echo "!!!! see $LOG"; exit 1; }

# ---- environment -------------------------------------------------------------
# Most steps want cmsenv + twoD-env + borrowed pyarrow. plotSigmaVsMass_CMSstyle.py is the
# exception: twoD-env shadows mplhep, so step 4 runs in its own cmsenv-only subshell.
setup_full() {
    export SCRAM_ARCH=el8_amd64_gcc12
    source /cvmfs/cms.cern.ch/cmsset_default.sh
    eval "$(scramv1 runtime -sh)"
    source twoD-env/bin/activate
    # ${PYTHONPATH:-} -- a detached screen starts from a clean login shell where PYTHONPATH may be
    # unset, and `set -u` turns a bare $PYTHONPATH into a fatal error.
    export PYTHONPATH="${PYTHONPATH:-}:$PYA"
}

# ================================ 1 + 2 =======================================
echo ""
echo ">>> [1/5] mergedDepths rate table + limits (fig:exp_lim)"
( setup_full && ./run_limits_mergedDepths.sh -d "$MERGED" -m "$LT" ) || fail "step 1 (run_limits_mergedDepths.sh)"

echo ""
echo ">>> [2/5] the two ribbon 2D plots, WITHOUT --use-cache (fig:exp_lim_vs_epsilon_vol)"
# run_limits_mergedDepths.sh step 3 passes --use-cache, which would redraw the OLD band edges.
# The epsilon grid just changed, so the cache is invalid; these two runs overwrite it.
for Y in epsilon lifetime; do
    echo "    --- yaxis $Y ---"
    # The ctau panel is pinned to 6000 m at the top rather than cropped to the contours; the
    # epsilon panel keeps the auto range. Drop --ymax to go back to auto.
    YOPT=""
    [ "$Y" = "lifetime" ] && YOPT="--ymax 6000"
    ( setup_full && python3 helper_scripts/plotExcludedMassVsEp_2D.py \
        -l "$MERGED" -L "$LT" --band68 --ribbon --yaxis "$Y" $YOPT ) || fail "step 2 (ribbon, yaxis=$Y)"
done

# ================================== 3 =========================================
echo ""
echo ">>> [3/5] per-depth limits + fixed-depth overlay (fig:exp_lim_vs_epsilon)"
( setup_full && bash helper_scripts/run_fixedDepth_limits_v30.sh ) || fail "step 3 (run_fixedDepth_limits_v30.sh)"
( setup_full && python3 helper_scripts/plotExcludedMassVsEp_2D.py \
    -l "$FIXED" -L "$LT" --fixedDepth ) || fail "step 3 (fixedDepth overlay)"

# ================================== 4 =========================================
echo ""
echo ">>> [4/5] low-mass tracker table + sigma-vs-mass (fig:sigma_vs_mass)"
SIG="exp_lim/signal_${MERGED}_tracker_core_lowmass_alpha_max.txt"
( setup_full && python3 helper_scripts/limitRateInputScript.py \
    -d e3 -l "$MERGED" -m core --tag _tracker_core_lowmass \
    --extra-mass 400 --extra-mass 500 --extra-mass 600 --extra-mass 800 \
    --extra-mass 1000 --extra-mass 1200 --extra-mass 1500 --extra-mass 1000000 ) \
    || fail "step 4 (lowmass rate table)"
# -d e3 gives _e3_SR path tokens; the merged work areas are named _mergedDepth_SR.
sed -i 's/_e3_SR/_mergedDepth_SR/g' "$SIG" || fail "step 4 (sed mergedDepth)"
# cmsenv ONLY here -- twoD-env shadows mplhep.
( export SCRAM_ARCH=el8_amd64_gcc12
  source /cvmfs/cms.cern.ch/cmsset_default.sh
  eval "$(scramv1 runtime -sh)"
  python3 helper_scripts/plotSigmaVsMass_CMSstyle.py \
      -s "$SIG" -L "$LT" --extrapolate --extend-fog \
      --name SigmaVsMass_CMSstyle_tracker_core_extrap ) || fail "step 4 (plotSigmaVsMass_CMSstyle)"

# ================================== 5 =========================================
echo ""
echo ">>> [5/5] copying figures into the AN and the Overleaf upload dir"
FIGS=(
  "figures/ExcludedMass_mX_ep_explim_signal_${MERGED}_livetime_20p7_band68_ribbon.pdf"
  "figures/ExcludedMass_mX_ep_explim_signal_${MERGED}_livetime_20p7_band68_ribbon_lifetime.pdf"
  "figures/ExcludedMass_mX_ep_explim_Run3_fixedDepth_livetime_20p7.pdf"
  "figures/SigmaVsMass_CMSstyle_tracker_core_extrap.pdf"
  "exp_lim/signal_${MERGED}_livetime_${LT}_limit/limits_combine_signal_${MERGED}_alpha_max_4e-08.pdf"
)
mkdir -p "$UPLOAD/Figures/7Results"
for f in "${FIGS[@]}"; do
    if [ ! -f "$f" ]; then echo "    MISSING: $f"; fail "step 5 (missing $f)"; fi
    cp -v "$f" "$ANFIG/"                  || fail "step 5 (copy to AN: $f)"
    cp    "$f" "$UPLOAD/Figures/7Results/" || fail "step 5 (copy to upload: $f)"
done

# ------------------------------ verification ----------------------------------
echo ""
echo "=============================================================="
echo " Epsilon grid actually used (check the turn-on is bracketed):"
grep -c . "exp_lim/signal_${MERGED}_alpha_max.eps.txt" | sed 's/^/   points: /'
echo "   values between 1e-8 and 1e-7:"
awk '$1+0 >= 1e-8 && $1+0 <= 1e-7' "exp_lim/signal_${MERGED}_alpha_max.eps.txt" | sed 's/^/     /'
echo ""
echo " First non-empty exclusion window (should NOT be the lowest grid point,"
echo " otherwise the floor is still there and the window needs widening):"
( setup_full && python3 - <<PYEOF
import json, numpy as np
d = json.load(open("exp_lim/signal_${MERGED}_livetime_${LT}_limit/exclusion_limits.json"))
eps = np.array(d['eps'], dtype=float); lo = np.array(d['exp_lim'], dtype=float)
hi  = np.array(d['closed_exp_lim'], dtype=float)
m = lo > 0
if not m.any():
    print("   NO exclusion anywhere -- something is wrong")
else:
    i = int(np.flatnonzero(m)[0])
    print(f"   first window at eps={eps[i]:.4g}: [{lo[i]:.4g}, {hi[i]:.4g}] TeV")
    print(f"   grid point just below it: {eps[i-1]:.4g}" if i else "   (it is the FIRST grid point -- floor likely remains)")
    print(f"   windows at {int(m.sum())} of {len(eps)} epsilon points")
PYEOF
) || echo "   (verification snippet failed, not fatal)"

echo ""
echo " DONE at $(date)"
echo " log: $LOG"
echo "=============================================================="
