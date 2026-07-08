#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signal_rpf2x0_Binningv13_Inputv28_SR_Blind_alpha_max_2.24e-07()
{
//=========Macro generated from canvas: climits/climits
//=========  (Tue Jul  7 21:10:07 2026) by ROOT version 6.30/07
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
   
   Double_t Graph0_fx281[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy281[20] = { 102.3402, 8.363508, 7.354474, 5.768814, 5.291376, 5.044252, 4.905126, 6.727238, 9.269029, 12.08222, 14.78557, 27.12809, 27.88047, 27.04424, 27.56347, 27.30236, 26.1693,
   27.37479, 27.47854, 27.47854 };
   TGraph *graph = new TGraph(20,Graph0_fx281,Graph0_fy281);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0281 = new TH1F("Graph_Graph0281","",100,2.7,1099.7);
   Graph_Graph0281->SetMinimum(0.2);
   Graph_Graph0281->SetMaximum(100000);
   Graph_Graph0281->SetDirectory(nullptr);
   Graph_Graph0281->SetStats(0);
   Graph_Graph0281->SetLineWidth(2);
   Graph_Graph0281->SetMarkerStyle(20);
   Graph_Graph0281->SetMarkerSize(0.9);
   Graph_Graph0281->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0281->GetXaxis()->SetRange(0,91);
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
   
   Double_t Graph1_fx282[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph1_fy282[42] = { 263.3536, 22.30594, 21.12988, 17.06116, 15.59377, 14.93766, 14.53641, 20.4565, 28.18569, 36.74017, 44.96066, 82.49234, 84.78023, 82.23738, 83.81629, 83.02227, 79.57681,
   83.24253, 83.55803, 83.55803, 83.55803, 7.100603, 7.100603, 7.100603, 7.073947, 6.804864, 7.054077, 7.123885, 7.003339, 7.189512, 7.023805, 4.175044, 3.473909,
   2.747375, 2.098302, 1.901159, 1.981428, 2.095599, 2.279342, 2.893423, 3.688819, 43.23465 };
   graph = new TGraph(42,Graph1_fx282,Graph1_fy282);
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
   
   TH1F *Graph_Graph1282 = new TH1F("Graph_Graph1282","Graph",100,2.7,1099.7);
   Graph_Graph1282->SetMinimum(1.711043);
   Graph_Graph1282->SetMaximum(289.4988);
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
   
   Double_t Graph2_fx283[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph2_fy283[42] = { 167.9571, 13.70932, 12.9865, 10.4326, 9.578931, 9.239235, 9.0445, 13.54376, 18.70133, 24.41077, 29.87306, 54.81011, 56.33024, 54.64071, 55.68977, 55.1622, 52.87295,
   55.30855, 55.51818, 55.51818, 55.51818, 12.67709, 12.67709, 12.67709, 12.63184, 12.1099, 12.60131, 12.7142, 12.48837, 12.85225, 12.52694, 7.165181, 5.942446,
   4.645264, 3.478678, 2.897317, 2.99809, 3.15936, 3.443171, 4.365156, 5.318804, 63.9916 };
   graph = new TGraph(42,Graph2_fx283,Graph2_fy283);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2283 = new TH1F("Graph_Graph2283","Graph",100,2.7,1099.7);
   Graph_Graph2283->SetMinimum(2.607585);
   Graph_Graph2283->SetMaximum(184.4631);
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
   
   Double_t Graph0_fx284[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy284[20] = { 102.3402, 8.363508, 7.354474, 5.768814, 5.291376, 5.044252, 4.905126, 6.727238, 9.269029, 12.08222, 14.78557, 27.12809, 27.88047, 27.04424, 27.56347, 27.30236, 26.1693,
   27.37479, 27.47854, 27.47854 };
   graph = new TGraph(20,Graph0_fx284,Graph0_fy284);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0284 = new TH1F("Graph_Graph0284","",100,2.7,1099.7);
   Graph_Graph0284->SetMinimum(0.2);
   Graph_Graph0284->SetMaximum(100000);
   Graph_Graph0284->SetDirectory(nullptr);
   Graph_Graph0284->SetStats(0);
   Graph_Graph0284->SetLineWidth(2);
   Graph_Graph0284->SetMarkerStyle(20);
   Graph_Graph0284->SetMarkerSize(0.9);
   Graph_Graph0284->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0284->GetXaxis()->SetRange(0,91);
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
   
   Double_t Graph_fx285[72] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180, 185, 190, 195, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450,
   475, 500, 600, 700, 800, 900, 1000 };
   Double_t Graph_fy285[72] = { 2.489989e-160, 6.649364e-142, 3.608629e-127, 4.049556e-115, 1.360381e-96, 2.551051e-89, 5.095216e-83, 1.650197e-77, 1.195118e-72, 2.485004e-68, 1.807012e-64, 5.380755e-61, 7.454907e-58, 5.335005e-55, 2.149812e-52, 5.241637e-50, 8.21414e-48,
   6.520864e-44, 3.581367e-42, 1.48959e-40, 4.824544e-39, 2.426256e-35, 8.560815e-33, 4.306485e-30, 4.059703e-28, 4.592185e-26, 1.725686e-24, 7.057655e-23, 3.647813e-06, 0.0001689532, 0.002530091, 0.01878653, 0.08763139,
   0.2957937, 0.7902439, 1.773475, 6.165697, 10.04659, 15.31204, 22.09509, 30.47114, 39.71591, 50.28886, 75.13685, 104.2545, 136.6883, 171.4335, 207.5317, 244.1304,
   280.5104, 316.0931, 333.4414, 350.4332, 367.0312, 383.2045, 456.9971, 518.2615, 567.3091, 605.3286, 633.8174, 654.2857, 668.1201, 676.5332, 680.5558, 681.0492,
   678.7253, 674.169, 641.9433, 599.6005, 555.6728, 513.704, 513.704 };
   graph = new TGraph(72,Graph_fx285,Graph_fy285);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph285 = new TH1F("Graph_Graph285","",100,1.44,1099.84);
   Graph_Graph285->SetMinimum(2.24099e-160);
   Graph_Graph285->SetMaximum(749.1541);
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
   
   Double_t Graph_fx287[72] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180, 185, 190, 195, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450,
   475, 500, 600, 700, 800, 900, 1000 };
   Double_t Graph_fy287[72] = { 2.738988e-160, 7.3143e-142, 3.969492e-127, 4.454512e-115, 1.496419e-96, 2.806156e-89, 5.604738e-83, 1.815217e-77, 1.31463e-72, 2.733504e-68, 1.987713e-64, 5.918831e-61, 8.200398e-58, 5.868505e-55, 2.364793e-52, 5.765801e-50, 9.035554e-48,
   7.17295e-44, 3.939504e-42, 1.638549e-40, 5.306998e-39, 2.668882e-35, 9.416897e-33, 4.737134e-30, 4.465673e-28, 5.051404e-26, 1.898255e-24, 7.763421e-23, 4.012594e-06, 0.0001858485, 0.0027831, 0.02066518, 0.09639453,
   0.3253731, 0.8692683, 1.950823, 6.782267, 11.05125, 16.84324, 24.3046, 33.51825, 43.6875, 55.31775, 82.65054, 114.68, 150.3571, 188.5769, 228.2849, 268.5434,
   308.5614, 347.7024, 366.7855, 385.4765, 403.7343, 421.525, 502.6968, 570.0877, 624.04, 665.8615, 697.1991, 719.7143, 734.9321, 744.1865, 748.6114, 749.1541,
   746.5978, 741.5859, 706.1376, 659.5606, 611.2401, 565.0744, 565.0744 };
   graph = new TGraph(72,Graph_fx287,Graph_fy287);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph287 = new TH1F("Graph_Graph287","",100,1.44,1099.84);
   Graph_Graph287->SetMinimum(2.465089e-160);
   Graph_Graph287->SetMaximum(824.0695);
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
   pt_LaTex = pt->AddText("#varepsilon = 2.24e-07");
   pt_LaTex = pt->AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
