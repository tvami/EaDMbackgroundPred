#!/bin/bash
# Paper Figs 3, 4, 7 with the nominal (plateau) and power-law efficiency extrapolation above 180 TeV.
# Run inside cmssw-el8 -B /ceph. Outputs to cwr_eff_1pev/out/figN_{nom,pl}.
W=/ceph/cms/store/user/tvami/EarthAsDM/work; O=$W/cwr_eff_1pev/out; L=$W/cwr_eff_1pev/logs
A=rpf1x0pos_Binningv13_Inputv35_mergedDepths_SR_Unblind_all
cd /home/users/tvami/EarthAsDM/CMSSW_14_1_0_pre4/src
source /cvmfs/cms.cern.ch/cmsset_default.sh && eval `scramv1 runtime -sh` && source twoD-env/bin/activate
export PYTHONPATH=$PYTHONPATH:/home/users/tvami/EarthAsDM/pylibs/twoD-env-py39-site-packages
for v in nom pl; do
  T=$([ $v = nom ] && echo HN || echo HN_effPL)
  python3 helper_scripts/plotSigmaVsMass_CMSstyle.py -s exp_lim/signal_${A}_${T}_tracker_core_lowmass_alpha_max.txt -L 14.9 \
    --dd-mass-cut 100 --dd-show-all --observed --cms-label Preliminary --lumi-unit months \
    --ylabel '$\sigma^{\mathrm{SI}}_{\chi p}$ [cm$^2$]' --proton-only -o $O/fig4_$v --name fig4 > $L/fig4_$v.log 2>&1; echo fig4 $v $?
  V=$([ $v = nom ] && echo effNOM || echo effPL)
  python3 helper_scripts/plotExcludedMassVsEp_2D.py -l ${A}_HN_$V -L 14.9 \
    --band68 --ribbon --yaxis epsilon --cms-label Preliminary --bd-overlay --no-sn --lumi-unit months \
    --xmin 2000 --alpha-label CMB --outdir $O/fig7_$v > $L/fig7_$v.log 2>&1; echo fig7 $v $?
done
cd $W/arc3_epsma/scripts
export PYTHONPATH=$PYTHONPATH:/home/users/tvami/EarthAsDM/CMSSW_14_1_0_pre4/venv/el8_amd64_gcc12/lib/python3.9/site-packages
for v in nom pl; do
  V=$([ $v = nom ] && echo effNOM || echo effPL)
  export EPSMA_LIMITDIR=/home/users/tvami/EarthAsDM/CMSSW_14_1_0_pre4/src/${A}_HN EPSMA_SUFFIX=_HN_$V EPSMA_OUTTAG=_alphaCMB EPSMA_ALPHA_LABEL=CMB EPSMA_EFF=$v
  python3 build_grid.py 10000 100000 1000000 > $L/fig3_grid_$v.log 2>&1; echo grid $v $?
  EPSMA_ZOOM=1 python3 plot_epsma.py 10000 100000 1000000 > $L/fig3_$v.log 2>&1; echo fig3 $v $?
done
