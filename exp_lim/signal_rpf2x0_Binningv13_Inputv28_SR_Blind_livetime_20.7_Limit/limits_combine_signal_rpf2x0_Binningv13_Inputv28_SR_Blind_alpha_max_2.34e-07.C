#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signal_rpf2x0_Binningv13_Inputv28_SR_Blind_alpha_max_2.34e-07()
{
//=========Macro generated from canvas: climits/climits
//=========  (Tue Jul  7 21:10:08 2026) by ROOT version 6.30/07
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
   
   Double_t Graph0_fx288[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy288[20] = { 102.3402, 8.363508, 7.354474, 5.768814, 5.291376, 5.044252, 4.905126, 6.727238, 9.269029, 12.08222, 14.78557, 27.12809, 27.88047, 27.04424, 27.56347, 27.30236, 26.1693,
   27.37479, 27.47854, 27.47854 };
   TGraph *graph = new TGraph(20,Graph0_fx288,Graph0_fy288);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0288 = new TH1F("Graph_Graph0288","",100,2.7,1099.7);
   Graph_Graph0288->SetMinimum(0.2);
   Graph_Graph0288->SetMaximum(100000);
   Graph_Graph0288->SetDirectory(nullptr);
   Graph_Graph0288->SetStats(0);
   Graph_Graph0288->SetLineWidth(2);
   Graph_Graph0288->SetMarkerStyle(20);
   Graph_Graph0288->SetMarkerSize(0.9);
   Graph_Graph0288->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0288->GetXaxis()->SetRange(0,91);
   Graph_Graph0288->GetXaxis()->SetLabelFont(42);
   Graph_Graph0288->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0288->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0288->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0288->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0288->GetXaxis()->SetTitleFont(42);
   Graph_Graph0288->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0288->GetYaxis()->SetLabelFont(42);
   Graph_Graph0288->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0288->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0288->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0288->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0288->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0288->GetYaxis()->SetTitleFont(42);
   Graph_Graph0288->GetZaxis()->SetLabelFont(42);
   Graph_Graph0288->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0288->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0288->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0288->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0288->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0288);
   
   graph->Draw("al");
   
   Double_t Graph1_fx289[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph1_fy289[42] = { 263.3536, 22.30594, 21.12988, 17.06116, 15.59377, 14.93766, 14.53641, 20.4565, 28.18569, 36.74017, 44.96066, 82.49234, 84.78023, 82.23738, 83.81629, 83.02227, 79.57681,
   83.24253, 83.55803, 83.55803, 83.55803, 7.100603, 7.100603, 7.100603, 7.073947, 6.804864, 7.054077, 7.123885, 7.003339, 7.189512, 7.023805, 4.175044, 3.473909,
   2.747375, 2.098302, 1.901159, 1.981428, 2.095599, 2.279342, 2.893423, 3.688819, 43.23465 };
   graph = new TGraph(42,Graph1_fx289,Graph1_fy289);
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
   
   TH1F *Graph_Graph1289 = new TH1F("Graph_Graph1289","Graph",100,2.7,1099.7);
   Graph_Graph1289->SetMinimum(1.711043);
   Graph_Graph1289->SetMaximum(289.4988);
   Graph_Graph1289->SetDirectory(nullptr);
   Graph_Graph1289->SetStats(0);
   Graph_Graph1289->SetLineWidth(2);
   Graph_Graph1289->SetMarkerStyle(20);
   Graph_Graph1289->SetMarkerSize(0.9);
   Graph_Graph1289->GetXaxis()->SetLabelFont(42);
   Graph_Graph1289->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1289->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1289->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1289->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1289->GetXaxis()->SetTitleFont(42);
   Graph_Graph1289->GetYaxis()->SetLabelFont(42);
   Graph_Graph1289->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1289->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1289->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1289->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1289->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1289->GetYaxis()->SetTitleFont(42);
   Graph_Graph1289->GetZaxis()->SetLabelFont(42);
   Graph_Graph1289->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1289->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1289->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1289->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1289->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1289);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx290[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph2_fy290[42] = { 167.9571, 13.70932, 12.9865, 10.4326, 9.578931, 9.239235, 9.0445, 13.54376, 18.70133, 24.41077, 29.87306, 54.81011, 56.33024, 54.64071, 55.68977, 55.1622, 52.87295,
   55.30855, 55.51818, 55.51818, 55.51818, 12.67709, 12.67709, 12.67709, 12.63184, 12.1099, 12.60131, 12.7142, 12.48837, 12.85225, 12.52694, 7.165181, 5.942446,
   4.645264, 3.478678, 2.897317, 2.99809, 3.15936, 3.443171, 4.365156, 5.318804, 63.9916 };
   graph = new TGraph(42,Graph2_fx290,Graph2_fy290);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2290 = new TH1F("Graph_Graph2290","Graph",100,2.7,1099.7);
   Graph_Graph2290->SetMinimum(2.607585);
   Graph_Graph2290->SetMaximum(184.4631);
   Graph_Graph2290->SetDirectory(nullptr);
   Graph_Graph2290->SetStats(0);
   Graph_Graph2290->SetLineWidth(2);
   Graph_Graph2290->SetMarkerStyle(20);
   Graph_Graph2290->SetMarkerSize(0.9);
   Graph_Graph2290->GetXaxis()->SetLabelFont(42);
   Graph_Graph2290->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2290->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2290->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2290->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2290->GetXaxis()->SetTitleFont(42);
   Graph_Graph2290->GetYaxis()->SetLabelFont(42);
   Graph_Graph2290->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2290->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2290->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2290->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2290->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2290->GetYaxis()->SetTitleFont(42);
   Graph_Graph2290->GetZaxis()->SetLabelFont(42);
   Graph_Graph2290->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2290->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2290->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2290->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2290->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2290);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx291[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy291[20] = { 102.3402, 8.363508, 7.354474, 5.768814, 5.291376, 5.044252, 4.905126, 6.727238, 9.269029, 12.08222, 14.78557, 27.12809, 27.88047, 27.04424, 27.56347, 27.30236, 26.1693,
   27.37479, 27.47854, 27.47854 };
   graph = new TGraph(20,Graph0_fx291,Graph0_fy291);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0291 = new TH1F("Graph_Graph0291","",100,2.7,1099.7);
   Graph_Graph0291->SetMinimum(0.2);
   Graph_Graph0291->SetMaximum(100000);
   Graph_Graph0291->SetDirectory(nullptr);
   Graph_Graph0291->SetStats(0);
   Graph_Graph0291->SetLineWidth(2);
   Graph_Graph0291->SetMarkerStyle(20);
   Graph_Graph0291->SetMarkerSize(0.9);
   Graph_Graph0291->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0291->GetXaxis()->SetRange(0,91);
   Graph_Graph0291->GetXaxis()->SetLabelFont(42);
   Graph_Graph0291->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0291->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0291->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0291->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0291->GetXaxis()->SetTitleFont(42);
   Graph_Graph0291->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0291->GetYaxis()->SetLabelFont(42);
   Graph_Graph0291->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0291->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0291->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0291->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0291->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0291->GetYaxis()->SetTitleFont(42);
   Graph_Graph0291->GetZaxis()->SetLabelFont(42);
   Graph_Graph0291->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0291->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0291->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0291->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0291->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0291);
   
   graph->Draw("l");
   
   Double_t Graph_fx292[72] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180, 185, 190, 195, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450,
   475, 500, 600, 700, 800, 900, 1000 };
   Double_t Graph_fy292[72] = { 1.887622e-175, 2.46013e-155, 2.994253e-139, 4.280831e-126, 7.211899e-106, 6.296091e-98, 4.76887e-91, 4.958236e-85, 1.004958e-79, 5.216141e-75, 8.599018e-71, 5.348722e-67, 1.443111e-63, 1.892907e-60, 1.326326e-57, 5.369711e-55, 1.341719e-52,
   2.441236e-48, 1.941598e-46, 1.139969e-44, 5.093514e-43, 5.907228e-39, 3.427502e-36, 3.180533e-33, 4.417055e-31, 7.955453e-29, 4.085948e-27, 2.404956e-25, 4.62753e-07, 3.112975e-05, 0.0006085911, 0.005519139, 0.0300762,
   0.1149696, 0.3400652, 0.8307406, 3.29999, 5.671592, 9.056933, 13.61826, 19.48077, 26.23617, 34.21405, 53.78847, 77.86648, 105.8213, 136.8663, 170.1623, 204.8951,
   240.3242, 275.8096, 293.4031, 310.8199, 328.0105, 344.9313, 424.3489, 493.361, 551.1591, 598.1586, 635.3655, 664.0038, 685.3129, 700.4479, 710.4377, 716.1748,
   718.4199, 717.8148, 696.3778, 659.1727, 617.0185, 574.869, 574.869 };
   graph = new TGraph(72,Graph_fx292,Graph_fy292);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph292 = new TH1F("Graph_Graph292","",100,1.44,1099.84);
   Graph_Graph292->SetMinimum(1.69886e-175);
   Graph_Graph292->SetMaximum(790.2619);
   Graph_Graph292->SetDirectory(nullptr);
   Graph_Graph292->SetStats(0);
   Graph_Graph292->SetLineWidth(2);
   Graph_Graph292->SetMarkerStyle(20);
   Graph_Graph292->SetMarkerSize(0.9);
   Graph_Graph292->GetXaxis()->SetLabelFont(42);
   Graph_Graph292->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph292->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph292->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph292->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph292->GetXaxis()->SetTitleFont(42);
   Graph_Graph292->GetYaxis()->SetLabelFont(42);
   Graph_Graph292->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph292->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph292->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph292->GetYaxis()->SetTickLength(0.02);
   Graph_Graph292->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph292->GetYaxis()->SetTitleFont(42);
   Graph_Graph292->GetZaxis()->SetLabelFont(42);
   Graph_Graph292->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph292->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph292->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph292->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph292->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph292);
   
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
   
   Double_t Graph_fx294[72] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180, 185, 190, 195, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450,
   475, 500, 600, 700, 800, 900, 1000 };
   Double_t Graph_fy294[72] = { 2.076384e-175, 2.706143e-155, 3.293678e-139, 4.708914e-126, 7.933089e-106, 6.9257e-98, 5.245757e-91, 5.45406e-85, 1.105454e-79, 5.737755e-75, 9.45892e-71, 5.883594e-67, 1.587422e-63, 2.082198e-60, 1.458959e-57, 5.906682e-55, 1.475891e-52,
   2.68536e-48, 2.135758e-46, 1.253966e-44, 5.602865e-43, 6.497951e-39, 3.770252e-36, 3.498586e-33, 4.858761e-31, 8.750998e-29, 4.494543e-27, 2.645452e-25, 5.090283e-07, 3.424272e-05, 0.0006694502, 0.006071053, 0.03308382,
   0.1264666, 0.3740717, 0.9138147, 3.629989, 6.238751, 9.962626, 14.98009, 21.42885, 28.85979, 37.63546, 59.16732, 85.65313, 116.4034, 150.5529, 187.1785, 225.3846,
   264.3566, 303.3906, 322.7434, 341.9019, 360.8116, 379.4244, 466.7838, 542.6971, 606.275, 657.9745, 698.9021, 730.4042, 753.8442, 770.4927, 781.4815, 787.7923,
   790.2619, 789.5963, 766.0156, 725.09, 678.7204, 632.3559, 632.3559 };
   graph = new TGraph(72,Graph_fx294,Graph_fy294);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph294 = new TH1F("Graph_Graph294","",100,1.44,1099.84);
   Graph_Graph294->SetMinimum(1.868746e-175);
   Graph_Graph294->SetMaximum(869.2881);
   Graph_Graph294->SetDirectory(nullptr);
   Graph_Graph294->SetStats(0);
   Graph_Graph294->SetLineWidth(2);
   Graph_Graph294->SetMarkerStyle(20);
   Graph_Graph294->SetMarkerSize(0.9);
   Graph_Graph294->GetXaxis()->SetLabelFont(42);
   Graph_Graph294->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph294->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph294->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph294->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph294->GetXaxis()->SetTitleFont(42);
   Graph_Graph294->GetYaxis()->SetLabelFont(42);
   Graph_Graph294->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph294->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph294->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph294->GetYaxis()->SetTickLength(0.02);
   Graph_Graph294->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph294->GetYaxis()->SetTitleFont(42);
   Graph_Graph294->GetZaxis()->SetLabelFont(42);
   Graph_Graph294->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph294->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph294->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph294->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph294->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph294);
   
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
   pt_LaTex = pt->AddText("#varepsilon = 2.34e-07");
   pt_LaTex = pt->AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
