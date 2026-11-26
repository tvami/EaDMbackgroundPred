#!/bin/bash
# End-to-end v35 limit chain on a parallel area with replaced limit files (paper Figs 2-5 + numbers).
#   ./run_hn_chain.sh [HN|ASV] [CSV]
#     HN  : HybridNew limits from the CSV (default hn_v2_limits_own.csv)
#     ASV : production asymptotic values through the same writer; must reproduce the paper exactly
# Nothing in the production area or the production exp_lim/signal_<A>_* outputs is touched:
# every output carries the <A>_<TAG> name, figures go to hybridnew_v35/figures_<TAG>/.
# Rates are NOT regenerated: the production rate tables (main, _tracker_core_lowmass, _angfloat,
# with their eps sidecars) are copied with only the area path in line 1 rewritten, so rates,
# core angular reweighting and the eps grid are identical by construction.
set -u
TAG=${1:-HN}
HERE=$(cd "$(dirname "$0")" && pwd)
CSV=${2:-$HERE/hn_v2_limits_own.csv}
SRC=/home/users/tvami/EarthAsDM/CMSSW_14_1_0_pre4/src
A=rpf1x0pos_Binningv13_Inputv35_mergedDepths_SR_Unblind_all
AT=${A}_$TAG
LT=14.9
OUT=$HERE/figures_$TAG
LOG=$HERE/logs_$TAG
PYA=/home/users/smasanam/EarthAsDMProject/CMSSW_14_1_0_pre5/src/twoD-env/lib/python3.9/site-packages
fail() { echo "$(date) FAILED: $*"; exit 1; }

cd $SRC || exit 1
export SCRAM_ARCH=el8_amd64_gcc12
source /cvmfs/cms.cern.ch/cmsset_default.sh
eval "$(scramv1 runtime -sh)"
source twoD-env/bin/activate
export PYTHONPATH="${PYTHONPATH:-}:$PYA"
mkdir -p $OUT $LOG $LOG/scratch

# ---- 1. parallel area ----
bash $HERE/make_hn_area.sh $TAG "$CSV" > $LOG/make_area.log 2>&1 || fail "make_hn_area.sh (see $LOG/make_area.log)"
grep -E "FLAG|WARNING|area " $LOG/make_area.log

# ---- 2. rate tables: production copies, area path rewritten ----
for s in "" _tracker_core_lowmass _angfloat; do
  sed "1s#\(^\|,\)$A/#\1$AT/#g" exp_lim/signal_${A}${s}_alpha_max.txt > exp_lim/signal_${AT}${s}_alpha_max.txt
  cp exp_lim/signal_${A}${s}_alpha_max.eps.txt exp_lim/signal_${AT}${s}_alpha_max.eps.txt
  cmp <(tail -n +2 exp_lim/signal_${A}${s}_alpha_max.txt) <(tail -n +2 exp_lim/signal_${AT}${s}_alpha_max.txt) || fail "rate rows differ ($s)"
  [ "$(head -1 exp_lim/signal_${AT}${s}_alpha_max.txt | tr ',' '\n' | grep -vc "^$AT/")" -eq 0 ] || fail "path rewrite ($s)"
done

# ---- 3. 1D limits + exclusion JSON, paper cosmetics (Fig 2) ----
D=exp_lim/signal_${AT}_livetime_${LT}_limit
rm -rf $D
python3 exp_lim/set_limit_alphaMax.py --single -L "Run 3 Cosmics" --outdir $D \
  -s exp_lim/signal_${AT}_alpha_max.txt -l $LT --cmsLabel Preliminary --unblind -o "" --noCrossingLines \
  --extraTextPosX 0.38 --lumiUnit months --xTitle "m_{#chi} [TeV]" --thLegend "Predicted DM-induced muon rate" \
  --paveTextSize 0.042 --paveBox 0.53,0.455,0.94,0.595 --legendFont 42 --legendTextSize 0.037 \
  --legendBox 0.42,0.605,0.93,0.89 --legendMargin 0.17 > $LOG/lim1d.log 2>&1 || fail "set_limit_alphaMax (main)"
cp $D/limits_combine_signal_${AT}_alpha_max_4e-08.pdf $D/limits_combine_signal_${AT}_alpha_max_4e-08.png $OUT/

# ---- 4. floating model (as production: plain options, observed) ----
DF=exp_lim/signal_${AT}_angfloat_livetime_${LT}_limit
rm -rf $DF
python3 exp_lim/set_limit_alphaMax.py --single -L "Run 3 Cosmics" --outdir $DF \
  -s exp_lim/signal_${AT}_angfloat_alpha_max.txt -l $LT --unblind > $LOG/float.log 2>&1 || fail "set_limit_alphaMax (floating)"

# ---- 5. 2D planes (Figs 4/5): fresh run writes the band-edge cache (production options),
#         then the paper command with --use-cache redraws from it ----
python3 helper_scripts/plotExcludedMassVsEp_2D.py -l $AT -L $LT --band68 --ribbon --yaxis epsilon \
  --outdir $LOG/scratch > $LOG/plot2d_eps_fresh.log 2>&1 || fail "2D eps (fresh)"
python3 helper_scripts/plotExcludedMassVsEp_2D.py -l $AT -L $LT --band68 --ribbon --yaxis lifetime --ymax 6000 \
  --outdir $LOG/scratch > $LOG/plot2d_ctau_fresh.log 2>&1 || fail "2D ctau (fresh)"
python3 helper_scripts/plotExcludedMassVsEp_2D.py -l $AT -L $LT --band68 --ribbon --yaxis epsilon \
  --cms-label Preliminary --bd-overlay --use-cache --lumi-unit months --xmin 2000 --outdir $OUT \
  > $LOG/plot2d_eps.log 2>&1 || fail "2D eps (paper)"
python3 helper_scripts/plotExcludedMassVsEp_2D.py -l $AT -L $LT --band68 --ribbon --yaxis lifetime --ymax 6000 \
  --cms-label Preliminary --bd-overlay --use-cache --lumi-unit months --xmin 2000 --outdir $OUT \
  > $LOG/plot2d_ctau.log 2>&1 || fail "2D ctau (paper)"

# ---- 6. sigma_chi_p recast (Fig 3); twoD-env shadows mplhep, so cmsenv + PYA only ----
( deactivate
  python3 helper_scripts/plotSigmaVsMass_CMSstyle.py -s exp_lim/signal_${AT}_tracker_core_lowmass_alpha_max.txt \
    -L $LT --dd-mass-cut 100 --dd-show-all --observed --cms-label Preliminary --lumi-unit months \
    --ylabel '$\sigma^{\mathrm{SI}}_{\chi p}$ [cm$^2$]' --proton-only -o $OUT \
    --name SigmaVsMass_CMSstyle_tracker_core_v35_ddmarked_unblinded_posTF_$TAG ) > $LOG/sigma.log 2>&1 || fail "sigma recast"

# ---- 7. numbers ----
python3 $HERE/summarize_hn.py $AT $LT $LOG/sigma.log 2>/dev/null | tee $OUT/summary_$TAG.txt
[ -f $LOG/make_area.log ] && grep -q FLAG $LOG/make_area.log && \
  echo "NOTE: $(grep FLAG $LOG/make_area.log)" | tee -a $OUT/summary_$TAG.txt
echo "$(date) chain $TAG done; figures in $OUT"
ls $OUT
