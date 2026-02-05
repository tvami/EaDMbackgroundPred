#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_depth_e2_17mnthNorm_rate_2.04e-07()
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
   
   Double_t Graph0_fx267[16] = { 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 20, 30, 40, 50, 60, 70, 80, 90 };
   Double_t Graph0_fy267[16] = { 9.403125, 6.407031, 5.139453, 5.369922, 4.874414, 4.862891, 4.690039, 4.79375, 6.499219, 8.527344, 10.325, 11.89219, 14.93438, 16.31719, 18.25313, 21.20312 };
   TGraph *graph = new TGraph(16,Graph0_fx267,Graph0_fy267);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0267 = new TH1F("Graph_Graph0267","",100,0,98.9);
   Graph_Graph0267->SetMinimum(0.2);
   Graph_Graph0267->SetMaximum(100000);
   Graph_Graph0267->SetDirectory(nullptr);
   Graph_Graph0267->SetStats(0);
   Graph_Graph0267->SetLineWidth(2);
   Graph_Graph0267->SetMarkerStyle(20);
   Graph_Graph0267->SetMarkerSize(0.9);
   Graph_Graph0267->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0267->GetXaxis()->SetRange(2,101);
   Graph_Graph0267->GetXaxis()->SetLabelFont(42);
   Graph_Graph0267->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0267->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0267->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0267->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0267->GetXaxis()->SetTitleFont(42);
   Graph_Graph0267->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0267->GetYaxis()->SetLabelFont(42);
   Graph_Graph0267->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0267->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0267->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0267->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0267->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0267->GetYaxis()->SetTitleFont(42);
   Graph_Graph0267->GetZaxis()->SetLabelFont(42);
   Graph_Graph0267->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0267->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0267->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0267->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0267->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0267);
   
   graph->Draw("al");
   
   Double_t Graph1_fx268[34] = { 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 20, 30, 40, 50, 60, 70, 80, 90, 90,
   90, 90, 80, 70, 60, 50, 40, 30, 20, 4.5, 4, 3.5, 3, 2.5, 2, 1.5,
   1 };
   Double_t Graph1_fy268[34] = { 20.45958, 15.1478, 13.24202, 13.54486, 13.14658, 13.2636, 12.91702, 13.43259, 19.76311, 25.93033, 31.39673, 36.1623, 45.41312, 49.61804, 55.50492, 64.47542, 64.47542,
   7.619873, 7.619873, 6.559717, 5.863989, 5.308704, 4.320209, 3.710547, 3.097824, 2.386432, 2.022363, 1.97861, 2.108519, 2.094475, 2.454222, 2.308739, 3.053351,
   4.738293 };
   graph = new TGraph(34,Graph1_fx268,Graph1_fy268);
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
   
   TH1F *Graph_Graph1268 = new TH1F("Graph_Graph1268","Graph",100,0,98.9);
   Graph_Graph1268->SetMinimum(1.780749);
   Graph_Graph1268->SetMaximum(70.7251);
   Graph_Graph1268->SetDirectory(nullptr);
   Graph_Graph1268->SetStats(0);
   Graph_Graph1268->SetLineWidth(2);
   Graph_Graph1268->SetMarkerStyle(20);
   Graph_Graph1268->SetMarkerSize(0.9);
   Graph_Graph1268->GetXaxis()->SetLabelFont(42);
   Graph_Graph1268->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1268->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1268->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1268->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1268->GetXaxis()->SetTitleFont(42);
   Graph_Graph1268->GetYaxis()->SetLabelFont(42);
   Graph_Graph1268->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1268->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1268->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1268->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1268->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1268->GetYaxis()->SetTitleFont(42);
   Graph_Graph1268->GetZaxis()->SetLabelFont(42);
   Graph_Graph1268->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1268->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1268->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1268->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1268->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1268);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx269[34] = { 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 20, 30, 40, 50, 60, 70, 80, 90, 90,
   90, 90, 80, 70, 60, 50, 40, 30, 20, 4.5, 4, 3.5, 3, 2.5, 2, 1.5,
   1 };
   Double_t Graph2_fy269[34] = { 14.03206, 9.95691, 8.355768, 8.623442, 8.119161, 8.11935, 7.886832, 8.137666, 11.91361, 15.76729, 19.21467, 21.89417, 28.03077, 30.49613, 34.11431, 39.54322, 39.54322,
   12.07688, 12.07688, 10.39662, 9.293945, 8.467127, 6.804764, 5.880914, 4.879385, 3.73594, 2.975027, 2.910664, 3.055334, 3.071797, 3.502052, 3.303912, 4.28478,
   6.487605 };
   graph = new TGraph(34,Graph2_fx269,Graph2_fy269);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2269 = new TH1F("Graph_Graph2269","Graph",100,0,98.9);
   Graph_Graph2269->SetMinimum(2.619598);
   Graph_Graph2269->SetMaximum(43.20647);
   Graph_Graph2269->SetDirectory(nullptr);
   Graph_Graph2269->SetStats(0);
   Graph_Graph2269->SetLineWidth(2);
   Graph_Graph2269->SetMarkerStyle(20);
   Graph_Graph2269->SetMarkerSize(0.9);
   Graph_Graph2269->GetXaxis()->SetLabelFont(42);
   Graph_Graph2269->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2269->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2269->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2269->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2269->GetXaxis()->SetTitleFont(42);
   Graph_Graph2269->GetYaxis()->SetLabelFont(42);
   Graph_Graph2269->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2269->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2269->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2269->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2269->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2269->GetYaxis()->SetTitleFont(42);
   Graph_Graph2269->GetZaxis()->SetLabelFont(42);
   Graph_Graph2269->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2269->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2269->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2269->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2269->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2269);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx270[16] = { 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 20, 30, 40, 50, 60, 70, 80, 90 };
   Double_t Graph0_fy270[16] = { 9.403125, 6.407031, 5.139453, 5.369922, 4.874414, 4.862891, 4.690039, 4.79375, 6.499219, 8.527344, 10.325, 11.89219, 14.93438, 16.31719, 18.25313, 21.20312 };
   graph = new TGraph(16,Graph0_fx270,Graph0_fy270);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0270 = new TH1F("Graph_Graph0270","",100,0,98.9);
   Graph_Graph0270->SetMinimum(0.2);
   Graph_Graph0270->SetMaximum(100000);
   Graph_Graph0270->SetDirectory(nullptr);
   Graph_Graph0270->SetStats(0);
   Graph_Graph0270->SetLineWidth(2);
   Graph_Graph0270->SetMarkerStyle(20);
   Graph_Graph0270->SetMarkerSize(0.9);
   Graph_Graph0270->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0270->GetXaxis()->SetRange(2,101);
   Graph_Graph0270->GetXaxis()->SetLabelFont(42);
   Graph_Graph0270->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0270->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0270->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0270->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0270->GetXaxis()->SetTitleFont(42);
   Graph_Graph0270->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0270->GetYaxis()->SetLabelFont(42);
   Graph_Graph0270->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0270->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0270->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0270->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0270->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0270->GetYaxis()->SetTitleFont(42);
   Graph_Graph0270->GetZaxis()->SetLabelFont(42);
   Graph_Graph0270->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0270->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0270->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0270->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0270->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0270);
   
   graph->Draw("l");
   
   Double_t Graph_fx271[16] = { 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 20, 30, 40, 50, 60, 70, 80, 90 };
   Double_t Graph_fy271[16] = { 1.306509e-104, 4.922532e-68, 8.491724e-50, 6.927723e-39, 1.243755e-31, 1.827383e-26, 1.337629e-22, 1.329405e-19, 0.1767819, 6.977967, 38.95768, 101.9074, 184.6526, 273.0912, 357.2359, 431.7921 };
   graph = new TGraph(16,Graph_fx271,Graph_fy271);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph271 = new TH1F("Graph_Graph271","",100,0,98.9);
   Graph_Graph271->SetMinimum(1.175858e-104);
   Graph_Graph271->SetMaximum(474.9713);
   Graph_Graph271->SetDirectory(nullptr);
   Graph_Graph271->SetStats(0);
   Graph_Graph271->SetLineWidth(2);
   Graph_Graph271->SetMarkerStyle(20);
   Graph_Graph271->SetMarkerSize(0.9);
   Graph_Graph271->GetXaxis()->SetLabelFont(42);
   Graph_Graph271->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph271->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph271->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph271->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph271->GetXaxis()->SetTitleFont(42);
   Graph_Graph271->GetYaxis()->SetLabelFont(42);
   Graph_Graph271->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph271->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph271->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph271->GetYaxis()->SetTickLength(0.02);
   Graph_Graph271->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph271->GetYaxis()->SetTitleFont(42);
   Graph_Graph271->GetZaxis()->SetLabelFont(42);
   Graph_Graph271->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph271->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph271->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph271->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph271->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph271);
   
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
   
   Double_t Graph_fx273[16] = { 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 20, 30, 40, 50, 60, 70, 80, 90 };
   Double_t Graph_fy273[16] = { 1.43716e-104, 5.414785e-68, 9.340897e-50, 7.620495e-39, 1.368131e-31, 2.010122e-26, 1.471392e-22, 1.462346e-19, 0.1944601, 7.675763, 42.85345, 112.0981, 203.1178, 300.4003, 392.9595, 474.9713 };
   graph = new TGraph(16,Graph_fx273,Graph_fy273);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph273 = new TH1F("Graph_Graph273","",100,0,98.9);
   Graph_Graph273->SetMinimum(1.293444e-104);
   Graph_Graph273->SetMaximum(522.4684);
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
   line = new TLine(31.31194,0,31.31194,8.744055);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(31.30694,0,"  31.31 TeV");

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
   TText *pt_LaTex = pt->AddText("#varepsilon = 2.04e-07");
   pt_LaTex = pt->AddText("#alpha_{#chi} = 0.245");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
