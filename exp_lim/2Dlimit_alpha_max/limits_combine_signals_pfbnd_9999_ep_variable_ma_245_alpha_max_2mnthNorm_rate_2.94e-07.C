#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_2mnthNorm_rate_2.94e-07()
{
//=========Macro generated from canvas: climits/climits
//=========  (Fri Sep 19 14:37:12 2025) by ROOT version 6.30/07
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
   
   Double_t Graph0_fx204[31] = { 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4,
   2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.25, 3.5, 3.75, 4, 4.25, 4.5, 4.75, 5 };
   Double_t Graph0_fy204[31] = { 26.17188, 24.16992, 28.02734, 27.83203, 22.60742, 19.53125, 18.75, 19.87305, 20.80078, 19.82422, 0.00743866, 17.28516, 16.60156, 16.65039, 16.89453, 17.08984, 17.28516,
   17.33398, 16.65039, 16.50391, 15.91797, 16.01562, 17.72461, 15.625, 15.33203, 15.47852, 15.33203, 15.52734, 15.82031, 16.25977, 17.1875 };
   TGraph *graph = new TGraph(31,Graph0_fx204,Graph0_fy204);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0204 = new TH1F("Graph_Graph0204","",100,0.38,5.42);
   Graph_Graph0204->SetMinimum(0.2);
   Graph_Graph0204->SetMaximum(100000);
   Graph_Graph0204->SetDirectory(nullptr);
   Graph_Graph0204->SetStats(0);
   Graph_Graph0204->SetLineWidth(2);
   Graph_Graph0204->SetMarkerStyle(20);
   Graph_Graph0204->SetMarkerSize(0.9);
   Graph_Graph0204->GetXaxis()->SetTitle("m(X) [TeV]");
   Graph_Graph0204->GetXaxis()->SetRange(3,101);
   Graph_Graph0204->GetXaxis()->SetLabelFont(42);
   Graph_Graph0204->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0204->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0204->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0204->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0204->GetXaxis()->SetTitleFont(42);
   Graph_Graph0204->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0204->GetYaxis()->SetLabelFont(42);
   Graph_Graph0204->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0204->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0204->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0204->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0204->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0204->GetYaxis()->SetTitleFont(42);
   Graph_Graph0204->GetZaxis()->SetLabelFont(42);
   Graph_Graph0204->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0204->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0204->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0204->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0204->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0204);
   
   graph->Draw("al");
   
   Double_t Graph1_fx205[64] = { 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4,
   2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.25, 3.5, 3.75, 4, 4.25, 4.5, 4.75, 5, 5, 5,
   5, 4.75, 4.5, 4.25, 4, 3.75, 3.5, 3.25, 3, 2.9, 2.8, 2.7, 2.6, 2.5, 2.4, 2.3,
   2.2, 2.1, 2, 1.9, 1.8, 1.7, 1.6, 1.5, 1.4, 1.3, 1.2, 1.1, 1, 0.9, 0.8 };
   Double_t Graph1_fy205[64] = { 56.48043, 52.2333, 58.86757, 58.779, 51.64776, 45.92929, 43.98549, 45.6157, 46.96366, 45.67817, 0.01811666, 42.26104, 41.07864, 41.22047, 41.3882, 41.46952, 41.86501,
   42.41551, 41.4595, 41.57227, 40.74936, 41.49311, 44.80825, 40.66233, 40.35588, 41.43917, 41.70946, 42.87254, 44.21722, 46.20752, 49.26201, 49.26201, 6.848145,
   6.848145, 6.60553, 6.4888, 6.429291, 6.468201, 6.650925, 6.707764, 6.896973, 7.89299, 7.006836, 7.026291, 7.349396, 7.544708, 7.989883, 8.102417, 8.010864,
   7.787323, 7.609749, 7.587433, 7.967377, 0.003486872, 9.602356, 10.23788, 9.626007, 8.935547, 9.307861, 10.86216, 13.86166, 14.01367, 12.08478, 13.18817 };
   graph = new TGraph(64,Graph1_fx205,Graph1_fy205);
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
   
   TH1F *Graph_Graph1205 = new TH1F("Graph_Graph1205","Graph",100,0.38,5.42);
   Graph_Graph1205->SetMinimum(0.003138185);
   Graph_Graph1205->SetMaximum(64.75398);
   Graph_Graph1205->SetDirectory(nullptr);
   Graph_Graph1205->SetStats(0);
   Graph_Graph1205->SetLineWidth(2);
   Graph_Graph1205->SetMarkerStyle(20);
   Graph_Graph1205->SetMarkerSize(0.9);
   Graph_Graph1205->GetXaxis()->SetLabelFont(42);
   Graph_Graph1205->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1205->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1205->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1205->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1205->GetXaxis()->SetTitleFont(42);
   Graph_Graph1205->GetYaxis()->SetLabelFont(42);
   Graph_Graph1205->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1205->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1205->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1205->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1205->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1205->GetYaxis()->SetTitleFont(42);
   Graph_Graph1205->GetZaxis()->SetLabelFont(42);
   Graph_Graph1205->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1205->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1205->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1205->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1205->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1205);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx206[64] = { 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4,
   2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.25, 3.5, 3.75, 4, 4.25, 4.5, 4.75, 5, 5, 5,
   5, 4.75, 4.5, 4.25, 4, 3.75, 3.5, 3.25, 3, 2.9, 2.8, 2.7, 2.6, 2.5, 2.4, 2.3,
   2.2, 2.1, 2, 1.9, 1.8, 1.7, 1.6, 1.5, 1.4, 1.3, 1.2, 1.1, 1, 0.9, 0.8 };
   Double_t Graph2_fy206[64] = { 39.00351, 36.02003, 41.26595, 41.08932, 34.68272, 30.43059, 29.10126, 30.56705, 31.66236, 30.49195, 0.01194558, 27.44781, 26.52774, 26.5394, 26.79385, 26.96737, 27.20667,
   27.4908, 26.67214, 26.60195, 25.87957, 26.19794, 28.60487, 25.59011, 25.23252, 25.72039, 25.66032, 26.23477, 26.91895, 27.92595, 29.65634, 29.65634, 10.4023,
   10.4023, 9.924173, 9.696507, 9.556746, 9.515142, 9.685409, 9.739733, 9.96542, 11.42623, 10.17399, 10.187, 10.6393, 10.81706, 11.34792, 11.40246, 11.27362,
   11.06023, 10.7881, 10.82689, 11.31595, 0.005215779, 13.27584, 14.11645, 13.38859, 12.46262, 13.06176, 15.17487, 19.31883, 19.48776, 16.61671, 18.05706 };
   graph = new TGraph(64,Graph2_fx206,Graph2_fy206);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2206 = new TH1F("Graph_Graph2206","Graph",100,0.38,5.42);
   Graph_Graph2206->SetMinimum(0.004694201);
   Graph_Graph2206->SetMaximum(45.39202);
   Graph_Graph2206->SetDirectory(nullptr);
   Graph_Graph2206->SetStats(0);
   Graph_Graph2206->SetLineWidth(2);
   Graph_Graph2206->SetMarkerStyle(20);
   Graph_Graph2206->SetMarkerSize(0.9);
   Graph_Graph2206->GetXaxis()->SetLabelFont(42);
   Graph_Graph2206->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2206->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2206->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2206->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2206->GetXaxis()->SetTitleFont(42);
   Graph_Graph2206->GetYaxis()->SetLabelFont(42);
   Graph_Graph2206->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2206->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2206->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2206->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2206->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2206->GetYaxis()->SetTitleFont(42);
   Graph_Graph2206->GetZaxis()->SetLabelFont(42);
   Graph_Graph2206->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2206->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2206->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2206->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2206->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2206);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx207[31] = { 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4,
   2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.25, 3.5, 3.75, 4, 4.25, 4.5, 4.75, 5 };
   Double_t Graph0_fy207[31] = { 26.17188, 24.16992, 28.02734, 27.83203, 22.60742, 19.53125, 18.75, 19.87305, 20.80078, 19.82422, 0.00743866, 17.28516, 16.60156, 16.65039, 16.89453, 17.08984, 17.28516,
   17.33398, 16.65039, 16.50391, 15.91797, 16.01562, 17.72461, 15.625, 15.33203, 15.47852, 15.33203, 15.52734, 15.82031, 16.25977, 17.1875 };
   graph = new TGraph(31,Graph0_fx207,Graph0_fy207);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0207 = new TH1F("Graph_Graph0207","",100,0.38,5.42);
   Graph_Graph0207->SetMinimum(0.2);
   Graph_Graph0207->SetMaximum(100000);
   Graph_Graph0207->SetDirectory(nullptr);
   Graph_Graph0207->SetStats(0);
   Graph_Graph0207->SetLineWidth(2);
   Graph_Graph0207->SetMarkerStyle(20);
   Graph_Graph0207->SetMarkerSize(0.9);
   Graph_Graph0207->GetXaxis()->SetTitle("m(X) [TeV]");
   Graph_Graph0207->GetXaxis()->SetRange(3,101);
   Graph_Graph0207->GetXaxis()->SetLabelFont(42);
   Graph_Graph0207->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0207->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0207->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0207->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0207->GetXaxis()->SetTitleFont(42);
   Graph_Graph0207->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0207->GetYaxis()->SetLabelFont(42);
   Graph_Graph0207->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0207->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0207->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0207->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0207->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0207->GetYaxis()->SetTitleFont(42);
   Graph_Graph0207->GetZaxis()->SetLabelFont(42);
   Graph_Graph0207->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0207->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0207->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0207->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0207->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0207);
   
   graph->Draw("l");
   
   Double_t Graph_fx208[31] = { 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4,
   2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.25, 3.5, 3.75, 4, 4.25, 4.5, 4.75, 5 };
   Double_t Graph_fy208[31] = { 3.632543e-280, 2.261408e-248, 6.067526e-223, 3.826243e-202, 8.153347e-185, 3.716196e-170, 1.353433e-157, 1.035276e-146, 3.433277e-137, 8.591437e-129, 2.496317e-121, 1.183492e-114, 1.201866e-108, 3.258696e-103, 2.824874e-98, 9.086026e-94, 1.227555e-89,
   7.731227e-86, 2.479024e-82, 4.362615e-79, 4.493614e-76, 2.863641e-73, 1.184657e-70, 9.300711e-64, 8.05064e-60, 1.074796e-54, 1.045187e-51, 9.489525e-48, 2.094995e-45, 2.942856e-42, 2.270145e-40 };
   graph = new TGraph(31,Graph_fx208,Graph_fy208);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph208 = new TH1F("Graph_Graph208","",100,0.38,5.42);
   Graph_Graph208->SetMinimum(3.269289e-280);
   Graph_Graph208->SetMaximum(2.49716e-40);
   Graph_Graph208->SetDirectory(nullptr);
   Graph_Graph208->SetStats(0);
   Graph_Graph208->SetLineWidth(2);
   Graph_Graph208->SetMarkerStyle(20);
   Graph_Graph208->SetMarkerSize(0.9);
   Graph_Graph208->GetXaxis()->SetLabelFont(42);
   Graph_Graph208->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph208->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph208->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph208->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph208->GetXaxis()->SetTitleFont(42);
   Graph_Graph208->GetYaxis()->SetLabelFont(42);
   Graph_Graph208->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph208->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph208->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph208->GetYaxis()->SetTickLength(0.02);
   Graph_Graph208->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph208->GetYaxis()->SetTitleFont(42);
   Graph_Graph208->GetZaxis()->SetLabelFont(42);
   Graph_Graph208->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph208->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph208->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph208->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph208->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph208);
   
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
   
   Double_t Graph_fx210[31] = { 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4,
   2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.25, 3.5, 3.75, 4, 4.25, 4.5, 4.75, 5 };
   Double_t Graph_fy210[31] = { 3.995797e-280, 2.487549e-248, 6.674279e-223, 4.208867e-202, 8.968681e-185, 4.087816e-170, 1.488777e-157, 1.138804e-146, 3.776605e-137, 9.450581e-129, 2.745948e-121, 1.301841e-114, 1.322052e-108, 3.584565e-103, 3.107361e-98, 9.994629e-94, 1.35031e-89,
   8.50435e-86, 2.726926e-82, 4.798877e-79, 4.942975e-76, 3.150005e-73, 1.303123e-70, 1.023078e-63, 8.855704e-60, 1.182276e-54, 1.149706e-51, 1.043848e-47, 2.304495e-45, 3.237141e-42, 2.49716e-40 };
   graph = new TGraph(31,Graph_fx210,Graph_fy210);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph210 = new TH1F("Graph_Graph210","",100,0.38,5.42);
   Graph_Graph210->SetMinimum(3.596218e-280);
   Graph_Graph210->SetMaximum(2.746876e-40);
   Graph_Graph210->SetDirectory(nullptr);
   Graph_Graph210->SetStats(0);
   Graph_Graph210->SetLineWidth(2);
   Graph_Graph210->SetMarkerStyle(20);
   Graph_Graph210->SetMarkerSize(0.9);
   Graph_Graph210->GetXaxis()->SetLabelFont(42);
   Graph_Graph210->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph210->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph210->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph210->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph210->GetXaxis()->SetTitleFont(42);
   Graph_Graph210->GetYaxis()->SetLabelFont(42);
   Graph_Graph210->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph210->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph210->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph210->GetYaxis()->SetTickLength(0.02);
   Graph_Graph210->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph210->GetYaxis()->SetTitleFont(42);
   Graph_Graph210->GetZaxis()->SetLabelFont(42);
   Graph_Graph210->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph210->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph210->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph210->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph210->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph210);
   
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
