#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_ep_variable_ma_245_alpha_max_2023DNorm_rate_2.44e-07()
{
//=========Macro generated from canvas: climits/climits
//=========  (Tue Feb 17 10:06:02 2026) by ROOT version 6.30/07
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
   
   Double_t Graph0_fx295[51] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180 };
   Double_t Graph0_fy295[51] = { 48.04688, 44.82422, 50.97656, 50.97656, 37.5, 36.13281, 38.47656, 40.72266, 38.57422, 36.81641, 34.57031, 33.39844, 33.49609, 34.375, 35.05859, 35.83984, 36.32812,
   34.96094, 34.08203, 34.47266, 33.98438, 34.66797, 34.76562, 35.9375, 36.13281, 37.5, 38.47656, 39.25781, 114.0625, 120.7031, 127.3438, 136.7188, 142.9688,
   155.4688, 160.1562, 170.3125, 187.5, 199.2188, 211.7188, 225.7812, 234.375, 242.1875, 246.875, 265.625, 290.625, 309.375, 327.3438, 342.1875, 365.625,
   387.5, 396.875 };
   TGraph *graph = new TGraph(51,Graph0_fx295,Graph0_fy295);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0295 = new TH1F("Graph_Graph0295","",100,0,197.84);
   Graph_Graph0295->SetMinimum(0.2);
   Graph_Graph0295->SetMaximum(100000);
   Graph_Graph0295->SetDirectory(nullptr);
   Graph_Graph0295->SetStats(0);
   Graph_Graph0295->SetLineWidth(2);
   Graph_Graph0295->SetMarkerStyle(20);
   Graph_Graph0295->SetMarkerSize(0.9);
   Graph_Graph0295->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0295->GetXaxis()->SetRange(1,91);
   Graph_Graph0295->GetXaxis()->SetLabelFont(42);
   Graph_Graph0295->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0295->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0295->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0295->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0295->GetXaxis()->SetTitleFont(42);
   Graph_Graph0295->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0295->GetYaxis()->SetLabelFont(42);
   Graph_Graph0295->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0295->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0295->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0295->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0295->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0295->GetYaxis()->SetTitleFont(42);
   Graph_Graph0295->GetZaxis()->SetLabelFont(42);
   Graph_Graph0295->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0295->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0295->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0295->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0295->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0295);
   
   graph->Draw("al");
   
   Double_t Graph1_fx296[104] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180, 180, 180, 180, 170, 160, 150, 140, 130, 120, 110, 100, 95, 90, 85,
   80, 75, 70, 60, 55, 50, 45, 40, 35, 30, 25, 9.5, 9, 8.5, 8, 7.5,
   7, 6.5, 6, 5.8, 5.6, 5.4, 5, 4.8, 4.6, 4.4, 4.2, 4, 3.8, 3.6, 3.4, 3.2,
   3, 2.8, 2.6, 2.2, 2, 1.8, 1.6 };
   Double_t Graph1_fy296[104] = { 105.3867, 98.31811, 108.907, 109.0032, 88.76128, 85.44009, 89.06924, 92.34668, 88.71135, 87.91225, 84.74628, 82.7347, 83.49946, 84.3649, 84.9716, 86.49681, 88.15236,
   87.3021, 86.06523, 88.22526, 86.81078, 88.17291, 88.9515, 92.1972, 93.29153, 96.35933, 98.28577, 99.73739, 310.1728, 328.9976, 348.5929, 376.2221, 398.7556,
   436.2242, 447.5513, 472.6085, 520.8066, 568.8821, 602.213, 640.4143, 665.4121, 681.4854, 692.5286, 746.7263, 826.6541, 881.6293, 938.3855, 973.4171, 1039.984,
   1097.855, 1113.849, 1113.849, 184.4849, 184.4849, 180.127, 169.9585, 159.0637, 150.885, 143.811, 135.0952, 124.5117, 114.7583, 112.5793, 108.9478, 104.953,
   98.41614, 92.60559, 87.89062, 79.83398, 75.07324, 72.87598, 67.0166, 64.08691, 60.18982, 57.52258, 54.80347, 17.48199, 16.9838, 16.40625, 15.80811, 15.86304,
   15.61737, 15.5735, 15.00092, 15.21645, 15.17715, 15.84167, 16.8869, 16.79993, 16.43372, 15.84473, 15.30876, 15.26413, 15.93475, 17.25769, 18.68439, 20.04318,
   18.48679, 17.0784, 17.72461, 25.68741, 25.88654, 22.41211, 23.9296 };
   graph = new TGraph(104,Graph1_fx296,Graph1_fy296);
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
   
   TH1F *Graph_Graph1296 = new TH1F("Graph_Graph1296","Graph",104,0,197.84);
   Graph_Graph1296->SetMinimum(13.50082);
   Graph_Graph1296->SetMaximum(1223.734);
   Graph_Graph1296->SetDirectory(nullptr);
   Graph_Graph1296->SetStats(0);
   Graph_Graph1296->SetLineWidth(2);
   Graph_Graph1296->SetMarkerStyle(20);
   Graph_Graph1296->SetMarkerSize(0.9);
   Graph_Graph1296->GetXaxis()->SetLabelFont(42);
   Graph_Graph1296->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1296->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1296->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1296->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1296->GetXaxis()->SetTitleFont(42);
   Graph_Graph1296->GetYaxis()->SetLabelFont(42);
   Graph_Graph1296->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1296->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1296->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1296->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1296->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1296->GetYaxis()->SetTitleFont(42);
   Graph_Graph1296->GetZaxis()->SetLabelFont(42);
   Graph_Graph1296->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1296->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1296->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1296->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1296->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1296);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx297[104] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180, 180, 180, 180, 170, 160, 150, 140, 130, 120, 110, 100, 95, 90, 85,
   80, 75, 70, 60, 55, 50, 45, 40, 35, 30, 25, 9.5, 9, 8.5, 8, 7.5,
   7, 6.5, 6, 5.8, 5.6, 5.4, 5, 4.8, 4.6, 4.4, 4.2, 4, 3.8, 3.6, 3.4, 3.2,
   3, 2.8, 2.6, 2.2, 2, 1.8, 1.6 };
   Double_t Graph2_fy297[104] = { 72.17801, 67.3368, 75.66473, 75.56313, 58.50146, 56.29658, 59.33478, 62.06803, 59.33161, 57.72853, 54.96452, 53.36758, 53.65714, 54.65399, 55.32163, 56.41156, 57.32492,
   56.14302, 55.00331, 55.97724, 55.25209, 56.08711, 56.38368, 58.4275, 59.0331, 61.1173, 62.55553, 63.51272, 187.7171, 199.127, 210.5898, 226.6383, 238.7085,
   260.1989, 267.4057, 283.6843, 312.313, 335.803, 356.0291, 379.6767, 394.1281, 405.335, 412.1961, 444.561, 488.7189, 520.2491, 553.0752, 576.109, 614.8399,
   650.0806, 665.8083, 665.8083, 257.494, 257.494, 249.7913, 235.6902, 220.5819, 210.1641, 199.4302, 187.3435, 171.917, 160.1734, 157.1321, 151.0835, 145.5437,
   136.4787, 128.4209, 122.1313, 110.936, 103.6558, 100.622, 92.53178, 89.05411, 82.74934, 79.24089, 74.94228, 25.13756, 24.53985, 23.82202, 22.95351, 22.92047,
   22.49877, 22.43558, 21.67479, 21.98621, 21.8234, 22.71266, 23.87359, 23.6424, 23.12703, 22.50404, 21.84483, 21.63947, 22.63191, 24.2866, 25.98768, 27.63643,
   25.82678, 23.92608, 24.83139, 35.17084, 35.2953, 30.64156, 32.97358 };
   graph = new TGraph(104,Graph2_fx297,Graph2_fy297);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2297 = new TH1F("Graph_Graph2297","Graph",104,0,197.84);
   Graph_Graph2297->SetMinimum(19.47553);
   Graph_Graph2297->SetMaximum(730.2252);
   Graph_Graph2297->SetDirectory(nullptr);
   Graph_Graph2297->SetStats(0);
   Graph_Graph2297->SetLineWidth(2);
   Graph_Graph2297->SetMarkerStyle(20);
   Graph_Graph2297->SetMarkerSize(0.9);
   Graph_Graph2297->GetXaxis()->SetLabelFont(42);
   Graph_Graph2297->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2297->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2297->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2297->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2297->GetXaxis()->SetTitleFont(42);
   Graph_Graph2297->GetYaxis()->SetLabelFont(42);
   Graph_Graph2297->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2297->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2297->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2297->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2297->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2297->GetYaxis()->SetTitleFont(42);
   Graph_Graph2297->GetZaxis()->SetLabelFont(42);
   Graph_Graph2297->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2297->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2297->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2297->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2297->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2297);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx298[51] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180 };
   Double_t Graph0_fy298[51] = { 48.04688, 44.82422, 50.97656, 50.97656, 37.5, 36.13281, 38.47656, 40.72266, 38.57422, 36.81641, 34.57031, 33.39844, 33.49609, 34.375, 35.05859, 35.83984, 36.32812,
   34.96094, 34.08203, 34.47266, 33.98438, 34.66797, 34.76562, 35.9375, 36.13281, 37.5, 38.47656, 39.25781, 114.0625, 120.7031, 127.3438, 136.7188, 142.9688,
   155.4688, 160.1562, 170.3125, 187.5, 199.2188, 211.7188, 225.7812, 234.375, 242.1875, 246.875, 265.625, 290.625, 309.375, 327.3438, 342.1875, 365.625,
   387.5, 396.875 };
   graph = new TGraph(51,Graph0_fx298,Graph0_fy298);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0298 = new TH1F("Graph_Graph0298","",100,0,197.84);
   Graph_Graph0298->SetMinimum(0.2);
   Graph_Graph0298->SetMaximum(100000);
   Graph_Graph0298->SetDirectory(nullptr);
   Graph_Graph0298->SetStats(0);
   Graph_Graph0298->SetLineWidth(2);
   Graph_Graph0298->SetMarkerStyle(20);
   Graph_Graph0298->SetMarkerSize(0.9);
   Graph_Graph0298->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0298->GetXaxis()->SetRange(1,91);
   Graph_Graph0298->GetXaxis()->SetLabelFont(42);
   Graph_Graph0298->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0298->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0298->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0298->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0298->GetXaxis()->SetTitleFont(42);
   Graph_Graph0298->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0298->GetYaxis()->SetLabelFont(42);
   Graph_Graph0298->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0298->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0298->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0298->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0298->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0298->GetYaxis()->SetTitleFont(42);
   Graph_Graph0298->GetZaxis()->SetLabelFont(42);
   Graph_Graph0298->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0298->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0298->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0298->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0298->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0298);
   
   graph->Draw("l");
   
   Double_t Graph_fx299[51] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180 };
   Double_t Graph_fy299[51] = { 3.082271e-191, 2.323302e-169, 7.264238e-152, 1.478648e-137, 1.482184e-115, 6.442505e-107, 1.961462e-99, 6.888893e-93, 4.087267e-87, 5.51148e-82, 2.134794e-77, 2.864485e-73, 1.549482e-69, 3.825107e-66, 4.77432e-63, 3.281434e-60, 1.334251e-57,
   5.769265e-53, 6.75302e-51, 5.681794e-49, 3.551784e-47, 9.88228e-43, 9.606995e-40, 1.694739e-36, 3.51462e-34, 1.031744e-31, 7.31943e-30, 6.315466e-28, 5.284707e-08, 5.248292e-06, 0.0001355202, 0.001514178, 0.009705468,
   0.04224416, 0.138958, 0.370881, 1.693167, 3.076518, 5.158008, 8.096197, 12.03236, 17.08212, 23.33052, 39.6018, 60.90143, 86.87805, 116.9047, 150.2061, 185.9597,
   223.3674, 261.6991 };
   graph = new TGraph(51,Graph_fx299,Graph_fy299);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph299 = new TH1F("Graph_Graph299","",100,0,197.84);
   Graph_Graph299->SetMinimum(2.774044e-191);
   Graph_Graph299->SetMaximum(287.869);
   Graph_Graph299->SetDirectory(nullptr);
   Graph_Graph299->SetStats(0);
   Graph_Graph299->SetLineWidth(2);
   Graph_Graph299->SetMarkerStyle(20);
   Graph_Graph299->SetMarkerSize(0.9);
   Graph_Graph299->GetXaxis()->SetLabelFont(42);
   Graph_Graph299->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph299->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph299->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph299->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph299->GetXaxis()->SetTitleFont(42);
   Graph_Graph299->GetYaxis()->SetLabelFont(42);
   Graph_Graph299->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph299->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph299->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph299->GetYaxis()->SetTickLength(0.02);
   Graph_Graph299->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph299->GetYaxis()->SetTitleFont(42);
   Graph_Graph299->GetZaxis()->SetLabelFont(42);
   Graph_Graph299->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph299->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph299->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph299->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph299->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph299);
   
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
   
   Double_t Graph_fx301[51] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180 };
   Double_t Graph_fy301[51] = { 3.390498e-191, 2.555632e-169, 7.990662e-152, 1.626512e-137, 1.630402e-115, 7.086756e-107, 2.157608e-99, 7.577782e-93, 4.495994e-87, 6.062628e-82, 2.348273e-77, 3.150933e-73, 1.70443e-69, 4.207618e-66, 5.251752e-63, 3.609577e-60, 1.467676e-57,
   6.346191e-53, 7.428322e-51, 6.249973e-49, 3.906963e-47, 1.087051e-42, 1.05677e-39, 1.864213e-36, 3.866083e-34, 1.134919e-31, 8.051373e-30, 6.947012e-28, 5.813178e-08, 5.773121e-06, 0.0001490723, 0.001665596, 0.01067601,
   0.04646858, 0.1528538, 0.407969, 1.862484, 3.38417, 5.673808, 8.905816, 13.23559, 18.79033, 25.66357, 43.56199, 66.99157, 95.56586, 128.5952, 165.2267, 204.5557,
   245.7042, 287.869 };
   graph = new TGraph(51,Graph_fx301,Graph_fy301);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph301 = new TH1F("Graph_Graph301","",100,0,197.84);
   Graph_Graph301->SetMinimum(3.051448e-191);
   Graph_Graph301->SetMaximum(316.6559);
   Graph_Graph301->SetDirectory(nullptr);
   Graph_Graph301->SetStats(0);
   Graph_Graph301->SetLineWidth(2);
   Graph_Graph301->SetMarkerStyle(20);
   Graph_Graph301->SetMarkerSize(0.9);
   Graph_Graph301->GetXaxis()->SetLabelFont(42);
   Graph_Graph301->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph301->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph301->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph301->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph301->GetXaxis()->SetTitleFont(42);
   Graph_Graph301->GetYaxis()->SetLabelFont(42);
   Graph_Graph301->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph301->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph301->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph301->GetYaxis()->SetTickLength(0.02);
   Graph_Graph301->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph301->GetYaxis()->SetTitleFont(42);
   Graph_Graph301->GetZaxis()->SetLabelFont(42);
   Graph_Graph301->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph301->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph301->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph301->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph301->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph301);
   
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
   pt_LaTex = pt->AddText("#varepsilon = 2.44e-07");
   pt_LaTex = pt->AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
