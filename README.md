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

## Example running (NOTE: Use same X, Y, - between all scripts)
```
python3 runWith1DVanilla_vY_-R.py rpf1x0_BinningvX_InputvY_-R_Unblind config_BinningvX_InputvY_-R_Unblind.json
```

## Histogram Versions

- v0: Cosmic MC
  - VR: cut on pT [10,inf)
- v0 with Binningv5: Cosmic MC
  - VR: cuts on pT [50,inf], eta [-0.9,0.9], nTracks [1,2]
    - VR syst: t0, pT, signal yield (5%)
  - SR: cuts on pT [10,inf], eta [-0.9,0.9], nTracks [1,2]
    - SR syst: t0, pT, signal yield (5%)
- v1: 2023Dv1 Cosmics
  - VR: cut on pT [10,inf)
  - SR: cuts on pT [10,400], eta [-0.9,0.9], nTracks [1,2]
    - SR syst: t0, pT, signal yield (1.6%)
- v2: 2023Dv2 Cosmics
  - VR: cut on pT [10,inf)
- v3: 2023Dv1+v2 Cosmics
  - VR: cut on pT [10,inf)
  - SR: cuts on pT [10,400], eta [-0.9,0.9], nTracks [1,2]
    - SR syst: t0, pT, signal yield (1.6%)
- v4: 2023Dv1+v2 Cosmics
  - VR: cuts on pT [100,inf], eta [-0.9,0.9], nTracks [1,2]
    - VR syst: t0, pT, signal yield (0.1% - tried removing but got segmentation error during limit calculation)
  - SR: cuts on pT [100,440], eta [-0.9,0.9], nTracks [1,2]
    - SR syst: t0, pT, signal yield (0.1% nomial; 5% for rpfmult dir)
- v5: skipped
- v6: 2023Dv1+v2 Cosmics (New CR/VR/SR definitions - [0,0.15), [0.15,0.3), [0.3,1] respectively)
  - VR: cuts on pT [50,inf], eta [-0.9,0.9], nTracks [1,2]
    - VR syst: t0, pT, signal yield (0.1%)
  - SR: cuts on pT [10,inf], eta [-0.9,0.9], nTracks [1,2]
    - SR syst: t0, pT, signal yield (0.1%)
- v7: Cosmics MC with CR/VR/SR definitions - [0,0.45),[0.45,0.9],[0.9,1]
- v8: 2023D Cosmics with CR/VR/SR - [0,0.45),[0.45,0.9],[0.9,1]
- v9: Run 3 Cosmics
