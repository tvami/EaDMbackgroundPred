#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_2mnthNorm_rate_2.34e-07()
{
//=========Macro generated from canvas: climits/climits
//=========  (Wed Mar 11 03:47:23 2026) by ROOT version 6.30/07
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
   
   Double_t Graph0_fx288[50] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 6, 7, 7.5, 8, 8.5, 9, 10, 20, 25, 30, 40, 45,
   50, 55, 60, 70, 75, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160, 170,
   180 };
   Double_t Graph0_fy288[50] = { 37.59766, 32.8125, 23.33984, 18.89648, 20.41016, 22.26562, 21.14258, 18.84766, 16.8457, 15.52734, 14.84375, 14.20898, 13.57422, 13.08594, 12.20703, 11.47461, 10.79102,
   10.40039, 9.814453, 9.716797, 9.423828, 9.423828, 9.423828, 9.667969, 9.716797, 9.863281, 10.10742, 10.44922, 30.07812, 34.76562, 39.0625, 46.48438, 48.82812,
   53.90625, 55.85938, 61.13281, 67.1875, 71.09375, 82.8125, 85.54688, 89.45312, 90.23438, 98.82812, 108.5938, 114.0625, 125, 125.7812, 137.5, 150.7812,
   153.9062 };
   TGraph *graph = new TGraph(50,Graph0_fx288,Graph0_fy288);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0288 = new TH1F("Graph_Graph0288","",100,0,197.84);
   Graph_Graph0288->SetMinimum(0.2);
   Graph_Graph0288->SetMaximum(100000);
   Graph_Graph0288->SetDirectory(nullptr);
   Graph_Graph0288->SetStats(0);
   Graph_Graph0288->SetLineWidth(2);
   Graph_Graph0288->SetMarkerStyle(20);
   Graph_Graph0288->SetMarkerSize(0.9);
   Graph_Graph0288->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0288->GetXaxis()->SetRange(1,91);
   Graph_Graph0288->GetXaxis()->SetLabelFont(42);
   Graph_Graph0288->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0288->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0288->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0288->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0288->GetXaxis()->SetTitleFont(42);
   Graph_Graph0288->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0288->GetYaxis()->SetLabelFont(42);
   Graph_Graph0288->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0288->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0288->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0288->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0288->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0288->GetYaxis()->SetTitleFont(42);
   Graph_Graph0288->GetZaxis()->SetLabelFont(42);
   Graph_Graph0288->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0288->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0288->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0288->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0288->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0288);
   
   graph->Draw("al");
   
   Double_t Graph1_fx289[102] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 6, 7, 7.5, 8, 8.5, 9, 10, 20, 25, 30, 40, 45,
   50, 55, 60, 70, 75, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160, 170,
   180, 180, 180, 180, 170, 160, 150, 140, 130, 120, 110, 100, 95, 90, 85, 75,
   70, 60, 55, 50, 45, 40, 30, 25, 20, 10, 9, 8.5, 8, 7.5, 7, 6,
   5.6, 5.4, 5.2, 5, 4.8, 4.6, 4.4, 4.2, 4, 3.8, 3.6, 3.4, 3.2, 3, 2.8, 2.6,
   2.4, 2.2, 2, 1.8, 1.6 };
   Double_t Graph1_fy289[102] = { 74.54662, 68.53737, 53.50381, 45.35591, 46.50549, 48.47651, 47.21983, 44.54715, 41.61218, 39.16454, 37.98207, 36.98527, 36.18023, 36.19005, 35.18717, 34.61032, 32.8137,
   31.62588, 29.84415, 29.54719, 28.65632, 28.65632, 28.65632, 29.39872, 29.5472, 29.99264, 30.73503, 31.77438, 91.46295, 105.7169, 118.7831, 141.3518, 148.4788,
   163.9206, 169.8598, 185.8955, 204.3068, 216.1852, 251.8201, 260.1349, 272.0132, 274.3889, 300.5211, 330.2169, 346.8465, 380.1058, 382.4814, 418.1163, 458.5026,
   468.0052, 468.0052, 43.28613, 43.28613, 41.22925, 37.59766, 34.39331, 34.17969, 31.18896, 29.6936, 27.02332, 25.02594, 24.45984, 23.39172, 22.64404, 19.4397,
   18.63403, 16.9548, 15.49225, 14.95056, 13.54218, 12.89215, 10.83374, 9.642029, 8.459473, 3.020477, 2.921677, 2.889633, 2.884674, 2.907944, 2.908134, 3.092194,
   3.129005, 3.22628, 3.297043, 3.493881, 3.667259, 4.034042, 4.577637, 5.418396, 6.150818, 6.771469, 7.247925, 7.642365, 8.422852, 9.791946, 11.56235, 12.35046,
   10.28481, 8.931541, 12.12578, 17.68799, 19.53316 };
   graph = new TGraph(102,Graph1_fx289,Graph1_fy289);
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
   
   TH1F *Graph_Graph1289 = new TH1F("Graph_Graph1289","Graph",102,0,197.84);
   Graph_Graph1289->SetMinimum(2.596207);
   Graph_Graph1289->SetMaximum(514.5173);
   Graph_Graph1289->SetDirectory(nullptr);
   Graph_Graph1289->SetStats(0);
   Graph_Graph1289->SetLineWidth(2);
   Graph_Graph1289->SetMarkerStyle(20);
   Graph_Graph1289->SetMarkerSize(0.9);
   Graph_Graph1289->GetXaxis()->SetLabelFont(42);
   Graph_Graph1289->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1289->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1289->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1289->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1289->GetXaxis()->SetTitleFont(42);
   Graph_Graph1289->GetYaxis()->SetLabelFont(42);
   Graph_Graph1289->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1289->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1289->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1289->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1289->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1289->GetYaxis()->SetTitleFont(42);
   Graph_Graph1289->GetZaxis()->SetLabelFont(42);
   Graph_Graph1289->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1289->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1289->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1289->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1289->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1289);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx290[102] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 6, 7, 7.5, 8, 8.5, 9, 10, 20, 25, 30, 40, 45,
   50, 55, 60, 70, 75, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160, 170,
   180, 180, 180, 180, 170, 160, 150, 140, 130, 120, 110, 100, 95, 90, 85, 75,
   70, 60, 55, 50, 45, 40, 30, 25, 20, 10, 9, 8.5, 8, 7.5, 7, 6,
   5.6, 5.4, 5.2, 5, 4.8, 4.6, 4.4, 4.2, 4, 3.8, 3.6, 3.4, 3.2, 3, 2.8, 2.6,
   2.4, 2.2, 2, 1.8, 1.6 };
   Double_t Graph2_fy290[102] = { 53.70824, 48.18056, 35.62028, 29.66756, 31.06776, 32.91583, 31.67698, 29.14013, 26.61569, 24.81124, 23.83726, 23.04445, 22.36667, 22.05765, 21.16006, 20.43931, 19.82384,
   19.43789, 18.57752, 18.39267, 17.91324, 17.98837, 18.21375, 18.76269, 19.01237, 19.37762, 19.93784, 20.69537, 60.77042, 70.24114, 78.92262, 93.91792, 98.65328,
   108.9132, 112.8594, 123.5139, 135.7469, 143.6392, 167.316, 172.8405, 180.7328, 182.3113, 199.6742, 219.4049, 230.4541, 252.5524, 254.1308, 277.8076, 304.6413,
   310.9551, 310.9551, 77.85492, 77.85492, 75.46425, 68.4269, 62.23807, 61.8515, 56.4395, 53.73349, 49.46232, 44.89413, 44.26248, 42.32962, 41.21165, 35.17804,
   33.42767, 30.58786, 27.79161, 27.12421, 24.56903, 23.38972, 19.65523, 17.29687, 15.2153, 5.341959, 5.223361, 5.12338, 5.073088, 5.073264, 4.995193, 5.120295,
   5.145316, 5.305274, 5.384651, 5.706123, 6.004742, 6.533608, 7.259846, 8.114016, 8.702612, 9.328115, 9.85899, 10.35283, 11.38401, 12.97559, 14.9304, 15.91372,
   13.9236, 12.51269, 16.06822, 23.24152, 26.44847 };
   graph = new TGraph(102,Graph2_fx290,Graph2_fy290);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2290 = new TH1F("Graph_Graph2290","Graph",102,0,197.84);
   Graph_Graph2290->SetMinimum(4.495673);
   Graph_Graph2290->SetMaximum(341.5511);
   Graph_Graph2290->SetDirectory(nullptr);
   Graph_Graph2290->SetStats(0);
   Graph_Graph2290->SetLineWidth(2);
   Graph_Graph2290->SetMarkerStyle(20);
   Graph_Graph2290->SetMarkerSize(0.9);
   Graph_Graph2290->GetXaxis()->SetLabelFont(42);
   Graph_Graph2290->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2290->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2290->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2290->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2290->GetXaxis()->SetTitleFont(42);
   Graph_Graph2290->GetYaxis()->SetLabelFont(42);
   Graph_Graph2290->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2290->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2290->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2290->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2290->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2290->GetYaxis()->SetTitleFont(42);
   Graph_Graph2290->GetZaxis()->SetLabelFont(42);
   Graph_Graph2290->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2290->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2290->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2290->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2290->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2290);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx291[50] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 6, 7, 7.5, 8, 8.5, 9, 10, 20, 25, 30, 40, 45,
   50, 55, 60, 70, 75, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160, 170,
   180 };
   Double_t Graph0_fy291[50] = { 37.59766, 32.8125, 23.33984, 18.89648, 20.41016, 22.26562, 21.14258, 18.84766, 16.8457, 15.52734, 14.84375, 14.20898, 13.57422, 13.08594, 12.20703, 11.47461, 10.79102,
   10.40039, 9.814453, 9.716797, 9.423828, 9.423828, 9.423828, 9.667969, 9.716797, 9.863281, 10.10742, 10.44922, 30.07812, 34.76562, 39.0625, 46.48438, 48.82812,
   53.90625, 55.85938, 61.13281, 67.1875, 71.09375, 82.8125, 85.54688, 89.45312, 90.23438, 98.82812, 108.5938, 114.0625, 125, 125.7812, 137.5, 150.7812,
   153.9062 };
   graph = new TGraph(50,Graph0_fx291,Graph0_fy291);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0291 = new TH1F("Graph_Graph0291","",100,0,197.84);
   Graph_Graph0291->SetMinimum(0.2);
   Graph_Graph0291->SetMaximum(100000);
   Graph_Graph0291->SetDirectory(nullptr);
   Graph_Graph0291->SetStats(0);
   Graph_Graph0291->SetLineWidth(2);
   Graph_Graph0291->SetMarkerStyle(20);
   Graph_Graph0291->SetMarkerSize(0.9);
   Graph_Graph0291->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0291->GetXaxis()->SetRange(1,91);
   Graph_Graph0291->GetXaxis()->SetLabelFont(42);
   Graph_Graph0291->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0291->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0291->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0291->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0291->GetXaxis()->SetTitleFont(42);
   Graph_Graph0291->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0291->GetYaxis()->SetLabelFont(42);
   Graph_Graph0291->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0291->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0291->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0291->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0291->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0291->GetYaxis()->SetTitleFont(42);
   Graph_Graph0291->GetZaxis()->SetLabelFont(42);
   Graph_Graph0291->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0291->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0291->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0291->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0291->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0291);
   
   graph->Draw("l");
   
   Double_t Graph_fx292[50] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 6, 7, 7.5, 8, 8.5, 9, 10, 20, 25, 30, 40, 45,
   50, 55, 60, 70, 75, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160, 170,
   180 };
   Double_t Graph_fy292[50] = { 1.887622e-175, 2.46013e-155, 2.994253e-139, 4.280831e-126, 3.887371e-115, 7.211899e-106, 6.296091e-98, 4.76887e-91, 4.958236e-85, 1.004958e-79, 5.216141e-75, 8.599018e-71, 5.348722e-67, 1.443111e-63, 1.892907e-60, 1.326326e-57, 5.369711e-55,
   1.341719e-52, 2.187783e-50, 2.441236e-48, 1.941598e-46, 5.093514e-43, 3.427502e-36, 3.180533e-33, 4.417055e-31, 7.955453e-29, 4.085948e-27, 5.991012e-24, 7.820277e-10, 4.62753e-07, 3.112975e-05, 0.005519139, 0.0300762,
   0.1149696, 0.3400652, 0.8307406, 3.29999, 5.671592, 13.61826, 19.48077, 26.72745, 35.39848, 56.9779, 83.82914, 115.189, 150.1034, 187.5696, 226.6316, 266.4356,
   306.2542 };
   graph = new TGraph(50,Graph_fx292,Graph_fy292);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph292 = new TH1F("Graph_Graph292","",100,0,197.84);
   Graph_Graph292->SetMinimum(1.69886e-175);
   Graph_Graph292->SetMaximum(336.8796);
   Graph_Graph292->SetDirectory(nullptr);
   Graph_Graph292->SetStats(0);
   Graph_Graph292->SetLineWidth(2);
   Graph_Graph292->SetMarkerStyle(20);
   Graph_Graph292->SetMarkerSize(0.9);
   Graph_Graph292->GetXaxis()->SetLabelFont(42);
   Graph_Graph292->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph292->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph292->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph292->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph292->GetXaxis()->SetTitleFont(42);
   Graph_Graph292->GetYaxis()->SetLabelFont(42);
   Graph_Graph292->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph292->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph292->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph292->GetYaxis()->SetTickLength(0.02);
   Graph_Graph292->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph292->GetYaxis()->SetTitleFont(42);
   Graph_Graph292->GetZaxis()->SetLabelFont(42);
   Graph_Graph292->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph292->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph292->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph292->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph292->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph292);
   
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
   
   Double_t Graph_fx294[50] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 6, 7, 7.5, 8, 8.5, 9, 10, 20, 25, 30, 40, 45,
   50, 55, 60, 70, 75, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160, 170,
   180 };
   Double_t Graph_fy294[50] = { 2.076384e-175, 2.706143e-155, 3.293679e-139, 4.708914e-126, 4.276108e-115, 7.933089e-106, 6.9257e-98, 5.245757e-91, 5.454059e-85, 1.105454e-79, 5.737755e-75, 9.45892e-71, 5.883595e-67, 1.587422e-63, 2.082197e-60, 1.458958e-57, 5.906682e-55,
   1.475891e-52, 2.406561e-50, 2.68536e-48, 2.135758e-46, 5.602866e-43, 3.770252e-36, 3.498586e-33, 4.858761e-31, 8.750998e-29, 4.494543e-27, 6.590113e-24, 8.602305e-10, 5.090284e-07, 3.424272e-05, 0.006071053, 0.03308382,
   0.1264665, 0.3740718, 0.9138146, 3.629989, 6.238751, 14.98009, 21.42884, 29.4002, 38.93833, 62.67569, 92.21205, 126.708, 165.1138, 206.3265, 249.2948, 293.0791,
   336.8796 };
   graph = new TGraph(50,Graph_fx294,Graph_fy294);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph294 = new TH1F("Graph_Graph294","",100,0,197.84);
   Graph_Graph294->SetMinimum(1.868746e-175);
   Graph_Graph294->SetMaximum(370.5675);
   Graph_Graph294->SetDirectory(nullptr);
   Graph_Graph294->SetStats(0);
   Graph_Graph294->SetLineWidth(2);
   Graph_Graph294->SetMarkerStyle(20);
   Graph_Graph294->SetMarkerSize(0.9);
   Graph_Graph294->GetXaxis()->SetLabelFont(42);
   Graph_Graph294->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph294->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph294->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph294->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph294->GetXaxis()->SetTitleFont(42);
   Graph_Graph294->GetYaxis()->SetLabelFont(42);
   Graph_Graph294->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph294->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph294->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph294->GetYaxis()->SetTickLength(0.02);
   Graph_Graph294->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph294->GetYaxis()->SetTitleFont(42);
   Graph_Graph294->GetZaxis()->SetLabelFont(42);
   Graph_Graph294->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph294->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph294->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph294->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph294->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph294);
   
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
   line = new TLine(129.6342,0,129.6342,113.8577);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(129.6292,0,"  129.63 TeV");

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
      tex = new TLatex(0.4325,0.95,"Data Private Work");
   tex->SetNDC();
   tex->SetTextAlign(23);
   tex->SetTextFont(52);
   tex->SetTextSize(0.0448);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TPaveText *pt = new TPaveText(0.2,0.68,0.43,0.88,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextAlign(12);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("m_{A'} = 0.245 GeV");
   pt_LaTex = pt->AddText("#varepsilon = 2.34e-07");
   pt_LaTex = pt->AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
