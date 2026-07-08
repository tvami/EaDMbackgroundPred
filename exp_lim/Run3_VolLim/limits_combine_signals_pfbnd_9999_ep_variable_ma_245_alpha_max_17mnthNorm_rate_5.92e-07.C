#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_17mnthNorm_rate_5.92e-07()
{
//=========Macro generated from canvas: climits/climits
//=========  (Sun Jun  7 15:43:35 2026) by ROOT version 6.30/07
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
   
   Double_t Graph0_fx421[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy421[20] = { 320.329, 11.41549, 8.891878, 4.124951, 4.141319, 3.988183, 3.40795, 5.784091, 7.981492, 10.40518, 12.66543, 23.11222, 23.65378, 23.04471, 23.45991, 23.18075, 22.37266,
   23.26456, 23.36614, 23.36614 };
   TGraph *graph = new TGraph(20,Graph0_fx421,Graph0_fy421);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0421 = new TH1F("Graph_Graph0421","",100,2.7,1099.7);
   Graph_Graph0421->SetMinimum(0.2);
   Graph_Graph0421->SetMaximum(100000);
   Graph_Graph0421->SetDirectory(nullptr);
   Graph_Graph0421->SetStats(0);
   Graph_Graph0421->SetLineWidth(2);
   Graph_Graph0421->SetMarkerStyle(20);
   Graph_Graph0421->SetMarkerSize(0.9);
   Graph_Graph0421->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0421->GetXaxis()->SetRange(0,91);
   Graph_Graph0421->GetXaxis()->SetLabelFont(42);
   Graph_Graph0421->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0421->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0421->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0421->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0421->GetXaxis()->SetTitleFont(42);
   Graph_Graph0421->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0421->GetYaxis()->SetLabelFont(42);
   Graph_Graph0421->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0421->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0421->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0421->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0421->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0421->GetYaxis()->SetTitleFont(42);
   Graph_Graph0421->GetZaxis()->SetLabelFont(42);
   Graph_Graph0421->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0421->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0421->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0421->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0421->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0421);
   
   graph->Draw("al");
   
   Double_t Graph1_fx422[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph1_fy422[42] = { 966.8369, 28.31147, 23.14656, 12.0047, 11.00459, 10.84344, 10.11458, 17.58853, 24.27049, 31.64054, 38.51364, 70.28069, 71.92749, 70.07542, 71.33798, 70.4891, 68.03181,
   70.74394, 71.05285, 71.05285, 71.05285, 4.831177, 4.831177, 4.831177, 4.813114, 4.628181, 4.799989, 4.846843, 4.764211, 4.892604, 4.778603, 2.853409, 2.372349,
   1.870463, 1.409018, 1.055763, 1.350522, 1.468673, 1.221215, 3.12727, 6.359867, 98.34753 };
   graph = new TGraph(42,Graph1_fx422,Graph1_fy422);
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
   
   TH1F *Graph_Graph1422 = new TH1F("Graph_Graph1422","Graph",100,2.7,1099.7);
   Graph_Graph1422->SetMinimum(0.9501868);
   Graph_Graph1422->SetMaximum(1063.415);
   Graph_Graph1422->SetDirectory(nullptr);
   Graph_Graph1422->SetStats(0);
   Graph_Graph1422->SetLineWidth(2);
   Graph_Graph1422->SetMarkerStyle(20);
   Graph_Graph1422->SetMarkerSize(0.9);
   Graph_Graph1422->GetXaxis()->SetLabelFont(42);
   Graph_Graph1422->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1422->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1422->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1422->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1422->GetXaxis()->SetTitleFont(42);
   Graph_Graph1422->GetYaxis()->SetLabelFont(42);
   Graph_Graph1422->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1422->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1422->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1422->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1422->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1422->GetYaxis()->SetTitleFont(42);
   Graph_Graph1422->GetZaxis()->SetLabelFont(42);
   Graph_Graph1422->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1422->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1422->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1422->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1422->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1422);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx423[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph2_fy423[42] = { 615.0603, 17.62199, 14.72369, 7.853728, 7.417407, 7.257318, 6.59187, 11.68629, 16.12596, 21.02282, 25.58949, 46.69636, 47.79054, 46.55998, 47.39885, 46.83484, 45.20215,
   47.00416, 47.20941, 47.20941, 47.20941, 9.729738, 9.729738, 9.729738, 9.691676, 9.312565, 9.662989, 9.763174, 9.592743, 9.854725, 9.621552, 5.539209, 4.586463,
   3.591831, 2.67521, 1.786156, 2.189403, 2.36871, 2.114118, 5.257486, 8.147007, 169.6962 };
   graph = new TGraph(42,Graph2_fx423,Graph2_fy423);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2423 = new TH1F("Graph_Graph2423","Graph",100,2.7,1099.7);
   Graph_Graph2423->SetMinimum(1.60754);
   Graph_Graph2423->SetMaximum(676.3877);
   Graph_Graph2423->SetDirectory(nullptr);
   Graph_Graph2423->SetStats(0);
   Graph_Graph2423->SetLineWidth(2);
   Graph_Graph2423->SetMarkerStyle(20);
   Graph_Graph2423->SetMarkerSize(0.9);
   Graph_Graph2423->GetXaxis()->SetLabelFont(42);
   Graph_Graph2423->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2423->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2423->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2423->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2423->GetXaxis()->SetTitleFont(42);
   Graph_Graph2423->GetYaxis()->SetLabelFont(42);
   Graph_Graph2423->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2423->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2423->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2423->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2423->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2423->GetYaxis()->SetTitleFont(42);
   Graph_Graph2423->GetZaxis()->SetLabelFont(42);
   Graph_Graph2423->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2423->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2423->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2423->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2423->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2423);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx424[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy424[20] = { 320.329, 11.41549, 8.891878, 4.124951, 4.141319, 3.988183, 3.40795, 5.784091, 7.981492, 10.40518, 12.66543, 23.11222, 23.65378, 23.04471, 23.45991, 23.18075, 22.37266,
   23.26456, 23.36614, 23.36614 };
   graph = new TGraph(20,Graph0_fx424,Graph0_fy424);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0424 = new TH1F("Graph_Graph0424","",100,2.7,1099.7);
   Graph_Graph0424->SetMinimum(0.2);
   Graph_Graph0424->SetMaximum(100000);
   Graph_Graph0424->SetDirectory(nullptr);
   Graph_Graph0424->SetStats(0);
   Graph_Graph0424->SetLineWidth(2);
   Graph_Graph0424->SetMarkerStyle(20);
   Graph_Graph0424->SetMarkerSize(0.9);
   Graph_Graph0424->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0424->GetXaxis()->SetRange(0,91);
   Graph_Graph0424->GetXaxis()->SetLabelFont(42);
   Graph_Graph0424->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0424->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0424->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0424->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0424->GetXaxis()->SetTitleFont(42);
   Graph_Graph0424->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0424->GetYaxis()->SetLabelFont(42);
   Graph_Graph0424->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0424->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0424->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0424->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0424->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0424->GetYaxis()->SetTitleFont(42);
   Graph_Graph0424->GetZaxis()->SetLabelFont(42);
   Graph_Graph0424->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0424->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0424->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0424->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0424->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0424);
   
   graph->Draw("l");
   
   Double_t Graph_fx425[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph_fy425[20] = { 0, 0, 0, 4.807698e-303, 7.702939e-259, 1.070008e-225, 6.2902e-200, 1.284224e-40, 2.334095e-25, 8.842527e-18, 2.807793e-13, 0.0001999974, 0.1433789, 3.413763, 21.3198, 69.00667, 154.4591,
   275.7012, 424.3662, 424.3662 };
   graph = new TGraph(20,Graph_fx425,Graph_fy425);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph425 = new TH1F("Graph_Graph425","",100,2.7,1099.7);
   Graph_Graph425->SetMinimum(0.4668028);
   Graph_Graph425->SetMaximum(466.8028);
   Graph_Graph425->SetDirectory(nullptr);
   Graph_Graph425->SetStats(0);
   Graph_Graph425->SetLineWidth(2);
   Graph_Graph425->SetMarkerStyle(20);
   Graph_Graph425->SetMarkerSize(0.9);
   Graph_Graph425->GetXaxis()->SetLabelFont(42);
   Graph_Graph425->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph425->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph425->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph425->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph425->GetXaxis()->SetTitleFont(42);
   Graph_Graph425->GetYaxis()->SetLabelFont(42);
   Graph_Graph425->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph425->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph425->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph425->GetYaxis()->SetTickLength(0.02);
   Graph_Graph425->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph425->GetYaxis()->SetTitleFont(42);
   Graph_Graph425->GetZaxis()->SetLabelFont(42);
   Graph_Graph425->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph425->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph425->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph425->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph425->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph425);
   
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
   
   Double_t Graph_fx427[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph_fy427[20] = { 0, 0, 0, 5.288468e-303, 8.473233e-259, 1.177009e-225, 6.91922e-200, 1.412646e-40, 2.567504e-25, 9.72678e-18, 3.088572e-13, 0.0002199971, 0.1577168, 3.755139, 23.45178, 75.90734, 169.905,
   303.2713, 466.8028, 466.8028 };
   graph = new TGraph(20,Graph_fx427,Graph_fy427);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph427 = new TH1F("Graph_Graph427","",100,2.7,1099.7);
   Graph_Graph427->SetMinimum(0.5134831);
   Graph_Graph427->SetMaximum(513.4831);
   Graph_Graph427->SetDirectory(nullptr);
   Graph_Graph427->SetStats(0);
   Graph_Graph427->SetLineWidth(2);
   Graph_Graph427->SetMarkerStyle(20);
   Graph_Graph427->SetMarkerSize(0.9);
   Graph_Graph427->GetXaxis()->SetLabelFont(42);
   Graph_Graph427->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph427->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph427->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph427->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph427->GetXaxis()->SetTitleFont(42);
   Graph_Graph427->GetYaxis()->SetLabelFont(42);
   Graph_Graph427->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph427->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph427->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph427->GetYaxis()->SetTickLength(0.02);
   Graph_Graph427->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph427->GetYaxis()->SetTitleFont(42);
   Graph_Graph427->GetZaxis()->SetLabelFont(42);
   Graph_Graph427->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph427->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph427->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph427->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph427->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph427);
   
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
   line = new TLine(508.0618,0,508.0618,23.43728);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(508.0568,0,"  508.06 TeV");

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
   pt_LaTex = pt->AddText("#varepsilon = 5.92e-07");
   pt_LaTex = pt->AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
