#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_17mnthNorm_rate_4.4e-08()
{
//=========Macro generated from canvas: climits/climits
//=========  (Thu Jun 11 01:13:35 2026) by ROOT version 6.30/07
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
   
   Double_t Graph0_fx155[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy155[20] = { 757.5462, 10.21849, 10.34327, 6.892724, 6.856261, 6.805988, 6.792314, 12.65785, 17.70313, 23.2699, 28.51126, 53.76754, 55.00202, 53.61712, 54.59753, 53.87332, 52.0452,
   54.09839, 54.3541, 54.3541 };
   TGraph *graph = new TGraph(20,Graph0_fx155,Graph0_fy155);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0155 = new TH1F("Graph_Graph0155","",100,2.7,1099.7);
   Graph_Graph0155->SetMinimum(0.2);
   Graph_Graph0155->SetMaximum(100000);
   Graph_Graph0155->SetDirectory(nullptr);
   Graph_Graph0155->SetStats(0);
   Graph_Graph0155->SetLineWidth(2);
   Graph_Graph0155->SetMarkerStyle(20);
   Graph_Graph0155->SetMarkerSize(0.9);
   Graph_Graph0155->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0155->GetXaxis()->SetRange(0,91);
   Graph_Graph0155->GetXaxis()->SetLabelFont(42);
   Graph_Graph0155->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0155->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0155->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0155->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0155->GetXaxis()->SetTitleFont(42);
   Graph_Graph0155->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0155->GetYaxis()->SetLabelFont(42);
   Graph_Graph0155->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0155->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0155->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0155->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0155->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0155->GetYaxis()->SetTitleFont(42);
   Graph_Graph0155->GetZaxis()->SetLabelFont(42);
   Graph_Graph0155->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0155->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0155->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0155->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0155->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0155);
   
   graph->Draw("al");
   
   Double_t Graph1_fx156[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph1_fy156[42] = { 1720.352, 27.90013, 27.43299, 20.45865, 19.60471, 19.58701, 20.18621, 38.49057, 53.8325, 70.7602, 86.69836, 163.4988, 167.2527, 163.0414, 166.0227, 163.8205, 158.2614,
   164.5049, 165.2825, 165.2825, 165.2825, 16.01794, 16.01794, 16.01794, 15.95112, 15.38306, 15.89619, 16.08023, 15.81265, 16.20134, 15.8579, 9.197354, 7.685111,
   6.031651, 4.53485, 2.699894, 2.772078, 2.86258, 2.705659, 4.135912, 4.369327, 363.4345 };
   graph = new TGraph(42,Graph1_fx156,Graph1_fy156);
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
   
   TH1F *Graph_Graph1156 = new TH1F("Graph_Graph1156","Graph",100,2.7,1099.7);
   Graph_Graph1156->SetMinimum(2.429904);
   Graph_Graph1156->SetMaximum(1892.117);
   Graph_Graph1156->SetDirectory(nullptr);
   Graph_Graph1156->SetStats(0);
   Graph_Graph1156->SetLineWidth(2);
   Graph_Graph1156->SetMarkerStyle(20);
   Graph_Graph1156->SetMarkerSize(0.9);
   Graph_Graph1156->GetXaxis()->SetLabelFont(42);
   Graph_Graph1156->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1156->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1156->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1156->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1156->GetXaxis()->SetTitleFont(42);
   Graph_Graph1156->GetYaxis()->SetLabelFont(42);
   Graph_Graph1156->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1156->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1156->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1156->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1156->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1156->GetYaxis()->SetTitleFont(42);
   Graph_Graph1156->GetZaxis()->SetLabelFont(42);
   Graph_Graph1156->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1156->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1156->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1156->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1156->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1156);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx157[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph2_fy157[42] = { 1160.926, 17.02504, 16.96798, 12.58076, 12.12039, 12.15113, 12.34657, 25.46744, 35.67231, 46.93706, 57.5468, 108.633, 111.1271, 108.3291, 110.3099, 108.8467, 105.1531,
   109.3014, 109.8181, 109.8181, 109.8181, 26.8075, 26.8075, 26.8075, 26.69259, 25.7127, 26.59725, 26.91459, 26.45393, 27.12298, 26.53014, 14.90124, 12.34613,
   9.596146, 7.043092, 4.067349, 4.14373, 4.220541, 4.103988, 6.260527, 6.413775, 508.0431 };
   graph = new TGraph(42,Graph2_fx157,Graph2_fy157);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2157 = new TH1F("Graph_Graph2157","Graph",100,2.7,1099.7);
   Graph_Graph2157->SetMinimum(3.660614);
   Graph_Graph2157->SetMaximum(1276.612);
   Graph_Graph2157->SetDirectory(nullptr);
   Graph_Graph2157->SetStats(0);
   Graph_Graph2157->SetLineWidth(2);
   Graph_Graph2157->SetMarkerStyle(20);
   Graph_Graph2157->SetMarkerSize(0.9);
   Graph_Graph2157->GetXaxis()->SetLabelFont(42);
   Graph_Graph2157->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2157->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2157->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2157->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2157->GetXaxis()->SetTitleFont(42);
   Graph_Graph2157->GetYaxis()->SetLabelFont(42);
   Graph_Graph2157->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2157->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2157->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2157->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2157->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2157->GetYaxis()->SetTitleFont(42);
   Graph_Graph2157->GetZaxis()->SetLabelFont(42);
   Graph_Graph2157->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2157->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2157->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2157->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2157->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2157);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx158[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy158[20] = { 757.5462, 10.21849, 10.34327, 6.892724, 6.856261, 6.805988, 6.792314, 12.65785, 17.70313, 23.2699, 28.51126, 53.76754, 55.00202, 53.61712, 54.59753, 53.87332, 52.0452,
   54.09839, 54.3541, 54.3541 };
   graph = new TGraph(20,Graph0_fx158,Graph0_fy158);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0158 = new TH1F("Graph_Graph0158","",100,2.7,1099.7);
   Graph_Graph0158->SetMinimum(0.2);
   Graph_Graph0158->SetMaximum(100000);
   Graph_Graph0158->SetDirectory(nullptr);
   Graph_Graph0158->SetStats(0);
   Graph_Graph0158->SetLineWidth(2);
   Graph_Graph0158->SetMarkerStyle(20);
   Graph_Graph0158->SetMarkerSize(0.9);
   Graph_Graph0158->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0158->GetXaxis()->SetRange(0,91);
   Graph_Graph0158->GetXaxis()->SetLabelFont(42);
   Graph_Graph0158->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0158->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0158->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0158->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0158->GetXaxis()->SetTitleFont(42);
   Graph_Graph0158->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0158->GetYaxis()->SetLabelFont(42);
   Graph_Graph0158->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0158->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0158->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0158->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0158->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0158->GetYaxis()->SetTitleFont(42);
   Graph_Graph0158->GetZaxis()->SetLabelFont(42);
   Graph_Graph0158->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0158->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0158->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0158->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0158->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0158);
   
   graph->Draw("l");
   
   Double_t Graph_fx159[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph_fy159[20] = { 1.753594, 8.445514, 20.21873, 34.53452, 48.96517, 62.05798, 73.18697, 70.62568, 48.96007, 36.22434, 27.24014, 10.882, 6.433533, 4.398833, 3.264158, 2.553496, 2.072651,
   1.728831, 1.472577, 1.472577 };
   graph = new TGraph(20,Graph_fx159,Graph_fy159);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph159 = new TH1F("Graph_Graph159","",100,2.7,1099.7);
   Graph_Graph159->SetMinimum(1.325319);
   Graph_Graph159->SetMaximum(80.35841);
   Graph_Graph159->SetDirectory(nullptr);
   Graph_Graph159->SetStats(0);
   Graph_Graph159->SetLineWidth(2);
   Graph_Graph159->SetMarkerStyle(20);
   Graph_Graph159->SetMarkerSize(0.9);
   Graph_Graph159->GetXaxis()->SetLabelFont(42);
   Graph_Graph159->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph159->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph159->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph159->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph159->GetXaxis()->SetTitleFont(42);
   Graph_Graph159->GetYaxis()->SetLabelFont(42);
   Graph_Graph159->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph159->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph159->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph159->GetYaxis()->SetTickLength(0.02);
   Graph_Graph159->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph159->GetYaxis()->SetTitleFont(42);
   Graph_Graph159->GetZaxis()->SetLabelFont(42);
   Graph_Graph159->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph159->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph159->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph159->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph159->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph159);
   
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
   
   Double_t Graph_fx161[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph_fy161[20] = { 1.928953, 9.290065, 22.2406, 37.98797, 53.86169, 68.26378, 80.50567, 77.68825, 53.85608, 39.84677, 29.96415, 11.9702, 7.076886, 4.838716, 3.590574, 2.808846, 2.279916,
   1.901714, 1.619835, 1.619835 };
   graph = new TGraph(20,Graph_fx161,Graph_fy161);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph161 = new TH1F("Graph_Graph161","",100,2.7,1099.7);
   Graph_Graph161->SetMinimum(1.457851);
   Graph_Graph161->SetMaximum(88.39425);
   Graph_Graph161->SetDirectory(nullptr);
   Graph_Graph161->SetStats(0);
   Graph_Graph161->SetLineWidth(2);
   Graph_Graph161->SetMarkerStyle(20);
   Graph_Graph161->SetMarkerSize(0.9);
   Graph_Graph161->GetXaxis()->SetLabelFont(42);
   Graph_Graph161->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph161->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph161->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph161->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph161->GetXaxis()->SetTitleFont(42);
   Graph_Graph161->GetYaxis()->SetLabelFont(42);
   Graph_Graph161->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph161->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph161->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph161->GetYaxis()->SetTickLength(0.02);
   Graph_Graph161->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph161->GetYaxis()->SetTitleFont(42);
   Graph_Graph161->GetZaxis()->SetLabelFont(42);
   Graph_Graph161->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph161->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph161->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph161->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph161->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph161);
   
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
   line = new TLine(4.22137,0,4.22137,10.24598);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(4.21637,0,"  4.22 TeV");

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
   pt_LaTex = pt->AddText("#varepsilon = 4.4e-08");
   pt_LaTex = pt->AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
