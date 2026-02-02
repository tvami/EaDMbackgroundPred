#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_17mnthNorm_rate_1.34e-07()
{
//=========Macro generated from canvas: climits/climits
//=========  (Mon Feb  2 15:37:16 2026) by ROOT version 6.30/07
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
   
   Double_t Graph0_fx218[52] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 20, 25, 30, 35, 40,
   45, 50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150,
   160, 170, 180 };
   Double_t Graph0_fy218[52] = { 3.629883, 3.341797, 3.860352, 3.779688, 2.61582, 2.489063, 2.661914, 2.800195, 2.58125, 2.419922, 2.24707, 2.154883, 2.160645, 2.206738, 2.24707, 2.281641, 2.281641,
   2.17793, 2.108789, 2.120313, 2.085742, 2.091504, 2.062695, 2.091504, 2.07998, 2.108789, 2.131836, 2.126074, 5.047266, 5.416016, 5.761719, 6.061328, 6.591406,
   6.821875, 7.421094, 7.789844, 8.250781, 9.21875, 9.817969, 10.46328, 11.20078, 11.66172, 11.98438, 12.26094, 13.41328, 14.56563, 15.4875, 16.77812, 17.23906,
   18.34531, 20.09688, 20.65 };
   TGraph *graph = new TGraph(52,Graph0_fx218,Graph0_fy218);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0218 = new TH1F("Graph_Graph0218","",100,0,197.84);
   Graph_Graph0218->SetMinimum(0.2);
   Graph_Graph0218->SetMaximum(100000);
   Graph_Graph0218->SetDirectory(nullptr);
   Graph_Graph0218->SetStats(0);
   Graph_Graph0218->SetLineWidth(2);
   Graph_Graph0218->SetMarkerStyle(20);
   Graph_Graph0218->SetMarkerSize(0.9);
   Graph_Graph0218->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0218->GetXaxis()->SetRange(1,91);
   Graph_Graph0218->GetXaxis()->SetLabelFont(42);
   Graph_Graph0218->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0218->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0218->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0218->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0218->GetXaxis()->SetTitleFont(42);
   Graph_Graph0218->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0218->GetYaxis()->SetLabelFont(42);
   Graph_Graph0218->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0218->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0218->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0218->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0218->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0218->GetYaxis()->SetTitleFont(42);
   Graph_Graph0218->GetZaxis()->SetLabelFont(42);
   Graph_Graph0218->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0218->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0218->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0218->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0218->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0218);
   
   graph->Draw("al");
   
   Double_t Graph1_fx219[106] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 20, 25, 30, 35, 40,
   45, 50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150,
   160, 170, 180, 180, 180, 180, 170, 160, 150, 140, 130, 120, 110, 100, 95, 90,
   85, 80, 75, 70, 60, 55, 50, 45, 40, 35, 30, 25, 20, 9.5, 9, 8.5,
   8, 7.5, 7, 6.5, 6, 5.8, 5.6, 5.4, 5, 4.8, 4.6, 4.4, 4.2, 4, 3.8, 3.6,
   3.4, 3.2, 3, 2.8, 2.6, 2.2, 2, 1.8, 1.6 };
   Double_t Graph1_fy219[106] = { 7.709086, 7.130503, 8.058682, 7.95608, 6.063009, 5.788526, 6.060239, 6.271909, 5.89441, 5.787513, 5.524848, 5.344154, 5.386081, 5.428398, 5.45907, 5.528099, 5.591407,
   5.521086, 5.424519, 5.517878, 5.422197, 5.423058, 5.398688, 5.530281, 5.562932, 5.677265, 5.751809, 5.772446, 15.34795, 16.46926, 17.52049, 18.43156, 20.04344,
   20.74426, 22.56639, 23.68771, 25.08935, 28.03279, 29.85492, 31.81722, 34.05984, 35.46148, 36.44263, 37.28361, 40.78771, 44.29181, 47.09509, 51.01968, 52.42132,
   55.78525, 61.11148, 62.79344, 62.79344, 7.501758, 7.501758, 7.222314, 6.664508, 6.195288, 6.029639, 5.56582, 5.234521, 4.872794, 4.454169, 4.306885, 4.19093,
   4.025281, 3.760242, 3.528333, 3.38501, 2.997354, 2.829904, 2.695944, 2.478259, 2.420282, 2.225644, 2.160645, 2.052162, 1.971588, 0.9052425, 0.8993683, 0.8896454,
   0.8856167, 0.8986931, 0.9024292, 0.9232029, 0.9125122, 0.9193542, 0.9225952, 0.9698593, 1.051694, 1.060606, 1.044537, 1.017168, 0.9790421, 0.9764313, 1.035759, 1.124886,
   1.24021, 1.378221, 1.289365, 1.195917, 1.246602, 1.919373, 1.990494, 1.697006, 1.8433 };
   graph = new TGraph(106,Graph1_fx219,Graph1_fy219);
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
   
   TH1F *Graph_Graph1219 = new TH1F("Graph_Graph1219","Graph",106,0,197.84);
   Graph_Graph1219->SetMinimum(0.797055);
   Graph_Graph1219->SetMaximum(68.98423);
   Graph_Graph1219->SetDirectory(nullptr);
   Graph_Graph1219->SetStats(0);
   Graph_Graph1219->SetLineWidth(2);
   Graph_Graph1219->SetMarkerStyle(20);
   Graph_Graph1219->SetMarkerSize(0.9);
   Graph_Graph1219->GetXaxis()->SetLabelFont(42);
   Graph_Graph1219->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1219->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1219->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1219->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1219->GetXaxis()->SetTitleFont(42);
   Graph_Graph1219->GetYaxis()->SetLabelFont(42);
   Graph_Graph1219->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1219->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1219->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1219->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1219->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1219->GetYaxis()->SetTitleFont(42);
   Graph_Graph1219->GetZaxis()->SetLabelFont(42);
   Graph_Graph1219->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1219->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1219->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1219->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1219->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1219);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx220[106] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 20, 25, 30, 35, 40,
   45, 50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150,
   160, 170, 180, 180, 180, 180, 170, 160, 150, 140, 130, 120, 110, 100, 95, 90,
   85, 80, 75, 70, 60, 55, 50, 45, 40, 35, 30, 25, 20, 9.5, 9, 8.5,
   8, 7.5, 7, 6.5, 6, 5.8, 5.6, 5.4, 5, 4.8, 4.6, 4.4, 4.2, 4, 3.8, 3.6,
   3.4, 3.2, 3, 2.8, 2.6, 2.2, 2, 1.8, 1.6 };
   Double_t Graph2_fy220[106] = { 5.366147, 4.953583, 5.660692, 5.565008, 4.033861, 3.848309, 4.073111, 4.245635, 3.954828, 3.799287, 3.581651, 3.443301, 3.46112, 3.508569, 3.545823, 3.595827, 3.623111,
   3.523534, 3.436893, 3.472577, 3.415959, 3.417059, 3.386436, 3.450406, 3.456268, 3.516748, 3.559431, 3.558285, 8.930158, 9.820063, 10.49281, 11.08676, 12.05632,
   12.58664, 13.66264, 14.40363, 15.22303, 16.97223, 18.23196, 19.51372, 20.79984, 21.79526, 22.2072, 22.62193, 24.85499, 27.22253, 28.94548, 31.29072, 31.94421,
   34.14036, 37.4801, 38.34703, 38.34703, 11.81602, 11.81602, 11.44678, 10.49727, 9.819027, 9.556486, 8.821371, 8.29629, 7.675141, 7.015765, 6.826061, 6.642283,
   6.379742, 5.959677, 5.592119, 5.299206, 4.721135, 4.457384, 4.246384, 3.903508, 3.788932, 3.484228, 3.342247, 3.155927, 3.004824, 1.324903, 1.323029, 1.318251,
   1.296179, 1.318041, 1.310335, 1.333934, 1.320393, 1.341566, 1.339616, 1.40401, 1.493706, 1.499416, 1.476697, 1.44467, 1.40368, 1.399937, 1.471074, 1.590289,
   1.732623, 1.911461, 1.793348, 1.670744, 1.749362, 2.631524, 2.69169, 2.313803, 2.513268 };
   graph = new TGraph(106,Graph2_fx220,Graph2_fy220);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2220 = new TH1F("Graph_Graph2220","Graph",106,0,197.84);
   Graph_Graph2220->SetMinimum(1.166561);
   Graph_Graph2220->SetMaximum(42.05212);
   Graph_Graph2220->SetDirectory(nullptr);
   Graph_Graph2220->SetStats(0);
   Graph_Graph2220->SetLineWidth(2);
   Graph_Graph2220->SetMarkerStyle(20);
   Graph_Graph2220->SetMarkerSize(0.9);
   Graph_Graph2220->GetXaxis()->SetLabelFont(42);
   Graph_Graph2220->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2220->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2220->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2220->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2220->GetXaxis()->SetTitleFont(42);
   Graph_Graph2220->GetYaxis()->SetLabelFont(42);
   Graph_Graph2220->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2220->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2220->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2220->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2220->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2220->GetYaxis()->SetTitleFont(42);
   Graph_Graph2220->GetZaxis()->SetLabelFont(42);
   Graph_Graph2220->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2220->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2220->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2220->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2220->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2220);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx221[52] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 20, 25, 30, 35, 40,
   45, 50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150,
   160, 170, 180 };
   Double_t Graph0_fy221[52] = { 3.629883, 3.341797, 3.860352, 3.779688, 2.61582, 2.489063, 2.661914, 2.800195, 2.58125, 2.419922, 2.24707, 2.154883, 2.160645, 2.206738, 2.24707, 2.281641, 2.281641,
   2.17793, 2.108789, 2.120313, 2.085742, 2.091504, 2.062695, 2.091504, 2.07998, 2.108789, 2.131836, 2.126074, 5.047266, 5.416016, 5.761719, 6.061328, 6.591406,
   6.821875, 7.421094, 7.789844, 8.250781, 9.21875, 9.817969, 10.46328, 11.20078, 11.66172, 11.98438, 12.26094, 13.41328, 14.56563, 15.4875, 16.77812, 17.23906,
   18.34531, 20.09688, 20.65 };
   graph = new TGraph(52,Graph0_fx221,Graph0_fy221);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0221 = new TH1F("Graph_Graph0221","",100,0,197.84);
   Graph_Graph0221->SetMinimum(0.2);
   Graph_Graph0221->SetMaximum(100000);
   Graph_Graph0221->SetDirectory(nullptr);
   Graph_Graph0221->SetStats(0);
   Graph_Graph0221->SetLineWidth(2);
   Graph_Graph0221->SetMarkerStyle(20);
   Graph_Graph0221->SetMarkerSize(0.9);
   Graph_Graph0221->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0221->GetXaxis()->SetRange(1,91);
   Graph_Graph0221->GetXaxis()->SetLabelFont(42);
   Graph_Graph0221->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0221->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0221->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0221->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0221->GetXaxis()->SetTitleFont(42);
   Graph_Graph0221->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0221->GetYaxis()->SetLabelFont(42);
   Graph_Graph0221->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0221->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0221->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0221->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0221->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0221->GetYaxis()->SetTitleFont(42);
   Graph_Graph0221->GetZaxis()->SetLabelFont(42);
   Graph_Graph0221->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0221->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0221->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0221->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0221->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0221);
   
   graph->Draw("l");
   
   Double_t Graph_fx222[52] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 20, 25, 30, 35, 40,
   45, 50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150,
   160, 170, 180 };
   Double_t Graph_fy222[52] = { 2.556241e-54, 9.035878e-48, 1.541559e-42, 2.905312e-38, 1.066999e-31, 4.000803e-29, 6.76174e-27, 5.983645e-25, 3.108895e-23, 1.036686e-21, 2.380143e-20, 3.979925e-19, 5.07233e-18, 5.113859e-17, 4.205644e-16, 2.894448e-15, 1.703234e-14,
   3.953636e-13, 1.605022e-12, 5.905512e-12, 1.988941e-11, 4.845791e-10, 2.986394e-09, 3.166418e-08, 1.24947e-07, 7.662486e-07, 2.236396e-06, 9.387534e-06, 0.4929394, 3.245769, 10.88283, 24.9807, 45.43965,
   70.97724, 99.84931, 130.3538, 161.0744, 219.2452, 245.5076, 269.4889, 291.0946, 310.3359, 327.2938, 342.0925, 365.818, 382.7837, 394.22, 401.2151, 404.688,
   405.3949, 403.9488, 400.8417 };
   graph = new TGraph(52,Graph_fx222,Graph_fy222);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph222 = new TH1F("Graph_Graph222","",100,0,197.84);
   Graph_Graph222->SetMinimum(2.300617e-54);
   Graph_Graph222->SetMaximum(445.9344);
   Graph_Graph222->SetDirectory(nullptr);
   Graph_Graph222->SetStats(0);
   Graph_Graph222->SetLineWidth(2);
   Graph_Graph222->SetMarkerStyle(20);
   Graph_Graph222->SetMarkerSize(0.9);
   Graph_Graph222->GetXaxis()->SetLabelFont(42);
   Graph_Graph222->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph222->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph222->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph222->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph222->GetXaxis()->SetTitleFont(42);
   Graph_Graph222->GetYaxis()->SetLabelFont(42);
   Graph_Graph222->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph222->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph222->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph222->GetYaxis()->SetTickLength(0.02);
   Graph_Graph222->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph222->GetYaxis()->SetTitleFont(42);
   Graph_Graph222->GetZaxis()->SetLabelFont(42);
   Graph_Graph222->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph222->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph222->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph222->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph222->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph222);
   
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
   
   Double_t Graph_fx224[52] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 20, 25, 30, 35, 40,
   45, 50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150,
   160, 170, 180 };
   Double_t Graph_fy224[52] = { 2.811865e-54, 9.939466e-48, 1.695715e-42, 3.195844e-38, 1.173699e-31, 4.400884e-29, 7.437914e-27, 6.582009e-25, 3.419785e-23, 1.140354e-21, 2.618157e-20, 4.377918e-19, 5.579563e-18, 5.625244e-17, 4.626209e-16, 3.183893e-15, 1.873558e-14,
   4.348999e-13, 1.765524e-12, 6.496064e-12, 2.187835e-11, 5.33037e-10, 3.285033e-09, 3.483059e-08, 1.374417e-07, 8.428734e-07, 2.460036e-06, 1.032629e-05, 0.5422333, 3.570346, 11.97111, 27.47877, 49.98362,
   78.07496, 109.8342, 143.3892, 177.1818, 241.1697, 270.0584, 296.4378, 320.2041, 341.3695, 360.0232, 376.3018, 402.3998, 421.0621, 433.642, 441.3366, 445.1568,
   445.9344, 444.3437, 440.9258 };
   graph = new TGraph(52,Graph_fx224,Graph_fy224);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph224 = new TH1F("Graph_Graph224","",100,0,197.84);
   Graph_Graph224->SetMinimum(2.530678e-54);
   Graph_Graph224->SetMaximum(490.5279);
   Graph_Graph224->SetDirectory(nullptr);
   Graph_Graph224->SetStats(0);
   Graph_Graph224->SetLineWidth(2);
   Graph_Graph224->SetMarkerStyle(20);
   Graph_Graph224->SetMarkerSize(0.9);
   Graph_Graph224->GetXaxis()->SetLabelFont(42);
   Graph_Graph224->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph224->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph224->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph224->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph224->GetXaxis()->SetTitleFont(42);
   Graph_Graph224->GetYaxis()->SetLabelFont(42);
   Graph_Graph224->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph224->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph224->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph224->GetYaxis()->SetTickLength(0.02);
   Graph_Graph224->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph224->GetYaxis()->SetTitleFont(42);
   Graph_Graph224->GetZaxis()->SetLabelFont(42);
   Graph_Graph224->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph224->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph224->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph224->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph224->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph224);
   
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
   line = new TLine(27.23008,0,27.23008,5.567565);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(27.22508,0,"  27.23 TeV");

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
   
   TPaveText *pt = new TPaveText(0.2,0.75,0.43,0.88,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextAlign(12);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("#varepsilon = 1.34e-07");
   pt_LaTex = pt->AddText("#alpha_{#chi} = 0.245");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
