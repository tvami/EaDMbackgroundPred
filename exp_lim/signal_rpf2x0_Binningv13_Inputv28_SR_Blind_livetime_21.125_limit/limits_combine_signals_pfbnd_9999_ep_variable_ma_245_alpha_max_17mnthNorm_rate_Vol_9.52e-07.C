#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_17mnthNorm_rate_Vol_9.52e-07()
{
//=========Macro generated from canvas: climits/climits
//=========  (Sat Jul  4 12:17:30 2026) by ROOT version 6.30/07
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
   
   Double_t Graph0_fx526[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy526[20] = { 87.81109, 7.17615, 6.310367, 4.949822, 4.540165, 4.328125, 4.208751, 5.772179, 7.953115, 10.36692, 12.68648, 23.27674, 23.92231, 23.2048, 23.65032, 23.42627, 22.45407,
   23.48842, 23.57745, 23.57745 };
   TGraph *graph = new TGraph(20,Graph0_fx526,Graph0_fy526);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0526 = new TH1F("Graph_Graph0526","",100,2.7,1099.7);
   Graph_Graph0526->SetMinimum(0.2);
   Graph_Graph0526->SetMaximum(100000);
   Graph_Graph0526->SetDirectory(nullptr);
   Graph_Graph0526->SetStats(0);
   Graph_Graph0526->SetLineWidth(2);
   Graph_Graph0526->SetMarkerStyle(20);
   Graph_Graph0526->SetMarkerSize(0.9);
   Graph_Graph0526->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0526->GetXaxis()->SetRange(0,91);
   Graph_Graph0526->GetXaxis()->SetLabelFont(42);
   Graph_Graph0526->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0526->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0526->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0526->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0526->GetXaxis()->SetTitleFont(42);
   Graph_Graph0526->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0526->GetYaxis()->SetLabelFont(42);
   Graph_Graph0526->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0526->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0526->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0526->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0526->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0526->GetYaxis()->SetTitleFont(42);
   Graph_Graph0526->GetZaxis()->SetLabelFont(42);
   Graph_Graph0526->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0526->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0526->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0526->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0526->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0526);
   
   graph->Draw("al");
   
   Double_t Graph1_fx527[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph1_fy527[42] = { 225.9655, 19.13919, 18.1301, 14.63901, 13.37994, 12.81698, 12.47269, 17.55231, 24.1842, 31.52421, 38.57764, 70.78099, 72.74408, 70.56223, 71.91698, 71.23569, 68.27937,
   71.42468, 71.69539, 71.69539, 71.69539, 6.092538, 6.092538, 6.092538, 6.069666, 5.838785, 6.052617, 6.112515, 6.009083, 6.168825, 6.026643, 3.582317, 2.980722,
   2.357333, 1.800408, 1.631254, 1.700126, 1.798089, 1.955746, 2.482647, 3.165121, 37.09668 };
   graph = new TGraph(42,Graph1_fx527,Graph1_fy527);
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
   
   TH1F *Graph_Graph1527 = new TH1F("Graph_Graph1527","Graph",100,2.7,1099.7);
   Graph_Graph1527->SetMinimum(1.468128);
   Graph_Graph1527->SetMaximum(248.399);
   Graph_Graph1527->SetDirectory(nullptr);
   Graph_Graph1527->SetStats(0);
   Graph_Graph1527->SetLineWidth(2);
   Graph_Graph1527->SetMarkerStyle(20);
   Graph_Graph1527->SetMarkerSize(0.9);
   Graph_Graph1527->GetXaxis()->SetLabelFont(42);
   Graph_Graph1527->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1527->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1527->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1527->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1527->GetXaxis()->SetTitleFont(42);
   Graph_Graph1527->GetYaxis()->SetLabelFont(42);
   Graph_Graph1527->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1527->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1527->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1527->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1527->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1527->GetYaxis()->SetTitleFont(42);
   Graph_Graph1527->GetZaxis()->SetLabelFont(42);
   Graph_Graph1527->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1527->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1527->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1527->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1527->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1527);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx528[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph2_fy528[42] = { 144.1124, 11.76302, 11.14282, 8.951492, 8.21902, 7.927551, 7.760462, 11.62097, 16.04632, 20.9452, 25.63201, 47.02878, 48.3331, 46.88342, 47.78356, 47.33089, 45.36663,
   47.45646, 47.63632, 47.63632, 47.63632, 10.87734, 10.87734, 10.87734, 10.83851, 10.39067, 10.81232, 10.90918, 10.71541, 11.02763, 10.7485, 6.147948, 5.098804,
   3.985781, 2.984814, 2.485988, 2.572454, 2.710829, 2.954348, 3.74544, 4.563699, 54.90678 };
   graph = new TGraph(42,Graph2_fx528,Graph2_fy528);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2528 = new TH1F("Graph_Graph2528","Graph",100,2.7,1099.7);
   Graph_Graph2528->SetMinimum(2.237389);
   Graph_Graph2528->SetMaximum(158.2751);
   Graph_Graph2528->SetDirectory(nullptr);
   Graph_Graph2528->SetStats(0);
   Graph_Graph2528->SetLineWidth(2);
   Graph_Graph2528->SetMarkerStyle(20);
   Graph_Graph2528->SetMarkerSize(0.9);
   Graph_Graph2528->GetXaxis()->SetLabelFont(42);
   Graph_Graph2528->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2528->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2528->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2528->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2528->GetXaxis()->SetTitleFont(42);
   Graph_Graph2528->GetYaxis()->SetLabelFont(42);
   Graph_Graph2528->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2528->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2528->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2528->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2528->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2528->GetYaxis()->SetTitleFont(42);
   Graph_Graph2528->GetZaxis()->SetLabelFont(42);
   Graph_Graph2528->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2528->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2528->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2528->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2528->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2528);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx529[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy529[20] = { 87.81109, 7.17615, 6.310367, 4.949822, 4.540165, 4.328125, 4.208751, 5.772179, 7.953115, 10.36692, 12.68648, 23.27674, 23.92231, 23.2048, 23.65032, 23.42627, 22.45407,
   23.48842, 23.57745, 23.57745 };
   graph = new TGraph(20,Graph0_fx529,Graph0_fy529);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0529 = new TH1F("Graph_Graph0529","",100,2.7,1099.7);
   Graph_Graph0529->SetMinimum(0.2);
   Graph_Graph0529->SetMaximum(100000);
   Graph_Graph0529->SetDirectory(nullptr);
   Graph_Graph0529->SetStats(0);
   Graph_Graph0529->SetLineWidth(2);
   Graph_Graph0529->SetMarkerStyle(20);
   Graph_Graph0529->SetMarkerSize(0.9);
   Graph_Graph0529->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0529->GetXaxis()->SetRange(0,91);
   Graph_Graph0529->GetXaxis()->SetLabelFont(42);
   Graph_Graph0529->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0529->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0529->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0529->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0529->GetXaxis()->SetTitleFont(42);
   Graph_Graph0529->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0529->GetYaxis()->SetLabelFont(42);
   Graph_Graph0529->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0529->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0529->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0529->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0529->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0529->GetYaxis()->SetTitleFont(42);
   Graph_Graph0529->GetZaxis()->SetLabelFont(42);
   Graph_Graph0529->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0529->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0529->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0529->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0529->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0529);
   
   graph->Draw("l");
   
   Double_t Graph_fx530[72] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180, 185, 190, 195, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450,
   475, 500, 600, 700, 800, 900, 1000 };
   Double_t Graph_fy530[72] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1.898704e-185, 1.752673e-153, 1.152339e-130, 1.459402e-113, 2.869378e-100,
   1.21887e-89, 5.973594e-81, 1.031704e-73, 2.376682e-62, 8.251087e-58, 7.708443e-54, 2.443931e-50, 3.149372e-47, 1.867037e-44, 5.830803e-42, 1.17995e-37, 4.54186e-34, 4.878505e-31, 1.922495e-28, 3.397084e-26, 3.128703e-24,
   1.685084e-22, 5.804419e-21, 2.947035e-20, 1.372385e-19, 5.900984e-19, 2.356869e-18, 9.41411e-16, 1.11785e-13, 5.499919e-12, 1.398876e-10, 2.143478e-09, 2.207029e-08, 1.654231e-07, 9.583388e-07, 4.492269e-06, 1.765587e-05,
   5.983777e-05, 0.0001788396, 0.005574019, 0.06290135, 0.3777564, 1.493984, 1.493984 };
   graph = new TGraph(72,Graph_fx530,Graph_fy530);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph530 = new TH1F("Graph_Graph530","",100,1.44,1099.84);
   Graph_Graph530->SetMinimum(0.001643382);
   Graph_Graph530->SetMaximum(1.643382);
   Graph_Graph530->SetDirectory(nullptr);
   Graph_Graph530->SetStats(0);
   Graph_Graph530->SetLineWidth(2);
   Graph_Graph530->SetMarkerStyle(20);
   Graph_Graph530->SetMarkerSize(0.9);
   Graph_Graph530->GetXaxis()->SetLabelFont(42);
   Graph_Graph530->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph530->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph530->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph530->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph530->GetXaxis()->SetTitleFont(42);
   Graph_Graph530->GetYaxis()->SetLabelFont(42);
   Graph_Graph530->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph530->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph530->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph530->GetYaxis()->SetTickLength(0.02);
   Graph_Graph530->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph530->GetYaxis()->SetTitleFont(42);
   Graph_Graph530->GetZaxis()->SetLabelFont(42);
   Graph_Graph530->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph530->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph530->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph530->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph530->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph530);
   
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
   
   Double_t Graph_fx532[72] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180, 185, 190, 195, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450,
   475, 500, 600, 700, 800, 900, 1000 };
   Double_t Graph_fy532[72] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2.088574e-185, 1.92794e-153, 1.267573e-130, 1.605342e-113, 3.156316e-100,
   1.340757e-89, 6.570953e-81, 1.134874e-73, 2.61435e-62, 9.076196e-58, 8.479287e-54, 2.688324e-50, 3.464309e-47, 2.053741e-44, 6.413883e-42, 1.297945e-37, 4.996046e-34, 5.366356e-31, 2.114745e-28, 3.736792e-26, 3.441573e-24,
   1.853592e-22, 6.384861e-21, 3.241738e-20, 1.509624e-19, 6.491082e-19, 2.592556e-18, 1.035552e-15, 1.229635e-13, 6.049911e-12, 1.538764e-10, 2.357826e-09, 2.427732e-08, 1.819654e-07, 1.054173e-06, 4.941496e-06, 1.942146e-05,
   6.582155e-05, 0.0001967236, 0.006131421, 0.06919148, 0.415532, 1.643382, 1.643382 };
   graph = new TGraph(72,Graph_fx532,Graph_fy532);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph532 = new TH1F("Graph_Graph532","",100,1.44,1099.84);
   Graph_Graph532->SetMinimum(0.001807721);
   Graph_Graph532->SetMaximum(1.807721);
   Graph_Graph532->SetDirectory(nullptr);
   Graph_Graph532->SetStats(0);
   Graph_Graph532->SetLineWidth(2);
   Graph_Graph532->SetMarkerStyle(20);
   Graph_Graph532->SetMarkerSize(0.9);
   Graph_Graph532->GetXaxis()->SetLabelFont(42);
   Graph_Graph532->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph532->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph532->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph532->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph532->GetXaxis()->SetTitleFont(42);
   Graph_Graph532->GetYaxis()->SetLabelFont(42);
   Graph_Graph532->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph532->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph532->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph532->GetYaxis()->SetTickLength(0.02);
   Graph_Graph532->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph532->GetYaxis()->SetTitleFont(42);
   Graph_Graph532->GetZaxis()->SetLabelFont(42);
   Graph_Graph532->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph532->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph532->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph532->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph532->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph532);
   
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
   pt_LaTex = pt->AddText("#varepsilon = 9.52e-07");
   pt_LaTex = pt->AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
