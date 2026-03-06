import uproot, ROOT, numpy as np, awkward as ak, glob, os, keras, argparse

path = '/home/users/smasanam/EarthAsDMProject/CMSSW_14_1_0_pre4/src/'
dirs = ['rpf2x0_Binningv6_Inputv18_SR_Blind_zeroDepth', 'rpf2x0_Binningv6_Inputv18_SR_Blind_zeroDepth', 'rpf2x0_Binningv6_Inputv18_SR_Blind_zeroDepth'] #VR1, VR2, SR
output_dir = 'AN_2DA_plots'

for dir in dirs:

