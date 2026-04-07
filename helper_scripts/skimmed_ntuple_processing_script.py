# =========================
# Import necessary libraries
# =========================
import uproot, ROOT, numpy as np, awkward as ak, glob, os, keras, argparse
from keras import layers
from tensorflow.keras.models import Sequential
from tqdm import tqdm
from pathlib import Path
import re

# =========================
# Parse command-line arguments
# =========================
parser = argparse.ArgumentParser()
parser.add_argument("-n", "--ntupleVersion", default="4.0.9")   # e.g. 4.0.7
parser.add_argument("-s", "--sampleType",    default="Data")    # BkgMC, Data, ExpressData, Signal
parser.add_argument("-r", "--region",        default="sr")      # sr, vr1, vr2
parser.add_argument("-c", "--collection",    default="matched_muon")  # matched_muon, muon, track, tuneP
parser.add_argument("-T", "--runType",       default="Both")    # Process, 2DAInput, Both
parser.add_argument("-i", "--inputFile",     required=True, help="Input ROOT file to process")
args = parser.parse_args()

# =========================
# Configuration constants
# =========================
PT_MAX_CLIP = 13000.0  # Maximum pT value for clipping (GeV)
N_SEG_CLIP = 199       # Maximum segment count for clipping

# =========================
# Load pretrained RNN model if not 2DAInput only
# =========================

if args.runType != '2DAInput':
    # Path to trained RNN weights (transferred by condor to current directory)
    checkpoint_path = './rnn_v5_188k_final_weights.ckpt'

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

ntuple_v   = args.ntupleVersion
sample_type = args.sampleType
region = args.region
collection  = args.collection
runType = args.runType

print("============ Running on ============")
print("ntupleVersion:",ntuple_v)
print("sampleType:",sample_type)
print("region:",region)
print("collection:",collection)
print("Run Type:",runType)
print("====================================")

# Use input file from command line argument
input_files = [args.inputFile]

# Output directory for RNN-scored files
# Use local directory for condor jobs, will be transferred back via WhenToTransferOutput
output_dir = f'./output/{sample_type}/{region}/{collection}'

# Create output directory if missing
os.makedirs(output_dir, exist_ok=True)
os.makedirs(f"{output_dir}/2DA", exist_ok=True)


