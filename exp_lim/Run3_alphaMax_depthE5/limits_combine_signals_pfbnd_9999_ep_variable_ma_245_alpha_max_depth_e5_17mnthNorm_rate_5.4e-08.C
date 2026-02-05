#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_depth_e5_17mnthNorm_rate_5.4e-08()
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
   
   Double_t Graph0_fx162[16] = { 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 20, 30, 40, 50, 60, 70, 80, 90 };
   Double_t Graph0_fy162[16] = { 6.914062, 5.519727, 4.955078, 4.229102, 4.183008, 4.079297, 4.067773, 4.033203, 5.485156, 7.052344, 8.85, 10.41719, 12.03047, 13.82812, 16.31719, 17.7 };
   TGraph *graph = new TGraph(16,Graph0_fx162,Graph0_fy162);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0162 = new TH1F("Graph_Graph0162","",100,0,98.9);
   Graph_Graph0162->SetMinimum(0.2);
   Graph_Graph0162->SetMaximum(100000);
   Graph_Graph0162->SetDirectory(nullptr);
   Graph_Graph0162->SetStats(0);
   Graph_Graph0162->SetLineWidth(2);
   Graph_Graph0162->SetMarkerStyle(20);
   Graph_Graph0162->SetMarkerSize(0.9);
   Graph_Graph0162->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0162->GetXaxis()->SetRange(2,101);
   Graph_Graph0162->GetXaxis()->SetLabelFont(42);
   Graph_Graph0162->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0162->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0162->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0162->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0162->GetXaxis()->SetTitleFont(42);
   Graph_Graph0162->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0162->GetYaxis()->SetLabelFont(42);
   Graph_Graph0162->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0162->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0162->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0162->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0162->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0162->GetYaxis()->SetTitleFont(42);
   Graph_Graph0162->GetZaxis()->SetLabelFont(42);
   Graph_Graph0162->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0162->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0162->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0162->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0162->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0162);
   
   graph->Draw("al");
   
   Double_t Graph1_fx163[34] = { 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 20, 30, 40, 50, 60, 70, 80, 90, 90,
   90, 90, 80, 70, 60, 50, 40, 30, 20, 4.5, 4, 3.5, 3, 2.5, 2, 1.5,
   1 };
   Double_t Graph1_fy163[34] = { 14.91576, 12.75073, 11.69612, 10.73249, 10.59214, 10.87939, 10.89486, 11.01324, 16.67951, 21.44508, 26.91148, 31.67705, 36.58279, 42.04918, 49.61804, 53.82296, 53.82296,
   6.360938, 6.360938, 5.863989, 4.969482, 4.32345, 3.743677, 3.215039, 2.561984, 2.014081, 1.717262, 1.779651, 1.784692, 1.895425, 1.916312, 2.38076, 2.652056,
   3.511047 };
   graph = new TGraph(34,Graph1_fx163,Graph1_fy163);
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
   
   TH1F *Graph_Graph1163 = new TH1F("Graph_Graph1163","Graph",100,0,98.9);
   Graph_Graph1163->SetMinimum(1.545536);
   Graph_Graph1163->SetMaximum(59.03352);
   Graph_Graph1163->SetDirectory(nullptr);
   Graph_Graph1163->SetStats(0);
   Graph_Graph1163->SetLineWidth(2);
   Graph_Graph1163->SetMarkerStyle(20);
   Graph_Graph1163->SetMarkerSize(0.9);
   Graph_Graph1163->GetXaxis()->SetLabelFont(42);
   Graph_Graph1163->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1163->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1163->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1163->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1163->GetXaxis()->SetTitleFont(42);
   Graph_Graph1163->GetYaxis()->SetLabelFont(42);
   Graph_Graph1163->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1163->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1163->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1163->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1163->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1163->GetYaxis()->SetTitleFont(42);
   Graph_Graph1163->GetZaxis()->SetLabelFont(42);
   Graph_Graph1163->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1163->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1163->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1163->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1163->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1163);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx164[34] = { 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 20, 30, 40, 50, 60, 70, 80, 90, 90,
   90, 90, 80, 70, 60, 50, 40, 30, 20, 4.5, 4, 3.5, 3, 2.5, 2, 1.5,
   1 };
   Double_t Graph2_fy164[34] = { 10.27635, 8.489978, 7.690613, 6.808281, 6.734076, 6.745978, 6.735029, 6.742097, 10.05475, 13.01186, 16.39917, 19.38623, 22.38853, 25.84418, 30.36604, 33.22165, 33.22165,
   9.992981, 9.992981, 9.293945, 7.84162, 6.852315, 5.933422, 5.064011, 4.035383, 3.180145, 2.513367, 2.566193, 2.591389, 2.717525, 2.729402, 3.326018, 3.705029,
   4.760592 };
   graph = new TGraph(34,Graph2_fx164,Graph2_fy164);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2164 = new TH1F("Graph_Graph2164","Graph",100,0,98.9);
   Graph_Graph2164->SetMinimum(2.26203);
   Graph_Graph2164->SetMaximum(36.29248);
   Graph_Graph2164->SetDirectory(nullptr);
   Graph_Graph2164->SetStats(0);
   Graph_Graph2164->SetLineWidth(2);
   Graph_Graph2164->SetMarkerStyle(20);
   Graph_Graph2164->SetMarkerSize(0.9);
   Graph_Graph2164->GetXaxis()->SetLabelFont(42);
   Graph_Graph2164->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2164->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2164->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2164->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2164->GetXaxis()->SetTitleFont(42);
   Graph_Graph2164->GetYaxis()->SetLabelFont(42);
   Graph_Graph2164->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2164->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2164->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2164->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2164->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2164->GetYaxis()->SetTitleFont(42);
   Graph_Graph2164->GetZaxis()->SetLabelFont(42);
   Graph_Graph2164->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2164->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2164->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2164->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2164->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2164);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx165[16] = { 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 20, 30, 40, 50, 60, 70, 80, 90 };
   Double_t Graph0_fy165[16] = { 6.914062, 5.519727, 4.955078, 4.229102, 4.183008, 4.079297, 4.067773, 4.033203, 5.485156, 7.052344, 8.85, 10.41719, 12.03047, 13.82812, 16.31719, 17.7 };
   graph = new TGraph(16,Graph0_fx165,Graph0_fy165);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0165 = new TH1F("Graph_Graph0165","",100,0,98.9);
   Graph_Graph0165->SetMinimum(0.2);
   Graph_Graph0165->SetMaximum(100000);
   Graph_Graph0165->SetDirectory(nullptr);
   Graph_Graph0165->SetStats(0);
   Graph_Graph0165->SetLineWidth(2);
   Graph_Graph0165->SetMarkerStyle(20);
   Graph_Graph0165->SetMarkerSize(0.9);
   Graph_Graph0165->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0165->GetXaxis()->SetRange(2,101);
   Graph_Graph0165->GetXaxis()->SetLabelFont(42);
   Graph_Graph0165->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0165->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0165->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0165->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0165->GetXaxis()->SetTitleFont(42);
   Graph_Graph0165->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0165->GetYaxis()->SetLabelFont(42);
   Graph_Graph0165->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0165->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0165->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0165->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0165->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0165->GetYaxis()->SetTitleFont(42);
   Graph_Graph0165->GetZaxis()->SetLabelFont(42);
   Graph_Graph0165->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0165->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0165->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0165->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0165->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0165);
   
   graph->Draw("l");
   
   Double_t Graph_fx166[16] = { 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 20, 30, 40, 50, 60, 70, 80, 90 };
   Double_t Graph_fy166[16] = { 0.0003392874, 0.07336967, 0.9588659, 4.17842, 10.6397, 20.06472, 31.4953, 43.86712, 118.7582, 90.96987, 70.7511, 56.719, 46.71613, 39.34048, 33.7328, 29.35624 };
   graph = new TGraph(16,Graph_fx166,Graph_fy166);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph166 = new TH1F("Graph_Graph166","",100,0,98.9);
   Graph_Graph166->SetMinimum(0.0003053586);
   Graph_Graph166->SetMaximum(130.634);
   Graph_Graph166->SetDirectory(nullptr);
   Graph_Graph166->SetStats(0);
   Graph_Graph166->SetLineWidth(2);
   Graph_Graph166->SetMarkerStyle(20);
   Graph_Graph166->SetMarkerSize(0.9);
   Graph_Graph166->GetXaxis()->SetLabelFont(42);
   Graph_Graph166->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph166->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph166->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph166->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph166->GetXaxis()->SetTitleFont(42);
   Graph_Graph166->GetYaxis()->SetLabelFont(42);
   Graph_Graph166->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph166->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph166->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph166->GetYaxis()->SetTickLength(0.02);
   Graph_Graph166->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph166->GetYaxis()->SetTitleFont(42);
   Graph_Graph166->GetZaxis()->SetLabelFont(42);
   Graph_Graph166->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph166->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph166->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph166->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph166->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph166);
   
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
   
   Double_t Graph_fx168[16] = { 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 20, 30, 40, 50, 60, 70, 80, 90 };
   Double_t Graph_fy168[16] = { 0.0003732161, 0.08070664, 1.054753, 4.596262, 11.70367, 22.07119, 34.64482, 48.25384, 130.634, 100.0669, 77.82621, 62.3909, 51.38775, 43.27452, 37.10608, 32.29187 };
   graph = new TGraph(16,Graph_fx168,Graph_fy168);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph168 = new TH1F("Graph_Graph168","",100,0,98.9);
   Graph_Graph168->SetMinimum(0.0003358945);
   Graph_Graph168->SetMaximum(143.6974);
   Graph_Graph168->SetDirectory(nullptr);
   Graph_Graph168->SetStats(0);
   Graph_Graph168->SetLineWidth(2);
   Graph_Graph168->SetMarkerStyle(20);
   Graph_Graph168->SetMarkerSize(0.9);
   Graph_Graph168->GetXaxis()->SetLabelFont(42);
   Graph_Graph168->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph168->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph168->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph168->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph168->GetXaxis()->SetTitleFont(42);
   Graph_Graph168->GetYaxis()->SetLabelFont(42);
   Graph_Graph168->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph168->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph168->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph168->GetYaxis()->SetTickLength(0.02);
   Graph_Graph168->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph168->GetYaxis()->SetTitleFont(42);
   Graph_Graph168->GetZaxis()->SetLabelFont(42);
   Graph_Graph168->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph168->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph168->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph168->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph168->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph168);
   
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
   line = new TLine(2.506375,0,2.506375,4.228511);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(2.501375,0,"  2.51 TeV");

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
   TText *pt_LaTex = pt->AddText("#varepsilon = 5.4e-08");
   pt_LaTex = pt->AddText("#alpha_{#chi} = 0.245");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
