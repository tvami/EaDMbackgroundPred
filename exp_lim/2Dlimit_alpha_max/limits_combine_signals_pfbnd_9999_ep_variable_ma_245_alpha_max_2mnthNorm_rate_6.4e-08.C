#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_2mnthNorm_rate_6.4e-08()
{
//=========Macro generated from canvas: climits/climits
//=========  (Fri Sep 19 14:44:54 2025) by ROOT version 6.30/07
   TCanvas *climits = new TCanvas("climits", "climits",0,0,700,600);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   climits->SetHighLightColor(2);
   climits->Range(-0.45475,-1.838764,5.78225,5.759863);
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
   
   Double_t Graph0_fx43[31] = { 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4,
   2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.25, 3.5, 3.75, 4, 4.25, 4.5, 4.75, 5 };
   Double_t Graph0_fy43[31] = { 26.17188, 24.16992, 28.02734, 27.83203, 22.60742, 19.53125, 18.75, 19.87305, 20.80078, 19.82422, 0.00743866, 17.28516, 16.60156, 16.65039, 16.89453, 17.08984, 17.28516,
   17.33398, 16.65039, 16.50391, 15.91797, 16.01562, 17.72461, 15.625, 15.33203, 15.47852, 15.33203, 15.52734, 15.82031, 16.25977, 17.1875 };
   TGraph *graph = new TGraph(31,Graph0_fx43,Graph0_fy43);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph043 = new TH1F("Graph_Graph043","",100,0.38,5.42);
   Graph_Graph043->SetMinimum(0.2);
   Graph_Graph043->SetMaximum(100000);
   Graph_Graph043->SetDirectory(nullptr);
   Graph_Graph043->SetStats(0);
   Graph_Graph043->SetLineWidth(2);
   Graph_Graph043->SetMarkerStyle(20);
   Graph_Graph043->SetMarkerSize(0.9);
   Graph_Graph043->GetXaxis()->SetTitle("m(X) [TeV]");
   Graph_Graph043->GetXaxis()->SetRange(3,101);
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
   
   Double_t Graph1_fx44[64] = { 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4,
   2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.25, 3.5, 3.75, 4, 4.25, 4.5, 4.75, 5, 5, 5,
   5, 4.75, 4.5, 4.25, 4, 3.75, 3.5, 3.25, 3, 2.9, 2.8, 2.7, 2.6, 2.5, 2.4, 2.3,
   2.2, 2.1, 2, 1.9, 1.8, 1.7, 1.6, 1.5, 1.4, 1.3, 1.2, 1.1, 1, 0.9, 0.8 };
   Double_t Graph1_fy44[64] = { 56.48043, 52.2333, 58.86757, 58.779, 51.64776, 45.92929, 43.98549, 45.6157, 46.96366, 45.67817, 0.01811666, 42.26104, 41.07864, 41.22047, 41.3882, 41.46952, 41.86501,
   42.41551, 41.4595, 41.57227, 40.74936, 41.49311, 44.80825, 40.66233, 40.35588, 41.43917, 41.70946, 42.87254, 44.21722, 46.20752, 49.26201, 49.26201, 6.848145,
   6.848145, 6.60553, 6.4888, 6.429291, 6.468201, 6.650925, 6.707764, 6.896973, 7.89299, 7.006836, 7.026291, 7.349396, 7.544708, 7.989883, 8.102417, 8.010864,
   7.787323, 7.609749, 7.587433, 7.967377, 0.003486872, 9.602356, 10.23788, 9.626007, 8.935547, 9.307861, 10.86216, 13.86166, 14.01367, 12.08478, 13.18817 };
   graph = new TGraph(64,Graph1_fx44,Graph1_fy44);
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
   
   TH1F *Graph_Graph144 = new TH1F("Graph_Graph144","Graph",100,0.38,5.42);
   Graph_Graph144->SetMinimum(0.003138185);
   Graph_Graph144->SetMaximum(64.75398);
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
   
   Double_t Graph2_fx45[64] = { 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4,
   2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.25, 3.5, 3.75, 4, 4.25, 4.5, 4.75, 5, 5, 5,
   5, 4.75, 4.5, 4.25, 4, 3.75, 3.5, 3.25, 3, 2.9, 2.8, 2.7, 2.6, 2.5, 2.4, 2.3,
   2.2, 2.1, 2, 1.9, 1.8, 1.7, 1.6, 1.5, 1.4, 1.3, 1.2, 1.1, 1, 0.9, 0.8 };
   Double_t Graph2_fy45[64] = { 39.00351, 36.02003, 41.26595, 41.08932, 34.68272, 30.43059, 29.10126, 30.56705, 31.66236, 30.49195, 0.01194558, 27.44781, 26.52774, 26.5394, 26.79385, 26.96737, 27.20667,
   27.4908, 26.67214, 26.60195, 25.87957, 26.19794, 28.60487, 25.59011, 25.23252, 25.72039, 25.66032, 26.23477, 26.91895, 27.92595, 29.65634, 29.65634, 10.4023,
   10.4023, 9.924173, 9.696507, 9.556746, 9.515142, 9.685409, 9.739733, 9.96542, 11.42623, 10.17399, 10.187, 10.6393, 10.81706, 11.34792, 11.40246, 11.27362,
   11.06023, 10.7881, 10.82689, 11.31595, 0.005215779, 13.27584, 14.11645, 13.38859, 12.46262, 13.06176, 15.17487, 19.31883, 19.48776, 16.61671, 18.05706 };
   graph = new TGraph(64,Graph2_fx45,Graph2_fy45);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph245 = new TH1F("Graph_Graph245","Graph",100,0.38,5.42);
   Graph_Graph245->SetMinimum(0.004694201);
   Graph_Graph245->SetMaximum(45.39202);
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
   
   Double_t Graph0_fx46[31] = { 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4,
   2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.25, 3.5, 3.75, 4, 4.25, 4.5, 4.75, 5 };
   Double_t Graph0_fy46[31] = { 26.17188, 24.16992, 28.02734, 27.83203, 22.60742, 19.53125, 18.75, 19.87305, 20.80078, 19.82422, 0.00743866, 17.28516, 16.60156, 16.65039, 16.89453, 17.08984, 17.28516,
   17.33398, 16.65039, 16.50391, 15.91797, 16.01562, 17.72461, 15.625, 15.33203, 15.47852, 15.33203, 15.52734, 15.82031, 16.25977, 17.1875 };
   graph = new TGraph(31,Graph0_fx46,Graph0_fy46);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph046 = new TH1F("Graph_Graph046","",100,0.38,5.42);
   Graph_Graph046->SetMinimum(0.2);
   Graph_Graph046->SetMaximum(100000);
   Graph_Graph046->SetDirectory(nullptr);
   Graph_Graph046->SetStats(0);
   Graph_Graph046->SetLineWidth(2);
   Graph_Graph046->SetMarkerStyle(20);
   Graph_Graph046->SetMarkerSize(0.9);
   Graph_Graph046->GetXaxis()->SetTitle("m(X) [TeV]");
   Graph_Graph046->GetXaxis()->SetRange(3,101);
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
   
   Double_t Graph_fx47[31] = { 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4,
   2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.25, 3.5, 3.75, 4, 4.25, 4.5, 4.75, 5 };
   Double_t Graph_fy47[31] = { 1.289871e-09, 3.542325e-08, 4.938296e-07, 4.210434e-06, 2.485304e-05, 0.000110647, 0.0003949408, 0.001181874, 0.003066128, 0.00707428, 0.01480669, 0.02855637, 0.05138484, 0.08714279, 0.1404323, 0.2165157, 0.3211807,
   0.4605775, 0.6410395, 0.8689028, 1.150335, 1.491182, 1.896833, 3.547677, 5.042919, 7.911683, 10.24134, 14.33264, 17.42825, 22.55765, 26.25736 };
   graph = new TGraph(31,Graph_fx47,Graph_fy47);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph47 = new TH1F("Graph_Graph47","",100,0.38,5.42);
   Graph_Graph47->SetMinimum(1.160884e-09);
   Graph_Graph47->SetMaximum(28.88309);
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
   
   Double_t Graph_fx49[31] = { 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4,
   2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.25, 3.5, 3.75, 4, 4.25, 4.5, 4.75, 5 };
   Double_t Graph_fy49[31] = { 1.418858e-09, 3.896558e-08, 5.432125e-07, 4.631478e-06, 2.733834e-05, 0.0001217117, 0.0004344348, 0.001300061, 0.003372741, 0.007781708, 0.01628736, 0.03141201, 0.05652332, 0.09585707, 0.1544756, 0.2381672, 0.3532988,
   0.5066353, 0.7051434, 0.9557931, 1.265369, 1.6403, 2.086516, 3.902445, 5.547211, 8.702851, 11.26547, 15.76591, 19.17108, 24.81342, 28.88309 };
   graph = new TGraph(31,Graph_fx49,Graph_fy49);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph49 = new TH1F("Graph_Graph49","",100,0.38,5.42);
   Graph_Graph49->SetMinimum(1.276972e-09);
   Graph_Graph49->SetMaximum(31.7714);
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
   line = new TLine(1.79202,0,1.79202,0.0139592);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(1.78702,0,"  1.79 TeV");

   ci = TColor::GetColor("#666666");
   tex->SetTextColor(ci);
   tex->SetTextFont(43);
   tex->SetTextSize(14);
   tex->SetTextAngle(90);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TH1F *Graph_copy = new TH1F("Graph_copy","",100,0.38,5.42);
   Graph_copy->SetMinimum(1e-06);
   Graph_copy->SetMaximum(1000);
   Graph_copy->SetDirectory(nullptr);
   Graph_copy->SetStats(0);
   Graph_copy->SetLineWidth(2);
   Graph_copy->SetMarkerStyle(20);
   Graph_copy->SetMarkerSize(0.9);
   Graph_copy->GetXaxis()->SetTitle("m(X) [TeV]");
   Graph_copy->GetXaxis()->SetRange(3,101);
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
      tex = new TLatex(0.95,0.915,"2023D Cosmics");
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
   climits->Modified();
   climits->SetSelected(climits);
}
