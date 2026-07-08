#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_17mnthNorm_rate_Vol_9.28e-07()
{
//=========Macro generated from canvas: climits/climits
//=========  (Fri Jun 12 12:26:08 2026) by ROOT version 6.30/07
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
   
   Double_t Graph0_fx519[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy519[20] = { 589.2099, 10.5092, 9.887071, 6.494073, 6.255495, 6.043055, 5.639588, 9.105873, 12.6698, 16.58672, 20.30507, 37.79541, 38.68581, 37.6883, 38.38039, 37.89287, 36.57057,
   38.04265, 38.21704, 38.21704 };
   TGraph *graph = new TGraph(20,Graph0_fx519,Graph0_fy519);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0519 = new TH1F("Graph_Graph0519","",100,2.7,1099.7);
   Graph_Graph0519->SetMinimum(0.2);
   Graph_Graph0519->SetMaximum(100000);
   Graph_Graph0519->SetDirectory(nullptr);
   Graph_Graph0519->SetStats(0);
   Graph_Graph0519->SetLineWidth(2);
   Graph_Graph0519->SetMarkerStyle(20);
   Graph_Graph0519->SetMarkerSize(0.9);
   Graph_Graph0519->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0519->GetXaxis()->SetRange(0,91);
   Graph_Graph0519->GetXaxis()->SetLabelFont(42);
   Graph_Graph0519->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0519->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0519->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0519->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0519->GetXaxis()->SetTitleFont(42);
   Graph_Graph0519->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0519->GetYaxis()->SetLabelFont(42);
   Graph_Graph0519->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0519->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0519->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0519->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0519->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0519->GetYaxis()->SetTitleFont(42);
   Graph_Graph0519->GetZaxis()->SetLabelFont(42);
   Graph_Graph0519->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0519->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0519->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0519->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0519->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0519);
   
   graph->Draw("al");
   
   Double_t Graph1_fx520[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph1_fy520[42] = { 1457.687, 27.47935, 26.15284, 19.24384, 17.92632, 17.38699, 16.73084, 27.68956, 38.5269, 50.43768, 61.74458, 114.93, 117.6376, 114.6043, 116.7088, 115.2264, 111.2055,
   115.6819, 116.2122, 116.2122, 116.2122, 10.39722, 10.39722, 10.39722, 10.3537, 9.988422, 10.3177, 10.43798, 10.26521, 10.51494, 10.29444, 6.010248, 5.020941,
   3.941724, 2.985353, 2.162053, 2.394337, 2.547583, 2.512898, 4.001464, 4.713741, 262.2424 };
   graph = new TGraph(42,Graph1_fx520,Graph1_fy520);
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
   
   TH1F *Graph_Graph1520 = new TH1F("Graph_Graph1520","Graph",100,2.7,1099.7);
   Graph_Graph1520->SetMinimum(1.945848);
   Graph_Graph1520->SetMaximum(1603.239);
   Graph_Graph1520->SetDirectory(nullptr);
   Graph_Graph1520->SetStats(0);
   Graph_Graph1520->SetLineWidth(2);
   Graph_Graph1520->SetMarkerStyle(20);
   Graph_Graph1520->SetMarkerSize(0.9);
   Graph_Graph1520->GetXaxis()->SetLabelFont(42);
   Graph_Graph1520->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1520->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1520->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1520->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1520->GetXaxis()->SetTitleFont(42);
   Graph_Graph1520->GetYaxis()->SetLabelFont(42);
   Graph_Graph1520->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1520->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1520->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1520->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1520->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1520->GetYaxis()->SetTitleFont(42);
   Graph_Graph1520->GetZaxis()->SetLabelFont(42);
   Graph_Graph1520->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1520->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1520->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1520->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1520->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1520);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx521[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph2_fy521[42] = { 947.109, 16.94284, 16.24654, 11.94261, 11.21071, 10.94063, 10.50743, 18.34658, 25.57006, 33.50286, 41.02474, 76.36258, 78.16154, 76.14616, 77.54447, 76.55948, 73.88788,
   76.8621, 77.21445, 77.21445, 77.21445, 18.0371, 18.0371, 18.0371, 17.9599, 17.30348, 17.89571, 18.10911, 17.80027, 18.24829, 17.85128, 10.12336, 8.389798,
   6.532065, 4.813535, 3.294587, 3.624633, 3.806329, 3.819029, 6.086224, 6.900109, 379.705 };
   graph = new TGraph(42,Graph2_fx521,Graph2_fy521);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2521 = new TH1F("Graph_Graph2521","Graph",100,2.7,1099.7);
   Graph_Graph2521->SetMinimum(2.965129);
   Graph_Graph2521->SetMaximum(1041.49);
   Graph_Graph2521->SetDirectory(nullptr);
   Graph_Graph2521->SetStats(0);
   Graph_Graph2521->SetLineWidth(2);
   Graph_Graph2521->SetMarkerStyle(20);
   Graph_Graph2521->SetMarkerSize(0.9);
   Graph_Graph2521->GetXaxis()->SetLabelFont(42);
   Graph_Graph2521->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2521->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2521->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2521->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2521->GetXaxis()->SetTitleFont(42);
   Graph_Graph2521->GetYaxis()->SetLabelFont(42);
   Graph_Graph2521->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2521->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2521->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2521->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2521->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2521->GetYaxis()->SetTitleFont(42);
   Graph_Graph2521->GetZaxis()->SetLabelFont(42);
   Graph_Graph2521->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2521->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2521->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2521->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2521->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2521);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx522[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy522[20] = { 589.2099, 10.5092, 9.887071, 6.494073, 6.255495, 6.043055, 5.639588, 9.105873, 12.6698, 16.58672, 20.30507, 37.79541, 38.68581, 37.6883, 38.38039, 37.89287, 36.57057,
   38.04265, 38.21704, 38.21704 };
   graph = new TGraph(20,Graph0_fx522,Graph0_fy522);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0522 = new TH1F("Graph_Graph0522","",100,2.7,1099.7);
   Graph_Graph0522->SetMinimum(0.2);
   Graph_Graph0522->SetMaximum(100000);
   Graph_Graph0522->SetDirectory(nullptr);
   Graph_Graph0522->SetStats(0);
   Graph_Graph0522->SetLineWidth(2);
   Graph_Graph0522->SetMarkerStyle(20);
   Graph_Graph0522->SetMarkerSize(0.9);
   Graph_Graph0522->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0522->GetXaxis()->SetRange(0,91);
   Graph_Graph0522->GetXaxis()->SetLabelFont(42);
   Graph_Graph0522->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0522->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0522->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0522->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0522->GetXaxis()->SetTitleFont(42);
   Graph_Graph0522->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0522->GetYaxis()->SetLabelFont(42);
   Graph_Graph0522->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0522->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0522->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0522->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0522->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0522->GetYaxis()->SetTitleFont(42);
   Graph_Graph0522->GetZaxis()->SetLabelFont(42);
   Graph_Graph0522->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0522->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0522->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0522->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0522->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0522);
   
   graph->Draw("l");
   
   Double_t Graph_fx523[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph_fy523[20] = { 0, 0, 0, 0, 0, 0, 0, 1.282432e-107, 9.148363e-70, 6.866244e-51, 1.308156e-39, 3.354463e-17, 7.940586e-10, 3.435461e-06, 0.0004865925, 0.01261906, 0.1248786,
   0.6796212, 2.48962, 2.48962 };
   graph = new TGraph(20,Graph_fx523,Graph_fy523);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph523 = new TH1F("Graph_Graph523","",100,2.7,1099.7);
   Graph_Graph523->SetMinimum(0.002738582);
   Graph_Graph523->SetMaximum(2.738582);
   Graph_Graph523->SetDirectory(nullptr);
   Graph_Graph523->SetStats(0);
   Graph_Graph523->SetLineWidth(2);
   Graph_Graph523->SetMarkerStyle(20);
   Graph_Graph523->SetMarkerSize(0.9);
   Graph_Graph523->GetXaxis()->SetLabelFont(42);
   Graph_Graph523->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph523->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph523->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph523->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph523->GetXaxis()->SetTitleFont(42);
   Graph_Graph523->GetYaxis()->SetLabelFont(42);
   Graph_Graph523->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph523->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph523->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph523->GetYaxis()->SetTickLength(0.02);
   Graph_Graph523->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph523->GetYaxis()->SetTitleFont(42);
   Graph_Graph523->GetZaxis()->SetLabelFont(42);
   Graph_Graph523->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph523->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph523->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph523->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph523->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph523);
   
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
   
   Double_t Graph_fx525[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph_fy525[20] = { 0, 0, 0, 0, 0, 0, 0, 1.410675e-107, 1.00632e-69, 7.552868e-51, 1.438972e-39, 3.689909e-17, 8.734645e-10, 3.779007e-06, 0.0005352518, 0.01388097, 0.1373665,
   0.7475833, 2.738582, 2.738582 };
   graph = new TGraph(20,Graph_fx525,Graph_fy525);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph525 = new TH1F("Graph_Graph525","",100,2.7,1099.7);
   Graph_Graph525->SetMinimum(0.00301244);
   Graph_Graph525->SetMaximum(3.01244);
   Graph_Graph525->SetDirectory(nullptr);
   Graph_Graph525->SetStats(0);
   Graph_Graph525->SetLineWidth(2);
   Graph_Graph525->SetMarkerStyle(20);
   Graph_Graph525->SetMarkerSize(0.9);
   Graph_Graph525->GetXaxis()->SetLabelFont(42);
   Graph_Graph525->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph525->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph525->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph525->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph525->GetXaxis()->SetTitleFont(42);
   Graph_Graph525->GetYaxis()->SetLabelFont(42);
   Graph_Graph525->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph525->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph525->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph525->GetYaxis()->SetTickLength(0.02);
   Graph_Graph525->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph525->GetYaxis()->SetTitleFont(42);
   Graph_Graph525->GetZaxis()->SetLabelFont(42);
   Graph_Graph525->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph525->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph525->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph525->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph525->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph525);
   
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
   line = new TLine(-1,0,-1,-1);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(-1.005,0,"  -1.00 TeV");

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
   pt_LaTex = pt->AddText("#varepsilon = 9.28e-07");
   pt_LaTex = pt->AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
