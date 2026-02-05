#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_depth_e5_17mnthNorm_rate_2.54e-07()
{
//=========Macro generated from canvas: climits/climits
//=========  (Tue Feb  3 11:48:00 2026) by ROOT version 6.30/07
   TCanvas *climits = new TCanvas("climits", "climits",0,0,700,600);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   climits->SetHighLightColor(2);
   climits->Range(-17.55475,-1.838764,106.0703,5.759863);
   climits->SetFillColor(0);
   climits->SetBorderMode(0);
   climits->SetBorderSize(2);
   climits->SetLogy();
   climits->SetLeftMargin(0.15);
   climits->SetRightMargin(0.05);
   climits->SetBottomMargin(0.15);
   climits->SetFrameLineWidth(2);
   climits->SetFrameBorderMode(0);
   climits->SetFrameLineWidth(2);
   climits->SetFrameBorderMode(0);
   
   Double_t Graph0_fx302[16] = { 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 20, 30, 40, 50, 60, 70, 80, 90 };
   Double_t Graph0_fy302[16] = { 6.914062, 5.519727, 4.955078, 4.229102, 4.183008, 4.079297, 4.067773, 4.033203, 5.485156, 7.052344, 8.85, 10.41719, 12.03047, 13.82812, 16.31719, 17.7 };
   TGraph *graph = new TGraph(16,Graph0_fx302,Graph0_fy302);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0302 = new TH1F("Graph_Graph0302","",100,0,98.9);
   Graph_Graph0302->SetMinimum(0.2);
   Graph_Graph0302->SetMaximum(100000);
   Graph_Graph0302->SetDirectory(nullptr);
   Graph_Graph0302->SetStats(0);
   Graph_Graph0302->SetLineWidth(2);
   Graph_Graph0302->SetMarkerStyle(20);
   Graph_Graph0302->SetMarkerSize(0.9);
   Graph_Graph0302->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0302->GetXaxis()->SetRange(2,101);
   Graph_Graph0302->GetXaxis()->SetLabelFont(42);
   Graph_Graph0302->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0302->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0302->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0302->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0302->GetXaxis()->SetTitleFont(42);
   Graph_Graph0302->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0302->GetYaxis()->SetLabelFont(42);
   Graph_Graph0302->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0302->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0302->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0302->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0302->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0302->GetYaxis()->SetTitleFont(42);
   Graph_Graph0302->GetZaxis()->SetLabelFont(42);
   Graph_Graph0302->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0302->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0302->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0302->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0302->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0302);
   
   graph->Draw("al");
   
   Double_t Graph1_fx303[34] = { 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 20, 30, 40, 50, 60, 70, 80, 90, 90,
   90, 90, 80, 70, 60, 50, 40, 30, 20, 4.5, 4, 3.5, 3, 2.5, 2, 1.5,
   1 };
   Double_t Graph1_fy303[34] = { 14.91576, 12.75073, 11.69612, 10.73249, 10.59214, 10.87939, 10.89486, 11.01324, 16.67951, 21.44508, 26.91148, 31.67705, 36.58279, 42.04918, 49.61804, 53.82296, 53.82296,
   6.360938, 6.360938, 5.863989, 4.969482, 4.32345, 3.743677, 3.215039, 2.561984, 2.014081, 1.717262, 1.779651, 1.784692, 1.895425, 1.916312, 2.38076, 2.652056,
   3.511047 };
   graph = new TGraph(34,Graph1_fx303,Graph1_fy303);
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
   
   TH1F *Graph_Graph1303 = new TH1F("Graph_Graph1303","Graph",100,0,98.9);
   Graph_Graph1303->SetMinimum(1.545536);
   Graph_Graph1303->SetMaximum(59.03352);
   Graph_Graph1303->SetDirectory(nullptr);
   Graph_Graph1303->SetStats(0);
   Graph_Graph1303->SetLineWidth(2);
   Graph_Graph1303->SetMarkerStyle(20);
   Graph_Graph1303->SetMarkerSize(0.9);
   Graph_Graph1303->GetXaxis()->SetLabelFont(42);
   Graph_Graph1303->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1303->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1303->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1303->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1303->GetXaxis()->SetTitleFont(42);
   Graph_Graph1303->GetYaxis()->SetLabelFont(42);
   Graph_Graph1303->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1303->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1303->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1303->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1303->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1303->GetYaxis()->SetTitleFont(42);
   Graph_Graph1303->GetZaxis()->SetLabelFont(42);
   Graph_Graph1303->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1303->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1303->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1303->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1303->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1303);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx304[34] = { 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 20, 30, 40, 50, 60, 70, 80, 90, 90,
   90, 90, 80, 70, 60, 50, 40, 30, 20, 4.5, 4, 3.5, 3, 2.5, 2, 1.5,
   1 };
   Double_t Graph2_fy304[34] = { 10.27635, 8.489978, 7.690613, 6.808281, 6.734076, 6.745978, 6.735029, 6.742097, 10.05475, 13.01186, 16.39917, 19.38623, 22.38853, 25.84418, 30.36604, 33.22165, 33.22165,
   9.992981, 9.992981, 9.293945, 7.84162, 6.852315, 5.933422, 5.064011, 4.035383, 3.180145, 2.513367, 2.566193, 2.591389, 2.717525, 2.729402, 3.326018, 3.705029,
   4.760592 };
   graph = new TGraph(34,Graph2_fx304,Graph2_fy304);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2304 = new TH1F("Graph_Graph2304","Graph",100,0,98.9);
   Graph_Graph2304->SetMinimum(2.26203);
   Graph_Graph2304->SetMaximum(36.29248);
   Graph_Graph2304->SetDirectory(nullptr);
   Graph_Graph2304->SetStats(0);
   Graph_Graph2304->SetLineWidth(2);
   Graph_Graph2304->SetMarkerStyle(20);
   Graph_Graph2304->SetMarkerSize(0.9);
   Graph_Graph2304->GetXaxis()->SetLabelFont(42);
   Graph_Graph2304->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2304->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2304->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2304->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2304->GetXaxis()->SetTitleFont(42);
   Graph_Graph2304->GetYaxis()->SetLabelFont(42);
   Graph_Graph2304->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2304->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2304->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2304->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2304->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2304->GetYaxis()->SetTitleFont(42);
   Graph_Graph2304->GetZaxis()->SetLabelFont(42);
   Graph_Graph2304->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2304->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2304->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2304->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2304->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2304);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx305[16] = { 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 20, 30, 40, 50, 60, 70, 80, 90 };
   Double_t Graph0_fy305[16] = { 6.914062, 5.519727, 4.955078, 4.229102, 4.183008, 4.079297, 4.067773, 4.033203, 5.485156, 7.052344, 8.85, 10.41719, 12.03047, 13.82812, 16.31719, 17.7 };
   graph = new TGraph(16,Graph0_fx305,Graph0_fy305);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0305 = new TH1F("Graph_Graph0305","",100,0,98.9);
   Graph_Graph0305->SetMinimum(0.2);
   Graph_Graph0305->SetMaximum(100000);
   Graph_Graph0305->SetDirectory(nullptr);
   Graph_Graph0305->SetStats(0);
   Graph_Graph0305->SetLineWidth(2);
   Graph_Graph0305->SetMarkerStyle(20);
   Graph_Graph0305->SetMarkerSize(0.9);
   Graph_Graph0305->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0305->GetXaxis()->SetRange(2,101);
   Graph_Graph0305->GetXaxis()->SetLabelFont(42);
   Graph_Graph0305->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0305->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0305->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0305->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0305->GetXaxis()->SetTitleFont(42);
   Graph_Graph0305->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0305->GetYaxis()->SetLabelFont(42);
   Graph_Graph0305->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0305->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0305->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0305->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0305->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0305->GetYaxis()->SetTitleFont(42);
   Graph_Graph0305->GetZaxis()->SetLabelFont(42);
   Graph_Graph0305->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0305->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0305->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0305->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0305->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0305);
   
   graph->Draw("l");
   
   Double_t Graph_fx306[16] = { 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 20, 30, 40, 50, 60, 70, 80, 90 };
   Double_t Graph_fy306[16] = { 5.155871e-165, 3.547404e-108, 8.26966e-80, 8.082489e-63, 1.636812e-51, 1.886253e-43, 2.046379e-37, 9.925908e-33, 0.0003881673, 0.157902, 2.830028, 14.90481, 43.06177, 88.87293, 149.266, 219.1309 };
   graph = new TGraph(16,Graph_fx306,Graph_fy306);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph306 = new TH1F("Graph_Graph306","",100,0,98.9);
   Graph_Graph306->SetMinimum(4.640284e-165);
   Graph_Graph306->SetMaximum(241.044);
   Graph_Graph306->SetDirectory(nullptr);
   Graph_Graph306->SetStats(0);
   Graph_Graph306->SetLineWidth(2);
   Graph_Graph306->SetMarkerStyle(20);
   Graph_Graph306->SetMarkerSize(0.9);
   Graph_Graph306->GetXaxis()->SetLabelFont(42);
   Graph_Graph306->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph306->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph306->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph306->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph306->GetXaxis()->SetTitleFont(42);
   Graph_Graph306->GetYaxis()->SetLabelFont(42);
   Graph_Graph306->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph306->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph306->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph306->GetYaxis()->SetTickLength(0.02);
   Graph_Graph306->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph306->GetYaxis()->SetTitleFont(42);
   Graph_Graph306->GetZaxis()->SetLabelFont(42);
   Graph_Graph306->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph306->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph306->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph306->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph306->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph306);
   
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
   
   Double_t Graph_fx308[16] = { 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 20, 30, 40, 50, 60, 70, 80, 90 };
   Double_t Graph_fy308[16] = { 5.671458e-165, 3.902145e-108, 9.096626e-80, 8.890738e-63, 1.800493e-51, 2.074879e-43, 2.251017e-37, 1.09185e-32, 0.000426984, 0.1736922, 3.113031, 16.3953, 47.36794, 97.76023, 164.1926, 241.044 };
   graph = new TGraph(16,Graph_fx308,Graph_fy308);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph308 = new TH1F("Graph_Graph308","",100,0,98.9);
   Graph_Graph308->SetMinimum(5.104312e-165);
   Graph_Graph308->SetMaximum(265.1484);
   Graph_Graph308->SetDirectory(nullptr);
   Graph_Graph308->SetStats(0);
   Graph_Graph308->SetLineWidth(2);
   Graph_Graph308->SetMarkerStyle(20);
   Graph_Graph308->SetMarkerSize(0.9);
   Graph_Graph308->GetXaxis()->SetLabelFont(42);
   Graph_Graph308->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph308->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph308->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph308->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph308->GetXaxis()->SetTitleFont(42);
   Graph_Graph308->GetYaxis()->SetLabelFont(42);
   Graph_Graph308->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph308->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph308->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph308->GetYaxis()->SetTickLength(0.02);
   Graph_Graph308->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph308->GetYaxis()->SetTitleFont(42);
   Graph_Graph308->GetZaxis()->SetLabelFont(42);
   Graph_Graph308->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph308->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph308->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph308->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph308->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph308);
   
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
   line = new TLine(47.6092,0,47.6092,10.01894);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(47.6042,0,"  47.61 TeV");

   ci = TColor::GetColor("#666666");
   tex->SetTextColor(ci);
   tex->SetTextFont(43);
   tex->SetTextSize(14);
   tex->SetTextAngle(90);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TH1F *Graph_copy = new TH1F("Graph_copy","",100,0,98.9);
   Graph_copy->SetMinimum(1e-06);
   Graph_copy->SetMaximum(1000);
   Graph_copy->SetDirectory(nullptr);
   Graph_copy->SetStats(0);
   Graph_copy->SetLineWidth(2);
   Graph_copy->SetMarkerStyle(20);
   Graph_copy->SetMarkerSize(0.9);
   Graph_copy->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_copy->GetXaxis()->SetRange(2,101);
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
      tex = new TLatex(0.375,0.96,"Internal");
   tex->SetNDC();
   tex->SetTextAlign(23);
   tex->SetTextFont(52);
   tex->SetTextSize(0.0608);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TPaveText *pt = new TPaveText(0.2,0.75,0.43,0.88,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextAlign(12);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("#varepsilon = 2.54e-07");
   pt_LaTex = pt->AddText("#alpha_{#chi} = 0.245");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
