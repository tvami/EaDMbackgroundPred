#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signal_rpf2x0_Binningv13_Inputv28_SR_Blind_alpha_max_7.84e-07()
{
//=========Macro generated from canvas: climits/climits
//=========  (Tue Jul  7 21:10:37 2026) by ROOT version 6.30/07
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
   
   Double_t Graph0_fx477[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy477[20] = { 102.3402, 8.363508, 7.354474, 5.768814, 5.291376, 5.044252, 4.905126, 6.727238, 9.269029, 12.08222, 14.78557, 27.12809, 27.88047, 27.04424, 27.56347, 27.30236, 26.1693,
   27.37479, 27.47854, 27.47854 };
   TGraph *graph = new TGraph(20,Graph0_fx477,Graph0_fy477);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0477 = new TH1F("Graph_Graph0477","",100,2.7,1099.7);
   Graph_Graph0477->SetMinimum(0.2);
   Graph_Graph0477->SetMaximum(100000);
   Graph_Graph0477->SetDirectory(nullptr);
   Graph_Graph0477->SetStats(0);
   Graph_Graph0477->SetLineWidth(2);
   Graph_Graph0477->SetMarkerStyle(20);
   Graph_Graph0477->SetMarkerSize(0.9);
   Graph_Graph0477->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0477->GetXaxis()->SetRange(0,91);
   Graph_Graph0477->GetXaxis()->SetLabelFont(42);
   Graph_Graph0477->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0477->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0477->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0477->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0477->GetXaxis()->SetTitleFont(42);
   Graph_Graph0477->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0477->GetYaxis()->SetLabelFont(42);
   Graph_Graph0477->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0477->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0477->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0477->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0477->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0477->GetYaxis()->SetTitleFont(42);
   Graph_Graph0477->GetZaxis()->SetLabelFont(42);
   Graph_Graph0477->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0477->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0477->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0477->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0477->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0477);
   
   graph->Draw("al");
   
   Double_t Graph1_fx478[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph1_fy478[42] = { 263.3536, 22.30594, 21.12988, 17.06116, 15.59377, 14.93766, 14.53641, 20.4565, 28.18569, 36.74017, 44.96066, 82.49234, 84.78023, 82.23738, 83.81629, 83.02227, 79.57681,
   83.24253, 83.55803, 83.55803, 83.55803, 7.100603, 7.100603, 7.100603, 7.073947, 6.804864, 7.054077, 7.123885, 7.003339, 7.189512, 7.023805, 4.175044, 3.473909,
   2.747375, 2.098302, 1.901159, 1.981428, 2.095599, 2.279342, 2.893423, 3.688819, 43.23465 };
   graph = new TGraph(42,Graph1_fx478,Graph1_fy478);
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
   
   TH1F *Graph_Graph1478 = new TH1F("Graph_Graph1478","Graph",100,2.7,1099.7);
   Graph_Graph1478->SetMinimum(1.711043);
   Graph_Graph1478->SetMaximum(289.4988);
   Graph_Graph1478->SetDirectory(nullptr);
   Graph_Graph1478->SetStats(0);
   Graph_Graph1478->SetLineWidth(2);
   Graph_Graph1478->SetMarkerStyle(20);
   Graph_Graph1478->SetMarkerSize(0.9);
   Graph_Graph1478->GetXaxis()->SetLabelFont(42);
   Graph_Graph1478->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1478->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1478->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1478->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1478->GetXaxis()->SetTitleFont(42);
   Graph_Graph1478->GetYaxis()->SetLabelFont(42);
   Graph_Graph1478->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1478->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1478->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1478->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1478->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1478->GetYaxis()->SetTitleFont(42);
   Graph_Graph1478->GetZaxis()->SetLabelFont(42);
   Graph_Graph1478->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1478->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1478->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1478->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1478->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1478);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx479[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph2_fy479[42] = { 167.9571, 13.70932, 12.9865, 10.4326, 9.578931, 9.239235, 9.0445, 13.54376, 18.70133, 24.41077, 29.87306, 54.81011, 56.33024, 54.64071, 55.68977, 55.1622, 52.87295,
   55.30855, 55.51818, 55.51818, 55.51818, 12.67709, 12.67709, 12.67709, 12.63184, 12.1099, 12.60131, 12.7142, 12.48837, 12.85225, 12.52694, 7.165181, 5.942446,
   4.645264, 3.478678, 2.897317, 2.99809, 3.15936, 3.443171, 4.365156, 5.318804, 63.9916 };
   graph = new TGraph(42,Graph2_fx479,Graph2_fy479);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2479 = new TH1F("Graph_Graph2479","Graph",100,2.7,1099.7);
   Graph_Graph2479->SetMinimum(2.607585);
   Graph_Graph2479->SetMaximum(184.4631);
   Graph_Graph2479->SetDirectory(nullptr);
   Graph_Graph2479->SetStats(0);
   Graph_Graph2479->SetLineWidth(2);
   Graph_Graph2479->SetMarkerStyle(20);
   Graph_Graph2479->SetMarkerSize(0.9);
   Graph_Graph2479->GetXaxis()->SetLabelFont(42);
   Graph_Graph2479->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2479->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2479->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2479->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2479->GetXaxis()->SetTitleFont(42);
   Graph_Graph2479->GetYaxis()->SetLabelFont(42);
   Graph_Graph2479->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2479->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2479->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2479->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2479->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2479->GetYaxis()->SetTitleFont(42);
   Graph_Graph2479->GetZaxis()->SetLabelFont(42);
   Graph_Graph2479->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2479->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2479->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2479->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2479->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2479);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx480[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy480[20] = { 102.3402, 8.363508, 7.354474, 5.768814, 5.291376, 5.044252, 4.905126, 6.727238, 9.269029, 12.08222, 14.78557, 27.12809, 27.88047, 27.04424, 27.56347, 27.30236, 26.1693,
   27.37479, 27.47854, 27.47854 };
   graph = new TGraph(20,Graph0_fx480,Graph0_fy480);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0480 = new TH1F("Graph_Graph0480","",100,2.7,1099.7);
   Graph_Graph0480->SetMinimum(0.2);
   Graph_Graph0480->SetMaximum(100000);
   Graph_Graph0480->SetDirectory(nullptr);
   Graph_Graph0480->SetStats(0);
   Graph_Graph0480->SetLineWidth(2);
   Graph_Graph0480->SetMarkerStyle(20);
   Graph_Graph0480->SetMarkerSize(0.9);
   Graph_Graph0480->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0480->GetXaxis()->SetRange(0,91);
   Graph_Graph0480->GetXaxis()->SetLabelFont(42);
   Graph_Graph0480->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0480->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0480->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0480->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0480->GetXaxis()->SetTitleFont(42);
   Graph_Graph0480->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0480->GetYaxis()->SetLabelFont(42);
   Graph_Graph0480->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0480->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0480->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0480->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0480->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0480->GetYaxis()->SetTitleFont(42);
   Graph_Graph0480->GetZaxis()->SetLabelFont(42);
   Graph_Graph0480->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0480->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0480->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0480->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0480->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0480);
   
   graph->Draw("l");
   
   Double_t Graph_fx481[72] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180, 185, 190, 195, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450,
   475, 500, 600, 700, 800, 900, 1000 };
   Double_t Graph_fy481[72] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7.448125e-124, 3.277064e-102, 9.133654e-87, 3.41742e-75, 3.361682e-66,
   5.177525e-59, 3.88473e-53, 3.025614e-48, 1.435051e-40, 1.670562e-37, 8.000022e-35, 1.844073e-32, 2.311906e-30, 1.704029e-28, 8.15027e-27, 6.453374e-24, 1.668105e-21, 1.82303e-19, 1.013148e-17, 3.278245e-16, 6.835746e-15,
   9.927165e-14, 1.066574e-12, 3.17062e-12, 8.891946e-12, 2.363207e-11, 5.976077e-11, 3.293886e-09, 8.02032e-08, 1.079335e-06, 9.319777e-06, 5.724692e-05, 0.0002692535, 0.001023388, 0.003272788, 0.009081914, 0.02239814,
   0.05002808, 0.1027368, 0.9757529, 4.711888, 14.97165, 36.08824, 36.08824 };
   graph = new TGraph(72,Graph_fx481,Graph_fy481);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph481 = new TH1F("Graph_Graph481","",100,1.44,1099.84);
   Graph_Graph481->SetMinimum(0.03969706);
   Graph_Graph481->SetMaximum(39.69706);
   Graph_Graph481->SetDirectory(nullptr);
   Graph_Graph481->SetStats(0);
   Graph_Graph481->SetLineWidth(2);
   Graph_Graph481->SetMarkerStyle(20);
   Graph_Graph481->SetMarkerSize(0.9);
   Graph_Graph481->GetXaxis()->SetLabelFont(42);
   Graph_Graph481->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph481->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph481->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph481->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph481->GetXaxis()->SetTitleFont(42);
   Graph_Graph481->GetYaxis()->SetLabelFont(42);
   Graph_Graph481->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph481->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph481->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph481->GetYaxis()->SetTickLength(0.02);
   Graph_Graph481->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph481->GetYaxis()->SetTitleFont(42);
   Graph_Graph481->GetZaxis()->SetLabelFont(42);
   Graph_Graph481->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph481->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph481->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph481->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph481->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph481);
   
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
   
   Double_t Graph_fx483[72] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180, 185, 190, 195, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450,
   475, 500, 600, 700, 800, 900, 1000 };
   Double_t Graph_fy483[72] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8.192938e-124, 3.60477e-102, 1.004702e-86, 3.759162e-75, 3.69785e-66,
   5.695278e-59, 4.273203e-53, 3.328175e-48, 1.578556e-40, 1.837618e-37, 8.800024e-35, 2.02848e-32, 2.543097e-30, 1.874432e-28, 8.965297e-27, 7.098711e-24, 1.834916e-21, 2.005333e-19, 1.114463e-17, 3.60607e-16, 7.519321e-15,
   1.091988e-13, 1.173231e-12, 3.487682e-12, 9.781141e-12, 2.599528e-11, 6.573685e-11, 3.623275e-09, 8.822352e-08, 1.187269e-06, 1.025175e-05, 6.297161e-05, 0.0002961789, 0.001125727, 0.003600067, 0.009990105, 0.02463795,
   0.05503089, 0.1130105, 1.073328, 5.183077, 16.46882, 39.69706, 39.69706 };
   graph = new TGraph(72,Graph_fx483,Graph_fy483);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph483 = new TH1F("Graph_Graph483","",100,1.44,1099.84);
   Graph_Graph483->SetMinimum(0.04366677);
   Graph_Graph483->SetMaximum(43.66677);
   Graph_Graph483->SetDirectory(nullptr);
   Graph_Graph483->SetStats(0);
   Graph_Graph483->SetLineWidth(2);
   Graph_Graph483->SetMarkerStyle(20);
   Graph_Graph483->SetMarkerSize(0.9);
   Graph_Graph483->GetXaxis()->SetLabelFont(42);
   Graph_Graph483->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph483->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph483->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph483->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph483->GetXaxis()->SetTitleFont(42);
   Graph_Graph483->GetYaxis()->SetLabelFont(42);
   Graph_Graph483->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph483->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph483->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph483->GetYaxis()->SetTickLength(0.02);
   Graph_Graph483->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph483->GetYaxis()->SetTitleFont(42);
   Graph_Graph483->GetZaxis()->SetLabelFont(42);
   Graph_Graph483->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph483->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph483->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph483->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph483->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph483);
   
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
   line = new TLine(868.8866,0,868.8866,27.44622);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(868.8816,0,"  868.89 TeV");

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
   pt_LaTex = pt->AddText("#varepsilon = 7.84e-07");
   pt_LaTex = pt->AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
