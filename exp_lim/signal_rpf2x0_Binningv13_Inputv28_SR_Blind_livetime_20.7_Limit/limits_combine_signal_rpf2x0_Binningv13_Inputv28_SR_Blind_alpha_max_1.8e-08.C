#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signal_rpf2x0_Binningv13_Inputv28_SR_Blind_alpha_max_1.8e-08()
{
//=========Macro generated from canvas: climits/climits
//=========  (Tue Jul  7 21:09:36 2026) by ROOT version 6.30/07
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
   
   Double_t Graph0_fx99[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy99[20] = { 102.3402, 8.363508, 7.354474, 5.768814, 5.291376, 5.044252, 4.905126, 6.727238, 9.269029, 12.08222, 14.78557, 27.12809, 27.88047, 27.04424, 27.56347, 27.30236, 26.1693,
   27.37479, 27.47854, 27.47854 };
   TGraph *graph = new TGraph(20,Graph0_fx99,Graph0_fy99);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph099 = new TH1F("Graph_Graph099","",100,2.7,1099.7);
   Graph_Graph099->SetMinimum(0.2);
   Graph_Graph099->SetMaximum(100000);
   Graph_Graph099->SetDirectory(nullptr);
   Graph_Graph099->SetStats(0);
   Graph_Graph099->SetLineWidth(2);
   Graph_Graph099->SetMarkerStyle(20);
   Graph_Graph099->SetMarkerSize(0.9);
   Graph_Graph099->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph099->GetXaxis()->SetRange(0,91);
   Graph_Graph099->GetXaxis()->SetLabelFont(42);
   Graph_Graph099->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph099->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph099->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph099->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph099->GetXaxis()->SetTitleFont(42);
   Graph_Graph099->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph099->GetYaxis()->SetLabelFont(42);
   Graph_Graph099->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph099->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph099->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph099->GetYaxis()->SetTickLength(0.02);
   Graph_Graph099->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph099->GetYaxis()->SetTitleFont(42);
   Graph_Graph099->GetZaxis()->SetLabelFont(42);
   Graph_Graph099->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph099->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph099->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph099->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph099->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph099);
   
   graph->Draw("al");
   
   Double_t Graph1_fx100[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph1_fy100[42] = { 263.3536, 22.30594, 21.12988, 17.06116, 15.59377, 14.93766, 14.53641, 20.4565, 28.18569, 36.74017, 44.96066, 82.49234, 84.78023, 82.23738, 83.81629, 83.02227, 79.57681,
   83.24253, 83.55803, 83.55803, 83.55803, 7.100603, 7.100603, 7.100603, 7.073947, 6.804864, 7.054077, 7.123885, 7.003339, 7.189512, 7.023805, 4.175044, 3.473909,
   2.747375, 2.098302, 1.901159, 1.981428, 2.095599, 2.279342, 2.893423, 3.688819, 43.23465 };
   graph = new TGraph(42,Graph1_fx100,Graph1_fy100);
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
   
   TH1F *Graph_Graph1100 = new TH1F("Graph_Graph1100","Graph",100,2.7,1099.7);
   Graph_Graph1100->SetMinimum(1.711043);
   Graph_Graph1100->SetMaximum(289.4988);
   Graph_Graph1100->SetDirectory(nullptr);
   Graph_Graph1100->SetStats(0);
   Graph_Graph1100->SetLineWidth(2);
   Graph_Graph1100->SetMarkerStyle(20);
   Graph_Graph1100->SetMarkerSize(0.9);
   Graph_Graph1100->GetXaxis()->SetLabelFont(42);
   Graph_Graph1100->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1100->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1100->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1100->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1100->GetXaxis()->SetTitleFont(42);
   Graph_Graph1100->GetYaxis()->SetLabelFont(42);
   Graph_Graph1100->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1100->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1100->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1100->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1100->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1100->GetYaxis()->SetTitleFont(42);
   Graph_Graph1100->GetZaxis()->SetLabelFont(42);
   Graph_Graph1100->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1100->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1100->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1100->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1100->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1100);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx101[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph2_fy101[42] = { 167.9571, 13.70932, 12.9865, 10.4326, 9.578931, 9.239235, 9.0445, 13.54376, 18.70133, 24.41077, 29.87306, 54.81011, 56.33024, 54.64071, 55.68977, 55.1622, 52.87295,
   55.30855, 55.51818, 55.51818, 55.51818, 12.67709, 12.67709, 12.67709, 12.63184, 12.1099, 12.60131, 12.7142, 12.48837, 12.85225, 12.52694, 7.165181, 5.942446,
   4.645264, 3.478678, 2.897317, 2.99809, 3.15936, 3.443171, 4.365156, 5.318804, 63.9916 };
   graph = new TGraph(42,Graph2_fx101,Graph2_fy101);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2101 = new TH1F("Graph_Graph2101","Graph",100,2.7,1099.7);
   Graph_Graph2101->SetMinimum(2.607585);
   Graph_Graph2101->SetMaximum(184.4631);
   Graph_Graph2101->SetDirectory(nullptr);
   Graph_Graph2101->SetStats(0);
   Graph_Graph2101->SetLineWidth(2);
   Graph_Graph2101->SetMarkerStyle(20);
   Graph_Graph2101->SetMarkerSize(0.9);
   Graph_Graph2101->GetXaxis()->SetLabelFont(42);
   Graph_Graph2101->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2101->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2101->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2101->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2101->GetXaxis()->SetTitleFont(42);
   Graph_Graph2101->GetYaxis()->SetLabelFont(42);
   Graph_Graph2101->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2101->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2101->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2101->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2101->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2101->GetYaxis()->SetTitleFont(42);
   Graph_Graph2101->GetZaxis()->SetLabelFont(42);
   Graph_Graph2101->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2101->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2101->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2101->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2101->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2101);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx102[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy102[20] = { 102.3402, 8.363508, 7.354474, 5.768814, 5.291376, 5.044252, 4.905126, 6.727238, 9.269029, 12.08222, 14.78557, 27.12809, 27.88047, 27.04424, 27.56347, 27.30236, 26.1693,
   27.37479, 27.47854, 27.47854 };
   graph = new TGraph(20,Graph0_fx102,Graph0_fy102);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0102 = new TH1F("Graph_Graph0102","",100,2.7,1099.7);
   Graph_Graph0102->SetMinimum(0.2);
   Graph_Graph0102->SetMaximum(100000);
   Graph_Graph0102->SetDirectory(nullptr);
   Graph_Graph0102->SetStats(0);
   Graph_Graph0102->SetLineWidth(2);
   Graph_Graph0102->SetMarkerStyle(20);
   Graph_Graph0102->SetMarkerSize(0.9);
   Graph_Graph0102->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0102->GetXaxis()->SetRange(0,91);
   Graph_Graph0102->GetXaxis()->SetLabelFont(42);
   Graph_Graph0102->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0102->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0102->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0102->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0102->GetXaxis()->SetTitleFont(42);
   Graph_Graph0102->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0102->GetYaxis()->SetLabelFont(42);
   Graph_Graph0102->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0102->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0102->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0102->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0102->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0102->GetYaxis()->SetTitleFont(42);
   Graph_Graph0102->GetZaxis()->SetLabelFont(42);
   Graph_Graph0102->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0102->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0102->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0102->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0102->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0102);
   
   graph->Draw("l");
   
   Double_t Graph_fx103[72] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180, 185, 190, 195, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450,
   475, 500, 600, 700, 800, 900, 1000 };
   Double_t Graph_fy103[72] = { 26.43543, 29.53542, 31.7807, 33.32052, 34.8349, 35.03363, 34.97454, 34.72127, 34.32348, 33.81976, 33.23997, 32.60718, 31.93917, 31.24962, 30.549, 29.84533, 29.14469,
   27.7696, 27.10105, 26.44777, 25.81099, 24.29786, 22.89209, 21.59999, 20.40708, 19.31374, 18.30463, 17.37858, 5.862886, 4.672133, 3.842811, 3.237298, 2.778806,
   2.42146, 2.136332, 1.904358, 1.551628, 1.415066, 1.297927, 1.196514, 1.107993, 1.011223, 0.9291055, 0.7977297, 0.6975983, 0.6188635, 0.5553251, 0.5029359, 0.4589647,
   0.4215109, 0.3892137, 0.3746757, 0.3610734, 0.3483196, 0.3363382, 0.2859114, 0.2473119, 0.21691, 0.1924218, 0.172333, 0.155599, 0.1414766, 0.1294228, 0.1190328, 0.1099984,
   0.1020819, 0.09509677, 0.07390557, 0.05970774, 0.04962826, 0.04215663, 0.04215663 };
   graph = new TGraph(72,Graph_fx103,Graph_fy103);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph103 = new TH1F("Graph_Graph103","",100,1.44,1099.84);
   Graph_Graph103->SetMinimum(0.03794097);
   Graph_Graph103->SetMaximum(38.53278);
   Graph_Graph103->SetDirectory(nullptr);
   Graph_Graph103->SetStats(0);
   Graph_Graph103->SetLineWidth(2);
   Graph_Graph103->SetMarkerStyle(20);
   Graph_Graph103->SetMarkerSize(0.9);
   Graph_Graph103->GetXaxis()->SetLabelFont(42);
   Graph_Graph103->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph103->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph103->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph103->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph103->GetXaxis()->SetTitleFont(42);
   Graph_Graph103->GetYaxis()->SetLabelFont(42);
   Graph_Graph103->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph103->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph103->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph103->GetYaxis()->SetTickLength(0.02);
   Graph_Graph103->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph103->GetYaxis()->SetTitleFont(42);
   Graph_Graph103->GetZaxis()->SetLabelFont(42);
   Graph_Graph103->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph103->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph103->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph103->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph103->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph103);
   
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
   
   Double_t Graph_fx105[72] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180, 185, 190, 195, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450,
   475, 500, 600, 700, 800, 900, 1000 };
   Double_t Graph_fy105[72] = { 29.07897, 32.48896, 34.95877, 36.65257, 38.31839, 38.53699, 38.47199, 38.1934, 37.75583, 37.20174, 36.56397, 35.8679, 35.13309, 34.37458, 33.6039, 32.82986, 32.05916,
   30.54656, 29.81116, 29.09255, 28.39209, 26.72765, 25.1813, 23.75999, 22.44779, 21.24511, 20.13509, 19.11644, 6.449175, 5.139346, 4.227092, 3.561028, 3.056687,
   2.663606, 2.349965, 2.094794, 1.706791, 1.556573, 1.42772, 1.316165, 1.218792, 1.112345, 1.022016, 0.8775027, 0.7673581, 0.6807499, 0.6108576, 0.5532295, 0.5048612,
   0.463662, 0.4281351, 0.4121433, 0.3971807, 0.3831516, 0.369972, 0.3145025, 0.2720431, 0.238601, 0.211664, 0.1895663, 0.1711589, 0.1556243, 0.1423651, 0.1309361, 0.1209982,
   0.1122901, 0.1046064, 0.08129613, 0.06567851, 0.05459109, 0.04637229, 0.04637229 };
   graph = new TGraph(72,Graph_fx105,Graph_fy105);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph105 = new TH1F("Graph_Graph105","",100,1.44,1099.84);
   Graph_Graph105->SetMinimum(0.04173506);
   Graph_Graph105->SetMaximum(42.38606);
   Graph_Graph105->SetDirectory(nullptr);
   Graph_Graph105->SetStats(0);
   Graph_Graph105->SetLineWidth(2);
   Graph_Graph105->SetMarkerStyle(20);
   Graph_Graph105->SetMarkerSize(0.9);
   Graph_Graph105->GetXaxis()->SetLabelFont(42);
   Graph_Graph105->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph105->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph105->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph105->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph105->GetXaxis()->SetTitleFont(42);
   Graph_Graph105->GetYaxis()->SetLabelFont(42);
   Graph_Graph105->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph105->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph105->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph105->GetYaxis()->SetTickLength(0.02);
   Graph_Graph105->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph105->GetYaxis()->SetTitleFont(42);
   Graph_Graph105->GetZaxis()->SetLabelFont(42);
   Graph_Graph105->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph105->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph105->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph105->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph105->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph105);
   
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
   line = new TLine(3.435026,0,3.435026,34.42599);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(3.430026,0,"  3.44 TeV");

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
   pt_LaTex = pt->AddText("#varepsilon = 1.8e-08");
   pt_LaTex = pt->AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
