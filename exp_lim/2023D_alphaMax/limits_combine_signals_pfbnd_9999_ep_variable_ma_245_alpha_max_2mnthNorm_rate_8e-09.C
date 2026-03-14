#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_2mnthNorm_rate_8e-09()
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
   
   Double_t Graph0_fx29[50] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 6, 7, 7.5, 8, 8.5, 9, 10, 20, 25, 30, 40, 45,
   50, 55, 60, 70, 75, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160, 170,
   180 };
   Double_t Graph0_fy29[50] = { 37.59766, 32.8125, 23.33984, 18.89648, 20.41016, 22.26562, 21.14258, 18.84766, 16.8457, 15.52734, 14.84375, 14.20898, 13.57422, 13.08594, 12.20703, 11.47461, 10.79102,
   10.40039, 9.814453, 9.716797, 9.423828, 9.423828, 9.423828, 9.667969, 9.716797, 9.863281, 10.10742, 10.44922, 30.07812, 34.76562, 39.0625, 46.48438, 48.82812,
   53.90625, 55.85938, 61.13281, 67.1875, 71.09375, 82.8125, 85.54688, 89.45312, 90.23438, 98.82812, 108.5938, 114.0625, 125, 125.7812, 137.5, 150.7812,
   153.9062 };
   TGraph *graph = new TGraph(50,Graph0_fx29,Graph0_fy29);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph029 = new TH1F("Graph_Graph029","",100,0,197.84);
   Graph_Graph029->SetMinimum(0.2);
   Graph_Graph029->SetMaximum(100000);
   Graph_Graph029->SetDirectory(nullptr);
   Graph_Graph029->SetStats(0);
   Graph_Graph029->SetLineWidth(2);
   Graph_Graph029->SetMarkerStyle(20);
   Graph_Graph029->SetMarkerSize(0.9);
   Graph_Graph029->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph029->GetXaxis()->SetRange(1,91);
   Graph_Graph029->GetXaxis()->SetLabelFont(42);
   Graph_Graph029->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph029->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph029->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph029->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph029->GetXaxis()->SetTitleFont(42);
   Graph_Graph029->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph029->GetYaxis()->SetLabelFont(42);
   Graph_Graph029->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph029->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph029->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph029->GetYaxis()->SetTickLength(0.02);
   Graph_Graph029->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph029->GetYaxis()->SetTitleFont(42);
   Graph_Graph029->GetZaxis()->SetLabelFont(42);
   Graph_Graph029->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph029->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph029->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph029->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph029->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph029);
   
   graph->Draw("al");
   
   Double_t Graph1_fx30[102] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 6, 7, 7.5, 8, 8.5, 9, 10, 20, 25, 30, 40, 45,
   50, 55, 60, 70, 75, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160, 170,
   180, 180, 180, 180, 170, 160, 150, 140, 130, 120, 110, 100, 95, 90, 85, 75,
   70, 60, 55, 50, 45, 40, 30, 25, 20, 10, 9, 8.5, 8, 7.5, 7, 6,
   5.6, 5.4, 5.2, 5, 4.8, 4.6, 4.4, 4.2, 4, 3.8, 3.6, 3.4, 3.2, 3, 2.8, 2.6,
   2.4, 2.2, 2, 1.8, 1.6 };
   Double_t Graph1_fy30[102] = { 74.54662, 68.53737, 53.50381, 45.35591, 46.50549, 48.47651, 47.21983, 44.54715, 41.61218, 39.16454, 37.98207, 36.98527, 36.18023, 36.19005, 35.18717, 34.61032, 32.8137,
   31.62588, 29.84415, 29.54719, 28.65632, 28.65632, 28.65632, 29.39872, 29.5472, 29.99264, 30.73503, 31.77438, 91.46295, 105.7169, 118.7831, 141.3518, 148.4788,
   163.9206, 169.8598, 185.8955, 204.3068, 216.1852, 251.8201, 260.1349, 272.0132, 274.3889, 300.5211, 330.2169, 346.8465, 380.1058, 382.4814, 418.1163, 458.5026,
   468.0052, 468.0052, 43.28613, 43.28613, 41.22925, 37.59766, 34.39331, 34.17969, 31.18896, 29.6936, 27.02332, 25.02594, 24.45984, 23.39172, 22.64404, 19.4397,
   18.63403, 16.9548, 15.49225, 14.95056, 13.54218, 12.89215, 10.83374, 9.642029, 8.459473, 3.020477, 2.921677, 2.889633, 2.884674, 2.907944, 2.908134, 3.092194,
   3.129005, 3.22628, 3.297043, 3.493881, 3.667259, 4.034042, 4.577637, 5.418396, 6.150818, 6.771469, 7.247925, 7.642365, 8.422852, 9.791946, 11.56235, 12.35046,
   10.28481, 8.931541, 12.12578, 17.68799, 19.53316 };
   graph = new TGraph(102,Graph1_fx30,Graph1_fy30);
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
   
   TH1F *Graph_Graph130 = new TH1F("Graph_Graph130","Graph",102,0,197.84);
   Graph_Graph130->SetMinimum(2.596207);
   Graph_Graph130->SetMaximum(514.5173);
   Graph_Graph130->SetDirectory(nullptr);
   Graph_Graph130->SetStats(0);
   Graph_Graph130->SetLineWidth(2);
   Graph_Graph130->SetMarkerStyle(20);
   Graph_Graph130->SetMarkerSize(0.9);
   Graph_Graph130->GetXaxis()->SetLabelFont(42);
   Graph_Graph130->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph130->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph130->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph130->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph130->GetXaxis()->SetTitleFont(42);
   Graph_Graph130->GetYaxis()->SetLabelFont(42);
   Graph_Graph130->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph130->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph130->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph130->GetYaxis()->SetTickLength(0.02);
   Graph_Graph130->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph130->GetYaxis()->SetTitleFont(42);
   Graph_Graph130->GetZaxis()->SetLabelFont(42);
   Graph_Graph130->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph130->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph130->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph130->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph130->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph130);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx31[102] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 6, 7, 7.5, 8, 8.5, 9, 10, 20, 25, 30, 40, 45,
   50, 55, 60, 70, 75, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160, 170,
   180, 180, 180, 180, 170, 160, 150, 140, 130, 120, 110, 100, 95, 90, 85, 75,
   70, 60, 55, 50, 45, 40, 30, 25, 20, 10, 9, 8.5, 8, 7.5, 7, 6,
   5.6, 5.4, 5.2, 5, 4.8, 4.6, 4.4, 4.2, 4, 3.8, 3.6, 3.4, 3.2, 3, 2.8, 2.6,
   2.4, 2.2, 2, 1.8, 1.6 };
   Double_t Graph2_fy31[102] = { 53.70824, 48.18056, 35.62028, 29.66756, 31.06776, 32.91583, 31.67698, 29.14013, 26.61569, 24.81124, 23.83726, 23.04445, 22.36667, 22.05765, 21.16006, 20.43931, 19.82384,
   19.43789, 18.57752, 18.39267, 17.91324, 17.98837, 18.21375, 18.76269, 19.01237, 19.37762, 19.93784, 20.69537, 60.77042, 70.24114, 78.92262, 93.91792, 98.65328,
   108.9132, 112.8594, 123.5139, 135.7469, 143.6392, 167.316, 172.8405, 180.7328, 182.3113, 199.6742, 219.4049, 230.4541, 252.5524, 254.1308, 277.8076, 304.6413,
   310.9551, 310.9551, 77.85492, 77.85492, 75.46425, 68.4269, 62.23807, 61.8515, 56.4395, 53.73349, 49.46232, 44.89413, 44.26248, 42.32962, 41.21165, 35.17804,
   33.42767, 30.58786, 27.79161, 27.12421, 24.56903, 23.38972, 19.65523, 17.29687, 15.2153, 5.341959, 5.223361, 5.12338, 5.073088, 5.073264, 4.995193, 5.120295,
   5.145316, 5.305274, 5.384651, 5.706123, 6.004742, 6.533608, 7.259846, 8.114016, 8.702612, 9.328115, 9.85899, 10.35283, 11.38401, 12.97559, 14.9304, 15.91372,
   13.9236, 12.51269, 16.06822, 23.24152, 26.44847 };
   graph = new TGraph(102,Graph2_fx31,Graph2_fy31);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph231 = new TH1F("Graph_Graph231","Graph",102,0,197.84);
   Graph_Graph231->SetMinimum(4.495673);
   Graph_Graph231->SetMaximum(341.5511);
   Graph_Graph231->SetDirectory(nullptr);
   Graph_Graph231->SetStats(0);
   Graph_Graph231->SetLineWidth(2);
   Graph_Graph231->SetMarkerStyle(20);
   Graph_Graph231->SetMarkerSize(0.9);
   Graph_Graph231->GetXaxis()->SetLabelFont(42);
   Graph_Graph231->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph231->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph231->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph231->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph231->GetXaxis()->SetTitleFont(42);
   Graph_Graph231->GetYaxis()->SetLabelFont(42);
   Graph_Graph231->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph231->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph231->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph231->GetYaxis()->SetTickLength(0.02);
   Graph_Graph231->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph231->GetYaxis()->SetTitleFont(42);
   Graph_Graph231->GetZaxis()->SetLabelFont(42);
   Graph_Graph231->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph231->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph231->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph231->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph231->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph231);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx32[50] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 6, 7, 7.5, 8, 8.5, 9, 10, 20, 25, 30, 40, 45,
   50, 55, 60, 70, 75, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160, 170,
   180 };
   Double_t Graph0_fy32[50] = { 37.59766, 32.8125, 23.33984, 18.89648, 20.41016, 22.26562, 21.14258, 18.84766, 16.8457, 15.52734, 14.84375, 14.20898, 13.57422, 13.08594, 12.20703, 11.47461, 10.79102,
   10.40039, 9.814453, 9.716797, 9.423828, 9.423828, 9.423828, 9.667969, 9.716797, 9.863281, 10.10742, 10.44922, 30.07812, 34.76562, 39.0625, 46.48438, 48.82812,
   53.90625, 55.85938, 61.13281, 67.1875, 71.09375, 82.8125, 85.54688, 89.45312, 90.23438, 98.82812, 108.5938, 114.0625, 125, 125.7812, 137.5, 150.7812,
   153.9062 };
   graph = new TGraph(50,Graph0_fx32,Graph0_fy32);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph032 = new TH1F("Graph_Graph032","",100,0,197.84);
   Graph_Graph032->SetMinimum(0.2);
   Graph_Graph032->SetMaximum(100000);
   Graph_Graph032->SetDirectory(nullptr);
   Graph_Graph032->SetStats(0);
   Graph_Graph032->SetLineWidth(2);
   Graph_Graph032->SetMarkerStyle(20);
   Graph_Graph032->SetMarkerSize(0.9);
   Graph_Graph032->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph032->GetXaxis()->SetRange(1,91);
   Graph_Graph032->GetXaxis()->SetLabelFont(42);
   Graph_Graph032->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph032->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph032->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph032->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph032->GetXaxis()->SetTitleFont(42);
   Graph_Graph032->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph032->GetYaxis()->SetLabelFont(42);
   Graph_Graph032->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph032->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph032->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph032->GetYaxis()->SetTickLength(0.02);
   Graph_Graph032->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph032->GetYaxis()->SetTitleFont(42);
   Graph_Graph032->GetZaxis()->SetLabelFont(42);
   Graph_Graph032->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph032->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph032->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph032->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph032->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph032);
   
   graph->Draw("l");
   
   Double_t Graph_fx33[50] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 6, 7, 7.5, 8, 8.5, 9, 10, 20, 25, 30, 40, 45,
   50, 55, 60, 70, 75, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160, 170,
   180 };
   Double_t Graph_fy33[50] = { 7.51832, 6.73637, 6.07526, 5.512822, 5.030865, 4.614821, 4.253106, 3.936495, 3.657613, 3.410524, 3.190413, 2.993352, 2.816106, 2.655997, 2.510792, 2.378615, 2.257882,
   2.147247, 2.045561, 1.951838, 1.865227, 1.710482, 1.406487, 1.287735, 1.184633, 1.095387, 1.016702, 0.885851, 0.3514804, 0.2597717, 0.2026721, 0.13676, 0.1163592,
   0.1006822, 0.08831497, 0.07834709, 0.06335423, 0.05760368, 0.04846475, 0.0447861, 0.04156264, 0.03871843, 0.03393835, 0.03008999, 0.02693522, 0.02430919, 0.02209446, 0.02020528, 0.01857773,
   0.01716322 };
   graph = new TGraph(50,Graph_fx33,Graph_fy33);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph33 = new TH1F("Graph_Graph33","",100,0,197.84);
   Graph_Graph33->SetMinimum(0.0154469);
   Graph_Graph33->SetMaximum(8.268435);
   Graph_Graph33->SetDirectory(nullptr);
   Graph_Graph33->SetStats(0);
   Graph_Graph33->SetLineWidth(2);
   Graph_Graph33->SetMarkerStyle(20);
   Graph_Graph33->SetMarkerSize(0.9);
   Graph_Graph33->GetXaxis()->SetLabelFont(42);
   Graph_Graph33->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph33->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph33->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph33->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph33->GetXaxis()->SetTitleFont(42);
   Graph_Graph33->GetYaxis()->SetLabelFont(42);
   Graph_Graph33->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph33->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph33->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph33->GetYaxis()->SetTickLength(0.02);
   Graph_Graph33->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph33->GetYaxis()->SetTitleFont(42);
   Graph_Graph33->GetZaxis()->SetLabelFont(42);
   Graph_Graph33->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph33->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph33->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph33->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph33->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph33);
   
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
   
   Double_t Graph_fx35[50] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 6, 7, 7.5, 8, 8.5, 9, 10, 20, 25, 30, 40, 45,
   50, 55, 60, 70, 75, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160, 170,
   180 };
   Double_t Graph_fy35[50] = { 8.270152, 7.410007, 6.682786, 6.064104, 5.533951, 5.076303, 4.678416, 4.330144, 4.023374, 3.751576, 3.509454, 3.292687, 3.097716, 2.921597, 2.761871, 2.616476, 2.48367,
   2.361972, 2.250117, 2.147022, 2.051749, 1.88153, 1.547136, 1.416508, 1.303096, 1.204926, 1.118372, 0.9744361, 0.3866285, 0.2857489, 0.2229393, 0.150436, 0.1279951,
   0.1107504, 0.09714647, 0.0861818, 0.06968965, 0.06336405, 0.05331122, 0.04926471, 0.04571891, 0.04259027, 0.03733219, 0.03309899, 0.02962874, 0.0267401, 0.0243039, 0.02222581, 0.0204355,
   0.01887955 };
   graph = new TGraph(50,Graph_fx35,Graph_fy35);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph35 = new TH1F("Graph_Graph35","",100,0,197.84);
   Graph_Graph35->SetMinimum(0.01699159);
   Graph_Graph35->SetMaximum(9.095279);
   Graph_Graph35->SetDirectory(nullptr);
   Graph_Graph35->SetStats(0);
   Graph_Graph35->SetLineWidth(2);
   Graph_Graph35->SetMarkerStyle(20);
   Graph_Graph35->SetMarkerSize(0.9);
   Graph_Graph35->GetXaxis()->SetLabelFont(42);
   Graph_Graph35->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph35->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph35->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph35->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph35->GetXaxis()->SetTitleFont(42);
   Graph_Graph35->GetYaxis()->SetLabelFont(42);
   Graph_Graph35->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph35->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph35->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph35->GetYaxis()->SetTickLength(0.02);
   Graph_Graph35->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph35->GetYaxis()->SetTitleFont(42);
   Graph_Graph35->GetZaxis()->SetLabelFont(42);
   Graph_Graph35->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph35->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph35->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph35->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph35->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph35);
   
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
   pt_LaTex = pt->AddText("#varepsilon = 8e-09");
   pt_LaTex = pt->AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
