#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_2mnthNorm_rate_1.54e-07()
{
//=========Macro generated from canvas: climits/climits
//=========  (Fri Sep 19 19:06:41 2025) by ROOT version 6.30/07
   TCanvas *climits = new TCanvas("climits", "climits",0,0,700,600);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   climits->SetHighLightColor(2);
   climits->Range(-0.30575,-1.838764,10.57525,5.759863);
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
   
   Double_t Graph0_fx106[28] = { 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5, 5.2, 5.4,
   5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph0_fy106[28] = { 27.83203, 22.60742, 19.53125, 18.75, 19.87305, 20.80078, 19.82422, 0.00743866, 17.28516, 16.60156, 16.65039, 16.89453, 17.08984, 17.28516, 17.33398, 16.65039, 16.50391,
   15.91797, 16.01562, 17.72461, 15.625, 15.33203, 15.47852, 15.33203, 15.52734, 15.82031, 16.25977, 17.1875 };
   TGraph *graph = new TGraph(28,Graph0_fx106,Graph0_fy106);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0106 = new TH1F("Graph_Graph0106","",100,1.42,10.78);
   Graph_Graph0106->SetMinimum(0.2);
   Graph_Graph0106->SetMaximum(100000);
   Graph_Graph0106->SetDirectory(nullptr);
   Graph_Graph0106->SetStats(0);
   Graph_Graph0106->SetLineWidth(2);
   Graph_Graph0106->SetMarkerStyle(20);
   Graph_Graph0106->SetMarkerSize(0.9);
   Graph_Graph0106->GetXaxis()->SetTitle("m(X) [TeV]");
   Graph_Graph0106->GetXaxis()->SetRange(0,92);
   Graph_Graph0106->GetXaxis()->SetLabelFont(42);
   Graph_Graph0106->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0106->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0106->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0106->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0106->GetXaxis()->SetTitleFont(42);
   Graph_Graph0106->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0106->GetYaxis()->SetLabelFont(42);
   Graph_Graph0106->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0106->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0106->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0106->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0106->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0106->GetYaxis()->SetTitleFont(42);
   Graph_Graph0106->GetZaxis()->SetLabelFont(42);
   Graph_Graph0106->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0106->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0106->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0106->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0106->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0106);
   
   graph->Draw("al");
   
   Double_t Graph1_fx107[58] = { 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5, 5.2, 5.4,
   5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10, 10, 10, 10, 9.5, 9,
   8.5, 8, 7.5, 7, 6.5, 6, 5.8, 5.6, 5.4, 5.2, 5, 4.8, 4.6, 4.4, 4.2, 4,
   3.8, 3.6, 3.4, 3.2, 3, 2.8, 2.6, 2.4, 2.2 };
   Double_t Graph1_fy107[58] = { 58.779, 51.64776, 45.92929, 43.98549, 45.6157, 46.96366, 45.67817, 0.01811666, 42.26104, 41.07864, 41.22047, 41.3882, 41.46952, 41.86501, 42.41551, 41.4595, 41.57227,
   40.74936, 41.49311, 44.80825, 40.66233, 40.35588, 41.43917, 41.70946, 42.87254, 44.21722, 46.20752, 49.26201, 49.26201, 6.848145, 6.848145, 6.60553, 6.4888,
   6.429291, 6.468201, 6.650925, 6.707764, 6.896973, 7.89299, 7.006836, 7.026291, 7.349396, 7.544708, 7.989883, 8.102417, 8.010864, 7.787323, 7.609749, 7.587433,
   7.967377, 0.003486872, 9.602356, 10.23788, 9.626007, 8.935547, 9.307861, 10.86216, 13.86166 };
   graph = new TGraph(58,Graph1_fx107,Graph1_fy107);
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
   
   TH1F *Graph_Graph1107 = new TH1F("Graph_Graph1107","Graph",100,1.42,10.78);
   Graph_Graph1107->SetMinimum(0.003138185);
   Graph_Graph1107->SetMaximum(64.65655);
   Graph_Graph1107->SetDirectory(nullptr);
   Graph_Graph1107->SetStats(0);
   Graph_Graph1107->SetLineWidth(2);
   Graph_Graph1107->SetMarkerStyle(20);
   Graph_Graph1107->SetMarkerSize(0.9);
   Graph_Graph1107->GetXaxis()->SetLabelFont(42);
   Graph_Graph1107->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1107->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1107->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1107->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1107->GetXaxis()->SetTitleFont(42);
   Graph_Graph1107->GetYaxis()->SetLabelFont(42);
   Graph_Graph1107->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1107->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1107->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1107->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1107->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1107->GetYaxis()->SetTitleFont(42);
   Graph_Graph1107->GetZaxis()->SetLabelFont(42);
   Graph_Graph1107->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1107->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1107->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1107->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1107->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1107);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx108[58] = { 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5, 5.2, 5.4,
   5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10, 10, 10, 10, 9.5, 9,
   8.5, 8, 7.5, 7, 6.5, 6, 5.8, 5.6, 5.4, 5.2, 5, 4.8, 4.6, 4.4, 4.2, 4,
   3.8, 3.6, 3.4, 3.2, 3, 2.8, 2.6, 2.4, 2.2 };
   Double_t Graph2_fy108[58] = { 41.08932, 34.68272, 30.43059, 29.10126, 30.56705, 31.66236, 30.49195, 0.01194558, 27.44781, 26.52774, 26.5394, 26.79385, 26.96737, 27.20667, 27.4908, 26.67214, 26.60195,
   25.87957, 26.19794, 28.60487, 25.59011, 25.23252, 25.72039, 25.66032, 26.23477, 26.91895, 27.92595, 29.65634, 29.65634, 10.4023, 10.4023, 9.924173, 9.696507,
   9.556746, 9.515142, 9.685409, 9.739733, 9.96542, 11.42623, 10.17399, 10.187, 10.6393, 10.81706, 11.34792, 11.40246, 11.27362, 11.06023, 10.7881, 10.82689,
   11.31595, 0.005215779, 13.27584, 14.11645, 13.38859, 12.46262, 13.06176, 15.17487, 19.31883 };
   graph = new TGraph(58,Graph2_fx108,Graph2_fy108);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2108 = new TH1F("Graph_Graph2108","Graph",100,1.42,10.78);
   Graph_Graph2108->SetMinimum(0.004694201);
   Graph_Graph2108->SetMaximum(45.19773);
   Graph_Graph2108->SetDirectory(nullptr);
   Graph_Graph2108->SetStats(0);
   Graph_Graph2108->SetLineWidth(2);
   Graph_Graph2108->SetMarkerStyle(20);
   Graph_Graph2108->SetMarkerSize(0.9);
   Graph_Graph2108->GetXaxis()->SetLabelFont(42);
   Graph_Graph2108->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2108->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2108->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2108->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2108->GetXaxis()->SetTitleFont(42);
   Graph_Graph2108->GetYaxis()->SetLabelFont(42);
   Graph_Graph2108->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2108->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2108->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2108->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2108->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2108->GetYaxis()->SetTitleFont(42);
   Graph_Graph2108->GetZaxis()->SetLabelFont(42);
   Graph_Graph2108->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2108->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2108->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2108->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2108->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2108);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx109[28] = { 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5, 5.2, 5.4,
   5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph0_fy109[28] = { 27.83203, 22.60742, 19.53125, 18.75, 19.87305, 20.80078, 19.82422, 0.00743866, 17.28516, 16.60156, 16.65039, 16.89453, 17.08984, 17.28516, 17.33398, 16.65039, 16.50391,
   15.91797, 16.01562, 17.72461, 15.625, 15.33203, 15.47852, 15.33203, 15.52734, 15.82031, 16.25977, 17.1875 };
   graph = new TGraph(28,Graph0_fx109,Graph0_fy109);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0109 = new TH1F("Graph_Graph0109","",100,1.42,10.78);
   Graph_Graph0109->SetMinimum(0.2);
   Graph_Graph0109->SetMaximum(100000);
   Graph_Graph0109->SetDirectory(nullptr);
   Graph_Graph0109->SetStats(0);
   Graph_Graph0109->SetLineWidth(2);
   Graph_Graph0109->SetMarkerStyle(20);
   Graph_Graph0109->SetMarkerSize(0.9);
   Graph_Graph0109->GetXaxis()->SetTitle("m(X) [TeV]");
   Graph_Graph0109->GetXaxis()->SetRange(0,92);
   Graph_Graph0109->GetXaxis()->SetLabelFont(42);
   Graph_Graph0109->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0109->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0109->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0109->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0109->GetXaxis()->SetTitleFont(42);
   Graph_Graph0109->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0109->GetYaxis()->SetLabelFont(42);
   Graph_Graph0109->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0109->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0109->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0109->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0109->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0109->GetYaxis()->SetTitleFont(42);
   Graph_Graph0109->GetZaxis()->SetLabelFont(42);
   Graph_Graph0109->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0109->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0109->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0109->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0109->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0109);
   
   graph->Draw("l");
   
   Double_t Graph_fx110[28] = { 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5, 5.2, 5.4,
   5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph_fy110[28] = { 6.393027e-52, 3.327289e-47, 3.228554e-43, 8.376251e-40, 7.56853e-37, 2.903776e-34, 5.504291e-32, 5.799426e-30, 3.727259e-28, 1.574002e-26, 4.638347e-25, 1.001928e-23, 1.65225e-22, 2.151716e-21, 2.276729e-20, 2.00493e-19, 1.499833e-18,
   9.699818e-18, 5.50591e-17, 2.779264e-16, 1.967785e-14, 2.231032e-13, 5.23351e-12, 3.28188e-11, 3.719086e-10, 1.561859e-09, 1.069037e-08, 3.380153e-08 };
   graph = new TGraph(28,Graph_fx110,Graph_fy110);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph110 = new TH1F("Graph_Graph110","",100,1.42,10.78);
   Graph_Graph110->SetMinimum(5.753725e-52);
   Graph_Graph110->SetMaximum(3.718169e-08);
   Graph_Graph110->SetDirectory(nullptr);
   Graph_Graph110->SetStats(0);
   Graph_Graph110->SetLineWidth(2);
   Graph_Graph110->SetMarkerStyle(20);
   Graph_Graph110->SetMarkerSize(0.9);
   Graph_Graph110->GetXaxis()->SetLabelFont(42);
   Graph_Graph110->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph110->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph110->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph110->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph110->GetXaxis()->SetTitleFont(42);
   Graph_Graph110->GetYaxis()->SetLabelFont(42);
   Graph_Graph110->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph110->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph110->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph110->GetYaxis()->SetTickLength(0.02);
   Graph_Graph110->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph110->GetYaxis()->SetTitleFont(42);
   Graph_Graph110->GetZaxis()->SetLabelFont(42);
   Graph_Graph110->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph110->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph110->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph110->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph110->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph110);
   
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
   
   Double_t Graph_fx112[28] = { 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5, 5.2, 5.4,
   5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph_fy112[28] = { 7.03233e-52, 3.660018e-47, 3.551409e-43, 9.213876e-40, 8.325383e-37, 3.194154e-34, 6.05472e-32, 6.379369e-30, 4.099985e-28, 1.731402e-26, 5.102182e-25, 1.102121e-23, 1.817475e-22, 2.366888e-21, 2.504401e-20, 2.205423e-19, 1.649816e-18,
   1.06698e-17, 6.056501e-17, 3.05719e-16, 2.164564e-14, 2.454135e-13, 5.756861e-12, 3.610068e-11, 4.090995e-10, 1.718045e-09, 1.175941e-08, 3.718169e-08 };
   graph = new TGraph(28,Graph_fx112,Graph_fy112);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph112 = new TH1F("Graph_Graph112","",100,1.42,10.78);
   Graph_Graph112->SetMinimum(6.329097e-52);
   Graph_Graph112->SetMaximum(4.089985e-08);
   Graph_Graph112->SetDirectory(nullptr);
   Graph_Graph112->SetStats(0);
   Graph_Graph112->SetLineWidth(2);
   Graph_Graph112->SetMarkerStyle(20);
   Graph_Graph112->SetMarkerSize(0.9);
   Graph_Graph112->GetXaxis()->SetLabelFont(42);
   Graph_Graph112->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph112->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph112->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph112->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph112->GetXaxis()->SetTitleFont(42);
   Graph_Graph112->GetYaxis()->SetLabelFont(42);
   Graph_Graph112->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph112->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph112->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph112->GetYaxis()->SetTickLength(0.02);
   Graph_Graph112->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph112->GetYaxis()->SetTitleFont(42);
   Graph_Graph112->GetZaxis()->SetLabelFont(42);
   Graph_Graph112->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph112->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph112->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph112->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph112->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph112);
   
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
   
   TH1F *Graph_copy = new TH1F("Graph_copy","",100,1.42,10.78);
   Graph_copy->SetMinimum(1e-06);
   Graph_copy->SetMaximum(1000);
   Graph_copy->SetDirectory(nullptr);
   Graph_copy->SetStats(0);
   Graph_copy->SetLineWidth(2);
   Graph_copy->SetMarkerStyle(20);
   Graph_copy->SetMarkerSize(0.9);
   Graph_copy->GetXaxis()->SetTitle("m(X) [TeV]");
   Graph_copy->GetXaxis()->SetRange(0,92);
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
