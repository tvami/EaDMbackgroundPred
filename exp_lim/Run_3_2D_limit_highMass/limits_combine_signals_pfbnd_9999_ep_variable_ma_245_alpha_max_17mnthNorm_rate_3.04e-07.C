#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_17mnthNorm_rate_3.04e-07()
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
   
   Double_t Graph0_fx337[43] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 20, 25, 30, 35, 40,
   45, 50, 55, 60, 70, 75, 80, 85, 90, 95 };
   Double_t Graph0_fy337[43] = { 3.629883, 3.341797, 3.860352, 3.779688, 2.61582, 2.489063, 2.661914, 2.800195, 2.58125, 2.419922, 2.24707, 2.154883, 2.160645, 2.206738, 2.24707, 2.281641, 2.281641,
   2.17793, 2.108789, 2.120313, 2.085742, 2.091504, 2.062695, 2.091504, 2.07998, 2.108789, 2.131836, 2.126074, 5.047266, 5.416016, 5.761719, 6.061328, 6.591406,
   6.821875, 7.421094, 7.789844, 8.250781, 9.21875, 9.817969, 10.46328, 11.20078, 11.66172, 11.98438 };
   TGraph *graph = new TGraph(43,Graph0_fx337,Graph0_fy337);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0337 = new TH1F("Graph_Graph0337","",100,0,104.34);
   Graph_Graph0337->SetMinimum(0.2);
   Graph_Graph0337->SetMaximum(100000);
   Graph_Graph0337->SetDirectory(nullptr);
   Graph_Graph0337->SetStats(0);
   Graph_Graph0337->SetLineWidth(2);
   Graph_Graph0337->SetMarkerStyle(20);
   Graph_Graph0337->SetMarkerSize(0.9);
   Graph_Graph0337->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0337->GetXaxis()->SetRange(2,96);
   Graph_Graph0337->GetXaxis()->SetLabelFont(42);
   Graph_Graph0337->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0337->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0337->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0337->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0337->GetXaxis()->SetTitleFont(42);
   Graph_Graph0337->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0337->GetYaxis()->SetLabelFont(42);
   Graph_Graph0337->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0337->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0337->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0337->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0337->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0337->GetYaxis()->SetTitleFont(42);
   Graph_Graph0337->GetZaxis()->SetLabelFont(42);
   Graph_Graph0337->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0337->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0337->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0337->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0337->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0337);
   
   graph->Draw("al");
   
   Double_t Graph1_fx338[88] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 20, 25, 30, 35, 40,
   45, 50, 55, 60, 70, 75, 80, 85, 90, 95, 95, 95, 95, 90, 85, 80,
   75, 70, 60, 55, 50, 45, 40, 35, 30, 25, 20, 9.5, 9, 8.5, 8, 7.5,
   7, 6.5, 6, 5.8, 5.6, 5.4, 5, 4.8, 4.6, 4.4, 4.2, 4, 3.8, 3.6, 3.4, 3.2,
   3, 2.8, 2.6, 2.2, 2, 1.8, 1.6 };
   Double_t Graph1_fy338[88] = { 7.709086, 7.130503, 8.058682, 7.95608, 6.063009, 5.788526, 6.060239, 6.271909, 5.89441, 5.787513, 5.524848, 5.344154, 5.386081, 5.428398, 5.45907, 5.528099, 5.591407,
   5.521086, 5.424519, 5.517878, 5.422197, 5.423058, 5.398688, 5.530281, 5.562932, 5.677265, 5.751809, 5.772446, 15.34795, 16.46926, 17.52049, 18.43156, 20.04344,
   20.74426, 22.56639, 23.68771, 25.08935, 28.03279, 29.85492, 31.81722, 34.05984, 35.46148, 36.44263, 36.44263, 4.306885, 4.306885, 4.19093, 4.025281, 3.760242,
   3.528333, 3.38501, 2.997354, 2.829904, 2.695944, 2.478259, 2.420282, 2.225644, 2.160645, 2.052162, 1.971588, 0.9052425, 0.8993683, 0.8896454, 0.8856167, 0.8986931,
   0.9024292, 0.9232029, 0.9125122, 0.9193542, 0.9225952, 0.9698593, 1.051694, 1.060606, 1.044537, 1.017168, 0.9790421, 0.9764313, 1.035759, 1.124886, 1.24021, 1.378221,
   1.289365, 1.195917, 1.246602, 1.919373, 1.990494, 1.697006, 1.8433 };
   graph = new TGraph(88,Graph1_fx338,Graph1_fy338);
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
   
   TH1F *Graph_Graph1338 = new TH1F("Graph_Graph1338","Graph",100,0,104.34);
   Graph_Graph1338->SetMinimum(0.797055);
   Graph_Graph1338->SetMaximum(39.99833);
   Graph_Graph1338->SetDirectory(nullptr);
   Graph_Graph1338->SetStats(0);
   Graph_Graph1338->SetLineWidth(2);
   Graph_Graph1338->SetMarkerStyle(20);
   Graph_Graph1338->SetMarkerSize(0.9);
   Graph_Graph1338->GetXaxis()->SetLabelFont(42);
   Graph_Graph1338->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1338->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1338->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1338->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1338->GetXaxis()->SetTitleFont(42);
   Graph_Graph1338->GetYaxis()->SetLabelFont(42);
   Graph_Graph1338->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1338->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1338->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1338->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1338->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1338->GetYaxis()->SetTitleFont(42);
   Graph_Graph1338->GetZaxis()->SetLabelFont(42);
   Graph_Graph1338->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1338->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1338->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1338->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1338->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1338);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx339[88] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 20, 25, 30, 35, 40,
   45, 50, 55, 60, 70, 75, 80, 85, 90, 95, 95, 95, 95, 90, 85, 80,
   75, 70, 60, 55, 50, 45, 40, 35, 30, 25, 20, 9.5, 9, 8.5, 8, 7.5,
   7, 6.5, 6, 5.8, 5.6, 5.4, 5, 4.8, 4.6, 4.4, 4.2, 4, 3.8, 3.6, 3.4, 3.2,
   3, 2.8, 2.6, 2.2, 2, 1.8, 1.6 };
   Double_t Graph2_fy339[88] = { 5.366147, 4.953583, 5.660692, 5.565008, 4.033861, 3.848309, 4.073111, 4.245635, 3.954828, 3.799287, 3.581651, 3.443301, 3.46112, 3.508569, 3.545823, 3.595827, 3.623111,
   3.523534, 3.436893, 3.472577, 3.415959, 3.417059, 3.386436, 3.450406, 3.456268, 3.516748, 3.559431, 3.558285, 8.930158, 9.820063, 10.49281, 11.08676, 12.05632,
   12.58664, 13.66264, 14.40363, 15.22303, 16.97223, 18.23196, 19.51372, 20.79984, 21.79526, 22.2072, 22.2072, 6.826061, 6.826061, 6.642283, 6.379742, 5.959677,
   5.592119, 5.299206, 4.721135, 4.457384, 4.246384, 3.903508, 3.788932, 3.484228, 3.342247, 3.155927, 3.004824, 1.324903, 1.323029, 1.318251, 1.296179, 1.318041,
   1.310335, 1.333934, 1.320393, 1.341566, 1.339616, 1.40401, 1.493706, 1.499416, 1.476697, 1.44467, 1.40368, 1.399937, 1.471074, 1.590289, 1.732623, 1.911461,
   1.793348, 1.670744, 1.749362, 2.631524, 2.69169, 2.313803, 2.513268 };
   graph = new TGraph(88,Graph2_fx339,Graph2_fy339);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2339 = new TH1F("Graph_Graph2339","Graph",100,0,104.34);
   Graph_Graph2339->SetMinimum(1.166561);
   Graph_Graph2339->SetMaximum(24.29831);
   Graph_Graph2339->SetDirectory(nullptr);
   Graph_Graph2339->SetStats(0);
   Graph_Graph2339->SetLineWidth(2);
   Graph_Graph2339->SetMarkerStyle(20);
   Graph_Graph2339->SetMarkerSize(0.9);
   Graph_Graph2339->GetXaxis()->SetLabelFont(42);
   Graph_Graph2339->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2339->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2339->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2339->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2339->GetXaxis()->SetTitleFont(42);
   Graph_Graph2339->GetYaxis()->SetLabelFont(42);
   Graph_Graph2339->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2339->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2339->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2339->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2339->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2339->GetYaxis()->SetTitleFont(42);
   Graph_Graph2339->GetZaxis()->SetLabelFont(42);
   Graph_Graph2339->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2339->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2339->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2339->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2339->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2339);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx340[43] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 20, 25, 30, 35, 40,
   45, 50, 55, 60, 70, 75, 80, 85, 90, 95 };
   Double_t Graph0_fy340[43] = { 3.629883, 3.341797, 3.860352, 3.779688, 2.61582, 2.489063, 2.661914, 2.800195, 2.58125, 2.419922, 2.24707, 2.154883, 2.160645, 2.206738, 2.24707, 2.281641, 2.281641,
   2.17793, 2.108789, 2.120313, 2.085742, 2.091504, 2.062695, 2.091504, 2.07998, 2.108789, 2.131836, 2.126074, 5.047266, 5.416016, 5.761719, 6.061328, 6.591406,
   6.821875, 7.421094, 7.789844, 8.250781, 9.21875, 9.817969, 10.46328, 11.20078, 11.66172, 11.98438 };
   graph = new TGraph(43,Graph0_fx340,Graph0_fy340);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0340 = new TH1F("Graph_Graph0340","",100,0,104.34);
   Graph_Graph0340->SetMinimum(0.2);
   Graph_Graph0340->SetMaximum(100000);
   Graph_Graph0340->SetDirectory(nullptr);
   Graph_Graph0340->SetStats(0);
   Graph_Graph0340->SetLineWidth(2);
   Graph_Graph0340->SetMarkerStyle(20);
   Graph_Graph0340->SetMarkerSize(0.9);
   Graph_Graph0340->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0340->GetXaxis()->SetRange(2,96);
   Graph_Graph0340->GetXaxis()->SetLabelFont(42);
   Graph_Graph0340->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0340->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0340->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0340->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0340->GetXaxis()->SetTitleFont(42);
   Graph_Graph0340->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0340->GetYaxis()->SetLabelFont(42);
   Graph_Graph0340->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0340->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0340->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0340->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0340->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0340->GetYaxis()->SetTitleFont(42);
   Graph_Graph0340->GetZaxis()->SetLabelFont(42);
   Graph_Graph0340->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0340->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0340->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0340->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0340->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0340);
   
   graph->Draw("l");
   
   Double_t Graph_fx341[43] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 20, 25, 30, 35, 40,
   45, 50, 55, 60, 70, 75, 80, 85, 90, 95 };
   Double_t Graph_fy341[43] = { 5.984957e-300, 5.967745e-266, 9.291983e-239, 1.625057e-216, 2.619354e-182, 7.106818e-169, 3.098503e-157, 4.711721e-147, 4.519629e-138, 4.335731e-130, 5.984818e-123, 1.590202e-116, 1.029364e-110, 1.968321e-105, 1.303667e-100, 3.41498e-96, 3.954995e-92,
   6.591069e-85, 1.100944e-81, 1.100445e-78, 6.929325e-76, 1.646702e-68, 2.684025e-64, 8.171847e-59, 1.285416e-55, 2.207746e-51, 7.111313e-49, 1.659565e-45, 2.246796e-19, 1.327237e-14, 1.92138e-11, 3.363496e-09, 1.57891e-07,
   3.09071e-06, 3.286229e-05, 0.0002244805, 0.001101538, 0.01309365, 0.03488659, 0.08175975, 0.1724584, 0.3333029, 0.5985582 };
   graph = new TGraph(43,Graph_fx341,Graph_fy341);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph341 = new TH1F("Graph_Graph341","",100,0,104.34);
   Graph_Graph341->SetMinimum(5.386461e-300);
   Graph_Graph341->SetMaximum(0.658414);
   Graph_Graph341->SetDirectory(nullptr);
   Graph_Graph341->SetStats(0);
   Graph_Graph341->SetLineWidth(2);
   Graph_Graph341->SetMarkerStyle(20);
   Graph_Graph341->SetMarkerSize(0.9);
   Graph_Graph341->GetXaxis()->SetLabelFont(42);
   Graph_Graph341->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph341->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph341->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph341->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph341->GetXaxis()->SetTitleFont(42);
   Graph_Graph341->GetYaxis()->SetLabelFont(42);
   Graph_Graph341->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph341->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph341->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph341->GetYaxis()->SetTickLength(0.02);
   Graph_Graph341->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph341->GetYaxis()->SetTitleFont(42);
   Graph_Graph341->GetZaxis()->SetLabelFont(42);
   Graph_Graph341->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph341->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph341->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph341->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph341->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph341);
   
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
   
   Double_t Graph_fx343[43] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 20, 25, 30, 35, 40,
   45, 50, 55, 60, 70, 75, 80, 85, 90, 95 };
   Double_t Graph_fy343[43] = { 6.583452e-300, 6.564519e-266, 1.022118e-238, 1.787563e-216, 2.881289e-182, 7.8175e-169, 3.408353e-157, 5.182893e-147, 4.971592e-138, 4.769305e-130, 6.5833e-123, 1.749222e-116, 1.1323e-110, 2.165153e-105, 1.434034e-100, 3.756478e-96, 4.350494e-92,
   7.250176e-85, 1.211038e-81, 1.21049e-78, 7.622257e-76, 1.811372e-68, 2.952428e-64, 8.989032e-59, 1.413958e-55, 2.42852e-51, 7.822444e-49, 1.825522e-45, 2.471476e-19, 1.459961e-14, 2.113518e-11, 3.699845e-09, 1.736801e-07,
   3.399782e-06, 3.614852e-05, 0.0002469285, 0.001211692, 0.01440301, 0.03837525, 0.08993573, 0.1897042, 0.3666332, 0.658414 };
   graph = new TGraph(43,Graph_fx343,Graph_fy343);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph343 = new TH1F("Graph_Graph343","",100,0,104.34);
   Graph_Graph343->SetMinimum(5.925107e-300);
   Graph_Graph343->SetMaximum(0.7242554);
   Graph_Graph343->SetDirectory(nullptr);
   Graph_Graph343->SetStats(0);
   Graph_Graph343->SetLineWidth(2);
   Graph_Graph343->SetMarkerStyle(20);
   Graph_Graph343->SetMarkerSize(0.9);
   Graph_Graph343->GetXaxis()->SetLabelFont(42);
   Graph_Graph343->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph343->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph343->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph343->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph343->GetXaxis()->SetTitleFont(42);
   Graph_Graph343->GetYaxis()->SetLabelFont(42);
   Graph_Graph343->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph343->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph343->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph343->GetYaxis()->SetTickLength(0.02);
   Graph_Graph343->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph343->GetYaxis()->SetTitleFont(42);
   Graph_Graph343->GetZaxis()->SetLabelFont(42);
   Graph_Graph343->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph343->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph343->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph343->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph343->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph343);
   
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
