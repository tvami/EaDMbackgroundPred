#!/bin/bash
# The AN's 7Results figures are NOT the plain ExcludedMass_* that
# make_limit_pdfs_Binningv13_Inputv30_SR_Blind.sh writes. 7Results.tex references the
# --band68 --ribbon variants (epsilon and lifetime y-axes) and the --fixedDepth overlay,
# which that script never generates. This fills the gap.
#
# Reads cached results only (exclusion_limits.json / combine root files) -- no combine re-run.
# Run AFTER the chain's limits step has written
#   exp_lim/signal_rpf2x0_Binningv13_Inputv30_SR_Blind_livetime_20.7_limit/exclusion_limits.json
# Run from CMSSW_14_1_0_pre4/src with cmsenv active.
set -e
cd "$(dirname "$0")/.."   # -> CMSSW_14_1_0_pre4/src

LIMITDIR=rpf2x0_Binningv13_Inputv30_SR_Blind
LIVETIME=20.7

# Borrow pyarrow (parquet reader) from smasanam's pre5 env; twoD-env has none. Same py3.9.
PYA=/home/users/smasanam/EarthAsDMProject/CMSSW_14_1_0_pre5/src/twoD-env/lib/python3.9/site-packages
export PYTHONPATH=$PYA:$PYTHONPATH

# figures/ExcludedMass_..._livetime_20.7_band68_ribbon{,_lifetime}.pdf -- 7Results.tex fig 2
python3 helper_scripts/plotExcludedMassVsEp_2D.py -l ${LIMITDIR} -L ${LIVETIME} --band68 --ribbon
python3 helper_scripts/plotExcludedMassVsEp_2D.py -l ${LIMITDIR} -L ${LIVETIME} --band68 --ribbon --yaxis lifetime

echo "== ribbon variants done; now the fixed-depth overlay =="
# The overlay reads the per-depth exclusion_limits.json written by run_fixedDepth_limits_v30.sh,
# so that has to have run first. The output filename carries no Input version token:
# figures/ExcludedMass_mX_ep_explim_Run3_fixedDepth_livetime_20.7.pdf
python3 helper_scripts/plotExcludedMassVsEp_2D.py -l ${LIMITDIR} -L ${LIVETIME} --fixedDepth

echo "== all extra limit PDFs written to figures/ =="
