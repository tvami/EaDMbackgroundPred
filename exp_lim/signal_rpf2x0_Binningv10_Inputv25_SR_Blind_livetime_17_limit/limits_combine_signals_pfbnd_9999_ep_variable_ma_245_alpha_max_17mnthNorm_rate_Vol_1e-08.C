#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_17mnthNorm_rate_Vol_1e-08()
{
//=========Macro generated from canvas: climits/climits
//=========  (Fri Jun 12 12:26:02 2026) by ROOT version 6.30/07
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
   
   Double_t Graph0_fx43[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy43[20] = { 589.2099, 10.5092, 9.887071, 6.494073, 6.255495, 6.043055, 5.639588, 9.105873, 12.6698, 16.58672, 20.30507, 37.79541, 38.68581, 37.6883, 38.38039, 37.89287, 36.57057,
   38.04265, 38.21704, 38.21704 };
   TGraph *graph = new TGraph(20,Graph0_fx43,Graph0_fy43);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph043 = new TH1F("Graph_Graph043","",100,2.7,1099.7);
   Graph_Graph043->SetMinimum(0.2);
   Graph_Graph043->SetMaximum(100000);
   Graph_Graph043->SetDirectory(nullptr);
   Graph_Graph043->SetStats(0);
   Graph_Graph043->SetLineWidth(2);
   Graph_Graph043->SetMarkerStyle(20);
   Graph_Graph043->SetMarkerSize(0.9);
   Graph_Graph043->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph043->GetXaxis()->SetRange(0,91);
   Graph_Graph043->GetXaxis()->SetLabelFont(42);
   Graph_Graph043->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph043->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph043->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph043->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph043->GetXaxis()->SetTitleFont(42);
   Graph_Graph043->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph043->GetYaxis()->SetLabelFont(42);
   Graph_Graph043->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph043->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph043->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph043->GetYaxis()->SetTickLength(0.02);
   Graph_Graph043->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph043->GetYaxis()->SetTitleFont(42);
   Graph_Graph043->GetZaxis()->SetLabelFont(42);
   Graph_Graph043->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph043->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph043->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph043->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph043->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph043);
   
   graph->Draw("al");
   
   Double_t Graph1_fx44[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph1_fy44[42] = { 1457.687, 27.47935, 26.15284, 19.24384, 17.92632, 17.38699, 16.73084, 27.68956, 38.5269, 50.43768, 61.74458, 114.93, 117.6376, 114.6043, 116.7088, 115.2264, 111.2055,
   115.6819, 116.2122, 116.2122, 116.2122, 10.39722, 10.39722, 10.39722, 10.3537, 9.988422, 10.3177, 10.43798, 10.26521, 10.51494, 10.29444, 6.010248, 5.020941,
   3.941724, 2.985353, 2.162053, 2.394337, 2.547583, 2.512898, 4.001464, 4.713741, 262.2424 };
   graph = new TGraph(42,Graph1_fx44,Graph1_fy44);
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
   
   TH1F *Graph_Graph144 = new TH1F("Graph_Graph144","Graph",100,2.7,1099.7);
   Graph_Graph144->SetMinimum(1.945848);
   Graph_Graph144->SetMaximum(1603.239);
   Graph_Graph144->SetDirectory(nullptr);
   Graph_Graph144->SetStats(0);
   Graph_Graph144->SetLineWidth(2);
   Graph_Graph144->SetMarkerStyle(20);
   Graph_Graph144->SetMarkerSize(0.9);
   Graph_Graph144->GetXaxis()->SetLabelFont(42);
   Graph_Graph144->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph144->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph144->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph144->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph144->GetXaxis()->SetTitleFont(42);
   Graph_Graph144->GetYaxis()->SetLabelFont(42);
   Graph_Graph144->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph144->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph144->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph144->GetYaxis()->SetTickLength(0.02);
   Graph_Graph144->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph144->GetYaxis()->SetTitleFont(42);
   Graph_Graph144->GetZaxis()->SetLabelFont(42);
   Graph_Graph144->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph144->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph144->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph144->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph144->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph144);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx45[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph2_fy45[42] = { 947.109, 16.94284, 16.24654, 11.94261, 11.21071, 10.94063, 10.50743, 18.34658, 25.57006, 33.50286, 41.02474, 76.36258, 78.16154, 76.14616, 77.54447, 76.55948, 73.88788,
   76.8621, 77.21445, 77.21445, 77.21445, 18.0371, 18.0371, 18.0371, 17.9599, 17.30348, 17.89571, 18.10911, 17.80027, 18.24829, 17.85128, 10.12336, 8.389798,
   6.532065, 4.813535, 3.294587, 3.624633, 3.806329, 3.819029, 6.086224, 6.900109, 379.705 };
   graph = new TGraph(42,Graph2_fx45,Graph2_fy45);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph245 = new TH1F("Graph_Graph245","Graph",100,2.7,1099.7);
   Graph_Graph245->SetMinimum(2.965129);
   Graph_Graph245->SetMaximum(1041.49);
   Graph_Graph245->SetDirectory(nullptr);
   Graph_Graph245->SetStats(0);
   Graph_Graph245->SetLineWidth(2);
   Graph_Graph245->SetMarkerStyle(20);
   Graph_Graph245->SetMarkerSize(0.9);
   Graph_Graph245->GetXaxis()->SetLabelFont(42);
   Graph_Graph245->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph245->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph245->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph245->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph245->GetXaxis()->SetTitleFont(42);
   Graph_Graph245->GetYaxis()->SetLabelFont(42);
   Graph_Graph245->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph245->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph245->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph245->GetYaxis()->SetTickLength(0.02);
   Graph_Graph245->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph245->GetYaxis()->SetTitleFont(42);
   Graph_Graph245->GetZaxis()->SetLabelFont(42);
   Graph_Graph245->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph245->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph245->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph245->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph245->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph245);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx46[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy46[20] = { 589.2099, 10.5092, 9.887071, 6.494073, 6.255495, 6.043055, 5.639588, 9.105873, 12.6698, 16.58672, 20.30507, 37.79541, 38.68581, 37.6883, 38.38039, 37.89287, 36.57057,
   38.04265, 38.21704, 38.21704 };
   graph = new TGraph(20,Graph0_fx46,Graph0_fy46);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph046 = new TH1F("Graph_Graph046","",100,2.7,1099.7);
   Graph_Graph046->SetMinimum(0.2);
   Graph_Graph046->SetMaximum(100000);
   Graph_Graph046->SetDirectory(nullptr);
   Graph_Graph046->SetStats(0);
   Graph_Graph046->SetLineWidth(2);
   Graph_Graph046->SetMarkerStyle(20);
   Graph_Graph046->SetMarkerSize(0.9);
   Graph_Graph046->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph046->GetXaxis()->SetRange(0,91);
   Graph_Graph046->GetXaxis()->SetLabelFont(42);
   Graph_Graph046->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph046->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph046->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph046->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph046->GetXaxis()->SetTitleFont(42);
   Graph_Graph046->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph046->GetYaxis()->SetLabelFont(42);
   Graph_Graph046->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph046->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph046->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph046->GetYaxis()->SetTickLength(0.02);
   Graph_Graph046->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph046->GetYaxis()->SetTitleFont(42);
   Graph_Graph046->GetZaxis()->SetLabelFont(42);
   Graph_Graph046->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph046->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph046->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph046->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph046->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph046);
   
   graph->Draw("l");
   
   Double_t Graph_fx47[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph_fy47[20] = { 8.299373, 6.159007, 4.800642, 3.880666, 3.224586, 2.737377, 2.363735, 0.3302337, 0.1898793, 0.1279454, 0.09096336, 0.03248119, 0.01849814, 0.01241349, 0.009108651, 0.007072437, 0.005710044,
   0.00474379, 0.004028071, 0.004028071 };
   graph = new TGraph(20,Graph_fx47,Graph_fy47);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph47 = new TH1F("Graph_Graph47","",100,2.7,1099.7);
   Graph_Graph47->SetMinimum(0.003625264);
   Graph_Graph47->SetMaximum(9.128907);
   Graph_Graph47->SetDirectory(nullptr);
   Graph_Graph47->SetStats(0);
   Graph_Graph47->SetLineWidth(2);
   Graph_Graph47->SetMarkerStyle(20);
   Graph_Graph47->SetMarkerSize(0.9);
   Graph_Graph47->GetXaxis()->SetLabelFont(42);
   Graph_Graph47->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph47->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph47->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph47->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph47->GetXaxis()->SetTitleFont(42);
   Graph_Graph47->GetYaxis()->SetLabelFont(42);
   Graph_Graph47->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph47->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph47->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph47->GetYaxis()->SetTickLength(0.02);
   Graph_Graph47->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph47->GetYaxis()->SetTitleFont(42);
   Graph_Graph47->GetZaxis()->SetLabelFont(42);
   Graph_Graph47->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph47->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph47->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph47->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph47->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph47);
   
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
   
   Double_t Graph_fx49[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph_fy49[20] = { 9.12931, 6.774908, 5.280706, 4.268733, 3.547045, 3.011115, 2.600109, 0.3632571, 0.2088672, 0.1407399, 0.1000597, 0.03572931, 0.02034795, 0.01365484, 0.01001952, 0.007779681, 0.006281048,
   0.005218169, 0.004430878, 0.004430878 };
   graph = new TGraph(20,Graph_fx49,Graph_fy49);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph49 = new TH1F("Graph_Graph49","",100,2.7,1099.7);
   Graph_Graph49->SetMinimum(0.00398779);
   Graph_Graph49->SetMaximum(10.0418);
   Graph_Graph49->SetDirectory(nullptr);
   Graph_Graph49->SetStats(0);
   Graph_Graph49->SetLineWidth(2);
   Graph_Graph49->SetMarkerStyle(20);
   Graph_Graph49->SetMarkerSize(0.9);
   Graph_Graph49->GetXaxis()->SetLabelFont(42);
   Graph_Graph49->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph49->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph49->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph49->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph49->GetXaxis()->SetTitleFont(42);
   Graph_Graph49->GetYaxis()->SetLabelFont(42);
   Graph_Graph49->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph49->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph49->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph49->GetYaxis()->SetTickLength(0.02);
   Graph_Graph49->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph49->GetYaxis()->SetTitleFont(42);
   Graph_Graph49->GetZaxis()->SetLabelFont(42);
   Graph_Graph49->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph49->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph49->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph49->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph49->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph49);
   
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
   pt_LaTex = pt->AddText("#varepsilon = 1e-08");
   pt_LaTex = pt->AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
