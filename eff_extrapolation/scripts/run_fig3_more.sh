# Fig. 3 grids at more DM masses above 180 TeV, plateau (nom) and power law (pl); run inside cmssw-el8 -B /ceph
W=/ceph/cms/store/user/tvami/EarthAsDM/work; L=$W/cwr_eff_1pev/logs; A=rpf1x0pos_Binningv13_Inputv35_mergedDepths_SR_Unblind_all
cd $W/arc3_epsma/scripts && source env.sh
for v in nom pl; do
  V=$([ $v = nom ] && echo effNOM || echo effPL)
  export EPSMA_LIMITDIR=/home/users/tvami/EarthAsDM/CMSSW_14_1_0_pre4/src/${A}_HN EPSMA_SUFFIX=_HN_$V EPSMA_EFF=$v
  python3 build_grid.py 200000 300000 500000 > $L/fig3_more_$v.log 2>&1; echo grid $v $?
done
