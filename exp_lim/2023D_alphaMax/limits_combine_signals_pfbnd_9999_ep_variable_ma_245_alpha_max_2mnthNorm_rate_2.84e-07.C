#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_2mnthNorm_rate_2.84e-07()
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
   
   Double_t Graph0_fx323[50] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 6, 7, 7.5, 8, 8.5, 9, 10, 20, 25, 30, 40, 45,
   50, 55, 60, 70, 75, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160, 170,
   180 };
   Double_t Graph0_fy323[50] = { 37.59766, 32.8125, 23.33984, 18.89648, 20.41016, 22.26562, 21.14258, 18.84766, 16.8457, 15.52734, 14.84375, 14.20898, 13.57422, 13.08594, 12.20703, 11.47461, 10.79102,
   10.40039, 9.814453, 9.716797, 9.423828, 9.423828, 9.423828, 9.667969, 9.716797, 9.863281, 10.10742, 10.44922, 30.07812, 34.76562, 39.0625, 46.48438, 48.82812,
   53.90625, 55.85938, 61.13281, 67.1875, 71.09375, 82.8125, 85.54688, 89.45312, 90.23438, 98.82812, 108.5938, 114.0625, 125, 125.7812, 137.5, 150.7812,
   153.9062 };
   TGraph *graph = new TGraph(50,Graph0_fx323,Graph0_fy323);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0323 = new TH1F("Graph_Graph0323","",100,0,197.84);
   Graph_Graph0323->SetMinimum(0.2);
   Graph_Graph0323->SetMaximum(100000);
   Graph_Graph0323->SetDirectory(nullptr);
   Graph_Graph0323->SetStats(0);
   Graph_Graph0323->SetLineWidth(2);
   Graph_Graph0323->SetMarkerStyle(20);
   Graph_Graph0323->SetMarkerSize(0.9);
   Graph_Graph0323->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0323->GetXaxis()->SetRange(1,91);
   Graph_Graph0323->GetXaxis()->SetLabelFont(42);
   Graph_Graph0323->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0323->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0323->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0323->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0323->GetXaxis()->SetTitleFont(42);
   Graph_Graph0323->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0323->GetYaxis()->SetLabelFont(42);
   Graph_Graph0323->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0323->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0323->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0323->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0323->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0323->GetYaxis()->SetTitleFont(42);
   Graph_Graph0323->GetZaxis()->SetLabelFont(42);
   Graph_Graph0323->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0323->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0323->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0323->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0323->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0323);
   
   graph->Draw("al");
   
   Double_t Graph1_fx324[102] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 6, 7, 7.5, 8, 8.5, 9, 10, 20, 25, 30, 40, 45,
   50, 55, 60, 70, 75, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160, 170,
   180, 180, 180, 180, 170, 160, 150, 140, 130, 120, 110, 100, 95, 90, 85, 75,
   70, 60, 55, 50, 45, 40, 30, 25, 20, 10, 9, 8.5, 8, 7.5, 7, 6,
   5.6, 5.4, 5.2, 5, 4.8, 4.6, 4.4, 4.2, 4, 3.8, 3.6, 3.4, 3.2, 3, 2.8, 2.6,
   2.4, 2.2, 2, 1.8, 1.6 };
   Double_t Graph1_fy324[102] = { 74.54662, 68.53737, 53.50381, 45.35591, 46.50549, 48.47651, 47.21983, 44.54715, 41.61218, 39.16454, 37.98207, 36.98527, 36.18023, 36.19005, 35.18717, 34.61032, 32.8137,
   31.62588, 29.84415, 29.54719, 28.65632, 28.65632, 28.65632, 29.39872, 29.5472, 29.99264, 30.73503, 31.77438, 91.46295, 105.7169, 118.7831, 141.3518, 148.4788,
   163.9206, 169.8598, 185.8955, 204.3068, 216.1852, 251.8201, 260.1349, 272.0132, 274.3889, 300.5211, 330.2169, 346.8465, 380.1058, 382.4814, 418.1163, 458.5026,
   468.0052, 468.0052, 43.28613, 43.28613, 41.22925, 37.59766, 34.39331, 34.17969, 31.18896, 29.6936, 27.02332, 25.02594, 24.45984, 23.39172, 22.64404, 19.4397,
   18.63403, 16.9548, 15.49225, 14.95056, 13.54218, 12.89215, 10.83374, 9.642029, 8.459473, 3.020477, 2.921677, 2.889633, 2.884674, 2.907944, 2.908134, 3.092194,
   3.129005, 3.22628, 3.297043, 3.493881, 3.667259, 4.034042, 4.577637, 5.418396, 6.150818, 6.771469, 7.247925, 7.642365, 8.422852, 9.791946, 11.56235, 12.35046,
   10.28481, 8.931541, 12.12578, 17.68799, 19.53316 };
   graph = new TGraph(102,Graph1_fx324,Graph1_fy324);
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
   
   TH1F *Graph_Graph1324 = new TH1F("Graph_Graph1324","Graph",102,0,197.84);
   Graph_Graph1324->SetMinimum(2.596207);
   Graph_Graph1324->SetMaximum(514.5173);
   Graph_Graph1324->SetDirectory(nullptr);
   Graph_Graph1324->SetStats(0);
   Graph_Graph1324->SetLineWidth(2);
   Graph_Graph1324->SetMarkerStyle(20);
   Graph_Graph1324->SetMarkerSize(0.9);
   Graph_Graph1324->GetXaxis()->SetLabelFont(42);
   Graph_Graph1324->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1324->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1324->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1324->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1324->GetXaxis()->SetTitleFont(42);
   Graph_Graph1324->GetYaxis()->SetLabelFont(42);
   Graph_Graph1324->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1324->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1324->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1324->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1324->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1324->GetYaxis()->SetTitleFont(42);
   Graph_Graph1324->GetZaxis()->SetLabelFont(42);
   Graph_Graph1324->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1324->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1324->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1324->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1324->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1324);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx325[102] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 6, 7, 7.5, 8, 8.5, 9, 10, 20, 25, 30, 40, 45,
   50, 55, 60, 70, 75, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160, 170,
   180, 180, 180, 180, 170, 160, 150, 140, 130, 120, 110, 100, 95, 90, 85, 75,
   70, 60, 55, 50, 45, 40, 30, 25, 20, 10, 9, 8.5, 8, 7.5, 7, 6,
   5.6, 5.4, 5.2, 5, 4.8, 4.6, 4.4, 4.2, 4, 3.8, 3.6, 3.4, 3.2, 3, 2.8, 2.6,
   2.4, 2.2, 2, 1.8, 1.6 };
   Double_t Graph2_fy325[102] = { 53.70824, 48.18056, 35.62028, 29.66756, 31.06776, 32.91583, 31.67698, 29.14013, 26.61569, 24.81124, 23.83726, 23.04445, 22.36667, 22.05765, 21.16006, 20.43931, 19.82384,
   19.43789, 18.57752, 18.39267, 17.91324, 17.98837, 18.21375, 18.76269, 19.01237, 19.37762, 19.93784, 20.69537, 60.77042, 70.24114, 78.92262, 93.91792, 98.65328,
   108.9132, 112.8594, 123.5139, 135.7469, 143.6392, 167.316, 172.8405, 180.7328, 182.3113, 199.6742, 219.4049, 230.4541, 252.5524, 254.1308, 277.8076, 304.6413,
   310.9551, 310.9551, 77.85492, 77.85492, 75.46425, 68.4269, 62.23807, 61.8515, 56.4395, 53.73349, 49.46232, 44.89413, 44.26248, 42.32962, 41.21165, 35.17804,
   33.42767, 30.58786, 27.79161, 27.12421, 24.56903, 23.38972, 19.65523, 17.29687, 15.2153, 5.341959, 5.223361, 5.12338, 5.073088, 5.073264, 4.995193, 5.120295,
   5.145316, 5.305274, 5.384651, 5.706123, 6.004742, 6.533608, 7.259846, 8.114016, 8.702612, 9.328115, 9.85899, 10.35283, 11.38401, 12.97559, 14.9304, 15.91372,
   13.9236, 12.51269, 16.06822, 23.24152, 26.44847 };
   graph = new TGraph(102,Graph2_fx325,Graph2_fy325);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2325 = new TH1F("Graph_Graph2325","Graph",102,0,197.84);
   Graph_Graph2325->SetMinimum(4.495673);
   Graph_Graph2325->SetMaximum(341.5511);
   Graph_Graph2325->SetDirectory(nullptr);
   Graph_Graph2325->SetStats(0);
   Graph_Graph2325->SetLineWidth(2);
   Graph_Graph2325->SetMarkerStyle(20);
   Graph_Graph2325->SetMarkerSize(0.9);
   Graph_Graph2325->GetXaxis()->SetLabelFont(42);
   Graph_Graph2325->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2325->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2325->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2325->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2325->GetXaxis()->SetTitleFont(42);
   Graph_Graph2325->GetYaxis()->SetLabelFont(42);
   Graph_Graph2325->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2325->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2325->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2325->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2325->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2325->GetYaxis()->SetTitleFont(42);
   Graph_Graph2325->GetZaxis()->SetLabelFont(42);
   Graph_Graph2325->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2325->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2325->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2325->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2325->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2325);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx326[50] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 6, 7, 7.5, 8, 8.5, 9, 10, 20, 25, 30, 40, 45,
   50, 55, 60, 70, 75, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160, 170,
   180 };
   Double_t Graph0_fy326[50] = { 37.59766, 32.8125, 23.33984, 18.89648, 20.41016, 22.26562, 21.14258, 18.84766, 16.8457, 15.52734, 14.84375, 14.20898, 13.57422, 13.08594, 12.20703, 11.47461, 10.79102,
   10.40039, 9.814453, 9.716797, 9.423828, 9.423828, 9.423828, 9.667969, 9.716797, 9.863281, 10.10742, 10.44922, 30.07812, 34.76562, 39.0625, 46.48438, 48.82812,
   53.90625, 55.85938, 61.13281, 67.1875, 71.09375, 82.8125, 85.54688, 89.45312, 90.23438, 98.82812, 108.5938, 114.0625, 125, 125.7812, 137.5, 150.7812,
   153.9062 };
   graph = new TGraph(50,Graph0_fx326,Graph0_fy326);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0326 = new TH1F("Graph_Graph0326","",100,0,197.84);
   Graph_Graph0326->SetMinimum(0.2);
   Graph_Graph0326->SetMaximum(100000);
   Graph_Graph0326->SetDirectory(nullptr);
   Graph_Graph0326->SetStats(0);
   Graph_Graph0326->SetLineWidth(2);
   Graph_Graph0326->SetMarkerStyle(20);
   Graph_Graph0326->SetMarkerSize(0.9);
   Graph_Graph0326->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0326->GetXaxis()->SetRange(1,91);
   Graph_Graph0326->GetXaxis()->SetLabelFont(42);
   Graph_Graph0326->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0326->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0326->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0326->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0326->GetXaxis()->SetTitleFont(42);
   Graph_Graph0326->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0326->GetYaxis()->SetLabelFont(42);
   Graph_Graph0326->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0326->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0326->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0326->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0326->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0326->GetYaxis()->SetTitleFont(42);
   Graph_Graph0326->GetZaxis()->SetLabelFont(42);
   Graph_Graph0326->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0326->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0326->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0326->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0326->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0326);
   
   graph->Draw("l");
   
   Double_t Graph_fx327[50] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 6, 7, 7.5, 8, 8.5, 9, 10, 20, 25, 30, 40, 45,
   50, 55, 60, 70, 75, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160, 170,
   180 };
   Double_t Graph_fy327[50] = { 4.761724e-261, 2.193222e-231, 1.161543e-207, 2.9516e-188, 4.328511e-172, 2.049422e-158, 1.071508e-146, 1.524183e-136, 1.159936e-127, 7.920302e-120, 7.254351e-113, 1.224232e-106, 4.906974e-101, 5.737366e-96, 2.315191e-91, 3.704737e-87, 2.639289e-83,
   9.225548e-80, 1.717874e-76, 1.827716e-73, 1.179829e-70, 1.341303e-65, 1.695064e-55, 5.259071e-51, 6.231836e-48, 1.630704e-44, 4.68203e-42, 2.314025e-37, 2.263917e-16, 3.176449e-12, 1.763617e-09, 4.374167e-06, 5.743527e-05,
   0.0004436946, 0.002333754, 0.009210532, 0.07775028, 0.1806518, 0.7127516, 1.253975, 2.070366, 3.239218, 6.952769, 13.00198, 21.88587, 33.93831, 49.31012, 67.98044, 89.78534,
   114.4533 };
   graph = new TGraph(50,Graph_fx327,Graph_fy327);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph327 = new TH1F("Graph_Graph327","",100,0,197.84);
   Graph_Graph327->SetMinimum(4.285552e-261);
   Graph_Graph327->SetMaximum(125.8986);
   Graph_Graph327->SetDirectory(nullptr);
   Graph_Graph327->SetStats(0);
   Graph_Graph327->SetLineWidth(2);
   Graph_Graph327->SetMarkerStyle(20);
   Graph_Graph327->SetMarkerSize(0.9);
   Graph_Graph327->GetXaxis()->SetLabelFont(42);
   Graph_Graph327->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph327->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph327->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph327->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph327->GetXaxis()->SetTitleFont(42);
   Graph_Graph327->GetYaxis()->SetLabelFont(42);
   Graph_Graph327->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph327->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph327->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph327->GetYaxis()->SetTickLength(0.02);
   Graph_Graph327->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph327->GetYaxis()->SetTitleFont(42);
   Graph_Graph327->GetZaxis()->SetLabelFont(42);
   Graph_Graph327->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph327->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph327->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph327->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph327->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph327);
   
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
   
   Double_t Graph_fx329[50] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 6, 7, 7.5, 8, 8.5, 9, 10, 20, 25, 30, 40, 45,
   50, 55, 60, 70, 75, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160, 170,
   180 };
   Double_t Graph_fy329[50] = { 5.237896e-261, 2.412545e-231, 1.277697e-207, 3.24676e-188, 4.761362e-172, 2.254364e-158, 1.178658e-146, 1.676601e-136, 1.275929e-127, 8.712332e-120, 7.979786e-113, 1.346655e-106, 5.397672e-101, 6.311103e-96, 2.54671e-91, 4.075211e-87, 2.903218e-83,
   1.01481e-79, 1.889662e-76, 2.010487e-73, 1.297812e-70, 1.475433e-65, 1.864571e-55, 5.784978e-51, 6.85502e-48, 1.793774e-44, 5.150233e-42, 2.545428e-37, 2.490309e-16, 3.494094e-12, 1.939979e-09, 4.811583e-06, 6.31788e-05,
   0.000488064, 0.00256713, 0.01013158, 0.0855253, 0.198717, 0.7840268, 1.379372, 2.277402, 3.56314, 7.648046, 14.30218, 24.07446, 37.33214, 54.24113, 74.77848, 98.76387,
   125.8986 };
   graph = new TGraph(50,Graph_fx329,Graph_fy329);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph329 = new TH1F("Graph_Graph329","",100,0,197.84);
   Graph_Graph329->SetMinimum(4.714107e-261);
   Graph_Graph329->SetMaximum(138.4885);
   Graph_Graph329->SetDirectory(nullptr);
   Graph_Graph329->SetStats(0);
   Graph_Graph329->SetLineWidth(2);
   Graph_Graph329->SetMarkerStyle(20);
   Graph_Graph329->SetMarkerSize(0.9);
   Graph_Graph329->GetXaxis()->SetLabelFont(42);
   Graph_Graph329->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph329->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph329->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph329->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph329->GetXaxis()->SetTitleFont(42);
   Graph_Graph329->GetYaxis()->SetLabelFont(42);
   Graph_Graph329->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph329->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph329->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph329->GetYaxis()->SetTickLength(0.02);
   Graph_Graph329->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph329->GetYaxis()->SetTitleFont(42);
   Graph_Graph329->GetZaxis()->SetLabelFont(42);
   Graph_Graph329->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph329->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph329->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph329->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph329->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph329);
   
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
   pt_LaTex = pt->AddText("#varepsilon = 2.84e-07");
   pt_LaTex = pt->AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
