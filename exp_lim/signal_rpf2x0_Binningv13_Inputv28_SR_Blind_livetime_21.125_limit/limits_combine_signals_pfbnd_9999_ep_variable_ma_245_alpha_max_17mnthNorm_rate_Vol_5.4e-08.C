#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_17mnthNorm_rate_Vol_5.4e-08()
{
//=========Macro generated from canvas: climits/climits
//=========  (Sat Jul  4 12:17:24 2026) by ROOT version 6.30/07
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
   
   Double_t Graph0_fx162[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy162[20] = { 87.81109, 7.17615, 6.310367, 4.949822, 4.540165, 4.328125, 4.208751, 5.772179, 7.953115, 10.36692, 12.68648, 23.27674, 23.92231, 23.2048, 23.65032, 23.42627, 22.45407,
   23.48842, 23.57745, 23.57745 };
   TGraph *graph = new TGraph(20,Graph0_fx162,Graph0_fy162);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0162 = new TH1F("Graph_Graph0162","",100,2.7,1099.7);
   Graph_Graph0162->SetMinimum(0.2);
   Graph_Graph0162->SetMaximum(100000);
   Graph_Graph0162->SetDirectory(nullptr);
   Graph_Graph0162->SetStats(0);
   Graph_Graph0162->SetLineWidth(2);
   Graph_Graph0162->SetMarkerStyle(20);
   Graph_Graph0162->SetMarkerSize(0.9);
   Graph_Graph0162->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0162->GetXaxis()->SetRange(0,91);
   Graph_Graph0162->GetXaxis()->SetLabelFont(42);
   Graph_Graph0162->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0162->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0162->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0162->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0162->GetXaxis()->SetTitleFont(42);
   Graph_Graph0162->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0162->GetYaxis()->SetLabelFont(42);
   Graph_Graph0162->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0162->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0162->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0162->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0162->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0162->GetYaxis()->SetTitleFont(42);
   Graph_Graph0162->GetZaxis()->SetLabelFont(42);
   Graph_Graph0162->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0162->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0162->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0162->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0162->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0162);
   
   graph->Draw("al");
   
   Double_t Graph1_fx163[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph1_fy163[42] = { 225.9655, 19.13919, 18.1301, 14.63901, 13.37994, 12.81698, 12.47269, 17.55231, 24.1842, 31.52421, 38.57764, 70.78099, 72.74408, 70.56223, 71.91698, 71.23569, 68.27937,
   71.42468, 71.69539, 71.69539, 71.69539, 6.092538, 6.092538, 6.092538, 6.069666, 5.838785, 6.052617, 6.112515, 6.009083, 6.168825, 6.026643, 3.582317, 2.980722,
   2.357333, 1.800408, 1.631254, 1.700126, 1.798089, 1.955746, 2.482647, 3.165121, 37.09668 };
   graph = new TGraph(42,Graph1_fx163,Graph1_fy163);
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
   
   TH1F *Graph_Graph1163 = new TH1F("Graph_Graph1163","Graph",100,2.7,1099.7);
   Graph_Graph1163->SetMinimum(1.468128);
   Graph_Graph1163->SetMaximum(248.399);
   Graph_Graph1163->SetDirectory(nullptr);
   Graph_Graph1163->SetStats(0);
   Graph_Graph1163->SetLineWidth(2);
   Graph_Graph1163->SetMarkerStyle(20);
   Graph_Graph1163->SetMarkerSize(0.9);
   Graph_Graph1163->GetXaxis()->SetLabelFont(42);
   Graph_Graph1163->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1163->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1163->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1163->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1163->GetXaxis()->SetTitleFont(42);
   Graph_Graph1163->GetYaxis()->SetLabelFont(42);
   Graph_Graph1163->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1163->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1163->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1163->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1163->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1163->GetYaxis()->SetTitleFont(42);
   Graph_Graph1163->GetZaxis()->SetLabelFont(42);
   Graph_Graph1163->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1163->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1163->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1163->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1163->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1163);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx164[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph2_fy164[42] = { 144.1124, 11.76302, 11.14282, 8.951492, 8.21902, 7.927551, 7.760462, 11.62097, 16.04632, 20.9452, 25.63201, 47.02878, 48.3331, 46.88342, 47.78356, 47.33089, 45.36663,
   47.45646, 47.63632, 47.63632, 47.63632, 10.87734, 10.87734, 10.87734, 10.83851, 10.39067, 10.81232, 10.90918, 10.71541, 11.02763, 10.7485, 6.147948, 5.098804,
   3.985781, 2.984814, 2.485988, 2.572454, 2.710829, 2.954348, 3.74544, 4.563699, 54.90678 };
   graph = new TGraph(42,Graph2_fx164,Graph2_fy164);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2164 = new TH1F("Graph_Graph2164","Graph",100,2.7,1099.7);
   Graph_Graph2164->SetMinimum(2.237389);
   Graph_Graph2164->SetMaximum(158.2751);
   Graph_Graph2164->SetDirectory(nullptr);
   Graph_Graph2164->SetStats(0);
   Graph_Graph2164->SetLineWidth(2);
   Graph_Graph2164->SetMarkerStyle(20);
   Graph_Graph2164->SetMarkerSize(0.9);
   Graph_Graph2164->GetXaxis()->SetLabelFont(42);
   Graph_Graph2164->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2164->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2164->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2164->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2164->GetXaxis()->SetTitleFont(42);
   Graph_Graph2164->GetYaxis()->SetLabelFont(42);
   Graph_Graph2164->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2164->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2164->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2164->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2164->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2164->GetYaxis()->SetTitleFont(42);
   Graph_Graph2164->GetZaxis()->SetLabelFont(42);
   Graph_Graph2164->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2164->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2164->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2164->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2164->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2164);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx165[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy165[20] = { 87.81109, 7.17615, 6.310367, 4.949822, 4.540165, 4.328125, 4.208751, 5.772179, 7.953115, 10.36692, 12.68648, 23.27674, 23.92231, 23.2048, 23.65032, 23.42627, 22.45407,
   23.48842, 23.57745, 23.57745 };
   graph = new TGraph(20,Graph0_fx165,Graph0_fy165);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0165 = new TH1F("Graph_Graph0165","",100,2.7,1099.7);
   Graph_Graph0165->SetMinimum(0.2);
   Graph_Graph0165->SetMaximum(100000);
   Graph_Graph0165->SetDirectory(nullptr);
   Graph_Graph0165->SetStats(0);
   Graph_Graph0165->SetLineWidth(2);
   Graph_Graph0165->SetMarkerStyle(20);
   Graph_Graph0165->SetMarkerSize(0.9);
   Graph_Graph0165->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0165->GetXaxis()->SetRange(0,91);
   Graph_Graph0165->GetXaxis()->SetLabelFont(42);
   Graph_Graph0165->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0165->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0165->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0165->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0165->GetXaxis()->SetTitleFont(42);
   Graph_Graph0165->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0165->GetYaxis()->SetLabelFont(42);
   Graph_Graph0165->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0165->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0165->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0165->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0165->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0165->GetYaxis()->SetTitleFont(42);
   Graph_Graph0165->GetZaxis()->SetLabelFont(42);
   Graph_Graph0165->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0165->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0165->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0165->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0165->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0165);
   
   graph->Draw("l");
   
   Double_t Graph_fx166[72] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180, 185, 190, 195, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450,
   475, 500, 600, 700, 800, 900, 1000 };
   Double_t Graph_fy166[72] = { 5.377378e-06, 5.42368e-05, 0.0003392874, 0.001501682, 0.01439228, 0.03456422, 0.07336967, 0.1409387, 0.2494423, 0.4124663, 0.6442442, 0.9588659, 1.369556, 1.888079, 2.524309, 3.285951, 4.17842,
   6.366145, 7.661246, 9.087249, 10.6397, 15.04644, 20.06472, 25.60542, 31.4953, 37.62664, 43.86712, 50.12014, 133.718, 131.6219, 125.8887, 118.7582, 111.3171,
   104.0781, 97.26777, 90.96987, 79.928, 75.12648, 70.7511, 66.76032, 63.11482, 58.67974, 54.82118, 48.44494, 43.39327, 39.28552, 35.87116, 32.98095, 30.49743,
   28.33686, 26.43795, 25.5718, 24.75475, 23.9827, 23.252, 20.11686, 17.64775, 15.65769, 14.02401, 12.66235, 11.5127, 10.53115, 9.684909, 8.949003, 8.304115,
   7.735087, 7.22987, 5.678434, 4.622302, 3.863793, 3.296566, 3.296566 };
   graph = new TGraph(72,Graph_fx166,Graph_fy166);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph166 = new TH1F("Graph_Graph166","",100,1.44,1099.84);
   Graph_Graph166->SetMinimum(4.83964e-06);
   Graph_Graph166->SetMaximum(147.0898);
   Graph_Graph166->SetDirectory(nullptr);
   Graph_Graph166->SetStats(0);
   Graph_Graph166->SetLineWidth(2);
   Graph_Graph166->SetMarkerStyle(20);
   Graph_Graph166->SetMarkerSize(0.9);
   Graph_Graph166->GetXaxis()->SetLabelFont(42);
   Graph_Graph166->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph166->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph166->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph166->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph166->GetXaxis()->SetTitleFont(42);
   Graph_Graph166->GetYaxis()->SetLabelFont(42);
   Graph_Graph166->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph166->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph166->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph166->GetYaxis()->SetTickLength(0.02);
   Graph_Graph166->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph166->GetYaxis()->SetTitleFont(42);
   Graph_Graph166->GetZaxis()->SetLabelFont(42);
   Graph_Graph166->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph166->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph166->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph166->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph166->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph166);
   
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
   
   Double_t Graph_fx168[72] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180, 185, 190, 195, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450,
   475, 500, 600, 700, 800, 900, 1000 };
   Double_t Graph_fy168[72] = { 5.915116e-06, 5.966048e-05, 0.0003732161, 0.00165185, 0.01583151, 0.03802064, 0.08070664, 0.1550326, 0.2743865, 0.4537129, 0.7086686, 1.054752, 1.506512, 2.076887, 2.77674, 3.614546, 4.596262,
   7.00276, 8.427371, 9.995974, 11.70367, 16.55108, 22.07119, 28.16596, 34.64483, 41.3893, 48.25383, 55.13215, 147.0898, 144.7841, 138.4776, 130.634, 122.4488,
   114.4859, 106.9945, 100.0669, 87.9208, 82.63913, 77.82621, 73.43635, 69.4263, 64.54771, 60.3033, 53.28943, 47.7326, 43.21407, 39.45828, 36.27905, 33.54717,
   31.17055, 29.08175, 28.12898, 27.23023, 26.38097, 25.5772, 22.12855, 19.41252, 17.22346, 15.42641, 13.92859, 12.66397, 11.58427, 10.6534, 9.843903, 9.134526,
   8.508596, 7.952857, 6.246277, 5.084532, 4.250172, 3.626223, 3.626223 };
   graph = new TGraph(72,Graph_fx168,Graph_fy168);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph168 = new TH1F("Graph_Graph168","",100,1.44,1099.84);
   Graph_Graph168->SetMinimum(5.323604e-06);
   Graph_Graph168->SetMaximum(161.7988);
   Graph_Graph168->SetDirectory(nullptr);
   Graph_Graph168->SetStats(0);
   Graph_Graph168->SetLineWidth(2);
   Graph_Graph168->SetMarkerStyle(20);
   Graph_Graph168->SetMarkerSize(0.9);
   Graph_Graph168->GetXaxis()->SetLabelFont(42);
   Graph_Graph168->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph168->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph168->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph168->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph168->GetXaxis()->SetTitleFont(42);
   Graph_Graph168->GetYaxis()->SetLabelFont(42);
   Graph_Graph168->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph168->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph168->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph168->GetYaxis()->SetTickLength(0.02);
   Graph_Graph168->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph168->GetYaxis()->SetTitleFont(42);
   Graph_Graph168->GetZaxis()->SetLabelFont(42);
   Graph_Graph168->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph168->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph168->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph168->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph168->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph168);
   
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
   line = new TLine(5.318226,0,5.318226,5.841076);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(5.313226,0,"  5.32 TeV");

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
   pt_LaTex = pt->AddText("#varepsilon = 5.4e-08");
   pt_LaTex = pt->AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
