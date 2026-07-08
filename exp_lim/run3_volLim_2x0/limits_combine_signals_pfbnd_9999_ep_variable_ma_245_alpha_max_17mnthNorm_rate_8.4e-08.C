#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_17mnthNorm_rate_8.4e-08()
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
   
   Double_t Graph0_fx183[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy183[20] = { 757.5462, 10.21849, 10.34327, 6.892724, 6.856261, 6.805988, 6.792314, 12.65785, 17.70313, 23.2699, 28.51126, 53.76754, 55.00202, 53.61712, 54.59753, 53.87332, 52.0452,
   54.09839, 54.3541, 54.3541 };
   TGraph *graph = new TGraph(20,Graph0_fx183,Graph0_fy183);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0183 = new TH1F("Graph_Graph0183","",100,2.7,1099.7);
   Graph_Graph0183->SetMinimum(0.2);
   Graph_Graph0183->SetMaximum(100000);
   Graph_Graph0183->SetDirectory(nullptr);
   Graph_Graph0183->SetStats(0);
   Graph_Graph0183->SetLineWidth(2);
   Graph_Graph0183->SetMarkerStyle(20);
   Graph_Graph0183->SetMarkerSize(0.9);
   Graph_Graph0183->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0183->GetXaxis()->SetRange(0,91);
   Graph_Graph0183->GetXaxis()->SetLabelFont(42);
   Graph_Graph0183->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0183->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0183->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0183->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0183->GetXaxis()->SetTitleFont(42);
   Graph_Graph0183->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0183->GetYaxis()->SetLabelFont(42);
   Graph_Graph0183->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0183->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0183->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0183->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0183->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0183->GetYaxis()->SetTitleFont(42);
   Graph_Graph0183->GetZaxis()->SetLabelFont(42);
   Graph_Graph0183->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0183->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0183->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0183->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0183->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0183);
   
   graph->Draw("al");
   
   Double_t Graph1_fx184[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph1_fy184[42] = { 1720.352, 27.90013, 27.43299, 20.45865, 19.60471, 19.58701, 20.18621, 38.49057, 53.8325, 70.7602, 86.69836, 163.4988, 167.2527, 163.0414, 166.0227, 163.8205, 158.2614,
   164.5049, 165.2825, 165.2825, 165.2825, 16.01794, 16.01794, 16.01794, 15.95112, 15.38306, 15.89619, 16.08023, 15.81265, 16.20134, 15.8579, 9.197354, 7.685111,
   6.031651, 4.53485, 2.699894, 2.772078, 2.86258, 2.705659, 4.135912, 4.369327, 363.4345 };
   graph = new TGraph(42,Graph1_fx184,Graph1_fy184);
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
   
   TH1F *Graph_Graph1184 = new TH1F("Graph_Graph1184","Graph",100,2.7,1099.7);
   Graph_Graph1184->SetMinimum(2.429904);
   Graph_Graph1184->SetMaximum(1892.117);
   Graph_Graph1184->SetDirectory(nullptr);
   Graph_Graph1184->SetStats(0);
   Graph_Graph1184->SetLineWidth(2);
   Graph_Graph1184->SetMarkerStyle(20);
   Graph_Graph1184->SetMarkerSize(0.9);
   Graph_Graph1184->GetXaxis()->SetLabelFont(42);
   Graph_Graph1184->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1184->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1184->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1184->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1184->GetXaxis()->SetTitleFont(42);
   Graph_Graph1184->GetYaxis()->SetLabelFont(42);
   Graph_Graph1184->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1184->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1184->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1184->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1184->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1184->GetYaxis()->SetTitleFont(42);
   Graph_Graph1184->GetZaxis()->SetLabelFont(42);
   Graph_Graph1184->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1184->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1184->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1184->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1184->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1184);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx185[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph2_fy185[42] = { 1160.926, 17.02504, 16.96798, 12.58076, 12.12039, 12.15113, 12.34657, 25.46744, 35.67231, 46.93706, 57.5468, 108.633, 111.1271, 108.3291, 110.3099, 108.8467, 105.1531,
   109.3014, 109.8181, 109.8181, 109.8181, 26.8075, 26.8075, 26.8075, 26.69259, 25.7127, 26.59725, 26.91459, 26.45393, 27.12298, 26.53014, 14.90124, 12.34613,
   9.596146, 7.043092, 4.067349, 4.14373, 4.220541, 4.103988, 6.260527, 6.413775, 508.0431 };
   graph = new TGraph(42,Graph2_fx185,Graph2_fy185);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2185 = new TH1F("Graph_Graph2185","Graph",100,2.7,1099.7);
   Graph_Graph2185->SetMinimum(3.660614);
   Graph_Graph2185->SetMaximum(1276.612);
   Graph_Graph2185->SetDirectory(nullptr);
   Graph_Graph2185->SetStats(0);
   Graph_Graph2185->SetLineWidth(2);
   Graph_Graph2185->SetMarkerStyle(20);
   Graph_Graph2185->SetMarkerSize(0.9);
   Graph_Graph2185->GetXaxis()->SetLabelFont(42);
   Graph_Graph2185->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2185->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2185->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2185->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2185->GetXaxis()->SetTitleFont(42);
   Graph_Graph2185->GetYaxis()->SetLabelFont(42);
   Graph_Graph2185->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2185->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2185->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2185->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2185->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2185->GetYaxis()->SetTitleFont(42);
   Graph_Graph2185->GetZaxis()->SetLabelFont(42);
   Graph_Graph2185->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2185->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2185->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2185->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2185->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2185);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx186[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy186[20] = { 757.5462, 10.21849, 10.34327, 6.892724, 6.856261, 6.805988, 6.792314, 12.65785, 17.70313, 23.2699, 28.51126, 53.76754, 55.00202, 53.61712, 54.59753, 53.87332, 52.0452,
   54.09839, 54.3541, 54.3541 };
   graph = new TGraph(20,Graph0_fx186,Graph0_fy186);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0186 = new TH1F("Graph_Graph0186","",100,2.7,1099.7);
   Graph_Graph0186->SetMinimum(0.2);
   Graph_Graph0186->SetMaximum(100000);
   Graph_Graph0186->SetDirectory(nullptr);
   Graph_Graph0186->SetStats(0);
   Graph_Graph0186->SetLineWidth(2);
   Graph_Graph0186->SetMarkerStyle(20);
   Graph_Graph0186->SetMarkerSize(0.9);
   Graph_Graph0186->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0186->GetXaxis()->SetRange(0,91);
   Graph_Graph0186->GetXaxis()->SetLabelFont(42);
   Graph_Graph0186->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0186->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0186->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0186->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0186->GetXaxis()->SetTitleFont(42);
   Graph_Graph0186->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0186->GetYaxis()->SetLabelFont(42);
   Graph_Graph0186->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0186->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0186->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0186->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0186->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0186->GetYaxis()->SetTitleFont(42);
   Graph_Graph0186->GetZaxis()->SetLabelFont(42);
   Graph_Graph0186->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0186->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0186->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0186->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0186->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0186);
   
   graph->Draw("l");
   
   Double_t Graph_fx187[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph_fy187[20] = { 2.027902e-08, 1.798006e-05, 0.0009838913, 0.01353523, 0.08516394, 0.3300147, 0.9282764, 196.2253, 229.1601, 220.0644, 193.513, 105.7091, 69.36718, 49.96807, 38.25749, 30.55911, 25.17696,
   21.23652, 18.24668, 18.24668 };
   graph = new TGraph(20,Graph_fx187,Graph_fy187);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph187 = new TH1F("Graph_Graph187","",100,2.7,1099.7);
   Graph_Graph187->SetMinimum(1.825112e-08);
   Graph_Graph187->SetMaximum(252.0761);
   Graph_Graph187->SetDirectory(nullptr);
   Graph_Graph187->SetStats(0);
   Graph_Graph187->SetLineWidth(2);
   Graph_Graph187->SetMarkerStyle(20);
   Graph_Graph187->SetMarkerSize(0.9);
   Graph_Graph187->GetXaxis()->SetLabelFont(42);
   Graph_Graph187->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph187->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph187->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph187->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph187->GetXaxis()->SetTitleFont(42);
   Graph_Graph187->GetYaxis()->SetLabelFont(42);
   Graph_Graph187->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph187->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph187->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph187->GetYaxis()->SetTickLength(0.02);
   Graph_Graph187->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph187->GetYaxis()->SetTitleFont(42);
   Graph_Graph187->GetZaxis()->SetLabelFont(42);
   Graph_Graph187->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph187->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph187->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph187->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph187->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph187);
   
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
   
   Double_t Graph_fx189[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph_fy189[20] = { 2.230692e-08, 1.977807e-05, 0.00108228, 0.01488875, 0.09368033, 0.3630162, 1.021104, 215.8478, 252.0761, 242.0708, 212.8643, 116.28, 76.3039, 54.96488, 42.08324, 33.61502, 27.69466,
   23.36017, 20.07135, 20.07135 };
   graph = new TGraph(20,Graph_fx189,Graph_fy189);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph189 = new TH1F("Graph_Graph189","",100,2.7,1099.7);
   Graph_Graph189->SetMinimum(2.007623e-08);
   Graph_Graph189->SetMaximum(277.2837);
   Graph_Graph189->SetDirectory(nullptr);
   Graph_Graph189->SetStats(0);
   Graph_Graph189->SetLineWidth(2);
   Graph_Graph189->SetMarkerStyle(20);
   Graph_Graph189->SetMarkerSize(0.9);
   Graph_Graph189->GetXaxis()->SetLabelFont(42);
   Graph_Graph189->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph189->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph189->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph189->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph189->GetXaxis()->SetTitleFont(42);
   Graph_Graph189->GetYaxis()->SetLabelFont(42);
   Graph_Graph189->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph189->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph189->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph189->GetYaxis()->SetTickLength(0.02);
   Graph_Graph189->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph189->GetYaxis()->SetTitleFont(42);
   Graph_Graph189->GetZaxis()->SetLabelFont(42);
   Graph_Graph189->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph189->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph189->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph189->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph189->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph189);
   
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
   line = new TLine(22.04039,0,22.04039,8.8255);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(22.03539,0,"  22.04 TeV");

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
   pt_LaTex = pt->AddText("#varepsilon = 8.4e-08");
   pt_LaTex = pt->AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
