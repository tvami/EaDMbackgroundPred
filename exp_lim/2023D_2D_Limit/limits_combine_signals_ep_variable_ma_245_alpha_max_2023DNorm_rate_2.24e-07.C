#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_ep_variable_ma_245_alpha_max_2023DNorm_rate_2.24e-07()
{
//=========Macro generated from canvas: climits/climits
//=========  (Tue Feb 17 10:06:01 2026) by ROOT version 6.30/07
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
   Double_t Graph0_fy281[51] = { 48.04688, 44.82422, 50.97656, 50.97656, 37.5, 36.13281, 38.47656, 40.72266, 38.57422, 36.81641, 34.57031, 33.39844, 33.49609, 34.375, 35.05859, 35.83984, 36.32812,
   34.96094, 34.08203, 34.47266, 33.98438, 34.66797, 34.76562, 35.9375, 36.13281, 37.5, 38.47656, 39.25781, 114.0625, 120.7031, 127.3438, 136.7188, 142.9688,
   155.4688, 160.1562, 170.3125, 187.5, 199.2188, 211.7188, 225.7812, 234.375, 242.1875, 246.875, 265.625, 290.625, 309.375, 327.3438, 342.1875, 365.625,
   387.5, 396.875 };
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
   Double_t Graph1_fy282[104] = { 105.3867, 98.31811, 108.907, 109.0032, 88.76128, 85.44009, 89.06924, 92.34668, 88.71135, 87.91225, 84.74628, 82.7347, 83.49946, 84.3649, 84.9716, 86.49681, 88.15236,
   87.3021, 86.06523, 88.22526, 86.81078, 88.17291, 88.9515, 92.1972, 93.29153, 96.35933, 98.28577, 99.73739, 310.1728, 328.9976, 348.5929, 376.2221, 398.7556,
   436.2242, 447.5513, 472.6085, 520.8066, 568.8821, 602.213, 640.4143, 665.4121, 681.4854, 692.5286, 746.7263, 826.6541, 881.6293, 938.3855, 973.4171, 1039.984,
   1097.855, 1113.849, 1113.849, 184.4849, 184.4849, 180.127, 169.9585, 159.0637, 150.885, 143.811, 135.0952, 124.5117, 114.7583, 112.5793, 108.9478, 104.953,
   98.41614, 92.60559, 87.89062, 79.83398, 75.07324, 72.87598, 67.0166, 64.08691, 60.18982, 57.52258, 54.80347, 17.48199, 16.9838, 16.40625, 15.80811, 15.86304,
   15.61737, 15.5735, 15.00092, 15.21645, 15.17715, 15.84167, 16.8869, 16.79993, 16.43372, 15.84473, 15.30876, 15.26413, 15.93475, 17.25769, 18.68439, 20.04318,
   18.48679, 17.0784, 17.72461, 25.68741, 25.88654, 22.41211, 23.9296 };
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
   Graph_Graph1282->SetMinimum(13.50082);
   Graph_Graph1282->SetMaximum(1223.734);
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
   Double_t Graph2_fy283[104] = { 72.17801, 67.3368, 75.66473, 75.56313, 58.50146, 56.29658, 59.33478, 62.06803, 59.33161, 57.72853, 54.96452, 53.36758, 53.65714, 54.65399, 55.32163, 56.41156, 57.32492,
   56.14302, 55.00331, 55.97724, 55.25209, 56.08711, 56.38368, 58.4275, 59.0331, 61.1173, 62.55553, 63.51272, 187.7171, 199.127, 210.5898, 226.6383, 238.7085,
   260.1989, 267.4057, 283.6843, 312.313, 335.803, 356.0291, 379.6767, 394.1281, 405.335, 412.1961, 444.561, 488.7189, 520.2491, 553.0752, 576.109, 614.8399,
   650.0806, 665.8083, 665.8083, 257.494, 257.494, 249.7913, 235.6902, 220.5819, 210.1641, 199.4302, 187.3435, 171.917, 160.1734, 157.1321, 151.0835, 145.5437,
   136.4787, 128.4209, 122.1313, 110.936, 103.6558, 100.622, 92.53178, 89.05411, 82.74934, 79.24089, 74.94228, 25.13756, 24.53985, 23.82202, 22.95351, 22.92047,
   22.49877, 22.43558, 21.67479, 21.98621, 21.8234, 22.71266, 23.87359, 23.6424, 23.12703, 22.50404, 21.84483, 21.63947, 22.63191, 24.2866, 25.98768, 27.63643,
   25.82678, 23.92608, 24.83139, 35.17084, 35.2953, 30.64156, 32.97358 };
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
   Graph_Graph2283->SetMinimum(19.47553);
   Graph_Graph2283->SetMaximum(730.2252);
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
   Double_t Graph0_fy284[51] = { 48.04688, 44.82422, 50.97656, 50.97656, 37.5, 36.13281, 38.47656, 40.72266, 38.57422, 36.81641, 34.57031, 33.39844, 33.49609, 34.375, 35.05859, 35.83984, 36.32812,
   34.96094, 34.08203, 34.47266, 33.98438, 34.66797, 34.76562, 35.9375, 36.13281, 37.5, 38.47656, 39.25781, 114.0625, 120.7031, 127.3438, 136.7188, 142.9688,
   155.4688, 160.1562, 170.3125, 187.5, 199.2188, 211.7188, 225.7812, 234.375, 242.1875, 246.875, 265.625, 290.625, 309.375, 327.3438, 342.1875, 365.625,
   387.5, 396.875 };
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
   pt_LaTex = pt->AddText("#varepsilon = 2.24e-07");
   pt_LaTex = pt->AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
