#!/usr/bin/env python3
"""Cache the RAW (center=None, shift=0, smear=0) sorted+padded RNN tensor.

Reproduces exactly what rnn_retrain_centeredT0.py builds, group by group, in the
same order (sorted glob, /vr1/ skipped, HELD_OUT signal masses skipped). Splitting
a group into file chunks is safe: sorting is per event and nMax is fixed, so the
concatenation of the chunks in file order is bit-identical to reading the whole
group in one TChain. The t0 transforms (shift/smear/center) are deliberately NOT
applied here -- they are per-event and get applied later on the padded array, with
smear drawn per GROUP so the training RNG stream is reproduced.

Usage: cache_raw.py <group> <chunk> <nchunk> <outdir>
"""
import os, sys, glob, gc
import numpy as np
import ROOT
import awkward as ak

sys.path.insert(0, '/home/users/tvami/EarthAsDM/CMSSW_14_1_0_pre4/src/helper_scripts')
from rnn_input_prep import build_rnn_tensor

ROOT.gROOT.SetBatch(True)
ROOT.gErrorIgnoreLevel = ROOT.kError

BASE = '/ceph/cms/store/user/tvami/EarthAsDM/Ntuples/Ntuples_v5.0.4_wRNN'
NMAX = 64

INPUTS = [
    ('BkgMC/*/matched_muon/skimmed_matched_muon_*_CosmicToMu_Par-MinP-4-MaxP-3000-'
     'MinTheta-0-MaxTheta-75_cosmuogen_v5.0.0.root', 0),
    ('BkgMC/*/matched_muon/skimmed_matched_muon_*_CosmicToMu_Par-MinP-10-MaxP-10000-'
     'MinTheta-91-MaxTheta-179_cosmuogen_v5.0.0.root', 1),
    ('Signal/*/matched_muon/skimmed_matched_muon_*_CosmicToMu_Par-MinP-*-'
     'MinTheta-91-MaxTheta-179-SurfaceDepth-*_cosmuogen_v5.0.0.root', 1),
]
HELD_OUT = ('-1000-MinTheta', '-5000-MinTheta', '-10000-MinTheta', '-90000-MinTheta')

g, c, nc, outdir = int(sys.argv[1]), int(sys.argv[2]), int(sys.argv[3]), sys.argv[4]
pattern, label = INPUTS[g]

files = []
for f in sorted(glob.glob(f'{BASE}/{pattern}')):
    if '/vr1/' in f:
        continue
    if 'Signal' in f and any(h in f for h in HELD_OUT):
        continue
    files.append(f)

# contiguous file slice, so concatenating chunks 0..nc-1 restores the full group order
bounds = np.linspace(0, len(files), nc + 1).astype(int)
mine = files[bounds[c]:bounds[c + 1]]
print(f'group {g} label {label} chunk {c}/{nc}: {len(mine)} of {len(files)} files', flush=True)

ch = ROOT.TChain('tree')
for f in mine:
    ch.Add(f)
n = ch.GetEntries()
print(f'  entries {n}', flush=True)

rdf = ROOT.RDataFrame(ch)
keys = ('muon_dtSeg_t0timing', 'muon_dtSeg_globX',
        'muon_dtSeg_globY', 'muon_dtSeg_globZ')
cols = rdf.AsNumpy(list(keys))
arrs = [ak.Array([np.asarray(v, dtype=np.float64) for v in cols[k]]) for k in keys]
tensor, _ = build_rnn_tensor(*arrs, nMax=NMAX, center=None, shift=0.0, smear=0.0)
del cols, arrs
gc.collect()

out = os.path.join(outdir, f'raw_g{g}_c{c}.npy')
np.save(out, tensor)
print(f'  saved {out} {tensor.shape}', flush=True)
