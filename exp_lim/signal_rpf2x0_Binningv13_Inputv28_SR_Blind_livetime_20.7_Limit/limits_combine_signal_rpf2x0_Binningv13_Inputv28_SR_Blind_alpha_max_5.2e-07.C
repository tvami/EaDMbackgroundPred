#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signal_rpf2x0_Binningv13_Inputv28_SR_Blind_alpha_max_5.2e-07()
{
//=========Macro generated from canvas: climits/climits
//=========  (Tue Jul  7 21:10:25 2026) by ROOT version 6.30/07
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
   
   Double_t Graph0_fx400[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy400[20] = { 102.3402, 8.363508, 7.354474, 5.768814, 5.291376, 5.044252, 4.905126, 6.727238, 9.269029, 12.08222, 14.78557, 27.12809, 27.88047, 27.04424, 27.56347, 27.30236, 26.1693,
   27.37479, 27.47854, 27.47854 };
   TGraph *graph = new TGraph(20,Graph0_fx400,Graph0_fy400);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0400 = new TH1F("Graph_Graph0400","",100,2.7,1099.7);
   Graph_Graph0400->SetMinimum(0.2);
   Graph_Graph0400->SetMaximum(100000);
   Graph_Graph0400->SetDirectory(nullptr);
   Graph_Graph0400->SetStats(0);
   Graph_Graph0400->SetLineWidth(2);
   Graph_Graph0400->SetMarkerStyle(20);
   Graph_Graph0400->SetMarkerSize(0.9);
   Graph_Graph0400->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0400->GetXaxis()->SetRange(0,91);
   Graph_Graph0400->GetXaxis()->SetLabelFont(42);
   Graph_Graph0400->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0400->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0400->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0400->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0400->GetXaxis()->SetTitleFont(42);
   Graph_Graph0400->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0400->GetYaxis()->SetLabelFont(42);
   Graph_Graph0400->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0400->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0400->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0400->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0400->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0400->GetYaxis()->SetTitleFont(42);
   Graph_Graph0400->GetZaxis()->SetLabelFont(42);
   Graph_Graph0400->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0400->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0400->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0400->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0400->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0400);
   
   graph->Draw("al");
   
   Double_t Graph1_fx401[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph1_fy401[42] = { 263.3536, 22.30594, 21.12988, 17.06116, 15.59377, 14.93766, 14.53641, 20.4565, 28.18569, 36.74017, 44.96066, 82.49234, 84.78023, 82.23738, 83.81629, 83.02227, 79.57681,
   83.24253, 83.55803, 83.55803, 83.55803, 7.100603, 7.100603, 7.100603, 7.073947, 6.804864, 7.054077, 7.123885, 7.003339, 7.189512, 7.023805, 4.175044, 3.473909,
   2.747375, 2.098302, 1.901159, 1.981428, 2.095599, 2.279342, 2.893423, 3.688819, 43.23465 };
   graph = new TGraph(42,Graph1_fx401,Graph1_fy401);
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
   
   TH1F *Graph_Graph1401 = new TH1F("Graph_Graph1401","Graph",100,2.7,1099.7);
   Graph_Graph1401->SetMinimum(1.711043);
   Graph_Graph1401->SetMaximum(289.4988);
   Graph_Graph1401->SetDirectory(nullptr);
   Graph_Graph1401->SetStats(0);
   Graph_Graph1401->SetLineWidth(2);
   Graph_Graph1401->SetMarkerStyle(20);
   Graph_Graph1401->SetMarkerSize(0.9);
   Graph_Graph1401->GetXaxis()->SetLabelFont(42);
   Graph_Graph1401->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1401->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1401->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1401->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1401->GetXaxis()->SetTitleFont(42);
   Graph_Graph1401->GetYaxis()->SetLabelFont(42);
   Graph_Graph1401->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1401->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1401->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1401->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1401->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1401->GetYaxis()->SetTitleFont(42);
   Graph_Graph1401->GetZaxis()->SetLabelFont(42);
   Graph_Graph1401->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1401->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1401->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1401->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1401->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1401);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx402[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph2_fy402[42] = { 167.9571, 13.70932, 12.9865, 10.4326, 9.578931, 9.239235, 9.0445, 13.54376, 18.70133, 24.41077, 29.87306, 54.81011, 56.33024, 54.64071, 55.68977, 55.1622, 52.87295,
   55.30855, 55.51818, 55.51818, 55.51818, 12.67709, 12.67709, 12.67709, 12.63184, 12.1099, 12.60131, 12.7142, 12.48837, 12.85225, 12.52694, 7.165181, 5.942446,
   4.645264, 3.478678, 2.897317, 2.99809, 3.15936, 3.443171, 4.365156, 5.318804, 63.9916 };
   graph = new TGraph(42,Graph2_fx402,Graph2_fy402);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2402 = new TH1F("Graph_Graph2402","Graph",100,2.7,1099.7);
   Graph_Graph2402->SetMinimum(2.607585);
   Graph_Graph2402->SetMaximum(184.4631);
   Graph_Graph2402->SetDirectory(nullptr);
   Graph_Graph2402->SetStats(0);
   Graph_Graph2402->SetLineWidth(2);
   Graph_Graph2402->SetMarkerStyle(20);
   Graph_Graph2402->SetMarkerSize(0.9);
   Graph_Graph2402->GetXaxis()->SetLabelFont(42);
   Graph_Graph2402->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2402->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2402->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2402->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2402->GetXaxis()->SetTitleFont(42);
   Graph_Graph2402->GetYaxis()->SetLabelFont(42);
   Graph_Graph2402->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2402->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2402->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2402->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2402->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2402->GetYaxis()->SetTitleFont(42);
   Graph_Graph2402->GetZaxis()->SetLabelFont(42);
   Graph_Graph2402->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2402->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2402->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2402->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2402->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2402);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx403[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy403[20] = { 102.3402, 8.363508, 7.354474, 5.768814, 5.291376, 5.044252, 4.905126, 6.727238, 9.269029, 12.08222, 14.78557, 27.12809, 27.88047, 27.04424, 27.56347, 27.30236, 26.1693,
   27.37479, 27.47854, 27.47854 };
   graph = new TGraph(20,Graph0_fx403,Graph0_fy403);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0403 = new TH1F("Graph_Graph0403","",100,2.7,1099.7);
   Graph_Graph0403->SetMinimum(0.2);
   Graph_Graph0403->SetMaximum(100000);
   Graph_Graph0403->SetDirectory(nullptr);
   Graph_Graph0403->SetStats(0);
   Graph_Graph0403->SetLineWidth(2);
   Graph_Graph0403->SetMarkerStyle(20);
   Graph_Graph0403->SetMarkerSize(0.9);
   Graph_Graph0403->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0403->GetXaxis()->SetRange(0,91);
   Graph_Graph0403->GetXaxis()->SetLabelFont(42);
   Graph_Graph0403->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0403->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0403->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0403->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0403->GetXaxis()->SetTitleFont(42);
   Graph_Graph0403->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0403->GetYaxis()->SetLabelFont(42);
   Graph_Graph0403->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0403->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0403->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0403->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0403->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0403->GetYaxis()->SetTitleFont(42);
   Graph_Graph0403->GetZaxis()->SetLabelFont(42);
   Graph_Graph0403->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0403->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0403->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0403->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0403->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0403);
   
   graph->Draw("l");
   
   Double_t Graph_fx404[72] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180, 185, 190, 195, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450,
   475, 500, 600, 700, 800, 900, 1000 };
   Double_t Graph_fy404[72] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4.391128e-305, 4.162322e-292, 3.605364e-280,
   5.980345e-259, 1.772673e-249, 1.16561e-240, 1.976619e-232, 4.863222e-211, 2.40303e-198, 1.658132e-182, 8.581734e-173, 1.281108e-160, 6.303536e-153, 2.681917e-143, 1.823463e-51, 5.256006e-42, 2.905271e-35, 3.230488e-30, 2.664354e-26,
   3.563936e-23, 1.271586e-20, 1.685696e-18, 3.56055e-15, 7.533309e-14, 1.082066e-12, 1.130191e-11, 9.05451e-11, 5.696751e-10, 2.974763e-09, 5.136361e-08, 5.477496e-07, 4.03315e-06, 2.220105e-05, 9.684531e-05, 0.0003497378,
   0.001081154, 0.002936389, 0.004640442, 0.007152323, 0.01077255, 0.01588296, 0.08451164, 0.317069, 0.9237478, 2.228429, 4.653097, 8.679432, 14.80011, 23.47201, 35.07938, 49.91036,
   68.1465, 89.8632, 209.8994, 372.1642, 557.7766, 749.4275, 749.4275 };
   graph = new TGraph(72,Graph_fx404,Graph_fy404);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph404 = new TH1F("Graph_Graph404","",100,1.44,1099.84);
   Graph_Graph404->SetMinimum(0.8243703);
   Graph_Graph404->SetMaximum(824.3703);
   Graph_Graph404->SetDirectory(nullptr);
   Graph_Graph404->SetStats(0);
   Graph_Graph404->SetLineWidth(2);
   Graph_Graph404->SetMarkerStyle(20);
   Graph_Graph404->SetMarkerSize(0.9);
   Graph_Graph404->GetXaxis()->SetLabelFont(42);
   Graph_Graph404->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph404->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph404->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph404->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph404->GetXaxis()->SetTitleFont(42);
   Graph_Graph404->GetYaxis()->SetLabelFont(42);
   Graph_Graph404->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph404->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph404->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph404->GetYaxis()->SetTickLength(0.02);
   Graph_Graph404->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph404->GetYaxis()->SetTitleFont(42);
   Graph_Graph404->GetZaxis()->SetLabelFont(42);
   Graph_Graph404->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph404->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph404->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph404->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph404->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph404);
   
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
   
   Double_t Graph_fx406[72] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180, 185, 190, 195, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450,
   475, 500, 600, 700, 800, 900, 1000 };
   Double_t Graph_fy406[72] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4.830241e-305, 4.578554e-292, 3.9659e-280,
   6.57838e-259, 1.94994e-249, 1.282171e-240, 2.174281e-232, 5.349544e-211, 2.643333e-198, 1.823945e-182, 9.439907e-173, 1.409219e-160, 6.93389e-153, 2.950109e-143, 2.005809e-51, 5.781607e-42, 3.195798e-35, 3.553537e-30, 2.930789e-26,
   3.92033e-23, 1.398745e-20, 1.854266e-18, 3.916605e-15, 8.28664e-14, 1.190273e-12, 1.24321e-11, 9.959961e-11, 6.266426e-10, 3.272239e-09, 5.649997e-08, 6.025246e-07, 4.436465e-06, 2.442116e-05, 0.0001065298, 0.0003847116,
   0.001189269, 0.003230028, 0.005104486, 0.007867555, 0.01184981, 0.01747126, 0.0929628, 0.3487759, 1.016123, 2.451272, 5.118407, 9.547375, 16.28012, 25.81921, 38.58732, 54.9014,
   74.96115, 98.84952, 230.8893, 409.3806, 613.5543, 824.3703, 824.3703 };
   graph = new TGraph(72,Graph_fx406,Graph_fy406);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph406 = new TH1F("Graph_Graph406","",100,1.44,1099.84);
   Graph_Graph406->SetMinimum(0.9068073);
   Graph_Graph406->SetMaximum(906.8073);
   Graph_Graph406->SetDirectory(nullptr);
   Graph_Graph406->SetStats(0);
   Graph_Graph406->SetLineWidth(2);
   Graph_Graph406->SetMarkerStyle(20);
   Graph_Graph406->SetMarkerSize(0.9);
   Graph_Graph406->GetXaxis()->SetLabelFont(42);
   Graph_Graph406->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph406->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph406->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph406->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph406->GetXaxis()->SetTitleFont(42);
   Graph_Graph406->GetYaxis()->SetLabelFont(42);
   Graph_Graph406->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph406->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph406->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph406->GetYaxis()->SetTickLength(0.02);
   Graph_Graph406->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph406->GetYaxis()->SetTitleFont(42);
   Graph_Graph406->GetZaxis()->SetLabelFont(42);
   Graph_Graph406->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph406->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph406->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph406->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph406->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph406);
   
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
   line = new TLine(408.9199,0,408.9199,27.09016);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(408.9149,0,"  408.92 TeV");

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
   pt_LaTex = pt->AddText("#varepsilon = 5.2e-07");
   pt_LaTex = pt->AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
