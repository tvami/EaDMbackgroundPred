# =========================
# Import necessary libraries
# =========================
import uproot, ROOT, numpy as np, awkward as ak, glob, os, keras, argparse, math
from keras import layers
from tensorflow.keras.models import Sequential
from tensorflow.keras.preprocessing.sequence import pad_sequences
from tqdm import tqdm
from pathlib import Path
from scipy import stats
import re
import time

# =========================
# Parse command-line arguments
# =========================
parser = argparse.ArgumentParser()
parser.add_argument("-n", "--ntupleVersion")  # e.g. Ntuples_v4.0.7
parser.add_argument("-s", "--sampleType")     # BkgMC, Data, ExpressData, Signal
parser.add_argument("-r", "--region")         # sr, vr1, vr2
parser.add_argument("-R", "--Run")            # MC, 2023D, Run3
parser.add_argument("-c", "--collection")     # matched_muon, muon, track, tuneP
parser.add_argument("-T", "--runType")        # Process, 2DAInput, Both
# parser.add_argument('-F', '--inputFiles',metavar='FILE', type='string', action='store',
#                 default   =   'test.txt',
#                 dest      =   'inputFiles',
#                 help      =   'Text file containing the desired files to make 2DA files from')
args = parser.parse_args()


# =========================
# Load pretrained RNN model
# =========================

# Path to trained RNN weights
checkpoint_path = '/home/users/smasanam/EarthAsDMProject/CMSSW_13_0_10/src/CosmicsAnalyzer/EarthAsDMAnalyzer/test/rnn_v5_188k_final_weights.ckpt'

# Define model architecture (must match training architecture exactly)
model = Sequential([
    layers.Masking(mask_value=-9999.),          # Ignore padded values
    layers.Bidirectional(layers.LSTM(64)),     # BiLSTM layer
    layers.Dense(64, activation='relu'),       # Fully connected layer
    layers.Dense(1, activation='sigmoid')      # Output: binary classification score
])

# Load trained weights
model.load_weights(checkpoint_path)


# =========================
# Build input/output paths
# =========================

file_dir_path = '/home/users/tvami/EarthAsDM'

ntuple_v   = args.ntupleVersion
sample_type = args.sampleType
run = args.Run
if args.region == 'vr1': region = 'sr'
else: region = args.region
collection  = args.collection

print("============ Running on ============")
print("ntupleVersion:",ntuple_v)
print("sampleType:",sample_type)
print("region:",region[:2], f"({args.region})")
print("run:",run)
print("collection:",collection)
print("====================================")

# Find all ROOT files matching pattern
input_files = glob.glob(f'{file_dir_path}/{ntuple_v}/{sample_type}/{region[:2]}/{collection}/*.root')
if sample_type == 'Data' and region[:2] == 'sr': input_files.remove(f"/home/users/tvami/EarthAsDM/{ntuple_v}/Data/{region[:2]}/{collection}/skimmed_{collection}_{region[:2]}_Ntuplizer-Cosmics_All_v4.root")

# Output directory for RNN-scored files
output_dir = f'/home/users/smasanam/EarthAsDMProject/samples/{ntuple_v}/{sample_type}/{region[:2]}/{collection}'

# Create output directory if missing
if not os.path.exists(output_dir+"/2DA"):
    os.makedirs(output_dir+"/2DA")


