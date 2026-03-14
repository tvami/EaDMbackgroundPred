#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_2mnthNorm_rate_1.5e-08()
{
//=========Macro generated from canvas: climits/climits
//=========  (Wed Mar 11 03:47:19 2026) by ROOT version 6.30/07
   TCanvas *climits = new TCanvas("climits", "climits",0,0,700,600);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   climits->SetHighLightColor(2);
   climits->Range(-33.75645,-1.838764,191.2865,5.759863);
   climits->SetFillColor(0);
   climits->SetBorderMode(0);
   climits->SetBorderSize(2);
   climits->SetLogy();
   climits->SetLeftMargin(0.15);
   climits->SetRightMargin(0.05);
   climits->SetBottomMargin(0.15);
   climits->SetFrameLineWidth(2);
   climits->SetFrameBorderMode(0);
   climits->SetFrameLineWidth(2);
   climits->SetFrameBorderMode(0);
   
   Double_t Graph0_fx78[50] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 6, 7, 7.5, 8, 8.5, 9, 10, 20, 25, 30, 40, 45,
   50, 55, 60, 70, 75, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160, 170,
   180 };
   Double_t Graph0_fy78[50] = { 37.59766, 32.8125, 23.33984, 18.89648, 20.41016, 22.26562, 21.14258, 18.84766, 16.8457, 15.52734, 14.84375, 14.20898, 13.57422, 13.08594, 12.20703, 11.47461, 10.79102,
   10.40039, 9.814453, 9.716797, 9.423828, 9.423828, 9.423828, 9.667969, 9.716797, 9.863281, 10.10742, 10.44922, 30.07812, 34.76562, 39.0625, 46.48438, 48.82812,
   53.90625, 55.85938, 61.13281, 67.1875, 71.09375, 82.8125, 85.54688, 89.45312, 90.23438, 98.82812, 108.5938, 114.0625, 125, 125.7812, 137.5, 150.7812,
   153.9062 };
   TGraph *graph = new TGraph(50,Graph0_fx78,Graph0_fy78);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph078 = new TH1F("Graph_Graph078","",100,0,197.84);
   Graph_Graph078->SetMinimum(0.2);
   Graph_Graph078->SetMaximum(100000);
   Graph_Graph078->SetDirectory(nullptr);
   Graph_Graph078->SetStats(0);
   Graph_Graph078->SetLineWidth(2);
   Graph_Graph078->SetMarkerStyle(20);
   Graph_Graph078->SetMarkerSize(0.9);
   Graph_Graph078->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph078->GetXaxis()->SetRange(1,91);
   Graph_Graph078->GetXaxis()->SetLabelFont(42);
   Graph_Graph078->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph078->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph078->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph078->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph078->GetXaxis()->SetTitleFont(42);
   Graph_Graph078->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph078->GetYaxis()->SetLabelFont(42);
   Graph_Graph078->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph078->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph078->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph078->GetYaxis()->SetTickLength(0.02);
   Graph_Graph078->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph078->GetYaxis()->SetTitleFont(42);
   Graph_Graph078->GetZaxis()->SetLabelFont(42);
   Graph_Graph078->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph078->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph078->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph078->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph078->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph078);
   
   graph->Draw("al");
   
   Double_t Graph1_fx79[102] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 6, 7, 7.5, 8, 8.5, 9, 10, 20, 25, 30, 40, 45,
   50, 55, 60, 70, 75, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160, 170,
   180, 180, 180, 180, 170, 160, 150, 140, 130, 120, 110, 100, 95, 90, 85, 75,
   70, 60, 55, 50, 45, 40, 30, 25, 20, 10, 9, 8.5, 8, 7.5, 7, 6,
   5.6, 5.4, 5.2, 5, 4.8, 4.6, 4.4, 4.2, 4, 3.8, 3.6, 3.4, 3.2, 3, 2.8, 2.6,
   2.4, 2.2, 2, 1.8, 1.6 };
   Double_t Graph1_fy79[102] = { 74.54662, 68.53737, 53.50381, 45.35591, 46.50549, 48.47651, 47.21983, 44.54715, 41.61218, 39.16454, 37.98207, 36.98527, 36.18023, 36.19005, 35.18717, 34.61032, 32.8137,
   31.62588, 29.84415, 29.54719, 28.65632, 28.65632, 28.65632, 29.39872, 29.5472, 29.99264, 30.73503, 31.77438, 91.46295, 105.7169, 118.7831, 141.3518, 148.4788,
   163.9206, 169.8598, 185.8955, 204.3068, 216.1852, 251.8201, 260.1349, 272.0132, 274.3889, 300.5211, 330.2169, 346.8465, 380.1058, 382.4814, 418.1163, 458.5026,
   468.0052, 468.0052, 43.28613, 43.28613, 41.22925, 37.59766, 34.39331, 34.17969, 31.18896, 29.6936, 27.02332, 25.02594, 24.45984, 23.39172, 22.64404, 19.4397,
   18.63403, 16.9548, 15.49225, 14.95056, 13.54218, 12.89215, 10.83374, 9.642029, 8.459473, 3.020477, 2.921677, 2.889633, 2.884674, 2.907944, 2.908134, 3.092194,
   3.129005, 3.22628, 3.297043, 3.493881, 3.667259, 4.034042, 4.577637, 5.418396, 6.150818, 6.771469, 7.247925, 7.642365, 8.422852, 9.791946, 11.56235, 12.35046,
   10.28481, 8.931541, 12.12578, 17.68799, 19.53316 };
   graph = new TGraph(102,Graph1_fx79,Graph1_fy79);
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
   
   TH1F *Graph_Graph179 = new TH1F("Graph_Graph179","Graph",102,0,197.84);
   Graph_Graph179->SetMinimum(2.596207);
   Graph_Graph179->SetMaximum(514.5173);
   Graph_Graph179->SetDirectory(nullptr);
   Graph_Graph179->SetStats(0);
   Graph_Graph179->SetLineWidth(2);
   Graph_Graph179->SetMarkerStyle(20);
   Graph_Graph179->SetMarkerSize(0.9);
   Graph_Graph179->GetXaxis()->SetLabelFont(42);
   Graph_Graph179->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph179->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph179->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph179->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph179->GetXaxis()->SetTitleFont(42);
   Graph_Graph179->GetYaxis()->SetLabelFont(42);
   Graph_Graph179->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph179->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph179->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph179->GetYaxis()->SetTickLength(0.02);
   Graph_Graph179->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph179->GetYaxis()->SetTitleFont(42);
   Graph_Graph179->GetZaxis()->SetLabelFont(42);
   Graph_Graph179->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph179->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph179->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph179->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph179->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph179);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx80[102] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 6, 7, 7.5, 8, 8.5, 9, 10, 20, 25, 30, 40, 45,
   50, 55, 60, 70, 75, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160, 170,
   180, 180, 180, 180, 170, 160, 150, 140, 130, 120, 110, 100, 95, 90, 85, 75,
   70, 60, 55, 50, 45, 40, 30, 25, 20, 10, 9, 8.5, 8, 7.5, 7, 6,
   5.6, 5.4, 5.2, 5, 4.8, 4.6, 4.4, 4.2, 4, 3.8, 3.6, 3.4, 3.2, 3, 2.8, 2.6,
   2.4, 2.2, 2, 1.8, 1.6 };
   Double_t Graph2_fy80[102] = { 53.70824, 48.18056, 35.62028, 29.66756, 31.06776, 32.91583, 31.67698, 29.14013, 26.61569, 24.81124, 23.83726, 23.04445, 22.36667, 22.05765, 21.16006, 20.43931, 19.82384,
   19.43789, 18.57752, 18.39267, 17.91324, 17.98837, 18.21375, 18.76269, 19.01237, 19.37762, 19.93784, 20.69537, 60.77042, 70.24114, 78.92262, 93.91792, 98.65328,
   108.9132, 112.8594, 123.5139, 135.7469, 143.6392, 167.316, 172.8405, 180.7328, 182.3113, 199.6742, 219.4049, 230.4541, 252.5524, 254.1308, 277.8076, 304.6413,
   310.9551, 310.9551, 77.85492, 77.85492, 75.46425, 68.4269, 62.23807, 61.8515, 56.4395, 53.73349, 49.46232, 44.89413, 44.26248, 42.32962, 41.21165, 35.17804,
   33.42767, 30.58786, 27.79161, 27.12421, 24.56903, 23.38972, 19.65523, 17.29687, 15.2153, 5.341959, 5.223361, 5.12338, 5.073088, 5.073264, 4.995193, 5.120295,
   5.145316, 5.305274, 5.384651, 5.706123, 6.004742, 6.533608, 7.259846, 8.114016, 8.702612, 9.328115, 9.85899, 10.35283, 11.38401, 12.97559, 14.9304, 15.91372,
   13.9236, 12.51269, 16.06822, 23.24152, 26.44847 };
   graph = new TGraph(102,Graph2_fx80,Graph2_fy80);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph280 = new TH1F("Graph_Graph280","Graph",102,0,197.84);
   Graph_Graph280->SetMinimum(4.495673);
   Graph_Graph280->SetMaximum(341.5511);
   Graph_Graph280->SetDirectory(nullptr);
   Graph_Graph280->SetStats(0);
   Graph_Graph280->SetLineWidth(2);
   Graph_Graph280->SetMarkerStyle(20);
   Graph_Graph280->SetMarkerSize(0.9);
   Graph_Graph280->GetXaxis()->SetLabelFont(42);
   Graph_Graph280->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph280->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph280->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph280->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph280->GetXaxis()->SetTitleFont(42);
   Graph_Graph280->GetYaxis()->SetLabelFont(42);
   Graph_Graph280->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph280->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph280->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph280->GetYaxis()->SetTickLength(0.02);
   Graph_Graph280->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph280->GetYaxis()->SetTitleFont(42);
   Graph_Graph280->GetZaxis()->SetLabelFont(42);
   Graph_Graph280->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph280->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph280->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph280->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph280->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph280);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx81[50] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 6, 7, 7.5, 8, 8.5, 9, 10, 20, 25, 30, 40, 45,
   50, 55, 60, 70, 75, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160, 170,
   180 };
   Double_t Graph0_fy81[50] = { 37.59766, 32.8125, 23.33984, 18.89648, 20.41016, 22.26562, 21.14258, 18.84766, 16.8457, 15.52734, 14.84375, 14.20898, 13.57422, 13.08594, 12.20703, 11.47461, 10.79102,
   10.40039, 9.814453, 9.716797, 9.423828, 9.423828, 9.423828, 9.667969, 9.716797, 9.863281, 10.10742, 10.44922, 30.07812, 34.76562, 39.0625, 46.48438, 48.82812,
   53.90625, 55.85938, 61.13281, 67.1875, 71.09375, 82.8125, 85.54688, 89.45312, 90.23438, 98.82812, 108.5938, 114.0625, 125, 125.7812, 137.5, 150.7812,
   153.9062 };
   graph = new TGraph(50,Graph0_fx81,Graph0_fy81);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph081 = new TH1F("Graph_Graph081","",100,0,197.84);
   Graph_Graph081->SetMinimum(0.2);
   Graph_Graph081->SetMaximum(100000);
   Graph_Graph081->SetDirectory(nullptr);
   Graph_Graph081->SetStats(0);
   Graph_Graph081->SetLineWidth(2);
   Graph_Graph081->SetMarkerStyle(20);
   Graph_Graph081->SetMarkerSize(0.9);
   Graph_Graph081->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph081->GetXaxis()->SetRange(1,91);
   Graph_Graph081->GetXaxis()->SetLabelFont(42);
   Graph_Graph081->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph081->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph081->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph081->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph081->GetXaxis()->SetTitleFont(42);
   Graph_Graph081->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph081->GetYaxis()->SetLabelFont(42);
   Graph_Graph081->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph081->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph081->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph081->GetYaxis()->SetTickLength(0.02);
   Graph_Graph081->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph081->GetYaxis()->SetTitleFont(42);
   Graph_Graph081->GetZaxis()->SetLabelFont(42);
   Graph_Graph081->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph081->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph081->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph081->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph081->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph081);
   
   graph->Draw("l");
   
   Double_t Graph_fx82[50] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 6, 7, 7.5, 8, 8.5, 9, 10, 20, 25, 30, 40, 45,
   50, 55, 60, 70, 75, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160, 170,
   180 };
   Double_t Graph_fy82[50] = { 27.16048, 27.89953, 28.0685, 27.85341, 27.38559, 26.75646, 26.0292, 25.24726, 24.44042, 23.62889, 22.82627, 22.04151, 21.28035, 20.54624, 19.84109, 19.1657, 18.52011,
   17.90386, 17.31617, 16.75602, 16.22226, 15.22907, 13.12323, 12.2413, 11.44857, 10.73963, 10.09792, 8.992814, 3.937052, 2.967624, 2.345897, 1.609151, 1.376615,
   1.196365, 1.053172, 0.9370935, 0.761326, 0.6935205, 0.5852962, 0.5415663, 0.5031661, 0.4692193, 0.4120271, 0.3658513, 0.3279072, 0.2962583, 0.2695196, 0.2466767, 0.2269708,
   0.2098242 };
   graph = new TGraph(50,Graph_fx82,Graph_fy82);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph82 = new TH1F("Graph_Graph82","",100,0,197.84);
   Graph_Graph82->SetMinimum(0.1888418);
   Graph_Graph82->SetMaximum(30.85437);
   Graph_Graph82->SetDirectory(nullptr);
   Graph_Graph82->SetStats(0);
   Graph_Graph82->SetLineWidth(2);
   Graph_Graph82->SetMarkerStyle(20);
   Graph_Graph82->SetMarkerSize(0.9);
   Graph_Graph82->GetXaxis()->SetLabelFont(42);
   Graph_Graph82->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph82->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph82->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph82->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph82->GetXaxis()->SetTitleFont(42);
   Graph_Graph82->GetYaxis()->SetLabelFont(42);
   Graph_Graph82->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph82->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph82->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph82->GetYaxis()->SetTickLength(0.02);
   Graph_Graph82->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph82->GetYaxis()->SetTitleFont(42);
   Graph_Graph82->GetZaxis()->SetLabelFont(42);
   Graph_Graph82->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph82->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph82->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph82->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph82->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph82);
   
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
   
   Double_t Graph_fx84[50] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 6, 7, 7.5, 8, 8.5, 9, 10, 20, 25, 30, 40, 45,
   50, 55, 60, 70, 75, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160, 170,
   180 };
   Double_t Graph_fy84[50] = { 29.87653, 30.68948, 30.87536, 30.63876, 30.12415, 29.43211, 28.63212, 27.77199, 26.88446, 25.99178, 25.1089, 24.24566, 23.40838, 22.60087, 21.8252, 21.08226, 20.37212,
   19.69425, 19.04779, 18.43162, 17.84449, 16.75197, 14.43555, 13.46543, 12.59342, 11.81359, 11.10771, 9.892095, 4.330757, 3.264387, 2.580487, 1.770066, 1.514276,
   1.316001, 1.158489, 1.030803, 0.8374586, 0.7628726, 0.6438259, 0.5957229, 0.5534827, 0.5161412, 0.4532299, 0.4024364, 0.3606979, 0.3258841, 0.2964716, 0.2713444, 0.2496679,
   0.2308066 };
   graph = new TGraph(50,Graph_fx84,Graph_fy84);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph84 = new TH1F("Graph_Graph84","",100,0,197.84);
   Graph_Graph84->SetMinimum(0.207726);
   Graph_Graph84->SetMaximum(33.93981);
   Graph_Graph84->SetDirectory(nullptr);
   Graph_Graph84->SetStats(0);
   Graph_Graph84->SetLineWidth(2);
   Graph_Graph84->SetMarkerStyle(20);
   Graph_Graph84->SetMarkerSize(0.9);
   Graph_Graph84->GetXaxis()->SetLabelFont(42);
   Graph_Graph84->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph84->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph84->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph84->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph84->GetXaxis()->SetTitleFont(42);
   Graph_Graph84->GetYaxis()->SetLabelFont(42);
   Graph_Graph84->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph84->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph84->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph84->GetYaxis()->SetTickLength(0.02);
   Graph_Graph84->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph84->GetYaxis()->SetTitleFont(42);
   Graph_Graph84->GetZaxis()->SetLabelFont(42);
   Graph_Graph84->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph84->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph84->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph84->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph84->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph84);
   
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
   line = new TLine(1.893572,0,1.893572,27.97846);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(1.888572,0,"  1.89 TeV");

   ci = TColor::GetColor("#666666");
   tex->SetTextColor(ci);
   tex->SetTextFont(43);
   tex->SetTextSize(14);
   tex->SetTextAngle(90);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TH1F *Graph_copy = new TH1F("Graph_copy","",100,0,197.84);
   Graph_copy->SetMinimum(1e-06);
   Graph_copy->SetMaximum(1000);
   Graph_copy->SetDirectory(nullptr);
   Graph_copy->SetStats(0);
   Graph_copy->SetLineWidth(2);
   Graph_copy->SetMarkerStyle(20);
   Graph_copy->SetMarkerSize(0.9);
   Graph_copy->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_copy->GetXaxis()->SetRange(1,91);
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
      tex = new TLatex(0.95,0.915,"2023D Cosmics");
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
      tex = new TLatex(0.4325,0.95,"Data Private Work");
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
   pt_LaTex = pt->AddText("#varepsilon = 1.5e-08");
   pt_LaTex = pt->AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
