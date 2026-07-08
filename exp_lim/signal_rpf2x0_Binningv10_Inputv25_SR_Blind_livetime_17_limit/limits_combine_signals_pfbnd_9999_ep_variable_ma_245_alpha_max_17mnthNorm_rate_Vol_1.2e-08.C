#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_17mnthNorm_rate_Vol_1.2e-08()
{
//=========Macro generated from canvas: climits/climits
//=========  (Fri Jun 12 12:26:03 2026) by ROOT version 6.30/07
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
   
   Double_t Graph0_fx57[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy57[20] = { 589.2099, 10.5092, 9.887071, 6.494073, 6.255495, 6.043055, 5.639588, 9.105873, 12.6698, 16.58672, 20.30507, 37.79541, 38.68581, 37.6883, 38.38039, 37.89287, 36.57057,
   38.04265, 38.21704, 38.21704 };
   TGraph *graph = new TGraph(20,Graph0_fx57,Graph0_fy57);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph057 = new TH1F("Graph_Graph057","",100,2.7,1099.7);
   Graph_Graph057->SetMinimum(0.2);
   Graph_Graph057->SetMaximum(100000);
   Graph_Graph057->SetDirectory(nullptr);
   Graph_Graph057->SetStats(0);
   Graph_Graph057->SetLineWidth(2);
   Graph_Graph057->SetMarkerStyle(20);
   Graph_Graph057->SetMarkerSize(0.9);
   Graph_Graph057->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph057->GetXaxis()->SetRange(0,91);
   Graph_Graph057->GetXaxis()->SetLabelFont(42);
   Graph_Graph057->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph057->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph057->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph057->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph057->GetXaxis()->SetTitleFont(42);
   Graph_Graph057->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph057->GetYaxis()->SetLabelFont(42);
   Graph_Graph057->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph057->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph057->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph057->GetYaxis()->SetTickLength(0.02);
   Graph_Graph057->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph057->GetYaxis()->SetTitleFont(42);
   Graph_Graph057->GetZaxis()->SetLabelFont(42);
   Graph_Graph057->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph057->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph057->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph057->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph057->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph057);
   
   graph->Draw("al");
   
   Double_t Graph1_fx58[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph1_fy58[42] = { 1457.687, 27.47935, 26.15284, 19.24384, 17.92632, 17.38699, 16.73084, 27.68956, 38.5269, 50.43768, 61.74458, 114.93, 117.6376, 114.6043, 116.7088, 115.2264, 111.2055,
   115.6819, 116.2122, 116.2122, 116.2122, 10.39722, 10.39722, 10.39722, 10.3537, 9.988422, 10.3177, 10.43798, 10.26521, 10.51494, 10.29444, 6.010248, 5.020941,
   3.941724, 2.985353, 2.162053, 2.394337, 2.547583, 2.512898, 4.001464, 4.713741, 262.2424 };
   graph = new TGraph(42,Graph1_fx58,Graph1_fy58);
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
   
   TH1F *Graph_Graph158 = new TH1F("Graph_Graph158","Graph",100,2.7,1099.7);
   Graph_Graph158->SetMinimum(1.945848);
   Graph_Graph158->SetMaximum(1603.239);
   Graph_Graph158->SetDirectory(nullptr);
   Graph_Graph158->SetStats(0);
   Graph_Graph158->SetLineWidth(2);
   Graph_Graph158->SetMarkerStyle(20);
   Graph_Graph158->SetMarkerSize(0.9);
   Graph_Graph158->GetXaxis()->SetLabelFont(42);
   Graph_Graph158->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph158->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph158->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph158->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph158->GetXaxis()->SetTitleFont(42);
   Graph_Graph158->GetYaxis()->SetLabelFont(42);
   Graph_Graph158->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph158->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph158->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph158->GetYaxis()->SetTickLength(0.02);
   Graph_Graph158->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph158->GetYaxis()->SetTitleFont(42);
   Graph_Graph158->GetZaxis()->SetLabelFont(42);
   Graph_Graph158->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph158->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph158->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph158->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph158->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph158);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx59[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph2_fy59[42] = { 947.109, 16.94284, 16.24654, 11.94261, 11.21071, 10.94063, 10.50743, 18.34658, 25.57006, 33.50286, 41.02474, 76.36258, 78.16154, 76.14616, 77.54447, 76.55948, 73.88788,
   76.8621, 77.21445, 77.21445, 77.21445, 18.0371, 18.0371, 18.0371, 17.9599, 17.30348, 17.89571, 18.10911, 17.80027, 18.24829, 17.85128, 10.12336, 8.389798,
   6.532065, 4.813535, 3.294587, 3.624633, 3.806329, 3.819029, 6.086224, 6.900109, 379.705 };
   graph = new TGraph(42,Graph2_fx59,Graph2_fy59);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph259 = new TH1F("Graph_Graph259","Graph",100,2.7,1099.7);
   Graph_Graph259->SetMinimum(2.965129);
   Graph_Graph259->SetMaximum(1041.49);
   Graph_Graph259->SetDirectory(nullptr);
   Graph_Graph259->SetStats(0);
   Graph_Graph259->SetLineWidth(2);
   Graph_Graph259->SetMarkerStyle(20);
   Graph_Graph259->SetMarkerSize(0.9);
   Graph_Graph259->GetXaxis()->SetLabelFont(42);
   Graph_Graph259->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph259->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph259->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph259->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph259->GetXaxis()->SetTitleFont(42);
   Graph_Graph259->GetYaxis()->SetLabelFont(42);
   Graph_Graph259->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph259->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph259->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph259->GetYaxis()->SetTickLength(0.02);
   Graph_Graph259->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph259->GetYaxis()->SetTitleFont(42);
   Graph_Graph259->GetZaxis()->SetLabelFont(42);
   Graph_Graph259->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph259->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph259->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph259->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph259->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph259);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx60[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy60[20] = { 589.2099, 10.5092, 9.887071, 6.494073, 6.255495, 6.043055, 5.639588, 9.105873, 12.6698, 16.58672, 20.30507, 37.79541, 38.68581, 37.6883, 38.38039, 37.89287, 36.57057,
   38.04265, 38.21704, 38.21704 };
   graph = new TGraph(20,Graph0_fx60,Graph0_fy60);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph060 = new TH1F("Graph_Graph060","",100,2.7,1099.7);
   Graph_Graph060->SetMinimum(0.2);
   Graph_Graph060->SetMaximum(100000);
   Graph_Graph060->SetDirectory(nullptr);
   Graph_Graph060->SetStats(0);
   Graph_Graph060->SetLineWidth(2);
   Graph_Graph060->SetMarkerStyle(20);
   Graph_Graph060->SetMarkerSize(0.9);
   Graph_Graph060->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph060->GetXaxis()->SetRange(0,91);
   Graph_Graph060->GetXaxis()->SetLabelFont(42);
   Graph_Graph060->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph060->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph060->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph060->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph060->GetXaxis()->SetTitleFont(42);
   Graph_Graph060->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph060->GetYaxis()->SetLabelFont(42);
   Graph_Graph060->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph060->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph060->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph060->GetYaxis()->SetTickLength(0.02);
   Graph_Graph060->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph060->GetYaxis()->SetTitleFont(42);
   Graph_Graph060->GetZaxis()->SetLabelFont(42);
   Graph_Graph060->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph060->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph060->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph060->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph060->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph060);
   
   graph->Draw("l");
   
   Double_t Graph_fx61[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph_fy61[20] = { 14.38498, 11.16452, 8.939387, 7.357, 6.191985, 5.307154, 4.617108, 0.6756268, 0.3902201, 0.2635298, 0.1876099, 0.06717211, 0.03828904, 0.02570602, 0.01886739, 0.01465226, 0.01183125,
   0.009830111, 0.008347619, 0.008347619 };
   graph = new TGraph(20,Graph_fx61,Graph_fy61);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph61 = new TH1F("Graph_Graph61","",100,2.7,1099.7);
   Graph_Graph61->SetMinimum(0.007512857);
   Graph_Graph61->SetMaximum(15.82264);
   Graph_Graph61->SetDirectory(nullptr);
   Graph_Graph61->SetStats(0);
   Graph_Graph61->SetLineWidth(2);
   Graph_Graph61->SetMarkerStyle(20);
   Graph_Graph61->SetMarkerSize(0.9);
   Graph_Graph61->GetXaxis()->SetLabelFont(42);
   Graph_Graph61->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph61->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph61->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph61->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph61->GetXaxis()->SetTitleFont(42);
   Graph_Graph61->GetYaxis()->SetLabelFont(42);
   Graph_Graph61->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph61->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph61->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph61->GetYaxis()->SetTickLength(0.02);
   Graph_Graph61->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph61->GetYaxis()->SetTitleFont(42);
   Graph_Graph61->GetZaxis()->SetLabelFont(42);
   Graph_Graph61->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph61->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph61->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph61->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph61->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph61);
   
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
   
   Double_t Graph_fx63[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph_fy63[20] = { 15.82348, 12.28097, 9.833326, 8.0927, 6.811184, 5.837869, 5.078819, 0.7431895, 0.4292421, 0.2898828, 0.2063709, 0.07388932, 0.04211794, 0.02827662, 0.02075413, 0.01611749, 0.01301438,
   0.01081312, 0.009182381, 0.009182381 };
   graph = new TGraph(20,Graph_fx63,Graph_fy63);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph63 = new TH1F("Graph_Graph63","",100,2.7,1099.7);
   Graph_Graph63->SetMinimum(0.008264143);
   Graph_Graph63->SetMaximum(17.40491);
   Graph_Graph63->SetDirectory(nullptr);
   Graph_Graph63->SetStats(0);
   Graph_Graph63->SetLineWidth(2);
   Graph_Graph63->SetMarkerStyle(20);
   Graph_Graph63->SetMarkerSize(0.9);
   Graph_Graph63->GetXaxis()->SetLabelFont(42);
   Graph_Graph63->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph63->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph63->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph63->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph63->GetXaxis()->SetTitleFont(42);
   Graph_Graph63->GetYaxis()->SetLabelFont(42);
   Graph_Graph63->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph63->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph63->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph63->GetYaxis()->SetTickLength(0.02);
   Graph_Graph63->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph63->GetYaxis()->SetTitleFont(42);
   Graph_Graph63->GetZaxis()->SetLabelFont(42);
   Graph_Graph63->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph63->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph63->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph63->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph63->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph63);
   
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
   line = new TLine(3.983968,0,3.983968,11.20998);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(3.978968,0,"  3.98 TeV");

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
   pt_LaTex = pt->AddText("#varepsilon = 1.2e-08");
   pt_LaTex = pt->AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
