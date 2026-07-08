#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_17mnthNorm_rate_Vol_5.2e-07()
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
   
   Double_t Graph0_fx400[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy400[20] = { 589.2099, 10.5092, 9.887071, 6.494073, 6.255495, 6.043055, 5.639588, 9.105873, 12.6698, 16.58672, 20.30507, 37.79541, 38.68581, 37.6883, 38.38039, 37.89287, 36.57057,
   38.04265, 38.21704, 38.21704 };
   TGraph *graph = new TGraph(20,Graph0_fx400,Graph0_fy400);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0400 = new TH1F("Graph_Graph0400","",100,2.7,1099.7);
   Graph_Graph0400->SetMinimum(0.2);
   Graph_Graph0400->SetMaximum(100000);
   Graph_Graph0400->SetDirectory(nullptr);
   Graph_Graph0400->SetStats(0);
   Graph_Graph0400->SetLineWidth(2);
   Graph_Graph0400->SetMarkerStyle(20);
   Graph_Graph0400->SetMarkerSize(0.9);
   Graph_Graph0400->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0400->GetXaxis()->SetRange(0,91);
   Graph_Graph0400->GetXaxis()->SetLabelFont(42);
   Graph_Graph0400->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0400->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0400->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0400->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0400->GetXaxis()->SetTitleFont(42);
   Graph_Graph0400->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0400->GetYaxis()->SetLabelFont(42);
   Graph_Graph0400->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0400->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0400->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0400->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0400->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0400->GetYaxis()->SetTitleFont(42);
   Graph_Graph0400->GetZaxis()->SetLabelFont(42);
   Graph_Graph0400->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0400->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0400->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0400->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0400->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0400);
   
   graph->Draw("al");
   
   Double_t Graph1_fx401[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph1_fy401[42] = { 1457.687, 27.47935, 26.15284, 19.24384, 17.92632, 17.38699, 16.73084, 27.68956, 38.5269, 50.43768, 61.74458, 114.93, 117.6376, 114.6043, 116.7088, 115.2264, 111.2055,
   115.6819, 116.2122, 116.2122, 116.2122, 10.39722, 10.39722, 10.39722, 10.3537, 9.988422, 10.3177, 10.43798, 10.26521, 10.51494, 10.29444, 6.010248, 5.020941,
   3.941724, 2.985353, 2.162053, 2.394337, 2.547583, 2.512898, 4.001464, 4.713741, 262.2424 };
   graph = new TGraph(42,Graph1_fx401,Graph1_fy401);
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
   
   TH1F *Graph_Graph1401 = new TH1F("Graph_Graph1401","Graph",100,2.7,1099.7);
   Graph_Graph1401->SetMinimum(1.945848);
   Graph_Graph1401->SetMaximum(1603.239);
   Graph_Graph1401->SetDirectory(nullptr);
   Graph_Graph1401->SetStats(0);
   Graph_Graph1401->SetLineWidth(2);
   Graph_Graph1401->SetMarkerStyle(20);
   Graph_Graph1401->SetMarkerSize(0.9);
   Graph_Graph1401->GetXaxis()->SetLabelFont(42);
   Graph_Graph1401->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1401->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1401->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1401->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1401->GetXaxis()->SetTitleFont(42);
   Graph_Graph1401->GetYaxis()->SetLabelFont(42);
   Graph_Graph1401->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1401->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1401->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1401->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1401->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1401->GetYaxis()->SetTitleFont(42);
   Graph_Graph1401->GetZaxis()->SetLabelFont(42);
   Graph_Graph1401->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1401->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1401->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1401->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1401->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1401);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx402[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph2_fy402[42] = { 947.109, 16.94284, 16.24654, 11.94261, 11.21071, 10.94063, 10.50743, 18.34658, 25.57006, 33.50286, 41.02474, 76.36258, 78.16154, 76.14616, 77.54447, 76.55948, 73.88788,
   76.8621, 77.21445, 77.21445, 77.21445, 18.0371, 18.0371, 18.0371, 17.9599, 17.30348, 17.89571, 18.10911, 17.80027, 18.24829, 17.85128, 10.12336, 8.389798,
   6.532065, 4.813535, 3.294587, 3.624633, 3.806329, 3.819029, 6.086224, 6.900109, 379.705 };
   graph = new TGraph(42,Graph2_fx402,Graph2_fy402);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2402 = new TH1F("Graph_Graph2402","Graph",100,2.7,1099.7);
   Graph_Graph2402->SetMinimum(2.965129);
   Graph_Graph2402->SetMaximum(1041.49);
   Graph_Graph2402->SetDirectory(nullptr);
   Graph_Graph2402->SetStats(0);
   Graph_Graph2402->SetLineWidth(2);
   Graph_Graph2402->SetMarkerStyle(20);
   Graph_Graph2402->SetMarkerSize(0.9);
   Graph_Graph2402->GetXaxis()->SetLabelFont(42);
   Graph_Graph2402->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2402->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2402->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2402->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2402->GetXaxis()->SetTitleFont(42);
   Graph_Graph2402->GetYaxis()->SetLabelFont(42);
   Graph_Graph2402->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2402->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2402->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2402->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2402->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2402->GetYaxis()->SetTitleFont(42);
   Graph_Graph2402->GetZaxis()->SetLabelFont(42);
   Graph_Graph2402->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2402->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2402->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2402->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2402->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2402);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx403[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy403[20] = { 589.2099, 10.5092, 9.887071, 6.494073, 6.255495, 6.043055, 5.639588, 9.105873, 12.6698, 16.58672, 20.30507, 37.79541, 38.68581, 37.6883, 38.38039, 37.89287, 36.57057,
   38.04265, 38.21704, 38.21704 };
   graph = new TGraph(20,Graph0_fx403,Graph0_fy403);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0403 = new TH1F("Graph_Graph0403","",100,2.7,1099.7);
   Graph_Graph0403->SetMinimum(0.2);
   Graph_Graph0403->SetMaximum(100000);
   Graph_Graph0403->SetDirectory(nullptr);
   Graph_Graph0403->SetStats(0);
   Graph_Graph0403->SetLineWidth(2);
   Graph_Graph0403->SetMarkerStyle(20);
   Graph_Graph0403->SetMarkerSize(0.9);
   Graph_Graph0403->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0403->GetXaxis()->SetRange(0,91);
   Graph_Graph0403->GetXaxis()->SetLabelFont(42);
   Graph_Graph0403->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0403->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0403->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0403->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0403->GetXaxis()->SetTitleFont(42);
   Graph_Graph0403->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0403->GetYaxis()->SetLabelFont(42);
   Graph_Graph0403->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0403->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0403->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0403->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0403->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0403->GetYaxis()->SetTitleFont(42);
   Graph_Graph0403->GetZaxis()->SetLabelFont(42);
   Graph_Graph0403->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0403->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0403->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0403->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0403->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0403);
   
   graph->Draw("l");
   
   Double_t Graph_fx404[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph_fy404[20] = { 0, 0, 3.605364e-280, 1.976619e-232, 2.40303e-198, 8.581734e-173, 6.303536e-153, 3.230488e-30, 1.685696e-18, 1.082066e-12, 2.974763e-09, 0.01588296, 2.228429, 23.47201, 89.8632, 209.8994, 372.1642,
   557.7766, 749.4275, 749.4275 };
   graph = new TGraph(20,Graph_fx404,Graph_fy404);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph404 = new TH1F("Graph_Graph404","",100,2.7,1099.7);
   Graph_Graph404->SetMinimum(0.8243703);
   Graph_Graph404->SetMaximum(824.3703);
   Graph_Graph404->SetDirectory(nullptr);
   Graph_Graph404->SetStats(0);
   Graph_Graph404->SetLineWidth(2);
   Graph_Graph404->SetMarkerStyle(20);
   Graph_Graph404->SetMarkerSize(0.9);
   Graph_Graph404->GetXaxis()->SetLabelFont(42);
   Graph_Graph404->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph404->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph404->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph404->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph404->GetXaxis()->SetTitleFont(42);
   Graph_Graph404->GetYaxis()->SetLabelFont(42);
   Graph_Graph404->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph404->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph404->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph404->GetYaxis()->SetTickLength(0.02);
   Graph_Graph404->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph404->GetYaxis()->SetTitleFont(42);
   Graph_Graph404->GetZaxis()->SetLabelFont(42);
   Graph_Graph404->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph404->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph404->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph404->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph404->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph404);
   
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
   
   Double_t Graph_fx406[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph_fy406[20] = { 0, 0, 3.9659e-280, 2.174281e-232, 2.643333e-198, 9.439907e-173, 6.93389e-153, 3.553537e-30, 1.854266e-18, 1.190273e-12, 3.272239e-09, 0.01747126, 2.451272, 25.81921, 98.84952, 230.8893, 409.3806,
   613.5543, 824.3703, 824.3703 };
   graph = new TGraph(20,Graph_fx406,Graph_fy406);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph406 = new TH1F("Graph_Graph406","",100,2.7,1099.7);
   Graph_Graph406->SetMinimum(0.9068073);
   Graph_Graph406->SetMaximum(906.8073);
   Graph_Graph406->SetDirectory(nullptr);
   Graph_Graph406->SetStats(0);
   Graph_Graph406->SetLineWidth(2);
   Graph_Graph406->SetMarkerStyle(20);
   Graph_Graph406->SetMarkerSize(0.9);
   Graph_Graph406->GetXaxis()->SetLabelFont(42);
   Graph_Graph406->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph406->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph406->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph406->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph406->GetXaxis()->SetTitleFont(42);
   Graph_Graph406->GetYaxis()->SetLabelFont(42);
   Graph_Graph406->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph406->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph406->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph406->GetYaxis()->SetTickLength(0.02);
   Graph_Graph406->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph406->GetYaxis()->SetTitleFont(42);
   Graph_Graph406->GetZaxis()->SetLabelFont(42);
   Graph_Graph406->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph406->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph406->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph406->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph406->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph406);
   
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
   line = new TLine(435.7583,0,435.7583,37.93433);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(435.7533,0,"  435.76 TeV");

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
   pt_LaTex = pt->AddText("#varepsilon = 5.2e-07");
   pt_LaTex = pt->AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
