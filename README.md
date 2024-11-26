# 2DAlphabet for Earth as DM search

## Set up
```
cmsrel CMSSW_14_1_0_pre4
cd CMSSW_14_1_0_pre4/src
cmsenv
git clone git@github.com:tvami/EaDMbackgroundPred.git .
git clone https://github.com/cms-analysis/HiggsAnalysis-CombinedLimit.git HiggsAnalysis/CombinedLimit
cd HiggsAnalysis/CombinedLimit
git fetch origin
git checkout v10.0.1
cd ../..
scram b -j
```

## Set up the enviroment (only once)
```
python3 -m virtualenv twoD-env
source twoD-env/bin/activate
cd 2DAlphabet
python3 setup.py develop
cd ..
```

## Use the enviroment 
```
cd /path/to/CMSSW_14_1_0_pre4/src
cmsenv
source twoD-env/bin/activate
```

## Example running (NOTE: Use same X & - between all scripts)
```
python3 runWith1DVanilla_vX_-R.py rpf1x0_Binningv1_InputvX_-R_Unblind config_Binningv1_InputvX_-R_Unblind.json
```

## Histogram Versions

- v0: Cosmic MC - 10 GeV pT cut
- v1: 2023Dv1 Cosmics - 10 GeV pT cut
- v2: 2023Dv2 Cosmics - 10 GeV pT cut
- v3: 2023Dv1+v2 Cosmics - 10 GeV pT cut