# =========================
# Process loop
# =========================
if args.runType == 'Process' or args.runType == 'Both':
    for file in tqdm(input_files):

        # Skip file if already processed
        if os.path.exists(f"{output_dir}/{Path(file).stem}.root"):
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

        if rnn_data.shape[0] != 0:
            rnn_scores = model.predict(rnn_data)
        else:
            rnn_scores = np.empty((0, 1))

        if args.sampleType == "Data":
            # =========================
            # Safety Checks & Diagnostics
            # =========================        

            print("\n==============================")
            print("Safety Checks & Diagnostics")
            print("==============================")

            print("\n==================== Checks =====================")
            print("# of Events:", df.Count().GetValue())
            print("RNN Score Arr Shape:",rnn_scores.shape)

            if len(rnn_scores) - df.Count().GetValue() != 0:
                raise RuntimeError(f"len(RNNScore) ({len(rnn_scores)}) != df.Count() ({df.Count().GetValue()}) for {file}")
            else: print("RNNScore length matches # of events")

            print("\n============== Important Env. Vars ==============")
            print("nMax:", nMax)

            print("\n===================== Means =====================")
            print("RNNScore:", np.mean(rnn_scores.flatten()))

            print("\n=============== Standard Deviations =============")
            print("RNNScore:", np.std(rnn_scores.flatten()))

            print("\n========================================")
            print("Safety Checks & Diagnostics Complete")
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
            arrays["RNNScore_t0syst_up"] = rnn_scores.flatten()
            arrays["RNNScore_t0syst_down"] = rnn_scores.flatten()
            arrays["RNNScore_syst_up"] = rnn_scores.flatten()
            arrays["RNNScore_syst_down"] = rnn_scores.flatten()

            # Write new file with tree and copy histograms
            with uproot.recreate(f"{output_dir}/{Path(file).stem}.root") as out_f:
                print(f"Saving to: {output_dir}/{Path(file).stem}.root")
                out_f["tree"] = arrays

                # Copy all histograms from input file
                with uproot.open(file) as in_f:
                    for key in in_f.keys():
                        obj_name = key.split(';')[0]  # Remove cycle number
                        if obj_name != "tree":  # Skip the tree, we already wrote it
                            try:
                                hist = in_f[key]
                                out_f[obj_name] = hist
                            except:
                                pass  # Skip objects that can't be copied

            continue


        # =========================
        # Use t0 noise method to derive systematic on RNN Score
        # Generate noise once, then create up (+ |noise|) and down (- |noise|) variations
        # =========================

        # Generate random noise
        rand_noise = ak.Array([
                np.random.normal(0, 1, len(indivArr))
                for indivArr in t0_arr
            ])

        # Take absolute value for symmetric systematics
        abs_noise = np.abs(rand_noise)

        # =========================
        # t0 UP systematic: add |noise|
        # =========================
        t0_arr_t0_up = t0_arr + abs_noise

        # Sort each event by ascending t0
        ind_t0_up = ak.argsort(t0_arr_t0_up, axis=-1, ascending=True)

        t0_arr_t0_up_sorted = t0_arr_t0_up[ind_t0_up]
        x_arr_t0_up  = x_arr[ind_t0_up]
        y_arr_t0_up  = y_arr[ind_t0_up]
        z_arr_t0_up  = z_arr[ind_t0_up]

        # Pad sequences to fixed length
        t0_t0_up_pad = ak.fill_none(ak.pad_none(t0_arr_t0_up_sorted, nMax, axis=1), -9999.)
        x_t0_up_pad  = ak.fill_none(ak.pad_none(x_arr_t0_up,  nMax, axis=1), -9999.)
        y_t0_up_pad  = ak.fill_none(ak.pad_none(y_arr_t0_up,  nMax, axis=1), -9999.)
        z_t0_up_pad  = ak.fill_none(ak.pad_none(z_arr_t0_up,  nMax, axis=1), -9999.)

        # Build RNN input tensor & run inference
        rnn_data_t0_up = np.stack([
            ak.to_numpy(t0_t0_up_pad),
            ak.to_numpy(x_t0_up_pad),
            ak.to_numpy(y_t0_up_pad),
            ak.to_numpy(z_t0_up_pad)
        ], axis=-1)

        print("Now calculating RNNScore (t0 up: + |noise|)")

        if rnn_data_t0_up.shape[0] != 0:
            rnn_scores_t0_up = model.predict(rnn_data_t0_up)
        else:
            rnn_scores_t0_up = np.empty((0, 1))

        # =========================
        # t0 DOWN systematic: subtract |noise|
        # =========================
        t0_arr_t0_down = t0_arr - abs_noise

        # Sort each event by ascending t0
        ind_t0_down = ak.argsort(t0_arr_t0_down, axis=-1, ascending=True)

        t0_arr_t0_down_sorted = t0_arr_t0_down[ind_t0_down]
        x_arr_t0_down  = x_arr[ind_t0_down]
        y_arr_t0_down  = y_arr[ind_t0_down]
        z_arr_t0_down  = z_arr[ind_t0_down]

        # Pad sequences to fixed length
        t0_t0_down_pad = ak.fill_none(ak.pad_none(t0_arr_t0_down_sorted, nMax, axis=1), -9999.)
        x_t0_down_pad  = ak.fill_none(ak.pad_none(x_arr_t0_down,  nMax, axis=1), -9999.)
        y_t0_down_pad  = ak.fill_none(ak.pad_none(y_arr_t0_down,  nMax, axis=1), -9999.)
        z_t0_down_pad  = ak.fill_none(ak.pad_none(z_arr_t0_down,  nMax, axis=1), -9999.)

        # Build RNN input tensor & run inference
        rnn_data_t0_down = np.stack([
            ak.to_numpy(t0_t0_down_pad),
            ak.to_numpy(x_t0_down_pad),
            ak.to_numpy(y_t0_down_pad),
            ak.to_numpy(z_t0_down_pad)
        ], axis=-1)

        print("Now calculating RNNScore (t0 down: - |noise|)")

        if rnn_data_t0_down.shape[0] != 0:
            rnn_scores_t0_down = model.predict(rnn_data_t0_down)
        else:
            rnn_scores_t0_down = np.empty((0, 1))

        # =========================
        # Use Bootstrap method to derive systematic on RNN Score
        # =========================

        print("Now calculating RNNScore (using bootstrap as syst)")

        N = 1 # Precision in RNNScore syst. is proportional to 1/sqrt(N) -> Set N+1 to 100 to get ~10% percision
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
            if rnn_data_syst.shape[0] != 0:
                rnn_scores_syst = model.predict(rnn_data_syst)
            else:
                rnn_scores_syst = np.empty((0, 1))

            if i == 0: rnn_scores = np.stack([rnn_scores, rnn_scores_syst], axis=0)
            else: rnn_scores = np.concatenate((rnn_scores, rnn_scores_syst[np.newaxis, :, :]), axis=0)

        # Calculate bootstrap estimates of RNN Score mean + std for each event
        rnn_score_bstrp_mean_arr = np.mean(rnn_scores, axis=0)
        rnn_score_syst_up = np.percentile(rnn_scores, 68, axis=0)
        rnn_score_syst_down = np.percentile(rnn_scores, 32, axis=0)


        # =========================
        # Safety Checks & Diagnostics
        # =========================        

        print("\n==============================")
        print("Safety Checks & Diagnostics")
        print("==============================")

        print("\n==================== Checks =====================")
        print("# of Events:", df.Count().GetValue())
        print("RNN Score Arr Shape:",rnn_scores.shape)

        if len(rnn_scores[0]) - df.Count().GetValue() != 0:
            raise RuntimeError(f"len(RNNScore) ({len(rnn_scores[0])}) != df.Count() ({df.Count().GetValue()}) for {file}")
        else: print("RNNScore length matches # of events")

        print("\n============== Important Env. Vars ==============")
        print("nMax:", nMax)
        print("Random Noise:", rand_noise)
        print("Last Bootstrap Random Index:", rand_idx)
        print("Last t0_arr_syst:", t0_arr_syst, "\nLast t0_arr:", t0_arr)

        print("\n===================== Means =====================")
        print("RNNScore:", np.mean(rnn_scores[0].flatten()))
        print("RNNScore (bstrp mean):", np.mean(rnn_score_bstrp_mean_arr.flatten()))
        print("RNNScore (t0 up syst):", np.mean(rnn_scores_t0_up.flatten()))
        print("RNNScore (t0 down syst):", np.mean(rnn_scores_t0_down.flatten()))
        print("RNNScore (bstrp up syst):", np.mean(rnn_score_syst_up.flatten()))
        print("RNNScore (bstrp down syst):", np.mean(rnn_score_syst_down.flatten()))

        print("\n=============== Standard Deviations =============")
        print("RNNScore:", np.std(rnn_scores[0].flatten()))
        print("RNNScore (bstrp mean):", np.std(rnn_score_bstrp_mean_arr.flatten()))
        print("RNNScore (t0 up syst):", np.std(rnn_scores_t0_up.flatten()))
        print("RNNScore (t0 down syst):", np.std(rnn_scores_t0_down.flatten()))
        print("RNNScore (bstrp up syst):", np.std(rnn_score_syst_up.flatten()))
        print("RNNScore (bstrp down syst):", np.std(rnn_score_syst_down.flatten()))

        print("\n========================================")
        print("Safety Checks & Diagnostics Complete")
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
        arrays["RNNScore_t0syst_up"] = rnn_scores_t0_up.flatten()
        arrays["RNNScore_t0syst_down"] = rnn_scores_t0_down.flatten()
        arrays["RNNScore_syst_up"] = rnn_score_syst_up.flatten()
        arrays["RNNScore_syst_down"] = rnn_score_syst_down.flatten()

        # Write new file with tree and copy histograms
        with uproot.recreate(f"{output_dir}/{Path(file).stem}.root") as out_f:
            print(f"Saving to: {output_dir}/{Path(file).stem}.root")
            out_f["tree"] = arrays

            # Copy all histograms from input file
            with uproot.open(file) as in_f:
                for key in in_f.keys():
                    obj_name = key.split(';')[0]  # Remove cycle number
                    if obj_name != "tree":  # Skip the tree, we already wrote it
                        try:
                            hist = in_f[key]
                            out_f[obj_name] = hist
                        except:
                            pass  # Skip objects that can't be copied


