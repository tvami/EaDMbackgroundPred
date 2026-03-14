#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_depth_e5_17mnthNorm_rate_1.4e-08()
{
//=========Macro generated from canvas: climits/climits
//=========  (Wed Mar 11 02:53:18 2026) by ROOT version 6.30/07
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
   
   Double_t Graph0_fx71[18] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 40, 60, 80, 100, 120, 140, 160,
   180 };
   Double_t Graph0_fy71[18] = { 12.74492, 6.568359, 5.876953, 5.058789, 3.491602, 2.91543, 2.569727, 2.339258, 2.304688, 2.926953, 4.401953, 6.038281, 7.697656, 8.988281, 10.60156, 11.70781, 14.38125,
   14.84219 };
   TGraph *graph = new TGraph(18,Graph0_fx71,Graph0_fy71);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph071 = new TH1F("Graph_Graph071","",100,0,197.8);
   Graph_Graph071->SetMinimum(0.2);
   Graph_Graph071->SetMaximum(100000);
   Graph_Graph071->SetDirectory(nullptr);
   Graph_Graph071->SetStats(0);
   Graph_Graph071->SetLineWidth(2);
   Graph_Graph071->SetMarkerStyle(20);
   Graph_Graph071->SetMarkerSize(0.9);
   Graph_Graph071->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph071->GetXaxis()->SetRange(1,92);
   Graph_Graph071->GetXaxis()->SetLabelFont(42);
   Graph_Graph071->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph071->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph071->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph071->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph071->GetXaxis()->SetTitleFont(42);
   Graph_Graph071->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph071->GetYaxis()->SetLabelFont(42);
   Graph_Graph071->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph071->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph071->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph071->GetYaxis()->SetTickLength(0.02);
   Graph_Graph071->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph071->GetYaxis()->SetTitleFont(42);
   Graph_Graph071->GetZaxis()->SetLabelFont(42);
   Graph_Graph071->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph071->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph071->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph071->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph071->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph071);
   
   graph->Draw("al");
   
   Double_t Graph1_fx72[38] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 40, 60, 80, 100, 120, 140, 160,
   180, 180, 180, 180, 160, 140, 120, 100, 80, 60, 40, 20, 10, 9, 8, 7,
   6, 5, 4, 3, 2 };
   Double_t Graph1_fy72[38] = { 26.34408, 15.12826, 13.55915, 12.03635, 9.861819, 8.865368, 7.814141, 7.113323, 7.0082, 8.900414, 13.38566, 18.36148, 23.40739, 27.33198, 32.23772, 35.60166, 43.73117,
   45.13281, 45.13281, 4.058411, 4.058411, 3.932373, 3.201355, 2.898865, 2.492844, 2.104828, 1.651093, 1.238049, 0.8232056, 0.6481934, 0.667054, 0.7628876, 1.024956,
   1.541215, 2.529395, 1.469216, 3.207207, 6.621385 };
   graph = new TGraph(38,Graph1_fx72,Graph1_fy72);
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
   
   TH1F *Graph_Graph172 = new TH1F("Graph_Graph172","Graph",100,0,197.8);
   Graph_Graph172->SetMinimum(0.583374);
   Graph_Graph172->SetMaximum(49.58127);
   Graph_Graph172->SetDirectory(nullptr);
   Graph_Graph172->SetStats(0);
   Graph_Graph172->SetLineWidth(2);
   Graph_Graph172->SetMarkerStyle(20);
   Graph_Graph172->SetMarkerSize(0.9);
   Graph_Graph172->GetXaxis()->SetLabelFont(42);
   Graph_Graph172->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph172->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph172->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph172->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph172->GetXaxis()->SetTitleFont(42);
   Graph_Graph172->GetYaxis()->SetLabelFont(42);
   Graph_Graph172->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph172->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph172->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph172->GetYaxis()->SetTickLength(0.02);
   Graph_Graph172->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph172->GetYaxis()->SetTitleFont(42);
   Graph_Graph172->GetZaxis()->SetLabelFont(42);
   Graph_Graph172->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph172->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph172->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph172->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph172->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph172);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx73[38] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 40, 60, 80, 100, 120, 140, 160,
   180, 180, 180, 180, 160, 140, 120, 100, 80, 60, 40, 20, 10, 9, 8, 7,
   6, 5, 4, 3, 2 };
   Double_t Graph2_fy73[38] = { 18.48553, 10.05053, 8.969157, 7.801168, 5.899359, 5.239635, 4.956355, 4.670353, 4.63808, 5.913672, 8.89379, 12.19986, 15.55249, 18.1601, 21.4196, 23.65469, 29.05615,
   29.98744, 29.98744, 7.344093, 7.344093, 7.116015, 5.793166, 5.275869, 4.471922, 3.808893, 3.022089, 2.202051, 1.480627, 1.165848, 1.189618, 1.341641, 1.689575,
   2.21166, 3.438396, 3.1049, 4.44138, 9.013392 };
   graph = new TGraph(38,Graph2_fx73,Graph2_fy73);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph273 = new TH1F("Graph_Graph273","Graph",100,0,197.8);
   Graph_Graph273->SetMinimum(1.049263);
   Graph_Graph273->SetMaximum(32.8696);
   Graph_Graph273->SetDirectory(nullptr);
   Graph_Graph273->SetStats(0);
   Graph_Graph273->SetLineWidth(2);
   Graph_Graph273->SetMarkerStyle(20);
   Graph_Graph273->SetMarkerSize(0.9);
   Graph_Graph273->GetXaxis()->SetLabelFont(42);
   Graph_Graph273->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph273->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph273->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph273->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph273->GetXaxis()->SetTitleFont(42);
   Graph_Graph273->GetYaxis()->SetLabelFont(42);
   Graph_Graph273->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph273->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph273->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph273->GetYaxis()->SetTickLength(0.02);
   Graph_Graph273->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph273->GetYaxis()->SetTitleFont(42);
   Graph_Graph273->GetZaxis()->SetLabelFont(42);
   Graph_Graph273->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph273->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph273->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph273->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph273->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph273);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx74[18] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 40, 60, 80, 100, 120, 140, 160,
   180 };
   Double_t Graph0_fy74[18] = { 12.74492, 6.568359, 5.876953, 5.058789, 3.491602, 2.91543, 2.569727, 2.339258, 2.304688, 2.926953, 4.401953, 6.038281, 7.697656, 8.988281, 10.60156, 11.70781, 14.38125,
   14.84219 };
   graph = new TGraph(18,Graph0_fx74,Graph0_fy74);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph074 = new TH1F("Graph_Graph074","",100,0,197.8);
   Graph_Graph074->SetMinimum(0.2);
   Graph_Graph074->SetMaximum(100000);
   Graph_Graph074->SetDirectory(nullptr);
   Graph_Graph074->SetStats(0);
   Graph_Graph074->SetLineWidth(2);
   Graph_Graph074->SetMarkerStyle(20);
   Graph_Graph074->SetMarkerSize(0.9);
   Graph_Graph074->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph074->GetXaxis()->SetRange(1,92);
   Graph_Graph074->GetXaxis()->SetLabelFont(42);
   Graph_Graph074->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph074->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph074->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph074->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph074->GetXaxis()->SetTitleFont(42);
   Graph_Graph074->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph074->GetYaxis()->SetLabelFont(42);
   Graph_Graph074->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph074->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph074->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph074->GetYaxis()->SetTickLength(0.02);
   Graph_Graph074->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph074->GetYaxis()->SetTitleFont(42);
   Graph_Graph074->GetZaxis()->SetLabelFont(42);
   Graph_Graph074->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph074->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph074->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph074->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph074->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph074);
   
   graph->Draw("l");
   
   Double_t Graph_fx75[18] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 40, 60, 80, 100, 120, 140, 160,
   180 };
   Double_t Graph_fy75[18] = { 25.42978, 21.5615, 17.64469, 14.58426, 12.25968, 10.47565, 9.08118, 7.970484, 7.070302, 3.040996, 1.231949, 0.7153127, 0.4843577, 0.3573242, 0.2784419, 0.225381, 0.187602,
   0.1595357 };
   graph = new TGraph(18,Graph_fx75,Graph_fy75);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph75 = new TH1F("Graph_Graph75","",100,0,197.8);
   Graph_Graph75->SetMinimum(0.1435822);
   Graph_Graph75->SetMaximum(27.9568);
   Graph_Graph75->SetDirectory(nullptr);
   Graph_Graph75->SetStats(0);
   Graph_Graph75->SetLineWidth(2);
   Graph_Graph75->SetMarkerStyle(20);
   Graph_Graph75->SetMarkerSize(0.9);
   Graph_Graph75->GetXaxis()->SetLabelFont(42);
   Graph_Graph75->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph75->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph75->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph75->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph75->GetXaxis()->SetTitleFont(42);
   Graph_Graph75->GetYaxis()->SetLabelFont(42);
   Graph_Graph75->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph75->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph75->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph75->GetYaxis()->SetTickLength(0.02);
   Graph_Graph75->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph75->GetYaxis()->SetTitleFont(42);
   Graph_Graph75->GetZaxis()->SetLabelFont(42);
   Graph_Graph75->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph75->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph75->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph75->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph75->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph75);
   
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
   
   Double_t Graph_fx77[18] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 40, 60, 80, 100, 120, 140, 160,
   180 };
   Double_t Graph_fy77[18] = { 27.97276, 23.71765, 19.40915, 16.04269, 13.48565, 11.52321, 9.989298, 8.767532, 7.777332, 3.345096, 1.355144, 0.7868439, 0.5327935, 0.3930566, 0.3062861, 0.2479191, 0.2063622,
   0.1754893 };
   graph = new TGraph(18,Graph_fx77,Graph_fy77);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph77 = new TH1F("Graph_Graph77","",100,0,197.8);
   Graph_Graph77->SetMinimum(0.1579404);
   Graph_Graph77->SetMaximum(30.75248);
   Graph_Graph77->SetDirectory(nullptr);
   Graph_Graph77->SetStats(0);
   Graph_Graph77->SetLineWidth(2);
   Graph_Graph77->SetMarkerStyle(20);
   Graph_Graph77->SetMarkerSize(0.9);
   Graph_Graph77->GetXaxis()->SetLabelFont(42);
   Graph_Graph77->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph77->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph77->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph77->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph77->GetXaxis()->SetTitleFont(42);
   Graph_Graph77->GetYaxis()->SetLabelFont(42);
   Graph_Graph77->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph77->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph77->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph77->GetYaxis()->SetTickLength(0.02);
   Graph_Graph77->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph77->GetYaxis()->SetTitleFont(42);
   Graph_Graph77->GetZaxis()->SetLabelFont(42);
   Graph_Graph77->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph77->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph77->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph77->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph77->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph77);
   
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
   line = new TLine(20.58282,0,20.58282,2.961968);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(20.57782,0,"  20.58 TeV");

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
   pt_LaTex = pt->AddText("#varepsilon = 1.4e-08");
   pt_LaTex = pt->AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
