#!/bin/bash
# run_point.sh <card> <r> <seed> [ntoys]: one HybridNew LHC-limits grid point (main-result options), toys saved
C=$1; R=$2; S=$3; NT=${4:-2500}
O=/ceph/cms/store/user/tvami/EarthAsDM/work/arc4_appB_hn
mkdir -p $O/grids/$C && cd $O/grids/$C
combine -d $O/cards/$C.root -M HybridNew --LHCmode LHC-limits --clsAcc 0 --fullBToys -T $NT --singlePoint $R -s $S \
  --saveHybridResult -m 120 --cminDefaultMinimizerStrategy 0 --cminFallbackAlgo Minuit2,Migrad,1:0.1 \
  --cminFallbackAlgo Minuit2,Simplex,0:0.1 --X-rtd MINIMIZER_freezeDisassociatedParams --setParameterRanges r=0,60 \
  -n .$C.r$R > log.r$R.s$S 2>&1 || echo "FAIL $C $R $S"