# =========================
# 2DAInput loop
# =========================
if args.runType == '2DAInput' or args.runType == 'Both':
    if args.sampleType == 'Data':
        # Chain all processed ROOT files together for combined processing
        rootTChain = ROOT.TChain("tree")
        for file in glob.glob(f'{output_dir}/*.root'):
            print("running on:", Path(file).stem)
            rootTChain.Add(file)
        
        df = ROOT.RDataFrame(rootTChain)

        # Define derived columns for the nominal 2D histogram inputs
        df2 = (
            df.Define("n_Seg", "nmuon_dtSeg_t0timing")                            # Total number of DT segments per event
            .Define("chi2ndof", "ROOT::VecOps::Where(muon_fromGenTrack_Ndof != 0, muon_fromGenTrack_Chi2/muon_fromGenTrack_Ndof, 999.)")  # Chi2/ndof, protect against division by zero
            .Define("ptErrOverPt2", "ROOT::VecOps::Where(muon_fromGenTrack_Pt > 0, muon_fromGenTrack_PtErr / (muon_fromGenTrack_Pt * muon_fromGenTrack_Pt), 999.)")  # ptErr/pT^2
            .Define("quality_mask", "chi2ndof < 35. && muon_fromGenTrack_NumValidHits > 7 && ptErrOverPt2 < 1e-3 && abs(muon_fromGenTrack_Eta) < 0.9")  # Select good-quality muon tracks
            .Define("pT_max", "ROOT::VecOps::Max(muon_fromGenTrack_Pt[quality_mask])")        # Highest pT among quality muons
            .Define("pT_max_clipped", f"std::min(pT_max, {PT_MAX_CLIP})")                     # Clip pT to stay within histogram range
            .Define("n_Seg_clipped", f"std::min(n_Seg, {N_SEG_CLIP})")                        # Clip segment count to stay within histogram range
        )

        # Define pT-shifted dataframe for pT scale systematic (upward variation)
        # pT scale factor varies by regime: +0.3% below 200 GeV, +0.5% between 200-500 GeV, +1% above 500 GeV
        pT_up_df_tmp = (
            df.Define("chi2ndof", "ROOT::VecOps::Where(muon_fromGenTrack_Ndof != 0, muon_fromGenTrack_Chi2/muon_fromGenTrack_Ndof, 999.)")
            .Define("ptErrOverPt2", "ROOT::VecOps::Where(muon_fromGenTrack_Pt > 0, muon_fromGenTrack_PtErr / (muon_fromGenTrack_Pt * muon_fromGenTrack_Pt), 999.)")
            .Define("quality_mask", "chi2ndof < 35. && muon_fromGenTrack_NumValidHits > 7 && ptErrOverPt2 < 1e-3 && abs(muon_fromGenTrack_Eta) < 0.9")
            .Define(
                "pT_max_up",
                "ROOT::VecOps::Max(muon_fromGenTrack_Pt[quality_mask]) < 200 ? ROOT::VecOps::Max(muon_fromGenTrack_Pt[quality_mask])*1.003 : "
                "(ROOT::VecOps::Max(muon_fromGenTrack_Pt[quality_mask]) > 500 ? ROOT::VecOps::Max(muon_fromGenTrack_Pt[quality_mask])*1.01 : "
                "ROOT::VecOps::Max(muon_fromGenTrack_Pt[quality_mask])*1.005)"
            )
            .Define("n_Seg", "nmuon_dtSeg_t0timing")
            .Define("pT_max_up_clipped", f"std::min(pT_max_up, {PT_MAX_CLIP})")
            .Define("n_Seg_clipped",  f"std::min(n_Seg,  {N_SEG_CLIP})")
        )

        # Define pT-shifted dataframe for pT scale systematic (downward variation)
        # pT scale factor varies by regime: -0.3% below 200 GeV, -0.5% between 200-500 GeV, -1% above 500 GeV
        pT_down_df_tmp = (
            df.Define("chi2ndof", "ROOT::VecOps::Where(muon_fromGenTrack_Ndof != 0, muon_fromGenTrack_Chi2/muon_fromGenTrack_Ndof, 999.)")
            .Define("ptErrOverPt2", "ROOT::VecOps::Where(muon_fromGenTrack_Pt > 0, muon_fromGenTrack_PtErr / (muon_fromGenTrack_Pt * muon_fromGenTrack_Pt), 999.)")
            .Define("quality_mask", "chi2ndof < 35. && muon_fromGenTrack_NumValidHits > 7 && ptErrOverPt2 < 1e-3 && abs(muon_fromGenTrack_Eta) < 0.9")
            .Define(
                "pT_max_down",
                "ROOT::VecOps::Max(muon_fromGenTrack_Pt[quality_mask]) < 200 ? ROOT::VecOps::Max(muon_fromGenTrack_Pt[quality_mask])*0.997 : "
                "(ROOT::VecOps::Max(muon_fromGenTrack_Pt[quality_mask]) > 500 ? ROOT::VecOps::Max(muon_fromGenTrack_Pt[quality_mask])*0.99 : "
                "ROOT::VecOps::Max(muon_fromGenTrack_Pt[quality_mask])*0.995)"
            )
            .Define("n_Seg", "nmuon_dtSeg_t0timing")
            .Define("pT_max_down_clipped", f"std::min(pT_max_down, {PT_MAX_CLIP})")
            .Define("n_Seg_clipped",  f"std::min(n_Seg,  {N_SEG_CLIP})")
        )

        # Shorthand variable names for histogram filling axes
        pT_var = "pT_max_clipped"
        pT_up_var = "pT_max_up_clipped"
        pT_down_var = "pT_max_down_clipped"
        n_Seg_var = "n_Seg_clipped"

        # Define RNN score cut boundaries for pass/fail regions per analysis region
        # bnd_nominal: nominal cut, bnd_up/down: RNN score syst variations, bnd_t0_up/down: t0 noise syst (±|noise|)
        if args.region == 'sr':
            bnd_nominal = ['RNNScore >= 0.9999', 'RNNScore < 0.9999']
            bnd_up = ['RNNScore >= 0.99999', 'RNNScore < 0.99999']
            bnd_down = ['RNNScore >= 0.999', 'RNNScore < 0.999']
            bnd_t0_up = ['RNNScore_t0syst_up >= 0.9999', 'RNNScore_t0syst_up < 0.9999']
            bnd_t0_down = ['RNNScore_t0syst_down >= 0.9999', 'RNNScore_t0syst_down < 0.9999']
        if args.region == 'vr1':
            # VR1 uses a window cut: pass requires intermediate RNN scores (between ~signal-like and background-like)
            bnd_nominal = ['RNNScore >= 0.45 & RNNScore < 0.9999', 'RNNScore < 0.45']
            bnd_up = ['RNNScore >= 0.50 & RNNScore < 0.9999', 'RNNScore < 0.50']
            bnd_down = ['RNNScore >= 0.40 & RNNScore < 0.9999', 'RNNScore < 0.40']
            bnd_t0_up = ['RNNScore_t0syst_up >= 0.45 & RNNScore_t0syst_up < 0.9999', 'RNNScore_t0syst_up < 0.45']
            bnd_t0_down = ['RNNScore_t0syst_down >= 0.45 & RNNScore_t0syst_down < 0.9999', 'RNNScore_t0syst_down < 0.45']
        if args.region == 'vr2':
            bnd_nominal = ['RNNScore >= 0.9999', 'RNNScore < 0.9999']
            bnd_up = ['RNNScore >= 0.99999', 'RNNScore < 0.99999']
            bnd_down = ['RNNScore >= 0.999', 'RNNScore < 0.999']
            bnd_t0_up = ['RNNScore_t0syst_up >= 0.9999', 'RNNScore_t0syst_up < 0.9999']
            bnd_t0_down = ['RNNScore_t0syst_down >= 0.9999', 'RNNScore_t0syst_down < 0.9999']
        
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
        # Up systematic uses RNN scores from t0 + |noise|, down uses t0 - |noise|
        rnn_t0_up_pass_df = df2.Filter(bnd_t0_up[0])
        rnn_t0_up_fail_df = df2.Filter(bnd_t0_up[1])
        rnn_t0_down_pass_df = df2.Filter(bnd_t0_down[0])
        rnn_t0_down_fail_df = df2.Filter(bnd_t0_down[1])

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
        if args.region == 'vr2':
                rnn_score_hist = df2.Histo1D(("hist_RNNScore", "hist_RNNScore; RNN Score; Ratio of Events / Bin", 
                    100, 0, 1),
                    "RNNScore")
                rnn_score_hist.Scale(1 / rnn_score_hist.Integral())

        # Extract era info from input filename for output naming
        # e.g., "skimmed_matched_muon_sr_Ntuplizer-Cosmics_All_v4.root" -> "All"
        # e.g., "skimmed_matched_muon_sr_Ntuplizer-Cosmics_Run2022B-CosmicTP-PromptReco-v1_v4.root" -> "Run2022B"
        input_basename = Path(args.inputFile).stem
        era_match = re.search(r'Ntuplizer-Cosmics_(Run\d{4}[A-Z]|All)', input_basename)
        era_suffix = f"_{era_match.group(1)}" if era_match else ""
        
        # Write all histograms to output ROOT file for use as 2DAlphabet inputs
        output_filename = f"EaDM_Run3_Cosmics_Data{era_suffix}_{args.region.upper()}.root"
        print("Saving to:", output_dir+f"/2DA/{output_filename}")
        root_file = ROOT.TFile(output_dir+f"/2DA/{output_filename}", "RECREATE")
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
        if args.region == 'vr2': rnn_score_hist.Write()
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
            elif match and "SurfaceDepth" in Path(file).stem:
                depth = re.search(r'SurfaceDepth-e(\d+)', Path(file).stem)
                number = match.group(1)
                new_filename = f"EaDM_Signal_M{number}GeV_e{depth.group(1)}_{args.region.upper()}.root"
            else:
                print("No matching number found")
                continue
            print("Saving to:", output_dir+f"/2DA/{new_filename}")

            df = ROOT.RDataFrame("tree;1", file)

            # Define derived columns for the nominal 2D histogram inputs
            df2 = (
                df.Define("n_Seg", "nmuon_dtSeg_t0timing")                            # Total number of DT segments per event
                .Define("chi2ndof", "ROOT::VecOps::Where(muon_fromGenTrack_Ndof != 0, muon_fromGenTrack_Chi2/muon_fromGenTrack_Ndof, 999.)")  # Chi2/ndof, protect against division by zero
                .Define("ptErrOverPt2", "ROOT::VecOps::Where(muon_fromGenTrack_Pt > 0, muon_fromGenTrack_PtErr / (muon_fromGenTrack_Pt * muon_fromGenTrack_Pt), 999.)")  # ptErr/pT^2
                .Define("quality_mask", "chi2ndof < 35. && muon_fromGenTrack_NumValidHits > 7 && ptErrOverPt2 < 1e-3 && abs(muon_fromGenTrack_Eta) < 0.9")  # Select good-quality muon tracks
                .Define("pT_max", "ROOT::VecOps::Max(muon_fromGenTrack_Pt[quality_mask])")        # Highest pT among quality muons
                .Define("pT_max_clipped", f"std::min(pT_max, {PT_MAX_CLIP})")                     # Clip pT to stay within histogram range
                .Define("n_Seg_clipped", f"std::min(n_Seg, {N_SEG_CLIP})")                        # Clip segment count to stay within histogram range
            )

            # Define pT-shifted dataframe for pT scale systematic (upward variation)
            # pT scale factor varies by regime: +0.3% below 200 GeV, +0.5% between 200-500 GeV, +1% above 500 GeV
            pT_up_df_tmp = (
                df.Define("chi2ndof", "ROOT::VecOps::Where(muon_fromGenTrack_Ndof != 0, muon_fromGenTrack_Chi2/muon_fromGenTrack_Ndof, 999.)")
                .Define("ptErrOverPt2", "ROOT::VecOps::Where(muon_fromGenTrack_Pt > 0, muon_fromGenTrack_PtErr / (muon_fromGenTrack_Pt * muon_fromGenTrack_Pt), 999.)")
                .Define("quality_mask", "chi2ndof < 35. && muon_fromGenTrack_NumValidHits > 7 && ptErrOverPt2 < 1e-3 && abs(muon_fromGenTrack_Eta) < 0.9")
                .Define(
                    "pT_max_up",
                    "ROOT::VecOps::Max(muon_fromGenTrack_Pt[quality_mask]) < 200 ? ROOT::VecOps::Max(muon_fromGenTrack_Pt[quality_mask])*1.003 : "
                    "(ROOT::VecOps::Max(muon_fromGenTrack_Pt[quality_mask]) > 500 ? ROOT::VecOps::Max(muon_fromGenTrack_Pt[quality_mask])*1.01 : "
                    "ROOT::VecOps::Max(muon_fromGenTrack_Pt[quality_mask])*1.005)"
                )
                .Define("n_Seg", "nmuon_dtSeg_t0timing")
                .Define("pT_max_up_clipped", f"std::min(pT_max_up, {PT_MAX_CLIP})")
                .Define("n_Seg_clipped",  f"std::min(n_Seg,  {N_SEG_CLIP})")
            )

            # Define pT-shifted dataframe for pT scale systematic (downward variation)
            # pT scale factor varies by regime: -0.3% below 200 GeV, -0.5% between 200-500 GeV, -1% above 500 GeV
            pT_down_df_tmp = (
                df.Define("chi2ndof", "ROOT::VecOps::Where(muon_fromGenTrack_Ndof != 0, muon_fromGenTrack_Chi2/muon_fromGenTrack_Ndof, 999.)")
                .Define("ptErrOverPt2", "ROOT::VecOps::Where(muon_fromGenTrack_Pt > 0, muon_fromGenTrack_PtErr / (muon_fromGenTrack_Pt * muon_fromGenTrack_Pt), 999.)")
                .Define("quality_mask", "chi2ndof < 35. && muon_fromGenTrack_NumValidHits > 7 && ptErrOverPt2 < 1e-3 && abs(muon_fromGenTrack_Eta) < 0.9")
                .Define(
                    "pT_max_down",
                    "ROOT::VecOps::Max(muon_fromGenTrack_Pt[quality_mask]) < 200 ? ROOT::VecOps::Max(muon_fromGenTrack_Pt[quality_mask])*0.997 : "
                    "(ROOT::VecOps::Max(muon_fromGenTrack_Pt[quality_mask]) > 500 ? ROOT::VecOps::Max(muon_fromGenTrack_Pt[quality_mask])*0.99 : "
                    "ROOT::VecOps::Max(muon_fromGenTrack_Pt[quality_mask])*0.995)"
                )
                .Define("n_Seg", "nmuon_dtSeg_t0timing")
                .Define("pT_max_down_clipped", f"std::min(pT_max_down, {PT_MAX_CLIP})")
                .Define("n_Seg_clipped",  f"std::min(n_Seg,  {N_SEG_CLIP})")
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
                    bnd_t0_up = ['RNNScore_t0syst_up >= 0.9999', 'RNNScore_t0syst_up < 0.9999']
                    bnd_t0_down = ['RNNScore_t0syst_down >= 0.9999', 'RNNScore_t0syst_down < 0.9999']
                elif sample_type == 'BkgMC':
                    bnd_nominal = ['RNNScore >= 0.9', 'RNNScore < 0.9']
                    bnd_up = ['RNNScore >= 0.95', 'RNNScore < 0.95']
                    bnd_down = ['RNNScore >= 0.81', 'RNNScore < 0.81']
                    bnd_t0_up = ['RNNScore_t0syst_up >= 0.9', 'RNNScore_t0syst_up < 0.9']
                    bnd_t0_down = ['RNNScore_t0syst_down >= 0.9', 'RNNScore_t0syst_down < 0.9']
            if args.region == 'vr1':
                bnd_nominal = ['RNNScore >= 0.45 & RNNScore < 0.9999', 'RNNScore < 0.45']
                bnd_up = ['RNNScore >= 0.50 & RNNScore < 0.9999', 'RNNScore < 0.50']
                bnd_down = ['RNNScore >= 0.40 & RNNScore < 0.9999', 'RNNScore < 0.40']
                bnd_t0_up = ['RNNScore_t0syst_up >= 0.45 & RNNScore_t0syst_up < 0.9999', 'RNNScore_t0syst_up < 0.45']
                bnd_t0_down = ['RNNScore_t0syst_down >= 0.45 & RNNScore_t0syst_down < 0.9999', 'RNNScore_t0syst_down < 0.45']
            if args.region == 'vr2':
                bnd_nominal = ['RNNScore >= 0.9999', 'RNNScore < 0.9999']
                bnd_up = ['RNNScore >= 0.99999', 'RNNScore < 0.99999']
                bnd_down = ['RNNScore >= 0.999', 'RNNScore < 0.999']
                bnd_t0_up = ['RNNScore_t0syst_up >= 0.9999', 'RNNScore_t0syst_up < 0.9999']
                bnd_t0_down = ['RNNScore_t0syst_down >= 0.9999', 'RNNScore_t0syst_down < 0.9999']

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
            # t0 noise-shifted RNN score cut (t0 timing uncertainty)
            # Up systematic uses RNN scores from t0 + |noise|, down uses t0 - |noise|
            rnn_t0_up_pass_df = df2.Filter(bnd_t0_up[0])
            rnn_t0_up_fail_df = df2.Filter(bnd_t0_up[1])
            rnn_t0_down_pass_df = df2.Filter(bnd_t0_down[0])
            rnn_t0_down_fail_df = df2.Filter(bnd_t0_down[1])

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
            if args.region == 'vr2':
                rnn_score_hist = df2.Histo1D(("hist_RNNScore", "hist_RNNScore; RNN Score; Ratio of Events / Bin", 
                    100, 0, 1),
                    "RNNScore")
                rnn_score_hist.Scale(1 / rnn_score_hist.Integral())

            # Retrieve cutflow histogram from original (pre-RNN) ntuple to get total event count for normalization
            # The original input file contains the cutflow histogram
            f = ROOT.TFile.Open(args.inputFile)
            cutflow_hist = f.Get("h_cutflow")
            cutflow_hist.SetDirectory(0)   # Detach from file so it survives after Close()
            f.Close()

            print(f"Total # of events in sample {Path(args.inputFile).stem}:", cutflow_hist.GetBinContent(1))

            if sample_type == 'Signal':
                # Normalize signal histograms to 100 events (arbitrary reference cross section)
                # so that 2DAlphabet can later re-scale by the true signal cross section
                print("Scaling histograms!")
                for hist in [pass_hist, fail_hist, pass_pT_up_hist, pass_pT_down_hist, fail_pT_up_hist, fail_pT_down_hist, pass_t0_up_hist, pass_t0_down_hist, fail_t0_up_hist, fail_t0_down_hist, pass_rnn_up_hist, pass_rnn_down_hist, fail_rnn_up_hist, fail_rnn_down_hist]:
                    hist.Scale(100 / cutflow_hist.GetBinContent(1))

            # Replace empty bins with a small sentinel value (1e-8) to avoid log(0) issues in 2DAlphabet fits
            for x_bin in range(1, pass_hist.GetNbinsX() + 1):
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
            if args.region == 'vr2': rnn_score_hist.Write()
            root_file.Close()