# =========================
# Process loop
# =========================
if args.runType == 'Process' or args.runType == 'Both':
    for file in tqdm(input_files):

        # Skip file if already processed
        if os.path.exists(f"{output_dir}/{Path(file).stem}_wRNN.root"):
            continue

        print("running on:", Path(file).stem)

        # Create RDataFrame from input tree
        df = ROOT.RDataFrame("tree", file)

        # Extract required jagged branches into Python
        RNN_input_arr = df.AsNumpy([
            "muon_dtSeg_t0timing",
            "muon_dtSeg_globX",
            "muon_dtSeg_globY",
            "muon_dtSeg_globZ"
        ])

        # =========================
        # Convert ROOT RVec -> Awkward Arrays
        # =========================

        # Convert each jagged branch to awkward arrays
        t0_arr = ak.Array(list(RNN_input_arr["muon_dtSeg_t0timing"]))
        x_arr  = ak.Array(list(RNN_input_arr["muon_dtSeg_globX"]))
        y_arr  = ak.Array(list(RNN_input_arr["muon_dtSeg_globY"]))
        z_arr  = ak.Array(list(RNN_input_arr["muon_dtSeg_globZ"]))

        # =========================
        # Sort segments by t0 timing per event
        # =========================

        nMax = ak.max(ak.num(t0_arr))   # Maximum number of segments per event

        # Sort each event by ascending t0
        ind = ak.argsort(t0_arr, axis=-1, ascending=True)

        t0_arr = t0_arr[ind]
        x_arr  = x_arr[ind]
        y_arr  = y_arr[ind]
        z_arr  = z_arr[ind]


        # =========================
        # Pad sequences to fixed length
        # =========================

        # Pad each event to nMax with value -9999 (mask value)
        t0_pad = ak.fill_none(ak.pad_none(t0_arr, nMax, axis=1), -9999.)
        x_pad  = ak.fill_none(ak.pad_none(x_arr,  nMax, axis=1), -9999.)
        y_pad  = ak.fill_none(ak.pad_none(y_arr,  nMax, axis=1), -9999.)
        z_pad  = ak.fill_none(ak.pad_none(z_arr,  nMax, axis=1), -9999.)


        # =========================
        # Build final RNN input tensor
        # Shape: (N_events, nMax, 4 features)
        # =========================

        rnn_data = np.stack([
            ak.to_numpy(t0_pad),
            ak.to_numpy(x_pad),
            ak.to_numpy(y_pad),
            ak.to_numpy(z_pad)
        ], axis=-1)


        # =========================
        # Run RNN inference
        # =========================

        print("Calculating RNNScores")

        if rnn_data.shape[0] != 0: rnn_scores = model.predict(rnn_data)

        if args.sampleType == "Data":
            # =========================
            # Safety Checks & Diagnositics
            # =========================        

            print("\n==============================")
            print("Safety Checks & Diagnositics")
            print("==============================")

            print("\n==================== Checks =====================")
            print("# of Events:", df.Count().GetValue())
            print("RNN Score Arr Shape:",rnn_scores.shape)

            if len(rnn_scores) - df.Count().GetValue() != 0:
                print("WARNING: len(RNNScore) - df.Count().GetValue() != 0")
                break
            else: print("RNNScore length matches # of events")

            print("\n============== Important Env. Vars ==============")
            print("nMax:", nMax)

            print("\n===================== Means =====================")
            print("RNNScore:", np.mean(rnn_scores.flatten()))

            print("\n=============== Standard Deviations =============")
            print("RNNScore:", np.std(rnn_scores.flatten()))

            print("\n========================================")
            print("Safety Checks & Diagnositics Complete")
            print("========================================")


            # =========================
            # Attach RNN scores to RDataFrame
            # =========================

            with uproot.open(file) as f:
                tree = f["tree"]
                arrays = tree.arrays(library="np")

            # Add new branches (syst are replaced w/ nominal branch)
            arrays["RNNScore"] = rnn_scores.flatten()
            arrays["RNNScore_bstrpMean"] = rnn_scores.flatten()
            arrays["RNNScore_noiseSyst"] = rnn_scores.flatten()
            arrays["RNNScore_syst_up"] = rnn_scores.flatten()
            arrays["RNNScore_syst_down"] = rnn_scores.flatten()

            # Write new file
            with uproot.recreate(f"{output_dir}/{Path(file).stem}_wRNN.root") as out_f:
                print(f"Saving to: {output_dir}/{Path(file).stem}_wRNN.root")
                out_f["tree"] = arrays

            continue


        # =========================
        # Use old t0_noise method to derive systematic on RNN Score
        # =========================

        rand_noise = ak.Array([
                np.random.normal(0, 1, len(indivArr))
                for indivArr in t0_arr
            ])

        t0_arr_noiseSyst = t0_arr + rand_noise

        # Sort each event by ascending t0
        ind_noiseSyst = ak.argsort(t0_arr_noiseSyst, axis=-1, ascending=True)

        t0_arr_noiseSyst = t0_arr_noiseSyst[ind_noiseSyst]
        x_arr_ind_noiseSyst  = x_arr[ind_noiseSyst]
        y_arr_ind_noiseSyst  = y_arr[ind_noiseSyst]
        z_arr_ind_noiseSyst  = z_arr[ind_noiseSyst]

        # =========================
        # Pad sequences to fixed length
        # =========================

        # Pad each event to nMax with value -9999 (mask value)
        t0_noiseSyst_pad = ak.fill_none(ak.pad_none(t0_arr_noiseSyst, nMax, axis=1), -9999.)
        x_noiseSyst_pad  = ak.fill_none(ak.pad_none(x_arr_ind_noiseSyst,  nMax, axis=1), -9999.)
        y_noiseSyst_pad  = ak.fill_none(ak.pad_none(y_arr_ind_noiseSyst,  nMax, axis=1), -9999.)
        z_noiseSyst_pad  = ak.fill_none(ak.pad_none(z_arr_ind_noiseSyst,  nMax, axis=1), -9999.)


        # =========================
        # Build final RNN input tensor & run RNN inference
        # =========================

        rnn_data_noiseSyst = np.stack([
            ak.to_numpy(t0_noiseSyst_pad),
            ak.to_numpy(x_noiseSyst_pad),
            ak.to_numpy(y_noiseSyst_pad),
            ak.to_numpy(z_noiseSyst_pad)
        ], axis=-1)
        
        print("Now calculating RNNScore (w/ t0 noise as syst)")
        
        if rnn_data_noiseSyst.shape[0] != 0: rnn_scores_noiseSyst = model.predict(rnn_data_noiseSyst)

        # =========================
        # Use Bootstrap method to derive systematic on RNN Score
        # =========================

        print("Now calculating RNNScore (using bootstrap as syst)")

        N = 1 # Percision in RNNScore syst. is proportional to 1/sqrt(N) -> Set N+1 to 100 to get ~10% percision
        for i in range(N):
            # Generate N random indexes per N-dim subarray
            rand_idx = ak.Array([
                np.random.randint(0, len(indivArr), len(indivArr))
                for indivArr in t0_arr
            ])

            t0_arr_syst = t0_arr[rand_idx]
            x_arr_syst = x_arr[rand_idx]
            y_arr_syst = y_arr[rand_idx]
            z_arr_syst = z_arr[rand_idx]

            # Sort each event by ascending t0
            ind_syst = ak.argsort(t0_arr_syst, axis=-1, ascending=True)

            t0_arr_syst = t0_arr_syst[ind_syst]
            x_arr_syst  = x_arr_syst[ind_syst]
            y_arr_syst  = y_arr_syst[ind_syst]
            z_arr_syst  = z_arr_syst[ind_syst]

            # Pad each event to nMax with value -9999 (mask value)
            t0_syst_pad = ak.fill_none(ak.pad_none(t0_arr_syst, nMax, axis=1), -9999.)
            x_syst_pad  = ak.fill_none(ak.pad_none(x_arr_syst,  nMax, axis=1), -9999.)
            y_syst_pad  = ak.fill_none(ak.pad_none(y_arr_syst,  nMax, axis=1), -9999.)
            z_syst_pad  = ak.fill_none(ak.pad_none(z_arr_syst,  nMax, axis=1), -9999.)

            # Build RNN (syst) input tensor
            rnn_data_syst = np.stack([
                ak.to_numpy(t0_syst_pad),
                ak.to_numpy(x_syst_pad),
                ak.to_numpy(y_syst_pad),
                ak.to_numpy(z_syst_pad)
            ], axis=-1)

            # Run RNN inference
            if rnn_data_syst.shape[0] != 0: rnn_scores_syst = model.predict(rnn_data_syst)

            if i == 0: rnn_scores = np.stack([rnn_scores, rnn_scores_syst], axis=0)
            else: rnn_scores = np.concatenate((rnn_scores, rnn_scores_syst[np.newaxis, :, :]), axis=0)

        # Calculate bootstrap estimates of RNN Score mean + std for each event
        rnn_score_bstrp_mean_arr = np.mean(rnn_scores, axis=0)
        rnn_score_syst_up = np.percentile(rnn_scores, 68, axis=0)
        rnn_score_syst_down = np.percentile(rnn_scores, 32, axis=0)


        # =========================
        # Safety Checks & Diagnositics
        # =========================        

        print("\n==============================")
        print("Safety Checks & Diagnositics")
        print("==============================")

        print("\n==================== Checks =====================")
        print("# of Events:", df.Count().GetValue())
        print("RNN Score Arr Shape:",rnn_scores.shape)

        if len(rnn_scores[0]) - df.Count().GetValue() != 0:
            print("WARNING: len(RNNScore) - df.Count().GetValue() != 0")
            break
        else: print("RNNScore length matches # of events")

        print("\n============== Important Env. Vars ==============")
        print("nMax:", nMax)
        print("Random Noise:", rand_noise)
        print("Last Bootstrap Random Index:", rand_idx)
        print("Last t0_arr_syst:", t0_arr_syst, "\nLast t0_arr:", t0_arr)

        print("\n===================== Means =====================")
        print("RNNScore:", np.mean(rnn_scores[0].flatten()))
        print("RNNScore (bstrp mean):", np.mean(rnn_score_bstrp_mean_arr.flatten()))
        print("RNNScore (t0 syst):", np.mean(rnn_scores_noiseSyst.flatten()))
        print("RNNScore (bstrp up syst):", np.mean(rnn_score_syst_up.flatten()))
        print("RNNScore (bstrp up syst):", np.mean(rnn_score_syst_down.flatten()))

        print("\n=============== Standard Deviations =============")
        print("RNNScore:", np.std(rnn_scores[0].flatten()))
        print("RNNScore (bstrp mean):", np.std(rnn_score_bstrp_mean_arr.flatten()))
        print("RNNScore (t0 syst):", np.std(rnn_scores_noiseSyst.flatten()))
        print("RNNScore (bstrp up syst):", np.std(rnn_score_syst_up.flatten()))
        print("RNNScore (bstrp up syst):", np.std(rnn_score_syst_down.flatten()))

        print("\n========================================")
        print("Safety Checks & Diagnositics Complete")
        print("========================================")


        # =========================
        # Attach RNN scores to RDataFrame
        # =========================

        with uproot.open(file) as f:
            tree = f["tree"]
            arrays = tree.arrays(library="np")

        # Add new branches
        arrays["RNNScore"] = rnn_scores[0].flatten()
        arrays["RNNScore_bstrpMean"] = rnn_score_bstrp_mean_arr.flatten()
        arrays["RNNScore_noiseSyst"] = rnn_scores_noiseSyst.flatten()
        arrays["RNNScore_syst_up"] = rnn_score_syst_up.flatten()
        arrays["RNNScore_syst_down"] = rnn_score_syst_down.flatten()

        # Write new file
        with uproot.recreate(f"{output_dir}/{Path(file).stem}_wRNN.root") as out_f:
            print(f"Saving to: {output_dir}/{Path(file).stem}_wRNN.root")
            out_f["tree"] = arrays


