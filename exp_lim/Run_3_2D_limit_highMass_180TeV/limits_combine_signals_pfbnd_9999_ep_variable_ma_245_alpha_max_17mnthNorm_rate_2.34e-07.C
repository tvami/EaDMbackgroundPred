#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_17mnthNorm_rate_2.34e-07()
{
//=========Macro generated from canvas: climits/climits
//=========  (Wed Jan 21 00:30:39 2026) by ROOT version 6.30/07
   TCanvas *climits = new TCanvas("climits", "climits",0,0,700,600);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   climits->SetHighLightColor(2);
   climits->Range(-35.6112,-1.838764,201.7968,5.759863);
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
   
   Double_t Graph0_fx288[52] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 20, 25, 30, 35, 40,
   45, 50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150,
   160, 170, 180 };
   Double_t Graph0_fy288[52] = { 3.629883, 3.341797, 3.860352, 3.779688, 2.61582, 2.489063, 2.661914, 2.800195, 2.58125, 2.419922, 2.24707, 2.154883, 2.160645, 2.206738, 2.24707, 2.281641, 2.281641,
   2.17793, 2.108789, 2.120313, 2.085742, 2.091504, 2.062695, 2.091504, 2.07998, 2.108789, 2.131836, 2.126074, 5.047266, 5.416016, 5.761719, 6.061328, 6.591406,
   6.821875, 7.421094, 7.789844, 8.250781, 9.21875, 9.817969, 10.46328, 11.20078, 11.66172, 11.98438, 12.26094, 13.41328, 14.56563, 15.4875, 16.77812, 17.23906,
   18.34531, 20.09688, 20.65 };
   TGraph *graph = new TGraph(52,Graph0_fx288,Graph0_fy288);
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
   Graph_Graph0288->GetXaxis()->SetRange(1,96);
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
   
   Double_t Graph1_fx289[106] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 20, 25, 30, 35, 40,
   45, 50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150,
   160, 170, 180, 180, 180, 180, 170, 160, 150, 140, 130, 120, 110, 100, 95, 90,
   85, 80, 75, 70, 60, 55, 50, 45, 40, 35, 30, 25, 20, 9.5, 9, 8.5,
   8, 7.5, 7, 6.5, 6, 5.8, 5.6, 5.4, 5, 4.8, 4.6, 4.4, 4.2, 4, 3.8, 3.6,
   3.4, 3.2, 3, 2.8, 2.6, 2.2, 2, 1.8, 1.6 };
   Double_t Graph1_fy289[106] = { 7.709086, 7.130503, 8.058682, 7.95608, 6.063009, 5.788526, 6.060239, 6.271909, 5.89441, 5.787513, 5.524848, 5.344154, 5.386081, 5.428398, 5.45907, 5.528099, 5.591407,
   5.521086, 5.424519, 5.517878, 5.422197, 5.423058, 5.398688, 5.530281, 5.562932, 5.677265, 5.751809, 5.772446, 15.34795, 16.46926, 17.52049, 18.43156, 20.04344,
   20.74426, 22.56639, 23.68771, 25.08935, 28.03279, 29.85492, 31.81722, 34.05984, 35.46148, 36.44263, 37.28361, 40.78771, 44.29181, 47.09509, 51.01968, 52.42132,
   55.78525, 61.11148, 62.79344, 62.79344, 7.501758, 7.501758, 7.222314, 6.664508, 6.195288, 6.029639, 5.56582, 5.234521, 4.872794, 4.454169, 4.306885, 4.19093,
   4.025281, 3.760242, 3.528333, 3.38501, 2.997354, 2.829904, 2.695944, 2.478259, 2.420282, 2.225644, 2.160645, 2.052162, 1.971588, 0.9052425, 0.8993683, 0.8896454,
   0.8856167, 0.8986931, 0.9024292, 0.9232029, 0.9125122, 0.9193542, 0.9225952, 0.9698593, 1.051694, 1.060606, 1.044537, 1.017168, 0.9790421, 0.9764313, 1.035759, 1.124886,
   1.24021, 1.378221, 1.289365, 1.195917, 1.246602, 1.919373, 1.990494, 1.697006, 1.8433 };
   graph = new TGraph(106,Graph1_fx289,Graph1_fy289);
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
   
   TH1F *Graph_Graph1289 = new TH1F("Graph_Graph1289","Graph",106,0,197.84);
   Graph_Graph1289->SetMinimum(0.797055);
   Graph_Graph1289->SetMaximum(68.98423);
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
   
   Double_t Graph2_fx290[106] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 20, 25, 30, 35, 40,
   45, 50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150,
   160, 170, 180, 180, 180, 180, 170, 160, 150, 140, 130, 120, 110, 100, 95, 90,
   85, 80, 75, 70, 60, 55, 50, 45, 40, 35, 30, 25, 20, 9.5, 9, 8.5,
   8, 7.5, 7, 6.5, 6, 5.8, 5.6, 5.4, 5, 4.8, 4.6, 4.4, 4.2, 4, 3.8, 3.6,
   3.4, 3.2, 3, 2.8, 2.6, 2.2, 2, 1.8, 1.6 };
   Double_t Graph2_fy290[106] = { 5.366147, 4.953583, 5.660692, 5.565008, 4.033861, 3.848309, 4.073111, 4.245635, 3.954828, 3.799287, 3.581651, 3.443301, 3.46112, 3.508569, 3.545823, 3.595827, 3.623111,
   3.523534, 3.436893, 3.472577, 3.415959, 3.417059, 3.386436, 3.450406, 3.456268, 3.516748, 3.559431, 3.558285, 8.930158, 9.820063, 10.49281, 11.08676, 12.05632,
   12.58664, 13.66264, 14.40363, 15.22303, 16.97223, 18.23196, 19.51372, 20.79984, 21.79526, 22.2072, 22.62193, 24.85499, 27.22253, 28.94548, 31.29072, 31.94421,
   34.14036, 37.4801, 38.34703, 38.34703, 11.81602, 11.81602, 11.44678, 10.49727, 9.819027, 9.556486, 8.821371, 8.29629, 7.675141, 7.015765, 6.826061, 6.642283,
   6.379742, 5.959677, 5.592119, 5.299206, 4.721135, 4.457384, 4.246384, 3.903508, 3.788932, 3.484228, 3.342247, 3.155927, 3.004824, 1.324903, 1.323029, 1.318251,
   1.296179, 1.318041, 1.310335, 1.333934, 1.320393, 1.341566, 1.339616, 1.40401, 1.493706, 1.499416, 1.476697, 1.44467, 1.40368, 1.399937, 1.471074, 1.590289,
   1.732623, 1.911461, 1.793348, 1.670744, 1.749362, 2.631524, 2.69169, 2.313803, 2.513268 };
   graph = new TGraph(106,Graph2_fx290,Graph2_fy290);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2290 = new TH1F("Graph_Graph2290","Graph",106,0,197.84);
   Graph_Graph2290->SetMinimum(1.166561);
   Graph_Graph2290->SetMaximum(42.05212);
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
   
   Double_t Graph0_fx291[52] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 20, 25, 30, 35, 40,
   45, 50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150,
   160, 170, 180 };
   Double_t Graph0_fy291[52] = { 3.629883, 3.341797, 3.860352, 3.779688, 2.61582, 2.489063, 2.661914, 2.800195, 2.58125, 2.419922, 2.24707, 2.154883, 2.160645, 2.206738, 2.24707, 2.281641, 2.281641,
   2.17793, 2.108789, 2.120313, 2.085742, 2.091504, 2.062695, 2.091504, 2.07998, 2.108789, 2.131836, 2.126074, 5.047266, 5.416016, 5.761719, 6.061328, 6.591406,
   6.821875, 7.421094, 7.789844, 8.250781, 9.21875, 9.817969, 10.46328, 11.20078, 11.66172, 11.98438, 12.26094, 13.41328, 14.56563, 15.4875, 16.77812, 17.23906,
   18.34531, 20.09688, 20.65 };
   graph = new TGraph(52,Graph0_fx291,Graph0_fy291);
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
   Graph_Graph0291->GetXaxis()->SetRange(1,96);
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
   
   Double_t Graph_fx292[52] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 20, 25, 30, 35, 40,
   45, 50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150,
   160, 170, 180 };
   Double_t Graph_fy292[52] = { 1.887622e-175, 2.46013e-155, 2.994253e-139, 4.280831e-126, 7.211899e-106, 6.296091e-98, 4.76887e-91, 4.958236e-85, 1.004958e-79, 5.216141e-75, 8.599018e-71, 5.348722e-67, 1.443111e-63, 1.892907e-60, 1.326326e-57, 5.369711e-55, 1.341719e-52,
   2.441236e-48, 1.941598e-46, 1.139969e-44, 5.093514e-43, 1.131786e-38, 3.427502e-36, 5.803769e-33, 4.417055e-31, 1.369304e-28, 4.085948e-27, 3.899099e-25, 7.820277e-10, 4.62753e-07, 3.112975e-05, 0.0006085911, 0.005519139,
   0.0300762, 0.1149696, 0.3400652, 0.8307406, 3.29999, 5.671592, 9.056933, 13.61826, 19.48077, 26.72745, 35.39848, 56.9779, 83.82914, 115.189, 150.1034, 187.5696,
   226.6316, 266.4356, 306.2542 };
   graph = new TGraph(52,Graph_fx292,Graph_fy292);
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
   
   Double_t Graph_fx294[52] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 20, 25, 30, 35, 40,
   45, 50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150,
   160, 170, 180 };
   Double_t Graph_fy294[52] = { 2.076384e-175, 2.706143e-155, 3.293679e-139, 4.708914e-126, 7.933089e-106, 6.9257e-98, 5.245757e-91, 5.454059e-85, 1.105454e-79, 5.737755e-75, 9.45892e-71, 5.883595e-67, 1.587422e-63, 2.082197e-60, 1.458958e-57, 5.906682e-55, 1.475891e-52,
   2.68536e-48, 2.135758e-46, 1.253966e-44, 5.602866e-43, 1.244965e-38, 3.770252e-36, 6.384146e-33, 4.858761e-31, 1.506235e-28, 4.494543e-27, 4.289009e-25, 8.602305e-10, 5.090284e-07, 3.424272e-05, 0.0006694502, 0.006071053,
   0.03308382, 0.1264665, 0.3740718, 0.9138146, 3.629989, 6.238751, 9.962627, 14.98009, 21.42884, 29.4002, 38.93833, 62.67569, 92.21205, 126.708, 165.1138, 206.3265,
   249.2948, 293.0791, 336.8796 };
   graph = new TGraph(52,Graph_fx294,Graph_fy294);
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
   line = new TLine(82.12411,0,82.12411,10.77046);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(82.11911,0,"  82.12 TeV");

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
   Graph_copy->GetXaxis()->SetRange(1,96);
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
      tex = new TLatex(0.95,0.915,"Run/");
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
