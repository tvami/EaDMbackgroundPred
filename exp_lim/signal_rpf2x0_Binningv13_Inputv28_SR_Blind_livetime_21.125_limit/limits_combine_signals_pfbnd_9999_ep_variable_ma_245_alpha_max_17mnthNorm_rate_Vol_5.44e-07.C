#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_17mnthNorm_rate_Vol_5.44e-07()
{
//=========Macro generated from canvas: climits/climits
//=========  (Sat Jul  4 12:17:28 2026) by ROOT version 6.30/07
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
   
   Double_t Graph0_fx407[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy407[20] = { 87.81109, 7.17615, 6.310367, 4.949822, 4.540165, 4.328125, 4.208751, 5.772179, 7.953115, 10.36692, 12.68648, 23.27674, 23.92231, 23.2048, 23.65032, 23.42627, 22.45407,
   23.48842, 23.57745, 23.57745 };
   TGraph *graph = new TGraph(20,Graph0_fx407,Graph0_fy407);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0407 = new TH1F("Graph_Graph0407","",100,2.7,1099.7);
   Graph_Graph0407->SetMinimum(0.2);
   Graph_Graph0407->SetMaximum(100000);
   Graph_Graph0407->SetDirectory(nullptr);
   Graph_Graph0407->SetStats(0);
   Graph_Graph0407->SetLineWidth(2);
   Graph_Graph0407->SetMarkerStyle(20);
   Graph_Graph0407->SetMarkerSize(0.9);
   Graph_Graph0407->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0407->GetXaxis()->SetRange(0,91);
   Graph_Graph0407->GetXaxis()->SetLabelFont(42);
   Graph_Graph0407->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0407->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0407->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0407->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0407->GetXaxis()->SetTitleFont(42);
   Graph_Graph0407->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0407->GetYaxis()->SetLabelFont(42);
   Graph_Graph0407->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0407->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0407->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0407->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0407->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0407->GetYaxis()->SetTitleFont(42);
   Graph_Graph0407->GetZaxis()->SetLabelFont(42);
   Graph_Graph0407->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0407->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0407->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0407->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0407->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0407);
   
   graph->Draw("al");
   
   Double_t Graph1_fx408[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph1_fy408[42] = { 225.9655, 19.13919, 18.1301, 14.63901, 13.37994, 12.81698, 12.47269, 17.55231, 24.1842, 31.52421, 38.57764, 70.78099, 72.74408, 70.56223, 71.91698, 71.23569, 68.27937,
   71.42468, 71.69539, 71.69539, 71.69539, 6.092538, 6.092538, 6.092538, 6.069666, 5.838785, 6.052617, 6.112515, 6.009083, 6.168825, 6.026643, 3.582317, 2.980722,
   2.357333, 1.800408, 1.631254, 1.700126, 1.798089, 1.955746, 2.482647, 3.165121, 37.09668 };
   graph = new TGraph(42,Graph1_fx408,Graph1_fy408);
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
   
   TH1F *Graph_Graph1408 = new TH1F("Graph_Graph1408","Graph",100,2.7,1099.7);
   Graph_Graph1408->SetMinimum(1.468128);
   Graph_Graph1408->SetMaximum(248.399);
   Graph_Graph1408->SetDirectory(nullptr);
   Graph_Graph1408->SetStats(0);
   Graph_Graph1408->SetLineWidth(2);
   Graph_Graph1408->SetMarkerStyle(20);
   Graph_Graph1408->SetMarkerSize(0.9);
   Graph_Graph1408->GetXaxis()->SetLabelFont(42);
   Graph_Graph1408->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1408->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1408->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1408->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1408->GetXaxis()->SetTitleFont(42);
   Graph_Graph1408->GetYaxis()->SetLabelFont(42);
   Graph_Graph1408->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1408->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1408->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1408->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1408->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1408->GetYaxis()->SetTitleFont(42);
   Graph_Graph1408->GetZaxis()->SetLabelFont(42);
   Graph_Graph1408->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1408->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1408->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1408->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1408->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1408);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx409[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph2_fy409[42] = { 144.1124, 11.76302, 11.14282, 8.951492, 8.21902, 7.927551, 7.760462, 11.62097, 16.04632, 20.9452, 25.63201, 47.02878, 48.3331, 46.88342, 47.78356, 47.33089, 45.36663,
   47.45646, 47.63632, 47.63632, 47.63632, 10.87734, 10.87734, 10.87734, 10.83851, 10.39067, 10.81232, 10.90918, 10.71541, 11.02763, 10.7485, 6.147948, 5.098804,
   3.985781, 2.984814, 2.485988, 2.572454, 2.710829, 2.954348, 3.74544, 4.563699, 54.90678 };
   graph = new TGraph(42,Graph2_fx409,Graph2_fy409);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2409 = new TH1F("Graph_Graph2409","Graph",100,2.7,1099.7);
   Graph_Graph2409->SetMinimum(2.237389);
   Graph_Graph2409->SetMaximum(158.2751);
   Graph_Graph2409->SetDirectory(nullptr);
   Graph_Graph2409->SetStats(0);
   Graph_Graph2409->SetLineWidth(2);
   Graph_Graph2409->SetMarkerStyle(20);
   Graph_Graph2409->SetMarkerSize(0.9);
   Graph_Graph2409->GetXaxis()->SetLabelFont(42);
   Graph_Graph2409->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2409->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2409->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2409->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2409->GetXaxis()->SetTitleFont(42);
   Graph_Graph2409->GetYaxis()->SetLabelFont(42);
   Graph_Graph2409->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2409->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2409->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2409->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2409->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2409->GetYaxis()->SetTitleFont(42);
   Graph_Graph2409->GetZaxis()->SetLabelFont(42);
   Graph_Graph2409->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2409->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2409->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2409->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2409->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2409);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx410[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy410[20] = { 87.81109, 7.17615, 6.310367, 4.949822, 4.540165, 4.328125, 4.208751, 5.772179, 7.953115, 10.36692, 12.68648, 23.27674, 23.92231, 23.2048, 23.65032, 23.42627, 22.45407,
   23.48842, 23.57745, 23.57745 };
   graph = new TGraph(20,Graph0_fx410,Graph0_fy410);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0410 = new TH1F("Graph_Graph0410","",100,2.7,1099.7);
   Graph_Graph0410->SetMinimum(0.2);
   Graph_Graph0410->SetMaximum(100000);
   Graph_Graph0410->SetDirectory(nullptr);
   Graph_Graph0410->SetStats(0);
   Graph_Graph0410->SetLineWidth(2);
   Graph_Graph0410->SetMarkerStyle(20);
   Graph_Graph0410->SetMarkerSize(0.9);
   Graph_Graph0410->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0410->GetXaxis()->SetRange(0,91);
   Graph_Graph0410->GetXaxis()->SetLabelFont(42);
   Graph_Graph0410->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0410->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0410->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0410->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0410->GetXaxis()->SetTitleFont(42);
   Graph_Graph0410->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0410->GetYaxis()->SetLabelFont(42);
   Graph_Graph0410->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0410->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0410->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0410->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0410->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0410->GetYaxis()->SetTitleFont(42);
   Graph_Graph0410->GetZaxis()->SetLabelFont(42);
   Graph_Graph0410->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0410->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0410->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0410->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0410->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0410);
   
   graph->Draw("l");
   
   Double_t Graph_fx411[72] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180, 185, 190, 195, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450,
   475, 500, 600, 700, 800, 900, 1000 };
   Double_t Graph_fy411[72] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3.332383e-307,
   5.634669e-284, 1.316284e-273, 5.915893e-264, 6.032344e-255, 1.680616e-231, 1.238818e-217, 2.889142e-200, 1.165703e-189, 2.647313e-176, 6.537542e-168, 2.429615e-157, 8.255771e-57, 1.906646e-46, 4.659496e-39, 1.579698e-33, 3.100715e-29,
   8.299481e-26, 5.2233e-23, 1.111161e-20, 4.934966e-17, 1.405596e-15, 2.618772e-14, 3.440919e-13, 3.380578e-12, 2.552877e-11, 1.571101e-10, 3.60285e-09, 4.86712e-08, 4.377577e-07, 2.86054e-06, 1.447795e-05, 5.954642e-05,
   0.0002064618, 0.0006209658, 0.001028415, 0.001657065, 0.002603189, 0.00399483, 0.02528111, 0.1089642, 0.3556141, 0.9429837, 2.13308, 4.261382, 7.71162, 12.88323, 20.15868, 29.87594,
   42.30872, 57.65513, 149.4359, 285.4008, 452.2605, 634.5798, 634.5798 };
   graph = new TGraph(72,Graph_fx411,Graph_fy411);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph411 = new TH1F("Graph_Graph411","",100,1.44,1099.84);
   Graph_Graph411->SetMinimum(0.6980378);
   Graph_Graph411->SetMaximum(698.0378);
   Graph_Graph411->SetDirectory(nullptr);
   Graph_Graph411->SetStats(0);
   Graph_Graph411->SetLineWidth(2);
   Graph_Graph411->SetMarkerStyle(20);
   Graph_Graph411->SetMarkerSize(0.9);
   Graph_Graph411->GetXaxis()->SetLabelFont(42);
   Graph_Graph411->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph411->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph411->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph411->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph411->GetXaxis()->SetTitleFont(42);
   Graph_Graph411->GetYaxis()->SetLabelFont(42);
   Graph_Graph411->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph411->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph411->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph411->GetYaxis()->SetTickLength(0.02);
   Graph_Graph411->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph411->GetYaxis()->SetTitleFont(42);
   Graph_Graph411->GetZaxis()->SetLabelFont(42);
   Graph_Graph411->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph411->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph411->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph411->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph411->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph411);
   
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
   
   Double_t Graph_fx413[72] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180, 185, 190, 195, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450,
   475, 500, 600, 700, 800, 900, 1000 };
   Double_t Graph_fy413[72] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3.665621e-307,
   6.198136e-284, 1.447912e-273, 6.507482e-264, 6.635578e-255, 1.848678e-231, 1.3627e-217, 3.178056e-200, 1.282273e-189, 2.912044e-176, 7.191296e-168, 2.672577e-157, 9.081348e-57, 2.097311e-46, 5.125446e-39, 1.737668e-33, 3.410786e-29,
   9.129429e-26, 5.74563e-23, 1.222277e-20, 5.428463e-17, 1.546156e-15, 2.880649e-14, 3.785011e-13, 3.718636e-12, 2.808165e-11, 1.728211e-10, 3.963135e-09, 5.353832e-08, 4.815335e-07, 3.146594e-06, 1.592574e-05, 6.550106e-05,
   0.000227108, 0.0006830624, 0.001131257, 0.001822772, 0.002863508, 0.004394313, 0.02780922, 0.1198606, 0.3911755, 1.037282, 2.346388, 4.68752, 8.482782, 14.17155, 22.17455, 32.86353,
   46.53959, 63.42064, 164.3795, 313.9409, 497.4866, 698.0378, 698.0378 };
   graph = new TGraph(72,Graph_fx413,Graph_fy413);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph413 = new TH1F("Graph_Graph413","",100,1.44,1099.84);
   Graph_Graph413->SetMinimum(0.7678416);
   Graph_Graph413->SetMaximum(767.8416);
   Graph_Graph413->SetDirectory(nullptr);
   Graph_Graph413->SetStats(0);
   Graph_Graph413->SetLineWidth(2);
   Graph_Graph413->SetMarkerStyle(20);
   Graph_Graph413->SetMarkerSize(0.9);
   Graph_Graph413->GetXaxis()->SetLabelFont(42);
   Graph_Graph413->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph413->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph413->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph413->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph413->GetXaxis()->SetTitleFont(42);
   Graph_Graph413->GetYaxis()->SetLabelFont(42);
   Graph_Graph413->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph413->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph413->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph413->GetYaxis()->SetTickLength(0.02);
   Graph_Graph413->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph413->GetYaxis()->SetTitleFont(42);
   Graph_Graph413->GetZaxis()->SetLabelFont(42);
   Graph_Graph413->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph413->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph413->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph413->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph413->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph413);
   
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
   line = new TLine(434.3576,0,434.3576,23.35692);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(434.3526,0,"  434.36 TeV");

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
   pt_LaTex = pt->AddText("#varepsilon = 5.44e-07");
   pt_LaTex = pt->AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
