#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_17mnthNorm_rate_Vol_4e-07()
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
   
   Double_t Graph0_fx365[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy365[20] = { 87.81109, 7.17615, 6.310367, 4.949822, 4.540165, 4.328125, 4.208751, 5.772179, 7.953115, 10.36692, 12.68648, 23.27674, 23.92231, 23.2048, 23.65032, 23.42627, 22.45407,
   23.48842, 23.57745, 23.57745 };
   TGraph *graph = new TGraph(20,Graph0_fx365,Graph0_fy365);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0365 = new TH1F("Graph_Graph0365","",100,2.7,1099.7);
   Graph_Graph0365->SetMinimum(0.2);
   Graph_Graph0365->SetMaximum(100000);
   Graph_Graph0365->SetDirectory(nullptr);
   Graph_Graph0365->SetStats(0);
   Graph_Graph0365->SetLineWidth(2);
   Graph_Graph0365->SetMarkerStyle(20);
   Graph_Graph0365->SetMarkerSize(0.9);
   Graph_Graph0365->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0365->GetXaxis()->SetRange(0,91);
   Graph_Graph0365->GetXaxis()->SetLabelFont(42);
   Graph_Graph0365->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0365->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0365->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0365->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0365->GetXaxis()->SetTitleFont(42);
   Graph_Graph0365->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0365->GetYaxis()->SetLabelFont(42);
   Graph_Graph0365->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0365->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0365->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0365->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0365->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0365->GetYaxis()->SetTitleFont(42);
   Graph_Graph0365->GetZaxis()->SetLabelFont(42);
   Graph_Graph0365->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0365->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0365->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0365->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0365->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0365);
   
   graph->Draw("al");
   
   Double_t Graph1_fx366[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph1_fy366[42] = { 225.9655, 19.13919, 18.1301, 14.63901, 13.37994, 12.81698, 12.47269, 17.55231, 24.1842, 31.52421, 38.57764, 70.78099, 72.74408, 70.56223, 71.91698, 71.23569, 68.27937,
   71.42468, 71.69539, 71.69539, 71.69539, 6.092538, 6.092538, 6.092538, 6.069666, 5.838785, 6.052617, 6.112515, 6.009083, 6.168825, 6.026643, 3.582317, 2.980722,
   2.357333, 1.800408, 1.631254, 1.700126, 1.798089, 1.955746, 2.482647, 3.165121, 37.09668 };
   graph = new TGraph(42,Graph1_fx366,Graph1_fy366);
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
   
   TH1F *Graph_Graph1366 = new TH1F("Graph_Graph1366","Graph",100,2.7,1099.7);
   Graph_Graph1366->SetMinimum(1.468128);
   Graph_Graph1366->SetMaximum(248.399);
   Graph_Graph1366->SetDirectory(nullptr);
   Graph_Graph1366->SetStats(0);
   Graph_Graph1366->SetLineWidth(2);
   Graph_Graph1366->SetMarkerStyle(20);
   Graph_Graph1366->SetMarkerSize(0.9);
   Graph_Graph1366->GetXaxis()->SetLabelFont(42);
   Graph_Graph1366->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1366->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1366->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1366->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1366->GetXaxis()->SetTitleFont(42);
   Graph_Graph1366->GetYaxis()->SetLabelFont(42);
   Graph_Graph1366->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1366->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1366->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1366->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1366->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1366->GetYaxis()->SetTitleFont(42);
   Graph_Graph1366->GetZaxis()->SetLabelFont(42);
   Graph_Graph1366->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1366->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1366->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1366->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1366->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1366);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx367[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph2_fy367[42] = { 144.1124, 11.76302, 11.14282, 8.951492, 8.21902, 7.927551, 7.760462, 11.62097, 16.04632, 20.9452, 25.63201, 47.02878, 48.3331, 46.88342, 47.78356, 47.33089, 45.36663,
   47.45646, 47.63632, 47.63632, 47.63632, 10.87734, 10.87734, 10.87734, 10.83851, 10.39067, 10.81232, 10.90918, 10.71541, 11.02763, 10.7485, 6.147948, 5.098804,
   3.985781, 2.984814, 2.485988, 2.572454, 2.710829, 2.954348, 3.74544, 4.563699, 54.90678 };
   graph = new TGraph(42,Graph2_fx367,Graph2_fy367);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2367 = new TH1F("Graph_Graph2367","Graph",100,2.7,1099.7);
   Graph_Graph2367->SetMinimum(2.237389);
   Graph_Graph2367->SetMaximum(158.2751);
   Graph_Graph2367->SetDirectory(nullptr);
   Graph_Graph2367->SetStats(0);
   Graph_Graph2367->SetLineWidth(2);
   Graph_Graph2367->SetMarkerStyle(20);
   Graph_Graph2367->SetMarkerSize(0.9);
   Graph_Graph2367->GetXaxis()->SetLabelFont(42);
   Graph_Graph2367->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2367->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2367->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2367->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2367->GetXaxis()->SetTitleFont(42);
   Graph_Graph2367->GetYaxis()->SetLabelFont(42);
   Graph_Graph2367->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2367->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2367->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2367->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2367->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2367->GetYaxis()->SetTitleFont(42);
   Graph_Graph2367->GetZaxis()->SetLabelFont(42);
   Graph_Graph2367->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2367->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2367->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2367->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2367->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2367);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx368[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy368[20] = { 87.81109, 7.17615, 6.310367, 4.949822, 4.540165, 4.328125, 4.208751, 5.772179, 7.953115, 10.36692, 12.68648, 23.27674, 23.92231, 23.2048, 23.65032, 23.42627, 22.45407,
   23.48842, 23.57745, 23.57745 };
   graph = new TGraph(20,Graph0_fx368,Graph0_fy368);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0368 = new TH1F("Graph_Graph0368","",100,2.7,1099.7);
   Graph_Graph0368->SetMinimum(0.2);
   Graph_Graph0368->SetMaximum(100000);
   Graph_Graph0368->SetDirectory(nullptr);
   Graph_Graph0368->SetStats(0);
   Graph_Graph0368->SetLineWidth(2);
   Graph_Graph0368->SetMarkerStyle(20);
   Graph_Graph0368->SetMarkerSize(0.9);
   Graph_Graph0368->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0368->GetXaxis()->SetRange(0,91);
   Graph_Graph0368->GetXaxis()->SetLabelFont(42);
   Graph_Graph0368->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0368->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0368->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0368->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0368->GetXaxis()->SetTitleFont(42);
   Graph_Graph0368->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0368->GetYaxis()->SetLabelFont(42);
   Graph_Graph0368->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0368->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0368->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0368->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0368->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0368->GetYaxis()->SetTitleFont(42);
   Graph_Graph0368->GetZaxis()->SetLabelFont(42);
   Graph_Graph0368->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0368->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0368->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0368->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0368->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0368);
   
   graph->Draw("l");
   
   Double_t Graph_fx369[72] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180, 185, 190, 195, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450,
   475, 500, 600, 700, 800, 900, 1000 };
   Double_t Graph_fy369[72] = { 0, 0, 0, 0, 0, 1.554569e-296, 2.36337e-276, 1.072012e-258, 4.049439e-243, 2.830212e-229, 6.87339e-217, 9.602845e-206, 1.160758e-195, 1.695122e-186, 3.940562e-178, 1.834955e-170, 2.076069e-163,
   7.150821e-151, 2.818831e-145, 4.561711e-140, 3.313005e-135, 1.07465e-122, 4.474794e-115, 7.588099e-106, 5.468555e-100, 6.348391e-93, 2.909904e-88, 1.067248e-82, 1.771564e-28, 6.322823e-23, 5.656932e-19, 5.075943e-16, 9.859125e-14,
   6.573163e-12, 2.016456e-10, 3.459561e-09, 2.939871e-07, 1.720381e-06, 8.025866e-06, 3.107764e-05, 0.0001030628, 0.0002945281, 0.0007559418, 0.003827283, 0.01468306, 0.04551828, 0.1193693, 0.2738492, 0.5636053,
   1.060838, 1.853726, 2.392164, 3.043058, 3.820222, 4.737648, 11.91098, 24.53038, 43.75054, 70.11786, 103.5845, 143.6266, 189.3974, 239.8718, 293.9629, 350.606,
   408.8131, 467.7032, 696.6896, 895.8177, 1055.087, 1175.323, 1175.323 };
   graph = new TGraph(72,Graph_fx369,Graph_fy369);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph369 = new TH1F("Graph_Graph369","",100,1.44,1099.84);
   Graph_Graph369->SetMinimum(1.292855);
   Graph_Graph369->SetMaximum(1292.855);
   Graph_Graph369->SetDirectory(nullptr);
   Graph_Graph369->SetStats(0);
   Graph_Graph369->SetLineWidth(2);
   Graph_Graph369->SetMarkerStyle(20);
   Graph_Graph369->SetMarkerSize(0.9);
   Graph_Graph369->GetXaxis()->SetLabelFont(42);
   Graph_Graph369->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph369->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph369->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph369->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph369->GetXaxis()->SetTitleFont(42);
   Graph_Graph369->GetYaxis()->SetLabelFont(42);
   Graph_Graph369->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph369->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph369->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph369->GetYaxis()->SetTickLength(0.02);
   Graph_Graph369->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph369->GetYaxis()->SetTitleFont(42);
   Graph_Graph369->GetZaxis()->SetLabelFont(42);
   Graph_Graph369->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph369->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph369->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph369->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph369->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph369);
   
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
   
   Double_t Graph_fx371[72] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180, 185, 190, 195, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450,
   475, 500, 600, 700, 800, 900, 1000 };
   Double_t Graph_fy371[72] = { 0, 0, 0, 0, 0, 1.710026e-296, 2.599707e-276, 1.179213e-258, 4.454383e-243, 3.113233e-229, 7.560729e-217, 1.056313e-205, 1.276834e-195, 1.864634e-186, 4.334618e-178, 2.018451e-170, 2.283676e-163,
   7.865903e-151, 3.100714e-145, 5.017882e-140, 3.644306e-135, 1.182115e-122, 4.922273e-115, 8.346909e-106, 6.01541e-100, 6.98323e-93, 3.200894e-88, 1.173973e-82, 1.94872e-28, 6.955105e-23, 6.222625e-19, 5.583537e-16, 1.084504e-13,
   7.230479e-12, 2.218102e-10, 3.805517e-09, 3.233858e-07, 1.892419e-06, 8.828453e-06, 3.41854e-05, 0.0001133691, 0.0003239809, 0.000831536, 0.004210011, 0.01615137, 0.05007011, 0.1313062, 0.3012341, 0.6199658,
   1.166922, 2.039099, 2.63138, 3.347364, 4.202244, 5.211413, 13.10208, 26.98342, 48.12559, 77.12965, 113.943, 157.9893, 208.3371, 263.859, 323.3592, 385.6666,
   449.6944, 514.4735, 766.3586, 985.3995, 1160.596, 1292.855, 1292.855 };
   graph = new TGraph(72,Graph_fx371,Graph_fy371);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph371 = new TH1F("Graph_Graph371","",100,1.44,1099.84);
   Graph_Graph371->SetMinimum(1.422141);
   Graph_Graph371->SetMaximum(1422.141);
   Graph_Graph371->SetDirectory(nullptr);
   Graph_Graph371->SetStats(0);
   Graph_Graph371->SetLineWidth(2);
   Graph_Graph371->SetMarkerStyle(20);
   Graph_Graph371->SetMarkerSize(0.9);
   Graph_Graph371->GetXaxis()->SetLabelFont(42);
   Graph_Graph371->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph371->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph371->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph371->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph371->GetXaxis()->SetTitleFont(42);
   Graph_Graph371->GetYaxis()->SetLabelFont(42);
   Graph_Graph371->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph371->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph371->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph371->GetYaxis()->SetTickLength(0.02);
   Graph_Graph371->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph371->GetYaxis()->SetTitleFont(42);
   Graph_Graph371->GetZaxis()->SetLabelFont(42);
   Graph_Graph371->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph371->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph371->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph371->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph371->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph371);
   
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
   line = new TLine(248.6452,0,248.6452,23.58858);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(248.6402,0,"  248.65 TeV");

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
   pt_LaTex = pt->AddText("#varepsilon = 4e-07");
   pt_LaTex = pt->AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
