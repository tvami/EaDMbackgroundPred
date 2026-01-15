#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_17mnthNorm_rate_2.74e-07()
{
//=========Macro generated from canvas: climits/climits
//=========  (Thu Jan 15 02:00:53 2026) by ROOT version 6.30/07
   TCanvas *climits = new TCanvas("climits", "climits",0,0,700,600);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   climits->SetHighLightColor(2);
   climits->Range(-17.54216,-1.838764,106.3616,5.759863);
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
   
   Double_t Graph0_fx316[43] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 20, 25, 30, 35, 40,
   45, 50, 55, 60, 70, 75, 80, 85, 90, 95 };
   Double_t Graph0_fy316[43] = { 3.629883, 3.341797, 3.860352, 3.779688, 2.61582, 2.489063, 2.661914, 2.800195, 2.58125, 2.419922, 2.24707, 2.154883, 2.160645, 2.206738, 2.24707, 2.281641, 2.281641,
   2.17793, 2.108789, 2.120313, 2.085742, 2.091504, 2.062695, 2.091504, 2.07998, 2.108789, 2.131836, 2.126074, 5.047266, 5.416016, 5.761719, 6.061328, 6.591406,
   6.821875, 7.421094, 7.789844, 8.250781, 9.21875, 9.817969, 10.46328, 11.20078, 11.66172, 11.98438 };
   TGraph *graph = new TGraph(43,Graph0_fx316,Graph0_fy316);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0316 = new TH1F("Graph_Graph0316","",100,0,104.34);
   Graph_Graph0316->SetMinimum(0.2);
   Graph_Graph0316->SetMaximum(100000);
   Graph_Graph0316->SetDirectory(nullptr);
   Graph_Graph0316->SetStats(0);
   Graph_Graph0316->SetLineWidth(2);
   Graph_Graph0316->SetMarkerStyle(20);
   Graph_Graph0316->SetMarkerSize(0.9);
   Graph_Graph0316->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0316->GetXaxis()->SetRange(2,96);
   Graph_Graph0316->GetXaxis()->SetLabelFont(42);
   Graph_Graph0316->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0316->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0316->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0316->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0316->GetXaxis()->SetTitleFont(42);
   Graph_Graph0316->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0316->GetYaxis()->SetLabelFont(42);
   Graph_Graph0316->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0316->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0316->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0316->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0316->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0316->GetYaxis()->SetTitleFont(42);
   Graph_Graph0316->GetZaxis()->SetLabelFont(42);
   Graph_Graph0316->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0316->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0316->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0316->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0316->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0316);
   
   graph->Draw("al");
   
   Double_t Graph1_fx317[88] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 20, 25, 30, 35, 40,
   45, 50, 55, 60, 70, 75, 80, 85, 90, 95, 95, 95, 95, 90, 85, 80,
   75, 70, 60, 55, 50, 45, 40, 35, 30, 25, 20, 9.5, 9, 8.5, 8, 7.5,
   7, 6.5, 6, 5.8, 5.6, 5.4, 5, 4.8, 4.6, 4.4, 4.2, 4, 3.8, 3.6, 3.4, 3.2,
   3, 2.8, 2.6, 2.2, 2, 1.8, 1.6 };
   Double_t Graph1_fy317[88] = { 7.709086, 7.130503, 8.058682, 7.95608, 6.063009, 5.788526, 6.060239, 6.271909, 5.89441, 5.787513, 5.524848, 5.344154, 5.386081, 5.428398, 5.45907, 5.528099, 5.591407,
   5.521086, 5.424519, 5.517878, 5.422197, 5.423058, 5.398688, 5.530281, 5.562932, 5.677265, 5.751809, 5.772446, 15.34795, 16.46926, 17.52049, 18.43156, 20.04344,
   20.74426, 22.56639, 23.68771, 25.08935, 28.03279, 29.85492, 31.81722, 34.05984, 35.46148, 36.44263, 36.44263, 4.306885, 4.306885, 4.19093, 4.025281, 3.760242,
   3.528333, 3.38501, 2.997354, 2.829904, 2.695944, 2.478259, 2.420282, 2.225644, 2.160645, 2.052162, 1.971588, 0.9052425, 0.8993683, 0.8896454, 0.8856167, 0.8986931,
   0.9024292, 0.9232029, 0.9125122, 0.9193542, 0.9225952, 0.9698593, 1.051694, 1.060606, 1.044537, 1.017168, 0.9790421, 0.9764313, 1.035759, 1.124886, 1.24021, 1.378221,
   1.289365, 1.195917, 1.246602, 1.919373, 1.990494, 1.697006, 1.8433 };
   graph = new TGraph(88,Graph1_fx317,Graph1_fy317);
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
   
   TH1F *Graph_Graph1317 = new TH1F("Graph_Graph1317","Graph",100,0,104.34);
   Graph_Graph1317->SetMinimum(0.797055);
   Graph_Graph1317->SetMaximum(39.99833);
   Graph_Graph1317->SetDirectory(nullptr);
   Graph_Graph1317->SetStats(0);
   Graph_Graph1317->SetLineWidth(2);
   Graph_Graph1317->SetMarkerStyle(20);
   Graph_Graph1317->SetMarkerSize(0.9);
   Graph_Graph1317->GetXaxis()->SetLabelFont(42);
   Graph_Graph1317->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1317->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1317->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1317->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1317->GetXaxis()->SetTitleFont(42);
   Graph_Graph1317->GetYaxis()->SetLabelFont(42);
   Graph_Graph1317->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1317->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1317->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1317->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1317->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1317->GetYaxis()->SetTitleFont(42);
   Graph_Graph1317->GetZaxis()->SetLabelFont(42);
   Graph_Graph1317->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1317->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1317->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1317->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1317->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1317);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx318[88] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 20, 25, 30, 35, 40,
   45, 50, 55, 60, 70, 75, 80, 85, 90, 95, 95, 95, 95, 90, 85, 80,
   75, 70, 60, 55, 50, 45, 40, 35, 30, 25, 20, 9.5, 9, 8.5, 8, 7.5,
   7, 6.5, 6, 5.8, 5.6, 5.4, 5, 4.8, 4.6, 4.4, 4.2, 4, 3.8, 3.6, 3.4, 3.2,
   3, 2.8, 2.6, 2.2, 2, 1.8, 1.6 };
   Double_t Graph2_fy318[88] = { 5.366147, 4.953583, 5.660692, 5.565008, 4.033861, 3.848309, 4.073111, 4.245635, 3.954828, 3.799287, 3.581651, 3.443301, 3.46112, 3.508569, 3.545823, 3.595827, 3.623111,
   3.523534, 3.436893, 3.472577, 3.415959, 3.417059, 3.386436, 3.450406, 3.456268, 3.516748, 3.559431, 3.558285, 8.930158, 9.820063, 10.49281, 11.08676, 12.05632,
   12.58664, 13.66264, 14.40363, 15.22303, 16.97223, 18.23196, 19.51372, 20.79984, 21.79526, 22.2072, 22.2072, 6.826061, 6.826061, 6.642283, 6.379742, 5.959677,
   5.592119, 5.299206, 4.721135, 4.457384, 4.246384, 3.903508, 3.788932, 3.484228, 3.342247, 3.155927, 3.004824, 1.324903, 1.323029, 1.318251, 1.296179, 1.318041,
   1.310335, 1.333934, 1.320393, 1.341566, 1.339616, 1.40401, 1.493706, 1.499416, 1.476697, 1.44467, 1.40368, 1.399937, 1.471074, 1.590289, 1.732623, 1.911461,
   1.793348, 1.670744, 1.749362, 2.631524, 2.69169, 2.313803, 2.513268 };
   graph = new TGraph(88,Graph2_fx318,Graph2_fy318);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2318 = new TH1F("Graph_Graph2318","Graph",100,0,104.34);
   Graph_Graph2318->SetMinimum(1.166561);
   Graph_Graph2318->SetMaximum(24.29831);
   Graph_Graph2318->SetDirectory(nullptr);
   Graph_Graph2318->SetStats(0);
   Graph_Graph2318->SetLineWidth(2);
   Graph_Graph2318->SetMarkerStyle(20);
   Graph_Graph2318->SetMarkerSize(0.9);
   Graph_Graph2318->GetXaxis()->SetLabelFont(42);
   Graph_Graph2318->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2318->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2318->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2318->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2318->GetXaxis()->SetTitleFont(42);
   Graph_Graph2318->GetYaxis()->SetLabelFont(42);
   Graph_Graph2318->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2318->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2318->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2318->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2318->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2318->GetYaxis()->SetTitleFont(42);
   Graph_Graph2318->GetZaxis()->SetLabelFont(42);
   Graph_Graph2318->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2318->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2318->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2318->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2318->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2318);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx319[43] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 20, 25, 30, 35, 40,
   45, 50, 55, 60, 70, 75, 80, 85, 90, 95 };
   Double_t Graph0_fy319[43] = { 3.629883, 3.341797, 3.860352, 3.779688, 2.61582, 2.489063, 2.661914, 2.800195, 2.58125, 2.419922, 2.24707, 2.154883, 2.160645, 2.206738, 2.24707, 2.281641, 2.281641,
   2.17793, 2.108789, 2.120313, 2.085742, 2.091504, 2.062695, 2.091504, 2.07998, 2.108789, 2.131836, 2.126074, 5.047266, 5.416016, 5.761719, 6.061328, 6.591406,
   6.821875, 7.421094, 7.789844, 8.250781, 9.21875, 9.817969, 10.46328, 11.20078, 11.66172, 11.98438 };
   graph = new TGraph(43,Graph0_fx319,Graph0_fy319);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0319 = new TH1F("Graph_Graph0319","",100,0,104.34);
   Graph_Graph0319->SetMinimum(0.2);
   Graph_Graph0319->SetMaximum(100000);
   Graph_Graph0319->SetDirectory(nullptr);
   Graph_Graph0319->SetStats(0);
   Graph_Graph0319->SetLineWidth(2);
   Graph_Graph0319->SetMarkerStyle(20);
   Graph_Graph0319->SetMarkerSize(0.9);
   Graph_Graph0319->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0319->GetXaxis()->SetRange(2,96);
   Graph_Graph0319->GetXaxis()->SetLabelFont(42);
   Graph_Graph0319->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0319->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0319->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0319->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0319->GetXaxis()->SetTitleFont(42);
   Graph_Graph0319->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0319->GetYaxis()->SetLabelFont(42);
   Graph_Graph0319->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0319->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0319->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0319->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0319->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0319->GetYaxis()->SetTitleFont(42);
   Graph_Graph0319->GetZaxis()->SetLabelFont(42);
   Graph_Graph0319->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0319->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0319->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0319->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0319->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0319);
   
   graph->Draw("l");
   
   Double_t Graph_fx320[43] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 20, 25, 30, 35, 40,
   45, 50, 55, 60, 70, 75, 80, 85, 90, 95 };
   Double_t Graph_fy320[43] = { 1.34765e-242, 5.442234e-215, 6.516807e-193, 7.457258e-175, 4.391855e-147, 3.525382e-136, 9.884384e-127, 1.816395e-118, 3.539862e-111, 1.063689e-104, 6.622191e-99, 1.081886e-93, 5.616052e-89, 1.083216e-84, 8.834313e-81, 3.392987e-77, 6.717889e-74,
   4.845033e-68, 1.992007e-65, 5.398412e-63, 1.005424e-60, 9.627922e-55, 2.504434e-51, 6.983175e-47, 2.723738e-44, 7.366884e-41, 7.935222e-39, 4.249593e-36, 5.939061e-15, 4.212826e-11, 1.484404e-08, 9.470708e-07, 2.085396e-05,
   0.0002265619, 0.001504057, 0.006988374, 0.02487271, 0.1784886, 0.3886323, 0.7633243, 1.377742, 2.318235, 3.677837 };
   graph = new TGraph(43,Graph_fx320,Graph_fy320);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph320 = new TH1F("Graph_Graph320","",100,0,104.34);
   Graph_Graph320->SetMinimum(1.212885e-242);
   Graph_Graph320->SetMaximum(4.045621);
   Graph_Graph320->SetDirectory(nullptr);
   Graph_Graph320->SetStats(0);
   Graph_Graph320->SetLineWidth(2);
   Graph_Graph320->SetMarkerStyle(20);
   Graph_Graph320->SetMarkerSize(0.9);
   Graph_Graph320->GetXaxis()->SetLabelFont(42);
   Graph_Graph320->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph320->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph320->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph320->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph320->GetXaxis()->SetTitleFont(42);
   Graph_Graph320->GetYaxis()->SetLabelFont(42);
   Graph_Graph320->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph320->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph320->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph320->GetYaxis()->SetTickLength(0.02);
   Graph_Graph320->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph320->GetYaxis()->SetTitleFont(42);
   Graph_Graph320->GetZaxis()->SetLabelFont(42);
   Graph_Graph320->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph320->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph320->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph320->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph320->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph320);
   
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
   
   Double_t Graph_fx322[43] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 20, 25, 30, 35, 40,
   45, 50, 55, 60, 70, 75, 80, 85, 90, 95 };
   Double_t Graph_fy322[43] = { 1.482415e-242, 5.986458e-215, 7.168488e-193, 8.202983e-175, 4.83104e-147, 3.877921e-136, 1.087282e-126, 1.998035e-118, 3.893848e-111, 1.170058e-104, 7.284411e-99, 1.190075e-93, 6.177657e-89, 1.191538e-84, 9.717745e-81, 3.732286e-77, 7.389678e-74,
   5.329536e-68, 2.191207e-65, 5.938253e-63, 1.105966e-60, 1.059071e-54, 2.754878e-51, 7.681493e-47, 2.996112e-44, 8.103572e-41, 8.728744e-39, 4.674553e-36, 6.532967e-15, 4.634108e-11, 1.632845e-08, 1.041778e-06, 2.293935e-05,
   0.0002492181, 0.001654463, 0.007687212, 0.02735998, 0.1963374, 0.4274955, 0.8396568, 1.515516, 2.550058, 4.045621 };
   graph = new TGraph(43,Graph_fx322,Graph_fy322);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph322 = new TH1F("Graph_Graph322","",100,0,104.34);
   Graph_Graph322->SetMinimum(1.334173e-242);
   Graph_Graph322->SetMaximum(4.450183);
   Graph_Graph322->SetDirectory(nullptr);
   Graph_Graph322->SetStats(0);
   Graph_Graph322->SetLineWidth(2);
   Graph_Graph322->SetMarkerStyle(20);
   Graph_Graph322->SetMarkerSize(0.9);
   Graph_Graph322->GetXaxis()->SetLabelFont(42);
   Graph_Graph322->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph322->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph322->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph322->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph322->GetXaxis()->SetTitleFont(42);
   Graph_Graph322->GetYaxis()->SetLabelFont(42);
   Graph_Graph322->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph322->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph322->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph322->GetYaxis()->SetTickLength(0.02);
   Graph_Graph322->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph322->GetYaxis()->SetTitleFont(42);
   Graph_Graph322->GetZaxis()->SetLabelFont(42);
   Graph_Graph322->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph322->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph322->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph322->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph322->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph322);
   
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
   
   TH1F *Graph_copy = new TH1F("Graph_copy","",100,0,104.34);
   Graph_copy->SetMinimum(1e-06);
   Graph_copy->SetMaximum(1000);
   Graph_copy->SetDirectory(nullptr);
   Graph_copy->SetStats(0);
   Graph_copy->SetLineWidth(2);
   Graph_copy->SetMarkerStyle(20);
   Graph_copy->SetMarkerSize(0.9);
   Graph_copy->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_copy->GetXaxis()->SetRange(2,96);
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
   climits->Modified();
   climits->SetSelected(climits);
}
