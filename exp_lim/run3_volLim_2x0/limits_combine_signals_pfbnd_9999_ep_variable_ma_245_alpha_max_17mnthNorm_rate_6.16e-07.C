#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_17mnthNorm_rate_6.16e-07()
{
//=========Macro generated from canvas: climits/climits
//=========  (Thu Jun 11 01:13:38 2026) by ROOT version 6.30/07
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
   
   Double_t Graph0_fx428[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy428[20] = { 757.5462, 10.21849, 10.34327, 6.892724, 6.856261, 6.805988, 6.792314, 12.65785, 17.70313, 23.2699, 28.51126, 53.76754, 55.00202, 53.61712, 54.59753, 53.87332, 52.0452,
   54.09839, 54.3541, 54.3541 };
   TGraph *graph = new TGraph(20,Graph0_fx428,Graph0_fy428);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0428 = new TH1F("Graph_Graph0428","",100,2.7,1099.7);
   Graph_Graph0428->SetMinimum(0.2);
   Graph_Graph0428->SetMaximum(100000);
   Graph_Graph0428->SetDirectory(nullptr);
   Graph_Graph0428->SetStats(0);
   Graph_Graph0428->SetLineWidth(2);
   Graph_Graph0428->SetMarkerStyle(20);
   Graph_Graph0428->SetMarkerSize(0.9);
   Graph_Graph0428->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0428->GetXaxis()->SetRange(0,91);
   Graph_Graph0428->GetXaxis()->SetLabelFont(42);
   Graph_Graph0428->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0428->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0428->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0428->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0428->GetXaxis()->SetTitleFont(42);
   Graph_Graph0428->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0428->GetYaxis()->SetLabelFont(42);
   Graph_Graph0428->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0428->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0428->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0428->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0428->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0428->GetYaxis()->SetTitleFont(42);
   Graph_Graph0428->GetZaxis()->SetLabelFont(42);
   Graph_Graph0428->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0428->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0428->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0428->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0428->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0428);
   
   graph->Draw("al");
   
   Double_t Graph1_fx429[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph1_fy429[42] = { 1720.352, 27.90013, 27.43299, 20.45865, 19.60471, 19.58701, 20.18621, 38.49057, 53.8325, 70.7602, 86.69836, 163.4988, 167.2527, 163.0414, 166.0227, 163.8205, 158.2614,
   164.5049, 165.2825, 165.2825, 165.2825, 16.01794, 16.01794, 16.01794, 15.95112, 15.38306, 15.89619, 16.08023, 15.81265, 16.20134, 15.8579, 9.197354, 7.685111,
   6.031651, 4.53485, 2.699894, 2.772078, 2.86258, 2.705659, 4.135912, 4.369327, 363.4345 };
   graph = new TGraph(42,Graph1_fx429,Graph1_fy429);
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
   
   TH1F *Graph_Graph1429 = new TH1F("Graph_Graph1429","Graph",100,2.7,1099.7);
   Graph_Graph1429->SetMinimum(2.429904);
   Graph_Graph1429->SetMaximum(1892.117);
   Graph_Graph1429->SetDirectory(nullptr);
   Graph_Graph1429->SetStats(0);
   Graph_Graph1429->SetLineWidth(2);
   Graph_Graph1429->SetMarkerStyle(20);
   Graph_Graph1429->SetMarkerSize(0.9);
   Graph_Graph1429->GetXaxis()->SetLabelFont(42);
   Graph_Graph1429->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1429->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1429->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1429->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1429->GetXaxis()->SetTitleFont(42);
   Graph_Graph1429->GetYaxis()->SetLabelFont(42);
   Graph_Graph1429->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1429->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1429->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1429->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1429->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1429->GetYaxis()->SetTitleFont(42);
   Graph_Graph1429->GetZaxis()->SetLabelFont(42);
   Graph_Graph1429->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1429->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1429->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1429->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1429->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1429);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx430[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph2_fy430[42] = { 1160.926, 17.02504, 16.96798, 12.58076, 12.12039, 12.15113, 12.34657, 25.46744, 35.67231, 46.93706, 57.5468, 108.633, 111.1271, 108.3291, 110.3099, 108.8467, 105.1531,
   109.3014, 109.8181, 109.8181, 109.8181, 26.8075, 26.8075, 26.8075, 26.69259, 25.7127, 26.59725, 26.91459, 26.45393, 27.12298, 26.53014, 14.90124, 12.34613,
   9.596146, 7.043092, 4.067349, 4.14373, 4.220541, 4.103988, 6.260527, 6.413775, 508.0431 };
   graph = new TGraph(42,Graph2_fx430,Graph2_fy430);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2430 = new TH1F("Graph_Graph2430","Graph",100,2.7,1099.7);
   Graph_Graph2430->SetMinimum(3.660614);
   Graph_Graph2430->SetMaximum(1276.612);
   Graph_Graph2430->SetDirectory(nullptr);
   Graph_Graph2430->SetStats(0);
   Graph_Graph2430->SetLineWidth(2);
   Graph_Graph2430->SetMarkerStyle(20);
   Graph_Graph2430->SetMarkerSize(0.9);
   Graph_Graph2430->GetXaxis()->SetLabelFont(42);
   Graph_Graph2430->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2430->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2430->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2430->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2430->GetXaxis()->SetTitleFont(42);
   Graph_Graph2430->GetYaxis()->SetLabelFont(42);
   Graph_Graph2430->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2430->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2430->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2430->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2430->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2430->GetYaxis()->SetTitleFont(42);
   Graph_Graph2430->GetZaxis()->SetLabelFont(42);
   Graph_Graph2430->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2430->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2430->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2430->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2430->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2430);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx431[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy431[20] = { 757.5462, 10.21849, 10.34327, 6.892724, 6.856261, 6.805988, 6.792314, 12.65785, 17.70313, 23.2699, 28.51126, 53.76754, 55.00202, 53.61712, 54.59753, 53.87332, 52.0452,
   54.09839, 54.3541, 54.3541 };
   graph = new TGraph(20,Graph0_fx431,Graph0_fy431);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0431 = new TH1F("Graph_Graph0431","",100,2.7,1099.7);
   Graph_Graph0431->SetMinimum(0.2);
   Graph_Graph0431->SetMaximum(100000);
   Graph_Graph0431->SetDirectory(nullptr);
   Graph_Graph0431->SetStats(0);
   Graph_Graph0431->SetLineWidth(2);
   Graph_Graph0431->SetMarkerStyle(20);
   Graph_Graph0431->SetMarkerSize(0.9);
   Graph_Graph0431->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0431->GetXaxis()->SetRange(0,91);
   Graph_Graph0431->GetXaxis()->SetLabelFont(42);
   Graph_Graph0431->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0431->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0431->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0431->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0431->GetXaxis()->SetTitleFont(42);
   Graph_Graph0431->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0431->GetYaxis()->SetLabelFont(42);
   Graph_Graph0431->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0431->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0431->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0431->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0431->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0431->GetYaxis()->SetTitleFont(42);
   Graph_Graph0431->GetZaxis()->SetLabelFont(42);
   Graph_Graph0431->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0431->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0431->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0431->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0431->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0431);
   
   graph->Draw("l");
   
   Double_t Graph_fx432[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph_fy432[20] = { 0, 0, 0, 0, 9.302175e-281, 7.239362e-245, 5.842673e-217, 2.137612e-44, 7.44713e-28, 1.235203e-19, 9.512655e-15, 3.985756e-05, 0.05158081, 1.65004, 12.30267, 44.81367, 109.1386,
   207.533, 335.5566, 335.5566 };
   graph = new TGraph(20,Graph_fx432,Graph_fy432);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph432 = new TH1F("Graph_Graph432","",100,2.7,1099.7);
   Graph_Graph432->SetMinimum(0.3691123);
   Graph_Graph432->SetMaximum(369.1123);
   Graph_Graph432->SetDirectory(nullptr);
   Graph_Graph432->SetStats(0);
   Graph_Graph432->SetLineWidth(2);
   Graph_Graph432->SetMarkerStyle(20);
   Graph_Graph432->SetMarkerSize(0.9);
   Graph_Graph432->GetXaxis()->SetLabelFont(42);
   Graph_Graph432->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph432->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph432->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph432->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph432->GetXaxis()->SetTitleFont(42);
   Graph_Graph432->GetYaxis()->SetLabelFont(42);
   Graph_Graph432->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph432->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph432->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph432->GetYaxis()->SetTickLength(0.02);
   Graph_Graph432->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph432->GetYaxis()->SetTitleFont(42);
   Graph_Graph432->GetZaxis()->SetLabelFont(42);
   Graph_Graph432->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph432->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph432->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph432->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph432->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph432);
   
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
   
   Double_t Graph_fx434[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph_fy434[20] = { 0, 0, 0, 0, 1.023239e-280, 7.963298e-245, 6.42694e-217, 2.351373e-44, 8.191843e-28, 1.358723e-19, 1.046392e-14, 4.384332e-05, 0.05673889, 1.815044, 13.53294, 49.29504, 120.0525,
   228.2863, 369.1123, 369.1123 };
   graph = new TGraph(20,Graph_fx434,Graph_fy434);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph434 = new TH1F("Graph_Graph434","",100,2.7,1099.7);
   Graph_Graph434->SetMinimum(0.4060235);
   Graph_Graph434->SetMaximum(406.0235);
   Graph_Graph434->SetDirectory(nullptr);
   Graph_Graph434->SetStats(0);
   Graph_Graph434->SetLineWidth(2);
   Graph_Graph434->SetMarkerStyle(20);
   Graph_Graph434->SetMarkerSize(0.9);
   Graph_Graph434->GetXaxis()->SetLabelFont(42);
   Graph_Graph434->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph434->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph434->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph434->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph434->GetXaxis()->SetTitleFont(42);
   Graph_Graph434->GetYaxis()->SetLabelFont(42);
   Graph_Graph434->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph434->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph434->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph434->GetYaxis()->SetTickLength(0.02);
   Graph_Graph434->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph434->GetYaxis()->SetTitleFont(42);
   Graph_Graph434->GetZaxis()->SetLabelFont(42);
   Graph_Graph434->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph434->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph434->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph434->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph434->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph434);
   
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
   line = new TLine(619.9131,0,619.9131,53.50424);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(619.9081,0,"  619.91 TeV");

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
   pt_LaTex = pt->AddText("#varepsilon = 6.16e-07");
   pt_LaTex = pt->AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
