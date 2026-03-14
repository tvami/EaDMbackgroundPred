#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_depth_e3_17mnthNorm_rate_7e-09()
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
   
   Double_t Graph0_fx22[18] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 40, 60, 80, 100, 120, 140, 160,
   180 };
   Double_t Graph0_fy22[18] = { 9.794922, 7.029297, 6.960156, 4.332813, 3.549219, 2.961523, 2.788672, 2.731055, 2.834766, 3.595313, 5.392969, 7.236719, 9.126563, 10.78594, 12.49141, 13.92031, 16.40938,
   17.60781 };
   TGraph *graph = new TGraph(18,Graph0_fx22,Graph0_fy22);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph022 = new TH1F("Graph_Graph022","",100,0,197.8);
   Graph_Graph022->SetMinimum(0.2);
   Graph_Graph022->SetMaximum(100000);
   Graph_Graph022->SetDirectory(nullptr);
   Graph_Graph022->SetStats(0);
   Graph_Graph022->SetLineWidth(2);
   Graph_Graph022->SetMarkerStyle(20);
   Graph_Graph022->SetMarkerSize(0.9);
   Graph_Graph022->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph022->GetXaxis()->SetRange(1,92);
   Graph_Graph022->GetXaxis()->SetLabelFont(42);
   Graph_Graph022->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph022->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph022->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph022->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph022->GetXaxis()->SetTitleFont(42);
   Graph_Graph022->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph022->GetYaxis()->SetLabelFont(42);
   Graph_Graph022->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph022->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph022->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph022->GetYaxis()->SetTickLength(0.02);
   Graph_Graph022->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph022->GetYaxis()->SetTitleFont(42);
   Graph_Graph022->GetZaxis()->SetLabelFont(42);
   Graph_Graph022->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph022->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph022->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph022->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph022->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph022);
   
   graph->Draw("al");
   
   Double_t Graph1_fx23[38] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 40, 60, 80, 100, 120, 140, 160,
   180, 180, 180, 180, 160, 140, 120, 100, 80, 60, 40, 20, 10, 9, 8, 7,
   6, 5, 4, 3, 2 };
   Double_t Graph1_fy23[38] = { 22.50189, 17.28028, 15.82433, 12.2149, 10.79262, 9.005536, 8.479922, 8.304717, 8.620086, 10.93279, 16.39919, 22.00575, 27.75247, 32.79838, 37.98445, 42.32953, 49.89839,
   53.54265, 53.54265, 4.814636, 4.814636, 4.486938, 3.806335, 3.464413, 2.94928, 2.495544, 1.97879, 1.495706, 0.9971375, 0.8083511, 0.7787773, 0.784314, 0.8560654,
   1.220044, 1.929456, 3.806335, 3.294983, 4.782677 };
   graph = new TGraph(38,Graph1_fx23,Graph1_fy23);
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
   
   TH1F *Graph_Graph123 = new TH1F("Graph_Graph123","Graph",100,0,197.8);
   Graph_Graph123->SetMinimum(0.7008996);
   Graph_Graph123->SetMaximum(58.81904);
   Graph_Graph123->SetDirectory(nullptr);
   Graph_Graph123->SetStats(0);
   Graph_Graph123->SetLineWidth(2);
   Graph_Graph123->SetMarkerStyle(20);
   Graph_Graph123->SetMarkerSize(0.9);
   Graph_Graph123->GetXaxis()->SetLabelFont(42);
   Graph_Graph123->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph123->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph123->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph123->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph123->GetXaxis()->SetTitleFont(42);
   Graph_Graph123->GetYaxis()->SetLabelFont(42);
   Graph_Graph123->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph123->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph123->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph123->GetYaxis()->SetTickLength(0.02);
   Graph_Graph123->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph123->GetYaxis()->SetTitleFont(42);
   Graph_Graph123->GetZaxis()->SetLabelFont(42);
   Graph_Graph123->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph123->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph123->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph123->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph123->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph123);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx24[38] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 40, 60, 80, 100, 120, 140, 160,
   180, 180, 180, 180, 160, 140, 120, 100, 80, 60, 40, 20, 10, 9, 8, 7,
   6, 5, 4, 3, 2 };
   Double_t Graph2_fy24[38] = { 14.98764, 11.1481, 10.44196, 7.320657, 6.406981, 5.841885, 5.612076, 5.50701, 5.727415, 7.264038, 10.89606, 14.62121, 18.43948, 21.79211, 25.23788, 28.12487, 33.15382,
   35.57516, 35.57516, 8.712557, 8.712557, 8.119556, 6.887938, 6.214825, 5.337011, 4.515933, 3.580815, 2.713601, 1.809067, 1.441606, 1.388864, 1.410676, 1.514021,
   2.020698, 2.75561, 4.964379, 4.637002, 6.62311 };
   graph = new TGraph(38,Graph2_fx24,Graph2_fy24);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph224 = new TH1F("Graph_Graph224","Graph",100,0,197.8);
   Graph_Graph224->SetMinimum(1.249978);
   Graph_Graph224->SetMaximum(38.99379);
   Graph_Graph224->SetDirectory(nullptr);
   Graph_Graph224->SetStats(0);
   Graph_Graph224->SetLineWidth(2);
   Graph_Graph224->SetMarkerStyle(20);
   Graph_Graph224->SetMarkerSize(0.9);
   Graph_Graph224->GetXaxis()->SetLabelFont(42);
   Graph_Graph224->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph224->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph224->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph224->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph224->GetXaxis()->SetTitleFont(42);
   Graph_Graph224->GetYaxis()->SetLabelFont(42);
   Graph_Graph224->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph224->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph224->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph224->GetYaxis()->SetTickLength(0.02);
   Graph_Graph224->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph224->GetYaxis()->SetTitleFont(42);
   Graph_Graph224->GetZaxis()->SetLabelFont(42);
   Graph_Graph224->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph224->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph224->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph224->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph224->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph224);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx25[18] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 40, 60, 80, 100, 120, 140, 160,
   180 };
   Double_t Graph0_fy25[18] = { 9.794922, 7.029297, 6.960156, 4.332813, 3.549219, 2.961523, 2.788672, 2.731055, 2.834766, 3.595313, 5.392969, 7.236719, 9.126563, 10.78594, 12.49141, 13.92031, 16.40938,
   17.60781 };
   graph = new TGraph(18,Graph0_fx25,Graph0_fy25);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph025 = new TH1F("Graph_Graph025","",100,0,197.8);
   Graph_Graph025->SetMinimum(0.2);
   Graph_Graph025->SetMaximum(100000);
   Graph_Graph025->SetDirectory(nullptr);
   Graph_Graph025->SetStats(0);
   Graph_Graph025->SetLineWidth(2);
   Graph_Graph025->SetMarkerStyle(20);
   Graph_Graph025->SetMarkerSize(0.9);
   Graph_Graph025->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph025->GetXaxis()->SetRange(1,92);
   Graph_Graph025->GetXaxis()->SetLabelFont(42);
   Graph_Graph025->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph025->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph025->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph025->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph025->GetXaxis()->SetTitleFont(42);
   Graph_Graph025->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph025->GetYaxis()->SetLabelFont(42);
   Graph_Graph025->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph025->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph025->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph025->GetYaxis()->SetTickLength(0.02);
   Graph_Graph025->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph025->GetYaxis()->SetTitleFont(42);
   Graph_Graph025->GetZaxis()->SetLabelFont(42);
   Graph_Graph025->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph025->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph025->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph025->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph025->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph025);
   
   graph->Draw("l");
   
   Double_t Graph_fx26[18] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 40, 60, 80, 100, 120, 140, 160,
   180 };
   Double_t Graph_fy26[18] = { 3.903124, 2.452932, 1.728179, 1.305691, 1.033766, 0.8463378, 0.7105092, 0.608238, 0.5288785, 0.2079289, 0.08053454, 0.04606619, 0.03096, 0.02273769, 0.01766517, 0.01426827, 0.01185755,
   0.01007102 };
   graph = new TGraph(18,Graph_fx26,Graph_fy26);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph26 = new TH1F("Graph_Graph26","",100,0,197.8);
   Graph_Graph26->SetMinimum(0.009063918);
   Graph_Graph26->SetMaximum(4.29243);
   Graph_Graph26->SetDirectory(nullptr);
   Graph_Graph26->SetStats(0);
   Graph_Graph26->SetLineWidth(2);
   Graph_Graph26->SetMarkerStyle(20);
   Graph_Graph26->SetMarkerSize(0.9);
   Graph_Graph26->GetXaxis()->SetLabelFont(42);
   Graph_Graph26->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph26->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph26->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph26->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph26->GetXaxis()->SetTitleFont(42);
   Graph_Graph26->GetYaxis()->SetLabelFont(42);
   Graph_Graph26->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph26->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph26->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph26->GetYaxis()->SetTickLength(0.02);
   Graph_Graph26->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph26->GetYaxis()->SetTitleFont(42);
   Graph_Graph26->GetZaxis()->SetLabelFont(42);
   Graph_Graph26->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph26->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph26->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph26->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph26->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph26);
   
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
   
   Double_t Graph_fx28[18] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 40, 60, 80, 100, 120, 140, 160,
   180 };
   Double_t Graph_fy28[18] = { 4.293437, 2.698225, 1.900997, 1.43626, 1.137143, 0.9309716, 0.7815602, 0.6690618, 0.5817664, 0.2287218, 0.088588, 0.05067281, 0.034056, 0.02501145, 0.01943169, 0.0156951, 0.0130433,
   0.01107812 };
   graph = new TGraph(18,Graph_fx28,Graph_fy28);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph28 = new TH1F("Graph_Graph28","",100,0,197.8);
   Graph_Graph28->SetMinimum(0.009970309);
   Graph_Graph28->SetMaximum(4.721673);
   Graph_Graph28->SetDirectory(nullptr);
   Graph_Graph28->SetStats(0);
   Graph_Graph28->SetLineWidth(2);
   Graph_Graph28->SetMarkerStyle(20);
   Graph_Graph28->SetMarkerSize(0.9);
   Graph_Graph28->GetXaxis()->SetLabelFont(42);
   Graph_Graph28->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph28->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph28->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph28->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph28->GetXaxis()->SetTitleFont(42);
   Graph_Graph28->GetYaxis()->SetLabelFont(42);
   Graph_Graph28->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph28->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph28->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph28->GetYaxis()->SetTickLength(0.02);
   Graph_Graph28->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph28->GetYaxis()->SetTitleFont(42);
   Graph_Graph28->GetZaxis()->SetLabelFont(42);
   Graph_Graph28->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph28->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph28->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph28->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph28->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph28);
   
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
   line = new TLine(-1,0,-1,-1);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(-1.005,0,"  -1.00 TeV");

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
   pt_LaTex = pt->AddText("#varepsilon = 7e-09");
   pt_LaTex = pt->AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
