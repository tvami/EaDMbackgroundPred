#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signal_rpf2x0_Binningv13_Inputv28_SR_Blind_alpha_max_1.5e-08()
{
//=========Macro generated from canvas: climits/climits
//=========  (Tue Jul  7 21:09:33 2026) by ROOT version 6.30/07
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
   
   Double_t Graph0_fx78[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy78[20] = { 102.3402, 8.363508, 7.354474, 5.768814, 5.291376, 5.044252, 4.905126, 6.727238, 9.269029, 12.08222, 14.78557, 27.12809, 27.88047, 27.04424, 27.56347, 27.30236, 26.1693,
   27.37479, 27.47854, 27.47854 };
   TGraph *graph = new TGraph(20,Graph0_fx78,Graph0_fy78);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph078 = new TH1F("Graph_Graph078","",100,2.7,1099.7);
   Graph_Graph078->SetMinimum(0.2);
   Graph_Graph078->SetMaximum(100000);
   Graph_Graph078->SetDirectory(nullptr);
   Graph_Graph078->SetStats(0);
   Graph_Graph078->SetLineWidth(2);
   Graph_Graph078->SetMarkerStyle(20);
   Graph_Graph078->SetMarkerSize(0.9);
   Graph_Graph078->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph078->GetXaxis()->SetRange(0,91);
   Graph_Graph078->GetXaxis()->SetLabelFont(42);
   Graph_Graph078->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph078->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph078->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph078->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph078->GetXaxis()->SetTitleFont(42);
   Graph_Graph078->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph078->GetYaxis()->SetLabelFont(42);
   Graph_Graph078->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph078->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph078->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph078->GetYaxis()->SetTickLength(0.02);
   Graph_Graph078->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph078->GetYaxis()->SetTitleFont(42);
   Graph_Graph078->GetZaxis()->SetLabelFont(42);
   Graph_Graph078->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph078->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph078->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph078->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph078->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph078);
   
   graph->Draw("al");
   
   Double_t Graph1_fx79[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph1_fy79[42] = { 263.3536, 22.30594, 21.12988, 17.06116, 15.59377, 14.93766, 14.53641, 20.4565, 28.18569, 36.74017, 44.96066, 82.49234, 84.78023, 82.23738, 83.81629, 83.02227, 79.57681,
   83.24253, 83.55803, 83.55803, 83.55803, 7.100603, 7.100603, 7.100603, 7.073947, 6.804864, 7.054077, 7.123885, 7.003339, 7.189512, 7.023805, 4.175044, 3.473909,
   2.747375, 2.098302, 1.901159, 1.981428, 2.095599, 2.279342, 2.893423, 3.688819, 43.23465 };
   graph = new TGraph(42,Graph1_fx79,Graph1_fy79);
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
   
   TH1F *Graph_Graph179 = new TH1F("Graph_Graph179","Graph",100,2.7,1099.7);
   Graph_Graph179->SetMinimum(1.711043);
   Graph_Graph179->SetMaximum(289.4988);
   Graph_Graph179->SetDirectory(nullptr);
   Graph_Graph179->SetStats(0);
   Graph_Graph179->SetLineWidth(2);
   Graph_Graph179->SetMarkerStyle(20);
   Graph_Graph179->SetMarkerSize(0.9);
   Graph_Graph179->GetXaxis()->SetLabelFont(42);
   Graph_Graph179->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph179->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph179->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph179->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph179->GetXaxis()->SetTitleFont(42);
   Graph_Graph179->GetYaxis()->SetLabelFont(42);
   Graph_Graph179->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph179->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph179->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph179->GetYaxis()->SetTickLength(0.02);
   Graph_Graph179->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph179->GetYaxis()->SetTitleFont(42);
   Graph_Graph179->GetZaxis()->SetLabelFont(42);
   Graph_Graph179->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph179->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph179->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph179->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph179->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph179);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx80[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph2_fy80[42] = { 167.9571, 13.70932, 12.9865, 10.4326, 9.578931, 9.239235, 9.0445, 13.54376, 18.70133, 24.41077, 29.87306, 54.81011, 56.33024, 54.64071, 55.68977, 55.1622, 52.87295,
   55.30855, 55.51818, 55.51818, 55.51818, 12.67709, 12.67709, 12.67709, 12.63184, 12.1099, 12.60131, 12.7142, 12.48837, 12.85225, 12.52694, 7.165181, 5.942446,
   4.645264, 3.478678, 2.897317, 2.99809, 3.15936, 3.443171, 4.365156, 5.318804, 63.9916 };
   graph = new TGraph(42,Graph2_fx80,Graph2_fy80);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph280 = new TH1F("Graph_Graph280","Graph",100,2.7,1099.7);
   Graph_Graph280->SetMinimum(2.607585);
   Graph_Graph280->SetMaximum(184.4631);
   Graph_Graph280->SetDirectory(nullptr);
   Graph_Graph280->SetStats(0);
   Graph_Graph280->SetLineWidth(2);
   Graph_Graph280->SetMarkerStyle(20);
   Graph_Graph280->SetMarkerSize(0.9);
   Graph_Graph280->GetXaxis()->SetLabelFont(42);
   Graph_Graph280->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph280->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph280->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph280->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph280->GetXaxis()->SetTitleFont(42);
   Graph_Graph280->GetYaxis()->SetLabelFont(42);
   Graph_Graph280->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph280->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph280->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph280->GetYaxis()->SetTickLength(0.02);
   Graph_Graph280->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph280->GetYaxis()->SetTitleFont(42);
   Graph_Graph280->GetZaxis()->SetLabelFont(42);
   Graph_Graph280->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph280->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph280->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph280->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph280->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph280);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx81[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy81[20] = { 102.3402, 8.363508, 7.354474, 5.768814, 5.291376, 5.044252, 4.905126, 6.727238, 9.269029, 12.08222, 14.78557, 27.12809, 27.88047, 27.04424, 27.56347, 27.30236, 26.1693,
   27.37479, 27.47854, 27.47854 };
   graph = new TGraph(20,Graph0_fx81,Graph0_fy81);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph081 = new TH1F("Graph_Graph081","",100,2.7,1099.7);
   Graph_Graph081->SetMinimum(0.2);
   Graph_Graph081->SetMaximum(100000);
   Graph_Graph081->SetDirectory(nullptr);
   Graph_Graph081->SetStats(0);
   Graph_Graph081->SetLineWidth(2);
   Graph_Graph081->SetMarkerStyle(20);
   Graph_Graph081->SetMarkerSize(0.9);
   Graph_Graph081->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph081->GetXaxis()->SetRange(0,91);
   Graph_Graph081->GetXaxis()->SetLabelFont(42);
   Graph_Graph081->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph081->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph081->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph081->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph081->GetXaxis()->SetTitleFont(42);
   Graph_Graph081->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph081->GetYaxis()->SetLabelFont(42);
   Graph_Graph081->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph081->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph081->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph081->GetYaxis()->SetTickLength(0.02);
   Graph_Graph081->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph081->GetYaxis()->SetTitleFont(42);
   Graph_Graph081->GetZaxis()->SetLabelFont(42);
   Graph_Graph081->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph081->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph081->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph081->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph081->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph081);
   
   graph->Draw("l");
   
   Double_t Graph_fx82[72] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180, 185, 190, 195, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450,
   475, 500, 600, 700, 800, 900, 1000 };
   Double_t Graph_fy82[72] = { 27.16048, 27.89953, 28.0685, 27.85341, 26.75646, 26.0292, 25.24726, 24.44042, 23.62889, 22.82627, 22.04151, 21.28035, 20.54624, 19.84109, 19.1657, 18.52011, 17.90386,
   16.75602, 16.22226, 15.71369, 15.22907, 14.11675, 13.12323, 12.2413, 11.44857, 10.73963, 10.09792, 9.519719, 2.967624, 2.345897, 1.918404, 1.609151, 1.376615,
   1.196365, 1.053172, 0.9370935, 0.761326, 0.6935205, 0.6354695, 0.5852962, 0.5415663, 0.4939172, 0.4535192, 0.3889633, 0.3398287, 0.30124, 0.2701322, 0.244507, 0.2230176,
   0.2047271, 0.1889657, 0.1818743, 0.1752413, 0.1690239, 0.1631845, 0.1386252, 0.1198456, 0.1050669, 0.09317109, 0.08341814, 0.07529801, 0.06844805, 0.06260368, 0.0575676, 0.05318993,
   0.04935491, 0.04597184, 0.03571315, 0.02884407, 0.02396961, 0.02035752, 0.02035752 };
   graph = new TGraph(72,Graph_fx82,Graph_fy82);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph82 = new TH1F("Graph_Graph82","",100,1.44,1099.84);
   Graph_Graph82->SetMinimum(0.01832177);
   Graph_Graph82->SetMaximum(30.87331);
   Graph_Graph82->SetDirectory(nullptr);
   Graph_Graph82->SetStats(0);
   Graph_Graph82->SetLineWidth(2);
   Graph_Graph82->SetMarkerStyle(20);
   Graph_Graph82->SetMarkerSize(0.9);
   Graph_Graph82->GetXaxis()->SetLabelFont(42);
   Graph_Graph82->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph82->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph82->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph82->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph82->GetXaxis()->SetTitleFont(42);
   Graph_Graph82->GetYaxis()->SetLabelFont(42);
   Graph_Graph82->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph82->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph82->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph82->GetYaxis()->SetTickLength(0.02);
   Graph_Graph82->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph82->GetYaxis()->SetTitleFont(42);
   Graph_Graph82->GetZaxis()->SetLabelFont(42);
   Graph_Graph82->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph82->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph82->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph82->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph82->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph82);
   
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
   
   Double_t Graph_fx84[72] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180, 185, 190, 195, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450,
   475, 500, 600, 700, 800, 900, 1000 };
   Double_t Graph_fy84[72] = { 29.87653, 30.68948, 30.87535, 30.63875, 29.43211, 28.63212, 27.77199, 26.88446, 25.99178, 25.1089, 24.24566, 23.40838, 22.60086, 21.8252, 21.08227, 20.37212, 19.69425,
   18.43162, 17.84449, 17.28506, 16.75198, 15.52843, 14.43555, 13.46543, 12.59343, 11.81359, 11.10771, 10.47169, 3.264386, 2.580487, 2.110244, 1.770066, 1.514277,
   1.316002, 1.158489, 1.030803, 0.8374586, 0.7628726, 0.6990165, 0.6438258, 0.5957229, 0.5433089, 0.4988711, 0.4278596, 0.3738116, 0.331364, 0.2971454, 0.2689577, 0.2453194,
   0.2251998, 0.2078623, 0.2000617, 0.1927654, 0.1859263, 0.179503, 0.1524877, 0.1318302, 0.1155736, 0.1024882, 0.09175995, 0.08282781, 0.07529286, 0.06886405, 0.06332436, 0.05850892,
   0.0542904, 0.05056902, 0.03928447, 0.03172848, 0.02636657, 0.02239327, 0.02239327 };
   graph = new TGraph(72,Graph_fx84,Graph_fy84);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph84 = new TH1F("Graph_Graph84","",100,1.44,1099.84);
   Graph_Graph84->SetMinimum(0.02015394);
   Graph_Graph84->SetMaximum(33.96065);
   Graph_Graph84->SetDirectory(nullptr);
   Graph_Graph84->SetStats(0);
   Graph_Graph84->SetLineWidth(2);
   Graph_Graph84->SetMarkerStyle(20);
   Graph_Graph84->SetMarkerSize(0.9);
   Graph_Graph84->GetXaxis()->SetLabelFont(42);
   Graph_Graph84->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph84->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph84->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph84->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph84->GetXaxis()->SetTitleFont(42);
   Graph_Graph84->GetYaxis()->SetLabelFont(42);
   Graph_Graph84->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph84->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph84->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph84->GetYaxis()->SetTickLength(0.02);
   Graph_Graph84->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph84->GetYaxis()->SetTitleFont(42);
   Graph_Graph84->GetZaxis()->SetLabelFont(42);
   Graph_Graph84->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph84->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph84->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph84->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph84->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph84);
   
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
   line = new TLine(3.597595,0,3.597595,22.91222);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(3.592595,0,"  3.60 TeV");

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
   pt_LaTex = pt->AddText("#varepsilon = 1.5e-08");
   pt_LaTex = pt->AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
