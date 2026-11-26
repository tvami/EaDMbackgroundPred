W=/ceph/cms/store/user/tvami/EarthAsDM/work; O=$W/cwr_eff_1pev/out; L=$W/cwr_eff_1pev/logs
A=rpf1x0pos_Binningv13_Inputv35_mergedDepths_SR_Unblind_all
cd /home/users/tvami/EarthAsDM/CMSSW_14_1_0_pre4/src
source /cvmfs/cms.cern.ch/cmsset_default.sh && eval `scramv1 runtime -sh` && source twoD-env/bin/activate
export PYTHONPATH=$PYTHONPATH:/home/users/tvami/EarthAsDM/pylibs/twoD-env-py39-site-packages
for v in nom pl; do
  V=$([ $v = nom ] && echo effNOM || echo effPL)
  mkdir -p $O/fig7_$v
  python3 helper_scripts/plotExcludedMassVsEp_2D.py -l ${A}_HN_$V -L 14.9 \
    --band68 --ribbon --yaxis epsilon --cms-label Preliminary --bd-overlay --no-sn --lumi-unit months \
    --xmin 2000 --alpha-label CMB --outdir $O/fig7_$v > $L/fig7_$v.log 2>&1; echo fig7 $v $?
done
