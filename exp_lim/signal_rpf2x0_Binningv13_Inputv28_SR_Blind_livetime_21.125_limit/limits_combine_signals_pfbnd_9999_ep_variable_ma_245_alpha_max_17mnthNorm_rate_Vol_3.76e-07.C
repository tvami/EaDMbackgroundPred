#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_17mnthNorm_rate_Vol_3.76e-07()
{
//=========Macro generated from canvas: climits/climits
//=========  (Sat Jul  4 12:17:27 2026) by ROOT version 6.30/07
   TCanvas *climits = new TCanvas("climits", "climits",0,0,700,600);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   climits->SetHighLightColor(2);
   climits->Range(-0.05033449,-1.838764,3.160987,5.759863);
   climits->SetFillColor(0);
   climits->SetBorderMode(0);
   climits->SetBorderSize(2);
   climits->SetLogx();
   climits->SetLogy();
   climits->SetLeftMargin(0.15);
   climits->SetRightMargin(0.05);
   climits->SetBottomMargin(0.15);
   climits->SetFrameLineWidth(2);
   climits->SetFrameBorderMode(0);
   climits->SetFrameLineWidth(2);
   climits->SetFrameBorderMode(0);
   
   Double_t Graph0_fx358[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy358[20] = { 87.81109, 7.17615, 6.310367, 4.949822, 4.540165, 4.328125, 4.208751, 5.772179, 7.953115, 10.36692, 12.68648, 23.27674, 23.92231, 23.2048, 23.65032, 23.42627, 22.45407,
   23.48842, 23.57745, 23.57745 };
   TGraph *graph = new TGraph(20,Graph0_fx358,Graph0_fy358);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0358 = new TH1F("Graph_Graph0358","",100,2.7,1099.7);
   Graph_Graph0358->SetMinimum(0.2);
   Graph_Graph0358->SetMaximum(100000);
   Graph_Graph0358->SetDirectory(nullptr);
   Graph_Graph0358->SetStats(0);
   Graph_Graph0358->SetLineWidth(2);
   Graph_Graph0358->SetMarkerStyle(20);
   Graph_Graph0358->SetMarkerSize(0.9);
   Graph_Graph0358->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0358->GetXaxis()->SetRange(0,91);
   Graph_Graph0358->GetXaxis()->SetLabelFont(42);
   Graph_Graph0358->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0358->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0358->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0358->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0358->GetXaxis()->SetTitleFont(42);
   Graph_Graph0358->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0358->GetYaxis()->SetLabelFont(42);
   Graph_Graph0358->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0358->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0358->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0358->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0358->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0358->GetYaxis()->SetTitleFont(42);
   Graph_Graph0358->GetZaxis()->SetLabelFont(42);
   Graph_Graph0358->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0358->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0358->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0358->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0358->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0358);
   
   graph->Draw("al");
   
   Double_t Graph1_fx359[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph1_fy359[42] = { 225.9655, 19.13919, 18.1301, 14.63901, 13.37994, 12.81698, 12.47269, 17.55231, 24.1842, 31.52421, 38.57764, 70.78099, 72.74408, 70.56223, 71.91698, 71.23569, 68.27937,
   71.42468, 71.69539, 71.69539, 71.69539, 6.092538, 6.092538, 6.092538, 6.069666, 5.838785, 6.052617, 6.112515, 6.009083, 6.168825, 6.026643, 3.582317, 2.980722,
   2.357333, 1.800408, 1.631254, 1.700126, 1.798089, 1.955746, 2.482647, 3.165121, 37.09668 };
   graph = new TGraph(42,Graph1_fx359,Graph1_fy359);
   graph->SetName("Graph1");
   graph->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffcc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph1359 = new TH1F("Graph_Graph1359","Graph",100,2.7,1099.7);
   Graph_Graph1359->SetMinimum(1.468128);
   Graph_Graph1359->SetMaximum(248.399);
   Graph_Graph1359->SetDirectory(nullptr);
   Graph_Graph1359->SetStats(0);
   Graph_Graph1359->SetLineWidth(2);
   Graph_Graph1359->SetMarkerStyle(20);
   Graph_Graph1359->SetMarkerSize(0.9);
   Graph_Graph1359->GetXaxis()->SetLabelFont(42);
   Graph_Graph1359->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1359->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1359->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1359->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1359->GetXaxis()->SetTitleFont(42);
   Graph_Graph1359->GetYaxis()->SetLabelFont(42);
   Graph_Graph1359->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1359->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1359->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1359->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1359->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1359->GetYaxis()->SetTitleFont(42);
   Graph_Graph1359->GetZaxis()->SetLabelFont(42);
   Graph_Graph1359->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1359->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1359->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1359->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1359->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1359);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx360[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph2_fy360[42] = { 144.1124, 11.76302, 11.14282, 8.951492, 8.21902, 7.927551, 7.760462, 11.62097, 16.04632, 20.9452, 25.63201, 47.02878, 48.3331, 46.88342, 47.78356, 47.33089, 45.36663,
   47.45646, 47.63632, 47.63632, 47.63632, 10.87734, 10.87734, 10.87734, 10.83851, 10.39067, 10.81232, 10.90918, 10.71541, 11.02763, 10.7485, 6.147948, 5.098804,
   3.985781, 2.984814, 2.485988, 2.572454, 2.710829, 2.954348, 3.74544, 4.563699, 54.90678 };
   graph = new TGraph(42,Graph2_fx360,Graph2_fy360);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2360 = new TH1F("Graph_Graph2360","Graph",100,2.7,1099.7);
   Graph_Graph2360->SetMinimum(2.237389);
   Graph_Graph2360->SetMaximum(158.2751);
   Graph_Graph2360->SetDirectory(nullptr);
   Graph_Graph2360->SetStats(0);
   Graph_Graph2360->SetLineWidth(2);
   Graph_Graph2360->SetMarkerStyle(20);
   Graph_Graph2360->SetMarkerSize(0.9);
   Graph_Graph2360->GetXaxis()->SetLabelFont(42);
   Graph_Graph2360->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2360->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2360->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2360->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2360->GetXaxis()->SetTitleFont(42);
   Graph_Graph2360->GetYaxis()->SetLabelFont(42);
   Graph_Graph2360->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2360->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2360->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2360->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2360->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2360->GetYaxis()->SetTitleFont(42);
   Graph_Graph2360->GetZaxis()->SetLabelFont(42);
   Graph_Graph2360->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2360->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2360->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2360->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2360->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2360);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx361[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy361[20] = { 87.81109, 7.17615, 6.310367, 4.949822, 4.540165, 4.328125, 4.208751, 5.772179, 7.953115, 10.36692, 12.68648, 23.27674, 23.92231, 23.2048, 23.65032, 23.42627, 22.45407,
   23.48842, 23.57745, 23.57745 };
   graph = new TGraph(20,Graph0_fx361,Graph0_fy361);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0361 = new TH1F("Graph_Graph0361","",100,2.7,1099.7);
   Graph_Graph0361->SetMinimum(0.2);
   Graph_Graph0361->SetMaximum(100000);
   Graph_Graph0361->SetDirectory(nullptr);
   Graph_Graph0361->SetStats(0);
   Graph_Graph0361->SetLineWidth(2);
   Graph_Graph0361->SetMarkerStyle(20);
   Graph_Graph0361->SetMarkerSize(0.9);
   Graph_Graph0361->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0361->GetXaxis()->SetRange(0,91);
   Graph_Graph0361->GetXaxis()->SetLabelFont(42);
   Graph_Graph0361->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0361->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0361->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0361->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0361->GetXaxis()->SetTitleFont(42);
   Graph_Graph0361->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0361->GetYaxis()->SetLabelFont(42);
   Graph_Graph0361->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0361->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0361->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0361->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0361->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0361->GetYaxis()->SetTitleFont(42);
   Graph_Graph0361->GetZaxis()->SetLabelFont(42);
   Graph_Graph0361->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0361->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0361->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0361->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0361->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0361);
   
   graph->Draw("l");
   
   Double_t Graph_fx362[72] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180, 185, 190, 195, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450,
   475, 500, 600, 700, 800, 900, 1000 };
   Double_t Graph_fy362[72] = { 0, 0, 0, 0, 6.615718e-282, 2.480513e-261, 1.668931e-243, 6.596812e-228, 3.793874e-214, 6.426859e-202, 5.596236e-191, 3.910349e-181, 3.144445e-172, 3.908327e-164, 9.580323e-157, 5.674057e-150, 9.629422e-144,
   1.137591e-132, 9.94953e-128, 3.963336e-123, 7.779317e-119, 8.017738e-108, 4.650119e-101, 6.057492e-93, 9.750837e-88, 1.560787e-81, 2.197174e-77, 1.672776e-72, 1.24635e-24, 9.751372e-20, 2.95073e-16, 1.17425e-13, 1.21184e-11,
   4.871603e-10, 9.879246e-09, 1.200478e-07, 5.932781e-06, 2.795075e-05, 0.0001078623, 0.0003532871, 0.001009627, 0.002525618, 0.005750331, 0.02367085, 0.07642559, 0.2047531, 0.4738198, 0.97533, 1.825659,
   3.160418, 5.126616, 6.393389, 7.873838, 9.585661, 11.54571, 25.57867, 47.60942, 78.16631, 116.9242, 162.9369, 214.8968, 271.3544, 330.8749, 392.1368, 453.9838,
   515.4448, 575.732, 794.9374, 968.2175, 1094.929, 1181.744, 1181.744 };
   graph = new TGraph(72,Graph_fx362,Graph_fy362);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph362 = new TH1F("Graph_Graph362","",100,1.44,1099.84);
   Graph_Graph362->SetMinimum(1.299918);
   Graph_Graph362->SetMaximum(1299.918);
   Graph_Graph362->SetDirectory(nullptr);
   Graph_Graph362->SetStats(0);
   Graph_Graph362->SetLineWidth(2);
   Graph_Graph362->SetMarkerStyle(20);
   Graph_Graph362->SetMarkerSize(0.9);
   Graph_Graph362->GetXaxis()->SetLabelFont(42);
   Graph_Graph362->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph362->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph362->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph362->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph362->GetXaxis()->SetTitleFont(42);
   Graph_Graph362->GetYaxis()->SetLabelFont(42);
   Graph_Graph362->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph362->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph362->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph362->GetYaxis()->SetTickLength(0.02);
   Graph_Graph362->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph362->GetYaxis()->SetTitleFont(42);
   Graph_Graph362->GetZaxis()->SetLabelFont(42);
   Graph_Graph362->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph362->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph362->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph362->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph362->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph362);
   
   graph->Draw("l");
   
   graph = new TGraph();
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   graph->Draw("l");
   
   Double_t Graph_fx364[72] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180, 185, 190, 195, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450,
   475, 500, 600, 700, 800, 900, 1000 };
   Double_t Graph_fy364[72] = { 0, 0, 0, 0, 7.27729e-282, 2.728564e-261, 1.835824e-243, 7.256493e-228, 4.173261e-214, 7.069545e-202, 6.15586e-191, 4.301384e-181, 3.45889e-172, 4.29916e-164, 1.053836e-156, 6.241463e-150, 1.059236e-143,
   1.25135e-132, 1.094448e-127, 4.35967e-123, 8.557249e-119, 8.819512e-108, 5.115131e-101, 6.663241e-93, 1.072592e-87, 1.716866e-81, 2.416891e-77, 1.840054e-72, 1.370985e-24, 1.072651e-19, 3.245803e-16, 1.291675e-13, 1.333024e-11,
   5.358763e-10, 1.086717e-08, 1.320526e-07, 6.526059e-06, 3.074583e-05, 0.0001186485, 0.0003886158, 0.00111059, 0.00277818, 0.006325364, 0.02603794, 0.08406815, 0.2252284, 0.5212018, 1.072863, 2.008225,
   3.47646, 5.639278, 7.032728, 8.661222, 10.54423, 12.70028, 28.13654, 52.37036, 85.98294, 128.6166, 179.2306, 236.3865, 298.4898, 363.9624, 431.3505, 499.3822,
   566.9893, 633.3052, 874.4311, 1065.039, 1204.422, 1299.918, 1299.918 };
   graph = new TGraph(72,Graph_fx364,Graph_fy364);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph364 = new TH1F("Graph_Graph364","",100,1.44,1099.84);
   Graph_Graph364->SetMinimum(1.42991);
   Graph_Graph364->SetMaximum(1429.91);
   Graph_Graph364->SetDirectory(nullptr);
   Graph_Graph364->SetStats(0);
   Graph_Graph364->SetLineWidth(2);
   Graph_Graph364->SetMarkerStyle(20);
   Graph_Graph364->SetMarkerSize(0.9);
   Graph_Graph364->GetXaxis()->SetLabelFont(42);
   Graph_Graph364->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph364->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph364->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph364->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph364->GetXaxis()->SetTitleFont(42);
   Graph_Graph364->GetYaxis()->SetLabelFont(42);
   Graph_Graph364->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph364->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph364->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph364->GetYaxis()->SetTickLength(0.02);
   Graph_Graph364->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph364->GetYaxis()->SetTitleFont(42);
   Graph_Graph364->GetZaxis()->SetLabelFont(42);
   Graph_Graph364->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph364->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph364->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph364->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph364->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph364);
   
   graph->Draw("l");
   
   TLegend *leg = new TLegend(0.5,0.6,0.92,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("NULL","95% CL Upper Limits","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Graph1","Expected Limit #pm1#sigma, #pm2#sigma","f");

   ci = TColor::GetColor("#ffcc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1000);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("","#sigma^{LO}_{th}(A'#rightarrow#mu#mu)#pm1#sigma","l");
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   TLine *line = new TLine(0.517,0.75,0.588,0.75);

   ci = TColor::GetColor("#00cc00");
   line->SetLineColor(ci);
   line->SetLineWidth(22);
   line->SetNDC();
   line->Draw();
   line = new TLine(0.517,0.75,0.588,0.75);
   line->SetLineStyle(2);
   line->SetLineWidth(3);
   line->SetNDC();
   line->Draw();
   line = new TLine(0.517,0.66,0.588,0.66);
   line->SetLineColor(4);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->SetNDC();
   line->Draw();
   line = new TLine(0.517,0.64,0.588,0.64);
   line->SetLineColor(4);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->SetNDC();
   line->Draw();
   line = new TLine(222.2272,0,222.2272,23.41871);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(222.2222,0,"  222.23 TeV");

   ci = TColor::GetColor("#666666");
   tex->SetTextColor(ci);
   tex->SetTextFont(43);
   tex->SetTextSize(14);
   tex->SetTextAngle(90);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TH1F *Graph_copy = new TH1F("Graph_copy","",100,2.7,1099.7);
   Graph_copy->SetMinimum(1e-06);
   Graph_copy->SetMaximum(1000);
   Graph_copy->SetDirectory(nullptr);
   Graph_copy->SetStats(0);
   Graph_copy->SetLineWidth(2);
   Graph_copy->SetMarkerStyle(20);
   Graph_copy->SetMarkerSize(0.9);
   Graph_copy->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_copy->GetXaxis()->SetRange(0,91);
   Graph_copy->GetXaxis()->SetLabelFont(42);
   Graph_copy->GetXaxis()->SetLabelOffset(0.015);
   Graph_copy->GetXaxis()->SetLabelSize(0.05);
   Graph_copy->GetXaxis()->SetTitleSize(0.055);
   Graph_copy->GetXaxis()->SetTitleOffset(1.25);
   Graph_copy->GetXaxis()->SetTitleFont(42);
   Graph_copy->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_copy->GetYaxis()->SetLabelFont(42);
   Graph_copy->GetYaxis()->SetLabelOffset(0.015);
   Graph_copy->GetYaxis()->SetLabelSize(0.05);
   Graph_copy->GetYaxis()->SetTitleSize(0.05);
   Graph_copy->GetYaxis()->SetTickLength(0.02);
   Graph_copy->GetYaxis()->SetTitleOffset(1.5);
   Graph_copy->GetYaxis()->SetTitleFont(42);
   Graph_copy->GetZaxis()->SetLabelFont(42);
   Graph_copy->GetZaxis()->SetLabelOffset(0.015);
   Graph_copy->GetZaxis()->SetLabelSize(0.05);
   Graph_copy->GetZaxis()->SetTitleSize(0.065);
   Graph_copy->GetZaxis()->SetTitleOffset(1.1);
   Graph_copy->GetZaxis()->SetTitleFont(42);
   Graph_copy->Draw("sameaxis");
      tex = new TLatex(0.95,0.915,"Run 3 Cosmics");
   tex->SetNDC();
   tex->SetTextAlign(31);
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.15,0.915,"CMS");
   tex->SetNDC();
   tex->SetTextFont(61);
   tex->SetTextSize(0.08);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.4325,0.95,"Work in Progress");
   tex->SetNDC();
   tex->SetTextAlign(23);
   tex->SetTextFont(52);
   tex->SetTextSize(0.0448);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TPaveText *pt = new TPaveText(0.2,0.68,0.43,0.88,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextAlign(12);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("m_{A'} = 0.245 GeV");
   pt_LaTex = pt->AddText("#varepsilon = 3.76e-07");
   pt_LaTex = pt->AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
