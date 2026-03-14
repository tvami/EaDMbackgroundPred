#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_depth_e2_17mnthNorm_rate_2.74e-07()
{
//=========Macro generated from canvas: climits/climits
//=========  (Wed Mar 11 02:50:58 2026) by ROOT version 6.30/07
   TCanvas *climits = new TCanvas("climits", "climits",0,0,700,600);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   climits->SetHighLightColor(2);
   climits->Range(-34.1205,-1.838764,193.3495,5.759863);
   climits->SetFillColor(0);
   climits->SetBorderMode(0);
   climits->SetBorderSize(2);
   climits->SetLogy();
   climits->SetLeftMargin(0.15);
   climits->SetRightMargin(0.05);
   climits->SetBottomMargin(0.15);
   climits->SetFrameLineWidth(2);
   climits->SetFrameBorderMode(0);
   climits->SetFrameLineWidth(2);
   climits->SetFrameBorderMode(0);
   
   Double_t Graph0_fx316[17] = { 2, 3, 4, 6, 7, 8, 9, 10, 20, 40, 60, 80, 100, 120, 140, 160, 180 };
   Double_t Graph0_fy316[17] = { 9.633594, 7.121484, 7.063867, 3.537695, 2.996094, 2.696484, 2.754102, 2.834766, 3.641406, 5.392969, 7.375, 8.942188, 10.46328, 13.13672, 14.10469, 16.59375, 17.88438 };
   TGraph *graph = new TGraph(17,Graph0_fx316,Graph0_fy316);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0316 = new TH1F("Graph_Graph0316","",100,0,197.8);
   Graph_Graph0316->SetMinimum(0.2);
   Graph_Graph0316->SetMaximum(100000);
   Graph_Graph0316->SetDirectory(nullptr);
   Graph_Graph0316->SetStats(0);
   Graph_Graph0316->SetLineWidth(2);
   Graph_Graph0316->SetMarkerStyle(20);
   Graph_Graph0316->SetMarkerSize(0.9);
   Graph_Graph0316->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0316->GetXaxis()->SetRange(1,92);
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
   
   Double_t Graph1_fx317[36] = { 2, 3, 4, 6, 7, 8, 9, 10, 20, 40, 60, 80, 100, 120, 140, 160, 180,
   180, 180, 180, 160, 140, 120, 100, 80, 60, 40, 20, 10, 9, 8, 7, 6,
   4, 3, 2 };
   Double_t Graph1_fy317[36] = { 22.13127, 17.60809, 16.06013, 10.75758, 9.110659, 8.199594, 8.374799, 8.620086, 11.07296, 16.39919, 22.42624, 27.19182, 31.81723, 39.94674, 42.89018, 50.45904, 54.38363,
   54.38363, 4.820398, 4.820398, 4.537354, 3.911847, 3.592072, 2.861053, 2.445129, 2.016602, 1.495706, 1.024146, 0.8083511, 0.7745911, 0.7689194, 0.8660583, 1.202264,
   3.863052, 3.310378, 4.703903 };
   graph = new TGraph(36,Graph1_fx317,Graph1_fy317);
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
   
   TH1F *Graph_Graph1317 = new TH1F("Graph_Graph1317","Graph",100,0,197.8);
   Graph_Graph1317->SetMinimum(0.6920274);
   Graph_Graph1317->SetMaximum(59.7451);
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
   
   Double_t Graph2_fx318[36] = { 2, 3, 4, 6, 7, 8, 9, 10, 20, 40, 60, 80, 100, 120, 140, 160, 180,
   180, 180, 180, 160, 140, 120, 100, 80, 60, 40, 20, 10, 9, 8, 7, 6,
   4, 3, 2 };
   Double_t Graph2_fy318[36] = { 14.74078, 11.29431, 10.59756, 6.386179, 5.910078, 5.415805, 5.56444, 5.727415, 7.357167, 10.89606, 14.90059, 18.06697, 21.14021, 26.54168, 28.49738, 33.52633, 36.13394,
   36.13394, 8.800828, 8.800828, 8.210787, 7.017478, 6.500206, 5.23675, 4.47546, 3.67017, 2.698377, 1.842039, 1.441606, 1.393188, 1.371283, 1.531694, 2.023314,
   5.038352, 4.679994, 6.514024 };
   graph = new TGraph(36,Graph2_fx318,Graph2_fy318);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2318 = new TH1F("Graph_Graph2318","Graph",100,0,197.8);
   Graph_Graph2318->SetMinimum(1.234155);
   Graph_Graph2318->SetMaximum(39.6102);
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
   
   Double_t Graph0_fx319[17] = { 2, 3, 4, 6, 7, 8, 9, 10, 20, 40, 60, 80, 100, 120, 140, 160, 180 };
   Double_t Graph0_fy319[17] = { 9.633594, 7.121484, 7.063867, 3.537695, 2.996094, 2.696484, 2.754102, 2.834766, 3.641406, 5.392969, 7.375, 8.942188, 10.46328, 13.13672, 14.10469, 16.59375, 17.88438 };
   graph = new TGraph(17,Graph0_fx319,Graph0_fy319);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0319 = new TH1F("Graph_Graph0319","",100,0,197.8);
   Graph_Graph0319->SetMinimum(0.2);
   Graph_Graph0319->SetMaximum(100000);
   Graph_Graph0319->SetDirectory(nullptr);
   Graph_Graph0319->SetStats(0);
   Graph_Graph0319->SetLineWidth(2);
   Graph_Graph0319->SetMarkerStyle(20);
   Graph_Graph0319->SetMarkerSize(0.9);
   Graph_Graph0319->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0319->GetXaxis()->SetRange(1,92);
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
   
   Double_t Graph_fx320[17] = { 2, 3, 4, 6, 7, 8, 9, 10, 20, 40, 60, 80, 100, 120, 140, 160, 180 };
   Double_t Graph_fy320[17] = { 6.516807e-193, 9.884384e-127, 1.081886e-93, 1.005424e-60, 2.504434e-51, 2.723738e-44, 7.935222e-39, 1.838034e-34, 5.939061e-15, 2.085396e-05, 0.02487271, 0.7633243, 5.551301, 19.8881, 47.86399, 90.20984, 144.8529 };
   graph = new TGraph(17,Graph_fx320,Graph_fy320);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph320 = new TH1F("Graph_Graph320","",100,0,197.8);
   Graph_Graph320->SetMinimum(5.865126e-193);
   Graph_Graph320->SetMaximum(159.3382);
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
   
   Double_t Graph_fx322[17] = { 2, 3, 4, 6, 7, 8, 9, 10, 20, 40, 60, 80, 100, 120, 140, 160, 180 };
   Double_t Graph_fy322[17] = { 7.168488e-193, 1.087282e-126, 1.190075e-93, 1.105966e-60, 2.754878e-51, 2.996112e-44, 8.728744e-39, 2.021837e-34, 6.532967e-15, 2.293935e-05, 0.02735998, 0.8396568, 6.106431, 21.87691, 52.65039, 99.23082, 159.3382 };
   graph = new TGraph(17,Graph_fx322,Graph_fy322);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph322 = new TH1F("Graph_Graph322","",100,0,197.8);
   Graph_Graph322->SetMinimum(6.451639e-193);
   Graph_Graph322->SetMaximum(175.272);
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
   line = new TLine(112.0898,0,112.0898,12.00613);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(112.0848,0,"  112.09 TeV");

   ci = TColor::GetColor("#666666");
   tex->SetTextColor(ci);
   tex->SetTextFont(43);
   tex->SetTextSize(14);
   tex->SetTextAngle(90);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TH1F *Graph_copy = new TH1F("Graph_copy","",100,0,197.8);
   Graph_copy->SetMinimum(1e-06);
   Graph_copy->SetMaximum(1000);
   Graph_copy->SetDirectory(nullptr);
   Graph_copy->SetStats(0);
   Graph_copy->SetLineWidth(2);
   Graph_copy->SetMarkerStyle(20);
   Graph_copy->SetMarkerSize(0.9);
   Graph_copy->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_copy->GetXaxis()->SetRange(1,92);
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
      tex = new TLatex(0.4325,0.95,"Data Private Work");
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
