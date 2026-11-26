# Fig. 3 grids + plots for the plateau (nom) and power-law (pl) extrapolation; run inside cmssw-el8 -B /ceph
W=/ceph/cms/store/user/tvami/EarthAsDM/work; L=$W/cwr_eff_1pev/logs; A=rpf1x0pos_Binningv13_Inputv35_mergedDepths_SR_Unblind_all
cd $W/arc3_epsma/scripts && source env.sh
for v in nom pl; do
  V=$([ $v = nom ] && echo effNOM || echo effPL)
  export EPSMA_LIMITDIR=/home/users/tvami/EarthAsDM/CMSSW_14_1_0_pre4/src/${A}_HN EPSMA_SUFFIX=_HN_$V EPSMA_OUTTAG=_alphaCMB EPSMA_ALPHA_LABEL=CMB EPSMA_EFF=$v
  python3 build_grid.py 10000 100000 1000000 > $L/fig3_grid_$v.log 2>&1; echo grid $v $?
  EPSMA_ZOOM=1 python3 plot_epsma.py 10000 100000 1000000 > $L/fig3_$v.log 2>&1; echo fig3 $v $?
done
