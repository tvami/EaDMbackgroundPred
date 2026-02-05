#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_depth_e5_17mnthNorm_rate_4.4e-08()
{
//=========Macro generated from canvas: climits/climits
//=========  (Tue Feb  3 11:48:00 2026) by ROOT version 6.30/07
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
   
   Double_t Graph0_fx155[16] = { 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 20, 30, 40, 50, 60, 70, 80, 90 };
   Double_t Graph0_fy155[16] = { 6.914062, 5.519727, 4.955078, 4.229102, 4.183008, 4.079297, 4.067773, 4.033203, 5.485156, 7.052344, 8.85, 10.41719, 12.03047, 13.82812, 16.31719, 17.7 };
   TGraph *graph = new TGraph(16,Graph0_fx155,Graph0_fy155);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0155 = new TH1F("Graph_Graph0155","",100,0,98.9);
   Graph_Graph0155->SetMinimum(0.2);
   Graph_Graph0155->SetMaximum(100000);
   Graph_Graph0155->SetDirectory(nullptr);
   Graph_Graph0155->SetStats(0);
   Graph_Graph0155->SetLineWidth(2);
   Graph_Graph0155->SetMarkerStyle(20);
   Graph_Graph0155->SetMarkerSize(0.9);
   Graph_Graph0155->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0155->GetXaxis()->SetRange(2,101);
   Graph_Graph0155->GetXaxis()->SetLabelFont(42);
   Graph_Graph0155->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0155->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0155->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0155->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0155->GetXaxis()->SetTitleFont(42);
   Graph_Graph0155->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0155->GetYaxis()->SetLabelFont(42);
   Graph_Graph0155->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0155->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0155->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0155->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0155->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0155->GetYaxis()->SetTitleFont(42);
   Graph_Graph0155->GetZaxis()->SetLabelFont(42);
   Graph_Graph0155->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0155->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0155->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0155->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0155->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0155);
   
   graph->Draw("al");
   
   Double_t Graph1_fx156[34] = { 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 20, 30, 40, 50, 60, 70, 80, 90, 90,
   90, 90, 80, 70, 60, 50, 40, 30, 20, 4.5, 4, 3.5, 3, 2.5, 2, 1.5,
   1 };
   Double_t Graph1_fy156[34] = { 14.91576, 12.75073, 11.69612, 10.73249, 10.59214, 10.87939, 10.89486, 11.01324, 16.67951, 21.44508, 26.91148, 31.67705, 36.58279, 42.04918, 49.61804, 53.82296, 53.82296,
   6.360938, 6.360938, 5.863989, 4.969482, 4.32345, 3.743677, 3.215039, 2.561984, 2.014081, 1.717262, 1.779651, 1.784692, 1.895425, 1.916312, 2.38076, 2.652056,
   3.511047 };
   graph = new TGraph(34,Graph1_fx156,Graph1_fy156);
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
   
   TH1F *Graph_Graph1156 = new TH1F("Graph_Graph1156","Graph",100,0,98.9);
   Graph_Graph1156->SetMinimum(1.545536);
   Graph_Graph1156->SetMaximum(59.03352);
   Graph_Graph1156->SetDirectory(nullptr);
   Graph_Graph1156->SetStats(0);
   Graph_Graph1156->SetLineWidth(2);
   Graph_Graph1156->SetMarkerStyle(20);
   Graph_Graph1156->SetMarkerSize(0.9);
   Graph_Graph1156->GetXaxis()->SetLabelFont(42);
   Graph_Graph1156->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1156->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1156->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1156->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1156->GetXaxis()->SetTitleFont(42);
   Graph_Graph1156->GetYaxis()->SetLabelFont(42);
   Graph_Graph1156->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1156->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1156->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1156->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1156->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1156->GetYaxis()->SetTitleFont(42);
   Graph_Graph1156->GetZaxis()->SetLabelFont(42);
   Graph_Graph1156->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1156->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1156->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1156->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1156->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1156);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx157[34] = { 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 20, 30, 40, 50, 60, 70, 80, 90, 90,
   90, 90, 80, 70, 60, 50, 40, 30, 20, 4.5, 4, 3.5, 3, 2.5, 2, 1.5,
   1 };
   Double_t Graph2_fy157[34] = { 10.27635, 8.489978, 7.690613, 6.808281, 6.734076, 6.745978, 6.735029, 6.742097, 10.05475, 13.01186, 16.39917, 19.38623, 22.38853, 25.84418, 30.36604, 33.22165, 33.22165,
   9.992981, 9.992981, 9.293945, 7.84162, 6.852315, 5.933422, 5.064011, 4.035383, 3.180145, 2.513367, 2.566193, 2.591389, 2.717525, 2.729402, 3.326018, 3.705029,
   4.760592 };
   graph = new TGraph(34,Graph2_fx157,Graph2_fy157);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2157 = new TH1F("Graph_Graph2157","Graph",100,0,98.9);
   Graph_Graph2157->SetMinimum(2.26203);
   Graph_Graph2157->SetMaximum(36.29248);
   Graph_Graph2157->SetDirectory(nullptr);
   Graph_Graph2157->SetStats(0);
   Graph_Graph2157->SetLineWidth(2);
   Graph_Graph2157->SetMarkerStyle(20);
   Graph_Graph2157->SetMarkerSize(0.9);
   Graph_Graph2157->GetXaxis()->SetLabelFont(42);
   Graph_Graph2157->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2157->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2157->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2157->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2157->GetXaxis()->SetTitleFont(42);
   Graph_Graph2157->GetYaxis()->SetLabelFont(42);
   Graph_Graph2157->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2157->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2157->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2157->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2157->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2157->GetYaxis()->SetTitleFont(42);
   Graph_Graph2157->GetZaxis()->SetLabelFont(42);
   Graph_Graph2157->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2157->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2157->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2157->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2157->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2157);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx158[16] = { 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 20, 30, 40, 50, 60, 70, 80, 90 };
   Double_t Graph0_fy158[16] = { 6.914062, 5.519727, 4.955078, 4.229102, 4.183008, 4.079297, 4.067773, 4.033203, 5.485156, 7.052344, 8.85, 10.41719, 12.03047, 13.82812, 16.31719, 17.7 };
   graph = new TGraph(16,Graph0_fx158,Graph0_fy158);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0158 = new TH1F("Graph_Graph0158","",100,0,98.9);
   Graph_Graph0158->SetMinimum(0.2);
   Graph_Graph0158->SetMaximum(100000);
   Graph_Graph0158->SetDirectory(nullptr);
   Graph_Graph0158->SetStats(0);
   Graph_Graph0158->SetLineWidth(2);
   Graph_Graph0158->SetMarkerStyle(20);
   Graph_Graph0158->SetMarkerSize(0.9);
   Graph_Graph0158->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0158->GetXaxis()->SetRange(2,101);
   Graph_Graph0158->GetXaxis()->SetLabelFont(42);
   Graph_Graph0158->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0158->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0158->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0158->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0158->GetXaxis()->SetTitleFont(42);
   Graph_Graph0158->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0158->GetYaxis()->SetLabelFont(42);
   Graph_Graph0158->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0158->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0158->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0158->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0158->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0158->GetYaxis()->SetTitleFont(42);
   Graph_Graph0158->GetZaxis()->SetLabelFont(42);
   Graph_Graph0158->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0158->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0158->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0158->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0158->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0158);
   
   graph->Draw("l");
   
   Double_t Graph_fx159[16] = { 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 20, 30, 40, 50, 60, 70, 80, 90 };
   Double_t Graph_fy159[16] = { 0.05971294, 1.753594, 8.445514, 20.21873, 34.53452, 48.96517, 62.05798, 73.18697, 70.62568, 48.96007, 36.22434, 28.18315, 22.75396, 18.89018, 16.02521, 13.83054 };
   graph = new TGraph(16,Graph_fx159,Graph_fy159);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph159 = new TH1F("Graph_Graph159","",100,0,98.9);
   Graph_Graph159->SetMinimum(0.05374164);
   Graph_Graph159->SetMaximum(80.49969);
   Graph_Graph159->SetDirectory(nullptr);
   Graph_Graph159->SetStats(0);
   Graph_Graph159->SetLineWidth(2);
   Graph_Graph159->SetMarkerStyle(20);
   Graph_Graph159->SetMarkerSize(0.9);
   Graph_Graph159->GetXaxis()->SetLabelFont(42);
   Graph_Graph159->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph159->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph159->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph159->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph159->GetXaxis()->SetTitleFont(42);
   Graph_Graph159->GetYaxis()->SetLabelFont(42);
   Graph_Graph159->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph159->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph159->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph159->GetYaxis()->SetTickLength(0.02);
   Graph_Graph159->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph159->GetYaxis()->SetTitleFont(42);
   Graph_Graph159->GetZaxis()->SetLabelFont(42);
   Graph_Graph159->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph159->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph159->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph159->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph159->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph159);
   
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
   
   Double_t Graph_fx161[16] = { 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 20, 30, 40, 50, 60, 70, 80, 90 };
   Double_t Graph_fy161[16] = { 0.06568423, 1.928953, 9.290066, 22.2406, 37.98797, 53.86169, 68.26378, 80.50566, 77.68824, 53.85608, 39.84677, 31.00147, 25.02936, 20.7792, 17.62774, 15.21359 };
   graph = new TGraph(16,Graph_fx161,Graph_fy161);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph161 = new TH1F("Graph_Graph161","",100,0,98.9);
   Graph_Graph161->SetMinimum(0.05911581);
   Graph_Graph161->SetMaximum(88.54966);
   Graph_Graph161->SetDirectory(nullptr);
   Graph_Graph161->SetStats(0);
   Graph_Graph161->SetLineWidth(2);
   Graph_Graph161->SetMarkerStyle(20);
   Graph_Graph161->SetMarkerSize(0.9);
   Graph_Graph161->GetXaxis()->SetLabelFont(42);
   Graph_Graph161->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph161->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph161->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph161->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph161->GetXaxis()->SetTitleFont(42);
   Graph_Graph161->GetYaxis()->SetLabelFont(42);
   Graph_Graph161->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph161->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph161->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph161->GetYaxis()->SetTickLength(0.02);
   Graph_Graph161->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph161->GetYaxis()->SetTitleFont(42);
   Graph_Graph161->GetZaxis()->SetLabelFont(42);
   Graph_Graph161->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph161->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph161->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph161->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph161->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph161);
   
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
   line = new TLine(1.841292,0,1.841292,5.12775);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(1.836292,0,"  1.84 TeV");

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
   TText *pt_LaTex = pt->AddText("#varepsilon = 4.4e-08");
   pt_LaTex = pt->AddText("#alpha_{#chi} = 0.245");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
