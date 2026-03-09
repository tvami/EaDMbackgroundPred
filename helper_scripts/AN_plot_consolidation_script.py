import uproot, ROOT, numpy as np, awkward as ak, glob, os, keras, argparse, shutil

path = '/home/users/smasanam/EarthAsDMProject/CMSSW_14_1_0_pre4/src/'
dict_2DA = {
    # 'MC_VR1': ['rpfmult_Binningv6_Inputv18_VR1_Unblind', 'VR1'], 
    # 'MC_VR2': ['rpfmult_Binningv6_Inputv18_VR2_Unblind', 'VR2'], 
    # 'MC_SR': ['rpfmult_Binningv6_Inputv18_SR_Blind', 'SR'],
    # '2023D_VR1': ['rpfmult_Binningv6_Inputv19_VR1_Unblind', 'VR1'], 
    # '2023D_VR2': ['rpfmult_Binningv6_Inputv19_VR2_Unblind', 'VR2'], 
    # '2023D_SR': ['rpfmult_Binningv6_Inputv19_SR_Blind', 'SR'],
    'Run3_VR1': ['rpfmult_Binningv6_Inputv20_VR1_Unblind', 'VR1'], 
    'Run3_VR2': ['rpfmult_Binningv6_Inputv20_VR2_Unblind', 'VR2'], 
    'Run3_SR': ['rpfmult_Binningv6_Inputv20_SR_Blind', 'SR'],
}
output_dir = 'figures/AN_2DA_plots/'

for key, value in dict_2DA.items():
    print(f"\nRunning on {key} ({value[0]})\n")
    full_path = path+value[0]
    for tf in ['0x0', '1x0', '2x0']:
        if os.path.exists(full_path+f"/Signal_M3000GeV_{value[1]}-{tf}_area/plots_fit_b/postfit_projx_logy.png"): shutil.copyfile(full_path+f"/Signal_M3000GeV_{value[1]}-{tf}_area/plots_fit_b/postfit_projx_logy.png", output_dir+f"2DA_{key}_{tf}.png")
        else: print(f"DNE (/Signal_M3000GeV_{value[1]}-{tf}_area/plots_fit_b/postfit_projx_logy.png)")
        if os.path.exists(full_path+f"/Signal_M3000GeV_{value[1]}-{tf}_area/gof_plot.png"): shutil.copyfile(full_path+f"/Signal_M3000GeV_{value[1]}-{tf}_area/gof_plot.png", output_dir+f"GoF_{key}_{tf}.png")
        else: print(f"DNE (/Signal_M3000GeV_{value[1]}-{tf}_area/gof_plot.png)")
    if os.path.exists(full_path+f"/Signal_M3000GeV_{value[1]}-{tf}_area/ftest_1x0_vs_2x0_notoys.png"): shutil.copyfile(full_path+f"/Signal_M3000GeV_{value[1]}-{tf}_area/gof_plot.png", output_dir+f"Ftest_{key}_1x0_2x0.png")
    else: print(f"DNE (/Signal_M3000GeV_{value[1]}-{tf}_area/ftest_1x0_vs_2x0_notoys.png)")
