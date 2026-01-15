#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_17mnthNorm_rate_2.3e-08()
{
//=========Macro generated from canvas: climits/climits
//=========  (Thu Jan 15 02:00:51 2026) by ROOT version 6.30/07
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
   
   Double_t Graph0_fx134[43] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 20, 25, 30, 35, 40,
   45, 50, 55, 60, 70, 75, 80, 85, 90, 95 };
   Double_t Graph0_fy134[43] = { 3.629883, 3.341797, 3.860352, 3.779688, 2.61582, 2.489063, 2.661914, 2.800195, 2.58125, 2.419922, 2.24707, 2.154883, 2.160645, 2.206738, 2.24707, 2.281641, 2.281641,
   2.17793, 2.108789, 2.120313, 2.085742, 2.091504, 2.062695, 2.091504, 2.07998, 2.108789, 2.131836, 2.126074, 5.047266, 5.416016, 5.761719, 6.061328, 6.591406,
   6.821875, 7.421094, 7.789844, 8.250781, 9.21875, 9.817969, 10.46328, 11.20078, 11.66172, 11.98438 };
   TGraph *graph = new TGraph(43,Graph0_fx134,Graph0_fy134);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0134 = new TH1F("Graph_Graph0134","",100,0,104.34);
   Graph_Graph0134->SetMinimum(0.2);
   Graph_Graph0134->SetMaximum(100000);
   Graph_Graph0134->SetDirectory(nullptr);
   Graph_Graph0134->SetStats(0);
   Graph_Graph0134->SetLineWidth(2);
   Graph_Graph0134->SetMarkerStyle(20);
   Graph_Graph0134->SetMarkerSize(0.9);
   Graph_Graph0134->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0134->GetXaxis()->SetRange(2,96);
   Graph_Graph0134->GetXaxis()->SetLabelFont(42);
   Graph_Graph0134->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0134->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0134->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0134->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0134->GetXaxis()->SetTitleFont(42);
   Graph_Graph0134->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0134->GetYaxis()->SetLabelFont(42);
   Graph_Graph0134->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0134->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0134->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0134->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0134->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0134->GetYaxis()->SetTitleFont(42);
   Graph_Graph0134->GetZaxis()->SetLabelFont(42);
   Graph_Graph0134->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0134->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0134->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0134->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0134->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0134);
   
   graph->Draw("al");
   
   Double_t Graph1_fx135[88] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 20, 25, 30, 35, 40,
   45, 50, 55, 60, 70, 75, 80, 85, 90, 95, 95, 95, 95, 90, 85, 80,
   75, 70, 60, 55, 50, 45, 40, 35, 30, 25, 20, 9.5, 9, 8.5, 8, 7.5,
   7, 6.5, 6, 5.8, 5.6, 5.4, 5, 4.8, 4.6, 4.4, 4.2, 4, 3.8, 3.6, 3.4, 3.2,
   3, 2.8, 2.6, 2.2, 2, 1.8, 1.6 };
   Double_t Graph1_fy135[88] = { 7.709086, 7.130503, 8.058682, 7.95608, 6.063009, 5.788526, 6.060239, 6.271909, 5.89441, 5.787513, 5.524848, 5.344154, 5.386081, 5.428398, 5.45907, 5.528099, 5.591407,
   5.521086, 5.424519, 5.517878, 5.422197, 5.423058, 5.398688, 5.530281, 5.562932, 5.677265, 5.751809, 5.772446, 15.34795, 16.46926, 17.52049, 18.43156, 20.04344,
   20.74426, 22.56639, 23.68771, 25.08935, 28.03279, 29.85492, 31.81722, 34.05984, 35.46148, 36.44263, 36.44263, 4.306885, 4.306885, 4.19093, 4.025281, 3.760242,
   3.528333, 3.38501, 2.997354, 2.829904, 2.695944, 2.478259, 2.420282, 2.225644, 2.160645, 2.052162, 1.971588, 0.9052425, 0.8993683, 0.8896454, 0.8856167, 0.8986931,
   0.9024292, 0.9232029, 0.9125122, 0.9193542, 0.9225952, 0.9698593, 1.051694, 1.060606, 1.044537, 1.017168, 0.9790421, 0.9764313, 1.035759, 1.124886, 1.24021, 1.378221,
   1.289365, 1.195917, 1.246602, 1.919373, 1.990494, 1.697006, 1.8433 };
   graph = new TGraph(88,Graph1_fx135,Graph1_fy135);
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
   
   TH1F *Graph_Graph1135 = new TH1F("Graph_Graph1135","Graph",100,0,104.34);
   Graph_Graph1135->SetMinimum(0.797055);
   Graph_Graph1135->SetMaximum(39.99833);
   Graph_Graph1135->SetDirectory(nullptr);
   Graph_Graph1135->SetStats(0);
   Graph_Graph1135->SetLineWidth(2);
   Graph_Graph1135->SetMarkerStyle(20);
   Graph_Graph1135->SetMarkerSize(0.9);
   Graph_Graph1135->GetXaxis()->SetLabelFont(42);
   Graph_Graph1135->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1135->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1135->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1135->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1135->GetXaxis()->SetTitleFont(42);
   Graph_Graph1135->GetYaxis()->SetLabelFont(42);
   Graph_Graph1135->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1135->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1135->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1135->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1135->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1135->GetYaxis()->SetTitleFont(42);
   Graph_Graph1135->GetZaxis()->SetLabelFont(42);
   Graph_Graph1135->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1135->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1135->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1135->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1135->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1135);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx136[88] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 20, 25, 30, 35, 40,
   45, 50, 55, 60, 70, 75, 80, 85, 90, 95, 95, 95, 95, 90, 85, 80,
   75, 70, 60, 55, 50, 45, 40, 35, 30, 25, 20, 9.5, 9, 8.5, 8, 7.5,
   7, 6.5, 6, 5.8, 5.6, 5.4, 5, 4.8, 4.6, 4.4, 4.2, 4, 3.8, 3.6, 3.4, 3.2,
   3, 2.8, 2.6, 2.2, 2, 1.8, 1.6 };
   Double_t Graph2_fy136[88] = { 5.366147, 4.953583, 5.660692, 5.565008, 4.033861, 3.848309, 4.073111, 4.245635, 3.954828, 3.799287, 3.581651, 3.443301, 3.46112, 3.508569, 3.545823, 3.595827, 3.623111,
   3.523534, 3.436893, 3.472577, 3.415959, 3.417059, 3.386436, 3.450406, 3.456268, 3.516748, 3.559431, 3.558285, 8.930158, 9.820063, 10.49281, 11.08676, 12.05632,
   12.58664, 13.66264, 14.40363, 15.22303, 16.97223, 18.23196, 19.51372, 20.79984, 21.79526, 22.2072, 22.2072, 6.826061, 6.826061, 6.642283, 6.379742, 5.959677,
   5.592119, 5.299206, 4.721135, 4.457384, 4.246384, 3.903508, 3.788932, 3.484228, 3.342247, 3.155927, 3.004824, 1.324903, 1.323029, 1.318251, 1.296179, 1.318041,
   1.310335, 1.333934, 1.320393, 1.341566, 1.339616, 1.40401, 1.493706, 1.499416, 1.476697, 1.44467, 1.40368, 1.399937, 1.471074, 1.590289, 1.732623, 1.911461,
   1.793348, 1.670744, 1.749362, 2.631524, 2.69169, 2.313803, 2.513268 };
   graph = new TGraph(88,Graph2_fx136,Graph2_fy136);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2136 = new TH1F("Graph_Graph2136","Graph",100,0,104.34);
   Graph_Graph2136->SetMinimum(1.166561);
   Graph_Graph2136->SetMaximum(24.29831);
   Graph_Graph2136->SetDirectory(nullptr);
   Graph_Graph2136->SetStats(0);
   Graph_Graph2136->SetLineWidth(2);
   Graph_Graph2136->SetMarkerStyle(20);
   Graph_Graph2136->SetMarkerSize(0.9);
   Graph_Graph2136->GetXaxis()->SetLabelFont(42);
   Graph_Graph2136->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2136->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2136->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2136->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2136->GetXaxis()->SetTitleFont(42);
   Graph_Graph2136->GetYaxis()->SetLabelFont(42);
   Graph_Graph2136->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2136->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2136->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2136->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2136->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2136->GetYaxis()->SetTitleFont(42);
   Graph_Graph2136->GetZaxis()->SetLabelFont(42);
   Graph_Graph2136->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2136->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2136->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2136->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2136->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2136);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx137[43] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 20, 25, 30, 35, 40,
   45, 50, 55, 60, 70, 75, 80, 85, 90, 95 };
   Double_t Graph0_fy137[43] = { 3.629883, 3.341797, 3.860352, 3.779688, 2.61582, 2.489063, 2.661914, 2.800195, 2.58125, 2.419922, 2.24707, 2.154883, 2.160645, 2.206738, 2.24707, 2.281641, 2.281641,
   2.17793, 2.108789, 2.120313, 2.085742, 2.091504, 2.062695, 2.091504, 2.07998, 2.108789, 2.131836, 2.126074, 5.047266, 5.416016, 5.761719, 6.061328, 6.591406,
   6.821875, 7.421094, 7.789844, 8.250781, 9.21875, 9.817969, 10.46328, 11.20078, 11.66172, 11.98438 };
   graph = new TGraph(43,Graph0_fx137,Graph0_fy137);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0137 = new TH1F("Graph_Graph0137","",100,0,104.34);
   Graph_Graph0137->SetMinimum(0.2);
   Graph_Graph0137->SetMaximum(100000);
   Graph_Graph0137->SetDirectory(nullptr);
   Graph_Graph0137->SetStats(0);
   Graph_Graph0137->SetLineWidth(2);
   Graph_Graph0137->SetMarkerStyle(20);
   Graph_Graph0137->SetMarkerSize(0.9);
   Graph_Graph0137->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0137->GetXaxis()->SetRange(2,96);
   Graph_Graph0137->GetXaxis()->SetLabelFont(42);
   Graph_Graph0137->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0137->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0137->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0137->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0137->GetXaxis()->SetTitleFont(42);
   Graph_Graph0137->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0137->GetYaxis()->SetLabelFont(42);
   Graph_Graph0137->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0137->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0137->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0137->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0137->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0137->GetYaxis()->SetTitleFont(42);
   Graph_Graph0137->GetZaxis()->SetLabelFont(42);
   Graph_Graph0137->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0137->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0137->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0137->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0137->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0137);
   
   graph->Draw("l");
   
   Double_t Graph_fx138[43] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 20, 25, 30, 35, 40,
   45, 50, 55, 60, 70, 75, 80, 85, 90, 95 };
   Double_t Graph_fy138[43] = { 14.71736, 19.5687, 24.20151, 28.43533, 35.42134, 38.1622, 40.44007, 42.2988, 43.78537, 44.94596, 45.82383, 46.45832, 46.88454, 47.13339, 47.23183, 47.20324, 47.0678,
   46.54326, 46.18181, 45.76939, 45.31534, 43.7773, 42.66164, 40.93161, 39.77101, 38.05357, 36.93702, 35.31838, 18.07279, 14.13844, 11.45672, 9.536226, 8.10582,
   7.006409, 6.1395, 5.441305, 4.868911, 3.990819, 3.648276, 3.353266, 3.09696, 2.872541, 2.674668 };
   graph = new TGraph(43,Graph_fx138,Graph_fy138);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph138 = new TH1F("Graph_Graph138","",100,0,104.34);
   Graph_Graph138->SetMinimum(2.407201);
   Graph_Graph138->SetMaximum(51.68755);
   Graph_Graph138->SetDirectory(nullptr);
   Graph_Graph138->SetStats(0);
   Graph_Graph138->SetLineWidth(2);
   Graph_Graph138->SetMarkerStyle(20);
   Graph_Graph138->SetMarkerSize(0.9);
   Graph_Graph138->GetXaxis()->SetLabelFont(42);
   Graph_Graph138->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph138->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph138->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph138->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph138->GetXaxis()->SetTitleFont(42);
   Graph_Graph138->GetYaxis()->SetLabelFont(42);
   Graph_Graph138->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph138->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph138->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph138->GetYaxis()->SetTickLength(0.02);
   Graph_Graph138->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph138->GetYaxis()->SetTitleFont(42);
   Graph_Graph138->GetZaxis()->SetLabelFont(42);
   Graph_Graph138->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph138->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph138->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph138->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph138->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph138);
   
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
   
   Double_t Graph_fx140[43] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 20, 25, 30, 35, 40,
   45, 50, 55, 60, 70, 75, 80, 85, 90, 95 };
   Double_t Graph_fy140[43] = { 16.1891, 21.52557, 26.62166, 31.27887, 38.96347, 41.97842, 44.48408, 46.52868, 48.16391, 49.44056, 50.40621, 51.10415, 51.57299, 51.84672, 51.95501, 51.92357, 51.77458,
   51.19758, 50.79999, 50.34633, 49.84687, 48.15503, 46.9278, 45.02477, 43.74811, 41.85893, 40.63072, 38.85022, 19.88007, 15.55228, 12.60239, 10.48985, 8.916402,
   7.70705, 6.75345, 5.985435, 5.355802, 4.389901, 4.013104, 3.688592, 3.406656, 3.159796, 2.942134 };
   graph = new TGraph(43,Graph_fx140,Graph_fy140);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph140 = new TH1F("Graph_Graph140","",100,0,104.34);
   Graph_Graph140->SetMinimum(2.647921);
   Graph_Graph140->SetMaximum(56.8563);
   Graph_Graph140->SetDirectory(nullptr);
   Graph_Graph140->SetStats(0);
   Graph_Graph140->SetLineWidth(2);
   Graph_Graph140->SetMarkerStyle(20);
   Graph_Graph140->SetMarkerSize(0.9);
   Graph_Graph140->GetXaxis()->SetLabelFont(42);
   Graph_Graph140->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph140->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph140->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph140->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph140->GetXaxis()->SetTitleFont(42);
   Graph_Graph140->GetYaxis()->SetLabelFont(42);
   Graph_Graph140->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph140->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph140->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph140->GetYaxis()->SetTickLength(0.02);
   Graph_Graph140->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph140->GetYaxis()->SetTitleFont(42);
   Graph_Graph140->GetZaxis()->SetLabelFont(42);
   Graph_Graph140->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph140->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph140->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph140->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph140->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph140);
   
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
   line = new TLine(45.61706,0,45.61706,6.893126);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(45.61206,0,"  45.62 TeV");

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
