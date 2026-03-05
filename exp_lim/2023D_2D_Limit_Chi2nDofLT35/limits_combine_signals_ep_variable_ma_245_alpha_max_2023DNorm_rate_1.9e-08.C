#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_ep_variable_ma_245_alpha_max_2023DNorm_rate_1.9e-08()
{
//=========Macro generated from canvas: climits/climits
//=========  (Tue Feb 17 10:14:00 2026) by ROOT version 6.30/07
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
   
   Double_t Graph0_fx106[51] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180 };
   Double_t Graph0_fy106[51] = { 44.14062, 40.82031, 46.38672, 45.11719, 32.8125, 31.25, 33.10547, 34.17969, 31.93359, 30.66406, 28.90625, 27.73438, 27.83203, 28.125, 28.32031, 28.61328, 29.00391,
   28.32031, 27.63672, 27.73438, 27.34375, 27.63672, 27.44141, 28.125, 28.32031, 28.90625, 29.29688, 29.39453, 76.95312, 82.8125, 87.5, 95.3125, 99.21875,
   107.8125, 113.6719, 120.3125, 134.375, 142.9688, 152.3438, 162.5, 170.3125, 174.2188, 178.9062, 195.3125, 212.5, 225.7812, 243.75, 250, 267.1875,
   293.75, 303.125 };
   TGraph *graph = new TGraph(51,Graph0_fx106,Graph0_fy106);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0106 = new TH1F("Graph_Graph0106","",100,0,197.84);
   Graph_Graph0106->SetMinimum(0.2);
   Graph_Graph0106->SetMaximum(100000);
   Graph_Graph0106->SetDirectory(nullptr);
   Graph_Graph0106->SetStats(0);
   Graph_Graph0106->SetLineWidth(2);
   Graph_Graph0106->SetMarkerStyle(20);
   Graph_Graph0106->SetMarkerSize(0.9);
   Graph_Graph0106->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0106->GetXaxis()->SetRange(1,91);
   Graph_Graph0106->GetXaxis()->SetLabelFont(42);
   Graph_Graph0106->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0106->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0106->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0106->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0106->GetXaxis()->SetTitleFont(42);
   Graph_Graph0106->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0106->GetYaxis()->SetLabelFont(42);
   Graph_Graph0106->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0106->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0106->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0106->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0106->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0106->GetYaxis()->SetTitleFont(42);
   Graph_Graph0106->GetZaxis()->SetLabelFont(42);
   Graph_Graph0106->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0106->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0106->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0106->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0106->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0106);
   
   graph->Draw("al");
   
   Double_t Graph1_fx107[104] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180, 180, 180, 180, 170, 160, 150, 140, 130, 120, 110, 100, 95, 90, 85,
   80, 75, 70, 60, 55, 50, 45, 40, 35, 30, 25, 9.5, 9, 8.5, 8, 7.5,
   7, 6.5, 6, 5.8, 5.6, 5.4, 5, 4.8, 4.6, 4.4, 4.2, 4, 3.8, 3.6, 3.4, 3.2,
   3, 2.8, 2.6, 2.2, 2, 1.8, 1.6 };
   Double_t Graph1_fy107[104] = { 98.78161, 91.63651, 100.5267, 98.86166, 81.84521, 78.30399, 80.23781, 82.03911, 78.07549, 78.37128, 76.4536, 74.75047, 75.3972, 75.2802, 75.10097, 75.87788, 76.88124,
   77.09587, 76.33052, 78.18984, 77.2295, 77.5522, 77.45149, 79.85383, 80.71749, 82.84974, 84.285, 84.88083, 234.0025, 251.82, 266.074, 289.8306, 301.7089,
   327.8411, 345.6586, 365.8517, 408.6136, 434.7459, 463.2538, 494.1374, 517.894, 529.7723, 544.0262, 593.9151, 646.1797, 686.5659, 741.2061, 760.2114, 812.4759,
   893.2484, 921.7563, 921.7563, 99.46289, 99.46289, 96.38672, 87.6709, 83.00781, 79.98047, 74.08447, 69.72656, 64.84985, 59.40247, 57.16553, 55.88379, 53.95508,
   49.98779, 46.91162, 45.1416, 39.94751, 37.74261, 35.79712, 33.3313, 32.01904, 29.39453, 28.4668, 26.45264, 11.71188, 11.67297, 11.51733, 11.28387, 11.31592,
   11.14807, 11.22742, 11.21521, 11.26667, 11.22742, 11.83701, 12.46262, 12.51787, 12.3897, 11.75537, 11.95908, 11.48376, 12.53357, 13.53531, 14.71939, 16.02173,
   15.25955, 14.03809, 14.73999, 22.38235, 23.19053, 20.09125, 21.72546 };
   graph = new TGraph(104,Graph1_fx107,Graph1_fy107);
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
   
   TH1F *Graph_Graph1107 = new TH1F("Graph_Graph1107","Graph",104,0,197.84);
   Graph_Graph1107->SetMinimum(10.03326);
   Graph_Graph1107->SetMaximum(1012.817);
   Graph_Graph1107->SetDirectory(nullptr);
   Graph_Graph1107->SetStats(0);
   Graph_Graph1107->SetLineWidth(2);
   Graph_Graph1107->SetMarkerStyle(20);
   Graph_Graph1107->SetMarkerSize(0.9);
   Graph_Graph1107->GetXaxis()->SetLabelFont(42);
   Graph_Graph1107->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1107->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1107->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1107->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1107->GetXaxis()->SetTitleFont(42);
   Graph_Graph1107->GetYaxis()->SetLabelFont(42);
   Graph_Graph1107->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1107->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1107->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1107->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1107->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1107->GetYaxis()->SetTitleFont(42);
   Graph_Graph1107->GetZaxis()->SetLabelFont(42);
   Graph_Graph1107->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1107->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1107->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1107->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1107->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1107);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx108[104] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180, 180, 180, 180, 170, 160, 150, 140, 130, 120, 110, 100, 95, 90, 85,
   80, 75, 70, 60, 55, 50, 45, 40, 35, 30, 25, 9.5, 9, 8.5, 8, 7.5,
   7, 6.5, 6, 5.8, 5.6, 5.4, 5, 4.8, 4.6, 4.4, 4.2, 4, 3.8, 3.6, 3.4, 3.2,
   3, 2.8, 2.6, 2.2, 2, 1.8, 1.6 };
   Double_t Graph2_fy108[104] = { 67.01366, 62.05416, 69.12935, 67.59707, 52.69289, 50.43283, 52.23964, 53.66225, 50.70868, 49.97613, 48.03303, 46.58322, 46.80271, 46.95905, 46.9465, 47.43215, 47.96408,
   47.62382, 46.80476, 47.744, 47.07155, 47.13524, 46.91151, 48.30434, 48.75267, 49.87657, 50.66736, 50.95342, 145.3558, 156.7536, 166.6728, 181.9342, 190.1815,
   206.6539, 217.8851, 230.6138, 256.4974, 275.7507, 295.6544, 314.717, 329.1688, 336.7185, 342.9257, 375.9301, 410.706, 438.1751, 473.0471, 484.18, 516.4024,
   567.7406, 583.4435, 583.4435, 164.6984, 164.6984, 159.6046, 145.1723, 136.4975, 132.4379, 122.6748, 115.4587, 106.6387, 97.68102, 94.65914, 92.53674, 88.72337,
   82.77369, 77.67992, 73.72417, 65.68942, 62.06371, 58.86455, 54.43587, 52.29273, 48.46039, 45.8744, 43.02311, 17.79029, 17.73119, 17.49477, 17.14015, 17.09404,
   16.74891, 16.86811, 16.7594, 17.0561, 16.93221, 17.50314, 18.27791, 18.17642, 17.99031, 17.83004, 17.53941, 17.19687, 18.28959, 19.69095, 20.90575, 22.6891,
   21.67293, 20.35809, 21.37599, 30.7303, 31.8891, 27.7027, 29.95603 };
   graph = new TGraph(104,Graph2_fx108,Graph2_fy108);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2108 = new TH1F("Graph_Graph2108","Graph",104,0,197.84);
   Graph_Graph2108->SetMinimum(15.07401);
   Graph_Graph2108->SetMaximum(640.1129);
   Graph_Graph2108->SetDirectory(nullptr);
   Graph_Graph2108->SetStats(0);
   Graph_Graph2108->SetLineWidth(2);
   Graph_Graph2108->SetMarkerStyle(20);
   Graph_Graph2108->SetMarkerSize(0.9);
   Graph_Graph2108->GetXaxis()->SetLabelFont(42);
   Graph_Graph2108->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2108->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2108->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2108->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2108->GetXaxis()->SetTitleFont(42);
   Graph_Graph2108->GetYaxis()->SetLabelFont(42);
   Graph_Graph2108->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2108->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2108->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2108->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2108->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2108->GetYaxis()->SetTitleFont(42);
   Graph_Graph2108->GetZaxis()->SetLabelFont(42);
   Graph_Graph2108->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2108->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2108->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2108->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2108->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2108);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx109[51] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180 };
   Double_t Graph0_fy109[51] = { 44.14062, 40.82031, 46.38672, 45.11719, 32.8125, 31.25, 33.10547, 34.17969, 31.93359, 30.66406, 28.90625, 27.73438, 27.83203, 28.125, 28.32031, 28.61328, 29.00391,
   28.32031, 27.63672, 27.73438, 27.34375, 27.63672, 27.44141, 28.125, 28.32031, 28.90625, 29.29688, 29.39453, 76.95312, 82.8125, 87.5, 95.3125, 99.21875,
   107.8125, 113.6719, 120.3125, 134.375, 142.9688, 152.3438, 162.5, 170.3125, 174.2188, 178.9062, 195.3125, 212.5, 225.7812, 243.75, 250, 267.1875,
   293.75, 303.125 };
   graph = new TGraph(51,Graph0_fx109,Graph0_fy109);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0109 = new TH1F("Graph_Graph0109","",100,0,197.84);
   Graph_Graph0109->SetMinimum(0.2);
   Graph_Graph0109->SetMaximum(100000);
   Graph_Graph0109->SetDirectory(nullptr);
   Graph_Graph0109->SetStats(0);
   Graph_Graph0109->SetLineWidth(2);
   Graph_Graph0109->SetMarkerStyle(20);
   Graph_Graph0109->SetMarkerSize(0.9);
   Graph_Graph0109->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0109->GetXaxis()->SetRange(1,91);
   Graph_Graph0109->GetXaxis()->SetLabelFont(42);
   Graph_Graph0109->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0109->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0109->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0109->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0109->GetXaxis()->SetTitleFont(42);
   Graph_Graph0109->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0109->GetYaxis()->SetLabelFont(42);
   Graph_Graph0109->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0109->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0109->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0109->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0109->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0109->GetYaxis()->SetTitleFont(42);
   Graph_Graph0109->GetZaxis()->SetLabelFont(42);
   Graph_Graph0109->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0109->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0109->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0109->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0109->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0109);
   
   graph->Draw("l");
   
   Double_t Graph_fx110[51] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180 };
   Double_t Graph_fy110[51] = { 24.737, 28.51965, 31.46855, 33.67855, 36.34059, 37.00486, 37.34242, 37.42296, 37.30307, 37.02826, 36.6349, 36.15198, 35.60253, 35.00481, 34.37328, 33.71938, 33.05213,
   31.7044, 31.03381, 30.37019, 29.71611, 28.13592, 26.64094, 25.24526, 23.94156, 22.73402, 21.6103, 20.57114, 7.147907, 5.713368, 4.709354, 3.973714, 3.415212,
   2.979019, 2.6304, 2.346385, 1.913842, 1.746153, 1.602209, 1.477513, 1.368608, 1.272802, 1.18797, 1.044748, 0.9288325, 0.8333867, 0.7536381, 0.6861618, 0.6284418,
   0.578592, 0.5351727 };
   graph = new TGraph(51,Graph_fx110,Graph_fy110);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph110 = new TH1F("Graph_Graph110","",100,0,197.84);
   Graph_Graph110->SetMinimum(0.4816554);
   Graph_Graph110->SetMaximum(41.11174);
   Graph_Graph110->SetDirectory(nullptr);
   Graph_Graph110->SetStats(0);
   Graph_Graph110->SetLineWidth(2);
   Graph_Graph110->SetMarkerStyle(20);
   Graph_Graph110->SetMarkerSize(0.9);
   Graph_Graph110->GetXaxis()->SetLabelFont(42);
   Graph_Graph110->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph110->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph110->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph110->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph110->GetXaxis()->SetTitleFont(42);
   Graph_Graph110->GetYaxis()->SetLabelFont(42);
   Graph_Graph110->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph110->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph110->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph110->GetYaxis()->SetTickLength(0.02);
   Graph_Graph110->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph110->GetYaxis()->SetTitleFont(42);
   Graph_Graph110->GetZaxis()->SetLabelFont(42);
   Graph_Graph110->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph110->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph110->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph110->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph110->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph110);
   
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
   
   Double_t Graph_fx112[51] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180 };
   Double_t Graph_fy112[51] = { 27.2107, 31.37161, 34.61541, 37.0464, 39.97465, 40.70535, 41.07666, 41.16525, 41.03338, 40.73108, 40.29839, 39.76718, 39.16278, 38.50529, 37.81061, 37.09132, 36.35734,
   34.87484, 34.13719, 33.40721, 32.68773, 30.94952, 29.30503, 27.76978, 26.33572, 25.00743, 23.77132, 22.62825, 7.862698, 6.284704, 5.18029, 4.371085, 3.756733,
   3.276921, 2.89344, 2.581023, 2.105226, 1.920768, 1.76243, 1.625264, 1.505468, 1.400082, 1.306767, 1.149223, 1.021716, 0.9167254, 0.8290019, 0.7547779, 0.691286,
   0.6364512, 0.5886899 };
   graph = new TGraph(51,Graph_fx112,Graph_fy112);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph112 = new TH1F("Graph_Graph112","",100,0,197.84);
   Graph_Graph112->SetMinimum(0.529821);
   Graph_Graph112->SetMaximum(45.22291);
   Graph_Graph112->SetDirectory(nullptr);
   Graph_Graph112->SetStats(0);
   Graph_Graph112->SetLineWidth(2);
   Graph_Graph112->SetMarkerStyle(20);
   Graph_Graph112->SetMarkerSize(0.9);
   Graph_Graph112->GetXaxis()->SetLabelFont(42);
   Graph_Graph112->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph112->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph112->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph112->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph112->GetXaxis()->SetTitleFont(42);
   Graph_Graph112->GetYaxis()->SetLabelFont(42);
   Graph_Graph112->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph112->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph112->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph112->GetYaxis()->SetTickLength(0.02);
   Graph_Graph112->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph112->GetYaxis()->SetTitleFont(42);
   Graph_Graph112->GetZaxis()->SetLabelFont(42);
   Graph_Graph112->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph112->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph112->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph112->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph112->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph112);
   
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
   line = new TLine(2.496458,0,2.496458,35.63196);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(2.491458,0,"  2.50 TeV");

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
   pt_LaTex = pt->AddText("#varepsilon = 1.9e-08");
   pt_LaTex = pt->AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
