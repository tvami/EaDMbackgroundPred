#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signal_rpf2x0_Binningv13_Inputv28_SR_Blind_alpha_max_1.84e-07()
{
//=========Macro generated from canvas: climits/climits
//=========  (Tue Jul  7 21:10:02 2026) by ROOT version 6.30/07
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
   
   Double_t Graph0_fx253[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy253[20] = { 102.3402, 8.363508, 7.354474, 5.768814, 5.291376, 5.044252, 4.905126, 6.727238, 9.269029, 12.08222, 14.78557, 27.12809, 27.88047, 27.04424, 27.56347, 27.30236, 26.1693,
   27.37479, 27.47854, 27.47854 };
   TGraph *graph = new TGraph(20,Graph0_fx253,Graph0_fy253);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0253 = new TH1F("Graph_Graph0253","",100,2.7,1099.7);
   Graph_Graph0253->SetMinimum(0.2);
   Graph_Graph0253->SetMaximum(100000);
   Graph_Graph0253->SetDirectory(nullptr);
   Graph_Graph0253->SetStats(0);
   Graph_Graph0253->SetLineWidth(2);
   Graph_Graph0253->SetMarkerStyle(20);
   Graph_Graph0253->SetMarkerSize(0.9);
   Graph_Graph0253->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0253->GetXaxis()->SetRange(0,91);
   Graph_Graph0253->GetXaxis()->SetLabelFont(42);
   Graph_Graph0253->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0253->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0253->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0253->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0253->GetXaxis()->SetTitleFont(42);
   Graph_Graph0253->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0253->GetYaxis()->SetLabelFont(42);
   Graph_Graph0253->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0253->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0253->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0253->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0253->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0253->GetYaxis()->SetTitleFont(42);
   Graph_Graph0253->GetZaxis()->SetLabelFont(42);
   Graph_Graph0253->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0253->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0253->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0253->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0253->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0253);
   
   graph->Draw("al");
   
   Double_t Graph1_fx254[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph1_fy254[42] = { 263.3536, 22.30594, 21.12988, 17.06116, 15.59377, 14.93766, 14.53641, 20.4565, 28.18569, 36.74017, 44.96066, 82.49234, 84.78023, 82.23738, 83.81629, 83.02227, 79.57681,
   83.24253, 83.55803, 83.55803, 83.55803, 7.100603, 7.100603, 7.100603, 7.073947, 6.804864, 7.054077, 7.123885, 7.003339, 7.189512, 7.023805, 4.175044, 3.473909,
   2.747375, 2.098302, 1.901159, 1.981428, 2.095599, 2.279342, 2.893423, 3.688819, 43.23465 };
   graph = new TGraph(42,Graph1_fx254,Graph1_fy254);
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
   
   TH1F *Graph_Graph1254 = new TH1F("Graph_Graph1254","Graph",100,2.7,1099.7);
   Graph_Graph1254->SetMinimum(1.711043);
   Graph_Graph1254->SetMaximum(289.4988);
   Graph_Graph1254->SetDirectory(nullptr);
   Graph_Graph1254->SetStats(0);
   Graph_Graph1254->SetLineWidth(2);
   Graph_Graph1254->SetMarkerStyle(20);
   Graph_Graph1254->SetMarkerSize(0.9);
   Graph_Graph1254->GetXaxis()->SetLabelFont(42);
   Graph_Graph1254->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1254->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1254->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1254->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1254->GetXaxis()->SetTitleFont(42);
   Graph_Graph1254->GetYaxis()->SetLabelFont(42);
   Graph_Graph1254->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1254->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1254->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1254->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1254->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1254->GetYaxis()->SetTitleFont(42);
   Graph_Graph1254->GetZaxis()->SetLabelFont(42);
   Graph_Graph1254->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1254->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1254->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1254->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1254->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1254);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx255[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph2_fy255[42] = { 167.9571, 13.70932, 12.9865, 10.4326, 9.578931, 9.239235, 9.0445, 13.54376, 18.70133, 24.41077, 29.87306, 54.81011, 56.33024, 54.64071, 55.68977, 55.1622, 52.87295,
   55.30855, 55.51818, 55.51818, 55.51818, 12.67709, 12.67709, 12.67709, 12.63184, 12.1099, 12.60131, 12.7142, 12.48837, 12.85225, 12.52694, 7.165181, 5.942446,
   4.645264, 3.478678, 2.897317, 2.99809, 3.15936, 3.443171, 4.365156, 5.318804, 63.9916 };
   graph = new TGraph(42,Graph2_fx255,Graph2_fy255);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2255 = new TH1F("Graph_Graph2255","Graph",100,2.7,1099.7);
   Graph_Graph2255->SetMinimum(2.607585);
   Graph_Graph2255->SetMaximum(184.4631);
   Graph_Graph2255->SetDirectory(nullptr);
   Graph_Graph2255->SetStats(0);
   Graph_Graph2255->SetLineWidth(2);
   Graph_Graph2255->SetMarkerStyle(20);
   Graph_Graph2255->SetMarkerSize(0.9);
   Graph_Graph2255->GetXaxis()->SetLabelFont(42);
   Graph_Graph2255->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2255->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2255->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2255->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2255->GetXaxis()->SetTitleFont(42);
   Graph_Graph2255->GetYaxis()->SetLabelFont(42);
   Graph_Graph2255->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2255->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2255->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2255->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2255->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2255->GetYaxis()->SetTitleFont(42);
   Graph_Graph2255->GetZaxis()->SetLabelFont(42);
   Graph_Graph2255->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2255->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2255->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2255->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2255->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2255);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx256[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy256[20] = { 102.3402, 8.363508, 7.354474, 5.768814, 5.291376, 5.044252, 4.905126, 6.727238, 9.269029, 12.08222, 14.78557, 27.12809, 27.88047, 27.04424, 27.56347, 27.30236, 26.1693,
   27.37479, 27.47854, 27.47854 };
   graph = new TGraph(20,Graph0_fx256,Graph0_fy256);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0256 = new TH1F("Graph_Graph0256","",100,2.7,1099.7);
   Graph_Graph0256->SetMinimum(0.2);
   Graph_Graph0256->SetMaximum(100000);
   Graph_Graph0256->SetDirectory(nullptr);
   Graph_Graph0256->SetStats(0);
   Graph_Graph0256->SetLineWidth(2);
   Graph_Graph0256->SetMarkerStyle(20);
   Graph_Graph0256->SetMarkerSize(0.9);
   Graph_Graph0256->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0256->GetXaxis()->SetRange(0,91);
   Graph_Graph0256->GetXaxis()->SetLabelFont(42);
   Graph_Graph0256->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0256->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0256->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0256->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0256->GetXaxis()->SetTitleFont(42);
   Graph_Graph0256->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0256->GetYaxis()->SetLabelFont(42);
   Graph_Graph0256->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0256->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0256->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0256->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0256->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0256->GetYaxis()->SetTitleFont(42);
   Graph_Graph0256->GetZaxis()->SetLabelFont(42);
   Graph_Graph0256->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0256->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0256->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0256->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0256->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0256);
   
   graph->Draw("l");
   
   Double_t Graph_fx257[72] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180, 185, 190, 195, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450,
   475, 500, 600, 700, 800, 900, 1000 };
   Double_t Graph_fy257[72] = { 1.596708e-106, 4.104725e-94, 3.424729e-84, 4.432022e-76, 1.300934e-63, 1.016598e-58, 1.757047e-54, 8.916582e-51, 1.649921e-47, 1.317425e-44, 5.184683e-42, 1.118486e-39, 1.441533e-37, 1.190903e-35, 6.68398e-34, 2.675082e-32, 7.951494e-31,
   3.285985e-28, 4.82399e-27, 5.874068e-26, 6.045175e-25, 1.605585e-22, 9.28234e-21, 5.455238e-19, 1.248904e-17, 2.771038e-16, 3.324225e-15, 3.797636e-14, 0.004851028, 0.05942658, 0.3441821, 1.253364, 3.359147,
   7.278287, 13.52937, 22.44254, 48.52302, 65.38404, 84.38943, 105.159, 127.2955, 147.6465, 168.3184, 209.7736, 250.2406, 288.7069, 324.5025, 357.2323, 386.7131,
   412.918, 435.93, 446.2853, 455.9049, 464.8147, 473.0424, 504.9526, 524.0592, 533.5147, 535.8756, 533.1164, 526.725, 517.8078, 507.1816, 495.447, 483.044,
   470.2937, 457.4294, 407.5423, 363.0027, 324.6354, 291.9151, 291.9151 };
   graph = new TGraph(72,Graph_fx257,Graph_fy257);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph257 = new TH1F("Graph_Graph257","",100,1.44,1099.84);
   Graph_Graph257->SetMinimum(1.437037e-106);
   Graph_Graph257->SetMaximum(589.4632);
   Graph_Graph257->SetDirectory(nullptr);
   Graph_Graph257->SetStats(0);
   Graph_Graph257->SetLineWidth(2);
   Graph_Graph257->SetMarkerStyle(20);
   Graph_Graph257->SetMarkerSize(0.9);
   Graph_Graph257->GetXaxis()->SetLabelFont(42);
   Graph_Graph257->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph257->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph257->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph257->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph257->GetXaxis()->SetTitleFont(42);
   Graph_Graph257->GetYaxis()->SetLabelFont(42);
   Graph_Graph257->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph257->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph257->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph257->GetYaxis()->SetTickLength(0.02);
   Graph_Graph257->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph257->GetYaxis()->SetTitleFont(42);
   Graph_Graph257->GetZaxis()->SetLabelFont(42);
   Graph_Graph257->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph257->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph257->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph257->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph257->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph257);
   
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
   
   Double_t Graph_fx259[72] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180, 185, 190, 195, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450,
   475, 500, 600, 700, 800, 900, 1000 };
   Double_t Graph_fy259[72] = { 1.756379e-106, 4.515198e-94, 3.767202e-84, 4.875224e-76, 1.431027e-63, 1.118258e-58, 1.932752e-54, 9.80824e-51, 1.814913e-47, 1.449168e-44, 5.703151e-42, 1.230335e-39, 1.585686e-37, 1.309993e-35, 7.352378e-34, 2.94259e-32, 8.746643e-31,
   3.614584e-28, 5.306389e-27, 6.461475e-26, 6.649692e-25, 1.766143e-22, 1.021057e-20, 6.000762e-19, 1.373794e-17, 3.048142e-16, 3.656648e-15, 4.1774e-14, 0.005336131, 0.06536924, 0.3786003, 1.3787, 3.695062,
   8.006116, 14.88231, 24.68679, 53.37532, 71.92244, 92.82837, 115.6749, 140.0251, 162.4112, 185.1502, 230.751, 275.2647, 317.5776, 356.9528, 392.9555, 425.3844,
   454.2098, 479.523, 490.9138, 501.4954, 511.2962, 520.3466, 555.4479, 576.4651, 586.8662, 589.4632, 586.428, 579.3975, 569.5886, 557.8998, 544.9917, 531.3484,
   517.3231, 503.1723, 448.2965, 399.303, 357.0989, 321.1066, 321.1066 };
   graph = new TGraph(72,Graph_fx259,Graph_fy259);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph259 = new TH1F("Graph_Graph259","",100,1.44,1099.84);
   Graph_Graph259->SetMinimum(1.580741e-106);
   Graph_Graph259->SetMaximum(648.4095);
   Graph_Graph259->SetDirectory(nullptr);
   Graph_Graph259->SetStats(0);
   Graph_Graph259->SetLineWidth(2);
   Graph_Graph259->SetMarkerStyle(20);
   Graph_Graph259->SetMarkerSize(0.9);
   Graph_Graph259->GetXaxis()->SetLabelFont(42);
   Graph_Graph259->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph259->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph259->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph259->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph259->GetXaxis()->SetTitleFont(42);
   Graph_Graph259->GetYaxis()->SetLabelFont(42);
   Graph_Graph259->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph259->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph259->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph259->GetYaxis()->SetTickLength(0.02);
   Graph_Graph259->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph259->GetYaxis()->SetTitleFont(42);
   Graph_Graph259->GetZaxis()->SetLabelFont(42);
   Graph_Graph259->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph259->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph259->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph259->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph259->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph259);
   
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
   pt_LaTex = pt->AddText("#varepsilon = 1.84e-07");
   pt_LaTex = pt->AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
