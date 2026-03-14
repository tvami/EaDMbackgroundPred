import ROOT, os, shutil, tdrstyle

tdrstyle.setTDRStyle()

path = '/home/users/smasanam/EarthAsDMProject/CMSSW_14_1_0_pre4/src/'
dict_2DA = {
    # 'MC_VR1': ['rpfmult_Binningv6_Inputv18_VR1_Unblind', 'VR1'], 
    # 'MC_VR2': ['rpfmult_Binningv6_Inputv18_VR2_Unblind', 'VR2'], 
    'MC_SR': ['rpfmult_Binningv7_Inputv18_SR_Blind', 'SR'],
    '2023D_VR1': ['rpfmult_Binningv7_Inputv19_VR1_Unblind', 'VR1'], 
    '2023D_VR2': ['rpfmult_Binningv7alt_Inputv19_VR2_Unblind', 'VR2'], 
    '2023D_SR': ['rpfmult_Binningv7_Inputv19_SR_Blind', 'SR'],
    'Run3_VR1': ['rpfmult_Binningv7_Inputv20_VR1_Unblind', 'VR1'], 
    'Run3_VR2': ['rpfmult_Binningv7alt_Inputv20_VR2_Unblind', 'VR2'], 
    'Run3_SR': ['rpfmult_Binningv7_Inputv20_SR_Blind', 'SR'],
}
output_dir = 'figures/AN_2DA_plots/'

for key, value in dict_2DA.items():
    print(f"\nRunning on {key} ({value[0]})\n")
    full_path = path+value[0]
    for tf in ['0x0', '1x0', '2x0']:
        if os.path.exists(full_path+f"/Signal_M3000GeV_{value[1]}-{tf}_area/plots_fit_b/postfit_projx_logy.pdf"): shutil.copyfile(full_path+f"/Signal_M3000GeV_{value[1]}-{tf}_area/plots_fit_b/postfit_projx_logy.pdf", output_dir+f"2DA_{key}_{tf}.pdf")
        else: print(f"DNE (/Signal_M3000GeV_{value[1]}-{tf}_area/plots_fit_b/postfit_projx_logy.pdf)")
        if os.path.exists(full_path+f"/Signal_M3000GeV_{value[1]}-{tf}_area/gof_plot.pdf"): shutil.copyfile(full_path+f"/Signal_M3000GeV_{value[1]}-{tf}_area/gof_plot.pdf", output_dir+f"GoF_{key}_{tf}.pdf")
        else: print(f"DNE (/Signal_M3000GeV_{value[1]}-{tf}_area/gof_plot.pdf)")
    if os.path.exists(full_path+f"/ftest_1x0_vs_2x0_notoys.png"): shutil.copyfile(full_path+f"/ftest_1x0_vs_2x0_notoys.png", output_dir+f"Ftest_{key}_1x0_2x0.png")
    else: print(f"DNE (/ftest_1x0_vs_2x0_notoys.pdf)")

for key, value in dict_2DA.items():
        print(f"\nMake/Saving TF plots for {key} ({value[0]})\n")
        for tf in ['0x0', '1x0', '2x0']:
            f = ROOT.TFile.Open(f"{path+value[0]}/Signal_M3000GeV_{value[1]}-{tf}_area/plots_fit_b/all_plots.root")
            # get the histogram
            h_fail = f.Get("TotalBkg_fail_postfit_projx2")
            h_pass = f.Get("TotalBkg_pass_postfit_projx2")
            # create a canvas
            c = ROOT.TCanvas(f"c_3000_{tf}", "", 600, 600)
            # devide the histogram
            h_ratio = h_pass.Clone("h_ratio")
            h_ratio.Divide(h_fail)
            h_ratio.SetLineColor(ROOT.kBlack)
            h_ratio.SetLineWidth(2)
            # draw the histogram
            h_ratio.Draw("hist ][ C")
            # set the axis
            h_ratio.GetXaxis().SetTitle("p_{T} (GeV)")
            h_ratio.GetYaxis().SetTitle("Transfer Factor")
            # h_ratio.GetYaxis().SetRangeUser(0, 0.5)
            h_ratio.GetXaxis().SetTitleSize(0.05)
            h_ratio.GetYaxis().SetTitleSize(0.05)
            tdrstyle.drawCMSInternal()
            # save the canvas
            c.SaveAs(f"figures/AN_2DA_plots/2DA_{key}_{tf}_TF.pdf")
            # close the file
            f.Close()
            print(f"2DA_{key}_{tf}_TF.pdf is done.")