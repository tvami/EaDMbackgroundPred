#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_17mnthNorm_rate_2.24e-07()
{
//=========Macro generated from canvas: climits/climits
//=========  (Wed Mar 11 02:27:57 2026) by ROOT version 6.30/07
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
   
   Double_t Graph0_fx281[50] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 6, 7, 7.5, 8, 8.5, 9, 10, 20, 25, 30, 40, 45,
   50, 55, 60, 70, 75, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160, 170,
   180 };
   Double_t Graph0_fy281[50] = { 6.787305, 5.600391, 3.848828, 3.261133, 3.272656, 3.410938, 3.72207, 3.295703, 2.95, 2.846289, 2.938477, 2.978809, 2.880859, 2.690723, 2.350781, 2.103027, 1.930176,
   1.837988, 1.716992, 1.670898, 1.578711, 1.492285, 1.244531, 1.209961, 1.175391, 1.181152, 1.198438, 1.233008, 3.549219, 4.102344, 4.609375, 5.485156, 5.761719,
   6.360938, 6.591406, 7.213672, 7.928125, 8.389062, 9.771875, 10.09453, 10.55547, 10.64766, 11.66172, 12.81406, 13.45938, 14.75, 14.84219, 16.225, 17.79219,
   18.16094 };
   TGraph *graph = new TGraph(50,Graph0_fx281,Graph0_fy281);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0281 = new TH1F("Graph_Graph0281","",100,0,197.84);
   Graph_Graph0281->SetMinimum(0.2);
   Graph_Graph0281->SetMaximum(100000);
   Graph_Graph0281->SetDirectory(nullptr);
   Graph_Graph0281->SetStats(0);
   Graph_Graph0281->SetLineWidth(2);
   Graph_Graph0281->SetMarkerStyle(20);
   Graph_Graph0281->SetMarkerSize(0.9);
   Graph_Graph0281->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0281->GetXaxis()->SetRange(1,91);
   Graph_Graph0281->GetXaxis()->SetLabelFont(42);
   Graph_Graph0281->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0281->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0281->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0281->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0281->GetXaxis()->SetTitleFont(42);
   Graph_Graph0281->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0281->GetYaxis()->SetLabelFont(42);
   Graph_Graph0281->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0281->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0281->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0281->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0281->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0281->GetYaxis()->SetTitleFont(42);
   Graph_Graph0281->GetZaxis()->SetLabelFont(42);
   Graph_Graph0281->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0281->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0281->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0281->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0281->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0281);
   
   graph->Draw("al");
   
   Double_t Graph1_fx282[102] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 6, 7, 7.5, 8, 8.5, 9, 10, 20, 25, 30, 40, 45,
   50, 55, 60, 70, 75, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160, 170,
   180, 180, 180, 180, 170, 160, 150, 140, 130, 120, 110, 100, 95, 90, 85, 75,
   70, 60, 55, 50, 45, 40, 30, 25, 20, 10, 9, 8.5, 8, 7.5, 7, 6,
   5.6, 5.4, 5.2, 5, 4.8, 4.6, 4.4, 4.2, 4, 3.8, 3.6, 3.4, 3.2, 3, 2.8, 2.6,
   2.4, 2.2, 2, 1.8, 1.6 };
   Double_t Graph1_fy282[102] = { 13.48956, 11.81711, 8.546922, 7.278019, 7.30231, 7.831383, 7.60548, 6.864837, 6.894179, 6.495308, 6.427729, 6.378965, 6.241812, 6.141558, 5.794994, 5.509996, 5.212377,
   5.026274, 4.765301, 4.695183, 4.548401, 4.485936, 3.784417, 3.679295, 3.574172, 3.591693, 3.644254, 3.749377, 10.79263, 12.4746, 14.0164, 16.67952, 17.5205,
   19.34263, 20.04345, 21.93567, 24.10821, 25.50985, 29.71477, 30.69592, 32.09756, 32.37789, 35.46149, 38.96559, 40.92789, 44.85248, 45.13281, 49.33773, 54.1033,
   55.22462, 55.22462, 5.107764, 5.107764, 4.865051, 4.436523, 4.058411, 4.033203, 3.680298, 3.503845, 3.188751, 2.953061, 2.886261, 2.760223, 2.671997, 2.293884,
   2.198816, 2.000667, 1.828085, 1.764166, 1.597977, 1.521274, 1.278381, 1.137759, 0.9982178, 0.3564163, 0.3464233, 0.3414268, 0.3397614, 0.3497543, 0.3646088, 0.5188023,
   0.6351845, 0.7049103, 0.7444771, 0.8256588, 0.8896904, 0.9857941, 1.129477, 1.355872, 1.597977, 1.698852, 1.515152, 0.3557644, 0.3687275, 0.4119377, 0.4652304, 1.798737,
   1.61076, 1.605089, 1.90938, 2.822072, 3.499704 };
   graph = new TGraph(102,Graph1_fx282,Graph1_fy282);
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
   
   TH1F *Graph_Graph1282 = new TH1F("Graph_Graph1282","Graph",102,0,197.84);
   Graph_Graph1282->SetMinimum(0.3057852);
   Graph_Graph1282->SetMaximum(60.7131);
   Graph_Graph1282->SetDirectory(nullptr);
   Graph_Graph1282->SetStats(0);
   Graph_Graph1282->SetLineWidth(2);
   Graph_Graph1282->SetMarkerStyle(20);
   Graph_Graph1282->SetMarkerSize(0.9);
   Graph_Graph1282->GetXaxis()->SetLabelFont(42);
   Graph_Graph1282->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1282->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1282->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1282->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1282->GetXaxis()->SetTitleFont(42);
   Graph_Graph1282->GetYaxis()->SetLabelFont(42);
   Graph_Graph1282->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1282->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1282->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1282->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1282->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1282->GetYaxis()->SetTitleFont(42);
   Graph_Graph1282->GetZaxis()->SetLabelFont(42);
   Graph_Graph1282->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1282->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1282->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1282->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1282->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1282);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx283[102] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 6, 7, 7.5, 8, 8.5, 9, 10, 20, 25, 30, 40, 45,
   50, 55, 60, 70, 75, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160, 170,
   180, 180, 180, 180, 170, 160, 150, 140, 130, 120, 110, 100, 95, 90, 85, 75,
   70, 60, 55, 50, 45, 40, 30, 25, 20, 10, 9, 8.5, 8, 7.5, 7, 6,
   5.6, 5.4, 5.2, 5, 4.8, 4.6, 4.4, 4.2, 4, 3.8, 3.6, 3.4, 3.2, 3, 2.8, 2.6,
   2.4, 2.2, 2, 1.8, 1.6 };
   Double_t Graph2_fy283[102] = { 9.695662, 8.279198, 5.804881, 4.931506, 4.955454, 5.368782, 5.146358, 4.523995, 4.025933, 4.343886, 4.34988, 4.344279, 4.23588, 4.085016, 3.751643, 3.452651, 3.199647,
   3.06148, 2.887317, 2.836446, 2.717709, 2.64031, 2.42023, 2.377116, 2.33731, 2.339351, 2.383139, 2.451884, 7.17091, 8.288454, 9.31287, 11.08232, 11.64109,
   12.85176, 13.3174, 14.57464, 16.01814, 16.94942, 19.74328, 20.39518, 21.32647, 21.51273, 23.56156, 25.88978, 27.19358, 29.80118, 29.98744, 32.7813, 35.94768,
   36.69271, 36.69271, 9.18688, 9.18688, 8.904781, 8.074374, 7.344093, 7.298477, 6.65986, 6.340552, 5.836554, 5.297508, 5.222973, 4.994895, 4.862975, 4.151009,
   3.944465, 3.609368, 3.27941, 3.200657, 2.899146, 2.759987, 2.319317, 2.041031, 1.795406, 0.6303512, 0.6126778, 0.6038411, 0.6074239, 0.6219291, 0.6464589, 0.8610423,
   0.9595217, 1.036969, 1.078779, 1.173647, 1.247357, 1.369843, 1.5493, 1.846012, 2.079058, 2.168836, 2.071138, 1.542655, 1.659364, 1.921409, 2.309925, 2.466289,
   2.233971, 2.226105, 2.621521, 3.863941, 4.809607 };
   graph = new TGraph(102,Graph2_fx283,Graph2_fy283);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2283 = new TH1F("Graph_Graph2283","Graph",102,0,197.84);
   Graph_Graph2283->SetMinimum(0.543457);
   Graph_Graph2283->SetMaximum(40.30159);
   Graph_Graph2283->SetDirectory(nullptr);
   Graph_Graph2283->SetStats(0);
   Graph_Graph2283->SetLineWidth(2);
   Graph_Graph2283->SetMarkerStyle(20);
   Graph_Graph2283->SetMarkerSize(0.9);
   Graph_Graph2283->GetXaxis()->SetLabelFont(42);
   Graph_Graph2283->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2283->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2283->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2283->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2283->GetXaxis()->SetTitleFont(42);
   Graph_Graph2283->GetYaxis()->SetLabelFont(42);
   Graph_Graph2283->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2283->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2283->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2283->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2283->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2283->GetYaxis()->SetTitleFont(42);
   Graph_Graph2283->GetZaxis()->SetLabelFont(42);
   Graph_Graph2283->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2283->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2283->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2283->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2283->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2283);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx284[50] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 6, 7, 7.5, 8, 8.5, 9, 10, 20, 25, 30, 40, 45,
   50, 55, 60, 70, 75, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160, 170,
   180 };
   Double_t Graph0_fy284[50] = { 6.787305, 5.600391, 3.848828, 3.261133, 3.272656, 3.410938, 3.72207, 3.295703, 2.95, 2.846289, 2.938477, 2.978809, 2.880859, 2.690723, 2.350781, 2.103027, 1.930176,
   1.837988, 1.716992, 1.670898, 1.578711, 1.492285, 1.244531, 1.209961, 1.175391, 1.181152, 1.198438, 1.233008, 3.549219, 4.102344, 4.609375, 5.485156, 5.761719,
   6.360938, 6.591406, 7.213672, 7.928125, 8.389062, 9.771875, 10.09453, 10.55547, 10.64766, 11.66172, 12.81406, 13.45938, 14.75, 14.84219, 16.225, 17.79219,
   18.16094 };
   graph = new TGraph(50,Graph0_fx284,Graph0_fy284);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0284 = new TH1F("Graph_Graph0284","",100,0,197.84);
   Graph_Graph0284->SetMinimum(0.2);
   Graph_Graph0284->SetMaximum(100000);
   Graph_Graph0284->SetDirectory(nullptr);
   Graph_Graph0284->SetStats(0);
   Graph_Graph0284->SetLineWidth(2);
   Graph_Graph0284->SetMarkerStyle(20);
   Graph_Graph0284->SetMarkerSize(0.9);
   Graph_Graph0284->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0284->GetXaxis()->SetRange(1,91);
   Graph_Graph0284->GetXaxis()->SetLabelFont(42);
   Graph_Graph0284->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0284->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0284->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0284->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0284->GetXaxis()->SetTitleFont(42);
   Graph_Graph0284->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0284->GetYaxis()->SetLabelFont(42);
   Graph_Graph0284->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0284->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0284->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0284->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0284->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0284->GetYaxis()->SetTitleFont(42);
   Graph_Graph0284->GetZaxis()->SetLabelFont(42);
   Graph_Graph0284->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0284->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0284->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0284->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0284->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0284);
   
   graph->Draw("l");
   
   Double_t Graph_fx285[50] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 6, 7, 7.5, 8, 8.5, 9, 10, 20, 25, 30, 40, 45,
   50, 55, 60, 70, 75, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160, 170,
   180 };
   Double_t Graph_fy285[50] = { 2.489989e-160, 6.649364e-142, 3.608629e-127, 4.049556e-115, 4.411199e-105, 1.360381e-96, 2.551051e-89, 5.095216e-83, 1.650197e-77, 1.195118e-72, 2.485004e-68, 1.807012e-64, 5.380755e-61, 7.454907e-58, 5.335005e-55, 2.149812e-52, 5.241637e-50,
   8.21414e-48, 8.707132e-46, 6.520864e-44, 3.581367e-42, 4.824544e-39, 8.560815e-33, 4.306485e-30, 4.059703e-28, 4.592185e-26, 1.725686e-24, 1.358361e-21, 1.079056e-08, 3.647813e-06, 0.0001689532, 0.01878653, 0.08763139,
   0.2957937, 0.7902439, 1.773475, 6.165697, 10.04659, 22.09509, 30.47114, 40.45961, 52.02978, 79.59215, 112.2378, 148.7886, 188.0138, 228.7618, 270.0293, 310.988,
   350.9843 };
   graph = new TGraph(50,Graph_fx285,Graph_fy285);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph285 = new TH1F("Graph_Graph285","",100,0,197.84);
   Graph_Graph285->SetMinimum(2.24099e-160);
   Graph_Graph285->SetMaximum(386.0827);
   Graph_Graph285->SetDirectory(nullptr);
   Graph_Graph285->SetStats(0);
   Graph_Graph285->SetLineWidth(2);
   Graph_Graph285->SetMarkerStyle(20);
   Graph_Graph285->SetMarkerSize(0.9);
   Graph_Graph285->GetXaxis()->SetLabelFont(42);
   Graph_Graph285->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph285->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph285->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph285->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph285->GetXaxis()->SetTitleFont(42);
   Graph_Graph285->GetYaxis()->SetLabelFont(42);
   Graph_Graph285->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph285->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph285->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph285->GetYaxis()->SetTickLength(0.02);
   Graph_Graph285->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph285->GetYaxis()->SetTitleFont(42);
   Graph_Graph285->GetZaxis()->SetLabelFont(42);
   Graph_Graph285->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph285->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph285->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph285->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph285->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph285);
   
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
   
   Double_t Graph_fx287[50] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 6, 7, 7.5, 8, 8.5, 9, 10, 20, 25, 30, 40, 45,
   50, 55, 60, 70, 75, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160, 170,
   180 };
   Double_t Graph_fy287[50] = { 2.738988e-160, 7.3143e-142, 3.969492e-127, 4.454511e-115, 4.852318e-105, 1.496419e-96, 2.806156e-89, 5.604738e-83, 1.815217e-77, 1.31463e-72, 2.733505e-68, 1.987713e-64, 5.91883e-61, 8.200398e-58, 5.868506e-55, 2.364793e-52, 5.765801e-50,
   9.035554e-48, 9.577846e-46, 7.17295e-44, 3.939503e-42, 5.306999e-39, 9.416896e-33, 4.737134e-30, 4.465673e-28, 5.051404e-26, 1.898254e-24, 1.494197e-21, 1.186962e-08, 4.012594e-06, 0.0001858485, 0.02066519, 0.09639453,
   0.3253731, 0.8692683, 1.950823, 6.782266, 11.05124, 24.3046, 33.51826, 44.50557, 57.23275, 87.55136, 123.4616, 163.6674, 206.8152, 251.638, 297.0322, 342.0868,
   386.0827 };
   graph = new TGraph(50,Graph_fx287,Graph_fy287);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph287 = new TH1F("Graph_Graph287","",100,0,197.84);
   Graph_Graph287->SetMinimum(2.465089e-160);
   Graph_Graph287->SetMaximum(424.691);
   Graph_Graph287->SetDirectory(nullptr);
   Graph_Graph287->SetStats(0);
   Graph_Graph287->SetLineWidth(2);
   Graph_Graph287->SetMarkerStyle(20);
   Graph_Graph287->SetMarkerSize(0.9);
   Graph_Graph287->GetXaxis()->SetLabelFont(42);
   Graph_Graph287->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph287->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph287->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph287->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph287->GetXaxis()->SetTitleFont(42);
   Graph_Graph287->GetYaxis()->SetLabelFont(42);
   Graph_Graph287->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph287->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph287->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph287->GetYaxis()->SetTickLength(0.02);
   Graph_Graph287->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph287->GetYaxis()->SetTitleFont(42);
   Graph_Graph287->GetZaxis()->SetLabelFont(42);
   Graph_Graph287->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph287->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph287->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph287->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph287->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph287);
   
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
   line = new TLine(72.91179,0,72.91179,8.193383);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(72.90679,0,"  72.91 TeV");

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
      tex = new TLatex(0.4325,0.95,"Data Private Work");
   tex->SetNDC();
   tex->SetTextAlign(23);
   tex->SetTextFont(52);
   tex->SetTextSize(0.0448);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TPaveText *pt = new TPaveText(0.2,0.68,0.43,0.88,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextAlign(12);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("m_{A'} = 0.245 GeV");
   pt_LaTex = pt->AddText("#varepsilon = 2.24e-07");
   pt_LaTex = pt->AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
