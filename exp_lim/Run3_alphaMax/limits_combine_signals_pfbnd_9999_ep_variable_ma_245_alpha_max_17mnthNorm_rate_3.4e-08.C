#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_17mnthNorm_rate_3.4e-08()
{
//=========Macro generated from canvas: climits/climits
//=========  (Wed Mar 11 02:27:55 2026) by ROOT version 6.30/07
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
   
   Double_t Graph0_fx148[50] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 6, 7, 7.5, 8, 8.5, 9, 10, 20, 25, 30, 40, 45,
   50, 55, 60, 70, 75, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160, 170,
   180 };
   Double_t Graph0_fy148[50] = { 6.787305, 5.600391, 3.848828, 3.261133, 3.272656, 3.410938, 3.72207, 3.295703, 2.95, 2.846289, 2.938477, 2.978809, 2.880859, 2.690723, 2.350781, 2.103027, 1.930176,
   1.837988, 1.716992, 1.670898, 1.578711, 1.492285, 1.244531, 1.209961, 1.175391, 1.181152, 1.198438, 1.233008, 3.549219, 4.102344, 4.609375, 5.485156, 5.761719,
   6.360938, 6.591406, 7.213672, 7.928125, 8.389062, 9.771875, 10.09453, 10.55547, 10.64766, 11.66172, 12.81406, 13.45938, 14.75, 14.84219, 16.225, 17.79219,
   18.16094 };
   TGraph *graph = new TGraph(50,Graph0_fx148,Graph0_fy148);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0148 = new TH1F("Graph_Graph0148","",100,0,197.84);
   Graph_Graph0148->SetMinimum(0.2);
   Graph_Graph0148->SetMaximum(100000);
   Graph_Graph0148->SetDirectory(nullptr);
   Graph_Graph0148->SetStats(0);
   Graph_Graph0148->SetLineWidth(2);
   Graph_Graph0148->SetMarkerStyle(20);
   Graph_Graph0148->SetMarkerSize(0.9);
   Graph_Graph0148->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0148->GetXaxis()->SetRange(1,91);
   Graph_Graph0148->GetXaxis()->SetLabelFont(42);
   Graph_Graph0148->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0148->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0148->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0148->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0148->GetXaxis()->SetTitleFont(42);
   Graph_Graph0148->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0148->GetYaxis()->SetLabelFont(42);
   Graph_Graph0148->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0148->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0148->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0148->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0148->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0148->GetYaxis()->SetTitleFont(42);
   Graph_Graph0148->GetZaxis()->SetLabelFont(42);
   Graph_Graph0148->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0148->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0148->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0148->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0148->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0148);
   
   graph->Draw("al");
   
   Double_t Graph1_fx149[102] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 6, 7, 7.5, 8, 8.5, 9, 10, 20, 25, 30, 40, 45,
   50, 55, 60, 70, 75, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160, 170,
   180, 180, 180, 180, 170, 160, 150, 140, 130, 120, 110, 100, 95, 90, 85, 75,
   70, 60, 55, 50, 45, 40, 30, 25, 20, 10, 9, 8.5, 8, 7.5, 7, 6,
   5.6, 5.4, 5.2, 5, 4.8, 4.6, 4.4, 4.2, 4, 3.8, 3.6, 3.4, 3.2, 3, 2.8, 2.6,
   2.4, 2.2, 2, 1.8, 1.6 };
   Double_t Graph1_fy149[102] = { 13.48956, 11.81711, 8.546922, 7.278019, 7.30231, 7.831383, 7.60548, 6.864837, 6.894179, 6.495308, 6.427729, 6.378965, 6.241812, 6.141558, 5.794994, 5.509996, 5.212377,
   5.026274, 4.765301, 4.695183, 4.548401, 4.485936, 3.784417, 3.679295, 3.574172, 3.591693, 3.644254, 3.749377, 10.79263, 12.4746, 14.0164, 16.67952, 17.5205,
   19.34263, 20.04345, 21.93567, 24.10821, 25.50985, 29.71477, 30.69592, 32.09756, 32.37789, 35.46149, 38.96559, 40.92789, 44.85248, 45.13281, 49.33773, 54.1033,
   55.22462, 55.22462, 5.107764, 5.107764, 4.865051, 4.436523, 4.058411, 4.033203, 3.680298, 3.503845, 3.188751, 2.953061, 2.886261, 2.760223, 2.671997, 2.293884,
   2.198816, 2.000667, 1.828085, 1.764166, 1.597977, 1.521274, 1.278381, 1.137759, 0.9982178, 0.3564163, 0.3464233, 0.3414268, 0.3397614, 0.3497543, 0.3646088, 0.5188023,
   0.6351845, 0.7049103, 0.7444771, 0.8256588, 0.8896904, 0.9857941, 1.129477, 1.355872, 1.597977, 1.698852, 1.515152, 0.3557644, 0.3687275, 0.4119377, 0.4652304, 1.798737,
   1.61076, 1.605089, 1.90938, 2.822072, 3.499704 };
   graph = new TGraph(102,Graph1_fx149,Graph1_fy149);
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
   
   TH1F *Graph_Graph1149 = new TH1F("Graph_Graph1149","Graph",102,0,197.84);
   Graph_Graph1149->SetMinimum(0.3057852);
   Graph_Graph1149->SetMaximum(60.7131);
   Graph_Graph1149->SetDirectory(nullptr);
   Graph_Graph1149->SetStats(0);
   Graph_Graph1149->SetLineWidth(2);
   Graph_Graph1149->SetMarkerStyle(20);
   Graph_Graph1149->SetMarkerSize(0.9);
   Graph_Graph1149->GetXaxis()->SetLabelFont(42);
   Graph_Graph1149->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1149->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1149->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1149->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1149->GetXaxis()->SetTitleFont(42);
   Graph_Graph1149->GetYaxis()->SetLabelFont(42);
   Graph_Graph1149->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1149->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1149->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1149->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1149->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1149->GetYaxis()->SetTitleFont(42);
   Graph_Graph1149->GetZaxis()->SetLabelFont(42);
   Graph_Graph1149->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1149->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1149->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1149->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1149->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1149);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx150[102] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 6, 7, 7.5, 8, 8.5, 9, 10, 20, 25, 30, 40, 45,
   50, 55, 60, 70, 75, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160, 170,
   180, 180, 180, 180, 170, 160, 150, 140, 130, 120, 110, 100, 95, 90, 85, 75,
   70, 60, 55, 50, 45, 40, 30, 25, 20, 10, 9, 8.5, 8, 7.5, 7, 6,
   5.6, 5.4, 5.2, 5, 4.8, 4.6, 4.4, 4.2, 4, 3.8, 3.6, 3.4, 3.2, 3, 2.8, 2.6,
   2.4, 2.2, 2, 1.8, 1.6 };
   Double_t Graph2_fy150[102] = { 9.695662, 8.279198, 5.804881, 4.931506, 4.955454, 5.368782, 5.146358, 4.523995, 4.025933, 4.343886, 4.34988, 4.344279, 4.23588, 4.085016, 3.751643, 3.452651, 3.199647,
   3.06148, 2.887317, 2.836446, 2.717709, 2.64031, 2.42023, 2.377116, 2.33731, 2.339351, 2.383139, 2.451884, 7.17091, 8.288454, 9.31287, 11.08232, 11.64109,
   12.85176, 13.3174, 14.57464, 16.01814, 16.94942, 19.74328, 20.39518, 21.32647, 21.51273, 23.56156, 25.88978, 27.19358, 29.80118, 29.98744, 32.7813, 35.94768,
   36.69271, 36.69271, 9.18688, 9.18688, 8.904781, 8.074374, 7.344093, 7.298477, 6.65986, 6.340552, 5.836554, 5.297508, 5.222973, 4.994895, 4.862975, 4.151009,
   3.944465, 3.609368, 3.27941, 3.200657, 2.899146, 2.759987, 2.319317, 2.041031, 1.795406, 0.6303512, 0.6126778, 0.6038411, 0.6074239, 0.6219291, 0.6464589, 0.8610423,
   0.9595217, 1.036969, 1.078779, 1.173647, 1.247357, 1.369843, 1.5493, 1.846012, 2.079058, 2.168836, 2.071138, 1.542655, 1.659364, 1.921409, 2.309925, 2.466289,
   2.233971, 2.226105, 2.621521, 3.863941, 4.809607 };
   graph = new TGraph(102,Graph2_fx150,Graph2_fy150);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2150 = new TH1F("Graph_Graph2150","Graph",102,0,197.84);
   Graph_Graph2150->SetMinimum(0.543457);
   Graph_Graph2150->SetMaximum(40.30159);
   Graph_Graph2150->SetDirectory(nullptr);
   Graph_Graph2150->SetStats(0);
   Graph_Graph2150->SetLineWidth(2);
   Graph_Graph2150->SetMarkerStyle(20);
   Graph_Graph2150->SetMarkerSize(0.9);
   Graph_Graph2150->GetXaxis()->SetLabelFont(42);
   Graph_Graph2150->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2150->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2150->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2150->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2150->GetXaxis()->SetTitleFont(42);
   Graph_Graph2150->GetYaxis()->SetLabelFont(42);
   Graph_Graph2150->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2150->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2150->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2150->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2150->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2150->GetYaxis()->SetTitleFont(42);
   Graph_Graph2150->GetZaxis()->SetLabelFont(42);
   Graph_Graph2150->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2150->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2150->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2150->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2150->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2150);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx151[50] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 6, 7, 7.5, 8, 8.5, 9, 10, 20, 25, 30, 40, 45,
   50, 55, 60, 70, 75, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160, 170,
   180 };
   Double_t Graph0_fy151[50] = { 6.787305, 5.600391, 3.848828, 3.261133, 3.272656, 3.410938, 3.72207, 3.295703, 2.95, 2.846289, 2.938477, 2.978809, 2.880859, 2.690723, 2.350781, 2.103027, 1.930176,
   1.837988, 1.716992, 1.670898, 1.578711, 1.492285, 1.244531, 1.209961, 1.175391, 1.181152, 1.198438, 1.233008, 3.549219, 4.102344, 4.609375, 5.485156, 5.761719,
   6.360938, 6.591406, 7.213672, 7.928125, 8.389062, 9.771875, 10.09453, 10.55547, 10.64766, 11.66172, 12.81406, 13.45938, 14.75, 14.84219, 16.225, 17.79219,
   18.16094 };
   graph = new TGraph(50,Graph0_fx151,Graph0_fy151);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0151 = new TH1F("Graph_Graph0151","",100,0,197.84);
   Graph_Graph0151->SetMinimum(0.2);
   Graph_Graph0151->SetMaximum(100000);
   Graph_Graph0151->SetDirectory(nullptr);
   Graph_Graph0151->SetStats(0);
   Graph_Graph0151->SetLineWidth(2);
   Graph_Graph0151->SetMarkerStyle(20);
   Graph_Graph0151->SetMarkerSize(0.9);
   Graph_Graph0151->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0151->GetXaxis()->SetRange(1,91);
   Graph_Graph0151->GetXaxis()->SetLabelFont(42);
   Graph_Graph0151->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0151->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0151->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0151->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0151->GetXaxis()->SetTitleFont(42);
   Graph_Graph0151->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0151->GetYaxis()->SetLabelFont(42);
   Graph_Graph0151->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0151->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0151->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0151->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0151->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0151->GetYaxis()->SetTitleFont(42);
   Graph_Graph0151->GetZaxis()->SetLabelFont(42);
   Graph_Graph0151->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0151->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0151->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0151->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0151->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0151);
   
   graph->Draw("l");
   
   Double_t Graph_fx152[50] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 6, 7, 7.5, 8, 8.5, 9, 10, 20, 25, 30, 40, 45,
   50, 55, 60, 70, 75, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160, 170,
   180 };
   Double_t Graph_fy152[50] = { 0.5840981, 1.322415, 2.503618, 4.167561, 6.305767, 8.872679, 11.7996, 15.00711, 18.41442, 21.94552, 25.53264, 29.11786, 32.6534, 36.10108, 39.43144, 42.62257, 45.65903,
   48.53071, 51.23188, 53.76028, 56.11642, 60.32397, 68.16063, 70.83419, 72.86203, 74.29649, 75.27078, 76.06868, 58.83037, 49.68936, 42.3753, 31.95857, 28.21836,
   25.15163, 22.60415, 20.46257, 17.08109, 15.72937, 13.51389, 12.59757, 11.78248, 11.05357, 9.807211, 8.783519, 7.93018, 7.209717, 6.594648, 6.064413, 5.603349,
   5.199342 };
   graph = new TGraph(50,Graph_fx152,Graph_fy152);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph152 = new TH1F("Graph_Graph152","",100,0,197.84);
   Graph_Graph152->SetMinimum(0.5256883);
   Graph_Graph152->SetMaximum(83.61714);
   Graph_Graph152->SetDirectory(nullptr);
   Graph_Graph152->SetStats(0);
   Graph_Graph152->SetLineWidth(2);
   Graph_Graph152->SetMarkerStyle(20);
   Graph_Graph152->SetMarkerSize(0.9);
   Graph_Graph152->GetXaxis()->SetLabelFont(42);
   Graph_Graph152->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph152->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph152->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph152->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph152->GetXaxis()->SetTitleFont(42);
   Graph_Graph152->GetYaxis()->SetLabelFont(42);
   Graph_Graph152->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph152->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph152->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph152->GetYaxis()->SetTickLength(0.02);
   Graph_Graph152->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph152->GetYaxis()->SetTitleFont(42);
   Graph_Graph152->GetZaxis()->SetLabelFont(42);
   Graph_Graph152->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph152->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph152->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph152->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph152->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph152);
   
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
   
   Double_t Graph_fx154[50] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 6, 7, 7.5, 8, 8.5, 9, 10, 20, 25, 30, 40, 45,
   50, 55, 60, 70, 75, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160, 170,
   180 };
   Double_t Graph_fy154[50] = { 0.6425079, 1.454656, 2.75398, 4.584317, 6.936343, 9.759947, 12.97956, 16.50782, 20.25587, 24.14007, 28.0859, 32.02965, 35.91874, 39.71119, 43.37458, 46.88482, 50.22493,
   53.38378, 56.35507, 59.13631, 61.72806, 66.35637, 74.97669, 77.91761, 80.14823, 81.72613, 82.79786, 83.67555, 64.71341, 54.65829, 46.61283, 35.15443, 31.0402,
   27.6668, 24.86456, 22.50883, 18.7892, 17.3023, 14.86528, 13.85732, 12.96073, 12.15892, 10.78793, 9.66187, 8.723198, 7.930689, 7.254113, 6.670854, 6.163684,
   5.719277 };
   graph = new TGraph(50,Graph_fx154,Graph_fy154);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph154 = new TH1F("Graph_Graph154","",100,0,197.84);
   Graph_Graph154->SetMinimum(0.5782571);
   Graph_Graph154->SetMaximum(91.97885);
   Graph_Graph154->SetDirectory(nullptr);
   Graph_Graph154->SetStats(0);
   Graph_Graph154->SetLineWidth(2);
   Graph_Graph154->SetMarkerStyle(20);
   Graph_Graph154->SetMarkerSize(0.9);
   Graph_Graph154->GetXaxis()->SetLabelFont(42);
   Graph_Graph154->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph154->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph154->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph154->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph154->GetXaxis()->SetTitleFont(42);
   Graph_Graph154->GetYaxis()->SetLabelFont(42);
   Graph_Graph154->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph154->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph154->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph154->GetYaxis()->SetTickLength(0.02);
   Graph_Graph154->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph154->GetYaxis()->SetTitleFont(42);
   Graph_Graph154->GetZaxis()->SetLabelFont(42);
   Graph_Graph154->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph154->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph154->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph154->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph154->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph154);
   
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
   line = new TLine(2.127362,0,2.127362,3.463407);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(2.122362,0,"  2.13 TeV");

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
   pt_LaTex = pt->AddText("#varepsilon = 3.4e-08");
   pt_LaTex = pt->AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
