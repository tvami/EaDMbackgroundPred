#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_17mnthNorm_rate_Vol_2.04e-07()
{
//=========Macro generated from canvas: climits/climits
//=========  (Sat Jul  4 12:17:26 2026) by ROOT version 6.30/07
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
   
   Double_t Graph0_fx267[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy267[20] = { 87.81109, 7.17615, 6.310367, 4.949822, 4.540165, 4.328125, 4.208751, 5.772179, 7.953115, 10.36692, 12.68648, 23.27674, 23.92231, 23.2048, 23.65032, 23.42627, 22.45407,
   23.48842, 23.57745, 23.57745 };
   TGraph *graph = new TGraph(20,Graph0_fx267,Graph0_fy267);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0267 = new TH1F("Graph_Graph0267","",100,2.7,1099.7);
   Graph_Graph0267->SetMinimum(0.2);
   Graph_Graph0267->SetMaximum(100000);
   Graph_Graph0267->SetDirectory(nullptr);
   Graph_Graph0267->SetStats(0);
   Graph_Graph0267->SetLineWidth(2);
   Graph_Graph0267->SetMarkerStyle(20);
   Graph_Graph0267->SetMarkerSize(0.9);
   Graph_Graph0267->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0267->GetXaxis()->SetRange(0,91);
   Graph_Graph0267->GetXaxis()->SetLabelFont(42);
   Graph_Graph0267->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0267->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0267->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0267->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0267->GetXaxis()->SetTitleFont(42);
   Graph_Graph0267->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0267->GetYaxis()->SetLabelFont(42);
   Graph_Graph0267->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0267->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0267->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0267->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0267->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0267->GetYaxis()->SetTitleFont(42);
   Graph_Graph0267->GetZaxis()->SetLabelFont(42);
   Graph_Graph0267->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0267->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0267->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0267->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0267->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0267);
   
   graph->Draw("al");
   
   Double_t Graph1_fx268[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph1_fy268[42] = { 225.9655, 19.13919, 18.1301, 14.63901, 13.37994, 12.81698, 12.47269, 17.55231, 24.1842, 31.52421, 38.57764, 70.78099, 72.74408, 70.56223, 71.91698, 71.23569, 68.27937,
   71.42468, 71.69539, 71.69539, 71.69539, 6.092538, 6.092538, 6.092538, 6.069666, 5.838785, 6.052617, 6.112515, 6.009083, 6.168825, 6.026643, 3.582317, 2.980722,
   2.357333, 1.800408, 1.631254, 1.700126, 1.798089, 1.955746, 2.482647, 3.165121, 37.09668 };
   graph = new TGraph(42,Graph1_fx268,Graph1_fy268);
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
   
   TH1F *Graph_Graph1268 = new TH1F("Graph_Graph1268","Graph",100,2.7,1099.7);
   Graph_Graph1268->SetMinimum(1.468128);
   Graph_Graph1268->SetMaximum(248.399);
   Graph_Graph1268->SetDirectory(nullptr);
   Graph_Graph1268->SetStats(0);
   Graph_Graph1268->SetLineWidth(2);
   Graph_Graph1268->SetMarkerStyle(20);
   Graph_Graph1268->SetMarkerSize(0.9);
   Graph_Graph1268->GetXaxis()->SetLabelFont(42);
   Graph_Graph1268->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1268->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1268->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1268->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1268->GetXaxis()->SetTitleFont(42);
   Graph_Graph1268->GetYaxis()->SetLabelFont(42);
   Graph_Graph1268->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1268->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1268->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1268->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1268->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1268->GetYaxis()->SetTitleFont(42);
   Graph_Graph1268->GetZaxis()->SetLabelFont(42);
   Graph_Graph1268->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1268->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1268->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1268->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1268->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1268);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx269[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph2_fy269[42] = { 144.1124, 11.76302, 11.14282, 8.951492, 8.21902, 7.927551, 7.760462, 11.62097, 16.04632, 20.9452, 25.63201, 47.02878, 48.3331, 46.88342, 47.78356, 47.33089, 45.36663,
   47.45646, 47.63632, 47.63632, 47.63632, 10.87734, 10.87734, 10.87734, 10.83851, 10.39067, 10.81232, 10.90918, 10.71541, 11.02763, 10.7485, 6.147948, 5.098804,
   3.985781, 2.984814, 2.485988, 2.572454, 2.710829, 2.954348, 3.74544, 4.563699, 54.90678 };
   graph = new TGraph(42,Graph2_fx269,Graph2_fy269);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2269 = new TH1F("Graph_Graph2269","Graph",100,2.7,1099.7);
   Graph_Graph2269->SetMinimum(2.237389);
   Graph_Graph2269->SetMaximum(158.2751);
   Graph_Graph2269->SetDirectory(nullptr);
   Graph_Graph2269->SetStats(0);
   Graph_Graph2269->SetLineWidth(2);
   Graph_Graph2269->SetMarkerStyle(20);
   Graph_Graph2269->SetMarkerSize(0.9);
   Graph_Graph2269->GetXaxis()->SetLabelFont(42);
   Graph_Graph2269->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2269->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2269->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2269->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2269->GetXaxis()->SetTitleFont(42);
   Graph_Graph2269->GetYaxis()->SetLabelFont(42);
   Graph_Graph2269->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2269->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2269->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2269->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2269->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2269->GetYaxis()->SetTitleFont(42);
   Graph_Graph2269->GetZaxis()->SetLabelFont(42);
   Graph_Graph2269->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2269->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2269->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2269->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2269->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2269);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx270[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy270[20] = { 87.81109, 7.17615, 6.310367, 4.949822, 4.540165, 4.328125, 4.208751, 5.772179, 7.953115, 10.36692, 12.68648, 23.27674, 23.92231, 23.2048, 23.65032, 23.42627, 22.45407,
   23.48842, 23.57745, 23.57745 };
   graph = new TGraph(20,Graph0_fx270,Graph0_fy270);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0270 = new TH1F("Graph_Graph0270","",100,2.7,1099.7);
   Graph_Graph0270->SetMinimum(0.2);
   Graph_Graph0270->SetMaximum(100000);
   Graph_Graph0270->SetDirectory(nullptr);
   Graph_Graph0270->SetStats(0);
   Graph_Graph0270->SetLineWidth(2);
   Graph_Graph0270->SetMarkerStyle(20);
   Graph_Graph0270->SetMarkerSize(0.9);
   Graph_Graph0270->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0270->GetXaxis()->SetRange(0,91);
   Graph_Graph0270->GetXaxis()->SetLabelFont(42);
   Graph_Graph0270->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0270->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0270->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0270->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0270->GetXaxis()->SetTitleFont(42);
   Graph_Graph0270->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0270->GetYaxis()->SetLabelFont(42);
   Graph_Graph0270->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0270->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0270->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0270->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0270->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0270->GetYaxis()->SetTitleFont(42);
   Graph_Graph0270->GetZaxis()->SetLabelFont(42);
   Graph_Graph0270->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0270->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0270->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0270->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0270->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0270);
   
   graph->Draw("l");
   
   Double_t Graph_fx271[72] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180, 185, 190, 195, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450,
   475, 500, 600, 700, 800, 900, 1000 };
   Double_t Graph_fy271[72] = { 4.317914e-132, 8.056216e-117, 1.306509e-104, 1.260699e-94, 2.812351e-79, 2.976519e-73, 4.922532e-68, 1.802368e-63, 1.907123e-59, 7.174159e-56, 1.129903e-52, 8.491724e-50, 3.385423e-47, 7.807353e-45, 1.11875e-42, 1.057262e-40, 6.927723e-39,
   1.167109e-35, 3.208555e-34, 7.00663e-33, 1.243755e-31, 1.325876e-28, 1.827383e-26, 2.957954e-24, 1.337629e-22, 6.399856e-21, 1.329405e-19, 2.772461e-18, 0.0001649155, 0.00380229, 0.03459569, 0.1767819, 0.616626,
   1.649558, 3.643487, 6.977967, 18.90991, 27.88992, 38.95768, 52.05257, 67.04002, 82.19309, 98.49756, 133.8121, 171.5185, 210.2896, 249.0081, 286.7894, 322.9729,
   357.0972, 388.8678, 403.8159, 418.1238, 431.7875, 444.8071, 500.5053, 541.8107, 570.9444, 590.1941, 601.6112, 606.9204, 607.5236, 604.5386, 598.847, 591.1401,
   581.9573, 571.7187, 525.73, 478.9701, 435.6632, 396.9476, 396.9476 };
   graph = new TGraph(72,Graph_fx271,Graph_fy271);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph271 = new TH1F("Graph_Graph271","",100,1.44,1099.84);
   Graph_Graph271->SetMinimum(3.886123e-132);
   Graph_Graph271->SetMaximum(668.276);
   Graph_Graph271->SetDirectory(nullptr);
   Graph_Graph271->SetStats(0);
   Graph_Graph271->SetLineWidth(2);
   Graph_Graph271->SetMarkerStyle(20);
   Graph_Graph271->SetMarkerSize(0.9);
   Graph_Graph271->GetXaxis()->SetLabelFont(42);
   Graph_Graph271->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph271->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph271->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph271->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph271->GetXaxis()->SetTitleFont(42);
   Graph_Graph271->GetYaxis()->SetLabelFont(42);
   Graph_Graph271->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph271->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph271->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph271->GetYaxis()->SetTickLength(0.02);
   Graph_Graph271->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph271->GetYaxis()->SetTitleFont(42);
   Graph_Graph271->GetZaxis()->SetLabelFont(42);
   Graph_Graph271->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph271->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph271->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph271->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph271->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph271);
   
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
   
   Double_t Graph_fx273[72] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180, 185, 190, 195, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450,
   475, 500, 600, 700, 800, 900, 1000 };
   Double_t Graph_fy273[72] = { 4.749705e-132, 8.861838e-117, 1.43716e-104, 1.386769e-94, 3.093586e-79, 3.274171e-73, 5.414785e-68, 1.982605e-63, 2.097835e-59, 7.891575e-56, 1.242893e-52, 9.340896e-50, 3.723965e-47, 8.588088e-45, 1.230625e-42, 1.162988e-40, 7.620495e-39,
   1.28382e-35, 3.52941e-34, 7.707293e-33, 1.368131e-31, 1.458464e-28, 2.010121e-26, 3.253749e-24, 1.471392e-22, 7.039842e-21, 1.462346e-19, 3.049707e-18, 0.0001814071, 0.004182519, 0.03805526, 0.1944601, 0.6782886,
   1.814514, 4.007836, 7.675764, 20.8009, 30.67891, 42.85345, 57.25783, 73.74402, 90.4124, 108.3473, 147.1933, 188.6704, 231.3186, 273.9089, 315.4683, 355.2702,
   392.8069, 427.7546, 444.1975, 459.9362, 474.9663, 489.2878, 550.5558, 595.9918, 628.0388, 649.2135, 661.7723, 667.6124, 668.276, 664.9925, 658.7317, 650.2541,
   640.153, 628.8906, 578.303, 526.8671, 479.2295, 436.6424, 436.6424 };
   graph = new TGraph(72,Graph_fx273,Graph_fy273);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph273 = new TH1F("Graph_Graph273","",100,1.44,1099.84);
   Graph_Graph273->SetMinimum(4.274735e-132);
   Graph_Graph273->SetMaximum(735.1036);
   Graph_Graph273->SetDirectory(nullptr);
   Graph_Graph273->SetStats(0);
   Graph_Graph273->SetLineWidth(2);
   Graph_Graph273->SetMarkerStyle(20);
   Graph_Graph273->SetMarkerSize(0.9);
   Graph_Graph273->GetXaxis()->SetLabelFont(42);
   Graph_Graph273->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph273->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph273->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph273->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph273->GetXaxis()->SetTitleFont(42);
   Graph_Graph273->GetYaxis()->SetLabelFont(42);
   Graph_Graph273->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph273->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph273->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph273->GetYaxis()->SetTickLength(0.02);
   Graph_Graph273->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph273->GetYaxis()->SetTitleFont(42);
   Graph_Graph273->GetZaxis()->SetLabelFont(42);
   Graph_Graph273->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph273->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph273->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph273->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph273->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph273);
   
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
   line = new TLine(61.51326,0,61.51326,8.114224);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(61.50826,0,"  61.51 TeV");

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
   pt_LaTex = pt->AddText("#varepsilon = 2.04e-07");
   pt_LaTex = pt->AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
