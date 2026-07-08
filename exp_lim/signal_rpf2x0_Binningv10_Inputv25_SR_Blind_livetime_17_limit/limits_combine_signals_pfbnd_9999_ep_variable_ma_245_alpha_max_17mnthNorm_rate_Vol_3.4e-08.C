#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_17mnthNorm_rate_Vol_3.4e-08()
{
//=========Macro generated from canvas: climits/climits
//=========  (Fri Jun 12 12:26:04 2026) by ROOT version 6.30/07
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
   
   Double_t Graph0_fx148[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy148[20] = { 589.2099, 10.5092, 9.887071, 6.494073, 6.255495, 6.043055, 5.639588, 9.105873, 12.6698, 16.58672, 20.30507, 37.79541, 38.68581, 37.6883, 38.38039, 37.89287, 36.57057,
   38.04265, 38.21704, 38.21704 };
   TGraph *graph = new TGraph(20,Graph0_fx148,Graph0_fy148);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0148 = new TH1F("Graph_Graph0148","",100,2.7,1099.7);
   Graph_Graph0148->SetMinimum(0.2);
   Graph_Graph0148->SetMaximum(100000);
   Graph_Graph0148->SetDirectory(nullptr);
   Graph_Graph0148->SetStats(0);
   Graph_Graph0148->SetLineWidth(2);
   Graph_Graph0148->SetMarkerStyle(20);
   Graph_Graph0148->SetMarkerSize(0.9);
   Graph_Graph0148->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0148->GetXaxis()->SetRange(0,91);
   Graph_Graph0148->GetXaxis()->SetLabelFont(42);
   Graph_Graph0148->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0148->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0148->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0148->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0148->GetXaxis()->SetTitleFont(42);
   Graph_Graph0148->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0148->GetYaxis()->SetLabelFont(42);
   Graph_Graph0148->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0148->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0148->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0148->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0148->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0148->GetYaxis()->SetTitleFont(42);
   Graph_Graph0148->GetZaxis()->SetLabelFont(42);
   Graph_Graph0148->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0148->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0148->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0148->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0148->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0148);
   
   graph->Draw("al");
   
   Double_t Graph1_fx149[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph1_fy149[42] = { 1457.687, 27.47935, 26.15284, 19.24384, 17.92632, 17.38699, 16.73084, 27.68956, 38.5269, 50.43768, 61.74458, 114.93, 117.6376, 114.6043, 116.7088, 115.2264, 111.2055,
   115.6819, 116.2122, 116.2122, 116.2122, 10.39722, 10.39722, 10.39722, 10.3537, 9.988422, 10.3177, 10.43798, 10.26521, 10.51494, 10.29444, 6.010248, 5.020941,
   3.941724, 2.985353, 2.162053, 2.394337, 2.547583, 2.512898, 4.001464, 4.713741, 262.2424 };
   graph = new TGraph(42,Graph1_fx149,Graph1_fy149);
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
   
   TH1F *Graph_Graph1149 = new TH1F("Graph_Graph1149","Graph",100,2.7,1099.7);
   Graph_Graph1149->SetMinimum(1.945848);
   Graph_Graph1149->SetMaximum(1603.239);
   Graph_Graph1149->SetDirectory(nullptr);
   Graph_Graph1149->SetStats(0);
   Graph_Graph1149->SetLineWidth(2);
   Graph_Graph1149->SetMarkerStyle(20);
   Graph_Graph1149->SetMarkerSize(0.9);
   Graph_Graph1149->GetXaxis()->SetLabelFont(42);
   Graph_Graph1149->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1149->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1149->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1149->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1149->GetXaxis()->SetTitleFont(42);
   Graph_Graph1149->GetYaxis()->SetLabelFont(42);
   Graph_Graph1149->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1149->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1149->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1149->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1149->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1149->GetYaxis()->SetTitleFont(42);
   Graph_Graph1149->GetZaxis()->SetLabelFont(42);
   Graph_Graph1149->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1149->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1149->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1149->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1149->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1149);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx150[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph2_fy150[42] = { 947.109, 16.94284, 16.24654, 11.94261, 11.21071, 10.94063, 10.50743, 18.34658, 25.57006, 33.50286, 41.02474, 76.36258, 78.16154, 76.14616, 77.54447, 76.55948, 73.88788,
   76.8621, 77.21445, 77.21445, 77.21445, 18.0371, 18.0371, 18.0371, 17.9599, 17.30348, 17.89571, 18.10911, 17.80027, 18.24829, 17.85128, 10.12336, 8.389798,
   6.532065, 4.813535, 3.294587, 3.624633, 3.806329, 3.819029, 6.086224, 6.900109, 379.705 };
   graph = new TGraph(42,Graph2_fx150,Graph2_fy150);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2150 = new TH1F("Graph_Graph2150","Graph",100,2.7,1099.7);
   Graph_Graph2150->SetMinimum(2.965129);
   Graph_Graph2150->SetMaximum(1041.49);
   Graph_Graph2150->SetDirectory(nullptr);
   Graph_Graph2150->SetStats(0);
   Graph_Graph2150->SetLineWidth(2);
   Graph_Graph2150->SetMarkerStyle(20);
   Graph_Graph2150->SetMarkerSize(0.9);
   Graph_Graph2150->GetXaxis()->SetLabelFont(42);
   Graph_Graph2150->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2150->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2150->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2150->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2150->GetXaxis()->SetTitleFont(42);
   Graph_Graph2150->GetYaxis()->SetLabelFont(42);
   Graph_Graph2150->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2150->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2150->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2150->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2150->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2150->GetYaxis()->SetTitleFont(42);
   Graph_Graph2150->GetZaxis()->SetLabelFont(42);
   Graph_Graph2150->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2150->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2150->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2150->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2150->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2150);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx151[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy151[20] = { 589.2099, 10.5092, 9.887071, 6.494073, 6.255495, 6.043055, 5.639588, 9.105873, 12.6698, 16.58672, 20.30507, 37.79541, 38.68581, 37.6883, 38.38039, 37.89287, 36.57057,
   38.04265, 38.21704, 38.21704 };
   graph = new TGraph(20,Graph0_fx151,Graph0_fy151);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0151 = new TH1F("Graph_Graph0151","",100,2.7,1099.7);
   Graph_Graph0151->SetMinimum(0.2);
   Graph_Graph0151->SetMaximum(100000);
   Graph_Graph0151->SetDirectory(nullptr);
   Graph_Graph0151->SetStats(0);
   Graph_Graph0151->SetLineWidth(2);
   Graph_Graph0151->SetMarkerStyle(20);
   Graph_Graph0151->SetMarkerSize(0.9);
   Graph_Graph0151->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0151->GetXaxis()->SetRange(0,91);
   Graph_Graph0151->GetXaxis()->SetLabelFont(42);
   Graph_Graph0151->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0151->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0151->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0151->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0151->GetXaxis()->SetTitleFont(42);
   Graph_Graph0151->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0151->GetYaxis()->SetLabelFont(42);
   Graph_Graph0151->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0151->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0151->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0151->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0151->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0151->GetYaxis()->SetTitleFont(42);
   Graph_Graph0151->GetZaxis()->SetLabelFont(42);
   Graph_Graph0151->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0151->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0151->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0151->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0151->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0151);
   
   graph->Draw("l");
   
   Double_t Graph_fx152[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph_fy152[20] = { 15.00711, 32.6534, 48.53071, 60.32397, 68.16063, 72.86203, 75.27078, 31.95857, 20.46257, 14.55008, 10.68371, 4.06928, 2.367866, 1.606181, 1.1862, 0.9249993, 0.7491116,
   0.6237831, 0.5306204, 0.5306204 };
   graph = new TGraph(20,Graph_fx152,Graph_fy152);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph152 = new TH1F("Graph_Graph152","",100,2.7,1099.7);
   Graph_Graph152->SetMinimum(0.4775584);
   Graph_Graph152->SetMaximum(82.7448);
   Graph_Graph152->SetDirectory(nullptr);
   Graph_Graph152->SetStats(0);
   Graph_Graph152->SetLineWidth(2);
   Graph_Graph152->SetMarkerStyle(20);
   Graph_Graph152->SetMarkerSize(0.9);
   Graph_Graph152->GetXaxis()->SetLabelFont(42);
   Graph_Graph152->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph152->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph152->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph152->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph152->GetXaxis()->SetTitleFont(42);
   Graph_Graph152->GetYaxis()->SetLabelFont(42);
   Graph_Graph152->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph152->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph152->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph152->GetYaxis()->SetTickLength(0.02);
   Graph_Graph152->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph152->GetYaxis()->SetTitleFont(42);
   Graph_Graph152->GetZaxis()->SetLabelFont(42);
   Graph_Graph152->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph152->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph152->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph152->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph152->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph152);
   
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
   
   Double_t Graph_fx154[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph_fy154[20] = { 16.50782, 35.91874, 53.38378, 66.35637, 74.97669, 80.14823, 82.79786, 35.15443, 22.50883, 16.00509, 11.75208, 4.476208, 2.604653, 1.766799, 1.30482, 1.017499, 0.8240228,
   0.6861614, 0.5836824, 0.5836824 };
   graph = new TGraph(20,Graph_fx154,Graph_fy154);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph154 = new TH1F("Graph_Graph154","",100,2.7,1099.7);
   Graph_Graph154->SetMinimum(0.5253142);
   Graph_Graph154->SetMaximum(91.01928);
   Graph_Graph154->SetDirectory(nullptr);
   Graph_Graph154->SetStats(0);
   Graph_Graph154->SetLineWidth(2);
   Graph_Graph154->SetMarkerStyle(20);
   Graph_Graph154->SetMarkerSize(0.9);
   Graph_Graph154->GetXaxis()->SetLabelFont(42);
   Graph_Graph154->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph154->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph154->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph154->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph154->GetXaxis()->SetTitleFont(42);
   Graph_Graph154->GetYaxis()->SetLabelFont(42);
   Graph_Graph154->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph154->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph154->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph154->GetYaxis()->SetTickLength(0.02);
   Graph_Graph154->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph154->GetYaxis()->SetTitleFont(42);
   Graph_Graph154->GetZaxis()->SetLabelFont(42);
   Graph_Graph154->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph154->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph154->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph154->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph154->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph154);
   
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
   line = new TLine(3.764007,0,3.764007,27.18003);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(3.759007,0,"  3.76 TeV");

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
      tex = new TLatex(0.4325,0.95,"Work in Progress");
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
   pt_LaTex = pt->AddText("#varepsilon = 3.4e-08");
   pt_LaTex = pt->AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
