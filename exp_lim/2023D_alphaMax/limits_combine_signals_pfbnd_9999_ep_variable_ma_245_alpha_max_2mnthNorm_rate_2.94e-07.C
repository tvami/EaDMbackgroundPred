#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_2mnthNorm_rate_2.94e-07()
{
//=========Macro generated from canvas: climits/climits
//=========  (Wed Mar 11 03:47:24 2026) by ROOT version 6.30/07
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
   
   Double_t Graph0_fx330[50] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 6, 7, 7.5, 8, 8.5, 9, 10, 20, 25, 30, 40, 45,
   50, 55, 60, 70, 75, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160, 170,
   180 };
   Double_t Graph0_fy330[50] = { 37.59766, 32.8125, 23.33984, 18.89648, 20.41016, 22.26562, 21.14258, 18.84766, 16.8457, 15.52734, 14.84375, 14.20898, 13.57422, 13.08594, 12.20703, 11.47461, 10.79102,
   10.40039, 9.814453, 9.716797, 9.423828, 9.423828, 9.423828, 9.667969, 9.716797, 9.863281, 10.10742, 10.44922, 30.07812, 34.76562, 39.0625, 46.48438, 48.82812,
   53.90625, 55.85938, 61.13281, 67.1875, 71.09375, 82.8125, 85.54688, 89.45312, 90.23438, 98.82812, 108.5938, 114.0625, 125, 125.7812, 137.5, 150.7812,
   153.9062 };
   TGraph *graph = new TGraph(50,Graph0_fx330,Graph0_fy330);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0330 = new TH1F("Graph_Graph0330","",100,0,197.84);
   Graph_Graph0330->SetMinimum(0.2);
   Graph_Graph0330->SetMaximum(100000);
   Graph_Graph0330->SetDirectory(nullptr);
   Graph_Graph0330->SetStats(0);
   Graph_Graph0330->SetLineWidth(2);
   Graph_Graph0330->SetMarkerStyle(20);
   Graph_Graph0330->SetMarkerSize(0.9);
   Graph_Graph0330->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0330->GetXaxis()->SetRange(1,91);
   Graph_Graph0330->GetXaxis()->SetLabelFont(42);
   Graph_Graph0330->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0330->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0330->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0330->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0330->GetXaxis()->SetTitleFont(42);
   Graph_Graph0330->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0330->GetYaxis()->SetLabelFont(42);
   Graph_Graph0330->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0330->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0330->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0330->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0330->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0330->GetYaxis()->SetTitleFont(42);
   Graph_Graph0330->GetZaxis()->SetLabelFont(42);
   Graph_Graph0330->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0330->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0330->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0330->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0330->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0330);
   
   graph->Draw("al");
   
   Double_t Graph1_fx331[102] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 6, 7, 7.5, 8, 8.5, 9, 10, 20, 25, 30, 40, 45,
   50, 55, 60, 70, 75, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160, 170,
   180, 180, 180, 180, 170, 160, 150, 140, 130, 120, 110, 100, 95, 90, 85, 75,
   70, 60, 55, 50, 45, 40, 30, 25, 20, 10, 9, 8.5, 8, 7.5, 7, 6,
   5.6, 5.4, 5.2, 5, 4.8, 4.6, 4.4, 4.2, 4, 3.8, 3.6, 3.4, 3.2, 3, 2.8, 2.6,
   2.4, 2.2, 2, 1.8, 1.6 };
   Double_t Graph1_fy331[102] = { 74.54662, 68.53737, 53.50381, 45.35591, 46.50549, 48.47651, 47.21983, 44.54715, 41.61218, 39.16454, 37.98207, 36.98527, 36.18023, 36.19005, 35.18717, 34.61032, 32.8137,
   31.62588, 29.84415, 29.54719, 28.65632, 28.65632, 28.65632, 29.39872, 29.5472, 29.99264, 30.73503, 31.77438, 91.46295, 105.7169, 118.7831, 141.3518, 148.4788,
   163.9206, 169.8598, 185.8955, 204.3068, 216.1852, 251.8201, 260.1349, 272.0132, 274.3889, 300.5211, 330.2169, 346.8465, 380.1058, 382.4814, 418.1163, 458.5026,
   468.0052, 468.0052, 43.28613, 43.28613, 41.22925, 37.59766, 34.39331, 34.17969, 31.18896, 29.6936, 27.02332, 25.02594, 24.45984, 23.39172, 22.64404, 19.4397,
   18.63403, 16.9548, 15.49225, 14.95056, 13.54218, 12.89215, 10.83374, 9.642029, 8.459473, 3.020477, 2.921677, 2.889633, 2.884674, 2.907944, 2.908134, 3.092194,
   3.129005, 3.22628, 3.297043, 3.493881, 3.667259, 4.034042, 4.577637, 5.418396, 6.150818, 6.771469, 7.247925, 7.642365, 8.422852, 9.791946, 11.56235, 12.35046,
   10.28481, 8.931541, 12.12578, 17.68799, 19.53316 };
   graph = new TGraph(102,Graph1_fx331,Graph1_fy331);
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
   
   TH1F *Graph_Graph1331 = new TH1F("Graph_Graph1331","Graph",102,0,197.84);
   Graph_Graph1331->SetMinimum(2.596207);
   Graph_Graph1331->SetMaximum(514.5173);
   Graph_Graph1331->SetDirectory(nullptr);
   Graph_Graph1331->SetStats(0);
   Graph_Graph1331->SetLineWidth(2);
   Graph_Graph1331->SetMarkerStyle(20);
   Graph_Graph1331->SetMarkerSize(0.9);
   Graph_Graph1331->GetXaxis()->SetLabelFont(42);
   Graph_Graph1331->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1331->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1331->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1331->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1331->GetXaxis()->SetTitleFont(42);
   Graph_Graph1331->GetYaxis()->SetLabelFont(42);
   Graph_Graph1331->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1331->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1331->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1331->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1331->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1331->GetYaxis()->SetTitleFont(42);
   Graph_Graph1331->GetZaxis()->SetLabelFont(42);
   Graph_Graph1331->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1331->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1331->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1331->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1331->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1331);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx332[102] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 6, 7, 7.5, 8, 8.5, 9, 10, 20, 25, 30, 40, 45,
   50, 55, 60, 70, 75, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160, 170,
   180, 180, 180, 180, 170, 160, 150, 140, 130, 120, 110, 100, 95, 90, 85, 75,
   70, 60, 55, 50, 45, 40, 30, 25, 20, 10, 9, 8.5, 8, 7.5, 7, 6,
   5.6, 5.4, 5.2, 5, 4.8, 4.6, 4.4, 4.2, 4, 3.8, 3.6, 3.4, 3.2, 3, 2.8, 2.6,
   2.4, 2.2, 2, 1.8, 1.6 };
   Double_t Graph2_fy332[102] = { 53.70824, 48.18056, 35.62028, 29.66756, 31.06776, 32.91583, 31.67698, 29.14013, 26.61569, 24.81124, 23.83726, 23.04445, 22.36667, 22.05765, 21.16006, 20.43931, 19.82384,
   19.43789, 18.57752, 18.39267, 17.91324, 17.98837, 18.21375, 18.76269, 19.01237, 19.37762, 19.93784, 20.69537, 60.77042, 70.24114, 78.92262, 93.91792, 98.65328,
   108.9132, 112.8594, 123.5139, 135.7469, 143.6392, 167.316, 172.8405, 180.7328, 182.3113, 199.6742, 219.4049, 230.4541, 252.5524, 254.1308, 277.8076, 304.6413,
   310.9551, 310.9551, 77.85492, 77.85492, 75.46425, 68.4269, 62.23807, 61.8515, 56.4395, 53.73349, 49.46232, 44.89413, 44.26248, 42.32962, 41.21165, 35.17804,
   33.42767, 30.58786, 27.79161, 27.12421, 24.56903, 23.38972, 19.65523, 17.29687, 15.2153, 5.341959, 5.223361, 5.12338, 5.073088, 5.073264, 4.995193, 5.120295,
   5.145316, 5.305274, 5.384651, 5.706123, 6.004742, 6.533608, 7.259846, 8.114016, 8.702612, 9.328115, 9.85899, 10.35283, 11.38401, 12.97559, 14.9304, 15.91372,
   13.9236, 12.51269, 16.06822, 23.24152, 26.44847 };
   graph = new TGraph(102,Graph2_fx332,Graph2_fy332);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2332 = new TH1F("Graph_Graph2332","Graph",102,0,197.84);
   Graph_Graph2332->SetMinimum(4.495673);
   Graph_Graph2332->SetMaximum(341.5511);
   Graph_Graph2332->SetDirectory(nullptr);
   Graph_Graph2332->SetStats(0);
   Graph_Graph2332->SetLineWidth(2);
   Graph_Graph2332->SetMarkerStyle(20);
   Graph_Graph2332->SetMarkerSize(0.9);
   Graph_Graph2332->GetXaxis()->SetLabelFont(42);
   Graph_Graph2332->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2332->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2332->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2332->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2332->GetXaxis()->SetTitleFont(42);
   Graph_Graph2332->GetYaxis()->SetLabelFont(42);
   Graph_Graph2332->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2332->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2332->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2332->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2332->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2332->GetYaxis()->SetTitleFont(42);
   Graph_Graph2332->GetZaxis()->SetLabelFont(42);
   Graph_Graph2332->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2332->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2332->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2332->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2332->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2332);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx333[50] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 6, 7, 7.5, 8, 8.5, 9, 10, 20, 25, 30, 40, 45,
   50, 55, 60, 70, 75, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160, 170,
   180 };
   Double_t Graph0_fy333[50] = { 37.59766, 32.8125, 23.33984, 18.89648, 20.41016, 22.26562, 21.14258, 18.84766, 16.8457, 15.52734, 14.84375, 14.20898, 13.57422, 13.08594, 12.20703, 11.47461, 10.79102,
   10.40039, 9.814453, 9.716797, 9.423828, 9.423828, 9.423828, 9.667969, 9.716797, 9.863281, 10.10742, 10.44922, 30.07812, 34.76562, 39.0625, 46.48438, 48.82812,
   53.90625, 55.85938, 61.13281, 67.1875, 71.09375, 82.8125, 85.54688, 89.45312, 90.23438, 98.82812, 108.5938, 114.0625, 125, 125.7812, 137.5, 150.7812,
   153.9062 };
   graph = new TGraph(50,Graph0_fx333,Graph0_fy333);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0333 = new TH1F("Graph_Graph0333","",100,0,197.84);
   Graph_Graph0333->SetMinimum(0.2);
   Graph_Graph0333->SetMaximum(100000);
   Graph_Graph0333->SetDirectory(nullptr);
   Graph_Graph0333->SetStats(0);
   Graph_Graph0333->SetLineWidth(2);
   Graph_Graph0333->SetMarkerStyle(20);
   Graph_Graph0333->SetMarkerSize(0.9);
   Graph_Graph0333->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0333->GetXaxis()->SetRange(1,91);
   Graph_Graph0333->GetXaxis()->SetLabelFont(42);
   Graph_Graph0333->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0333->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0333->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0333->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0333->GetXaxis()->SetTitleFont(42);
   Graph_Graph0333->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0333->GetYaxis()->SetLabelFont(42);
   Graph_Graph0333->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0333->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0333->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0333->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0333->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0333->GetYaxis()->SetTitleFont(42);
   Graph_Graph0333->GetZaxis()->SetLabelFont(42);
   Graph_Graph0333->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0333->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0333->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0333->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0333->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0333);
   
   graph->Draw("l");
   
   Double_t Graph_fx334[50] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 6, 7, 7.5, 8, 8.5, 9, 10, 20, 25, 30, 40, 45,
   50, 55, 60, 70, 75, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160, 170,
   180 };
   Double_t Graph_fy334[50] = { 3.632543e-280, 2.261408e-248, 6.067526e-223, 3.826243e-202, 8.153347e-185, 3.716196e-170, 1.353433e-157, 1.035276e-146, 3.433277e-137, 8.591437e-129, 2.496317e-121, 1.183492e-114, 1.201866e-108, 3.258696e-103, 2.824874e-98, 9.086026e-94, 1.227555e-89,
   7.731227e-86, 2.479024e-82, 4.362615e-79, 4.493614e-76, 1.184657e-70, 8.05064e-60, 5.504176e-55, 1.045187e-51, 5.007811e-48, 2.094995e-45, 2.270145e-40, 7.599081e-18, 2.161153e-13, 1.921808e-10, 8.588228e-07, 1.372212e-05,
   0.0001240263, 0.000741779, 0.003258333, 0.03254398, 0.08087871, 0.3565023, 0.6568528, 1.130239, 1.835325, 4.200737, 8.287489, 14.59643, 23.53058, 35.35818, 50.20223, 68.04958,
   88.77198 };
   graph = new TGraph(50,Graph_fx334,Graph_fy334);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph334 = new TH1F("Graph_Graph334","",100,0,197.84);
   Graph_Graph334->SetMinimum(3.269289e-280);
   Graph_Graph334->SetMaximum(97.64918);
   Graph_Graph334->SetDirectory(nullptr);
   Graph_Graph334->SetStats(0);
   Graph_Graph334->SetLineWidth(2);
   Graph_Graph334->SetMarkerStyle(20);
   Graph_Graph334->SetMarkerSize(0.9);
   Graph_Graph334->GetXaxis()->SetLabelFont(42);
   Graph_Graph334->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph334->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph334->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph334->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph334->GetXaxis()->SetTitleFont(42);
   Graph_Graph334->GetYaxis()->SetLabelFont(42);
   Graph_Graph334->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph334->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph334->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph334->GetYaxis()->SetTickLength(0.02);
   Graph_Graph334->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph334->GetYaxis()->SetTitleFont(42);
   Graph_Graph334->GetZaxis()->SetLabelFont(42);
   Graph_Graph334->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph334->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph334->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph334->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph334->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph334);
   
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
   
   Double_t Graph_fx336[50] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 6, 7, 7.5, 8, 8.5, 9, 10, 20, 25, 30, 40, 45,
   50, 55, 60, 70, 75, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160, 170,
   180 };
   Double_t Graph_fy336[50] = { 3.995797e-280, 2.487549e-248, 6.674279e-223, 4.208867e-202, 8.968681e-185, 4.087816e-170, 1.488777e-157, 1.138804e-146, 3.776605e-137, 9.450581e-129, 2.745948e-121, 1.301841e-114, 1.322052e-108, 3.584565e-103, 3.107361e-98, 9.994629e-94, 1.35031e-89,
   8.50435e-86, 2.726926e-82, 4.798877e-79, 4.942975e-76, 1.303123e-70, 8.855704e-60, 6.054593e-55, 1.149706e-51, 5.508592e-48, 2.304495e-45, 2.49716e-40, 8.358989e-18, 2.377268e-13, 2.113989e-10, 9.447051e-07, 1.509433e-05,
   0.000136429, 0.0008159569, 0.003584166, 0.03579837, 0.08896658, 0.3921525, 0.7225381, 1.243263, 2.018858, 4.620811, 9.116238, 16.05607, 25.88363, 38.894, 55.22245, 74.85454,
   97.64918 };
   graph = new TGraph(50,Graph_fx336,Graph_fy336);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph336 = new TH1F("Graph_Graph336","",100,0,197.84);
   Graph_Graph336->SetMinimum(3.596218e-280);
   Graph_Graph336->SetMaximum(107.4141);
   Graph_Graph336->SetDirectory(nullptr);
   Graph_Graph336->SetStats(0);
   Graph_Graph336->SetLineWidth(2);
   Graph_Graph336->SetMarkerStyle(20);
   Graph_Graph336->SetMarkerSize(0.9);
   Graph_Graph336->GetXaxis()->SetLabelFont(42);
   Graph_Graph336->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph336->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph336->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph336->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph336->GetXaxis()->SetTitleFont(42);
   Graph_Graph336->GetYaxis()->SetLabelFont(42);
   Graph_Graph336->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph336->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph336->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph336->GetYaxis()->SetTickLength(0.02);
   Graph_Graph336->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph336->GetYaxis()->SetTitleFont(42);
   Graph_Graph336->GetZaxis()->SetLabelFont(42);
   Graph_Graph336->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph336->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph336->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph336->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph336->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph336);
   
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
   pt_LaTex = pt->AddText("#varepsilon = 2.94e-07");
   pt_LaTex = pt->AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
