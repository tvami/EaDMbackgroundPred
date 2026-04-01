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
- v10: Cosmic MC with RNN cut at 0.9
- v11: 2023D Cosmics with CR/VR/SR - [0,0.45),[0.45,0.9999],[0.9999,1]
- v12: Run 3 Cosmics with CR/VR/SR - [0,0.45),[0.45,0.9999],[0.9999,1]
- v13: Run 3 Cosmics with CR/VR/SR - [0,0.45),[0.45,0.9999],[0.9999,1] w/ chi2/ndof cut at 35
- v14: Run 3 Cosmics with CR/VR/SR - [0,0.45),[0.45,0.9999],[0.9999,1] w/ chi2/ndof cut at 35 & high mass points
- v15: 2023D Cosmics w/ max chi2/ndof cut at 35 & high mass points
- v16: 2023D Cosmics w/ min chi2/ndof cut at 7 & high mass points
- v17: ...
- v18: Cosmic MC w/ skimmed ntuples v4.0.7
- v19: 2023D Cosmics w/ skimmed ntuples v4.0.7
- v20: Run 3 Cosmics w/ skimmed ntuples v4.0.7
- v21: Run-3 Cosmics w/ skimmed ntuples v4.0.9

## Running on condor
```
./submit_2DA_SR.sh
```

This will make the inputs using the `generate_condor_inputs.py` file: 
 - `input_2DA_SR.txt`: contains binning / SR / blind specific template JSON, called `config_Binningv7_InputTemplate_SR_Blind.json`, the mass point and the TF
 - `condor_2DA_SR.cfg` quees from `input_2DA_SR.txt` to condor, note the directory name is hardcoded here, e.g. `rpf2x0_Binningv7_Inputv21_SR`
- Condor then will run `run_2DA_SR_batch.sh`, note the directory name is hardcoded here too, e.g. `rpf2x0_Binningv7_Inputv21_SR` together wtih `histograms_for_2DAlphabet_v21`, this sets up the env in the condor node, and runs run_single_signal_2DA.py
- `run_single_signal_2DA.py` is a templated single signal running version  