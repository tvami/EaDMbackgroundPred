#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_depth_e2_17mnthNorm_rate_1.4e-08()
{
//=========Macro generated from canvas: climits/climits
//=========  (Tue Feb  3 11:44:05 2026) by ROOT version 6.30/07
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
   
   Double_t Graph0_fx71[16] = { 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 20, 30, 40, 50, 60, 70, 80, 90 };
   Double_t Graph0_fy71[16] = { 9.403125, 6.407031, 5.139453, 5.369922, 4.874414, 4.862891, 4.690039, 4.79375, 6.499219, 8.527344, 10.325, 11.89219, 14.93438, 16.31719, 18.25313, 21.20312 };
   TGraph *graph = new TGraph(16,Graph0_fx71,Graph0_fy71);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph071 = new TH1F("Graph_Graph071","",100,0,98.9);
   Graph_Graph071->SetMinimum(0.2);
   Graph_Graph071->SetMaximum(100000);
   Graph_Graph071->SetDirectory(nullptr);
   Graph_Graph071->SetStats(0);
   Graph_Graph071->SetLineWidth(2);
   Graph_Graph071->SetMarkerStyle(20);
   Graph_Graph071->SetMarkerSize(0.9);
   Graph_Graph071->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph071->GetXaxis()->SetRange(2,101);
   Graph_Graph071->GetXaxis()->SetLabelFont(42);
   Graph_Graph071->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph071->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph071->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph071->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph071->GetXaxis()->SetTitleFont(42);
   Graph_Graph071->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph071->GetYaxis()->SetLabelFont(42);
   Graph_Graph071->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph071->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph071->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph071->GetYaxis()->SetTickLength(0.02);
   Graph_Graph071->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph071->GetYaxis()->SetTitleFont(42);
   Graph_Graph071->GetZaxis()->SetLabelFont(42);
   Graph_Graph071->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph071->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph071->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph071->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph071->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph071);
   
   graph->Draw("al");
   
   Double_t Graph1_fx72[34] = { 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 20, 30, 40, 50, 60, 70, 80, 90, 90,
   90, 90, 80, 70, 60, 50, 40, 30, 20, 4.5, 4, 3.5, 3, 2.5, 2, 1.5,
   1 };
   Double_t Graph1_fy72[34] = { 20.45958, 15.1478, 13.24202, 13.54486, 13.14658, 13.2636, 12.91702, 13.43259, 19.76311, 25.93033, 31.39673, 36.1623, 45.41312, 49.61804, 55.50492, 64.47542, 64.47542,
   7.619873, 7.619873, 6.559717, 5.863989, 5.308704, 4.320209, 3.710547, 3.097824, 2.386432, 2.022363, 1.97861, 2.108519, 2.094475, 2.454222, 2.308739, 3.053351,
   4.738293 };
   graph = new TGraph(34,Graph1_fx72,Graph1_fy72);
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
   
   TH1F *Graph_Graph172 = new TH1F("Graph_Graph172","Graph",100,0,98.9);
   Graph_Graph172->SetMinimum(1.780749);
   Graph_Graph172->SetMaximum(70.7251);
   Graph_Graph172->SetDirectory(nullptr);
   Graph_Graph172->SetStats(0);
   Graph_Graph172->SetLineWidth(2);
   Graph_Graph172->SetMarkerStyle(20);
   Graph_Graph172->SetMarkerSize(0.9);
   Graph_Graph172->GetXaxis()->SetLabelFont(42);
   Graph_Graph172->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph172->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph172->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph172->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph172->GetXaxis()->SetTitleFont(42);
   Graph_Graph172->GetYaxis()->SetLabelFont(42);
   Graph_Graph172->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph172->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph172->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph172->GetYaxis()->SetTickLength(0.02);
   Graph_Graph172->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph172->GetYaxis()->SetTitleFont(42);
   Graph_Graph172->GetZaxis()->SetLabelFont(42);
   Graph_Graph172->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph172->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph172->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph172->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph172->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph172);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx73[34] = { 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 20, 30, 40, 50, 60, 70, 80, 90, 90,
   90, 90, 80, 70, 60, 50, 40, 30, 20, 4.5, 4, 3.5, 3, 2.5, 2, 1.5,
   1 };
   Double_t Graph2_fy73[34] = { 14.03206, 9.95691, 8.355768, 8.623442, 8.119161, 8.11935, 7.886832, 8.137666, 11.91361, 15.76729, 19.21467, 21.89417, 28.03077, 30.49613, 34.11431, 39.54322, 39.54322,
   12.07688, 12.07688, 10.39662, 9.293945, 8.467127, 6.804764, 5.880914, 4.879385, 3.73594, 2.975027, 2.910664, 3.055334, 3.071797, 3.502052, 3.303912, 4.28478,
   6.487605 };
   graph = new TGraph(34,Graph2_fx73,Graph2_fy73);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph273 = new TH1F("Graph_Graph273","Graph",100,0,98.9);
   Graph_Graph273->SetMinimum(2.619598);
   Graph_Graph273->SetMaximum(43.20647);
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
   
   graph->Draw("lf");
   
   Double_t Graph0_fx74[16] = { 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 20, 30, 40, 50, 60, 70, 80, 90 };
   Double_t Graph0_fy74[16] = { 9.403125, 6.407031, 5.139453, 5.369922, 4.874414, 4.862891, 4.690039, 4.79375, 6.499219, 8.527344, 10.325, 11.89219, 14.93438, 16.31719, 18.25313, 21.20312 };
   graph = new TGraph(16,Graph0_fx74,Graph0_fy74);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph074 = new TH1F("Graph_Graph074","",100,0,98.9);
   Graph_Graph074->SetMinimum(0.2);
   Graph_Graph074->SetMaximum(100000);
   Graph_Graph074->SetDirectory(nullptr);
   Graph_Graph074->SetStats(0);
   Graph_Graph074->SetLineWidth(2);
   Graph_Graph074->SetMarkerStyle(20);
   Graph_Graph074->SetMarkerSize(0.9);
   Graph_Graph074->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph074->GetXaxis()->SetRange(2,101);
   Graph_Graph074->GetXaxis()->SetLabelFont(42);
   Graph_Graph074->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph074->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph074->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph074->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph074->GetXaxis()->SetTitleFont(42);
   Graph_Graph074->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph074->GetYaxis()->SetLabelFont(42);
   Graph_Graph074->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph074->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph074->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph074->GetYaxis()->SetTickLength(0.02);
   Graph_Graph074->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph074->GetYaxis()->SetTitleFont(42);
   Graph_Graph074->GetZaxis()->SetLabelFont(42);
   Graph_Graph074->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph074->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph074->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph074->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph074->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph074);
   
   graph->Draw("l");
   
   Double_t Graph_fx75[16] = { 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 20, 30, 40, 50, 60, 70, 80, 90 };
   Double_t Graph_fy75[16] = { 25.42978, 21.5615, 17.64469, 14.58426, 12.25968, 10.47565, 9.08118, 7.970484, 1.231949, 0.7153127, 0.4843577, 0.3573242, 0.2784419, 0.225381, 0.187602, 0.1595357 };
   graph = new TGraph(16,Graph_fx75,Graph_fy75);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph75 = new TH1F("Graph_Graph75","",100,0,98.9);
   Graph_Graph75->SetMinimum(0.1435822);
   Graph_Graph75->SetMaximum(27.9568);
   Graph_Graph75->SetDirectory(nullptr);
   Graph_Graph75->SetStats(0);
   Graph_Graph75->SetLineWidth(2);
   Graph_Graph75->SetMarkerStyle(20);
   Graph_Graph75->SetMarkerSize(0.9);
   Graph_Graph75->GetXaxis()->SetLabelFont(42);
   Graph_Graph75->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph75->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph75->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph75->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph75->GetXaxis()->SetTitleFont(42);
   Graph_Graph75->GetYaxis()->SetLabelFont(42);
   Graph_Graph75->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph75->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph75->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph75->GetYaxis()->SetTickLength(0.02);
   Graph_Graph75->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph75->GetYaxis()->SetTitleFont(42);
   Graph_Graph75->GetZaxis()->SetLabelFont(42);
   Graph_Graph75->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph75->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph75->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph75->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph75->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph75);
   
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
   
   Double_t Graph_fx77[16] = { 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 20, 30, 40, 50, 60, 70, 80, 90 };
   Double_t Graph_fy77[16] = { 27.97276, 23.71765, 19.40915, 16.04269, 13.48565, 11.52321, 9.989298, 8.767532, 1.355144, 0.7868439, 0.5327935, 0.3930566, 0.3062861, 0.2479191, 0.2063622, 0.1754893 };
   graph = new TGraph(16,Graph_fx77,Graph_fy77);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph77 = new TH1F("Graph_Graph77","",100,0,98.9);
   Graph_Graph77->SetMinimum(0.1579404);
   Graph_Graph77->SetMaximum(30.75248);
   Graph_Graph77->SetDirectory(nullptr);
   Graph_Graph77->SetStats(0);
   Graph_Graph77->SetLineWidth(2);
   Graph_Graph77->SetMarkerStyle(20);
   Graph_Graph77->SetMarkerSize(0.9);
   Graph_Graph77->GetXaxis()->SetLabelFont(42);
   Graph_Graph77->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph77->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph77->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph77->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph77->GetXaxis()->SetTitleFont(42);
   Graph_Graph77->GetYaxis()->SetLabelFont(42);
   Graph_Graph77->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph77->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph77->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph77->GetYaxis()->SetTickLength(0.02);
   Graph_Graph77->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph77->GetYaxis()->SetTitleFont(42);
   Graph_Graph77->GetZaxis()->SetLabelFont(42);
   Graph_Graph77->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph77->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph77->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph77->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph77->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph77);
   
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
   line = new TLine(8.129122,0,8.129122,5.147839);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(8.124122,0,"  8.13 TeV");

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
   TText *pt_LaTex = pt->AddText("#varepsilon = 1.4e-08");
   pt_LaTex = pt->AddText("#alpha_{#chi} = 0.245");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
