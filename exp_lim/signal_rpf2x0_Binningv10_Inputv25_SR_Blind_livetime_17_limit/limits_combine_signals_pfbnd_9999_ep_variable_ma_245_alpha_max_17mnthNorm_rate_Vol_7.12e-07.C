#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_17mnthNorm_rate_Vol_7.12e-07()
{
//=========Macro generated from canvas: climits/climits
//=========  (Fri Jun 12 12:26:07 2026) by ROOT version 6.30/07
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
   
   Double_t Graph0_fx456[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy456[20] = { 589.2099, 10.5092, 9.887071, 6.494073, 6.255495, 6.043055, 5.639588, 9.105873, 12.6698, 16.58672, 20.30507, 37.79541, 38.68581, 37.6883, 38.38039, 37.89287, 36.57057,
   38.04265, 38.21704, 38.21704 };
   TGraph *graph = new TGraph(20,Graph0_fx456,Graph0_fy456);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0456 = new TH1F("Graph_Graph0456","",100,2.7,1099.7);
   Graph_Graph0456->SetMinimum(0.2);
   Graph_Graph0456->SetMaximum(100000);
   Graph_Graph0456->SetDirectory(nullptr);
   Graph_Graph0456->SetStats(0);
   Graph_Graph0456->SetLineWidth(2);
   Graph_Graph0456->SetMarkerStyle(20);
   Graph_Graph0456->SetMarkerSize(0.9);
   Graph_Graph0456->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0456->GetXaxis()->SetRange(0,91);
   Graph_Graph0456->GetXaxis()->SetLabelFont(42);
   Graph_Graph0456->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0456->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0456->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0456->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0456->GetXaxis()->SetTitleFont(42);
   Graph_Graph0456->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0456->GetYaxis()->SetLabelFont(42);
   Graph_Graph0456->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0456->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0456->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0456->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0456->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0456->GetYaxis()->SetTitleFont(42);
   Graph_Graph0456->GetZaxis()->SetLabelFont(42);
   Graph_Graph0456->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0456->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0456->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0456->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0456->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0456);
   
   graph->Draw("al");
   
   Double_t Graph1_fx457[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph1_fy457[42] = { 1457.687, 27.47935, 26.15284, 19.24384, 17.92632, 17.38699, 16.73084, 27.68956, 38.5269, 50.43768, 61.74458, 114.93, 117.6376, 114.6043, 116.7088, 115.2264, 111.2055,
   115.6819, 116.2122, 116.2122, 116.2122, 10.39722, 10.39722, 10.39722, 10.3537, 9.988422, 10.3177, 10.43798, 10.26521, 10.51494, 10.29444, 6.010248, 5.020941,
   3.941724, 2.985353, 2.162053, 2.394337, 2.547583, 2.512898, 4.001464, 4.713741, 262.2424 };
   graph = new TGraph(42,Graph1_fx457,Graph1_fy457);
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
   
   TH1F *Graph_Graph1457 = new TH1F("Graph_Graph1457","Graph",100,2.7,1099.7);
   Graph_Graph1457->SetMinimum(1.945848);
   Graph_Graph1457->SetMaximum(1603.239);
   Graph_Graph1457->SetDirectory(nullptr);
   Graph_Graph1457->SetStats(0);
   Graph_Graph1457->SetLineWidth(2);
   Graph_Graph1457->SetMarkerStyle(20);
   Graph_Graph1457->SetMarkerSize(0.9);
   Graph_Graph1457->GetXaxis()->SetLabelFont(42);
   Graph_Graph1457->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1457->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1457->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1457->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1457->GetXaxis()->SetTitleFont(42);
   Graph_Graph1457->GetYaxis()->SetLabelFont(42);
   Graph_Graph1457->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1457->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1457->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1457->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1457->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1457->GetYaxis()->SetTitleFont(42);
   Graph_Graph1457->GetZaxis()->SetLabelFont(42);
   Graph_Graph1457->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1457->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1457->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1457->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1457->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1457);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx458[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph2_fy458[42] = { 947.109, 16.94284, 16.24654, 11.94261, 11.21071, 10.94063, 10.50743, 18.34658, 25.57006, 33.50286, 41.02474, 76.36258, 78.16154, 76.14616, 77.54447, 76.55948, 73.88788,
   76.8621, 77.21445, 77.21445, 77.21445, 18.0371, 18.0371, 18.0371, 17.9599, 17.30348, 17.89571, 18.10911, 17.80027, 18.24829, 17.85128, 10.12336, 8.389798,
   6.532065, 4.813535, 3.294587, 3.624633, 3.806329, 3.819029, 6.086224, 6.900109, 379.705 };
   graph = new TGraph(42,Graph2_fx458,Graph2_fy458);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2458 = new TH1F("Graph_Graph2458","Graph",100,2.7,1099.7);
   Graph_Graph2458->SetMinimum(2.965129);
   Graph_Graph2458->SetMaximum(1041.49);
   Graph_Graph2458->SetDirectory(nullptr);
   Graph_Graph2458->SetStats(0);
   Graph_Graph2458->SetLineWidth(2);
   Graph_Graph2458->SetMarkerStyle(20);
   Graph_Graph2458->SetMarkerSize(0.9);
   Graph_Graph2458->GetXaxis()->SetLabelFont(42);
   Graph_Graph2458->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2458->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2458->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2458->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2458->GetXaxis()->SetTitleFont(42);
   Graph_Graph2458->GetYaxis()->SetLabelFont(42);
   Graph_Graph2458->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2458->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2458->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2458->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2458->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2458->GetYaxis()->SetTitleFont(42);
   Graph_Graph2458->GetZaxis()->SetLabelFont(42);
   Graph_Graph2458->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2458->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2458->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2458->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2458->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2458);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx459[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy459[20] = { 589.2099, 10.5092, 9.887071, 6.494073, 6.255495, 6.043055, 5.639588, 9.105873, 12.6698, 16.58672, 20.30507, 37.79541, 38.68581, 37.6883, 38.38039, 37.89287, 36.57057,
   38.04265, 38.21704, 38.21704 };
   graph = new TGraph(20,Graph0_fx459,Graph0_fy459);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0459 = new TH1F("Graph_Graph0459","",100,2.7,1099.7);
   Graph_Graph0459->SetMinimum(0.2);
   Graph_Graph0459->SetMaximum(100000);
   Graph_Graph0459->SetDirectory(nullptr);
   Graph_Graph0459->SetStats(0);
   Graph_Graph0459->SetLineWidth(2);
   Graph_Graph0459->SetMarkerStyle(20);
   Graph_Graph0459->SetMarkerSize(0.9);
   Graph_Graph0459->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0459->GetXaxis()->SetRange(0,91);
   Graph_Graph0459->GetXaxis()->SetLabelFont(42);
   Graph_Graph0459->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0459->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0459->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0459->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0459->GetXaxis()->SetTitleFont(42);
   Graph_Graph0459->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0459->GetYaxis()->SetLabelFont(42);
   Graph_Graph0459->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0459->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0459->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0459->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0459->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0459->GetYaxis()->SetTitleFont(42);
   Graph_Graph0459->GetZaxis()->SetLabelFont(42);
   Graph_Graph0459->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0459->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0459->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0459->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0459->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0459);
   
   graph->Draw("l");
   
   Double_t Graph_fx460[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph_fy460[20] = { 0, 0, 0, 0, 0, 0, 6.587712e-292, 4.58805e-61, 6.976749e-39, 7.645136e-28, 2.896934e-21, 2.938512e-08, 0.0005106207, 0.05985514, 0.9727566, 5.956816, 21.02441,
   52.80672, 106.015, 106.015 };
   graph = new TGraph(20,Graph_fx460,Graph_fy460);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph460 = new TH1F("Graph_Graph460","",100,2.7,1099.7);
   Graph_Graph460->SetMinimum(0.1166165);
   Graph_Graph460->SetMaximum(116.6165);
   Graph_Graph460->SetDirectory(nullptr);
   Graph_Graph460->SetStats(0);
   Graph_Graph460->SetLineWidth(2);
   Graph_Graph460->SetMarkerStyle(20);
   Graph_Graph460->SetMarkerSize(0.9);
   Graph_Graph460->GetXaxis()->SetLabelFont(42);
   Graph_Graph460->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph460->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph460->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph460->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph460->GetXaxis()->SetTitleFont(42);
   Graph_Graph460->GetYaxis()->SetLabelFont(42);
   Graph_Graph460->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph460->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph460->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph460->GetYaxis()->SetTickLength(0.02);
   Graph_Graph460->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph460->GetYaxis()->SetTitleFont(42);
   Graph_Graph460->GetZaxis()->SetLabelFont(42);
   Graph_Graph460->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph460->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph460->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph460->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph460->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph460);
   
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
   
   Double_t Graph_fx462[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph_fy462[20] = { 0, 0, 0, 0, 0, 0, 7.246483e-292, 5.046855e-61, 7.674424e-39, 8.40965e-28, 3.186627e-21, 3.232363e-08, 0.0005616828, 0.06584065, 1.070032, 6.552498, 23.12685,
   58.08739, 116.6165, 116.6165 };
   graph = new TGraph(20,Graph_fx462,Graph_fy462);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph462 = new TH1F("Graph_Graph462","",100,2.7,1099.7);
   Graph_Graph462->SetMinimum(0.1282782);
   Graph_Graph462->SetMaximum(128.2782);
   Graph_Graph462->SetDirectory(nullptr);
   Graph_Graph462->SetStats(0);
   Graph_Graph462->SetLineWidth(2);
   Graph_Graph462->SetMarkerStyle(20);
   Graph_Graph462->SetMarkerSize(0.9);
   Graph_Graph462->GetXaxis()->SetLabelFont(42);
   Graph_Graph462->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph462->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph462->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph462->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph462->GetXaxis()->SetTitleFont(42);
   Graph_Graph462->GetYaxis()->SetLabelFont(42);
   Graph_Graph462->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph462->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph462->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph462->GetYaxis()->SetTickLength(0.02);
   Graph_Graph462->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph462->GetYaxis()->SetTitleFont(42);
   Graph_Graph462->GetZaxis()->SetLabelFont(42);
   Graph_Graph462->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph462->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph462->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph462->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph462->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph462);
   
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
   line = new TLine(762.7982,0,762.7982,37.48821);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(762.7932,0,"  762.80 TeV");

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
   pt_LaTex = pt->AddText("#varepsilon = 7.12e-07");
   pt_LaTex = pt->AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
