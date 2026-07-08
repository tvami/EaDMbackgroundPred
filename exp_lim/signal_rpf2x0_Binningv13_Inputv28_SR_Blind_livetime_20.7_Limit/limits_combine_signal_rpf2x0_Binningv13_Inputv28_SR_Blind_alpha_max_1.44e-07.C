#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signal_rpf2x0_Binningv13_Inputv28_SR_Blind_alpha_max_1.44e-07()
{
//=========Macro generated from canvas: climits/climits
//=========  (Tue Jul  7 21:09:57 2026) by ROOT version 6.30/07
   TCanvas *climits = new TCanvas("climits", "climits",0,0,700,600);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   climits->SetHighLightColor(2);
   climits->Range(-0.05033449,-1.838764,3.160987,5.759863);
   climits->SetFillColor(0);
   climits->SetBorderMode(0);
   climits->SetBorderSize(2);
   climits->SetLogx();
   climits->SetLogy();
   climits->SetLeftMargin(0.15);
   climits->SetRightMargin(0.05);
   climits->SetBottomMargin(0.15);
   climits->SetFrameLineWidth(2);
   climits->SetFrameBorderMode(0);
   climits->SetFrameLineWidth(2);
   climits->SetFrameBorderMode(0);
   
   Double_t Graph0_fx225[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy225[20] = { 102.3402, 8.363508, 7.354474, 5.768814, 5.291376, 5.044252, 4.905126, 6.727238, 9.269029, 12.08222, 14.78557, 27.12809, 27.88047, 27.04424, 27.56347, 27.30236, 26.1693,
   27.37479, 27.47854, 27.47854 };
   TGraph *graph = new TGraph(20,Graph0_fx225,Graph0_fy225);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0225 = new TH1F("Graph_Graph0225","",100,2.7,1099.7);
   Graph_Graph0225->SetMinimum(0.2);
   Graph_Graph0225->SetMaximum(100000);
   Graph_Graph0225->SetDirectory(nullptr);
   Graph_Graph0225->SetStats(0);
   Graph_Graph0225->SetLineWidth(2);
   Graph_Graph0225->SetMarkerStyle(20);
   Graph_Graph0225->SetMarkerSize(0.9);
   Graph_Graph0225->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0225->GetXaxis()->SetRange(0,91);
   Graph_Graph0225->GetXaxis()->SetLabelFont(42);
   Graph_Graph0225->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0225->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0225->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0225->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0225->GetXaxis()->SetTitleFont(42);
   Graph_Graph0225->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0225->GetYaxis()->SetLabelFont(42);
   Graph_Graph0225->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0225->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0225->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0225->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0225->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0225->GetYaxis()->SetTitleFont(42);
   Graph_Graph0225->GetZaxis()->SetLabelFont(42);
   Graph_Graph0225->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0225->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0225->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0225->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0225->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0225);
   
   graph->Draw("al");
   
   Double_t Graph1_fx226[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph1_fy226[42] = { 263.3536, 22.30594, 21.12988, 17.06116, 15.59377, 14.93766, 14.53641, 20.4565, 28.18569, 36.74017, 44.96066, 82.49234, 84.78023, 82.23738, 83.81629, 83.02227, 79.57681,
   83.24253, 83.55803, 83.55803, 83.55803, 7.100603, 7.100603, 7.100603, 7.073947, 6.804864, 7.054077, 7.123885, 7.003339, 7.189512, 7.023805, 4.175044, 3.473909,
   2.747375, 2.098302, 1.901159, 1.981428, 2.095599, 2.279342, 2.893423, 3.688819, 43.23465 };
   graph = new TGraph(42,Graph1_fx226,Graph1_fy226);
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
   
   TH1F *Graph_Graph1226 = new TH1F("Graph_Graph1226","Graph",100,2.7,1099.7);
   Graph_Graph1226->SetMinimum(1.711043);
   Graph_Graph1226->SetMaximum(289.4988);
   Graph_Graph1226->SetDirectory(nullptr);
   Graph_Graph1226->SetStats(0);
   Graph_Graph1226->SetLineWidth(2);
   Graph_Graph1226->SetMarkerStyle(20);
   Graph_Graph1226->SetMarkerSize(0.9);
   Graph_Graph1226->GetXaxis()->SetLabelFont(42);
   Graph_Graph1226->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1226->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1226->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1226->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1226->GetXaxis()->SetTitleFont(42);
   Graph_Graph1226->GetYaxis()->SetLabelFont(42);
   Graph_Graph1226->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1226->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1226->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1226->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1226->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1226->GetYaxis()->SetTitleFont(42);
   Graph_Graph1226->GetZaxis()->SetLabelFont(42);
   Graph_Graph1226->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1226->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1226->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1226->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1226->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1226);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx227[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph2_fy227[42] = { 167.9571, 13.70932, 12.9865, 10.4326, 9.578931, 9.239235, 9.0445, 13.54376, 18.70133, 24.41077, 29.87306, 54.81011, 56.33024, 54.64071, 55.68977, 55.1622, 52.87295,
   55.30855, 55.51818, 55.51818, 55.51818, 12.67709, 12.67709, 12.67709, 12.63184, 12.1099, 12.60131, 12.7142, 12.48837, 12.85225, 12.52694, 7.165181, 5.942446,
   4.645264, 3.478678, 2.897317, 2.99809, 3.15936, 3.443171, 4.365156, 5.318804, 63.9916 };
   graph = new TGraph(42,Graph2_fx227,Graph2_fy227);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2227 = new TH1F("Graph_Graph2227","Graph",100,2.7,1099.7);
   Graph_Graph2227->SetMinimum(2.607585);
   Graph_Graph2227->SetMaximum(184.4631);
   Graph_Graph2227->SetDirectory(nullptr);
   Graph_Graph2227->SetStats(0);
   Graph_Graph2227->SetLineWidth(2);
   Graph_Graph2227->SetMarkerStyle(20);
   Graph_Graph2227->SetMarkerSize(0.9);
   Graph_Graph2227->GetXaxis()->SetLabelFont(42);
   Graph_Graph2227->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2227->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2227->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2227->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2227->GetXaxis()->SetTitleFont(42);
   Graph_Graph2227->GetYaxis()->SetLabelFont(42);
   Graph_Graph2227->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2227->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2227->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2227->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2227->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2227->GetYaxis()->SetTitleFont(42);
   Graph_Graph2227->GetZaxis()->SetLabelFont(42);
   Graph_Graph2227->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2227->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2227->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2227->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2227->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2227);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx228[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy228[20] = { 102.3402, 8.363508, 7.354474, 5.768814, 5.291376, 5.044252, 4.905126, 6.727238, 9.269029, 12.08222, 14.78557, 27.12809, 27.88047, 27.04424, 27.56347, 27.30236, 26.1693,
   27.37479, 27.47854, 27.47854 };
   graph = new TGraph(20,Graph0_fx228,Graph0_fy228);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0228 = new TH1F("Graph_Graph0228","",100,2.7,1099.7);
   Graph_Graph0228->SetMinimum(0.2);
   Graph_Graph0228->SetMaximum(100000);
   Graph_Graph0228->SetDirectory(nullptr);
   Graph_Graph0228->SetStats(0);
   Graph_Graph0228->SetLineWidth(2);
   Graph_Graph0228->SetMarkerStyle(20);
   Graph_Graph0228->SetMarkerSize(0.9);
   Graph_Graph0228->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0228->GetXaxis()->SetRange(0,91);
   Graph_Graph0228->GetXaxis()->SetLabelFont(42);
   Graph_Graph0228->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0228->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0228->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0228->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0228->GetXaxis()->SetTitleFont(42);
   Graph_Graph0228->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0228->GetYaxis()->SetLabelFont(42);
   Graph_Graph0228->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0228->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0228->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0228->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0228->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0228->GetYaxis()->SetTitleFont(42);
   Graph_Graph0228->GetZaxis()->SetLabelFont(42);
   Graph_Graph0228->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0228->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0228->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0228->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0228->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0228);
   
   graph->Draw("l");
   
   Double_t Graph_fx229[72] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180, 185, 190, 195, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450,
   475, 500, 600, 700, 800, 900, 1000 };
   Double_t Graph_fy229[72] = { 2.035924e-63, 7.620867e-56, 8.588033e-50, 7.584959e-45, 2.998926e-37, 2.860183e-34, 1.085652e-31, 1.950116e-29, 1.892304e-27, 1.099459e-25, 4.148565e-24, 1.084817e-22, 2.071963e-21, 3.017477e-20, 3.47184e-19, 3.250665e-18, 2.539018e-17,
   9.750525e-16, 4.955866e-15, 2.247872e-14, 9.203502e-14, 2.465889e-12, 3.103587e-11, 3.430824e-10, 2.382221e-09, 1.48563e-08, 6.835649e-08, 2.883056e-07, 1.111784, 4.67555, 12.61748, 25.91259, 44.48257,
   67.48572, 93.71814, 121.9235, 179.9407, 208.1229, 235.0143, 260.279, 283.7153, 299.6139, 313.9151, 338.153, 357.2356, 371.8832, 382.735, 390.3589, 395.2586,
   397.8776, 398.6034, 398.3629, 397.7708, 396.8616, 395.6669, 386.3543, 373.3875, 358.5903, 343.0915, 327.5737, 312.4375, 297.9073, 284.0977, 271.0558, 258.7877,
   247.2748, 236.4848, 199.7262, 171.2335, 148.8118, 130.8653, 130.8653 };
   graph = new TGraph(72,Graph_fx229,Graph_fy229);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph229 = new TH1F("Graph_Graph229","",100,1.44,1099.84);
   Graph_Graph229->SetMinimum(1.832332e-63);
   Graph_Graph229->SetMaximum(438.4637);
   Graph_Graph229->SetDirectory(nullptr);
   Graph_Graph229->SetStats(0);
   Graph_Graph229->SetLineWidth(2);
   Graph_Graph229->SetMarkerStyle(20);
   Graph_Graph229->SetMarkerSize(0.9);
   Graph_Graph229->GetXaxis()->SetLabelFont(42);
   Graph_Graph229->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph229->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph229->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph229->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph229->GetXaxis()->SetTitleFont(42);
   Graph_Graph229->GetYaxis()->SetLabelFont(42);
   Graph_Graph229->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph229->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph229->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph229->GetYaxis()->SetTickLength(0.02);
   Graph_Graph229->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph229->GetYaxis()->SetTitleFont(42);
   Graph_Graph229->GetZaxis()->SetLabelFont(42);
   Graph_Graph229->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph229->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph229->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph229->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph229->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph229);
   
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
   
   Double_t Graph_fx231[72] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180, 185, 190, 195, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450,
   475, 500, 600, 700, 800, 900, 1000 };
   Double_t Graph_fy231[72] = { 2.239516e-63, 8.382954e-56, 9.446836e-50, 8.343455e-45, 3.298819e-37, 3.146201e-34, 1.194217e-31, 2.145128e-29, 2.081534e-27, 1.209405e-25, 4.563422e-24, 1.193299e-22, 2.279159e-21, 3.319225e-20, 3.819024e-19, 3.575732e-18, 2.79292e-17,
   1.072558e-15, 5.451453e-15, 2.472659e-14, 1.012385e-13, 2.712478e-12, 3.413946e-11, 3.773906e-10, 2.620443e-09, 1.634193e-08, 7.519214e-08, 3.171362e-07, 1.222962, 5.143105, 13.87923, 28.50385, 48.93083,
   74.23429, 103.09, 134.1159, 197.9348, 228.9352, 258.5157, 286.3069, 312.0868, 329.5753, 345.3066, 371.9683, 392.9592, 409.0715, 421.0085, 429.3948, 434.7845,
   437.6654, 438.4637, 438.1992, 437.5479, 436.5478, 435.2336, 424.9897, 410.7262, 394.4493, 377.4007, 360.3311, 343.6813, 327.698, 312.5075, 298.1614, 284.6665,
   272.0023, 260.1333, 219.6988, 188.3569, 163.693, 143.9518, 143.9518 };
   graph = new TGraph(72,Graph_fx231,Graph_fy231);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph231 = new TH1F("Graph_Graph231","",100,1.44,1099.84);
   Graph_Graph231->SetMinimum(2.015565e-63);
   Graph_Graph231->SetMaximum(482.3101);
   Graph_Graph231->SetDirectory(nullptr);
   Graph_Graph231->SetStats(0);
   Graph_Graph231->SetLineWidth(2);
   Graph_Graph231->SetMarkerStyle(20);
   Graph_Graph231->SetMarkerSize(0.9);
   Graph_Graph231->GetXaxis()->SetLabelFont(42);
   Graph_Graph231->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph231->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph231->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph231->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph231->GetXaxis()->SetTitleFont(42);
   Graph_Graph231->GetYaxis()->SetLabelFont(42);
   Graph_Graph231->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph231->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph231->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph231->GetYaxis()->SetTickLength(0.02);
   Graph_Graph231->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph231->GetYaxis()->SetTitleFont(42);
   Graph_Graph231->GetZaxis()->SetLabelFont(42);
   Graph_Graph231->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph231->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph231->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph231->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph231->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph231);
   
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
   line = new TLine(31.39055,0,31.39055,6.162213);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(31.38555,0,"  31.39 TeV");

   ci = TColor::GetColor("#666666");
   tex->SetTextColor(ci);
   tex->SetTextFont(43);
   tex->SetTextSize(14);
   tex->SetTextAngle(90);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TH1F *Graph_copy = new TH1F("Graph_copy","",100,2.7,1099.7);
   Graph_copy->SetMinimum(1e-06);
   Graph_copy->SetMaximum(1000);
   Graph_copy->SetDirectory(nullptr);
   Graph_copy->SetStats(0);
   Graph_copy->SetLineWidth(2);
   Graph_copy->SetMarkerStyle(20);
   Graph_copy->SetMarkerSize(0.9);
   Graph_copy->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_copy->GetXaxis()->SetRange(0,91);
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
      tex = new TLatex(0.4325,0.95,"Work in Progress");
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
   pt_LaTex = pt->AddText("#varepsilon = 1.44e-07");
   pt_LaTex = pt->AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
