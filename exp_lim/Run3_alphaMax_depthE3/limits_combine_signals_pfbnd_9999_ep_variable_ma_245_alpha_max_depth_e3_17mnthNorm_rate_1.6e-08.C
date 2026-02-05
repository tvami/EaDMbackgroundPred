#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_depth_e3_17mnthNorm_rate_1.6e-08()
{
//=========Macro generated from canvas: climits/climits
//=========  (Tue Feb  3 11:37:20 2026) by ROOT version 6.30/07
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
   
   Double_t Graph0_fx85[16] = { 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 20, 30, 40, 50, 60, 70, 80, 90 };
   Double_t Graph0_fy85[16] = { 9.495313, 6.337891, 5.139453, 5.243164, 4.897461, 4.862891, 4.851367, 4.782227, 6.522266, 8.342969, 10.27891, 12.21484, 14.28906, 15.85625, 18.89844, 20.09688 };
   TGraph *graph = new TGraph(16,Graph0_fx85,Graph0_fy85);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph085 = new TH1F("Graph_Graph085","",100,0,98.9);
   Graph_Graph085->SetMinimum(0.2);
   Graph_Graph085->SetMaximum(100000);
   Graph_Graph085->SetDirectory(nullptr);
   Graph_Graph085->SetStats(0);
   Graph_Graph085->SetLineWidth(2);
   Graph_Graph085->SetMarkerStyle(20);
   Graph_Graph085->SetMarkerSize(0.9);
   Graph_Graph085->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph085->GetXaxis()->SetRange(2,101);
   Graph_Graph085->GetXaxis()->SetLabelFont(42);
   Graph_Graph085->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph085->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph085->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph085->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph085->GetXaxis()->SetTitleFont(42);
   Graph_Graph085->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph085->GetYaxis()->SetLabelFont(42);
   Graph_Graph085->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph085->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph085->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph085->GetYaxis()->SetTickLength(0.02);
   Graph_Graph085->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph085->GetYaxis()->SetTitleFont(42);
   Graph_Graph085->GetZaxis()->SetLabelFont(42);
   Graph_Graph085->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph085->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph085->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph085->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph085->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph085);
   
   graph->Draw("al");
   
   Double_t Graph1_fx86[34] = { 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 20, 30, 40, 50, 60, 70, 80, 90, 90,
   90, 90, 80, 70, 60, 50, 40, 30, 20, 4.5, 4, 3.5, 3, 2.5, 2, 1.5,
   1 };
   Double_t Graph1_fy86[34] = { 20.69942, 15.00274, 13.19256, 13.28391, 13.19066, 13.21999, 13.52314, 13.38432, 19.8332, 25.36967, 31.25656, 37.14345, 43.45082, 48.2164, 57.46722, 61.11148, 61.11148,
   7.379321, 7.379321, 6.791626, 5.69834, 5.135132, 4.389709, 3.693982, 3.030844, 2.394894, 2.017502, 2.046671, 2.089523, 2.104378, 2.39629, 2.308739, 3.020401,
   4.784747 };
   graph = new TGraph(34,Graph1_fx86,Graph1_fy86);
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
   
   TH1F *Graph_Graph186 = new TH1F("Graph_Graph186","Graph",100,0,98.9);
   Graph_Graph186->SetMinimum(1.815752);
   Graph_Graph186->SetMaximum(67.02088);
   Graph_Graph186->SetDirectory(nullptr);
   Graph_Graph186->SetStats(0);
   Graph_Graph186->SetLineWidth(2);
   Graph_Graph186->SetMarkerStyle(20);
   Graph_Graph186->SetMarkerSize(0.9);
   Graph_Graph186->GetXaxis()->SetLabelFont(42);
   Graph_Graph186->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph186->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph186->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph186->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph186->GetXaxis()->SetTitleFont(42);
   Graph_Graph186->GetYaxis()->SetLabelFont(42);
   Graph_Graph186->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph186->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph186->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph186->GetYaxis()->SetTickLength(0.02);
   Graph_Graph186->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph186->GetYaxis()->SetTitleFont(42);
   Graph_Graph186->GetZaxis()->SetLabelFont(42);
   Graph_Graph186->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph186->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph186->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph186->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph186->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph186);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx87[34] = { 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 20, 30, 40, 50, 60, 70, 80, 90, 90,
   90, 90, 80, 70, 60, 50, 40, 30, 20, 4.5, 4, 3.5, 3, 2.5, 2, 1.5,
   1 };
   Double_t Graph2_fy87[34] = { 14.18855, 9.849462, 8.335282, 8.419885, 8.138028, 8.099967, 8.196799, 8.099042, 11.98185, 15.39312, 19.21084, 22.63427, 26.53478, 29.63465, 35.32037, 37.15967, 37.15967,
   11.55227, 11.55227, 10.76417, 8.991725, 8.138765, 6.957332, 5.85466, 4.773885, 3.749188, 2.967876, 3.010785, 3.064535, 3.086321, 3.397144, 3.303912, 4.238542,
   6.551209 };
   graph = new TGraph(34,Graph2_fx87,Graph2_fy87);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph287 = new TH1F("Graph_Graph287","Graph",100,0,98.9);
   Graph_Graph287->SetMinimum(2.671088);
   Graph_Graph287->SetMaximum(40.57885);
   Graph_Graph287->SetDirectory(nullptr);
   Graph_Graph287->SetStats(0);
   Graph_Graph287->SetLineWidth(2);
   Graph_Graph287->SetMarkerStyle(20);
   Graph_Graph287->SetMarkerSize(0.9);
   Graph_Graph287->GetXaxis()->SetLabelFont(42);
   Graph_Graph287->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph287->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph287->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph287->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph287->GetXaxis()->SetTitleFont(42);
   Graph_Graph287->GetYaxis()->SetLabelFont(42);
   Graph_Graph287->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph287->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph287->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph287->GetYaxis()->SetTickLength(0.02);
   Graph_Graph287->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph287->GetYaxis()->SetTitleFont(42);
   Graph_Graph287->GetZaxis()->SetLabelFont(42);
   Graph_Graph287->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph287->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph287->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph287->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph287->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph287);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx88[16] = { 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 20, 30, 40, 50, 60, 70, 80, 90 };
   Double_t Graph0_fy88[16] = { 9.495313, 6.337891, 5.139453, 5.243164, 4.897461, 4.862891, 4.851367, 4.782227, 6.522266, 8.342969, 10.27891, 12.21484, 14.28906, 15.85625, 18.89844, 20.09688 };
   graph = new TGraph(16,Graph0_fx88,Graph0_fy88);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph088 = new TH1F("Graph_Graph088","",100,0,98.9);
   Graph_Graph088->SetMinimum(0.2);
   Graph_Graph088->SetMaximum(100000);
   Graph_Graph088->SetDirectory(nullptr);
   Graph_Graph088->SetStats(0);
   Graph_Graph088->SetLineWidth(2);
   Graph_Graph088->SetMarkerStyle(20);
   Graph_Graph088->SetMarkerSize(0.9);
   Graph_Graph088->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph088->GetXaxis()->SetRange(2,101);
   Graph_Graph088->GetXaxis()->SetLabelFont(42);
   Graph_Graph088->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph088->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph088->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph088->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph088->GetXaxis()->SetTitleFont(42);
   Graph_Graph088->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph088->GetYaxis()->SetLabelFont(42);
   Graph_Graph088->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph088->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph088->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph088->GetYaxis()->SetTickLength(0.02);
   Graph_Graph088->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph088->GetYaxis()->SetTitleFont(42);
   Graph_Graph088->GetZaxis()->SetLabelFont(42);
   Graph_Graph088->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph088->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph088->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph088->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph088->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph088);
   
   graph->Draw("l");
   
   Double_t Graph_fx89[16] = { 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 20, 30, 40, 50, 60, 70, 80, 90 };
   Double_t Graph_fy89[16] = { 30.06417, 28.80531, 25.05827, 21.48561, 18.50802, 16.09332, 14.13497, 12.53318, 2.063467, 1.205466, 0.8187522, 0.6051249, 0.4721153, 0.382481, 0.318577, 0.2710542 };
   graph = new TGraph(16,Graph_fx89,Graph_fy89);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph89 = new TH1F("Graph_Graph89","",100,0,98.9);
   Graph_Graph89->SetMinimum(0.2439488);
   Graph_Graph89->SetMaximum(33.04348);
   Graph_Graph89->SetDirectory(nullptr);
   Graph_Graph89->SetStats(0);
   Graph_Graph89->SetLineWidth(2);
   Graph_Graph89->SetMarkerStyle(20);
   Graph_Graph89->SetMarkerSize(0.9);
   Graph_Graph89->GetXaxis()->SetLabelFont(42);
   Graph_Graph89->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph89->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph89->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph89->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph89->GetXaxis()->SetTitleFont(42);
   Graph_Graph89->GetYaxis()->SetLabelFont(42);
   Graph_Graph89->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph89->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph89->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph89->GetYaxis()->SetTickLength(0.02);
   Graph_Graph89->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph89->GetYaxis()->SetTitleFont(42);
   Graph_Graph89->GetZaxis()->SetLabelFont(42);
   Graph_Graph89->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph89->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph89->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph89->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph89->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph89);
   
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
   
   Double_t Graph_fx91[16] = { 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 20, 30, 40, 50, 60, 70, 80, 90 };
   Double_t Graph_fy91[16] = { 33.07059, 31.68584, 27.5641, 23.63417, 20.35882, 17.70265, 15.54846, 13.78649, 2.269813, 1.326013, 0.9006275, 0.6656374, 0.5193268, 0.4207291, 0.3504347, 0.2981597 };
   graph = new TGraph(16,Graph_fx91,Graph_fy91);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph91 = new TH1F("Graph_Graph91","",100,0,98.9);
   Graph_Graph91->SetMinimum(0.2683437);
   Graph_Graph91->SetMaximum(36.34783);
   Graph_Graph91->SetDirectory(nullptr);
   Graph_Graph91->SetStats(0);
   Graph_Graph91->SetLineWidth(2);
   Graph_Graph91->SetMarkerStyle(20);
   Graph_Graph91->SetMarkerSize(0.9);
   Graph_Graph91->GetXaxis()->SetLabelFont(42);
   Graph_Graph91->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph91->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph91->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph91->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph91->GetXaxis()->SetTitleFont(42);
   Graph_Graph91->GetYaxis()->SetLabelFont(42);
   Graph_Graph91->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph91->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph91->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph91->GetYaxis()->SetTickLength(0.02);
   Graph_Graph91->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph91->GetYaxis()->SetTitleFont(42);
   Graph_Graph91->GetZaxis()->SetLabelFont(42);
   Graph_Graph91->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph91->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph91->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph91->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph91->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph91);
   
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
   line = new TLine(11.56323,0,11.56323,5.508622);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(11.55823,0,"  11.56 TeV");

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
   TText *pt_LaTex = pt->AddText("#varepsilon = 1.6e-08");
   pt_LaTex = pt->AddText("#alpha_{#chi} = 0.245");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
