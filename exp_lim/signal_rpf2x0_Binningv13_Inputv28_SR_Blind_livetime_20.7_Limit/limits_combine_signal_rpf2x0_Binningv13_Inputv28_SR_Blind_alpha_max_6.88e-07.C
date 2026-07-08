#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signal_rpf2x0_Binningv13_Inputv28_SR_Blind_alpha_max_6.88e-07()
{
//=========Macro generated from canvas: climits/climits
//=========  (Tue Jul  7 21:10:33 2026) by ROOT version 6.30/07
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
   
   Double_t Graph0_fx449[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy449[20] = { 102.3402, 8.363508, 7.354474, 5.768814, 5.291376, 5.044252, 4.905126, 6.727238, 9.269029, 12.08222, 14.78557, 27.12809, 27.88047, 27.04424, 27.56347, 27.30236, 26.1693,
   27.37479, 27.47854, 27.47854 };
   TGraph *graph = new TGraph(20,Graph0_fx449,Graph0_fy449);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0449 = new TH1F("Graph_Graph0449","",100,2.7,1099.7);
   Graph_Graph0449->SetMinimum(0.2);
   Graph_Graph0449->SetMaximum(100000);
   Graph_Graph0449->SetDirectory(nullptr);
   Graph_Graph0449->SetStats(0);
   Graph_Graph0449->SetLineWidth(2);
   Graph_Graph0449->SetMarkerStyle(20);
   Graph_Graph0449->SetMarkerSize(0.9);
   Graph_Graph0449->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0449->GetXaxis()->SetRange(0,91);
   Graph_Graph0449->GetXaxis()->SetLabelFont(42);
   Graph_Graph0449->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0449->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0449->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0449->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0449->GetXaxis()->SetTitleFont(42);
   Graph_Graph0449->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0449->GetYaxis()->SetLabelFont(42);
   Graph_Graph0449->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0449->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0449->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0449->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0449->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0449->GetYaxis()->SetTitleFont(42);
   Graph_Graph0449->GetZaxis()->SetLabelFont(42);
   Graph_Graph0449->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0449->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0449->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0449->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0449->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0449);
   
   graph->Draw("al");
   
   Double_t Graph1_fx450[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph1_fy450[42] = { 263.3536, 22.30594, 21.12988, 17.06116, 15.59377, 14.93766, 14.53641, 20.4565, 28.18569, 36.74017, 44.96066, 82.49234, 84.78023, 82.23738, 83.81629, 83.02227, 79.57681,
   83.24253, 83.55803, 83.55803, 83.55803, 7.100603, 7.100603, 7.100603, 7.073947, 6.804864, 7.054077, 7.123885, 7.003339, 7.189512, 7.023805, 4.175044, 3.473909,
   2.747375, 2.098302, 1.901159, 1.981428, 2.095599, 2.279342, 2.893423, 3.688819, 43.23465 };
   graph = new TGraph(42,Graph1_fx450,Graph1_fy450);
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
   
   TH1F *Graph_Graph1450 = new TH1F("Graph_Graph1450","Graph",100,2.7,1099.7);
   Graph_Graph1450->SetMinimum(1.711043);
   Graph_Graph1450->SetMaximum(289.4988);
   Graph_Graph1450->SetDirectory(nullptr);
   Graph_Graph1450->SetStats(0);
   Graph_Graph1450->SetLineWidth(2);
   Graph_Graph1450->SetMarkerStyle(20);
   Graph_Graph1450->SetMarkerSize(0.9);
   Graph_Graph1450->GetXaxis()->SetLabelFont(42);
   Graph_Graph1450->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1450->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1450->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1450->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1450->GetXaxis()->SetTitleFont(42);
   Graph_Graph1450->GetYaxis()->SetLabelFont(42);
   Graph_Graph1450->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1450->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1450->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1450->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1450->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1450->GetYaxis()->SetTitleFont(42);
   Graph_Graph1450->GetZaxis()->SetLabelFont(42);
   Graph_Graph1450->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1450->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1450->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1450->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1450->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1450);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx451[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph2_fy451[42] = { 167.9571, 13.70932, 12.9865, 10.4326, 9.578931, 9.239235, 9.0445, 13.54376, 18.70133, 24.41077, 29.87306, 54.81011, 56.33024, 54.64071, 55.68977, 55.1622, 52.87295,
   55.30855, 55.51818, 55.51818, 55.51818, 12.67709, 12.67709, 12.67709, 12.63184, 12.1099, 12.60131, 12.7142, 12.48837, 12.85225, 12.52694, 7.165181, 5.942446,
   4.645264, 3.478678, 2.897317, 2.99809, 3.15936, 3.443171, 4.365156, 5.318804, 63.9916 };
   graph = new TGraph(42,Graph2_fx451,Graph2_fy451);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2451 = new TH1F("Graph_Graph2451","Graph",100,2.7,1099.7);
   Graph_Graph2451->SetMinimum(2.607585);
   Graph_Graph2451->SetMaximum(184.4631);
   Graph_Graph2451->SetDirectory(nullptr);
   Graph_Graph2451->SetStats(0);
   Graph_Graph2451->SetLineWidth(2);
   Graph_Graph2451->SetMarkerStyle(20);
   Graph_Graph2451->SetMarkerSize(0.9);
   Graph_Graph2451->GetXaxis()->SetLabelFont(42);
   Graph_Graph2451->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2451->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2451->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2451->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2451->GetXaxis()->SetTitleFont(42);
   Graph_Graph2451->GetYaxis()->SetLabelFont(42);
   Graph_Graph2451->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2451->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2451->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2451->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2451->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2451->GetYaxis()->SetTitleFont(42);
   Graph_Graph2451->GetZaxis()->SetLabelFont(42);
   Graph_Graph2451->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2451->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2451->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2451->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2451->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2451);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx452[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy452[20] = { 102.3402, 8.363508, 7.354474, 5.768814, 5.291376, 5.044252, 4.905126, 6.727238, 9.269029, 12.08222, 14.78557, 27.12809, 27.88047, 27.04424, 27.56347, 27.30236, 26.1693,
   27.37479, 27.47854, 27.47854 };
   graph = new TGraph(20,Graph0_fx452,Graph0_fy452);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0452 = new TH1F("Graph_Graph0452","",100,2.7,1099.7);
   Graph_Graph0452->SetMinimum(0.2);
   Graph_Graph0452->SetMaximum(100000);
   Graph_Graph0452->SetDirectory(nullptr);
   Graph_Graph0452->SetStats(0);
   Graph_Graph0452->SetLineWidth(2);
   Graph_Graph0452->SetMarkerStyle(20);
   Graph_Graph0452->SetMarkerSize(0.9);
   Graph_Graph0452->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0452->GetXaxis()->SetRange(0,91);
   Graph_Graph0452->GetXaxis()->SetLabelFont(42);
   Graph_Graph0452->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0452->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0452->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0452->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0452->GetXaxis()->SetTitleFont(42);
   Graph_Graph0452->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0452->GetYaxis()->SetLabelFont(42);
   Graph_Graph0452->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0452->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0452->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0452->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0452->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0452->GetYaxis()->SetTitleFont(42);
   Graph_Graph0452->GetZaxis()->SetLabelFont(42);
   Graph_Graph0452->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0452->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0452->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0452->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0452->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0452);
   
   graph->Draw("l");
   
   Double_t Graph_fx453[72] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180, 185, 190, 195, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450,
   475, 500, 600, 700, 800, 900, 1000 };
   Double_t Graph_fy453[72] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 5.608671e-307, 2.081939e-285, 3.787078e-272, 4.881926e-255, 4.492265e-94, 1.970989e-77, 1.470767e-65, 1.151787e-56, 9.340893e-50,
   3.096565e-44, 1.004961e-39, 5.71427e-36, 4.434696e-30, 9.963195e-28, 1.131031e-25, 7.320755e-24, 2.967783e-22, 7.965904e-21, 1.534959e-19, 2.527707e-17, 1.765397e-15, 6.375674e-14, 1.371565e-12, 1.949641e-11, 1.979351e-10,
   1.523208e-09, 9.306086e-09, 2.134421e-08, 4.681887e-08, 9.855677e-08, 1.997209e-07, 4.216454e-06, 4.764481e-05, 0.0003421259, 0.001750278, 0.00690397, 0.0222143, 0.06076024, 0.1457023, 0.3136208, 0.6171294,
   1.126256, 1.928337, 10.29758, 32.9591, 76.92873, 145.8789, 145.8789 };
   graph = new TGraph(72,Graph_fx453,Graph_fy453);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph453 = new TH1F("Graph_Graph453","",100,1.44,1099.84);
   Graph_Graph453->SetMinimum(0.1604668);
   Graph_Graph453->SetMaximum(160.4668);
   Graph_Graph453->SetDirectory(nullptr);
   Graph_Graph453->SetStats(0);
   Graph_Graph453->SetLineWidth(2);
   Graph_Graph453->SetMarkerStyle(20);
   Graph_Graph453->SetMarkerSize(0.9);
   Graph_Graph453->GetXaxis()->SetLabelFont(42);
   Graph_Graph453->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph453->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph453->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph453->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph453->GetXaxis()->SetTitleFont(42);
   Graph_Graph453->GetYaxis()->SetLabelFont(42);
   Graph_Graph453->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph453->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph453->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph453->GetYaxis()->SetTickLength(0.02);
   Graph_Graph453->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph453->GetYaxis()->SetTitleFont(42);
   Graph_Graph453->GetZaxis()->SetLabelFont(42);
   Graph_Graph453->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph453->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph453->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph453->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph453->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph453);
   
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
   
   Double_t Graph_fx455[72] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180, 185, 190, 195, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450,
   475, 500, 600, 700, 800, 900, 1000 };
   Double_t Graph_fy455[72] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 6.169538e-307, 2.290133e-285, 4.165786e-272, 5.370119e-255, 4.941492e-94, 2.168088e-77, 1.617844e-65, 1.266966e-56, 1.027498e-49,
   3.406222e-44, 1.105457e-39, 6.285697e-36, 4.878166e-30, 1.095951e-27, 1.244134e-25, 8.052831e-24, 3.264561e-22, 8.762494e-21, 1.688455e-19, 2.780478e-17, 1.941937e-15, 7.013241e-14, 1.508722e-12, 2.144605e-11, 2.177286e-10,
   1.675529e-09, 1.023669e-08, 2.347863e-08, 5.150076e-08, 1.084124e-07, 2.19693e-07, 4.638099e-06, 5.240929e-05, 0.0003763385, 0.001925306, 0.007594367, 0.02443573, 0.06683626, 0.1602725, 0.3449829, 0.6788423,
   1.238882, 2.121171, 11.32734, 36.25501, 84.6216, 160.4668, 160.4668 };
   graph = new TGraph(72,Graph_fx455,Graph_fy455);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph455 = new TH1F("Graph_Graph455","",100,1.44,1099.84);
   Graph_Graph455->SetMinimum(0.1765135);
   Graph_Graph455->SetMaximum(176.5135);
   Graph_Graph455->SetDirectory(nullptr);
   Graph_Graph455->SetStats(0);
   Graph_Graph455->SetLineWidth(2);
   Graph_Graph455->SetMarkerStyle(20);
   Graph_Graph455->SetMarkerSize(0.9);
   Graph_Graph455->GetXaxis()->SetLabelFont(42);
   Graph_Graph455->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph455->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph455->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph455->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph455->GetXaxis()->SetTitleFont(42);
   Graph_Graph455->GetYaxis()->SetLabelFont(42);
   Graph_Graph455->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph455->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph455->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph455->GetYaxis()->SetTickLength(0.02);
   Graph_Graph455->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph455->GetYaxis()->SetTitleFont(42);
   Graph_Graph455->GetZaxis()->SetLabelFont(42);
   Graph_Graph455->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph455->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph455->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph455->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph455->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph455);
   
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
   line = new TLine(680.8682,0,680.8682,26.38237);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(680.8632,0,"  680.87 TeV");

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
   pt_LaTex = pt->AddText("#varepsilon = 6.88e-07");
   pt_LaTex = pt->AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
