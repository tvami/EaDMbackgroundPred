#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_17mnthNorm_rate_Vol_8.08e-07()
{
//=========Macro generated from canvas: climits/climits
//=========  (Sat Jul  4 12:17:29 2026) by ROOT version 6.30/07
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
   
   Double_t Graph0_fx484[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy484[20] = { 87.81109, 7.17615, 6.310367, 4.949822, 4.540165, 4.328125, 4.208751, 5.772179, 7.953115, 10.36692, 12.68648, 23.27674, 23.92231, 23.2048, 23.65032, 23.42627, 22.45407,
   23.48842, 23.57745, 23.57745 };
   TGraph *graph = new TGraph(20,Graph0_fx484,Graph0_fy484);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0484 = new TH1F("Graph_Graph0484","",100,2.7,1099.7);
   Graph_Graph0484->SetMinimum(0.2);
   Graph_Graph0484->SetMaximum(100000);
   Graph_Graph0484->SetDirectory(nullptr);
   Graph_Graph0484->SetStats(0);
   Graph_Graph0484->SetLineWidth(2);
   Graph_Graph0484->SetMarkerStyle(20);
   Graph_Graph0484->SetMarkerSize(0.9);
   Graph_Graph0484->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0484->GetXaxis()->SetRange(0,91);
   Graph_Graph0484->GetXaxis()->SetLabelFont(42);
   Graph_Graph0484->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0484->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0484->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0484->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0484->GetXaxis()->SetTitleFont(42);
   Graph_Graph0484->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0484->GetYaxis()->SetLabelFont(42);
   Graph_Graph0484->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0484->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0484->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0484->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0484->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0484->GetYaxis()->SetTitleFont(42);
   Graph_Graph0484->GetZaxis()->SetLabelFont(42);
   Graph_Graph0484->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0484->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0484->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0484->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0484->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0484);
   
   graph->Draw("al");
   
   Double_t Graph1_fx485[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph1_fy485[42] = { 225.9655, 19.13919, 18.1301, 14.63901, 13.37994, 12.81698, 12.47269, 17.55231, 24.1842, 31.52421, 38.57764, 70.78099, 72.74408, 70.56223, 71.91698, 71.23569, 68.27937,
   71.42468, 71.69539, 71.69539, 71.69539, 6.092538, 6.092538, 6.092538, 6.069666, 5.838785, 6.052617, 6.112515, 6.009083, 6.168825, 6.026643, 3.582317, 2.980722,
   2.357333, 1.800408, 1.631254, 1.700126, 1.798089, 1.955746, 2.482647, 3.165121, 37.09668 };
   graph = new TGraph(42,Graph1_fx485,Graph1_fy485);
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
   
   TH1F *Graph_Graph1485 = new TH1F("Graph_Graph1485","Graph",100,2.7,1099.7);
   Graph_Graph1485->SetMinimum(1.468128);
   Graph_Graph1485->SetMaximum(248.399);
   Graph_Graph1485->SetDirectory(nullptr);
   Graph_Graph1485->SetStats(0);
   Graph_Graph1485->SetLineWidth(2);
   Graph_Graph1485->SetMarkerStyle(20);
   Graph_Graph1485->SetMarkerSize(0.9);
   Graph_Graph1485->GetXaxis()->SetLabelFont(42);
   Graph_Graph1485->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1485->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1485->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1485->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1485->GetXaxis()->SetTitleFont(42);
   Graph_Graph1485->GetYaxis()->SetLabelFont(42);
   Graph_Graph1485->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1485->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1485->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1485->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1485->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1485->GetYaxis()->SetTitleFont(42);
   Graph_Graph1485->GetZaxis()->SetLabelFont(42);
   Graph_Graph1485->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1485->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1485->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1485->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1485->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1485);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx486[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph2_fy486[42] = { 144.1124, 11.76302, 11.14282, 8.951492, 8.21902, 7.927551, 7.760462, 11.62097, 16.04632, 20.9452, 25.63201, 47.02878, 48.3331, 46.88342, 47.78356, 47.33089, 45.36663,
   47.45646, 47.63632, 47.63632, 47.63632, 10.87734, 10.87734, 10.87734, 10.83851, 10.39067, 10.81232, 10.90918, 10.71541, 11.02763, 10.7485, 6.147948, 5.098804,
   3.985781, 2.984814, 2.485988, 2.572454, 2.710829, 2.954348, 3.74544, 4.563699, 54.90678 };
   graph = new TGraph(42,Graph2_fx486,Graph2_fy486);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2486 = new TH1F("Graph_Graph2486","Graph",100,2.7,1099.7);
   Graph_Graph2486->SetMinimum(2.237389);
   Graph_Graph2486->SetMaximum(158.2751);
   Graph_Graph2486->SetDirectory(nullptr);
   Graph_Graph2486->SetStats(0);
   Graph_Graph2486->SetLineWidth(2);
   Graph_Graph2486->SetMarkerStyle(20);
   Graph_Graph2486->SetMarkerSize(0.9);
   Graph_Graph2486->GetXaxis()->SetLabelFont(42);
   Graph_Graph2486->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2486->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2486->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2486->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2486->GetXaxis()->SetTitleFont(42);
   Graph_Graph2486->GetYaxis()->SetLabelFont(42);
   Graph_Graph2486->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2486->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2486->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2486->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2486->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2486->GetYaxis()->SetTitleFont(42);
   Graph_Graph2486->GetZaxis()->SetLabelFont(42);
   Graph_Graph2486->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2486->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2486->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2486->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2486->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2486);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx487[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy487[20] = { 87.81109, 7.17615, 6.310367, 4.949822, 4.540165, 4.328125, 4.208751, 5.772179, 7.953115, 10.36692, 12.68648, 23.27674, 23.92231, 23.2048, 23.65032, 23.42627, 22.45407,
   23.48842, 23.57745, 23.57745 };
   graph = new TGraph(20,Graph0_fx487,Graph0_fy487);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0487 = new TH1F("Graph_Graph0487","",100,2.7,1099.7);
   Graph_Graph0487->SetMinimum(0.2);
   Graph_Graph0487->SetMaximum(100000);
   Graph_Graph0487->SetDirectory(nullptr);
   Graph_Graph0487->SetStats(0);
   Graph_Graph0487->SetLineWidth(2);
   Graph_Graph0487->SetMarkerStyle(20);
   Graph_Graph0487->SetMarkerSize(0.9);
   Graph_Graph0487->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0487->GetXaxis()->SetRange(0,91);
   Graph_Graph0487->GetXaxis()->SetLabelFont(42);
   Graph_Graph0487->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0487->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0487->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0487->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0487->GetXaxis()->SetTitleFont(42);
   Graph_Graph0487->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0487->GetYaxis()->SetLabelFont(42);
   Graph_Graph0487->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0487->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0487->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0487->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0487->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0487->GetYaxis()->SetTitleFont(42);
   Graph_Graph0487->GetZaxis()->SetLabelFont(42);
   Graph_Graph0487->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0487->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0487->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0487->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0487->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0487);
   
   graph->Draw("l");
   
   Double_t Graph_fx488[72] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180, 185, 190, 195, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450,
   475, 500, 600, 700, 800, 900, 1000 };
   Double_t Graph_fy488[72] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6.471936e-132, 6.407724e-109, 1.650986e-92, 3.274968e-80, 1.17895e-70,
   5.126313e-63, 8.991547e-57, 1.421061e-51, 2.049305e-43, 3.722013e-40, 2.630484e-37, 8.548026e-35, 1.454219e-32, 1.408489e-30, 8.613978e-29, 1.042831e-25, 3.839841e-23, 5.66117e-21, 4.066615e-19, 1.643575e-17, 4.163405e-16,
   7.178929e-15, 8.984861e-14, 2.86497e-13, 8.586686e-13, 2.430545e-12, 6.525632e-12, 4.662309e-10, 1.397118e-08, 2.228207e-07, 2.216512e-06, 1.534708e-05, 7.998602e-05, 0.0003322985, 0.001148713, 0.003414285, 0.008950532,
   0.02111417, 0.04554465, 0.505432, 2.727796, 9.421218, 24.23119, 24.23119 };
   graph = new TGraph(72,Graph_fx488,Graph_fy488);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph488 = new TH1F("Graph_Graph488","",100,1.44,1099.84);
   Graph_Graph488->SetMinimum(0.02665431);
   Graph_Graph488->SetMaximum(26.65431);
   Graph_Graph488->SetDirectory(nullptr);
   Graph_Graph488->SetStats(0);
   Graph_Graph488->SetLineWidth(2);
   Graph_Graph488->SetMarkerStyle(20);
   Graph_Graph488->SetMarkerSize(0.9);
   Graph_Graph488->GetXaxis()->SetLabelFont(42);
   Graph_Graph488->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph488->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph488->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph488->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph488->GetXaxis()->SetTitleFont(42);
   Graph_Graph488->GetYaxis()->SetLabelFont(42);
   Graph_Graph488->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph488->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph488->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph488->GetYaxis()->SetTickLength(0.02);
   Graph_Graph488->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph488->GetYaxis()->SetTitleFont(42);
   Graph_Graph488->GetZaxis()->SetLabelFont(42);
   Graph_Graph488->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph488->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph488->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph488->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph488->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph488);
   
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
   
   Double_t Graph_fx490[72] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180, 185, 190, 195, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450,
   475, 500, 600, 700, 800, 900, 1000 };
   Double_t Graph_fy490[72] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7.11913e-132, 7.048496e-109, 1.816085e-92, 3.602465e-80, 1.296845e-70,
   5.638944e-63, 9.890702e-57, 1.563167e-51, 2.254236e-43, 4.094214e-40, 2.893532e-37, 9.402829e-35, 1.599641e-32, 1.549338e-30, 9.475376e-29, 1.147114e-25, 4.223825e-23, 6.227287e-21, 4.473277e-19, 1.807933e-17, 4.579745e-16,
   7.896822e-15, 9.883347e-14, 3.151467e-13, 9.445355e-13, 2.673599e-12, 7.178195e-12, 5.12854e-10, 1.53683e-08, 2.451028e-07, 2.438163e-06, 1.688179e-05, 8.798462e-05, 0.0003655284, 0.001263584, 0.003755714, 0.009845585,
   0.02322559, 0.05009911, 0.5559752, 3.000576, 10.36334, 26.65431, 26.65431 };
   graph = new TGraph(72,Graph_fx490,Graph_fy490);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph490 = new TH1F("Graph_Graph490","",100,1.44,1099.84);
   Graph_Graph490->SetMinimum(0.02931974);
   Graph_Graph490->SetMaximum(29.31974);
   Graph_Graph490->SetDirectory(nullptr);
   Graph_Graph490->SetStats(0);
   Graph_Graph490->SetLineWidth(2);
   Graph_Graph490->SetMarkerStyle(20);
   Graph_Graph490->SetMarkerSize(0.9);
   Graph_Graph490->GetXaxis()->SetLabelFont(42);
   Graph_Graph490->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph490->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph490->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph490->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph490->GetXaxis()->SetTitleFont(42);
   Graph_Graph490->GetYaxis()->SetLabelFont(42);
   Graph_Graph490->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph490->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph490->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph490->GetYaxis()->SetTickLength(0.02);
   Graph_Graph490->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph490->GetYaxis()->SetTitleFont(42);
   Graph_Graph490->GetZaxis()->SetLabelFont(42);
   Graph_Graph490->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph490->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph490->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph490->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph490->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph490);
   
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
   line = new TLine(897.0932,0,897.0932,23.57485);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(897.0882,0,"  897.09 TeV");

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
   pt_LaTex = pt->AddText("#varepsilon = 8.08e-07");
   pt_LaTex = pt->AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
