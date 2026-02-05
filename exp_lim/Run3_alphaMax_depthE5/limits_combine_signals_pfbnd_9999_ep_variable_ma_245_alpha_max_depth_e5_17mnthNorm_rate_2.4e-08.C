#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_depth_e5_17mnthNorm_rate_2.4e-08()
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
   
   Double_t Graph0_fx141[16] = { 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 20, 30, 40, 50, 60, 70, 80, 90 };
   Double_t Graph0_fy141[16] = { 6.914062, 5.519727, 4.955078, 4.229102, 4.183008, 4.079297, 4.067773, 4.033203, 5.485156, 7.052344, 8.85, 10.41719, 12.03047, 13.82812, 16.31719, 17.7 };
   TGraph *graph = new TGraph(16,Graph0_fx141,Graph0_fy141);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0141 = new TH1F("Graph_Graph0141","",100,0,98.9);
   Graph_Graph0141->SetMinimum(0.2);
   Graph_Graph0141->SetMaximum(100000);
   Graph_Graph0141->SetDirectory(nullptr);
   Graph_Graph0141->SetStats(0);
   Graph_Graph0141->SetLineWidth(2);
   Graph_Graph0141->SetMarkerStyle(20);
   Graph_Graph0141->SetMarkerSize(0.9);
   Graph_Graph0141->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0141->GetXaxis()->SetRange(2,101);
   Graph_Graph0141->GetXaxis()->SetLabelFont(42);
   Graph_Graph0141->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0141->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0141->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0141->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0141->GetXaxis()->SetTitleFont(42);
   Graph_Graph0141->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0141->GetYaxis()->SetLabelFont(42);
   Graph_Graph0141->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0141->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0141->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0141->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0141->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0141->GetYaxis()->SetTitleFont(42);
   Graph_Graph0141->GetZaxis()->SetLabelFont(42);
   Graph_Graph0141->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0141->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0141->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0141->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0141->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0141);
   
   graph->Draw("al");
   
   Double_t Graph1_fx142[34] = { 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 20, 30, 40, 50, 60, 70, 80, 90, 90,
   90, 90, 80, 70, 60, 50, 40, 30, 20, 4.5, 4, 3.5, 3, 2.5, 2, 1.5,
   1 };
   Double_t Graph1_fy142[34] = { 14.91576, 12.75073, 11.69612, 10.73249, 10.59214, 10.87939, 10.89486, 11.01324, 16.67951, 21.44508, 26.91148, 31.67705, 36.58279, 42.04918, 49.61804, 53.82296, 53.82296,
   6.360938, 6.360938, 5.863989, 4.969482, 4.32345, 3.743677, 3.215039, 2.561984, 2.014081, 1.717262, 1.779651, 1.784692, 1.895425, 1.916312, 2.38076, 2.652056,
   3.511047 };
   graph = new TGraph(34,Graph1_fx142,Graph1_fy142);
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
   
   TH1F *Graph_Graph1142 = new TH1F("Graph_Graph1142","Graph",100,0,98.9);
   Graph_Graph1142->SetMinimum(1.545536);
   Graph_Graph1142->SetMaximum(59.03352);
   Graph_Graph1142->SetDirectory(nullptr);
   Graph_Graph1142->SetStats(0);
   Graph_Graph1142->SetLineWidth(2);
   Graph_Graph1142->SetMarkerStyle(20);
   Graph_Graph1142->SetMarkerSize(0.9);
   Graph_Graph1142->GetXaxis()->SetLabelFont(42);
   Graph_Graph1142->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1142->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1142->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1142->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1142->GetXaxis()->SetTitleFont(42);
   Graph_Graph1142->GetYaxis()->SetLabelFont(42);
   Graph_Graph1142->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1142->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1142->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1142->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1142->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1142->GetYaxis()->SetTitleFont(42);
   Graph_Graph1142->GetZaxis()->SetLabelFont(42);
   Graph_Graph1142->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1142->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1142->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1142->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1142->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1142);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx143[34] = { 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 20, 30, 40, 50, 60, 70, 80, 90, 90,
   90, 90, 80, 70, 60, 50, 40, 30, 20, 4.5, 4, 3.5, 3, 2.5, 2, 1.5,
   1 };
   Double_t Graph2_fy143[34] = { 10.27635, 8.489978, 7.690613, 6.808281, 6.734076, 6.745978, 6.735029, 6.742097, 10.05475, 13.01186, 16.39917, 19.38623, 22.38853, 25.84418, 30.36604, 33.22165, 33.22165,
   9.992981, 9.992981, 9.293945, 7.84162, 6.852315, 5.933422, 5.064011, 4.035383, 3.180145, 2.513367, 2.566193, 2.591389, 2.717525, 2.729402, 3.326018, 3.705029,
   4.760592 };
   graph = new TGraph(34,Graph2_fx143,Graph2_fy143);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2143 = new TH1F("Graph_Graph2143","Graph",100,0,98.9);
   Graph_Graph2143->SetMinimum(2.26203);
   Graph_Graph2143->SetMaximum(36.29248);
   Graph_Graph2143->SetDirectory(nullptr);
   Graph_Graph2143->SetStats(0);
   Graph_Graph2143->SetLineWidth(2);
   Graph_Graph2143->SetMarkerStyle(20);
   Graph_Graph2143->SetMarkerSize(0.9);
   Graph_Graph2143->GetXaxis()->SetLabelFont(42);
   Graph_Graph2143->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2143->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2143->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2143->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2143->GetXaxis()->SetTitleFont(42);
   Graph_Graph2143->GetYaxis()->SetLabelFont(42);
   Graph_Graph2143->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2143->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2143->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2143->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2143->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2143->GetYaxis()->SetTitleFont(42);
   Graph_Graph2143->GetZaxis()->SetLabelFont(42);
   Graph_Graph2143->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2143->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2143->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2143->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2143->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2143);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx144[16] = { 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 20, 30, 40, 50, 60, 70, 80, 90 };
   Double_t Graph0_fy144[16] = { 6.914062, 5.519727, 4.955078, 4.229102, 4.183008, 4.079297, 4.067773, 4.033203, 5.485156, 7.052344, 8.85, 10.41719, 12.03047, 13.82812, 16.31719, 17.7 };
   graph = new TGraph(16,Graph0_fx144,Graph0_fy144);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0144 = new TH1F("Graph_Graph0144","",100,0,98.9);
   Graph_Graph0144->SetMinimum(0.2);
   Graph_Graph0144->SetMaximum(100000);
   Graph_Graph0144->SetDirectory(nullptr);
   Graph_Graph0144->SetStats(0);
   Graph_Graph0144->SetLineWidth(2);
   Graph_Graph0144->SetMarkerStyle(20);
   Graph_Graph0144->SetMarkerSize(0.9);
   Graph_Graph0144->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0144->GetXaxis()->SetRange(2,101);
   Graph_Graph0144->GetXaxis()->SetLabelFont(42);
   Graph_Graph0144->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0144->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0144->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0144->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0144->GetXaxis()->SetTitleFont(42);
   Graph_Graph0144->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0144->GetYaxis()->SetLabelFont(42);
   Graph_Graph0144->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0144->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0144->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0144->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0144->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0144->GetYaxis()->SetTitleFont(42);
   Graph_Graph0144->GetZaxis()->SetLabelFont(42);
   Graph_Graph0144->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0144->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0144->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0144->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0144->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0144);
   
   graph->Draw("l");
   
   Double_t Graph_fx145[16] = { 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 20, 30, 40, 50, 60, 70, 80, 90 };
   Double_t Graph_fy145[16] = { 21.52889, 39.58912, 47.71114, 49.74571, 48.81958, 46.59368, 43.88455, 41.08395, 9.473115, 5.71751, 3.947142, 2.945929, 2.313431, 1.882958, 1.573845, 1.342714 };
   graph = new TGraph(16,Graph_fx145,Graph_fy145);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph145 = new TH1F("Graph_Graph145","",100,0,98.9);
   Graph_Graph145->SetMinimum(1.208443);
   Graph_Graph145->SetMaximum(54.58601);
   Graph_Graph145->SetDirectory(nullptr);
   Graph_Graph145->SetStats(0);
   Graph_Graph145->SetLineWidth(2);
   Graph_Graph145->SetMarkerStyle(20);
   Graph_Graph145->SetMarkerSize(0.9);
   Graph_Graph145->GetXaxis()->SetLabelFont(42);
   Graph_Graph145->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph145->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph145->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph145->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph145->GetXaxis()->SetTitleFont(42);
   Graph_Graph145->GetYaxis()->SetLabelFont(42);
   Graph_Graph145->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph145->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph145->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph145->GetYaxis()->SetTickLength(0.02);
   Graph_Graph145->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph145->GetYaxis()->SetTitleFont(42);
   Graph_Graph145->GetZaxis()->SetLabelFont(42);
   Graph_Graph145->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph145->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph145->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph145->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph145->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph145);
   
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
   
   Double_t Graph_fx147[16] = { 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 20, 30, 40, 50, 60, 70, 80, 90 };
   Double_t Graph_fy147[16] = { 23.68178, 43.54803, 52.48226, 54.72029, 53.70153, 51.25304, 48.273, 45.19235, 10.42043, 6.289261, 4.341856, 3.240521, 2.544774, 2.071254, 1.73123, 1.476985 };
   graph = new TGraph(16,Graph_fx147,Graph_fy147);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph147 = new TH1F("Graph_Graph147","",100,0,98.9);
   Graph_Graph147->SetMinimum(1.329287);
   Graph_Graph147->SetMaximum(60.04462);
   Graph_Graph147->SetDirectory(nullptr);
   Graph_Graph147->SetStats(0);
   Graph_Graph147->SetLineWidth(2);
   Graph_Graph147->SetMarkerStyle(20);
   Graph_Graph147->SetMarkerSize(0.9);
   Graph_Graph147->GetXaxis()->SetLabelFont(42);
   Graph_Graph147->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph147->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph147->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph147->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph147->GetXaxis()->SetTitleFont(42);
   Graph_Graph147->GetYaxis()->SetLabelFont(42);
   Graph_Graph147->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph147->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph147->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph147->GetYaxis()->SetTickLength(0.02);
   Graph_Graph147->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph147->GetYaxis()->SetTitleFont(42);
   Graph_Graph147->GetZaxis()->SetLabelFont(42);
   Graph_Graph147->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph147->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph147->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph147->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph147->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph147);
   
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
   line = new TLine(27.22539,0,27.22539,6.577338);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(27.22039,0,"  27.23 TeV");

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
   TText *pt_LaTex = pt->AddText("#varepsilon = 2.4e-08");
   pt_LaTex = pt->AddText("#alpha_{#chi} = 0.245");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
