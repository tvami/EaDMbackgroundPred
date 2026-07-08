#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_17mnthNorm_rate_Vol_3.04e-07()
{
//=========Macro generated from canvas: climits/climits
//=========  (Fri Jun 12 12:26:06 2026) by ROOT version 6.30/07
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
   
   Double_t Graph0_fx337[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy337[20] = { 589.2099, 10.5092, 9.887071, 6.494073, 6.255495, 6.043055, 5.639588, 9.105873, 12.6698, 16.58672, 20.30507, 37.79541, 38.68581, 37.6883, 38.38039, 37.89287, 36.57057,
   38.04265, 38.21704, 38.21704 };
   TGraph *graph = new TGraph(20,Graph0_fx337,Graph0_fy337);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0337 = new TH1F("Graph_Graph0337","",100,2.7,1099.7);
   Graph_Graph0337->SetMinimum(0.2);
   Graph_Graph0337->SetMaximum(100000);
   Graph_Graph0337->SetDirectory(nullptr);
   Graph_Graph0337->SetStats(0);
   Graph_Graph0337->SetLineWidth(2);
   Graph_Graph0337->SetMarkerStyle(20);
   Graph_Graph0337->SetMarkerSize(0.9);
   Graph_Graph0337->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0337->GetXaxis()->SetRange(0,91);
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
   
   Double_t Graph1_fx338[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph1_fy338[42] = { 1457.687, 27.47935, 26.15284, 19.24384, 17.92632, 17.38699, 16.73084, 27.68956, 38.5269, 50.43768, 61.74458, 114.93, 117.6376, 114.6043, 116.7088, 115.2264, 111.2055,
   115.6819, 116.2122, 116.2122, 116.2122, 10.39722, 10.39722, 10.39722, 10.3537, 9.988422, 10.3177, 10.43798, 10.26521, 10.51494, 10.29444, 6.010248, 5.020941,
   3.941724, 2.985353, 2.162053, 2.394337, 2.547583, 2.512898, 4.001464, 4.713741, 262.2424 };
   graph = new TGraph(42,Graph1_fx338,Graph1_fy338);
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
   
   TH1F *Graph_Graph1338 = new TH1F("Graph_Graph1338","Graph",100,2.7,1099.7);
   Graph_Graph1338->SetMinimum(1.945848);
   Graph_Graph1338->SetMaximum(1603.239);
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
   
   Double_t Graph2_fx339[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph2_fy339[42] = { 947.109, 16.94284, 16.24654, 11.94261, 11.21071, 10.94063, 10.50743, 18.34658, 25.57006, 33.50286, 41.02474, 76.36258, 78.16154, 76.14616, 77.54447, 76.55948, 73.88788,
   76.8621, 77.21445, 77.21445, 77.21445, 18.0371, 18.0371, 18.0371, 17.9599, 17.30348, 17.89571, 18.10911, 17.80027, 18.24829, 17.85128, 10.12336, 8.389798,
   6.532065, 4.813535, 3.294587, 3.624633, 3.806329, 3.819029, 6.086224, 6.900109, 379.705 };
   graph = new TGraph(42,Graph2_fx339,Graph2_fy339);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2339 = new TH1F("Graph_Graph2339","Graph",100,2.7,1099.7);
   Graph_Graph2339->SetMinimum(2.965129);
   Graph_Graph2339->SetMaximum(1041.49);
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
   
   Double_t Graph0_fx340[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy340[20] = { 589.2099, 10.5092, 9.887071, 6.494073, 6.255495, 6.043055, 5.639588, 9.105873, 12.6698, 16.58672, 20.30507, 37.79541, 38.68581, 37.6883, 38.38039, 37.89287, 36.57057,
   38.04265, 38.21704, 38.21704 };
   graph = new TGraph(20,Graph0_fx340,Graph0_fy340);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0340 = new TH1F("Graph_Graph0340","",100,2.7,1099.7);
   Graph_Graph0340->SetMinimum(0.2);
   Graph_Graph0340->SetMaximum(100000);
   Graph_Graph0340->SetDirectory(nullptr);
   Graph_Graph0340->SetStats(0);
   Graph_Graph0340->SetLineWidth(2);
   Graph_Graph0340->SetMarkerStyle(20);
   Graph_Graph0340->SetMarkerSize(0.9);
   Graph_Graph0340->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0340->GetXaxis()->SetRange(0,91);
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
   
   Double_t Graph_fx341[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph_fy341[20] = { 3.098503e-157, 1.590202e-116, 3.954995e-92, 6.929325e-76, 2.684025e-64, 1.285416e-55, 7.111313e-49, 1.57891e-07, 0.001101538, 0.08175975, 0.9762867, 98.34097, 367.3059, 631.2367, 814.3136, 921.0138, 972.7961,
   988.6028, 981.8835, 981.8835 };
   graph = new TGraph(20,Graph_fx341,Graph_fy341);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph341 = new TH1F("Graph_Graph341","",100,2.7,1099.7);
   Graph_Graph341->SetMinimum(2.788653e-157);
   Graph_Graph341->SetMaximum(1087.463);
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
   
   Double_t Graph_fx343[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph_fy343[20] = { 3.408353e-157, 1.749222e-116, 4.350495e-92, 7.622258e-76, 2.952428e-64, 1.413958e-55, 7.822444e-49, 1.736801e-07, 0.001211692, 0.08993573, 1.073915, 108.1751, 404.0365, 694.3604, 895.745, 1013.115, 1070.076,
   1087.463, 1080.072, 1080.072 };
   graph = new TGraph(20,Graph_fx343,Graph_fy343);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph343 = new TH1F("Graph_Graph343","",100,2.7,1099.7);
   Graph_Graph343->SetMinimum(3.067518e-157);
   Graph_Graph343->SetMaximum(1196.209);
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
   line = new TLine(176.0405,0,176.0405,32.56777);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(176.0355,0,"  176.04 TeV");

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
   pt_LaTex = pt->AddText("#varepsilon = 3.04e-07");
   pt_LaTex = pt->AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
