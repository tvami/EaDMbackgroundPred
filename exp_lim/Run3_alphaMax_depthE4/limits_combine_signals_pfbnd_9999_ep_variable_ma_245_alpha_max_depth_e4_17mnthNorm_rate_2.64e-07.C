#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_depth_e4_17mnthNorm_rate_2.64e-07()
{
//=========Macro generated from canvas: climits/climits
//=========  (Wed Mar 11 02:52:38 2026) by ROOT version 6.30/07
   TCanvas *climits = new TCanvas("climits", "climits",0,0,700,600);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   climits->SetHighLightColor(2);
   climits->Range(-34.1205,-1.838764,193.3495,5.759863);
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
   
   Double_t Graph0_fx309[18] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 40, 60, 80, 100, 120, 140, 160,
   180 };
   Double_t Graph0_fy309[18] = { 9.933203, 7.375, 7.121484, 4.436523, 3.629883, 3.030664, 2.754102, 2.719531, 2.811719, 3.595313, 5.485156, 7.00625, 8.988281, 11.01641, 11.75391, 14.56563, 17.51562,
   19.175 };
   TGraph *graph = new TGraph(18,Graph0_fx309,Graph0_fy309);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0309 = new TH1F("Graph_Graph0309","",100,0,197.8);
   Graph_Graph0309->SetMinimum(0.2);
   Graph_Graph0309->SetMaximum(100000);
   Graph_Graph0309->SetDirectory(nullptr);
   Graph_Graph0309->SetStats(0);
   Graph_Graph0309->SetLineWidth(2);
   Graph_Graph0309->SetMarkerStyle(20);
   Graph_Graph0309->SetMarkerSize(0.9);
   Graph_Graph0309->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0309->GetXaxis()->SetRange(1,92);
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
   
   Double_t Graph1_fx310[38] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 40, 60, 80, 100, 120, 140, 160,
   180, 180, 180, 180, 160, 140, 120, 100, 80, 60, 40, 20, 10, 9, 8, 7,
   6, 5, 4, 3, 2 };
   Double_t Graph1_fy310[38] = { 22.68253, 17.88353, 16.02638, 12.53069, 11.03791, 9.215782, 8.374799, 8.269676, 8.550004, 10.93279, 16.67952, 21.30493, 27.33198, 33.4992, 35.74182, 44.29183, 53.26232,
   58.30822, 58.30822, 5.168262, 5.168262, 4.789429, 3.982788, 3.213959, 3.012299, 2.457733, 1.94314, 1.521274, 1.011182, 0.7907959, 0.7648682, 0.7853493, 0.8760513,
   1.29031, 1.99297, 3.950198, 3.457031, 4.850197 };
   graph = new TGraph(38,Graph1_fx310,Graph1_fy310);
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
   
   TH1F *Graph_Graph1310 = new TH1F("Graph_Graph1310","Graph",100,0,197.8);
   Graph_Graph1310->SetMinimum(0.6883813);
   Graph_Graph1310->SetMaximum(64.06256);
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
   
   Double_t Graph2_fx311[38] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 40, 60, 80, 100, 120, 140, 160,
   180, 180, 180, 180, 160, 140, 120, 100, 80, 60, 40, 20, 10, 9, 8, 7,
   6, 5, 4, 3, 2 };
   Double_t Graph2_fy311[38] = { 15.15963, 11.60818, 10.61303, 7.495885, 6.509188, 5.929949, 5.542505, 5.494593, 5.68085, 7.264038, 11.08232, 14.15556, 18.1601, 22.25776, 23.74782, 29.42867, 35.3889,
   38.74154, 38.74154, 9.43594, 9.43594, 8.666942, 7.207246, 5.815974, 5.45105, 4.44751, 3.485806, 2.759987, 1.808628, 1.422334, 1.3757, 1.400584, 1.566201,
   2.112816, 2.832941, 5.089879, 4.865051, 6.716613 };
   graph = new TGraph(38,Graph2_fx311,Graph2_fy311);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2311 = new TH1F("Graph_Graph2311","Graph",100,0,197.8);
   Graph_Graph2311->SetMinimum(1.23813);
   Graph_Graph2311->SetMaximum(42.47812);
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
   
   Double_t Graph0_fx312[18] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 40, 60, 80, 100, 120, 140, 160,
   180 };
   Double_t Graph0_fy312[18] = { 9.933203, 7.375, 7.121484, 4.436523, 3.629883, 3.030664, 2.754102, 2.719531, 2.811719, 3.595313, 5.485156, 7.00625, 8.988281, 11.01641, 11.75391, 14.56563, 17.51562,
   19.175 };
   graph = new TGraph(18,Graph0_fx312,Graph0_fy312);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0312 = new TH1F("Graph_Graph0312","",100,0,197.8);
   Graph_Graph0312->SetMinimum(0.2);
   Graph_Graph0312->SetMaximum(100000);
   Graph_Graph0312->SetDirectory(nullptr);
   Graph_Graph0312->SetStats(0);
   Graph_Graph0312->SetLineWidth(2);
   Graph_Graph0312->SetMarkerStyle(20);
   Graph_Graph0312->SetMarkerSize(0.9);
   Graph_Graph0312->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0312->GetXaxis()->SetRange(1,92);
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
   
   Double_t Graph_fx313[18] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 40, 60, 80, 100, 120, 140, 160,
   180 };
   Double_t Graph_fy313[18] = { 1.07115e-178, 2.822499e-117, 1.287654e-86, 2.984078e-68, 4.987689e-56, 2.595617e-47, 8.723317e-41, 1.019524e-35, 1.137233e-31, 1.371427e-13, 9.302991e-05, 0.06414316, 1.496694, 9.234567, 29.64924, 65.98243, 117.2661,
   179.892 };
   graph = new TGraph(18,Graph_fx313,Graph_fy313);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph313 = new TH1F("Graph_Graph313","",100,0,197.8);
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
   
   Double_t Graph_fx315[18] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 40, 60, 80, 100, 120, 140, 160,
   180 };
   Double_t Graph_fy315[18] = { 1.178265e-178, 3.104749e-117, 1.41642e-86, 3.282485e-68, 5.486458e-56, 2.855178e-47, 9.595649e-41, 1.121476e-35, 1.250956e-31, 1.508569e-13, 0.0001023329, 0.07055748, 1.646363, 10.15802, 32.61417, 72.58067, 128.9927,
   197.8812 };
   graph = new TGraph(18,Graph_fx315,Graph_fy315);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph315 = new TH1F("Graph_Graph315","",100,0,197.8);
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
   line = new TLine(103.203,0,103.203,11.13133);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(103.198,0,"  103.20 TeV");

   ci = TColor::GetColor("#666666");
   tex->SetTextColor(ci);
   tex->SetTextFont(43);
   tex->SetTextSize(14);
   tex->SetTextAngle(90);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TH1F *Graph_copy = new TH1F("Graph_copy","",100,0,197.8);
   Graph_copy->SetMinimum(1e-06);
   Graph_copy->SetMaximum(1000);
   Graph_copy->SetDirectory(nullptr);
   Graph_copy->SetStats(0);
   Graph_copy->SetLineWidth(2);
   Graph_copy->SetMarkerStyle(20);
   Graph_copy->SetMarkerSize(0.9);
   Graph_copy->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_copy->GetXaxis()->SetRange(1,92);
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
      tex = new TLatex(0.4325,0.95,"Data Private Work");
   tex->SetNDC();
   tex->SetTextAlign(23);
   tex->SetTextFont(52);
   tex->SetTextSize(0.0448);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TPaveText *pt = new TPaveText(0.2,0.68,0.43,0.88,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextAlign(12);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("m_{A'} = 0.245 GeV");
   pt_LaTex = pt->AddText("#varepsilon = 2.64e-07");
   pt_LaTex = pt->AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
