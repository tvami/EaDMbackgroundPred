#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signal_rpf2x0_Binningv13_Inputv28_SR_Blind_alpha_max_4.72e-07()
{
//=========Macro generated from canvas: climits/climits
//=========  (Tue Jul  7 21:10:23 2026) by ROOT version 6.30/07
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
   
   Double_t Graph0_fx386[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy386[20] = { 102.3402, 8.363508, 7.354474, 5.768814, 5.291376, 5.044252, 4.905126, 6.727238, 9.269029, 12.08222, 14.78557, 27.12809, 27.88047, 27.04424, 27.56347, 27.30236, 26.1693,
   27.37479, 27.47854, 27.47854 };
   TGraph *graph = new TGraph(20,Graph0_fx386,Graph0_fy386);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0386 = new TH1F("Graph_Graph0386","",100,2.7,1099.7);
   Graph_Graph0386->SetMinimum(0.2);
   Graph_Graph0386->SetMaximum(100000);
   Graph_Graph0386->SetDirectory(nullptr);
   Graph_Graph0386->SetStats(0);
   Graph_Graph0386->SetLineWidth(2);
   Graph_Graph0386->SetMarkerStyle(20);
   Graph_Graph0386->SetMarkerSize(0.9);
   Graph_Graph0386->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0386->GetXaxis()->SetRange(0,91);
   Graph_Graph0386->GetXaxis()->SetLabelFont(42);
   Graph_Graph0386->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0386->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0386->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0386->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0386->GetXaxis()->SetTitleFont(42);
   Graph_Graph0386->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0386->GetYaxis()->SetLabelFont(42);
   Graph_Graph0386->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0386->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0386->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0386->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0386->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0386->GetYaxis()->SetTitleFont(42);
   Graph_Graph0386->GetZaxis()->SetLabelFont(42);
   Graph_Graph0386->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0386->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0386->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0386->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0386->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0386);
   
   graph->Draw("al");
   
   Double_t Graph1_fx387[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph1_fy387[42] = { 263.3536, 22.30594, 21.12988, 17.06116, 15.59377, 14.93766, 14.53641, 20.4565, 28.18569, 36.74017, 44.96066, 82.49234, 84.78023, 82.23738, 83.81629, 83.02227, 79.57681,
   83.24253, 83.55803, 83.55803, 83.55803, 7.100603, 7.100603, 7.100603, 7.073947, 6.804864, 7.054077, 7.123885, 7.003339, 7.189512, 7.023805, 4.175044, 3.473909,
   2.747375, 2.098302, 1.901159, 1.981428, 2.095599, 2.279342, 2.893423, 3.688819, 43.23465 };
   graph = new TGraph(42,Graph1_fx387,Graph1_fy387);
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
   
   TH1F *Graph_Graph1387 = new TH1F("Graph_Graph1387","Graph",100,2.7,1099.7);
   Graph_Graph1387->SetMinimum(1.711043);
   Graph_Graph1387->SetMaximum(289.4988);
   Graph_Graph1387->SetDirectory(nullptr);
   Graph_Graph1387->SetStats(0);
   Graph_Graph1387->SetLineWidth(2);
   Graph_Graph1387->SetMarkerStyle(20);
   Graph_Graph1387->SetMarkerSize(0.9);
   Graph_Graph1387->GetXaxis()->SetLabelFont(42);
   Graph_Graph1387->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1387->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1387->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1387->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1387->GetXaxis()->SetTitleFont(42);
   Graph_Graph1387->GetYaxis()->SetLabelFont(42);
   Graph_Graph1387->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1387->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1387->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1387->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1387->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1387->GetYaxis()->SetTitleFont(42);
   Graph_Graph1387->GetZaxis()->SetLabelFont(42);
   Graph_Graph1387->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1387->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1387->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1387->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1387->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1387);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx388[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph2_fy388[42] = { 167.9571, 13.70932, 12.9865, 10.4326, 9.578931, 9.239235, 9.0445, 13.54376, 18.70133, 24.41077, 29.87306, 54.81011, 56.33024, 54.64071, 55.68977, 55.1622, 52.87295,
   55.30855, 55.51818, 55.51818, 55.51818, 12.67709, 12.67709, 12.67709, 12.63184, 12.1099, 12.60131, 12.7142, 12.48837, 12.85225, 12.52694, 7.165181, 5.942446,
   4.645264, 3.478678, 2.897317, 2.99809, 3.15936, 3.443171, 4.365156, 5.318804, 63.9916 };
   graph = new TGraph(42,Graph2_fx388,Graph2_fy388);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2388 = new TH1F("Graph_Graph2388","Graph",100,2.7,1099.7);
   Graph_Graph2388->SetMinimum(2.607585);
   Graph_Graph2388->SetMaximum(184.4631);
   Graph_Graph2388->SetDirectory(nullptr);
   Graph_Graph2388->SetStats(0);
   Graph_Graph2388->SetLineWidth(2);
   Graph_Graph2388->SetMarkerStyle(20);
   Graph_Graph2388->SetMarkerSize(0.9);
   Graph_Graph2388->GetXaxis()->SetLabelFont(42);
   Graph_Graph2388->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2388->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2388->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2388->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2388->GetXaxis()->SetTitleFont(42);
   Graph_Graph2388->GetYaxis()->SetLabelFont(42);
   Graph_Graph2388->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2388->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2388->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2388->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2388->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2388->GetYaxis()->SetTitleFont(42);
   Graph_Graph2388->GetZaxis()->SetLabelFont(42);
   Graph_Graph2388->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2388->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2388->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2388->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2388->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2388);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx389[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy389[20] = { 102.3402, 8.363508, 7.354474, 5.768814, 5.291376, 5.044252, 4.905126, 6.727238, 9.269029, 12.08222, 14.78557, 27.12809, 27.88047, 27.04424, 27.56347, 27.30236, 26.1693,
   27.37479, 27.47854, 27.47854 };
   graph = new TGraph(20,Graph0_fx389,Graph0_fy389);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0389 = new TH1F("Graph_Graph0389","",100,2.7,1099.7);
   Graph_Graph0389->SetMinimum(0.2);
   Graph_Graph0389->SetMaximum(100000);
   Graph_Graph0389->SetDirectory(nullptr);
   Graph_Graph0389->SetStats(0);
   Graph_Graph0389->SetLineWidth(2);
   Graph_Graph0389->SetMarkerStyle(20);
   Graph_Graph0389->SetMarkerSize(0.9);
   Graph_Graph0389->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0389->GetXaxis()->SetRange(0,91);
   Graph_Graph0389->GetXaxis()->SetLabelFont(42);
   Graph_Graph0389->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0389->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0389->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0389->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0389->GetXaxis()->SetTitleFont(42);
   Graph_Graph0389->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0389->GetYaxis()->SetLabelFont(42);
   Graph_Graph0389->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0389->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0389->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0389->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0389->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0389->GetYaxis()->SetTitleFont(42);
   Graph_Graph0389->GetZaxis()->SetLabelFont(42);
   Graph_Graph0389->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0389->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0389->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0389->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0389->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0389);
   
   graph->Draw("l");
   
   Double_t Graph_fx390[72] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180, 185, 190, 195, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450,
   475, 500, 600, 700, 800, 900, 1000 };
   Double_t Graph_fy390[72] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2.593208e-304, 8.802462e-289, 9.8813e-275, 5.840183e-262, 2.668526e-250, 1.298284e-239, 8.800244e-230,
   2.626653e-212, 1.657633e-204, 3.026173e-197, 1.809306e-190, 6.584653e-173, 2.107686e-162, 2.050222e-149, 2.305227e-141, 2.150049e-131, 5.222817e-125, 3.909585e-117, 1.598894e-41, 9.514464e-34, 3.290067e-28, 4.576183e-24, 7.493123e-21,
   2.749598e-18, 3.404759e-16, 1.868621e-14, 9.871969e-12, 1.199859e-10, 1.061082e-09, 7.224036e-09, 3.956197e-08, 1.77099e-07, 6.807687e-07, 6.924738e-06, 4.751497e-05, 0.00024091, 0.0009631506, 0.003184405, 0.009023345,
   0.02252054, 0.05057052, 0.07322988, 0.1039008, 0.1446696, 0.1979622, 0.7623151, 2.208134, 5.206014, 10.52812, 18.9356, 31.07938, 47.43485, 68.27363, 93.66584, 123.5029,
   157.5307, 195.3867, 375.8933, 580.233, 783.7707, 971.2927, 971.2927 };
   graph = new TGraph(72,Graph_fx390,Graph_fy390);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph390 = new TH1F("Graph_Graph390","",100,1.44,1099.84);
   Graph_Graph390->SetMinimum(1.068422);
   Graph_Graph390->SetMaximum(1068.422);
   Graph_Graph390->SetDirectory(nullptr);
   Graph_Graph390->SetStats(0);
   Graph_Graph390->SetLineWidth(2);
   Graph_Graph390->SetMarkerStyle(20);
   Graph_Graph390->SetMarkerSize(0.9);
   Graph_Graph390->GetXaxis()->SetLabelFont(42);
   Graph_Graph390->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph390->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph390->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph390->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph390->GetXaxis()->SetTitleFont(42);
   Graph_Graph390->GetYaxis()->SetLabelFont(42);
   Graph_Graph390->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph390->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph390->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph390->GetYaxis()->SetTickLength(0.02);
   Graph_Graph390->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph390->GetYaxis()->SetTitleFont(42);
   Graph_Graph390->GetZaxis()->SetLabelFont(42);
   Graph_Graph390->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph390->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph390->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph390->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph390->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph390);
   
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
   
   Double_t Graph_fx392[72] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180, 185, 190, 195, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450,
   475, 500, 600, 700, 800, 900, 1000 };
   Double_t Graph_fy392[72] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2.852529e-304, 9.682708e-289, 1.086943e-274, 6.424201e-262, 2.935379e-250, 1.428112e-239, 9.680268e-230,
   2.889318e-212, 1.823396e-204, 3.32879e-197, 1.990237e-190, 7.243118e-173, 2.318455e-162, 2.255244e-149, 2.53575e-141, 2.365054e-131, 5.745099e-125, 4.300544e-117, 1.758783e-41, 1.046591e-33, 3.619074e-28, 5.033801e-24, 8.242435e-21,
   3.024558e-18, 3.745235e-16, 2.055483e-14, 1.085917e-11, 1.319845e-10, 1.16719e-09, 7.94644e-09, 4.351817e-08, 1.948089e-07, 7.488456e-07, 7.617212e-06, 5.226647e-05, 0.000265001, 0.001059466, 0.003502846, 0.00992568,
   0.02477259, 0.05562757, 0.08055287, 0.1142909, 0.1591366, 0.2177584, 0.8385466, 2.428947, 5.726615, 11.58093, 20.82916, 34.18732, 52.17834, 75.10099, 103.0324, 135.8532,
   173.2838, 214.9254, 413.4826, 638.2563, 862.1478, 1068.422, 1068.422 };
   graph = new TGraph(72,Graph_fx392,Graph_fy392);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph392 = new TH1F("Graph_Graph392","",100,1.44,1099.84);
   Graph_Graph392->SetMinimum(1.175264);
   Graph_Graph392->SetMaximum(1175.264);
   Graph_Graph392->SetDirectory(nullptr);
   Graph_Graph392->SetStats(0);
   Graph_Graph392->SetLineWidth(2);
   Graph_Graph392->SetMarkerStyle(20);
   Graph_Graph392->SetMarkerSize(0.9);
   Graph_Graph392->GetXaxis()->SetLabelFont(42);
   Graph_Graph392->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph392->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph392->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph392->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph392->GetXaxis()->SetTitleFont(42);
   Graph_Graph392->GetYaxis()->SetLabelFont(42);
   Graph_Graph392->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph392->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph392->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph392->GetYaxis()->SetTickLength(0.02);
   Graph_Graph392->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph392->GetYaxis()->SetTitleFont(42);
   Graph_Graph392->GetZaxis()->SetLabelFont(42);
   Graph_Graph392->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph392->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph392->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph392->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph392->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph392);
   
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
   line = new TLine(343.8461,0,343.8461,27.51068);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(343.8411,0,"  343.85 TeV");

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
   pt_LaTex = pt->AddText("#varepsilon = 4.72e-07");
   pt_LaTex = pt->AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
