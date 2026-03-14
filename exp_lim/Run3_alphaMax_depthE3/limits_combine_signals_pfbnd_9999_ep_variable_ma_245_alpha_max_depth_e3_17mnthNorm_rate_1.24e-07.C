#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_depth_e3_17mnthNorm_rate_1.24e-07()
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
   
   Double_t Graph0_fx211[18] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 40, 60, 80, 100, 120, 140, 160,
   180 };
   Double_t Graph0_fy211[18] = { 9.794922, 7.029297, 6.960156, 4.332813, 3.549219, 2.961523, 2.788672, 2.731055, 2.834766, 3.595313, 5.392969, 7.236719, 9.126563, 10.78594, 12.49141, 13.92031, 16.40938,
   17.60781 };
   TGraph *graph = new TGraph(18,Graph0_fx211,Graph0_fy211);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0211 = new TH1F("Graph_Graph0211","",100,0,197.8);
   Graph_Graph0211->SetMinimum(0.2);
   Graph_Graph0211->SetMaximum(100000);
   Graph_Graph0211->SetDirectory(nullptr);
   Graph_Graph0211->SetStats(0);
   Graph_Graph0211->SetLineWidth(2);
   Graph_Graph0211->SetMarkerStyle(20);
   Graph_Graph0211->SetMarkerSize(0.9);
   Graph_Graph0211->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0211->GetXaxis()->SetRange(1,92);
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
   
   Double_t Graph1_fx212[38] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 40, 60, 80, 100, 120, 140, 160,
   180, 180, 180, 180, 160, 140, 120, 100, 80, 60, 40, 20, 10, 9, 8, 7,
   6, 5, 4, 3, 2 };
   Double_t Graph1_fy212[38] = { 22.50189, 17.28028, 15.82433, 12.2149, 10.79262, 9.005536, 8.479922, 8.304717, 8.620086, 10.93279, 16.39919, 22.00575, 27.75247, 32.79838, 37.98445, 42.32953, 49.89839,
   53.54265, 53.54265, 4.814636, 4.814636, 4.486938, 3.806335, 3.464413, 2.94928, 2.495544, 1.97879, 1.495706, 0.9971375, 0.8083511, 0.7787773, 0.784314, 0.8560654,
   1.220044, 1.929456, 3.806335, 3.294983, 4.782677 };
   graph = new TGraph(38,Graph1_fx212,Graph1_fy212);
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
   
   TH1F *Graph_Graph1212 = new TH1F("Graph_Graph1212","Graph",100,0,197.8);
   Graph_Graph1212->SetMinimum(0.7008996);
   Graph_Graph1212->SetMaximum(58.81904);
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
   
   Double_t Graph2_fx213[38] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 40, 60, 80, 100, 120, 140, 160,
   180, 180, 180, 180, 160, 140, 120, 100, 80, 60, 40, 20, 10, 9, 8, 7,
   6, 5, 4, 3, 2 };
   Double_t Graph2_fy213[38] = { 14.98764, 11.1481, 10.44196, 7.320657, 6.406981, 5.841885, 5.612076, 5.50701, 5.727415, 7.264038, 10.89606, 14.62121, 18.43948, 21.79211, 25.23788, 28.12487, 33.15382,
   35.57516, 35.57516, 8.712557, 8.712557, 8.119556, 6.887938, 6.214825, 5.337011, 4.515933, 3.580815, 2.713601, 1.809067, 1.441606, 1.388864, 1.410676, 1.514021,
   2.020698, 2.75561, 4.964379, 4.637002, 6.62311 };
   graph = new TGraph(38,Graph2_fx213,Graph2_fy213);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2213 = new TH1F("Graph_Graph2213","Graph",100,0,197.8);
   Graph_Graph2213->SetMinimum(1.249978);
   Graph_Graph2213->SetMaximum(38.99379);
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
   
   Double_t Graph0_fx214[18] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 40, 60, 80, 100, 120, 140, 160,
   180 };
   Double_t Graph0_fy214[18] = { 9.794922, 7.029297, 6.960156, 4.332813, 3.549219, 2.961523, 2.788672, 2.731055, 2.834766, 3.595313, 5.392969, 7.236719, 9.126563, 10.78594, 12.49141, 13.92031, 16.40938,
   17.60781 };
   graph = new TGraph(18,Graph0_fx214,Graph0_fy214);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0214 = new TH1F("Graph_Graph0214","",100,0,197.8);
   Graph_Graph0214->SetMinimum(0.2);
   Graph_Graph0214->SetMaximum(100000);
   Graph_Graph0214->SetDirectory(nullptr);
   Graph_Graph0214->SetStats(0);
   Graph_Graph0214->SetLineWidth(2);
   Graph_Graph0214->SetMarkerStyle(20);
   Graph_Graph0214->SetMarkerSize(0.9);
   Graph_Graph0214->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0214->GetXaxis()->SetRange(1,92);
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
   
   Double_t Graph_fx215[18] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 40, 60, 80, 100, 120, 140, 160,
   180 };
   Double_t Graph_fy215[18] = { 7.969938e-36, 1.823103e-22, 7.749192e-16, 6.852249e-12, 2.796611e-09, 1.981761e-07, 4.72118e-06, 5.453116e-05, 0.0003801889, 1.749379, 73.30169, 199.7875, 293.0989, 343.8553, 365.0549, 368.5332, 362.0335,
   350.2127 };
   graph = new TGraph(18,Graph_fx215,Graph_fy215);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph215 = new TH1F("Graph_Graph215","",100,0,197.8);
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
   
   Double_t Graph_fx217[18] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 40, 60, 80, 100, 120, 140, 160,
   180 };
   Double_t Graph_fy217[18] = { 8.766932e-36, 2.005413e-22, 8.524111e-16, 7.537474e-12, 3.076272e-09, 2.179937e-07, 5.193298e-06, 5.998428e-05, 0.0004182078, 1.924317, 80.63186, 219.7663, 322.4088, 378.2408, 401.5603, 405.3865, 398.2368,
   385.2339 };
   graph = new TGraph(18,Graph_fx217,Graph_fy217);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph217 = new TH1F("Graph_Graph217","",100,0,197.8);
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
   line = new TLine(24.32673,0,24.32673,3.924927);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(24.32173,0,"  24.33 TeV");

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
   pt_LaTex = pt->AddText("#varepsilon = 1.24e-07");
   pt_LaTex = pt->AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
