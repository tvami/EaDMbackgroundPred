#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_depth_e6_17mnthNorm_rate_1.44e-07()
{
//=========Macro generated from canvas: climits/climits
//=========  (Wed Mar 11 02:53:53 2026) by ROOT version 6.30/07
   TCanvas *climits = new TCanvas("climits", "climits",0,0,700,600);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   climits->SetHighLightColor(2);
   climits->Range(-34.10325,-1.838764,193.2517,5.759863);
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
   
   Double_t Graph0_fx225[17] = { 3, 4, 5, 6, 7, 8, 9, 10, 20, 40, 60, 80, 100, 120, 140, 160, 180 };
   Double_t Graph0_fy225[17] = { 145989.6, 55.77344, 18.39141, 16.77812, 12.12266, 13.45938, 9.195703, 7.74375, 3.099805, 1.820703, 1.935938, 2.166406, 2.454492, 2.742578, 2.996094, 3.249609, 3.583789 };
   TGraph *graph = new TGraph(17,Graph0_fx225,Graph0_fy225);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0225 = new TH1F("Graph_Graph0225","",100,0,197.7);
   Graph_Graph0225->SetMinimum(0.2);
   Graph_Graph0225->SetMaximum(100000);
   Graph_Graph0225->SetDirectory(nullptr);
   Graph_Graph0225->SetStats(0);
   Graph_Graph0225->SetLineWidth(2);
   Graph_Graph0225->SetMarkerStyle(20);
   Graph_Graph0225->SetMarkerSize(0.9);
   Graph_Graph0225->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0225->GetXaxis()->SetRange(1,92);
   Graph_Graph0225->GetXaxis()->SetLabelFont(42);
   Graph_Graph0225->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0225->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0225->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0225->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0225->GetXaxis()->SetTitleFont(42);
   Graph_Graph0225->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0225->GetYaxis()->SetLabelFont(42);
   Graph_Graph0225->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0225->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0225->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0225->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0225->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0225->GetYaxis()->SetTitleFont(42);
   Graph_Graph0225->GetZaxis()->SetLabelFont(42);
   Graph_Graph0225->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0225->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0225->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0225->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0225->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0225);
   
   graph->Draw("al");
   
   Double_t Graph1_fx226[36] = { 3, 4, 5, 6, 7, 8, 9, 10, 20, 40, 60, 80, 100, 120, 140, 160, 180,
   180, 180, 180, 160, 140, 120, 100, 80, 60, 40, 20, 10, 9, 8, 7, 6,
   5, 4, 3 };
   Double_t Graph1_fy226[36] = { 218121.6, 77.40256, 35.87902, 31.73026, 24.03615, 25.22691, 19.13178, 17.07189, 8.359387, 5.536463, 5.886888, 6.587708, 7.463733, 8.339758, 9.11066, 9.881562, 10.89775,
   10.89775, 0.9799423, 0.9799423, 0.8885651, 0.8309479, 0.7606369, 0.6903259, 0.6093018, 0.5520447, 0.526297, 1.331947, 3.841626, 4.669693, 7.465747, 6.582224, 9.437695,
   9.770435, 45.31592, 50183.93 };
   graph = new TGraph(36,Graph1_fx226,Graph1_fy226);
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
   
   TH1F *Graph_Graph1226 = new TH1F("Graph_Graph1226","Graph",100,0,197.7);
   Graph_Graph1226->SetMinimum(0.4736673);
   Graph_Graph1226->SetMaximum(239933.8);
   Graph_Graph1226->SetDirectory(nullptr);
   Graph_Graph1226->SetStats(0);
   Graph_Graph1226->SetLineWidth(2);
   Graph_Graph1226->SetMarkerStyle(20);
   Graph_Graph1226->SetMarkerSize(0.9);
   Graph_Graph1226->GetXaxis()->SetLabelFont(42);
   Graph_Graph1226->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1226->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1226->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1226->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1226->GetXaxis()->SetTitleFont(42);
   Graph_Graph1226->GetYaxis()->SetLabelFont(42);
   Graph_Graph1226->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1226->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1226->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1226->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1226->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1226->GetYaxis()->SetTitleFont(42);
   Graph_Graph1226->GetZaxis()->SetLabelFont(42);
   Graph_Graph1226->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1226->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1226->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1226->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1226->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1226);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx227[36] = { 3, 4, 5, 6, 7, 8, 9, 10, 20, 40, 60, 80, 100, 120, 140, 160, 180,
   180, 180, 180, 160, 140, 120, 100, 80, 60, 40, 20, 10, 9, 8, 7, 6,
   5, 4, 3 };
   Double_t Graph2_fy227[36] = { 182359.7, 65.22184, 26.08884, 23.43252, 17.31721, 18.69022, 13.44762, 11.66385, 5.225029, 3.627796, 3.909491, 4.377049, 4.959103, 5.541158, 6.053365, 6.565573, 7.240756,
   7.240756, 1.793644, 1.793644, 1.626391, 1.507556, 1.379994, 1.241628, 1.095897, 0.9845112, 0.9307989, 1.939648, 5.304922, 6.366947, 9.807008, 8.746455, 12.2477,
   13.07065, 49.40089, 88356.5 };
   graph = new TGraph(36,Graph2_fx227,Graph2_fy227);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2227 = new TH1F("Graph_Graph2227","Graph",100,0,197.7);
   Graph_Graph2227->SetMinimum(0.837719);
   Graph_Graph2227->SetMaximum(200595.5);
   Graph_Graph2227->SetDirectory(nullptr);
   Graph_Graph2227->SetStats(0);
   Graph_Graph2227->SetLineWidth(2);
   Graph_Graph2227->SetMarkerStyle(20);
   Graph_Graph2227->SetMarkerSize(0.9);
   Graph_Graph2227->GetXaxis()->SetLabelFont(42);
   Graph_Graph2227->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2227->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2227->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2227->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2227->GetXaxis()->SetTitleFont(42);
   Graph_Graph2227->GetYaxis()->SetLabelFont(42);
   Graph_Graph2227->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2227->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2227->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2227->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2227->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2227->GetYaxis()->SetTitleFont(42);
   Graph_Graph2227->GetZaxis()->SetLabelFont(42);
   Graph_Graph2227->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2227->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2227->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2227->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2227->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2227);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx228[17] = { 3, 4, 5, 6, 7, 8, 9, 10, 20, 40, 60, 80, 100, 120, 140, 160, 180 };
   Double_t Graph0_fy228[17] = { 145989.6, 55.77344, 18.39141, 16.77812, 12.12266, 13.45938, 9.195703, 7.74375, 3.099805, 1.820703, 1.935938, 2.166406, 2.454492, 2.742578, 2.996094, 3.249609, 3.583789 };
   graph = new TGraph(17,Graph0_fx228,Graph0_fy228);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0228 = new TH1F("Graph_Graph0228","",100,0,197.7);
   Graph_Graph0228->SetMinimum(0.2);
   Graph_Graph0228->SetMaximum(100000);
   Graph_Graph0228->SetDirectory(nullptr);
   Graph_Graph0228->SetStats(0);
   Graph_Graph0228->SetLineWidth(2);
   Graph_Graph0228->SetMarkerStyle(20);
   Graph_Graph0228->SetMarkerSize(0.9);
   Graph_Graph0228->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0228->GetXaxis()->SetRange(1,92);
   Graph_Graph0228->GetXaxis()->SetLabelFont(42);
   Graph_Graph0228->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0228->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0228->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0228->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0228->GetXaxis()->SetTitleFont(42);
   Graph_Graph0228->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0228->GetYaxis()->SetLabelFont(42);
   Graph_Graph0228->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0228->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0228->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0228->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0228->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0228->GetYaxis()->SetTitleFont(42);
   Graph_Graph0228->GetZaxis()->SetLabelFont(42);
   Graph_Graph0228->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0228->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0228->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0228->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0228->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0228);
   
   graph->Draw("l");
   
   Double_t Graph_fx229[17] = { 3, 4, 5, 6, 7, 8, 9, 10, 20, 40, 60, 80, 100, 120, 140, 160, 180 };
   Double_t Graph_fy229[17] = { 1.085652e-31, 1.084817e-22, 2.539018e-17, 9.203502e-14, 3.103587e-11, 2.382221e-09, 6.835649e-08, 9.869549e-07, 0.1202027, 25.91259, 121.9235, 235.0143, 324.7823, 384.5911, 419.7515, 437.1901, 442.6023 };
   graph = new TGraph(17,Graph_fx229,Graph_fy229);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph229 = new TH1F("Graph_Graph229","",100,0,197.7);
   Graph_Graph229->SetMinimum(9.770868e-32);
   Graph_Graph229->SetMaximum(486.8625);
   Graph_Graph229->SetDirectory(nullptr);
   Graph_Graph229->SetStats(0);
   Graph_Graph229->SetLineWidth(2);
   Graph_Graph229->SetMarkerStyle(20);
   Graph_Graph229->SetMarkerSize(0.9);
   Graph_Graph229->GetXaxis()->SetLabelFont(42);
   Graph_Graph229->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph229->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph229->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph229->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph229->GetXaxis()->SetTitleFont(42);
   Graph_Graph229->GetYaxis()->SetLabelFont(42);
   Graph_Graph229->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph229->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph229->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph229->GetYaxis()->SetTickLength(0.02);
   Graph_Graph229->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph229->GetYaxis()->SetTitleFont(42);
   Graph_Graph229->GetZaxis()->SetLabelFont(42);
   Graph_Graph229->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph229->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph229->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph229->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph229->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph229);
   
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
   
   Double_t Graph_fx231[17] = { 3, 4, 5, 6, 7, 8, 9, 10, 20, 40, 60, 80, 100, 120, 140, 160, 180 };
   Double_t Graph_fy231[17] = { 1.194217e-31, 1.193299e-22, 2.79292e-17, 1.012385e-13, 3.413946e-11, 2.620443e-09, 7.519214e-08, 1.08565e-06, 0.132223, 28.50385, 134.1158, 258.5157, 357.2606, 423.0502, 461.7267, 480.9091, 486.8625 };
   graph = new TGraph(17,Graph_fx231,Graph_fy231);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph231 = new TH1F("Graph_Graph231","",100,0,197.7);
   Graph_Graph231->SetMinimum(1.074795e-31);
   Graph_Graph231->SetMaximum(535.5488);
   Graph_Graph231->SetDirectory(nullptr);
   Graph_Graph231->SetStats(0);
   Graph_Graph231->SetLineWidth(2);
   Graph_Graph231->SetMarkerStyle(20);
   Graph_Graph231->SetMarkerSize(0.9);
   Graph_Graph231->GetXaxis()->SetLabelFont(42);
   Graph_Graph231->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph231->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph231->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph231->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph231->GetXaxis()->SetTitleFont(42);
   Graph_Graph231->GetYaxis()->SetLabelFont(42);
   Graph_Graph231->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph231->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph231->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph231->GetYaxis()->SetTickLength(0.02);
   Graph_Graph231->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph231->GetYaxis()->SetTitleFont(42);
   Graph_Graph231->GetZaxis()->SetLabelFont(42);
   Graph_Graph231->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph231->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph231->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph231->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph231->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph231);
   
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
   line = new TLine(31.00655,0,31.00655,2.312897);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(31.00155,0,"  31.01 TeV");

   ci = TColor::GetColor("#666666");
   tex->SetTextColor(ci);
   tex->SetTextFont(43);
   tex->SetTextSize(14);
   tex->SetTextAngle(90);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TH1F *Graph_copy = new TH1F("Graph_copy","",100,0,197.7);
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
   pt_LaTex = pt->AddText("#varepsilon = 1.44e-07");
   pt_LaTex = pt->AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
