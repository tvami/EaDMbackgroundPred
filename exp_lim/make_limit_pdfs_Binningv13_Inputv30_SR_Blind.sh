#!/bin/bash
# Re-make the exclusion / limits_combine plots for the v28 blinded SR as PDF (+ PNG).
# Both steps only READ cached results (combine AsymptoticLimits root files / exclusion_limits.json),
# so this is a fast re-plot -- no combine re-run.
# Run from CMSSW_14_1_0_pre4/src with cmsenv active (ROOT on PATH).
set -e
cd "$(dirname "$0")/.."   # -> CMSSW_14_1_0_pre4/src

LIMITDIR=rpf2x0_Binningv13_Inputv30_SR_Blind
LIVETIME=20.7

# Borrow pyarrow (parquet reader) from smasanam's pre5 env; twoD-env has none. Same py3.9.
PYA=/home/users/smasanam/EarthAsDMProject/CMSSW_14_1_0_pre5/src/twoD-env/lib/python3.9/site-packages
export PYTHONPATH=$PYA:$PYTHONPATH

# -- Step 2: limits_combine_..._alpha_max_<eps> plots (PDF + PNG for every alpha_max label,
#            including limits_combine_..._alpha_max_3.4e-08). Line 634 of the script saves .pdf.
python3 exp_lim/set_limit_alphaMax.py \
    -L "Run 3 Cosmics" \
    --outdir exp_lim/signal_${LIMITDIR}_livetime_${LIVETIME}_limit \
    -s exp_lim/signal_${LIMITDIR}_alpha_max.txt \
    -l ${LIVETIME}

# -- Step 3: ExcludedMass exclusion plots (reads exclusion_limits.json written by step 2).
#            epsilon (default) and lifetime (ctau) y-axis variants; the lifetime one is
#            written with a _lifetime filename suffix so it does not overwrite the epsilon plot.
python3 helper_scripts/plotExcludedMassVsEp_2D.py -l ${LIMITDIR} -L ${LIVETIME}
python3 helper_scripts/plotExcludedMassVsEp_2D.py -l ${LIMITDIR} -L ${LIVETIME} --yaxis lifetime
