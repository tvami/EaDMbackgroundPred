#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_depth_e5_17mnthNorm_rate_2.44e-07()
{
//=========Macro generated from canvas: climits/climits
//=========  (Wed Mar 11 02:53:19 2026) by ROOT version 6.30/07
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
   
   Double_t Graph0_fx295[18] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 40, 60, 80, 100, 120, 140, 160,
   180 };
   Double_t Graph0_fy295[18] = { 12.74492, 6.568359, 5.876953, 5.058789, 3.491602, 2.91543, 2.569727, 2.339258, 2.304688, 2.926953, 4.401953, 6.038281, 7.697656, 8.988281, 10.60156, 11.70781, 14.38125,
   14.84219 };
   TGraph *graph = new TGraph(18,Graph0_fx295,Graph0_fy295);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0295 = new TH1F("Graph_Graph0295","",100,0,197.8);
   Graph_Graph0295->SetMinimum(0.2);
   Graph_Graph0295->SetMaximum(100000);
   Graph_Graph0295->SetDirectory(nullptr);
   Graph_Graph0295->SetStats(0);
   Graph_Graph0295->SetLineWidth(2);
   Graph_Graph0295->SetMarkerStyle(20);
   Graph_Graph0295->SetMarkerSize(0.9);
   Graph_Graph0295->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0295->GetXaxis()->SetRange(1,92);
   Graph_Graph0295->GetXaxis()->SetLabelFont(42);
   Graph_Graph0295->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0295->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0295->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0295->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0295->GetXaxis()->SetTitleFont(42);
   Graph_Graph0295->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0295->GetYaxis()->SetLabelFont(42);
   Graph_Graph0295->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0295->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0295->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0295->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0295->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0295->GetYaxis()->SetTitleFont(42);
   Graph_Graph0295->GetZaxis()->SetLabelFont(42);
   Graph_Graph0295->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0295->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0295->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0295->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0295->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0295);
   
   graph->Draw("al");
   
   Double_t Graph1_fx296[38] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 40, 60, 80, 100, 120, 140, 160,
   180, 180, 180, 180, 160, 140, 120, 100, 80, 60, 40, 20, 10, 9, 8, 7,
   6, 5, 4, 3, 2 };
   Double_t Graph1_fy296[38] = { 26.34408, 15.12826, 13.55915, 12.03635, 9.861819, 8.865368, 7.814141, 7.113323, 7.0082, 8.900414, 13.38566, 18.36148, 23.40739, 27.33198, 32.23772, 35.60166, 43.73117,
   45.13281, 45.13281, 4.058411, 4.058411, 3.932373, 3.201355, 2.898865, 2.492844, 2.104828, 1.651093, 1.238049, 0.8232056, 0.6481934, 0.667054, 0.7628876, 1.024956,
   1.541215, 2.529395, 1.469216, 3.207207, 6.621385 };
   graph = new TGraph(38,Graph1_fx296,Graph1_fy296);
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
   
   TH1F *Graph_Graph1296 = new TH1F("Graph_Graph1296","Graph",100,0,197.8);
   Graph_Graph1296->SetMinimum(0.583374);
   Graph_Graph1296->SetMaximum(49.58127);
   Graph_Graph1296->SetDirectory(nullptr);
   Graph_Graph1296->SetStats(0);
   Graph_Graph1296->SetLineWidth(2);
   Graph_Graph1296->SetMarkerStyle(20);
   Graph_Graph1296->SetMarkerSize(0.9);
   Graph_Graph1296->GetXaxis()->SetLabelFont(42);
   Graph_Graph1296->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1296->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1296->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1296->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1296->GetXaxis()->SetTitleFont(42);
   Graph_Graph1296->GetYaxis()->SetLabelFont(42);
   Graph_Graph1296->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1296->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1296->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1296->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1296->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1296->GetYaxis()->SetTitleFont(42);
   Graph_Graph1296->GetZaxis()->SetLabelFont(42);
   Graph_Graph1296->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1296->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1296->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1296->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1296->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1296);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx297[38] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 40, 60, 80, 100, 120, 140, 160,
   180, 180, 180, 180, 160, 140, 120, 100, 80, 60, 40, 20, 10, 9, 8, 7,
   6, 5, 4, 3, 2 };
   Double_t Graph2_fy297[38] = { 18.48553, 10.05053, 8.969157, 7.801168, 5.899359, 5.239635, 4.956355, 4.670353, 4.63808, 5.913672, 8.89379, 12.19986, 15.55249, 18.1601, 21.4196, 23.65469, 29.05615,
   29.98744, 29.98744, 7.344093, 7.344093, 7.116015, 5.793166, 5.275869, 4.471922, 3.808893, 3.022089, 2.202051, 1.480627, 1.165848, 1.189618, 1.341641, 1.689575,
   2.21166, 3.438396, 3.1049, 4.44138, 9.013392 };
   graph = new TGraph(38,Graph2_fx297,Graph2_fy297);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2297 = new TH1F("Graph_Graph2297","Graph",100,0,197.8);
   Graph_Graph2297->SetMinimum(1.049263);
   Graph_Graph2297->SetMaximum(32.8696);
   Graph_Graph2297->SetDirectory(nullptr);
   Graph_Graph2297->SetStats(0);
   Graph_Graph2297->SetLineWidth(2);
   Graph_Graph2297->SetMarkerStyle(20);
   Graph_Graph2297->SetMarkerSize(0.9);
   Graph_Graph2297->GetXaxis()->SetLabelFont(42);
   Graph_Graph2297->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2297->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2297->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2297->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2297->GetXaxis()->SetTitleFont(42);
   Graph_Graph2297->GetYaxis()->SetLabelFont(42);
   Graph_Graph2297->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2297->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2297->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2297->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2297->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2297->GetYaxis()->SetTitleFont(42);
   Graph_Graph2297->GetZaxis()->SetLabelFont(42);
   Graph_Graph2297->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2297->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2297->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2297->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2297->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2297);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx298[18] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 40, 60, 80, 100, 120, 140, 160,
   180 };
   Double_t Graph0_fy298[18] = { 12.74492, 6.568359, 5.876953, 5.058789, 3.491602, 2.91543, 2.569727, 2.339258, 2.304688, 2.926953, 4.401953, 6.038281, 7.697656, 8.988281, 10.60156, 11.70781, 14.38125,
   14.84219 };
   graph = new TGraph(18,Graph0_fx298,Graph0_fy298);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0298 = new TH1F("Graph_Graph0298","",100,0,197.8);
   Graph_Graph0298->SetMinimum(0.2);
   Graph_Graph0298->SetMaximum(100000);
   Graph_Graph0298->SetDirectory(nullptr);
   Graph_Graph0298->SetStats(0);
   Graph_Graph0298->SetLineWidth(2);
   Graph_Graph0298->SetMarkerStyle(20);
   Graph_Graph0298->SetMarkerSize(0.9);
   Graph_Graph0298->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0298->GetXaxis()->SetRange(1,92);
   Graph_Graph0298->GetXaxis()->SetLabelFont(42);
   Graph_Graph0298->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0298->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0298->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0298->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0298->GetXaxis()->SetTitleFont(42);
   Graph_Graph0298->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0298->GetYaxis()->SetLabelFont(42);
   Graph_Graph0298->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0298->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0298->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0298->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0298->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0298->GetYaxis()->SetTitleFont(42);
   Graph_Graph0298->GetZaxis()->SetLabelFont(42);
   Graph_Graph0298->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0298->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0298->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0298->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0298->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0298);
   
   graph->Draw("l");
   
   Double_t Graph_fx299[18] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 40, 60, 80, 100, 120, 140, 160,
   180 };
   Double_t Graph_fy299[18] = { 7.264238e-152, 1.961462e-99, 2.864485e-73, 1.334251e-57, 3.551784e-47, 9.606995e-40, 3.51462e-34, 7.31943e-30, 2.054167e-26, 4.97895e-11, 0.001514178, 0.370881, 5.158008, 23.33052, 60.90143, 116.9047, 185.9597,
   261.6991 };
   graph = new TGraph(18,Graph_fx299,Graph_fy299);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph299 = new TH1F("Graph_Graph299","",100,0,197.8);
   Graph_Graph299->SetMinimum(6.537814e-152);
   Graph_Graph299->SetMaximum(287.869);
   Graph_Graph299->SetDirectory(nullptr);
   Graph_Graph299->SetStats(0);
   Graph_Graph299->SetLineWidth(2);
   Graph_Graph299->SetMarkerStyle(20);
   Graph_Graph299->SetMarkerSize(0.9);
   Graph_Graph299->GetXaxis()->SetLabelFont(42);
   Graph_Graph299->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph299->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph299->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph299->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph299->GetXaxis()->SetTitleFont(42);
   Graph_Graph299->GetYaxis()->SetLabelFont(42);
   Graph_Graph299->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph299->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph299->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph299->GetYaxis()->SetTickLength(0.02);
   Graph_Graph299->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph299->GetYaxis()->SetTitleFont(42);
   Graph_Graph299->GetZaxis()->SetLabelFont(42);
   Graph_Graph299->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph299->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph299->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph299->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph299->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph299);
   
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
   
   Double_t Graph_fx301[18] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 40, 60, 80, 100, 120, 140, 160,
   180 };
   Double_t Graph_fy301[18] = { 7.990662e-152, 2.157608e-99, 3.150933e-73, 1.467676e-57, 3.906963e-47, 1.05677e-39, 3.866083e-34, 8.051373e-30, 2.259584e-26, 5.476845e-11, 0.001665596, 0.407969, 5.673808, 25.66357, 66.99157, 128.5952, 204.5557,
   287.869 };
   graph = new TGraph(18,Graph_fx301,Graph_fy301);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph301 = new TH1F("Graph_Graph301","",100,0,197.8);
   Graph_Graph301->SetMinimum(7.191596e-152);
   Graph_Graph301->SetMaximum(316.6559);
   Graph_Graph301->SetDirectory(nullptr);
   Graph_Graph301->SetStats(0);
   Graph_Graph301->SetLineWidth(2);
   Graph_Graph301->SetMarkerStyle(20);
   Graph_Graph301->SetMarkerSize(0.9);
   Graph_Graph301->GetXaxis()->SetLabelFont(42);
   Graph_Graph301->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph301->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph301->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph301->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph301->GetXaxis()->SetTitleFont(42);
   Graph_Graph301->GetYaxis()->SetLabelFont(42);
   Graph_Graph301->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph301->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph301->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph301->GetYaxis()->SetTickLength(0.02);
   Graph_Graph301->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph301->GetYaxis()->SetTitleFont(42);
   Graph_Graph301->GetZaxis()->SetLabelFont(42);
   Graph_Graph301->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph301->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph301->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph301->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph301->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph301);
   
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
   line = new TLine(85.91292,0,85.91292,8.058623);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(85.90792,0,"  85.91 TeV");

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
   pt_LaTex = pt->AddText("#varepsilon = 2.44e-07");
   pt_LaTex = pt->AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
