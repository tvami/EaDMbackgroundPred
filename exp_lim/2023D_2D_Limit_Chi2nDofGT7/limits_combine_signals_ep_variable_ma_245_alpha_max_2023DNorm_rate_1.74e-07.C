#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_ep_variable_ma_245_alpha_max_2023DNorm_rate_1.74e-07()
{
//=========Macro generated from canvas: climits/climits
//=========  (Mon Feb  9 23:41:16 2026) by ROOT version 6.30/07
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
   
   Double_t Graph0_fx246[51] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180 };
   Double_t Graph0_fy246[51] = { 45.60547, 42.38281, 47.07031, 47.65625, 37.98828, 36.71875, 38.96484, 41.21094, 39.45312, 38.47656, 36.71875, 35.74219, 36.23047, 36.81641, 37.59766, 38.57422, 39.16016,
   37.98828, 37.10938, 37.69531, 37.10938, 37.89062, 38.37891, 39.25781, 39.45312, 40.82031, 41.40625, 41.99219, 113.6719, 121.875, 128.125, 139.0625, 143.75,
   157.0312, 161.7188, 172.2656, 189.0625, 200.7812, 214.0625, 228.9062, 237.5, 246.0938, 251.5625, 270.3125, 292.9688, 315.625, 329.6875, 348.4375, 373.4375,
   395.3125, 400 };
   TGraph *graph = new TGraph(51,Graph0_fx246,Graph0_fy246);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0246 = new TH1F("Graph_Graph0246","",100,0,197.84);
   Graph_Graph0246->SetMinimum(0.2);
   Graph_Graph0246->SetMaximum(100000);
   Graph_Graph0246->SetDirectory(nullptr);
   Graph_Graph0246->SetStats(0);
   Graph_Graph0246->SetLineWidth(2);
   Graph_Graph0246->SetMarkerStyle(20);
   Graph_Graph0246->SetMarkerSize(0.9);
   Graph_Graph0246->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0246->GetXaxis()->SetRange(1,91);
   Graph_Graph0246->GetXaxis()->SetLabelFont(42);
   Graph_Graph0246->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0246->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0246->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0246->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0246->GetXaxis()->SetTitleFont(42);
   Graph_Graph0246->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0246->GetYaxis()->SetLabelFont(42);
   Graph_Graph0246->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0246->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0246->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0246->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0246->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0246->GetYaxis()->SetTitleFont(42);
   Graph_Graph0246->GetZaxis()->SetLabelFont(42);
   Graph_Graph0246->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0246->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0246->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0246->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0246->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0246);
   
   graph->Draw("al");
   
   Double_t Graph1_fx247[104] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180, 180, 180, 180, 170, 160, 150, 140, 130, 120, 110, 100, 95, 90, 85,
   80, 75, 70, 60, 55, 50, 45, 40, 35, 30, 25, 9.5, 9, 8.5, 8, 7.5,
   7, 6.5, 6, 5.8, 5.6, 5.4, 5, 4.8, 4.6, 4.4, 4.2, 4, 3.8, 3.6, 3.4, 3.2,
   3, 2.8, 2.6, 2.2, 2, 1.8, 1.6 };
   Double_t Graph1_fy247[104] = { 102.1954, 95.09992, 103.5276, 104.4253, 89.88257, 87.1575, 90.84357, 94.04445, 91.02211, 91.14931, 88.61798, 87.35803, 88.75735, 89.1701, 90.17774, 91.97331, 93.63119,
   92.84774, 91.63073, 94.17921, 92.45036, 93.66703, 94.95281, 97.66216, 98.68187, 101.8948, 103.0923, 104.82, 322.2594, 345.5892, 365.4065, 399.5878, 416.923,
   459.6504, 473.7894, 497.7765, 544.2489, 596.1031, 632.7843, 677.3656, 702.7366, 719.8841, 735.6171, 791.9377, 865.2794, 942.0382, 980.6094, 1027.321, 1108.787,
   1159.109, 1160.344, 1160.344, 171.875, 171.875, 169.8608, 160.4614, 149.7192, 140.3748, 134.3872, 125.885, 116.1499, 107.1106, 105.7434, 102.0508, 98.35815,
   90.30762, 85.48889, 81.23779, 74.02039, 69.48853, 66.86096, 61.20605, 59.75342, 55.05371, 53.32031, 49.73145, 19.84787, 19.40918, 18.97507, 18.18542, 18.24875,
   17.99011, 17.76123, 16.96014, 17.22794, 17.1051, 17.80701, 18.81523, 18.68439, 18.0645, 17.4015, 16.84151, 16.75415, 17.21191, 18.33649, 19.41833, 20.44449,
   18.8736, 17.35535, 17.9554, 23.82812, 23.35129, 20.69473, 22.2683 };
   graph = new TGraph(104,Graph1_fx247,Graph1_fy247);
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
   
   TH1F *Graph_Graph1247 = new TH1F("Graph_Graph1247","Graph",104,0,197.84);
   Graph_Graph1247->SetMinimum(15.07874);
   Graph_Graph1247->SetMaximum(1274.703);
   Graph_Graph1247->SetDirectory(nullptr);
   Graph_Graph1247->SetStats(0);
   Graph_Graph1247->SetLineWidth(2);
   Graph_Graph1247->SetMarkerStyle(20);
   Graph_Graph1247->SetMarkerSize(0.9);
   Graph_Graph1247->GetXaxis()->SetLabelFont(42);
   Graph_Graph1247->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1247->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1247->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1247->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1247->GetXaxis()->SetTitleFont(42);
   Graph_Graph1247->GetYaxis()->SetLabelFont(42);
   Graph_Graph1247->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1247->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1247->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1247->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1247->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1247->GetYaxis()->SetTitleFont(42);
   Graph_Graph1247->GetZaxis()->SetLabelFont(42);
   Graph_Graph1247->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1247->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1247->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1247->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1247->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1247);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx248[104] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180, 180, 180, 180, 170, 160, 150, 140, 130, 120, 110, 100, 95, 90, 85,
   80, 75, 70, 60, 55, 50, 45, 40, 35, 30, 25, 9.5, 9, 8.5, 8, 7.5,
   7, 6.5, 6, 5.8, 5.6, 5.4, 5, 4.8, 4.6, 4.4, 4.2, 4, 3.8, 3.6, 3.4, 3.2,
   3, 2.8, 2.6, 2.2, 2, 1.8, 1.6 };
   Double_t Graph2_fy248[104] = { 69.23757, 64.34497, 70.71097, 71.40123, 59.18749, 57.35586, 60.24307, 62.89439, 60.68348, 59.94825, 57.79495, 56.68526, 57.45965, 57.94866, 58.87861, 60.17728, 61.16942,
   60.24745, 59.07543, 60.38384, 59.29731, 60.31913, 61.01994, 62.65207, 63.19966, 65.14568, 65.99827, 67.01589, 192.0583, 206.404, 217.4996, 236.6209, 245.5996,
   269.6992, 277.75, 293.8041, 321.6981, 346.44, 369.3562, 396.7934, 410.7434, 424.6249, 431.0528, 464.2584, 505.4328, 547.112, 570.8337, 601.2149, 645.8399,
   678.1565, 685.4007, 685.4007, 248.5107, 248.5107, 245.5985, 232.0081, 216.4762, 203.972, 196.6877, 182.0147, 169.1433, 156.7659, 153.9888, 147.5533, 142.2142,
   132.8484, 124.6703, 118.3025, 107.7922, 100.4721, 97.857, 89.58054, 87.01591, 80.17197, 76.88599, 71.71097, 27.63298, 27.14252, 26.65504, 25.8285, 25.79888,
   25.15805, 24.83797, 24.04386, 24.4235, 24.13785, 25.05965, 26.12669, 25.8323, 25.08423, 24.37873, 23.80942, 23.57798, 24.22218, 25.73167, 26.77486, 27.90743,
   26.09389, 24.31407, 25.15472, 32.76367, 32.24592, 28.65832, 30.83741 };
   graph = new TGraph(104,Graph2_fx248,Graph2_fy248);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2248 = new TH1F("Graph_Graph2248","Graph",104,0,197.84);
   Graph_Graph2248->SetMinimum(21.22018);
   Graph_Graph2248->SetMaximum(751.5829);
   Graph_Graph2248->SetDirectory(nullptr);
   Graph_Graph2248->SetStats(0);
   Graph_Graph2248->SetLineWidth(2);
   Graph_Graph2248->SetMarkerStyle(20);
   Graph_Graph2248->SetMarkerSize(0.9);
   Graph_Graph2248->GetXaxis()->SetLabelFont(42);
   Graph_Graph2248->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2248->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2248->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2248->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2248->GetXaxis()->SetTitleFont(42);
   Graph_Graph2248->GetYaxis()->SetLabelFont(42);
   Graph_Graph2248->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2248->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2248->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2248->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2248->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2248->GetYaxis()->SetTitleFont(42);
   Graph_Graph2248->GetZaxis()->SetLabelFont(42);
   Graph_Graph2248->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2248->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2248->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2248->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2248->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2248);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx249[51] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180 };
   Double_t Graph0_fy249[51] = { 45.60547, 42.38281, 47.07031, 47.65625, 37.98828, 36.71875, 38.96484, 41.21094, 39.45312, 38.47656, 36.71875, 35.74219, 36.23047, 36.81641, 37.59766, 38.57422, 39.16016,
   37.98828, 37.10938, 37.69531, 37.10938, 37.89062, 38.37891, 39.25781, 39.45312, 40.82031, 41.40625, 41.99219, 113.6719, 121.875, 128.125, 139.0625, 143.75,
   157.0312, 161.7188, 172.2656, 189.0625, 200.7812, 214.0625, 228.9062, 237.5, 246.0938, 251.5625, 270.3125, 292.9688, 315.625, 329.6875, 348.4375, 373.4375,
   395.3125, 400 };
   graph = new TGraph(51,Graph0_fx249,Graph0_fy249);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0249 = new TH1F("Graph_Graph0249","",100,0,197.84);
   Graph_Graph0249->SetMinimum(0.2);
   Graph_Graph0249->SetMaximum(100000);
   Graph_Graph0249->SetDirectory(nullptr);
   Graph_Graph0249->SetStats(0);
   Graph_Graph0249->SetLineWidth(2);
   Graph_Graph0249->SetMarkerStyle(20);
   Graph_Graph0249->SetMarkerSize(0.9);
   Graph_Graph0249->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0249->GetXaxis()->SetRange(1,91);
   Graph_Graph0249->GetXaxis()->SetLabelFont(42);
   Graph_Graph0249->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0249->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0249->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0249->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0249->GetXaxis()->SetTitleFont(42);
   Graph_Graph0249->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0249->GetYaxis()->SetLabelFont(42);
   Graph_Graph0249->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0249->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0249->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0249->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0249->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0249->GetYaxis()->SetTitleFont(42);
   Graph_Graph0249->GetZaxis()->SetLabelFont(42);
   Graph_Graph0249->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0249->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0249->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0249->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0249->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0249);
   
   graph->Draw("l");
   
   Double_t Graph_fx250[51] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180 };
   Double_t Graph_fy250[51] = { 9.646536e-95, 1.187485e-83, 8.712222e-75, 1.542533e-67, 2.122541e-56, 4.984606e-52, 3.039215e-48, 6.197772e-45, 5.130278e-42, 2.003835e-39, 4.159156e-37, 5.04482e-35, 3.861784e-33, 1.98681e-31, 7.236307e-30, 1.948367e-28, 4.021668e-27,
   8.690907e-25, 9.552356e-24, 8.884157e-23, 7.109861e-22, 1.001761e-19, 3.851288e-18, 1.426473e-16, 2.371918e-15, 3.70756e-14, 3.437958e-13, 2.984355e-12, 0.02233397, 0.2043675, 0.9609893, 2.993174, 7.103815,
   13.96555, 23.97462, 37.21777, 72.50632, 93.71295, 116.6214, 140.722, 165.5416, 190.6604, 215.7193, 264.5258, 310.2446, 351.8962, 389.0353, 421.5766, 449.6617,
   473.5646, 493.6275 };
   graph = new TGraph(51,Graph_fx250,Graph_fy250);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph250 = new TH1F("Graph_Graph250","",100,0,197.84);
   Graph_Graph250->SetMinimum(8.681882e-95);
   Graph_Graph250->SetMaximum(542.9903);
   Graph_Graph250->SetDirectory(nullptr);
   Graph_Graph250->SetStats(0);
   Graph_Graph250->SetLineWidth(2);
   Graph_Graph250->SetMarkerStyle(20);
   Graph_Graph250->SetMarkerSize(0.9);
   Graph_Graph250->GetXaxis()->SetLabelFont(42);
   Graph_Graph250->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph250->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph250->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph250->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph250->GetXaxis()->SetTitleFont(42);
   Graph_Graph250->GetYaxis()->SetLabelFont(42);
   Graph_Graph250->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph250->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph250->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph250->GetYaxis()->SetTickLength(0.02);
   Graph_Graph250->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph250->GetYaxis()->SetTitleFont(42);
   Graph_Graph250->GetZaxis()->SetLabelFont(42);
   Graph_Graph250->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph250->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph250->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph250->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph250->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph250);
   
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
   
   Double_t Graph_fx252[51] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180 };
   Double_t Graph_fy252[51] = { 1.061119e-94, 1.306234e-83, 9.583445e-75, 1.696786e-67, 2.334795e-56, 5.483066e-52, 3.343136e-48, 6.81755e-45, 5.643306e-42, 2.204218e-39, 4.575071e-37, 5.549302e-35, 4.247963e-33, 2.185491e-31, 7.959938e-30, 2.143204e-28, 4.423834e-27,
   9.559998e-25, 1.050759e-23, 9.772573e-23, 7.820847e-22, 1.101938e-19, 4.236417e-18, 1.56912e-16, 2.60911e-15, 4.078316e-14, 3.781754e-13, 3.28279e-12, 0.02456737, 0.2248042, 1.057088, 3.292491, 7.814196,
   15.36211, 26.37209, 40.93955, 79.75695, 103.0842, 128.2835, 154.7942, 182.0958, 209.7264, 237.2912, 290.9784, 341.2691, 387.0858, 427.9389, 463.7343, 494.6278,
   520.921, 542.9903 };
   graph = new TGraph(51,Graph_fx252,Graph_fy252);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph252 = new TH1F("Graph_Graph252","",100,0,197.84);
   Graph_Graph252->SetMinimum(9.55007e-95);
   Graph_Graph252->SetMaximum(597.2893);
   Graph_Graph252->SetDirectory(nullptr);
   Graph_Graph252->SetStats(0);
   Graph_Graph252->SetLineWidth(2);
   Graph_Graph252->SetMarkerStyle(20);
   Graph_Graph252->SetMarkerSize(0.9);
   Graph_Graph252->GetXaxis()->SetLabelFont(42);
   Graph_Graph252->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph252->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph252->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph252->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph252->GetXaxis()->SetTitleFont(42);
   Graph_Graph252->GetYaxis()->SetLabelFont(42);
   Graph_Graph252->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph252->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph252->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph252->GetYaxis()->SetTickLength(0.02);
   Graph_Graph252->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph252->GetYaxis()->SetTitleFont(42);
   Graph_Graph252->GetZaxis()->SetLabelFont(42);
   Graph_Graph252->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph252->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph252->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph252->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph252->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph252);
   
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
   line = new TLine(112.7415,0,112.7415,276.3434);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(112.7365,0,"  112.74 TeV");

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
      tex = new TLatex(0.375,0.96,"Internal");
   tex->SetNDC();
   tex->SetTextAlign(23);
   tex->SetTextFont(52);
   tex->SetTextSize(0.0608);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TPaveText *pt = new TPaveText(0.2,0.68,0.43,0.88,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextAlign(12);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("m_{A'} = 0.245 GeV");
   pt_LaTex = pt->AddText("#varepsilon = 1.74e-07");
   pt_LaTex = pt->AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
