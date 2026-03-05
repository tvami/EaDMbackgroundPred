#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_ep_variable_ma_245_alpha_max_2023DNorm_rate_7.4e-08()
{
//=========Macro generated from canvas: climits/climits
//=========  (Mon Feb  9 23:41:15 2026) by ROOT version 6.30/07
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
   
   Double_t Graph0_fx176[51] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180 };
   Double_t Graph0_fy176[51] = { 45.60547, 42.38281, 47.07031, 47.65625, 37.98828, 36.71875, 38.96484, 41.21094, 39.45312, 38.47656, 36.71875, 35.74219, 36.23047, 36.81641, 37.59766, 38.57422, 39.16016,
   37.98828, 37.10938, 37.69531, 37.10938, 37.89062, 38.37891, 39.25781, 39.45312, 40.82031, 41.40625, 41.99219, 113.6719, 121.875, 128.125, 139.0625, 143.75,
   157.0312, 161.7188, 172.2656, 189.0625, 200.7812, 214.0625, 228.9062, 237.5, 246.0938, 251.5625, 270.3125, 292.9688, 315.625, 329.6875, 348.4375, 373.4375,
   395.3125, 400 };
   TGraph *graph = new TGraph(51,Graph0_fx176,Graph0_fy176);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0176 = new TH1F("Graph_Graph0176","",100,0,197.84);
   Graph_Graph0176->SetMinimum(0.2);
   Graph_Graph0176->SetMaximum(100000);
   Graph_Graph0176->SetDirectory(nullptr);
   Graph_Graph0176->SetStats(0);
   Graph_Graph0176->SetLineWidth(2);
   Graph_Graph0176->SetMarkerStyle(20);
   Graph_Graph0176->SetMarkerSize(0.9);
   Graph_Graph0176->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0176->GetXaxis()->SetRange(1,91);
   Graph_Graph0176->GetXaxis()->SetLabelFont(42);
   Graph_Graph0176->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0176->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0176->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0176->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0176->GetXaxis()->SetTitleFont(42);
   Graph_Graph0176->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0176->GetYaxis()->SetLabelFont(42);
   Graph_Graph0176->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0176->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0176->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0176->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0176->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0176->GetYaxis()->SetTitleFont(42);
   Graph_Graph0176->GetZaxis()->SetLabelFont(42);
   Graph_Graph0176->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0176->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0176->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0176->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0176->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0176);
   
   graph->Draw("al");
   
   Double_t Graph1_fx177[104] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180, 180, 180, 180, 170, 160, 150, 140, 130, 120, 110, 100, 95, 90, 85,
   80, 75, 70, 60, 55, 50, 45, 40, 35, 30, 25, 9.5, 9, 8.5, 8, 7.5,
   7, 6.5, 6, 5.8, 5.6, 5.4, 5, 4.8, 4.6, 4.4, 4.2, 4, 3.8, 3.6, 3.4, 3.2,
   3, 2.8, 2.6, 2.2, 2, 1.8, 1.6 };
   Double_t Graph1_fy177[104] = { 102.1954, 95.09992, 103.5276, 104.4253, 89.88257, 87.1575, 90.84357, 94.04445, 91.02211, 91.14931, 88.61798, 87.35803, 88.75735, 89.1701, 90.17774, 91.97331, 93.63119,
   92.84774, 91.63073, 94.17921, 92.45036, 93.66703, 94.95281, 97.66216, 98.68187, 101.8948, 103.0923, 104.82, 322.2594, 345.5892, 365.4065, 399.5878, 416.923,
   459.6504, 473.7894, 497.7765, 544.2489, 596.1031, 632.7843, 677.3656, 702.7366, 719.8841, 735.6171, 791.9377, 865.2794, 942.0382, 980.6094, 1027.321, 1108.787,
   1159.109, 1160.344, 1160.344, 171.875, 171.875, 169.8608, 160.4614, 149.7192, 140.3748, 134.3872, 125.885, 116.1499, 107.1106, 105.7434, 102.0508, 98.35815,
   90.30762, 85.48889, 81.23779, 74.02039, 69.48853, 66.86096, 61.20605, 59.75342, 55.05371, 53.32031, 49.73145, 19.84787, 19.40918, 18.97507, 18.18542, 18.24875,
   17.99011, 17.76123, 16.96014, 17.22794, 17.1051, 17.80701, 18.81523, 18.68439, 18.0645, 17.4015, 16.84151, 16.75415, 17.21191, 18.33649, 19.41833, 20.44449,
   18.8736, 17.35535, 17.9554, 23.82812, 23.35129, 20.69473, 22.2683 };
   graph = new TGraph(104,Graph1_fx177,Graph1_fy177);
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
   
   TH1F *Graph_Graph1177 = new TH1F("Graph_Graph1177","Graph",104,0,197.84);
   Graph_Graph1177->SetMinimum(15.07874);
   Graph_Graph1177->SetMaximum(1274.703);
   Graph_Graph1177->SetDirectory(nullptr);
   Graph_Graph1177->SetStats(0);
   Graph_Graph1177->SetLineWidth(2);
   Graph_Graph1177->SetMarkerStyle(20);
   Graph_Graph1177->SetMarkerSize(0.9);
   Graph_Graph1177->GetXaxis()->SetLabelFont(42);
   Graph_Graph1177->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1177->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1177->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1177->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1177->GetXaxis()->SetTitleFont(42);
   Graph_Graph1177->GetYaxis()->SetLabelFont(42);
   Graph_Graph1177->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1177->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1177->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1177->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1177->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1177->GetYaxis()->SetTitleFont(42);
   Graph_Graph1177->GetZaxis()->SetLabelFont(42);
   Graph_Graph1177->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1177->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1177->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1177->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1177->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1177);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx178[104] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180, 180, 180, 180, 170, 160, 150, 140, 130, 120, 110, 100, 95, 90, 85,
   80, 75, 70, 60, 55, 50, 45, 40, 35, 30, 25, 9.5, 9, 8.5, 8, 7.5,
   7, 6.5, 6, 5.8, 5.6, 5.4, 5, 4.8, 4.6, 4.4, 4.2, 4, 3.8, 3.6, 3.4, 3.2,
   3, 2.8, 2.6, 2.2, 2, 1.8, 1.6 };
   Double_t Graph2_fy178[104] = { 69.23757, 64.34497, 70.71097, 71.40123, 59.18749, 57.35586, 60.24307, 62.89439, 60.68348, 59.94825, 57.79495, 56.68526, 57.45965, 57.94866, 58.87861, 60.17728, 61.16942,
   60.24745, 59.07543, 60.38384, 59.29731, 60.31913, 61.01994, 62.65207, 63.19966, 65.14568, 65.99827, 67.01589, 192.0583, 206.404, 217.4996, 236.6209, 245.5996,
   269.6992, 277.75, 293.8041, 321.6981, 346.44, 369.3562, 396.7934, 410.7434, 424.6249, 431.0528, 464.2584, 505.4328, 547.112, 570.8337, 601.2149, 645.8399,
   678.1565, 685.4007, 685.4007, 248.5107, 248.5107, 245.5985, 232.0081, 216.4762, 203.972, 196.6877, 182.0147, 169.1433, 156.7659, 153.9888, 147.5533, 142.2142,
   132.8484, 124.6703, 118.3025, 107.7922, 100.4721, 97.857, 89.58054, 87.01591, 80.17197, 76.88599, 71.71097, 27.63298, 27.14252, 26.65504, 25.8285, 25.79888,
   25.15805, 24.83797, 24.04386, 24.4235, 24.13785, 25.05965, 26.12669, 25.8323, 25.08423, 24.37873, 23.80942, 23.57798, 24.22218, 25.73167, 26.77486, 27.90743,
   26.09389, 24.31407, 25.15472, 32.76367, 32.24592, 28.65832, 30.83741 };
   graph = new TGraph(104,Graph2_fx178,Graph2_fy178);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2178 = new TH1F("Graph_Graph2178","Graph",104,0,197.84);
   Graph_Graph2178->SetMinimum(21.22018);
   Graph_Graph2178->SetMaximum(751.5829);
   Graph_Graph2178->SetDirectory(nullptr);
   Graph_Graph2178->SetStats(0);
   Graph_Graph2178->SetLineWidth(2);
   Graph_Graph2178->SetMarkerStyle(20);
   Graph_Graph2178->SetMarkerSize(0.9);
   Graph_Graph2178->GetXaxis()->SetLabelFont(42);
   Graph_Graph2178->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2178->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2178->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2178->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2178->GetXaxis()->SetTitleFont(42);
   Graph_Graph2178->GetYaxis()->SetLabelFont(42);
   Graph_Graph2178->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2178->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2178->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2178->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2178->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2178->GetYaxis()->SetTitleFont(42);
   Graph_Graph2178->GetZaxis()->SetLabelFont(42);
   Graph_Graph2178->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2178->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2178->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2178->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2178->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2178);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx179[51] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180 };
   Double_t Graph0_fy179[51] = { 45.60547, 42.38281, 47.07031, 47.65625, 37.98828, 36.71875, 38.96484, 41.21094, 39.45312, 38.47656, 36.71875, 35.74219, 36.23047, 36.81641, 37.59766, 38.57422, 39.16016,
   37.98828, 37.10938, 37.69531, 37.10938, 37.89062, 38.37891, 39.25781, 39.45312, 40.82031, 41.40625, 41.99219, 113.6719, 121.875, 128.125, 139.0625, 143.75,
   157.0312, 161.7188, 172.2656, 189.0625, 200.7812, 214.0625, 228.9062, 237.5, 246.0938, 251.5625, 270.3125, 292.9688, 315.625, 329.6875, 348.4375, 373.4375,
   395.3125, 400 };
   graph = new TGraph(51,Graph0_fx179,Graph0_fy179);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0179 = new TH1F("Graph_Graph0179","",100,0,197.84);
   Graph_Graph0179->SetMinimum(0.2);
   Graph_Graph0179->SetMaximum(100000);
   Graph_Graph0179->SetDirectory(nullptr);
   Graph_Graph0179->SetStats(0);
   Graph_Graph0179->SetLineWidth(2);
   Graph_Graph0179->SetMarkerStyle(20);
   Graph_Graph0179->SetMarkerSize(0.9);
   Graph_Graph0179->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0179->GetXaxis()->SetRange(1,91);
   Graph_Graph0179->GetXaxis()->SetLabelFont(42);
   Graph_Graph0179->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0179->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0179->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0179->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0179->GetXaxis()->SetTitleFont(42);
   Graph_Graph0179->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0179->GetYaxis()->SetLabelFont(42);
   Graph_Graph0179->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0179->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0179->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0179->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0179->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0179->GetYaxis()->SetTitleFont(42);
   Graph_Graph0179->GetZaxis()->SetLabelFont(42);
   Graph_Graph0179->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0179->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0179->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0179->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0179->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0179);
   
   graph->Draw("l");
   
   Double_t Graph_fx180[51] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180 };
   Double_t Graph_fy180[51] = { 6.081293e-14, 5.388762e-12, 1.91769e-10, 3.519886e-09, 3.009191e-07, 1.707286e-06, 7.634387e-06, 2.814613e-05, 8.854823e-05, 0.0002441528, 0.0006025764, 0.001353752, 0.002806402, 0.005428395, 0.009887467, 0.0170885, 0.02820378,
   0.06831394, 0.1011149, 0.1454226, 0.203814, 0.4331959, 0.8096846, 1.396613, 2.222348, 3.348081, 4.780348, 6.565754, 134.8747, 163.5575, 181.5702, 191.5395, 195.8427,
   196.2932, 194.1891, 190.4341, 180.2619, 174.5585, 168.7355, 162.9238, 157.21, 151.6497, 146.2775, 136.1662, 126.9306, 118.5446, 110.9476, 104.0668, 97.82839,
   92.16274, 87.00631 };
   graph = new TGraph(51,Graph_fx180,Graph_fy180);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph180 = new TH1F("Graph_Graph180","",100,0,197.84);
   Graph_Graph180->SetMinimum(5.473164e-14);
   Graph_Graph180->SetMaximum(215.9226);
   Graph_Graph180->SetDirectory(nullptr);
   Graph_Graph180->SetStats(0);
   Graph_Graph180->SetLineWidth(2);
   Graph_Graph180->SetMarkerStyle(20);
   Graph_Graph180->SetMarkerSize(0.9);
   Graph_Graph180->GetXaxis()->SetLabelFont(42);
   Graph_Graph180->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph180->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph180->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph180->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph180->GetXaxis()->SetTitleFont(42);
   Graph_Graph180->GetYaxis()->SetLabelFont(42);
   Graph_Graph180->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph180->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph180->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph180->GetYaxis()->SetTickLength(0.02);
   Graph_Graph180->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph180->GetYaxis()->SetTitleFont(42);
   Graph_Graph180->GetZaxis()->SetLabelFont(42);
   Graph_Graph180->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph180->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph180->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph180->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph180->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph180);
   
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
   
   Double_t Graph_fx182[51] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180 };
   Double_t Graph_fy182[51] = { 6.689423e-14, 5.927638e-12, 2.109458e-10, 3.871874e-09, 3.31011e-07, 1.878014e-06, 8.397825e-06, 3.096074e-05, 9.740306e-05, 0.0002685681, 0.0006628341, 0.001489127, 0.003087042, 0.005971234, 0.01087621, 0.01879735, 0.03102416,
   0.07514533, 0.1112263, 0.1599649, 0.2241954, 0.4765155, 0.890653, 1.536275, 2.444583, 3.682889, 5.258383, 7.22233, 148.3622, 179.9133, 199.7272, 210.6935, 215.427,
   215.9226, 213.608, 209.4775, 198.2881, 192.0144, 185.6091, 179.2162, 172.931, 166.8147, 160.9053, 149.7829, 139.6237, 130.3991, 122.0424, 114.4735, 107.6112,
   101.379, 95.70694 };
   graph = new TGraph(51,Graph_fx182,Graph_fy182);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph182 = new TH1F("Graph_Graph182","",100,0,197.84);
   Graph_Graph182->SetMinimum(6.02048e-14);
   Graph_Graph182->SetMaximum(237.5148);
   Graph_Graph182->SetDirectory(nullptr);
   Graph_Graph182->SetStats(0);
   Graph_Graph182->SetLineWidth(2);
   Graph_Graph182->SetMarkerStyle(20);
   Graph_Graph182->SetMarkerSize(0.9);
   Graph_Graph182->GetXaxis()->SetLabelFont(42);
   Graph_Graph182->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph182->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph182->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph182->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph182->GetXaxis()->SetTitleFont(42);
   Graph_Graph182->GetYaxis()->SetLabelFont(42);
   Graph_Graph182->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph182->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph182->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph182->GetYaxis()->SetTickLength(0.02);
   Graph_Graph182->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph182->GetYaxis()->SetTitleFont(42);
   Graph_Graph182->GetZaxis()->SetLabelFont(42);
   Graph_Graph182->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph182->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph182->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph182->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph182->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph182);
   
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
   line = new TLine(23.69194,0,23.69194,104.5094);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(23.68694,0,"  23.69 TeV");

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
   pt_LaTex = pt->AddText("#varepsilon = 7.4e-08");
   pt_LaTex = pt->AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
