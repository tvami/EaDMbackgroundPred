#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_17mnthNorm_rate_Vol_3.28e-07()
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
   
   Double_t Graph0_fx344[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy344[20] = { 87.81109, 7.17615, 6.310367, 4.949822, 4.540165, 4.328125, 4.208751, 5.772179, 7.953115, 10.36692, 12.68648, 23.27674, 23.92231, 23.2048, 23.65032, 23.42627, 22.45407,
   23.48842, 23.57745, 23.57745 };
   TGraph *graph = new TGraph(20,Graph0_fx344,Graph0_fy344);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0344 = new TH1F("Graph_Graph0344","",100,2.7,1099.7);
   Graph_Graph0344->SetMinimum(0.2);
   Graph_Graph0344->SetMaximum(100000);
   Graph_Graph0344->SetDirectory(nullptr);
   Graph_Graph0344->SetStats(0);
   Graph_Graph0344->SetLineWidth(2);
   Graph_Graph0344->SetMarkerStyle(20);
   Graph_Graph0344->SetMarkerSize(0.9);
   Graph_Graph0344->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0344->GetXaxis()->SetRange(0,91);
   Graph_Graph0344->GetXaxis()->SetLabelFont(42);
   Graph_Graph0344->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0344->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0344->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0344->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0344->GetXaxis()->SetTitleFont(42);
   Graph_Graph0344->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0344->GetYaxis()->SetLabelFont(42);
   Graph_Graph0344->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0344->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0344->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0344->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0344->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0344->GetYaxis()->SetTitleFont(42);
   Graph_Graph0344->GetZaxis()->SetLabelFont(42);
   Graph_Graph0344->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0344->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0344->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0344->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0344->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0344);
   
   graph->Draw("al");
   
   Double_t Graph1_fx345[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph1_fy345[42] = { 225.9655, 19.13919, 18.1301, 14.63901, 13.37994, 12.81698, 12.47269, 17.55231, 24.1842, 31.52421, 38.57764, 70.78099, 72.74408, 70.56223, 71.91698, 71.23569, 68.27937,
   71.42468, 71.69539, 71.69539, 71.69539, 6.092538, 6.092538, 6.092538, 6.069666, 5.838785, 6.052617, 6.112515, 6.009083, 6.168825, 6.026643, 3.582317, 2.980722,
   2.357333, 1.800408, 1.631254, 1.700126, 1.798089, 1.955746, 2.482647, 3.165121, 37.09668 };
   graph = new TGraph(42,Graph1_fx345,Graph1_fy345);
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
   
   TH1F *Graph_Graph1345 = new TH1F("Graph_Graph1345","Graph",100,2.7,1099.7);
   Graph_Graph1345->SetMinimum(1.468128);
   Graph_Graph1345->SetMaximum(248.399);
   Graph_Graph1345->SetDirectory(nullptr);
   Graph_Graph1345->SetStats(0);
   Graph_Graph1345->SetLineWidth(2);
   Graph_Graph1345->SetMarkerStyle(20);
   Graph_Graph1345->SetMarkerSize(0.9);
   Graph_Graph1345->GetXaxis()->SetLabelFont(42);
   Graph_Graph1345->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1345->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1345->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1345->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1345->GetXaxis()->SetTitleFont(42);
   Graph_Graph1345->GetYaxis()->SetLabelFont(42);
   Graph_Graph1345->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1345->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1345->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1345->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1345->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1345->GetYaxis()->SetTitleFont(42);
   Graph_Graph1345->GetZaxis()->SetLabelFont(42);
   Graph_Graph1345->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1345->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1345->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1345->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1345->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1345);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx346[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph2_fy346[42] = { 144.1124, 11.76302, 11.14282, 8.951492, 8.21902, 7.927551, 7.760462, 11.62097, 16.04632, 20.9452, 25.63201, 47.02878, 48.3331, 46.88342, 47.78356, 47.33089, 45.36663,
   47.45646, 47.63632, 47.63632, 47.63632, 10.87734, 10.87734, 10.87734, 10.83851, 10.39067, 10.81232, 10.90918, 10.71541, 11.02763, 10.7485, 6.147948, 5.098804,
   3.985781, 2.984814, 2.485988, 2.572454, 2.710829, 2.954348, 3.74544, 4.563699, 54.90678 };
   graph = new TGraph(42,Graph2_fx346,Graph2_fy346);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2346 = new TH1F("Graph_Graph2346","Graph",100,2.7,1099.7);
   Graph_Graph2346->SetMinimum(2.237389);
   Graph_Graph2346->SetMaximum(158.2751);
   Graph_Graph2346->SetDirectory(nullptr);
   Graph_Graph2346->SetStats(0);
   Graph_Graph2346->SetLineWidth(2);
   Graph_Graph2346->SetMarkerStyle(20);
   Graph_Graph2346->SetMarkerSize(0.9);
   Graph_Graph2346->GetXaxis()->SetLabelFont(42);
   Graph_Graph2346->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2346->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2346->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2346->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2346->GetXaxis()->SetTitleFont(42);
   Graph_Graph2346->GetYaxis()->SetLabelFont(42);
   Graph_Graph2346->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2346->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2346->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2346->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2346->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2346->GetYaxis()->SetTitleFont(42);
   Graph_Graph2346->GetZaxis()->SetLabelFont(42);
   Graph_Graph2346->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2346->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2346->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2346->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2346->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2346);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx347[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy347[20] = { 87.81109, 7.17615, 6.310367, 4.949822, 4.540165, 4.328125, 4.208751, 5.772179, 7.953115, 10.36692, 12.68648, 23.27674, 23.92231, 23.2048, 23.65032, 23.42627, 22.45407,
   23.48842, 23.57745, 23.57745 };
   graph = new TGraph(20,Graph0_fx347,Graph0_fy347);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0347 = new TH1F("Graph_Graph0347","",100,2.7,1099.7);
   Graph_Graph0347->SetMinimum(0.2);
   Graph_Graph0347->SetMaximum(100000);
   Graph_Graph0347->SetDirectory(nullptr);
   Graph_Graph0347->SetStats(0);
   Graph_Graph0347->SetLineWidth(2);
   Graph_Graph0347->SetMarkerStyle(20);
   Graph_Graph0347->SetMarkerSize(0.9);
   Graph_Graph0347->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0347->GetXaxis()->SetRange(0,91);
   Graph_Graph0347->GetXaxis()->SetLabelFont(42);
   Graph_Graph0347->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0347->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0347->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0347->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0347->GetXaxis()->SetTitleFont(42);
   Graph_Graph0347->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0347->GetYaxis()->SetLabelFont(42);
   Graph_Graph0347->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0347->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0347->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0347->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0347->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0347->GetYaxis()->SetTitleFont(42);
   Graph_Graph0347->GetZaxis()->SetLabelFont(42);
   Graph_Graph0347->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0347->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0347->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0347->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0347->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0347);
   
   graph->Draw("l");
   
   Double_t Graph_fx348[72] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180, 185, 190, 195, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450,
   475, 500, 600, 700, 800, 900, 1000 };
   Double_t Graph_fy348[72] = { 0, 0, 6.90154e-279, 5.518331e-253, 3.802423e-213, 1.681481e-197, 6.058513e-184, 4.384717e-172, 1.270733e-161, 2.521958e-152, 5.235442e-144, 1.595361e-136, 9.388038e-130, 1.335228e-123, 5.52461e-118, 7.760543e-113, 4.213756e-108,
   1.094972e-99, 6.234012e-96, 1.951633e-92, 3.566916e-89, 7.048837e-81, 1.141794e-75, 1.420412e-69, 1.498802e-65, 6.659833e-61, 1.088972e-57, 4.861951e-54, 1.081565e-17, 5.389317e-14, 2.281137e-11, 2.076337e-09, 6.802557e-08,
   1.09207e-06, 1.045046e-05, 6.791415e-05, 0.001255282, 0.003990499, 0.01091466, 0.02638534, 0.05756342, 0.1130956, 0.207183, 0.5858572, 1.383292, 2.843877, 5.244774, 8.868302, 13.97533,
   20.78423, 29.45748, 34.52711, 40.09567, 46.16615, 52.73797, 92.8792, 143.8811, 203.2812, 268.3001, 336.3086, 405.0623, 472.7798, 538.13, 600.1776, 658.3134,
   712.1852, 761.6367, 916.3537, 1011.558, 1062.6, 1082.908, 1082.908 };
   graph = new TGraph(72,Graph_fx348,Graph_fy348);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph348 = new TH1F("Graph_Graph348","",100,1.44,1099.84);
   Graph_Graph348->SetMinimum(1.191199);
   Graph_Graph348->SetMaximum(1191.199);
   Graph_Graph348->SetDirectory(nullptr);
   Graph_Graph348->SetStats(0);
   Graph_Graph348->SetLineWidth(2);
   Graph_Graph348->SetMarkerStyle(20);
   Graph_Graph348->SetMarkerSize(0.9);
   Graph_Graph348->GetXaxis()->SetLabelFont(42);
   Graph_Graph348->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph348->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph348->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph348->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph348->GetXaxis()->SetTitleFont(42);
   Graph_Graph348->GetYaxis()->SetLabelFont(42);
   Graph_Graph348->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph348->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph348->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph348->GetYaxis()->SetTickLength(0.02);
   Graph_Graph348->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph348->GetYaxis()->SetTitleFont(42);
   Graph_Graph348->GetZaxis()->SetLabelFont(42);
   Graph_Graph348->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph348->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph348->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph348->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph348->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph348);
   
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
   
   Double_t Graph_fx350[72] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180, 185, 190, 195, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450,
   475, 500, 600, 700, 800, 900, 1000 };
   Double_t Graph_fy350[72] = { 0, 0, 7.591694e-279, 6.070164e-253, 4.182665e-213, 1.849629e-197, 6.664364e-184, 4.823189e-172, 1.397806e-161, 2.774154e-152, 5.758986e-144, 1.754897e-136, 1.032684e-129, 1.468751e-123, 6.077071e-118, 8.536597e-113, 4.635132e-108,
   1.204469e-99, 6.857413e-96, 2.146796e-92, 3.923608e-89, 7.753721e-81, 1.255973e-75, 1.562453e-69, 1.648682e-65, 7.325816e-61, 1.197869e-57, 5.348146e-54, 1.189722e-17, 5.928249e-14, 2.509251e-11, 2.283971e-09, 7.482813e-08,
   1.201277e-06, 1.149551e-05, 7.470557e-05, 0.00138081, 0.004389549, 0.01200613, 0.02902387, 0.06331976, 0.1244052, 0.2279013, 0.6444429, 1.521621, 3.128265, 5.769251, 9.755132, 15.37286,
   22.86265, 32.40323, 37.97982, 44.10524, 50.78277, 58.01177, 102.1671, 158.2692, 223.6093, 295.1301, 369.9395, 445.5685, 520.0578, 591.943, 660.1954, 724.1447,
   783.4037, 837.8004, 1007.989, 1112.714, 1168.86, 1191.199, 1191.199 };
   graph = new TGraph(72,Graph_fx350,Graph_fy350);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph350 = new TH1F("Graph_Graph350","",100,1.44,1099.84);
   Graph_Graph350->SetMinimum(1.310319);
   Graph_Graph350->SetMaximum(1310.319);
   Graph_Graph350->SetDirectory(nullptr);
   Graph_Graph350->SetStats(0);
   Graph_Graph350->SetLineWidth(2);
   Graph_Graph350->SetMarkerStyle(20);
   Graph_Graph350->SetMarkerSize(0.9);
   Graph_Graph350->GetXaxis()->SetLabelFont(42);
   Graph_Graph350->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph350->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph350->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph350->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph350->GetXaxis()->SetTitleFont(42);
   Graph_Graph350->GetYaxis()->SetLabelFont(42);
   Graph_Graph350->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph350->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph350->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph350->GetYaxis()->SetTickLength(0.02);
   Graph_Graph350->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph350->GetYaxis()->SetTitleFont(42);
   Graph_Graph350->GetZaxis()->SetLabelFont(42);
   Graph_Graph350->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph350->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph350->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph350->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph350->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph350);
   
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
   line = new TLine(167.9532,0,167.9532,19.16253);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(167.9482,0,"  167.95 TeV");

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
   pt_LaTex = pt->AddText("#varepsilon = 3.28e-07");
   pt_LaTex = pt->AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
