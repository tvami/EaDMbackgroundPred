import uproot, ROOT, os, inspect, numpy as np, copy, datetime, matplotlib.pyplot as plt, math, scipy.stats, pandas as pd

# Choose which type of comparison & which generator you want plots for
type = 'mass' # 'depth'
gen = 'CMSCGEN' # 'EarthShine'
relative_plot_dir = 'figures/2DA_pTDepthComp_pdf_test'
hpf_dir = '/Users/sanjitmasanam/Documents/CodingProjects/CMS/t0timing_chamber_study'

# Set important variables based on type of comparison
if type == 'depth':
    masspoints = np.arange(1000, 5500, 500)
    iterable = masspoints
    depth = -1
    figure_unit = 'GeV'

elif type == 'mass':
    depths = [0, 2, 3, 4, 5, 6]
    iterable = depths
    figure_unit = 'mm'

for iter in iterable:
    # Set labels
    if type == 'depth':
        masspoint = iter
        if masspoint == 1000 or masspoint == 1500 or masspoint == 4500: labels = [f'{masspoint}GeV', f'{masspoint}GeV_Depth_e2', f'{masspoint}GeV_Depth_e3', f'{masspoint}GeV_Depth_e4', f'{masspoint}GeV_Depth_e5']
        elif masspoint == 5000: labels = [f'{masspoint}GeV_Depth_e3', f'{masspoint}GeV_Depth_e4', f'{masspoint}GeV_Depth_e5', f'{masspoint}GeV_Depth_e6']
        else: labels = [f'{masspoint}GeV', f'{masspoint}GeV_Depth_e2', f'{masspoint}GeV_Depth_e3', f'{masspoint}GeV_Depth_e4', f'{masspoint}GeV_Depth_e5', f'{masspoint}GeV_Depth_e6']
    
    elif type == 'mass':
        depth = iter
        if depth == 0: labels=[f'1000GeV', f'1500GeV', f'2000GeV', f'2500GeV', f'3000GeV', f'3500GeV', f'4000GeV', f'4500GeV']
        elif depth == 2: labels=[f'1000GeV_Depth_e{depth}', f'1500GeV_Depth_e{depth}', f'2000GeV_Depth_e{depth}', f'2500GeV_Depth_e{depth}', f'3000GeV_Depth_e{depth}', f'3500GeV_Depth_e{depth}', f'4000GeV_Depth_e{depth}', f'4500GeV_Depth_e{depth}']
        elif depth == 6: labels = [f'2000GeV_Depth_e{depth}', f'2500GeV_Depth_e{depth}', f'3000GeV_Depth_e{depth}', f'4000GeV_Depth_e{depth}', f'5000GeV_Depth_e{depth}']
        else: labels =[f'1000GeV_Depth_e{depth}', f'1500GeV_Depth_e{depth}', f'2000GeV_Depth_e{depth}', f'2500GeV_Depth_e{depth}', f'3000GeV_Depth_e{depth}', f'3500GeV_Depth_e{depth}', f'4000GeV_Depth_e{depth}', f'4500GeV_Depth_e{depth}', f'5000GeV_Depth_e{depth}']

    # Open hpf file
    file = ROOT.TFile.Open(f'{hpf_dir}/hpf_central_mc_w_depth.root')
    
    # Define pT lists
    list_of_earthShine_pT_arrs = []
    list_of_pT_arrs = []

    # Loop through labels & save pT info for EarthShine/CMSCGEN
    for i in range(len(labels)):
        # Define necessary lists for hpf file
        pT_data = []
        nHits_data = []
        rnn_data = []
        nTracks_data = []
        eta_data = []
        energy_data = []
        rnn_t0_data = []
        print(i, labels[i], labels[i][-1])

        tree = file.Get(labels[i])

        # Loop over the tree entries
        for j in range(tree.GetEntries()):
            tree.GetEntry(j)
            validpTPass = getattr(tree, "validpTPass")
            if validpTPass == 0:
                continue
            # Get the value of the leaf
            pt = getattr(tree, "pT")
            nHits = getattr(tree, "nHits")
            RNNscore = getattr(tree, "RNNscore")
            RNNscore_t0 = getattr(tree, "RNNscore_t0")
            nTracks = getattr(tree, "nTracks")
            eta = getattr(tree, "eta")
            energy = getattr(tree, "energy")
            #if pt > 7019: pt=7019

            # Append values to defined lists
            pT_data.append(pt)
            nHits_data.append(nHits)
            rnn_data.append(RNNscore)
            rnn_t0_data.append(RNNscore)
            nTracks_data.append(nTracks)
            eta_data.append(eta)
            energy_data.append(energy)

        # Convert lists to arrays for boolean indexing
        nHits_arr = np.array(nHits_data)
        rnnScore_arr = np.array(rnn_data)
        rnnScore_t0_arr = np.array(rnn_t0_data)
        pT_arr = np.array(pT_data)
        nTracks_arr = np.array(nTracks_data)
        eta_arr = np.array(eta_data)
        energy_arr = np.array(energy_data)

        # Select post-preselection CMSCGEN data
        pT_arr_post_presel = pT_arr[(eta_arr > -0.9) & (eta_arr < 0.9) & (pT_arr > 200) & (np.isin(nTracks_arr, [1, 2]))]

        # Open correct parquet file (set df to 0 to reset it for every loop) based on depth
        df = 0
        if labels[i][-1] == 'V': df = pd.read_parquet("/Users/sanjitmasanam/Documents/CodingProjects/CMS/t0timing_chamber_study/EarthShine_depth_samples/generated_data_d_-7.6_r_458_mDM_2000-10000_mA_0.22_dm_model_floating_HIT_DETECTOR_COMBINED.parquet")
        if labels[i][-1] == '2': df = pd.read_parquet("/Users/sanjitmasanam/Documents/CodingProjects/CMS/t0timing_chamber_study/EarthShine_depth_samples/generated_data_d_-7.6_r_458_mDM_2000-10000_mA_0.22_dm_model_floating_HIT_DETECTOR_COMBINED.parquet")
        if labels[i][-1] == '3': df = pd.read_parquet("/Users/sanjitmasanam/Documents/CodingProjects/CMS/t0timing_chamber_study/EarthShine_depth_samples/generated_data_d_-8.5_r_458_mDM_2000-10000_mA_0.22_dm_model_floating_HIT_DETECTOR_COMBINED.parquet")
        if labels[i][-1] == '4': df = pd.read_parquet("/Users/sanjitmasanam/Documents/CodingProjects/CMS/t0timing_chamber_study/EarthShine_depth_samples/generated_data_d_-17.5_r_458_mDM_2000-10000_mA_0.22_dm_model_floating_HIT_DETECTOR_COMBINED.parquet")
        if labels[i][-1] == '5': df = pd.read_parquet("/Users/sanjitmasanam/Documents/CodingProjects/CMS/t0timing_chamber_study/EarthShine_depth_samples/generated_data_d_-107.5_r_458_mDM_2000-10000_mA_0.22_dm_model_floating_HIT_DETECTOR_COMBINED.parquet")
        if labels[i][-1] == '6': df = pd.read_parquet("/Users/sanjitmasanam/Documents/CodingProjects/CMS/t0timing_chamber_study/EarthShine_depth_samples/generated_data_d_-1007.5_r_458_mDM_2000-10000_mA_0.22_dm_model_floating_HIT_DETECTOR_COMBINED.parquet")
        
        # Open proper pT variable
        df_mass = df['M_DM'].to_numpy()
        if labels[i][-1] == 'V': df_pT = df['pt1_detector_acceptance'].to_numpy()
        else: df_pT = df['pt1_detector_acceptance_eloss'].to_numpy()
        
        if depth != -1: masspoint = int(labels[i][:4])

        # Save EarthShine pT data for given mass point
        pT_arr_EarthShine = df_pT[(np.isclose(df_mass, masspoint*2))] * (1+np.random.normal(0,(0.000023639*np.mean(df_pT[(np.isclose(df_mass, masspoint*2))])+0.0283603),size=df_pT[(np.isclose(df_mass, masspoint*2))].shape))
        
        # Append pT data to lists
        list_of_pT_arrs.append(pT_arr_post_presel)
        list_of_earthShine_pT_arrs.append(pT_arr_EarthShine)
    
    # Create ROOT canvas
    canvas = ROOT.TCanvas(f"{labels[i]}", "2D Histogram", 600, 600)
    canvas.SetRightMargin(0.15)  # Increase the right margin
    canvas.SetLeftMargin(0.15)
    canvas.SetLogy()
    legend = ROOT.TLegend(0.60, 0.65, 0.85, 0.9)
    
    # 
    n = 0
    if gen == 'CMSCGEN':
        for pT_array in list_of_pT_arrs: 
            if type == 'depth': pass_hist = ROOT.TH1F(f"hpass{n}", "; p_{T} (GeV);A.U.", int((masspoint*2-200)/100), 200, int(masspoint*2))
            elif type == 'mass': pass_hist = ROOT.TH1F(f"hpass{n}", "; p_{T} (GeV);A.U.", int((8000-200)/100), 200, 8000)
            for i in pT_array:
                pass_hist.Fill(i)
            
            pass_hist.SetStats(False)
            pass_hist.Scale(1 / pass_hist.Integral())
            pass_hist.SetLineColor(n+1)
            pass_hist.SetLineWidth(3)
            pass_hist.GetYaxis().SetRangeUser(4e-4, 1)
            if n == 0: pass_hist.Draw("HIST")
            else: pass_hist.Draw("HIST SAME")
            legend.AddEntry(pass_hist, labels[n], "l")

            n+=1

        legend.SetFillColor(0)
        legend.Draw()
        if type == 'depth':
            canvas.SaveAs(f"{relative_plot_dir}/{masspoint}{figure_unit}_{gen}.pdf")
            canvas.SaveAs(f"{relative_plot_dir}/{masspoint}{figure_unit}_{gen}.png")
        elif type =='mass':
            canvas.SaveAs(f"{relative_plot_dir}/depth_e{depth}{figure_unit}_{gen}.pdf")
            canvas.SaveAs(f"{relative_plot_dir}/depth_e{depth}{figure_unit}_{gen}.png")
    
    elif gen == 'EarthShine':
        for pT_array in list_of_earthShine_pT_arrs:
            pass_hist = ROOT.TH1F(f"hpass{n}", "; p_{T} (GeV);A.U.", int((masspoint*2-200)/100), 200, int(masspoint*2))
            # pass_hist = ROOT.TH1F(f"hpass{n}", "; p_{T} (GeV);A.U.", int((8000-200)/100), 200, 8000)
            for i in pT_array:
                pass_hist.Fill(i)
            
            pass_hist.SetStats(False)
            pass_hist.Scale(1 / pass_hist.Integral())
            pass_hist.SetLineColor(n+1)
            pass_hist.SetLineWidth(3)
            pass_hist.GetYaxis().SetRangeUser(4e-4, 1)
            pass_hist.Draw("HIST SAME")
            legend.AddEntry(pass_hist, labels[n], "l")

            n+=1

        legend.SetFillColor(0)
        legend.Draw()
        if type == 'depth':
            canvas.SaveAs(f"{relative_plot_dir}/{masspoint}{figure_unit}_{gen}.pdf")
            canvas.SaveAs(f"{relative_plot_dir}/{masspoint}{figure_unit}_{gen}.png")
        elif type =='mass':
            canvas.SaveAs(f"{relative_plot_dir}/depth_e{depth}{figure_unit}_{gen}.pdf")
            canvas.SaveAs(f"{relative_plot_dir}/depth_e{depth}{figure_unit}_{gen}.png")