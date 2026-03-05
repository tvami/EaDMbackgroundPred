#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_ep_variable_ma_245_alpha_max_2023DNorm_rate_1.2e-08()
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
   
   Double_t Graph0_fx57[51] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180 };
   Double_t Graph0_fy57[51] = { 44.14062, 40.82031, 46.38672, 45.11719, 32.8125, 31.25, 33.10547, 34.17969, 31.93359, 30.66406, 28.90625, 27.73438, 27.83203, 28.125, 28.32031, 28.61328, 29.00391,
   28.32031, 27.63672, 27.73438, 27.34375, 27.63672, 27.44141, 28.125, 28.32031, 28.90625, 29.29688, 29.39453, 76.95312, 82.8125, 87.5, 95.3125, 99.21875,
   107.8125, 113.6719, 120.3125, 134.375, 142.9688, 152.3438, 162.5, 170.3125, 174.2188, 178.9062, 195.3125, 212.5, 225.7812, 243.75, 250, 267.1875,
   293.75, 303.125 };
   TGraph *graph = new TGraph(51,Graph0_fx57,Graph0_fy57);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph057 = new TH1F("Graph_Graph057","",100,0,197.84);
   Graph_Graph057->SetMinimum(0.2);
   Graph_Graph057->SetMaximum(100000);
   Graph_Graph057->SetDirectory(nullptr);
   Graph_Graph057->SetStats(0);
   Graph_Graph057->SetLineWidth(2);
   Graph_Graph057->SetMarkerStyle(20);
   Graph_Graph057->SetMarkerSize(0.9);
   Graph_Graph057->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph057->GetXaxis()->SetRange(1,91);
   Graph_Graph057->GetXaxis()->SetLabelFont(42);
   Graph_Graph057->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph057->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph057->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph057->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph057->GetXaxis()->SetTitleFont(42);
   Graph_Graph057->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph057->GetYaxis()->SetLabelFont(42);
   Graph_Graph057->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph057->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph057->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph057->GetYaxis()->SetTickLength(0.02);
   Graph_Graph057->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph057->GetYaxis()->SetTitleFont(42);
   Graph_Graph057->GetZaxis()->SetLabelFont(42);
   Graph_Graph057->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph057->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph057->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph057->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph057->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph057);
   
   graph->Draw("al");
   
   Double_t Graph1_fx58[104] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180, 180, 180, 180, 170, 160, 150, 140, 130, 120, 110, 100, 95, 90, 85,
   80, 75, 70, 60, 55, 50, 45, 40, 35, 30, 25, 9.5, 9, 8.5, 8, 7.5,
   7, 6.5, 6, 5.8, 5.6, 5.4, 5, 4.8, 4.6, 4.4, 4.2, 4, 3.8, 3.6, 3.4, 3.2,
   3, 2.8, 2.6, 2.2, 2, 1.8, 1.6 };
   Double_t Graph1_fy58[104] = { 98.78161, 91.63651, 100.5267, 98.86166, 81.84521, 78.30399, 80.23781, 82.03911, 78.07549, 78.37128, 76.4536, 74.75047, 75.3972, 75.2802, 75.10097, 75.87788, 76.88124,
   77.09587, 76.33052, 78.18984, 77.2295, 77.5522, 77.45149, 79.85383, 80.71749, 82.84974, 84.285, 84.88083, 234.0025, 251.82, 266.074, 289.8306, 301.7089,
   327.8411, 345.6586, 365.8517, 408.6136, 434.7459, 463.2538, 494.1374, 517.894, 529.7723, 544.0262, 593.9151, 646.1797, 686.5659, 741.2061, 760.2114, 812.4759,
   893.2484, 921.7563, 921.7563, 99.46289, 99.46289, 96.38672, 87.6709, 83.00781, 79.98047, 74.08447, 69.72656, 64.84985, 59.40247, 57.16553, 55.88379, 53.95508,
   49.98779, 46.91162, 45.1416, 39.94751, 37.74261, 35.79712, 33.3313, 32.01904, 29.39453, 28.4668, 26.45264, 11.71188, 11.67297, 11.51733, 11.28387, 11.31592,
   11.14807, 11.22742, 11.21521, 11.26667, 11.22742, 11.83701, 12.46262, 12.51787, 12.3897, 11.75537, 11.95908, 11.48376, 12.53357, 13.53531, 14.71939, 16.02173,
   15.25955, 14.03809, 14.73999, 22.38235, 23.19053, 20.09125, 21.72546 };
   graph = new TGraph(104,Graph1_fx58,Graph1_fy58);
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
   
   TH1F *Graph_Graph158 = new TH1F("Graph_Graph158","Graph",104,0,197.84);
   Graph_Graph158->SetMinimum(10.03326);
   Graph_Graph158->SetMaximum(1012.817);
   Graph_Graph158->SetDirectory(nullptr);
   Graph_Graph158->SetStats(0);
   Graph_Graph158->SetLineWidth(2);
   Graph_Graph158->SetMarkerStyle(20);
   Graph_Graph158->SetMarkerSize(0.9);
   Graph_Graph158->GetXaxis()->SetLabelFont(42);
   Graph_Graph158->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph158->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph158->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph158->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph158->GetXaxis()->SetTitleFont(42);
   Graph_Graph158->GetYaxis()->SetLabelFont(42);
   Graph_Graph158->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph158->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph158->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph158->GetYaxis()->SetTickLength(0.02);
   Graph_Graph158->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph158->GetYaxis()->SetTitleFont(42);
   Graph_Graph158->GetZaxis()->SetLabelFont(42);
   Graph_Graph158->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph158->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph158->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph158->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph158->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph158);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx59[104] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180, 180, 180, 180, 170, 160, 150, 140, 130, 120, 110, 100, 95, 90, 85,
   80, 75, 70, 60, 55, 50, 45, 40, 35, 30, 25, 9.5, 9, 8.5, 8, 7.5,
   7, 6.5, 6, 5.8, 5.6, 5.4, 5, 4.8, 4.6, 4.4, 4.2, 4, 3.8, 3.6, 3.4, 3.2,
   3, 2.8, 2.6, 2.2, 2, 1.8, 1.6 };
   Double_t Graph2_fy59[104] = { 67.01366, 62.05416, 69.12935, 67.59707, 52.69289, 50.43283, 52.23964, 53.66225, 50.70868, 49.97613, 48.03303, 46.58322, 46.80271, 46.95905, 46.9465, 47.43215, 47.96408,
   47.62382, 46.80476, 47.744, 47.07155, 47.13524, 46.91151, 48.30434, 48.75267, 49.87657, 50.66736, 50.95342, 145.3558, 156.7536, 166.6728, 181.9342, 190.1815,
   206.6539, 217.8851, 230.6138, 256.4974, 275.7507, 295.6544, 314.717, 329.1688, 336.7185, 342.9257, 375.9301, 410.706, 438.1751, 473.0471, 484.18, 516.4024,
   567.7406, 583.4435, 583.4435, 164.6984, 164.6984, 159.6046, 145.1723, 136.4975, 132.4379, 122.6748, 115.4587, 106.6387, 97.68102, 94.65914, 92.53674, 88.72337,
   82.77369, 77.67992, 73.72417, 65.68942, 62.06371, 58.86455, 54.43587, 52.29273, 48.46039, 45.8744, 43.02311, 17.79029, 17.73119, 17.49477, 17.14015, 17.09404,
   16.74891, 16.86811, 16.7594, 17.0561, 16.93221, 17.50314, 18.27791, 18.17642, 17.99031, 17.83004, 17.53941, 17.19687, 18.28959, 19.69095, 20.90575, 22.6891,
   21.67293, 20.35809, 21.37599, 30.7303, 31.8891, 27.7027, 29.95603 };
   graph = new TGraph(104,Graph2_fx59,Graph2_fy59);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph259 = new TH1F("Graph_Graph259","Graph",104,0,197.84);
   Graph_Graph259->SetMinimum(15.07401);
   Graph_Graph259->SetMaximum(640.1129);
   Graph_Graph259->SetDirectory(nullptr);
   Graph_Graph259->SetStats(0);
   Graph_Graph259->SetLineWidth(2);
   Graph_Graph259->SetMarkerStyle(20);
   Graph_Graph259->SetMarkerSize(0.9);
   Graph_Graph259->GetXaxis()->SetLabelFont(42);
   Graph_Graph259->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph259->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph259->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph259->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph259->GetXaxis()->SetTitleFont(42);
   Graph_Graph259->GetYaxis()->SetLabelFont(42);
   Graph_Graph259->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph259->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph259->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph259->GetYaxis()->SetTickLength(0.02);
   Graph_Graph259->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph259->GetYaxis()->SetTitleFont(42);
   Graph_Graph259->GetZaxis()->SetLabelFont(42);
   Graph_Graph259->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph259->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph259->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph259->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph259->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph259);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx60[51] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180 };
   Double_t Graph0_fy60[51] = { 44.14062, 40.82031, 46.38672, 45.11719, 32.8125, 31.25, 33.10547, 34.17969, 31.93359, 30.66406, 28.90625, 27.73438, 27.83203, 28.125, 28.32031, 28.61328, 29.00391,
   28.32031, 27.63672, 27.73438, 27.34375, 27.63672, 27.44141, 28.125, 28.32031, 28.90625, 29.29688, 29.39453, 76.95312, 82.8125, 87.5, 95.3125, 99.21875,
   107.8125, 113.6719, 120.3125, 134.375, 142.9688, 152.3438, 162.5, 170.3125, 174.2188, 178.9062, 195.3125, 212.5, 225.7812, 243.75, 250, 267.1875,
   293.75, 303.125 };
   graph = new TGraph(51,Graph0_fx60,Graph0_fy60);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph060 = new TH1F("Graph_Graph060","",100,0,197.84);
   Graph_Graph060->SetMinimum(0.2);
   Graph_Graph060->SetMaximum(100000);
   Graph_Graph060->SetDirectory(nullptr);
   Graph_Graph060->SetStats(0);
   Graph_Graph060->SetLineWidth(2);
   Graph_Graph060->SetMarkerStyle(20);
   Graph_Graph060->SetMarkerSize(0.9);
   Graph_Graph060->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph060->GetXaxis()->SetRange(1,91);
   Graph_Graph060->GetXaxis()->SetLabelFont(42);
   Graph_Graph060->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph060->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph060->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph060->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph060->GetXaxis()->SetTitleFont(42);
   Graph_Graph060->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph060->GetYaxis()->SetLabelFont(42);
   Graph_Graph060->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph060->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph060->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph060->GetYaxis()->SetTickLength(0.02);
   Graph_Graph060->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph060->GetYaxis()->SetTitleFont(42);
   Graph_Graph060->GetZaxis()->SetLabelFont(42);
   Graph_Graph060->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph060->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph060->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph060->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph060->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph060);
   
   graph->Draw("l");
   
   Double_t Graph_fx61[51] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180 };
   Double_t Graph_fy61[51] = { 20.65621, 19.80836, 18.86174, 17.8935, 16.03892, 15.18427, 14.38498, 13.64097, 12.95017, 12.30951, 11.71549, 11.16452, 10.65306, 10.1778, 9.735626, 9.32369, 8.939387,
   8.244444, 7.929722, 7.634435, 7.357, 6.734125, 6.191985, 5.721935, 5.307154, 4.942572, 4.617108, 4.327714, 1.264646, 0.9931215, 0.8083248, 0.6756268, 0.5764054,
   0.4998316, 0.4392154, 0.3902201, 0.3162813, 0.287841, 0.2635298, 0.2425463, 0.2242794, 0.2082561, 0.1941046, 0.1702923, 0.1510942, 0.1353376, 0.1222086, 0.1111263, 0.101666,
   0.09351029, 0.08641805 };
   graph = new TGraph(51,Graph_fx61,Graph_fy61);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph61 = new TH1F("Graph_Graph61","",100,0,197.84);
   Graph_Graph61->SetMinimum(0.07777624);
   Graph_Graph61->SetMaximum(22.71319);
   Graph_Graph61->SetDirectory(nullptr);
   Graph_Graph61->SetStats(0);
   Graph_Graph61->SetLineWidth(2);
   Graph_Graph61->SetMarkerStyle(20);
   Graph_Graph61->SetMarkerSize(0.9);
   Graph_Graph61->GetXaxis()->SetLabelFont(42);
   Graph_Graph61->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph61->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph61->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph61->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph61->GetXaxis()->SetTitleFont(42);
   Graph_Graph61->GetYaxis()->SetLabelFont(42);
   Graph_Graph61->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph61->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph61->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph61->GetYaxis()->SetTickLength(0.02);
   Graph_Graph61->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph61->GetYaxis()->SetTitleFont(42);
   Graph_Graph61->GetZaxis()->SetLabelFont(42);
   Graph_Graph61->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph61->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph61->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph61->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph61->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph61);
   
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
   
   Double_t Graph_fx63[51] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180 };
   Double_t Graph_fy63[51] = { 22.72183, 21.7892, 20.74791, 19.68285, 17.64281, 16.7027, 15.82348, 15.00506, 14.24518, 13.54046, 12.88704, 12.28097, 11.71837, 11.19558, 10.70919, 10.25606, 9.833326,
   9.068889, 8.722695, 8.397879, 8.0927, 7.407537, 6.811183, 6.294128, 5.837869, 5.436829, 5.078819, 4.760486, 1.391111, 1.092434, 0.8891573, 0.7431895, 0.6340459,
   0.5498147, 0.483137, 0.4292421, 0.3479095, 0.3166251, 0.2898828, 0.2668009, 0.2467073, 0.2290817, 0.2135151, 0.1873215, 0.1662037, 0.1488714, 0.1344295, 0.122239, 0.1118326,
   0.1028613, 0.09505985 };
   graph = new TGraph(51,Graph_fx63,Graph_fy63);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph63 = new TH1F("Graph_Graph63","",100,0,197.84);
   Graph_Graph63->SetMinimum(0.08555387);
   Graph_Graph63->SetMaximum(24.98451);
   Graph_Graph63->SetDirectory(nullptr);
   Graph_Graph63->SetStats(0);
   Graph_Graph63->SetLineWidth(2);
   Graph_Graph63->SetMarkerStyle(20);
   Graph_Graph63->SetMarkerSize(0.9);
   Graph_Graph63->GetXaxis()->SetLabelFont(42);
   Graph_Graph63->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph63->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph63->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph63->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph63->GetXaxis()->SetTitleFont(42);
   Graph_Graph63->GetYaxis()->SetLabelFont(42);
   Graph_Graph63->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph63->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph63->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph63->GetYaxis()->SetTickLength(0.02);
   Graph_Graph63->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph63->GetYaxis()->SetTitleFont(42);
   Graph_Graph63->GetZaxis()->SetLabelFont(42);
   Graph_Graph63->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph63->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph63->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph63->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph63->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph63);
   
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
   pt_LaTex = pt->AddText("#varepsilon = 1.2e-08");
   pt_LaTex = pt->AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
