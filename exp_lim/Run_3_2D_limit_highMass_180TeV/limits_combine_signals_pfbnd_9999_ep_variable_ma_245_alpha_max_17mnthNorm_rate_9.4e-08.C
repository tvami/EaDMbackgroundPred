#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_17mnthNorm_rate_9.4e-08()
{
//=========Macro generated from canvas: climits/climits
//=========  (Wed Jan 21 01:50:45 2026) by ROOT version 6.30/07
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
   
   Double_t Graph0_fx190[52] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 20, 25, 30, 35, 40,
   45, 50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150,
   160, 170, 180 };
   Double_t Graph0_fy190[52] = { 3.629883, 3.341797, 3.860352, 3.779688, 2.61582, 2.489063, 2.661914, 2.800195, 2.58125, 2.419922, 2.24707, 2.154883, 2.160645, 2.206738, 2.24707, 2.281641, 2.281641,
   2.17793, 2.108789, 2.120313, 2.085742, 2.091504, 2.062695, 2.091504, 2.07998, 2.108789, 2.131836, 2.126074, 5.047266, 5.416016, 5.761719, 6.061328, 6.591406,
   6.821875, 7.421094, 7.789844, 8.250781, 9.21875, 9.817969, 10.46328, 11.20078, 11.66172, 11.98438, 12.26094, 13.41328, 14.56563, 15.4875, 16.77812, 17.23906,
   18.34531, 20.09688, 20.65 };
   TGraph *graph = new TGraph(52,Graph0_fx190,Graph0_fy190);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0190 = new TH1F("Graph_Graph0190","",100,0,197.84);
   Graph_Graph0190->SetMinimum(0.2);
   Graph_Graph0190->SetMaximum(100000);
   Graph_Graph0190->SetDirectory(nullptr);
   Graph_Graph0190->SetStats(0);
   Graph_Graph0190->SetLineWidth(2);
   Graph_Graph0190->SetMarkerStyle(20);
   Graph_Graph0190->SetMarkerSize(0.9);
   Graph_Graph0190->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0190->GetXaxis()->SetRange(1,91);
   Graph_Graph0190->GetXaxis()->SetLabelFont(42);
   Graph_Graph0190->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0190->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0190->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0190->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0190->GetXaxis()->SetTitleFont(42);
   Graph_Graph0190->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0190->GetYaxis()->SetLabelFont(42);
   Graph_Graph0190->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0190->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0190->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0190->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0190->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0190->GetYaxis()->SetTitleFont(42);
   Graph_Graph0190->GetZaxis()->SetLabelFont(42);
   Graph_Graph0190->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0190->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0190->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0190->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0190->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0190);
   
   graph->Draw("al");
   
   Double_t Graph1_fx191[106] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 20, 25, 30, 35, 40,
   45, 50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150,
   160, 170, 180, 180, 180, 180, 170, 160, 150, 140, 130, 120, 110, 100, 95, 90,
   85, 80, 75, 70, 60, 55, 50, 45, 40, 35, 30, 25, 20, 9.5, 9, 8.5,
   8, 7.5, 7, 6.5, 6, 5.8, 5.6, 5.4, 5, 4.8, 4.6, 4.4, 4.2, 4, 3.8, 3.6,
   3.4, 3.2, 3, 2.8, 2.6, 2.2, 2, 1.8, 1.6 };
   Double_t Graph1_fy191[106] = { 7.709086, 7.130503, 8.058682, 7.95608, 6.063009, 5.788526, 6.060239, 6.271909, 5.89441, 5.787513, 5.524848, 5.344154, 5.386081, 5.428398, 5.45907, 5.528099, 5.591407,
   5.521086, 5.424519, 5.517878, 5.422197, 5.423058, 5.398688, 5.530281, 5.562932, 5.677265, 5.751809, 5.772446, 15.34795, 16.46926, 17.52049, 18.43156, 20.04344,
   20.74426, 22.56639, 23.68771, 25.08935, 28.03279, 29.85492, 31.81722, 34.05984, 35.46148, 36.44263, 37.28361, 40.78771, 44.29181, 47.09509, 51.01968, 52.42132,
   55.78525, 61.11148, 62.79344, 62.79344, 7.501758, 7.501758, 7.222314, 6.664508, 6.195288, 6.029639, 5.56582, 5.234521, 4.872794, 4.454169, 4.306885, 4.19093,
   4.025281, 3.760242, 3.528333, 3.38501, 2.997354, 2.829904, 2.695944, 2.478259, 2.420282, 2.225644, 2.160645, 2.052162, 1.971588, 0.9052425, 0.8993683, 0.8896454,
   0.8856167, 0.8986931, 0.9024292, 0.9232029, 0.9125122, 0.9193542, 0.9225952, 0.9698593, 1.051694, 1.060606, 1.044537, 1.017168, 0.9790421, 0.9764313, 1.035759, 1.124886,
   1.24021, 1.378221, 1.289365, 1.195917, 1.246602, 1.919373, 1.990494, 1.697006, 1.8433 };
   graph = new TGraph(106,Graph1_fx191,Graph1_fy191);
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
   
   TH1F *Graph_Graph1191 = new TH1F("Graph_Graph1191","Graph",106,0,197.84);
   Graph_Graph1191->SetMinimum(0.797055);
   Graph_Graph1191->SetMaximum(68.98423);
   Graph_Graph1191->SetDirectory(nullptr);
   Graph_Graph1191->SetStats(0);
   Graph_Graph1191->SetLineWidth(2);
   Graph_Graph1191->SetMarkerStyle(20);
   Graph_Graph1191->SetMarkerSize(0.9);
   Graph_Graph1191->GetXaxis()->SetLabelFont(42);
   Graph_Graph1191->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1191->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1191->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1191->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1191->GetXaxis()->SetTitleFont(42);
   Graph_Graph1191->GetYaxis()->SetLabelFont(42);
   Graph_Graph1191->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1191->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1191->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1191->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1191->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1191->GetYaxis()->SetTitleFont(42);
   Graph_Graph1191->GetZaxis()->SetLabelFont(42);
   Graph_Graph1191->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1191->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1191->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1191->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1191->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1191);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx192[106] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 20, 25, 30, 35, 40,
   45, 50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150,
   160, 170, 180, 180, 180, 180, 170, 160, 150, 140, 130, 120, 110, 100, 95, 90,
   85, 80, 75, 70, 60, 55, 50, 45, 40, 35, 30, 25, 20, 9.5, 9, 8.5,
   8, 7.5, 7, 6.5, 6, 5.8, 5.6, 5.4, 5, 4.8, 4.6, 4.4, 4.2, 4, 3.8, 3.6,
   3.4, 3.2, 3, 2.8, 2.6, 2.2, 2, 1.8, 1.6 };
   Double_t Graph2_fy192[106] = { 5.366147, 4.953583, 5.660692, 5.565008, 4.033861, 3.848309, 4.073111, 4.245635, 3.954828, 3.799287, 3.581651, 3.443301, 3.46112, 3.508569, 3.545823, 3.595827, 3.623111,
   3.523534, 3.436893, 3.472577, 3.415959, 3.417059, 3.386436, 3.450406, 3.456268, 3.516748, 3.559431, 3.558285, 8.930158, 9.820063, 10.49281, 11.08676, 12.05632,
   12.58664, 13.66264, 14.40363, 15.22303, 16.97223, 18.23196, 19.51372, 20.79984, 21.79526, 22.2072, 22.62193, 24.85499, 27.22253, 28.94548, 31.29072, 31.94421,
   34.14036, 37.4801, 38.34703, 38.34703, 11.81602, 11.81602, 11.44678, 10.49727, 9.819027, 9.556486, 8.821371, 8.29629, 7.675141, 7.015765, 6.826061, 6.642283,
   6.379742, 5.959677, 5.592119, 5.299206, 4.721135, 4.457384, 4.246384, 3.903508, 3.788932, 3.484228, 3.342247, 3.155927, 3.004824, 1.324903, 1.323029, 1.318251,
   1.296179, 1.318041, 1.310335, 1.333934, 1.320393, 1.341566, 1.339616, 1.40401, 1.493706, 1.499416, 1.476697, 1.44467, 1.40368, 1.399937, 1.471074, 1.590289,
   1.732623, 1.911461, 1.793348, 1.670744, 1.749362, 2.631524, 2.69169, 2.313803, 2.513268 };
   graph = new TGraph(106,Graph2_fx192,Graph2_fy192);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2192 = new TH1F("Graph_Graph2192","Graph",106,0,197.84);
   Graph_Graph2192->SetMinimum(1.166561);
   Graph_Graph2192->SetMaximum(42.05212);
   Graph_Graph2192->SetDirectory(nullptr);
   Graph_Graph2192->SetStats(0);
   Graph_Graph2192->SetLineWidth(2);
   Graph_Graph2192->SetMarkerStyle(20);
   Graph_Graph2192->SetMarkerSize(0.9);
   Graph_Graph2192->GetXaxis()->SetLabelFont(42);
   Graph_Graph2192->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2192->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2192->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2192->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2192->GetXaxis()->SetTitleFont(42);
   Graph_Graph2192->GetYaxis()->SetLabelFont(42);
   Graph_Graph2192->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2192->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2192->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2192->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2192->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2192->GetYaxis()->SetTitleFont(42);
   Graph_Graph2192->GetZaxis()->SetLabelFont(42);
   Graph_Graph2192->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2192->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2192->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2192->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2192->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2192);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx193[52] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 20, 25, 30, 35, 40,
   45, 50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150,
   160, 170, 180 };
   Double_t Graph0_fy193[52] = { 3.629883, 3.341797, 3.860352, 3.779688, 2.61582, 2.489063, 2.661914, 2.800195, 2.58125, 2.419922, 2.24707, 2.154883, 2.160645, 2.206738, 2.24707, 2.281641, 2.281641,
   2.17793, 2.108789, 2.120313, 2.085742, 2.091504, 2.062695, 2.091504, 2.07998, 2.108789, 2.131836, 2.126074, 5.047266, 5.416016, 5.761719, 6.061328, 6.591406,
   6.821875, 7.421094, 7.789844, 8.250781, 9.21875, 9.817969, 10.46328, 11.20078, 11.66172, 11.98438, 12.26094, 13.41328, 14.56563, 15.4875, 16.77812, 17.23906,
   18.34531, 20.09688, 20.65 };
   graph = new TGraph(52,Graph0_fx193,Graph0_fy193);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0193 = new TH1F("Graph_Graph0193","",100,0,197.84);
   Graph_Graph0193->SetMinimum(0.2);
   Graph_Graph0193->SetMaximum(100000);
   Graph_Graph0193->SetDirectory(nullptr);
   Graph_Graph0193->SetStats(0);
   Graph_Graph0193->SetLineWidth(2);
   Graph_Graph0193->SetMarkerStyle(20);
   Graph_Graph0193->SetMarkerSize(0.9);
   Graph_Graph0193->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0193->GetXaxis()->SetRange(1,91);
   Graph_Graph0193->GetXaxis()->SetLabelFont(42);
   Graph_Graph0193->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0193->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0193->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0193->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0193->GetXaxis()->SetTitleFont(42);
   Graph_Graph0193->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0193->GetYaxis()->SetLabelFont(42);
   Graph_Graph0193->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0193->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0193->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0193->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0193->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0193->GetYaxis()->SetTitleFont(42);
   Graph_Graph0193->GetZaxis()->SetLabelFont(42);
   Graph_Graph0193->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0193->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0193->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0193->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0193->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0193);
   
   graph->Draw("l");
   
   Double_t Graph_fx194[52] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 20, 25, 30, 35, 40,
   45, 50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150,
   160, 170, 180 };
   Double_t Graph_fy194[52] = { 1.125389e-24, 1.727798e-21, 6.021993e-19, 7.149479e-17, 1.080327e-13, 1.894287e-12, 2.252217e-11, 1.953727e-10, 1.307723e-09, 7.054331e-09, 3.173837e-08, 1.224086e-07, 4.137816e-07, 1.24835e-06, 3.411987e-06, 8.55452e-06, 1.98812e-05,
   8.849121e-05, 0.0001718609, 0.0003182946, 0.0005648644, 0.002541679, 0.005966537, 0.01799307, 0.03409894, 0.07909654, 0.1297561, 0.2511382, 31.45248, 67.9243, 108.3129, 146.2155, 178.6125,
   204.6957, 224.7734, 239.6049, 250.0586, 261.0181, 262.8425, 262.9211, 261.649, 259.3421, 256.251, 252.5746, 244.0603, 234.6968, 225.0385, 215.4238, 206.0543,
   197.0456, 188.4581, 180.3182 };
   graph = new TGraph(52,Graph_fx194,Graph_fy194);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph194 = new TH1F("Graph_Graph194","",100,0,197.84);
   Graph_Graph194->SetMinimum(1.01285e-24);
   Graph_Graph194->SetMaximum(289.2132);
   Graph_Graph194->SetDirectory(nullptr);
   Graph_Graph194->SetStats(0);
   Graph_Graph194->SetLineWidth(2);
   Graph_Graph194->SetMarkerStyle(20);
   Graph_Graph194->SetMarkerSize(0.9);
   Graph_Graph194->GetXaxis()->SetLabelFont(42);
   Graph_Graph194->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph194->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph194->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph194->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph194->GetXaxis()->SetTitleFont(42);
   Graph_Graph194->GetYaxis()->SetLabelFont(42);
   Graph_Graph194->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph194->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph194->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph194->GetYaxis()->SetTickLength(0.02);
   Graph_Graph194->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph194->GetYaxis()->SetTitleFont(42);
   Graph_Graph194->GetZaxis()->SetLabelFont(42);
   Graph_Graph194->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph194->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph194->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph194->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph194->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph194);
   
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
   
   Double_t Graph_fx196[52] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 20, 25, 30, 35, 40,
   45, 50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150,
   160, 170, 180 };
   Double_t Graph_fy196[52] = { 1.237928e-24, 1.900578e-21, 6.624193e-19, 7.864426e-17, 1.18836e-13, 2.083716e-12, 2.477438e-11, 2.1491e-10, 1.438495e-09, 7.759764e-09, 3.491221e-08, 1.346495e-07, 4.551597e-07, 1.373185e-06, 3.753186e-06, 9.409972e-06, 2.186933e-05,
   9.734033e-05, 0.000189047, 0.0003501241, 0.0006213509, 0.002795847, 0.006563191, 0.01979238, 0.03750884, 0.08700619, 0.1427317, 0.276252, 34.59773, 74.71673, 119.1442, 160.8371, 196.4737,
   225.1653, 247.2508, 263.5654, 275.0644, 287.1199, 289.1268, 289.2132, 287.8139, 285.2763, 281.8761, 277.8321, 268.4663, 258.1665, 247.5424, 236.9661, 226.6598,
   216.7501, 207.304, 198.35 };
   graph = new TGraph(52,Graph_fx196,Graph_fy196);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph196 = new TH1F("Graph_Graph196","",100,0,197.84);
   Graph_Graph196->SetMinimum(1.114135e-24);
   Graph_Graph196->SetMaximum(318.1345);
   Graph_Graph196->SetDirectory(nullptr);
   Graph_Graph196->SetStats(0);
   Graph_Graph196->SetLineWidth(2);
   Graph_Graph196->SetMarkerStyle(20);
   Graph_Graph196->SetMarkerSize(0.9);
   Graph_Graph196->GetXaxis()->SetLabelFont(42);
   Graph_Graph196->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph196->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph196->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph196->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph196->GetXaxis()->SetTitleFont(42);
   Graph_Graph196->GetYaxis()->SetLabelFont(42);
   Graph_Graph196->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph196->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph196->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph196->GetYaxis()->SetTickLength(0.02);
   Graph_Graph196->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph196->GetYaxis()->SetTitleFont(42);
   Graph_Graph196->GetZaxis()->SetLabelFont(42);
   Graph_Graph196->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph196->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph196->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph196->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph196->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph196);
   
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
   line = new TLine(15.15563,0,15.15563,3.387057);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(15.15063,0,"  15.16 TeV");

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
