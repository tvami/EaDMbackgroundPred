#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_17mnthNorm_rate_Vol_4.24e-07()
{
//=========Macro generated from canvas: climits/climits
//=========  (Sat Jul  4 12:17:27 2026) by ROOT version 6.30/07
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
   
   Double_t Graph0_fx372[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy372[20] = { 87.81109, 7.17615, 6.310367, 4.949822, 4.540165, 4.328125, 4.208751, 5.772179, 7.953115, 10.36692, 12.68648, 23.27674, 23.92231, 23.2048, 23.65032, 23.42627, 22.45407,
   23.48842, 23.57745, 23.57745 };
   TGraph *graph = new TGraph(20,Graph0_fx372,Graph0_fy372);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0372 = new TH1F("Graph_Graph0372","",100,2.7,1099.7);
   Graph_Graph0372->SetMinimum(0.2);
   Graph_Graph0372->SetMaximum(100000);
   Graph_Graph0372->SetDirectory(nullptr);
   Graph_Graph0372->SetStats(0);
   Graph_Graph0372->SetLineWidth(2);
   Graph_Graph0372->SetMarkerStyle(20);
   Graph_Graph0372->SetMarkerSize(0.9);
   Graph_Graph0372->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0372->GetXaxis()->SetRange(0,91);
   Graph_Graph0372->GetXaxis()->SetLabelFont(42);
   Graph_Graph0372->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0372->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0372->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0372->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0372->GetXaxis()->SetTitleFont(42);
   Graph_Graph0372->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0372->GetYaxis()->SetLabelFont(42);
   Graph_Graph0372->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0372->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0372->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0372->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0372->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0372->GetYaxis()->SetTitleFont(42);
   Graph_Graph0372->GetZaxis()->SetLabelFont(42);
   Graph_Graph0372->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0372->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0372->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0372->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0372->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0372);
   
   graph->Draw("al");
   
   Double_t Graph1_fx373[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph1_fy373[42] = { 225.9655, 19.13919, 18.1301, 14.63901, 13.37994, 12.81698, 12.47269, 17.55231, 24.1842, 31.52421, 38.57764, 70.78099, 72.74408, 70.56223, 71.91698, 71.23569, 68.27937,
   71.42468, 71.69539, 71.69539, 71.69539, 6.092538, 6.092538, 6.092538, 6.069666, 5.838785, 6.052617, 6.112515, 6.009083, 6.168825, 6.026643, 3.582317, 2.980722,
   2.357333, 1.800408, 1.631254, 1.700126, 1.798089, 1.955746, 2.482647, 3.165121, 37.09668 };
   graph = new TGraph(42,Graph1_fx373,Graph1_fy373);
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
   
   TH1F *Graph_Graph1373 = new TH1F("Graph_Graph1373","Graph",100,2.7,1099.7);
   Graph_Graph1373->SetMinimum(1.468128);
   Graph_Graph1373->SetMaximum(248.399);
   Graph_Graph1373->SetDirectory(nullptr);
   Graph_Graph1373->SetStats(0);
   Graph_Graph1373->SetLineWidth(2);
   Graph_Graph1373->SetMarkerStyle(20);
   Graph_Graph1373->SetMarkerSize(0.9);
   Graph_Graph1373->GetXaxis()->SetLabelFont(42);
   Graph_Graph1373->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1373->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1373->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1373->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1373->GetXaxis()->SetTitleFont(42);
   Graph_Graph1373->GetYaxis()->SetLabelFont(42);
   Graph_Graph1373->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1373->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1373->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1373->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1373->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1373->GetYaxis()->SetTitleFont(42);
   Graph_Graph1373->GetZaxis()->SetLabelFont(42);
   Graph_Graph1373->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1373->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1373->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1373->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1373->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1373);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx374[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph2_fy374[42] = { 144.1124, 11.76302, 11.14282, 8.951492, 8.21902, 7.927551, 7.760462, 11.62097, 16.04632, 20.9452, 25.63201, 47.02878, 48.3331, 46.88342, 47.78356, 47.33089, 45.36663,
   47.45646, 47.63632, 47.63632, 47.63632, 10.87734, 10.87734, 10.87734, 10.83851, 10.39067, 10.81232, 10.90918, 10.71541, 11.02763, 10.7485, 6.147948, 5.098804,
   3.985781, 2.984814, 2.485988, 2.572454, 2.710829, 2.954348, 3.74544, 4.563699, 54.90678 };
   graph = new TGraph(42,Graph2_fx374,Graph2_fy374);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2374 = new TH1F("Graph_Graph2374","Graph",100,2.7,1099.7);
   Graph_Graph2374->SetMinimum(2.237389);
   Graph_Graph2374->SetMaximum(158.2751);
   Graph_Graph2374->SetDirectory(nullptr);
   Graph_Graph2374->SetStats(0);
   Graph_Graph2374->SetLineWidth(2);
   Graph_Graph2374->SetMarkerStyle(20);
   Graph_Graph2374->SetMarkerSize(0.9);
   Graph_Graph2374->GetXaxis()->SetLabelFont(42);
   Graph_Graph2374->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2374->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2374->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2374->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2374->GetXaxis()->SetTitleFont(42);
   Graph_Graph2374->GetYaxis()->SetLabelFont(42);
   Graph_Graph2374->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2374->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2374->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2374->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2374->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2374->GetYaxis()->SetTitleFont(42);
   Graph_Graph2374->GetZaxis()->SetLabelFont(42);
   Graph_Graph2374->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2374->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2374->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2374->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2374->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2374);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx375[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy375[20] = { 87.81109, 7.17615, 6.310367, 4.949822, 4.540165, 4.328125, 4.208751, 5.772179, 7.953115, 10.36692, 12.68648, 23.27674, 23.92231, 23.2048, 23.65032, 23.42627, 22.45407,
   23.48842, 23.57745, 23.57745 };
   graph = new TGraph(20,Graph0_fx375,Graph0_fy375);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0375 = new TH1F("Graph_Graph0375","",100,2.7,1099.7);
   Graph_Graph0375->SetMinimum(0.2);
   Graph_Graph0375->SetMaximum(100000);
   Graph_Graph0375->SetDirectory(nullptr);
   Graph_Graph0375->SetStats(0);
   Graph_Graph0375->SetLineWidth(2);
   Graph_Graph0375->SetMarkerStyle(20);
   Graph_Graph0375->SetMarkerSize(0.9);
   Graph_Graph0375->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0375->GetXaxis()->SetRange(0,91);
   Graph_Graph0375->GetXaxis()->SetLabelFont(42);
   Graph_Graph0375->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0375->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0375->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0375->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0375->GetXaxis()->SetTitleFont(42);
   Graph_Graph0375->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0375->GetYaxis()->SetLabelFont(42);
   Graph_Graph0375->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0375->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0375->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0375->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0375->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0375->GetYaxis()->SetTitleFont(42);
   Graph_Graph0375->GetZaxis()->SetLabelFont(42);
   Graph_Graph0375->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0375->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0375->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0375->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0375->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0375);
   
   graph->Draw("l");
   
   Double_t Graph_fx376[72] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180, 185, 190, 195, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450,
   475, 500, 600, 700, 800, 900, 1000 };
   Double_t Graph_fy376[72] = { 0, 0, 0, 0, 0, 0, 0, 2.107045e-291, 6.772269e-274, 2.45807e-258, 2.045551e-244, 6.877284e-232, 1.477668e-220, 2.952803e-210, 7.481526e-201, 3.111762e-192, 2.639341e-184,
   3.265424e-170, 6.367904e-164, 4.565761e-158, 1.330357e-152, 1.681367e-138, 5.677504e-130, 1.469972e-119, 5.19979e-113, 4.958739e-105, 7.94538e-100, 1.55295e-93, 1.413135e-32, 2.527185e-26, 7.148833e-22, 1.520957e-18, 5.781805e-16,
   6.596283e-14, 3.140474e-12, 7.771335e-11, 1.174267e-08, 8.650656e-08, 4.936325e-07, 2.283256e-06, 8.868008e-06, 2.919078e-05, 8.508685e-05, 0.0005366678, 0.002472666, 0.008950204, 0.02680548, 0.06899782, 0.1570517,
   0.3230829, 0.6109691, 0.8175764, 1.076419, 1.396136, 1.785918, 5.135362, 11.77573, 22.93208, 39.54598, 62.15665, 90.88692, 125.4983, 165.478, 210.1322, 258.6682,
   310.2611, 364.1027, 587.8789, 800.6904, 984.6466, 1134.308, 1134.308 };
   graph = new TGraph(72,Graph_fx376,Graph_fy376);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph376 = new TH1F("Graph_Graph376","",100,1.44,1099.84);
   Graph_Graph376->SetMinimum(1.247739);
   Graph_Graph376->SetMaximum(1247.739);
   Graph_Graph376->SetDirectory(nullptr);
   Graph_Graph376->SetStats(0);
   Graph_Graph376->SetLineWidth(2);
   Graph_Graph376->SetMarkerStyle(20);
   Graph_Graph376->SetMarkerSize(0.9);
   Graph_Graph376->GetXaxis()->SetLabelFont(42);
   Graph_Graph376->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph376->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph376->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph376->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph376->GetXaxis()->SetTitleFont(42);
   Graph_Graph376->GetYaxis()->SetLabelFont(42);
   Graph_Graph376->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph376->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph376->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph376->GetYaxis()->SetTickLength(0.02);
   Graph_Graph376->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph376->GetYaxis()->SetTitleFont(42);
   Graph_Graph376->GetZaxis()->SetLabelFont(42);
   Graph_Graph376->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph376->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph376->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph376->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph376->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph376);
   
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
   
   Double_t Graph_fx378[72] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180, 185, 190, 195, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450,
   475, 500, 600, 700, 800, 900, 1000 };
   Double_t Graph_fy378[72] = { 0, 0, 0, 0, 0, 0, 0, 2.31775e-291, 7.449496e-274, 2.703877e-258, 2.250106e-244, 7.565012e-232, 1.625435e-220, 3.248083e-210, 8.229679e-201, 3.422938e-192, 2.903275e-184,
   3.591966e-170, 7.004694e-164, 5.022337e-158, 1.463393e-152, 1.849504e-138, 6.245254e-130, 1.616969e-119, 5.719769e-113, 5.454613e-105, 8.739918e-100, 1.708245e-93, 1.554449e-32, 2.779904e-26, 7.863716e-22, 1.673053e-18, 6.359986e-16,
   7.255911e-14, 3.454521e-12, 8.548469e-11, 1.291694e-08, 9.515722e-08, 5.429957e-07, 2.511582e-06, 9.754809e-06, 3.210986e-05, 9.359554e-05, 0.0005903346, 0.002719933, 0.009845224, 0.02948603, 0.0758976, 0.1727569,
   0.3553912, 0.672066, 0.899334, 1.184061, 1.53575, 1.96451, 5.648898, 12.9533, 25.22529, 43.50058, 68.37232, 99.97561, 138.0481, 182.0258, 231.1454, 284.535,
   341.2872, 400.513, 646.6668, 880.7594, 1083.111, 1247.739, 1247.739 };
   graph = new TGraph(72,Graph_fx378,Graph_fy378);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph378 = new TH1F("Graph_Graph378","",100,1.44,1099.84);
   Graph_Graph378->SetMinimum(1.372513);
   Graph_Graph378->SetMaximum(1372.513);
   Graph_Graph378->SetDirectory(nullptr);
   Graph_Graph378->SetStats(0);
   Graph_Graph378->SetLineWidth(2);
   Graph_Graph378->SetMarkerStyle(20);
   Graph_Graph378->SetMarkerSize(0.9);
   Graph_Graph378->GetXaxis()->SetLabelFont(42);
   Graph_Graph378->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph378->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph378->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph378->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph378->GetXaxis()->SetTitleFont(42);
   Graph_Graph378->GetYaxis()->SetLabelFont(42);
   Graph_Graph378->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph378->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph378->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph378->GetYaxis()->SetTickLength(0.02);
   Graph_Graph378->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph378->GetYaxis()->SetTitleFont(42);
   Graph_Graph378->GetZaxis()->SetLabelFont(42);
   Graph_Graph378->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph378->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph378->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph378->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph378->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph378);
   
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
   line = new TLine(276.6464,0,276.6464,23.76996);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(276.6414,0,"  276.65 TeV");

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
   pt_LaTex = pt->AddText("#varepsilon = 4.24e-07");
   pt_LaTex = pt->AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
