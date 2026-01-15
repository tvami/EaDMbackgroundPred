#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_17mnthNorm_rate_1.54e-07()
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
   
   Double_t Graph0_fx232[43] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 20, 25, 30, 35, 40,
   45, 50, 55, 60, 70, 75, 80, 85, 90, 95 };
   Double_t Graph0_fy232[43] = { 3.629883, 3.341797, 3.860352, 3.779688, 2.61582, 2.489063, 2.661914, 2.800195, 2.58125, 2.419922, 2.24707, 2.154883, 2.160645, 2.206738, 2.24707, 2.281641, 2.281641,
   2.17793, 2.108789, 2.120313, 2.085742, 2.091504, 2.062695, 2.091504, 2.07998, 2.108789, 2.131836, 2.126074, 5.047266, 5.416016, 5.761719, 6.061328, 6.591406,
   6.821875, 7.421094, 7.789844, 8.250781, 9.21875, 9.817969, 10.46328, 11.20078, 11.66172, 11.98438 };
   TGraph *graph = new TGraph(43,Graph0_fx232,Graph0_fy232);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0232 = new TH1F("Graph_Graph0232","",100,0,104.34);
   Graph_Graph0232->SetMinimum(0.2);
   Graph_Graph0232->SetMaximum(100000);
   Graph_Graph0232->SetDirectory(nullptr);
   Graph_Graph0232->SetStats(0);
   Graph_Graph0232->SetLineWidth(2);
   Graph_Graph0232->SetMarkerStyle(20);
   Graph_Graph0232->SetMarkerSize(0.9);
   Graph_Graph0232->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0232->GetXaxis()->SetRange(2,96);
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
   
   Double_t Graph1_fx233[88] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 20, 25, 30, 35, 40,
   45, 50, 55, 60, 70, 75, 80, 85, 90, 95, 95, 95, 95, 90, 85, 80,
   75, 70, 60, 55, 50, 45, 40, 35, 30, 25, 20, 9.5, 9, 8.5, 8, 7.5,
   7, 6.5, 6, 5.8, 5.6, 5.4, 5, 4.8, 4.6, 4.4, 4.2, 4, 3.8, 3.6, 3.4, 3.2,
   3, 2.8, 2.6, 2.2, 2, 1.8, 1.6 };
   Double_t Graph1_fy233[88] = { 7.709086, 7.130503, 8.058682, 7.95608, 6.063009, 5.788526, 6.060239, 6.271909, 5.89441, 5.787513, 5.524848, 5.344154, 5.386081, 5.428398, 5.45907, 5.528099, 5.591407,
   5.521086, 5.424519, 5.517878, 5.422197, 5.423058, 5.398688, 5.530281, 5.562932, 5.677265, 5.751809, 5.772446, 15.34795, 16.46926, 17.52049, 18.43156, 20.04344,
   20.74426, 22.56639, 23.68771, 25.08935, 28.03279, 29.85492, 31.81722, 34.05984, 35.46148, 36.44263, 36.44263, 4.306885, 4.306885, 4.19093, 4.025281, 3.760242,
   3.528333, 3.38501, 2.997354, 2.829904, 2.695944, 2.478259, 2.420282, 2.225644, 2.160645, 2.052162, 1.971588, 0.9052425, 0.8993683, 0.8896454, 0.8856167, 0.8986931,
   0.9024292, 0.9232029, 0.9125122, 0.9193542, 0.9225952, 0.9698593, 1.051694, 1.060606, 1.044537, 1.017168, 0.9790421, 0.9764313, 1.035759, 1.124886, 1.24021, 1.378221,
   1.289365, 1.195917, 1.246602, 1.919373, 1.990494, 1.697006, 1.8433 };
   graph = new TGraph(88,Graph1_fx233,Graph1_fy233);
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
   
   TH1F *Graph_Graph1233 = new TH1F("Graph_Graph1233","Graph",100,0,104.34);
   Graph_Graph1233->SetMinimum(0.797055);
   Graph_Graph1233->SetMaximum(39.99833);
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
   
   Double_t Graph2_fx234[88] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 20, 25, 30, 35, 40,
   45, 50, 55, 60, 70, 75, 80, 85, 90, 95, 95, 95, 95, 90, 85, 80,
   75, 70, 60, 55, 50, 45, 40, 35, 30, 25, 20, 9.5, 9, 8.5, 8, 7.5,
   7, 6.5, 6, 5.8, 5.6, 5.4, 5, 4.8, 4.6, 4.4, 4.2, 4, 3.8, 3.6, 3.4, 3.2,
   3, 2.8, 2.6, 2.2, 2, 1.8, 1.6 };
   Double_t Graph2_fy234[88] = { 5.366147, 4.953583, 5.660692, 5.565008, 4.033861, 3.848309, 4.073111, 4.245635, 3.954828, 3.799287, 3.581651, 3.443301, 3.46112, 3.508569, 3.545823, 3.595827, 3.623111,
   3.523534, 3.436893, 3.472577, 3.415959, 3.417059, 3.386436, 3.450406, 3.456268, 3.516748, 3.559431, 3.558285, 8.930158, 9.820063, 10.49281, 11.08676, 12.05632,
   12.58664, 13.66264, 14.40363, 15.22303, 16.97223, 18.23196, 19.51372, 20.79984, 21.79526, 22.2072, 22.2072, 6.826061, 6.826061, 6.642283, 6.379742, 5.959677,
   5.592119, 5.299206, 4.721135, 4.457384, 4.246384, 3.903508, 3.788932, 3.484228, 3.342247, 3.155927, 3.004824, 1.324903, 1.323029, 1.318251, 1.296179, 1.318041,
   1.310335, 1.333934, 1.320393, 1.341566, 1.339616, 1.40401, 1.493706, 1.499416, 1.476697, 1.44467, 1.40368, 1.399937, 1.471074, 1.590289, 1.732623, 1.911461,
   1.793348, 1.670744, 1.749362, 2.631524, 2.69169, 2.313803, 2.513268 };
   graph = new TGraph(88,Graph2_fx234,Graph2_fy234);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2234 = new TH1F("Graph_Graph2234","Graph",100,0,104.34);
   Graph_Graph2234->SetMinimum(1.166561);
   Graph_Graph2234->SetMaximum(24.29831);
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
   
   Double_t Graph0_fx235[43] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 20, 25, 30, 35, 40,
   45, 50, 55, 60, 70, 75, 80, 85, 90, 95 };
   Double_t Graph0_fy235[43] = { 3.629883, 3.341797, 3.860352, 3.779688, 2.61582, 2.489063, 2.661914, 2.800195, 2.58125, 2.419922, 2.24707, 2.154883, 2.160645, 2.206738, 2.24707, 2.281641, 2.281641,
   2.17793, 2.108789, 2.120313, 2.085742, 2.091504, 2.062695, 2.091504, 2.07998, 2.108789, 2.131836, 2.126074, 5.047266, 5.416016, 5.761719, 6.061328, 6.591406,
   6.821875, 7.421094, 7.789844, 8.250781, 9.21875, 9.817969, 10.46328, 11.20078, 11.66172, 11.98438 };
   graph = new TGraph(43,Graph0_fx235,Graph0_fy235);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0235 = new TH1F("Graph_Graph0235","",100,0,104.34);
   Graph_Graph0235->SetMinimum(0.2);
   Graph_Graph0235->SetMaximum(100000);
   Graph_Graph0235->SetDirectory(nullptr);
   Graph_Graph0235->SetStats(0);
   Graph_Graph0235->SetLineWidth(2);
   Graph_Graph0235->SetMarkerStyle(20);
   Graph_Graph0235->SetMarkerSize(0.9);
   Graph_Graph0235->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0235->GetXaxis()->SetRange(2,96);
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
   
   Double_t Graph_fx236[43] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 20, 25, 30, 35, 40,
   45, 50, 55, 60, 70, 75, 80, 85, 90, 95 };
   Double_t Graph_fy236[43] = { 3.450929e-73, 1.621007e-64, 1.382163e-57, 6.393027e-52, 3.228554e-43, 8.376251e-40, 7.56853e-37, 2.903776e-34, 5.504291e-32, 5.799426e-30, 3.727259e-28, 1.574002e-26, 4.638347e-25, 1.001928e-23, 1.65225e-22, 2.151716e-21, 2.276729e-20,
   1.499833e-18, 9.699818e-18, 5.50591e-17, 2.779264e-16, 1.967785e-14, 2.231032e-13, 5.23351e-12, 3.28188e-11, 3.719086e-10, 1.561859e-09, 1.069037e-08, 0.02544195, 0.3387317, 1.816077, 5.829178, 13.63469,
   25.89814, 42.60357, 63.21517, 86.90696, 139.8824, 167.5021, 194.9745, 221.7967, 247.5932, 272.0986 };
   graph = new TGraph(43,Graph_fx236,Graph_fy236);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph236 = new TH1F("Graph_Graph236","",100,0,104.34);
   Graph_Graph236->SetMinimum(3.105836e-73);
   Graph_Graph236->SetMaximum(299.3085);
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
   
   Double_t Graph_fx238[43] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 20, 25, 30, 35, 40,
   45, 50, 55, 60, 70, 75, 80, 85, 90, 95 };
   Double_t Graph_fy238[43] = { 3.796021e-73, 1.783108e-64, 1.520379e-57, 7.03233e-52, 3.551409e-43, 9.213876e-40, 8.325383e-37, 3.194154e-34, 6.05472e-32, 6.379369e-30, 4.099985e-28, 1.731402e-26, 5.102182e-25, 1.102121e-23, 1.817475e-22, 2.366888e-21, 2.504401e-20,
   1.649816e-18, 1.06698e-17, 6.056501e-17, 3.05719e-16, 2.164564e-14, 2.454135e-13, 5.756861e-12, 3.610068e-11, 4.090995e-10, 1.718045e-09, 1.175941e-08, 0.02798614, 0.3726049, 1.997685, 6.412095, 14.99816,
   28.48796, 46.86393, 69.53669, 95.59766, 153.8707, 184.2523, 214.472, 243.9764, 272.3525, 299.3085 };
   graph = new TGraph(43,Graph_fx238,Graph_fy238);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph238 = new TH1F("Graph_Graph238","",100,0,104.34);
   Graph_Graph238->SetMinimum(3.416419e-73);
   Graph_Graph238->SetMaximum(329.2393);
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
   line = new TLine(35.25495,0,35.25495,6.087295);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(35.24995,0,"  35.25 TeV");

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
