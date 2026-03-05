#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_ep_variable_ma_245_alpha_max_2023DNorm_rate_2.24e-07()
{
//=========Macro generated from canvas: climits/climits
//=========  (Tue Feb 17 10:14:02 2026) by ROOT version 6.30/07
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
   
   Double_t Graph0_fx281[51] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180 };
   Double_t Graph0_fy281[51] = { 44.14062, 40.82031, 46.38672, 45.11719, 32.8125, 31.25, 33.10547, 34.17969, 31.93359, 30.66406, 28.90625, 27.73438, 27.83203, 28.125, 28.32031, 28.61328, 29.00391,
   28.32031, 27.63672, 27.73438, 27.34375, 27.63672, 27.44141, 28.125, 28.32031, 28.90625, 29.29688, 29.39453, 76.95312, 82.8125, 87.5, 95.3125, 99.21875,
   107.8125, 113.6719, 120.3125, 134.375, 142.9688, 152.3438, 162.5, 170.3125, 174.2188, 178.9062, 195.3125, 212.5, 225.7812, 243.75, 250, 267.1875,
   293.75, 303.125 };
   TGraph *graph = new TGraph(51,Graph0_fx281,Graph0_fy281);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0281 = new TH1F("Graph_Graph0281","",100,0,197.84);
   Graph_Graph0281->SetMinimum(0.2);
   Graph_Graph0281->SetMaximum(100000);
   Graph_Graph0281->SetDirectory(nullptr);
   Graph_Graph0281->SetStats(0);
   Graph_Graph0281->SetLineWidth(2);
   Graph_Graph0281->SetMarkerStyle(20);
   Graph_Graph0281->SetMarkerSize(0.9);
   Graph_Graph0281->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0281->GetXaxis()->SetRange(1,91);
   Graph_Graph0281->GetXaxis()->SetLabelFont(42);
   Graph_Graph0281->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0281->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0281->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0281->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0281->GetXaxis()->SetTitleFont(42);
   Graph_Graph0281->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0281->GetYaxis()->SetLabelFont(42);
   Graph_Graph0281->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0281->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0281->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0281->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0281->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0281->GetYaxis()->SetTitleFont(42);
   Graph_Graph0281->GetZaxis()->SetLabelFont(42);
   Graph_Graph0281->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0281->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0281->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0281->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0281->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0281);
   
   graph->Draw("al");
   
   Double_t Graph1_fx282[104] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180, 180, 180, 180, 170, 160, 150, 140, 130, 120, 110, 100, 95, 90, 85,
   80, 75, 70, 60, 55, 50, 45, 40, 35, 30, 25, 9.5, 9, 8.5, 8, 7.5,
   7, 6.5, 6, 5.8, 5.6, 5.4, 5, 4.8, 4.6, 4.4, 4.2, 4, 3.8, 3.6, 3.4, 3.2,
   3, 2.8, 2.6, 2.2, 2, 1.8, 1.6 };
   Double_t Graph1_fy282[104] = { 98.78161, 91.63651, 100.5267, 98.86166, 81.84521, 78.30399, 80.23781, 82.03911, 78.07549, 78.37128, 76.4536, 74.75047, 75.3972, 75.2802, 75.10097, 75.87788, 76.88124,
   77.09587, 76.33052, 78.18984, 77.2295, 77.5522, 77.45149, 79.85383, 80.71749, 82.84974, 84.285, 84.88083, 234.0025, 251.82, 266.074, 289.8306, 301.7089,
   327.8411, 345.6586, 365.8517, 408.6136, 434.7459, 463.2538, 494.1374, 517.894, 529.7723, 544.0262, 593.9151, 646.1797, 686.5659, 741.2061, 760.2114, 812.4759,
   893.2484, 921.7563, 921.7563, 99.46289, 99.46289, 96.38672, 87.6709, 83.00781, 79.98047, 74.08447, 69.72656, 64.84985, 59.40247, 57.16553, 55.88379, 53.95508,
   49.98779, 46.91162, 45.1416, 39.94751, 37.74261, 35.79712, 33.3313, 32.01904, 29.39453, 28.4668, 26.45264, 11.71188, 11.67297, 11.51733, 11.28387, 11.31592,
   11.14807, 11.22742, 11.21521, 11.26667, 11.22742, 11.83701, 12.46262, 12.51787, 12.3897, 11.75537, 11.95908, 11.48376, 12.53357, 13.53531, 14.71939, 16.02173,
   15.25955, 14.03809, 14.73999, 22.38235, 23.19053, 20.09125, 21.72546 };
   graph = new TGraph(104,Graph1_fx282,Graph1_fy282);
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
   
   TH1F *Graph_Graph1282 = new TH1F("Graph_Graph1282","Graph",104,0,197.84);
   Graph_Graph1282->SetMinimum(10.03326);
   Graph_Graph1282->SetMaximum(1012.817);
   Graph_Graph1282->SetDirectory(nullptr);
   Graph_Graph1282->SetStats(0);
   Graph_Graph1282->SetLineWidth(2);
   Graph_Graph1282->SetMarkerStyle(20);
   Graph_Graph1282->SetMarkerSize(0.9);
   Graph_Graph1282->GetXaxis()->SetLabelFont(42);
   Graph_Graph1282->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1282->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1282->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1282->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1282->GetXaxis()->SetTitleFont(42);
   Graph_Graph1282->GetYaxis()->SetLabelFont(42);
   Graph_Graph1282->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1282->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1282->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1282->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1282->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1282->GetYaxis()->SetTitleFont(42);
   Graph_Graph1282->GetZaxis()->SetLabelFont(42);
   Graph_Graph1282->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1282->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1282->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1282->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1282->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1282);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx283[104] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180, 180, 180, 180, 170, 160, 150, 140, 130, 120, 110, 100, 95, 90, 85,
   80, 75, 70, 60, 55, 50, 45, 40, 35, 30, 25, 9.5, 9, 8.5, 8, 7.5,
   7, 6.5, 6, 5.8, 5.6, 5.4, 5, 4.8, 4.6, 4.4, 4.2, 4, 3.8, 3.6, 3.4, 3.2,
   3, 2.8, 2.6, 2.2, 2, 1.8, 1.6 };
   Double_t Graph2_fy283[104] = { 67.01366, 62.05416, 69.12935, 67.59707, 52.69289, 50.43283, 52.23964, 53.66225, 50.70868, 49.97613, 48.03303, 46.58322, 46.80271, 46.95905, 46.9465, 47.43215, 47.96408,
   47.62382, 46.80476, 47.744, 47.07155, 47.13524, 46.91151, 48.30434, 48.75267, 49.87657, 50.66736, 50.95342, 145.3558, 156.7536, 166.6728, 181.9342, 190.1815,
   206.6539, 217.8851, 230.6138, 256.4974, 275.7507, 295.6544, 314.717, 329.1688, 336.7185, 342.9257, 375.9301, 410.706, 438.1751, 473.0471, 484.18, 516.4024,
   567.7406, 583.4435, 583.4435, 164.6984, 164.6984, 159.6046, 145.1723, 136.4975, 132.4379, 122.6748, 115.4587, 106.6387, 97.68102, 94.65914, 92.53674, 88.72337,
   82.77369, 77.67992, 73.72417, 65.68942, 62.06371, 58.86455, 54.43587, 52.29273, 48.46039, 45.8744, 43.02311, 17.79029, 17.73119, 17.49477, 17.14015, 17.09404,
   16.74891, 16.86811, 16.7594, 17.0561, 16.93221, 17.50314, 18.27791, 18.17642, 17.99031, 17.83004, 17.53941, 17.19687, 18.28959, 19.69095, 20.90575, 22.6891,
   21.67293, 20.35809, 21.37599, 30.7303, 31.8891, 27.7027, 29.95603 };
   graph = new TGraph(104,Graph2_fx283,Graph2_fy283);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2283 = new TH1F("Graph_Graph2283","Graph",104,0,197.84);
   Graph_Graph2283->SetMinimum(15.07401);
   Graph_Graph2283->SetMaximum(640.1129);
   Graph_Graph2283->SetDirectory(nullptr);
   Graph_Graph2283->SetStats(0);
   Graph_Graph2283->SetLineWidth(2);
   Graph_Graph2283->SetMarkerStyle(20);
   Graph_Graph2283->SetMarkerSize(0.9);
   Graph_Graph2283->GetXaxis()->SetLabelFont(42);
   Graph_Graph2283->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2283->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2283->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2283->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2283->GetXaxis()->SetTitleFont(42);
   Graph_Graph2283->GetYaxis()->SetLabelFont(42);
   Graph_Graph2283->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2283->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2283->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2283->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2283->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2283->GetYaxis()->SetTitleFont(42);
   Graph_Graph2283->GetZaxis()->SetLabelFont(42);
   Graph_Graph2283->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2283->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2283->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2283->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2283->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2283);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx284[51] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180 };
   Double_t Graph0_fy284[51] = { 44.14062, 40.82031, 46.38672, 45.11719, 32.8125, 31.25, 33.10547, 34.17969, 31.93359, 30.66406, 28.90625, 27.73438, 27.83203, 28.125, 28.32031, 28.61328, 29.00391,
   28.32031, 27.63672, 27.73438, 27.34375, 27.63672, 27.44141, 28.125, 28.32031, 28.90625, 29.29688, 29.39453, 76.95312, 82.8125, 87.5, 95.3125, 99.21875,
   107.8125, 113.6719, 120.3125, 134.375, 142.9688, 152.3438, 162.5, 170.3125, 174.2188, 178.9062, 195.3125, 212.5, 225.7812, 243.75, 250, 267.1875,
   293.75, 303.125 };
   graph = new TGraph(51,Graph0_fx284,Graph0_fy284);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0284 = new TH1F("Graph_Graph0284","",100,0,197.84);
   Graph_Graph0284->SetMinimum(0.2);
   Graph_Graph0284->SetMaximum(100000);
   Graph_Graph0284->SetDirectory(nullptr);
   Graph_Graph0284->SetStats(0);
   Graph_Graph0284->SetLineWidth(2);
   Graph_Graph0284->SetMarkerStyle(20);
   Graph_Graph0284->SetMarkerSize(0.9);
   Graph_Graph0284->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0284->GetXaxis()->SetRange(1,91);
   Graph_Graph0284->GetXaxis()->SetLabelFont(42);
   Graph_Graph0284->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0284->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0284->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0284->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0284->GetXaxis()->SetTitleFont(42);
   Graph_Graph0284->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0284->GetYaxis()->SetLabelFont(42);
   Graph_Graph0284->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0284->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0284->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0284->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0284->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0284->GetYaxis()->SetTitleFont(42);
   Graph_Graph0284->GetZaxis()->SetLabelFont(42);
   Graph_Graph0284->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0284->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0284->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0284->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0284->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0284);
   
   graph->Draw("l");
   
   Double_t Graph_fx285[51] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180 };
   Double_t Graph_fy285[51] = { 2.489989e-160, 6.649364e-142, 3.608629e-127, 4.049556e-115, 1.360381e-96, 2.551051e-89, 5.095216e-83, 1.650197e-77, 1.195118e-72, 2.485004e-68, 1.807012e-64, 5.380755e-61, 7.454907e-58, 5.335005e-55, 2.149812e-52, 5.241637e-50, 8.21414e-48,
   6.520864e-44, 3.581367e-42, 1.48959e-40, 4.824544e-39, 2.426256e-35, 8.560815e-33, 4.306485e-30, 4.059703e-28, 4.592185e-26, 1.725686e-24, 7.057655e-23, 3.647813e-06, 0.0001689532, 0.002530091, 0.01878653, 0.08763139,
   0.2957937, 0.7902439, 1.773475, 6.165697, 10.04659, 15.31204, 22.09509, 30.47114, 40.45961, 52.02978, 79.59215, 112.2378, 148.7886, 188.0138, 228.7618, 270.0293,
   310.988, 350.9843 };
   graph = new TGraph(51,Graph_fx285,Graph_fy285);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph285 = new TH1F("Graph_Graph285","",100,0,197.84);
   Graph_Graph285->SetMinimum(2.24099e-160);
   Graph_Graph285->SetMaximum(386.0827);
   Graph_Graph285->SetDirectory(nullptr);
   Graph_Graph285->SetStats(0);
   Graph_Graph285->SetLineWidth(2);
   Graph_Graph285->SetMarkerStyle(20);
   Graph_Graph285->SetMarkerSize(0.9);
   Graph_Graph285->GetXaxis()->SetLabelFont(42);
   Graph_Graph285->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph285->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph285->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph285->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph285->GetXaxis()->SetTitleFont(42);
   Graph_Graph285->GetYaxis()->SetLabelFont(42);
   Graph_Graph285->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph285->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph285->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph285->GetYaxis()->SetTickLength(0.02);
   Graph_Graph285->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph285->GetYaxis()->SetTitleFont(42);
   Graph_Graph285->GetZaxis()->SetLabelFont(42);
   Graph_Graph285->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph285->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph285->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph285->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph285->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph285);
   
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
   
   Double_t Graph_fx287[51] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180 };
   Double_t Graph_fy287[51] = { 2.738988e-160, 7.3143e-142, 3.969492e-127, 4.454511e-115, 1.496419e-96, 2.806156e-89, 5.604738e-83, 1.815217e-77, 1.31463e-72, 2.733505e-68, 1.987713e-64, 5.91883e-61, 8.200398e-58, 5.868506e-55, 2.364793e-52, 5.765801e-50, 9.035554e-48,
   7.17295e-44, 3.939503e-42, 1.638549e-40, 5.306999e-39, 2.668881e-35, 9.416896e-33, 4.737134e-30, 4.465673e-28, 5.051404e-26, 1.898254e-24, 7.76342e-23, 4.012594e-06, 0.0001858485, 0.0027831, 0.02066519, 0.09639453,
   0.3253731, 0.8692683, 1.950823, 6.782266, 11.05124, 16.84325, 24.3046, 33.51826, 44.50557, 57.23275, 87.55136, 123.4616, 163.6674, 206.8152, 251.638, 297.0322,
   342.0868, 386.0827 };
   graph = new TGraph(51,Graph_fx287,Graph_fy287);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph287 = new TH1F("Graph_Graph287","",100,0,197.84);
   Graph_Graph287->SetMinimum(2.465089e-160);
   Graph_Graph287->SetMaximum(424.691);
   Graph_Graph287->SetDirectory(nullptr);
   Graph_Graph287->SetStats(0);
   Graph_Graph287->SetLineWidth(2);
   Graph_Graph287->SetMarkerStyle(20);
   Graph_Graph287->SetMarkerSize(0.9);
   Graph_Graph287->GetXaxis()->SetLabelFont(42);
   Graph_Graph287->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph287->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph287->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph287->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph287->GetXaxis()->SetTitleFont(42);
   Graph_Graph287->GetYaxis()->SetLabelFont(42);
   Graph_Graph287->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph287->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph287->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph287->GetYaxis()->SetTickLength(0.02);
   Graph_Graph287->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph287->GetYaxis()->SetTitleFont(42);
   Graph_Graph287->GetZaxis()->SetLabelFont(42);
   Graph_Graph287->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph287->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph287->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph287->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph287->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph287);
   
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
   line = new TLine(158.9352,0,158.9352,265.3026);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(158.9302,0,"  158.94 TeV");

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
   pt_LaTex = pt->AddText("#varepsilon = 2.24e-07");
   pt_LaTex = pt->AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
