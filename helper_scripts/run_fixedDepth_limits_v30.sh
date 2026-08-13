#!/bin/bash
# Produce per-depth (fixed-depth) exclusion_limits.json for the fixedDepth overlay.
# limitRateInputScript.py writes the SAME signal_<dir>_alpha_max.txt regardless of
# depth (only the paths inside carry the _e<N> token), so we must generate -> run
# one depth at a time, then restore the e0 default at the end.
set -e
DIR=rpf2x0_Binningv13_Inputv30_SR_Blind
LT=20.7
INPUT=exp_lim/signal_${DIR}_alpha_max.txt

for d in e0 e2 e3 e4 e5 e6; do
  echo "=================== depth $d ==================="
  python3 helper_scripts/limitRateInputScript.py -d $d -l "$DIR" -m core
  OUT=exp_lim/signal_${DIR}_livetime_${LT}_${d}_fixedDepth_limit
  python3 exp_lim/set_limit_alphaMax.py --single \
      -L "Run 3 Cosmics" --outdir "$OUT" -s "$INPUT" -l "$LT" \
      > /tmp/fixedDepth_${d}.log 2>&1
  grep -E "Wrote exclusion" /tmp/fixedDepth_${d}.log || echo "  (no JSON written for $d)"
done

# Restore the default (e0) input so the volume pipeline still works.
python3 helper_scripts/limitRateInputScript.py -d e0 -l "$DIR" -m core >/dev/null 2>&1
echo "=================== done; e0 input restored ==================="
