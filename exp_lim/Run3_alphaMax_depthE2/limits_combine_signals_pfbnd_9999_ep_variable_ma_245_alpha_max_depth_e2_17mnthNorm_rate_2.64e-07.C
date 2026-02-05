#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_depth_e2_17mnthNorm_rate_2.64e-07()
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
   
   Double_t Graph0_fx309[16] = { 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 20, 30, 40, 50, 60, 70, 80, 90 };
   Double_t Graph0_fy309[16] = { 9.403125, 6.407031, 5.139453, 5.369922, 4.874414, 4.862891, 4.690039, 4.79375, 6.499219, 8.527344, 10.325, 11.89219, 14.93438, 16.31719, 18.25313, 21.20312 };
   TGraph *graph = new TGraph(16,Graph0_fx309,Graph0_fy309);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0309 = new TH1F("Graph_Graph0309","",100,0,98.9);
   Graph_Graph0309->SetMinimum(0.2);
   Graph_Graph0309->SetMaximum(100000);
   Graph_Graph0309->SetDirectory(nullptr);
   Graph_Graph0309->SetStats(0);
   Graph_Graph0309->SetLineWidth(2);
   Graph_Graph0309->SetMarkerStyle(20);
   Graph_Graph0309->SetMarkerSize(0.9);
   Graph_Graph0309->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0309->GetXaxis()->SetRange(2,101);
   Graph_Graph0309->GetXaxis()->SetLabelFont(42);
   Graph_Graph0309->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0309->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0309->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0309->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0309->GetXaxis()->SetTitleFont(42);
   Graph_Graph0309->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0309->GetYaxis()->SetLabelFont(42);
   Graph_Graph0309->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0309->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0309->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0309->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0309->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0309->GetYaxis()->SetTitleFont(42);
   Graph_Graph0309->GetZaxis()->SetLabelFont(42);
   Graph_Graph0309->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0309->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0309->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0309->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0309->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0309);
   
   graph->Draw("al");
   
   Double_t Graph1_fx310[34] = { 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 20, 30, 40, 50, 60, 70, 80, 90, 90,
   90, 90, 80, 70, 60, 50, 40, 30, 20, 4.5, 4, 3.5, 3, 2.5, 2, 1.5,
   1 };
   Double_t Graph1_fy310[34] = { 20.45958, 15.1478, 13.24202, 13.54486, 13.14658, 13.2636, 12.91702, 13.43259, 19.76311, 25.93033, 31.39673, 36.1623, 45.41312, 49.61804, 55.50492, 64.47542, 64.47542,
   7.619873, 7.619873, 6.559717, 5.863989, 5.308704, 4.320209, 3.710547, 3.097824, 2.386432, 2.022363, 1.97861, 2.108519, 2.094475, 2.454222, 2.308739, 3.053351,
   4.738293 };
   graph = new TGraph(34,Graph1_fx310,Graph1_fy310);
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
   
   TH1F *Graph_Graph1310 = new TH1F("Graph_Graph1310","Graph",100,0,98.9);
   Graph_Graph1310->SetMinimum(1.780749);
   Graph_Graph1310->SetMaximum(70.7251);
   Graph_Graph1310->SetDirectory(nullptr);
   Graph_Graph1310->SetStats(0);
   Graph_Graph1310->SetLineWidth(2);
   Graph_Graph1310->SetMarkerStyle(20);
   Graph_Graph1310->SetMarkerSize(0.9);
   Graph_Graph1310->GetXaxis()->SetLabelFont(42);
   Graph_Graph1310->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1310->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1310->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1310->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1310->GetXaxis()->SetTitleFont(42);
   Graph_Graph1310->GetYaxis()->SetLabelFont(42);
   Graph_Graph1310->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1310->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1310->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1310->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1310->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1310->GetYaxis()->SetTitleFont(42);
   Graph_Graph1310->GetZaxis()->SetLabelFont(42);
   Graph_Graph1310->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1310->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1310->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1310->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1310->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1310);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx311[34] = { 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 20, 30, 40, 50, 60, 70, 80, 90, 90,
   90, 90, 80, 70, 60, 50, 40, 30, 20, 4.5, 4, 3.5, 3, 2.5, 2, 1.5,
   1 };
   Double_t Graph2_fy311[34] = { 14.03206, 9.95691, 8.355768, 8.623442, 8.119161, 8.11935, 7.886832, 8.137666, 11.91361, 15.76729, 19.21467, 21.89417, 28.03077, 30.49613, 34.11431, 39.54322, 39.54322,
   12.07688, 12.07688, 10.39662, 9.293945, 8.467127, 6.804764, 5.880914, 4.879385, 3.73594, 2.975027, 2.910664, 3.055334, 3.071797, 3.502052, 3.303912, 4.28478,
   6.487605 };
   graph = new TGraph(34,Graph2_fx311,Graph2_fy311);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2311 = new TH1F("Graph_Graph2311","Graph",100,0,98.9);
   Graph_Graph2311->SetMinimum(2.619598);
   Graph_Graph2311->SetMaximum(43.20647);
   Graph_Graph2311->SetDirectory(nullptr);
   Graph_Graph2311->SetStats(0);
   Graph_Graph2311->SetLineWidth(2);
   Graph_Graph2311->SetMarkerStyle(20);
   Graph_Graph2311->SetMarkerSize(0.9);
   Graph_Graph2311->GetXaxis()->SetLabelFont(42);
   Graph_Graph2311->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2311->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2311->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2311->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2311->GetXaxis()->SetTitleFont(42);
   Graph_Graph2311->GetYaxis()->SetLabelFont(42);
   Graph_Graph2311->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2311->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2311->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2311->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2311->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2311->GetYaxis()->SetTitleFont(42);
   Graph_Graph2311->GetZaxis()->SetLabelFont(42);
   Graph_Graph2311->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2311->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2311->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2311->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2311->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2311);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx312[16] = { 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 20, 30, 40, 50, 60, 70, 80, 90 };
   Double_t Graph0_fy312[16] = { 9.403125, 6.407031, 5.139453, 5.369922, 4.874414, 4.862891, 4.690039, 4.79375, 6.499219, 8.527344, 10.325, 11.89219, 14.93438, 16.31719, 18.25313, 21.20312 };
   graph = new TGraph(16,Graph0_fx312,Graph0_fy312);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0312 = new TH1F("Graph_Graph0312","",100,0,98.9);
   Graph_Graph0312->SetMinimum(0.2);
   Graph_Graph0312->SetMaximum(100000);
   Graph_Graph0312->SetDirectory(nullptr);
   Graph_Graph0312->SetStats(0);
   Graph_Graph0312->SetLineWidth(2);
   Graph_Graph0312->SetMarkerStyle(20);
   Graph_Graph0312->SetMarkerSize(0.9);
   Graph_Graph0312->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0312->GetXaxis()->SetRange(2,101);
   Graph_Graph0312->GetXaxis()->SetLabelFont(42);
   Graph_Graph0312->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0312->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0312->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0312->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0312->GetXaxis()->SetTitleFont(42);
   Graph_Graph0312->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0312->GetYaxis()->SetLabelFont(42);
   Graph_Graph0312->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0312->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0312->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0312->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0312->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0312->GetYaxis()->SetTitleFont(42);
   Graph_Graph0312->GetZaxis()->SetLabelFont(42);
   Graph_Graph0312->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0312->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0312->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0312->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0312->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0312);
   
   graph->Draw("l");
   
   Double_t Graph_fx313[16] = { 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 20, 30, 40, 50, 60, 70, 80, 90 };
   Double_t Graph_fy313[16] = { 1.07115e-178, 2.822499e-117, 1.287654e-86, 2.984078e-68, 4.987689e-56, 2.595617e-47, 8.723317e-41, 1.019524e-35, 9.302991e-05, 0.06414316, 1.496694, 9.234567, 29.64924, 65.98243, 117.2661, 179.892 };
   graph = new TGraph(16,Graph_fx313,Graph_fy313);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph313 = new TH1F("Graph_Graph313","",100,0,98.9);
   Graph_Graph313->SetMinimum(9.640346e-179);
   Graph_Graph313->SetMaximum(197.8812);
   Graph_Graph313->SetDirectory(nullptr);
   Graph_Graph313->SetStats(0);
   Graph_Graph313->SetLineWidth(2);
   Graph_Graph313->SetMarkerStyle(20);
   Graph_Graph313->SetMarkerSize(0.9);
   Graph_Graph313->GetXaxis()->SetLabelFont(42);
   Graph_Graph313->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph313->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph313->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph313->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph313->GetXaxis()->SetTitleFont(42);
   Graph_Graph313->GetYaxis()->SetLabelFont(42);
   Graph_Graph313->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph313->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph313->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph313->GetYaxis()->SetTickLength(0.02);
   Graph_Graph313->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph313->GetYaxis()->SetTitleFont(42);
   Graph_Graph313->GetZaxis()->SetLabelFont(42);
   Graph_Graph313->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph313->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph313->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph313->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph313->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph313);
   
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
   
   Double_t Graph_fx315[16] = { 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 20, 30, 40, 50, 60, 70, 80, 90 };
   Double_t Graph_fy315[16] = { 1.178265e-178, 3.104749e-117, 1.41642e-86, 3.282485e-68, 5.486458e-56, 2.855178e-47, 9.595649e-41, 1.121476e-35, 0.0001023329, 0.07055748, 1.646363, 10.15802, 32.61417, 72.58067, 128.9927, 197.8812 };
   graph = new TGraph(16,Graph_fx315,Graph_fy315);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph315 = new TH1F("Graph_Graph315","",100,0,98.9);
   Graph_Graph315->SetMinimum(1.060438e-178);
   Graph_Graph315->SetMaximum(217.6693);
   Graph_Graph315->SetDirectory(nullptr);
   Graph_Graph315->SetStats(0);
   Graph_Graph315->SetLineWidth(2);
   Graph_Graph315->SetMarkerStyle(20);
   Graph_Graph315->SetMarkerSize(0.9);
   Graph_Graph315->GetXaxis()->SetLabelFont(42);
   Graph_Graph315->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph315->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph315->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph315->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph315->GetXaxis()->SetTitleFont(42);
   Graph_Graph315->GetYaxis()->SetLabelFont(42);
   Graph_Graph315->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph315->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph315->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph315->GetYaxis()->SetTickLength(0.02);
   Graph_Graph315->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph315->GetYaxis()->SetTitleFont(42);
   Graph_Graph315->GetZaxis()->SetLabelFont(42);
   Graph_Graph315->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph315->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph315->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph315->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph315->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph315);
   
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
   line = new TLine(52.69445,0,52.69445,12.64494);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(52.68945,0,"  52.69 TeV");

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
   TText *pt_LaTex = pt->AddText("#varepsilon = 2.64e-07");
   pt_LaTex = pt->AddText("#alpha_{#chi} = 0.245");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
