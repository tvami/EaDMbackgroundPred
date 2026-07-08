#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signal_rpf2x0_Binningv13_Inputv28_SR_Blind_alpha_max_7.6e-07()
{
//=========Macro generated from canvas: climits/climits
//=========  (Tue Jul  7 21:10:36 2026) by ROOT version 6.30/07
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
   
   Double_t Graph0_fx470[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy470[20] = { 102.3402, 8.363508, 7.354474, 5.768814, 5.291376, 5.044252, 4.905126, 6.727238, 9.269029, 12.08222, 14.78557, 27.12809, 27.88047, 27.04424, 27.56347, 27.30236, 26.1693,
   27.37479, 27.47854, 27.47854 };
   TGraph *graph = new TGraph(20,Graph0_fx470,Graph0_fy470);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0470 = new TH1F("Graph_Graph0470","",100,2.7,1099.7);
   Graph_Graph0470->SetMinimum(0.2);
   Graph_Graph0470->SetMaximum(100000);
   Graph_Graph0470->SetDirectory(nullptr);
   Graph_Graph0470->SetStats(0);
   Graph_Graph0470->SetLineWidth(2);
   Graph_Graph0470->SetMarkerStyle(20);
   Graph_Graph0470->SetMarkerSize(0.9);
   Graph_Graph0470->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0470->GetXaxis()->SetRange(0,91);
   Graph_Graph0470->GetXaxis()->SetLabelFont(42);
   Graph_Graph0470->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0470->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0470->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0470->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0470->GetXaxis()->SetTitleFont(42);
   Graph_Graph0470->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0470->GetYaxis()->SetLabelFont(42);
   Graph_Graph0470->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0470->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0470->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0470->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0470->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0470->GetYaxis()->SetTitleFont(42);
   Graph_Graph0470->GetZaxis()->SetLabelFont(42);
   Graph_Graph0470->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0470->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0470->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0470->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0470->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0470);
   
   graph->Draw("al");
   
   Double_t Graph1_fx471[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph1_fy471[42] = { 263.3536, 22.30594, 21.12988, 17.06116, 15.59377, 14.93766, 14.53641, 20.4565, 28.18569, 36.74017, 44.96066, 82.49234, 84.78023, 82.23738, 83.81629, 83.02227, 79.57681,
   83.24253, 83.55803, 83.55803, 83.55803, 7.100603, 7.100603, 7.100603, 7.073947, 6.804864, 7.054077, 7.123885, 7.003339, 7.189512, 7.023805, 4.175044, 3.473909,
   2.747375, 2.098302, 1.901159, 1.981428, 2.095599, 2.279342, 2.893423, 3.688819, 43.23465 };
   graph = new TGraph(42,Graph1_fx471,Graph1_fy471);
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
   
   TH1F *Graph_Graph1471 = new TH1F("Graph_Graph1471","Graph",100,2.7,1099.7);
   Graph_Graph1471->SetMinimum(1.711043);
   Graph_Graph1471->SetMaximum(289.4988);
   Graph_Graph1471->SetDirectory(nullptr);
   Graph_Graph1471->SetStats(0);
   Graph_Graph1471->SetLineWidth(2);
   Graph_Graph1471->SetMarkerStyle(20);
   Graph_Graph1471->SetMarkerSize(0.9);
   Graph_Graph1471->GetXaxis()->SetLabelFont(42);
   Graph_Graph1471->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1471->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1471->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1471->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1471->GetXaxis()->SetTitleFont(42);
   Graph_Graph1471->GetYaxis()->SetLabelFont(42);
   Graph_Graph1471->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1471->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1471->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1471->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1471->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1471->GetYaxis()->SetTitleFont(42);
   Graph_Graph1471->GetZaxis()->SetLabelFont(42);
   Graph_Graph1471->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1471->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1471->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1471->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1471->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1471);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx472[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph2_fy472[42] = { 167.9571, 13.70932, 12.9865, 10.4326, 9.578931, 9.239235, 9.0445, 13.54376, 18.70133, 24.41077, 29.87306, 54.81011, 56.33024, 54.64071, 55.68977, 55.1622, 52.87295,
   55.30855, 55.51818, 55.51818, 55.51818, 12.67709, 12.67709, 12.67709, 12.63184, 12.1099, 12.60131, 12.7142, 12.48837, 12.85225, 12.52694, 7.165181, 5.942446,
   4.645264, 3.478678, 2.897317, 2.99809, 3.15936, 3.443171, 4.365156, 5.318804, 63.9916 };
   graph = new TGraph(42,Graph2_fx472,Graph2_fy472);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2472 = new TH1F("Graph_Graph2472","Graph",100,2.7,1099.7);
   Graph_Graph2472->SetMinimum(2.607585);
   Graph_Graph2472->SetMaximum(184.4631);
   Graph_Graph2472->SetDirectory(nullptr);
   Graph_Graph2472->SetStats(0);
   Graph_Graph2472->SetLineWidth(2);
   Graph_Graph2472->SetMarkerStyle(20);
   Graph_Graph2472->SetMarkerSize(0.9);
   Graph_Graph2472->GetXaxis()->SetLabelFont(42);
   Graph_Graph2472->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2472->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2472->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2472->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2472->GetXaxis()->SetTitleFont(42);
   Graph_Graph2472->GetYaxis()->SetLabelFont(42);
   Graph_Graph2472->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2472->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2472->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2472->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2472->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2472->GetYaxis()->SetTitleFont(42);
   Graph_Graph2472->GetZaxis()->SetLabelFont(42);
   Graph_Graph2472->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2472->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2472->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2472->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2472->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2472);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx473[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy473[20] = { 102.3402, 8.363508, 7.354474, 5.768814, 5.291376, 5.044252, 4.905126, 6.727238, 9.269029, 12.08222, 14.78557, 27.12809, 27.88047, 27.04424, 27.56347, 27.30236, 26.1693,
   27.37479, 27.47854, 27.47854 };
   graph = new TGraph(20,Graph0_fx473,Graph0_fy473);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0473 = new TH1F("Graph_Graph0473","",100,2.7,1099.7);
   Graph_Graph0473->SetMinimum(0.2);
   Graph_Graph0473->SetMaximum(100000);
   Graph_Graph0473->SetDirectory(nullptr);
   Graph_Graph0473->SetStats(0);
   Graph_Graph0473->SetLineWidth(2);
   Graph_Graph0473->SetMarkerStyle(20);
   Graph_Graph0473->SetMarkerSize(0.9);
   Graph_Graph0473->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0473->GetXaxis()->SetRange(0,91);
   Graph_Graph0473->GetXaxis()->SetLabelFont(42);
   Graph_Graph0473->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0473->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0473->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0473->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0473->GetXaxis()->SetTitleFont(42);
   Graph_Graph0473->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0473->GetYaxis()->SetLabelFont(42);
   Graph_Graph0473->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0473->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0473->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0473->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0473->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0473->GetYaxis()->SetTitleFont(42);
   Graph_Graph0473->GetZaxis()->SetLabelFont(42);
   Graph_Graph0473->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0473->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0473->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0473->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0473->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0473);
   
   graph->Draw("l");
   
   Double_t Graph_fx474[72] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180, 185, 190, 195, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450,
   475, 500, 600, 700, 800, 900, 1000 };
   Double_t Graph_fy474[72] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4.861903e-116, 1.044199e-95, 3.36655e-81, 2.498448e-70, 6.983712e-62,
   3.930955e-55, 1.294391e-49, 5.075264e-45, 8.187161e-38, 6.191228e-35, 2.032697e-32, 3.35825e-30, 3.131342e-28, 1.770911e-26, 6.673526e-25, 3.500535e-22, 6.42009e-20, 5.248191e-18, 2.274056e-16, 5.930534e-15, 1.023934e-13,
   1.25889e-12, 1.166451e-11, 3.23953e-11, 8.518279e-11, 2.129653e-10, 5.081629e-10, 2.177744e-08, 4.3357e-07, 4.948678e-06, 3.725004e-05, 0.0002037195, 0.0008673747, 0.003024234, 0.008968222, 0.02328287, 0.05411981,
   0.1146436, 0.2244683, 1.83314, 7.947174, 23.28943, 52.71484, 52.71484 };
   graph = new TGraph(72,Graph_fx474,Graph_fy474);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph474 = new TH1F("Graph_Graph474","",100,1.44,1099.84);
   Graph_Graph474->SetMinimum(0.05798632);
   Graph_Graph474->SetMaximum(57.98632);
   Graph_Graph474->SetDirectory(nullptr);
   Graph_Graph474->SetStats(0);
   Graph_Graph474->SetLineWidth(2);
   Graph_Graph474->SetMarkerStyle(20);
   Graph_Graph474->SetMarkerSize(0.9);
   Graph_Graph474->GetXaxis()->SetLabelFont(42);
   Graph_Graph474->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph474->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph474->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph474->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph474->GetXaxis()->SetTitleFont(42);
   Graph_Graph474->GetYaxis()->SetLabelFont(42);
   Graph_Graph474->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph474->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph474->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph474->GetYaxis()->SetTickLength(0.02);
   Graph_Graph474->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph474->GetYaxis()->SetTitleFont(42);
   Graph_Graph474->GetZaxis()->SetLabelFont(42);
   Graph_Graph474->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph474->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph474->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph474->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph474->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph474);
   
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
   
   Double_t Graph_fx476[72] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180, 185, 190, 195, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450,
   475, 500, 600, 700, 800, 900, 1000 };
   Double_t Graph_fy476[72] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5.348093e-116, 1.148619e-95, 3.703205e-81, 2.748293e-70, 7.682083e-62,
   4.32405e-55, 1.42383e-49, 5.58279e-45, 9.005877e-38, 6.810351e-35, 2.235967e-32, 3.694075e-30, 3.444476e-28, 1.948002e-26, 7.340879e-25, 3.850589e-22, 7.062099e-20, 5.77301e-18, 2.501462e-16, 6.523587e-15, 1.126327e-13,
   1.384779e-12, 1.283096e-11, 3.563483e-11, 9.370107e-11, 2.342618e-10, 5.589792e-10, 2.395518e-08, 4.76927e-07, 5.443546e-06, 4.097504e-05, 0.0002240915, 0.0009541122, 0.003326657, 0.009865044, 0.02561116, 0.05953179,
   0.126108, 0.2469151, 2.016454, 8.741891, 25.61837, 57.98632, 57.98632 };
   graph = new TGraph(72,Graph_fx476,Graph_fy476);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph476 = new TH1F("Graph_Graph476","",100,1.44,1099.84);
   Graph_Graph476->SetMinimum(0.06378496);
   Graph_Graph476->SetMaximum(63.78496);
   Graph_Graph476->SetDirectory(nullptr);
   Graph_Graph476->SetStats(0);
   Graph_Graph476->SetLineWidth(2);
   Graph_Graph476->SetMarkerStyle(20);
   Graph_Graph476->SetMarkerSize(0.9);
   Graph_Graph476->GetXaxis()->SetLabelFont(42);
   Graph_Graph476->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph476->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph476->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph476->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph476->GetXaxis()->SetTitleFont(42);
   Graph_Graph476->GetYaxis()->SetLabelFont(42);
   Graph_Graph476->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph476->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph476->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph476->GetYaxis()->SetTickLength(0.02);
   Graph_Graph476->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph476->GetYaxis()->SetTitleFont(42);
   Graph_Graph476->GetZaxis()->SetLabelFont(42);
   Graph_Graph476->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph476->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph476->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph476->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph476->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph476);
   
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
   line = new TLine(819.877,0,819.877,27.39538);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(819.872,0,"  819.88 TeV");

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
   pt_LaTex = pt->AddText("#varepsilon = 7.6e-07");
   pt_LaTex = pt->AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
