#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signal_rpf2x0_Binningv13_Inputv28_SR_Blind_alpha_max_2.14e-07()
{
//=========Macro generated from canvas: climits/climits
//=========  (Tue Jul  7 21:10:06 2026) by ROOT version 6.30/07
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
   
   Double_t Graph0_fx274[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy274[20] = { 102.3402, 8.363508, 7.354474, 5.768814, 5.291376, 5.044252, 4.905126, 6.727238, 9.269029, 12.08222, 14.78557, 27.12809, 27.88047, 27.04424, 27.56347, 27.30236, 26.1693,
   27.37479, 27.47854, 27.47854 };
   TGraph *graph = new TGraph(20,Graph0_fx274,Graph0_fy274);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0274 = new TH1F("Graph_Graph0274","",100,2.7,1099.7);
   Graph_Graph0274->SetMinimum(0.2);
   Graph_Graph0274->SetMaximum(100000);
   Graph_Graph0274->SetDirectory(nullptr);
   Graph_Graph0274->SetStats(0);
   Graph_Graph0274->SetLineWidth(2);
   Graph_Graph0274->SetMarkerStyle(20);
   Graph_Graph0274->SetMarkerSize(0.9);
   Graph_Graph0274->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0274->GetXaxis()->SetRange(0,91);
   Graph_Graph0274->GetXaxis()->SetLabelFont(42);
   Graph_Graph0274->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0274->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0274->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0274->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0274->GetXaxis()->SetTitleFont(42);
   Graph_Graph0274->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0274->GetYaxis()->SetLabelFont(42);
   Graph_Graph0274->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0274->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0274->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0274->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0274->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0274->GetYaxis()->SetTitleFont(42);
   Graph_Graph0274->GetZaxis()->SetLabelFont(42);
   Graph_Graph0274->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0274->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0274->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0274->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0274->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0274);
   
   graph->Draw("al");
   
   Double_t Graph1_fx275[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph1_fy275[42] = { 263.3536, 22.30594, 21.12988, 17.06116, 15.59377, 14.93766, 14.53641, 20.4565, 28.18569, 36.74017, 44.96066, 82.49234, 84.78023, 82.23738, 83.81629, 83.02227, 79.57681,
   83.24253, 83.55803, 83.55803, 83.55803, 7.100603, 7.100603, 7.100603, 7.073947, 6.804864, 7.054077, 7.123885, 7.003339, 7.189512, 7.023805, 4.175044, 3.473909,
   2.747375, 2.098302, 1.901159, 1.981428, 2.095599, 2.279342, 2.893423, 3.688819, 43.23465 };
   graph = new TGraph(42,Graph1_fx275,Graph1_fy275);
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
   
   TH1F *Graph_Graph1275 = new TH1F("Graph_Graph1275","Graph",100,2.7,1099.7);
   Graph_Graph1275->SetMinimum(1.711043);
   Graph_Graph1275->SetMaximum(289.4988);
   Graph_Graph1275->SetDirectory(nullptr);
   Graph_Graph1275->SetStats(0);
   Graph_Graph1275->SetLineWidth(2);
   Graph_Graph1275->SetMarkerStyle(20);
   Graph_Graph1275->SetMarkerSize(0.9);
   Graph_Graph1275->GetXaxis()->SetLabelFont(42);
   Graph_Graph1275->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1275->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1275->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1275->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1275->GetXaxis()->SetTitleFont(42);
   Graph_Graph1275->GetYaxis()->SetLabelFont(42);
   Graph_Graph1275->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1275->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1275->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1275->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1275->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1275->GetYaxis()->SetTitleFont(42);
   Graph_Graph1275->GetZaxis()->SetLabelFont(42);
   Graph_Graph1275->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1275->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1275->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1275->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1275->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1275);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx276[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph2_fy276[42] = { 167.9571, 13.70932, 12.9865, 10.4326, 9.578931, 9.239235, 9.0445, 13.54376, 18.70133, 24.41077, 29.87306, 54.81011, 56.33024, 54.64071, 55.68977, 55.1622, 52.87295,
   55.30855, 55.51818, 55.51818, 55.51818, 12.67709, 12.67709, 12.67709, 12.63184, 12.1099, 12.60131, 12.7142, 12.48837, 12.85225, 12.52694, 7.165181, 5.942446,
   4.645264, 3.478678, 2.897317, 2.99809, 3.15936, 3.443171, 4.365156, 5.318804, 63.9916 };
   graph = new TGraph(42,Graph2_fx276,Graph2_fy276);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2276 = new TH1F("Graph_Graph2276","Graph",100,2.7,1099.7);
   Graph_Graph2276->SetMinimum(2.607585);
   Graph_Graph2276->SetMaximum(184.4631);
   Graph_Graph2276->SetDirectory(nullptr);
   Graph_Graph2276->SetStats(0);
   Graph_Graph2276->SetLineWidth(2);
   Graph_Graph2276->SetMarkerStyle(20);
   Graph_Graph2276->SetMarkerSize(0.9);
   Graph_Graph2276->GetXaxis()->SetLabelFont(42);
   Graph_Graph2276->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2276->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2276->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2276->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2276->GetXaxis()->SetTitleFont(42);
   Graph_Graph2276->GetYaxis()->SetLabelFont(42);
   Graph_Graph2276->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2276->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2276->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2276->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2276->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2276->GetYaxis()->SetTitleFont(42);
   Graph_Graph2276->GetZaxis()->SetLabelFont(42);
   Graph_Graph2276->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2276->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2276->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2276->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2276->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2276);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx277[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy277[20] = { 102.3402, 8.363508, 7.354474, 5.768814, 5.291376, 5.044252, 4.905126, 6.727238, 9.269029, 12.08222, 14.78557, 27.12809, 27.88047, 27.04424, 27.56347, 27.30236, 26.1693,
   27.37479, 27.47854, 27.47854 };
   graph = new TGraph(20,Graph0_fx277,Graph0_fy277);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0277 = new TH1F("Graph_Graph0277","",100,2.7,1099.7);
   Graph_Graph0277->SetMinimum(0.2);
   Graph_Graph0277->SetMaximum(100000);
   Graph_Graph0277->SetDirectory(nullptr);
   Graph_Graph0277->SetStats(0);
   Graph_Graph0277->SetLineWidth(2);
   Graph_Graph0277->SetMarkerStyle(20);
   Graph_Graph0277->SetMarkerSize(0.9);
   Graph_Graph0277->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0277->GetXaxis()->SetRange(0,91);
   Graph_Graph0277->GetXaxis()->SetLabelFont(42);
   Graph_Graph0277->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0277->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0277->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0277->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0277->GetXaxis()->SetTitleFont(42);
   Graph_Graph0277->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0277->GetYaxis()->SetLabelFont(42);
   Graph_Graph0277->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0277->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0277->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0277->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0277->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0277->GetYaxis()->SetTitleFont(42);
   Graph_Graph0277->GetZaxis()->SetLabelFont(42);
   Graph_Graph0277->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0277->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0277->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0277->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0277->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0277);
   
   graph->Draw("l");
   
   Double_t Graph_fx278[72] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180, 185, 190, 195, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450,
   475, 500, 600, 700, 800, 900, 1000 };
   Double_t Graph_fy278[72] = { 7.070136e-146, 4.584392e-129, 1.270752e-115, 1.250871e-104, 9.941328e-88, 4.282615e-81, 2.390732e-75, 2.537962e-70, 6.869604e-66, 5.95541e-62, 1.979714e-58, 2.91431e-55, 2.134637e-52, 8.557961e-50, 2.031758e-47, 3.050152e-45, 3.05949e-43,
   1.098794e-39, 4.235221e-38, 1.266823e-36, 3.016287e-35, 6.845027e-32, 1.495925e-29, 4.204609e-27, 2.72692e-25, 1.982969e-23, 5.510536e-22, 1.594832e-20, 2.586905e-05, 0.0008384945, 0.009730732, 0.05967779, 0.2399035,
   0.7189429, 1.742569, 3.605982, 11.03617, 17.08873, 24.90851, 34.55519, 46.01599, 58.12818, 71.55765, 101.8354, 135.683, 171.8925, 209.3366, 247.0368, 284.1912,
   320.1763, 354.5329, 370.9965, 386.9438, 402.3533, 417.2095, 482.9689, 534.8357, 574.1639, 602.7835, 622.5471, 635.1336, 641.9825, 644.2916, 643.0395, 639.0177,
   632.8619, 625.0806, 584.6733, 539.1906, 494.934, 454.1629, 454.1629 };
   graph = new TGraph(72,Graph_fx278,Graph_fy278);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph278 = new TH1F("Graph_Graph278","",100,1.44,1099.84);
   Graph_Graph278->SetMinimum(6.363122e-146);
   Graph_Graph278->SetMaximum(708.7208);
   Graph_Graph278->SetDirectory(nullptr);
   Graph_Graph278->SetStats(0);
   Graph_Graph278->SetLineWidth(2);
   Graph_Graph278->SetMarkerStyle(20);
   Graph_Graph278->SetMarkerSize(0.9);
   Graph_Graph278->GetXaxis()->SetLabelFont(42);
   Graph_Graph278->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph278->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph278->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph278->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph278->GetXaxis()->SetTitleFont(42);
   Graph_Graph278->GetYaxis()->SetLabelFont(42);
   Graph_Graph278->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph278->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph278->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph278->GetYaxis()->SetTickLength(0.02);
   Graph_Graph278->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph278->GetYaxis()->SetTitleFont(42);
   Graph_Graph278->GetZaxis()->SetLabelFont(42);
   Graph_Graph278->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph278->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph278->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph278->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph278->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph278);
   
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
   
   Double_t Graph_fx280[72] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180, 185, 190, 195, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450,
   475, 500, 600, 700, 800, 900, 1000 };
   Double_t Graph_fy280[72] = { 7.77715e-146, 5.042831e-129, 1.397827e-115, 1.375958e-104, 1.093546e-87, 4.710877e-81, 2.629805e-75, 2.791758e-70, 7.556564e-66, 6.550951e-62, 2.177685e-58, 3.205741e-55, 2.348101e-52, 9.413757e-50, 2.234934e-47, 3.355167e-45, 3.365439e-43,
   1.208673e-39, 4.658743e-38, 1.393505e-36, 3.317916e-35, 7.52953e-32, 1.645518e-29, 4.62507e-27, 2.999612e-25, 2.181266e-23, 6.06159e-22, 1.754315e-20, 2.845596e-05, 0.000922344, 0.01070381, 0.06564557, 0.2638938,
   0.7908372, 1.916826, 3.96658, 12.13979, 18.7976, 27.39936, 38.01071, 50.61759, 63.941, 78.71341, 112.0189, 149.2513, 189.0818, 230.2703, 271.7405, 312.6103,
   352.1939, 389.9862, 408.0962, 425.6382, 442.5886, 458.9305, 531.2658, 588.3193, 631.5803, 663.0619, 684.8018, 698.647, 706.1807, 708.7208, 707.3435, 702.9195,
   696.1481, 687.5887, 643.1406, 593.1097, 544.4274, 499.5792, 499.5792 };
   graph = new TGraph(72,Graph_fx280,Graph_fy280);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph280 = new TH1F("Graph_Graph280","",100,1.44,1099.84);
   Graph_Graph280->SetMinimum(6.999435e-146);
   Graph_Graph280->SetMaximum(779.5928);
   Graph_Graph280->SetDirectory(nullptr);
   Graph_Graph280->SetStats(0);
   Graph_Graph280->SetLineWidth(2);
   Graph_Graph280->SetMarkerStyle(20);
   Graph_Graph280->SetMarkerSize(0.9);
   Graph_Graph280->GetXaxis()->SetLabelFont(42);
   Graph_Graph280->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph280->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph280->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph280->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph280->GetXaxis()->SetTitleFont(42);
   Graph_Graph280->GetYaxis()->SetLabelFont(42);
   Graph_Graph280->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph280->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph280->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph280->GetYaxis()->SetTickLength(0.02);
   Graph_Graph280->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph280->GetYaxis()->SetTitleFont(42);
   Graph_Graph280->GetZaxis()->SetLabelFont(42);
   Graph_Graph280->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph280->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph280->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph280->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph280->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph280);
   
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
   pt_LaTex = pt->AddText("#varepsilon = 2.14e-07");
   pt_LaTex = pt->AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
