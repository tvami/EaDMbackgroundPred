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


## Region description
- SR (Signal Region): pT > 200 GeV, RNNScore >= 0.9999
- VR1 (Validation Region 1): pT > 200 GeV, 0.45 <= RNNScore < 0.9999
- VR2 (Validation Region 2): pT < 200 GeV, RNNScore >= 0.9999

## Complete Analysis Pipeline

### 1. Generate Input Dataset List
Create the input list of raw ntuple directories for skimming.

```bash
cd helper_scripts
./make_input_list.sh matched_muon
# Or for other collections:
# ./make_input_list.sh muon
# ./make_input_list.sh track
# ./make_input_list.sh tuneP
```

**What it does:**
- Scans base directories for raw ntuples:
  - `/ceph/cms/store/user/tvami/EarthAsDM`
  - `/ceph/cms/store/user/tvami/EarthAsDM/ExpressCosmics`
  - `/ceph/cms/store/user/tvami/EarthAsDM/Cosmics`
- Creates entries for each region (sr, vr1, vr2) and each dataset directory
- Outputs: `input_cosmics_datasets_{collection}.txt`
- Format: `object region directory_path`

**Output example:**
```
matched_muon sr /ceph/cms/store/user/tvami/EarthAsDM/Dataset1
matched_muon vr1 /ceph/cms/store/user/tvami/EarthAsDM/Dataset1
matched_muon vr2 /ceph/cms/store/user/tvami/EarthAsDM/Dataset1
...
```

### 2. Skim Raw Ntuples
Creates skimmed ROOT files with preselection cuts applied.

**For local testing:**
```bash
cd helper_scripts
root -l -b -q 'skim_ntuples.C("matched_muon", "sr", "/path/to/raw/ntuples/")'
root -l -b -q 'skim_ntuples.C("matched_muon", "vr1", "/path/to/raw/ntuples/")'
root -l -b -q 'skim_ntuples.C("matched_muon", "vr2", "/path/to/raw/ntuples/")'
```

**For batch/condor submission:**
- Uses `run_skim_batch.sh` as the wrapper script
- Submit via condor with parameters: `object`, `region`, `base_dir`
```bash
condor_submit condor_skim.cfg
```

**Output:** `skimmed_{collection}_{region}_{dataset}.root` files

### 4. Organize Skimmed Files (optional)
```bash
cd helper_scripts
./organizeNtuples.sh
```
This moves files from current directory into the proper directory structure:
```
/home/users/tvami/EarthAsDM/Ntuples_v4.0.9/
├── Data/
│   ├── sr/matched_muon/
│   ├── vr1/matched_muon/
│   └── vr2/matched_muon/
├── Signal/
│   ├── sr/matched_muon/
│   ├── vr1/matched_muon/
│   └── vr2/matched_muon/
└── BkgMC/...
```

### 5. Generate Input List for Processing
```bash
cd helper_scripts
python3 generate_input_ntuple_list.py \
    -d /ceph/cms/store/user/tvami/EarthAsDM/Ntuples/Ntuples_v4.0.9 \
    -o input_ntuples_v4.0.9.txt \
    -c matched_muon \
    -T Both
```

**What it does:**
- Scans directory structure for ROOT files
- Creates entries for each region (sr, vr1, vr2)
- Output format: `file_path, version, sample_type, region, collection, run_type`

### 6. Process Skimmed Ntuples
Add RNN scores and create 2DAlphabet input histograms.

**For local testing:**
```bash
cd helper_scripts
python3 skimmed_ntuple_processing_script.py \
    -i /path/to/skimmed_file.root \
    -n 4.0.9 \
    -s Data \
    -r sr \
    -c matched_muon \
    -T Both
```

**For batch/condor submission:**
- Uses `run_ntuple_processing_batch.sh` as wrapper
- Input list: `input_ntuples_v4.0.9.txt`
- Submit jobs for each region (sr, vr1, vr2)
```bash
condor_submit condor_ntuple_processing.cfg
```

**Output:**
- RNN-scored files: `./output/{sample_type}/{region}/{collection}/*.root`
- 2DAlphabet inputs: `./output/{sample_type}/{region}/{collection}/2DA/EaDM_*_{REGION}.root`

### 7. Run 2DAlphabet (statistical analysis)

```bash
cd /home/users/tvami/EarthAsDM/CMSSW_14_1_0_pre4/src
cmsenv
source twoD-env/bin/activate

# Submit for each region:
./submit_2DA_SR.sh
./submit_2DA_VR1.sh
./submit_2DA_VR2.sh
```

## Region-Specific Details

| Region | pT Cut | RNN Score Cut | Use Case |
|--------|--------|---------------|----------|
| **SR** | > 200 GeV | ≥ 0.9999 | Signal region for limit setting |
| **VR1** | > 200 GeV | 0.45 - 0.9999 | Validation region (intermediate scores) |
| **VR2** | < 200 GeV | ≥ 0.9999 | Validation region (low pT, signal-like) |

## Output Files Produced

1. **Skimmed ntuples:** `skimmed_matched_muon_{region}_*.root`
2. **RNN-scored ntuples:** Same filename structure with RNN branches added
3. **2DAlphabet inputs:**
   - Data: `EaDM_Run3_Cosmics_Data_All_{SR/VR1/VR2}.root`
   - Signal: `EaDM_Signal_M{mass}GeV_{SR/VR1/VR2}.root`
   - BkgMC: `EaDM_CosmicMC_Data_{SR/VR1/VR2}.root`, `EaDM_NeutrinoMC_Data_{SR/VR1/VR2}.root`