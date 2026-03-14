#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_depth_e2_17mnthNorm_rate_1e-08()
{
//=========Macro generated from canvas: climits/climits
//=========  (Wed Mar 11 02:50:57 2026) by ROOT version 6.30/07
   TCanvas *climits = new TCanvas("climits", "climits",0,0,700,600);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   climits->SetHighLightColor(2);
   climits->Range(-34.1205,-1.838764,193.3495,5.759863);
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
   
   Double_t Graph0_fx43[17] = { 2, 3, 4, 6, 7, 8, 9, 10, 20, 40, 60, 80, 100, 120, 140, 160, 180 };
   Double_t Graph0_fy43[17] = { 9.633594, 7.121484, 7.063867, 3.537695, 2.996094, 2.696484, 2.754102, 2.834766, 3.641406, 5.392969, 7.375, 8.942188, 10.46328, 13.13672, 14.10469, 16.59375, 17.88438 };
   TGraph *graph = new TGraph(17,Graph0_fx43,Graph0_fy43);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph043 = new TH1F("Graph_Graph043","",100,0,197.8);
   Graph_Graph043->SetMinimum(0.2);
   Graph_Graph043->SetMaximum(100000);
   Graph_Graph043->SetDirectory(nullptr);
   Graph_Graph043->SetStats(0);
   Graph_Graph043->SetLineWidth(2);
   Graph_Graph043->SetMarkerStyle(20);
   Graph_Graph043->SetMarkerSize(0.9);
   Graph_Graph043->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph043->GetXaxis()->SetRange(1,92);
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
   
   Double_t Graph1_fx44[36] = { 2, 3, 4, 6, 7, 8, 9, 10, 20, 40, 60, 80, 100, 120, 140, 160, 180,
   180, 180, 180, 160, 140, 120, 100, 80, 60, 40, 20, 10, 9, 8, 7, 6,
   4, 3, 2 };
   Double_t Graph1_fy44[36] = { 22.13127, 17.60809, 16.06013, 10.75758, 9.110659, 8.199594, 8.374799, 8.620086, 11.07296, 16.39919, 22.42624, 27.19182, 31.81723, 39.94674, 42.89018, 50.45904, 54.38363,
   54.38363, 4.820398, 4.820398, 4.537354, 3.911847, 3.592072, 2.861053, 2.445129, 2.016602, 1.495706, 1.024146, 0.8083511, 0.7745911, 0.7689194, 0.8660583, 1.202264,
   3.863052, 3.310378, 4.703903 };
   graph = new TGraph(36,Graph1_fx44,Graph1_fy44);
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
   
   TH1F *Graph_Graph144 = new TH1F("Graph_Graph144","Graph",100,0,197.8);
   Graph_Graph144->SetMinimum(0.6920274);
   Graph_Graph144->SetMaximum(59.7451);
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
   
   Double_t Graph2_fx45[36] = { 2, 3, 4, 6, 7, 8, 9, 10, 20, 40, 60, 80, 100, 120, 140, 160, 180,
   180, 180, 180, 160, 140, 120, 100, 80, 60, 40, 20, 10, 9, 8, 7, 6,
   4, 3, 2 };
   Double_t Graph2_fy45[36] = { 14.74078, 11.29431, 10.59756, 6.386179, 5.910078, 5.415805, 5.56444, 5.727415, 7.357167, 10.89606, 14.90059, 18.06697, 21.14021, 26.54168, 28.49738, 33.52633, 36.13394,
   36.13394, 8.800828, 8.800828, 8.210787, 7.017478, 6.500206, 5.23675, 4.47546, 3.67017, 2.698377, 1.842039, 1.441606, 1.393188, 1.371283, 1.531694, 2.023314,
   5.038352, 4.679994, 6.514024 };
   graph = new TGraph(36,Graph2_fx45,Graph2_fy45);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph245 = new TH1F("Graph_Graph245","Graph",100,0,197.8);
   Graph_Graph245->SetMinimum(1.234155);
   Graph_Graph245->SetMaximum(39.6102);
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
   
   Double_t Graph0_fx46[17] = { 2, 3, 4, 6, 7, 8, 9, 10, 20, 40, 60, 80, 100, 120, 140, 160, 180 };
   Double_t Graph0_fy46[17] = { 9.633594, 7.121484, 7.063867, 3.537695, 2.996094, 2.696484, 2.754102, 2.834766, 3.641406, 5.392969, 7.375, 8.942188, 10.46328, 13.13672, 14.10469, 16.59375, 17.88438 };
   graph = new TGraph(17,Graph0_fx46,Graph0_fy46);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph046 = new TH1F("Graph_Graph046","",100,0,197.8);
   Graph_Graph046->SetMinimum(0.2);
   Graph_Graph046->SetMaximum(100000);
   Graph_Graph046->SetDirectory(nullptr);
   Graph_Graph046->SetStats(0);
   Graph_Graph046->SetLineWidth(2);
   Graph_Graph046->SetMarkerStyle(20);
   Graph_Graph046->SetMarkerSize(0.9);
   Graph_Graph046->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph046->GetXaxis()->SetRange(1,92);
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
   
   Double_t Graph_fx47[17] = { 2, 3, 4, 6, 7, 8, 9, 10, 20, 40, 60, 80, 100, 120, 140, 160, 180 };
   Double_t Graph_fy47[17] = { 11.90278, 8.299373, 6.159007, 3.880666, 3.224586, 2.737377, 2.363735, 2.069614, 0.839432, 0.3302337, 0.1898793, 0.1279454, 0.09411236, 0.07319298, 0.05916234, 0.04919382, 0.04180008 };
   graph = new TGraph(17,Graph_fx47,Graph_fy47);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph47 = new TH1F("Graph_Graph47","",100,0,197.8);
   Graph_Graph47->SetMinimum(0.03762008);
   Graph_Graph47->SetMaximum(13.08887);
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
   
   Double_t Graph_fx49[17] = { 2, 3, 4, 6, 7, 8, 9, 10, 20, 40, 60, 80, 100, 120, 140, 160, 180 };
   Double_t Graph_fy49[17] = { 13.09305, 9.12931, 6.774907, 4.268732, 3.547044, 3.011114, 2.600108, 2.276576, 0.9233752, 0.3632571, 0.2088673, 0.1407399, 0.1035236, 0.08051228, 0.06507858, 0.0541132, 0.04598009 };
   graph = new TGraph(17,Graph_fx49,Graph_fy49);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph49 = new TH1F("Graph_Graph49","",100,0,197.8);
   Graph_Graph49->SetMinimum(0.04138208);
   Graph_Graph49->SetMaximum(14.39776);
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
   line = new TLine(3.52755,0,3.52755,7.09103);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(3.52255,0,"  3.53 TeV");

   ci = TColor::GetColor("#666666");
   tex->SetTextColor(ci);
   tex->SetTextFont(43);
   tex->SetTextSize(14);
   tex->SetTextAngle(90);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TH1F *Graph_copy = new TH1F("Graph_copy","",100,0,197.8);
   Graph_copy->SetMinimum(1e-06);
   Graph_copy->SetMaximum(1000);
   Graph_copy->SetDirectory(nullptr);
   Graph_copy->SetStats(0);
   Graph_copy->SetLineWidth(2);
   Graph_copy->SetMarkerStyle(20);
   Graph_copy->SetMarkerSize(0.9);
   Graph_copy->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_copy->GetXaxis()->SetRange(1,92);
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
   pt_LaTex = pt->AddText("#varepsilon = 1e-08");
   pt_LaTex = pt->AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
