#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_depth_e5_17mnthNorm_rate_1.24e-07()
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
   
   Double_t Graph0_fx211[16] = { 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 20, 30, 40, 50, 60, 70, 80, 90 };
   Double_t Graph0_fy211[16] = { 6.914062, 5.519727, 4.955078, 4.229102, 4.183008, 4.079297, 4.067773, 4.033203, 5.485156, 7.052344, 8.85, 10.41719, 12.03047, 13.82812, 16.31719, 17.7 };
   TGraph *graph = new TGraph(16,Graph0_fx211,Graph0_fy211);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0211 = new TH1F("Graph_Graph0211","",100,0,98.9);
   Graph_Graph0211->SetMinimum(0.2);
   Graph_Graph0211->SetMaximum(100000);
   Graph_Graph0211->SetDirectory(nullptr);
   Graph_Graph0211->SetStats(0);
   Graph_Graph0211->SetLineWidth(2);
   Graph_Graph0211->SetMarkerStyle(20);
   Graph_Graph0211->SetMarkerSize(0.9);
   Graph_Graph0211->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0211->GetXaxis()->SetRange(2,101);
   Graph_Graph0211->GetXaxis()->SetLabelFont(42);
   Graph_Graph0211->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0211->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0211->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0211->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0211->GetXaxis()->SetTitleFont(42);
   Graph_Graph0211->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0211->GetYaxis()->SetLabelFont(42);
   Graph_Graph0211->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0211->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0211->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0211->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0211->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0211->GetYaxis()->SetTitleFont(42);
   Graph_Graph0211->GetZaxis()->SetLabelFont(42);
   Graph_Graph0211->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0211->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0211->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0211->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0211->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0211);
   
   graph->Draw("al");
   
   Double_t Graph1_fx212[34] = { 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 20, 30, 40, 50, 60, 70, 80, 90, 90,
   90, 90, 80, 70, 60, 50, 40, 30, 20, 4.5, 4, 3.5, 3, 2.5, 2, 1.5,
   1 };
   Double_t Graph1_fy212[34] = { 14.91576, 12.75073, 11.69612, 10.73249, 10.59214, 10.87939, 10.89486, 11.01324, 16.67951, 21.44508, 26.91148, 31.67705, 36.58279, 42.04918, 49.61804, 53.82296, 53.82296,
   6.360938, 6.360938, 5.863989, 4.969482, 4.32345, 3.743677, 3.215039, 2.561984, 2.014081, 1.717262, 1.779651, 1.784692, 1.895425, 1.916312, 2.38076, 2.652056,
   3.511047 };
   graph = new TGraph(34,Graph1_fx212,Graph1_fy212);
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
   
   TH1F *Graph_Graph1212 = new TH1F("Graph_Graph1212","Graph",100,0,98.9);
   Graph_Graph1212->SetMinimum(1.545536);
   Graph_Graph1212->SetMaximum(59.03352);
   Graph_Graph1212->SetDirectory(nullptr);
   Graph_Graph1212->SetStats(0);
   Graph_Graph1212->SetLineWidth(2);
   Graph_Graph1212->SetMarkerStyle(20);
   Graph_Graph1212->SetMarkerSize(0.9);
   Graph_Graph1212->GetXaxis()->SetLabelFont(42);
   Graph_Graph1212->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1212->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1212->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1212->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1212->GetXaxis()->SetTitleFont(42);
   Graph_Graph1212->GetYaxis()->SetLabelFont(42);
   Graph_Graph1212->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1212->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1212->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1212->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1212->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1212->GetYaxis()->SetTitleFont(42);
   Graph_Graph1212->GetZaxis()->SetLabelFont(42);
   Graph_Graph1212->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1212->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1212->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1212->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1212->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1212);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx213[34] = { 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 20, 30, 40, 50, 60, 70, 80, 90, 90,
   90, 90, 80, 70, 60, 50, 40, 30, 20, 4.5, 4, 3.5, 3, 2.5, 2, 1.5,
   1 };
   Double_t Graph2_fy213[34] = { 10.27635, 8.489978, 7.690613, 6.808281, 6.734076, 6.745978, 6.735029, 6.742097, 10.05475, 13.01186, 16.39917, 19.38623, 22.38853, 25.84418, 30.36604, 33.22165, 33.22165,
   9.992981, 9.992981, 9.293945, 7.84162, 6.852315, 5.933422, 5.064011, 4.035383, 3.180145, 2.513367, 2.566193, 2.591389, 2.717525, 2.729402, 3.326018, 3.705029,
   4.760592 };
   graph = new TGraph(34,Graph2_fx213,Graph2_fy213);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2213 = new TH1F("Graph_Graph2213","Graph",100,0,98.9);
   Graph_Graph2213->SetMinimum(2.26203);
   Graph_Graph2213->SetMaximum(36.29248);
   Graph_Graph2213->SetDirectory(nullptr);
   Graph_Graph2213->SetStats(0);
   Graph_Graph2213->SetLineWidth(2);
   Graph_Graph2213->SetMarkerStyle(20);
   Graph_Graph2213->SetMarkerSize(0.9);
   Graph_Graph2213->GetXaxis()->SetLabelFont(42);
   Graph_Graph2213->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2213->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2213->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2213->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2213->GetXaxis()->SetTitleFont(42);
   Graph_Graph2213->GetYaxis()->SetLabelFont(42);
   Graph_Graph2213->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2213->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2213->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2213->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2213->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2213->GetYaxis()->SetTitleFont(42);
   Graph_Graph2213->GetZaxis()->SetLabelFont(42);
   Graph_Graph2213->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2213->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2213->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2213->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2213->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2213);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx214[16] = { 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 20, 30, 40, 50, 60, 70, 80, 90 };
   Double_t Graph0_fy214[16] = { 6.914062, 5.519727, 4.955078, 4.229102, 4.183008, 4.079297, 4.067773, 4.033203, 5.485156, 7.052344, 8.85, 10.41719, 12.03047, 13.82812, 16.31719, 17.7 };
   graph = new TGraph(16,Graph0_fx214,Graph0_fy214);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0214 = new TH1F("Graph_Graph0214","",100,0,98.9);
   Graph_Graph0214->SetMinimum(0.2);
   Graph_Graph0214->SetMaximum(100000);
   Graph_Graph0214->SetDirectory(nullptr);
   Graph_Graph0214->SetStats(0);
   Graph_Graph0214->SetLineWidth(2);
   Graph_Graph0214->SetMarkerStyle(20);
   Graph_Graph0214->SetMarkerSize(0.9);
   Graph_Graph0214->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0214->GetXaxis()->SetRange(2,101);
   Graph_Graph0214->GetXaxis()->SetLabelFont(42);
   Graph_Graph0214->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0214->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0214->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0214->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0214->GetXaxis()->SetTitleFont(42);
   Graph_Graph0214->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0214->GetYaxis()->SetLabelFont(42);
   Graph_Graph0214->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0214->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0214->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0214->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0214->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0214->GetYaxis()->SetTitleFont(42);
   Graph_Graph0214->GetZaxis()->SetLabelFont(42);
   Graph_Graph0214->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0214->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0214->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0214->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0214->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0214);
   
   graph->Draw("l");
   
   Double_t Graph_fx215[16] = { 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 20, 30, 40, 50, 60, 70, 80, 90 };
   Double_t Graph_fy215[16] = { 7.969938e-36, 1.823103e-22, 7.749192e-16, 6.852249e-12, 2.796611e-09, 1.981761e-07, 4.72118e-06, 5.453116e-05, 73.30169, 199.7875, 293.0989, 343.8553, 365.0549, 368.5332, 362.0335, 350.2127 };
   graph = new TGraph(16,Graph_fx215,Graph_fy215);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph215 = new TH1F("Graph_Graph215","",100,0,98.9);
   Graph_Graph215->SetMinimum(7.172944e-36);
   Graph_Graph215->SetMaximum(405.3865);
   Graph_Graph215->SetDirectory(nullptr);
   Graph_Graph215->SetStats(0);
   Graph_Graph215->SetLineWidth(2);
   Graph_Graph215->SetMarkerStyle(20);
   Graph_Graph215->SetMarkerSize(0.9);
   Graph_Graph215->GetXaxis()->SetLabelFont(42);
   Graph_Graph215->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph215->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph215->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph215->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph215->GetXaxis()->SetTitleFont(42);
   Graph_Graph215->GetYaxis()->SetLabelFont(42);
   Graph_Graph215->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph215->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph215->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph215->GetYaxis()->SetTickLength(0.02);
   Graph_Graph215->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph215->GetYaxis()->SetTitleFont(42);
   Graph_Graph215->GetZaxis()->SetLabelFont(42);
   Graph_Graph215->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph215->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph215->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph215->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph215->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph215);
   
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
   
   Double_t Graph_fx217[16] = { 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 20, 30, 40, 50, 60, 70, 80, 90 };
   Double_t Graph_fy217[16] = { 8.766932e-36, 2.005413e-22, 8.524111e-16, 7.537474e-12, 3.076272e-09, 2.179937e-07, 5.193298e-06, 5.998428e-05, 80.63186, 219.7663, 322.4088, 378.2408, 401.5603, 405.3865, 398.2368, 385.2339 };
   graph = new TGraph(16,Graph_fx217,Graph_fy217);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph217 = new TH1F("Graph_Graph217","",100,0,98.9);
   Graph_Graph217->SetMinimum(7.890239e-36);
   Graph_Graph217->SetMaximum(445.9252);
   Graph_Graph217->SetDirectory(nullptr);
   Graph_Graph217->SetStats(0);
   Graph_Graph217->SetLineWidth(2);
   Graph_Graph217->SetMarkerStyle(20);
   Graph_Graph217->SetMarkerSize(0.9);
   Graph_Graph217->GetXaxis()->SetLabelFont(42);
   Graph_Graph217->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph217->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph217->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph217->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph217->GetXaxis()->SetTitleFont(42);
   Graph_Graph217->GetYaxis()->SetLabelFont(42);
   Graph_Graph217->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph217->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph217->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph217->GetYaxis()->SetTickLength(0.02);
   Graph_Graph217->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph217->GetYaxis()->SetTitleFont(42);
   Graph_Graph217->GetZaxis()->SetLabelFont(42);
   Graph_Graph217->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph217->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph217->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph217->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph217->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph217);
   
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
   line = new TLine(17.0889,0,17.0889,5.177364);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(17.0839,0,"  17.09 TeV");

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
   TText *pt_LaTex = pt->AddText("#varepsilon = 1.24e-07");
   pt_LaTex = pt->AddText("#alpha_{#chi} = 0.245");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
