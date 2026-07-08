#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_17mnthNorm_rate_Vol_6.4e-07()
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
   
   Double_t Graph0_fx435[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy435[20] = { 87.81109, 7.17615, 6.310367, 4.949822, 4.540165, 4.328125, 4.208751, 5.772179, 7.953115, 10.36692, 12.68648, 23.27674, 23.92231, 23.2048, 23.65032, 23.42627, 22.45407,
   23.48842, 23.57745, 23.57745 };
   TGraph *graph = new TGraph(20,Graph0_fx435,Graph0_fy435);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0435 = new TH1F("Graph_Graph0435","",100,2.7,1099.7);
   Graph_Graph0435->SetMinimum(0.2);
   Graph_Graph0435->SetMaximum(100000);
   Graph_Graph0435->SetDirectory(nullptr);
   Graph_Graph0435->SetStats(0);
   Graph_Graph0435->SetLineWidth(2);
   Graph_Graph0435->SetMarkerStyle(20);
   Graph_Graph0435->SetMarkerSize(0.9);
   Graph_Graph0435->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0435->GetXaxis()->SetRange(0,91);
   Graph_Graph0435->GetXaxis()->SetLabelFont(42);
   Graph_Graph0435->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0435->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0435->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0435->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0435->GetXaxis()->SetTitleFont(42);
   Graph_Graph0435->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0435->GetYaxis()->SetLabelFont(42);
   Graph_Graph0435->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0435->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0435->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0435->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0435->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0435->GetYaxis()->SetTitleFont(42);
   Graph_Graph0435->GetZaxis()->SetLabelFont(42);
   Graph_Graph0435->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0435->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0435->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0435->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0435->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0435);
   
   graph->Draw("al");
   
   Double_t Graph1_fx436[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph1_fy436[42] = { 225.9655, 19.13919, 18.1301, 14.63901, 13.37994, 12.81698, 12.47269, 17.55231, 24.1842, 31.52421, 38.57764, 70.78099, 72.74408, 70.56223, 71.91698, 71.23569, 68.27937,
   71.42468, 71.69539, 71.69539, 71.69539, 6.092538, 6.092538, 6.092538, 6.069666, 5.838785, 6.052617, 6.112515, 6.009083, 6.168825, 6.026643, 3.582317, 2.980722,
   2.357333, 1.800408, 1.631254, 1.700126, 1.798089, 1.955746, 2.482647, 3.165121, 37.09668 };
   graph = new TGraph(42,Graph1_fx436,Graph1_fy436);
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
   
   TH1F *Graph_Graph1436 = new TH1F("Graph_Graph1436","Graph",100,2.7,1099.7);
   Graph_Graph1436->SetMinimum(1.468128);
   Graph_Graph1436->SetMaximum(248.399);
   Graph_Graph1436->SetDirectory(nullptr);
   Graph_Graph1436->SetStats(0);
   Graph_Graph1436->SetLineWidth(2);
   Graph_Graph1436->SetMarkerStyle(20);
   Graph_Graph1436->SetMarkerSize(0.9);
   Graph_Graph1436->GetXaxis()->SetLabelFont(42);
   Graph_Graph1436->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1436->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1436->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1436->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1436->GetXaxis()->SetTitleFont(42);
   Graph_Graph1436->GetYaxis()->SetLabelFont(42);
   Graph_Graph1436->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1436->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1436->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1436->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1436->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1436->GetYaxis()->SetTitleFont(42);
   Graph_Graph1436->GetZaxis()->SetLabelFont(42);
   Graph_Graph1436->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1436->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1436->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1436->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1436->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1436);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx437[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph2_fy437[42] = { 144.1124, 11.76302, 11.14282, 8.951492, 8.21902, 7.927551, 7.760462, 11.62097, 16.04632, 20.9452, 25.63201, 47.02878, 48.3331, 46.88342, 47.78356, 47.33089, 45.36663,
   47.45646, 47.63632, 47.63632, 47.63632, 10.87734, 10.87734, 10.87734, 10.83851, 10.39067, 10.81232, 10.90918, 10.71541, 11.02763, 10.7485, 6.147948, 5.098804,
   3.985781, 2.984814, 2.485988, 2.572454, 2.710829, 2.954348, 3.74544, 4.563699, 54.90678 };
   graph = new TGraph(42,Graph2_fx437,Graph2_fy437);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2437 = new TH1F("Graph_Graph2437","Graph",100,2.7,1099.7);
   Graph_Graph2437->SetMinimum(2.237389);
   Graph_Graph2437->SetMaximum(158.2751);
   Graph_Graph2437->SetDirectory(nullptr);
   Graph_Graph2437->SetStats(0);
   Graph_Graph2437->SetLineWidth(2);
   Graph_Graph2437->SetMarkerStyle(20);
   Graph_Graph2437->SetMarkerSize(0.9);
   Graph_Graph2437->GetXaxis()->SetLabelFont(42);
   Graph_Graph2437->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2437->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2437->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2437->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2437->GetXaxis()->SetTitleFont(42);
   Graph_Graph2437->GetYaxis()->SetLabelFont(42);
   Graph_Graph2437->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2437->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2437->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2437->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2437->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2437->GetYaxis()->SetTitleFont(42);
   Graph_Graph2437->GetZaxis()->SetLabelFont(42);
   Graph_Graph2437->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2437->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2437->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2437->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2437->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2437);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx438[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy438[20] = { 87.81109, 7.17615, 6.310367, 4.949822, 4.540165, 4.328125, 4.208751, 5.772179, 7.953115, 10.36692, 12.68648, 23.27674, 23.92231, 23.2048, 23.65032, 23.42627, 22.45407,
   23.48842, 23.57745, 23.57745 };
   graph = new TGraph(20,Graph0_fx438,Graph0_fy438);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0438 = new TH1F("Graph_Graph0438","",100,2.7,1099.7);
   Graph_Graph0438->SetMinimum(0.2);
   Graph_Graph0438->SetMaximum(100000);
   Graph_Graph0438->SetDirectory(nullptr);
   Graph_Graph0438->SetStats(0);
   Graph_Graph0438->SetLineWidth(2);
   Graph_Graph0438->SetMarkerStyle(20);
   Graph_Graph0438->SetMarkerSize(0.9);
   Graph_Graph0438->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0438->GetXaxis()->SetRange(0,91);
   Graph_Graph0438->GetXaxis()->SetLabelFont(42);
   Graph_Graph0438->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0438->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0438->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0438->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0438->GetXaxis()->SetTitleFont(42);
   Graph_Graph0438->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0438->GetYaxis()->SetLabelFont(42);
   Graph_Graph0438->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0438->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0438->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0438->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0438->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0438->GetYaxis()->SetTitleFont(42);
   Graph_Graph0438->GetZaxis()->SetLabelFont(42);
   Graph_Graph0438->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0438->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0438->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0438->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0438->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0438);
   
   graph->Draw("l");
   
   Double_t Graph_fx439[72] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180, 185, 190, 195, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450,
   475, 500, 600, 700, 800, 900, 1000 };
   Double_t Graph_fy439[72] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 1.493537e-303, 2.224946e-279, 8.373828e-265, 3.47852e-246, 1.128256e-234, 6.497096e-220, 1.15544e-80, 2.811779e-66, 5.133607e-56, 2.487066e-48, 2.315845e-42,
   1.358958e-37, 1.069562e-33, 1.867641e-30, 2.267186e-25, 2.425147e-23, 1.438188e-21, 5.248982e-20, 1.278722e-18, 2.176133e-17, 2.782551e-16, 2.256516e-14, 8.733573e-13, 1.914053e-11, 2.683561e-10, 2.632132e-09, 1.931419e-08,
   1.116097e-07, 5.28594e-07, 1.078511e-06, 2.117529e-06, 4.012612e-06, 7.35834e-06, 0.0001007638, 0.00080533, 0.004356025, 0.01759813, 0.05684467, 0.1541169, 0.3633962, 0.7652928, 1.468932, 2.610586,
   4.34931, 6.860332, 28.25519, 75.12203, 152.5641, 259.631, 259.631 };
   graph = new TGraph(72,Graph_fx439,Graph_fy439);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph439 = new TH1F("Graph_Graph439","",100,1.44,1099.84);
   Graph_Graph439->SetMinimum(0.2855941);
   Graph_Graph439->SetMaximum(285.5941);
   Graph_Graph439->SetDirectory(nullptr);
   Graph_Graph439->SetStats(0);
   Graph_Graph439->SetLineWidth(2);
   Graph_Graph439->SetMarkerStyle(20);
   Graph_Graph439->SetMarkerSize(0.9);
   Graph_Graph439->GetXaxis()->SetLabelFont(42);
   Graph_Graph439->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph439->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph439->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph439->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph439->GetXaxis()->SetTitleFont(42);
   Graph_Graph439->GetYaxis()->SetLabelFont(42);
   Graph_Graph439->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph439->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph439->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph439->GetYaxis()->SetTickLength(0.02);
   Graph_Graph439->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph439->GetYaxis()->SetTitleFont(42);
   Graph_Graph439->GetZaxis()->SetLabelFont(42);
   Graph_Graph439->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph439->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph439->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph439->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph439->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph439);
   
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
   
   Double_t Graph_fx441[72] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180, 185, 190, 195, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450,
   475, 500, 600, 700, 800, 900, 1000 };
   Double_t Graph_fy441[72] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 1.642891e-303, 2.447441e-279, 9.211211e-265, 3.826372e-246, 1.241082e-234, 7.146806e-220, 1.270984e-80, 3.092957e-66, 5.646968e-56, 2.735773e-48, 2.54743e-42,
   1.494854e-37, 1.176518e-33, 2.054405e-30, 2.493905e-25, 2.667662e-23, 1.582007e-21, 5.77388e-20, 1.406594e-18, 2.393746e-17, 3.060806e-16, 2.482168e-14, 9.60693e-13, 2.105458e-11, 2.951917e-10, 2.895345e-09, 2.124561e-08,
   1.227707e-07, 5.814534e-07, 1.186362e-06, 2.329282e-06, 4.413873e-06, 8.094174e-06, 0.0001108402, 0.000885863, 0.004791628, 0.01935794, 0.06252914, 0.1695286, 0.3997358, 0.8418221, 1.615825, 2.871645,
   4.784241, 7.546365, 31.08071, 82.63423, 167.8205, 285.5941, 285.5941 };
   graph = new TGraph(72,Graph_fx441,Graph_fy441);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph441 = new TH1F("Graph_Graph441","",100,1.44,1099.84);
   Graph_Graph441->SetMinimum(0.3141535);
   Graph_Graph441->SetMaximum(314.1535);
   Graph_Graph441->SetDirectory(nullptr);
   Graph_Graph441->SetStats(0);
   Graph_Graph441->SetLineWidth(2);
   Graph_Graph441->SetMarkerStyle(20);
   Graph_Graph441->SetMarkerSize(0.9);
   Graph_Graph441->GetXaxis()->SetLabelFont(42);
   Graph_Graph441->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph441->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph441->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph441->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph441->GetXaxis()->SetTitleFont(42);
   Graph_Graph441->GetYaxis()->SetLabelFont(42);
   Graph_Graph441->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph441->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph441->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph441->GetYaxis()->SetTickLength(0.02);
   Graph_Graph441->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph441->GetYaxis()->SetTitleFont(42);
   Graph_Graph441->GetZaxis()->SetLabelFont(42);
   Graph_Graph441->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph441->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph441->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph441->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph441->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph441);
   
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
   line = new TLine(586.8482,0,586.8482,23.45562);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(586.8432,0,"  586.85 TeV");

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
   pt_LaTex = pt->AddText("#varepsilon = 6.4e-07");
   pt_LaTex = pt->AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
