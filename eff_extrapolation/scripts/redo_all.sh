#!/bin/bash
# Full power-law comparison chain (slope from the 20-180 TeV fit). Run inside cmssw-el8 -B /ceph.
W=/ceph/cms/store/user/tvami/EarthAsDM/work; S=/home/users/tvami/EarthAsDM/CMSSW_14_1_0_pre4/src; L=$W/cwr_eff_1pev/logs
A=rpf1x0pos_Binningv13_Inputv35_mergedDepths_SR_Unblind_all
cd $S && eval `scram runtime -sh`
python3 -u $W/cwr_eff_1pev/scripts/plot_eff_1pev.py > $L/plot.log 2>&1; echo eff $?
python3 $W/cwr_eff_1pev/scripts/make_pl_tables.py; echo tables $?
bash $W/cwr_eff_1pev/scripts/fig6_pl.sh > $L/fig6_pl.log 2>&1; echo fig6 $?
cp $S/hybridnew_v35/figures_HN_tau0/fig6_effpowerlaw/exclusion_limits.json $S/exp_lim/signal_${A}_HN_effPL_livetime_14.9_limit/; echo json $?
bash $W/cwr_eff_1pev/scripts/run_compare.sh
bash -c "cd $S && source /cvmfs/cms.cern.ch/cmsset_default.sh && eval \`scramv1 runtime -sh\` && source twoD-env/bin/activate && export PYTHONPATH=\$PYTHONPATH:/home/users/tvami/EarthAsDM/pylibs/twoD-env-py39-site-packages && python3 $W/cwr_eff_1pev/scripts/dump_fig4.py" > $L/dump_fig4.log 2>&1; echo dump4 $?
cd $S && eval `scram runtime -sh` && python3 -u $W/cwr_eff_1pev/scripts/plot_overlays.py > $L/overlays.log 2>&1; echo overlays $?
