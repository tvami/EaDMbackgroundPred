#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_17mnthNorm_rate_4.48e-07()
{
//=========Macro generated from canvas: climits/climits
//=========  (Sun Jun  7 15:43:34 2026) by ROOT version 6.30/07
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
   
   Double_t Graph0_fx379[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy379[20] = { 320.329, 11.41549, 8.891878, 4.124951, 4.141319, 3.988183, 3.40795, 5.784091, 7.981492, 10.40518, 12.66543, 23.11222, 23.65378, 23.04471, 23.45991, 23.18075, 22.37266,
   23.26456, 23.36614, 23.36614 };
   TGraph *graph = new TGraph(20,Graph0_fx379,Graph0_fy379);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0379 = new TH1F("Graph_Graph0379","",100,2.7,1099.7);
   Graph_Graph0379->SetMinimum(0.2);
   Graph_Graph0379->SetMaximum(100000);
   Graph_Graph0379->SetDirectory(nullptr);
   Graph_Graph0379->SetStats(0);
   Graph_Graph0379->SetLineWidth(2);
   Graph_Graph0379->SetMarkerStyle(20);
   Graph_Graph0379->SetMarkerSize(0.9);
   Graph_Graph0379->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0379->GetXaxis()->SetRange(0,91);
   Graph_Graph0379->GetXaxis()->SetLabelFont(42);
   Graph_Graph0379->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0379->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0379->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0379->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0379->GetXaxis()->SetTitleFont(42);
   Graph_Graph0379->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0379->GetYaxis()->SetLabelFont(42);
   Graph_Graph0379->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0379->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0379->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0379->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0379->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0379->GetYaxis()->SetTitleFont(42);
   Graph_Graph0379->GetZaxis()->SetLabelFont(42);
   Graph_Graph0379->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0379->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0379->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0379->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0379->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0379);
   
   graph->Draw("al");
   
   Double_t Graph1_fx380[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph1_fy380[42] = { 966.8369, 28.31147, 23.14656, 12.0047, 11.00459, 10.84344, 10.11458, 17.58853, 24.27049, 31.64054, 38.51364, 70.28069, 71.92749, 70.07542, 71.33798, 70.4891, 68.03181,
   70.74394, 71.05285, 71.05285, 71.05285, 4.831177, 4.831177, 4.831177, 4.813114, 4.628181, 4.799989, 4.846843, 4.764211, 4.892604, 4.778603, 2.853409, 2.372349,
   1.870463, 1.409018, 1.055763, 1.350522, 1.468673, 1.221215, 3.12727, 6.359867, 98.34753 };
   graph = new TGraph(42,Graph1_fx380,Graph1_fy380);
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
   
   TH1F *Graph_Graph1380 = new TH1F("Graph_Graph1380","Graph",100,2.7,1099.7);
   Graph_Graph1380->SetMinimum(0.9501868);
   Graph_Graph1380->SetMaximum(1063.415);
   Graph_Graph1380->SetDirectory(nullptr);
   Graph_Graph1380->SetStats(0);
   Graph_Graph1380->SetLineWidth(2);
   Graph_Graph1380->SetMarkerStyle(20);
   Graph_Graph1380->SetMarkerSize(0.9);
   Graph_Graph1380->GetXaxis()->SetLabelFont(42);
   Graph_Graph1380->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1380->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1380->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1380->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1380->GetXaxis()->SetTitleFont(42);
   Graph_Graph1380->GetYaxis()->SetLabelFont(42);
   Graph_Graph1380->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1380->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1380->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1380->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1380->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1380->GetYaxis()->SetTitleFont(42);
   Graph_Graph1380->GetZaxis()->SetLabelFont(42);
   Graph_Graph1380->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1380->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1380->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1380->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1380->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1380);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx381[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph2_fy381[42] = { 615.0603, 17.62199, 14.72369, 7.853728, 7.417407, 7.257318, 6.59187, 11.68629, 16.12596, 21.02282, 25.58949, 46.69636, 47.79054, 46.55998, 47.39885, 46.83484, 45.20215,
   47.00416, 47.20941, 47.20941, 47.20941, 9.729738, 9.729738, 9.729738, 9.691676, 9.312565, 9.662989, 9.763174, 9.592743, 9.854725, 9.621552, 5.539209, 4.586463,
   3.591831, 2.67521, 1.786156, 2.189403, 2.36871, 2.114118, 5.257486, 8.147007, 169.6962 };
   graph = new TGraph(42,Graph2_fx381,Graph2_fy381);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2381 = new TH1F("Graph_Graph2381","Graph",100,2.7,1099.7);
   Graph_Graph2381->SetMinimum(1.60754);
   Graph_Graph2381->SetMaximum(676.3877);
   Graph_Graph2381->SetDirectory(nullptr);
   Graph_Graph2381->SetStats(0);
   Graph_Graph2381->SetLineWidth(2);
   Graph_Graph2381->SetMarkerStyle(20);
   Graph_Graph2381->SetMarkerSize(0.9);
   Graph_Graph2381->GetXaxis()->SetLabelFont(42);
   Graph_Graph2381->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2381->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2381->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2381->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2381->GetXaxis()->SetTitleFont(42);
   Graph_Graph2381->GetYaxis()->SetLabelFont(42);
   Graph_Graph2381->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2381->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2381->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2381->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2381->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2381->GetYaxis()->SetTitleFont(42);
   Graph_Graph2381->GetZaxis()->SetLabelFont(42);
   Graph_Graph2381->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2381->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2381->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2381->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2381->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2381);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx382[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy382[20] = { 320.329, 11.41549, 8.891878, 4.124951, 4.141319, 3.988183, 3.40795, 5.784091, 7.981492, 10.40518, 12.66543, 23.11222, 23.65378, 23.04471, 23.45991, 23.18075, 22.37266,
   23.26456, 23.36614, 23.36614 };
   graph = new TGraph(20,Graph0_fx382,Graph0_fy382);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0382 = new TH1F("Graph_Graph0382","",100,2.7,1099.7);
   Graph_Graph0382->SetMinimum(0.2);
   Graph_Graph0382->SetMaximum(100000);
   Graph_Graph0382->SetDirectory(nullptr);
   Graph_Graph0382->SetStats(0);
   Graph_Graph0382->SetLineWidth(2);
   Graph_Graph0382->SetMarkerStyle(20);
   Graph_Graph0382->SetMarkerSize(0.9);
   Graph_Graph0382->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0382->GetXaxis()->SetRange(0,91);
   Graph_Graph0382->GetXaxis()->SetLabelFont(42);
   Graph_Graph0382->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0382->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0382->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0382->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0382->GetXaxis()->SetTitleFont(42);
   Graph_Graph0382->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0382->GetYaxis()->SetLabelFont(42);
   Graph_Graph0382->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0382->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0382->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0382->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0382->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0382->GetYaxis()->SetTitleFont(42);
   Graph_Graph0382->GetZaxis()->SetLabelFont(42);
   Graph_Graph0382->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0382->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0382->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0382->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0382->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0382);
   
   graph->Draw("l");
   
   Double_t Graph_fx383[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph_fy383[20] = { 0, 1.438658e-259, 1.981766e-206, 5.045112e-171, 9.512783e-146, 8.395993e-127, 4.479841e-112, 3.164112e-21, 1.362914e-12, 2.513595e-08, 8.213069e-06, 0.6194516, 21.0095, 108.8022, 272.0642, 478.3755, 692.4655,
   891.3604, 1063.982, 1063.982 };
   graph = new TGraph(20,Graph_fx383,Graph_fy383);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph383 = new TH1F("Graph_Graph383","",100,2.7,1099.7);
   Graph_Graph383->SetMinimum(1.17038);
   Graph_Graph383->SetMaximum(1170.38);
   Graph_Graph383->SetDirectory(nullptr);
   Graph_Graph383->SetStats(0);
   Graph_Graph383->SetLineWidth(2);
   Graph_Graph383->SetMarkerStyle(20);
   Graph_Graph383->SetMarkerSize(0.9);
   Graph_Graph383->GetXaxis()->SetLabelFont(42);
   Graph_Graph383->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph383->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph383->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph383->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph383->GetXaxis()->SetTitleFont(42);
   Graph_Graph383->GetYaxis()->SetLabelFont(42);
   Graph_Graph383->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph383->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph383->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph383->GetYaxis()->SetTickLength(0.02);
   Graph_Graph383->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph383->GetYaxis()->SetTitleFont(42);
   Graph_Graph383->GetZaxis()->SetLabelFont(42);
   Graph_Graph383->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph383->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph383->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph383->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph383->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph383);
   
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
   
   Double_t Graph_fx385[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph_fy385[20] = { 0, 1.582524e-259, 2.179943e-206, 5.549623e-171, 1.046406e-145, 9.235592e-127, 4.927825e-112, 3.480523e-21, 1.499205e-12, 2.764955e-08, 9.034376e-06, 0.6813968, 23.11045, 119.6824, 299.2706, 526.2131, 761.7121,
   980.4964, 1170.38, 1170.38 };
   graph = new TGraph(20,Graph_fx385,Graph_fy385);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph385 = new TH1F("Graph_Graph385","",100,2.7,1099.7);
   Graph_Graph385->SetMinimum(1.287418);
   Graph_Graph385->SetMaximum(1287.418);
   Graph_Graph385->SetDirectory(nullptr);
   Graph_Graph385->SetStats(0);
   Graph_Graph385->SetLineWidth(2);
   Graph_Graph385->SetMarkerStyle(20);
   Graph_Graph385->SetMarkerSize(0.9);
   Graph_Graph385->GetXaxis()->SetLabelFont(42);
   Graph_Graph385->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph385->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph385->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph385->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph385->GetXaxis()->SetTitleFont(42);
   Graph_Graph385->GetYaxis()->SetLabelFont(42);
   Graph_Graph385->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph385->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph385->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph385->GetYaxis()->SetTickLength(0.02);
   Graph_Graph385->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph385->GetYaxis()->SetTitleFont(42);
   Graph_Graph385->GetZaxis()->SetLabelFont(42);
   Graph_Graph385->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph385->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph385->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph385->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph385->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph385);
   
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
   line = new TLine(307.096,0,307.096,23.61003);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(307.091,0,"  307.10 TeV");

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
   pt_LaTex = pt->AddText("#varepsilon = 4.48e-07");
   pt_LaTex = pt->AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
