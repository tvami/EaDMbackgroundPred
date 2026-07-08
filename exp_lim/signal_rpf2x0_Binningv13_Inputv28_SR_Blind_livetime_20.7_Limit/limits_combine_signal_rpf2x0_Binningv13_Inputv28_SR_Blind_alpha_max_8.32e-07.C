#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signal_rpf2x0_Binningv13_Inputv28_SR_Blind_alpha_max_8.32e-07()
{
//=========Macro generated from canvas: climits/climits
//=========  (Tue Jul  7 21:10:39 2026) by ROOT version 6.30/07
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
   
   Double_t Graph0_fx491[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy491[20] = { 102.3402, 8.363508, 7.354474, 5.768814, 5.291376, 5.044252, 4.905126, 6.727238, 9.269029, 12.08222, 14.78557, 27.12809, 27.88047, 27.04424, 27.56347, 27.30236, 26.1693,
   27.37479, 27.47854, 27.47854 };
   TGraph *graph = new TGraph(20,Graph0_fx491,Graph0_fy491);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0491 = new TH1F("Graph_Graph0491","",100,2.7,1099.7);
   Graph_Graph0491->SetMinimum(0.2);
   Graph_Graph0491->SetMaximum(100000);
   Graph_Graph0491->SetDirectory(nullptr);
   Graph_Graph0491->SetStats(0);
   Graph_Graph0491->SetLineWidth(2);
   Graph_Graph0491->SetMarkerStyle(20);
   Graph_Graph0491->SetMarkerSize(0.9);
   Graph_Graph0491->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0491->GetXaxis()->SetRange(0,91);
   Graph_Graph0491->GetXaxis()->SetLabelFont(42);
   Graph_Graph0491->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0491->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0491->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0491->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0491->GetXaxis()->SetTitleFont(42);
   Graph_Graph0491->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0491->GetYaxis()->SetLabelFont(42);
   Graph_Graph0491->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0491->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0491->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0491->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0491->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0491->GetYaxis()->SetTitleFont(42);
   Graph_Graph0491->GetZaxis()->SetLabelFont(42);
   Graph_Graph0491->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0491->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0491->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0491->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0491->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0491);
   
   graph->Draw("al");
   
   Double_t Graph1_fx492[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph1_fy492[42] = { 263.3536, 22.30594, 21.12988, 17.06116, 15.59377, 14.93766, 14.53641, 20.4565, 28.18569, 36.74017, 44.96066, 82.49234, 84.78023, 82.23738, 83.81629, 83.02227, 79.57681,
   83.24253, 83.55803, 83.55803, 83.55803, 7.100603, 7.100603, 7.100603, 7.073947, 6.804864, 7.054077, 7.123885, 7.003339, 7.189512, 7.023805, 4.175044, 3.473909,
   2.747375, 2.098302, 1.901159, 1.981428, 2.095599, 2.279342, 2.893423, 3.688819, 43.23465 };
   graph = new TGraph(42,Graph1_fx492,Graph1_fy492);
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
   
   TH1F *Graph_Graph1492 = new TH1F("Graph_Graph1492","Graph",100,2.7,1099.7);
   Graph_Graph1492->SetMinimum(1.711043);
   Graph_Graph1492->SetMaximum(289.4988);
   Graph_Graph1492->SetDirectory(nullptr);
   Graph_Graph1492->SetStats(0);
   Graph_Graph1492->SetLineWidth(2);
   Graph_Graph1492->SetMarkerStyle(20);
   Graph_Graph1492->SetMarkerSize(0.9);
   Graph_Graph1492->GetXaxis()->SetLabelFont(42);
   Graph_Graph1492->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1492->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1492->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1492->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1492->GetXaxis()->SetTitleFont(42);
   Graph_Graph1492->GetYaxis()->SetLabelFont(42);
   Graph_Graph1492->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1492->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1492->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1492->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1492->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1492->GetYaxis()->SetTitleFont(42);
   Graph_Graph1492->GetZaxis()->SetLabelFont(42);
   Graph_Graph1492->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1492->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1492->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1492->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1492->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1492);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx493[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph2_fy493[42] = { 167.9571, 13.70932, 12.9865, 10.4326, 9.578931, 9.239235, 9.0445, 13.54376, 18.70133, 24.41077, 29.87306, 54.81011, 56.33024, 54.64071, 55.68977, 55.1622, 52.87295,
   55.30855, 55.51818, 55.51818, 55.51818, 12.67709, 12.67709, 12.67709, 12.63184, 12.1099, 12.60131, 12.7142, 12.48837, 12.85225, 12.52694, 7.165181, 5.942446,
   4.645264, 3.478678, 2.897317, 2.99809, 3.15936, 3.443171, 4.365156, 5.318804, 63.9916 };
   graph = new TGraph(42,Graph2_fx493,Graph2_fy493);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2493 = new TH1F("Graph_Graph2493","Graph",100,2.7,1099.7);
   Graph_Graph2493->SetMinimum(2.607585);
   Graph_Graph2493->SetMaximum(184.4631);
   Graph_Graph2493->SetDirectory(nullptr);
   Graph_Graph2493->SetStats(0);
   Graph_Graph2493->SetLineWidth(2);
   Graph_Graph2493->SetMarkerStyle(20);
   Graph_Graph2493->SetMarkerSize(0.9);
   Graph_Graph2493->GetXaxis()->SetLabelFont(42);
   Graph_Graph2493->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2493->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2493->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2493->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2493->GetXaxis()->SetTitleFont(42);
   Graph_Graph2493->GetYaxis()->SetLabelFont(42);
   Graph_Graph2493->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2493->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2493->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2493->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2493->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2493->GetYaxis()->SetTitleFont(42);
   Graph_Graph2493->GetZaxis()->SetLabelFont(42);
   Graph_Graph2493->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2493->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2493->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2493->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2493->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2493);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx494[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy494[20] = { 102.3402, 8.363508, 7.354474, 5.768814, 5.291376, 5.044252, 4.905126, 6.727238, 9.269029, 12.08222, 14.78557, 27.12809, 27.88047, 27.04424, 27.56347, 27.30236, 26.1693,
   27.37479, 27.47854, 27.47854 };
   graph = new TGraph(20,Graph0_fx494,Graph0_fy494);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0494 = new TH1F("Graph_Graph0494","",100,2.7,1099.7);
   Graph_Graph0494->SetMinimum(0.2);
   Graph_Graph0494->SetMaximum(100000);
   Graph_Graph0494->SetDirectory(nullptr);
   Graph_Graph0494->SetStats(0);
   Graph_Graph0494->SetLineWidth(2);
   Graph_Graph0494->SetMarkerStyle(20);
   Graph_Graph0494->SetMarkerSize(0.9);
   Graph_Graph0494->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0494->GetXaxis()->SetRange(0,91);
   Graph_Graph0494->GetXaxis()->SetLabelFont(42);
   Graph_Graph0494->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0494->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0494->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0494->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0494->GetXaxis()->SetTitleFont(42);
   Graph_Graph0494->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0494->GetYaxis()->SetLabelFont(42);
   Graph_Graph0494->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0494->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0494->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0494->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0494->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0494->GetYaxis()->SetTitleFont(42);
   Graph_Graph0494->GetZaxis()->SetLabelFont(42);
   Graph_Graph0494->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0494->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0494->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0494->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0494->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0494);
   
   graph->Draw("l");
   
   Double_t Graph_fx495[72] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180, 185, 190, 195, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450,
   475, 500, 600, 700, 800, 900, 1000 };
   Double_t Graph_fy495[72] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3.190535e-140, 7.807921e-116, 1.988735e-98, 2.199339e-85, 3.012994e-75,
   3.816298e-67, 1.605394e-60, 5.259585e-55, 2.384771e-46, 6.848861e-43, 7.227723e-40, 3.345583e-37, 7.794796e-35, 1.00028e-32, 7.880358e-31, 1.477445e-27, 7.832606e-25, 1.571962e-22, 1.470879e-20, 7.475386e-19, 2.313957e-17,
   4.761967e-16, 6.974653e-15, 2.390592e-14, 7.672441e-14, 2.317448e-13, 6.617859e-13, 6.177028e-11, 2.292337e-09, 4.354949e-08, 5.012058e-07, 3.925986e-06, 2.274365e-05, 0.0001035558, 0.0003878672, 0.001237369, 0.003454316,
   0.00862037, 0.01956069, 0.2548353, 1.542265, 5.804524, 15.96082, 15.96082 };
   graph = new TGraph(72,Graph_fx495,Graph_fy495);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph495 = new TH1F("Graph_Graph495","",100,1.44,1099.84);
   Graph_Graph495->SetMinimum(0.0175569);
   Graph_Graph495->SetMaximum(17.5569);
   Graph_Graph495->SetDirectory(nullptr);
   Graph_Graph495->SetStats(0);
   Graph_Graph495->SetLineWidth(2);
   Graph_Graph495->SetMarkerStyle(20);
   Graph_Graph495->SetMarkerSize(0.9);
   Graph_Graph495->GetXaxis()->SetLabelFont(42);
   Graph_Graph495->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph495->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph495->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph495->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph495->GetXaxis()->SetTitleFont(42);
   Graph_Graph495->GetYaxis()->SetLabelFont(42);
   Graph_Graph495->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph495->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph495->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph495->GetYaxis()->SetTickLength(0.02);
   Graph_Graph495->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph495->GetYaxis()->SetTitleFont(42);
   Graph_Graph495->GetZaxis()->SetLabelFont(42);
   Graph_Graph495->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph495->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph495->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph495->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph495->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph495);
   
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
   
   Double_t Graph_fx497[72] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180, 185, 190, 195, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450,
   475, 500, 600, 700, 800, 900, 1000 };
   Double_t Graph_fy497[72] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3.509589e-140, 8.588713e-116, 2.187609e-98, 2.419273e-85, 3.314293e-75,
   4.197928e-67, 1.765933e-60, 5.785544e-55, 2.623248e-46, 7.533747e-43, 7.950495e-40, 3.680141e-37, 8.574276e-35, 1.100308e-32, 8.668394e-31, 1.625189e-27, 8.615867e-25, 1.729158e-22, 1.617967e-20, 8.222925e-19, 2.545353e-17,
   5.238164e-16, 7.672118e-15, 2.629651e-14, 8.439685e-14, 2.549193e-13, 7.279645e-13, 6.794731e-11, 2.521571e-09, 4.790444e-08, 5.513264e-07, 4.318585e-06, 2.501802e-05, 0.0001139114, 0.0004266539, 0.001361106, 0.003799748,
   0.009482407, 0.02151676, 0.2803188, 1.696492, 6.384976, 17.5569, 17.5569 };
   graph = new TGraph(72,Graph_fx497,Graph_fy497);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph497 = new TH1F("Graph_Graph497","",100,1.44,1099.84);
   Graph_Graph497->SetMinimum(0.01931259);
   Graph_Graph497->SetMaximum(19.31259);
   Graph_Graph497->SetDirectory(nullptr);
   Graph_Graph497->SetStats(0);
   Graph_Graph497->SetLineWidth(2);
   Graph_Graph497->SetMarkerStyle(20);
   Graph_Graph497->SetMarkerSize(0.9);
   Graph_Graph497->GetXaxis()->SetLabelFont(42);
   Graph_Graph497->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph497->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph497->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph497->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph497->GetXaxis()->SetTitleFont(42);
   Graph_Graph497->GetYaxis()->SetLabelFont(42);
   Graph_Graph497->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph497->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph497->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph497->GetYaxis()->SetTickLength(0.02);
   Graph_Graph497->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph497->GetYaxis()->SetTitleFont(42);
   Graph_Graph497->GetZaxis()->SetLabelFont(42);
   Graph_Graph497->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph497->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph497->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph497->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph497->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph497);
   
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
   pt_LaTex = pt->AddText("#varepsilon = 8.32e-07");
   pt_LaTex = pt->AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
