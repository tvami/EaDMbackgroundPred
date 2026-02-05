#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_depth_e3_17mnthNorm_rate_1.64e-07()
{
//=========Macro generated from canvas: climits/climits
//=========  (Tue Feb  3 11:37:21 2026) by ROOT version 6.30/07
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
   
   Double_t Graph0_fx239[16] = { 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 20, 30, 40, 50, 60, 70, 80, 90 };
   Double_t Graph0_fy239[16] = { 9.495313, 6.337891, 5.139453, 5.243164, 4.897461, 4.862891, 4.851367, 4.782227, 6.522266, 8.342969, 10.27891, 12.21484, 14.28906, 15.85625, 18.89844, 20.09688 };
   TGraph *graph = new TGraph(16,Graph0_fx239,Graph0_fy239);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0239 = new TH1F("Graph_Graph0239","",100,0,98.9);
   Graph_Graph0239->SetMinimum(0.2);
   Graph_Graph0239->SetMaximum(100000);
   Graph_Graph0239->SetDirectory(nullptr);
   Graph_Graph0239->SetStats(0);
   Graph_Graph0239->SetLineWidth(2);
   Graph_Graph0239->SetMarkerStyle(20);
   Graph_Graph0239->SetMarkerSize(0.9);
   Graph_Graph0239->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0239->GetXaxis()->SetRange(2,101);
   Graph_Graph0239->GetXaxis()->SetLabelFont(42);
   Graph_Graph0239->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0239->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0239->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0239->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0239->GetXaxis()->SetTitleFont(42);
   Graph_Graph0239->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0239->GetYaxis()->SetLabelFont(42);
   Graph_Graph0239->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0239->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0239->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0239->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0239->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0239->GetYaxis()->SetTitleFont(42);
   Graph_Graph0239->GetZaxis()->SetLabelFont(42);
   Graph_Graph0239->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0239->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0239->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0239->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0239->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0239);
   
   graph->Draw("al");
   
   Double_t Graph1_fx240[34] = { 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 20, 30, 40, 50, 60, 70, 80, 90, 90,
   90, 90, 80, 70, 60, 50, 40, 30, 20, 4.5, 4, 3.5, 3, 2.5, 2, 1.5,
   1 };
   Double_t Graph1_fy240[34] = { 20.69942, 15.00274, 13.19256, 13.28391, 13.19066, 13.21999, 13.52314, 13.38432, 19.8332, 25.36967, 31.25656, 37.14345, 43.45082, 48.2164, 57.46722, 61.11148, 61.11148,
   7.379321, 7.379321, 6.791626, 5.69834, 5.135132, 4.389709, 3.693982, 3.030844, 2.394894, 2.017502, 2.046671, 2.089523, 2.104378, 2.39629, 2.308739, 3.020401,
   4.784747 };
   graph = new TGraph(34,Graph1_fx240,Graph1_fy240);
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
   
   TH1F *Graph_Graph1240 = new TH1F("Graph_Graph1240","Graph",100,0,98.9);
   Graph_Graph1240->SetMinimum(1.815752);
   Graph_Graph1240->SetMaximum(67.02088);
   Graph_Graph1240->SetDirectory(nullptr);
   Graph_Graph1240->SetStats(0);
   Graph_Graph1240->SetLineWidth(2);
   Graph_Graph1240->SetMarkerStyle(20);
   Graph_Graph1240->SetMarkerSize(0.9);
   Graph_Graph1240->GetXaxis()->SetLabelFont(42);
   Graph_Graph1240->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1240->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1240->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1240->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1240->GetXaxis()->SetTitleFont(42);
   Graph_Graph1240->GetYaxis()->SetLabelFont(42);
   Graph_Graph1240->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1240->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1240->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1240->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1240->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1240->GetYaxis()->SetTitleFont(42);
   Graph_Graph1240->GetZaxis()->SetLabelFont(42);
   Graph_Graph1240->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1240->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1240->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1240->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1240->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1240);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx241[34] = { 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 20, 30, 40, 50, 60, 70, 80, 90, 90,
   90, 90, 80, 70, 60, 50, 40, 30, 20, 4.5, 4, 3.5, 3, 2.5, 2, 1.5,
   1 };
   Double_t Graph2_fy241[34] = { 14.18855, 9.849462, 8.335282, 8.419885, 8.138028, 8.099967, 8.196799, 8.099042, 11.98185, 15.39312, 19.21084, 22.63427, 26.53478, 29.63465, 35.32037, 37.15967, 37.15967,
   11.55227, 11.55227, 10.76417, 8.991725, 8.138765, 6.957332, 5.85466, 4.773885, 3.749188, 2.967876, 3.010785, 3.064535, 3.086321, 3.397144, 3.303912, 4.238542,
   6.551209 };
   graph = new TGraph(34,Graph2_fx241,Graph2_fy241);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2241 = new TH1F("Graph_Graph2241","Graph",100,0,98.9);
   Graph_Graph2241->SetMinimum(2.671088);
   Graph_Graph2241->SetMaximum(40.57885);
   Graph_Graph2241->SetDirectory(nullptr);
   Graph_Graph2241->SetStats(0);
   Graph_Graph2241->SetLineWidth(2);
   Graph_Graph2241->SetMarkerStyle(20);
   Graph_Graph2241->SetMarkerSize(0.9);
   Graph_Graph2241->GetXaxis()->SetLabelFont(42);
   Graph_Graph2241->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2241->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2241->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2241->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2241->GetXaxis()->SetTitleFont(42);
   Graph_Graph2241->GetYaxis()->SetLabelFont(42);
   Graph_Graph2241->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2241->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2241->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2241->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2241->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2241->GetYaxis()->SetTitleFont(42);
   Graph_Graph2241->GetZaxis()->SetLabelFont(42);
   Graph_Graph2241->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2241->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2241->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2241->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2241->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2241);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx242[16] = { 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 20, 30, 40, 50, 60, 70, 80, 90 };
   Double_t Graph0_fy242[16] = { 9.495313, 6.337891, 5.139453, 5.243164, 4.897461, 4.862891, 4.851367, 4.782227, 6.522266, 8.342969, 10.27891, 12.21484, 14.28906, 15.85625, 18.89844, 20.09688 };
   graph = new TGraph(16,Graph0_fx242,Graph0_fy242);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0242 = new TH1F("Graph_Graph0242","",100,0,98.9);
   Graph_Graph0242->SetMinimum(0.2);
   Graph_Graph0242->SetMaximum(100000);
   Graph_Graph0242->SetDirectory(nullptr);
   Graph_Graph0242->SetStats(0);
   Graph_Graph0242->SetLineWidth(2);
   Graph_Graph0242->SetMarkerStyle(20);
   Graph_Graph0242->SetMarkerSize(0.9);
   Graph_Graph0242->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0242->GetXaxis()->SetRange(2,101);
   Graph_Graph0242->GetXaxis()->SetLabelFont(42);
   Graph_Graph0242->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0242->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0242->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0242->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0242->GetXaxis()->SetTitleFont(42);
   Graph_Graph0242->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0242->GetYaxis()->SetLabelFont(42);
   Graph_Graph0242->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0242->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0242->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0242->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0242->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0242->GetYaxis()->SetTitleFont(42);
   Graph_Graph0242->GetZaxis()->SetLabelFont(42);
   Graph_Graph0242->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0242->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0242->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0242->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0242->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0242);
   
   graph->Draw("l");
   
   Double_t Graph_fx243[16] = { 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 20, 30, 40, 50, 60, 70, 80, 90 };
   Double_t Graph_fy243[16] = { 6.441908e-66, 2.296564e-42, 1.218649e-30, 1.231029e-23, 5.490467e-19, 1.112064e-15, 3.274956e-13, 2.67419e-11, 6.635839, 58.47709, 154.2586, 257.3367, 345.4707, 412.4153, 459.4208, 490.076 };
   graph = new TGraph(16,Graph_fx243,Graph_fy243);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph243 = new TH1F("Graph_Graph243","",100,0,98.9);
   Graph_Graph243->SetMinimum(5.797717e-66);
   Graph_Graph243->SetMaximum(539.0836);
   Graph_Graph243->SetDirectory(nullptr);
   Graph_Graph243->SetStats(0);
   Graph_Graph243->SetLineWidth(2);
   Graph_Graph243->SetMarkerStyle(20);
   Graph_Graph243->SetMarkerSize(0.9);
   Graph_Graph243->GetXaxis()->SetLabelFont(42);
   Graph_Graph243->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph243->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph243->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph243->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph243->GetXaxis()->SetTitleFont(42);
   Graph_Graph243->GetYaxis()->SetLabelFont(42);
   Graph_Graph243->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph243->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph243->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph243->GetYaxis()->SetTickLength(0.02);
   Graph_Graph243->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph243->GetYaxis()->SetTitleFont(42);
   Graph_Graph243->GetZaxis()->SetLabelFont(42);
   Graph_Graph243->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph243->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph243->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph243->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph243->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph243);
   
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
   
   Double_t Graph_fx245[16] = { 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 20, 30, 40, 50, 60, 70, 80, 90 };
   Double_t Graph_fy245[16] = { 7.086099e-66, 2.526221e-42, 1.340513e-30, 1.354132e-23, 6.039513e-19, 1.223271e-15, 3.602451e-13, 2.941609e-11, 7.299422, 64.3248, 169.6845, 283.0703, 380.0177, 453.6568, 505.3629, 539.0836 };
   graph = new TGraph(16,Graph_fx245,Graph_fy245);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph245 = new TH1F("Graph_Graph245","",100,0,98.9);
   Graph_Graph245->SetMinimum(6.377489e-66);
   Graph_Graph245->SetMaximum(592.9919);
   Graph_Graph245->SetDirectory(nullptr);
   Graph_Graph245->SetStats(0);
   Graph_Graph245->SetLineWidth(2);
   Graph_Graph245->SetMarkerStyle(20);
   Graph_Graph245->SetMarkerSize(0.9);
   Graph_Graph245->GetXaxis()->SetLabelFont(42);
   Graph_Graph245->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph245->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph245->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph245->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph245->GetXaxis()->SetTitleFont(42);
   Graph_Graph245->GetYaxis()->SetLabelFont(42);
   Graph_Graph245->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph245->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph245->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph245->GetYaxis()->SetTickLength(0.02);
   Graph_Graph245->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph245->GetYaxis()->SetTitleFont(42);
   Graph_Graph245->GetZaxis()->SetLabelFont(42);
   Graph_Graph245->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph245->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph245->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph245->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph245->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph245);
   
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
   line = new TLine(19.98968,0,19.98968,6.520918);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(19.98468,0,"  19.99 TeV");

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
   TText *pt_LaTex = pt->AddText("#varepsilon = 1.64e-07");
   pt_LaTex = pt->AddText("#alpha_{#chi} = 0.245");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
