#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_depth_e3_17mnthNorm_rate_2.54e-07()
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
   
   Double_t Graph0_fx302[18] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 40, 60, 80, 100, 120, 140, 160,
   180 };
   Double_t Graph0_fy302[18] = { 9.794922, 7.029297, 6.960156, 4.332813, 3.549219, 2.961523, 2.788672, 2.731055, 2.834766, 3.595313, 5.392969, 7.236719, 9.126563, 10.78594, 12.49141, 13.92031, 16.40938,
   17.60781 };
   TGraph *graph = new TGraph(18,Graph0_fx302,Graph0_fy302);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0302 = new TH1F("Graph_Graph0302","",100,0,197.8);
   Graph_Graph0302->SetMinimum(0.2);
   Graph_Graph0302->SetMaximum(100000);
   Graph_Graph0302->SetDirectory(nullptr);
   Graph_Graph0302->SetStats(0);
   Graph_Graph0302->SetLineWidth(2);
   Graph_Graph0302->SetMarkerStyle(20);
   Graph_Graph0302->SetMarkerSize(0.9);
   Graph_Graph0302->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0302->GetXaxis()->SetRange(1,92);
   Graph_Graph0302->GetXaxis()->SetLabelFont(42);
   Graph_Graph0302->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0302->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0302->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0302->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0302->GetXaxis()->SetTitleFont(42);
   Graph_Graph0302->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0302->GetYaxis()->SetLabelFont(42);
   Graph_Graph0302->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0302->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0302->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0302->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0302->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0302->GetYaxis()->SetTitleFont(42);
   Graph_Graph0302->GetZaxis()->SetLabelFont(42);
   Graph_Graph0302->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0302->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0302->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0302->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0302->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0302);
   
   graph->Draw("al");
   
   Double_t Graph1_fx303[38] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 40, 60, 80, 100, 120, 140, 160,
   180, 180, 180, 180, 160, 140, 120, 100, 80, 60, 40, 20, 10, 9, 8, 7,
   6, 5, 4, 3, 2 };
   Double_t Graph1_fy303[38] = { 22.50189, 17.28028, 15.82433, 12.2149, 10.79262, 9.005536, 8.479922, 8.304717, 8.620086, 10.93279, 16.39919, 22.00575, 27.75247, 32.79838, 37.98445, 42.32953, 49.89839,
   53.54265, 53.54265, 4.814636, 4.814636, 4.486938, 3.806335, 3.464413, 2.94928, 2.495544, 1.97879, 1.495706, 0.9971375, 0.8083511, 0.7787773, 0.784314, 0.8560654,
   1.220044, 1.929456, 3.806335, 3.294983, 4.782677 };
   graph = new TGraph(38,Graph1_fx303,Graph1_fy303);
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
   
   TH1F *Graph_Graph1303 = new TH1F("Graph_Graph1303","Graph",100,0,197.8);
   Graph_Graph1303->SetMinimum(0.7008996);
   Graph_Graph1303->SetMaximum(58.81904);
   Graph_Graph1303->SetDirectory(nullptr);
   Graph_Graph1303->SetStats(0);
   Graph_Graph1303->SetLineWidth(2);
   Graph_Graph1303->SetMarkerStyle(20);
   Graph_Graph1303->SetMarkerSize(0.9);
   Graph_Graph1303->GetXaxis()->SetLabelFont(42);
   Graph_Graph1303->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1303->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1303->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1303->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1303->GetXaxis()->SetTitleFont(42);
   Graph_Graph1303->GetYaxis()->SetLabelFont(42);
   Graph_Graph1303->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1303->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1303->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1303->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1303->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1303->GetYaxis()->SetTitleFont(42);
   Graph_Graph1303->GetZaxis()->SetLabelFont(42);
   Graph_Graph1303->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1303->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1303->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1303->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1303->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1303);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx304[38] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 40, 60, 80, 100, 120, 140, 160,
   180, 180, 180, 180, 160, 140, 120, 100, 80, 60, 40, 20, 10, 9, 8, 7,
   6, 5, 4, 3, 2 };
   Double_t Graph2_fy304[38] = { 14.98764, 11.1481, 10.44196, 7.320657, 6.406981, 5.841885, 5.612076, 5.50701, 5.727415, 7.264038, 10.89606, 14.62121, 18.43948, 21.79211, 25.23788, 28.12487, 33.15382,
   35.57516, 35.57516, 8.712557, 8.712557, 8.119556, 6.887938, 6.214825, 5.337011, 4.515933, 3.580815, 2.713601, 1.809067, 1.441606, 1.388864, 1.410676, 1.514021,
   2.020698, 2.75561, 4.964379, 4.637002, 6.62311 };
   graph = new TGraph(38,Graph2_fx304,Graph2_fy304);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2304 = new TH1F("Graph_Graph2304","Graph",100,0,197.8);
   Graph_Graph2304->SetMinimum(1.249978);
   Graph_Graph2304->SetMaximum(38.99379);
   Graph_Graph2304->SetDirectory(nullptr);
   Graph_Graph2304->SetStats(0);
   Graph_Graph2304->SetLineWidth(2);
   Graph_Graph2304->SetMarkerStyle(20);
   Graph_Graph2304->SetMarkerSize(0.9);
   Graph_Graph2304->GetXaxis()->SetLabelFont(42);
   Graph_Graph2304->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2304->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2304->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2304->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2304->GetXaxis()->SetTitleFont(42);
   Graph_Graph2304->GetYaxis()->SetLabelFont(42);
   Graph_Graph2304->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2304->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2304->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2304->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2304->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2304->GetYaxis()->SetTitleFont(42);
   Graph_Graph2304->GetZaxis()->SetLabelFont(42);
   Graph_Graph2304->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2304->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2304->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2304->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2304->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2304);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx305[18] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 40, 60, 80, 100, 120, 140, 160,
   180 };
   Double_t Graph0_fy305[18] = { 9.794922, 7.029297, 6.960156, 4.332813, 3.549219, 2.961523, 2.788672, 2.731055, 2.834766, 3.595313, 5.392969, 7.236719, 9.126563, 10.78594, 12.49141, 13.92031, 16.40938,
   17.60781 };
   graph = new TGraph(18,Graph0_fx305,Graph0_fy305);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0305 = new TH1F("Graph_Graph0305","",100,0,197.8);
   Graph_Graph0305->SetMinimum(0.2);
   Graph_Graph0305->SetMaximum(100000);
   Graph_Graph0305->SetDirectory(nullptr);
   Graph_Graph0305->SetStats(0);
   Graph_Graph0305->SetLineWidth(2);
   Graph_Graph0305->SetMarkerStyle(20);
   Graph_Graph0305->SetMarkerSize(0.9);
   Graph_Graph0305->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0305->GetXaxis()->SetRange(1,92);
   Graph_Graph0305->GetXaxis()->SetLabelFont(42);
   Graph_Graph0305->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0305->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0305->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0305->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0305->GetXaxis()->SetTitleFont(42);
   Graph_Graph0305->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0305->GetYaxis()->SetLabelFont(42);
   Graph_Graph0305->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0305->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0305->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0305->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0305->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0305->GetYaxis()->SetTitleFont(42);
   Graph_Graph0305->GetZaxis()->SetLabelFont(42);
   Graph_Graph0305->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0305->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0305->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0305->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0305->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0305);
   
   graph->Draw("l");
   
   Double_t Graph_fx306[18] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 40, 60, 80, 100, 120, 140, 160,
   180 };
   Double_t Graph_fy306[18] = { 5.155871e-165, 3.547404e-108, 8.26966e-80, 8.082489e-63, 1.636812e-51, 1.886253e-43, 2.046379e-37, 9.925908e-33, 5.478693e-29, 2.786417e-12, 0.0003881673, 0.157902, 2.830028, 14.90481, 43.06177, 88.87293, 149.266,
   219.1309 };
   graph = new TGraph(18,Graph_fx306,Graph_fy306);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph306 = new TH1F("Graph_Graph306","",100,0,197.8);
   Graph_Graph306->SetMinimum(4.640284e-165);
   Graph_Graph306->SetMaximum(241.044);
   Graph_Graph306->SetDirectory(nullptr);
   Graph_Graph306->SetStats(0);
   Graph_Graph306->SetLineWidth(2);
   Graph_Graph306->SetMarkerStyle(20);
   Graph_Graph306->SetMarkerSize(0.9);
   Graph_Graph306->GetXaxis()->SetLabelFont(42);
   Graph_Graph306->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph306->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph306->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph306->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph306->GetXaxis()->SetTitleFont(42);
   Graph_Graph306->GetYaxis()->SetLabelFont(42);
   Graph_Graph306->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph306->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph306->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph306->GetYaxis()->SetTickLength(0.02);
   Graph_Graph306->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph306->GetYaxis()->SetTitleFont(42);
   Graph_Graph306->GetZaxis()->SetLabelFont(42);
   Graph_Graph306->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph306->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph306->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph306->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph306->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph306);
   
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
   
   Double_t Graph_fx308[18] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 40, 60, 80, 100, 120, 140, 160,
   180 };
   Double_t Graph_fy308[18] = { 5.671458e-165, 3.902145e-108, 9.096626e-80, 8.890738e-63, 1.800493e-51, 2.074879e-43, 2.251017e-37, 1.09185e-32, 6.026562e-29, 3.065058e-12, 0.000426984, 0.1736922, 3.113031, 16.3953, 47.36794, 97.76023, 164.1926,
   241.044 };
   graph = new TGraph(18,Graph_fx308,Graph_fy308);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph308 = new TH1F("Graph_Graph308","",100,0,197.8);
   Graph_Graph308->SetMinimum(5.104312e-165);
   Graph_Graph308->SetMaximum(265.1484);
   Graph_Graph308->SetDirectory(nullptr);
   Graph_Graph308->SetStats(0);
   Graph_Graph308->SetLineWidth(2);
   Graph_Graph308->SetMarkerStyle(20);
   Graph_Graph308->SetMarkerSize(0.9);
   Graph_Graph308->GetXaxis()->SetLabelFont(42);
   Graph_Graph308->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph308->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph308->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph308->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph308->GetXaxis()->SetTitleFont(42);
   Graph_Graph308->GetYaxis()->SetLabelFont(42);
   Graph_Graph308->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph308->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph308->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph308->GetYaxis()->SetTickLength(0.02);
   Graph_Graph308->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph308->GetYaxis()->SetTitleFont(42);
   Graph_Graph308->GetZaxis()->SetLabelFont(42);
   Graph_Graph308->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph308->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph308->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph308->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph308->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph308);
   
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
   line = new TLine(95.67113,0,95.67113,10.40291);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(95.66613,0,"  95.67 TeV");

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
   pt_LaTex = pt->AddText("#varepsilon = 2.54e-07");
   pt_LaTex = pt->AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
