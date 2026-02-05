#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_depth_e5_17mnthNorm_rate_2.64e-07()
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
   
   Double_t Graph0_fx309[16] = { 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 20, 30, 40, 50, 60, 70, 80, 90 };
   Double_t Graph0_fy309[16] = { 6.914062, 5.519727, 4.955078, 4.229102, 4.183008, 4.079297, 4.067773, 4.033203, 5.485156, 7.052344, 8.85, 10.41719, 12.03047, 13.82812, 16.31719, 17.7 };
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
   Double_t Graph1_fy310[34] = { 14.91576, 12.75073, 11.69612, 10.73249, 10.59214, 10.87939, 10.89486, 11.01324, 16.67951, 21.44508, 26.91148, 31.67705, 36.58279, 42.04918, 49.61804, 53.82296, 53.82296,
   6.360938, 6.360938, 5.863989, 4.969482, 4.32345, 3.743677, 3.215039, 2.561984, 2.014081, 1.717262, 1.779651, 1.784692, 1.895425, 1.916312, 2.38076, 2.652056,
   3.511047 };
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
   Graph_Graph1310->SetMinimum(1.545536);
   Graph_Graph1310->SetMaximum(59.03352);
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
   Double_t Graph2_fy311[34] = { 10.27635, 8.489978, 7.690613, 6.808281, 6.734076, 6.745978, 6.735029, 6.742097, 10.05475, 13.01186, 16.39917, 19.38623, 22.38853, 25.84418, 30.36604, 33.22165, 33.22165,
   9.992981, 9.992981, 9.293945, 7.84162, 6.852315, 5.933422, 5.064011, 4.035383, 3.180145, 2.513367, 2.566193, 2.591389, 2.717525, 2.729402, 3.326018, 3.705029,
   4.760592 };
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
   Graph_Graph2311->SetMinimum(2.26203);
   Graph_Graph2311->SetMaximum(36.29248);
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
   Double_t Graph0_fy312[16] = { 6.914062, 5.519727, 4.955078, 4.229102, 4.183008, 4.079297, 4.067773, 4.033203, 5.485156, 7.052344, 8.85, 10.41719, 12.03047, 13.82812, 16.31719, 17.7 };
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
   line = new TLine(51.17852,0,51.17852,10.59546);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(51.17352,0,"  51.18 TeV");

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
