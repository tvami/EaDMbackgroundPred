#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_17mnthNorm_rate_Vol_2.34e-07()
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
   
   Double_t Graph0_fx288[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy288[20] = { 589.2099, 10.5092, 9.887071, 6.494073, 6.255495, 6.043055, 5.639588, 9.105873, 12.6698, 16.58672, 20.30507, 37.79541, 38.68581, 37.6883, 38.38039, 37.89287, 36.57057,
   38.04265, 38.21704, 38.21704 };
   TGraph *graph = new TGraph(20,Graph0_fx288,Graph0_fy288);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0288 = new TH1F("Graph_Graph0288","",100,2.7,1099.7);
   Graph_Graph0288->SetMinimum(0.2);
   Graph_Graph0288->SetMaximum(100000);
   Graph_Graph0288->SetDirectory(nullptr);
   Graph_Graph0288->SetStats(0);
   Graph_Graph0288->SetLineWidth(2);
   Graph_Graph0288->SetMarkerStyle(20);
   Graph_Graph0288->SetMarkerSize(0.9);
   Graph_Graph0288->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0288->GetXaxis()->SetRange(0,91);
   Graph_Graph0288->GetXaxis()->SetLabelFont(42);
   Graph_Graph0288->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0288->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0288->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0288->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0288->GetXaxis()->SetTitleFont(42);
   Graph_Graph0288->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0288->GetYaxis()->SetLabelFont(42);
   Graph_Graph0288->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0288->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0288->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0288->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0288->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0288->GetYaxis()->SetTitleFont(42);
   Graph_Graph0288->GetZaxis()->SetLabelFont(42);
   Graph_Graph0288->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0288->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0288->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0288->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0288->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0288);
   
   graph->Draw("al");
   
   Double_t Graph1_fx289[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph1_fy289[42] = { 1457.687, 27.47935, 26.15284, 19.24384, 17.92632, 17.38699, 16.73084, 27.68956, 38.5269, 50.43768, 61.74458, 114.93, 117.6376, 114.6043, 116.7088, 115.2264, 111.2055,
   115.6819, 116.2122, 116.2122, 116.2122, 10.39722, 10.39722, 10.39722, 10.3537, 9.988422, 10.3177, 10.43798, 10.26521, 10.51494, 10.29444, 6.010248, 5.020941,
   3.941724, 2.985353, 2.162053, 2.394337, 2.547583, 2.512898, 4.001464, 4.713741, 262.2424 };
   graph = new TGraph(42,Graph1_fx289,Graph1_fy289);
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
   
   TH1F *Graph_Graph1289 = new TH1F("Graph_Graph1289","Graph",100,2.7,1099.7);
   Graph_Graph1289->SetMinimum(1.945848);
   Graph_Graph1289->SetMaximum(1603.239);
   Graph_Graph1289->SetDirectory(nullptr);
   Graph_Graph1289->SetStats(0);
   Graph_Graph1289->SetLineWidth(2);
   Graph_Graph1289->SetMarkerStyle(20);
   Graph_Graph1289->SetMarkerSize(0.9);
   Graph_Graph1289->GetXaxis()->SetLabelFont(42);
   Graph_Graph1289->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1289->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1289->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1289->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1289->GetXaxis()->SetTitleFont(42);
   Graph_Graph1289->GetYaxis()->SetLabelFont(42);
   Graph_Graph1289->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1289->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1289->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1289->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1289->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1289->GetYaxis()->SetTitleFont(42);
   Graph_Graph1289->GetZaxis()->SetLabelFont(42);
   Graph_Graph1289->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1289->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1289->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1289->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1289->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1289);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx290[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph2_fy290[42] = { 947.109, 16.94284, 16.24654, 11.94261, 11.21071, 10.94063, 10.50743, 18.34658, 25.57006, 33.50286, 41.02474, 76.36258, 78.16154, 76.14616, 77.54447, 76.55948, 73.88788,
   76.8621, 77.21445, 77.21445, 77.21445, 18.0371, 18.0371, 18.0371, 17.9599, 17.30348, 17.89571, 18.10911, 17.80027, 18.24829, 17.85128, 10.12336, 8.389798,
   6.532065, 4.813535, 3.294587, 3.624633, 3.806329, 3.819029, 6.086224, 6.900109, 379.705 };
   graph = new TGraph(42,Graph2_fx290,Graph2_fy290);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2290 = new TH1F("Graph_Graph2290","Graph",100,2.7,1099.7);
   Graph_Graph2290->SetMinimum(2.965129);
   Graph_Graph2290->SetMaximum(1041.49);
   Graph_Graph2290->SetDirectory(nullptr);
   Graph_Graph2290->SetStats(0);
   Graph_Graph2290->SetLineWidth(2);
   Graph_Graph2290->SetMarkerStyle(20);
   Graph_Graph2290->SetMarkerSize(0.9);
   Graph_Graph2290->GetXaxis()->SetLabelFont(42);
   Graph_Graph2290->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2290->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2290->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2290->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2290->GetXaxis()->SetTitleFont(42);
   Graph_Graph2290->GetYaxis()->SetLabelFont(42);
   Graph_Graph2290->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2290->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2290->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2290->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2290->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2290->GetYaxis()->SetTitleFont(42);
   Graph_Graph2290->GetZaxis()->SetLabelFont(42);
   Graph_Graph2290->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2290->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2290->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2290->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2290->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2290);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx291[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy291[20] = { 589.2099, 10.5092, 9.887071, 6.494073, 6.255495, 6.043055, 5.639588, 9.105873, 12.6698, 16.58672, 20.30507, 37.79541, 38.68581, 37.6883, 38.38039, 37.89287, 36.57057,
   38.04265, 38.21704, 38.21704 };
   graph = new TGraph(20,Graph0_fx291,Graph0_fy291);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0291 = new TH1F("Graph_Graph0291","",100,2.7,1099.7);
   Graph_Graph0291->SetMinimum(0.2);
   Graph_Graph0291->SetMaximum(100000);
   Graph_Graph0291->SetDirectory(nullptr);
   Graph_Graph0291->SetStats(0);
   Graph_Graph0291->SetLineWidth(2);
   Graph_Graph0291->SetMarkerStyle(20);
   Graph_Graph0291->SetMarkerSize(0.9);
   Graph_Graph0291->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0291->GetXaxis()->SetRange(0,91);
   Graph_Graph0291->GetXaxis()->SetLabelFont(42);
   Graph_Graph0291->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0291->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0291->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0291->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0291->GetXaxis()->SetTitleFont(42);
   Graph_Graph0291->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0291->GetYaxis()->SetLabelFont(42);
   Graph_Graph0291->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0291->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0291->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0291->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0291->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0291->GetYaxis()->SetTitleFont(42);
   Graph_Graph0291->GetZaxis()->SetLabelFont(42);
   Graph_Graph0291->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0291->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0291->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0291->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0291->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0291);
   
   graph->Draw("l");
   
   Double_t Graph_fx292[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph_fy292[20] = { 4.76887e-91, 5.348722e-67, 1.341719e-52, 5.093514e-43, 3.427502e-36, 4.417055e-31, 4.085948e-27, 0.005519139, 0.8307406, 9.056933, 34.21405, 344.9313, 598.1586, 700.4479, 717.8148, 696.3778, 659.1727,
   617.0185, 574.869, 574.869 };
   graph = new TGraph(20,Graph_fx292,Graph_fy292);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph292 = new TH1F("Graph_Graph292","",100,2.7,1099.7);
   Graph_Graph292->SetMinimum(4.291983e-91);
   Graph_Graph292->SetMaximum(789.5963);
   Graph_Graph292->SetDirectory(nullptr);
   Graph_Graph292->SetStats(0);
   Graph_Graph292->SetLineWidth(2);
   Graph_Graph292->SetMarkerStyle(20);
   Graph_Graph292->SetMarkerSize(0.9);
   Graph_Graph292->GetXaxis()->SetLabelFont(42);
   Graph_Graph292->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph292->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph292->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph292->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph292->GetXaxis()->SetTitleFont(42);
   Graph_Graph292->GetYaxis()->SetLabelFont(42);
   Graph_Graph292->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph292->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph292->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph292->GetYaxis()->SetTickLength(0.02);
   Graph_Graph292->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph292->GetYaxis()->SetTitleFont(42);
   Graph_Graph292->GetZaxis()->SetLabelFont(42);
   Graph_Graph292->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph292->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph292->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph292->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph292->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph292);
   
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
   
   Double_t Graph_fx294[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph_fy294[20] = { 5.245757e-91, 5.883594e-67, 1.475891e-52, 5.602865e-43, 3.770252e-36, 4.858761e-31, 4.494543e-27, 0.006071053, 0.9138147, 9.962626, 37.63546, 379.4244, 657.9745, 770.4927, 789.5963, 766.0156, 725.09,
   678.7204, 632.3559, 632.3559 };
   graph = new TGraph(20,Graph_fx294,Graph_fy294);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph294 = new TH1F("Graph_Graph294","",100,2.7,1099.7);
   Graph_Graph294->SetMinimum(4.721181e-91);
   Graph_Graph294->SetMaximum(868.5559);
   Graph_Graph294->SetDirectory(nullptr);
   Graph_Graph294->SetStats(0);
   Graph_Graph294->SetLineWidth(2);
   Graph_Graph294->SetMarkerStyle(20);
   Graph_Graph294->SetMarkerSize(0.9);
   Graph_Graph294->GetXaxis()->SetLabelFont(42);
   Graph_Graph294->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph294->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph294->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph294->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph294->GetXaxis()->SetTitleFont(42);
   Graph_Graph294->GetYaxis()->SetLabelFont(42);
   Graph_Graph294->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph294->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph294->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph294->GetYaxis()->SetTickLength(0.02);
   Graph_Graph294->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph294->GetYaxis()->SetTitleFont(42);
   Graph_Graph294->GetZaxis()->SetLabelFont(42);
   Graph_Graph294->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph294->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph294->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph294->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph294->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph294);
   
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
   line = new TLine(90.73929,0,90.73929,18.48969);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(90.73429,0,"  90.74 TeV");

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
   pt_LaTex = pt->AddText("#varepsilon = 2.34e-07");
   pt_LaTex = pt->AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
