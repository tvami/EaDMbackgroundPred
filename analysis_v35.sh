#!/bin/bash
# v35 = v34 signal + bkg MC (hardlinked) + v5.0.11 data (all 2021-2025 eras, Run2026A-D,
# Commissioning2026, 7 HI eras); posTF SR fits (as v34 nominal) and limits at 14.7 months.
# run detached: screen -dmS v35 bash -c './analysis_v35.sh > logs/analysis_v35.log 2>&1'
set -u
cd /home/users/tvami/EarthAsDM/CMSSW_14_1_0_pre4/src || exit 1
P=helper_scripts/prod_skim_hi_20261027
N=/ceph/cms/store/user/tvami/EarthAsDM/Ntuples/Ntuples_v5.0.11_wRNN
H=histograms_for_2DAlphabet_v35
A=rpf1x0pos_Binningv13_Inputv35_mergedDepths_SR_Unblind_all
LT=14.7
LOGS=logs_local_v35_posTF
PYA=/home/users/tvami/EarthAsDM/pylibs/twoD-env-py39-site-packages
fail() { echo "$(date) FAILED: $*"; exit 1; }

export SCRAM_ARCH=el8_amd64_gcc12
source /cvmfs/cms.cern.ch/cmsset_default.sh
eval "$(scramv1 runtime -sh)"
source twoD-env/bin/activate
export PYTHONPATH="${PYTHONPATH:-}:$PYA"

# SR only: VR1/VR2 Data_All are rebuilt with Commissioning2026 by vr_v35.sh before the VR fits
echo "$(date) waiting for the Commissioning2026 SR fix"
until grep -q 'SR FIX DONE' $P/fix_comm2026_sr.log; do sleep 120; done
[ "$(ls $N/Data/sr/matched_muon/2DA/ | grep -c Commissioning2026)" -eq 1 ] || fail "Commissioning2026 sr not in v5.0.11"

# ---- 1. histogram dir ----
if [ ! -f $H/EaDM_Run3_Cosmics_Data_All_SR.root ]; then
  mkdir -p $H/unmerged
  for f in histograms_for_2DAlphabet_v34/*.root; do
    case $(basename $f) in EaDM_Run3_Cosmics_Data_All_*) ;; *) ln -f $f $H/ ;; esac
  done
  for r in sr vr1 vr2; do cp $N/Data/$r/matched_muon/2DA/EaDM_Run3_Cosmics_Data_*.root $H/unmerged/; done
  for R in SR VR1 VR2; do
    hadd -f $H/EaDM_Run3_Cosmics_Data_All_$R.root $H/unmerged/EaDM_Run3_Cosmics_Data_*_$R.root > $H/hadd_$R.log 2>&1 || fail "hadd $R"
  done
fi
echo "$(date) hist dir: $(ls $H/unmerged | wc -l) era files, $(ls $H/*.root | wc -l) top-level files (v34: $(ls histograms_for_2DAlphabet_v34/*.root | wc -l))"

# ---- 2. SR fits, positivity-safe linear TF (v34 nominal recipe) ----
mkdir -p $LOGS
cut -d, -f2 input_2DA_mergedDepths_SR_v34_unblind.txt > $LOGS/signals.txt
run_one() { s=$1; [ -f $A/rpf2x0_$s/$s-1x0_area/done ] && return 0; python3 posTF_single_v35.py $s > $LOGS/$s.log 2>&1; }
export -f run_one; export A LOGS
echo "$(date) fits: $(wc -l < $LOGS/signals.txt) signals, 6 at a time"
xargs -P 6 -I{} bash -c 'run_one {}' < $LOGS/signals.txt
nd=$(ls $A/rpf2x0_*/*-1x0_area/done 2>/dev/null | wc -l)
echo "$(date) fits done: $nd / $(wc -l < $LOGS/signals.txt)"
[ $nd -eq $(wc -l < $LOGS/signals.txt) ] || fail "only $nd fits finished, see $LOGS"

# ---- 3. limits (core angular reweighting on, observed) ----
# -x: the merged grid reaches below the e3 grid (README "Limits"), as in v34
./run_limits_mergedDepths.sh -d $A -t 1x0 -m $LT --unblind --no-plot -x "400 500 600 800 1000 1200 1500 1800" >$LOGS/run_limits.log 2>&1 || fail "run_limits_mergedDepths.sh"
echo "$(date) limits done"

# ---- 4. 2D exclusion plots (no --use-cache: first draw) ----
python3 helper_scripts/plotExcludedMassVsEp_2D.py -l $A -L $LT --band68 --ribbon --yaxis epsilon > $LOGS/plot2d_eps.log 2>&1 || fail "2D eps plot"
python3 helper_scripts/plotExcludedMassVsEp_2D.py -l $A -L $LT --band68 --ribbon --yaxis lifetime --ymax 6000 > $LOGS/plot2d_ctau.log 2>&1 || fail "2D ctau plot"
echo "$(date) ANALYSIS V35 DONE"
