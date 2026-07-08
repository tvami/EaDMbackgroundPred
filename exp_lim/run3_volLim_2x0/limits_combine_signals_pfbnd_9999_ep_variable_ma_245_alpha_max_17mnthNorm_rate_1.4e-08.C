#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_17mnthNorm_rate_1.4e-08()
{
//=========Macro generated from canvas: climits/climits
//=========  (Thu Jun 11 01:13:34 2026) by ROOT version 6.30/07
   TCanvas *climits = new TCanvas("climits", "climits",0,0,700,600);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   climits->SetHighLightColor(2);
   climits->Range(-0.05033449,-1.838764,3.160987,5.759863);
   climits->SetFillColor(0);
   climits->SetBorderMode(0);
   climits->SetBorderSize(2);
   climits->SetLogx();
   climits->SetLogy();
   climits->SetLeftMargin(0.15);
   climits->SetRightMargin(0.05);
   climits->SetBottomMargin(0.15);
   climits->SetFrameLineWidth(2);
   climits->SetFrameBorderMode(0);
   climits->SetFrameLineWidth(2);
   climits->SetFrameBorderMode(0);
   
   Double_t Graph0_fx71[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy71[20] = { 757.5462, 10.21849, 10.34327, 6.892724, 6.856261, 6.805988, 6.792314, 12.65785, 17.70313, 23.2699, 28.51126, 53.76754, 55.00202, 53.61712, 54.59753, 53.87332, 52.0452,
   54.09839, 54.3541, 54.3541 };
   TGraph *graph = new TGraph(20,Graph0_fx71,Graph0_fy71);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph071 = new TH1F("Graph_Graph071","",100,2.7,1099.7);
   Graph_Graph071->SetMinimum(0.2);
   Graph_Graph071->SetMaximum(100000);
   Graph_Graph071->SetDirectory(nullptr);
   Graph_Graph071->SetStats(0);
   Graph_Graph071->SetLineWidth(2);
   Graph_Graph071->SetMarkerStyle(20);
   Graph_Graph071->SetMarkerSize(0.9);
   Graph_Graph071->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph071->GetXaxis()->SetRange(0,91);
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
   
   Double_t Graph1_fx72[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph1_fy72[42] = { 1720.352, 27.90013, 27.43299, 20.45865, 19.60471, 19.58701, 20.18621, 38.49057, 53.8325, 70.7602, 86.69836, 163.4988, 167.2527, 163.0414, 166.0227, 163.8205, 158.2614,
   164.5049, 165.2825, 165.2825, 165.2825, 16.01794, 16.01794, 16.01794, 15.95112, 15.38306, 15.89619, 16.08023, 15.81265, 16.20134, 15.8579, 9.197354, 7.685111,
   6.031651, 4.53485, 2.699894, 2.772078, 2.86258, 2.705659, 4.135912, 4.369327, 363.4345 };
   graph = new TGraph(42,Graph1_fx72,Graph1_fy72);
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
   
   TH1F *Graph_Graph172 = new TH1F("Graph_Graph172","Graph",100,2.7,1099.7);
   Graph_Graph172->SetMinimum(2.429904);
   Graph_Graph172->SetMaximum(1892.117);
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
   
   Double_t Graph2_fx73[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph2_fy73[42] = { 1160.926, 17.02504, 16.96798, 12.58076, 12.12039, 12.15113, 12.34657, 25.46744, 35.67231, 46.93706, 57.5468, 108.633, 111.1271, 108.3291, 110.3099, 108.8467, 105.1531,
   109.3014, 109.8181, 109.8181, 109.8181, 26.8075, 26.8075, 26.8075, 26.69259, 25.7127, 26.59725, 26.91459, 26.45393, 27.12298, 26.53014, 14.90124, 12.34613,
   9.596146, 7.043092, 4.067349, 4.14373, 4.220541, 4.103988, 6.260527, 6.413775, 508.0431 };
   graph = new TGraph(42,Graph2_fx73,Graph2_fy73);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph273 = new TH1F("Graph_Graph273","Graph",100,2.7,1099.7);
   Graph_Graph273->SetMinimum(3.660614);
   Graph_Graph273->SetMaximum(1276.612);
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
   
   Double_t Graph0_fx74[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy74[20] = { 757.5462, 10.21849, 10.34327, 6.892724, 6.856261, 6.805988, 6.792314, 12.65785, 17.70313, 23.2699, 28.51126, 53.76754, 55.00202, 53.61712, 54.59753, 53.87332, 52.0452,
   54.09839, 54.3541, 54.3541 };
   graph = new TGraph(20,Graph0_fx74,Graph0_fy74);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph074 = new TH1F("Graph_Graph074","",100,2.7,1099.7);
   Graph_Graph074->SetMinimum(0.2);
   Graph_Graph074->SetMaximum(100000);
   Graph_Graph074->SetDirectory(nullptr);
   Graph_Graph074->SetStats(0);
   Graph_Graph074->SetLineWidth(2);
   Graph_Graph074->SetMarkerStyle(20);
   Graph_Graph074->SetMarkerSize(0.9);
   Graph_Graph074->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph074->GetXaxis()->SetRange(0,91);
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
   
   Double_t Graph_fx75[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph_fy75[20] = { 21.5615, 17.64469, 14.58426, 12.25968, 10.47565, 9.08118, 7.970484, 1.231949, 0.7153127, 0.4843577, 0.3453681, 0.1240497, 0.07078503, 0.04754795, 0.03490977, 0.02711639, 0.02189896,
   0.01819703, 0.01545408, 0.01545408 };
   graph = new TGraph(20,Graph_fx75,Graph_fy75);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph75 = new TH1F("Graph_Graph75","",100,2.7,1099.7);
   Graph_Graph75->SetMinimum(0.01390867);
   Graph_Graph75->SetMaximum(23.7161);
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
   
   Double_t Graph_fx77[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph_fy77[20] = { 23.71765, 19.40916, 16.04269, 13.48565, 11.52322, 9.989298, 8.767532, 1.355144, 0.786844, 0.5327935, 0.3799049, 0.1364547, 0.07786353, 0.05230275, 0.03840075, 0.02982803, 0.02408886,
   0.02001673, 0.01699949, 0.01699949 };
   graph = new TGraph(20,Graph_fx77,Graph_fy77);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph77 = new TH1F("Graph_Graph77","",100,2.7,1099.7);
   Graph_Graph77->SetMinimum(0.01529954);
   Graph_Graph77->SetMaximum(26.08772);
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
   line = new TLine(3.866947,0,3.866947,18.12167);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(3.861947,0,"  3.87 TeV");

   ci = TColor::GetColor("#666666");
   tex->SetTextColor(ci);
   tex->SetTextFont(43);
   tex->SetTextSize(14);
   tex->SetTextAngle(90);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TH1F *Graph_copy = new TH1F("Graph_copy","",100,2.7,1099.7);
   Graph_copy->SetMinimum(1e-06);
   Graph_copy->SetMaximum(1000);
   Graph_copy->SetDirectory(nullptr);
   Graph_copy->SetStats(0);
   Graph_copy->SetLineWidth(2);
   Graph_copy->SetMarkerStyle(20);
   Graph_copy->SetMarkerSize(0.9);
   Graph_copy->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_copy->GetXaxis()->SetRange(0,91);
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
