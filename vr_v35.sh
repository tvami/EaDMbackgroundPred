#!/bin/bash
# v35 VR1/VR2 validation fits (same scripts as v34), after analysis_v35.sh's SR limits and once
# Commissioning2026 VR1/VR2 are in v5.0.11 (rebuilds those two Data_All files first)
cd /home/users/tvami/EarthAsDM/CMSSW_14_1_0_pre4/src || exit 1
P=helper_scripts/prod_skim_hi_20261027
N=/ceph/cms/store/user/tvami/EarthAsDM/Ntuples/Ntuples_v5.0.11_wRNN
H=histograms_for_2DAlphabet_v35
export SCRAM_ARCH=el8_amd64_gcc12
source /cvmfs/cms.cern.ch/cmsset_default.sh
eval "$(scramv1 runtime -sh)"
source twoD-env/bin/activate
until grep -q -E 'limits done|FAILED' logs/analysis_v35.log; do sleep 120; done
grep -q FAILED logs/analysis_v35.log && { echo "analysis_v35 failed, not running VRs"; exit 1; }
until grep -q 'CHAIN DONE' $P/chain_comm2026.log; do sleep 120; done
for r in vr1 vr2; do
  R=$(echo $r | tr a-z A-Z)
  f=$N/Data/$r/matched_muon/2DA/EaDM_Run3_Cosmics_Data_Commissioning2026v1_$R.root
  [ -f $f ] || { echo "MISSING $f"; exit 1; }
  cp $f $H/unmerged/
  hadd -f $H/EaDM_Run3_Cosmics_Data_All_$R.root $H/unmerged/EaDM_Run3_Cosmics_Data_*_$R.root > $H/hadd_$R.log 2>&1 || { echo "hadd $R failed"; exit 1; }
  echo "$(date) $R Data_All rebuilt from $(ls $H/unmerged/*_$R.root | wc -l) eras"
done
python3 runWith1DVanilla_v35_VR1_M3000GeV_e4.py rpfmult_Binningv13_Inputv35_VR1_M3000GeV_e4 > logs_run_v35_VR1.log 2>&1; echo "$(date) VR1 exit $?"
python3 runWith1DVanilla_v35_VR2_M3000GeV_e4.py rpfmult_Binningv9alt_Inputv35_VR2_M3000GeV_e4 > logs_run_v35_VR2.log 2>&1; echo "$(date) VR2 exit $?"
echo "$(date) VR V35 DONE"
