#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_17mnthNorm_rate_Vol_9.28e-07()
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
   
   Double_t Graph0_fx519[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy519[20] = { 87.81109, 7.17615, 6.310367, 4.949822, 4.540165, 4.328125, 4.208751, 5.772179, 7.953115, 10.36692, 12.68648, 23.27674, 23.92231, 23.2048, 23.65032, 23.42627, 22.45407,
   23.48842, 23.57745, 23.57745 };
   TGraph *graph = new TGraph(20,Graph0_fx519,Graph0_fy519);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0519 = new TH1F("Graph_Graph0519","",100,2.7,1099.7);
   Graph_Graph0519->SetMinimum(0.2);
   Graph_Graph0519->SetMaximum(100000);
   Graph_Graph0519->SetDirectory(nullptr);
   Graph_Graph0519->SetStats(0);
   Graph_Graph0519->SetLineWidth(2);
   Graph_Graph0519->SetMarkerStyle(20);
   Graph_Graph0519->SetMarkerSize(0.9);
   Graph_Graph0519->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0519->GetXaxis()->SetRange(0,91);
   Graph_Graph0519->GetXaxis()->SetLabelFont(42);
   Graph_Graph0519->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0519->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0519->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0519->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0519->GetXaxis()->SetTitleFont(42);
   Graph_Graph0519->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0519->GetYaxis()->SetLabelFont(42);
   Graph_Graph0519->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0519->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0519->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0519->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0519->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0519->GetYaxis()->SetTitleFont(42);
   Graph_Graph0519->GetZaxis()->SetLabelFont(42);
   Graph_Graph0519->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0519->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0519->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0519->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0519->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0519);
   
   graph->Draw("al");
   
   Double_t Graph1_fx520[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph1_fy520[42] = { 225.9655, 19.13919, 18.1301, 14.63901, 13.37994, 12.81698, 12.47269, 17.55231, 24.1842, 31.52421, 38.57764, 70.78099, 72.74408, 70.56223, 71.91698, 71.23569, 68.27937,
   71.42468, 71.69539, 71.69539, 71.69539, 6.092538, 6.092538, 6.092538, 6.069666, 5.838785, 6.052617, 6.112515, 6.009083, 6.168825, 6.026643, 3.582317, 2.980722,
   2.357333, 1.800408, 1.631254, 1.700126, 1.798089, 1.955746, 2.482647, 3.165121, 37.09668 };
   graph = new TGraph(42,Graph1_fx520,Graph1_fy520);
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
   
   TH1F *Graph_Graph1520 = new TH1F("Graph_Graph1520","Graph",100,2.7,1099.7);
   Graph_Graph1520->SetMinimum(1.468128);
   Graph_Graph1520->SetMaximum(248.399);
   Graph_Graph1520->SetDirectory(nullptr);
   Graph_Graph1520->SetStats(0);
   Graph_Graph1520->SetLineWidth(2);
   Graph_Graph1520->SetMarkerStyle(20);
   Graph_Graph1520->SetMarkerSize(0.9);
   Graph_Graph1520->GetXaxis()->SetLabelFont(42);
   Graph_Graph1520->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1520->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1520->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1520->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1520->GetXaxis()->SetTitleFont(42);
   Graph_Graph1520->GetYaxis()->SetLabelFont(42);
   Graph_Graph1520->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1520->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1520->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1520->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1520->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1520->GetYaxis()->SetTitleFont(42);
   Graph_Graph1520->GetZaxis()->SetLabelFont(42);
   Graph_Graph1520->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1520->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1520->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1520->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1520->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1520);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx521[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph2_fy521[42] = { 144.1124, 11.76302, 11.14282, 8.951492, 8.21902, 7.927551, 7.760462, 11.62097, 16.04632, 20.9452, 25.63201, 47.02878, 48.3331, 46.88342, 47.78356, 47.33089, 45.36663,
   47.45646, 47.63632, 47.63632, 47.63632, 10.87734, 10.87734, 10.87734, 10.83851, 10.39067, 10.81232, 10.90918, 10.71541, 11.02763, 10.7485, 6.147948, 5.098804,
   3.985781, 2.984814, 2.485988, 2.572454, 2.710829, 2.954348, 3.74544, 4.563699, 54.90678 };
   graph = new TGraph(42,Graph2_fx521,Graph2_fy521);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2521 = new TH1F("Graph_Graph2521","Graph",100,2.7,1099.7);
   Graph_Graph2521->SetMinimum(2.237389);
   Graph_Graph2521->SetMaximum(158.2751);
   Graph_Graph2521->SetDirectory(nullptr);
   Graph_Graph2521->SetStats(0);
   Graph_Graph2521->SetLineWidth(2);
   Graph_Graph2521->SetMarkerStyle(20);
   Graph_Graph2521->SetMarkerSize(0.9);
   Graph_Graph2521->GetXaxis()->SetLabelFont(42);
   Graph_Graph2521->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2521->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2521->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2521->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2521->GetXaxis()->SetTitleFont(42);
   Graph_Graph2521->GetYaxis()->SetLabelFont(42);
   Graph_Graph2521->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2521->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2521->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2521->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2521->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2521->GetYaxis()->SetTitleFont(42);
   Graph_Graph2521->GetZaxis()->SetLabelFont(42);
   Graph_Graph2521->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2521->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2521->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2521->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2521->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2521);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx522[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy522[20] = { 87.81109, 7.17615, 6.310367, 4.949822, 4.540165, 4.328125, 4.208751, 5.772179, 7.953115, 10.36692, 12.68648, 23.27674, 23.92231, 23.2048, 23.65032, 23.42627, 22.45407,
   23.48842, 23.57745, 23.57745 };
   graph = new TGraph(20,Graph0_fx522,Graph0_fy522);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0522 = new TH1F("Graph_Graph0522","",100,2.7,1099.7);
   Graph_Graph0522->SetMinimum(0.2);
   Graph_Graph0522->SetMaximum(100000);
   Graph_Graph0522->SetDirectory(nullptr);
   Graph_Graph0522->SetStats(0);
   Graph_Graph0522->SetLineWidth(2);
   Graph_Graph0522->SetMarkerStyle(20);
   Graph_Graph0522->SetMarkerSize(0.9);
   Graph_Graph0522->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0522->GetXaxis()->SetRange(0,91);
   Graph_Graph0522->GetXaxis()->SetLabelFont(42);
   Graph_Graph0522->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0522->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0522->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0522->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0522->GetXaxis()->SetTitleFont(42);
   Graph_Graph0522->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0522->GetYaxis()->SetLabelFont(42);
   Graph_Graph0522->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0522->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0522->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0522->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0522->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0522->GetYaxis()->SetTitleFont(42);
   Graph_Graph0522->GetZaxis()->SetLabelFont(42);
   Graph_Graph0522->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0522->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0522->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0522->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0522->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0522);
   
   graph->Draw("l");
   
   Double_t Graph_fx523[72] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180, 185, 190, 195, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450,
   475, 500, 600, 700, 800, 900, 1000 };
   Double_t Graph_fy523[72] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6.534954e-176, 1.526267e-145, 7.259363e-124, 1.282432e-107, 5.448666e-95,
   6.79476e-85, 1.221648e-76, 9.148363e-70, 5.668305e-59, 1.16378e-54, 6.866244e-51, 1.451168e-47, 1.304061e-44, 5.599532e-42, 1.308156e-39, 1.603398e-35, 4.063969e-32, 3.065204e-29, 8.921308e-27, 1.212295e-24, 8.872844e-23,
   3.901737e-21, 1.122323e-19, 5.245406e-19, 2.258382e-18, 9.014069e-18, 3.354463e-17, 9.862692e-15, 9.165215e-13, 3.689895e-11, 7.940586e-10, 1.056269e-08, 9.634294e-08, 6.50105e-07, 3.435461e-06, 1.484933e-05, 5.430242e-05,
   0.0001725403, 0.0004865925, 0.01261906, 0.1248786, 0.6796212, 2.48962, 2.48962 };
   graph = new TGraph(72,Graph_fx523,Graph_fy523);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph523 = new TH1F("Graph_Graph523","",100,1.44,1099.84);
   Graph_Graph523->SetMinimum(0.002738582);
   Graph_Graph523->SetMaximum(2.738582);
   Graph_Graph523->SetDirectory(nullptr);
   Graph_Graph523->SetStats(0);
   Graph_Graph523->SetLineWidth(2);
   Graph_Graph523->SetMarkerStyle(20);
   Graph_Graph523->SetMarkerSize(0.9);
   Graph_Graph523->GetXaxis()->SetLabelFont(42);
   Graph_Graph523->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph523->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph523->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph523->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph523->GetXaxis()->SetTitleFont(42);
   Graph_Graph523->GetYaxis()->SetLabelFont(42);
   Graph_Graph523->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph523->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph523->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph523->GetYaxis()->SetTickLength(0.02);
   Graph_Graph523->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph523->GetYaxis()->SetTitleFont(42);
   Graph_Graph523->GetZaxis()->SetLabelFont(42);
   Graph_Graph523->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph523->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph523->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph523->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph523->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph523);
   
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
   
   Double_t Graph_fx525[72] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180, 185, 190, 195, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450,
   475, 500, 600, 700, 800, 900, 1000 };
   Double_t Graph_fy525[72] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7.188449e-176, 1.678894e-145, 7.985299e-124, 1.410675e-107, 5.993533e-95,
   7.474236e-85, 1.343813e-76, 1.00632e-69, 6.235135e-59, 1.280158e-54, 7.552868e-51, 1.596285e-47, 1.434467e-44, 6.159485e-42, 1.438972e-39, 1.763738e-35, 4.470366e-32, 3.371724e-29, 9.813439e-27, 1.333525e-24, 9.760128e-23,
   4.291911e-21, 1.234555e-19, 5.769947e-19, 2.48422e-18, 9.915476e-18, 3.689909e-17, 1.084896e-14, 1.008174e-12, 4.058885e-11, 8.734645e-10, 1.161896e-08, 1.059772e-07, 7.151155e-07, 3.779007e-06, 1.633426e-05, 5.973266e-05,
   0.0001897943, 0.0005352518, 0.01388097, 0.1373665, 0.7475833, 2.738582, 2.738582 };
   graph = new TGraph(72,Graph_fx525,Graph_fy525);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph525 = new TH1F("Graph_Graph525","",100,1.44,1099.84);
   Graph_Graph525->SetMinimum(0.00301244);
   Graph_Graph525->SetMaximum(3.01244);
   Graph_Graph525->SetDirectory(nullptr);
   Graph_Graph525->SetStats(0);
   Graph_Graph525->SetLineWidth(2);
   Graph_Graph525->SetMarkerStyle(20);
   Graph_Graph525->SetMarkerSize(0.9);
   Graph_Graph525->GetXaxis()->SetLabelFont(42);
   Graph_Graph525->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph525->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph525->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph525->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph525->GetXaxis()->SetTitleFont(42);
   Graph_Graph525->GetYaxis()->SetLabelFont(42);
   Graph_Graph525->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph525->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph525->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph525->GetYaxis()->SetTickLength(0.02);
   Graph_Graph525->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph525->GetYaxis()->SetTitleFont(42);
   Graph_Graph525->GetZaxis()->SetLabelFont(42);
   Graph_Graph525->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph525->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph525->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph525->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph525->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph525);
   
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
   pt_LaTex = pt->AddText("#varepsilon = 9.28e-07");
   pt_LaTex = pt->AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
