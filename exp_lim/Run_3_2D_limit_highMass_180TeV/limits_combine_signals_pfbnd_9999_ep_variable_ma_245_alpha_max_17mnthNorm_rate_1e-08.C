#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_17mnthNorm_rate_1e-08()
{
//=========Macro generated from canvas: climits/climits
//=========  (Wed Jan 21 00:30:36 2026) by ROOT version 6.30/07
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
   
   Double_t Graph0_fx43[52] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 20, 25, 30, 35, 40,
   45, 50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150,
   160, 170, 180 };
   Double_t Graph0_fy43[52] = { 3.629883, 3.341797, 3.860352, 3.779688, 2.61582, 2.489063, 2.661914, 2.800195, 2.58125, 2.419922, 2.24707, 2.154883, 2.160645, 2.206738, 2.24707, 2.281641, 2.281641,
   2.17793, 2.108789, 2.120313, 2.085742, 2.091504, 2.062695, 2.091504, 2.07998, 2.108789, 2.131836, 2.126074, 5.047266, 5.416016, 5.761719, 6.061328, 6.591406,
   6.821875, 7.421094, 7.789844, 8.250781, 9.21875, 9.817969, 10.46328, 11.20078, 11.66172, 11.98438, 12.26094, 13.41328, 14.56563, 15.4875, 16.77812, 17.23906,
   18.34531, 20.09688, 20.65 };
   TGraph *graph = new TGraph(52,Graph0_fx43,Graph0_fy43);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph043 = new TH1F("Graph_Graph043","",100,0,197.84);
   Graph_Graph043->SetMinimum(0.2);
   Graph_Graph043->SetMaximum(100000);
   Graph_Graph043->SetDirectory(nullptr);
   Graph_Graph043->SetStats(0);
   Graph_Graph043->SetLineWidth(2);
   Graph_Graph043->SetMarkerStyle(20);
   Graph_Graph043->SetMarkerSize(0.9);
   Graph_Graph043->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph043->GetXaxis()->SetRange(1,96);
   Graph_Graph043->GetXaxis()->SetLabelFont(42);
   Graph_Graph043->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph043->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph043->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph043->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph043->GetXaxis()->SetTitleFont(42);
   Graph_Graph043->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph043->GetYaxis()->SetLabelFont(42);
   Graph_Graph043->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph043->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph043->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph043->GetYaxis()->SetTickLength(0.02);
   Graph_Graph043->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph043->GetYaxis()->SetTitleFont(42);
   Graph_Graph043->GetZaxis()->SetLabelFont(42);
   Graph_Graph043->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph043->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph043->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph043->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph043->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph043);
   
   graph->Draw("al");
   
   Double_t Graph1_fx44[106] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 20, 25, 30, 35, 40,
   45, 50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150,
   160, 170, 180, 180, 180, 180, 170, 160, 150, 140, 130, 120, 110, 100, 95, 90,
   85, 80, 75, 70, 60, 55, 50, 45, 40, 35, 30, 25, 20, 9.5, 9, 8.5,
   8, 7.5, 7, 6.5, 6, 5.8, 5.6, 5.4, 5, 4.8, 4.6, 4.4, 4.2, 4, 3.8, 3.6,
   3.4, 3.2, 3, 2.8, 2.6, 2.2, 2, 1.8, 1.6 };
   Double_t Graph1_fy44[106] = { 7.709086, 7.130503, 8.058682, 7.95608, 6.063009, 5.788526, 6.060239, 6.271909, 5.89441, 5.787513, 5.524848, 5.344154, 5.386081, 5.428398, 5.45907, 5.528099, 5.591407,
   5.521086, 5.424519, 5.517878, 5.422197, 5.423058, 5.398688, 5.530281, 5.562932, 5.677265, 5.751809, 5.772446, 15.34795, 16.46926, 17.52049, 18.43156, 20.04344,
   20.74426, 22.56639, 23.68771, 25.08935, 28.03279, 29.85492, 31.81722, 34.05984, 35.46148, 36.44263, 37.28361, 40.78771, 44.29181, 47.09509, 51.01968, 52.42132,
   55.78525, 61.11148, 62.79344, 62.79344, 7.501758, 7.501758, 7.222314, 6.664508, 6.195288, 6.029639, 5.56582, 5.234521, 4.872794, 4.454169, 4.306885, 4.19093,
   4.025281, 3.760242, 3.528333, 3.38501, 2.997354, 2.829904, 2.695944, 2.478259, 2.420282, 2.225644, 2.160645, 2.052162, 1.971588, 0.9052425, 0.8993683, 0.8896454,
   0.8856167, 0.8986931, 0.9024292, 0.9232029, 0.9125122, 0.9193542, 0.9225952, 0.9698593, 1.051694, 1.060606, 1.044537, 1.017168, 0.9790421, 0.9764313, 1.035759, 1.124886,
   1.24021, 1.378221, 1.289365, 1.195917, 1.246602, 1.919373, 1.990494, 1.697006, 1.8433 };
   graph = new TGraph(106,Graph1_fx44,Graph1_fy44);
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
   
   TH1F *Graph_Graph144 = new TH1F("Graph_Graph144","Graph",106,0,197.84);
   Graph_Graph144->SetMinimum(0.797055);
   Graph_Graph144->SetMaximum(68.98423);
   Graph_Graph144->SetDirectory(nullptr);
   Graph_Graph144->SetStats(0);
   Graph_Graph144->SetLineWidth(2);
   Graph_Graph144->SetMarkerStyle(20);
   Graph_Graph144->SetMarkerSize(0.9);
   Graph_Graph144->GetXaxis()->SetLabelFont(42);
   Graph_Graph144->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph144->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph144->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph144->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph144->GetXaxis()->SetTitleFont(42);
   Graph_Graph144->GetYaxis()->SetLabelFont(42);
   Graph_Graph144->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph144->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph144->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph144->GetYaxis()->SetTickLength(0.02);
   Graph_Graph144->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph144->GetYaxis()->SetTitleFont(42);
   Graph_Graph144->GetZaxis()->SetLabelFont(42);
   Graph_Graph144->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph144->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph144->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph144->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph144->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph144);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx45[106] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 20, 25, 30, 35, 40,
   45, 50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150,
   160, 170, 180, 180, 180, 180, 170, 160, 150, 140, 130, 120, 110, 100, 95, 90,
   85, 80, 75, 70, 60, 55, 50, 45, 40, 35, 30, 25, 20, 9.5, 9, 8.5,
   8, 7.5, 7, 6.5, 6, 5.8, 5.6, 5.4, 5, 4.8, 4.6, 4.4, 4.2, 4, 3.8, 3.6,
   3.4, 3.2, 3, 2.8, 2.6, 2.2, 2, 1.8, 1.6 };
   Double_t Graph2_fy45[106] = { 5.366147, 4.953583, 5.660692, 5.565008, 4.033861, 3.848309, 4.073111, 4.245635, 3.954828, 3.799287, 3.581651, 3.443301, 3.46112, 3.508569, 3.545823, 3.595827, 3.623111,
   3.523534, 3.436893, 3.472577, 3.415959, 3.417059, 3.386436, 3.450406, 3.456268, 3.516748, 3.559431, 3.558285, 8.930158, 9.820063, 10.49281, 11.08676, 12.05632,
   12.58664, 13.66264, 14.40363, 15.22303, 16.97223, 18.23196, 19.51372, 20.79984, 21.79526, 22.2072, 22.62193, 24.85499, 27.22253, 28.94548, 31.29072, 31.94421,
   34.14036, 37.4801, 38.34703, 38.34703, 11.81602, 11.81602, 11.44678, 10.49727, 9.819027, 9.556486, 8.821371, 8.29629, 7.675141, 7.015765, 6.826061, 6.642283,
   6.379742, 5.959677, 5.592119, 5.299206, 4.721135, 4.457384, 4.246384, 3.903508, 3.788932, 3.484228, 3.342247, 3.155927, 3.004824, 1.324903, 1.323029, 1.318251,
   1.296179, 1.318041, 1.310335, 1.333934, 1.320393, 1.341566, 1.339616, 1.40401, 1.493706, 1.499416, 1.476697, 1.44467, 1.40368, 1.399937, 1.471074, 1.590289,
   1.732623, 1.911461, 1.793348, 1.670744, 1.749362, 2.631524, 2.69169, 2.313803, 2.513268 };
   graph = new TGraph(106,Graph2_fx45,Graph2_fy45);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph245 = new TH1F("Graph_Graph245","Graph",106,0,197.84);
   Graph_Graph245->SetMinimum(1.166561);
   Graph_Graph245->SetMaximum(42.05212);
   Graph_Graph245->SetDirectory(nullptr);
   Graph_Graph245->SetStats(0);
   Graph_Graph245->SetLineWidth(2);
   Graph_Graph245->SetMarkerStyle(20);
   Graph_Graph245->SetMarkerSize(0.9);
   Graph_Graph245->GetXaxis()->SetLabelFont(42);
   Graph_Graph245->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph245->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph245->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph245->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph245->GetXaxis()->SetTitleFont(42);
   Graph_Graph245->GetYaxis()->SetLabelFont(42);
   Graph_Graph245->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph245->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph245->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph245->GetYaxis()->SetTickLength(0.02);
   Graph_Graph245->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph245->GetYaxis()->SetTitleFont(42);
   Graph_Graph245->GetZaxis()->SetLabelFont(42);
   Graph_Graph245->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph245->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph245->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph245->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph245->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph245);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx46[52] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 20, 25, 30, 35, 40,
   45, 50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150,
   160, 170, 180 };
   Double_t Graph0_fy46[52] = { 3.629883, 3.341797, 3.860352, 3.779688, 2.61582, 2.489063, 2.661914, 2.800195, 2.58125, 2.419922, 2.24707, 2.154883, 2.160645, 2.206738, 2.24707, 2.281641, 2.281641,
   2.17793, 2.108789, 2.120313, 2.085742, 2.091504, 2.062695, 2.091504, 2.07998, 2.108789, 2.131836, 2.126074, 5.047266, 5.416016, 5.761719, 6.061328, 6.591406,
   6.821875, 7.421094, 7.789844, 8.250781, 9.21875, 9.817969, 10.46328, 11.20078, 11.66172, 11.98438, 12.26094, 13.41328, 14.56563, 15.4875, 16.77812, 17.23906,
   18.34531, 20.09688, 20.65 };
   graph = new TGraph(52,Graph0_fx46,Graph0_fy46);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph046 = new TH1F("Graph_Graph046","",100,0,197.84);
   Graph_Graph046->SetMinimum(0.2);
   Graph_Graph046->SetMaximum(100000);
   Graph_Graph046->SetDirectory(nullptr);
   Graph_Graph046->SetStats(0);
   Graph_Graph046->SetLineWidth(2);
   Graph_Graph046->SetMarkerStyle(20);
   Graph_Graph046->SetMarkerSize(0.9);
   Graph_Graph046->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph046->GetXaxis()->SetRange(1,96);
   Graph_Graph046->GetXaxis()->SetLabelFont(42);
   Graph_Graph046->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph046->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph046->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph046->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph046->GetXaxis()->SetTitleFont(42);
   Graph_Graph046->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph046->GetYaxis()->SetLabelFont(42);
   Graph_Graph046->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph046->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph046->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph046->GetYaxis()->SetTickLength(0.02);
   Graph_Graph046->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph046->GetYaxis()->SetTitleFont(42);
   Graph_Graph046->GetZaxis()->SetLabelFont(42);
   Graph_Graph046->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph046->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph046->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph046->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph046->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph046);
   
   graph->Draw("l");
   
   Double_t Graph_fx47[52] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 20, 25, 30, 35, 40,
   45, 50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150,
   160, 170, 180 };
   Double_t Graph_fy47[52] = { 13.94168, 12.87929, 11.90278, 11.01905, 9.512393, 8.873428, 8.299373, 7.782424, 7.315623, 6.892868, 6.508858, 6.159007, 5.83935, 5.546461, 5.277373, 5.029513, 4.800642,
   4.392305, 4.209633, 4.039474, 3.880666, 3.462608, 3.224586, 2.91615, 2.737377, 2.502084, 2.363735, 2.179326, 0.839432, 0.6231425, 0.4875998, 0.3958537, 0.3302337,
   0.2813156, 0.2436522, 0.2138945, 0.1898793, 0.1537041, 0.1398113, 0.1279454, 0.1177112, 0.1088077, 0.1010023, 0.09411236, 0.0825265, 0.07319298, 0.06553758, 0.05916234, 0.05378352,
   0.04919382, 0.04523853, 0.04180008 };
   graph = new TGraph(52,Graph_fx47,Graph_fy47);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph47 = new TH1F("Graph_Graph47","",100,0,197.84);
   Graph_Graph47->SetMinimum(0.03762008);
   Graph_Graph47->SetMaximum(15.33166);
   Graph_Graph47->SetDirectory(nullptr);
   Graph_Graph47->SetStats(0);
   Graph_Graph47->SetLineWidth(2);
   Graph_Graph47->SetMarkerStyle(20);
   Graph_Graph47->SetMarkerSize(0.9);
   Graph_Graph47->GetXaxis()->SetLabelFont(42);
   Graph_Graph47->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph47->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph47->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph47->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph47->GetXaxis()->SetTitleFont(42);
   Graph_Graph47->GetYaxis()->SetLabelFont(42);
   Graph_Graph47->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph47->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph47->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph47->GetYaxis()->SetTickLength(0.02);
   Graph_Graph47->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph47->GetYaxis()->SetTitleFont(42);
   Graph_Graph47->GetZaxis()->SetLabelFont(42);
   Graph_Graph47->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph47->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph47->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph47->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph47->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph47);
   
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
   
   Double_t Graph_fx49[52] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 20, 25, 30, 35, 40,
   45, 50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150,
   160, 170, 180 };
   Double_t Graph_fy49[52] = { 15.33584, 14.16722, 13.09305, 12.12096, 10.46363, 9.760771, 9.12931, 8.560667, 8.047185, 7.582154, 7.159744, 6.774907, 6.423285, 6.101107, 5.805111, 5.532464, 5.280707,
   4.831536, 4.630596, 4.443422, 4.268732, 3.808869, 3.547044, 3.207765, 3.011114, 2.752293, 2.600108, 2.397259, 0.9233752, 0.6854568, 0.5363597, 0.4354391, 0.3632571,
   0.3094471, 0.2680174, 0.2352839, 0.2088673, 0.1690745, 0.1537924, 0.1407399, 0.1294823, 0.1196885, 0.1111026, 0.1035236, 0.09077915, 0.08051228, 0.07209134, 0.06507858, 0.05916188,
   0.0541132, 0.04976238, 0.04598009 };
   graph = new TGraph(52,Graph_fx49,Graph_fy49);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph49 = new TH1F("Graph_Graph49","",100,0,197.84);
   Graph_Graph49->SetMinimum(0.04138208);
   Graph_Graph49->SetMaximum(16.86483);
   Graph_Graph49->SetDirectory(nullptr);
   Graph_Graph49->SetStats(0);
   Graph_Graph49->SetLineWidth(2);
   Graph_Graph49->SetMarkerStyle(20);
   Graph_Graph49->SetMarkerSize(0.9);
   Graph_Graph49->GetXaxis()->SetLabelFont(42);
   Graph_Graph49->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph49->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph49->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph49->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph49->GetXaxis()->SetTitleFont(42);
   Graph_Graph49->GetYaxis()->SetLabelFont(42);
   Graph_Graph49->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph49->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph49->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph49->GetYaxis()->SetTickLength(0.02);
   Graph_Graph49->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph49->GetYaxis()->SetTitleFont(42);
   Graph_Graph49->GetZaxis()->SetLabelFont(42);
   Graph_Graph49->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph49->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph49->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph49->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph49->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph49);
   
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
   line = new TLine(9.642831,0,9.642831,2.151226);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(9.637831,0,"  9.64 TeV");

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
