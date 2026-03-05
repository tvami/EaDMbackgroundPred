#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_ep_variable_ma_245_alpha_max_2023DNorm_rate_1.04e-07()
{
//=========Macro generated from canvas: climits/climits
//=========  (Tue Feb 17 10:06:00 2026) by ROOT version 6.30/07
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
   
   Double_t Graph0_fx197[51] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180 };
   Double_t Graph0_fy197[51] = { 48.04688, 44.82422, 50.97656, 50.97656, 37.5, 36.13281, 38.47656, 40.72266, 38.57422, 36.81641, 34.57031, 33.39844, 33.49609, 34.375, 35.05859, 35.83984, 36.32812,
   34.96094, 34.08203, 34.47266, 33.98438, 34.66797, 34.76562, 35.9375, 36.13281, 37.5, 38.47656, 39.25781, 114.0625, 120.7031, 127.3438, 136.7188, 142.9688,
   155.4688, 160.1562, 170.3125, 187.5, 199.2188, 211.7188, 225.7812, 234.375, 242.1875, 246.875, 265.625, 290.625, 309.375, 327.3438, 342.1875, 365.625,
   387.5, 396.875 };
   TGraph *graph = new TGraph(51,Graph0_fx197,Graph0_fy197);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0197 = new TH1F("Graph_Graph0197","",100,0,197.84);
   Graph_Graph0197->SetMinimum(0.2);
   Graph_Graph0197->SetMaximum(100000);
   Graph_Graph0197->SetDirectory(nullptr);
   Graph_Graph0197->SetStats(0);
   Graph_Graph0197->SetLineWidth(2);
   Graph_Graph0197->SetMarkerStyle(20);
   Graph_Graph0197->SetMarkerSize(0.9);
   Graph_Graph0197->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0197->GetXaxis()->SetRange(1,91);
   Graph_Graph0197->GetXaxis()->SetLabelFont(42);
   Graph_Graph0197->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0197->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0197->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0197->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0197->GetXaxis()->SetTitleFont(42);
   Graph_Graph0197->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0197->GetYaxis()->SetLabelFont(42);
   Graph_Graph0197->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0197->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0197->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0197->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0197->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0197->GetYaxis()->SetTitleFont(42);
   Graph_Graph0197->GetZaxis()->SetLabelFont(42);
   Graph_Graph0197->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0197->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0197->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0197->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0197->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0197);
   
   graph->Draw("al");
   
   Double_t Graph1_fx198[104] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180, 180, 180, 180, 170, 160, 150, 140, 130, 120, 110, 100, 95, 90, 85,
   80, 75, 70, 60, 55, 50, 45, 40, 35, 30, 25, 9.5, 9, 8.5, 8, 7.5,
   7, 6.5, 6, 5.8, 5.6, 5.4, 5, 4.8, 4.6, 4.4, 4.2, 4, 3.8, 3.6, 3.4, 3.2,
   3, 2.8, 2.6, 2.2, 2, 1.8, 1.6 };
   Double_t Graph1_fy198[104] = { 105.3867, 98.31811, 108.907, 109.0032, 88.76128, 85.44009, 89.06924, 92.34668, 88.71135, 87.91225, 84.74628, 82.7347, 83.49946, 84.3649, 84.9716, 86.49681, 88.15236,
   87.3021, 86.06523, 88.22526, 86.81078, 88.17291, 88.9515, 92.1972, 93.29153, 96.35933, 98.28577, 99.73739, 310.1728, 328.9976, 348.5929, 376.2221, 398.7556,
   436.2242, 447.5513, 472.6085, 520.8066, 568.8821, 602.213, 640.4143, 665.4121, 681.4854, 692.5286, 746.7263, 826.6541, 881.6293, 938.3855, 973.4171, 1039.984,
   1097.855, 1113.849, 1113.849, 184.4849, 184.4849, 180.127, 169.9585, 159.0637, 150.885, 143.811, 135.0952, 124.5117, 114.7583, 112.5793, 108.9478, 104.953,
   98.41614, 92.60559, 87.89062, 79.83398, 75.07324, 72.87598, 67.0166, 64.08691, 60.18982, 57.52258, 54.80347, 17.48199, 16.9838, 16.40625, 15.80811, 15.86304,
   15.61737, 15.5735, 15.00092, 15.21645, 15.17715, 15.84167, 16.8869, 16.79993, 16.43372, 15.84473, 15.30876, 15.26413, 15.93475, 17.25769, 18.68439, 20.04318,
   18.48679, 17.0784, 17.72461, 25.68741, 25.88654, 22.41211, 23.9296 };
   graph = new TGraph(104,Graph1_fx198,Graph1_fy198);
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
   
   TH1F *Graph_Graph1198 = new TH1F("Graph_Graph1198","Graph",104,0,197.84);
   Graph_Graph1198->SetMinimum(13.50082);
   Graph_Graph1198->SetMaximum(1223.734);
   Graph_Graph1198->SetDirectory(nullptr);
   Graph_Graph1198->SetStats(0);
   Graph_Graph1198->SetLineWidth(2);
   Graph_Graph1198->SetMarkerStyle(20);
   Graph_Graph1198->SetMarkerSize(0.9);
   Graph_Graph1198->GetXaxis()->SetLabelFont(42);
   Graph_Graph1198->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1198->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1198->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1198->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1198->GetXaxis()->SetTitleFont(42);
   Graph_Graph1198->GetYaxis()->SetLabelFont(42);
   Graph_Graph1198->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1198->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1198->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1198->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1198->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1198->GetYaxis()->SetTitleFont(42);
   Graph_Graph1198->GetZaxis()->SetLabelFont(42);
   Graph_Graph1198->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1198->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1198->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1198->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1198->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1198);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx199[104] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180, 180, 180, 180, 170, 160, 150, 140, 130, 120, 110, 100, 95, 90, 85,
   80, 75, 70, 60, 55, 50, 45, 40, 35, 30, 25, 9.5, 9, 8.5, 8, 7.5,
   7, 6.5, 6, 5.8, 5.6, 5.4, 5, 4.8, 4.6, 4.4, 4.2, 4, 3.8, 3.6, 3.4, 3.2,
   3, 2.8, 2.6, 2.2, 2, 1.8, 1.6 };
   Double_t Graph2_fy199[104] = { 72.17801, 67.3368, 75.66473, 75.56313, 58.50146, 56.29658, 59.33478, 62.06803, 59.33161, 57.72853, 54.96452, 53.36758, 53.65714, 54.65399, 55.32163, 56.41156, 57.32492,
   56.14302, 55.00331, 55.97724, 55.25209, 56.08711, 56.38368, 58.4275, 59.0331, 61.1173, 62.55553, 63.51272, 187.7171, 199.127, 210.5898, 226.6383, 238.7085,
   260.1989, 267.4057, 283.6843, 312.313, 335.803, 356.0291, 379.6767, 394.1281, 405.335, 412.1961, 444.561, 488.7189, 520.2491, 553.0752, 576.109, 614.8399,
   650.0806, 665.8083, 665.8083, 257.494, 257.494, 249.7913, 235.6902, 220.5819, 210.1641, 199.4302, 187.3435, 171.917, 160.1734, 157.1321, 151.0835, 145.5437,
   136.4787, 128.4209, 122.1313, 110.936, 103.6558, 100.622, 92.53178, 89.05411, 82.74934, 79.24089, 74.94228, 25.13756, 24.53985, 23.82202, 22.95351, 22.92047,
   22.49877, 22.43558, 21.67479, 21.98621, 21.8234, 22.71266, 23.87359, 23.6424, 23.12703, 22.50404, 21.84483, 21.63947, 22.63191, 24.2866, 25.98768, 27.63643,
   25.82678, 23.92608, 24.83139, 35.17084, 35.2953, 30.64156, 32.97358 };
   graph = new TGraph(104,Graph2_fx199,Graph2_fy199);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2199 = new TH1F("Graph_Graph2199","Graph",104,0,197.84);
   Graph_Graph2199->SetMinimum(19.47553);
   Graph_Graph2199->SetMaximum(730.2252);
   Graph_Graph2199->SetDirectory(nullptr);
   Graph_Graph2199->SetStats(0);
   Graph_Graph2199->SetLineWidth(2);
   Graph_Graph2199->SetMarkerStyle(20);
   Graph_Graph2199->SetMarkerSize(0.9);
   Graph_Graph2199->GetXaxis()->SetLabelFont(42);
   Graph_Graph2199->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2199->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2199->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2199->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2199->GetXaxis()->SetTitleFont(42);
   Graph_Graph2199->GetYaxis()->SetLabelFont(42);
   Graph_Graph2199->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2199->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2199->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2199->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2199->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2199->GetYaxis()->SetTitleFont(42);
   Graph_Graph2199->GetZaxis()->SetLabelFont(42);
   Graph_Graph2199->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2199->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2199->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2199->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2199->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2199);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx200[51] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180 };
   Double_t Graph0_fy200[51] = { 48.04688, 44.82422, 50.97656, 50.97656, 37.5, 36.13281, 38.47656, 40.72266, 38.57422, 36.81641, 34.57031, 33.39844, 33.49609, 34.375, 35.05859, 35.83984, 36.32812,
   34.96094, 34.08203, 34.47266, 33.98438, 34.66797, 34.76562, 35.9375, 36.13281, 37.5, 38.47656, 39.25781, 114.0625, 120.7031, 127.3438, 136.7188, 142.9688,
   155.4688, 160.1562, 170.3125, 187.5, 199.2188, 211.7188, 225.7812, 234.375, 242.1875, 246.875, 265.625, 290.625, 309.375, 327.3438, 342.1875, 365.625,
   387.5, 396.875 };
   graph = new TGraph(51,Graph0_fx200,Graph0_fy200);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0200 = new TH1F("Graph_Graph0200","",100,0,197.84);
   Graph_Graph0200->SetMinimum(0.2);
   Graph_Graph0200->SetMaximum(100000);
   Graph_Graph0200->SetDirectory(nullptr);
   Graph_Graph0200->SetStats(0);
   Graph_Graph0200->SetLineWidth(2);
   Graph_Graph0200->SetMarkerStyle(20);
   Graph_Graph0200->SetMarkerSize(0.9);
   Graph_Graph0200->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0200->GetXaxis()->SetRange(1,91);
   Graph_Graph0200->GetXaxis()->SetLabelFont(42);
   Graph_Graph0200->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0200->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0200->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0200->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0200->GetXaxis()->SetTitleFont(42);
   Graph_Graph0200->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0200->GetYaxis()->SetLabelFont(42);
   Graph_Graph0200->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0200->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0200->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0200->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0200->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0200->GetYaxis()->SetTitleFont(42);
   Graph_Graph0200->GetZaxis()->SetLabelFont(42);
   Graph_Graph0200->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0200->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0200->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0200->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0200->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0200);
   
   graph->Draw("l");
   
   Double_t Graph_fx201[51] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180 };
   Double_t Graph_fy201[51] = { 4.543639e-31, 3.745769e-27, 5.008937e-24, 1.786746e-21, 1.466882e-17, 5.000988e-16, 1.058004e-14, 1.519586e-13, 1.587078e-12, 1.271424e-11, 8.148776e-11, 4.32141e-10, 1.94858e-09, 7.639088e-09, 2.65203e-08, 8.278986e-08, 2.354062e-07,
   1.499675e-06, 3.418164e-06, 7.348006e-06, 1.498628e-05, 7.580463e-05, 0.0002816692, 0.0009198742, 0.002480039, 0.006097701, 0.01320793, 0.02673659, 38.65429, 72.43153, 109.7222, 146.1345, 179.1215,
   207.5593, 231.2088, 250.309, 276.7783, 285.212, 291.1099, 294.9032, 296.9637, 297.6069, 297.0977, 293.4691, 287.4323, 279.9131, 271.5409, 262.7416, 253.801,
   244.9097, 236.1922 };
   graph = new TGraph(51,Graph_fx201,Graph_fy201);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph201 = new TH1F("Graph_Graph201","",100,0,197.84);
   Graph_Graph201->SetMinimum(4.089275e-31);
   Graph_Graph201->SetMaximum(327.3676);
   Graph_Graph201->SetDirectory(nullptr);
   Graph_Graph201->SetStats(0);
   Graph_Graph201->SetLineWidth(2);
   Graph_Graph201->SetMarkerStyle(20);
   Graph_Graph201->SetMarkerSize(0.9);
   Graph_Graph201->GetXaxis()->SetLabelFont(42);
   Graph_Graph201->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph201->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph201->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph201->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph201->GetXaxis()->SetTitleFont(42);
   Graph_Graph201->GetYaxis()->SetLabelFont(42);
   Graph_Graph201->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph201->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph201->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph201->GetYaxis()->SetTickLength(0.02);
   Graph_Graph201->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph201->GetYaxis()->SetTitleFont(42);
   Graph_Graph201->GetZaxis()->SetLabelFont(42);
   Graph_Graph201->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph201->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph201->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph201->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph201->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph201);
   
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
   
   Double_t Graph_fx203[51] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180 };
   Double_t Graph_fy203[51] = { 4.998003e-31, 4.120346e-27, 5.50983e-24, 1.965421e-21, 1.61357e-17, 5.501086e-16, 1.163805e-14, 1.671544e-13, 1.745786e-12, 1.398567e-11, 8.963653e-11, 4.753551e-10, 2.143438e-09, 8.402997e-09, 2.917233e-08, 9.106884e-08, 2.589468e-07,
   1.649643e-06, 3.75998e-06, 8.082806e-06, 1.648491e-05, 8.338509e-05, 0.0003098362, 0.001011862, 0.002728043, 0.006707471, 0.01452873, 0.02941025, 42.51972, 79.67468, 120.6944, 160.748, 197.0336,
   228.3152, 254.3296, 275.3399, 304.4561, 313.7332, 320.2209, 324.3935, 326.6601, 327.3676, 326.8075, 322.8161, 316.1755, 307.9044, 298.695, 289.0157, 279.1811,
   269.4007, 259.8115 };
   graph = new TGraph(51,Graph_fx203,Graph_fy203);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph203 = new TH1F("Graph_Graph203","",100,0,197.84);
   Graph_Graph203->SetMinimum(4.498203e-31);
   Graph_Graph203->SetMaximum(360.1043);
   Graph_Graph203->SetDirectory(nullptr);
   Graph_Graph203->SetStats(0);
   Graph_Graph203->SetLineWidth(2);
   Graph_Graph203->SetMarkerStyle(20);
   Graph_Graph203->SetMarkerSize(0.9);
   Graph_Graph203->GetXaxis()->SetLabelFont(42);
   Graph_Graph203->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph203->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph203->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph203->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph203->GetXaxis()->SetTitleFont(42);
   Graph_Graph203->GetYaxis()->SetLabelFont(42);
   Graph_Graph203->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph203->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph203->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph203->GetYaxis()->SetTickLength(0.02);
   Graph_Graph203->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph203->GetYaxis()->SetTitleFont(42);
   Graph_Graph203->GetZaxis()->SetLabelFont(42);
   Graph_Graph203->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph203->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph203->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph203->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph203->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph203);
   
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
   line = new TLine(38.455,0,38.455,133.7505);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(38.45,0,"  38.46 TeV");

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
   pt_LaTex = pt->AddText("#varepsilon = 1.04e-07");
   pt_LaTex = pt->AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
