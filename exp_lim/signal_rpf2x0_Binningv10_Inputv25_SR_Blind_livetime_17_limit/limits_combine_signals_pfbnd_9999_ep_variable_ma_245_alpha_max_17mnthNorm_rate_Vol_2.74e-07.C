#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_17mnthNorm_rate_Vol_2.74e-07()
{
//=========Macro generated from canvas: climits/climits
//=========  (Fri Jun 12 12:26:06 2026) by ROOT version 6.30/07
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
   
   Double_t Graph0_fx316[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy316[20] = { 589.2099, 10.5092, 9.887071, 6.494073, 6.255495, 6.043055, 5.639588, 9.105873, 12.6698, 16.58672, 20.30507, 37.79541, 38.68581, 37.6883, 38.38039, 37.89287, 36.57057,
   38.04265, 38.21704, 38.21704 };
   TGraph *graph = new TGraph(20,Graph0_fx316,Graph0_fy316);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0316 = new TH1F("Graph_Graph0316","",100,2.7,1099.7);
   Graph_Graph0316->SetMinimum(0.2);
   Graph_Graph0316->SetMaximum(100000);
   Graph_Graph0316->SetDirectory(nullptr);
   Graph_Graph0316->SetStats(0);
   Graph_Graph0316->SetLineWidth(2);
   Graph_Graph0316->SetMarkerStyle(20);
   Graph_Graph0316->SetMarkerSize(0.9);
   Graph_Graph0316->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0316->GetXaxis()->SetRange(0,91);
   Graph_Graph0316->GetXaxis()->SetLabelFont(42);
   Graph_Graph0316->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0316->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0316->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0316->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0316->GetXaxis()->SetTitleFont(42);
   Graph_Graph0316->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0316->GetYaxis()->SetLabelFont(42);
   Graph_Graph0316->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0316->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0316->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0316->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0316->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0316->GetYaxis()->SetTitleFont(42);
   Graph_Graph0316->GetZaxis()->SetLabelFont(42);
   Graph_Graph0316->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0316->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0316->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0316->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0316->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0316);
   
   graph->Draw("al");
   
   Double_t Graph1_fx317[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph1_fy317[42] = { 1457.687, 27.47935, 26.15284, 19.24384, 17.92632, 17.38699, 16.73084, 27.68956, 38.5269, 50.43768, 61.74458, 114.93, 117.6376, 114.6043, 116.7088, 115.2264, 111.2055,
   115.6819, 116.2122, 116.2122, 116.2122, 10.39722, 10.39722, 10.39722, 10.3537, 9.988422, 10.3177, 10.43798, 10.26521, 10.51494, 10.29444, 6.010248, 5.020941,
   3.941724, 2.985353, 2.162053, 2.394337, 2.547583, 2.512898, 4.001464, 4.713741, 262.2424 };
   graph = new TGraph(42,Graph1_fx317,Graph1_fy317);
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
   
   TH1F *Graph_Graph1317 = new TH1F("Graph_Graph1317","Graph",100,2.7,1099.7);
   Graph_Graph1317->SetMinimum(1.945848);
   Graph_Graph1317->SetMaximum(1603.239);
   Graph_Graph1317->SetDirectory(nullptr);
   Graph_Graph1317->SetStats(0);
   Graph_Graph1317->SetLineWidth(2);
   Graph_Graph1317->SetMarkerStyle(20);
   Graph_Graph1317->SetMarkerSize(0.9);
   Graph_Graph1317->GetXaxis()->SetLabelFont(42);
   Graph_Graph1317->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1317->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1317->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1317->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1317->GetXaxis()->SetTitleFont(42);
   Graph_Graph1317->GetYaxis()->SetLabelFont(42);
   Graph_Graph1317->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1317->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1317->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1317->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1317->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1317->GetYaxis()->SetTitleFont(42);
   Graph_Graph1317->GetZaxis()->SetLabelFont(42);
   Graph_Graph1317->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1317->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1317->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1317->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1317->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1317);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx318[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph2_fy318[42] = { 947.109, 16.94284, 16.24654, 11.94261, 11.21071, 10.94063, 10.50743, 18.34658, 25.57006, 33.50286, 41.02474, 76.36258, 78.16154, 76.14616, 77.54447, 76.55948, 73.88788,
   76.8621, 77.21445, 77.21445, 77.21445, 18.0371, 18.0371, 18.0371, 17.9599, 17.30348, 17.89571, 18.10911, 17.80027, 18.24829, 17.85128, 10.12336, 8.389798,
   6.532065, 4.813535, 3.294587, 3.624633, 3.806329, 3.819029, 6.086224, 6.900109, 379.705 };
   graph = new TGraph(42,Graph2_fx318,Graph2_fy318);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2318 = new TH1F("Graph_Graph2318","Graph",100,2.7,1099.7);
   Graph_Graph2318->SetMinimum(2.965129);
   Graph_Graph2318->SetMaximum(1041.49);
   Graph_Graph2318->SetDirectory(nullptr);
   Graph_Graph2318->SetStats(0);
   Graph_Graph2318->SetLineWidth(2);
   Graph_Graph2318->SetMarkerStyle(20);
   Graph_Graph2318->SetMarkerSize(0.9);
   Graph_Graph2318->GetXaxis()->SetLabelFont(42);
   Graph_Graph2318->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2318->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2318->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2318->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2318->GetXaxis()->SetTitleFont(42);
   Graph_Graph2318->GetYaxis()->SetLabelFont(42);
   Graph_Graph2318->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2318->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2318->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2318->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2318->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2318->GetYaxis()->SetTitleFont(42);
   Graph_Graph2318->GetZaxis()->SetLabelFont(42);
   Graph_Graph2318->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2318->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2318->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2318->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2318->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2318);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx319[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy319[20] = { 589.2099, 10.5092, 9.887071, 6.494073, 6.255495, 6.043055, 5.639588, 9.105873, 12.6698, 16.58672, 20.30507, 37.79541, 38.68581, 37.6883, 38.38039, 37.89287, 36.57057,
   38.04265, 38.21704, 38.21704 };
   graph = new TGraph(20,Graph0_fx319,Graph0_fy319);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0319 = new TH1F("Graph_Graph0319","",100,2.7,1099.7);
   Graph_Graph0319->SetMinimum(0.2);
   Graph_Graph0319->SetMaximum(100000);
   Graph_Graph0319->SetDirectory(nullptr);
   Graph_Graph0319->SetStats(0);
   Graph_Graph0319->SetLineWidth(2);
   Graph_Graph0319->SetMarkerStyle(20);
   Graph_Graph0319->SetMarkerSize(0.9);
   Graph_Graph0319->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0319->GetXaxis()->SetRange(0,91);
   Graph_Graph0319->GetXaxis()->SetLabelFont(42);
   Graph_Graph0319->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0319->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0319->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0319->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0319->GetXaxis()->SetTitleFont(42);
   Graph_Graph0319->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0319->GetYaxis()->SetLabelFont(42);
   Graph_Graph0319->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0319->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0319->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0319->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0319->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0319->GetYaxis()->SetTitleFont(42);
   Graph_Graph0319->GetZaxis()->SetLabelFont(42);
   Graph_Graph0319->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0319->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0319->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0319->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0319->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0319);
   
   graph->Draw("l");
   
   Double_t Graph_fx320[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph_fy320[20] = { 9.884384e-127, 1.081886e-93, 6.717889e-74, 1.005424e-60, 2.504434e-51, 2.723738e-44, 7.935222e-39, 2.085396e-05, 0.02487271, 0.7633243, 5.365554, 187.2868, 491.3364, 707.6728, 821.1178, 865.3576, 869.0283,
   850.3464, 820.0662, 820.0662 };
   graph = new TGraph(20,Graph_fx320,Graph_fy320);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph320 = new TH1F("Graph_Graph320","",100,2.7,1099.7);
   Graph_Graph320->SetMinimum(8.895946e-127);
   Graph_Graph320->SetMaximum(955.9311);
   Graph_Graph320->SetDirectory(nullptr);
   Graph_Graph320->SetStats(0);
   Graph_Graph320->SetLineWidth(2);
   Graph_Graph320->SetMarkerStyle(20);
   Graph_Graph320->SetMarkerSize(0.9);
   Graph_Graph320->GetXaxis()->SetLabelFont(42);
   Graph_Graph320->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph320->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph320->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph320->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph320->GetXaxis()->SetTitleFont(42);
   Graph_Graph320->GetYaxis()->SetLabelFont(42);
   Graph_Graph320->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph320->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph320->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph320->GetYaxis()->SetTickLength(0.02);
   Graph_Graph320->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph320->GetYaxis()->SetTitleFont(42);
   Graph_Graph320->GetZaxis()->SetLabelFont(42);
   Graph_Graph320->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph320->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph320->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph320->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph320->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph320);
   
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
   
   Double_t Graph_fx322[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph_fy322[20] = { 1.087282e-126, 1.190075e-93, 7.389678e-74, 1.105966e-60, 2.754877e-51, 2.996112e-44, 8.728744e-39, 2.293936e-05, 0.02735998, 0.8396567, 5.902109, 206.0155, 540.47, 778.4401, 903.2296, 951.8934, 955.9311,
   935.381, 902.0728, 902.0728 };
   graph = new TGraph(20,Graph_fx322,Graph_fy322);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph322 = new TH1F("Graph_Graph322","",100,2.7,1099.7);
   Graph_Graph322->SetMinimum(9.78554e-127);
   Graph_Graph322->SetMaximum(1051.524);
   Graph_Graph322->SetDirectory(nullptr);
   Graph_Graph322->SetStats(0);
   Graph_Graph322->SetLineWidth(2);
   Graph_Graph322->SetMarkerStyle(20);
   Graph_Graph322->SetMarkerSize(0.9);
   Graph_Graph322->GetXaxis()->SetLabelFont(42);
   Graph_Graph322->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph322->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph322->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph322->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph322->GetXaxis()->SetTitleFont(42);
   Graph_Graph322->GetYaxis()->SetLabelFont(42);
   Graph_Graph322->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph322->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph322->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph322->GetYaxis()->SetTickLength(0.02);
   Graph_Graph322->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph322->GetYaxis()->SetTitleFont(42);
   Graph_Graph322->GetZaxis()->SetLabelFont(42);
   Graph_Graph322->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph322->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph322->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph322->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph322->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph322);
   
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
   line = new TLine(145.4017,0,145.4017,26.92241);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(145.3967,0,"  145.40 TeV");

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
   pt_LaTex = pt->AddText("#varepsilon = 2.74e-07");
   pt_LaTex = pt->AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
