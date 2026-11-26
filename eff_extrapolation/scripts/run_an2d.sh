# AN 2D exclusion variants with the power-law efficiency extrapolation; run inside cmssw-el8 -B /ceph
W=/ceph/cms/store/user/tvami/EarthAsDM/work; L=$W/cwr_eff_1pev/logs; O=$W/cwr_eff_1pev/out/an2d
A=rpf1x0pos_Binningv13_Inputv35_mergedDepths_SR_Unblind_all; AT=${A}_HN_effPL; LT=14.9
cd /home/users/tvami/EarthAsDM/CMSSW_14_1_0_pre4/src
source /cvmfs/cms.cern.ch/cmsset_default.sh && eval `scramv1 runtime -sh` && source twoD-env/bin/activate
export PYTHONPATH=$PYTHONPATH:/home/users/tvami/EarthAsDM/pylibs/twoD-env-py39-site-packages
mkdir -p $O
P="python3 helper_scripts/plotExcludedMassVsEp_2D.py -l $AT -L $LT --band68 --ribbon"
$P --yaxis epsilon --cms-label Preliminary --lumi-unit months --xmin 2000 --outdir $O > $L/an2d_eps.log 2>&1; echo eps $?
$P --yaxis epsilon --cms-label Preliminary --lumi-unit months --xmin 2000 --bd-overlay --outdir $O > $L/an2d_eps_bd.log 2>&1; echo eps_bd $?
$P --yaxis lifetime --ymax 6000 --tau0 7.53e-22 --cms-label Preliminary --lumi-unit months --xmin 2000 --outdir $O > $L/an2d_ctau.log 2>&1; echo ctau $?
$P --yaxis lifetime --ymax 6000 --tau0 7.53e-22 --cms-label Preliminary --lumi-unit months --xmin 2000 --bd-overlay --outdir $O > $L/an2d_ctau_bd.log 2>&1; echo ctau_bd $?
ls $O
