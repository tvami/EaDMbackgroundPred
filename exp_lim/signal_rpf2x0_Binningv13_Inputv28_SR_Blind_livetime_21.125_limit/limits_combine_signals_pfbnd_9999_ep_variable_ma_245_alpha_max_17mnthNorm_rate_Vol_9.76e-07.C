#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_17mnthNorm_rate_Vol_9.76e-07()
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
   
   Double_t Graph0_fx533[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy533[20] = { 87.81109, 7.17615, 6.310367, 4.949822, 4.540165, 4.328125, 4.208751, 5.772179, 7.953115, 10.36692, 12.68648, 23.27674, 23.92231, 23.2048, 23.65032, 23.42627, 22.45407,
   23.48842, 23.57745, 23.57745 };
   TGraph *graph = new TGraph(20,Graph0_fx533,Graph0_fy533);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0533 = new TH1F("Graph_Graph0533","",100,2.7,1099.7);
   Graph_Graph0533->SetMinimum(0.2);
   Graph_Graph0533->SetMaximum(100000);
   Graph_Graph0533->SetDirectory(nullptr);
   Graph_Graph0533->SetStats(0);
   Graph_Graph0533->SetLineWidth(2);
   Graph_Graph0533->SetMarkerStyle(20);
   Graph_Graph0533->SetMarkerSize(0.9);
   Graph_Graph0533->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0533->GetXaxis()->SetRange(0,91);
   Graph_Graph0533->GetXaxis()->SetLabelFont(42);
   Graph_Graph0533->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0533->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0533->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0533->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0533->GetXaxis()->SetTitleFont(42);
   Graph_Graph0533->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0533->GetYaxis()->SetLabelFont(42);
   Graph_Graph0533->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0533->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0533->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0533->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0533->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0533->GetYaxis()->SetTitleFont(42);
   Graph_Graph0533->GetZaxis()->SetLabelFont(42);
   Graph_Graph0533->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0533->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0533->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0533->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0533->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0533);
   
   graph->Draw("al");
   
   Double_t Graph1_fx534[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph1_fy534[42] = { 225.9655, 19.13919, 18.1301, 14.63901, 13.37994, 12.81698, 12.47269, 17.55231, 24.1842, 31.52421, 38.57764, 70.78099, 72.74408, 70.56223, 71.91698, 71.23569, 68.27937,
   71.42468, 71.69539, 71.69539, 71.69539, 6.092538, 6.092538, 6.092538, 6.069666, 5.838785, 6.052617, 6.112515, 6.009083, 6.168825, 6.026643, 3.582317, 2.980722,
   2.357333, 1.800408, 1.631254, 1.700126, 1.798089, 1.955746, 2.482647, 3.165121, 37.09668 };
   graph = new TGraph(42,Graph1_fx534,Graph1_fy534);
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
   
   TH1F *Graph_Graph1534 = new TH1F("Graph_Graph1534","Graph",100,2.7,1099.7);
   Graph_Graph1534->SetMinimum(1.468128);
   Graph_Graph1534->SetMaximum(248.399);
   Graph_Graph1534->SetDirectory(nullptr);
   Graph_Graph1534->SetStats(0);
   Graph_Graph1534->SetLineWidth(2);
   Graph_Graph1534->SetMarkerStyle(20);
   Graph_Graph1534->SetMarkerSize(0.9);
   Graph_Graph1534->GetXaxis()->SetLabelFont(42);
   Graph_Graph1534->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1534->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1534->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1534->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1534->GetXaxis()->SetTitleFont(42);
   Graph_Graph1534->GetYaxis()->SetLabelFont(42);
   Graph_Graph1534->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1534->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1534->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1534->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1534->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1534->GetYaxis()->SetTitleFont(42);
   Graph_Graph1534->GetZaxis()->SetLabelFont(42);
   Graph_Graph1534->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1534->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1534->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1534->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1534->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1534);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx535[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph2_fy535[42] = { 144.1124, 11.76302, 11.14282, 8.951492, 8.21902, 7.927551, 7.760462, 11.62097, 16.04632, 20.9452, 25.63201, 47.02878, 48.3331, 46.88342, 47.78356, 47.33089, 45.36663,
   47.45646, 47.63632, 47.63632, 47.63632, 10.87734, 10.87734, 10.87734, 10.83851, 10.39067, 10.81232, 10.90918, 10.71541, 11.02763, 10.7485, 6.147948, 5.098804,
   3.985781, 2.984814, 2.485988, 2.572454, 2.710829, 2.954348, 3.74544, 4.563699, 54.90678 };
   graph = new TGraph(42,Graph2_fx535,Graph2_fy535);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2535 = new TH1F("Graph_Graph2535","Graph",100,2.7,1099.7);
   Graph_Graph2535->SetMinimum(2.237389);
   Graph_Graph2535->SetMaximum(158.2751);
   Graph_Graph2535->SetDirectory(nullptr);
   Graph_Graph2535->SetStats(0);
   Graph_Graph2535->SetLineWidth(2);
   Graph_Graph2535->SetMarkerStyle(20);
   Graph_Graph2535->SetMarkerSize(0.9);
   Graph_Graph2535->GetXaxis()->SetLabelFont(42);
   Graph_Graph2535->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2535->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2535->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2535->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2535->GetXaxis()->SetTitleFont(42);
   Graph_Graph2535->GetYaxis()->SetLabelFont(42);
   Graph_Graph2535->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2535->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2535->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2535->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2535->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2535->GetYaxis()->SetTitleFont(42);
   Graph_Graph2535->GetZaxis()->SetLabelFont(42);
   Graph_Graph2535->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2535->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2535->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2535->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2535->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2535);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx536[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy536[20] = { 87.81109, 7.17615, 6.310367, 4.949822, 4.540165, 4.328125, 4.208751, 5.772179, 7.953115, 10.36692, 12.68648, 23.27674, 23.92231, 23.2048, 23.65032, 23.42627, 22.45407,
   23.48842, 23.57745, 23.57745 };
   graph = new TGraph(20,Graph0_fx536,Graph0_fy536);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0536 = new TH1F("Graph_Graph0536","",100,2.7,1099.7);
   Graph_Graph0536->SetMinimum(0.2);
   Graph_Graph0536->SetMaximum(100000);
   Graph_Graph0536->SetDirectory(nullptr);
   Graph_Graph0536->SetStats(0);
   Graph_Graph0536->SetLineWidth(2);
   Graph_Graph0536->SetMarkerStyle(20);
   Graph_Graph0536->SetMarkerSize(0.9);
   Graph_Graph0536->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0536->GetXaxis()->SetRange(0,91);
   Graph_Graph0536->GetXaxis()->SetLabelFont(42);
   Graph_Graph0536->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0536->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0536->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0536->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0536->GetXaxis()->SetTitleFont(42);
   Graph_Graph0536->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0536->GetYaxis()->SetLabelFont(42);
   Graph_Graph0536->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0536->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0536->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0536->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0536->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0536->GetYaxis()->SetTitleFont(42);
   Graph_Graph0536->GetZaxis()->SetLabelFont(42);
   Graph_Graph0536->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0536->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0536->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0536->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0536->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0536);
   
   graph->Draw("l");
   
   Double_t Graph_fx537[72] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180, 185, 190, 195, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450,
   475, 500, 600, 700, 800, 900, 1000 };
   Double_t Graph_fy537[72] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3.132875e-195, 1.255489e-161, 1.220186e-137, 1.164986e-119, 1.102245e-105,
   1.645598e-94, 2.255422e-85, 9.177731e-78, 8.12865e-66, 4.836213e-61, 7.238764e-57, 3.478624e-53, 6.487752e-50, 5.353958e-47, 2.251836e-44, 7.620526e-40, 4.502453e-36, 6.949708e-33, 3.736924e-30, 8.64428e-28, 1.007717e-25,
   6.681997e-24, 2.768978e-22, 1.530486e-21, 7.724358e-21, 3.58477e-20, 1.539448e-19, 8.419341e-17, 1.285458e-14, 7.76883e-13, 2.345397e-11, 4.15472e-10, 4.84416e-09, 4.043859e-08, 2.574303e-07, 1.311386e-06, 5.549631e-06,
   2.009467e-05, 6.374213e-05, 0.002398903, 0.03097355, 0.2057822, 0.8803579, 0.8803579 };
   graph = new TGraph(72,Graph_fx537,Graph_fy537);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph537 = new TH1F("Graph_Graph537","",100,1.44,1099.84);
   Graph_Graph537->SetMinimum(0.0009683937);
   Graph_Graph537->SetMaximum(0.9683937);
   Graph_Graph537->SetDirectory(nullptr);
   Graph_Graph537->SetStats(0);
   Graph_Graph537->SetLineWidth(2);
   Graph_Graph537->SetMarkerStyle(20);
   Graph_Graph537->SetMarkerSize(0.9);
   Graph_Graph537->GetXaxis()->SetLabelFont(42);
   Graph_Graph537->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph537->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph537->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph537->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph537->GetXaxis()->SetTitleFont(42);
   Graph_Graph537->GetYaxis()->SetLabelFont(42);
   Graph_Graph537->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph537->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph537->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph537->GetYaxis()->SetTickLength(0.02);
   Graph_Graph537->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph537->GetYaxis()->SetTitleFont(42);
   Graph_Graph537->GetZaxis()->SetLabelFont(42);
   Graph_Graph537->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph537->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph537->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph537->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph537->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph537);
   
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
   
   Double_t Graph_fx539[72] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180, 185, 190, 195, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450,
   475, 500, 600, 700, 800, 900, 1000 };
   Double_t Graph_fy539[72] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3.446162e-195, 1.381038e-161, 1.342205e-137, 1.281485e-119, 1.212469e-105,
   1.810158e-94, 2.480964e-85, 1.00955e-77, 8.941515e-66, 5.319834e-61, 7.96264e-57, 3.826486e-53, 7.136527e-50, 5.889354e-47, 2.47702e-44, 8.382579e-40, 4.952698e-36, 7.644679e-33, 4.110616e-30, 9.508708e-28, 1.108489e-25,
   7.350197e-24, 3.045876e-22, 1.683535e-21, 8.496794e-21, 3.943247e-20, 1.693393e-19, 9.261275e-17, 1.414004e-14, 8.545713e-13, 2.579937e-11, 4.570192e-10, 5.328576e-09, 4.448245e-08, 2.831733e-07, 1.442525e-06, 6.104594e-06,
   2.210414e-05, 7.011634e-05, 0.002638793, 0.0340709, 0.2263604, 0.9683937, 0.9683937 };
   graph = new TGraph(72,Graph_fx539,Graph_fy539);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph539 = new TH1F("Graph_Graph539","",100,1.44,1099.84);
   Graph_Graph539->SetMinimum(0.001065233);
   Graph_Graph539->SetMaximum(1.065233);
   Graph_Graph539->SetDirectory(nullptr);
   Graph_Graph539->SetStats(0);
   Graph_Graph539->SetLineWidth(2);
   Graph_Graph539->SetMarkerStyle(20);
   Graph_Graph539->SetMarkerSize(0.9);
   Graph_Graph539->GetXaxis()->SetLabelFont(42);
   Graph_Graph539->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph539->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph539->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph539->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph539->GetXaxis()->SetTitleFont(42);
   Graph_Graph539->GetYaxis()->SetLabelFont(42);
   Graph_Graph539->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph539->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph539->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph539->GetYaxis()->SetTickLength(0.02);
   Graph_Graph539->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph539->GetYaxis()->SetTitleFont(42);
   Graph_Graph539->GetZaxis()->SetLabelFont(42);
   Graph_Graph539->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph539->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph539->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph539->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph539->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph539);
   
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
   pt_LaTex = pt->AddText("#varepsilon = 9.76e-07");
   pt_LaTex = pt->AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
