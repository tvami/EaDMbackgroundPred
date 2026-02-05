#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_depth_e2_17mnthNorm_rate_2.74e-07()
{
//=========Macro generated from canvas: climits/climits
//=========  (Tue Feb  3 11:44:06 2026) by ROOT version 6.30/07
   TCanvas *climits = new TCanvas("climits", "climits",0,0,700,600);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   climits->SetHighLightColor(2);
   climits->Range(-17.55475,-1.838764,106.0703,5.759863);
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
   
   Double_t Graph0_fx316[16] = { 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 20, 30, 40, 50, 60, 70, 80, 90 };
   Double_t Graph0_fy316[16] = { 9.403125, 6.407031, 5.139453, 5.369922, 4.874414, 4.862891, 4.690039, 4.79375, 6.499219, 8.527344, 10.325, 11.89219, 14.93438, 16.31719, 18.25313, 21.20312 };
   TGraph *graph = new TGraph(16,Graph0_fx316,Graph0_fy316);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0316 = new TH1F("Graph_Graph0316","",100,0,98.9);
   Graph_Graph0316->SetMinimum(0.2);
   Graph_Graph0316->SetMaximum(100000);
   Graph_Graph0316->SetDirectory(nullptr);
   Graph_Graph0316->SetStats(0);
   Graph_Graph0316->SetLineWidth(2);
   Graph_Graph0316->SetMarkerStyle(20);
   Graph_Graph0316->SetMarkerSize(0.9);
   Graph_Graph0316->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0316->GetXaxis()->SetRange(2,101);
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
   
   Double_t Graph1_fx317[34] = { 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 20, 30, 40, 50, 60, 70, 80, 90, 90,
   90, 90, 80, 70, 60, 50, 40, 30, 20, 4.5, 4, 3.5, 3, 2.5, 2, 1.5,
   1 };
   Double_t Graph1_fy317[34] = { 20.45958, 15.1478, 13.24202, 13.54486, 13.14658, 13.2636, 12.91702, 13.43259, 19.76311, 25.93033, 31.39673, 36.1623, 45.41312, 49.61804, 55.50492, 64.47542, 64.47542,
   7.619873, 7.619873, 6.559717, 5.863989, 5.308704, 4.320209, 3.710547, 3.097824, 2.386432, 2.022363, 1.97861, 2.108519, 2.094475, 2.454222, 2.308739, 3.053351,
   4.738293 };
   graph = new TGraph(34,Graph1_fx317,Graph1_fy317);
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
   
   TH1F *Graph_Graph1317 = new TH1F("Graph_Graph1317","Graph",100,0,98.9);
   Graph_Graph1317->SetMinimum(1.780749);
   Graph_Graph1317->SetMaximum(70.7251);
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
   
   Double_t Graph2_fx318[34] = { 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 20, 30, 40, 50, 60, 70, 80, 90, 90,
   90, 90, 80, 70, 60, 50, 40, 30, 20, 4.5, 4, 3.5, 3, 2.5, 2, 1.5,
   1 };
   Double_t Graph2_fy318[34] = { 14.03206, 9.95691, 8.355768, 8.623442, 8.119161, 8.11935, 7.886832, 8.137666, 11.91361, 15.76729, 19.21467, 21.89417, 28.03077, 30.49613, 34.11431, 39.54322, 39.54322,
   12.07688, 12.07688, 10.39662, 9.293945, 8.467127, 6.804764, 5.880914, 4.879385, 3.73594, 2.975027, 2.910664, 3.055334, 3.071797, 3.502052, 3.303912, 4.28478,
   6.487605 };
   graph = new TGraph(34,Graph2_fx318,Graph2_fy318);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2318 = new TH1F("Graph_Graph2318","Graph",100,0,98.9);
   Graph_Graph2318->SetMinimum(2.619598);
   Graph_Graph2318->SetMaximum(43.20647);
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
   
   Double_t Graph0_fx319[16] = { 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 20, 30, 40, 50, 60, 70, 80, 90 };
   Double_t Graph0_fy319[16] = { 9.403125, 6.407031, 5.139453, 5.369922, 4.874414, 4.862891, 4.690039, 4.79375, 6.499219, 8.527344, 10.325, 11.89219, 14.93438, 16.31719, 18.25313, 21.20312 };
   graph = new TGraph(16,Graph0_fx319,Graph0_fy319);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0319 = new TH1F("Graph_Graph0319","",100,0,98.9);
   Graph_Graph0319->SetMinimum(0.2);
   Graph_Graph0319->SetMaximum(100000);
   Graph_Graph0319->SetDirectory(nullptr);
   Graph_Graph0319->SetStats(0);
   Graph_Graph0319->SetLineWidth(2);
   Graph_Graph0319->SetMarkerStyle(20);
   Graph_Graph0319->SetMarkerSize(0.9);
   Graph_Graph0319->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0319->GetXaxis()->SetRange(2,101);
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
   
   Double_t Graph_fx320[16] = { 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 20, 30, 40, 50, 60, 70, 80, 90 };
   Double_t Graph_fy320[16] = { 6.516807e-193, 9.884384e-127, 1.081886e-93, 6.717889e-74, 1.005424e-60, 2.504434e-51, 2.723738e-44, 7.935222e-39, 2.085396e-05, 0.02487271, 0.7633243, 5.551301, 19.8881, 47.86399, 90.20984, 144.8529 };
   graph = new TGraph(16,Graph_fx320,Graph_fy320);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph320 = new TH1F("Graph_Graph320","",100,0,98.9);
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
   
   Double_t Graph_fx322[16] = { 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 20, 30, 40, 50, 60, 70, 80, 90 };
   Double_t Graph_fy322[16] = { 7.168488e-193, 1.087282e-126, 1.190075e-93, 7.389678e-74, 1.105966e-60, 2.754878e-51, 2.996112e-44, 8.728744e-39, 2.293935e-05, 0.02735998, 0.8396568, 6.106431, 21.87691, 52.65039, 99.23082, 159.3382 };
   graph = new TGraph(16,Graph_fx322,Graph_fy322);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph322 = new TH1F("Graph_Graph322","",100,0,98.9);
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
   line = new TLine(57.26744,0,57.26744,14.03315);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(57.26244,0,"  57.27 TeV");

   ci = TColor::GetColor("#666666");
   tex->SetTextColor(ci);
   tex->SetTextFont(43);
   tex->SetTextSize(14);
   tex->SetTextAngle(90);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TH1F *Graph_copy = new TH1F("Graph_copy","",100,0,98.9);
   Graph_copy->SetMinimum(1e-06);
   Graph_copy->SetMaximum(1000);
   Graph_copy->SetDirectory(nullptr);
   Graph_copy->SetStats(0);
   Graph_copy->SetLineWidth(2);
   Graph_copy->SetMarkerStyle(20);
   Graph_copy->SetMarkerSize(0.9);
   Graph_copy->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_copy->GetXaxis()->SetRange(2,101);
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
      tex = new TLatex(0.375,0.96,"Internal");
   tex->SetNDC();
   tex->SetTextAlign(23);
   tex->SetTextFont(52);
   tex->SetTextSize(0.0608);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TPaveText *pt = new TPaveText(0.2,0.75,0.43,0.88,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextAlign(12);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("#varepsilon = 2.74e-07");
   pt_LaTex = pt->AddText("#alpha_{#chi} = 0.245");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
