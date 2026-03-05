#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_ep_variable_ma_245_alpha_max_2023DNorm_rate_1.44e-07()
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
   
   Double_t Graph0_fx225[51] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180 };
   Double_t Graph0_fy225[51] = { 45.60547, 42.38281, 47.07031, 47.65625, 37.98828, 36.71875, 38.96484, 41.21094, 39.45312, 38.47656, 36.71875, 35.74219, 36.23047, 36.81641, 37.59766, 38.57422, 39.16016,
   37.98828, 37.10938, 37.69531, 37.10938, 37.89062, 38.37891, 39.25781, 39.45312, 40.82031, 41.40625, 41.99219, 113.6719, 121.875, 128.125, 139.0625, 143.75,
   157.0312, 161.7188, 172.2656, 189.0625, 200.7812, 214.0625, 228.9062, 237.5, 246.0938, 251.5625, 270.3125, 292.9688, 315.625, 329.6875, 348.4375, 373.4375,
   395.3125, 400 };
   TGraph *graph = new TGraph(51,Graph0_fx225,Graph0_fy225);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0225 = new TH1F("Graph_Graph0225","",100,0,197.84);
   Graph_Graph0225->SetMinimum(0.2);
   Graph_Graph0225->SetMaximum(100000);
   Graph_Graph0225->SetDirectory(nullptr);
   Graph_Graph0225->SetStats(0);
   Graph_Graph0225->SetLineWidth(2);
   Graph_Graph0225->SetMarkerStyle(20);
   Graph_Graph0225->SetMarkerSize(0.9);
   Graph_Graph0225->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0225->GetXaxis()->SetRange(1,91);
   Graph_Graph0225->GetXaxis()->SetLabelFont(42);
   Graph_Graph0225->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0225->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0225->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0225->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0225->GetXaxis()->SetTitleFont(42);
   Graph_Graph0225->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0225->GetYaxis()->SetLabelFont(42);
   Graph_Graph0225->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0225->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0225->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0225->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0225->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0225->GetYaxis()->SetTitleFont(42);
   Graph_Graph0225->GetZaxis()->SetLabelFont(42);
   Graph_Graph0225->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0225->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0225->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0225->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0225->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0225);
   
   graph->Draw("al");
   
   Double_t Graph1_fx226[104] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180, 180, 180, 180, 170, 160, 150, 140, 130, 120, 110, 100, 95, 90, 85,
   80, 75, 70, 60, 55, 50, 45, 40, 35, 30, 25, 9.5, 9, 8.5, 8, 7.5,
   7, 6.5, 6, 5.8, 5.6, 5.4, 5, 4.8, 4.6, 4.4, 4.2, 4, 3.8, 3.6, 3.4, 3.2,
   3, 2.8, 2.6, 2.2, 2, 1.8, 1.6 };
   Double_t Graph1_fy226[104] = { 102.1954, 95.09992, 103.5276, 104.4253, 89.88257, 87.1575, 90.84357, 94.04445, 91.02211, 91.14931, 88.61798, 87.35803, 88.75735, 89.1701, 90.17774, 91.97331, 93.63119,
   92.84774, 91.63073, 94.17921, 92.45036, 93.66703, 94.95281, 97.66216, 98.68187, 101.8948, 103.0923, 104.82, 322.2594, 345.5892, 365.4065, 399.5878, 416.923,
   459.6504, 473.7894, 497.7765, 544.2489, 596.1031, 632.7843, 677.3656, 702.7366, 719.8841, 735.6171, 791.9377, 865.2794, 942.0382, 980.6094, 1027.321, 1108.787,
   1159.109, 1160.344, 1160.344, 171.875, 171.875, 169.8608, 160.4614, 149.7192, 140.3748, 134.3872, 125.885, 116.1499, 107.1106, 105.7434, 102.0508, 98.35815,
   90.30762, 85.48889, 81.23779, 74.02039, 69.48853, 66.86096, 61.20605, 59.75342, 55.05371, 53.32031, 49.73145, 19.84787, 19.40918, 18.97507, 18.18542, 18.24875,
   17.99011, 17.76123, 16.96014, 17.22794, 17.1051, 17.80701, 18.81523, 18.68439, 18.0645, 17.4015, 16.84151, 16.75415, 17.21191, 18.33649, 19.41833, 20.44449,
   18.8736, 17.35535, 17.9554, 23.82812, 23.35129, 20.69473, 22.2683 };
   graph = new TGraph(104,Graph1_fx226,Graph1_fy226);
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
   
   TH1F *Graph_Graph1226 = new TH1F("Graph_Graph1226","Graph",104,0,197.84);
   Graph_Graph1226->SetMinimum(15.07874);
   Graph_Graph1226->SetMaximum(1274.703);
   Graph_Graph1226->SetDirectory(nullptr);
   Graph_Graph1226->SetStats(0);
   Graph_Graph1226->SetLineWidth(2);
   Graph_Graph1226->SetMarkerStyle(20);
   Graph_Graph1226->SetMarkerSize(0.9);
   Graph_Graph1226->GetXaxis()->SetLabelFont(42);
   Graph_Graph1226->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1226->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1226->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1226->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1226->GetXaxis()->SetTitleFont(42);
   Graph_Graph1226->GetYaxis()->SetLabelFont(42);
   Graph_Graph1226->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1226->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1226->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1226->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1226->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1226->GetYaxis()->SetTitleFont(42);
   Graph_Graph1226->GetZaxis()->SetLabelFont(42);
   Graph_Graph1226->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1226->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1226->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1226->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1226->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1226);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx227[104] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180, 180, 180, 180, 170, 160, 150, 140, 130, 120, 110, 100, 95, 90, 85,
   80, 75, 70, 60, 55, 50, 45, 40, 35, 30, 25, 9.5, 9, 8.5, 8, 7.5,
   7, 6.5, 6, 5.8, 5.6, 5.4, 5, 4.8, 4.6, 4.4, 4.2, 4, 3.8, 3.6, 3.4, 3.2,
   3, 2.8, 2.6, 2.2, 2, 1.8, 1.6 };
   Double_t Graph2_fy227[104] = { 69.23757, 64.34497, 70.71097, 71.40123, 59.18749, 57.35586, 60.24307, 62.89439, 60.68348, 59.94825, 57.79495, 56.68526, 57.45965, 57.94866, 58.87861, 60.17728, 61.16942,
   60.24745, 59.07543, 60.38384, 59.29731, 60.31913, 61.01994, 62.65207, 63.19966, 65.14568, 65.99827, 67.01589, 192.0583, 206.404, 217.4996, 236.6209, 245.5996,
   269.6992, 277.75, 293.8041, 321.6981, 346.44, 369.3562, 396.7934, 410.7434, 424.6249, 431.0528, 464.2584, 505.4328, 547.112, 570.8337, 601.2149, 645.8399,
   678.1565, 685.4007, 685.4007, 248.5107, 248.5107, 245.5985, 232.0081, 216.4762, 203.972, 196.6877, 182.0147, 169.1433, 156.7659, 153.9888, 147.5533, 142.2142,
   132.8484, 124.6703, 118.3025, 107.7922, 100.4721, 97.857, 89.58054, 87.01591, 80.17197, 76.88599, 71.71097, 27.63298, 27.14252, 26.65504, 25.8285, 25.79888,
   25.15805, 24.83797, 24.04386, 24.4235, 24.13785, 25.05965, 26.12669, 25.8323, 25.08423, 24.37873, 23.80942, 23.57798, 24.22218, 25.73167, 26.77486, 27.90743,
   26.09389, 24.31407, 25.15472, 32.76367, 32.24592, 28.65832, 30.83741 };
   graph = new TGraph(104,Graph2_fx227,Graph2_fy227);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2227 = new TH1F("Graph_Graph2227","Graph",104,0,197.84);
   Graph_Graph2227->SetMinimum(21.22018);
   Graph_Graph2227->SetMaximum(751.5829);
   Graph_Graph2227->SetDirectory(nullptr);
   Graph_Graph2227->SetStats(0);
   Graph_Graph2227->SetLineWidth(2);
   Graph_Graph2227->SetMarkerStyle(20);
   Graph_Graph2227->SetMarkerSize(0.9);
   Graph_Graph2227->GetXaxis()->SetLabelFont(42);
   Graph_Graph2227->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2227->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2227->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2227->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2227->GetXaxis()->SetTitleFont(42);
   Graph_Graph2227->GetYaxis()->SetLabelFont(42);
   Graph_Graph2227->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2227->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2227->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2227->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2227->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2227->GetYaxis()->SetTitleFont(42);
   Graph_Graph2227->GetZaxis()->SetLabelFont(42);
   Graph_Graph2227->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2227->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2227->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2227->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2227->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2227);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx228[51] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180 };
   Double_t Graph0_fy228[51] = { 45.60547, 42.38281, 47.07031, 47.65625, 37.98828, 36.71875, 38.96484, 41.21094, 39.45312, 38.47656, 36.71875, 35.74219, 36.23047, 36.81641, 37.59766, 38.57422, 39.16016,
   37.98828, 37.10938, 37.69531, 37.10938, 37.89062, 38.37891, 39.25781, 39.45312, 40.82031, 41.40625, 41.99219, 113.6719, 121.875, 128.125, 139.0625, 143.75,
   157.0312, 161.7188, 172.2656, 189.0625, 200.7812, 214.0625, 228.9062, 237.5, 246.0938, 251.5625, 270.3125, 292.9688, 315.625, 329.6875, 348.4375, 373.4375,
   395.3125, 400 };
   graph = new TGraph(51,Graph0_fx228,Graph0_fy228);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0228 = new TH1F("Graph_Graph0228","",100,0,197.84);
   Graph_Graph0228->SetMinimum(0.2);
   Graph_Graph0228->SetMaximum(100000);
   Graph_Graph0228->SetDirectory(nullptr);
   Graph_Graph0228->SetStats(0);
   Graph_Graph0228->SetLineWidth(2);
   Graph_Graph0228->SetMarkerStyle(20);
   Graph_Graph0228->SetMarkerSize(0.9);
   Graph_Graph0228->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0228->GetXaxis()->SetRange(1,91);
   Graph_Graph0228->GetXaxis()->SetLabelFont(42);
   Graph_Graph0228->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0228->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0228->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0228->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0228->GetXaxis()->SetTitleFont(42);
   Graph_Graph0228->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0228->GetYaxis()->SetLabelFont(42);
   Graph_Graph0228->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0228->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0228->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0228->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0228->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0228->GetYaxis()->SetTitleFont(42);
   Graph_Graph0228->GetZaxis()->SetLabelFont(42);
   Graph_Graph0228->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0228->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0228->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0228->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0228->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0228);
   
   graph->Draw("l");
   
   Double_t Graph_fx229[51] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180 };
   Double_t Graph_fy229[51] = { 2.035924e-63, 7.620867e-56, 8.588033e-50, 7.584959e-45, 2.998926e-37, 2.860183e-34, 1.085652e-31, 1.950116e-29, 1.892304e-27, 1.099459e-25, 4.148565e-24, 1.084817e-22, 2.071963e-21, 3.017477e-20, 3.47184e-19, 3.250665e-18, 2.539018e-17,
   9.750525e-16, 4.955866e-15, 2.247872e-14, 9.203502e-14, 2.465889e-12, 3.103587e-11, 3.430824e-10, 2.382221e-09, 1.48563e-08, 6.835649e-08, 2.883056e-07, 1.111784, 4.67555, 12.61748, 25.91259, 44.48257,
   67.48572, 93.71814, 121.9235, 179.9407, 208.1229, 235.0143, 260.279, 283.7153, 305.2243, 324.7823, 358.204, 384.5911, 404.804, 419.7515, 430.2918, 437.1901,
   441.1072, 442.6023 };
   graph = new TGraph(51,Graph_fx229,Graph_fy229);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph229 = new TH1F("Graph_Graph229","",100,0,197.84);
   Graph_Graph229->SetMinimum(1.832331e-63);
   Graph_Graph229->SetMaximum(486.8625);
   Graph_Graph229->SetDirectory(nullptr);
   Graph_Graph229->SetStats(0);
   Graph_Graph229->SetLineWidth(2);
   Graph_Graph229->SetMarkerStyle(20);
   Graph_Graph229->SetMarkerSize(0.9);
   Graph_Graph229->GetXaxis()->SetLabelFont(42);
   Graph_Graph229->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph229->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph229->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph229->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph229->GetXaxis()->SetTitleFont(42);
   Graph_Graph229->GetYaxis()->SetLabelFont(42);
   Graph_Graph229->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph229->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph229->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph229->GetYaxis()->SetTickLength(0.02);
   Graph_Graph229->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph229->GetYaxis()->SetTitleFont(42);
   Graph_Graph229->GetZaxis()->SetLabelFont(42);
   Graph_Graph229->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph229->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph229->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph229->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph229->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph229);
   
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
   
   Double_t Graph_fx231[51] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180 };
   Double_t Graph_fy231[51] = { 2.239516e-63, 8.382953e-56, 9.446836e-50, 8.343454e-45, 3.298819e-37, 3.146201e-34, 1.194217e-31, 2.145127e-29, 2.081535e-27, 1.209405e-25, 4.563422e-24, 1.193299e-22, 2.279159e-21, 3.319224e-20, 3.819024e-19, 3.575732e-18, 2.79292e-17,
   1.072558e-15, 5.451452e-15, 2.47266e-14, 1.012385e-13, 2.712477e-12, 3.413946e-11, 3.773906e-10, 2.620443e-09, 1.634193e-08, 7.519214e-08, 3.171362e-07, 1.222963, 5.143105, 13.87923, 28.50385, 48.93083,
   74.23429, 103.09, 134.1158, 197.9348, 228.9351, 258.5157, 286.3069, 312.0869, 335.7467, 357.2606, 394.0244, 423.0502, 445.2844, 461.7267, 473.321, 480.9091,
   485.2179, 486.8625 };
   graph = new TGraph(51,Graph_fx231,Graph_fy231);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph231 = new TH1F("Graph_Graph231","",100,0,197.84);
   Graph_Graph231->SetMinimum(2.015564e-63);
   Graph_Graph231->SetMaximum(535.5488);
   Graph_Graph231->SetDirectory(nullptr);
   Graph_Graph231->SetStats(0);
   Graph_Graph231->SetLineWidth(2);
   Graph_Graph231->SetMarkerStyle(20);
   Graph_Graph231->SetMarkerSize(0.9);
   Graph_Graph231->GetXaxis()->SetLabelFont(42);
   Graph_Graph231->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph231->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph231->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph231->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph231->GetXaxis()->SetTitleFont(42);
   Graph_Graph231->GetYaxis()->SetLabelFont(42);
   Graph_Graph231->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph231->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph231->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph231->GetYaxis()->SetTickLength(0.02);
   Graph_Graph231->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph231->GetYaxis()->SetTitleFont(42);
   Graph_Graph231->GetZaxis()->SetLabelFont(42);
   Graph_Graph231->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph231->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph231->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph231->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph231->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph231);
   
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
   line = new TLine(72.89648,0,72.89648,195.7651);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(72.89148,0,"  72.90 TeV");

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
   pt_LaTex = pt->AddText("#varepsilon = 1.44e-07");
   pt_LaTex = pt->AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
