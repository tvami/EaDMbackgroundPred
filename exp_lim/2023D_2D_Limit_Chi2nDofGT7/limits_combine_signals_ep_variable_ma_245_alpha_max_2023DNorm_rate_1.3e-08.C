#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_ep_variable_ma_245_alpha_max_2023DNorm_rate_1.3e-08()
{
//=========Macro generated from canvas: climits/climits
//=========  (Mon Feb  9 23:41:14 2026) by ROOT version 6.30/07
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
   
   Double_t Graph0_fx64[51] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180 };
   Double_t Graph0_fy64[51] = { 45.60547, 42.38281, 47.07031, 47.65625, 37.98828, 36.71875, 38.96484, 41.21094, 39.45312, 38.47656, 36.71875, 35.74219, 36.23047, 36.81641, 37.59766, 38.57422, 39.16016,
   37.98828, 37.10938, 37.69531, 37.10938, 37.89062, 38.37891, 39.25781, 39.45312, 40.82031, 41.40625, 41.99219, 113.6719, 121.875, 128.125, 139.0625, 143.75,
   157.0312, 161.7188, 172.2656, 189.0625, 200.7812, 214.0625, 228.9062, 237.5, 246.0938, 251.5625, 270.3125, 292.9688, 315.625, 329.6875, 348.4375, 373.4375,
   395.3125, 400 };
   TGraph *graph = new TGraph(51,Graph0_fx64,Graph0_fy64);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph064 = new TH1F("Graph_Graph064","",100,0,197.84);
   Graph_Graph064->SetMinimum(0.2);
   Graph_Graph064->SetMaximum(100000);
   Graph_Graph064->SetDirectory(nullptr);
   Graph_Graph064->SetStats(0);
   Graph_Graph064->SetLineWidth(2);
   Graph_Graph064->SetMarkerStyle(20);
   Graph_Graph064->SetMarkerSize(0.9);
   Graph_Graph064->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph064->GetXaxis()->SetRange(1,91);
   Graph_Graph064->GetXaxis()->SetLabelFont(42);
   Graph_Graph064->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph064->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph064->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph064->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph064->GetXaxis()->SetTitleFont(42);
   Graph_Graph064->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph064->GetYaxis()->SetLabelFont(42);
   Graph_Graph064->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph064->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph064->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph064->GetYaxis()->SetTickLength(0.02);
   Graph_Graph064->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph064->GetYaxis()->SetTitleFont(42);
   Graph_Graph064->GetZaxis()->SetLabelFont(42);
   Graph_Graph064->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph064->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph064->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph064->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph064->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph064);
   
   graph->Draw("al");
   
   Double_t Graph1_fx65[104] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180, 180, 180, 180, 170, 160, 150, 140, 130, 120, 110, 100, 95, 90, 85,
   80, 75, 70, 60, 55, 50, 45, 40, 35, 30, 25, 9.5, 9, 8.5, 8, 7.5,
   7, 6.5, 6, 5.8, 5.6, 5.4, 5, 4.8, 4.6, 4.4, 4.2, 4, 3.8, 3.6, 3.4, 3.2,
   3, 2.8, 2.6, 2.2, 2, 1.8, 1.6 };
   Double_t Graph1_fy65[104] = { 102.1954, 95.09992, 103.5276, 104.4253, 89.88257, 87.1575, 90.84357, 94.04445, 91.02211, 91.14931, 88.61798, 87.35803, 88.75735, 89.1701, 90.17774, 91.97331, 93.63119,
   92.84774, 91.63073, 94.17921, 92.45036, 93.66703, 94.95281, 97.66216, 98.68187, 101.8948, 103.0923, 104.82, 322.2594, 345.5892, 365.4065, 399.5878, 416.923,
   459.6504, 473.7894, 497.7765, 544.2489, 596.1031, 632.7843, 677.3656, 702.7366, 719.8841, 735.6171, 791.9377, 865.2794, 942.0382, 980.6094, 1027.321, 1108.787,
   1159.109, 1160.344, 1160.344, 171.875, 171.875, 169.8608, 160.4614, 149.7192, 140.3748, 134.3872, 125.885, 116.1499, 107.1106, 105.7434, 102.0508, 98.35815,
   90.30762, 85.48889, 81.23779, 74.02039, 69.48853, 66.86096, 61.20605, 59.75342, 55.05371, 53.32031, 49.73145, 19.84787, 19.40918, 18.97507, 18.18542, 18.24875,
   17.99011, 17.76123, 16.96014, 17.22794, 17.1051, 17.80701, 18.81523, 18.68439, 18.0645, 17.4015, 16.84151, 16.75415, 17.21191, 18.33649, 19.41833, 20.44449,
   18.8736, 17.35535, 17.9554, 23.82812, 23.35129, 20.69473, 22.2683 };
   graph = new TGraph(104,Graph1_fx65,Graph1_fy65);
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
   
   TH1F *Graph_Graph165 = new TH1F("Graph_Graph165","Graph",104,0,197.84);
   Graph_Graph165->SetMinimum(15.07874);
   Graph_Graph165->SetMaximum(1274.703);
   Graph_Graph165->SetDirectory(nullptr);
   Graph_Graph165->SetStats(0);
   Graph_Graph165->SetLineWidth(2);
   Graph_Graph165->SetMarkerStyle(20);
   Graph_Graph165->SetMarkerSize(0.9);
   Graph_Graph165->GetXaxis()->SetLabelFont(42);
   Graph_Graph165->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph165->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph165->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph165->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph165->GetXaxis()->SetTitleFont(42);
   Graph_Graph165->GetYaxis()->SetLabelFont(42);
   Graph_Graph165->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph165->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph165->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph165->GetYaxis()->SetTickLength(0.02);
   Graph_Graph165->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph165->GetYaxis()->SetTitleFont(42);
   Graph_Graph165->GetZaxis()->SetLabelFont(42);
   Graph_Graph165->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph165->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph165->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph165->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph165->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph165);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx66[104] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180, 180, 180, 180, 170, 160, 150, 140, 130, 120, 110, 100, 95, 90, 85,
   80, 75, 70, 60, 55, 50, 45, 40, 35, 30, 25, 9.5, 9, 8.5, 8, 7.5,
   7, 6.5, 6, 5.8, 5.6, 5.4, 5, 4.8, 4.6, 4.4, 4.2, 4, 3.8, 3.6, 3.4, 3.2,
   3, 2.8, 2.6, 2.2, 2, 1.8, 1.6 };
   Double_t Graph2_fy66[104] = { 69.23757, 64.34497, 70.71097, 71.40123, 59.18749, 57.35586, 60.24307, 62.89439, 60.68348, 59.94825, 57.79495, 56.68526, 57.45965, 57.94866, 58.87861, 60.17728, 61.16942,
   60.24745, 59.07543, 60.38384, 59.29731, 60.31913, 61.01994, 62.65207, 63.19966, 65.14568, 65.99827, 67.01589, 192.0583, 206.404, 217.4996, 236.6209, 245.5996,
   269.6992, 277.75, 293.8041, 321.6981, 346.44, 369.3562, 396.7934, 410.7434, 424.6249, 431.0528, 464.2584, 505.4328, 547.112, 570.8337, 601.2149, 645.8399,
   678.1565, 685.4007, 685.4007, 248.5107, 248.5107, 245.5985, 232.0081, 216.4762, 203.972, 196.6877, 182.0147, 169.1433, 156.7659, 153.9888, 147.5533, 142.2142,
   132.8484, 124.6703, 118.3025, 107.7922, 100.4721, 97.857, 89.58054, 87.01591, 80.17197, 76.88599, 71.71097, 27.63298, 27.14252, 26.65504, 25.8285, 25.79888,
   25.15805, 24.83797, 24.04386, 24.4235, 24.13785, 25.05965, 26.12669, 25.8323, 25.08423, 24.37873, 23.80942, 23.57798, 24.22218, 25.73167, 26.77486, 27.90743,
   26.09389, 24.31407, 25.15472, 32.76367, 32.24592, 28.65832, 30.83741 };
   graph = new TGraph(104,Graph2_fx66,Graph2_fy66);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph266 = new TH1F("Graph_Graph266","Graph",104,0,197.84);
   Graph_Graph266->SetMinimum(21.22018);
   Graph_Graph266->SetMaximum(751.5829);
   Graph_Graph266->SetDirectory(nullptr);
   Graph_Graph266->SetStats(0);
   Graph_Graph266->SetLineWidth(2);
   Graph_Graph266->SetMarkerStyle(20);
   Graph_Graph266->SetMarkerSize(0.9);
   Graph_Graph266->GetXaxis()->SetLabelFont(42);
   Graph_Graph266->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph266->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph266->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph266->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph266->GetXaxis()->SetTitleFont(42);
   Graph_Graph266->GetYaxis()->SetLabelFont(42);
   Graph_Graph266->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph266->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph266->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph266->GetYaxis()->SetTickLength(0.02);
   Graph_Graph266->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph266->GetYaxis()->SetTitleFont(42);
   Graph_Graph266->GetZaxis()->SetLabelFont(42);
   Graph_Graph266->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph266->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph266->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph266->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph266->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph266);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx67[51] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180 };
   Double_t Graph0_fy67[51] = { 45.60547, 42.38281, 47.07031, 47.65625, 37.98828, 36.71875, 38.96484, 41.21094, 39.45312, 38.47656, 36.71875, 35.74219, 36.23047, 36.81641, 37.59766, 38.57422, 39.16016,
   37.98828, 37.10938, 37.69531, 37.10938, 37.89062, 38.37891, 39.25781, 39.45312, 40.82031, 41.40625, 41.99219, 113.6719, 121.875, 128.125, 139.0625, 143.75,
   157.0312, 161.7188, 172.2656, 189.0625, 200.7812, 214.0625, 228.9062, 237.5, 246.0938, 251.5625, 270.3125, 292.9688, 315.625, 329.6875, 348.4375, 373.4375,
   395.3125, 400 };
   graph = new TGraph(51,Graph0_fx67,Graph0_fy67);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph067 = new TH1F("Graph_Graph067","",100,0,197.84);
   Graph_Graph067->SetMinimum(0.2);
   Graph_Graph067->SetMaximum(100000);
   Graph_Graph067->SetDirectory(nullptr);
   Graph_Graph067->SetStats(0);
   Graph_Graph067->SetLineWidth(2);
   Graph_Graph067->SetMarkerStyle(20);
   Graph_Graph067->SetMarkerSize(0.9);
   Graph_Graph067->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph067->GetXaxis()->SetRange(1,91);
   Graph_Graph067->GetXaxis()->SetLabelFont(42);
   Graph_Graph067->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph067->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph067->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph067->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph067->GetXaxis()->SetTitleFont(42);
   Graph_Graph067->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph067->GetYaxis()->SetLabelFont(42);
   Graph_Graph067->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph067->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph067->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph067->GetYaxis()->SetTickLength(0.02);
   Graph_Graph067->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph067->GetYaxis()->SetTitleFont(42);
   Graph_Graph067->GetZaxis()->SetLabelFont(42);
   Graph_Graph067->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph067->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph067->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph067->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph067->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph067);
   
   graph->Draw("l");
   
   Double_t Graph_fx68[51] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180 };
   Double_t Graph_fy68[51] = { 23.50447, 23.02316, 22.29828, 21.44951, 19.64167, 18.75181, 17.89446, 17.07731, 16.30381, 15.57482, 14.88961, 14.24652, 13.64343, 13.07794, 12.5476, 12.04999, 11.58278,
   10.73081, 10.34205, 9.975691, 9.630072, 8.849146, 8.164294, 7.566394, 7.035912, 6.567241, 6.147125, 5.772093, 1.720714, 1.354026, 1.103678, 0.9235009, 0.7885462,
   0.6842546, 0.6016071, 0.5347442, 0.4337365, 0.3948494, 0.3615923, 0.3328753, 0.307867, 0.285923, 0.2665367, 0.2339035, 0.2075823, 0.1859714, 0.1679586, 0.1527498, 0.1397638,
   0.1285663, 0.1188271 };
   graph = new TGraph(51,Graph_fx68,Graph_fy68);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph68 = new TH1F("Graph_Graph68","",100,0,197.84);
   Graph_Graph68->SetMinimum(0.1069444);
   Graph_Graph68->SetMaximum(25.84304);
   Graph_Graph68->SetDirectory(nullptr);
   Graph_Graph68->SetStats(0);
   Graph_Graph68->SetLineWidth(2);
   Graph_Graph68->SetMarkerStyle(20);
   Graph_Graph68->SetMarkerSize(0.9);
   Graph_Graph68->GetXaxis()->SetLabelFont(42);
   Graph_Graph68->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph68->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph68->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph68->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph68->GetXaxis()->SetTitleFont(42);
   Graph_Graph68->GetYaxis()->SetLabelFont(42);
   Graph_Graph68->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph68->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph68->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph68->GetYaxis()->SetTickLength(0.02);
   Graph_Graph68->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph68->GetYaxis()->SetTitleFont(42);
   Graph_Graph68->GetZaxis()->SetLabelFont(42);
   Graph_Graph68->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph68->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph68->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph68->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph68->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph68);
   
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
   
   Double_t Graph_fx70[51] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180 };
   Double_t Graph_fy70[51] = { 25.85492, 25.32548, 24.52811, 23.59447, 21.60583, 20.62699, 19.6839, 18.78504, 17.9342, 17.13231, 16.37857, 15.67118, 15.00777, 14.38573, 13.80236, 13.25499, 12.74105,
   11.80389, 11.37626, 10.97326, 10.59308, 9.734061, 8.980724, 8.323033, 7.739503, 7.223965, 6.761838, 6.349302, 1.892786, 1.489428, 1.214046, 1.015851, 0.8674009,
   0.7526801, 0.6617679, 0.5882187, 0.4771102, 0.4343344, 0.3977515, 0.3661629, 0.3386537, 0.3145153, 0.2931904, 0.2572939, 0.2283405, 0.2045685, 0.1847545, 0.1680248, 0.1537401,
   0.1414229, 0.1307098 };
   graph = new TGraph(51,Graph_fx70,Graph_fy70);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph70 = new TH1F("Graph_Graph70","",100,0,197.84);
   Graph_Graph70->SetMinimum(0.1176388);
   Graph_Graph70->SetMaximum(28.42734);
   Graph_Graph70->SetDirectory(nullptr);
   Graph_Graph70->SetStats(0);
   Graph_Graph70->SetLineWidth(2);
   Graph_Graph70->SetMarkerStyle(20);
   Graph_Graph70->SetMarkerSize(0.9);
   Graph_Graph70->GetXaxis()->SetLabelFont(42);
   Graph_Graph70->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph70->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph70->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph70->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph70->GetXaxis()->SetTitleFont(42);
   Graph_Graph70->GetYaxis()->SetLabelFont(42);
   Graph_Graph70->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph70->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph70->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph70->GetYaxis()->SetTickLength(0.02);
   Graph_Graph70->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph70->GetYaxis()->SetTitleFont(42);
   Graph_Graph70->GetZaxis()->SetLabelFont(42);
   Graph_Graph70->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph70->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph70->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph70->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph70->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph70);
   
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
   line = new TLine(-1,0,-1,-1);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(-1.005,0,"  -1.00 TeV");

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
   pt_LaTex = pt->AddText("#varepsilon = 1.3e-08");
   pt_LaTex = pt->AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
