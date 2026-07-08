#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signal_rpf2x0_Binningv13_Inputv28_SR_Blind_alpha_max_8.56e-07()
{
//=========Macro generated from canvas: climits/climits
//=========  (Tue Jul  7 21:10:40 2026) by ROOT version 6.30/07
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
   
   Double_t Graph0_fx498[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy498[20] = { 102.3402, 8.363508, 7.354474, 5.768814, 5.291376, 5.044252, 4.905126, 6.727238, 9.269029, 12.08222, 14.78557, 27.12809, 27.88047, 27.04424, 27.56347, 27.30236, 26.1693,
   27.37479, 27.47854, 27.47854 };
   TGraph *graph = new TGraph(20,Graph0_fx498,Graph0_fy498);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0498 = new TH1F("Graph_Graph0498","",100,2.7,1099.7);
   Graph_Graph0498->SetMinimum(0.2);
   Graph_Graph0498->SetMaximum(100000);
   Graph_Graph0498->SetDirectory(nullptr);
   Graph_Graph0498->SetStats(0);
   Graph_Graph0498->SetLineWidth(2);
   Graph_Graph0498->SetMarkerStyle(20);
   Graph_Graph0498->SetMarkerSize(0.9);
   Graph_Graph0498->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0498->GetXaxis()->SetRange(0,91);
   Graph_Graph0498->GetXaxis()->SetLabelFont(42);
   Graph_Graph0498->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0498->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0498->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0498->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0498->GetXaxis()->SetTitleFont(42);
   Graph_Graph0498->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0498->GetYaxis()->SetLabelFont(42);
   Graph_Graph0498->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0498->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0498->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0498->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0498->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0498->GetYaxis()->SetTitleFont(42);
   Graph_Graph0498->GetZaxis()->SetLabelFont(42);
   Graph_Graph0498->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0498->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0498->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0498->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0498->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0498);
   
   graph->Draw("al");
   
   Double_t Graph1_fx499[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph1_fy499[42] = { 263.3536, 22.30594, 21.12988, 17.06116, 15.59377, 14.93766, 14.53641, 20.4565, 28.18569, 36.74017, 44.96066, 82.49234, 84.78023, 82.23738, 83.81629, 83.02227, 79.57681,
   83.24253, 83.55803, 83.55803, 83.55803, 7.100603, 7.100603, 7.100603, 7.073947, 6.804864, 7.054077, 7.123885, 7.003339, 7.189512, 7.023805, 4.175044, 3.473909,
   2.747375, 2.098302, 1.901159, 1.981428, 2.095599, 2.279342, 2.893423, 3.688819, 43.23465 };
   graph = new TGraph(42,Graph1_fx499,Graph1_fy499);
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
   
   TH1F *Graph_Graph1499 = new TH1F("Graph_Graph1499","Graph",100,2.7,1099.7);
   Graph_Graph1499->SetMinimum(1.711043);
   Graph_Graph1499->SetMaximum(289.4988);
   Graph_Graph1499->SetDirectory(nullptr);
   Graph_Graph1499->SetStats(0);
   Graph_Graph1499->SetLineWidth(2);
   Graph_Graph1499->SetMarkerStyle(20);
   Graph_Graph1499->SetMarkerSize(0.9);
   Graph_Graph1499->GetXaxis()->SetLabelFont(42);
   Graph_Graph1499->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1499->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1499->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1499->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1499->GetXaxis()->SetTitleFont(42);
   Graph_Graph1499->GetYaxis()->SetLabelFont(42);
   Graph_Graph1499->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1499->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1499->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1499->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1499->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1499->GetYaxis()->SetTitleFont(42);
   Graph_Graph1499->GetZaxis()->SetLabelFont(42);
   Graph_Graph1499->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1499->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1499->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1499->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1499->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1499);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx500[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph2_fy500[42] = { 167.9571, 13.70932, 12.9865, 10.4326, 9.578931, 9.239235, 9.0445, 13.54376, 18.70133, 24.41077, 29.87306, 54.81011, 56.33024, 54.64071, 55.68977, 55.1622, 52.87295,
   55.30855, 55.51818, 55.51818, 55.51818, 12.67709, 12.67709, 12.67709, 12.63184, 12.1099, 12.60131, 12.7142, 12.48837, 12.85225, 12.52694, 7.165181, 5.942446,
   4.645264, 3.478678, 2.897317, 2.99809, 3.15936, 3.443171, 4.365156, 5.318804, 63.9916 };
   graph = new TGraph(42,Graph2_fx500,Graph2_fy500);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2500 = new TH1F("Graph_Graph2500","Graph",100,2.7,1099.7);
   Graph_Graph2500->SetMinimum(2.607585);
   Graph_Graph2500->SetMaximum(184.4631);
   Graph_Graph2500->SetDirectory(nullptr);
   Graph_Graph2500->SetStats(0);
   Graph_Graph2500->SetLineWidth(2);
   Graph_Graph2500->SetMarkerStyle(20);
   Graph_Graph2500->SetMarkerSize(0.9);
   Graph_Graph2500->GetXaxis()->SetLabelFont(42);
   Graph_Graph2500->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2500->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2500->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2500->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2500->GetXaxis()->SetTitleFont(42);
   Graph_Graph2500->GetYaxis()->SetLabelFont(42);
   Graph_Graph2500->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2500->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2500->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2500->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2500->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2500->GetYaxis()->SetTitleFont(42);
   Graph_Graph2500->GetZaxis()->SetLabelFont(42);
   Graph_Graph2500->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2500->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2500->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2500->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2500->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2500);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx501[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy501[20] = { 102.3402, 8.363508, 7.354474, 5.768814, 5.291376, 5.044252, 4.905126, 6.727238, 9.269029, 12.08222, 14.78557, 27.12809, 27.88047, 27.04424, 27.56347, 27.30236, 26.1693,
   27.37479, 27.47854, 27.47854 };
   graph = new TGraph(20,Graph0_fx501,Graph0_fy501);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0501 = new TH1F("Graph_Graph0501","",100,2.7,1099.7);
   Graph_Graph0501->SetMinimum(0.2);
   Graph_Graph0501->SetMaximum(100000);
   Graph_Graph0501->SetDirectory(nullptr);
   Graph_Graph0501->SetStats(0);
   Graph_Graph0501->SetLineWidth(2);
   Graph_Graph0501->SetMarkerStyle(20);
   Graph_Graph0501->SetMarkerSize(0.9);
   Graph_Graph0501->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0501->GetXaxis()->SetRange(0,91);
   Graph_Graph0501->GetXaxis()->SetLabelFont(42);
   Graph_Graph0501->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0501->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0501->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0501->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0501->GetXaxis()->SetTitleFont(42);
   Graph_Graph0501->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0501->GetYaxis()->SetLabelFont(42);
   Graph_Graph0501->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0501->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0501->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0501->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0501->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0501->GetYaxis()->SetTitleFont(42);
   Graph_Graph0501->GetZaxis()->SetLabelFont(42);
   Graph_Graph0501->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0501->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0501->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0501->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0501->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0501);
   
   graph->Draw("l");
   
   Double_t Graph_fx502[72] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180, 185, 190, 195, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450,
   475, 500, 600, 700, 800, 900, 1000 };
   Double_t Graph_fy502[72] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8.925287e-149, 5.930169e-123, 1.596733e-104, 1.035239e-90, 5.612448e-80,
   2.136589e-71, 2.211513e-64, 1.534324e-58, 2.261906e-49, 1.041049e-45, 1.659877e-42, 1.105817e-39, 3.561084e-37, 6.104762e-35, 6.241454e-33, 1.835548e-29, 1.416086e-26, 3.903807e-24, 4.795031e-22, 3.085039e-20, 1.173798e-18,
   2.897963e-17, 4.990133e-16, 1.842413e-15, 6.344653e-15, 2.04884e-14, 6.234307e-14, 7.661812e-12, 3.543361e-10, 8.05983e-09, 1.077781e-07, 9.585356e-07, 6.191375e-06, 3.097893e-05, 0.0001260141, 0.0004323772, 0.001287772,
   0.00340531, 0.008140543, 0.1250886, 0.8517717, 3.502157, 10.3156, 10.3156 };
   graph = new TGraph(72,Graph_fx502,Graph_fy502);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph502 = new TH1F("Graph_Graph502","",100,1.44,1099.84);
   Graph_Graph502->SetMinimum(0.01134716);
   Graph_Graph502->SetMaximum(11.34716);
   Graph_Graph502->SetDirectory(nullptr);
   Graph_Graph502->SetStats(0);
   Graph_Graph502->SetLineWidth(2);
   Graph_Graph502->SetMarkerStyle(20);
   Graph_Graph502->SetMarkerSize(0.9);
   Graph_Graph502->GetXaxis()->SetLabelFont(42);
   Graph_Graph502->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph502->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph502->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph502->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph502->GetXaxis()->SetTitleFont(42);
   Graph_Graph502->GetYaxis()->SetLabelFont(42);
   Graph_Graph502->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph502->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph502->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph502->GetYaxis()->SetTickLength(0.02);
   Graph_Graph502->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph502->GetYaxis()->SetTitleFont(42);
   Graph_Graph502->GetZaxis()->SetLabelFont(42);
   Graph_Graph502->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph502->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph502->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph502->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph502->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph502);
   
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
   
   Double_t Graph_fx504[72] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180, 185, 190, 195, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450,
   475, 500, 600, 700, 800, 900, 1000 };
   Double_t Graph_fy504[72] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9.817816e-149, 6.523186e-123, 1.756406e-104, 1.138763e-90, 6.173693e-80,
   2.350248e-71, 2.432664e-64, 1.687756e-58, 2.488097e-49, 1.145154e-45, 1.825865e-42, 1.216399e-39, 3.917192e-37, 6.715238e-35, 6.865599e-33, 2.019103e-29, 1.557695e-26, 4.294188e-24, 5.274534e-22, 3.393543e-20, 1.291178e-18,
   3.187759e-17, 5.489146e-16, 2.026654e-15, 6.979118e-15, 2.253724e-14, 6.857738e-14, 8.427993e-12, 3.897697e-10, 8.865813e-09, 1.185559e-07, 1.054389e-06, 6.810513e-06, 3.407682e-05, 0.0001386155, 0.0004756149, 0.001416549,
   0.003745841, 0.008954597, 0.1375975, 0.9369489, 3.852373, 11.34716, 11.34716 };
   graph = new TGraph(72,Graph_fx504,Graph_fy504);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph504 = new TH1F("Graph_Graph504","",100,1.44,1099.84);
   Graph_Graph504->SetMinimum(0.01248188);
   Graph_Graph504->SetMaximum(12.48188);
   Graph_Graph504->SetDirectory(nullptr);
   Graph_Graph504->SetStats(0);
   Graph_Graph504->SetLineWidth(2);
   Graph_Graph504->SetMarkerStyle(20);
   Graph_Graph504->SetMarkerSize(0.9);
   Graph_Graph504->GetXaxis()->SetLabelFont(42);
   Graph_Graph504->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph504->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph504->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph504->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph504->GetXaxis()->SetTitleFont(42);
   Graph_Graph504->GetYaxis()->SetLabelFont(42);
   Graph_Graph504->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph504->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph504->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph504->GetYaxis()->SetTickLength(0.02);
   Graph_Graph504->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph504->GetYaxis()->SetTitleFont(42);
   Graph_Graph504->GetZaxis()->SetLabelFont(42);
   Graph_Graph504->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph504->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph504->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph504->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph504->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph504);
   
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
   pt_LaTex = pt->AddText("#varepsilon = 8.56e-07");
   pt_LaTex = pt->AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
