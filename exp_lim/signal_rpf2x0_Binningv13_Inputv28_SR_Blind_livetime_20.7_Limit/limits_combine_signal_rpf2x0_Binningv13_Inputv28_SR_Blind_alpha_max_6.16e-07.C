#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signal_rpf2x0_Binningv13_Inputv28_SR_Blind_alpha_max_6.16e-07()
{
//=========Macro generated from canvas: climits/climits
//=========  (Tue Jul  7 21:10:30 2026) by ROOT version 6.30/07
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
   
   Double_t Graph0_fx428[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy428[20] = { 102.3402, 8.363508, 7.354474, 5.768814, 5.291376, 5.044252, 4.905126, 6.727238, 9.269029, 12.08222, 14.78557, 27.12809, 27.88047, 27.04424, 27.56347, 27.30236, 26.1693,
   27.37479, 27.47854, 27.47854 };
   TGraph *graph = new TGraph(20,Graph0_fx428,Graph0_fy428);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0428 = new TH1F("Graph_Graph0428","",100,2.7,1099.7);
   Graph_Graph0428->SetMinimum(0.2);
   Graph_Graph0428->SetMaximum(100000);
   Graph_Graph0428->SetDirectory(nullptr);
   Graph_Graph0428->SetStats(0);
   Graph_Graph0428->SetLineWidth(2);
   Graph_Graph0428->SetMarkerStyle(20);
   Graph_Graph0428->SetMarkerSize(0.9);
   Graph_Graph0428->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0428->GetXaxis()->SetRange(0,91);
   Graph_Graph0428->GetXaxis()->SetLabelFont(42);
   Graph_Graph0428->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0428->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0428->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0428->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0428->GetXaxis()->SetTitleFont(42);
   Graph_Graph0428->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0428->GetYaxis()->SetLabelFont(42);
   Graph_Graph0428->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0428->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0428->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0428->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0428->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0428->GetYaxis()->SetTitleFont(42);
   Graph_Graph0428->GetZaxis()->SetLabelFont(42);
   Graph_Graph0428->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0428->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0428->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0428->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0428->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0428);
   
   graph->Draw("al");
   
   Double_t Graph1_fx429[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph1_fy429[42] = { 263.3536, 22.30594, 21.12988, 17.06116, 15.59377, 14.93766, 14.53641, 20.4565, 28.18569, 36.74017, 44.96066, 82.49234, 84.78023, 82.23738, 83.81629, 83.02227, 79.57681,
   83.24253, 83.55803, 83.55803, 83.55803, 7.100603, 7.100603, 7.100603, 7.073947, 6.804864, 7.054077, 7.123885, 7.003339, 7.189512, 7.023805, 4.175044, 3.473909,
   2.747375, 2.098302, 1.901159, 1.981428, 2.095599, 2.279342, 2.893423, 3.688819, 43.23465 };
   graph = new TGraph(42,Graph1_fx429,Graph1_fy429);
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
   
   TH1F *Graph_Graph1429 = new TH1F("Graph_Graph1429","Graph",100,2.7,1099.7);
   Graph_Graph1429->SetMinimum(1.711043);
   Graph_Graph1429->SetMaximum(289.4988);
   Graph_Graph1429->SetDirectory(nullptr);
   Graph_Graph1429->SetStats(0);
   Graph_Graph1429->SetLineWidth(2);
   Graph_Graph1429->SetMarkerStyle(20);
   Graph_Graph1429->SetMarkerSize(0.9);
   Graph_Graph1429->GetXaxis()->SetLabelFont(42);
   Graph_Graph1429->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1429->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1429->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1429->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1429->GetXaxis()->SetTitleFont(42);
   Graph_Graph1429->GetYaxis()->SetLabelFont(42);
   Graph_Graph1429->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1429->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1429->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1429->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1429->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1429->GetYaxis()->SetTitleFont(42);
   Graph_Graph1429->GetZaxis()->SetLabelFont(42);
   Graph_Graph1429->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1429->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1429->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1429->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1429->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1429);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx430[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph2_fy430[42] = { 167.9571, 13.70932, 12.9865, 10.4326, 9.578931, 9.239235, 9.0445, 13.54376, 18.70133, 24.41077, 29.87306, 54.81011, 56.33024, 54.64071, 55.68977, 55.1622, 52.87295,
   55.30855, 55.51818, 55.51818, 55.51818, 12.67709, 12.67709, 12.67709, 12.63184, 12.1099, 12.60131, 12.7142, 12.48837, 12.85225, 12.52694, 7.165181, 5.942446,
   4.645264, 3.478678, 2.897317, 2.99809, 3.15936, 3.443171, 4.365156, 5.318804, 63.9916 };
   graph = new TGraph(42,Graph2_fx430,Graph2_fy430);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2430 = new TH1F("Graph_Graph2430","Graph",100,2.7,1099.7);
   Graph_Graph2430->SetMinimum(2.607585);
   Graph_Graph2430->SetMaximum(184.4631);
   Graph_Graph2430->SetDirectory(nullptr);
   Graph_Graph2430->SetStats(0);
   Graph_Graph2430->SetLineWidth(2);
   Graph_Graph2430->SetMarkerStyle(20);
   Graph_Graph2430->SetMarkerSize(0.9);
   Graph_Graph2430->GetXaxis()->SetLabelFont(42);
   Graph_Graph2430->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2430->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2430->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2430->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2430->GetXaxis()->SetTitleFont(42);
   Graph_Graph2430->GetYaxis()->SetLabelFont(42);
   Graph_Graph2430->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2430->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2430->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2430->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2430->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2430->GetYaxis()->SetTitleFont(42);
   Graph_Graph2430->GetZaxis()->SetLabelFont(42);
   Graph_Graph2430->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2430->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2430->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2430->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2430->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2430);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx431[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy431[20] = { 102.3402, 8.363508, 7.354474, 5.768814, 5.291376, 5.044252, 4.905126, 6.727238, 9.269029, 12.08222, 14.78557, 27.12809, 27.88047, 27.04424, 27.56347, 27.30236, 26.1693,
   27.37479, 27.47854, 27.47854 };
   graph = new TGraph(20,Graph0_fx431,Graph0_fy431);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0431 = new TH1F("Graph_Graph0431","",100,2.7,1099.7);
   Graph_Graph0431->SetMinimum(0.2);
   Graph_Graph0431->SetMaximum(100000);
   Graph_Graph0431->SetDirectory(nullptr);
   Graph_Graph0431->SetStats(0);
   Graph_Graph0431->SetLineWidth(2);
   Graph_Graph0431->SetMarkerStyle(20);
   Graph_Graph0431->SetMarkerSize(0.9);
   Graph_Graph0431->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0431->GetXaxis()->SetRange(0,91);
   Graph_Graph0431->GetXaxis()->SetLabelFont(42);
   Graph_Graph0431->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0431->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0431->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0431->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0431->GetXaxis()->SetTitleFont(42);
   Graph_Graph0431->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0431->GetYaxis()->SetLabelFont(42);
   Graph_Graph0431->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0431->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0431->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0431->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0431->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0431->GetYaxis()->SetTitleFont(42);
   Graph_Graph0431->GetZaxis()->SetLabelFont(42);
   Graph_Graph0431->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0431->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0431->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0431->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0431->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0431);
   
   graph->Draw("l");
   
   Double_t Graph_fx432[72] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180, 185, 190, 195, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450,
   475, 500, 600, 700, 800, 900, 1000 };
   Double_t Graph_fy432[72] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 1.829116e-298, 9.302175e-281, 2.172166e-258, 7.239362e-245, 1.209492e-227, 5.842673e-217, 2.604026e-203, 2.496729e-74, 5.209169e-61, 1.645068e-51, 2.137612e-44, 7.152135e-39,
   1.850631e-34, 7.453574e-31, 7.44713e-28, 3.759841e-23, 2.831492e-21, 1.235203e-19, 3.438205e-18, 6.583259e-17, 9.031672e-16, 9.512655e-15, 5.518478e-13, 1.615628e-11, 2.795908e-10, 3.201505e-09, 2.634801e-08, 1.658209e-07,
   8.368198e-07, 3.513631e-06, 6.78314e-06, 1.263782e-05, 2.278631e-05, 3.985756e-05, 0.0004447669, 0.003017721, 0.01427593, 0.05158081, 0.151593, 0.3790262, 0.8331405, 1.65004, 3.000097, 5.081049,
   8.108103, 12.30267, 44.81367, 109.1386, 207.533, 335.5566, 335.5566 };
   graph = new TGraph(72,Graph_fx432,Graph_fy432);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph432 = new TH1F("Graph_Graph432","",100,1.44,1099.84);
   Graph_Graph432->SetMinimum(0.3691123);
   Graph_Graph432->SetMaximum(369.1123);
   Graph_Graph432->SetDirectory(nullptr);
   Graph_Graph432->SetStats(0);
   Graph_Graph432->SetLineWidth(2);
   Graph_Graph432->SetMarkerStyle(20);
   Graph_Graph432->SetMarkerSize(0.9);
   Graph_Graph432->GetXaxis()->SetLabelFont(42);
   Graph_Graph432->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph432->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph432->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph432->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph432->GetXaxis()->SetTitleFont(42);
   Graph_Graph432->GetYaxis()->SetLabelFont(42);
   Graph_Graph432->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph432->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph432->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph432->GetYaxis()->SetTickLength(0.02);
   Graph_Graph432->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph432->GetYaxis()->SetTitleFont(42);
   Graph_Graph432->GetZaxis()->SetLabelFont(42);
   Graph_Graph432->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph432->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph432->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph432->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph432->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph432);
   
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
   
   Double_t Graph_fx434[72] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180, 185, 190, 195, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450,
   475, 500, 600, 700, 800, 900, 1000 };
   Double_t Graph_fy434[72] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 2.012028e-298, 1.023239e-280, 2.389383e-258, 7.963298e-245, 1.330441e-227, 6.42694e-217, 2.864429e-203, 2.746402e-74, 5.730086e-61, 1.809575e-51, 2.351373e-44, 7.867349e-39,
   2.035694e-34, 8.198931e-31, 8.191843e-28, 4.135825e-23, 3.114641e-21, 1.358723e-19, 3.782026e-18, 7.241585e-17, 9.934839e-16, 1.046392e-14, 6.070326e-13, 1.777191e-11, 3.075499e-10, 3.521656e-09, 2.898281e-08, 1.82403e-07,
   9.205018e-07, 3.864994e-06, 7.461454e-06, 1.39016e-05, 2.506494e-05, 4.384332e-05, 0.0004892436, 0.003319493, 0.01570352, 0.05673889, 0.1667523, 0.4169288, 0.9164545, 1.815044, 3.300107, 5.589154,
   8.918913, 13.53294, 49.29504, 120.0525, 228.2863, 369.1123, 369.1123 };
   graph = new TGraph(72,Graph_fx434,Graph_fy434);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph434 = new TH1F("Graph_Graph434","",100,1.44,1099.84);
   Graph_Graph434->SetMinimum(0.4060235);
   Graph_Graph434->SetMaximum(406.0235);
   Graph_Graph434->SetDirectory(nullptr);
   Graph_Graph434->SetStats(0);
   Graph_Graph434->SetLineWidth(2);
   Graph_Graph434->SetMarkerStyle(20);
   Graph_Graph434->SetMarkerSize(0.9);
   Graph_Graph434->GetXaxis()->SetLabelFont(42);
   Graph_Graph434->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph434->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph434->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph434->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph434->GetXaxis()->SetTitleFont(42);
   Graph_Graph434->GetYaxis()->SetLabelFont(42);
   Graph_Graph434->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph434->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph434->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph434->GetYaxis()->SetTickLength(0.02);
   Graph_Graph434->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph434->GetYaxis()->SetTitleFont(42);
   Graph_Graph434->GetZaxis()->SetLabelFont(42);
   Graph_Graph434->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph434->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph434->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph434->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph434->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph434);
   
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
   line = new TLine(561.9464,0,561.9464,27.40143);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(561.9414,0,"  561.95 TeV");

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
   pt_LaTex = pt->AddText("#varepsilon = 6.16e-07");
   pt_LaTex = pt->AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
