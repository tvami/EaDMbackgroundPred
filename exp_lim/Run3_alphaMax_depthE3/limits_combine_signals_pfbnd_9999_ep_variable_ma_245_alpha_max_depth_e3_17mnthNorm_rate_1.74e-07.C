#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_depth_e3_17mnthNorm_rate_1.74e-07()
{
//=========Macro generated from canvas: climits/climits
//=========  (Wed Mar 11 02:52:02 2026) by ROOT version 6.30/07
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
   
   Double_t Graph0_fx246[18] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 40, 60, 80, 100, 120, 140, 160,
   180 };
   Double_t Graph0_fy246[18] = { 9.794922, 7.029297, 6.960156, 4.332813, 3.549219, 2.961523, 2.788672, 2.731055, 2.834766, 3.595313, 5.392969, 7.236719, 9.126563, 10.78594, 12.49141, 13.92031, 16.40938,
   17.60781 };
   TGraph *graph = new TGraph(18,Graph0_fx246,Graph0_fy246);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0246 = new TH1F("Graph_Graph0246","",100,0,197.8);
   Graph_Graph0246->SetMinimum(0.2);
   Graph_Graph0246->SetMaximum(100000);
   Graph_Graph0246->SetDirectory(nullptr);
   Graph_Graph0246->SetStats(0);
   Graph_Graph0246->SetLineWidth(2);
   Graph_Graph0246->SetMarkerStyle(20);
   Graph_Graph0246->SetMarkerSize(0.9);
   Graph_Graph0246->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0246->GetXaxis()->SetRange(1,92);
   Graph_Graph0246->GetXaxis()->SetLabelFont(42);
   Graph_Graph0246->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0246->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0246->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0246->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0246->GetXaxis()->SetTitleFont(42);
   Graph_Graph0246->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0246->GetYaxis()->SetLabelFont(42);
   Graph_Graph0246->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0246->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0246->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0246->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0246->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0246->GetYaxis()->SetTitleFont(42);
   Graph_Graph0246->GetZaxis()->SetLabelFont(42);
   Graph_Graph0246->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0246->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0246->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0246->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0246->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0246);
   
   graph->Draw("al");
   
   Double_t Graph1_fx247[38] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 40, 60, 80, 100, 120, 140, 160,
   180, 180, 180, 180, 160, 140, 120, 100, 80, 60, 40, 20, 10, 9, 8, 7,
   6, 5, 4, 3, 2 };
   Double_t Graph1_fy247[38] = { 22.50189, 17.28028, 15.82433, 12.2149, 10.79262, 9.005536, 8.479922, 8.304717, 8.620086, 10.93279, 16.39919, 22.00575, 27.75247, 32.79838, 37.98445, 42.32953, 49.89839,
   53.54265, 53.54265, 4.814636, 4.814636, 4.486938, 3.806335, 3.464413, 2.94928, 2.495544, 1.97879, 1.495706, 0.9971375, 0.8083511, 0.7787773, 0.784314, 0.8560654,
   1.220044, 1.929456, 3.806335, 3.294983, 4.782677 };
   graph = new TGraph(38,Graph1_fx247,Graph1_fy247);
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
   
   TH1F *Graph_Graph1247 = new TH1F("Graph_Graph1247","Graph",100,0,197.8);
   Graph_Graph1247->SetMinimum(0.7008996);
   Graph_Graph1247->SetMaximum(58.81904);
   Graph_Graph1247->SetDirectory(nullptr);
   Graph_Graph1247->SetStats(0);
   Graph_Graph1247->SetLineWidth(2);
   Graph_Graph1247->SetMarkerStyle(20);
   Graph_Graph1247->SetMarkerSize(0.9);
   Graph_Graph1247->GetXaxis()->SetLabelFont(42);
   Graph_Graph1247->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1247->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1247->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1247->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1247->GetXaxis()->SetTitleFont(42);
   Graph_Graph1247->GetYaxis()->SetLabelFont(42);
   Graph_Graph1247->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1247->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1247->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1247->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1247->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1247->GetYaxis()->SetTitleFont(42);
   Graph_Graph1247->GetZaxis()->SetLabelFont(42);
   Graph_Graph1247->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1247->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1247->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1247->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1247->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1247);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx248[38] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 40, 60, 80, 100, 120, 140, 160,
   180, 180, 180, 180, 160, 140, 120, 100, 80, 60, 40, 20, 10, 9, 8, 7,
   6, 5, 4, 3, 2 };
   Double_t Graph2_fy248[38] = { 14.98764, 11.1481, 10.44196, 7.320657, 6.406981, 5.841885, 5.612076, 5.50701, 5.727415, 7.264038, 10.89606, 14.62121, 18.43948, 21.79211, 25.23788, 28.12487, 33.15382,
   35.57516, 35.57516, 8.712557, 8.712557, 8.119556, 6.887938, 6.214825, 5.337011, 4.515933, 3.580815, 2.713601, 1.809067, 1.441606, 1.388864, 1.410676, 1.514021,
   2.020698, 2.75561, 4.964379, 4.637002, 6.62311 };
   graph = new TGraph(38,Graph2_fx248,Graph2_fy248);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2248 = new TH1F("Graph_Graph2248","Graph",100,0,197.8);
   Graph_Graph2248->SetMinimum(1.249978);
   Graph_Graph2248->SetMaximum(38.99379);
   Graph_Graph2248->SetDirectory(nullptr);
   Graph_Graph2248->SetStats(0);
   Graph_Graph2248->SetLineWidth(2);
   Graph_Graph2248->SetMarkerStyle(20);
   Graph_Graph2248->SetMarkerSize(0.9);
   Graph_Graph2248->GetXaxis()->SetLabelFont(42);
   Graph_Graph2248->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2248->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2248->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2248->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2248->GetXaxis()->SetTitleFont(42);
   Graph_Graph2248->GetYaxis()->SetLabelFont(42);
   Graph_Graph2248->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2248->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2248->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2248->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2248->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2248->GetYaxis()->SetTitleFont(42);
   Graph_Graph2248->GetZaxis()->SetLabelFont(42);
   Graph_Graph2248->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2248->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2248->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2248->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2248->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2248);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx249[18] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 40, 60, 80, 100, 120, 140, 160,
   180 };
   Double_t Graph0_fy249[18] = { 9.794922, 7.029297, 6.960156, 4.332813, 3.549219, 2.961523, 2.788672, 2.731055, 2.834766, 3.595313, 5.392969, 7.236719, 9.126563, 10.78594, 12.49141, 13.92031, 16.40938,
   17.60781 };
   graph = new TGraph(18,Graph0_fx249,Graph0_fy249);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0249 = new TH1F("Graph_Graph0249","",100,0,197.8);
   Graph_Graph0249->SetMinimum(0.2);
   Graph_Graph0249->SetMaximum(100000);
   Graph_Graph0249->SetDirectory(nullptr);
   Graph_Graph0249->SetStats(0);
   Graph_Graph0249->SetLineWidth(2);
   Graph_Graph0249->SetMarkerStyle(20);
   Graph_Graph0249->SetMarkerSize(0.9);
   Graph_Graph0249->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0249->GetXaxis()->SetRange(1,92);
   Graph_Graph0249->GetXaxis()->SetLabelFont(42);
   Graph_Graph0249->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0249->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0249->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0249->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0249->GetXaxis()->SetTitleFont(42);
   Graph_Graph0249->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0249->GetYaxis()->SetLabelFont(42);
   Graph_Graph0249->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0249->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0249->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0249->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0249->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0249->GetYaxis()->SetTitleFont(42);
   Graph_Graph0249->GetZaxis()->SetLabelFont(42);
   Graph_Graph0249->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0249->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0249->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0249->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0249->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0249);
   
   graph->Draw("l");
   
   Double_t Graph_fx250[18] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 40, 60, 80, 100, 120, 140, 160,
   180 };
   Double_t Graph_fy250[18] = { 8.712222e-75, 3.039215e-48, 5.04482e-35, 4.021668e-27, 7.109861e-22, 3.851288e-18, 2.371918e-15, 3.437958e-13, 1.813596e-11, 0.000752332, 2.993174, 37.21777, 116.6214, 215.7193, 310.2446, 389.0353, 449.6617,
   493.6275 };
   graph = new TGraph(18,Graph_fx250,Graph_fy250);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph250 = new TH1F("Graph_Graph250","",100,0,197.8);
   Graph_Graph250->SetMinimum(7.841e-75);
   Graph_Graph250->SetMaximum(542.9903);
   Graph_Graph250->SetDirectory(nullptr);
   Graph_Graph250->SetStats(0);
   Graph_Graph250->SetLineWidth(2);
   Graph_Graph250->SetMarkerStyle(20);
   Graph_Graph250->SetMarkerSize(0.9);
   Graph_Graph250->GetXaxis()->SetLabelFont(42);
   Graph_Graph250->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph250->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph250->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph250->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph250->GetXaxis()->SetTitleFont(42);
   Graph_Graph250->GetYaxis()->SetLabelFont(42);
   Graph_Graph250->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph250->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph250->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph250->GetYaxis()->SetTickLength(0.02);
   Graph_Graph250->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph250->GetYaxis()->SetTitleFont(42);
   Graph_Graph250->GetZaxis()->SetLabelFont(42);
   Graph_Graph250->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph250->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph250->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph250->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph250->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph250);
   
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
   
   Double_t Graph_fx252[18] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 40, 60, 80, 100, 120, 140, 160,
   180 };
   Double_t Graph_fy252[18] = { 9.583445e-75, 3.343136e-48, 5.549302e-35, 4.423834e-27, 7.820847e-22, 4.236417e-18, 2.60911e-15, 3.781754e-13, 1.994956e-11, 0.0008275652, 3.292491, 40.93955, 128.2835, 237.2912, 341.2691, 427.9389, 494.6278,
   542.9903 };
   graph = new TGraph(18,Graph_fx252,Graph_fy252);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph252 = new TH1F("Graph_Graph252","",100,0,197.8);
   Graph_Graph252->SetMinimum(8.6251e-75);
   Graph_Graph252->SetMaximum(597.2893);
   Graph_Graph252->SetDirectory(nullptr);
   Graph_Graph252->SetStats(0);
   Graph_Graph252->SetLineWidth(2);
   Graph_Graph252->SetMarkerStyle(20);
   Graph_Graph252->SetMarkerSize(0.9);
   Graph_Graph252->GetXaxis()->SetLabelFont(42);
   Graph_Graph252->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph252->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph252->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph252->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph252->GetXaxis()->SetTitleFont(42);
   Graph_Graph252->GetYaxis()->SetLabelFont(42);
   Graph_Graph252->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph252->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph252->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph252->GetYaxis()->SetTickLength(0.02);
   Graph_Graph252->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph252->GetYaxis()->SetTitleFont(42);
   Graph_Graph252->GetZaxis()->SetLabelFont(42);
   Graph_Graph252->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph252->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph252->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph252->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph252->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph252);
   
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
   line = new TLine(45.28896,0,45.28896,5.829101);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(45.28396,0,"  45.29 TeV");

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
   pt_LaTex = pt->AddText("#varepsilon = 1.74e-07");
   pt_LaTex = pt->AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
