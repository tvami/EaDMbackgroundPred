#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_depth_e5_17mnthNorm_rate_3.04e-07()
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
   
   Double_t Graph0_fx337[18] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 40, 60, 80, 100, 120, 140, 160,
   180 };
   Double_t Graph0_fy337[18] = { 12.74492, 6.568359, 5.876953, 5.058789, 3.491602, 2.91543, 2.569727, 2.339258, 2.304688, 2.926953, 4.401953, 6.038281, 7.697656, 8.988281, 10.60156, 11.70781, 14.38125,
   14.84219 };
   TGraph *graph = new TGraph(18,Graph0_fx337,Graph0_fy337);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0337 = new TH1F("Graph_Graph0337","",100,0,197.8);
   Graph_Graph0337->SetMinimum(0.2);
   Graph_Graph0337->SetMaximum(100000);
   Graph_Graph0337->SetDirectory(nullptr);
   Graph_Graph0337->SetStats(0);
   Graph_Graph0337->SetLineWidth(2);
   Graph_Graph0337->SetMarkerStyle(20);
   Graph_Graph0337->SetMarkerSize(0.9);
   Graph_Graph0337->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0337->GetXaxis()->SetRange(1,92);
   Graph_Graph0337->GetXaxis()->SetLabelFont(42);
   Graph_Graph0337->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0337->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0337->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0337->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0337->GetXaxis()->SetTitleFont(42);
   Graph_Graph0337->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0337->GetYaxis()->SetLabelFont(42);
   Graph_Graph0337->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0337->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0337->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0337->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0337->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0337->GetYaxis()->SetTitleFont(42);
   Graph_Graph0337->GetZaxis()->SetLabelFont(42);
   Graph_Graph0337->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0337->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0337->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0337->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0337->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0337);
   
   graph->Draw("al");
   
   Double_t Graph1_fx338[38] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 40, 60, 80, 100, 120, 140, 160,
   180, 180, 180, 180, 160, 140, 120, 100, 80, 60, 40, 20, 10, 9, 8, 7,
   6, 5, 4, 3, 2 };
   Double_t Graph1_fy338[38] = { 26.34408, 15.12826, 13.55915, 12.03635, 9.861819, 8.865368, 7.814141, 7.113323, 7.0082, 8.900414, 13.38566, 18.36148, 23.40739, 27.33198, 32.23772, 35.60166, 43.73117,
   45.13281, 45.13281, 4.058411, 4.058411, 3.932373, 3.201355, 2.898865, 2.492844, 2.104828, 1.651093, 1.238049, 0.8232056, 0.6481934, 0.667054, 0.7628876, 1.024956,
   1.541215, 2.529395, 1.469216, 3.207207, 6.621385 };
   graph = new TGraph(38,Graph1_fx338,Graph1_fy338);
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
   
   TH1F *Graph_Graph1338 = new TH1F("Graph_Graph1338","Graph",100,0,197.8);
   Graph_Graph1338->SetMinimum(0.583374);
   Graph_Graph1338->SetMaximum(49.58127);
   Graph_Graph1338->SetDirectory(nullptr);
   Graph_Graph1338->SetStats(0);
   Graph_Graph1338->SetLineWidth(2);
   Graph_Graph1338->SetMarkerStyle(20);
   Graph_Graph1338->SetMarkerSize(0.9);
   Graph_Graph1338->GetXaxis()->SetLabelFont(42);
   Graph_Graph1338->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1338->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1338->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1338->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1338->GetXaxis()->SetTitleFont(42);
   Graph_Graph1338->GetYaxis()->SetLabelFont(42);
   Graph_Graph1338->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1338->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1338->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1338->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1338->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1338->GetYaxis()->SetTitleFont(42);
   Graph_Graph1338->GetZaxis()->SetLabelFont(42);
   Graph_Graph1338->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1338->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1338->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1338->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1338->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1338);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx339[38] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 40, 60, 80, 100, 120, 140, 160,
   180, 180, 180, 180, 160, 140, 120, 100, 80, 60, 40, 20, 10, 9, 8, 7,
   6, 5, 4, 3, 2 };
   Double_t Graph2_fy339[38] = { 18.48553, 10.05053, 8.969157, 7.801168, 5.899359, 5.239635, 4.956355, 4.670353, 4.63808, 5.913672, 8.89379, 12.19986, 15.55249, 18.1601, 21.4196, 23.65469, 29.05615,
   29.98744, 29.98744, 7.344093, 7.344093, 7.116015, 5.793166, 5.275869, 4.471922, 3.808893, 3.022089, 2.202051, 1.480627, 1.165848, 1.189618, 1.341641, 1.689575,
   2.21166, 3.438396, 3.1049, 4.44138, 9.013392 };
   graph = new TGraph(38,Graph2_fx339,Graph2_fy339);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2339 = new TH1F("Graph_Graph2339","Graph",100,0,197.8);
   Graph_Graph2339->SetMinimum(1.049263);
   Graph_Graph2339->SetMaximum(32.8696);
   Graph_Graph2339->SetDirectory(nullptr);
   Graph_Graph2339->SetStats(0);
   Graph_Graph2339->SetLineWidth(2);
   Graph_Graph2339->SetMarkerStyle(20);
   Graph_Graph2339->SetMarkerSize(0.9);
   Graph_Graph2339->GetXaxis()->SetLabelFont(42);
   Graph_Graph2339->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2339->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2339->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2339->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2339->GetXaxis()->SetTitleFont(42);
   Graph_Graph2339->GetYaxis()->SetLabelFont(42);
   Graph_Graph2339->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2339->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2339->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2339->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2339->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2339->GetYaxis()->SetTitleFont(42);
   Graph_Graph2339->GetZaxis()->SetLabelFont(42);
   Graph_Graph2339->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2339->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2339->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2339->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2339->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2339);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx340[18] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 40, 60, 80, 100, 120, 140, 160,
   180 };
   Double_t Graph0_fy340[18] = { 12.74492, 6.568359, 5.876953, 5.058789, 3.491602, 2.91543, 2.569727, 2.339258, 2.304688, 2.926953, 4.401953, 6.038281, 7.697656, 8.988281, 10.60156, 11.70781, 14.38125,
   14.84219 };
   graph = new TGraph(18,Graph0_fx340,Graph0_fy340);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0340 = new TH1F("Graph_Graph0340","",100,0,197.8);
   Graph_Graph0340->SetMinimum(0.2);
   Graph_Graph0340->SetMaximum(100000);
   Graph_Graph0340->SetDirectory(nullptr);
   Graph_Graph0340->SetStats(0);
   Graph_Graph0340->SetLineWidth(2);
   Graph_Graph0340->SetMarkerStyle(20);
   Graph_Graph0340->SetMarkerSize(0.9);
   Graph_Graph0340->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0340->GetXaxis()->SetRange(1,92);
   Graph_Graph0340->GetXaxis()->SetLabelFont(42);
   Graph_Graph0340->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0340->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0340->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0340->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0340->GetXaxis()->SetTitleFont(42);
   Graph_Graph0340->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0340->GetYaxis()->SetLabelFont(42);
   Graph_Graph0340->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0340->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0340->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0340->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0340->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0340->GetYaxis()->SetTitleFont(42);
   Graph_Graph0340->GetZaxis()->SetLabelFont(42);
   Graph_Graph0340->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0340->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0340->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0340->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0340->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0340);
   
   graph->Draw("l");
   
   Double_t Graph_fx341[18] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 40, 60, 80, 100, 120, 140, 160,
   180 };
   Double_t Graph_fy341[18] = { 9.291983e-239, 3.098503e-157, 1.590202e-116, 3.954995e-92, 6.929325e-76, 2.684025e-64, 1.285416e-55, 7.111313e-49, 1.736018e-43, 2.246796e-19, 1.57891e-07, 0.001101538, 0.08175975, 1.010084, 5.15202, 15.95806, 36.34253,
   67.61048 };
   graph = new TGraph(18,Graph_fx341,Graph_fy341);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph341 = new TH1F("Graph_Graph341","",100,0,197.8);
   Graph_Graph341->SetMinimum(8.362785e-239);
   Graph_Graph341->SetMaximum(74.37152);
   Graph_Graph341->SetDirectory(nullptr);
   Graph_Graph341->SetStats(0);
   Graph_Graph341->SetLineWidth(2);
   Graph_Graph341->SetMarkerStyle(20);
   Graph_Graph341->SetMarkerSize(0.9);
   Graph_Graph341->GetXaxis()->SetLabelFont(42);
   Graph_Graph341->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph341->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph341->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph341->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph341->GetXaxis()->SetTitleFont(42);
   Graph_Graph341->GetYaxis()->SetLabelFont(42);
   Graph_Graph341->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph341->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph341->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph341->GetYaxis()->SetTickLength(0.02);
   Graph_Graph341->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph341->GetYaxis()->SetTitleFont(42);
   Graph_Graph341->GetZaxis()->SetLabelFont(42);
   Graph_Graph341->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph341->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph341->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph341->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph341->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph341);
   
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
   
   Double_t Graph_fx343[18] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 40, 60, 80, 100, 120, 140, 160,
   180 };
   Double_t Graph_fy343[18] = { 1.022118e-238, 3.408353e-157, 1.749222e-116, 4.350494e-92, 7.622257e-76, 2.952428e-64, 1.413958e-55, 7.822444e-49, 1.909619e-43, 2.471476e-19, 1.736801e-07, 0.001211692, 0.08993573, 1.111093, 5.667222, 17.55386, 39.97678,
   74.37152 };
   graph = new TGraph(18,Graph_fx343,Graph_fy343);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph343 = new TH1F("Graph_Graph343","",100,0,197.8);
   Graph_Graph343->SetMinimum(9.199063e-239);
   Graph_Graph343->SetMaximum(81.80867);
   Graph_Graph343->SetDirectory(nullptr);
   Graph_Graph343->SetStats(0);
   Graph_Graph343->SetLineWidth(2);
   Graph_Graph343->SetMarkerStyle(20);
   Graph_Graph343->SetMarkerSize(0.9);
   Graph_Graph343->GetXaxis()->SetLabelFont(42);
   Graph_Graph343->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph343->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph343->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph343->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph343->GetXaxis()->SetTitleFont(42);
   Graph_Graph343->GetYaxis()->SetLabelFont(42);
   Graph_Graph343->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph343->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph343->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph343->GetYaxis()->SetTickLength(0.02);
   Graph_Graph343->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph343->GetYaxis()->SetTitleFont(42);
   Graph_Graph343->GetZaxis()->SetLabelFont(42);
   Graph_Graph343->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph343->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph343->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph343->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph343->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph343);
   
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
   line = new TLine(133.994,0,133.994,11.36399);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(133.989,0,"  133.99 TeV");

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
   pt_LaTex = pt->AddText("#varepsilon = 3.04e-07");
   pt_LaTex = pt->AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
