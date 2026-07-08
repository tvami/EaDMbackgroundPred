#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_17mnthNorm_rate_Vol_8.8e-07()
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
   
   Double_t Graph0_fx505[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy505[20] = { 87.81109, 7.17615, 6.310367, 4.949822, 4.540165, 4.328125, 4.208751, 5.772179, 7.953115, 10.36692, 12.68648, 23.27674, 23.92231, 23.2048, 23.65032, 23.42627, 22.45407,
   23.48842, 23.57745, 23.57745 };
   TGraph *graph = new TGraph(20,Graph0_fx505,Graph0_fy505);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0505 = new TH1F("Graph_Graph0505","",100,2.7,1099.7);
   Graph_Graph0505->SetMinimum(0.2);
   Graph_Graph0505->SetMaximum(100000);
   Graph_Graph0505->SetDirectory(nullptr);
   Graph_Graph0505->SetStats(0);
   Graph_Graph0505->SetLineWidth(2);
   Graph_Graph0505->SetMarkerStyle(20);
   Graph_Graph0505->SetMarkerSize(0.9);
   Graph_Graph0505->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0505->GetXaxis()->SetRange(0,91);
   Graph_Graph0505->GetXaxis()->SetLabelFont(42);
   Graph_Graph0505->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0505->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0505->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0505->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0505->GetXaxis()->SetTitleFont(42);
   Graph_Graph0505->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0505->GetYaxis()->SetLabelFont(42);
   Graph_Graph0505->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0505->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0505->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0505->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0505->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0505->GetYaxis()->SetTitleFont(42);
   Graph_Graph0505->GetZaxis()->SetLabelFont(42);
   Graph_Graph0505->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0505->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0505->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0505->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0505->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0505);
   
   graph->Draw("al");
   
   Double_t Graph1_fx506[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph1_fy506[42] = { 225.9655, 19.13919, 18.1301, 14.63901, 13.37994, 12.81698, 12.47269, 17.55231, 24.1842, 31.52421, 38.57764, 70.78099, 72.74408, 70.56223, 71.91698, 71.23569, 68.27937,
   71.42468, 71.69539, 71.69539, 71.69539, 6.092538, 6.092538, 6.092538, 6.069666, 5.838785, 6.052617, 6.112515, 6.009083, 6.168825, 6.026643, 3.582317, 2.980722,
   2.357333, 1.800408, 1.631254, 1.700126, 1.798089, 1.955746, 2.482647, 3.165121, 37.09668 };
   graph = new TGraph(42,Graph1_fx506,Graph1_fy506);
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
   
   TH1F *Graph_Graph1506 = new TH1F("Graph_Graph1506","Graph",100,2.7,1099.7);
   Graph_Graph1506->SetMinimum(1.468128);
   Graph_Graph1506->SetMaximum(248.399);
   Graph_Graph1506->SetDirectory(nullptr);
   Graph_Graph1506->SetStats(0);
   Graph_Graph1506->SetLineWidth(2);
   Graph_Graph1506->SetMarkerStyle(20);
   Graph_Graph1506->SetMarkerSize(0.9);
   Graph_Graph1506->GetXaxis()->SetLabelFont(42);
   Graph_Graph1506->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1506->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1506->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1506->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1506->GetXaxis()->SetTitleFont(42);
   Graph_Graph1506->GetYaxis()->SetLabelFont(42);
   Graph_Graph1506->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1506->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1506->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1506->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1506->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1506->GetYaxis()->SetTitleFont(42);
   Graph_Graph1506->GetZaxis()->SetLabelFont(42);
   Graph_Graph1506->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1506->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1506->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1506->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1506->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1506);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx507[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph2_fy507[42] = { 144.1124, 11.76302, 11.14282, 8.951492, 8.21902, 7.927551, 7.760462, 11.62097, 16.04632, 20.9452, 25.63201, 47.02878, 48.3331, 46.88342, 47.78356, 47.33089, 45.36663,
   47.45646, 47.63632, 47.63632, 47.63632, 10.87734, 10.87734, 10.87734, 10.83851, 10.39067, 10.81232, 10.90918, 10.71541, 11.02763, 10.7485, 6.147948, 5.098804,
   3.985781, 2.984814, 2.485988, 2.572454, 2.710829, 2.954348, 3.74544, 4.563699, 54.90678 };
   graph = new TGraph(42,Graph2_fx507,Graph2_fy507);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2507 = new TH1F("Graph_Graph2507","Graph",100,2.7,1099.7);
   Graph_Graph2507->SetMinimum(2.237389);
   Graph_Graph2507->SetMaximum(158.2751);
   Graph_Graph2507->SetDirectory(nullptr);
   Graph_Graph2507->SetStats(0);
   Graph_Graph2507->SetLineWidth(2);
   Graph_Graph2507->SetMarkerStyle(20);
   Graph_Graph2507->SetMarkerSize(0.9);
   Graph_Graph2507->GetXaxis()->SetLabelFont(42);
   Graph_Graph2507->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2507->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2507->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2507->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2507->GetXaxis()->SetTitleFont(42);
   Graph_Graph2507->GetYaxis()->SetLabelFont(42);
   Graph_Graph2507->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2507->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2507->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2507->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2507->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2507->GetYaxis()->SetTitleFont(42);
   Graph_Graph2507->GetZaxis()->SetLabelFont(42);
   Graph_Graph2507->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2507->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2507->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2507->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2507->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2507);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx508[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy508[20] = { 87.81109, 7.17615, 6.310367, 4.949822, 4.540165, 4.328125, 4.208751, 5.772179, 7.953115, 10.36692, 12.68648, 23.27674, 23.92231, 23.2048, 23.65032, 23.42627, 22.45407,
   23.48842, 23.57745, 23.57745 };
   graph = new TGraph(20,Graph0_fx508,Graph0_fy508);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0508 = new TH1F("Graph_Graph0508","",100,2.7,1099.7);
   Graph_Graph0508->SetMinimum(0.2);
   Graph_Graph0508->SetMaximum(100000);
   Graph_Graph0508->SetDirectory(nullptr);
   Graph_Graph0508->SetStats(0);
   Graph_Graph0508->SetLineWidth(2);
   Graph_Graph0508->SetMarkerStyle(20);
   Graph_Graph0508->SetMarkerSize(0.9);
   Graph_Graph0508->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0508->GetXaxis()->SetRange(0,91);
   Graph_Graph0508->GetXaxis()->SetLabelFont(42);
   Graph_Graph0508->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0508->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0508->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0508->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0508->GetXaxis()->SetTitleFont(42);
   Graph_Graph0508->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0508->GetYaxis()->SetLabelFont(42);
   Graph_Graph0508->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0508->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0508->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0508->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0508->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0508->GetYaxis()->SetTitleFont(42);
   Graph_Graph0508->GetZaxis()->SetLabelFont(42);
   Graph_Graph0508->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0508->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0508->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0508->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0508->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0508);
   
   graph->Draw("l");
   
   Double_t Graph_fx509[72] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180, 185, 190, 195, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450,
   475, 500, 600, 700, 800, 900, 1000 };
   Double_t Graph_fy509[72] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1.417066e-157, 2.807881e-130, 8.546525e-111, 3.416113e-96, 7.62145e-85,
   8.997485e-76, 2.350921e-68, 3.528496e-62, 1.748921e-52, 1.307423e-48, 3.186684e-45, 3.087307e-42, 1.38689e-39, 3.202394e-37, 4.280586e-35, 2.000127e-31, 2.269569e-28, 8.67212e-26, 1.409149e-23, 1.155449e-21, 5.435537e-20,
   1.618299e-18, 3.291242e-17, 1.311732e-16, 4.856558e-16, 1.679879e-15, 5.456506e-15, 8.898908e-13, 5.160879e-11, 1.412745e-09, 2.204414e-08, 2.234006e-07, 1.613892e-06, 8.897824e-06, 3.940036e-05, 0.0001457037, 0.0004638304,
   0.001301806, 0.003283411, 0.05978839, 0.459605, 2.069636, 6.542934, 6.542934 };
   graph = new TGraph(72,Graph_fx509,Graph_fy509);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph509 = new TH1F("Graph_Graph509","",100,1.44,1099.84);
   Graph_Graph509->SetMinimum(0.007197227);
   Graph_Graph509->SetMaximum(7.197227);
   Graph_Graph509->SetDirectory(nullptr);
   Graph_Graph509->SetStats(0);
   Graph_Graph509->SetLineWidth(2);
   Graph_Graph509->SetMarkerStyle(20);
   Graph_Graph509->SetMarkerSize(0.9);
   Graph_Graph509->GetXaxis()->SetLabelFont(42);
   Graph_Graph509->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph509->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph509->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph509->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph509->GetXaxis()->SetTitleFont(42);
   Graph_Graph509->GetYaxis()->SetLabelFont(42);
   Graph_Graph509->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph509->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph509->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph509->GetYaxis()->SetTickLength(0.02);
   Graph_Graph509->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph509->GetYaxis()->SetTitleFont(42);
   Graph_Graph509->GetZaxis()->SetLabelFont(42);
   Graph_Graph509->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph509->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph509->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph509->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph509->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph509);
   
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
   
   Double_t Graph_fx511[72] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180, 185, 190, 195, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450,
   475, 500, 600, 700, 800, 900, 1000 };
   Double_t Graph_fy511[72] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1.558773e-157, 3.088669e-130, 9.401178e-111, 3.757724e-96, 8.383595e-85,
   9.897233e-76, 2.586013e-68, 3.881346e-62, 1.923813e-52, 1.438165e-48, 3.505352e-45, 3.396038e-42, 1.525579e-39, 3.522633e-37, 4.708645e-35, 2.20014e-31, 2.496526e-28, 9.539332e-26, 1.550064e-23, 1.270994e-21, 5.979091e-20,
   1.780129e-18, 3.620366e-17, 1.442905e-16, 5.342214e-16, 1.847867e-15, 6.002157e-15, 9.788799e-13, 5.676967e-11, 1.55402e-09, 2.424855e-08, 2.457407e-07, 1.775281e-06, 9.787606e-06, 4.33404e-05, 0.0001602741, 0.0005102134,
   0.001431987, 0.003611752, 0.06576723, 0.5055655, 2.2766, 7.197227, 7.197227 };
   graph = new TGraph(72,Graph_fx511,Graph_fy511);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph511 = new TH1F("Graph_Graph511","",100,1.44,1099.84);
   Graph_Graph511->SetMinimum(0.00791695);
   Graph_Graph511->SetMaximum(7.91695);
   Graph_Graph511->SetDirectory(nullptr);
   Graph_Graph511->SetStats(0);
   Graph_Graph511->SetLineWidth(2);
   Graph_Graph511->SetMarkerStyle(20);
   Graph_Graph511->SetMarkerSize(0.9);
   Graph_Graph511->GetXaxis()->SetLabelFont(42);
   Graph_Graph511->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph511->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph511->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph511->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph511->GetXaxis()->SetTitleFont(42);
   Graph_Graph511->GetYaxis()->SetLabelFont(42);
   Graph_Graph511->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph511->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph511->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph511->GetYaxis()->SetTickLength(0.02);
   Graph_Graph511->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph511->GetYaxis()->SetTitleFont(42);
   Graph_Graph511->GetZaxis()->SetLabelFont(42);
   Graph_Graph511->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph511->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph511->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph511->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph511->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph511);
   
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
   pt_LaTex = pt->AddText("#varepsilon = 8.8e-07");
   pt_LaTex = pt->AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
