#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_17mnthNorm_rate_Vol_1.94e-07()
{
//=========Macro generated from canvas: climits/climits
//=========  (Fri Jun 12 12:26:05 2026) by ROOT version 6.30/07
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
   
   Double_t Graph0_fx260[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy260[20] = { 589.2099, 10.5092, 9.887071, 6.494073, 6.255495, 6.043055, 5.639588, 9.105873, 12.6698, 16.58672, 20.30507, 37.79541, 38.68581, 37.6883, 38.38039, 37.89287, 36.57057,
   38.04265, 38.21704, 38.21704 };
   TGraph *graph = new TGraph(20,Graph0_fx260,Graph0_fy260);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0260 = new TH1F("Graph_Graph0260","",100,2.7,1099.7);
   Graph_Graph0260->SetMinimum(0.2);
   Graph_Graph0260->SetMaximum(100000);
   Graph_Graph0260->SetDirectory(nullptr);
   Graph_Graph0260->SetStats(0);
   Graph_Graph0260->SetLineWidth(2);
   Graph_Graph0260->SetMarkerStyle(20);
   Graph_Graph0260->SetMarkerSize(0.9);
   Graph_Graph0260->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0260->GetXaxis()->SetRange(0,91);
   Graph_Graph0260->GetXaxis()->SetLabelFont(42);
   Graph_Graph0260->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0260->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0260->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0260->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0260->GetXaxis()->SetTitleFont(42);
   Graph_Graph0260->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0260->GetYaxis()->SetLabelFont(42);
   Graph_Graph0260->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0260->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0260->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0260->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0260->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0260->GetYaxis()->SetTitleFont(42);
   Graph_Graph0260->GetZaxis()->SetLabelFont(42);
   Graph_Graph0260->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0260->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0260->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0260->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0260->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0260);
   
   graph->Draw("al");
   
   Double_t Graph1_fx261[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph1_fy261[42] = { 1457.687, 27.47935, 26.15284, 19.24384, 17.92632, 17.38699, 16.73084, 27.68956, 38.5269, 50.43768, 61.74458, 114.93, 117.6376, 114.6043, 116.7088, 115.2264, 111.2055,
   115.6819, 116.2122, 116.2122, 116.2122, 10.39722, 10.39722, 10.39722, 10.3537, 9.988422, 10.3177, 10.43798, 10.26521, 10.51494, 10.29444, 6.010248, 5.020941,
   3.941724, 2.985353, 2.162053, 2.394337, 2.547583, 2.512898, 4.001464, 4.713741, 262.2424 };
   graph = new TGraph(42,Graph1_fx261,Graph1_fy261);
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
   
   TH1F *Graph_Graph1261 = new TH1F("Graph_Graph1261","Graph",100,2.7,1099.7);
   Graph_Graph1261->SetMinimum(1.945848);
   Graph_Graph1261->SetMaximum(1603.239);
   Graph_Graph1261->SetDirectory(nullptr);
   Graph_Graph1261->SetStats(0);
   Graph_Graph1261->SetLineWidth(2);
   Graph_Graph1261->SetMarkerStyle(20);
   Graph_Graph1261->SetMarkerSize(0.9);
   Graph_Graph1261->GetXaxis()->SetLabelFont(42);
   Graph_Graph1261->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1261->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1261->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1261->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1261->GetXaxis()->SetTitleFont(42);
   Graph_Graph1261->GetYaxis()->SetLabelFont(42);
   Graph_Graph1261->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1261->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1261->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1261->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1261->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1261->GetYaxis()->SetTitleFont(42);
   Graph_Graph1261->GetZaxis()->SetLabelFont(42);
   Graph_Graph1261->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1261->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1261->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1261->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1261->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1261);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx262[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph2_fy262[42] = { 947.109, 16.94284, 16.24654, 11.94261, 11.21071, 10.94063, 10.50743, 18.34658, 25.57006, 33.50286, 41.02474, 76.36258, 78.16154, 76.14616, 77.54447, 76.55948, 73.88788,
   76.8621, 77.21445, 77.21445, 77.21445, 18.0371, 18.0371, 18.0371, 17.9599, 17.30348, 17.89571, 18.10911, 17.80027, 18.24829, 17.85128, 10.12336, 8.389798,
   6.532065, 4.813535, 3.294587, 3.624633, 3.806329, 3.819029, 6.086224, 6.900109, 379.705 };
   graph = new TGraph(42,Graph2_fx262,Graph2_fy262);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2262 = new TH1F("Graph_Graph2262","Graph",100,2.7,1099.7);
   Graph_Graph2262->SetMinimum(2.965129);
   Graph_Graph2262->SetMaximum(1041.49);
   Graph_Graph2262->SetDirectory(nullptr);
   Graph_Graph2262->SetStats(0);
   Graph_Graph2262->SetLineWidth(2);
   Graph_Graph2262->SetMarkerStyle(20);
   Graph_Graph2262->SetMarkerSize(0.9);
   Graph_Graph2262->GetXaxis()->SetLabelFont(42);
   Graph_Graph2262->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2262->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2262->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2262->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2262->GetXaxis()->SetTitleFont(42);
   Graph_Graph2262->GetYaxis()->SetLabelFont(42);
   Graph_Graph2262->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2262->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2262->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2262->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2262->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2262->GetYaxis()->SetTitleFont(42);
   Graph_Graph2262->GetZaxis()->SetLabelFont(42);
   Graph_Graph2262->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2262->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2262->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2262->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2262->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2262);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx263[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy263[20] = { 589.2099, 10.5092, 9.887071, 6.494073, 6.255495, 6.043055, 5.639588, 9.105873, 12.6698, 16.58672, 20.30507, 37.79541, 38.68581, 37.6883, 38.38039, 37.89287, 36.57057,
   38.04265, 38.21704, 38.21704 };
   graph = new TGraph(20,Graph0_fx263,Graph0_fy263);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0263 = new TH1F("Graph_Graph0263","",100,2.7,1099.7);
   Graph_Graph0263->SetMinimum(0.2);
   Graph_Graph0263->SetMaximum(100000);
   Graph_Graph0263->SetDirectory(nullptr);
   Graph_Graph0263->SetStats(0);
   Graph_Graph0263->SetLineWidth(2);
   Graph_Graph0263->SetMarkerStyle(20);
   Graph_Graph0263->SetMarkerSize(0.9);
   Graph_Graph0263->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0263->GetXaxis()->SetRange(0,91);
   Graph_Graph0263->GetXaxis()->SetLabelFont(42);
   Graph_Graph0263->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0263->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0263->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0263->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0263->GetXaxis()->SetTitleFont(42);
   Graph_Graph0263->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0263->GetYaxis()->SetLabelFont(42);
   Graph_Graph0263->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0263->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0263->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0263->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0263->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0263->GetYaxis()->SetTitleFont(42);
   Graph_Graph0263->GetZaxis()->SetLabelFont(42);
   Graph_Graph0263->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0263->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0263->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0263->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0263->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0263);
   
   graph->Draw("l");
   
   Double_t Graph_fx264[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph_fy264[20] = { 4.443791e-61, 1.329969e-44, 9.528062e-35, 3.379568e-28, 1.559169e-23, 4.787426e-20, 2.420864e-17, 0.4879106, 12.83983, 58.53119, 131.0383, 463.9821, 567.6883, 558.3826, 515.3781, 466.2979, 419.9315,
   378.6587, 342.6855, 342.6855 };
   graph = new TGraph(20,Graph_fx264,Graph_fy264);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph264 = new TH1F("Graph_Graph264","",100,2.7,1099.7);
   Graph_Graph264->SetMinimum(3.999412e-61);
   Graph_Graph264->SetMaximum(624.4571);
   Graph_Graph264->SetDirectory(nullptr);
   Graph_Graph264->SetStats(0);
   Graph_Graph264->SetLineWidth(2);
   Graph_Graph264->SetMarkerStyle(20);
   Graph_Graph264->SetMarkerSize(0.9);
   Graph_Graph264->GetXaxis()->SetLabelFont(42);
   Graph_Graph264->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph264->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph264->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph264->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph264->GetXaxis()->SetTitleFont(42);
   Graph_Graph264->GetYaxis()->SetLabelFont(42);
   Graph_Graph264->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph264->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph264->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph264->GetYaxis()->SetTickLength(0.02);
   Graph_Graph264->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph264->GetYaxis()->SetTitleFont(42);
   Graph_Graph264->GetZaxis()->SetLabelFont(42);
   Graph_Graph264->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph264->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph264->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph264->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph264->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph264);
   
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
   
   Double_t Graph_fx266[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph_fy266[20] = { 4.88817e-61, 1.462966e-44, 1.048087e-34, 3.717525e-28, 1.715086e-23, 5.266169e-20, 2.66295e-17, 0.5367017, 14.12381, 64.38431, 144.1421, 510.3803, 624.4571, 614.2209, 566.9159, 512.9277, 461.9247,
   416.5246, 376.954, 376.954 };
   graph = new TGraph(20,Graph_fx266,Graph_fy266);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph266 = new TH1F("Graph_Graph266","",100,2.7,1099.7);
   Graph_Graph266->SetMinimum(4.399353e-61);
   Graph_Graph266->SetMaximum(686.9028);
   Graph_Graph266->SetDirectory(nullptr);
   Graph_Graph266->SetStats(0);
   Graph_Graph266->SetLineWidth(2);
   Graph_Graph266->SetMarkerStyle(20);
   Graph_Graph266->SetMarkerSize(0.9);
   Graph_Graph266->GetXaxis()->SetLabelFont(42);
   Graph_Graph266->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph266->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph266->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph266->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph266->GetXaxis()->SetTitleFont(42);
   Graph_Graph266->GetYaxis()->SetLabelFont(42);
   Graph_Graph266->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph266->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph266->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph266->GetYaxis()->SetTickLength(0.02);
   Graph_Graph266->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph266->GetYaxis()->SetTitleFont(42);
   Graph_Graph266->GetZaxis()->SetLabelFont(42);
   Graph_Graph266->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph266->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph266->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph266->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph266->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph266);
   
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
   line = new TLine(59.90931,0,59.90931,12.65084);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(59.90431,0,"  59.91 TeV");

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
   pt_LaTex = pt->AddText("#varepsilon = 1.94e-07");
   pt_LaTex = pt->AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
