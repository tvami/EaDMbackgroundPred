#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_17mnthNorm_rate_1.74e-07()
{
//=========Macro generated from canvas: climits/climits
//=========  (Thu Jan 15 02:00:52 2026) by ROOT version 6.30/07
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
   
   Double_t Graph0_fx246[43] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 20, 25, 30, 35, 40,
   45, 50, 55, 60, 70, 75, 80, 85, 90, 95 };
   Double_t Graph0_fy246[43] = { 3.629883, 3.341797, 3.860352, 3.779688, 2.61582, 2.489063, 2.661914, 2.800195, 2.58125, 2.419922, 2.24707, 2.154883, 2.160645, 2.206738, 2.24707, 2.281641, 2.281641,
   2.17793, 2.108789, 2.120313, 2.085742, 2.091504, 2.062695, 2.091504, 2.07998, 2.108789, 2.131836, 2.126074, 5.047266, 5.416016, 5.761719, 6.061328, 6.591406,
   6.821875, 7.421094, 7.789844, 8.250781, 9.21875, 9.817969, 10.46328, 11.20078, 11.66172, 11.98438 };
   TGraph *graph = new TGraph(43,Graph0_fx246,Graph0_fy246);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0246 = new TH1F("Graph_Graph0246","",100,0,104.34);
   Graph_Graph0246->SetMinimum(0.2);
   Graph_Graph0246->SetMaximum(100000);
   Graph_Graph0246->SetDirectory(nullptr);
   Graph_Graph0246->SetStats(0);
   Graph_Graph0246->SetLineWidth(2);
   Graph_Graph0246->SetMarkerStyle(20);
   Graph_Graph0246->SetMarkerSize(0.9);
   Graph_Graph0246->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0246->GetXaxis()->SetRange(2,96);
   Graph_Graph0246->GetXaxis()->SetLabelFont(42);
   Graph_Graph0246->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0246->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0246->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0246->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0246->GetXaxis()->SetTitleFont(42);
   Graph_Graph0246->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0246->GetYaxis()->SetLabelFont(42);
   Graph_Graph0246->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0246->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0246->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0246->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0246->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0246->GetYaxis()->SetTitleFont(42);
   Graph_Graph0246->GetZaxis()->SetLabelFont(42);
   Graph_Graph0246->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0246->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0246->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0246->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0246->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0246);
   
   graph->Draw("al");
   
   Double_t Graph1_fx247[88] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 20, 25, 30, 35, 40,
   45, 50, 55, 60, 70, 75, 80, 85, 90, 95, 95, 95, 95, 90, 85, 80,
   75, 70, 60, 55, 50, 45, 40, 35, 30, 25, 20, 9.5, 9, 8.5, 8, 7.5,
   7, 6.5, 6, 5.8, 5.6, 5.4, 5, 4.8, 4.6, 4.4, 4.2, 4, 3.8, 3.6, 3.4, 3.2,
   3, 2.8, 2.6, 2.2, 2, 1.8, 1.6 };
   Double_t Graph1_fy247[88] = { 7.709086, 7.130503, 8.058682, 7.95608, 6.063009, 5.788526, 6.060239, 6.271909, 5.89441, 5.787513, 5.524848, 5.344154, 5.386081, 5.428398, 5.45907, 5.528099, 5.591407,
   5.521086, 5.424519, 5.517878, 5.422197, 5.423058, 5.398688, 5.530281, 5.562932, 5.677265, 5.751809, 5.772446, 15.34795, 16.46926, 17.52049, 18.43156, 20.04344,
   20.74426, 22.56639, 23.68771, 25.08935, 28.03279, 29.85492, 31.81722, 34.05984, 35.46148, 36.44263, 36.44263, 4.306885, 4.306885, 4.19093, 4.025281, 3.760242,
   3.528333, 3.38501, 2.997354, 2.829904, 2.695944, 2.478259, 2.420282, 2.225644, 2.160645, 2.052162, 1.971588, 0.9052425, 0.8993683, 0.8896454, 0.8856167, 0.8986931,
   0.9024292, 0.9232029, 0.9125122, 0.9193542, 0.9225952, 0.9698593, 1.051694, 1.060606, 1.044537, 1.017168, 0.9790421, 0.9764313, 1.035759, 1.124886, 1.24021, 1.378221,
   1.289365, 1.195917, 1.246602, 1.919373, 1.990494, 1.697006, 1.8433 };
   graph = new TGraph(88,Graph1_fx247,Graph1_fy247);
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
   
   TH1F *Graph_Graph1247 = new TH1F("Graph_Graph1247","Graph",100,0,104.34);
   Graph_Graph1247->SetMinimum(0.797055);
   Graph_Graph1247->SetMaximum(39.99833);
   Graph_Graph1247->SetDirectory(nullptr);
   Graph_Graph1247->SetStats(0);
   Graph_Graph1247->SetLineWidth(2);
   Graph_Graph1247->SetMarkerStyle(20);
   Graph_Graph1247->SetMarkerSize(0.9);
   Graph_Graph1247->GetXaxis()->SetLabelFont(42);
   Graph_Graph1247->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1247->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1247->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1247->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1247->GetXaxis()->SetTitleFont(42);
   Graph_Graph1247->GetYaxis()->SetLabelFont(42);
   Graph_Graph1247->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1247->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1247->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1247->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1247->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1247->GetYaxis()->SetTitleFont(42);
   Graph_Graph1247->GetZaxis()->SetLabelFont(42);
   Graph_Graph1247->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1247->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1247->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1247->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1247->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1247);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx248[88] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 20, 25, 30, 35, 40,
   45, 50, 55, 60, 70, 75, 80, 85, 90, 95, 95, 95, 95, 90, 85, 80,
   75, 70, 60, 55, 50, 45, 40, 35, 30, 25, 20, 9.5, 9, 8.5, 8, 7.5,
   7, 6.5, 6, 5.8, 5.6, 5.4, 5, 4.8, 4.6, 4.4, 4.2, 4, 3.8, 3.6, 3.4, 3.2,
   3, 2.8, 2.6, 2.2, 2, 1.8, 1.6 };
   Double_t Graph2_fy248[88] = { 5.366147, 4.953583, 5.660692, 5.565008, 4.033861, 3.848309, 4.073111, 4.245635, 3.954828, 3.799287, 3.581651, 3.443301, 3.46112, 3.508569, 3.545823, 3.595827, 3.623111,
   3.523534, 3.436893, 3.472577, 3.415959, 3.417059, 3.386436, 3.450406, 3.456268, 3.516748, 3.559431, 3.558285, 8.930158, 9.820063, 10.49281, 11.08676, 12.05632,
   12.58664, 13.66264, 14.40363, 15.22303, 16.97223, 18.23196, 19.51372, 20.79984, 21.79526, 22.2072, 22.2072, 6.826061, 6.826061, 6.642283, 6.379742, 5.959677,
   5.592119, 5.299206, 4.721135, 4.457384, 4.246384, 3.903508, 3.788932, 3.484228, 3.342247, 3.155927, 3.004824, 1.324903, 1.323029, 1.318251, 1.296179, 1.318041,
   1.310335, 1.333934, 1.320393, 1.341566, 1.339616, 1.40401, 1.493706, 1.499416, 1.476697, 1.44467, 1.40368, 1.399937, 1.471074, 1.590289, 1.732623, 1.911461,
   1.793348, 1.670744, 1.749362, 2.631524, 2.69169, 2.313803, 2.513268 };
   graph = new TGraph(88,Graph2_fx248,Graph2_fy248);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2248 = new TH1F("Graph_Graph2248","Graph",100,0,104.34);
   Graph_Graph2248->SetMinimum(1.166561);
   Graph_Graph2248->SetMaximum(24.29831);
   Graph_Graph2248->SetDirectory(nullptr);
   Graph_Graph2248->SetStats(0);
   Graph_Graph2248->SetLineWidth(2);
   Graph_Graph2248->SetMarkerStyle(20);
   Graph_Graph2248->SetMarkerSize(0.9);
   Graph_Graph2248->GetXaxis()->SetLabelFont(42);
   Graph_Graph2248->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2248->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2248->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2248->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2248->GetXaxis()->SetTitleFont(42);
   Graph_Graph2248->GetYaxis()->SetLabelFont(42);
   Graph_Graph2248->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2248->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2248->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2248->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2248->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2248->GetYaxis()->SetTitleFont(42);
   Graph_Graph2248->GetZaxis()->SetLabelFont(42);
   Graph_Graph2248->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2248->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2248->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2248->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2248->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2248);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx249[43] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 20, 25, 30, 35, 40,
   45, 50, 55, 60, 70, 75, 80, 85, 90, 95 };
   Double_t Graph0_fy249[43] = { 3.629883, 3.341797, 3.860352, 3.779688, 2.61582, 2.489063, 2.661914, 2.800195, 2.58125, 2.419922, 2.24707, 2.154883, 2.160645, 2.206738, 2.24707, 2.281641, 2.281641,
   2.17793, 2.108789, 2.120313, 2.085742, 2.091504, 2.062695, 2.091504, 2.07998, 2.108789, 2.131836, 2.126074, 5.047266, 5.416016, 5.761719, 6.061328, 6.591406,
   6.821875, 7.421094, 7.789844, 8.250781, 9.21875, 9.817969, 10.46328, 11.20078, 11.66172, 11.98438 };
   graph = new TGraph(43,Graph0_fx249,Graph0_fy249);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0249 = new TH1F("Graph_Graph0249","",100,0,104.34);
   Graph_Graph0249->SetMinimum(0.2);
   Graph_Graph0249->SetMaximum(100000);
   Graph_Graph0249->SetDirectory(nullptr);
   Graph_Graph0249->SetStats(0);
   Graph_Graph0249->SetLineWidth(2);
   Graph_Graph0249->SetMarkerStyle(20);
   Graph_Graph0249->SetMarkerSize(0.9);
   Graph_Graph0249->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0249->GetXaxis()->SetRange(2,96);
   Graph_Graph0249->GetXaxis()->SetLabelFont(42);
   Graph_Graph0249->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0249->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0249->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0249->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0249->GetXaxis()->SetTitleFont(42);
   Graph_Graph0249->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0249->GetYaxis()->SetLabelFont(42);
   Graph_Graph0249->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0249->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0249->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0249->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0249->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0249->GetYaxis()->SetTitleFont(42);
   Graph_Graph0249->GetZaxis()->SetLabelFont(42);
   Graph_Graph0249->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0249->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0249->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0249->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0249->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0249);
   
   graph->Draw("l");
   
   Double_t Graph_fx250[43] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 20, 25, 30, 35, 40,
   45, 50, 55, 60, 70, 75, 80, 85, 90, 95 };
   Double_t Graph_fy250[43] = { 9.646536e-95, 1.187485e-83, 8.712222e-75, 1.542533e-67, 2.122541e-56, 4.984606e-52, 3.039215e-48, 6.197772e-45, 5.130278e-42, 2.003835e-39, 4.159156e-37, 5.04482e-35, 3.861784e-33, 1.98681e-31, 7.236307e-30, 1.948367e-28, 4.021668e-27,
   8.690907e-25, 9.552356e-24, 8.884157e-23, 7.109861e-22, 1.696531e-19, 3.851288e-18, 2.231811e-16, 2.371918e-15, 5.409042e-14, 3.437958e-13, 4.106695e-12, 0.000752332, 0.02233397, 0.2043675, 0.9609893, 2.993174,
   7.103815, 13.96555, 23.97462, 37.21777, 72.50632, 93.71295, 116.6214, 140.722, 165.5416, 190.6604 };
   graph = new TGraph(43,Graph_fx250,Graph_fy250);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph250 = new TH1F("Graph_Graph250","",100,0,104.34);
   Graph_Graph250->SetMinimum(8.681882e-95);
   Graph_Graph250->SetMaximum(209.7264);
   Graph_Graph250->SetDirectory(nullptr);
   Graph_Graph250->SetStats(0);
   Graph_Graph250->SetLineWidth(2);
   Graph_Graph250->SetMarkerStyle(20);
   Graph_Graph250->SetMarkerSize(0.9);
   Graph_Graph250->GetXaxis()->SetLabelFont(42);
   Graph_Graph250->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph250->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph250->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph250->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph250->GetXaxis()->SetTitleFont(42);
   Graph_Graph250->GetYaxis()->SetLabelFont(42);
   Graph_Graph250->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph250->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph250->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph250->GetYaxis()->SetTickLength(0.02);
   Graph_Graph250->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph250->GetYaxis()->SetTitleFont(42);
   Graph_Graph250->GetZaxis()->SetLabelFont(42);
   Graph_Graph250->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph250->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph250->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph250->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph250->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph250);
   
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
   
   Double_t Graph_fx252[43] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 20, 25, 30, 35, 40,
   45, 50, 55, 60, 70, 75, 80, 85, 90, 95 };
   Double_t Graph_fy252[43] = { 1.061119e-94, 1.306234e-83, 9.583445e-75, 1.696786e-67, 2.334795e-56, 5.483066e-52, 3.343136e-48, 6.81755e-45, 5.643306e-42, 2.204218e-39, 4.575071e-37, 5.549302e-35, 4.247963e-33, 2.185491e-31, 7.959938e-30, 2.143204e-28, 4.423834e-27,
   9.559998e-25, 1.050759e-23, 9.772573e-23, 7.820847e-22, 1.866185e-19, 4.236417e-18, 2.454992e-16, 2.60911e-15, 5.949946e-14, 3.781754e-13, 4.517365e-12, 0.0008275652, 0.02456737, 0.2248042, 1.057088, 3.292491,
   7.814196, 15.36211, 26.37209, 40.93955, 79.75695, 103.0842, 128.2835, 154.7942, 182.0958, 209.7264 };
   graph = new TGraph(43,Graph_fx252,Graph_fy252);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph252 = new TH1F("Graph_Graph252","",100,0,104.34);
   Graph_Graph252->SetMinimum(9.55007e-95);
   Graph_Graph252->SetMaximum(230.6991);
   Graph_Graph252->SetDirectory(nullptr);
   Graph_Graph252->SetStats(0);
   Graph_Graph252->SetLineWidth(2);
   Graph_Graph252->SetMarkerStyle(20);
   Graph_Graph252->SetMarkerSize(0.9);
   Graph_Graph252->GetXaxis()->SetLabelFont(42);
   Graph_Graph252->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph252->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph252->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph252->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph252->GetXaxis()->SetTitleFont(42);
   Graph_Graph252->GetYaxis()->SetLabelFont(42);
   Graph_Graph252->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph252->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph252->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph252->GetYaxis()->SetTickLength(0.02);
   Graph_Graph252->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph252->GetYaxis()->SetTitleFont(42);
   Graph_Graph252->GetZaxis()->SetLabelFont(42);
   Graph_Graph252->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph252->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph252->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph252->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph252->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph252);
   
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
   line = new TLine(44.75602,0,44.75602,6.810444);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(44.75102,0,"  44.76 TeV");

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
