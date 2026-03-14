#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_2mnthNorm_rate_1.54e-07()
{
//=========Macro generated from canvas: climits/climits
//=========  (Wed Mar 11 03:47:22 2026) by ROOT version 6.30/07
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
   
   Double_t Graph0_fx232[50] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 6, 7, 7.5, 8, 8.5, 9, 10, 20, 25, 30, 40, 45,
   50, 55, 60, 70, 75, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160, 170,
   180 };
   Double_t Graph0_fy232[50] = { 37.59766, 32.8125, 23.33984, 18.89648, 20.41016, 22.26562, 21.14258, 18.84766, 16.8457, 15.52734, 14.84375, 14.20898, 13.57422, 13.08594, 12.20703, 11.47461, 10.79102,
   10.40039, 9.814453, 9.716797, 9.423828, 9.423828, 9.423828, 9.667969, 9.716797, 9.863281, 10.10742, 10.44922, 30.07812, 34.76562, 39.0625, 46.48438, 48.82812,
   53.90625, 55.85938, 61.13281, 67.1875, 71.09375, 82.8125, 85.54688, 89.45312, 90.23438, 98.82812, 108.5938, 114.0625, 125, 125.7812, 137.5, 150.7812,
   153.9062 };
   TGraph *graph = new TGraph(50,Graph0_fx232,Graph0_fy232);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0232 = new TH1F("Graph_Graph0232","",100,0,197.84);
   Graph_Graph0232->SetMinimum(0.2);
   Graph_Graph0232->SetMaximum(100000);
   Graph_Graph0232->SetDirectory(nullptr);
   Graph_Graph0232->SetStats(0);
   Graph_Graph0232->SetLineWidth(2);
   Graph_Graph0232->SetMarkerStyle(20);
   Graph_Graph0232->SetMarkerSize(0.9);
   Graph_Graph0232->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0232->GetXaxis()->SetRange(1,91);
   Graph_Graph0232->GetXaxis()->SetLabelFont(42);
   Graph_Graph0232->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0232->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0232->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0232->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0232->GetXaxis()->SetTitleFont(42);
   Graph_Graph0232->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0232->GetYaxis()->SetLabelFont(42);
   Graph_Graph0232->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0232->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0232->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0232->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0232->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0232->GetYaxis()->SetTitleFont(42);
   Graph_Graph0232->GetZaxis()->SetLabelFont(42);
   Graph_Graph0232->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0232->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0232->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0232->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0232->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0232);
   
   graph->Draw("al");
   
   Double_t Graph1_fx233[102] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 6, 7, 7.5, 8, 8.5, 9, 10, 20, 25, 30, 40, 45,
   50, 55, 60, 70, 75, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160, 170,
   180, 180, 180, 180, 170, 160, 150, 140, 130, 120, 110, 100, 95, 90, 85, 75,
   70, 60, 55, 50, 45, 40, 30, 25, 20, 10, 9, 8.5, 8, 7.5, 7, 6,
   5.6, 5.4, 5.2, 5, 4.8, 4.6, 4.4, 4.2, 4, 3.8, 3.6, 3.4, 3.2, 3, 2.8, 2.6,
   2.4, 2.2, 2, 1.8, 1.6 };
   Double_t Graph1_fy233[102] = { 74.54662, 68.53737, 53.50381, 45.35591, 46.50549, 48.47651, 47.21983, 44.54715, 41.61218, 39.16454, 37.98207, 36.98527, 36.18023, 36.19005, 35.18717, 34.61032, 32.8137,
   31.62588, 29.84415, 29.54719, 28.65632, 28.65632, 28.65632, 29.39872, 29.5472, 29.99264, 30.73503, 31.77438, 91.46295, 105.7169, 118.7831, 141.3518, 148.4788,
   163.9206, 169.8598, 185.8955, 204.3068, 216.1852, 251.8201, 260.1349, 272.0132, 274.3889, 300.5211, 330.2169, 346.8465, 380.1058, 382.4814, 418.1163, 458.5026,
   468.0052, 468.0052, 43.28613, 43.28613, 41.22925, 37.59766, 34.39331, 34.17969, 31.18896, 29.6936, 27.02332, 25.02594, 24.45984, 23.39172, 22.64404, 19.4397,
   18.63403, 16.9548, 15.49225, 14.95056, 13.54218, 12.89215, 10.83374, 9.642029, 8.459473, 3.020477, 2.921677, 2.889633, 2.884674, 2.907944, 2.908134, 3.092194,
   3.129005, 3.22628, 3.297043, 3.493881, 3.667259, 4.034042, 4.577637, 5.418396, 6.150818, 6.771469, 7.247925, 7.642365, 8.422852, 9.791946, 11.56235, 12.35046,
   10.28481, 8.931541, 12.12578, 17.68799, 19.53316 };
   graph = new TGraph(102,Graph1_fx233,Graph1_fy233);
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
   
   TH1F *Graph_Graph1233 = new TH1F("Graph_Graph1233","Graph",102,0,197.84);
   Graph_Graph1233->SetMinimum(2.596207);
   Graph_Graph1233->SetMaximum(514.5173);
   Graph_Graph1233->SetDirectory(nullptr);
   Graph_Graph1233->SetStats(0);
   Graph_Graph1233->SetLineWidth(2);
   Graph_Graph1233->SetMarkerStyle(20);
   Graph_Graph1233->SetMarkerSize(0.9);
   Graph_Graph1233->GetXaxis()->SetLabelFont(42);
   Graph_Graph1233->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1233->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1233->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1233->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1233->GetXaxis()->SetTitleFont(42);
   Graph_Graph1233->GetYaxis()->SetLabelFont(42);
   Graph_Graph1233->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1233->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1233->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1233->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1233->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1233->GetYaxis()->SetTitleFont(42);
   Graph_Graph1233->GetZaxis()->SetLabelFont(42);
   Graph_Graph1233->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1233->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1233->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1233->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1233->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1233);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx234[102] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 6, 7, 7.5, 8, 8.5, 9, 10, 20, 25, 30, 40, 45,
   50, 55, 60, 70, 75, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160, 170,
   180, 180, 180, 180, 170, 160, 150, 140, 130, 120, 110, 100, 95, 90, 85, 75,
   70, 60, 55, 50, 45, 40, 30, 25, 20, 10, 9, 8.5, 8, 7.5, 7, 6,
   5.6, 5.4, 5.2, 5, 4.8, 4.6, 4.4, 4.2, 4, 3.8, 3.6, 3.4, 3.2, 3, 2.8, 2.6,
   2.4, 2.2, 2, 1.8, 1.6 };
   Double_t Graph2_fy234[102] = { 53.70824, 48.18056, 35.62028, 29.66756, 31.06776, 32.91583, 31.67698, 29.14013, 26.61569, 24.81124, 23.83726, 23.04445, 22.36667, 22.05765, 21.16006, 20.43931, 19.82384,
   19.43789, 18.57752, 18.39267, 17.91324, 17.98837, 18.21375, 18.76269, 19.01237, 19.37762, 19.93784, 20.69537, 60.77042, 70.24114, 78.92262, 93.91792, 98.65328,
   108.9132, 112.8594, 123.5139, 135.7469, 143.6392, 167.316, 172.8405, 180.7328, 182.3113, 199.6742, 219.4049, 230.4541, 252.5524, 254.1308, 277.8076, 304.6413,
   310.9551, 310.9551, 77.85492, 77.85492, 75.46425, 68.4269, 62.23807, 61.8515, 56.4395, 53.73349, 49.46232, 44.89413, 44.26248, 42.32962, 41.21165, 35.17804,
   33.42767, 30.58786, 27.79161, 27.12421, 24.56903, 23.38972, 19.65523, 17.29687, 15.2153, 5.341959, 5.223361, 5.12338, 5.073088, 5.073264, 4.995193, 5.120295,
   5.145316, 5.305274, 5.384651, 5.706123, 6.004742, 6.533608, 7.259846, 8.114016, 8.702612, 9.328115, 9.85899, 10.35283, 11.38401, 12.97559, 14.9304, 15.91372,
   13.9236, 12.51269, 16.06822, 23.24152, 26.44847 };
   graph = new TGraph(102,Graph2_fx234,Graph2_fy234);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2234 = new TH1F("Graph_Graph2234","Graph",102,0,197.84);
   Graph_Graph2234->SetMinimum(4.495673);
   Graph_Graph2234->SetMaximum(341.5511);
   Graph_Graph2234->SetDirectory(nullptr);
   Graph_Graph2234->SetStats(0);
   Graph_Graph2234->SetLineWidth(2);
   Graph_Graph2234->SetMarkerStyle(20);
   Graph_Graph2234->SetMarkerSize(0.9);
   Graph_Graph2234->GetXaxis()->SetLabelFont(42);
   Graph_Graph2234->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2234->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2234->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2234->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2234->GetXaxis()->SetTitleFont(42);
   Graph_Graph2234->GetYaxis()->SetLabelFont(42);
   Graph_Graph2234->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2234->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2234->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2234->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2234->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2234->GetYaxis()->SetTitleFont(42);
   Graph_Graph2234->GetZaxis()->SetLabelFont(42);
   Graph_Graph2234->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2234->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2234->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2234->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2234->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2234);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx235[50] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 6, 7, 7.5, 8, 8.5, 9, 10, 20, 25, 30, 40, 45,
   50, 55, 60, 70, 75, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160, 170,
   180 };
   Double_t Graph0_fy235[50] = { 37.59766, 32.8125, 23.33984, 18.89648, 20.41016, 22.26562, 21.14258, 18.84766, 16.8457, 15.52734, 14.84375, 14.20898, 13.57422, 13.08594, 12.20703, 11.47461, 10.79102,
   10.40039, 9.814453, 9.716797, 9.423828, 9.423828, 9.423828, 9.667969, 9.716797, 9.863281, 10.10742, 10.44922, 30.07812, 34.76562, 39.0625, 46.48438, 48.82812,
   53.90625, 55.85938, 61.13281, 67.1875, 71.09375, 82.8125, 85.54688, 89.45312, 90.23438, 98.82812, 108.5938, 114.0625, 125, 125.7812, 137.5, 150.7812,
   153.9062 };
   graph = new TGraph(50,Graph0_fx235,Graph0_fy235);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0235 = new TH1F("Graph_Graph0235","",100,0,197.84);
   Graph_Graph0235->SetMinimum(0.2);
   Graph_Graph0235->SetMaximum(100000);
   Graph_Graph0235->SetDirectory(nullptr);
   Graph_Graph0235->SetStats(0);
   Graph_Graph0235->SetLineWidth(2);
   Graph_Graph0235->SetMarkerStyle(20);
   Graph_Graph0235->SetMarkerSize(0.9);
   Graph_Graph0235->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0235->GetXaxis()->SetRange(1,91);
   Graph_Graph0235->GetXaxis()->SetLabelFont(42);
   Graph_Graph0235->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0235->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0235->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0235->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0235->GetXaxis()->SetTitleFont(42);
   Graph_Graph0235->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0235->GetYaxis()->SetLabelFont(42);
   Graph_Graph0235->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0235->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0235->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0235->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0235->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0235->GetYaxis()->SetTitleFont(42);
   Graph_Graph0235->GetZaxis()->SetLabelFont(42);
   Graph_Graph0235->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0235->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0235->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0235->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0235->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0235);
   
   graph->Draw("l");
   
   Double_t Graph_fx236[50] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 6, 7, 7.5, 8, 8.5, 9, 10, 20, 25, 30, 40, 45,
   50, 55, 60, 70, 75, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160, 170,
   180 };
   Double_t Graph_fy236[50] = { 3.450929e-73, 1.621007e-64, 1.382163e-57, 6.393027e-52, 3.327289e-47, 3.228554e-43, 8.376251e-40, 7.56853e-37, 2.903776e-34, 5.504291e-32, 5.799426e-30, 3.727259e-28, 1.574002e-26, 4.638347e-25, 1.001928e-23, 1.65225e-22, 2.151716e-21,
   2.276729e-20, 2.00493e-19, 1.499833e-18, 9.699818e-18, 2.779264e-16, 2.231032e-13, 3.585335e-12, 3.28188e-11, 2.720633e-10, 1.561859e-09, 3.380153e-08, 0.02544195, 0.3387317, 1.816077, 13.63469, 25.89814,
   42.60357, 63.21517, 86.90696, 139.8824, 167.5021, 221.7967, 247.5932, 272.0986, 295.1385, 336.4695, 371.3636, 400.116, 423.278, 441.499, 455.4373, 465.7133,
   472.8877 };
   graph = new TGraph(50,Graph_fx236,Graph_fy236);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph236 = new TH1F("Graph_Graph236","",100,0,197.84);
   Graph_Graph236->SetMinimum(3.105836e-73);
   Graph_Graph236->SetMaximum(520.1765);
   Graph_Graph236->SetDirectory(nullptr);
   Graph_Graph236->SetStats(0);
   Graph_Graph236->SetLineWidth(2);
   Graph_Graph236->SetMarkerStyle(20);
   Graph_Graph236->SetMarkerSize(0.9);
   Graph_Graph236->GetXaxis()->SetLabelFont(42);
   Graph_Graph236->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph236->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph236->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph236->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph236->GetXaxis()->SetTitleFont(42);
   Graph_Graph236->GetYaxis()->SetLabelFont(42);
   Graph_Graph236->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph236->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph236->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph236->GetYaxis()->SetTickLength(0.02);
   Graph_Graph236->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph236->GetYaxis()->SetTitleFont(42);
   Graph_Graph236->GetZaxis()->SetLabelFont(42);
   Graph_Graph236->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph236->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph236->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph236->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph236->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph236);
   
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
   
   Double_t Graph_fx238[50] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 6, 7, 7.5, 8, 8.5, 9, 10, 20, 25, 30, 40, 45,
   50, 55, 60, 70, 75, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160, 170,
   180 };
   Double_t Graph_fy238[50] = { 3.796021e-73, 1.783108e-64, 1.520379e-57, 7.03233e-52, 3.660018e-47, 3.551409e-43, 9.213876e-40, 8.325383e-37, 3.194154e-34, 6.05472e-32, 6.379369e-30, 4.099985e-28, 1.731402e-26, 5.102182e-25, 1.102121e-23, 1.817475e-22, 2.366888e-21,
   2.504401e-20, 2.205423e-19, 1.649816e-18, 1.06698e-17, 3.05719e-16, 2.454135e-13, 3.943868e-12, 3.610068e-11, 2.992696e-10, 1.718045e-09, 3.718169e-08, 0.02798614, 0.3726049, 1.997685, 14.99816, 28.48796,
   46.86393, 69.53669, 95.59766, 153.8707, 184.2523, 243.9764, 272.3525, 299.3085, 324.6524, 370.1165, 408.4999, 440.1276, 465.6058, 485.6489, 500.9811, 512.2846,
   520.1765 };
   graph = new TGraph(50,Graph_fx238,Graph_fy238);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph238 = new TH1F("Graph_Graph238","",100,0,197.84);
   Graph_Graph238->SetMinimum(3.416419e-73);
   Graph_Graph238->SetMaximum(572.1941);
   Graph_Graph238->SetDirectory(nullptr);
   Graph_Graph238->SetStats(0);
   Graph_Graph238->SetLineWidth(2);
   Graph_Graph238->SetMarkerStyle(20);
   Graph_Graph238->SetMarkerSize(0.9);
   Graph_Graph238->GetXaxis()->SetLabelFont(42);
   Graph_Graph238->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph238->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph238->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph238->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph238->GetXaxis()->SetTitleFont(42);
   Graph_Graph238->GetYaxis()->SetLabelFont(42);
   Graph_Graph238->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph238->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph238->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph238->GetYaxis()->SetTickLength(0.02);
   Graph_Graph238->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph238->GetYaxis()->SetTitleFont(42);
   Graph_Graph238->GetZaxis()->SetLabelFont(42);
   Graph_Graph238->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph238->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph238->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph238->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph238->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph238);
   
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
   line = new TLine(53.27713,0,53.27713,55.17852);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(53.27213,0,"  53.28 TeV");

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
   pt_LaTex = pt->AddText("#varepsilon = 1.54e-07");
   pt_LaTex = pt->AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
