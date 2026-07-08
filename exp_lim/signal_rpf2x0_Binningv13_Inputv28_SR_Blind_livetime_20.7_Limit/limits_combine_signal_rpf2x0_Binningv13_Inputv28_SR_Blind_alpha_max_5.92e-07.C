#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signal_rpf2x0_Binningv13_Inputv28_SR_Blind_alpha_max_5.92e-07()
{
//=========Macro generated from canvas: climits/climits
//=========  (Tue Jul  7 21:10:29 2026) by ROOT version 6.30/07
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
   
   Double_t Graph0_fx421[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy421[20] = { 102.3402, 8.363508, 7.354474, 5.768814, 5.291376, 5.044252, 4.905126, 6.727238, 9.269029, 12.08222, 14.78557, 27.12809, 27.88047, 27.04424, 27.56347, 27.30236, 26.1693,
   27.37479, 27.47854, 27.47854 };
   TGraph *graph = new TGraph(20,Graph0_fx421,Graph0_fy421);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0421 = new TH1F("Graph_Graph0421","",100,2.7,1099.7);
   Graph_Graph0421->SetMinimum(0.2);
   Graph_Graph0421->SetMaximum(100000);
   Graph_Graph0421->SetDirectory(nullptr);
   Graph_Graph0421->SetStats(0);
   Graph_Graph0421->SetLineWidth(2);
   Graph_Graph0421->SetMarkerStyle(20);
   Graph_Graph0421->SetMarkerSize(0.9);
   Graph_Graph0421->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0421->GetXaxis()->SetRange(0,91);
   Graph_Graph0421->GetXaxis()->SetLabelFont(42);
   Graph_Graph0421->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0421->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0421->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0421->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0421->GetXaxis()->SetTitleFont(42);
   Graph_Graph0421->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0421->GetYaxis()->SetLabelFont(42);
   Graph_Graph0421->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0421->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0421->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0421->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0421->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0421->GetYaxis()->SetTitleFont(42);
   Graph_Graph0421->GetZaxis()->SetLabelFont(42);
   Graph_Graph0421->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0421->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0421->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0421->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0421->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0421);
   
   graph->Draw("al");
   
   Double_t Graph1_fx422[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph1_fy422[42] = { 263.3536, 22.30594, 21.12988, 17.06116, 15.59377, 14.93766, 14.53641, 20.4565, 28.18569, 36.74017, 44.96066, 82.49234, 84.78023, 82.23738, 83.81629, 83.02227, 79.57681,
   83.24253, 83.55803, 83.55803, 83.55803, 7.100603, 7.100603, 7.100603, 7.073947, 6.804864, 7.054077, 7.123885, 7.003339, 7.189512, 7.023805, 4.175044, 3.473909,
   2.747375, 2.098302, 1.901159, 1.981428, 2.095599, 2.279342, 2.893423, 3.688819, 43.23465 };
   graph = new TGraph(42,Graph1_fx422,Graph1_fy422);
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
   
   TH1F *Graph_Graph1422 = new TH1F("Graph_Graph1422","Graph",100,2.7,1099.7);
   Graph_Graph1422->SetMinimum(1.711043);
   Graph_Graph1422->SetMaximum(289.4988);
   Graph_Graph1422->SetDirectory(nullptr);
   Graph_Graph1422->SetStats(0);
   Graph_Graph1422->SetLineWidth(2);
   Graph_Graph1422->SetMarkerStyle(20);
   Graph_Graph1422->SetMarkerSize(0.9);
   Graph_Graph1422->GetXaxis()->SetLabelFont(42);
   Graph_Graph1422->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1422->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1422->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1422->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1422->GetXaxis()->SetTitleFont(42);
   Graph_Graph1422->GetYaxis()->SetLabelFont(42);
   Graph_Graph1422->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1422->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1422->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1422->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1422->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1422->GetYaxis()->SetTitleFont(42);
   Graph_Graph1422->GetZaxis()->SetLabelFont(42);
   Graph_Graph1422->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1422->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1422->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1422->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1422->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1422);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx423[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph2_fy423[42] = { 167.9571, 13.70932, 12.9865, 10.4326, 9.578931, 9.239235, 9.0445, 13.54376, 18.70133, 24.41077, 29.87306, 54.81011, 56.33024, 54.64071, 55.68977, 55.1622, 52.87295,
   55.30855, 55.51818, 55.51818, 55.51818, 12.67709, 12.67709, 12.67709, 12.63184, 12.1099, 12.60131, 12.7142, 12.48837, 12.85225, 12.52694, 7.165181, 5.942446,
   4.645264, 3.478678, 2.897317, 2.99809, 3.15936, 3.443171, 4.365156, 5.318804, 63.9916 };
   graph = new TGraph(42,Graph2_fx423,Graph2_fy423);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2423 = new TH1F("Graph_Graph2423","Graph",100,2.7,1099.7);
   Graph_Graph2423->SetMinimum(2.607585);
   Graph_Graph2423->SetMaximum(184.4631);
   Graph_Graph2423->SetDirectory(nullptr);
   Graph_Graph2423->SetStats(0);
   Graph_Graph2423->SetLineWidth(2);
   Graph_Graph2423->SetMarkerStyle(20);
   Graph_Graph2423->SetMarkerSize(0.9);
   Graph_Graph2423->GetXaxis()->SetLabelFont(42);
   Graph_Graph2423->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2423->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2423->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2423->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2423->GetXaxis()->SetTitleFont(42);
   Graph_Graph2423->GetYaxis()->SetLabelFont(42);
   Graph_Graph2423->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2423->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2423->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2423->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2423->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2423->GetYaxis()->SetTitleFont(42);
   Graph_Graph2423->GetZaxis()->SetLabelFont(42);
   Graph_Graph2423->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2423->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2423->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2423->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2423->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2423);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx424[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy424[20] = { 102.3402, 8.363508, 7.354474, 5.768814, 5.291376, 5.044252, 4.905126, 6.727238, 9.269029, 12.08222, 14.78557, 27.12809, 27.88047, 27.04424, 27.56347, 27.30236, 26.1693,
   27.37479, 27.47854, 27.47854 };
   graph = new TGraph(20,Graph0_fx424,Graph0_fy424);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0424 = new TH1F("Graph_Graph0424","",100,2.7,1099.7);
   Graph_Graph0424->SetMinimum(0.2);
   Graph_Graph0424->SetMaximum(100000);
   Graph_Graph0424->SetDirectory(nullptr);
   Graph_Graph0424->SetStats(0);
   Graph_Graph0424->SetLineWidth(2);
   Graph_Graph0424->SetMarkerStyle(20);
   Graph_Graph0424->SetMarkerSize(0.9);
   Graph_Graph0424->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0424->GetXaxis()->SetRange(0,91);
   Graph_Graph0424->GetXaxis()->SetLabelFont(42);
   Graph_Graph0424->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0424->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0424->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0424->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0424->GetXaxis()->SetTitleFont(42);
   Graph_Graph0424->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0424->GetYaxis()->SetLabelFont(42);
   Graph_Graph0424->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0424->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0424->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0424->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0424->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0424->GetYaxis()->SetTitleFont(42);
   Graph_Graph0424->GetZaxis()->SetLabelFont(42);
   Graph_Graph0424->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0424->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0424->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0424->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0424->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0424);
   
   graph->Draw("l");
   
   Double_t Graph_fx425[72] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180, 185, 190, 195, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450,
   475, 500, 600, 700, 800, 900, 1000 };
   Double_t Graph_fy425[72] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 4.807698e-303, 3.257342e-275, 7.702939e-259, 3.304782e-238, 1.070008e-225, 8.129362e-210, 6.2902e-200, 2.392762e-187, 3.053032e-68, 5.998778e-56, 3.50408e-47, 1.284224e-40, 1.605537e-35,
   1.89009e-31, 3.996603e-28, 2.334095e-25, 5.06812e-21, 2.723402e-19, 8.842527e-18, 1.89671e-16, 2.880815e-15, 3.212453e-14, 2.807793e-13, 1.180224e-11, 2.641729e-10, 3.642583e-09, 3.433009e-08, 2.386592e-07, 1.295808e-06,
   5.740485e-06, 2.14672e-05, 3.929528e-05, 6.961271e-05, 0.000119652, 0.0001999974, 0.001832908, 0.01062387, 0.04418156, 0.1433789, 0.3847797, 0.8899711, 1.828558, 3.413763, 5.891697, 9.526633,
   14.58492, 21.3198, 69.00667, 154.4591, 275.7012, 424.3662, 424.3662 };
   graph = new TGraph(72,Graph_fx425,Graph_fy425);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph425 = new TH1F("Graph_Graph425","",100,1.44,1099.84);
   Graph_Graph425->SetMinimum(0.4668028);
   Graph_Graph425->SetMaximum(466.8028);
   Graph_Graph425->SetDirectory(nullptr);
   Graph_Graph425->SetStats(0);
   Graph_Graph425->SetLineWidth(2);
   Graph_Graph425->SetMarkerStyle(20);
   Graph_Graph425->SetMarkerSize(0.9);
   Graph_Graph425->GetXaxis()->SetLabelFont(42);
   Graph_Graph425->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph425->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph425->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph425->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph425->GetXaxis()->SetTitleFont(42);
   Graph_Graph425->GetYaxis()->SetLabelFont(42);
   Graph_Graph425->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph425->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph425->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph425->GetYaxis()->SetTickLength(0.02);
   Graph_Graph425->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph425->GetYaxis()->SetTitleFont(42);
   Graph_Graph425->GetZaxis()->SetLabelFont(42);
   Graph_Graph425->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph425->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph425->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph425->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph425->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph425);
   
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
   
   Double_t Graph_fx427[72] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180, 185, 190, 195, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450,
   475, 500, 600, 700, 800, 900, 1000 };
   Double_t Graph_fy427[72] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 5.288468e-303, 3.583076e-275, 8.473233e-259, 3.63526e-238, 1.177009e-225, 8.942298e-210, 6.91922e-200, 2.632038e-187, 3.358335e-68, 6.598656e-56, 3.854488e-47, 1.412646e-40, 1.766091e-35,
   2.079099e-31, 4.396263e-28, 2.567504e-25, 5.574932e-21, 2.995742e-19, 9.72678e-18, 2.086381e-16, 3.168897e-15, 3.533698e-14, 3.088572e-13, 1.298246e-11, 2.905902e-10, 4.006841e-09, 3.77631e-08, 2.625251e-07, 1.425389e-06,
   6.314534e-06, 2.361392e-05, 4.322481e-05, 7.657398e-05, 0.0001316172, 0.0002199971, 0.002016199, 0.01168626, 0.04859972, 0.1577168, 0.4232577, 0.9789682, 2.011414, 3.755139, 6.480867, 10.4793,
   16.04341, 23.45178, 75.90734, 169.905, 303.2713, 466.8028, 466.8028 };
   graph = new TGraph(72,Graph_fx427,Graph_fy427);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph427 = new TH1F("Graph_Graph427","",100,1.44,1099.84);
   Graph_Graph427->SetMinimum(0.5134831);
   Graph_Graph427->SetMaximum(513.4831);
   Graph_Graph427->SetDirectory(nullptr);
   Graph_Graph427->SetStats(0);
   Graph_Graph427->SetLineWidth(2);
   Graph_Graph427->SetMarkerStyle(20);
   Graph_Graph427->SetMarkerSize(0.9);
   Graph_Graph427->GetXaxis()->SetLabelFont(42);
   Graph_Graph427->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph427->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph427->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph427->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph427->GetXaxis()->SetTitleFont(42);
   Graph_Graph427->GetYaxis()->SetLabelFont(42);
   Graph_Graph427->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph427->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph427->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph427->GetYaxis()->SetTickLength(0.02);
   Graph_Graph427->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph427->GetYaxis()->SetTitleFont(42);
   Graph_Graph427->GetZaxis()->SetLabelFont(42);
   Graph_Graph427->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph427->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph427->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph427->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph427->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph427);
   
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
   line = new TLine(521.6923,0,521.6923,27.50662);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(521.6873,0,"  521.69 TeV");

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
   pt_LaTex = pt->AddText("#varepsilon = 5.92e-07");
   pt_LaTex = pt->AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
