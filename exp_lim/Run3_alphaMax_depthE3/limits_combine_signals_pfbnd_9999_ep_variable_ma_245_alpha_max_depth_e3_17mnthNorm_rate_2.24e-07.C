#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_depth_e3_17mnthNorm_rate_2.24e-07()
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
   
   Double_t Graph0_fx281[18] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 40, 60, 80, 100, 120, 140, 160,
   180 };
   Double_t Graph0_fy281[18] = { 9.794922, 7.029297, 6.960156, 4.332813, 3.549219, 2.961523, 2.788672, 2.731055, 2.834766, 3.595313, 5.392969, 7.236719, 9.126563, 10.78594, 12.49141, 13.92031, 16.40938,
   17.60781 };
   TGraph *graph = new TGraph(18,Graph0_fx281,Graph0_fy281);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0281 = new TH1F("Graph_Graph0281","",100,0,197.8);
   Graph_Graph0281->SetMinimum(0.2);
   Graph_Graph0281->SetMaximum(100000);
   Graph_Graph0281->SetDirectory(nullptr);
   Graph_Graph0281->SetStats(0);
   Graph_Graph0281->SetLineWidth(2);
   Graph_Graph0281->SetMarkerStyle(20);
   Graph_Graph0281->SetMarkerSize(0.9);
   Graph_Graph0281->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0281->GetXaxis()->SetRange(1,92);
   Graph_Graph0281->GetXaxis()->SetLabelFont(42);
   Graph_Graph0281->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0281->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0281->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0281->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0281->GetXaxis()->SetTitleFont(42);
   Graph_Graph0281->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0281->GetYaxis()->SetLabelFont(42);
   Graph_Graph0281->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0281->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0281->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0281->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0281->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0281->GetYaxis()->SetTitleFont(42);
   Graph_Graph0281->GetZaxis()->SetLabelFont(42);
   Graph_Graph0281->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0281->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0281->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0281->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0281->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0281);
   
   graph->Draw("al");
   
   Double_t Graph1_fx282[38] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 40, 60, 80, 100, 120, 140, 160,
   180, 180, 180, 180, 160, 140, 120, 100, 80, 60, 40, 20, 10, 9, 8, 7,
   6, 5, 4, 3, 2 };
   Double_t Graph1_fy282[38] = { 22.50189, 17.28028, 15.82433, 12.2149, 10.79262, 9.005536, 8.479922, 8.304717, 8.620086, 10.93279, 16.39919, 22.00575, 27.75247, 32.79838, 37.98445, 42.32953, 49.89839,
   53.54265, 53.54265, 4.814636, 4.814636, 4.486938, 3.806335, 3.464413, 2.94928, 2.495544, 1.97879, 1.495706, 0.9971375, 0.8083511, 0.7787773, 0.784314, 0.8560654,
   1.220044, 1.929456, 3.806335, 3.294983, 4.782677 };
   graph = new TGraph(38,Graph1_fx282,Graph1_fy282);
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
   
   TH1F *Graph_Graph1282 = new TH1F("Graph_Graph1282","Graph",100,0,197.8);
   Graph_Graph1282->SetMinimum(0.7008996);
   Graph_Graph1282->SetMaximum(58.81904);
   Graph_Graph1282->SetDirectory(nullptr);
   Graph_Graph1282->SetStats(0);
   Graph_Graph1282->SetLineWidth(2);
   Graph_Graph1282->SetMarkerStyle(20);
   Graph_Graph1282->SetMarkerSize(0.9);
   Graph_Graph1282->GetXaxis()->SetLabelFont(42);
   Graph_Graph1282->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1282->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1282->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1282->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1282->GetXaxis()->SetTitleFont(42);
   Graph_Graph1282->GetYaxis()->SetLabelFont(42);
   Graph_Graph1282->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1282->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1282->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1282->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1282->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1282->GetYaxis()->SetTitleFont(42);
   Graph_Graph1282->GetZaxis()->SetLabelFont(42);
   Graph_Graph1282->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1282->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1282->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1282->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1282->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1282);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx283[38] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 40, 60, 80, 100, 120, 140, 160,
   180, 180, 180, 180, 160, 140, 120, 100, 80, 60, 40, 20, 10, 9, 8, 7,
   6, 5, 4, 3, 2 };
   Double_t Graph2_fy283[38] = { 14.98764, 11.1481, 10.44196, 7.320657, 6.406981, 5.841885, 5.612076, 5.50701, 5.727415, 7.264038, 10.89606, 14.62121, 18.43948, 21.79211, 25.23788, 28.12487, 33.15382,
   35.57516, 35.57516, 8.712557, 8.712557, 8.119556, 6.887938, 6.214825, 5.337011, 4.515933, 3.580815, 2.713601, 1.809067, 1.441606, 1.388864, 1.410676, 1.514021,
   2.020698, 2.75561, 4.964379, 4.637002, 6.62311 };
   graph = new TGraph(38,Graph2_fx283,Graph2_fy283);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2283 = new TH1F("Graph_Graph2283","Graph",100,0,197.8);
   Graph_Graph2283->SetMinimum(1.249978);
   Graph_Graph2283->SetMaximum(38.99379);
   Graph_Graph2283->SetDirectory(nullptr);
   Graph_Graph2283->SetStats(0);
   Graph_Graph2283->SetLineWidth(2);
   Graph_Graph2283->SetMarkerStyle(20);
   Graph_Graph2283->SetMarkerSize(0.9);
   Graph_Graph2283->GetXaxis()->SetLabelFont(42);
   Graph_Graph2283->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2283->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2283->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2283->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2283->GetXaxis()->SetTitleFont(42);
   Graph_Graph2283->GetYaxis()->SetLabelFont(42);
   Graph_Graph2283->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2283->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2283->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2283->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2283->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2283->GetYaxis()->SetTitleFont(42);
   Graph_Graph2283->GetZaxis()->SetLabelFont(42);
   Graph_Graph2283->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2283->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2283->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2283->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2283->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2283);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx284[18] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 40, 60, 80, 100, 120, 140, 160,
   180 };
   Double_t Graph0_fy284[18] = { 9.794922, 7.029297, 6.960156, 4.332813, 3.549219, 2.961523, 2.788672, 2.731055, 2.834766, 3.595313, 5.392969, 7.236719, 9.126563, 10.78594, 12.49141, 13.92031, 16.40938,
   17.60781 };
   graph = new TGraph(18,Graph0_fx284,Graph0_fy284);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0284 = new TH1F("Graph_Graph0284","",100,0,197.8);
   Graph_Graph0284->SetMinimum(0.2);
   Graph_Graph0284->SetMaximum(100000);
   Graph_Graph0284->SetDirectory(nullptr);
   Graph_Graph0284->SetStats(0);
   Graph_Graph0284->SetLineWidth(2);
   Graph_Graph0284->SetMarkerStyle(20);
   Graph_Graph0284->SetMarkerSize(0.9);
   Graph_Graph0284->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0284->GetXaxis()->SetRange(1,92);
   Graph_Graph0284->GetXaxis()->SetLabelFont(42);
   Graph_Graph0284->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0284->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0284->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0284->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0284->GetXaxis()->SetTitleFont(42);
   Graph_Graph0284->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0284->GetYaxis()->SetLabelFont(42);
   Graph_Graph0284->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0284->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0284->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0284->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0284->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0284->GetYaxis()->SetTitleFont(42);
   Graph_Graph0284->GetZaxis()->SetLabelFont(42);
   Graph_Graph0284->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0284->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0284->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0284->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0284->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0284);
   
   graph->Draw("l");
   
   Double_t Graph_fx285[18] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 40, 60, 80, 100, 120, 140, 160,
   180 };
   Double_t Graph_fy285[18] = { 3.608629e-127, 5.095216e-83, 5.380755e-61, 8.21414e-48, 4.824544e-39, 8.560815e-33, 4.059703e-28, 1.725686e-24, 1.358361e-21, 1.079056e-08, 0.01878653, 1.773475, 15.31204, 52.02978, 112.2378, 188.0138, 270.0293,
   350.9843 };
   graph = new TGraph(18,Graph_fx285,Graph_fy285);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph285 = new TH1F("Graph_Graph285","",100,0,197.8);
   Graph_Graph285->SetMinimum(3.247766e-127);
   Graph_Graph285->SetMaximum(386.0827);
   Graph_Graph285->SetDirectory(nullptr);
   Graph_Graph285->SetStats(0);
   Graph_Graph285->SetLineWidth(2);
   Graph_Graph285->SetMarkerStyle(20);
   Graph_Graph285->SetMarkerSize(0.9);
   Graph_Graph285->GetXaxis()->SetLabelFont(42);
   Graph_Graph285->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph285->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph285->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph285->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph285->GetXaxis()->SetTitleFont(42);
   Graph_Graph285->GetYaxis()->SetLabelFont(42);
   Graph_Graph285->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph285->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph285->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph285->GetYaxis()->SetTickLength(0.02);
   Graph_Graph285->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph285->GetYaxis()->SetTitleFont(42);
   Graph_Graph285->GetZaxis()->SetLabelFont(42);
   Graph_Graph285->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph285->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph285->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph285->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph285->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph285);
   
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
   
   Double_t Graph_fx287[18] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 40, 60, 80, 100, 120, 140, 160,
   180 };
   Double_t Graph_fy287[18] = { 3.969492e-127, 5.604738e-83, 5.91883e-61, 9.035554e-48, 5.306999e-39, 9.416896e-33, 4.465673e-28, 1.898254e-24, 1.494197e-21, 1.186962e-08, 0.02066519, 1.950823, 16.84325, 57.23275, 123.4616, 206.8152, 297.0322,
   386.0827 };
   graph = new TGraph(18,Graph_fx287,Graph_fy287);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph287 = new TH1F("Graph_Graph287","",100,0,197.8);
   Graph_Graph287->SetMinimum(3.572542e-127);
   Graph_Graph287->SetMaximum(424.691);
   Graph_Graph287->SetDirectory(nullptr);
   Graph_Graph287->SetStats(0);
   Graph_Graph287->SetLineWidth(2);
   Graph_Graph287->SetMarkerStyle(20);
   Graph_Graph287->SetMarkerSize(0.9);
   Graph_Graph287->GetXaxis()->SetLabelFont(42);
   Graph_Graph287->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph287->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph287->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph287->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph287->GetXaxis()->SetTitleFont(42);
   Graph_Graph287->GetYaxis()->SetLabelFont(42);
   Graph_Graph287->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph287->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph287->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph287->GetYaxis()->SetTickLength(0.02);
   Graph_Graph287->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph287->GetYaxis()->SetTitleFont(42);
   Graph_Graph287->GetZaxis()->SetLabelFont(42);
   Graph_Graph287->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph287->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph287->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph287->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph287->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph287);
   
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
   line = new TLine(74.62019,0,74.62019,8.574371);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(74.61519,0,"  74.62 TeV");

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
   pt_LaTex = pt->AddText("#varepsilon = 2.24e-07");
   pt_LaTex = pt->AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
