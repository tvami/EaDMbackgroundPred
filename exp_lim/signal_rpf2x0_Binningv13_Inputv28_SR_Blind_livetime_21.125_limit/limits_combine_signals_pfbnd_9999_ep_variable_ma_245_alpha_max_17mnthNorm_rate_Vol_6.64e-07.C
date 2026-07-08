#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_17mnthNorm_rate_Vol_6.64e-07()
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
   
   Double_t Graph0_fx442[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy442[20] = { 87.81109, 7.17615, 6.310367, 4.949822, 4.540165, 4.328125, 4.208751, 5.772179, 7.953115, 10.36692, 12.68648, 23.27674, 23.92231, 23.2048, 23.65032, 23.42627, 22.45407,
   23.48842, 23.57745, 23.57745 };
   TGraph *graph = new TGraph(20,Graph0_fx442,Graph0_fy442);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0442 = new TH1F("Graph_Graph0442","",100,2.7,1099.7);
   Graph_Graph0442->SetMinimum(0.2);
   Graph_Graph0442->SetMaximum(100000);
   Graph_Graph0442->SetDirectory(nullptr);
   Graph_Graph0442->SetStats(0);
   Graph_Graph0442->SetLineWidth(2);
   Graph_Graph0442->SetMarkerStyle(20);
   Graph_Graph0442->SetMarkerSize(0.9);
   Graph_Graph0442->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0442->GetXaxis()->SetRange(0,91);
   Graph_Graph0442->GetXaxis()->SetLabelFont(42);
   Graph_Graph0442->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0442->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0442->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0442->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0442->GetXaxis()->SetTitleFont(42);
   Graph_Graph0442->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0442->GetYaxis()->SetLabelFont(42);
   Graph_Graph0442->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0442->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0442->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0442->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0442->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0442->GetYaxis()->SetTitleFont(42);
   Graph_Graph0442->GetZaxis()->SetLabelFont(42);
   Graph_Graph0442->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0442->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0442->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0442->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0442->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0442);
   
   graph->Draw("al");
   
   Double_t Graph1_fx443[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph1_fy443[42] = { 225.9655, 19.13919, 18.1301, 14.63901, 13.37994, 12.81698, 12.47269, 17.55231, 24.1842, 31.52421, 38.57764, 70.78099, 72.74408, 70.56223, 71.91698, 71.23569, 68.27937,
   71.42468, 71.69539, 71.69539, 71.69539, 6.092538, 6.092538, 6.092538, 6.069666, 5.838785, 6.052617, 6.112515, 6.009083, 6.168825, 6.026643, 3.582317, 2.980722,
   2.357333, 1.800408, 1.631254, 1.700126, 1.798089, 1.955746, 2.482647, 3.165121, 37.09668 };
   graph = new TGraph(42,Graph1_fx443,Graph1_fy443);
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
   
   TH1F *Graph_Graph1443 = new TH1F("Graph_Graph1443","Graph",100,2.7,1099.7);
   Graph_Graph1443->SetMinimum(1.468128);
   Graph_Graph1443->SetMaximum(248.399);
   Graph_Graph1443->SetDirectory(nullptr);
   Graph_Graph1443->SetStats(0);
   Graph_Graph1443->SetLineWidth(2);
   Graph_Graph1443->SetMarkerStyle(20);
   Graph_Graph1443->SetMarkerSize(0.9);
   Graph_Graph1443->GetXaxis()->SetLabelFont(42);
   Graph_Graph1443->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1443->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1443->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1443->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1443->GetXaxis()->SetTitleFont(42);
   Graph_Graph1443->GetYaxis()->SetLabelFont(42);
   Graph_Graph1443->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1443->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1443->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1443->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1443->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1443->GetYaxis()->SetTitleFont(42);
   Graph_Graph1443->GetZaxis()->SetLabelFont(42);
   Graph_Graph1443->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1443->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1443->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1443->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1443->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1443);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx444[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph2_fy444[42] = { 144.1124, 11.76302, 11.14282, 8.951492, 8.21902, 7.927551, 7.760462, 11.62097, 16.04632, 20.9452, 25.63201, 47.02878, 48.3331, 46.88342, 47.78356, 47.33089, 45.36663,
   47.45646, 47.63632, 47.63632, 47.63632, 10.87734, 10.87734, 10.87734, 10.83851, 10.39067, 10.81232, 10.90918, 10.71541, 11.02763, 10.7485, 6.147948, 5.098804,
   3.985781, 2.984814, 2.485988, 2.572454, 2.710829, 2.954348, 3.74544, 4.563699, 54.90678 };
   graph = new TGraph(42,Graph2_fx444,Graph2_fy444);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2444 = new TH1F("Graph_Graph2444","Graph",100,2.7,1099.7);
   Graph_Graph2444->SetMinimum(2.237389);
   Graph_Graph2444->SetMaximum(158.2751);
   Graph_Graph2444->SetDirectory(nullptr);
   Graph_Graph2444->SetStats(0);
   Graph_Graph2444->SetLineWidth(2);
   Graph_Graph2444->SetMarkerStyle(20);
   Graph_Graph2444->SetMarkerSize(0.9);
   Graph_Graph2444->GetXaxis()->SetLabelFont(42);
   Graph_Graph2444->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2444->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2444->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2444->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2444->GetXaxis()->SetTitleFont(42);
   Graph_Graph2444->GetYaxis()->SetLabelFont(42);
   Graph_Graph2444->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2444->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2444->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2444->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2444->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2444->GetYaxis()->SetTitleFont(42);
   Graph_Graph2444->GetZaxis()->SetLabelFont(42);
   Graph_Graph2444->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2444->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2444->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2444->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2444->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2444);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx445[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy445[20] = { 87.81109, 7.17615, 6.310367, 4.949822, 4.540165, 4.328125, 4.208751, 5.772179, 7.953115, 10.36692, 12.68648, 23.27674, 23.92231, 23.2048, 23.65032, 23.42627, 22.45407,
   23.48842, 23.57745, 23.57745 };
   graph = new TGraph(20,Graph0_fx445,Graph0_fy445);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0445 = new TH1F("Graph_Graph0445","",100,2.7,1099.7);
   Graph_Graph0445->SetMinimum(0.2);
   Graph_Graph0445->SetMaximum(100000);
   Graph_Graph0445->SetDirectory(nullptr);
   Graph_Graph0445->SetStats(0);
   Graph_Graph0445->SetLineWidth(2);
   Graph_Graph0445->SetMarkerStyle(20);
   Graph_Graph0445->SetMarkerSize(0.9);
   Graph_Graph0445->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0445->GetXaxis()->SetRange(0,91);
   Graph_Graph0445->GetXaxis()->SetLabelFont(42);
   Graph_Graph0445->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0445->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0445->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0445->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0445->GetXaxis()->SetTitleFont(42);
   Graph_Graph0445->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0445->GetYaxis()->SetLabelFont(42);
   Graph_Graph0445->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0445->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0445->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0445->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0445->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0445->GetYaxis()->SetTitleFont(42);
   Graph_Graph0445->GetZaxis()->SetLabelFont(42);
   Graph_Graph0445->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0445->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0445->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0445->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0445->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0445);
   
   graph->Draw("l");
   
   Double_t Graph_fx446[72] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180, 185, 190, 195, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450,
   475, 500, 600, 700, 800, 900, 1000 };
   Double_t Graph_fy446[72] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 3.553176e-301, 1.656733e-285, 1.934751e-265, 4.531555e-253, 3.718012e-237, 3.027292e-87, 9.438329e-72, 1.065331e-60, 2.023534e-52, 5.453003e-46,
   7.487465e-41, 1.181435e-36, 3.683207e-33, 1.111716e-27, 1.711886e-25, 1.396379e-23, 6.751888e-22, 2.112104e-20, 4.495555e-19, 7.030457e-18, 8.072655e-16, 4.174788e-14, 1.169223e-12, 2.022744e-11, 2.380412e-10, 2.048549e-09,
   1.362553e-08, 7.312536e-08, 1.580216e-07, 3.276079e-07, 6.536923e-07, 1.259002e-06, 2.132317e-05, 0.0002020047, 0.00125572, 0.005696591, 0.02029731, 0.05985681, 0.1518062, 0.3407431, 0.6918844, 1.29267,
   2.252173, 3.698411, 17.30409, 50.39357, 109.5792, 196.6562, 196.6562 };
   graph = new TGraph(72,Graph_fx446,Graph_fy446);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph446 = new TH1F("Graph_Graph446","",100,1.44,1099.84);
   Graph_Graph446->SetMinimum(0.2163218);
   Graph_Graph446->SetMaximum(216.3218);
   Graph_Graph446->SetDirectory(nullptr);
   Graph_Graph446->SetStats(0);
   Graph_Graph446->SetLineWidth(2);
   Graph_Graph446->SetMarkerStyle(20);
   Graph_Graph446->SetMarkerSize(0.9);
   Graph_Graph446->GetXaxis()->SetLabelFont(42);
   Graph_Graph446->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph446->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph446->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph446->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph446->GetXaxis()->SetTitleFont(42);
   Graph_Graph446->GetYaxis()->SetLabelFont(42);
   Graph_Graph446->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph446->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph446->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph446->GetYaxis()->SetTickLength(0.02);
   Graph_Graph446->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph446->GetYaxis()->SetTitleFont(42);
   Graph_Graph446->GetZaxis()->SetLabelFont(42);
   Graph_Graph446->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph446->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph446->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph446->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph446->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph446);
   
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
   
   Double_t Graph_fx448[72] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180, 185, 190, 195, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450,
   475, 500, 600, 700, 800, 900, 1000 };
   Double_t Graph_fy448[72] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 3.908494e-301, 1.822406e-285, 2.128226e-265, 4.984711e-253, 4.089813e-237, 3.330021e-87, 1.038216e-71, 1.171864e-60, 2.225887e-52, 5.998303e-46,
   8.236212e-41, 1.299579e-36, 4.051528e-33, 1.222888e-27, 1.883075e-25, 1.536017e-23, 7.427077e-22, 2.323314e-20, 4.94511e-19, 7.733503e-18, 8.879921e-16, 4.592267e-14, 1.286145e-12, 2.225018e-11, 2.618453e-10, 2.253404e-09,
   1.498808e-08, 8.04379e-08, 1.738238e-07, 3.603687e-07, 7.190615e-07, 1.384902e-06, 2.345549e-05, 0.0002222052, 0.001381292, 0.00626625, 0.02232704, 0.06584249, 0.1669868, 0.3748174, 0.7610728, 1.421937,
   2.47739, 4.068252, 19.0345, 55.43293, 120.5371, 216.3218, 216.3218 };
   graph = new TGraph(72,Graph_fx448,Graph_fy448);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph448 = new TH1F("Graph_Graph448","",100,1.44,1099.84);
   Graph_Graph448->SetMinimum(0.237954);
   Graph_Graph448->SetMaximum(237.954);
   Graph_Graph448->SetDirectory(nullptr);
   Graph_Graph448->SetStats(0);
   Graph_Graph448->SetLineWidth(2);
   Graph_Graph448->SetMarkerStyle(20);
   Graph_Graph448->SetMarkerSize(0.9);
   Graph_Graph448->GetXaxis()->SetLabelFont(42);
   Graph_Graph448->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph448->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph448->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph448->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph448->GetXaxis()->SetTitleFont(42);
   Graph_Graph448->GetYaxis()->SetLabelFont(42);
   Graph_Graph448->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph448->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph448->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph448->GetYaxis()->SetTickLength(0.02);
   Graph_Graph448->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph448->GetYaxis()->SetTitleFont(42);
   Graph_Graph448->GetZaxis()->SetLabelFont(42);
   Graph_Graph448->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph448->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph448->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph448->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph448->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph448);
   
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
   line = new TLine(627.2576,0,627.2576,23.15717);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(627.2526,0,"  627.26 TeV");

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
   pt_LaTex = pt->AddText("#varepsilon = 6.64e-07");
   pt_LaTex = pt->AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
