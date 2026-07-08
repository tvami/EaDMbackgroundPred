#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_17mnthNorm_rate_Vol_4.96e-07()
{
//=========Macro generated from canvas: climits/climits
//=========  (Sat Jul  4 12:17:28 2026) by ROOT version 6.30/07
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
   
   Double_t Graph0_fx393[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy393[20] = { 87.81109, 7.17615, 6.310367, 4.949822, 4.540165, 4.328125, 4.208751, 5.772179, 7.953115, 10.36692, 12.68648, 23.27674, 23.92231, 23.2048, 23.65032, 23.42627, 22.45407,
   23.48842, 23.57745, 23.57745 };
   TGraph *graph = new TGraph(20,Graph0_fx393,Graph0_fy393);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0393 = new TH1F("Graph_Graph0393","",100,2.7,1099.7);
   Graph_Graph0393->SetMinimum(0.2);
   Graph_Graph0393->SetMaximum(100000);
   Graph_Graph0393->SetDirectory(nullptr);
   Graph_Graph0393->SetStats(0);
   Graph_Graph0393->SetLineWidth(2);
   Graph_Graph0393->SetMarkerStyle(20);
   Graph_Graph0393->SetMarkerSize(0.9);
   Graph_Graph0393->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0393->GetXaxis()->SetRange(0,91);
   Graph_Graph0393->GetXaxis()->SetLabelFont(42);
   Graph_Graph0393->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0393->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0393->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0393->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0393->GetXaxis()->SetTitleFont(42);
   Graph_Graph0393->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0393->GetYaxis()->SetLabelFont(42);
   Graph_Graph0393->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0393->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0393->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0393->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0393->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0393->GetYaxis()->SetTitleFont(42);
   Graph_Graph0393->GetZaxis()->SetLabelFont(42);
   Graph_Graph0393->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0393->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0393->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0393->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0393->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0393);
   
   graph->Draw("al");
   
   Double_t Graph1_fx394[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph1_fy394[42] = { 225.9655, 19.13919, 18.1301, 14.63901, 13.37994, 12.81698, 12.47269, 17.55231, 24.1842, 31.52421, 38.57764, 70.78099, 72.74408, 70.56223, 71.91698, 71.23569, 68.27937,
   71.42468, 71.69539, 71.69539, 71.69539, 6.092538, 6.092538, 6.092538, 6.069666, 5.838785, 6.052617, 6.112515, 6.009083, 6.168825, 6.026643, 3.582317, 2.980722,
   2.357333, 1.800408, 1.631254, 1.700126, 1.798089, 1.955746, 2.482647, 3.165121, 37.09668 };
   graph = new TGraph(42,Graph1_fx394,Graph1_fy394);
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
   
   TH1F *Graph_Graph1394 = new TH1F("Graph_Graph1394","Graph",100,2.7,1099.7);
   Graph_Graph1394->SetMinimum(1.468128);
   Graph_Graph1394->SetMaximum(248.399);
   Graph_Graph1394->SetDirectory(nullptr);
   Graph_Graph1394->SetStats(0);
   Graph_Graph1394->SetLineWidth(2);
   Graph_Graph1394->SetMarkerStyle(20);
   Graph_Graph1394->SetMarkerSize(0.9);
   Graph_Graph1394->GetXaxis()->SetLabelFont(42);
   Graph_Graph1394->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1394->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1394->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1394->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1394->GetXaxis()->SetTitleFont(42);
   Graph_Graph1394->GetYaxis()->SetLabelFont(42);
   Graph_Graph1394->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1394->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1394->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1394->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1394->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1394->GetYaxis()->SetTitleFont(42);
   Graph_Graph1394->GetZaxis()->SetLabelFont(42);
   Graph_Graph1394->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1394->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1394->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1394->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1394->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1394);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx395[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph2_fy395[42] = { 144.1124, 11.76302, 11.14282, 8.951492, 8.21902, 7.927551, 7.760462, 11.62097, 16.04632, 20.9452, 25.63201, 47.02878, 48.3331, 46.88342, 47.78356, 47.33089, 45.36663,
   47.45646, 47.63632, 47.63632, 47.63632, 10.87734, 10.87734, 10.87734, 10.83851, 10.39067, 10.81232, 10.90918, 10.71541, 11.02763, 10.7485, 6.147948, 5.098804,
   3.985781, 2.984814, 2.485988, 2.572454, 2.710829, 2.954348, 3.74544, 4.563699, 54.90678 };
   graph = new TGraph(42,Graph2_fx395,Graph2_fy395);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2395 = new TH1F("Graph_Graph2395","Graph",100,2.7,1099.7);
   Graph_Graph2395->SetMinimum(2.237389);
   Graph_Graph2395->SetMaximum(158.2751);
   Graph_Graph2395->SetDirectory(nullptr);
   Graph_Graph2395->SetStats(0);
   Graph_Graph2395->SetLineWidth(2);
   Graph_Graph2395->SetMarkerStyle(20);
   Graph_Graph2395->SetMarkerSize(0.9);
   Graph_Graph2395->GetXaxis()->SetLabelFont(42);
   Graph_Graph2395->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2395->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2395->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2395->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2395->GetXaxis()->SetTitleFont(42);
   Graph_Graph2395->GetYaxis()->SetLabelFont(42);
   Graph_Graph2395->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2395->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2395->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2395->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2395->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2395->GetYaxis()->SetTitleFont(42);
   Graph_Graph2395->GetZaxis()->SetLabelFont(42);
   Graph_Graph2395->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2395->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2395->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2395->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2395->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2395);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx396[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy396[20] = { 87.81109, 7.17615, 6.310367, 4.949822, 4.540165, 4.328125, 4.208751, 5.772179, 7.953115, 10.36692, 12.68648, 23.27674, 23.92231, 23.2048, 23.65032, 23.42627, 22.45407,
   23.48842, 23.57745, 23.57745 };
   graph = new TGraph(20,Graph0_fx396,Graph0_fy396);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0396 = new TH1F("Graph_Graph0396","",100,2.7,1099.7);
   Graph_Graph0396->SetMinimum(0.2);
   Graph_Graph0396->SetMaximum(100000);
   Graph_Graph0396->SetDirectory(nullptr);
   Graph_Graph0396->SetStats(0);
   Graph_Graph0396->SetLineWidth(2);
   Graph_Graph0396->SetMarkerStyle(20);
   Graph_Graph0396->SetMarkerSize(0.9);
   Graph_Graph0396->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0396->GetXaxis()->SetRange(0,91);
   Graph_Graph0396->GetXaxis()->SetLabelFont(42);
   Graph_Graph0396->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0396->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0396->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0396->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0396->GetXaxis()->SetTitleFont(42);
   Graph_Graph0396->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0396->GetYaxis()->SetLabelFont(42);
   Graph_Graph0396->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0396->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0396->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0396->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0396->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0396->GetYaxis()->SetTitleFont(42);
   Graph_Graph0396->GetZaxis()->SetLabelFont(42);
   Graph_Graph0396->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0396->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0396->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0396->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0396->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0396);
   
   graph->Draw("l");
   
   Double_t Graph_fx397[72] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180, 185, 190, 195, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450,
   475, 500, 600, 700, 800, 900, 1000 };
   Double_t Graph_fy397[72] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5.203492e-304, 6.647579e-290, 5.025731e-277, 3.20207e-265, 2.313761e-254,
   4.638316e-235, 1.914833e-226, 2.008941e-218, 6.143099e-211, 1.652221e-191, 6.18227e-180, 1.479392e-165, 1.077473e-156, 1.195577e-145, 1.260483e-138, 6.772266e-130, 2.273562e-46, 8.984278e-38, 1.201151e-31, 4.606457e-27, 1.660026e-23,
   1.144964e-20, 2.376012e-18, 2.005164e-16, 2.082953e-13, 3.317913e-12, 3.717578e-11, 3.118718e-10, 2.056284e-09, 1.086789e-08, 4.851099e-08, 6.387983e-07, 5.435307e-06, 3.306034e-05, 0.0001544939, 0.0005847562, 0.001865101,
   0.005167212, 0.01273149, 0.01923927, 0.02842253, 0.04112113, 0.05835553, 0.2631188, 0.864683, 2.260397, 4.982, 9.637298, 16.8366, 27.1251, 40.93381, 58.55277, 80.12444,
   105.652, 135.0175, 285.5421, 471.5989, 670.1669, 863.9199, 863.9199 };
   graph = new TGraph(72,Graph_fx397,Graph_fy397);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph397 = new TH1F("Graph_Graph397","",100,1.44,1099.84);
   Graph_Graph397->SetMinimum(0.9503119);
   Graph_Graph397->SetMaximum(950.3119);
   Graph_Graph397->SetDirectory(nullptr);
   Graph_Graph397->SetStats(0);
   Graph_Graph397->SetLineWidth(2);
   Graph_Graph397->SetMarkerStyle(20);
   Graph_Graph397->SetMarkerSize(0.9);
   Graph_Graph397->GetXaxis()->SetLabelFont(42);
   Graph_Graph397->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph397->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph397->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph397->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph397->GetXaxis()->SetTitleFont(42);
   Graph_Graph397->GetYaxis()->SetLabelFont(42);
   Graph_Graph397->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph397->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph397->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph397->GetYaxis()->SetTickLength(0.02);
   Graph_Graph397->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph397->GetYaxis()->SetTitleFont(42);
   Graph_Graph397->GetZaxis()->SetLabelFont(42);
   Graph_Graph397->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph397->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph397->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph397->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph397->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph397);
   
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
   
   Double_t Graph_fx399[72] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180, 185, 190, 195, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450,
   475, 500, 600, 700, 800, 900, 1000 };
   Double_t Graph_fy399[72] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5.723841e-304, 7.312337e-290, 5.528304e-277, 3.522277e-265, 2.545137e-254,
   5.102148e-235, 2.106316e-226, 2.209835e-218, 6.757409e-211, 1.817443e-191, 6.800497e-180, 1.627331e-165, 1.18522e-156, 1.315135e-145, 1.386531e-138, 7.449493e-130, 2.500918e-46, 9.882706e-38, 1.321266e-31, 5.067103e-27, 1.826029e-23,
   1.25946e-20, 2.613613e-18, 2.20568e-16, 2.291248e-13, 3.649704e-12, 4.089336e-11, 3.43059e-10, 2.261912e-09, 1.195468e-08, 5.336209e-08, 7.026781e-07, 5.978838e-06, 3.636637e-05, 0.0001699433, 0.0006432318, 0.002051611,
   0.005683933, 0.01400464, 0.0211632, 0.03126478, 0.04523324, 0.06419108, 0.2894307, 0.9511513, 2.486437, 5.4802, 10.60103, 18.52026, 29.83761, 45.02719, 64.40805, 88.13688,
   116.2172, 148.5193, 314.0963, 518.7588, 737.1836, 950.3119, 950.3119 };
   graph = new TGraph(72,Graph_fx399,Graph_fy399);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph399 = new TH1F("Graph_Graph399","",100,1.44,1099.84);
   Graph_Graph399->SetMinimum(1.045343);
   Graph_Graph399->SetMaximum(1045.343);
   Graph_Graph399->SetDirectory(nullptr);
   Graph_Graph399->SetStats(0);
   Graph_Graph399->SetLineWidth(2);
   Graph_Graph399->SetMarkerStyle(20);
   Graph_Graph399->SetMarkerSize(0.9);
   Graph_Graph399->GetXaxis()->SetLabelFont(42);
   Graph_Graph399->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph399->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph399->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph399->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph399->GetXaxis()->SetTitleFont(42);
   Graph_Graph399->GetYaxis()->SetLabelFont(42);
   Graph_Graph399->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph399->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph399->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph399->GetYaxis()->SetTickLength(0.02);
   Graph_Graph399->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph399->GetYaxis()->SetTitleFont(42);
   Graph_Graph399->GetZaxis()->SetLabelFont(42);
   Graph_Graph399->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph399->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph399->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph399->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph399->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph399);
   
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
   line = new TLine(367.3384,0,367.3384,23.43675);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(367.3334,0,"  367.34 TeV");

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
   pt_LaTex = pt->AddText("#varepsilon = 4.96e-07");
   pt_LaTex = pt->AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
