#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_17mnthNorm_rate_1.3e-08()
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
   
   Double_t Graph0_fx64[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy64[20] = { 757.5462, 10.21849, 10.34327, 6.892724, 6.856261, 6.805988, 6.792314, 12.65785, 17.70313, 23.2699, 28.51126, 53.76754, 55.00202, 53.61712, 54.59753, 53.87332, 52.0452,
   54.09839, 54.3541, 54.3541 };
   TGraph *graph = new TGraph(20,Graph0_fx64,Graph0_fy64);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph064 = new TH1F("Graph_Graph064","",100,2.7,1099.7);
   Graph_Graph064->SetMinimum(0.2);
   Graph_Graph064->SetMaximum(100000);
   Graph_Graph064->SetDirectory(nullptr);
   Graph_Graph064->SetStats(0);
   Graph_Graph064->SetLineWidth(2);
   Graph_Graph064->SetMarkerStyle(20);
   Graph_Graph064->SetMarkerSize(0.9);
   Graph_Graph064->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph064->GetXaxis()->SetRange(0,91);
   Graph_Graph064->GetXaxis()->SetLabelFont(42);
   Graph_Graph064->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph064->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph064->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph064->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph064->GetXaxis()->SetTitleFont(42);
   Graph_Graph064->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph064->GetYaxis()->SetLabelFont(42);
   Graph_Graph064->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph064->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph064->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph064->GetYaxis()->SetTickLength(0.02);
   Graph_Graph064->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph064->GetYaxis()->SetTitleFont(42);
   Graph_Graph064->GetZaxis()->SetLabelFont(42);
   Graph_Graph064->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph064->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph064->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph064->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph064->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph064);
   
   graph->Draw("al");
   
   Double_t Graph1_fx65[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph1_fy65[42] = { 1720.352, 27.90013, 27.43299, 20.45865, 19.60471, 19.58701, 20.18621, 38.49057, 53.8325, 70.7602, 86.69836, 163.4988, 167.2527, 163.0414, 166.0227, 163.8205, 158.2614,
   164.5049, 165.2825, 165.2825, 165.2825, 16.01794, 16.01794, 16.01794, 15.95112, 15.38306, 15.89619, 16.08023, 15.81265, 16.20134, 15.8579, 9.197354, 7.685111,
   6.031651, 4.53485, 2.699894, 2.772078, 2.86258, 2.705659, 4.135912, 4.369327, 363.4345 };
   graph = new TGraph(42,Graph1_fx65,Graph1_fy65);
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
   
   TH1F *Graph_Graph165 = new TH1F("Graph_Graph165","Graph",100,2.7,1099.7);
   Graph_Graph165->SetMinimum(2.429904);
   Graph_Graph165->SetMaximum(1892.117);
   Graph_Graph165->SetDirectory(nullptr);
   Graph_Graph165->SetStats(0);
   Graph_Graph165->SetLineWidth(2);
   Graph_Graph165->SetMarkerStyle(20);
   Graph_Graph165->SetMarkerSize(0.9);
   Graph_Graph165->GetXaxis()->SetLabelFont(42);
   Graph_Graph165->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph165->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph165->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph165->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph165->GetXaxis()->SetTitleFont(42);
   Graph_Graph165->GetYaxis()->SetLabelFont(42);
   Graph_Graph165->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph165->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph165->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph165->GetYaxis()->SetTickLength(0.02);
   Graph_Graph165->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph165->GetYaxis()->SetTitleFont(42);
   Graph_Graph165->GetZaxis()->SetLabelFont(42);
   Graph_Graph165->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph165->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph165->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph165->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph165->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph165);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx66[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph2_fy66[42] = { 1160.926, 17.02504, 16.96798, 12.58076, 12.12039, 12.15113, 12.34657, 25.46744, 35.67231, 46.93706, 57.5468, 108.633, 111.1271, 108.3291, 110.3099, 108.8467, 105.1531,
   109.3014, 109.8181, 109.8181, 109.8181, 26.8075, 26.8075, 26.8075, 26.69259, 25.7127, 26.59725, 26.91459, 26.45393, 27.12298, 26.53014, 14.90124, 12.34613,
   9.596146, 7.043092, 4.067349, 4.14373, 4.220541, 4.103988, 6.260527, 6.413775, 508.0431 };
   graph = new TGraph(42,Graph2_fx66,Graph2_fy66);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph266 = new TH1F("Graph_Graph266","Graph",100,2.7,1099.7);
   Graph_Graph266->SetMinimum(3.660614);
   Graph_Graph266->SetMaximum(1276.612);
   Graph_Graph266->SetDirectory(nullptr);
   Graph_Graph266->SetStats(0);
   Graph_Graph266->SetLineWidth(2);
   Graph_Graph266->SetMarkerStyle(20);
   Graph_Graph266->SetMarkerSize(0.9);
   Graph_Graph266->GetXaxis()->SetLabelFont(42);
   Graph_Graph266->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph266->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph266->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph266->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph266->GetXaxis()->SetTitleFont(42);
   Graph_Graph266->GetYaxis()->SetLabelFont(42);
   Graph_Graph266->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph266->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph266->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph266->GetYaxis()->SetTickLength(0.02);
   Graph_Graph266->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph266->GetYaxis()->SetTitleFont(42);
   Graph_Graph266->GetZaxis()->SetLabelFont(42);
   Graph_Graph266->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph266->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph266->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph266->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph266->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph266);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx67[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy67[20] = { 757.5462, 10.21849, 10.34327, 6.892724, 6.856261, 6.805988, 6.792314, 12.65785, 17.70313, 23.2699, 28.51126, 53.76754, 55.00202, 53.61712, 54.59753, 53.87332, 52.0452,
   54.09839, 54.3541, 54.3541 };
   graph = new TGraph(20,Graph0_fx67,Graph0_fy67);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph067 = new TH1F("Graph_Graph067","",100,2.7,1099.7);
   Graph_Graph067->SetMinimum(0.2);
   Graph_Graph067->SetMaximum(100000);
   Graph_Graph067->SetDirectory(nullptr);
   Graph_Graph067->SetStats(0);
   Graph_Graph067->SetLineWidth(2);
   Graph_Graph067->SetMarkerStyle(20);
   Graph_Graph067->SetMarkerSize(0.9);
   Graph_Graph067->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph067->GetXaxis()->SetRange(0,91);
   Graph_Graph067->GetXaxis()->SetLabelFont(42);
   Graph_Graph067->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph067->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph067->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph067->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph067->GetXaxis()->SetTitleFont(42);
   Graph_Graph067->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph067->GetYaxis()->SetLabelFont(42);
   Graph_Graph067->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph067->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph067->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph067->GetYaxis()->SetTickLength(0.02);
   Graph_Graph067->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph067->GetYaxis()->SetTitleFont(42);
   Graph_Graph067->GetZaxis()->SetLabelFont(42);
   Graph_Graph067->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph067->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph067->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph067->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph067->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph067);
   
   graph->Draw("l");
   
   Double_t Graph_fx68[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph_fy68[20] = { 17.89446, 14.24652, 11.58278, 9.630072, 8.164294, 7.035912, 6.147125, 0.9235009, 0.5347442, 0.3615923, 0.2576184, 0.09237912, 0.05268421, 0.03537948, 0.02597137, 0.02017121, 0.01628882,
   0.01353446, 0.0114938, 0.0114938 };
   graph = new TGraph(20,Graph_fx68,Graph_fy68);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph68 = new TH1F("Graph_Graph68","",100,2.7,1099.7);
   Graph_Graph68->SetMinimum(0.01034442);
   Graph_Graph68->SetMaximum(19.68276);
   Graph_Graph68->SetDirectory(nullptr);
   Graph_Graph68->SetStats(0);
   Graph_Graph68->SetLineWidth(2);
   Graph_Graph68->SetMarkerStyle(20);
   Graph_Graph68->SetMarkerSize(0.9);
   Graph_Graph68->GetXaxis()->SetLabelFont(42);
   Graph_Graph68->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph68->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph68->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph68->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph68->GetXaxis()->SetTitleFont(42);
   Graph_Graph68->GetYaxis()->SetLabelFont(42);
   Graph_Graph68->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph68->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph68->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph68->GetYaxis()->SetTickLength(0.02);
   Graph_Graph68->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph68->GetYaxis()->SetTitleFont(42);
   Graph_Graph68->GetZaxis()->SetLabelFont(42);
   Graph_Graph68->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph68->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph68->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph68->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph68->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph68);
   
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
   
   Double_t Graph_fx70[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph_fy70[20] = { 19.68391, 15.67117, 12.74106, 10.59308, 8.980723, 7.739503, 6.761838, 1.015851, 0.5882186, 0.3977515, 0.2833802, 0.101617, 0.05795263, 0.03891743, 0.02856851, 0.02218833, 0.0179177,
   0.01488791, 0.01264318, 0.01264318 };
   graph = new TGraph(20,Graph_fx70,Graph_fy70);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph70 = new TH1F("Graph_Graph70","",100,2.7,1099.7);
   Graph_Graph70->SetMinimum(0.01137886);
   Graph_Graph70->SetMaximum(21.65103);
   Graph_Graph70->SetDirectory(nullptr);
   Graph_Graph70->SetStats(0);
   Graph_Graph70->SetLineWidth(2);
   Graph_Graph70->SetMarkerStyle(20);
   Graph_Graph70->SetMarkerSize(0.9);
   Graph_Graph70->GetXaxis()->SetLabelFont(42);
   Graph_Graph70->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph70->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph70->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph70->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph70->GetXaxis()->SetTitleFont(42);
   Graph_Graph70->GetYaxis()->SetLabelFont(42);
   Graph_Graph70->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph70->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph70->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph70->GetYaxis()->SetTickLength(0.02);
   Graph_Graph70->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph70->GetYaxis()->SetTitleFont(42);
   Graph_Graph70->GetZaxis()->SetLabelFont(42);
   Graph_Graph70->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph70->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph70->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph70->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph70->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph70);
   
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
   line = new TLine(3.918509,0,3.918509,14.51367);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(3.913509,0,"  3.92 TeV");

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
   pt_LaTex = pt->AddText("#varepsilon = 1.3e-08");
   pt_LaTex = pt->AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