# =========================
# 2DA loop
# =========================
if args.runType == '2DAInput' or args.runType == 'Both':
    if args.sampleType == 'Data':
        # Chain all processed ROOT files together for combined processing
        rootTChain = ROOT.TChain("tree")
        for file in glob.glob(f'{output_dir}/*.root'):
            # If running on 2023D data, skip files not from that run period
            if run == '2023D' and 'Run2023D' not in file: continue 
            print("running on:", Path(file).stem)
            rootTChain.Add(file)
        
        df = ROOT.RDataFrame(rootTChain)

        # Define derived columns for the nominal 2D histogram inputs
        df2 = (
            df.Define("n_Seg", "nmuon_dtSeg_t0timing")                            # Total number of DT segments per event
            .Define("chi2ndof", "ROOT::VecOps::Where(muon_fromGenTrack_Ndof != 0, muon_fromGenTrack_Chi2/muon_fromGenTrack_Ndof, 999.)")  # Chi2/ndof, protect against division by zero
            .Define("quality_mask", f"chi2ndof < 35. && muon_fromGenTrack_NumValidHits > 7")  # Select good-quality muon tracks
            .Define("pT_max", "ROOT::VecOps::Max(muon_fromGenTrack_Pt[quality_mask])")        # Highest pT among quality muons
            .Define("pT_max_clipped", "std::min(pT_max, 12499.0)")                            # Clip pT to stay within histogram range
            .Define("n_Seg_clipped", "std::min(n_Seg, 199)")                                  # Clip segment count to stay within histogram range
        )

        # Define pT-shifted dataframe for pT scale systematic (upward variation)
        # pT scale factor varies by regime: +0.3% below 200 GeV, +0.5% between 200-500 GeV, +1% above 500 GeV
        pT_up_df_tmp = (
            df.Define("chi2ndof", "ROOT::VecOps::Where(muon_fromGenTrack_Ndof != 0, muon_fromGenTrack_Chi2/muon_fromGenTrack_Ndof, 999.)")
            .Define("quality_mask", f"chi2ndof < 35. && muon_fromGenTrack_NumValidHits > 7")
            .Define(
                "pT_max_up",
                "ROOT::VecOps::Max(muon_fromGenTrack_Pt[quality_mask]) < 200 ? ROOT::VecOps::Max(muon_fromGenTrack_Pt[quality_mask])*1.003 : "
                "(ROOT::VecOps::Max(muon_fromGenTrack_Pt[quality_mask]) > 500 ? ROOT::VecOps::Max(muon_fromGenTrack_Pt[quality_mask])*1.01 : "
                "ROOT::VecOps::Max(muon_fromGenTrack_Pt[quality_mask])*1.005)"
            )
            .Define("n_Seg", "nmuon_dtSeg_t0timing")
            .Define("pT_max_up_clipped", "std::min(pT_max_up, 12499.0)")
            .Define("n_Seg_clipped",  "std::min(n_Seg,  199)")
        )

        # Define pT-shifted dataframe for pT scale systematic (downward variation)
        # pT scale factor varies by regime: -0.3% below 200 GeV, -0.5% between 200-500 GeV, -1% above 500 GeV
        pT_down_df_tmp = (
            df.Define("chi2ndof", "ROOT::VecOps::Where(muon_fromGenTrack_Ndof != 0, muon_fromGenTrack_Chi2/muon_fromGenTrack_Ndof, 999.)")
            .Define("quality_mask", f"chi2ndof < 35. && muon_fromGenTrack_NumValidHits > 7")
            .Define(
                "pT_max_down",
                "ROOT::VecOps::Max(muon_fromGenTrack_Pt[quality_mask]) < 200 ? ROOT::VecOps::Max(muon_fromGenTrack_Pt[quality_mask])*0.997 : "
                "(ROOT::VecOps::Max(muon_fromGenTrack_Pt[quality_mask]) > 500 ? ROOT::VecOps::Max(muon_fromGenTrack_Pt[quality_mask])*0.99 : "
                "ROOT::VecOps::Max(muon_fromGenTrack_Pt[quality_mask])*0.995)"
            )
            .Define("n_Seg", "nmuon_dtSeg_t0timing")
            .Define("pT_max_down_clipped", "std::min(pT_max_down, 12499.0)")
            .Define("n_Seg_clipped",  "std::min(n_Seg,  199)")
        )

        # Shorthand variable names for histogram filling axes
        pT_var = "pT_max_clipped"
        pT_up_var = "pT_max_up_clipped"
        pT_down_var = "pT_max_down_clipped"
        n_Seg_var = "n_Seg_clipped"

        # Define RNN score cut boundaries for pass/fail regions per analysis region
        # bnd_nominal: nominal cut, bnd_up/down: RNN score syst variations, bnd_syst: t0 noise syst
        if args.region == 'sr':
            bnd_nominal = ['RNNScore >= 0.9999', 'RNNScore < 0.9999']
            bnd_up = ['RNNScore >= 0.99999', 'RNNScore < 0.99999']
            bnd_down = ['RNNScore >= 0.999', 'RNNScore < 0.999']
            bnd_syst = ['RNNScore_noiseSyst >= 0.9999', 'RNNScore_noiseSyst < 0.9999']
        if args.region == 'vr1':
            # VR1 uses a window cut: pass requires intermediate RNN scores (between ~signal-like and background-like)
            bnd_nominal = ['RNNScore >= 0.45 & RNNScore < 0.9999', 'RNNScore < 0.45']
            bnd_up = ['RNNScore >= 0.50 & RNNScore < 0.9999', 'RNNScore < 0.50']
            bnd_down = ['RNNScore >= 0.40 & RNNScore < 0.9999', 'RNNScore < 0.40']
            bnd_syst = ['RNNScore_noiseSyst >= 0.45 & RNNScore_noiseSyst < 0.9999', 'RNNScore_noiseSyst < 0.45']
        if args.region == 'vr2':
            bnd_nominal = ['RNNScore >= 0.9999', 'RNNScore < 0.9999']
            bnd_up = ['RNNScore >= 0.99999', 'RNNScore < 0.99999']
            bnd_down = ['RNNScore >= 0.999', 'RNNScore < 0.999']
            bnd_syst = ['RNNScore_noiseSyst >= 0.9999', 'RNNScore_noiseSyst < 0.9999']
        
        # Split events into pass/fail for each systematic variation:
        # Nominal RNN cut
        pass_df = df2.Filter(bnd_nominal[0])
        fail_df = df2.Filter(bnd_nominal[1])
        # RNN score threshold shifted up/down (RNN cut uncertainty)
        rnn_up_pass_df = df2.Filter(bnd_up[0])
        rnn_up_fail_df = df2.Filter(bnd_up[1])
        rnn_down_pass_df = df2.Filter(bnd_down[0])
        rnn_down_fail_df = df2.Filter(bnd_down[1])
        # Nominal RNN cut applied to pT-shifted dataframes (pT scale uncertainty)
        pT_up_pass_df = pT_up_df_tmp.Filter(bnd_nominal[0])
        pT_up_fail_df = pT_up_df_tmp.Filter(bnd_nominal[1])
        pT_down_pass_df = pT_down_df_tmp.Filter(bnd_nominal[0])
        pT_down_fail_df = pT_down_df_tmp.Filter(bnd_nominal[1])
        # t0 noise-shifted RNN score cut (t0 timing uncertainty)
        rnn_t0_up_pass_df = df2.Filter(bnd_syst[0])
        rnn_t0_up_fail_df = df2.Filter(bnd_syst[1])
        rnn_t0_down_pass_df = df2.Filter(bnd_syst[0])
        rnn_t0_down_fail_df = df2.Filter(bnd_syst[1])

        # Book 2D histograms (pT vs n_Seg) for each pass/fail region and systematic variation
        # Axes: x = muon pT [0, 12500 GeV] in 12500 bins, y = # DT segments [0, 200] in 200 bins
        pass_hist = pass_df.Histo2D(("hpass", "hpass; p_{T} (GeV);# of Hits",
                12500, 0, 12500, 200, 0, 200),
                pT_var, n_Seg_var)
        fail_hist = fail_df.Histo2D(("hfail", "hfail; p_{T} (GeV);# of Hits",
                12500, 0, 12500, 200, 0, 200),
                pT_var, n_Seg_var)
        # RNN threshold systematic histograms
        pass_rnn_up_hist = rnn_up_pass_df.Histo2D(("hpass_RNNsyst_up", "hpass_RNNsyst_up; p_{T} (GeV);# of Hits",
                12500, 0, 12500, 200, 0, 200),
                pT_var, n_Seg_var)
        fail_rnn_up_hist = rnn_up_fail_df.Histo2D(("hfail_RNNsyst_up", "hfail_RNNsyst_up; p_{T} (GeV);# of Hits",
                12500, 0, 12500, 200, 0, 200),
                pT_var, n_Seg_var)
        pass_rnn_down_hist = rnn_down_pass_df.Histo2D(("hpass_RNNsyst_down", "hpass_RNNsyst_down; p_{T} (GeV);# of Hits",
                12500, 0, 12500, 200, 0, 200),
                pT_var, n_Seg_var)
        fail_rnn_down_hist = rnn_down_fail_df.Histo2D(("hfail_RNNsyst_down", "hfail_RNNsyst_down; p_{T} (GeV);# of Hits",
                12500, 0, 12500, 200, 0, 200),
                pT_var, n_Seg_var)
        # pT scale systematic histograms
        pass_pT_up_hist = pT_up_pass_df.Histo2D(("hpass_pTsyst_up", "hpass_pTsyst_up; p_{T} (GeV);# of Hits",
                12500, 0, 12500, 200, 0, 200),
                pT_up_var, n_Seg_var)
        fail_pT_up_hist = pT_up_fail_df.Histo2D(("hfail_pTsyst_up", "hfail_pTsyst_up; p_{T} (GeV);# of Hits",
                12500, 0, 12500, 200, 0, 200),
                pT_up_var, n_Seg_var)
        pass_pT_down_hist = pT_down_pass_df.Histo2D(("hpass_pTsyst_down", "hpass_pTsyst_down; p_{T} (GeV);# of Hits",
                12500, 0, 12500, 200, 0, 200),
                pT_down_var, n_Seg_var)
        fail_pT_down_hist = pT_down_fail_df.Histo2D(("hfail_pTsyst_down", "hfail_pTsyst_down; p_{T} (GeV);# of Hits",
                12500, 0, 12500, 200, 0, 200),
                pT_down_var, n_Seg_var)
        # t0 timing systematic histograms
        pass_t0_up_hist = rnn_t0_up_pass_df.Histo2D(("hpass_t0syst_up", "hpass_t0syst_up; p_{T} (GeV);# of Hits",
                12500, 0, 12500, 200, 0, 200),
                pT_var, n_Seg_var)
        fail_t0_up_hist = rnn_t0_up_fail_df.Histo2D(("hfail_t0syst_up", "hfail_t0syst_up; p_{T} (GeV);# of Hits",
                12500, 0, 12500, 200, 0, 200),
                pT_var, n_Seg_var)
        pass_t0_down_hist = rnn_t0_down_pass_df.Histo2D(("hpass_t0syst_down", "hpass_t0syst_down; p_{T} (GeV);# of Hits",
                12500, 0, 12500, 200, 0, 200),
                pT_var, n_Seg_var)
        fail_t0_down_hist = rnn_t0_down_fail_df.Histo2D(("hfail_t0syst_down", "hfail_t0syst_down; p_{T} (GeV);# of Hits",
                12500, 0, 12500, 200, 0, 200),
                pT_var, n_Seg_var)

        # Write all histograms to output ROOT file for use as 2DAlphabet inputs
        print("Saving to:", output_dir+f"/2DA/EaDM_{run}_Cosmics_Data_{args.region.upper()}.root")
        root_file = ROOT.TFile(output_dir+f"/2DA/EaDM_{run}_Cosmics_Data_{args.region.upper()}.root", "RECREATE")
        pass_hist.Write()
        fail_hist.Write()
        pass_pT_up_hist.Write()
        pass_pT_down_hist.Write()
        fail_pT_up_hist.Write()
        fail_pT_down_hist.Write()
        pass_t0_up_hist.Write()
        pass_t0_down_hist.Write()
        fail_t0_up_hist.Write()
        fail_t0_down_hist.Write()
        pass_rnn_up_hist.Write()
        pass_rnn_down_hist.Write()
        fail_rnn_up_hist.Write()
        fail_rnn_down_hist.Write()
        root_file.Close()

    elif args.sampleType in ['Signal', 'BkgMC']:
        for file in glob.glob(f'{output_dir}/*.root'):
            print("running on:", Path(file).stem)

            # Extract signal mass point from filename (e.g. "MinP-5000" → M5000GeV)
            # Skip surface depth samples, which use a different naming convention
            match = re.search(r'MinP-(\d+)', Path(file).stem)
            if match and "SurfaceDepth" not in Path(file).stem:
                number = match.group(1)
                new_filename = f"EaDM_Signal_M{number}GeV_{args.region.upper()}.root"
                # Override filename for special MC samples (neutrino and cosmic background)
                if Path(file).stem == f"skimmed_matched_muon_{region}_CosmicToMu_Par-MinP-10-MaxP-10000-MinTheta-91-MaxTheta-179_cosmuogen_wRNN": new_filename = f'EaDM_NeutrinoMC_Data_{args.region.upper()}.root'
                elif Path(file).stem == f"skimmed_matched_muon_{region}_CosmicToMu_Par-MinP-4-MaxP-3000-MinTheta-0-MaxTheta-75_cosmuogen_wRNN": new_filename = f'EaDM_CosmicMC_Data_{args.region.upper()}.root'
                print("Saving to:", output_dir+f"/2DA/{new_filename}")
            else:
                print("No matching number found or encountered Surface Depth sample")
                continue

            df = ROOT.RDataFrame("tree;1", file)

            # Define derived columns — no quality mask for MC (all tracks used)
            df2 = (
                df.Define("n_Seg", "nmuon_dtSeg_t0timing")
                .Define("pT_max", "ROOT::VecOps::Max(muon_fromGenTrack_Pt)")
                .Define("pT_max_clipped", "std::min(pT_max, 12499.0)")
                .Define("n_Seg_clipped", "std::min(n_Seg, 199)")
            )

            # pT scale systematic (up) — same regime-dependent factors as Data
            pT_up_df_tmp = (
                df.Define(
                    "pT_max_up",
                    "ROOT::VecOps::Max(muon_fromGenTrack_Pt) < 200 ? ROOT::VecOps::Max(muon_fromGenTrack_Pt)*1.003 : "
                    "(ROOT::VecOps::Max(muon_fromGenTrack_Pt) > 500 ? ROOT::VecOps::Max(muon_fromGenTrack_Pt)*1.01 : "
                    "ROOT::VecOps::Max(muon_fromGenTrack_Pt)*1.005)"
                )
                .Define("n_Seg", "nmuon_dtSeg_t0timing")
                .Define("pT_max_up_clipped", "std::min(pT_max_up, 12499.0)")
                .Define("n_Seg_clipped",  "std::min(n_Seg,  199)")
            )

            # pT scale systematic (down) — same regime-dependent factors as Data
            pT_down_df_tmp = (
                df.Define(
                    "pT_max_down",
                    "ROOT::VecOps::Max(muon_fromGenTrack_Pt) < 200 ? ROOT::VecOps::Max(muon_fromGenTrack_Pt)*0.997 : "
                    "(ROOT::VecOps::Max(muon_fromGenTrack_Pt) > 500 ? ROOT::VecOps::Max(muon_fromGenTrack_Pt)*0.99 : "
                    "ROOT::VecOps::Max(muon_fromGenTrack_Pt)*0.995)"
                )
                .Define("n_Seg", "nmuon_dtSeg_t0timing")
                .Define("pT_max_down_clipped", "std::min(pT_max_down, 12499.0)")
                .Define("n_Seg_clipped",  "std::min(n_Seg,  199)")
            )

            pT_var = "pT_max_clipped"
            pT_up_var = "pT_max_up_clipped"
            pT_down_var = "pT_max_down_clipped"
            n_Seg_var = "n_Seg_clipped"
            
            # RNN score cut boundaries — BkgMC uses looser cuts than Signal or Data
            # to probe a region with sufficient MC statistics
            if args.region == 'sr':
                if sample_type == 'Signal':
                    bnd_nominal = ['RNNScore >= 0.9999', 'RNNScore < 0.9999']
                    bnd_up = ['RNNScore >= 0.99999', 'RNNScore < 0.99999']
                    bnd_down = ['RNNScore >= 0.999', 'RNNScore < 0.999']
                    bnd_syst = ['RNNScore_noiseSyst >= 0.9999', 'RNNScore_noiseSyst < 0.9999']
                elif sample_type == 'BkgMC':
                    bnd_nominal = ['RNNScore >= 0.9', 'RNNScore < 0.9']
                    bnd_up = ['RNNScore >= 0.9', 'RNNScore < 0.9']
                    bnd_down = ['RNNScore >= 0.81', 'RNNScore < 0.81']
                    bnd_syst = ['RNNScore_noiseSyst >= 0.99', 'RNNScore_noiseSyst < 0.99']
            if args.region == 'vr1':
                bnd_nominal = ['RNNScore >= 0.45 & RNNScore < 0.9999', 'RNNScore < 0.45']
                bnd_up = ['RNNScore >= 0.50 & RNNScore < 0.9999', 'RNNScore < 0.50']
                bnd_down = ['RNNScore >= 0.40 & RNNScore < 0.9999', 'RNNScore < 0.40']
                bnd_syst = ['RNNScore_noiseSyst >= 0.45 & RNNScore_noiseSyst < 0.9999', 'RNNScore_noiseSyst < 0.45']
            if args.region == 'vr2':
                bnd_nominal = ['RNNScore >= 0.9999', 'RNNScore < 0.9999']
                bnd_up = ['RNNScore >= 0.99999', 'RNNScore < 0.99999']
                bnd_down = ['RNNScore >= 0.999', 'RNNScore < 0.999']
                bnd_syst = ['RNNScore_noiseSyst >= 0.9999', 'RNNScore_noiseSyst < 0.9999']

            # Split MC events into pass/fail for all systematic variations (same logic as Data)
            pass_df = df2.Filter(bnd_nominal[0])
            fail_df = df2.Filter(bnd_nominal[1])
            rnn_up_pass_df = df2.Filter(bnd_up[0])
            rnn_up_fail_df = df2.Filter(bnd_up[1])
            rnn_down_pass_df = df2.Filter(bnd_down[0])
            rnn_down_fail_df = df2.Filter(bnd_down[1])
            pT_up_pass_df = pT_up_df_tmp.Filter(bnd_nominal[0])
            pT_up_fail_df = pT_up_df_tmp.Filter(bnd_nominal[1])
            pT_down_pass_df = pT_down_df_tmp.Filter(bnd_nominal[0])
            pT_down_fail_df = pT_down_df_tmp.Filter(bnd_nominal[1])
            rnn_t0_up_pass_df = df2.Filter(bnd_syst[0])
            rnn_t0_up_fail_df = df2.Filter(bnd_syst[1])
            rnn_t0_down_pass_df = df2.Filter(bnd_syst[0])
            rnn_t0_down_fail_df = df2.Filter(bnd_syst[1])

            # Book 2D histograms — same binning as Data
            pass_hist = pass_df.Histo2D(("hpass", "hpass; p_{T} (GeV);# of Hits",
                    12500, 0, 12500, 200, 0, 200),
                    pT_var, n_Seg_var)
            fail_hist = fail_df.Histo2D(("hfail", "hfail; p_{T} (GeV);# of Hits",
                    12500, 0, 12500, 200, 0, 200),
                    pT_var, n_Seg_var)
            pass_rnn_up_hist = rnn_up_pass_df.Histo2D(("hpass_RNNsyst_up", "hpass_RNNsyst_up; p_{T} (GeV);# of Hits",
                    12500, 0, 12500, 200, 0, 200),
                    pT_var, n_Seg_var)
            fail_rnn_up_hist = rnn_up_fail_df.Histo2D(("hfail_RNNsyst_up", "hfail_RNNsyst_up; p_{T} (GeV);# of Hits",
                    12500, 0, 12500, 200, 0, 200),
                    pT_var, n_Seg_var)
            pass_rnn_down_hist = rnn_down_pass_df.Histo2D(("hpass_RNNsyst_down", "hpass_RNNsyst_down; p_{T} (GeV);# of Hits",
                    12500, 0, 12500, 200, 0, 200),
                    pT_var, n_Seg_var)
            fail_rnn_down_hist = rnn_down_fail_df.Histo2D(("hfail_RNNsyst_down", "hfail_RNNsyst_down; p_{T} (GeV);# of Hits",
                    12500, 0, 12500, 200, 0, 200),
                    pT_var, n_Seg_var)
            pass_pT_up_hist = pT_up_pass_df.Histo2D(("hpass_pTsyst_up", "hpass_pTsyst_up; p_{T} (GeV);# of Hits",
                    12500, 0, 12500, 200, 0, 200),
                    pT_up_var, n_Seg_var)
            fail_pT_up_hist = pT_up_fail_df.Histo2D(("hfail_pTsyst_up", "hfail_pTsyst_up; p_{T} (GeV);# of Hits",
                    12500, 0, 12500, 200, 0, 200),
                    pT_up_var, n_Seg_var)
            pass_pT_down_hist = pT_down_pass_df.Histo2D(("hpass_pTsyst_down", "hpass_pTsyst_down; p_{T} (GeV);# of Hits",
                    12500, 0, 12500, 200, 0, 200),
                    pT_down_var, n_Seg_var)
            fail_pT_down_hist = pT_down_fail_df.Histo2D(("hfail_pTsyst_down", "hfail_pTsyst_down; p_{T} (GeV);# of Hits",
                    12500, 0, 12500, 200, 0, 200),
                    pT_down_var, n_Seg_var)
            pass_t0_up_hist = rnn_t0_up_pass_df.Histo2D(("hpass_t0syst_up", "hpass_t0syst_up; p_{T} (GeV);# of Hits",
                    12500, 0, 12500, 200, 0, 200),
                    pT_var, n_Seg_var)
            fail_t0_up_hist = rnn_t0_up_fail_df.Histo2D(("hfail_t0syst_up", "hfail_t0syst_up; p_{T} (GeV);# of Hits",
                    12500, 0, 12500, 200, 0, 200),
                    pT_var, n_Seg_var)
            pass_t0_down_hist = rnn_t0_down_pass_df.Histo2D(("hpass_t0syst_down", "hpass_t0syst_down; p_{T} (GeV);# of Hits",
                    12500, 0, 12500, 200, 0, 200),
                    pT_var, n_Seg_var)
            fail_t0_down_hist = rnn_t0_down_fail_df.Histo2D(("hfail_t0syst_down", "hfail_t0syst_down; p_{T} (GeV);# of Hits",
                    12500, 0, 12500, 200, 0, 200),
                    pT_var, n_Seg_var)

            # Retrieve cutflow histogram from original (pre-RNN) ntuple to get total event count for normalization
            f = ROOT.TFile.Open(f"{file_dir_path}/{ntuple_v}/{sample_type}/{region[:2]}/{collection}/{Path(file).stem[:-5]}.root")
            cutflow_hist = f.Get("h_cutflow")
            cutflow_hist.SetDirectory(0)   # Detach from file so it survives after Close()
            f.Close()

            print("Total # of events in sample:", cutflow_hist.GetBinContent(1))

            if sample_type == 'Signal':
                # Normalize signal histograms to 100 events (arbitrary reference cross section)
                # so that 2DAlphabet can later re-scale by the true signal cross section
                print("Scaling histograms!")
                for hist in [pass_hist, fail_hist, pass_pT_up_hist, pass_pT_down_hist, fail_pT_up_hist, fail_pT_down_hist, pass_t0_up_hist, pass_t0_down_hist, fail_t0_up_hist, fail_t0_down_hist, pass_rnn_up_hist, pass_rnn_down_hist, fail_rnn_up_hist, fail_rnn_down_hist]:
                    hist.Scale(100 / cutflow_hist.GetBinContent(1))

            # Replace empty bins with a small sentinel value (1e-8) to avoid log(0) issues in 2DAlphabet fits
            # Only samples every 100th x-bin for performance (histograms are very fine-grained in pT)
            for x_bin in range(1, pass_hist.GetNbinsX() + 1, 100):
                for y_bin in range(1, pass_hist.GetNbinsY() + 1):
                    for hist in [pass_hist,fail_hist,pass_pT_up_hist,pass_pT_down_hist,fail_pT_up_hist,fail_pT_down_hist,pass_t0_up_hist,pass_t0_down_hist,fail_t0_up_hist,fail_t0_down_hist,pass_rnn_up_hist,pass_rnn_down_hist,fail_rnn_up_hist,fail_rnn_down_hist]:
                        bin_content = hist.GetBinContent(x_bin, y_bin)
                        if bin_content == 0:
                            hist.SetBinContent(x_bin, y_bin, 1e-08)
            
            # Write all histograms to output ROOT file for use as 2DAlphabet inputs
            root_file = ROOT.TFile(output_dir+f"/2DA/{new_filename}", "RECREATE")
            pass_hist.Write()
            fail_hist.Write()
            pass_pT_up_hist.Write()
            pass_pT_down_hist.Write()
            fail_pT_up_hist.Write()
            fail_pT_down_hist.Write()
            pass_t0_up_hist.Write()
            pass_t0_down_hist.Write()
            fail_t0_up_hist.Write()
            fail_t0_down_hist.Write()
            pass_rnn_up_hist.Write()
            pass_rnn_down_hist.Write()
            fail_rnn_up_hist.Write()
            fail_rnn_down_hist.Write()
            root_file.Close()