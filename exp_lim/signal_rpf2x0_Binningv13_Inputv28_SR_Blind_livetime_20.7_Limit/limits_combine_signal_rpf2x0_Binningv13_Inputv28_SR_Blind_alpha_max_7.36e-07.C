#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signal_rpf2x0_Binningv13_Inputv28_SR_Blind_alpha_max_7.36e-07()
{
//=========Macro generated from canvas: climits/climits
//=========  (Tue Jul  7 21:10:35 2026) by ROOT version 6.30/07
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
   
   Double_t Graph0_fx463[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy463[20] = { 102.3402, 8.363508, 7.354474, 5.768814, 5.291376, 5.044252, 4.905126, 6.727238, 9.269029, 12.08222, 14.78557, 27.12809, 27.88047, 27.04424, 27.56347, 27.30236, 26.1693,
   27.37479, 27.47854, 27.47854 };
   TGraph *graph = new TGraph(20,Graph0_fx463,Graph0_fy463);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0463 = new TH1F("Graph_Graph0463","",100,2.7,1099.7);
   Graph_Graph0463->SetMinimum(0.2);
   Graph_Graph0463->SetMaximum(100000);
   Graph_Graph0463->SetDirectory(nullptr);
   Graph_Graph0463->SetStats(0);
   Graph_Graph0463->SetLineWidth(2);
   Graph_Graph0463->SetMarkerStyle(20);
   Graph_Graph0463->SetMarkerSize(0.9);
   Graph_Graph0463->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0463->GetXaxis()->SetRange(0,91);
   Graph_Graph0463->GetXaxis()->SetLabelFont(42);
   Graph_Graph0463->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0463->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0463->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0463->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0463->GetXaxis()->SetTitleFont(42);
   Graph_Graph0463->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0463->GetYaxis()->SetLabelFont(42);
   Graph_Graph0463->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0463->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0463->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0463->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0463->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0463->GetYaxis()->SetTitleFont(42);
   Graph_Graph0463->GetZaxis()->SetLabelFont(42);
   Graph_Graph0463->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0463->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0463->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0463->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0463->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0463);
   
   graph->Draw("al");
   
   Double_t Graph1_fx464[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph1_fy464[42] = { 263.3536, 22.30594, 21.12988, 17.06116, 15.59377, 14.93766, 14.53641, 20.4565, 28.18569, 36.74017, 44.96066, 82.49234, 84.78023, 82.23738, 83.81629, 83.02227, 79.57681,
   83.24253, 83.55803, 83.55803, 83.55803, 7.100603, 7.100603, 7.100603, 7.073947, 6.804864, 7.054077, 7.123885, 7.003339, 7.189512, 7.023805, 4.175044, 3.473909,
   2.747375, 2.098302, 1.901159, 1.981428, 2.095599, 2.279342, 2.893423, 3.688819, 43.23465 };
   graph = new TGraph(42,Graph1_fx464,Graph1_fy464);
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
   
   TH1F *Graph_Graph1464 = new TH1F("Graph_Graph1464","Graph",100,2.7,1099.7);
   Graph_Graph1464->SetMinimum(1.711043);
   Graph_Graph1464->SetMaximum(289.4988);
   Graph_Graph1464->SetDirectory(nullptr);
   Graph_Graph1464->SetStats(0);
   Graph_Graph1464->SetLineWidth(2);
   Graph_Graph1464->SetMarkerStyle(20);
   Graph_Graph1464->SetMarkerSize(0.9);
   Graph_Graph1464->GetXaxis()->SetLabelFont(42);
   Graph_Graph1464->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1464->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1464->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1464->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1464->GetXaxis()->SetTitleFont(42);
   Graph_Graph1464->GetYaxis()->SetLabelFont(42);
   Graph_Graph1464->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1464->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1464->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1464->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1464->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1464->GetYaxis()->SetTitleFont(42);
   Graph_Graph1464->GetZaxis()->SetLabelFont(42);
   Graph_Graph1464->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1464->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1464->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1464->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1464->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1464);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx465[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph2_fy465[42] = { 167.9571, 13.70932, 12.9865, 10.4326, 9.578931, 9.239235, 9.0445, 13.54376, 18.70133, 24.41077, 29.87306, 54.81011, 56.33024, 54.64071, 55.68977, 55.1622, 52.87295,
   55.30855, 55.51818, 55.51818, 55.51818, 12.67709, 12.67709, 12.67709, 12.63184, 12.1099, 12.60131, 12.7142, 12.48837, 12.85225, 12.52694, 7.165181, 5.942446,
   4.645264, 3.478678, 2.897317, 2.99809, 3.15936, 3.443171, 4.365156, 5.318804, 63.9916 };
   graph = new TGraph(42,Graph2_fx465,Graph2_fy465);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2465 = new TH1F("Graph_Graph2465","Graph",100,2.7,1099.7);
   Graph_Graph2465->SetMinimum(2.607585);
   Graph_Graph2465->SetMaximum(184.4631);
   Graph_Graph2465->SetDirectory(nullptr);
   Graph_Graph2465->SetStats(0);
   Graph_Graph2465->SetLineWidth(2);
   Graph_Graph2465->SetMarkerStyle(20);
   Graph_Graph2465->SetMarkerSize(0.9);
   Graph_Graph2465->GetXaxis()->SetLabelFont(42);
   Graph_Graph2465->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2465->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2465->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2465->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2465->GetXaxis()->SetTitleFont(42);
   Graph_Graph2465->GetYaxis()->SetLabelFont(42);
   Graph_Graph2465->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2465->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2465->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2465->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2465->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2465->GetYaxis()->SetTitleFont(42);
   Graph_Graph2465->GetZaxis()->SetLabelFont(42);
   Graph_Graph2465->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2465->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2465->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2465->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2465->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2465);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx466[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy466[20] = { 102.3402, 8.363508, 7.354474, 5.768814, 5.291376, 5.044252, 4.905126, 6.727238, 9.269029, 12.08222, 14.78557, 27.12809, 27.88047, 27.04424, 27.56347, 27.30236, 26.1693,
   27.37479, 27.47854, 27.47854 };
   graph = new TGraph(20,Graph0_fx466,Graph0_fy466);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0466 = new TH1F("Graph_Graph0466","",100,2.7,1099.7);
   Graph_Graph0466->SetMinimum(0.2);
   Graph_Graph0466->SetMaximum(100000);
   Graph_Graph0466->SetDirectory(nullptr);
   Graph_Graph0466->SetStats(0);
   Graph_Graph0466->SetLineWidth(2);
   Graph_Graph0466->SetMarkerStyle(20);
   Graph_Graph0466->SetMarkerSize(0.9);
   Graph_Graph0466->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0466->GetXaxis()->SetRange(0,91);
   Graph_Graph0466->GetXaxis()->SetLabelFont(42);
   Graph_Graph0466->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0466->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0466->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0466->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0466->GetXaxis()->SetTitleFont(42);
   Graph_Graph0466->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0466->GetYaxis()->SetLabelFont(42);
   Graph_Graph0466->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0466->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0466->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0466->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0466->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0466->GetYaxis()->SetTitleFont(42);
   Graph_Graph0466->GetZaxis()->SetLabelFont(42);
   Graph_Graph0466->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0466->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0466->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0466->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0466->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0466);
   
   graph->Draw("l");
   
   Double_t Graph_fx467[72] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180, 185, 190, 195, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450,
   475, 500, 600, 700, 800, 900, 1000 };
   Double_t Graph_fy467[72] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1.018176e-292, 1.799732e-108, 2.072501e-89, 8.265334e-76, 1.279436e-65, 1.056769e-57,
   2.242995e-51, 3.325398e-46, 6.705691e-42, 3.804521e-35, 1.894158e-32, 4.313956e-30, 5.161385e-28, 3.612486e-26, 1.58055e-24, 4.727692e-23, 1.663996e-20, 2.188579e-18, 1.350358e-16, 4.597409e-15, 9.728414e-14, 1.398949e-12,
   1.46367e-11, 1.174986e-10, 3.055127e-10, 7.547205e-10, 1.778364e-09, 4.011238e-09, 1.347074e-07, 2.206637e-06, 2.147091e-05, 0.0001414912, 0.0006914526, 0.002673288, 0.008573317, 0.02363048, 0.05751389, 0.1262342,
   0.2540258, 0.4749187, 3.350621, 13.08461, 35.45442, 75.5043, 75.5043 };
   graph = new TGraph(72,Graph_fx467,Graph_fy467);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph467 = new TH1F("Graph_Graph467","",100,1.44,1099.84);
   Graph_Graph467->SetMinimum(0.08305473);
   Graph_Graph467->SetMaximum(83.05473);
   Graph_Graph467->SetDirectory(nullptr);
   Graph_Graph467->SetStats(0);
   Graph_Graph467->SetLineWidth(2);
   Graph_Graph467->SetMarkerStyle(20);
   Graph_Graph467->SetMarkerSize(0.9);
   Graph_Graph467->GetXaxis()->SetLabelFont(42);
   Graph_Graph467->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph467->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph467->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph467->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph467->GetXaxis()->SetTitleFont(42);
   Graph_Graph467->GetYaxis()->SetLabelFont(42);
   Graph_Graph467->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph467->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph467->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph467->GetYaxis()->SetTickLength(0.02);
   Graph_Graph467->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph467->GetYaxis()->SetTitleFont(42);
   Graph_Graph467->GetZaxis()->SetLabelFont(42);
   Graph_Graph467->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph467->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph467->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph467->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph467->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph467);
   
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
   
   Double_t Graph_fx469[72] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180, 185, 190, 195, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450,
   475, 500, 600, 700, 800, 900, 1000 };
   Double_t Graph_fy469[72] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1.119994e-292, 1.979705e-108, 2.279751e-89, 9.091867e-76, 1.40738e-65, 1.162446e-57,
   2.467295e-51, 3.657938e-46, 7.37626e-42, 4.184973e-35, 2.083574e-32, 4.745352e-30, 5.677524e-28, 3.973735e-26, 1.738605e-24, 5.200461e-23, 1.830396e-20, 2.407437e-18, 1.485394e-16, 5.05715e-15, 1.070126e-13, 1.538844e-12,
   1.610037e-11, 1.292485e-10, 3.36064e-10, 8.301926e-10, 1.9562e-09, 4.412362e-09, 1.481781e-07, 2.427301e-06, 2.3618e-05, 0.0001556403, 0.0007605979, 0.002940617, 0.009430649, 0.02599353, 0.06326528, 0.1388576,
   0.2794284, 0.5224106, 3.685683, 14.39307, 38.99986, 83.05473, 83.05473 };
   graph = new TGraph(72,Graph_fx469,Graph_fy469);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph469 = new TH1F("Graph_Graph469","",100,1.44,1099.84);
   Graph_Graph469->SetMinimum(0.0913602);
   Graph_Graph469->SetMaximum(91.3602);
   Graph_Graph469->SetDirectory(nullptr);
   Graph_Graph469->SetStats(0);
   Graph_Graph469->SetLineWidth(2);
   Graph_Graph469->SetMarkerStyle(20);
   Graph_Graph469->SetMarkerSize(0.9);
   Graph_Graph469->GetXaxis()->SetLabelFont(42);
   Graph_Graph469->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph469->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph469->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph469->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph469->GetXaxis()->SetTitleFont(42);
   Graph_Graph469->GetYaxis()->SetLabelFont(42);
   Graph_Graph469->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph469->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph469->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph469->GetYaxis()->SetTickLength(0.02);
   Graph_Graph469->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph469->GetYaxis()->SetTitleFont(42);
   Graph_Graph469->GetZaxis()->SetLabelFont(42);
   Graph_Graph469->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph469->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph469->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph469->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph469->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph469);
   
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
   line = new TLine(772.8271,0,772.8271,27.04183);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(772.8221,0,"  772.83 TeV");

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
   pt_LaTex = pt->AddText("#varepsilon = 7.36e-07");
   pt_LaTex = pt->AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
