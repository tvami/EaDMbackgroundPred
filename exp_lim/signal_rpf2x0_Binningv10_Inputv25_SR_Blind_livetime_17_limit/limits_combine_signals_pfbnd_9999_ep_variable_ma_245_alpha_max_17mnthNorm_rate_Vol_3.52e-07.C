#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_17mnthNorm_rate_Vol_3.52e-07()
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
   
   Double_t Graph0_fx351[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy351[20] = { 589.2099, 10.5092, 9.887071, 6.494073, 6.255495, 6.043055, 5.639588, 9.105873, 12.6698, 16.58672, 20.30507, 37.79541, 38.68581, 37.6883, 38.38039, 37.89287, 36.57057,
   38.04265, 38.21704, 38.21704 };
   TGraph *graph = new TGraph(20,Graph0_fx351,Graph0_fy351);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0351 = new TH1F("Graph_Graph0351","",100,2.7,1099.7);
   Graph_Graph0351->SetMinimum(0.2);
   Graph_Graph0351->SetMaximum(100000);
   Graph_Graph0351->SetDirectory(nullptr);
   Graph_Graph0351->SetStats(0);
   Graph_Graph0351->SetLineWidth(2);
   Graph_Graph0351->SetMarkerStyle(20);
   Graph_Graph0351->SetMarkerSize(0.9);
   Graph_Graph0351->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0351->GetXaxis()->SetRange(0,91);
   Graph_Graph0351->GetXaxis()->SetLabelFont(42);
   Graph_Graph0351->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0351->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0351->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0351->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0351->GetXaxis()->SetTitleFont(42);
   Graph_Graph0351->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0351->GetYaxis()->SetLabelFont(42);
   Graph_Graph0351->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0351->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0351->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0351->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0351->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0351->GetYaxis()->SetTitleFont(42);
   Graph_Graph0351->GetZaxis()->SetLabelFont(42);
   Graph_Graph0351->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0351->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0351->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0351->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0351->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0351);
   
   graph->Draw("al");
   
   Double_t Graph1_fx352[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph1_fy352[42] = { 1457.687, 27.47935, 26.15284, 19.24384, 17.92632, 17.38699, 16.73084, 27.68956, 38.5269, 50.43768, 61.74458, 114.93, 117.6376, 114.6043, 116.7088, 115.2264, 111.2055,
   115.6819, 116.2122, 116.2122, 116.2122, 10.39722, 10.39722, 10.39722, 10.3537, 9.988422, 10.3177, 10.43798, 10.26521, 10.51494, 10.29444, 6.010248, 5.020941,
   3.941724, 2.985353, 2.162053, 2.394337, 2.547583, 2.512898, 4.001464, 4.713741, 262.2424 };
   graph = new TGraph(42,Graph1_fx352,Graph1_fy352);
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
   
   TH1F *Graph_Graph1352 = new TH1F("Graph_Graph1352","Graph",100,2.7,1099.7);
   Graph_Graph1352->SetMinimum(1.945848);
   Graph_Graph1352->SetMaximum(1603.239);
   Graph_Graph1352->SetDirectory(nullptr);
   Graph_Graph1352->SetStats(0);
   Graph_Graph1352->SetLineWidth(2);
   Graph_Graph1352->SetMarkerStyle(20);
   Graph_Graph1352->SetMarkerSize(0.9);
   Graph_Graph1352->GetXaxis()->SetLabelFont(42);
   Graph_Graph1352->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1352->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1352->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1352->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1352->GetXaxis()->SetTitleFont(42);
   Graph_Graph1352->GetYaxis()->SetLabelFont(42);
   Graph_Graph1352->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1352->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1352->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1352->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1352->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1352->GetYaxis()->SetTitleFont(42);
   Graph_Graph1352->GetZaxis()->SetLabelFont(42);
   Graph_Graph1352->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1352->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1352->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1352->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1352->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1352);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx353[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph2_fy353[42] = { 947.109, 16.94284, 16.24654, 11.94261, 11.21071, 10.94063, 10.50743, 18.34658, 25.57006, 33.50286, 41.02474, 76.36258, 78.16154, 76.14616, 77.54447, 76.55948, 73.88788,
   76.8621, 77.21445, 77.21445, 77.21445, 18.0371, 18.0371, 18.0371, 17.9599, 17.30348, 17.89571, 18.10911, 17.80027, 18.24829, 17.85128, 10.12336, 8.389798,
   6.532065, 4.813535, 3.294587, 3.624633, 3.806329, 3.819029, 6.086224, 6.900109, 379.705 };
   graph = new TGraph(42,Graph2_fx353,Graph2_fy353);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2353 = new TH1F("Graph_Graph2353","Graph",100,2.7,1099.7);
   Graph_Graph2353->SetMinimum(2.965129);
   Graph_Graph2353->SetMaximum(1041.49);
   Graph_Graph2353->SetDirectory(nullptr);
   Graph_Graph2353->SetStats(0);
   Graph_Graph2353->SetLineWidth(2);
   Graph_Graph2353->SetMarkerStyle(20);
   Graph_Graph2353->SetMarkerSize(0.9);
   Graph_Graph2353->GetXaxis()->SetLabelFont(42);
   Graph_Graph2353->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2353->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2353->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2353->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2353->GetXaxis()->SetTitleFont(42);
   Graph_Graph2353->GetYaxis()->SetLabelFont(42);
   Graph_Graph2353->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2353->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2353->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2353->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2353->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2353->GetYaxis()->SetTitleFont(42);
   Graph_Graph2353->GetZaxis()->SetLabelFont(42);
   Graph_Graph2353->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2353->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2353->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2353->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2353->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2353);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx354[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy354[20] = { 589.2099, 10.5092, 9.887071, 6.494073, 6.255495, 6.043055, 5.639588, 9.105873, 12.6698, 16.58672, 20.30507, 37.79541, 38.68581, 37.6883, 38.38039, 37.89287, 36.57057,
   38.04265, 38.21704, 38.21704 };
   graph = new TGraph(20,Graph0_fx354,Graph0_fy354);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0354 = new TH1F("Graph_Graph0354","",100,2.7,1099.7);
   Graph_Graph0354->SetMinimum(0.2);
   Graph_Graph0354->SetMaximum(100000);
   Graph_Graph0354->SetDirectory(nullptr);
   Graph_Graph0354->SetStats(0);
   Graph_Graph0354->SetLineWidth(2);
   Graph_Graph0354->SetMarkerStyle(20);
   Graph_Graph0354->SetMarkerSize(0.9);
   Graph_Graph0354->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0354->GetXaxis()->SetRange(0,91);
   Graph_Graph0354->GetXaxis()->SetLabelFont(42);
   Graph_Graph0354->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0354->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0354->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0354->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0354->GetXaxis()->SetTitleFont(42);
   Graph_Graph0354->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0354->GetYaxis()->SetLabelFont(42);
   Graph_Graph0354->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0354->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0354->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0354->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0354->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0354->GetYaxis()->SetTitleFont(42);
   Graph_Graph0354->GetZaxis()->SetLabelFont(42);
   Graph_Graph0354->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0354->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0354->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0354->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0354->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0354);
   
   graph->Draw("l");
   
   Double_t Graph_fx355[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph_fy355[20] = { 1.061005e-212, 4.634856e-158, 2.628716e-125, 1.719093e-103, 6.359209e-88, 2.942163e-76, 3.413852e-67, 1.879411e-11, 3.240918e-06, 0.001195941, 0.03738083, 25.79933, 183.0217, 433.4783, 677.871, 871.6491, 1009.015,
   1098.367, 1150.807, 1150.807 };
   graph = new TGraph(20,Graph_fx355,Graph_fy355);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph355 = new TH1F("Graph_Graph355","",100,2.7,1099.7);
   Graph_Graph355->SetMinimum(9.549045e-213);
   Graph_Graph355->SetMaximum(1265.888);
   Graph_Graph355->SetDirectory(nullptr);
   Graph_Graph355->SetStats(0);
   Graph_Graph355->SetLineWidth(2);
   Graph_Graph355->SetMarkerStyle(20);
   Graph_Graph355->SetMarkerSize(0.9);
   Graph_Graph355->GetXaxis()->SetLabelFont(42);
   Graph_Graph355->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph355->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph355->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph355->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph355->GetXaxis()->SetTitleFont(42);
   Graph_Graph355->GetYaxis()->SetLabelFont(42);
   Graph_Graph355->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph355->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph355->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph355->GetYaxis()->SetTickLength(0.02);
   Graph_Graph355->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph355->GetYaxis()->SetTitleFont(42);
   Graph_Graph355->GetZaxis()->SetLabelFont(42);
   Graph_Graph355->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph355->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph355->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph355->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph355->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph355);
   
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
   
   Double_t Graph_fx357[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph_fy357[20] = { 1.167106e-212, 5.098342e-158, 2.891588e-125, 1.891002e-103, 6.99513e-88, 3.236379e-76, 3.755237e-67, 2.067352e-11, 3.56501e-06, 0.001315535, 0.04111891, 28.37926, 201.3239, 476.8261, 745.6581, 958.814, 1109.917,
   1208.204, 1265.888, 1265.888 };
   graph = new TGraph(20,Graph_fx357,Graph_fy357);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph357 = new TH1F("Graph_Graph357","",100,2.7,1099.7);
   Graph_Graph357->SetMinimum(1.050395e-212);
   Graph_Graph357->SetMaximum(1392.476);
   Graph_Graph357->SetDirectory(nullptr);
   Graph_Graph357->SetStats(0);
   Graph_Graph357->SetLineWidth(2);
   Graph_Graph357->SetMarkerStyle(20);
   Graph_Graph357->SetMarkerSize(0.9);
   Graph_Graph357->GetXaxis()->SetLabelFont(42);
   Graph_Graph357->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph357->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph357->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph357->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph357->GetXaxis()->SetTitleFont(42);
   Graph_Graph357->GetYaxis()->SetLabelFont(42);
   Graph_Graph357->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph357->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph357->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph357->GetYaxis()->SetTickLength(0.02);
   Graph_Graph357->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph357->GetYaxis()->SetTitleFont(42);
   Graph_Graph357->GetZaxis()->SetLabelFont(42);
   Graph_Graph357->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph357->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph357->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph357->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph357->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph357);
   
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
   line = new TLine(219.7234,0,219.7234,37.96939);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(219.7184,0,"  219.72 TeV");

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
   pt_LaTex = pt->AddText("#varepsilon = 3.52e-07");
   pt_LaTex = pt->AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
