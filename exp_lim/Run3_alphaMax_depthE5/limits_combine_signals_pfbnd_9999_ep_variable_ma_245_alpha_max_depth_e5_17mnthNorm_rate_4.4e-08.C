#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_depth_e5_17mnthNorm_rate_4.4e-08()
{
//=========Macro generated from canvas: climits/climits
//=========  (Wed Mar 11 02:53:18 2026) by ROOT version 6.30/07
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
   
   Double_t Graph0_fx155[18] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 40, 60, 80, 100, 120, 140, 160,
   180 };
   Double_t Graph0_fy155[18] = { 12.74492, 6.568359, 5.876953, 5.058789, 3.491602, 2.91543, 2.569727, 2.339258, 2.304688, 2.926953, 4.401953, 6.038281, 7.697656, 8.988281, 10.60156, 11.70781, 14.38125,
   14.84219 };
   TGraph *graph = new TGraph(18,Graph0_fx155,Graph0_fy155);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0155 = new TH1F("Graph_Graph0155","",100,0,197.8);
   Graph_Graph0155->SetMinimum(0.2);
   Graph_Graph0155->SetMaximum(100000);
   Graph_Graph0155->SetDirectory(nullptr);
   Graph_Graph0155->SetStats(0);
   Graph_Graph0155->SetLineWidth(2);
   Graph_Graph0155->SetMarkerStyle(20);
   Graph_Graph0155->SetMarkerSize(0.9);
   Graph_Graph0155->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0155->GetXaxis()->SetRange(1,92);
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
   
   Double_t Graph1_fx156[38] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 40, 60, 80, 100, 120, 140, 160,
   180, 180, 180, 180, 160, 140, 120, 100, 80, 60, 40, 20, 10, 9, 8, 7,
   6, 5, 4, 3, 2 };
   Double_t Graph1_fy156[38] = { 26.34408, 15.12826, 13.55915, 12.03635, 9.861819, 8.865368, 7.814141, 7.113323, 7.0082, 8.900414, 13.38566, 18.36148, 23.40739, 27.33198, 32.23772, 35.60166, 43.73117,
   45.13281, 45.13281, 4.058411, 4.058411, 3.932373, 3.201355, 2.898865, 2.492844, 2.104828, 1.651093, 1.238049, 0.8232056, 0.6481934, 0.667054, 0.7628876, 1.024956,
   1.541215, 2.529395, 1.469216, 3.207207, 6.621385 };
   graph = new TGraph(38,Graph1_fx156,Graph1_fy156);
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
   
   TH1F *Graph_Graph1156 = new TH1F("Graph_Graph1156","Graph",100,0,197.8);
   Graph_Graph1156->SetMinimum(0.583374);
   Graph_Graph1156->SetMaximum(49.58127);
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
   
   Double_t Graph2_fx157[38] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 40, 60, 80, 100, 120, 140, 160,
   180, 180, 180, 180, 160, 140, 120, 100, 80, 60, 40, 20, 10, 9, 8, 7,
   6, 5, 4, 3, 2 };
   Double_t Graph2_fy157[38] = { 18.48553, 10.05053, 8.969157, 7.801168, 5.899359, 5.239635, 4.956355, 4.670353, 4.63808, 5.913672, 8.89379, 12.19986, 15.55249, 18.1601, 21.4196, 23.65469, 29.05615,
   29.98744, 29.98744, 7.344093, 7.344093, 7.116015, 5.793166, 5.275869, 4.471922, 3.808893, 3.022089, 2.202051, 1.480627, 1.165848, 1.189618, 1.341641, 1.689575,
   2.21166, 3.438396, 3.1049, 4.44138, 9.013392 };
   graph = new TGraph(38,Graph2_fx157,Graph2_fy157);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2157 = new TH1F("Graph_Graph2157","Graph",100,0,197.8);
   Graph_Graph2157->SetMinimum(1.049263);
   Graph_Graph2157->SetMaximum(32.8696);
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
   
   Double_t Graph0_fx158[18] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 40, 60, 80, 100, 120, 140, 160,
   180 };
   Double_t Graph0_fy158[18] = { 12.74492, 6.568359, 5.876953, 5.058789, 3.491602, 2.91543, 2.569727, 2.339258, 2.304688, 2.926953, 4.401953, 6.038281, 7.697656, 8.988281, 10.60156, 11.70781, 14.38125,
   14.84219 };
   graph = new TGraph(18,Graph0_fx158,Graph0_fy158);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0158 = new TH1F("Graph_Graph0158","",100,0,197.8);
   Graph_Graph0158->SetMinimum(0.2);
   Graph_Graph0158->SetMaximum(100000);
   Graph_Graph0158->SetDirectory(nullptr);
   Graph_Graph0158->SetStats(0);
   Graph_Graph0158->SetLineWidth(2);
   Graph_Graph0158->SetMarkerStyle(20);
   Graph_Graph0158->SetMarkerSize(0.9);
   Graph_Graph0158->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0158->GetXaxis()->SetRange(1,92);
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
   
   Double_t Graph_fx159[18] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 40, 60, 80, 100, 120, 140, 160,
   180 };
   Double_t Graph_fy159[18] = { 0.05971294, 1.753594, 8.445514, 20.21873, 34.53452, 48.96517, 62.05798, 73.18697, 82.22842, 102.4371, 70.62568, 48.96007, 36.22434, 28.18315, 22.75396, 18.89018, 16.02521,
   13.83054 };
   graph = new TGraph(18,Graph_fx159,Graph_fy159);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph159 = new TH1F("Graph_Graph159","",100,0,197.8);
   Graph_Graph159->SetMinimum(0.05374164);
   Graph_Graph159->SetMaximum(112.6748);
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
   
   Double_t Graph_fx161[18] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 40, 60, 80, 100, 120, 140, 160,
   180 };
   Double_t Graph_fy161[18] = { 0.06568423, 1.928953, 9.290066, 22.2406, 37.98797, 53.86169, 68.26378, 80.50566, 90.45127, 112.6808, 77.68824, 53.85608, 39.84677, 31.00147, 25.02936, 20.7792, 17.62774,
   15.21359 };
   graph = new TGraph(18,Graph_fx161,Graph_fy161);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph161 = new TH1F("Graph_Graph161","",100,0,197.8);
   Graph_Graph161->SetMinimum(0.05911581);
   Graph_Graph161->SetMaximum(123.9423);
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
   line = new TLine(3.784578,0,3.784578,6.019468);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(3.779578,0,"  3.78 TeV");

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
   pt_LaTex = pt->AddText("#varepsilon = 4.4e-08");
   pt_LaTex = pt->AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
