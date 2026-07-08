#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_17mnthNorm_rate_Vol_7.12e-07()
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
   
   Double_t Graph0_fx456[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy456[20] = { 87.81109, 7.17615, 6.310367, 4.949822, 4.540165, 4.328125, 4.208751, 5.772179, 7.953115, 10.36692, 12.68648, 23.27674, 23.92231, 23.2048, 23.65032, 23.42627, 22.45407,
   23.48842, 23.57745, 23.57745 };
   TGraph *graph = new TGraph(20,Graph0_fx456,Graph0_fy456);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0456 = new TH1F("Graph_Graph0456","",100,2.7,1099.7);
   Graph_Graph0456->SetMinimum(0.2);
   Graph_Graph0456->SetMaximum(100000);
   Graph_Graph0456->SetDirectory(nullptr);
   Graph_Graph0456->SetStats(0);
   Graph_Graph0456->SetLineWidth(2);
   Graph_Graph0456->SetMarkerStyle(20);
   Graph_Graph0456->SetMarkerSize(0.9);
   Graph_Graph0456->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0456->GetXaxis()->SetRange(0,91);
   Graph_Graph0456->GetXaxis()->SetLabelFont(42);
   Graph_Graph0456->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0456->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0456->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0456->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0456->GetXaxis()->SetTitleFont(42);
   Graph_Graph0456->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0456->GetYaxis()->SetLabelFont(42);
   Graph_Graph0456->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0456->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0456->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0456->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0456->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0456->GetYaxis()->SetTitleFont(42);
   Graph_Graph0456->GetZaxis()->SetLabelFont(42);
   Graph_Graph0456->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0456->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0456->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0456->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0456->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0456);
   
   graph->Draw("al");
   
   Double_t Graph1_fx457[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph1_fy457[42] = { 225.9655, 19.13919, 18.1301, 14.63901, 13.37994, 12.81698, 12.47269, 17.55231, 24.1842, 31.52421, 38.57764, 70.78099, 72.74408, 70.56223, 71.91698, 71.23569, 68.27937,
   71.42468, 71.69539, 71.69539, 71.69539, 6.092538, 6.092538, 6.092538, 6.069666, 5.838785, 6.052617, 6.112515, 6.009083, 6.168825, 6.026643, 3.582317, 2.980722,
   2.357333, 1.800408, 1.631254, 1.700126, 1.798089, 1.955746, 2.482647, 3.165121, 37.09668 };
   graph = new TGraph(42,Graph1_fx457,Graph1_fy457);
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
   
   TH1F *Graph_Graph1457 = new TH1F("Graph_Graph1457","Graph",100,2.7,1099.7);
   Graph_Graph1457->SetMinimum(1.468128);
   Graph_Graph1457->SetMaximum(248.399);
   Graph_Graph1457->SetDirectory(nullptr);
   Graph_Graph1457->SetStats(0);
   Graph_Graph1457->SetLineWidth(2);
   Graph_Graph1457->SetMarkerStyle(20);
   Graph_Graph1457->SetMarkerSize(0.9);
   Graph_Graph1457->GetXaxis()->SetLabelFont(42);
   Graph_Graph1457->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1457->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1457->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1457->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1457->GetXaxis()->SetTitleFont(42);
   Graph_Graph1457->GetYaxis()->SetLabelFont(42);
   Graph_Graph1457->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1457->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1457->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1457->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1457->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1457->GetYaxis()->SetTitleFont(42);
   Graph_Graph1457->GetZaxis()->SetLabelFont(42);
   Graph_Graph1457->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1457->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1457->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1457->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1457->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1457);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx458[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph2_fy458[42] = { 144.1124, 11.76302, 11.14282, 8.951492, 8.21902, 7.927551, 7.760462, 11.62097, 16.04632, 20.9452, 25.63201, 47.02878, 48.3331, 46.88342, 47.78356, 47.33089, 45.36663,
   47.45646, 47.63632, 47.63632, 47.63632, 10.87734, 10.87734, 10.87734, 10.83851, 10.39067, 10.81232, 10.90918, 10.71541, 11.02763, 10.7485, 6.147948, 5.098804,
   3.985781, 2.984814, 2.485988, 2.572454, 2.710829, 2.954348, 3.74544, 4.563699, 54.90678 };
   graph = new TGraph(42,Graph2_fx458,Graph2_fy458);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2458 = new TH1F("Graph_Graph2458","Graph",100,2.7,1099.7);
   Graph_Graph2458->SetMinimum(2.237389);
   Graph_Graph2458->SetMaximum(158.2751);
   Graph_Graph2458->SetDirectory(nullptr);
   Graph_Graph2458->SetStats(0);
   Graph_Graph2458->SetLineWidth(2);
   Graph_Graph2458->SetMarkerStyle(20);
   Graph_Graph2458->SetMarkerSize(0.9);
   Graph_Graph2458->GetXaxis()->SetLabelFont(42);
   Graph_Graph2458->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2458->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2458->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2458->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2458->GetXaxis()->SetTitleFont(42);
   Graph_Graph2458->GetYaxis()->SetLabelFont(42);
   Graph_Graph2458->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2458->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2458->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2458->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2458->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2458->GetYaxis()->SetTitleFont(42);
   Graph_Graph2458->GetZaxis()->SetLabelFont(42);
   Graph_Graph2458->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2458->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2458->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2458->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2458->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2458);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx459[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy459[20] = { 87.81109, 7.17615, 6.310367, 4.949822, 4.540165, 4.328125, 4.208751, 5.772179, 7.953115, 10.36692, 12.68648, 23.27674, 23.92231, 23.2048, 23.65032, 23.42627, 22.45407,
   23.48842, 23.57745, 23.57745 };
   graph = new TGraph(20,Graph0_fx459,Graph0_fy459);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0459 = new TH1F("Graph_Graph0459","",100,2.7,1099.7);
   Graph_Graph0459->SetMinimum(0.2);
   Graph_Graph0459->SetMaximum(100000);
   Graph_Graph0459->SetDirectory(nullptr);
   Graph_Graph0459->SetStats(0);
   Graph_Graph0459->SetLineWidth(2);
   Graph_Graph0459->SetMarkerStyle(20);
   Graph_Graph0459->SetMarkerSize(0.9);
   Graph_Graph0459->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0459->GetXaxis()->SetRange(0,91);
   Graph_Graph0459->GetXaxis()->SetLabelFont(42);
   Graph_Graph0459->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0459->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0459->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0459->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0459->GetXaxis()->SetTitleFont(42);
   Graph_Graph0459->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0459->GetYaxis()->SetLabelFont(42);
   Graph_Graph0459->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0459->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0459->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0459->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0459->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0459->GetYaxis()->SetTitleFont(42);
   Graph_Graph0459->GetZaxis()->SetLabelFont(42);
   Graph_Graph0459->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0459->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0459->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0459->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0459->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0459);
   
   graph->Draw("l");
   
   Double_t Graph_fx460[72] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180, 185, 190, 195, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450,
   475, 500, 600, 700, 800, 900, 1000 };
   Double_t Graph_fy460[72] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 4.335901e-306, 6.587712e-292, 1.471347e-273, 3.776908e-101, 2.561556e-83, 1.351312e-70, 4.58805e-61, 1.164456e-53,
   9.616079e-48, 6.585375e-43, 6.976749e-39, 1.439635e-32, 4.782618e-30, 7.645136e-28, 6.693031e-26, 3.548807e-24, 1.211146e-22, 2.896934e-21, 6.929872e-19, 6.606501e-17, 3.104535e-15, 8.36939e-14, 1.446676e-12, 1.742854e-11,
   1.559825e-10, 1.089871e-09, 2.658709e-09, 6.182794e-09, 1.375695e-08, 2.938512e-08, 7.793761e-07, 1.057041e-05, 8.813025e-05, 0.0005106207, 0.002237828, 0.007880671, 0.02330912, 0.05985514, 0.1368583, 0.2841575,
   0.5441047, 0.9727566, 5.956816, 21.02441, 52.80672, 106.015, 106.015 };
   graph = new TGraph(72,Graph_fx460,Graph_fy460);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph460 = new TH1F("Graph_Graph460","",100,1.44,1099.84);
   Graph_Graph460->SetMinimum(0.1166165);
   Graph_Graph460->SetMaximum(116.6165);
   Graph_Graph460->SetDirectory(nullptr);
   Graph_Graph460->SetStats(0);
   Graph_Graph460->SetLineWidth(2);
   Graph_Graph460->SetMarkerStyle(20);
   Graph_Graph460->SetMarkerSize(0.9);
   Graph_Graph460->GetXaxis()->SetLabelFont(42);
   Graph_Graph460->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph460->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph460->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph460->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph460->GetXaxis()->SetTitleFont(42);
   Graph_Graph460->GetYaxis()->SetLabelFont(42);
   Graph_Graph460->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph460->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph460->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph460->GetYaxis()->SetTickLength(0.02);
   Graph_Graph460->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph460->GetYaxis()->SetTitleFont(42);
   Graph_Graph460->GetZaxis()->SetLabelFont(42);
   Graph_Graph460->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph460->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph460->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph460->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph460->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph460);
   
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
   
   Double_t Graph_fx462[72] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180, 185, 190, 195, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450,
   475, 500, 600, 700, 800, 900, 1000 };
   Double_t Graph_fy462[72] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 4.769491e-306, 7.246483e-292, 1.618482e-273, 4.154599e-101, 2.817712e-83, 1.486443e-70, 5.046855e-61, 1.280902e-53,
   1.057769e-47, 7.243913e-43, 7.674424e-39, 1.583599e-32, 5.26088e-30, 8.40965e-28, 7.362334e-26, 3.903688e-24, 1.332261e-22, 3.186627e-21, 7.622859e-19, 7.267151e-17, 3.414989e-15, 9.206329e-14, 1.591344e-12, 1.917139e-11,
   1.715808e-10, 1.198858e-09, 2.92458e-09, 6.801073e-09, 1.513264e-08, 3.232363e-08, 8.573137e-07, 1.162745e-05, 9.694328e-05, 0.0005616828, 0.002461611, 0.008668738, 0.02564003, 0.06584065, 0.1505441, 0.3125733,
   0.5985152, 1.070032, 6.552498, 23.12685, 58.08739, 116.6165, 116.6165 };
   graph = new TGraph(72,Graph_fx462,Graph_fy462);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph462 = new TH1F("Graph_Graph462","",100,1.44,1099.84);
   Graph_Graph462->SetMinimum(0.1282782);
   Graph_Graph462->SetMaximum(128.2782);
   Graph_Graph462->SetDirectory(nullptr);
   Graph_Graph462->SetStats(0);
   Graph_Graph462->SetLineWidth(2);
   Graph_Graph462->SetMarkerStyle(20);
   Graph_Graph462->SetMarkerSize(0.9);
   Graph_Graph462->GetXaxis()->SetLabelFont(42);
   Graph_Graph462->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph462->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph462->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph462->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph462->GetXaxis()->SetTitleFont(42);
   Graph_Graph462->GetYaxis()->SetLabelFont(42);
   Graph_Graph462->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph462->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph462->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph462->GetYaxis()->SetTickLength(0.02);
   Graph_Graph462->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph462->GetYaxis()->SetTitleFont(42);
   Graph_Graph462->GetZaxis()->SetLabelFont(42);
   Graph_Graph462->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph462->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph462->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph462->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph462->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph462);
   
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
   line = new TLine(707.5107,0,707.5107,22.53015);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(707.5057,0,"  707.51 TeV");

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
   pt_LaTex = pt->AddText("#varepsilon = 7.12e-07");
   pt_LaTex = pt->AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
