#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_17mnthNorm_rate_Vol_2.14e-07()
{
//=========Macro generated from canvas: climits/climits
//=========  (Fri Jun 12 12:26:05 2026) by ROOT version 6.30/07
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
   
   Double_t Graph0_fx274[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy274[20] = { 589.2099, 10.5092, 9.887071, 6.494073, 6.255495, 6.043055, 5.639588, 9.105873, 12.6698, 16.58672, 20.30507, 37.79541, 38.68581, 37.6883, 38.38039, 37.89287, 36.57057,
   38.04265, 38.21704, 38.21704 };
   TGraph *graph = new TGraph(20,Graph0_fx274,Graph0_fy274);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0274 = new TH1F("Graph_Graph0274","",100,2.7,1099.7);
   Graph_Graph0274->SetMinimum(0.2);
   Graph_Graph0274->SetMaximum(100000);
   Graph_Graph0274->SetDirectory(nullptr);
   Graph_Graph0274->SetStats(0);
   Graph_Graph0274->SetLineWidth(2);
   Graph_Graph0274->SetMarkerStyle(20);
   Graph_Graph0274->SetMarkerSize(0.9);
   Graph_Graph0274->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0274->GetXaxis()->SetRange(0,91);
   Graph_Graph0274->GetXaxis()->SetLabelFont(42);
   Graph_Graph0274->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0274->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0274->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0274->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0274->GetXaxis()->SetTitleFont(42);
   Graph_Graph0274->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0274->GetYaxis()->SetLabelFont(42);
   Graph_Graph0274->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0274->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0274->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0274->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0274->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0274->GetYaxis()->SetTitleFont(42);
   Graph_Graph0274->GetZaxis()->SetLabelFont(42);
   Graph_Graph0274->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0274->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0274->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0274->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0274->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0274);
   
   graph->Draw("al");
   
   Double_t Graph1_fx275[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph1_fy275[42] = { 1457.687, 27.47935, 26.15284, 19.24384, 17.92632, 17.38699, 16.73084, 27.68956, 38.5269, 50.43768, 61.74458, 114.93, 117.6376, 114.6043, 116.7088, 115.2264, 111.2055,
   115.6819, 116.2122, 116.2122, 116.2122, 10.39722, 10.39722, 10.39722, 10.3537, 9.988422, 10.3177, 10.43798, 10.26521, 10.51494, 10.29444, 6.010248, 5.020941,
   3.941724, 2.985353, 2.162053, 2.394337, 2.547583, 2.512898, 4.001464, 4.713741, 262.2424 };
   graph = new TGraph(42,Graph1_fx275,Graph1_fy275);
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
   
   TH1F *Graph_Graph1275 = new TH1F("Graph_Graph1275","Graph",100,2.7,1099.7);
   Graph_Graph1275->SetMinimum(1.945848);
   Graph_Graph1275->SetMaximum(1603.239);
   Graph_Graph1275->SetDirectory(nullptr);
   Graph_Graph1275->SetStats(0);
   Graph_Graph1275->SetLineWidth(2);
   Graph_Graph1275->SetMarkerStyle(20);
   Graph_Graph1275->SetMarkerSize(0.9);
   Graph_Graph1275->GetXaxis()->SetLabelFont(42);
   Graph_Graph1275->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1275->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1275->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1275->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1275->GetXaxis()->SetTitleFont(42);
   Graph_Graph1275->GetYaxis()->SetLabelFont(42);
   Graph_Graph1275->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1275->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1275->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1275->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1275->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1275->GetYaxis()->SetTitleFont(42);
   Graph_Graph1275->GetZaxis()->SetLabelFont(42);
   Graph_Graph1275->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1275->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1275->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1275->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1275->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1275);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx276[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph2_fy276[42] = { 947.109, 16.94284, 16.24654, 11.94261, 11.21071, 10.94063, 10.50743, 18.34658, 25.57006, 33.50286, 41.02474, 76.36258, 78.16154, 76.14616, 77.54447, 76.55948, 73.88788,
   76.8621, 77.21445, 77.21445, 77.21445, 18.0371, 18.0371, 18.0371, 17.9599, 17.30348, 17.89571, 18.10911, 17.80027, 18.24829, 17.85128, 10.12336, 8.389798,
   6.532065, 4.813535, 3.294587, 3.624633, 3.806329, 3.819029, 6.086224, 6.900109, 379.705 };
   graph = new TGraph(42,Graph2_fx276,Graph2_fy276);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2276 = new TH1F("Graph_Graph2276","Graph",100,2.7,1099.7);
   Graph_Graph2276->SetMinimum(2.965129);
   Graph_Graph2276->SetMaximum(1041.49);
   Graph_Graph2276->SetDirectory(nullptr);
   Graph_Graph2276->SetStats(0);
   Graph_Graph2276->SetLineWidth(2);
   Graph_Graph2276->SetMarkerStyle(20);
   Graph_Graph2276->SetMarkerSize(0.9);
   Graph_Graph2276->GetXaxis()->SetLabelFont(42);
   Graph_Graph2276->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2276->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2276->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2276->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2276->GetXaxis()->SetTitleFont(42);
   Graph_Graph2276->GetYaxis()->SetLabelFont(42);
   Graph_Graph2276->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2276->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2276->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2276->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2276->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2276->GetYaxis()->SetTitleFont(42);
   Graph_Graph2276->GetZaxis()->SetLabelFont(42);
   Graph_Graph2276->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2276->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2276->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2276->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2276->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2276);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx277[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy277[20] = { 589.2099, 10.5092, 9.887071, 6.494073, 6.255495, 6.043055, 5.639588, 9.105873, 12.6698, 16.58672, 20.30507, 37.79541, 38.68581, 37.6883, 38.38039, 37.89287, 36.57057,
   38.04265, 38.21704, 38.21704 };
   graph = new TGraph(20,Graph0_fx277,Graph0_fy277);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0277 = new TH1F("Graph_Graph0277","",100,2.7,1099.7);
   Graph_Graph0277->SetMinimum(0.2);
   Graph_Graph0277->SetMaximum(100000);
   Graph_Graph0277->SetDirectory(nullptr);
   Graph_Graph0277->SetStats(0);
   Graph_Graph0277->SetLineWidth(2);
   Graph_Graph0277->SetMarkerStyle(20);
   Graph_Graph0277->SetMarkerSize(0.9);
   Graph_Graph0277->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0277->GetXaxis()->SetRange(0,91);
   Graph_Graph0277->GetXaxis()->SetLabelFont(42);
   Graph_Graph0277->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0277->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0277->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0277->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0277->GetXaxis()->SetTitleFont(42);
   Graph_Graph0277->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0277->GetYaxis()->SetLabelFont(42);
   Graph_Graph0277->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0277->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0277->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0277->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0277->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0277->GetYaxis()->SetTitleFont(42);
   Graph_Graph0277->GetZaxis()->SetLabelFont(42);
   Graph_Graph0277->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0277->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0277->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0277->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0277->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0277);
   
   graph->Draw("l");
   
   Double_t Graph_fx278[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph_fy278[20] = { 2.390732e-75, 2.91431e-55, 3.05949e-43, 3.016287e-35, 1.495925e-29, 2.72692e-25, 5.510536e-22, 0.05967779, 3.605982, 24.90851, 71.55765, 417.2095, 602.7835, 644.2916, 625.0806, 584.6733, 539.1906,
   494.934, 454.1629, 454.1629 };
   graph = new TGraph(20,Graph_fx278,Graph_fy278);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph278 = new TH1F("Graph_Graph278","",100,2.7,1099.7);
   Graph_Graph278->SetMinimum(2.151659e-75);
   Graph_Graph278->SetMaximum(708.7208);
   Graph_Graph278->SetDirectory(nullptr);
   Graph_Graph278->SetStats(0);
   Graph_Graph278->SetLineWidth(2);
   Graph_Graph278->SetMarkerStyle(20);
   Graph_Graph278->SetMarkerSize(0.9);
   Graph_Graph278->GetXaxis()->SetLabelFont(42);
   Graph_Graph278->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph278->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph278->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph278->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph278->GetXaxis()->SetTitleFont(42);
   Graph_Graph278->GetYaxis()->SetLabelFont(42);
   Graph_Graph278->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph278->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph278->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph278->GetYaxis()->SetTickLength(0.02);
   Graph_Graph278->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph278->GetYaxis()->SetTitleFont(42);
   Graph_Graph278->GetZaxis()->SetLabelFont(42);
   Graph_Graph278->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph278->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph278->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph278->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph278->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph278);
   
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
   
   Double_t Graph_fx280[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph_fy280[20] = { 2.629805e-75, 3.205741e-55, 3.365439e-43, 3.317916e-35, 1.645518e-29, 2.999612e-25, 6.06159e-22, 0.06564557, 3.96658, 27.39936, 78.71341, 458.9305, 663.0619, 708.7208, 687.5887, 643.1406, 593.1097,
   544.4274, 499.5792, 499.5792 };
   graph = new TGraph(20,Graph_fx280,Graph_fy280);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph280 = new TH1F("Graph_Graph280","",100,2.7,1099.7);
   Graph_Graph280->SetMinimum(2.366825e-75);
   Graph_Graph280->SetMaximum(779.5928);
   Graph_Graph280->SetDirectory(nullptr);
   Graph_Graph280->SetStats(0);
   Graph_Graph280->SetLineWidth(2);
   Graph_Graph280->SetMarkerStyle(20);
   Graph_Graph280->SetMarkerSize(0.9);
   Graph_Graph280->GetXaxis()->SetLabelFont(42);
   Graph_Graph280->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph280->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph280->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph280->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph280->GetXaxis()->SetTitleFont(42);
   Graph_Graph280->GetYaxis()->SetLabelFont(42);
   Graph_Graph280->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph280->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph280->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph280->GetYaxis()->SetTickLength(0.02);
   Graph_Graph280->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph280->GetYaxis()->SetTitleFont(42);
   Graph_Graph280->GetZaxis()->SetLabelFont(42);
   Graph_Graph280->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph280->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph280->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph280->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph280->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph280);
   
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
   line = new TLine(75.11065,0,75.11065,15.52959);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(75.10565,0,"  75.11 TeV");

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
   pt_LaTex = pt->AddText("#varepsilon = 2.14e-07");
   pt_LaTex = pt->AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
