#import necessary libraries
import uproot, ROOT, numpy
import keras
from keras import layers
from tensorflow.keras.models import Sequential
from tensorflow.keras.preprocessing.sequence import pad_sequences
import glob

# Build RNN from checkpoint weights/biases

checkpoint_path='/home/users/smasanam/EarthAsDMProject/CMSSW_13_0_10/src/CosmicsAnalyzer/EarthAsDMAnalyzer/test/rnn_v5_188k_final_weights.ckpt'

cp_callback = keras.callbacks.ModelCheckpoint(
    filepath=checkpoint_path, 
    verbose=1, 
    save_best_only=True,
    save_weights_only=True)

# Build the model.
model = Sequential([
    layers.Masking(mask_value=-9999.),
    layers.Bidirectional(layers.LSTM(64)),
    layers.Dense(64, activation='relu'),
    layers.Dense(1, activation='sigmoid')
])

model.load_weights(checkpoint_path)

# Define directory & ntuple subdirectories to create the hpass_fail prep file from
dir_path = '/ceph/cms/store/user/tvami/EarthAsDM/Cosmics'
subdirs = [
    "crab_Ntuplizer-Cosmics_Run2022B-CosmicTP-PromptReco-v1_v3",
    "crab_Ntuplizer-Cosmics_Run2022C-CosmicTP-PromptReco-v1_v3",
    "crab_Ntuplizer-Cosmics_Run2022D-CosmicTP-PromptReco-v1_v3",
    "crab_Ntuplizer-Cosmics_Run2022D-CosmicTP-PromptReco-v2_v3",
    "crab_Ntuplizer-Cosmics_Run2022D-CosmicTP-PromptReco-v3_v3",
    "crab_Ntuplizer-Cosmics_Run2022E-CosmicTP-PromptReco-v1_v3",
    "crab_Ntuplizer-Cosmics_Run2022F-CosmicTP-PromptReco-v1_v3",
    "crab_Ntuplizer-Cosmics_Run2022G-CosmicTP-PromptReco-v1_v3",
    "crab_Ntuplizer-Cosmics_Run2023A-CosmicTP-PromptReco-v1_v3",
    "crab_Ntuplizer-Cosmics_Run2023A-CosmicTP-PromptReco-v2_v3",
    "crab_Ntuplizer-Cosmics_Run2023B-CosmicTP-PromptReco-v1_v3",
    "crab_Ntuplizer-Cosmics_Run2023C-CosmicTP-PromptReco-v1_v3",
    "crab_Ntuplizer-Cosmics_Run2023C-CosmicTP-PromptReco-v2_v3",
    "crab_Ntuplizer-Cosmics_Run2023C-CosmicTP-PromptReco-v3_v3",
    "crab_Ntuplizer-Cosmics_Run2023C-CosmicTP-PromptReco-v4_v3",
    "crab_Ntuplizer-Cosmics_Run2023D-CosmicTP-PromptReco-v1_v3",
    "crab_Ntuplizer-Cosmics_Run2023D-CosmicTP-PromptReco-v2_v3",
    "crab_Ntuplizer-Cosmics_Run2023E-CosmicTP-PromptReco-v1_v3",
    "crab_Ntuplizer-Cosmics_Run2023F-CosmicTP-PromptReco-v1_v3",
    "crab_Ntuplizer-Cosmics_Run2024A-CosmicTP-PromptReco-v1_v3",
    "crab_Ntuplizer-Cosmics_Run2024B-CosmicTP-PromptReco-v1_v3",
    "crab_Ntuplizer-Cosmics_Run2024C-CosmicTP-PromptReco-v1_v3",
    "crab_Ntuplizer-Cosmics_Run2024D-CosmicTP-PromptReco-v1_v3",
    "crab_Ntuplizer-Cosmics_Run2024E-CosmicTP-PromptReco-v1_v3",
    "crab_Ntuplizer-Cosmics_Run2024E-CosmicTP-PromptReco-v2_v3",
    "crab_Ntuplizer-Cosmics_Run2024F-CosmicTP-PromptReco-v1_v3",
    "crab_Ntuplizer-Cosmics_Run2024G-CosmicTP-PromptReco-v1_v3",
    "crab_Ntuplizer-Cosmics_Run2024H-CosmicTP-PromptReco-v1_v3",
    "crab_Ntuplizer-Cosmics_Run2024I-CosmicTP-PromptReco-v1_v3",
    "crab_Ntuplizer-Cosmics_Run2024I-CosmicTP-PromptReco-v2_v3",
    "crab_Ntuplizer-Cosmics_Run2024J-CosmicTP-PromptReco-v1_v3",
    "crab_Ntuplizer-Cosmics_Run2025A-CosmicTP-PromptReco-v1_v3",
    "crab_Ntuplizer-Cosmics_Run2025A-CosmicTP-PromptReco-v2_v3",
    "crab_Ntuplizer-Cosmics_Run2025B-CosmicTP-PromptReco-v1_v3",
    "crab_Ntuplizer-Cosmics_Run2025C-CosmicTP-PromptReco-v1_v3",
    "crab_Ntuplizer-Cosmics_Run2025C-CosmicTP-PromptReco-v2_v3",
    "crab_Ntuplizer-Cosmics_Run2025D-CosmicTP-PromptReco-v1_v3",
    "crab_Ntuplizer-Cosmics_Run2025E-CosmicTP-PromptReco-v1_v3",
    "crab_Ntuplizer-Cosmics_Run2025F-CosmicTP-PromptReco-v1_v3",
    "crab_Ntuplizer-Cosmics_Run2025F-CosmicTP-PromptReco-v2_v3",
    "crab_Ntuplizer-Cosmics_Run2025G-CosmicTP-PromptReco-v1_v3"
]

