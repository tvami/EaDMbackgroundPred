#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_2mnthNorm_rate_2.64e-07()
{
//=========Macro generated from canvas: climits/climits
//=========  (Fri Sep 19 19:21:11 2025) by ROOT version 6.30/07
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
   
   Double_t Graph0_fx183[28] = { 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5, 5.2, 5.4,
   5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph0_fy183[28] = { 27.83203, 22.60742, 19.53125, 18.75, 19.87305, 20.80078, 19.82422, 18.50586, 17.28516, 16.60156, 16.65039, 16.89453, 17.08984, 17.28516, 17.33398, 16.65039, 16.50391,
   15.91797, 16.01562, 17.72461, 15.625, 15.33203, 15.47852, 15.33203, 15.52734, 15.82031, 16.25977, 17.1875 };
   TGraph *graph = new TGraph(28,Graph0_fx183,Graph0_fy183);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0183 = new TH1F("Graph_Graph0183","",100,1.42,10.78);
   Graph_Graph0183->SetMinimum(0.2);
   Graph_Graph0183->SetMaximum(100000);
   Graph_Graph0183->SetDirectory(nullptr);
   Graph_Graph0183->SetStats(0);
   Graph_Graph0183->SetLineWidth(2);
   Graph_Graph0183->SetMarkerStyle(20);
   Graph_Graph0183->SetMarkerSize(0.9);
   Graph_Graph0183->GetXaxis()->SetTitle("m(X) [TeV]");
   Graph_Graph0183->GetXaxis()->SetRange(0,92);
   Graph_Graph0183->GetXaxis()->SetLabelFont(42);
   Graph_Graph0183->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0183->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0183->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0183->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0183->GetXaxis()->SetTitleFont(42);
   Graph_Graph0183->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0183->GetYaxis()->SetLabelFont(42);
   Graph_Graph0183->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0183->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0183->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0183->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0183->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0183->GetYaxis()->SetTitleFont(42);
   Graph_Graph0183->GetZaxis()->SetLabelFont(42);
   Graph_Graph0183->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0183->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0183->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0183->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0183->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0183);
   
   graph->Draw("al");
   
   Double_t Graph1_fx184[58] = { 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5, 5.2, 5.4,
   5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10, 10, 10, 10, 9.5, 9,
   8.5, 8, 7.5, 7, 6.5, 6, 5.8, 5.6, 5.4, 5.2, 5, 4.8, 4.6, 4.4, 4.2, 4,
   3.8, 3.6, 3.4, 3.2, 3, 2.8, 2.6, 2.4, 2.2 };
   Double_t Graph1_fy184[58] = { 58.779, 51.64776, 45.92929, 43.98549, 45.6157, 46.96366, 45.67817, 44.11966, 42.26104, 41.07864, 41.22047, 41.3882, 41.46952, 41.86501, 42.41551, 41.4595, 41.57227,
   40.74936, 41.49311, 44.80825, 40.66233, 40.35588, 41.43917, 41.70946, 42.87254, 44.21722, 46.20752, 49.26201, 49.26201, 6.848145, 6.848145, 6.60553, 6.4888,
   6.429291, 6.468201, 6.650925, 6.707764, 6.896973, 7.89299, 7.006836, 7.026291, 7.349396, 7.544708, 7.989883, 8.102417, 8.010864, 7.787323, 7.609749, 7.587433,
   7.967377, 8.674622, 9.602356, 10.23788, 9.626007, 8.935547, 9.307861, 10.86216, 13.86166 };
   graph = new TGraph(58,Graph1_fx184,Graph1_fy184);
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
   
   TH1F *Graph_Graph1184 = new TH1F("Graph_Graph1184","Graph",100,1.42,10.78);
   Graph_Graph1184->SetMinimum(1.19432);
   Graph_Graph1184->SetMaximum(64.01397);
   Graph_Graph1184->SetDirectory(nullptr);
   Graph_Graph1184->SetStats(0);
   Graph_Graph1184->SetLineWidth(2);
   Graph_Graph1184->SetMarkerStyle(20);
   Graph_Graph1184->SetMarkerSize(0.9);
   Graph_Graph1184->GetXaxis()->SetLabelFont(42);
   Graph_Graph1184->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1184->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1184->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1184->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1184->GetXaxis()->SetTitleFont(42);
   Graph_Graph1184->GetYaxis()->SetLabelFont(42);
   Graph_Graph1184->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1184->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1184->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1184->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1184->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1184->GetYaxis()->SetTitleFont(42);
   Graph_Graph1184->GetZaxis()->SetLabelFont(42);
   Graph_Graph1184->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1184->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1184->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1184->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1184->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1184);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx185[58] = { 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5, 5.2, 5.4,
   5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10, 10, 10, 10, 9.5, 9,
   8.5, 8, 7.5, 7, 6.5, 6, 5.8, 5.6, 5.4, 5.2, 5, 4.8, 4.6, 4.4, 4.2, 4,
   3.8, 3.6, 3.4, 3.2, 3, 2.8, 2.6, 2.4, 2.2 };
   Double_t Graph2_fy185[58] = { 41.08932, 34.68272, 30.43059, 29.10126, 30.56705, 31.66236, 30.49195, 28.98051, 27.44781, 26.52774, 26.5394, 26.79385, 26.96737, 27.20667, 27.4908, 26.67214, 26.60195,
   25.87957, 26.19794, 28.60487, 25.59011, 25.23252, 25.72039, 25.66032, 26.23477, 26.91895, 27.92595, 29.65634, 29.65634, 10.4023, 10.4023, 9.924173, 9.696507,
   9.556746, 9.515142, 9.685409, 9.739733, 9.96542, 11.42623, 10.17399, 10.187, 10.6393, 10.81706, 11.34792, 11.40246, 11.27362, 11.06023, 10.7881, 10.82689,
   11.31595, 12.20772, 13.27584, 14.11645, 13.38859, 12.46262, 13.06176, 15.17487, 19.31883 };
   graph = new TGraph(58,Graph2_fx185,Graph2_fy185);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2185 = new TH1F("Graph_Graph2185","Graph",100,1.42,10.78);
   Graph_Graph2185->SetMinimum(6.357724);
   Graph_Graph2185->SetMaximum(44.24674);
   Graph_Graph2185->SetDirectory(nullptr);
   Graph_Graph2185->SetStats(0);
   Graph_Graph2185->SetLineWidth(2);
   Graph_Graph2185->SetMarkerStyle(20);
   Graph_Graph2185->SetMarkerSize(0.9);
   Graph_Graph2185->GetXaxis()->SetLabelFont(42);
   Graph_Graph2185->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2185->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2185->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2185->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2185->GetXaxis()->SetTitleFont(42);
   Graph_Graph2185->GetYaxis()->SetLabelFont(42);
   Graph_Graph2185->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2185->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2185->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2185->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2185->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2185->GetYaxis()->SetTitleFont(42);
   Graph_Graph2185->GetZaxis()->SetLabelFont(42);
   Graph_Graph2185->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2185->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2185->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2185->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2185->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2185);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx186[28] = { 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5, 5.2, 5.4,
   5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph0_fy186[28] = { 27.83203, 22.60742, 19.53125, 18.75, 19.87305, 20.80078, 19.82422, 18.50586, 17.28516, 16.60156, 16.65039, 16.89453, 17.08984, 17.28516, 17.33398, 16.65039, 16.50391,
   15.91797, 16.01562, 17.72461, 15.625, 15.33203, 15.47852, 15.33203, 15.52734, 15.82031, 16.25977, 17.1875 };
   graph = new TGraph(28,Graph0_fx186,Graph0_fy186);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0186 = new TH1F("Graph_Graph0186","",100,1.42,10.78);
   Graph_Graph0186->SetMinimum(0.2);
   Graph_Graph0186->SetMaximum(100000);
   Graph_Graph0186->SetDirectory(nullptr);
   Graph_Graph0186->SetStats(0);
   Graph_Graph0186->SetLineWidth(2);
   Graph_Graph0186->SetMarkerStyle(20);
   Graph_Graph0186->SetMarkerSize(0.9);
   Graph_Graph0186->GetXaxis()->SetTitle("m(X) [TeV]");
   Graph_Graph0186->GetXaxis()->SetRange(0,92);
   Graph_Graph0186->GetXaxis()->SetLabelFont(42);
   Graph_Graph0186->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0186->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0186->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0186->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0186->GetXaxis()->SetTitleFont(42);
   Graph_Graph0186->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0186->GetYaxis()->SetLabelFont(42);
   Graph_Graph0186->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0186->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0186->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0186->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0186->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0186->GetYaxis()->SetTitleFont(42);
   Graph_Graph0186->GetZaxis()->SetLabelFont(42);
   Graph_Graph0186->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0186->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0186->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0186->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0186->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0186);
   
   graph->Draw("l");
   
   Double_t Graph_fx187[28] = { 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5, 5.2, 5.4,
   5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph_fy187[28] = { 6.168465e-162, 5.656465e-148, 3.655848e-136, 4.818472e-126, 2.822499e-117, 1.317886e-109, 7.667244e-103, 7.866616e-97, 1.872489e-91, 1.287654e-86, 3.055197e-82, 2.892168e-78, 1.231572e-74, 2.607151e-71, 2.984078e-68, 1.982645e-65, 8.123644e-63,
   2.161975e-60, 3.908039e-58, 4.987689e-56, 1.763369e-50, 2.595617e-47, 3.447223e-43, 8.723317e-41, 1.329607e-37, 1.019524e-35, 3.458173e-33, 1.137233e-31 };
   graph = new TGraph(28,Graph_fx187,Graph_fy187);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph187 = new TH1F("Graph_Graph187","",100,1.42,10.78);
   Graph_Graph187->SetMinimum(5.551619e-162);
   Graph_Graph187->SetMaximum(1.250956e-31);
   Graph_Graph187->SetDirectory(nullptr);
   Graph_Graph187->SetStats(0);
   Graph_Graph187->SetLineWidth(2);
   Graph_Graph187->SetMarkerStyle(20);
   Graph_Graph187->SetMarkerSize(0.9);
   Graph_Graph187->GetXaxis()->SetLabelFont(42);
   Graph_Graph187->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph187->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph187->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph187->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph187->GetXaxis()->SetTitleFont(42);
   Graph_Graph187->GetYaxis()->SetLabelFont(42);
   Graph_Graph187->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph187->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph187->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph187->GetYaxis()->SetTickLength(0.02);
   Graph_Graph187->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph187->GetYaxis()->SetTitleFont(42);
   Graph_Graph187->GetZaxis()->SetLabelFont(42);
   Graph_Graph187->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph187->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph187->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph187->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph187->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph187);
   
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
   
   Double_t Graph_fx189[28] = { 2.2, 2.4, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5, 5.2, 5.4,
   5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10 };
   Double_t Graph_fy189[28] = { 6.785312e-162, 6.222111e-148, 4.021433e-136, 5.300319e-126, 3.104749e-117, 1.449675e-109, 8.433968e-103, 8.653278e-97, 2.059738e-91, 1.41642e-86, 3.360716e-82, 3.181385e-78, 1.354729e-74, 2.867866e-71, 3.282485e-68, 2.18091e-65, 8.936009e-63,
   2.378173e-60, 4.298843e-58, 5.486458e-56, 1.939706e-50, 2.855178e-47, 3.791945e-43, 9.595649e-41, 1.462568e-37, 1.121476e-35, 3.80399e-33, 1.250956e-31 };
   graph = new TGraph(28,Graph_fx189,Graph_fy189);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph189 = new TH1F("Graph_Graph189","",100,1.42,10.78);
   Graph_Graph189->SetMinimum(6.106781e-162);
   Graph_Graph189->SetMaximum(1.376052e-31);
   Graph_Graph189->SetDirectory(nullptr);
   Graph_Graph189->SetStats(0);
   Graph_Graph189->SetLineWidth(2);
   Graph_Graph189->SetMarkerStyle(20);
   Graph_Graph189->SetMarkerSize(0.9);
   Graph_Graph189->GetXaxis()->SetLabelFont(42);
   Graph_Graph189->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph189->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph189->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph189->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph189->GetXaxis()->SetTitleFont(42);
   Graph_Graph189->GetYaxis()->SetLabelFont(42);
   Graph_Graph189->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph189->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph189->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph189->GetYaxis()->SetTickLength(0.02);
   Graph_Graph189->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph189->GetYaxis()->SetTitleFont(42);
   Graph_Graph189->GetZaxis()->SetLabelFont(42);
   Graph_Graph189->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph189->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph189->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph189->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph189->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph189);
   
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
