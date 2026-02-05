#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_depth_e2_17mnthNorm_rate_7.4e-08()
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
   
   Double_t Graph0_fx176[16] = { 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 20, 30, 40, 50, 60, 70, 80, 90 };
   Double_t Graph0_fy176[16] = { 9.403125, 6.407031, 5.139453, 5.369922, 4.874414, 4.862891, 4.690039, 4.79375, 6.499219, 8.527344, 10.325, 11.89219, 14.93438, 16.31719, 18.25313, 21.20312 };
   TGraph *graph = new TGraph(16,Graph0_fx176,Graph0_fy176);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0176 = new TH1F("Graph_Graph0176","",100,0,98.9);
   Graph_Graph0176->SetMinimum(0.2);
   Graph_Graph0176->SetMaximum(100000);
   Graph_Graph0176->SetDirectory(nullptr);
   Graph_Graph0176->SetStats(0);
   Graph_Graph0176->SetLineWidth(2);
   Graph_Graph0176->SetMarkerStyle(20);
   Graph_Graph0176->SetMarkerSize(0.9);
   Graph_Graph0176->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0176->GetXaxis()->SetRange(2,101);
   Graph_Graph0176->GetXaxis()->SetLabelFont(42);
   Graph_Graph0176->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0176->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0176->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0176->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0176->GetXaxis()->SetTitleFont(42);
   Graph_Graph0176->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0176->GetYaxis()->SetLabelFont(42);
   Graph_Graph0176->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0176->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0176->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0176->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0176->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0176->GetYaxis()->SetTitleFont(42);
   Graph_Graph0176->GetZaxis()->SetLabelFont(42);
   Graph_Graph0176->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0176->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0176->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0176->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0176->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0176);
   
   graph->Draw("al");
   
   Double_t Graph1_fx177[34] = { 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 20, 30, 40, 50, 60, 70, 80, 90, 90,
   90, 90, 80, 70, 60, 50, 40, 30, 20, 4.5, 4, 3.5, 3, 2.5, 2, 1.5,
   1 };
   Double_t Graph1_fy177[34] = { 20.45958, 15.1478, 13.24202, 13.54486, 13.14658, 13.2636, 12.91702, 13.43259, 19.76311, 25.93033, 31.39673, 36.1623, 45.41312, 49.61804, 55.50492, 64.47542, 64.47542,
   7.619873, 7.619873, 6.559717, 5.863989, 5.308704, 4.320209, 3.710547, 3.097824, 2.386432, 2.022363, 1.97861, 2.108519, 2.094475, 2.454222, 2.308739, 3.053351,
   4.738293 };
   graph = new TGraph(34,Graph1_fx177,Graph1_fy177);
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
   
   TH1F *Graph_Graph1177 = new TH1F("Graph_Graph1177","Graph",100,0,98.9);
   Graph_Graph1177->SetMinimum(1.780749);
   Graph_Graph1177->SetMaximum(70.7251);
   Graph_Graph1177->SetDirectory(nullptr);
   Graph_Graph1177->SetStats(0);
   Graph_Graph1177->SetLineWidth(2);
   Graph_Graph1177->SetMarkerStyle(20);
   Graph_Graph1177->SetMarkerSize(0.9);
   Graph_Graph1177->GetXaxis()->SetLabelFont(42);
   Graph_Graph1177->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1177->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1177->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1177->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1177->GetXaxis()->SetTitleFont(42);
   Graph_Graph1177->GetYaxis()->SetLabelFont(42);
   Graph_Graph1177->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1177->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1177->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1177->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1177->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1177->GetYaxis()->SetTitleFont(42);
   Graph_Graph1177->GetZaxis()->SetLabelFont(42);
   Graph_Graph1177->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1177->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1177->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1177->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1177->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1177);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx178[34] = { 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 20, 30, 40, 50, 60, 70, 80, 90, 90,
   90, 90, 80, 70, 60, 50, 40, 30, 20, 4.5, 4, 3.5, 3, 2.5, 2, 1.5,
   1 };
   Double_t Graph2_fy178[34] = { 14.03206, 9.95691, 8.355768, 8.623442, 8.119161, 8.11935, 7.886832, 8.137666, 11.91361, 15.76729, 19.21467, 21.89417, 28.03077, 30.49613, 34.11431, 39.54322, 39.54322,
   12.07688, 12.07688, 10.39662, 9.293945, 8.467127, 6.804764, 5.880914, 4.879385, 3.73594, 2.975027, 2.910664, 3.055334, 3.071797, 3.502052, 3.303912, 4.28478,
   6.487605 };
   graph = new TGraph(34,Graph2_fx178,Graph2_fy178);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2178 = new TH1F("Graph_Graph2178","Graph",100,0,98.9);
   Graph_Graph2178->SetMinimum(2.619598);
   Graph_Graph2178->SetMaximum(43.20647);
   Graph_Graph2178->SetDirectory(nullptr);
   Graph_Graph2178->SetStats(0);
   Graph_Graph2178->SetLineWidth(2);
   Graph_Graph2178->SetMarkerStyle(20);
   Graph_Graph2178->SetMarkerSize(0.9);
   Graph_Graph2178->GetXaxis()->SetLabelFont(42);
   Graph_Graph2178->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2178->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2178->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2178->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2178->GetXaxis()->SetTitleFont(42);
   Graph_Graph2178->GetYaxis()->SetLabelFont(42);
   Graph_Graph2178->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2178->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2178->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2178->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2178->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2178->GetYaxis()->SetTitleFont(42);
   Graph_Graph2178->GetZaxis()->SetLabelFont(42);
   Graph_Graph2178->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2178->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2178->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2178->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2178->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2178);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx179[16] = { 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 20, 30, 40, 50, 60, 70, 80, 90 };
   Double_t Graph0_fy179[16] = { 9.403125, 6.407031, 5.139453, 5.369922, 4.874414, 4.862891, 4.690039, 4.79375, 6.499219, 8.527344, 10.325, 11.89219, 14.93438, 16.31719, 18.25313, 21.20312 };
   graph = new TGraph(16,Graph0_fx179,Graph0_fy179);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0179 = new TH1F("Graph_Graph0179","",100,0,98.9);
   Graph_Graph0179->SetMinimum(0.2);
   Graph_Graph0179->SetMaximum(100000);
   Graph_Graph0179->SetDirectory(nullptr);
   Graph_Graph0179->SetStats(0);
   Graph_Graph0179->SetLineWidth(2);
   Graph_Graph0179->SetMarkerStyle(20);
   Graph_Graph0179->SetMarkerSize(0.9);
   Graph_Graph0179->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0179->GetXaxis()->SetRange(2,101);
   Graph_Graph0179->GetXaxis()->SetLabelFont(42);
   Graph_Graph0179->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0179->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0179->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0179->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0179->GetXaxis()->SetTitleFont(42);
   Graph_Graph0179->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0179->GetYaxis()->SetLabelFont(42);
   Graph_Graph0179->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0179->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0179->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0179->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0179->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0179->GetYaxis()->SetTitleFont(42);
   Graph_Graph0179->GetZaxis()->SetLabelFont(42);
   Graph_Graph0179->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0179->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0179->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0179->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0179->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0179);
   
   graph->Draw("l");
   
   Double_t Graph_fx180[16] = { 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 20, 30, 40, 50, 60, 70, 80, 90 };
   Double_t Graph_fy180[16] = { 1.91769e-10, 7.634387e-06, 0.001353752, 0.02820378, 0.203814, 0.8096846, 2.222348, 4.780348, 191.5395, 190.4341, 168.7355, 146.2775, 126.9306, 110.9476, 97.82839, 87.00631 };
   graph = new TGraph(16,Graph_fx180,Graph_fy180);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph180 = new TH1F("Graph_Graph180","",100,0,98.9);
   Graph_Graph180->SetMinimum(1.725921e-10);
   Graph_Graph180->SetMaximum(210.6935);
   Graph_Graph180->SetDirectory(nullptr);
   Graph_Graph180->SetStats(0);
   Graph_Graph180->SetLineWidth(2);
   Graph_Graph180->SetMarkerStyle(20);
   Graph_Graph180->SetMarkerSize(0.9);
   Graph_Graph180->GetXaxis()->SetLabelFont(42);
   Graph_Graph180->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph180->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph180->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph180->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph180->GetXaxis()->SetTitleFont(42);
   Graph_Graph180->GetYaxis()->SetLabelFont(42);
   Graph_Graph180->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph180->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph180->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph180->GetYaxis()->SetTickLength(0.02);
   Graph_Graph180->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph180->GetYaxis()->SetTitleFont(42);
   Graph_Graph180->GetZaxis()->SetLabelFont(42);
   Graph_Graph180->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph180->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph180->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph180->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph180->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph180);
   
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
   
   Double_t Graph_fx182[16] = { 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 20, 30, 40, 50, 60, 70, 80, 90 };
   Double_t Graph_fy182[16] = { 2.109458e-10, 8.397825e-06, 0.001489127, 0.03102416, 0.2241954, 0.890653, 2.444583, 5.258383, 210.6935, 209.4775, 185.6091, 160.9053, 139.6237, 122.0424, 107.6112, 95.70694 };
   graph = new TGraph(16,Graph_fx182,Graph_fy182);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph182 = new TH1F("Graph_Graph182","",100,0,98.9);
   Graph_Graph182->SetMinimum(1.898513e-10);
   Graph_Graph182->SetMaximum(231.7629);
   Graph_Graph182->SetDirectory(nullptr);
   Graph_Graph182->SetStats(0);
   Graph_Graph182->SetLineWidth(2);
   Graph_Graph182->SetMarkerStyle(20);
   Graph_Graph182->SetMarkerSize(0.9);
   Graph_Graph182->GetXaxis()->SetLabelFont(42);
   Graph_Graph182->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph182->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph182->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph182->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph182->GetXaxis()->SetTitleFont(42);
   Graph_Graph182->GetYaxis()->SetLabelFont(42);
   Graph_Graph182->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph182->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph182->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph182->GetYaxis()->SetTickLength(0.02);
   Graph_Graph182->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph182->GetYaxis()->SetTitleFont(42);
   Graph_Graph182->GetZaxis()->SetLabelFont(42);
   Graph_Graph182->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph182->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph182->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph182->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph182->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph182);
   
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
   line = new TLine(4.512815,0,4.512815,4.794956);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(4.507815,0,"  4.51 TeV");

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
   TText *pt_LaTex = pt->AddText("#varepsilon = 7.4e-08");
   pt_LaTex = pt->AddText("#alpha_{#chi} = 0.245");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
