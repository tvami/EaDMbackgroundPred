#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_17mnthNorm_rate_Vol_1.9e-08()
{
//=========Macro generated from canvas: climits/climits
//=========  (Sat Jul  4 12:17:23 2026) by ROOT version 6.30/07
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
   
   Double_t Graph0_fx106[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy106[20] = { 87.81109, 7.17615, 6.310367, 4.949822, 4.540165, 4.328125, 4.208751, 5.772179, 7.953115, 10.36692, 12.68648, 23.27674, 23.92231, 23.2048, 23.65032, 23.42627, 22.45407,
   23.48842, 23.57745, 23.57745 };
   TGraph *graph = new TGraph(20,Graph0_fx106,Graph0_fy106);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0106 = new TH1F("Graph_Graph0106","",100,2.7,1099.7);
   Graph_Graph0106->SetMinimum(0.2);
   Graph_Graph0106->SetMaximum(100000);
   Graph_Graph0106->SetDirectory(nullptr);
   Graph_Graph0106->SetStats(0);
   Graph_Graph0106->SetLineWidth(2);
   Graph_Graph0106->SetMarkerStyle(20);
   Graph_Graph0106->SetMarkerSize(0.9);
   Graph_Graph0106->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0106->GetXaxis()->SetRange(0,91);
   Graph_Graph0106->GetXaxis()->SetLabelFont(42);
   Graph_Graph0106->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0106->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0106->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0106->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0106->GetXaxis()->SetTitleFont(42);
   Graph_Graph0106->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0106->GetYaxis()->SetLabelFont(42);
   Graph_Graph0106->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0106->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0106->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0106->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0106->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0106->GetYaxis()->SetTitleFont(42);
   Graph_Graph0106->GetZaxis()->SetLabelFont(42);
   Graph_Graph0106->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0106->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0106->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0106->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0106->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0106);
   
   graph->Draw("al");
   
   Double_t Graph1_fx107[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph1_fy107[42] = { 225.9655, 19.13919, 18.1301, 14.63901, 13.37994, 12.81698, 12.47269, 17.55231, 24.1842, 31.52421, 38.57764, 70.78099, 72.74408, 70.56223, 71.91698, 71.23569, 68.27937,
   71.42468, 71.69539, 71.69539, 71.69539, 6.092538, 6.092538, 6.092538, 6.069666, 5.838785, 6.052617, 6.112515, 6.009083, 6.168825, 6.026643, 3.582317, 2.980722,
   2.357333, 1.800408, 1.631254, 1.700126, 1.798089, 1.955746, 2.482647, 3.165121, 37.09668 };
   graph = new TGraph(42,Graph1_fx107,Graph1_fy107);
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
   
   TH1F *Graph_Graph1107 = new TH1F("Graph_Graph1107","Graph",100,2.7,1099.7);
   Graph_Graph1107->SetMinimum(1.468128);
   Graph_Graph1107->SetMaximum(248.399);
   Graph_Graph1107->SetDirectory(nullptr);
   Graph_Graph1107->SetStats(0);
   Graph_Graph1107->SetLineWidth(2);
   Graph_Graph1107->SetMarkerStyle(20);
   Graph_Graph1107->SetMarkerSize(0.9);
   Graph_Graph1107->GetXaxis()->SetLabelFont(42);
   Graph_Graph1107->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1107->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1107->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1107->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1107->GetXaxis()->SetTitleFont(42);
   Graph_Graph1107->GetYaxis()->SetLabelFont(42);
   Graph_Graph1107->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1107->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1107->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1107->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1107->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1107->GetYaxis()->SetTitleFont(42);
   Graph_Graph1107->GetZaxis()->SetLabelFont(42);
   Graph_Graph1107->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1107->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1107->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1107->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1107->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1107);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx108[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph2_fy108[42] = { 144.1124, 11.76302, 11.14282, 8.951492, 8.21902, 7.927551, 7.760462, 11.62097, 16.04632, 20.9452, 25.63201, 47.02878, 48.3331, 46.88342, 47.78356, 47.33089, 45.36663,
   47.45646, 47.63632, 47.63632, 47.63632, 10.87734, 10.87734, 10.87734, 10.83851, 10.39067, 10.81232, 10.90918, 10.71541, 11.02763, 10.7485, 6.147948, 5.098804,
   3.985781, 2.984814, 2.485988, 2.572454, 2.710829, 2.954348, 3.74544, 4.563699, 54.90678 };
   graph = new TGraph(42,Graph2_fx108,Graph2_fy108);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2108 = new TH1F("Graph_Graph2108","Graph",100,2.7,1099.7);
   Graph_Graph2108->SetMinimum(2.237389);
   Graph_Graph2108->SetMaximum(158.2751);
   Graph_Graph2108->SetDirectory(nullptr);
   Graph_Graph2108->SetStats(0);
   Graph_Graph2108->SetLineWidth(2);
   Graph_Graph2108->SetMarkerStyle(20);
   Graph_Graph2108->SetMarkerSize(0.9);
   Graph_Graph2108->GetXaxis()->SetLabelFont(42);
   Graph_Graph2108->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2108->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2108->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2108->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2108->GetXaxis()->SetTitleFont(42);
   Graph_Graph2108->GetYaxis()->SetLabelFont(42);
   Graph_Graph2108->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2108->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2108->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2108->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2108->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2108->GetYaxis()->SetTitleFont(42);
   Graph_Graph2108->GetZaxis()->SetLabelFont(42);
   Graph_Graph2108->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2108->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2108->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2108->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2108->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2108);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx109[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy109[20] = { 87.81109, 7.17615, 6.310367, 4.949822, 4.540165, 4.328125, 4.208751, 5.772179, 7.953115, 10.36692, 12.68648, 23.27674, 23.92231, 23.2048, 23.65032, 23.42627, 22.45407,
   23.48842, 23.57745, 23.57745 };
   graph = new TGraph(20,Graph0_fx109,Graph0_fy109);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0109 = new TH1F("Graph_Graph0109","",100,2.7,1099.7);
   Graph_Graph0109->SetMinimum(0.2);
   Graph_Graph0109->SetMaximum(100000);
   Graph_Graph0109->SetDirectory(nullptr);
   Graph_Graph0109->SetStats(0);
   Graph_Graph0109->SetLineWidth(2);
   Graph_Graph0109->SetMarkerStyle(20);
   Graph_Graph0109->SetMarkerSize(0.9);
   Graph_Graph0109->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0109->GetXaxis()->SetRange(0,91);
   Graph_Graph0109->GetXaxis()->SetLabelFont(42);
   Graph_Graph0109->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0109->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0109->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0109->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0109->GetXaxis()->SetTitleFont(42);
   Graph_Graph0109->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0109->GetYaxis()->SetLabelFont(42);
   Graph_Graph0109->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0109->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0109->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0109->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0109->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0109->GetYaxis()->SetTitleFont(42);
   Graph_Graph0109->GetZaxis()->SetLabelFont(42);
   Graph_Graph0109->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0109->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0109->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0109->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0109->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0109);
   
   graph->Draw("l");
   
   Double_t Graph_fx110[72] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180, 185, 190, 195, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450,
   475, 500, 600, 700, 800, 900, 1000 };
   Double_t Graph_fy110[72] = { 24.737, 28.51965, 31.46855, 33.67855, 36.34059, 37.00486, 37.34242, 37.42296, 37.30307, 37.02826, 36.6349, 36.15198, 35.60253, 35.00481, 34.37328, 33.71938, 33.05213,
   31.7044, 31.03381, 30.37019, 29.71611, 28.13592, 26.64094, 25.24526, 23.94156, 22.73402, 21.6103, 20.57114, 7.147907, 5.713368, 4.709354, 3.973714, 3.415212,
   2.979019, 2.6304, 2.346385, 1.913842, 1.746153, 1.602209, 1.477513, 1.368608, 1.249406, 1.14822, 0.986267, 0.8627658, 0.7656113, 0.6871771, 0.622483, 0.568167,
   0.5218886, 0.4819714, 0.4640002, 0.4471838, 0.4314148, 0.4165992, 0.354228, 0.306467, 0.2688374, 0.2385195, 0.2136429, 0.1929168, 0.1754224, 0.1604886, 0.1476144, 0.1364188,
   0.1266076, 0.1179498, 0.09167991, 0.07407548, 0.06157549, 0.05230847, 0.05230847 };
   graph = new TGraph(72,Graph_fx110,Graph_fy110);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph110 = new TH1F("Graph_Graph110","",100,1.44,1099.84);
   Graph_Graph110->SetMinimum(0.04707762);
   Graph_Graph110->SetMaximum(41.16003);
   Graph_Graph110->SetDirectory(nullptr);
   Graph_Graph110->SetStats(0);
   Graph_Graph110->SetLineWidth(2);
   Graph_Graph110->SetMarkerStyle(20);
   Graph_Graph110->SetMarkerSize(0.9);
   Graph_Graph110->GetXaxis()->SetLabelFont(42);
   Graph_Graph110->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph110->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph110->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph110->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph110->GetXaxis()->SetTitleFont(42);
   Graph_Graph110->GetYaxis()->SetLabelFont(42);
   Graph_Graph110->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph110->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph110->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph110->GetYaxis()->SetTickLength(0.02);
   Graph_Graph110->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph110->GetYaxis()->SetTitleFont(42);
   Graph_Graph110->GetZaxis()->SetLabelFont(42);
   Graph_Graph110->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph110->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph110->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph110->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph110->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph110);
   
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
   
   Double_t Graph_fx112[72] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180, 185, 190, 195, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450,
   475, 500, 600, 700, 800, 900, 1000 };
   Double_t Graph_fy112[72] = { 27.2107, 31.37162, 34.61541, 37.04641, 39.97465, 40.70535, 41.07666, 41.16526, 41.03338, 40.73109, 40.29839, 39.76718, 39.16278, 38.50529, 37.81061, 37.09132, 36.35734,
   34.87484, 34.13719, 33.40721, 32.68772, 30.94951, 29.30503, 27.76979, 26.33572, 25.00742, 23.77133, 22.62825, 7.862698, 6.284705, 5.180289, 4.371085, 3.756733,
   3.276921, 2.89344, 2.581024, 2.105226, 1.920768, 1.76243, 1.625264, 1.505469, 1.374347, 1.263042, 1.084894, 0.9490424, 0.8421724, 0.7558948, 0.6847313, 0.6249837,
   0.5740775, 0.5301685, 0.5104002, 0.4919022, 0.4745563, 0.4582591, 0.3896508, 0.3371137, 0.2957211, 0.2623715, 0.2350072, 0.2122085, 0.1929646, 0.1765375, 0.1623758, 0.1500607,
   0.1392684, 0.1297448, 0.1008479, 0.08148303, 0.06773304, 0.05753932, 0.05753932 };
   graph = new TGraph(72,Graph_fx112,Graph_fy112);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph112 = new TH1F("Graph_Graph112","",100,1.44,1099.84);
   Graph_Graph112->SetMinimum(0.05178539);
   Graph_Graph112->SetMaximum(45.27603);
   Graph_Graph112->SetDirectory(nullptr);
   Graph_Graph112->SetStats(0);
   Graph_Graph112->SetLineWidth(2);
   Graph_Graph112->SetMarkerStyle(20);
   Graph_Graph112->SetMarkerSize(0.9);
   Graph_Graph112->GetXaxis()->SetLabelFont(42);
   Graph_Graph112->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph112->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph112->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph112->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph112->GetXaxis()->SetTitleFont(42);
   Graph_Graph112->GetYaxis()->SetLabelFont(42);
   Graph_Graph112->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph112->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph112->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph112->GetYaxis()->SetTickLength(0.02);
   Graph_Graph112->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph112->GetYaxis()->SetTitleFont(42);
   Graph_Graph112->GetZaxis()->SetLabelFont(42);
   Graph_Graph112->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph112->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph112->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph112->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph112->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph112);
   
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
   line = new TLine(3.339957,0,3.339957,37.47942);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(3.334957,0,"  3.34 TeV");

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
   pt_LaTex = pt->AddText("#varepsilon = 1.9e-08");
   pt_LaTex = pt->AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
