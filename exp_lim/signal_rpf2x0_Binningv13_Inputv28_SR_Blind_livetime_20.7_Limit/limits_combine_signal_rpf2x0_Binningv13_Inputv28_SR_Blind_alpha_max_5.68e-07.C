#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signal_rpf2x0_Binningv13_Inputv28_SR_Blind_alpha_max_5.68e-07()
{
//=========Macro generated from canvas: climits/climits
//=========  (Tue Jul  7 21:10:28 2026) by ROOT version 6.30/07
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
   
   Double_t Graph0_fx414[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy414[20] = { 102.3402, 8.363508, 7.354474, 5.768814, 5.291376, 5.044252, 4.905126, 6.727238, 9.269029, 12.08222, 14.78557, 27.12809, 27.88047, 27.04424, 27.56347, 27.30236, 26.1693,
   27.37479, 27.47854, 27.47854 };
   TGraph *graph = new TGraph(20,Graph0_fx414,Graph0_fy414);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0414 = new TH1F("Graph_Graph0414","",100,2.7,1099.7);
   Graph_Graph0414->SetMinimum(0.2);
   Graph_Graph0414->SetMaximum(100000);
   Graph_Graph0414->SetDirectory(nullptr);
   Graph_Graph0414->SetStats(0);
   Graph_Graph0414->SetLineWidth(2);
   Graph_Graph0414->SetMarkerStyle(20);
   Graph_Graph0414->SetMarkerSize(0.9);
   Graph_Graph0414->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0414->GetXaxis()->SetRange(0,91);
   Graph_Graph0414->GetXaxis()->SetLabelFont(42);
   Graph_Graph0414->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0414->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0414->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0414->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0414->GetXaxis()->SetTitleFont(42);
   Graph_Graph0414->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0414->GetYaxis()->SetLabelFont(42);
   Graph_Graph0414->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0414->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0414->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0414->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0414->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0414->GetYaxis()->SetTitleFont(42);
   Graph_Graph0414->GetZaxis()->SetLabelFont(42);
   Graph_Graph0414->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0414->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0414->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0414->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0414->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0414);
   
   graph->Draw("al");
   
   Double_t Graph1_fx415[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph1_fy415[42] = { 263.3536, 22.30594, 21.12988, 17.06116, 15.59377, 14.93766, 14.53641, 20.4565, 28.18569, 36.74017, 44.96066, 82.49234, 84.78023, 82.23738, 83.81629, 83.02227, 79.57681,
   83.24253, 83.55803, 83.55803, 83.55803, 7.100603, 7.100603, 7.100603, 7.073947, 6.804864, 7.054077, 7.123885, 7.003339, 7.189512, 7.023805, 4.175044, 3.473909,
   2.747375, 2.098302, 1.901159, 1.981428, 2.095599, 2.279342, 2.893423, 3.688819, 43.23465 };
   graph = new TGraph(42,Graph1_fx415,Graph1_fy415);
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
   
   TH1F *Graph_Graph1415 = new TH1F("Graph_Graph1415","Graph",100,2.7,1099.7);
   Graph_Graph1415->SetMinimum(1.711043);
   Graph_Graph1415->SetMaximum(289.4988);
   Graph_Graph1415->SetDirectory(nullptr);
   Graph_Graph1415->SetStats(0);
   Graph_Graph1415->SetLineWidth(2);
   Graph_Graph1415->SetMarkerStyle(20);
   Graph_Graph1415->SetMarkerSize(0.9);
   Graph_Graph1415->GetXaxis()->SetLabelFont(42);
   Graph_Graph1415->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1415->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1415->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1415->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1415->GetXaxis()->SetTitleFont(42);
   Graph_Graph1415->GetYaxis()->SetLabelFont(42);
   Graph_Graph1415->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1415->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1415->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1415->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1415->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1415->GetYaxis()->SetTitleFont(42);
   Graph_Graph1415->GetZaxis()->SetLabelFont(42);
   Graph_Graph1415->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1415->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1415->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1415->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1415->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1415);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx416[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph2_fy416[42] = { 167.9571, 13.70932, 12.9865, 10.4326, 9.578931, 9.239235, 9.0445, 13.54376, 18.70133, 24.41077, 29.87306, 54.81011, 56.33024, 54.64071, 55.68977, 55.1622, 52.87295,
   55.30855, 55.51818, 55.51818, 55.51818, 12.67709, 12.67709, 12.67709, 12.63184, 12.1099, 12.60131, 12.7142, 12.48837, 12.85225, 12.52694, 7.165181, 5.942446,
   4.645264, 3.478678, 2.897317, 2.99809, 3.15936, 3.443171, 4.365156, 5.318804, 63.9916 };
   graph = new TGraph(42,Graph2_fx416,Graph2_fy416);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2416 = new TH1F("Graph_Graph2416","Graph",100,2.7,1099.7);
   Graph_Graph2416->SetMinimum(2.607585);
   Graph_Graph2416->SetMaximum(184.4631);
   Graph_Graph2416->SetDirectory(nullptr);
   Graph_Graph2416->SetStats(0);
   Graph_Graph2416->SetLineWidth(2);
   Graph_Graph2416->SetMarkerStyle(20);
   Graph_Graph2416->SetMarkerSize(0.9);
   Graph_Graph2416->GetXaxis()->SetLabelFont(42);
   Graph_Graph2416->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2416->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2416->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2416->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2416->GetXaxis()->SetTitleFont(42);
   Graph_Graph2416->GetYaxis()->SetLabelFont(42);
   Graph_Graph2416->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2416->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2416->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2416->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2416->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2416->GetYaxis()->SetTitleFont(42);
   Graph_Graph2416->GetZaxis()->SetLabelFont(42);
   Graph_Graph2416->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2416->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2416->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2416->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2416->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2416);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx417[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy417[20] = { 102.3402, 8.363508, 7.354474, 5.768814, 5.291376, 5.044252, 4.905126, 6.727238, 9.269029, 12.08222, 14.78557, 27.12809, 27.88047, 27.04424, 27.56347, 27.30236, 26.1693,
   27.37479, 27.47854, 27.47854 };
   graph = new TGraph(20,Graph0_fx417,Graph0_fy417);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0417 = new TH1F("Graph_Graph0417","",100,2.7,1099.7);
   Graph_Graph0417->SetMinimum(0.2);
   Graph_Graph0417->SetMaximum(100000);
   Graph_Graph0417->SetDirectory(nullptr);
   Graph_Graph0417->SetStats(0);
   Graph_Graph0417->SetLineWidth(2);
   Graph_Graph0417->SetMarkerStyle(20);
   Graph_Graph0417->SetMarkerSize(0.9);
   Graph_Graph0417->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0417->GetXaxis()->SetRange(0,91);
   Graph_Graph0417->GetXaxis()->SetLabelFont(42);
   Graph_Graph0417->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0417->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0417->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0417->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0417->GetXaxis()->SetTitleFont(42);
   Graph_Graph0417->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0417->GetYaxis()->SetLabelFont(42);
   Graph_Graph0417->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0417->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0417->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0417->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0417->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0417->GetYaxis()->SetTitleFont(42);
   Graph_Graph0417->GetZaxis()->SetLabelFont(42);
   Graph_Graph0417->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0417->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0417->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0417->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0417->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0417);
   
   graph->Draw("l");
   
   Double_t Graph_fx418[72] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180, 185, 190, 195, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450,
   475, 500, 600, 700, 800, 900, 1000 };
   Double_t Graph_fy418[72] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 7.845384e-299, 2.628381e-288, 1.74742e-278, 6.823725e-253, 8.476434e-238, 7.831596e-219, 2.702496e-207, 1.055694e-192, 1.407174e-183, 5.038173e-172, 2.111587e-62, 4.29186e-51, 4.958778e-43, 5.3902e-37, 2.618452e-32,
   1.447022e-28, 1.648036e-25, 5.747295e-23, 5.550098e-19, 2.156796e-17, 5.273657e-16, 8.807731e-15, 1.070979e-13, 9.787526e-13, 7.151791e-12, 2.206256e-10, 3.81605e-09, 4.230536e-08, 3.307159e-07, 1.95515e-06, 9.212161e-06,
   3.601086e-05, 0.0001204929, 0.0002095729, 0.0003537202, 0.0005806922, 0.0009291858, 0.00704873, 0.03512099, 0.129057, 0.3777806, 0.9291171, 1.994123, 3.84002, 6.773696, 11.11983, 17.19799,
   25.3021, 35.68439, 103.1149, 212.8408, 357.5099, 524.8838, 524.8838 };
   graph = new TGraph(72,Graph_fx418,Graph_fy418);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph418 = new TH1F("Graph_Graph418","",100,1.44,1099.84);
   Graph_Graph418->SetMinimum(0.5773722);
   Graph_Graph418->SetMaximum(577.3722);
   Graph_Graph418->SetDirectory(nullptr);
   Graph_Graph418->SetStats(0);
   Graph_Graph418->SetLineWidth(2);
   Graph_Graph418->SetMarkerStyle(20);
   Graph_Graph418->SetMarkerSize(0.9);
   Graph_Graph418->GetXaxis()->SetLabelFont(42);
   Graph_Graph418->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph418->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph418->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph418->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph418->GetXaxis()->SetTitleFont(42);
   Graph_Graph418->GetYaxis()->SetLabelFont(42);
   Graph_Graph418->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph418->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph418->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph418->GetYaxis()->SetTickLength(0.02);
   Graph_Graph418->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph418->GetYaxis()->SetTitleFont(42);
   Graph_Graph418->GetZaxis()->SetLabelFont(42);
   Graph_Graph418->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph418->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph418->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph418->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph418->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph418);
   
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
   
   Double_t Graph_fx420[72] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180, 185, 190, 195, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450,
   475, 500, 600, 700, 800, 900, 1000 };
   Double_t Graph_fy420[72] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 8.629922e-299, 2.891219e-288, 1.922162e-278, 7.506098e-253, 9.324077e-238, 8.614756e-219, 2.972746e-207, 1.161263e-192, 1.547891e-183, 5.54199e-172, 2.322746e-62, 4.721046e-51, 5.454656e-43, 5.92922e-37, 2.880297e-32,
   1.591724e-28, 1.81284e-25, 6.322025e-23, 6.105108e-19, 2.372476e-17, 5.801023e-16, 9.688504e-15, 1.178077e-13, 1.076628e-12, 7.86697e-12, 2.426882e-10, 4.197655e-09, 4.65359e-08, 3.637875e-07, 2.150665e-06, 1.013338e-05,
   3.961195e-05, 0.0001325422, 0.0002305302, 0.0003890922, 0.0006387614, 0.001022104, 0.007753603, 0.03863309, 0.1419627, 0.4155587, 1.022029, 2.193535, 4.224022, 7.451066, 12.23181, 18.91779,
   27.83231, 39.25283, 113.4264, 234.1249, 393.2609, 577.3722, 577.3722 };
   graph = new TGraph(72,Graph_fx420,Graph_fy420);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph420 = new TH1F("Graph_Graph420","",100,1.44,1099.84);
   Graph_Graph420->SetMinimum(0.6351094);
   Graph_Graph420->SetMaximum(635.1094);
   Graph_Graph420->SetDirectory(nullptr);
   Graph_Graph420->SetStats(0);
   Graph_Graph420->SetLineWidth(2);
   Graph_Graph420->SetMarkerStyle(20);
   Graph_Graph420->SetMarkerSize(0.9);
   Graph_Graph420->GetXaxis()->SetLabelFont(42);
   Graph_Graph420->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph420->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph420->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph420->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph420->GetXaxis()->SetTitleFont(42);
   Graph_Graph420->GetYaxis()->SetLabelFont(42);
   Graph_Graph420->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph420->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph420->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph420->GetYaxis()->SetTickLength(0.02);
   Graph_Graph420->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph420->GetYaxis()->SetTitleFont(42);
   Graph_Graph420->GetZaxis()->SetLabelFont(42);
   Graph_Graph420->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph420->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph420->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph420->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph420->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph420);
   
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
   line = new TLine(480.9611,0,480.9611,27.46386);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(480.9561,0,"  480.96 TeV");

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
   pt_LaTex = pt->AddText("#varepsilon = 5.68e-07");
   pt_LaTex = pt->AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
