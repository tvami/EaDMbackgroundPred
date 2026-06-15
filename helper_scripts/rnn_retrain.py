import ROOT, os, numpy as np
from sklearn.model_selection import train_test_split
import keras
from keras import layers
import tensorflow as tf
from tensorflow.keras.optimizers import RMSprop, Adam
from tensorflow.keras.models import Sequential
import psutil
import gc
from tqdm import tqdm
import glob
from pathlib import Path
import awkward as ak

def print_memory_usage():
    # Get virtual memory statistics
    memory_info = psutil.virtual_memory()
    
    # Total memory (in MB)
    total_memory = memory_info.total / (1024 * 1024)
    
    # Used memory (in MB)
    used_memory = memory_info.used / (1024 * 1024)
    
    # Memory usage as a percentage of total
    memory_percent = memory_info.percent

    print(f"Total Memory: {total_memory:.2f} MB")
    print(f"Used Memory: {used_memory:.2f} MB")
    print(f"Memory Usage: {memory_percent:.2f}%")

### Data Pre-Processing ------------------------------
preprocessing_flag = 1
# IMPORTANT!!!!!!!!!

dir_path = "/ceph/cms/store/user/tvami/EarthAsDM/Ntuples/Ntuples_v4.0.2/"
input_files = [
    "BkgMC/*/matched_muon/skimmed_matched_muon_*_CosmicToMu_Par-MinP-4-MaxP-3000-MinTheta-0-MaxTheta-75_cosmuogen.root",
    "BkgMC/*/matched_muon/skimmed_matched_muon_*_CosmicToMu_Par-MinP-10-MaxP-10000-MinTheta-91-MaxTheta-179_cosmuogen.root",
    "Signal/*/matched_muon/skimmed_matched_muon_*_CosmicToMu_Par-MinP-*-MinTheta-91-MaxTheta-179_cosmuogen.root",
]
labels = ["CosmicMC", "NeutrinoMC", "Signal"]

total_fit_list = []
total_label_list = []

counter = 0
if preprocessing_flag == 1:
    for input_file in input_files:
        
        rootTChain = ROOT.TChain("tree")
        for file in glob.glob(f'{dir_path}/{input_file}'):
            if 'Signal' in file and ('-1000-MinTheta' in file or '-5000-MinTheta' in file or '-10000-MinTheta' in file or '-90000-MinTheta' in file): continue
            print("running on:", Path(file).stem)
            rootTChain.Add(file)

        # Create RDataFrame from input tree
        df_initial = ROOT.RDataFrame(rootTChain)
        df = df_initial.Filter(f"ROOT::VecOps::All(abs(muon_dtSeg_globY) > 125 & abs(muon_dtSeg_globZ) > 125)")
        
        # Extract required jagged branches into Python
        RNN_input_arr = df.AsNumpy([
            "muon_dtSeg_t0timing",
            "muon_dtSeg_globX",
            "muon_dtSeg_globY",
            "muon_dtSeg_globZ"
        ])

        print("Checkpoint 1: Extracted branches")
        print("Check if Y/Z restrictions are implemented properly")
        print(ak.Array(list(RNN_input_arr["muon_dtSeg_globY"]))[:1000])
        print(ak.Array(list(RNN_input_arr["muon_dtSeg_globZ"]))[:1000])

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

        nMax = 274 # ak.max(ak.num(t0_arr))   # Maximum number of segments per event

        # Sort each event by ascending t0
        ind = ak.argsort(t0_arr, axis=-1, ascending=True)

        t0_arr = t0_arr[ind]
        x_arr  = x_arr[ind]
        y_arr  = y_arr[ind]
        z_arr  = z_arr[ind]
        
        print("Checkpoint 2: Sorted each event by ascending t0 ")

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

        print("Checkpoint 3: Created RNN data numpy array with shape", rnn_data.shape)
        total_fit_list.append(rnn_data)
        if 'BkgMC' in input_file and 'MinP-4-MaxP-3000' in input_file: total_label_list.append(np.zeros(rnn_data.shape[0]))
        else: total_label_list.append(np.ones(rnn_data.shape[0]))

    total_fit_arr = np.concatenate([total_fit_list[0], total_fit_list[1], total_fit_list[2]])
    total_label_arr = np.concatenate([total_label_list[0], total_label_list[1], total_label_list[2]])
    print(total_fit_arr.shape, total_label_arr.shape)

    np.save("fit_arr_central_mc_globYZgt125cm.npy", total_fit_arr)
    np.save("label_arr_central_mc_globYZgt125cm.npy", total_label_arr)

print("Before loading data")
print_memory_usage()

if preprocessing_flag == 0:
    total_fit_arr = np.load('fit_arr_central_mc_globYZgt125cm.npy')
    total_label_arr = np.load('label_arr_central_mc_globYZgt125cm.npy')

print(total_fit_arr.shape, total_label_arr.shape)

print("After loading data")
print_memory_usage()

X_train, X_test, Y_train, Y_test = train_test_split(total_fit_arr, total_label_arr, test_size = 0.2, random_state = 0)
X_val, X_test, Y_val, Y_test = train_test_split(X_test, Y_test, test_size = 0.5, random_state = 0)

del total_fit_arr
del total_label_arr
gc.collect()

print("np.bincount of Y_train:", np.bincount(Y_train.astype(np.int64)), "\nnp.bincount of Y_test:", np.bincount(Y_test.astype(np.int64)))

checkpoint_path='rnn_retrain_weights_May2026_globYZgt125cm.ckpt'

earlyStopping = keras.callbacks.EarlyStopping(monitor='val_loss', patience=50, restore_best_weights=True)

csv_logger = keras.callbacks.CSVLogger('training_history_globYZgt125cm.csv', append=True)

cp_callback = keras.callbacks.ModelCheckpoint(
    filepath=checkpoint_path, 
    verbose=1, 
    save_best_only=True,
    save_weights_only=True,
    monitor='val_loss',
    mode='min')

# Build the model.
model = Sequential([
    layers.Masking(mask_value=-9999.),
    layers.Bidirectional(layers.LSTM(64)),
    layers.Dense(64, activation='relu'),
    layers.Dense(1, activation='sigmoid')
])

# Compile the model.
model.compile(
  'adam',
  loss='binary_crossentropy',
  metrics=['accuracy']
)

print("After compiling model, before sharding data")
print_memory_usage()

# # Define the number of shards (e.g., 5 shards)
# num_shards = 20

# Shard the training dataset
train_dataset = tf.data.Dataset.from_tensor_slices((X_train, Y_train)).batch(4000).prefetch(tf.data.experimental.AUTOTUNE)

# Shard the test dataset
val_dataset = tf.data.Dataset.from_tensor_slices((X_val, Y_val)).batch(4000).prefetch(tf.data.experimental.AUTOTUNE)

del X_train
del X_test
del Y_train
del Y_test
gc.collect()

print("After sharding training/test data and deleting duplicate arrays")
print_memory_usage()

print("Fit model on training data")
history = model.fit(
    train_dataset,
    epochs=150,
    validation_data=val_dataset,
    callbacks=[cp_callback, earlyStopping, csv_logger], class_weight={0: 100, 1: 1}
)