#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_depth_e3_17mnthNorm_rate_2.4e-08()
{
//=========Macro generated from canvas: climits/climits
//=========  (Wed Mar 11 02:52:01 2026) by ROOT version 6.30/07
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
   
   Double_t Graph0_fx141[18] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 40, 60, 80, 100, 120, 140, 160,
   180 };
   Double_t Graph0_fy141[18] = { 9.794922, 7.029297, 6.960156, 4.332813, 3.549219, 2.961523, 2.788672, 2.731055, 2.834766, 3.595313, 5.392969, 7.236719, 9.126563, 10.78594, 12.49141, 13.92031, 16.40938,
   17.60781 };
   TGraph *graph = new TGraph(18,Graph0_fx141,Graph0_fy141);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0141 = new TH1F("Graph_Graph0141","",100,0,197.8);
   Graph_Graph0141->SetMinimum(0.2);
   Graph_Graph0141->SetMaximum(100000);
   Graph_Graph0141->SetDirectory(nullptr);
   Graph_Graph0141->SetStats(0);
   Graph_Graph0141->SetLineWidth(2);
   Graph_Graph0141->SetMarkerStyle(20);
   Graph_Graph0141->SetMarkerSize(0.9);
   Graph_Graph0141->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0141->GetXaxis()->SetRange(1,92);
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
   
   Double_t Graph1_fx142[38] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 40, 60, 80, 100, 120, 140, 160,
   180, 180, 180, 180, 160, 140, 120, 100, 80, 60, 40, 20, 10, 9, 8, 7,
   6, 5, 4, 3, 2 };
   Double_t Graph1_fy142[38] = { 22.50189, 17.28028, 15.82433, 12.2149, 10.79262, 9.005536, 8.479922, 8.304717, 8.620086, 10.93279, 16.39919, 22.00575, 27.75247, 32.79838, 37.98445, 42.32953, 49.89839,
   53.54265, 53.54265, 4.814636, 4.814636, 4.486938, 3.806335, 3.464413, 2.94928, 2.495544, 1.97879, 1.495706, 0.9971375, 0.8083511, 0.7787773, 0.784314, 0.8560654,
   1.220044, 1.929456, 3.806335, 3.294983, 4.782677 };
   graph = new TGraph(38,Graph1_fx142,Graph1_fy142);
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
   
   TH1F *Graph_Graph1142 = new TH1F("Graph_Graph1142","Graph",100,0,197.8);
   Graph_Graph1142->SetMinimum(0.7008996);
   Graph_Graph1142->SetMaximum(58.81904);
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
   
   Double_t Graph2_fx143[38] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 40, 60, 80, 100, 120, 140, 160,
   180, 180, 180, 180, 160, 140, 120, 100, 80, 60, 40, 20, 10, 9, 8, 7,
   6, 5, 4, 3, 2 };
   Double_t Graph2_fy143[38] = { 14.98764, 11.1481, 10.44196, 7.320657, 6.406981, 5.841885, 5.612076, 5.50701, 5.727415, 7.264038, 10.89606, 14.62121, 18.43948, 21.79211, 25.23788, 28.12487, 33.15382,
   35.57516, 35.57516, 8.712557, 8.712557, 8.119556, 6.887938, 6.214825, 5.337011, 4.515933, 3.580815, 2.713601, 1.809067, 1.441606, 1.388864, 1.410676, 1.514021,
   2.020698, 2.75561, 4.964379, 4.637002, 6.62311 };
   graph = new TGraph(38,Graph2_fx143,Graph2_fy143);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2143 = new TH1F("Graph_Graph2143","Graph",100,0,197.8);
   Graph_Graph2143->SetMinimum(1.249978);
   Graph_Graph2143->SetMaximum(38.99379);
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
   
   Double_t Graph0_fx144[18] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 40, 60, 80, 100, 120, 140, 160,
   180 };
   Double_t Graph0_fy144[18] = { 9.794922, 7.029297, 6.960156, 4.332813, 3.549219, 2.961523, 2.788672, 2.731055, 2.834766, 3.595313, 5.392969, 7.236719, 9.126563, 10.78594, 12.49141, 13.92031, 16.40938,
   17.60781 };
   graph = new TGraph(18,Graph0_fx144,Graph0_fy144);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0144 = new TH1F("Graph_Graph0144","",100,0,197.8);
   Graph_Graph0144->SetMinimum(0.2);
   Graph_Graph0144->SetMaximum(100000);
   Graph_Graph0144->SetDirectory(nullptr);
   Graph_Graph0144->SetStats(0);
   Graph_Graph0144->SetLineWidth(2);
   Graph_Graph0144->SetMarkerStyle(20);
   Graph_Graph0144->SetMarkerSize(0.9);
   Graph_Graph0144->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0144->GetXaxis()->SetRange(1,92);
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
   
   Double_t Graph_fx145[18] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 40, 60, 80, 100, 120, 140, 160,
   180 };
   Double_t Graph_fy145[18] = { 21.52889, 39.58912, 47.71114, 49.74571, 48.81958, 46.59368, 43.88455, 41.08395, 38.37426, 20.82012, 9.473115, 5.71751, 3.947142, 2.945929, 2.313431, 1.882958, 1.573845,
   1.342714 };
   graph = new TGraph(18,Graph_fx145,Graph_fy145);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph145 = new TH1F("Graph_Graph145","",100,0,197.8);
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
   
   Double_t Graph_fx147[18] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 40, 60, 80, 100, 120, 140, 160,
   180 };
   Double_t Graph_fy147[18] = { 23.68178, 43.54803, 52.48226, 54.72029, 53.70153, 51.25304, 48.273, 45.19235, 42.21169, 22.90214, 10.42043, 6.289261, 4.341856, 3.240521, 2.544774, 2.071254, 1.73123,
   1.476985 };
   graph = new TGraph(18,Graph_fx147,Graph_fy147);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph147 = new TH1F("Graph_Graph147","",100,0,197.8);
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
   line = new TLine(54.10174,0,54.10174,6.635555);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(54.09674,0,"  54.10 TeV");

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
   pt_LaTex = pt->AddText("#varepsilon = 2.4e-08");
   pt_LaTex = pt->AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