# Define corresponding labels to subdirs
labels = [
    "Data-Run2022B-CosmicTP-PromptReco-v1",
    "Data-Run2022C-CosmicTP-PromptReco-v1",
    "Data-Run2022D-CosmicTP-PromptReco-v1",
    "Data-Run2022D-CosmicTP-PromptReco-v2",
    "Data-Run2022D-CosmicTP-PromptReco-v3",
    "Data-Run2022E-CosmicTP-PromptReco-v1",
    "Data-Run2022F-CosmicTP-PromptReco-v1",
    "Data-Run2022G-CosmicTP-PromptReco-v1",
    "Data-Run2023A-CosmicTP-PromptReco-v1",
    "Data-Run2023A-CosmicTP-PromptReco-v2",
    "Data-Run2023B-CosmicTP-PromptReco-v1",
    "Data-Run2023C-CosmicTP-PromptReco-v1",
    "Data-Run2023C-CosmicTP-PromptReco-v2",
    "Data-Run2023C-CosmicTP-PromptReco-v3",
    "Data-Run2023C-CosmicTP-PromptReco-v4",
    "Data-Run2023D-CosmicTP-PromptReco-v1",
    "Data-Run2023D-CosmicTP-PromptReco-v2",
    "Data-Run2023E-CosmicTP-PromptReco-v1",
    "Data-Run2023F-CosmicTP-PromptReco-v1",
    "Data-Run2024A-CosmicTP-PromptReco-v1",
    "Data-Run2024B-CosmicTP-PromptReco-v1",
    "Data-Run2024C-CosmicTP-PromptReco-v1",
    "Data-Run2024D-CosmicTP-PromptReco-v1",
    "Data-Run2024E-CosmicTP-PromptReco-v1",
    "Data-Run2024E-CosmicTP-PromptReco-v2",
    "Data-Run2024F-CosmicTP-PromptReco-v1",
    "Data-Run2024G-CosmicTP-PromptReco-v1",
    "Data-Run2024H-CosmicTP-PromptReco-v1",
    "Data-Run2024I-CosmicTP-PromptReco-v1",
    "Data-Run2024I-CosmicTP-PromptReco-v2",
    "Data-Run2024J-CosmicTP-PromptReco-v1",
    "Data-Run2025A-CosmicTP-PromptReco-v1",
    "Data-Run2025A-CosmicTP-PromptReco-v2",
    "Data-Run2025B-CosmicTP-PromptReco-v1",
    "Data-Run2025C-CosmicTP-PromptReco-v1",
    "Data-Run2025C-CosmicTP-PromptReco-v2",
    "Data-Run2025D-CosmicTP-PromptReco-v1",
    "Data-Run2025E-CosmicTP-PromptReco-v1",
    "Data-Run2025F-CosmicTP-PromptReco-v1",
    "Data-Run2025F-CosmicTP-PromptReco-v2",
    "Data-Run2025G-CosmicTP-PromptReco-v1"
]

