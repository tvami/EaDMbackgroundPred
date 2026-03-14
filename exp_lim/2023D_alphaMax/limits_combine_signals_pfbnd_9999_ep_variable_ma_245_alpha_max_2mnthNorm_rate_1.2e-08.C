#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_2mnthNorm_rate_1.2e-08()
{
//=========Macro generated from canvas: climits/climits
//=========  (Wed Mar 11 03:47:19 2026) by ROOT version 6.30/07
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
   
   Double_t Graph0_fx57[50] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 6, 7, 7.5, 8, 8.5, 9, 10, 20, 25, 30, 40, 45,
   50, 55, 60, 70, 75, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160, 170,
   180 };
   Double_t Graph0_fy57[50] = { 37.59766, 32.8125, 23.33984, 18.89648, 20.41016, 22.26562, 21.14258, 18.84766, 16.8457, 15.52734, 14.84375, 14.20898, 13.57422, 13.08594, 12.20703, 11.47461, 10.79102,
   10.40039, 9.814453, 9.716797, 9.423828, 9.423828, 9.423828, 9.667969, 9.716797, 9.863281, 10.10742, 10.44922, 30.07812, 34.76562, 39.0625, 46.48438, 48.82812,
   53.90625, 55.85938, 61.13281, 67.1875, 71.09375, 82.8125, 85.54688, 89.45312, 90.23438, 98.82812, 108.5938, 114.0625, 125, 125.7812, 137.5, 150.7812,
   153.9062 };
   TGraph *graph = new TGraph(50,Graph0_fx57,Graph0_fy57);
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
   
   Double_t Graph1_fx58[102] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 6, 7, 7.5, 8, 8.5, 9, 10, 20, 25, 30, 40, 45,
   50, 55, 60, 70, 75, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160, 170,
   180, 180, 180, 180, 170, 160, 150, 140, 130, 120, 110, 100, 95, 90, 85, 75,
   70, 60, 55, 50, 45, 40, 30, 25, 20, 10, 9, 8.5, 8, 7.5, 7, 6,
   5.6, 5.4, 5.2, 5, 4.8, 4.6, 4.4, 4.2, 4, 3.8, 3.6, 3.4, 3.2, 3, 2.8, 2.6,
   2.4, 2.2, 2, 1.8, 1.6 };
   Double_t Graph1_fy58[102] = { 74.54662, 68.53737, 53.50381, 45.35591, 46.50549, 48.47651, 47.21983, 44.54715, 41.61218, 39.16454, 37.98207, 36.98527, 36.18023, 36.19005, 35.18717, 34.61032, 32.8137,
   31.62588, 29.84415, 29.54719, 28.65632, 28.65632, 28.65632, 29.39872, 29.5472, 29.99264, 30.73503, 31.77438, 91.46295, 105.7169, 118.7831, 141.3518, 148.4788,
   163.9206, 169.8598, 185.8955, 204.3068, 216.1852, 251.8201, 260.1349, 272.0132, 274.3889, 300.5211, 330.2169, 346.8465, 380.1058, 382.4814, 418.1163, 458.5026,
   468.0052, 468.0052, 43.28613, 43.28613, 41.22925, 37.59766, 34.39331, 34.17969, 31.18896, 29.6936, 27.02332, 25.02594, 24.45984, 23.39172, 22.64404, 19.4397,
   18.63403, 16.9548, 15.49225, 14.95056, 13.54218, 12.89215, 10.83374, 9.642029, 8.459473, 3.020477, 2.921677, 2.889633, 2.884674, 2.907944, 2.908134, 3.092194,
   3.129005, 3.22628, 3.297043, 3.493881, 3.667259, 4.034042, 4.577637, 5.418396, 6.150818, 6.771469, 7.247925, 7.642365, 8.422852, 9.791946, 11.56235, 12.35046,
   10.28481, 8.931541, 12.12578, 17.68799, 19.53316 };
   graph = new TGraph(102,Graph1_fx58,Graph1_fy58);
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
   
   TH1F *Graph_Graph158 = new TH1F("Graph_Graph158","Graph",102,0,197.84);
   Graph_Graph158->SetMinimum(2.596207);
   Graph_Graph158->SetMaximum(514.5173);
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
   
   Double_t Graph2_fx59[102] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 6, 7, 7.5, 8, 8.5, 9, 10, 20, 25, 30, 40, 45,
   50, 55, 60, 70, 75, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160, 170,
   180, 180, 180, 180, 170, 160, 150, 140, 130, 120, 110, 100, 95, 90, 85, 75,
   70, 60, 55, 50, 45, 40, 30, 25, 20, 10, 9, 8.5, 8, 7.5, 7, 6,
   5.6, 5.4, 5.2, 5, 4.8, 4.6, 4.4, 4.2, 4, 3.8, 3.6, 3.4, 3.2, 3, 2.8, 2.6,
   2.4, 2.2, 2, 1.8, 1.6 };
   Double_t Graph2_fy59[102] = { 53.70824, 48.18056, 35.62028, 29.66756, 31.06776, 32.91583, 31.67698, 29.14013, 26.61569, 24.81124, 23.83726, 23.04445, 22.36667, 22.05765, 21.16006, 20.43931, 19.82384,
   19.43789, 18.57752, 18.39267, 17.91324, 17.98837, 18.21375, 18.76269, 19.01237, 19.37762, 19.93784, 20.69537, 60.77042, 70.24114, 78.92262, 93.91792, 98.65328,
   108.9132, 112.8594, 123.5139, 135.7469, 143.6392, 167.316, 172.8405, 180.7328, 182.3113, 199.6742, 219.4049, 230.4541, 252.5524, 254.1308, 277.8076, 304.6413,
   310.9551, 310.9551, 77.85492, 77.85492, 75.46425, 68.4269, 62.23807, 61.8515, 56.4395, 53.73349, 49.46232, 44.89413, 44.26248, 42.32962, 41.21165, 35.17804,
   33.42767, 30.58786, 27.79161, 27.12421, 24.56903, 23.38972, 19.65523, 17.29687, 15.2153, 5.341959, 5.223361, 5.12338, 5.073088, 5.073264, 4.995193, 5.120295,
   5.145316, 5.305274, 5.384651, 5.706123, 6.004742, 6.533608, 7.259846, 8.114016, 8.702612, 9.328115, 9.85899, 10.35283, 11.38401, 12.97559, 14.9304, 15.91372,
   13.9236, 12.51269, 16.06822, 23.24152, 26.44847 };
   graph = new TGraph(102,Graph2_fx59,Graph2_fy59);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph259 = new TH1F("Graph_Graph259","Graph",102,0,197.84);
   Graph_Graph259->SetMinimum(4.495673);
   Graph_Graph259->SetMaximum(341.5511);
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
   
   Double_t Graph0_fx60[50] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 6, 7, 7.5, 8, 8.5, 9, 10, 20, 25, 30, 40, 45,
   50, 55, 60, 70, 75, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160, 170,
   180 };
   Double_t Graph0_fy60[50] = { 37.59766, 32.8125, 23.33984, 18.89648, 20.41016, 22.26562, 21.14258, 18.84766, 16.8457, 15.52734, 14.84375, 14.20898, 13.57422, 13.08594, 12.20703, 11.47461, 10.79102,
   10.40039, 9.814453, 9.716797, 9.423828, 9.423828, 9.423828, 9.667969, 9.716797, 9.863281, 10.10742, 10.44922, 30.07812, 34.76562, 39.0625, 46.48438, 48.82812,
   53.90625, 55.85938, 61.13281, 67.1875, 71.09375, 82.8125, 85.54688, 89.45312, 90.23438, 98.82812, 108.5938, 114.0625, 125, 125.7812, 137.5, 150.7812,
   153.9062 };
   graph = new TGraph(50,Graph0_fx60,Graph0_fy60);
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
   
   Double_t Graph_fx61[50] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 6, 7, 7.5, 8, 8.5, 9, 10, 20, 25, 30, 40, 45,
   50, 55, 60, 70, 75, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160, 170,
   180 };
   Double_t Graph_fy61[50] = { 20.65621, 19.80836, 18.86174, 17.8935, 16.94536, 16.03892, 15.18427, 14.38498, 13.64097, 12.95017, 12.30951, 11.71549, 11.16452, 10.65306, 10.1778, 9.735626, 9.32369,
   8.939387, 8.580353, 8.244444, 7.929722, 7.357, 6.191985, 5.721935, 5.307154, 4.942572, 4.617108, 4.06683, 1.69446, 1.264646, 0.9931215, 0.6756268, 0.5764054,
   0.4998316, 0.4392154, 0.3902201, 0.3162813, 0.287841, 0.2425463, 0.2242794, 0.2082561, 0.1941046, 0.1702923, 0.1510942, 0.1353376, 0.1222086, 0.1111263, 0.101666, 0.09351029,
   0.08641805 };
   graph = new TGraph(50,Graph_fx61,Graph_fy61);
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
   
   Double_t Graph_fx63[50] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 6, 7, 7.5, 8, 8.5, 9, 10, 20, 25, 30, 40, 45,
   50, 55, 60, 70, 75, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160, 170,
   180 };
   Double_t Graph_fy63[50] = { 22.72183, 21.7892, 20.74791, 19.68285, 18.6399, 17.64281, 16.7027, 15.82348, 15.00506, 14.24518, 13.54046, 12.88704, 12.28097, 11.71837, 11.19558, 10.70919, 10.25606,
   9.833326, 9.438388, 9.068889, 8.722695, 8.0927, 6.811183, 6.294128, 5.837869, 5.436829, 5.078819, 4.473513, 1.863906, 1.391111, 1.092434, 0.7431895, 0.6340459,
   0.5498147, 0.483137, 0.4292421, 0.3479095, 0.3166251, 0.2668009, 0.2467073, 0.2290817, 0.2135151, 0.1873215, 0.1662037, 0.1488714, 0.1344295, 0.122239, 0.1118326, 0.1028613,
   0.09505985 };
   graph = new TGraph(50,Graph_fx63,Graph_fy63);
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
   pt_LaTex = pt->AddText("#varepsilon = 1.2e-08");
   pt_LaTex = pt->AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
