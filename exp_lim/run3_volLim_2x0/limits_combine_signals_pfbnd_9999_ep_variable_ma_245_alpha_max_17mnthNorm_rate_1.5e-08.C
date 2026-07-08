#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_17mnthNorm_rate_1.5e-08()
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
   
   Double_t Graph0_fx78[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy78[20] = { 757.5462, 10.21849, 10.34327, 6.892724, 6.856261, 6.805988, 6.792314, 12.65785, 17.70313, 23.2699, 28.51126, 53.76754, 55.00202, 53.61712, 54.59753, 53.87332, 52.0452,
   54.09839, 54.3541, 54.3541 };
   TGraph *graph = new TGraph(20,Graph0_fx78,Graph0_fy78);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph078 = new TH1F("Graph_Graph078","",100,2.7,1099.7);
   Graph_Graph078->SetMinimum(0.2);
   Graph_Graph078->SetMaximum(100000);
   Graph_Graph078->SetDirectory(nullptr);
   Graph_Graph078->SetStats(0);
   Graph_Graph078->SetLineWidth(2);
   Graph_Graph078->SetMarkerStyle(20);
   Graph_Graph078->SetMarkerSize(0.9);
   Graph_Graph078->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph078->GetXaxis()->SetRange(0,91);
   Graph_Graph078->GetXaxis()->SetLabelFont(42);
   Graph_Graph078->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph078->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph078->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph078->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph078->GetXaxis()->SetTitleFont(42);
   Graph_Graph078->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph078->GetYaxis()->SetLabelFont(42);
   Graph_Graph078->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph078->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph078->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph078->GetYaxis()->SetTickLength(0.02);
   Graph_Graph078->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph078->GetYaxis()->SetTitleFont(42);
   Graph_Graph078->GetZaxis()->SetLabelFont(42);
   Graph_Graph078->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph078->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph078->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph078->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph078->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph078);
   
   graph->Draw("al");
   
   Double_t Graph1_fx79[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph1_fy79[42] = { 1720.352, 27.90013, 27.43299, 20.45865, 19.60471, 19.58701, 20.18621, 38.49057, 53.8325, 70.7602, 86.69836, 163.4988, 167.2527, 163.0414, 166.0227, 163.8205, 158.2614,
   164.5049, 165.2825, 165.2825, 165.2825, 16.01794, 16.01794, 16.01794, 15.95112, 15.38306, 15.89619, 16.08023, 15.81265, 16.20134, 15.8579, 9.197354, 7.685111,
   6.031651, 4.53485, 2.699894, 2.772078, 2.86258, 2.705659, 4.135912, 4.369327, 363.4345 };
   graph = new TGraph(42,Graph1_fx79,Graph1_fy79);
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
   
   TH1F *Graph_Graph179 = new TH1F("Graph_Graph179","Graph",100,2.7,1099.7);
   Graph_Graph179->SetMinimum(2.429904);
   Graph_Graph179->SetMaximum(1892.117);
   Graph_Graph179->SetDirectory(nullptr);
   Graph_Graph179->SetStats(0);
   Graph_Graph179->SetLineWidth(2);
   Graph_Graph179->SetMarkerStyle(20);
   Graph_Graph179->SetMarkerSize(0.9);
   Graph_Graph179->GetXaxis()->SetLabelFont(42);
   Graph_Graph179->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph179->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph179->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph179->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph179->GetXaxis()->SetTitleFont(42);
   Graph_Graph179->GetYaxis()->SetLabelFont(42);
   Graph_Graph179->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph179->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph179->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph179->GetYaxis()->SetTickLength(0.02);
   Graph_Graph179->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph179->GetYaxis()->SetTitleFont(42);
   Graph_Graph179->GetZaxis()->SetLabelFont(42);
   Graph_Graph179->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph179->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph179->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph179->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph179->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph179);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx80[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph2_fy80[42] = { 1160.926, 17.02504, 16.96798, 12.58076, 12.12039, 12.15113, 12.34657, 25.46744, 35.67231, 46.93706, 57.5468, 108.633, 111.1271, 108.3291, 110.3099, 108.8467, 105.1531,
   109.3014, 109.8181, 109.8181, 109.8181, 26.8075, 26.8075, 26.8075, 26.69259, 25.7127, 26.59725, 26.91459, 26.45393, 27.12298, 26.53014, 14.90124, 12.34613,
   9.596146, 7.043092, 4.067349, 4.14373, 4.220541, 4.103988, 6.260527, 6.413775, 508.0431 };
   graph = new TGraph(42,Graph2_fx80,Graph2_fy80);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph280 = new TH1F("Graph_Graph280","Graph",100,2.7,1099.7);
   Graph_Graph280->SetMinimum(3.660614);
   Graph_Graph280->SetMaximum(1276.612);
   Graph_Graph280->SetDirectory(nullptr);
   Graph_Graph280->SetStats(0);
   Graph_Graph280->SetLineWidth(2);
   Graph_Graph280->SetMarkerStyle(20);
   Graph_Graph280->SetMarkerSize(0.9);
   Graph_Graph280->GetXaxis()->SetLabelFont(42);
   Graph_Graph280->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph280->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph280->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph280->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph280->GetXaxis()->SetTitleFont(42);
   Graph_Graph280->GetYaxis()->SetLabelFont(42);
   Graph_Graph280->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph280->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph280->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph280->GetYaxis()->SetTickLength(0.02);
   Graph_Graph280->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph280->GetYaxis()->SetTitleFont(42);
   Graph_Graph280->GetZaxis()->SetLabelFont(42);
   Graph_Graph280->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph280->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph280->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph280->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph280->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph280);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx81[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy81[20] = { 757.5462, 10.21849, 10.34327, 6.892724, 6.856261, 6.805988, 6.792314, 12.65785, 17.70313, 23.2699, 28.51126, 53.76754, 55.00202, 53.61712, 54.59753, 53.87332, 52.0452,
   54.09839, 54.3541, 54.3541 };
   graph = new TGraph(20,Graph0_fx81,Graph0_fy81);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph081 = new TH1F("Graph_Graph081","",100,2.7,1099.7);
   Graph_Graph081->SetMinimum(0.2);
   Graph_Graph081->SetMaximum(100000);
   Graph_Graph081->SetDirectory(nullptr);
   Graph_Graph081->SetStats(0);
   Graph_Graph081->SetLineWidth(2);
   Graph_Graph081->SetMarkerStyle(20);
   Graph_Graph081->SetMarkerSize(0.9);
   Graph_Graph081->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph081->GetXaxis()->SetRange(0,91);
   Graph_Graph081->GetXaxis()->SetLabelFont(42);
   Graph_Graph081->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph081->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph081->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph081->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph081->GetXaxis()->SetTitleFont(42);
   Graph_Graph081->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph081->GetYaxis()->SetLabelFont(42);
   Graph_Graph081->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph081->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph081->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph081->GetYaxis()->SetTickLength(0.02);
   Graph_Graph081->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph081->GetYaxis()->SetTitleFont(42);
   Graph_Graph081->GetZaxis()->SetLabelFont(42);
   Graph_Graph081->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph081->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph081->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph081->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph081->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph081);
   
   graph->Draw("l");
   
   Double_t Graph_fx82[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph_fy82[20] = { 25.24726, 21.28035, 17.90386, 15.22907, 13.12323, 11.44857, 10.09792, 1.609151, 0.9370935, 0.6354695, 0.4535192, 0.1631845, 0.09317109, 0.06260368, 0.04597184, 0.03571315, 0.02884407,
   0.02396961, 0.02035752, 0.02035752 };
   graph = new TGraph(20,Graph_fx82,Graph_fy82);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph82 = new TH1F("Graph_Graph82","",100,2.7,1099.7);
   Graph_Graph82->SetMinimum(0.01832177);
   Graph_Graph82->SetMaximum(27.76995);
   Graph_Graph82->SetDirectory(nullptr);
   Graph_Graph82->SetStats(0);
   Graph_Graph82->SetLineWidth(2);
   Graph_Graph82->SetMarkerStyle(20);
   Graph_Graph82->SetMarkerSize(0.9);
   Graph_Graph82->GetXaxis()->SetLabelFont(42);
   Graph_Graph82->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph82->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph82->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph82->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph82->GetXaxis()->SetTitleFont(42);
   Graph_Graph82->GetYaxis()->SetLabelFont(42);
   Graph_Graph82->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph82->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph82->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph82->GetYaxis()->SetTickLength(0.02);
   Graph_Graph82->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph82->GetYaxis()->SetTitleFont(42);
   Graph_Graph82->GetZaxis()->SetLabelFont(42);
   Graph_Graph82->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph82->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph82->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph82->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph82->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph82);
   
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
   
   Double_t Graph_fx84[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph_fy84[20] = { 27.77199, 23.40838, 19.69425, 16.75198, 14.43555, 12.59343, 11.10771, 1.770066, 1.030803, 0.6990165, 0.4988711, 0.179503, 0.1024882, 0.06886405, 0.05056902, 0.03928447, 0.03172848,
   0.02636657, 0.02239327, 0.02239327 };
   graph = new TGraph(20,Graph_fx84,Graph_fy84);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph84 = new TH1F("Graph_Graph84","",100,2.7,1099.7);
   Graph_Graph84->SetMinimum(0.02015394);
   Graph_Graph84->SetMaximum(30.54695);
   Graph_Graph84->SetDirectory(nullptr);
   Graph_Graph84->SetStats(0);
   Graph_Graph84->SetLineWidth(2);
   Graph_Graph84->SetMarkerStyle(20);
   Graph_Graph84->SetMarkerSize(0.9);
   Graph_Graph84->GetXaxis()->SetLabelFont(42);
   Graph_Graph84->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph84->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph84->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph84->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph84->GetXaxis()->SetTitleFont(42);
   Graph_Graph84->GetYaxis()->SetLabelFont(42);
   Graph_Graph84->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph84->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph84->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph84->GetYaxis()->SetTickLength(0.02);
   Graph_Graph84->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph84->GetYaxis()->SetTitleFont(42);
   Graph_Graph84->GetZaxis()->SetLabelFont(42);
   Graph_Graph84->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph84->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph84->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph84->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph84->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph84);
   
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
   line = new TLine(3.822589,0,3.822589,21.93557);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(3.817589,0,"  3.82 TeV");

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
   pt_LaTex = pt->AddText("#varepsilon = 1.5e-08");
   pt_LaTex = pt->AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
