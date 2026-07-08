#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_17mnthNorm_rate_Vol_4.48e-07()
{
//=========Macro generated from canvas: climits/climits
//=========  (Sat Jul  4 12:17:28 2026) by ROOT version 6.30/07
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
   
   Double_t Graph0_fx379[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy379[20] = { 87.81109, 7.17615, 6.310367, 4.949822, 4.540165, 4.328125, 4.208751, 5.772179, 7.953115, 10.36692, 12.68648, 23.27674, 23.92231, 23.2048, 23.65032, 23.42627, 22.45407,
   23.48842, 23.57745, 23.57745 };
   TGraph *graph = new TGraph(20,Graph0_fx379,Graph0_fy379);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0379 = new TH1F("Graph_Graph0379","",100,2.7,1099.7);
   Graph_Graph0379->SetMinimum(0.2);
   Graph_Graph0379->SetMaximum(100000);
   Graph_Graph0379->SetDirectory(nullptr);
   Graph_Graph0379->SetStats(0);
   Graph_Graph0379->SetLineWidth(2);
   Graph_Graph0379->SetMarkerStyle(20);
   Graph_Graph0379->SetMarkerSize(0.9);
   Graph_Graph0379->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0379->GetXaxis()->SetRange(0,91);
   Graph_Graph0379->GetXaxis()->SetLabelFont(42);
   Graph_Graph0379->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0379->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0379->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0379->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0379->GetXaxis()->SetTitleFont(42);
   Graph_Graph0379->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0379->GetYaxis()->SetLabelFont(42);
   Graph_Graph0379->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0379->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0379->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0379->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0379->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0379->GetYaxis()->SetTitleFont(42);
   Graph_Graph0379->GetZaxis()->SetLabelFont(42);
   Graph_Graph0379->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0379->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0379->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0379->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0379->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0379);
   
   graph->Draw("al");
   
   Double_t Graph1_fx380[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph1_fy380[42] = { 225.9655, 19.13919, 18.1301, 14.63901, 13.37994, 12.81698, 12.47269, 17.55231, 24.1842, 31.52421, 38.57764, 70.78099, 72.74408, 70.56223, 71.91698, 71.23569, 68.27937,
   71.42468, 71.69539, 71.69539, 71.69539, 6.092538, 6.092538, 6.092538, 6.069666, 5.838785, 6.052617, 6.112515, 6.009083, 6.168825, 6.026643, 3.582317, 2.980722,
   2.357333, 1.800408, 1.631254, 1.700126, 1.798089, 1.955746, 2.482647, 3.165121, 37.09668 };
   graph = new TGraph(42,Graph1_fx380,Graph1_fy380);
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
   
   TH1F *Graph_Graph1380 = new TH1F("Graph_Graph1380","Graph",100,2.7,1099.7);
   Graph_Graph1380->SetMinimum(1.468128);
   Graph_Graph1380->SetMaximum(248.399);
   Graph_Graph1380->SetDirectory(nullptr);
   Graph_Graph1380->SetStats(0);
   Graph_Graph1380->SetLineWidth(2);
   Graph_Graph1380->SetMarkerStyle(20);
   Graph_Graph1380->SetMarkerSize(0.9);
   Graph_Graph1380->GetXaxis()->SetLabelFont(42);
   Graph_Graph1380->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1380->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1380->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1380->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1380->GetXaxis()->SetTitleFont(42);
   Graph_Graph1380->GetYaxis()->SetLabelFont(42);
   Graph_Graph1380->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1380->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1380->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1380->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1380->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1380->GetYaxis()->SetTitleFont(42);
   Graph_Graph1380->GetZaxis()->SetLabelFont(42);
   Graph_Graph1380->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1380->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1380->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1380->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1380->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1380);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx381[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph2_fy381[42] = { 144.1124, 11.76302, 11.14282, 8.951492, 8.21902, 7.927551, 7.760462, 11.62097, 16.04632, 20.9452, 25.63201, 47.02878, 48.3331, 46.88342, 47.78356, 47.33089, 45.36663,
   47.45646, 47.63632, 47.63632, 47.63632, 10.87734, 10.87734, 10.87734, 10.83851, 10.39067, 10.81232, 10.90918, 10.71541, 11.02763, 10.7485, 6.147948, 5.098804,
   3.985781, 2.984814, 2.485988, 2.572454, 2.710829, 2.954348, 3.74544, 4.563699, 54.90678 };
   graph = new TGraph(42,Graph2_fx381,Graph2_fy381);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2381 = new TH1F("Graph_Graph2381","Graph",100,2.7,1099.7);
   Graph_Graph2381->SetMinimum(2.237389);
   Graph_Graph2381->SetMaximum(158.2751);
   Graph_Graph2381->SetDirectory(nullptr);
   Graph_Graph2381->SetStats(0);
   Graph_Graph2381->SetLineWidth(2);
   Graph_Graph2381->SetMarkerStyle(20);
   Graph_Graph2381->SetMarkerSize(0.9);
   Graph_Graph2381->GetXaxis()->SetLabelFont(42);
   Graph_Graph2381->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2381->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2381->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2381->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2381->GetXaxis()->SetTitleFont(42);
   Graph_Graph2381->GetYaxis()->SetLabelFont(42);
   Graph_Graph2381->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2381->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2381->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2381->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2381->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2381->GetYaxis()->SetTitleFont(42);
   Graph_Graph2381->GetZaxis()->SetLabelFont(42);
   Graph_Graph2381->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2381->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2381->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2381->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2381->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2381);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx382[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy382[20] = { 87.81109, 7.17615, 6.310367, 4.949822, 4.540165, 4.328125, 4.208751, 5.772179, 7.953115, 10.36692, 12.68648, 23.27674, 23.92231, 23.2048, 23.65032, 23.42627, 22.45407,
   23.48842, 23.57745, 23.57745 };
   graph = new TGraph(20,Graph0_fx382,Graph0_fy382);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0382 = new TH1F("Graph_Graph0382","",100,2.7,1099.7);
   Graph_Graph0382->SetMinimum(0.2);
   Graph_Graph0382->SetMaximum(100000);
   Graph_Graph0382->SetDirectory(nullptr);
   Graph_Graph0382->SetStats(0);
   Graph_Graph0382->SetLineWidth(2);
   Graph_Graph0382->SetMarkerStyle(20);
   Graph_Graph0382->SetMarkerSize(0.9);
   Graph_Graph0382->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0382->GetXaxis()->SetRange(0,91);
   Graph_Graph0382->GetXaxis()->SetLabelFont(42);
   Graph_Graph0382->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0382->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0382->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0382->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0382->GetXaxis()->SetTitleFont(42);
   Graph_Graph0382->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0382->GetYaxis()->SetLabelFont(42);
   Graph_Graph0382->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0382->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0382->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0382->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0382->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0382->GetYaxis()->SetTitleFont(42);
   Graph_Graph0382->GetZaxis()->SetLabelFont(42);
   Graph_Graph0382->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0382->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0382->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0382->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0382->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0382);
   
   graph->Draw("l");
   
   Double_t Graph_fx383[72] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180, 185, 190, 195, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450,
   475, 500, 600, 700, 800, 900, 1000 };
   Double_t Graph_fy383[72] = { 0, 0, 0, 0, 0, 0, 0, 0, 1.777428e-306, 4.217117e-289, 1.477423e-273, 1.438658e-259, 6.497408e-247, 2.069103e-235, 6.567002e-225, 2.771577e-215, 1.981766e-206,
   1.084995e-190, 1.148882e-183, 3.980226e-177, 5.045112e-171, 3.075352e-155, 9.512783e-146, 4.409229e-134, 8.395993e-127, 7.444553e-118, 4.479841e-112, 5.15657e-105, 6.335931e-37, 6.236402e-30, 5.964614e-25, 3.164112e-21, 2.447997e-18,
   4.931021e-16, 3.737952e-14, 1.362914e-12, 3.786734e-10, 3.559237e-09, 2.513595e-08, 1.403259e-07, 6.442049e-07, 2.462718e-06, 8.213069e-06, 6.536558e-05, 0.0003655747, 0.001559056, 0.005373989, 0.01562477, 0.03956515,
   0.08941901, 0.1838411, 0.2556427, 0.3490521, 0.4686298, 0.6194516, 2.053239, 5.275144, 11.27431, 21.0095, 35.26049, 54.54059, 79.07116, 108.8022, 143.4591, 182.6003,
   225.6732, 272.0642, 478.3755, 692.4655, 891.3604, 1063.982, 1063.982 };
   graph = new TGraph(72,Graph_fx383,Graph_fy383);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph383 = new TH1F("Graph_Graph383","",100,1.44,1099.84);
   Graph_Graph383->SetMinimum(1.17038);
   Graph_Graph383->SetMaximum(1170.38);
   Graph_Graph383->SetDirectory(nullptr);
   Graph_Graph383->SetStats(0);
   Graph_Graph383->SetLineWidth(2);
   Graph_Graph383->SetMarkerStyle(20);
   Graph_Graph383->SetMarkerSize(0.9);
   Graph_Graph383->GetXaxis()->SetLabelFont(42);
   Graph_Graph383->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph383->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph383->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph383->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph383->GetXaxis()->SetTitleFont(42);
   Graph_Graph383->GetYaxis()->SetLabelFont(42);
   Graph_Graph383->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph383->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph383->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph383->GetYaxis()->SetTickLength(0.02);
   Graph_Graph383->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph383->GetYaxis()->SetTitleFont(42);
   Graph_Graph383->GetZaxis()->SetLabelFont(42);
   Graph_Graph383->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph383->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph383->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph383->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph383->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph383);
   
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
   
   Double_t Graph_fx385[72] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180, 185, 190, 195, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450,
   475, 500, 600, 700, 800, 900, 1000 };
   Double_t Graph_fy385[72] = { 0, 0, 0, 0, 0, 0, 0, 0, 1.955171e-306, 4.638829e-289, 1.625165e-273, 1.582524e-259, 7.147149e-247, 2.276013e-235, 7.223702e-225, 3.048735e-215, 2.179943e-206,
   1.193495e-190, 1.26377e-183, 4.378249e-177, 5.549623e-171, 3.382887e-155, 1.046406e-145, 4.850152e-134, 9.235592e-127, 8.189008e-118, 4.927825e-112, 5.672227e-105, 6.969524e-37, 6.860042e-30, 6.561075e-25, 3.480523e-21, 2.692797e-18,
   5.424123e-16, 4.111747e-14, 1.499205e-12, 4.165407e-10, 3.915161e-09, 2.764955e-08, 1.543585e-07, 7.086254e-07, 2.70899e-06, 9.034376e-06, 7.190214e-05, 0.0004021322, 0.001714962, 0.005911388, 0.01718725, 0.04352167,
   0.09836091, 0.2022252, 0.281207, 0.3839573, 0.5154928, 0.6813968, 2.258563, 5.802658, 12.40174, 23.11045, 38.78654, 59.99465, 86.97828, 119.6824, 157.805, 200.8603,
   248.2405, 299.2706, 526.2131, 761.7121, 980.4964, 1170.38, 1170.38 };
   graph = new TGraph(72,Graph_fx385,Graph_fy385);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph385 = new TH1F("Graph_Graph385","",100,1.44,1099.84);
   Graph_Graph385->SetMinimum(1.287418);
   Graph_Graph385->SetMaximum(1287.418);
   Graph_Graph385->SetDirectory(nullptr);
   Graph_Graph385->SetStats(0);
   Graph_Graph385->SetLineWidth(2);
   Graph_Graph385->SetMarkerStyle(20);
   Graph_Graph385->SetMarkerSize(0.9);
   Graph_Graph385->GetXaxis()->SetLabelFont(42);
   Graph_Graph385->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph385->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph385->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph385->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph385->GetXaxis()->SetTitleFont(42);
   Graph_Graph385->GetYaxis()->SetLabelFont(42);
   Graph_Graph385->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph385->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph385->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph385->GetYaxis()->SetTickLength(0.02);
   Graph_Graph385->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph385->GetYaxis()->SetTitleFont(42);
   Graph_Graph385->GetZaxis()->SetLabelFont(42);
   Graph_Graph385->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph385->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph385->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph385->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph385->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph385);
   
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
   line = new TLine(306.178,0,306.178,23.87735);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(306.173,0,"  306.18 TeV");

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
   pt_LaTex = pt->AddText("#varepsilon = 4.48e-07");
   pt_LaTex = pt->AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