# Define counter and file name to save hpf prep file to
file_name = 'Data_hpf_run3_22_23_24_25G_v1.root'
n = 0

# Loop over subdirectories
for file in subdirs:
    print(f'{file} with label {labels[n]}')
    
    # If this is the first subdir, create new root file. Else, update
    if n == 0: root_file = ROOT.TFile(file_name, "RECREATE")
    else: root_file = ROOT.TFile(file_name, "UPDATE")
    tree = ROOT.TTree(labels[n], labels[n])
    print(labels[n])
    n += 1

    # Find all ntuple files in subdirectory
    input_files = glob.glob(f'{dir_path}/{file}/**/*.root', recursive = True)
    print(len(input_files))

    # Define all desired variables to feed into branches of root file
    total = numpy.zeros(1, dtype=int)
    trigger_pass = numpy.zeros(1, dtype=int)
    presel_seg_pass = numpy.zeros(1, dtype=int)
    presel_pT_pass = numpy.zeros(1, dtype=int)    
    var_track_pt = numpy.zeros(1, dtype=float)
    var_track_eta = numpy.zeros(1, dtype=float)
    var_track_chi2 = numpy.zeros(1, dtype=float)
    var_track_ndof = numpy.zeros(1, dtype=float)
    var_track_numberOfValidHits = numpy.zeros(1, dtype=float)
    var_track_validFraction = numpy.zeros(1, dtype=float)
    var_track_ptErr = numpy.zeros(1, dtype=float)
    var_muon_energy = numpy.zeros(1, dtype=float)
    var_muon_chi2 = numpy.zeros(1, dtype=float)
    var_muon_comb_ndof = numpy.zeros(1, dtype=float)
    var_muon_hasMatchedGenTrack = numpy.zeros(1, dtype=int)
    var_muon_fromGenTrack_Pt = numpy.zeros(1, dtype=float)
    var_muon_fromGenTrack_PtErr = numpy.zeros(1, dtype=float)
    var_muon_fromGenTrack_Chi2 = numpy.zeros(1, dtype=float)
    var_muon_fromGenTrack_Ndof = numpy.zeros(1, dtype=float)
    var_muon_fromGenTrack_NumValidHits = numpy.zeros(1, dtype=float)
    var_muon_fromGenTrack_ValidFraction = numpy.zeros(1, dtype=float)
    var_nSeg = numpy.zeros(1, dtype=float)
    var_nTrack = numpy.zeros(1, dtype=float)
    var_rnn = numpy.zeros(1, dtype=float)
    var_rnn_t0 = numpy.zeros(1, dtype=float)



    #var_gen_pt = numpy.zeros(1, dtype=float)

    # Define tree branches to save desired variables
    tree.Branch("totalEvents", total, "totalEvents/I")
    tree.Branch("triggerPass", trigger_pass, "triggerPass/I")
    tree.Branch("segPass", presel_seg_pass, "segPass/I")
    tree.Branch("validpTPass", presel_pT_pass, "validpTPass/I")
    tree.Branch("track_pt", var_track_pt, "track_pt/D") # The "/D" specifies the type as double
    tree.Branch("track_eta", var_track_eta, "track_eta/D")
    tree.Branch("track_chi2", var_track_chi2, "track_chi2/D")
    tree.Branch("track_ndof", var_track_ndof, "track_ndof/D")
    tree.Branch("track_numberOfValidHits", var_track_numberOfValidHits, "track_numberOfValidHits/D")
    tree.Branch("track_validFraction", var_track_validFraction, "track_validFraction/D")
    tree.Branch("muon_chi2", var_muon_chi2, "muon_chi2/D")
    tree.Branch("muon_comb_ndof", var_muon_comb_ndof, "muon_comb_ndof/D")
    tree.Branch("muon_energy", var_muon_energy, "muon_energy/D")
    tree.Branch("muon_hasMatchedGenTrack", var_muon_hasMatchedGenTrack, "muon_hasMatchedGenTrack/I")
    tree.Branch("muon_fromGenTrack_Pt", var_muon_fromGenTrack_Pt, "muon_fromGenTrack_Pt/D")
    tree.Branch("muon_fromGenTrack_Chi2", var_muon_fromGenTrack_Chi2, "muon_fromGenTrack_Chi2/D")
    tree.Branch("muon_fromGenTrack_Ndof", var_muon_fromGenTrack_Ndof, "muon_fromGenTrack_Ndof/D")
    tree.Branch("muon_fromGenTrack_NumValidHits", var_muon_fromGenTrack_NumValidHits, "muon_fromGenTrack_NumValidHits/D")
    tree.Branch("muon_fromGenTrack_ValidFraction", var_muon_fromGenTrack_ValidFraction, "muon_fromGenTrack_ValidFraction/D")
    tree.Branch("nSeg", var_nSeg, "nSeg/D")
    tree.Branch("nTracks", var_nTrack, "nTracks/D")
    tree.Branch("RNNscore", var_rnn, "RNNscore/D")
    tree.Branch("RNNscore_t0", var_rnn_t0, "RNNscore_t0/D")
    #tree.Branch("gen_pt", var_gen_pt, "gen_pt/D")

    # Define helper variables to diagnose preselection efficiencies
    event_num = 0
    trigger_cut = 0
    seg_cut = 0
    pT_cut = 0

    try:
        # Loop over individual ntuple files
        for file in input_files:
            ntuple2 = uproot.open(file)
            # Convert leafs to numpy arrays
            tree2 = ntuple2["muonPhiAnalyzer/tree"]
            HLT_L1SingleMuCosmics = numpy.asarray(tree2["HLT_L1SingleMuCosmics"])
            run = numpy.asarray(tree2["run"])
            ls = numpy.asarray(tree2["ls"])
            event = numpy.asarray(tree2["event"])
            track_pt = numpy.asarray(tree2["track_pt"])
            track_chi2 = numpy.asarray(tree2["track_chi2"])
            track_ndof = numpy.asarray(tree2["track_ndof"])
            track_numberOfValidHits = numpy.asarray(tree2["track_numberOfValidHits"])
            track_validFraction = numpy.asarray(tree2["track_validFraction"])
            track_ptErr = numpy.asarray(tree2["track_ptErr"])
            track_eta = numpy.asarray(tree2["track_eta"])
            muon_chi2 = numpy.asarray(tree2["muon_chi2"])
            muon_comb_ndof = numpy.asarray(tree2["muon_comb_ndof"])
            muon_energy = numpy.asarray(tree2["muon_energy"])
            muon_dtSeg_t0timing = numpy.asarray(tree2["muon_dtSeg_t0timing"])
            muon_dtSeg_globX = numpy.asarray(tree2["muon_dtSeg_globX"])
            muon_dtSeg_globY = numpy.asarray(tree2["muon_dtSeg_globY"])
            muon_dtSeg_globZ = numpy.asarray(tree2["muon_dtSeg_globZ"])
            muon_hasMatchedGenTrack = numpy.asarray(tree2["muon_hasMatchedGenTrack"])
            muon_fromGenTrack_Pt = numpy.asarray(tree2["muon_fromGenTrack_Pt"])
            muon_fromGenTrack_PtErr = numpy.asarray(tree2["muon_fromGenTrack_PtErr"])
            muon_fromGenTrack_Chi2 = numpy.asarray(tree2["muon_fromGenTrack_Chi2"])
            muon_fromGenTrack_Ndof = numpy.asarray(tree2["muon_fromGenTrack_Ndof"])
            muon_fromGenTrack_NumValidHits = numpy.asarray(tree2["muon_fromGenTrack_NumValidHits"])
            muon_fromGenTrack_ValidFraction = numpy.asarray(tree2["muon_fromGenTrack_ValidFraction"])
            #gen_pt = numpy.asarray(tree2["gen_pt"])

            # Define lists to save leaf data that passes preselection in a given file. This step is necessary to ensure RNN
            # isn't classifying too many events at once. The bottle neck is converting all the data into a tensor so
            # this naturally divides up events by file which is a manageable size to convert to a tensor.
            total_data = []
            trigger_cut_data = []
            seg_cut_data = []
            pT_cut_data = []
            track_pt_data = []
            track_eta_data = []
            track_chi2_data = []
            track_ndof_data = []
            track_numberOfValidHits_data = []
            track_validFraction_data = []
            track_ptErr_data = []
            muon_energy_data = []
            muon_chi2_data = []
            muon_comb_ndof_data = []
            muon_hasMatchedGenTrack_data = []
            muon_fromGenTrack_Pt_data = []
            muon_fromGenTrack_PtErr_data = []
            muon_fromGenTrack_Chi2_data = []
            muon_fromGenTrack_Ndof_data = []
            muon_fromGenTrack_NumValidHits_data = []
            muon_fromGenTrack_ValidFraction_data = []
            n_data = []
            nTrack_data = []
            rnn_data = []
            rnn_t0 = []
            #gen_pt_data = []

            # To reduce overhead, for each ntuple file, redefine nMax so padding isn't unnecessarily large
            nMax = 0
            for i in range(muon_dtSeg_t0timing.shape[0]):
                if muon_dtSeg_t0timing[i][(muon_dtSeg_t0timing[i] < 9998) & (muon_dtSeg_t0timing[i] > -998)].shape[0] > nMax: nMax = muon_dtSeg_t0timing[i][(muon_dtSeg_t0timing[i] < 9998) & (muon_dtSeg_t0timing[i] > -998)].shape[0]

            # Loop over each event in ntuple
            for i in range(muon_dtSeg_t0timing.shape[0]):
                if event_num % 50000 == 0 and event_num != 0:
                    ''' To keep track of progress '''
                    print(event_num, trigger_cut, seg_cut, pT_cut)
                    print(round(100*trigger_cut/event_num, 1), round(100*seg_cut/event_num, 1), round(100*pT_cut/event_num, 1))
                
                event_num += 1
                
                # If event doesn't pass HLT_L1SingleMuCosmics, indicate that and continue to next event
                if HLT_L1SingleMuCosmics[i] == 0:
                    total_data.append(1)
                    trigger_cut_data.append(0)
                    seg_cut_data.append(0)
                    pT_cut_data.append(0)
                    continue

                trigger_cut += 1

                cond = (muon_dtSeg_t0timing[i] < 9998) & (muon_dtSeg_t0timing[i] > -998)
                
                # If event doesn't pass nSeg preselection, indicate that and continue
                if numpy.sum(cond) < 3:
                    total_data.append(1)
                    trigger_cut_data.append(1)
                    seg_cut_data.append(0)
                    pT_cut_data.append(0)
                    continue

                seg_cut += 1
                
                # If event doesn't pass nTrack preselection, indicate that and continue
                if len(track_pt[i]) == 0:
                    total_data.append(1)
                    trigger_cut_data.append(1)
                    seg_cut_data.append(1)
                    pT_cut_data.append(0)
                    continue

                pT_cut += 1

                # Create modified muon_dtSeg_t0timing timing to quantify muon_dtSeg_t0timing systematic
                sys_t0 = muon_dtSeg_t0timing[i][cond] + numpy.random.normal(0, 1, size=muon_dtSeg_t0timing[i][cond].shape)

                # Index by timing and append desired variables to lists
                ind = numpy.argsort(muon_dtSeg_t0timing[i][cond])
                ind_sys_t0 = numpy.argsort(sys_t0)
                total_data.append(1)
                trigger_cut_data.append(1)
                seg_cut_data.append(1)
                pT_cut_data.append(1)
                track_pt_data.append(numpy.max(track_pt[i]))
                track_eta_data.append(track_eta[i][numpy.argmax(numpy.abs(track_eta[i]))])
                track_chi2_data.append(track_chi2[i][numpy.argmax(track_pt[i])])
                track_ndof_data.append(track_ndof[i][numpy.argmax(track_pt[i])])
                track_numberOfValidHits_data.append(track_numberOfValidHits[i][numpy.argmax(track_pt[i])])
                track_validFraction_data.append(track_validFraction[i][numpy.argmax(track_pt[i])])
                track_ptErr_data.append(track_ptErr[i][numpy.argmax(track_pt[i])])
                muon_chi2_data.append(numpy.max(muon_chi2[i]))
                muon_comb_ndof_data.append(numpy.max(muon_comb_ndof[i]))
                muon_energy_data.append(numpy.max(muon_energy[i]))
                
                # Check if there is a matched gen track; if not, entries equal -9999 so just fill with first value for each muon_fromGenTrack_variable
                muon_mask = (muon_hasMatchedGenTrack[i] == True)
                if numpy.sum(muon_mask) == 0: muon_mask[0] = True
                
                # For events w/ multiple matched gen tracks, use track w/ least PtErr
                muon_hasMatchedGenTrack_data.append(int(muon_hasMatchedGenTrack[i][muon_mask][numpy.argmax(muon_fromGenTrack_Pt[i][muon_mask])]))
                muon_fromGenTrack_Pt_data.append(muon_fromGenTrack_Pt[i][muon_mask][numpy.argmax(muon_fromGenTrack_Pt[i][muon_mask])])
                muon_fromGenTrack_PtErr_data.append(muon_fromGenTrack_PtErr[i][muon_mask][numpy.argmax(muon_fromGenTrack_Pt[i][muon_mask])])
                muon_fromGenTrack_Chi2_data.append(muon_fromGenTrack_Chi2[i][muon_mask][numpy.argmax(muon_fromGenTrack_Pt[i][muon_mask])])
                muon_fromGenTrack_Ndof_data.append(muon_fromGenTrack_Ndof[i][muon_mask][numpy.argmax(muon_fromGenTrack_Pt[i][muon_mask])])
                muon_fromGenTrack_NumValidHits_data.append(muon_fromGenTrack_NumValidHits[i][muon_mask][numpy.argmax(muon_fromGenTrack_Pt[i][muon_mask])])
                muon_fromGenTrack_ValidFraction_data.append(muon_fromGenTrack_ValidFraction[i][muon_mask][numpy.argmax(muon_fromGenTrack_Pt[i][muon_mask])])
                n_data.append(len(muon_dtSeg_t0timing[i][cond]))
                nTrack_data.append(len(track_pt[i]))
                rnn_data.append(numpy.expand_dims(numpy.swapaxes(pad_sequences(numpy.array([numpy.take_along_axis(muon_dtSeg_t0timing[i][cond], ind, axis=-1), numpy.take_along_axis(muon_dtSeg_globX[i][cond], ind, axis=-1), numpy.take_along_axis(muon_dtSeg_globY[i][cond], ind, axis=-1), numpy.take_along_axis(muon_dtSeg_globZ[i][cond], ind, axis=-1)]), dtype='float64', maxlen=nMax, padding='post', value=-9999.),0,1), axis=0))
                rnn_t0.append(numpy.expand_dims(numpy.swapaxes(pad_sequences(numpy.array([numpy.take_along_axis(sys_t0, ind_sys_t0, axis=-1), numpy.take_along_axis(muon_dtSeg_globX[i][cond], ind_sys_t0, axis=-1), numpy.take_along_axis(muon_dtSeg_globY[i][cond], ind_sys_t0, axis=-1), numpy.take_along_axis(muon_dtSeg_globZ[i][cond], ind_sys_t0, axis=-1)]), dtype='float64', maxlen=nMax, padding='post', value=-9999.),0,1), axis=0))
                #gen_pt_data.append(numpy.max(gen_pt[i]))
                if numpy.max(track_pt[i]) > 90000:
                    '''To flag high-track_pt events'''
                    # print("ROOT File:", file)
                    # print("Run Number:", run[i])
                    # print("ls: ", ls[i])
                    # print("event: ", event[i])
                    # print("track_pt:", numpy.max(track_pt[i]))
                    # print("nSeg:", len(muon_dtSeg_t0timing[i][cond]))
                    # print(f"COMMAND: file dataset={labels[n-1]} run={run[i]} lumi={ls[i]}")

            # As long as there are events in the file, classify them
            if len(rnn_data) != 0:
                rnn_scores = model.predict(numpy.concatenate(rnn_data, axis=0))
                rnn_t0_scores = model.predict(numpy.concatenate(rnn_t0, axis=0))
            
            # Append data from each event to 1 element arrays defined initially. Then fill branches and repeat.
            counter = 0
            for i in range(len(total_data)):
                trigger_pass[0] = -1
                presel_seg_pass[0] = -1
                presel_pT_pass[0] = -1
                var_track_pt[0] = -999999
                var_track_eta[0] = -99
                var_track_chi2[0] = -999999
                var_track_ndof[0] = -999999
                var_track_numberOfValidHits[0] = -999999
                var_track_validFraction[0] = -999999
                var_track_ptErr[0] = -999999
                var_muon_chi2[0] = -999999
                var_muon_comb_ndof[0] = -999999
                var_muon_energy[0] = -99
                muon_hasMatchedGenTrack[0] = -99
                var_muon_fromGenTrack_Pt[0] = -999999
                var_muon_fromGenTrack_PtErr[0] = -999999
                var_muon_fromGenTrack_Chi2[0] = -999999
                var_muon_fromGenTrack_Ndof[0] = -999999
                var_muon_fromGenTrack_NumValidHits[0] = -999999
                var_muon_fromGenTrack_ValidFraction[0] = -999999
                var_nSeg[0] = -99
                var_nTrack[0] = -99
                var_rnn[0] = -99
                var_rnn_t0[0] = -99
                #var_gen_pt[0] = -999999

                total[0] = total_data[i]

                if trigger_cut_data[i] == 0:
                    tree.Fill()
                    continue
                trigger_pass[0] = trigger_cut_data[i]

                if seg_cut_data[i] == 0:
                    tree.Fill()
                    continue
                presel_seg_pass[0] = seg_cut_data[i]

                if pT_cut_data[i] == 0:
                    tree.Fill()
                    continue

                presel_pT_pass[0] = pT_cut_data[i]
                var_track_pt[0] = track_pt_data[counter]
                var_track_eta[0] = track_eta_data[counter]
                var_track_chi2[0] = track_chi2_data[counter]
                var_track_ndof[0] = track_ndof_data[counter]
                var_track_numberOfValidHits[0] = track_numberOfValidHits_data[counter]
                var_track_validFraction[0] = track_validFraction_data[counter]
                var_track_ptErr[0] = track_ptErr_data[counter]
                var_muon_energy[0] = muon_energy_data[counter]
                var_muon_chi2[0] = muon_chi2_data[counter]
                var_muon_comb_ndof[0] = muon_comb_ndof_data[counter]
                var_muon_fromGenTrack_Pt[0] = muon_fromGenTrack_Pt_data[counter]
                var_muon_fromGenTrack_PtErr[0] = muon_fromGenTrack_PtErr_data[counter]
                var_muon_fromGenTrack_Chi2[0] = muon_fromGenTrack_Chi2_data[counter]
                var_muon_fromGenTrack_Ndof[0] = muon_fromGenTrack_Ndof_data[counter]
                var_muon_fromGenTrack_NumValidHits[0] = muon_fromGenTrack_NumValidHits_data[counter]
                var_muon_fromGenTrack_ValidFraction[0] = muon_fromGenTrack_ValidFraction_data[counter]
                var_nSeg[0] = n_data[counter]
                var_nTrack[0] = nTrack_data[counter]
                var_rnn[0] = rnn_scores[counter]
                var_rnn_t0[0] = rnn_t0_scores[counter]
                #var_gen_pt[0] = gen_pt_data[counter]
                tree.Fill()
                counter += 1

        # Write filled up branches to root file and close file in anticipation for next subdir
        tree.Write()
        print(event_num, trigger_cut, seg_cut, pT_cut)
        print(round(100*trigger_cut/event_num, 1), round(100*seg_cut/event_num, 1), round(100*pT_cut/event_num, 1))
        root_file.Close()
    
    except KeyboardInterrupt:
        print("Ctrl+C was pressed!")
        root_file.Close()
        break