#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_17mnthNorm_rate_1.04e-07()
{
//=========Macro generated from canvas: climits/climits
//=========  (Wed Jan 21 01:50:46 2026) by ROOT version 6.30/07
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
   
   Double_t Graph0_fx197[52] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 20, 25, 30, 35, 40,
   45, 50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150,
   160, 170, 180 };
   Double_t Graph0_fy197[52] = { 3.629883, 3.341797, 3.860352, 3.779688, 2.61582, 2.489063, 2.661914, 2.800195, 2.58125, 2.419922, 2.24707, 2.154883, 2.160645, 2.206738, 2.24707, 2.281641, 2.281641,
   2.17793, 2.108789, 2.120313, 2.085742, 2.091504, 2.062695, 2.091504, 2.07998, 2.108789, 2.131836, 2.126074, 5.047266, 5.416016, 5.761719, 6.061328, 6.591406,
   6.821875, 7.421094, 7.789844, 8.250781, 9.21875, 9.817969, 10.46328, 11.20078, 11.66172, 11.98438, 12.26094, 13.41328, 14.56563, 15.4875, 16.77812, 17.23906,
   18.34531, 20.09688, 20.65 };
   TGraph *graph = new TGraph(52,Graph0_fx197,Graph0_fy197);
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
   
   Double_t Graph1_fx198[106] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 20, 25, 30, 35, 40,
   45, 50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150,
   160, 170, 180, 180, 180, 180, 170, 160, 150, 140, 130, 120, 110, 100, 95, 90,
   85, 80, 75, 70, 60, 55, 50, 45, 40, 35, 30, 25, 20, 9.5, 9, 8.5,
   8, 7.5, 7, 6.5, 6, 5.8, 5.6, 5.4, 5, 4.8, 4.6, 4.4, 4.2, 4, 3.8, 3.6,
   3.4, 3.2, 3, 2.8, 2.6, 2.2, 2, 1.8, 1.6 };
   Double_t Graph1_fy198[106] = { 7.709086, 7.130503, 8.058682, 7.95608, 6.063009, 5.788526, 6.060239, 6.271909, 5.89441, 5.787513, 5.524848, 5.344154, 5.386081, 5.428398, 5.45907, 5.528099, 5.591407,
   5.521086, 5.424519, 5.517878, 5.422197, 5.423058, 5.398688, 5.530281, 5.562932, 5.677265, 5.751809, 5.772446, 15.34795, 16.46926, 17.52049, 18.43156, 20.04344,
   20.74426, 22.56639, 23.68771, 25.08935, 28.03279, 29.85492, 31.81722, 34.05984, 35.46148, 36.44263, 37.28361, 40.78771, 44.29181, 47.09509, 51.01968, 52.42132,
   55.78525, 61.11148, 62.79344, 62.79344, 7.501758, 7.501758, 7.222314, 6.664508, 6.195288, 6.029639, 5.56582, 5.234521, 4.872794, 4.454169, 4.306885, 4.19093,
   4.025281, 3.760242, 3.528333, 3.38501, 2.997354, 2.829904, 2.695944, 2.478259, 2.420282, 2.225644, 2.160645, 2.052162, 1.971588, 0.9052425, 0.8993683, 0.8896454,
   0.8856167, 0.8986931, 0.9024292, 0.9232029, 0.9125122, 0.9193542, 0.9225952, 0.9698593, 1.051694, 1.060606, 1.044537, 1.017168, 0.9790421, 0.9764313, 1.035759, 1.124886,
   1.24021, 1.378221, 1.289365, 1.195917, 1.246602, 1.919373, 1.990494, 1.697006, 1.8433 };
   graph = new TGraph(106,Graph1_fx198,Graph1_fy198);
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
   
   TH1F *Graph_Graph1198 = new TH1F("Graph_Graph1198","Graph",106,0,197.84);
   Graph_Graph1198->SetMinimum(0.797055);
   Graph_Graph1198->SetMaximum(68.98423);
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
   
   Double_t Graph2_fx199[106] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 20, 25, 30, 35, 40,
   45, 50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150,
   160, 170, 180, 180, 180, 180, 170, 160, 150, 140, 130, 120, 110, 100, 95, 90,
   85, 80, 75, 70, 60, 55, 50, 45, 40, 35, 30, 25, 20, 9.5, 9, 8.5,
   8, 7.5, 7, 6.5, 6, 5.8, 5.6, 5.4, 5, 4.8, 4.6, 4.4, 4.2, 4, 3.8, 3.6,
   3.4, 3.2, 3, 2.8, 2.6, 2.2, 2, 1.8, 1.6 };
   Double_t Graph2_fy199[106] = { 5.366147, 4.953583, 5.660692, 5.565008, 4.033861, 3.848309, 4.073111, 4.245635, 3.954828, 3.799287, 3.581651, 3.443301, 3.46112, 3.508569, 3.545823, 3.595827, 3.623111,
   3.523534, 3.436893, 3.472577, 3.415959, 3.417059, 3.386436, 3.450406, 3.456268, 3.516748, 3.559431, 3.558285, 8.930158, 9.820063, 10.49281, 11.08676, 12.05632,
   12.58664, 13.66264, 14.40363, 15.22303, 16.97223, 18.23196, 19.51372, 20.79984, 21.79526, 22.2072, 22.62193, 24.85499, 27.22253, 28.94548, 31.29072, 31.94421,
   34.14036, 37.4801, 38.34703, 38.34703, 11.81602, 11.81602, 11.44678, 10.49727, 9.819027, 9.556486, 8.821371, 8.29629, 7.675141, 7.015765, 6.826061, 6.642283,
   6.379742, 5.959677, 5.592119, 5.299206, 4.721135, 4.457384, 4.246384, 3.903508, 3.788932, 3.484228, 3.342247, 3.155927, 3.004824, 1.324903, 1.323029, 1.318251,
   1.296179, 1.318041, 1.310335, 1.333934, 1.320393, 1.341566, 1.339616, 1.40401, 1.493706, 1.499416, 1.476697, 1.44467, 1.40368, 1.399937, 1.471074, 1.590289,
   1.732623, 1.911461, 1.793348, 1.670744, 1.749362, 2.631524, 2.69169, 2.313803, 2.513268 };
   graph = new TGraph(106,Graph2_fx199,Graph2_fy199);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2199 = new TH1F("Graph_Graph2199","Graph",106,0,197.84);
   Graph_Graph2199->SetMinimum(1.166561);
   Graph_Graph2199->SetMaximum(42.05212);
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
   
   Double_t Graph0_fx200[52] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 20, 25, 30, 35, 40,
   45, 50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150,
   160, 170, 180 };
   Double_t Graph0_fy200[52] = { 3.629883, 3.341797, 3.860352, 3.779688, 2.61582, 2.489063, 2.661914, 2.800195, 2.58125, 2.419922, 2.24707, 2.154883, 2.160645, 2.206738, 2.24707, 2.281641, 2.281641,
   2.17793, 2.108789, 2.120313, 2.085742, 2.091504, 2.062695, 2.091504, 2.07998, 2.108789, 2.131836, 2.126074, 5.047266, 5.416016, 5.761719, 6.061328, 6.591406,
   6.821875, 7.421094, 7.789844, 8.250781, 9.21875, 9.817969, 10.46328, 11.20078, 11.66172, 11.98438, 12.26094, 13.41328, 14.56563, 15.4875, 16.77812, 17.23906,
   18.34531, 20.09688, 20.65 };
   graph = new TGraph(52,Graph0_fx200,Graph0_fy200);
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
   
   Double_t Graph_fx201[52] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 20, 25, 30, 35, 40,
   45, 50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150,
   160, 170, 180 };
   Double_t Graph_fy201[52] = { 4.543639e-31, 3.745769e-27, 5.008937e-24, 1.786746e-21, 1.466882e-17, 5.000988e-16, 1.058004e-14, 1.519586e-13, 1.587078e-12, 1.271424e-11, 8.148776e-11, 4.32141e-10, 1.94858e-09, 7.639088e-09, 2.65203e-08, 8.278986e-08, 2.354062e-07,
   1.499675e-06, 3.418164e-06, 7.348006e-06, 1.498628e-05, 9.730417e-05, 0.0002816692, 0.001116015, 0.002480039, 0.007104653, 0.01320793, 0.03024227, 14.05125, 38.65429, 72.43153, 109.7222, 146.1345,
   179.1215, 207.5593, 231.2088, 250.309, 276.7783, 285.212, 291.1099, 294.9032, 296.9637, 297.6069, 297.0977, 293.4691, 287.4323, 279.9131, 271.5409, 262.7416,
   253.801, 244.9097, 236.1922 };
   graph = new TGraph(52,Graph_fx201,Graph_fy201);
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
   
   Double_t Graph_fx203[52] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 20, 25, 30, 35, 40,
   45, 50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150,
   160, 170, 180 };
   Double_t Graph_fy203[52] = { 4.998003e-31, 4.120346e-27, 5.50983e-24, 1.965421e-21, 1.61357e-17, 5.501086e-16, 1.163805e-14, 1.671544e-13, 1.745786e-12, 1.398567e-11, 8.963653e-11, 4.753551e-10, 2.143438e-09, 8.402997e-09, 2.917233e-08, 9.106884e-08, 2.589468e-07,
   1.649643e-06, 3.75998e-06, 8.082806e-06, 1.648491e-05, 0.0001070346, 0.0003098362, 0.001227617, 0.002728043, 0.007815118, 0.01452873, 0.0332665, 15.45638, 42.51972, 79.67468, 120.6944, 160.748,
   197.0336, 228.3152, 254.3296, 275.3399, 304.4561, 313.7332, 320.2209, 324.3935, 326.6601, 327.3676, 326.8075, 322.8161, 316.1755, 307.9044, 298.695, 289.0157,
   279.1811, 269.4007, 259.8115 };
   graph = new TGraph(52,Graph_fx203,Graph_fy203);
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
   line = new TLine(17.96261,0,17.96261,4.267757);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(17.95761,0,"  17.96 TeV");

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
      tex = new TLatex(0.95,0.915,"Run 3 Cosmics");
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
