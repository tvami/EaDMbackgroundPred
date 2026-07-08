#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_17mnthNorm_rate_1.8e-08()
{
//=========Macro generated from canvas: climits/climits
//=========  (Sun Jun  7 15:43:28 2026) by ROOT version 6.30/07
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
   
   Double_t Graph0_fx99[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy99[20] = { 320.329, 11.41549, 8.891878, 4.124951, 4.141319, 3.988183, 3.40795, 5.784091, 7.981492, 10.40518, 12.66543, 23.11222, 23.65378, 23.04471, 23.45991, 23.18075, 22.37266,
   23.26456, 23.36614, 23.36614 };
   TGraph *graph = new TGraph(20,Graph0_fx99,Graph0_fy99);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph099 = new TH1F("Graph_Graph099","",100,2.7,1099.7);
   Graph_Graph099->SetMinimum(0.2);
   Graph_Graph099->SetMaximum(100000);
   Graph_Graph099->SetDirectory(nullptr);
   Graph_Graph099->SetStats(0);
   Graph_Graph099->SetLineWidth(2);
   Graph_Graph099->SetMarkerStyle(20);
   Graph_Graph099->SetMarkerSize(0.9);
   Graph_Graph099->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph099->GetXaxis()->SetRange(0,91);
   Graph_Graph099->GetXaxis()->SetLabelFont(42);
   Graph_Graph099->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph099->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph099->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph099->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph099->GetXaxis()->SetTitleFont(42);
   Graph_Graph099->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph099->GetYaxis()->SetLabelFont(42);
   Graph_Graph099->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph099->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph099->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph099->GetYaxis()->SetTickLength(0.02);
   Graph_Graph099->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph099->GetYaxis()->SetTitleFont(42);
   Graph_Graph099->GetZaxis()->SetLabelFont(42);
   Graph_Graph099->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph099->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph099->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph099->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph099->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph099);
   
   graph->Draw("al");
   
   Double_t Graph1_fx100[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph1_fy100[42] = { 966.8369, 28.31147, 23.14656, 12.0047, 11.00459, 10.84344, 10.11458, 17.58853, 24.27049, 31.64054, 38.51364, 70.28069, 71.92749, 70.07542, 71.33798, 70.4891, 68.03181,
   70.74394, 71.05285, 71.05285, 71.05285, 4.831177, 4.831177, 4.831177, 4.813114, 4.628181, 4.799989, 4.846843, 4.764211, 4.892604, 4.778603, 2.853409, 2.372349,
   1.870463, 1.409018, 1.055763, 1.350522, 1.468673, 1.221215, 3.12727, 6.359867, 98.34753 };
   graph = new TGraph(42,Graph1_fx100,Graph1_fy100);
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
   
   TH1F *Graph_Graph1100 = new TH1F("Graph_Graph1100","Graph",100,2.7,1099.7);
   Graph_Graph1100->SetMinimum(0.9501868);
   Graph_Graph1100->SetMaximum(1063.415);
   Graph_Graph1100->SetDirectory(nullptr);
   Graph_Graph1100->SetStats(0);
   Graph_Graph1100->SetLineWidth(2);
   Graph_Graph1100->SetMarkerStyle(20);
   Graph_Graph1100->SetMarkerSize(0.9);
   Graph_Graph1100->GetXaxis()->SetLabelFont(42);
   Graph_Graph1100->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1100->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1100->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1100->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1100->GetXaxis()->SetTitleFont(42);
   Graph_Graph1100->GetYaxis()->SetLabelFont(42);
   Graph_Graph1100->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1100->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1100->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1100->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1100->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1100->GetYaxis()->SetTitleFont(42);
   Graph_Graph1100->GetZaxis()->SetLabelFont(42);
   Graph_Graph1100->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1100->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1100->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1100->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1100->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1100);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx101[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph2_fy101[42] = { 615.0603, 17.62199, 14.72369, 7.853728, 7.417407, 7.257318, 6.59187, 11.68629, 16.12596, 21.02282, 25.58949, 46.69636, 47.79054, 46.55998, 47.39885, 46.83484, 45.20215,
   47.00416, 47.20941, 47.20941, 47.20941, 9.729738, 9.729738, 9.729738, 9.691676, 9.312565, 9.662989, 9.763174, 9.592743, 9.854725, 9.621552, 5.539209, 4.586463,
   3.591831, 2.67521, 1.786156, 2.189403, 2.36871, 2.114118, 5.257486, 8.147007, 169.6962 };
   graph = new TGraph(42,Graph2_fx101,Graph2_fy101);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2101 = new TH1F("Graph_Graph2101","Graph",100,2.7,1099.7);
   Graph_Graph2101->SetMinimum(1.60754);
   Graph_Graph2101->SetMaximum(676.3877);
   Graph_Graph2101->SetDirectory(nullptr);
   Graph_Graph2101->SetStats(0);
   Graph_Graph2101->SetLineWidth(2);
   Graph_Graph2101->SetMarkerStyle(20);
   Graph_Graph2101->SetMarkerSize(0.9);
   Graph_Graph2101->GetXaxis()->SetLabelFont(42);
   Graph_Graph2101->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2101->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2101->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2101->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2101->GetXaxis()->SetTitleFont(42);
   Graph_Graph2101->GetYaxis()->SetLabelFont(42);
   Graph_Graph2101->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2101->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2101->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2101->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2101->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2101->GetYaxis()->SetTitleFont(42);
   Graph_Graph2101->GetZaxis()->SetLabelFont(42);
   Graph_Graph2101->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2101->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2101->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2101->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2101->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2101);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx102[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy102[20] = { 320.329, 11.41549, 8.891878, 4.124951, 4.141319, 3.988183, 3.40795, 5.784091, 7.981492, 10.40518, 12.66543, 23.11222, 23.65378, 23.04471, 23.45991, 23.18075, 22.37266,
   23.26456, 23.36614, 23.36614 };
   graph = new TGraph(20,Graph0_fx102,Graph0_fy102);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0102 = new TH1F("Graph_Graph0102","",100,2.7,1099.7);
   Graph_Graph0102->SetMinimum(0.2);
   Graph_Graph0102->SetMaximum(100000);
   Graph_Graph0102->SetDirectory(nullptr);
   Graph_Graph0102->SetStats(0);
   Graph_Graph0102->SetLineWidth(2);
   Graph_Graph0102->SetMarkerStyle(20);
   Graph_Graph0102->SetMarkerSize(0.9);
   Graph_Graph0102->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0102->GetXaxis()->SetRange(0,91);
   Graph_Graph0102->GetXaxis()->SetLabelFont(42);
   Graph_Graph0102->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0102->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0102->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0102->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0102->GetXaxis()->SetTitleFont(42);
   Graph_Graph0102->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0102->GetYaxis()->SetLabelFont(42);
   Graph_Graph0102->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0102->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0102->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0102->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0102->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0102->GetYaxis()->SetTitleFont(42);
   Graph_Graph0102->GetZaxis()->SetLabelFont(42);
   Graph_Graph0102->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0102->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0102->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0102->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0102->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0102);
   
   graph->Draw("l");
   
   Double_t Graph_fx103[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph_fy103[20] = { 34.97454, 32.60718, 29.14469, 25.81099, 22.89209, 20.40708, 18.30463, 3.237298, 1.904358, 1.297927, 0.9291055, 0.3363382, 0.1924218, 0.1294228, 0.09509677, 0.07390557, 0.05970774,
   0.04962826, 0.04215663, 0.04215663 };
   graph = new TGraph(20,Graph_fx103,Graph_fy103);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph103 = new TH1F("Graph_Graph103","",100,2.7,1099.7);
   Graph_Graph103->SetMinimum(0.03794097);
   Graph_Graph103->SetMaximum(38.46778);
   Graph_Graph103->SetDirectory(nullptr);
   Graph_Graph103->SetStats(0);
   Graph_Graph103->SetLineWidth(2);
   Graph_Graph103->SetMarkerStyle(20);
   Graph_Graph103->SetMarkerSize(0.9);
   Graph_Graph103->GetXaxis()->SetLabelFont(42);
   Graph_Graph103->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph103->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph103->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph103->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph103->GetXaxis()->SetTitleFont(42);
   Graph_Graph103->GetYaxis()->SetLabelFont(42);
   Graph_Graph103->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph103->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph103->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph103->GetYaxis()->SetTickLength(0.02);
   Graph_Graph103->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph103->GetYaxis()->SetTitleFont(42);
   Graph_Graph103->GetZaxis()->SetLabelFont(42);
   Graph_Graph103->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph103->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph103->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph103->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph103->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph103);
   
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
   
   Double_t Graph_fx105[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph_fy105[20] = { 38.47199, 35.8679, 32.05916, 28.39209, 25.1813, 22.44779, 20.13509, 3.561028, 2.094794, 1.42772, 1.022016, 0.369972, 0.211664, 0.1423651, 0.1046064, 0.08129613, 0.06567851,
   0.05459109, 0.04637229, 0.04637229 };
   graph = new TGraph(20,Graph_fx105,Graph_fy105);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph105 = new TH1F("Graph_Graph105","",100,2.7,1099.7);
   Graph_Graph105->SetMinimum(0.04173506);
   Graph_Graph105->SetMaximum(42.31456);
   Graph_Graph105->SetDirectory(nullptr);
   Graph_Graph105->SetStats(0);
   Graph_Graph105->SetLineWidth(2);
   Graph_Graph105->SetMarkerStyle(20);
   Graph_Graph105->SetMarkerSize(0.9);
   Graph_Graph105->GetXaxis()->SetLabelFont(42);
   Graph_Graph105->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph105->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph105->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph105->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph105->GetXaxis()->SetTitleFont(42);
   Graph_Graph105->GetYaxis()->SetLabelFont(42);
   Graph_Graph105->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph105->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph105->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph105->GetYaxis()->SetTickLength(0.02);
   Graph_Graph105->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph105->GetYaxis()->SetTitleFont(42);
   Graph_Graph105->GetZaxis()->SetLabelFont(42);
   Graph_Graph105->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph105->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph105->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph105->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph105->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph105);
   
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
   line = new TLine(3.678472,0,3.678472,33.35033);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(3.673472,0,"  3.68 TeV");

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
   pt_LaTex = pt->AddText("#varepsilon = 1.8e-08");
   pt_LaTex = pt->AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
