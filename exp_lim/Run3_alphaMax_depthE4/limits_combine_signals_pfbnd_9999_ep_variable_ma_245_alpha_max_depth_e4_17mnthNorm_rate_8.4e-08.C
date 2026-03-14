#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_depth_e4_17mnthNorm_rate_8.4e-08()
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
   
   Double_t Graph0_fx183[18] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 40, 60, 80, 100, 120, 140, 160,
   180 };
   Double_t Graph0_fy183[18] = { 9.933203, 7.375, 7.121484, 4.436523, 3.629883, 3.030664, 2.754102, 2.719531, 2.811719, 3.595313, 5.485156, 7.00625, 8.988281, 11.01641, 11.75391, 14.56563, 17.51562,
   19.175 };
   TGraph *graph = new TGraph(18,Graph0_fx183,Graph0_fy183);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0183 = new TH1F("Graph_Graph0183","",100,0,197.8);
   Graph_Graph0183->SetMinimum(0.2);
   Graph_Graph0183->SetMaximum(100000);
   Graph_Graph0183->SetDirectory(nullptr);
   Graph_Graph0183->SetStats(0);
   Graph_Graph0183->SetLineWidth(2);
   Graph_Graph0183->SetMarkerStyle(20);
   Graph_Graph0183->SetMarkerSize(0.9);
   Graph_Graph0183->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0183->GetXaxis()->SetRange(1,92);
   Graph_Graph0183->GetXaxis()->SetLabelFont(42);
   Graph_Graph0183->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0183->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0183->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0183->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0183->GetXaxis()->SetTitleFont(42);
   Graph_Graph0183->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0183->GetYaxis()->SetLabelFont(42);
   Graph_Graph0183->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0183->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0183->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0183->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0183->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0183->GetYaxis()->SetTitleFont(42);
   Graph_Graph0183->GetZaxis()->SetLabelFont(42);
   Graph_Graph0183->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0183->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0183->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0183->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0183->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0183);
   
   graph->Draw("al");
   
   Double_t Graph1_fx184[38] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 40, 60, 80, 100, 120, 140, 160,
   180, 180, 180, 180, 160, 140, 120, 100, 80, 60, 40, 20, 10, 9, 8, 7,
   6, 5, 4, 3, 2 };
   Double_t Graph1_fy184[38] = { 22.68253, 17.88353, 16.02638, 12.53069, 11.03791, 9.215782, 8.374799, 8.269676, 8.550004, 10.93279, 16.67952, 21.30493, 27.33198, 33.4992, 35.74182, 44.29183, 53.26232,
   58.30822, 58.30822, 5.168262, 5.168262, 4.789429, 3.982788, 3.213959, 3.012299, 2.457733, 1.94314, 1.521274, 1.011182, 0.7907959, 0.7648682, 0.7853493, 0.8760513,
   1.29031, 1.99297, 3.950198, 3.457031, 4.850197 };
   graph = new TGraph(38,Graph1_fx184,Graph1_fy184);
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
   
   TH1F *Graph_Graph1184 = new TH1F("Graph_Graph1184","Graph",100,0,197.8);
   Graph_Graph1184->SetMinimum(0.6883813);
   Graph_Graph1184->SetMaximum(64.06256);
   Graph_Graph1184->SetDirectory(nullptr);
   Graph_Graph1184->SetStats(0);
   Graph_Graph1184->SetLineWidth(2);
   Graph_Graph1184->SetMarkerStyle(20);
   Graph_Graph1184->SetMarkerSize(0.9);
   Graph_Graph1184->GetXaxis()->SetLabelFont(42);
   Graph_Graph1184->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1184->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1184->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1184->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1184->GetXaxis()->SetTitleFont(42);
   Graph_Graph1184->GetYaxis()->SetLabelFont(42);
   Graph_Graph1184->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1184->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1184->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1184->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1184->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1184->GetYaxis()->SetTitleFont(42);
   Graph_Graph1184->GetZaxis()->SetLabelFont(42);
   Graph_Graph1184->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1184->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1184->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1184->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1184->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1184);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx185[38] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 40, 60, 80, 100, 120, 140, 160,
   180, 180, 180, 180, 160, 140, 120, 100, 80, 60, 40, 20, 10, 9, 8, 7,
   6, 5, 4, 3, 2 };
   Double_t Graph2_fy185[38] = { 15.15963, 11.60818, 10.61303, 7.495885, 6.509188, 5.929949, 5.542505, 5.494593, 5.68085, 7.264038, 11.08232, 14.15556, 18.1601, 22.25776, 23.74782, 29.42867, 35.3889,
   38.74154, 38.74154, 9.43594, 9.43594, 8.666942, 7.207246, 5.815974, 5.45105, 4.44751, 3.485806, 2.759987, 1.808628, 1.422334, 1.3757, 1.400584, 1.566201,
   2.112816, 2.832941, 5.089879, 4.865051, 6.716613 };
   graph = new TGraph(38,Graph2_fx185,Graph2_fy185);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2185 = new TH1F("Graph_Graph2185","Graph",100,0,197.8);
   Graph_Graph2185->SetMinimum(1.23813);
   Graph_Graph2185->SetMaximum(42.47812);
   Graph_Graph2185->SetDirectory(nullptr);
   Graph_Graph2185->SetStats(0);
   Graph_Graph2185->SetLineWidth(2);
   Graph_Graph2185->SetMarkerStyle(20);
   Graph_Graph2185->SetMarkerSize(0.9);
   Graph_Graph2185->GetXaxis()->SetLabelFont(42);
   Graph_Graph2185->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2185->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2185->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2185->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2185->GetXaxis()->SetTitleFont(42);
   Graph_Graph2185->GetYaxis()->SetLabelFont(42);
   Graph_Graph2185->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2185->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2185->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2185->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2185->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2185->GetYaxis()->SetTitleFont(42);
   Graph_Graph2185->GetZaxis()->SetLabelFont(42);
   Graph_Graph2185->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2185->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2185->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2185->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2185->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2185);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx186[18] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 40, 60, 80, 100, 120, 140, 160,
   180 };
   Double_t Graph0_fy186[18] = { 9.933203, 7.375, 7.121484, 4.436523, 3.629883, 3.030664, 2.754102, 2.719531, 2.811719, 3.595313, 5.485156, 7.00625, 8.988281, 11.01641, 11.75391, 14.56563, 17.51562,
   19.175 };
   graph = new TGraph(18,Graph0_fx186,Graph0_fy186);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0186 = new TH1F("Graph_Graph0186","",100,0,197.8);
   Graph_Graph0186->SetMinimum(0.2);
   Graph_Graph0186->SetMaximum(100000);
   Graph_Graph0186->SetDirectory(nullptr);
   Graph_Graph0186->SetStats(0);
   Graph_Graph0186->SetLineWidth(2);
   Graph_Graph0186->SetMarkerStyle(20);
   Graph_Graph0186->SetMarkerSize(0.9);
   Graph_Graph0186->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0186->GetXaxis()->SetRange(1,92);
   Graph_Graph0186->GetXaxis()->SetLabelFont(42);
   Graph_Graph0186->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0186->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0186->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0186->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0186->GetXaxis()->SetTitleFont(42);
   Graph_Graph0186->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0186->GetYaxis()->SetLabelFont(42);
   Graph_Graph0186->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0186->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0186->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0186->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0186->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0186->GetYaxis()->SetTitleFont(42);
   Graph_Graph0186->GetZaxis()->SetLabelFont(42);
   Graph_Graph0186->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0186->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0186->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0186->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0186->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0186);
   
   graph->Draw("l");
   
   Double_t Graph_fx187[18] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 40, 60, 80, 100, 120, 140, 160,
   180 };
   Double_t Graph_fy187[18] = { 2.037476e-14, 2.027902e-08, 1.798006e-05, 0.0009838913, 0.01353523, 0.08516394, 0.3300147, 0.9282764, 2.090604, 59.52992, 196.2253, 229.1601, 220.0644, 200.2121, 179.415, 160.4707, 143.9567,
   129.7605 };
   graph = new TGraph(18,Graph_fx187,Graph_fy187);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph187 = new TH1F("Graph_Graph187","",100,0,197.8);
   Graph_Graph187->SetMinimum(1.833728e-14);
   Graph_Graph187->SetMaximum(252.0761);
   Graph_Graph187->SetDirectory(nullptr);
   Graph_Graph187->SetStats(0);
   Graph_Graph187->SetLineWidth(2);
   Graph_Graph187->SetMarkerStyle(20);
   Graph_Graph187->SetMarkerSize(0.9);
   Graph_Graph187->GetXaxis()->SetLabelFont(42);
   Graph_Graph187->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph187->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph187->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph187->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph187->GetXaxis()->SetTitleFont(42);
   Graph_Graph187->GetYaxis()->SetLabelFont(42);
   Graph_Graph187->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph187->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph187->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph187->GetYaxis()->SetTickLength(0.02);
   Graph_Graph187->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph187->GetYaxis()->SetTitleFont(42);
   Graph_Graph187->GetZaxis()->SetLabelFont(42);
   Graph_Graph187->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph187->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph187->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph187->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph187->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph187);
   
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
   
   Double_t Graph_fx189[18] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 40, 60, 80, 100, 120, 140, 160,
   180 };
   Double_t Graph_fy189[18] = { 2.241223e-14, 2.230692e-08, 1.977807e-05, 0.00108228, 0.01488875, 0.09368033, 0.3630162, 1.021104, 2.299664, 65.48291, 215.8478, 252.0761, 242.0709, 220.2333, 197.3565, 176.5178, 158.3523,
   142.7365 };
   graph = new TGraph(18,Graph_fx189,Graph_fy189);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph189 = new TH1F("Graph_Graph189","",100,0,197.8);
   Graph_Graph189->SetMinimum(2.017101e-14);
   Graph_Graph189->SetMaximum(277.2838);
   Graph_Graph189->SetDirectory(nullptr);
   Graph_Graph189->SetStats(0);
   Graph_Graph189->SetLineWidth(2);
   Graph_Graph189->SetMarkerStyle(20);
   Graph_Graph189->SetMarkerSize(0.9);
   Graph_Graph189->GetXaxis()->SetLabelFont(42);
   Graph_Graph189->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph189->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph189->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph189->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph189->GetXaxis()->SetTitleFont(42);
   Graph_Graph189->GetYaxis()->SetLabelFont(42);
   Graph_Graph189->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph189->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph189->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph189->GetYaxis()->SetTickLength(0.02);
   Graph_Graph189->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph189->GetYaxis()->SetTitleFont(42);
   Graph_Graph189->GetZaxis()->SetLabelFont(42);
   Graph_Graph189->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph189->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph189->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph189->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph189->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph189);
   
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
   line = new TLine(10.95496,0,10.95496,2.878508);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(10.94996,0,"  10.95 TeV");

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
   pt_LaTex = pt->AddText("#varepsilon = 8.4e-08");
   pt_LaTex = pt->AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
