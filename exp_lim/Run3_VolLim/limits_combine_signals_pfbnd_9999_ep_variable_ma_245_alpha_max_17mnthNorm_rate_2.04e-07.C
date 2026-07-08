#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_17mnthNorm_rate_2.04e-07()
{
//=========Macro generated from canvas: climits/climits
//=========  (Sun Jun  7 15:43:32 2026) by ROOT version 6.30/07
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
   
   Double_t Graph0_fx267[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy267[20] = { 320.329, 11.41549, 8.891878, 4.124951, 4.141319, 3.988183, 3.40795, 5.784091, 7.981492, 10.40518, 12.66543, 23.11222, 23.65378, 23.04471, 23.45991, 23.18075, 22.37266,
   23.26456, 23.36614, 23.36614 };
   TGraph *graph = new TGraph(20,Graph0_fx267,Graph0_fy267);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0267 = new TH1F("Graph_Graph0267","",100,2.7,1099.7);
   Graph_Graph0267->SetMinimum(0.2);
   Graph_Graph0267->SetMaximum(100000);
   Graph_Graph0267->SetDirectory(nullptr);
   Graph_Graph0267->SetStats(0);
   Graph_Graph0267->SetLineWidth(2);
   Graph_Graph0267->SetMarkerStyle(20);
   Graph_Graph0267->SetMarkerSize(0.9);
   Graph_Graph0267->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0267->GetXaxis()->SetRange(0,91);
   Graph_Graph0267->GetXaxis()->SetLabelFont(42);
   Graph_Graph0267->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0267->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0267->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0267->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0267->GetXaxis()->SetTitleFont(42);
   Graph_Graph0267->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0267->GetYaxis()->SetLabelFont(42);
   Graph_Graph0267->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0267->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0267->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0267->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0267->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0267->GetYaxis()->SetTitleFont(42);
   Graph_Graph0267->GetZaxis()->SetLabelFont(42);
   Graph_Graph0267->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0267->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0267->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0267->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0267->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0267);
   
   graph->Draw("al");
   
   Double_t Graph1_fx268[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph1_fy268[42] = { 966.8369, 28.31147, 23.14656, 12.0047, 11.00459, 10.84344, 10.11458, 17.58853, 24.27049, 31.64054, 38.51364, 70.28069, 71.92749, 70.07542, 71.33798, 70.4891, 68.03181,
   70.74394, 71.05285, 71.05285, 71.05285, 4.831177, 4.831177, 4.831177, 4.813114, 4.628181, 4.799989, 4.846843, 4.764211, 4.892604, 4.778603, 2.853409, 2.372349,
   1.870463, 1.409018, 1.055763, 1.350522, 1.468673, 1.221215, 3.12727, 6.359867, 98.34753 };
   graph = new TGraph(42,Graph1_fx268,Graph1_fy268);
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
   
   TH1F *Graph_Graph1268 = new TH1F("Graph_Graph1268","Graph",100,2.7,1099.7);
   Graph_Graph1268->SetMinimum(0.9501868);
   Graph_Graph1268->SetMaximum(1063.415);
   Graph_Graph1268->SetDirectory(nullptr);
   Graph_Graph1268->SetStats(0);
   Graph_Graph1268->SetLineWidth(2);
   Graph_Graph1268->SetMarkerStyle(20);
   Graph_Graph1268->SetMarkerSize(0.9);
   Graph_Graph1268->GetXaxis()->SetLabelFont(42);
   Graph_Graph1268->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1268->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1268->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1268->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1268->GetXaxis()->SetTitleFont(42);
   Graph_Graph1268->GetYaxis()->SetLabelFont(42);
   Graph_Graph1268->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1268->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1268->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1268->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1268->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1268->GetYaxis()->SetTitleFont(42);
   Graph_Graph1268->GetZaxis()->SetLabelFont(42);
   Graph_Graph1268->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1268->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1268->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1268->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1268->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1268);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx269[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph2_fy269[42] = { 615.0603, 17.62199, 14.72369, 7.853728, 7.417407, 7.257318, 6.59187, 11.68629, 16.12596, 21.02282, 25.58949, 46.69636, 47.79054, 46.55998, 47.39885, 46.83484, 45.20215,
   47.00416, 47.20941, 47.20941, 47.20941, 9.729738, 9.729738, 9.729738, 9.691676, 9.312565, 9.662989, 9.763174, 9.592743, 9.854725, 9.621552, 5.539209, 4.586463,
   3.591831, 2.67521, 1.786156, 2.189403, 2.36871, 2.114118, 5.257486, 8.147007, 169.6962 };
   graph = new TGraph(42,Graph2_fx269,Graph2_fy269);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2269 = new TH1F("Graph_Graph2269","Graph",100,2.7,1099.7);
   Graph_Graph2269->SetMinimum(1.60754);
   Graph_Graph2269->SetMaximum(676.3877);
   Graph_Graph2269->SetDirectory(nullptr);
   Graph_Graph2269->SetStats(0);
   Graph_Graph2269->SetLineWidth(2);
   Graph_Graph2269->SetMarkerStyle(20);
   Graph_Graph2269->SetMarkerSize(0.9);
   Graph_Graph2269->GetXaxis()->SetLabelFont(42);
   Graph_Graph2269->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2269->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2269->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2269->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2269->GetXaxis()->SetTitleFont(42);
   Graph_Graph2269->GetYaxis()->SetLabelFont(42);
   Graph_Graph2269->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2269->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2269->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2269->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2269->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2269->GetYaxis()->SetTitleFont(42);
   Graph_Graph2269->GetZaxis()->SetLabelFont(42);
   Graph_Graph2269->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2269->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2269->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2269->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2269->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2269);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx270[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy270[20] = { 320.329, 11.41549, 8.891878, 4.124951, 4.141319, 3.988183, 3.40795, 5.784091, 7.981492, 10.40518, 12.66543, 23.11222, 23.65378, 23.04471, 23.45991, 23.18075, 22.37266,
   23.26456, 23.36614, 23.36614 };
   graph = new TGraph(20,Graph0_fx270,Graph0_fy270);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0270 = new TH1F("Graph_Graph0270","",100,2.7,1099.7);
   Graph_Graph0270->SetMinimum(0.2);
   Graph_Graph0270->SetMaximum(100000);
   Graph_Graph0270->SetDirectory(nullptr);
   Graph_Graph0270->SetStats(0);
   Graph_Graph0270->SetLineWidth(2);
   Graph_Graph0270->SetMarkerStyle(20);
   Graph_Graph0270->SetMarkerSize(0.9);
   Graph_Graph0270->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0270->GetXaxis()->SetRange(0,91);
   Graph_Graph0270->GetXaxis()->SetLabelFont(42);
   Graph_Graph0270->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0270->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0270->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0270->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0270->GetXaxis()->SetTitleFont(42);
   Graph_Graph0270->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0270->GetYaxis()->SetLabelFont(42);
   Graph_Graph0270->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0270->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0270->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0270->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0270->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0270->GetYaxis()->SetTitleFont(42);
   Graph_Graph0270->GetZaxis()->SetLabelFont(42);
   Graph_Graph0270->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0270->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0270->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0270->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0270->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0270);
   
   graph->Draw("l");
   
   Double_t Graph_fx271[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph_fy271[20] = { 4.922532e-68, 8.491724e-50, 6.927723e-39, 1.243755e-31, 1.827383e-26, 1.337629e-22, 1.329405e-19, 0.1767819, 6.977967, 38.95768, 98.49756, 444.8071, 590.1941, 604.5386, 571.7187, 525.73, 478.9701,
   435.6632, 396.9476, 396.9476 };
   graph = new TGraph(20,Graph_fx271,Graph_fy271);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph271 = new TH1F("Graph_Graph271","",100,2.7,1099.7);
   Graph_Graph271->SetMinimum(4.430279e-68);
   Graph_Graph271->SetMaximum(664.9925);
   Graph_Graph271->SetDirectory(nullptr);
   Graph_Graph271->SetStats(0);
   Graph_Graph271->SetLineWidth(2);
   Graph_Graph271->SetMarkerStyle(20);
   Graph_Graph271->SetMarkerSize(0.9);
   Graph_Graph271->GetXaxis()->SetLabelFont(42);
   Graph_Graph271->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph271->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph271->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph271->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph271->GetXaxis()->SetTitleFont(42);
   Graph_Graph271->GetYaxis()->SetLabelFont(42);
   Graph_Graph271->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph271->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph271->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph271->GetYaxis()->SetTickLength(0.02);
   Graph_Graph271->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph271->GetYaxis()->SetTitleFont(42);
   Graph_Graph271->GetZaxis()->SetLabelFont(42);
   Graph_Graph271->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph271->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph271->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph271->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph271->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph271);
   
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
   
   Double_t Graph_fx273[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph_fy273[20] = { 5.414785e-68, 9.340896e-50, 7.620495e-39, 1.368131e-31, 2.010121e-26, 1.471392e-22, 1.462346e-19, 0.1944601, 7.675764, 42.85345, 108.3473, 489.2878, 649.2135, 664.9925, 628.8906, 578.303, 526.8671,
   479.2295, 436.6424, 436.6424 };
   graph = new TGraph(20,Graph_fx273,Graph_fy273);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph273 = new TH1F("Graph_Graph273","",100,2.7,1099.7);
   Graph_Graph273->SetMinimum(4.873307e-68);
   Graph_Graph273->SetMaximum(731.4917);
   Graph_Graph273->SetDirectory(nullptr);
   Graph_Graph273->SetStats(0);
   Graph_Graph273->SetLineWidth(2);
   Graph_Graph273->SetMarkerStyle(20);
   Graph_Graph273->SetMarkerSize(0.9);
   Graph_Graph273->GetXaxis()->SetLabelFont(42);
   Graph_Graph273->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph273->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph273->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph273->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph273->GetXaxis()->SetTitleFont(42);
   Graph_Graph273->GetYaxis()->SetLabelFont(42);
   Graph_Graph273->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph273->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph273->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph273->GetYaxis()->SetTickLength(0.02);
   Graph_Graph273->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph273->GetYaxis()->SetTitleFont(42);
   Graph_Graph273->GetZaxis()->SetLabelFont(42);
   Graph_Graph273->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph273->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph273->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph273->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph273->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph273);
   
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
   line = new TLine(61.84756,0,61.84756,8.179426);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(61.84256,0,"  61.85 TeV");

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
   pt_LaTex = pt->AddText("#varepsilon = 2.04e-07");
   pt_LaTex = pt->AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
