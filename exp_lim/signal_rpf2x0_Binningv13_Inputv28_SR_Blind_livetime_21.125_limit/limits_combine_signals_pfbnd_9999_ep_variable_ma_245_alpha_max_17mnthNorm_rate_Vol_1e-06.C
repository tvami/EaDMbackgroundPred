#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_17mnthNorm_rate_Vol_1e-06()
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
   
   Double_t Graph0_fx540[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy540[20] = { 87.81109, 7.17615, 6.310367, 4.949822, 4.540165, 4.328125, 4.208751, 5.772179, 7.953115, 10.36692, 12.68648, 23.27674, 23.92231, 23.2048, 23.65032, 23.42627, 22.45407,
   23.48842, 23.57745, 23.57745 };
   TGraph *graph = new TGraph(20,Graph0_fx540,Graph0_fy540);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0540 = new TH1F("Graph_Graph0540","",100,2.7,1099.7);
   Graph_Graph0540->SetMinimum(0.2);
   Graph_Graph0540->SetMaximum(100000);
   Graph_Graph0540->SetDirectory(nullptr);
   Graph_Graph0540->SetStats(0);
   Graph_Graph0540->SetLineWidth(2);
   Graph_Graph0540->SetMarkerStyle(20);
   Graph_Graph0540->SetMarkerSize(0.9);
   Graph_Graph0540->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0540->GetXaxis()->SetRange(0,91);
   Graph_Graph0540->GetXaxis()->SetLabelFont(42);
   Graph_Graph0540->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0540->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0540->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0540->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0540->GetXaxis()->SetTitleFont(42);
   Graph_Graph0540->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0540->GetYaxis()->SetLabelFont(42);
   Graph_Graph0540->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0540->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0540->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0540->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0540->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0540->GetYaxis()->SetTitleFont(42);
   Graph_Graph0540->GetZaxis()->SetLabelFont(42);
   Graph_Graph0540->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0540->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0540->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0540->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0540->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0540);
   
   graph->Draw("al");
   
   Double_t Graph1_fx541[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph1_fy541[42] = { 225.9655, 19.13919, 18.1301, 14.63901, 13.37994, 12.81698, 12.47269, 17.55231, 24.1842, 31.52421, 38.57764, 70.78099, 72.74408, 70.56223, 71.91698, 71.23569, 68.27937,
   71.42468, 71.69539, 71.69539, 71.69539, 6.092538, 6.092538, 6.092538, 6.069666, 5.838785, 6.052617, 6.112515, 6.009083, 6.168825, 6.026643, 3.582317, 2.980722,
   2.357333, 1.800408, 1.631254, 1.700126, 1.798089, 1.955746, 2.482647, 3.165121, 37.09668 };
   graph = new TGraph(42,Graph1_fx541,Graph1_fy541);
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
   
   TH1F *Graph_Graph1541 = new TH1F("Graph_Graph1541","Graph",100,2.7,1099.7);
   Graph_Graph1541->SetMinimum(1.468128);
   Graph_Graph1541->SetMaximum(248.399);
   Graph_Graph1541->SetDirectory(nullptr);
   Graph_Graph1541->SetStats(0);
   Graph_Graph1541->SetLineWidth(2);
   Graph_Graph1541->SetMarkerStyle(20);
   Graph_Graph1541->SetMarkerSize(0.9);
   Graph_Graph1541->GetXaxis()->SetLabelFont(42);
   Graph_Graph1541->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1541->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1541->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1541->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1541->GetXaxis()->SetTitleFont(42);
   Graph_Graph1541->GetYaxis()->SetLabelFont(42);
   Graph_Graph1541->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1541->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1541->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1541->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1541->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1541->GetYaxis()->SetTitleFont(42);
   Graph_Graph1541->GetZaxis()->SetLabelFont(42);
   Graph_Graph1541->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1541->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1541->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1541->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1541->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1541);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx542[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph2_fy542[42] = { 144.1124, 11.76302, 11.14282, 8.951492, 8.21902, 7.927551, 7.760462, 11.62097, 16.04632, 20.9452, 25.63201, 47.02878, 48.3331, 46.88342, 47.78356, 47.33089, 45.36663,
   47.45646, 47.63632, 47.63632, 47.63632, 10.87734, 10.87734, 10.87734, 10.83851, 10.39067, 10.81232, 10.90918, 10.71541, 11.02763, 10.7485, 6.147948, 5.098804,
   3.985781, 2.984814, 2.485988, 2.572454, 2.710829, 2.954348, 3.74544, 4.563699, 54.90678 };
   graph = new TGraph(42,Graph2_fx542,Graph2_fy542);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2542 = new TH1F("Graph_Graph2542","Graph",100,2.7,1099.7);
   Graph_Graph2542->SetMinimum(2.237389);
   Graph_Graph2542->SetMaximum(158.2751);
   Graph_Graph2542->SetDirectory(nullptr);
   Graph_Graph2542->SetStats(0);
   Graph_Graph2542->SetLineWidth(2);
   Graph_Graph2542->SetMarkerStyle(20);
   Graph_Graph2542->SetMarkerSize(0.9);
   Graph_Graph2542->GetXaxis()->SetLabelFont(42);
   Graph_Graph2542->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2542->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2542->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2542->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2542->GetXaxis()->SetTitleFont(42);
   Graph_Graph2542->GetYaxis()->SetLabelFont(42);
   Graph_Graph2542->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2542->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2542->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2542->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2542->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2542->GetYaxis()->SetTitleFont(42);
   Graph_Graph2542->GetZaxis()->SetLabelFont(42);
   Graph_Graph2542->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2542->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2542->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2542->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2542->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2542);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx543[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy543[20] = { 87.81109, 7.17615, 6.310367, 4.949822, 4.540165, 4.328125, 4.208751, 5.772179, 7.953115, 10.36692, 12.68648, 23.27674, 23.92231, 23.2048, 23.65032, 23.42627, 22.45407,
   23.48842, 23.57745, 23.57745 };
   graph = new TGraph(20,Graph0_fx543,Graph0_fy543);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0543 = new TH1F("Graph_Graph0543","",100,2.7,1099.7);
   Graph_Graph0543->SetMinimum(0.2);
   Graph_Graph0543->SetMaximum(100000);
   Graph_Graph0543->SetDirectory(nullptr);
   Graph_Graph0543->SetStats(0);
   Graph_Graph0543->SetLineWidth(2);
   Graph_Graph0543->SetMarkerStyle(20);
   Graph_Graph0543->SetMarkerSize(0.9);
   Graph_Graph0543->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0543->GetXaxis()->SetRange(0,91);
   Graph_Graph0543->GetXaxis()->SetLabelFont(42);
   Graph_Graph0543->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0543->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0543->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0543->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0543->GetXaxis()->SetTitleFont(42);
   Graph_Graph0543->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0543->GetYaxis()->SetLabelFont(42);
   Graph_Graph0543->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0543->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0543->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0543->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0543->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0543->GetYaxis()->SetTitleFont(42);
   Graph_Graph0543->GetZaxis()->SetLabelFont(42);
   Graph_Graph0543->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0543->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0543->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0543->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0543->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0543);
   
   graph->Draw("l");
   
   Double_t Graph_fx544[72] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180, 185, 190, 195, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450,
   475, 500, 600, 700, 800, 900, 1000 };
   Double_t Graph_fy544[72] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2.935985e-205, 5.610748e-170, 8.619639e-145, 6.524174e-126, 3.088983e-111,
   1.672349e-99, 6.576217e-90, 6.440771e-82, 2.268031e-69, 2.343728e-64, 5.686777e-60, 4.185302e-56, 1.140151e-52, 1.3206e-49, 7.535952e-47, 4.319753e-42, 3.959592e-38, 8.862419e-35, 6.552841e-32, 1.997698e-29, 2.965102e-27,
   2.433134e-25, 1.218579e-23, 7.347939e-23, 4.027269e-22, 2.021088e-21, 9.349019e-21, 7.05579e-18, 1.393858e-15, 1.040077e-13, 3.742977e-12, 7.693011e-11, 1.018838e-09, 9.4981e-09, 6.659788e-08, 3.694493e-07, 1.686546e-06,
   6.535225e-06, 2.203471e-05, 0.001006036, 0.01491195, 0.1098775, 0.5094795, 0.5094795 };
   graph = new TGraph(72,Graph_fx544,Graph_fy544);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph544 = new TH1F("Graph_Graph544","",100,1.44,1099.84);
   Graph_Graph544->SetMinimum(0.0005604274);
   Graph_Graph544->SetMaximum(0.5604274);
   Graph_Graph544->SetDirectory(nullptr);
   Graph_Graph544->SetStats(0);
   Graph_Graph544->SetLineWidth(2);
   Graph_Graph544->SetMarkerStyle(20);
   Graph_Graph544->SetMarkerSize(0.9);
   Graph_Graph544->GetXaxis()->SetLabelFont(42);
   Graph_Graph544->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph544->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph544->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph544->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph544->GetXaxis()->SetTitleFont(42);
   Graph_Graph544->GetYaxis()->SetLabelFont(42);
   Graph_Graph544->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph544->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph544->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph544->GetYaxis()->SetTickLength(0.02);
   Graph_Graph544->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph544->GetYaxis()->SetTitleFont(42);
   Graph_Graph544->GetZaxis()->SetLabelFont(42);
   Graph_Graph544->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph544->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph544->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph544->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph544->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph544);
   
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
   
   Double_t Graph_fx546[72] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180, 185, 190, 195, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450,
   475, 500, 600, 700, 800, 900, 1000 };
   Double_t Graph_fy546[72] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3.229584e-205, 6.171823e-170, 9.481603e-145, 7.176591e-126, 3.397881e-111,
   1.839584e-99, 7.233839e-90, 7.084848e-82, 2.494834e-69, 2.578101e-64, 6.255455e-60, 4.603832e-56, 1.254166e-52, 1.45266e-49, 8.289547e-47, 4.751728e-42, 4.355551e-38, 9.748661e-35, 7.208125e-32, 2.197468e-29, 3.261612e-27,
   2.676447e-25, 1.340437e-23, 8.082733e-23, 4.429996e-22, 2.223197e-21, 1.028392e-20, 7.761369e-18, 1.533244e-15, 1.144085e-13, 4.117275e-12, 8.462312e-11, 1.120722e-09, 1.044791e-08, 7.325767e-08, 4.063942e-07, 1.855201e-06,
   7.188748e-06, 2.423818e-05, 0.00110664, 0.01640315, 0.1208653, 0.5604275, 0.5604275 };
   graph = new TGraph(72,Graph_fx546,Graph_fy546);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph546 = new TH1F("Graph_Graph546","",100,1.44,1099.84);
   Graph_Graph546->SetMinimum(0.0006164702);
   Graph_Graph546->SetMaximum(0.6164702);
   Graph_Graph546->SetDirectory(nullptr);
   Graph_Graph546->SetStats(0);
   Graph_Graph546->SetLineWidth(2);
   Graph_Graph546->SetMarkerStyle(20);
   Graph_Graph546->SetMarkerSize(0.9);
   Graph_Graph546->GetXaxis()->SetLabelFont(42);
   Graph_Graph546->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph546->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph546->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph546->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph546->GetXaxis()->SetTitleFont(42);
   Graph_Graph546->GetYaxis()->SetLabelFont(42);
   Graph_Graph546->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph546->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph546->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph546->GetYaxis()->SetTickLength(0.02);
   Graph_Graph546->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph546->GetYaxis()->SetTitleFont(42);
   Graph_Graph546->GetZaxis()->SetLabelFont(42);
   Graph_Graph546->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph546->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph546->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph546->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph546->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph546);
   
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
   pt_LaTex = pt->AddText("#varepsilon = 1e-06");
   pt_LaTex = pt->AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
