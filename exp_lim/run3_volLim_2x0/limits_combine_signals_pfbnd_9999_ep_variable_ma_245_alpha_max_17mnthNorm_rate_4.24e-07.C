#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_17mnthNorm_rate_4.24e-07()
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
   
   Double_t Graph0_fx372[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy372[20] = { 757.5462, 10.21849, 10.34327, 6.892724, 6.856261, 6.805988, 6.792314, 12.65785, 17.70313, 23.2699, 28.51126, 53.76754, 55.00202, 53.61712, 54.59753, 53.87332, 52.0452,
   54.09839, 54.3541, 54.3541 };
   TGraph *graph = new TGraph(20,Graph0_fx372,Graph0_fy372);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0372 = new TH1F("Graph_Graph0372","",100,2.7,1099.7);
   Graph_Graph0372->SetMinimum(0.2);
   Graph_Graph0372->SetMaximum(100000);
   Graph_Graph0372->SetDirectory(nullptr);
   Graph_Graph0372->SetStats(0);
   Graph_Graph0372->SetLineWidth(2);
   Graph_Graph0372->SetMarkerStyle(20);
   Graph_Graph0372->SetMarkerSize(0.9);
   Graph_Graph0372->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0372->GetXaxis()->SetRange(0,91);
   Graph_Graph0372->GetXaxis()->SetLabelFont(42);
   Graph_Graph0372->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0372->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0372->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0372->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0372->GetXaxis()->SetTitleFont(42);
   Graph_Graph0372->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0372->GetYaxis()->SetLabelFont(42);
   Graph_Graph0372->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0372->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0372->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0372->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0372->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0372->GetYaxis()->SetTitleFont(42);
   Graph_Graph0372->GetZaxis()->SetLabelFont(42);
   Graph_Graph0372->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0372->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0372->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0372->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0372->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0372);
   
   graph->Draw("al");
   
   Double_t Graph1_fx373[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph1_fy373[42] = { 1720.352, 27.90013, 27.43299, 20.45865, 19.60471, 19.58701, 20.18621, 38.49057, 53.8325, 70.7602, 86.69836, 163.4988, 167.2527, 163.0414, 166.0227, 163.8205, 158.2614,
   164.5049, 165.2825, 165.2825, 165.2825, 16.01794, 16.01794, 16.01794, 15.95112, 15.38306, 15.89619, 16.08023, 15.81265, 16.20134, 15.8579, 9.197354, 7.685111,
   6.031651, 4.53485, 2.699894, 2.772078, 2.86258, 2.705659, 4.135912, 4.369327, 363.4345 };
   graph = new TGraph(42,Graph1_fx373,Graph1_fy373);
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
   
   TH1F *Graph_Graph1373 = new TH1F("Graph_Graph1373","Graph",100,2.7,1099.7);
   Graph_Graph1373->SetMinimum(2.429904);
   Graph_Graph1373->SetMaximum(1892.117);
   Graph_Graph1373->SetDirectory(nullptr);
   Graph_Graph1373->SetStats(0);
   Graph_Graph1373->SetLineWidth(2);
   Graph_Graph1373->SetMarkerStyle(20);
   Graph_Graph1373->SetMarkerSize(0.9);
   Graph_Graph1373->GetXaxis()->SetLabelFont(42);
   Graph_Graph1373->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1373->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1373->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1373->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1373->GetXaxis()->SetTitleFont(42);
   Graph_Graph1373->GetYaxis()->SetLabelFont(42);
   Graph_Graph1373->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1373->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1373->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1373->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1373->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1373->GetYaxis()->SetTitleFont(42);
   Graph_Graph1373->GetZaxis()->SetLabelFont(42);
   Graph_Graph1373->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1373->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1373->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1373->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1373->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1373);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx374[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph2_fy374[42] = { 1160.926, 17.02504, 16.96798, 12.58076, 12.12039, 12.15113, 12.34657, 25.46744, 35.67231, 46.93706, 57.5468, 108.633, 111.1271, 108.3291, 110.3099, 108.8467, 105.1531,
   109.3014, 109.8181, 109.8181, 109.8181, 26.8075, 26.8075, 26.8075, 26.69259, 25.7127, 26.59725, 26.91459, 26.45393, 27.12298, 26.53014, 14.90124, 12.34613,
   9.596146, 7.043092, 4.067349, 4.14373, 4.220541, 4.103988, 6.260527, 6.413775, 508.0431 };
   graph = new TGraph(42,Graph2_fx374,Graph2_fy374);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2374 = new TH1F("Graph_Graph2374","Graph",100,2.7,1099.7);
   Graph_Graph2374->SetMinimum(3.660614);
   Graph_Graph2374->SetMaximum(1276.612);
   Graph_Graph2374->SetDirectory(nullptr);
   Graph_Graph2374->SetStats(0);
   Graph_Graph2374->SetLineWidth(2);
   Graph_Graph2374->SetMarkerStyle(20);
   Graph_Graph2374->SetMarkerSize(0.9);
   Graph_Graph2374->GetXaxis()->SetLabelFont(42);
   Graph_Graph2374->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2374->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2374->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2374->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2374->GetXaxis()->SetTitleFont(42);
   Graph_Graph2374->GetYaxis()->SetLabelFont(42);
   Graph_Graph2374->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2374->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2374->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2374->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2374->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2374->GetYaxis()->SetTitleFont(42);
   Graph_Graph2374->GetZaxis()->SetLabelFont(42);
   Graph_Graph2374->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2374->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2374->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2374->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2374->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2374);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx375[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy375[20] = { 757.5462, 10.21849, 10.34327, 6.892724, 6.856261, 6.805988, 6.792314, 12.65785, 17.70313, 23.2699, 28.51126, 53.76754, 55.00202, 53.61712, 54.59753, 53.87332, 52.0452,
   54.09839, 54.3541, 54.3541 };
   graph = new TGraph(20,Graph0_fx375,Graph0_fy375);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0375 = new TH1F("Graph_Graph0375","",100,2.7,1099.7);
   Graph_Graph0375->SetMinimum(0.2);
   Graph_Graph0375->SetMaximum(100000);
   Graph_Graph0375->SetDirectory(nullptr);
   Graph_Graph0375->SetStats(0);
   Graph_Graph0375->SetLineWidth(2);
   Graph_Graph0375->SetMarkerStyle(20);
   Graph_Graph0375->SetMarkerSize(0.9);
   Graph_Graph0375->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0375->GetXaxis()->SetRange(0,91);
   Graph_Graph0375->GetXaxis()->SetLabelFont(42);
   Graph_Graph0375->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0375->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0375->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0375->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0375->GetXaxis()->SetTitleFont(42);
   Graph_Graph0375->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0375->GetYaxis()->SetLabelFont(42);
   Graph_Graph0375->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0375->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0375->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0375->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0375->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0375->GetYaxis()->SetTitleFont(42);
   Graph_Graph0375->GetZaxis()->SetLabelFont(42);
   Graph_Graph0375->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0375->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0375->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0375->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0375->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0375);
   
   graph->Draw("l");
   
   Double_t Graph_fx376[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph_fy376[20] = { 0, 6.877284e-232, 2.639341e-184, 1.330357e-152, 5.677504e-130, 5.19979e-113, 7.94538e-100, 1.520957e-18, 7.771335e-11, 4.936325e-07, 8.508685e-05, 1.785918, 39.54598, 165.478, 364.1027, 587.8789, 800.6904,
   984.6466, 1134.308, 1134.308 };
   graph = new TGraph(20,Graph_fx376,Graph_fy376);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph376 = new TH1F("Graph_Graph376","",100,2.7,1099.7);
   Graph_Graph376->SetMinimum(1.247739);
   Graph_Graph376->SetMaximum(1247.739);
   Graph_Graph376->SetDirectory(nullptr);
   Graph_Graph376->SetStats(0);
   Graph_Graph376->SetLineWidth(2);
   Graph_Graph376->SetMarkerStyle(20);
   Graph_Graph376->SetMarkerSize(0.9);
   Graph_Graph376->GetXaxis()->SetLabelFont(42);
   Graph_Graph376->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph376->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph376->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph376->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph376->GetXaxis()->SetTitleFont(42);
   Graph_Graph376->GetYaxis()->SetLabelFont(42);
   Graph_Graph376->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph376->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph376->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph376->GetYaxis()->SetTickLength(0.02);
   Graph_Graph376->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph376->GetYaxis()->SetTitleFont(42);
   Graph_Graph376->GetZaxis()->SetLabelFont(42);
   Graph_Graph376->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph376->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph376->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph376->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph376->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph376);
   
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
   
   Double_t Graph_fx378[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph_fy378[20] = { 0, 7.565012e-232, 2.903275e-184, 1.463393e-152, 6.245254e-130, 5.719769e-113, 8.739918e-100, 1.673053e-18, 8.548469e-11, 5.429957e-07, 9.359554e-05, 1.96451, 43.50058, 182.0258, 400.513, 646.6668, 880.7594,
   1083.111, 1247.739, 1247.739 };
   graph = new TGraph(20,Graph_fx378,Graph_fy378);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph378 = new TH1F("Graph_Graph378","",100,2.7,1099.7);
   Graph_Graph378->SetMinimum(1.372513);
   Graph_Graph378->SetMaximum(1372.513);
   Graph_Graph378->SetDirectory(nullptr);
   Graph_Graph378->SetStats(0);
   Graph_Graph378->SetLineWidth(2);
   Graph_Graph378->SetMarkerStyle(20);
   Graph_Graph378->SetMarkerSize(0.9);
   Graph_Graph378->GetXaxis()->SetLabelFont(42);
   Graph_Graph378->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph378->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph378->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph378->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph378->GetXaxis()->SetTitleFont(42);
   Graph_Graph378->GetYaxis()->SetLabelFont(42);
   Graph_Graph378->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph378->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph378->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph378->GetYaxis()->SetTickLength(0.02);
   Graph_Graph378->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph378->GetYaxis()->SetTitleFont(42);
   Graph_Graph378->GetZaxis()->SetLabelFont(42);
   Graph_Graph378->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph378->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph378->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph378->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph378->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph378);
   
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
   line = new TLine(322.6448,0,322.6448,54.68531);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(322.6398,0,"  322.64 TeV");

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
   pt_LaTex = pt->AddText("#varepsilon = 4.24e-07");
   pt_LaTex = pt->AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
