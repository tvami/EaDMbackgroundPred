#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_17mnthNorm_rate_1.14e-07()
{
//=========Macro generated from canvas: climits/climits
//=========  (Wed Mar 11 02:27:56 2026) by ROOT version 6.30/07
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
   
   Double_t Graph0_fx204[50] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 6, 7, 7.5, 8, 8.5, 9, 10, 20, 25, 30, 40, 45,
   50, 55, 60, 70, 75, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160, 170,
   180 };
   Double_t Graph0_fy204[50] = { 6.787305, 5.600391, 3.848828, 3.261133, 3.272656, 3.410938, 3.72207, 3.295703, 2.95, 2.846289, 2.938477, 2.978809, 2.880859, 2.690723, 2.350781, 2.103027, 1.930176,
   1.837988, 1.716992, 1.670898, 1.578711, 1.492285, 1.244531, 1.209961, 1.175391, 1.181152, 1.198438, 1.233008, 3.549219, 4.102344, 4.609375, 5.485156, 5.761719,
   6.360938, 6.591406, 7.213672, 7.928125, 8.389062, 9.771875, 10.09453, 10.55547, 10.64766, 11.66172, 12.81406, 13.45938, 14.75, 14.84219, 16.225, 17.79219,
   18.16094 };
   TGraph *graph = new TGraph(50,Graph0_fx204,Graph0_fy204);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0204 = new TH1F("Graph_Graph0204","",100,0,197.84);
   Graph_Graph0204->SetMinimum(0.2);
   Graph_Graph0204->SetMaximum(100000);
   Graph_Graph0204->SetDirectory(nullptr);
   Graph_Graph0204->SetStats(0);
   Graph_Graph0204->SetLineWidth(2);
   Graph_Graph0204->SetMarkerStyle(20);
   Graph_Graph0204->SetMarkerSize(0.9);
   Graph_Graph0204->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0204->GetXaxis()->SetRange(1,91);
   Graph_Graph0204->GetXaxis()->SetLabelFont(42);
   Graph_Graph0204->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0204->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0204->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0204->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0204->GetXaxis()->SetTitleFont(42);
   Graph_Graph0204->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0204->GetYaxis()->SetLabelFont(42);
   Graph_Graph0204->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0204->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0204->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0204->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0204->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0204->GetYaxis()->SetTitleFont(42);
   Graph_Graph0204->GetZaxis()->SetLabelFont(42);
   Graph_Graph0204->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0204->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0204->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0204->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0204->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0204);
   
   graph->Draw("al");
   
   Double_t Graph1_fx205[102] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 6, 7, 7.5, 8, 8.5, 9, 10, 20, 25, 30, 40, 45,
   50, 55, 60, 70, 75, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160, 170,
   180, 180, 180, 180, 170, 160, 150, 140, 130, 120, 110, 100, 95, 90, 85, 75,
   70, 60, 55, 50, 45, 40, 30, 25, 20, 10, 9, 8.5, 8, 7.5, 7, 6,
   5.6, 5.4, 5.2, 5, 4.8, 4.6, 4.4, 4.2, 4, 3.8, 3.6, 3.4, 3.2, 3, 2.8, 2.6,
   2.4, 2.2, 2, 1.8, 1.6 };
   Double_t Graph1_fy205[102] = { 13.48956, 11.81711, 8.546922, 7.278019, 7.30231, 7.831383, 7.60548, 6.864837, 6.894179, 6.495308, 6.427729, 6.378965, 6.241812, 6.141558, 5.794994, 5.509996, 5.212377,
   5.026274, 4.765301, 4.695183, 4.548401, 4.485936, 3.784417, 3.679295, 3.574172, 3.591693, 3.644254, 3.749377, 10.79263, 12.4746, 14.0164, 16.67952, 17.5205,
   19.34263, 20.04345, 21.93567, 24.10821, 25.50985, 29.71477, 30.69592, 32.09756, 32.37789, 35.46149, 38.96559, 40.92789, 44.85248, 45.13281, 49.33773, 54.1033,
   55.22462, 55.22462, 5.107764, 5.107764, 4.865051, 4.436523, 4.058411, 4.033203, 3.680298, 3.503845, 3.188751, 2.953061, 2.886261, 2.760223, 2.671997, 2.293884,
   2.198816, 2.000667, 1.828085, 1.764166, 1.597977, 1.521274, 1.278381, 1.137759, 0.9982178, 0.3564163, 0.3464233, 0.3414268, 0.3397614, 0.3497543, 0.3646088, 0.5188023,
   0.6351845, 0.7049103, 0.7444771, 0.8256588, 0.8896904, 0.9857941, 1.129477, 1.355872, 1.597977, 1.698852, 1.515152, 0.3557644, 0.3687275, 0.4119377, 0.4652304, 1.798737,
   1.61076, 1.605089, 1.90938, 2.822072, 3.499704 };
   graph = new TGraph(102,Graph1_fx205,Graph1_fy205);
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
   
   TH1F *Graph_Graph1205 = new TH1F("Graph_Graph1205","Graph",102,0,197.84);
   Graph_Graph1205->SetMinimum(0.3057852);
   Graph_Graph1205->SetMaximum(60.7131);
   Graph_Graph1205->SetDirectory(nullptr);
   Graph_Graph1205->SetStats(0);
   Graph_Graph1205->SetLineWidth(2);
   Graph_Graph1205->SetMarkerStyle(20);
   Graph_Graph1205->SetMarkerSize(0.9);
   Graph_Graph1205->GetXaxis()->SetLabelFont(42);
   Graph_Graph1205->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1205->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1205->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1205->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1205->GetXaxis()->SetTitleFont(42);
   Graph_Graph1205->GetYaxis()->SetLabelFont(42);
   Graph_Graph1205->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1205->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1205->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1205->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1205->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1205->GetYaxis()->SetTitleFont(42);
   Graph_Graph1205->GetZaxis()->SetLabelFont(42);
   Graph_Graph1205->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1205->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1205->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1205->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1205->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1205);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx206[102] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 6, 7, 7.5, 8, 8.5, 9, 10, 20, 25, 30, 40, 45,
   50, 55, 60, 70, 75, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160, 170,
   180, 180, 180, 180, 170, 160, 150, 140, 130, 120, 110, 100, 95, 90, 85, 75,
   70, 60, 55, 50, 45, 40, 30, 25, 20, 10, 9, 8.5, 8, 7.5, 7, 6,
   5.6, 5.4, 5.2, 5, 4.8, 4.6, 4.4, 4.2, 4, 3.8, 3.6, 3.4, 3.2, 3, 2.8, 2.6,
   2.4, 2.2, 2, 1.8, 1.6 };
   Double_t Graph2_fy206[102] = { 9.695662, 8.279198, 5.804881, 4.931506, 4.955454, 5.368782, 5.146358, 4.523995, 4.025933, 4.343886, 4.34988, 4.344279, 4.23588, 4.085016, 3.751643, 3.452651, 3.199647,
   3.06148, 2.887317, 2.836446, 2.717709, 2.64031, 2.42023, 2.377116, 2.33731, 2.339351, 2.383139, 2.451884, 7.17091, 8.288454, 9.31287, 11.08232, 11.64109,
   12.85176, 13.3174, 14.57464, 16.01814, 16.94942, 19.74328, 20.39518, 21.32647, 21.51273, 23.56156, 25.88978, 27.19358, 29.80118, 29.98744, 32.7813, 35.94768,
   36.69271, 36.69271, 9.18688, 9.18688, 8.904781, 8.074374, 7.344093, 7.298477, 6.65986, 6.340552, 5.836554, 5.297508, 5.222973, 4.994895, 4.862975, 4.151009,
   3.944465, 3.609368, 3.27941, 3.200657, 2.899146, 2.759987, 2.319317, 2.041031, 1.795406, 0.6303512, 0.6126778, 0.6038411, 0.6074239, 0.6219291, 0.6464589, 0.8610423,
   0.9595217, 1.036969, 1.078779, 1.173647, 1.247357, 1.369843, 1.5493, 1.846012, 2.079058, 2.168836, 2.071138, 1.542655, 1.659364, 1.921409, 2.309925, 2.466289,
   2.233971, 2.226105, 2.621521, 3.863941, 4.809607 };
   graph = new TGraph(102,Graph2_fx206,Graph2_fy206);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2206 = new TH1F("Graph_Graph2206","Graph",102,0,197.84);
   Graph_Graph2206->SetMinimum(0.543457);
   Graph_Graph2206->SetMaximum(40.30159);
   Graph_Graph2206->SetDirectory(nullptr);
   Graph_Graph2206->SetStats(0);
   Graph_Graph2206->SetLineWidth(2);
   Graph_Graph2206->SetMarkerStyle(20);
   Graph_Graph2206->SetMarkerSize(0.9);
   Graph_Graph2206->GetXaxis()->SetLabelFont(42);
   Graph_Graph2206->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2206->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2206->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2206->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2206->GetXaxis()->SetTitleFont(42);
   Graph_Graph2206->GetYaxis()->SetLabelFont(42);
   Graph_Graph2206->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2206->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2206->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2206->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2206->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2206->GetYaxis()->SetTitleFont(42);
   Graph_Graph2206->GetZaxis()->SetLabelFont(42);
   Graph_Graph2206->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2206->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2206->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2206->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2206->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2206);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx207[50] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 6, 7, 7.5, 8, 8.5, 9, 10, 20, 25, 30, 40, 45,
   50, 55, 60, 70, 75, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160, 170,
   180 };
   Double_t Graph0_fy207[50] = { 6.787305, 5.600391, 3.848828, 3.261133, 3.272656, 3.410938, 3.72207, 3.295703, 2.95, 2.846289, 2.938477, 2.978809, 2.880859, 2.690723, 2.350781, 2.103027, 1.930176,
   1.837988, 1.716992, 1.670898, 1.578711, 1.492285, 1.244531, 1.209961, 1.175391, 1.181152, 1.198438, 1.233008, 3.549219, 4.102344, 4.609375, 5.485156, 5.761719,
   6.360938, 6.591406, 7.213672, 7.928125, 8.389062, 9.771875, 10.09453, 10.55547, 10.64766, 11.66172, 12.81406, 13.45938, 14.75, 14.84219, 16.225, 17.79219,
   18.16094 };
   graph = new TGraph(50,Graph0_fx207,Graph0_fy207);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0207 = new TH1F("Graph_Graph0207","",100,0,197.84);
   Graph_Graph0207->SetMinimum(0.2);
   Graph_Graph0207->SetMaximum(100000);
   Graph_Graph0207->SetDirectory(nullptr);
   Graph_Graph0207->SetStats(0);
   Graph_Graph0207->SetLineWidth(2);
   Graph_Graph0207->SetMarkerStyle(20);
   Graph_Graph0207->SetMarkerSize(0.9);
   Graph_Graph0207->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0207->GetXaxis()->SetRange(1,91);
   Graph_Graph0207->GetXaxis()->SetLabelFont(42);
   Graph_Graph0207->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0207->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0207->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0207->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0207->GetXaxis()->SetTitleFont(42);
   Graph_Graph0207->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0207->GetYaxis()->SetLabelFont(42);
   Graph_Graph0207->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0207->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0207->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0207->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0207->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0207->GetYaxis()->SetTitleFont(42);
   Graph_Graph0207->GetZaxis()->SetLabelFont(42);
   Graph_Graph0207->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0207->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0207->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0207->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0207->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0207);
   
   graph->Draw("l");
   
   Double_t Graph_fx208[50] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 6, 7, 7.5, 8, 8.5, 9, 10, 20, 25, 30, 40, 45,
   50, 55, 60, 70, 75, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160, 170,
   180 };
   Double_t Graph_fy208[50] = { 3.835143e-38, 2.011858e-33, 1.182346e-29, 1.41614e-26, 5.150333e-24, 7.494405e-22, 5.312962e-20, 2.1199e-18, 5.304651e-17, 9.042078e-16, 1.119596e-14, 1.059397e-13, 7.97752e-13, 4.940082e-12, 2.584081e-11, 1.167348e-10, 4.639025e-10,
   1.647058e-09, 5.293379e-09, 1.557183e-08, 4.233273e-08, 2.548888e-07, 9.035315e-06, 3.843497e-05, 0.0001280332, 0.000385362, 0.0009872673, 0.004982, 5.352447, 19.2205, 43.01777, 108.3714, 143.0397,
   175.8607, 205.6234, 231.7819, 273.08, 288.634, 311.1809, 318.8606, 324.5699, 328.5909, 332.5367, 332.3381, 329.2201, 324.0837, 317.5862, 310.2047, 302.2844,
   294.0745 };
   graph = new TGraph(50,Graph_fx208,Graph_fy208);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph208 = new TH1F("Graph_Graph208","",100,0,197.84);
   Graph_Graph208->SetMinimum(3.451629e-38);
   Graph_Graph208->SetMaximum(365.7904);
   Graph_Graph208->SetDirectory(nullptr);
   Graph_Graph208->SetStats(0);
   Graph_Graph208->SetLineWidth(2);
   Graph_Graph208->SetMarkerStyle(20);
   Graph_Graph208->SetMarkerSize(0.9);
   Graph_Graph208->GetXaxis()->SetLabelFont(42);
   Graph_Graph208->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph208->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph208->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph208->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph208->GetXaxis()->SetTitleFont(42);
   Graph_Graph208->GetYaxis()->SetLabelFont(42);
   Graph_Graph208->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph208->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph208->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph208->GetYaxis()->SetTickLength(0.02);
   Graph_Graph208->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph208->GetYaxis()->SetTitleFont(42);
   Graph_Graph208->GetZaxis()->SetLabelFont(42);
   Graph_Graph208->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph208->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph208->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph208->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph208->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph208);
   
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
   
   Double_t Graph_fx210[50] = { 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8,
   5, 5.2, 5.4, 5.6, 6, 7, 7.5, 8, 8.5, 9, 10, 20, 25, 30, 40, 45,
   50, 55, 60, 70, 75, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160, 170,
   180 };
   Double_t Graph_fy210[50] = { 4.218657e-38, 2.213043e-33, 1.300581e-29, 1.557754e-26, 5.665367e-24, 8.243846e-22, 5.844258e-20, 2.33189e-18, 5.835116e-17, 9.946286e-16, 1.231556e-14, 1.165337e-13, 8.775272e-13, 5.43409e-12, 2.842489e-11, 1.284083e-10, 5.102928e-10,
   1.811764e-09, 5.822716e-09, 1.712902e-08, 4.6566e-08, 2.803776e-07, 9.938847e-06, 4.227847e-05, 0.0001408366, 0.0004238982, 0.001085994, 0.0054802, 5.887692, 21.14255, 47.31954, 119.2085, 157.3436,
   193.4467, 226.1858, 254.9601, 300.388, 317.4974, 342.299, 350.7466, 357.0269, 361.45, 365.7904, 365.5719, 362.1421, 356.4921, 349.3448, 341.2252, 332.5129,
   323.482 };
   graph = new TGraph(50,Graph_fx210,Graph_fy210);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph210 = new TH1F("Graph_Graph210","",100,0,197.84);
   Graph_Graph210->SetMinimum(3.796791e-38);
   Graph_Graph210->SetMaximum(402.3694);
   Graph_Graph210->SetDirectory(nullptr);
   Graph_Graph210->SetStats(0);
   Graph_Graph210->SetLineWidth(2);
   Graph_Graph210->SetMarkerStyle(20);
   Graph_Graph210->SetMarkerSize(0.9);
   Graph_Graph210->GetXaxis()->SetLabelFont(42);
   Graph_Graph210->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph210->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph210->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph210->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph210->GetXaxis()->SetTitleFont(42);
   Graph_Graph210->GetYaxis()->SetLabelFont(42);
   Graph_Graph210->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph210->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph210->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph210->GetYaxis()->SetTickLength(0.02);
   Graph_Graph210->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph210->GetYaxis()->SetTitleFont(42);
   Graph_Graph210->GetZaxis()->SetLabelFont(42);
   Graph_Graph210->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph210->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph210->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph210->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph210->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph210);
   
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
   line = new TLine(19.3063,0,19.3063,3.298224);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(19.3013,0,"  19.31 TeV");

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
   pt_LaTex = pt->AddText("#varepsilon = 1.14e-07");
   pt_LaTex = pt->AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
