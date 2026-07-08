#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signal_rpf2x0_Binningv13_Inputv28_SR_Blind_alpha_max_1.6e-08()
{
//=========Macro generated from canvas: climits/climits
//=========  (Tue Jul  7 21:09:34 2026) by ROOT version 6.30/07
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
   
   Double_t Graph0_fx85[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy85[20] = { 102.3402, 8.363508, 7.354474, 5.768814, 5.291376, 5.044252, 4.905126, 6.727238, 9.269029, 12.08222, 14.78557, 27.12809, 27.88047, 27.04424, 27.56347, 27.30236, 26.1693,
   27.37479, 27.47854, 27.47854 };
   TGraph *graph = new TGraph(20,Graph0_fx85,Graph0_fy85);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph085 = new TH1F("Graph_Graph085","",100,2.7,1099.7);
   Graph_Graph085->SetMinimum(0.2);
   Graph_Graph085->SetMaximum(100000);
   Graph_Graph085->SetDirectory(nullptr);
   Graph_Graph085->SetStats(0);
   Graph_Graph085->SetLineWidth(2);
   Graph_Graph085->SetMarkerStyle(20);
   Graph_Graph085->SetMarkerSize(0.9);
   Graph_Graph085->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph085->GetXaxis()->SetRange(0,91);
   Graph_Graph085->GetXaxis()->SetLabelFont(42);
   Graph_Graph085->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph085->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph085->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph085->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph085->GetXaxis()->SetTitleFont(42);
   Graph_Graph085->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph085->GetYaxis()->SetLabelFont(42);
   Graph_Graph085->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph085->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph085->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph085->GetYaxis()->SetTickLength(0.02);
   Graph_Graph085->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph085->GetYaxis()->SetTitleFont(42);
   Graph_Graph085->GetZaxis()->SetLabelFont(42);
   Graph_Graph085->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph085->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph085->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph085->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph085->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph085);
   
   graph->Draw("al");
   
   Double_t Graph1_fx86[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph1_fy86[42] = { 263.3536, 22.30594, 21.12988, 17.06116, 15.59377, 14.93766, 14.53641, 20.4565, 28.18569, 36.74017, 44.96066, 82.49234, 84.78023, 82.23738, 83.81629, 83.02227, 79.57681,
   83.24253, 83.55803, 83.55803, 83.55803, 7.100603, 7.100603, 7.100603, 7.073947, 6.804864, 7.054077, 7.123885, 7.003339, 7.189512, 7.023805, 4.175044, 3.473909,
   2.747375, 2.098302, 1.901159, 1.981428, 2.095599, 2.279342, 2.893423, 3.688819, 43.23465 };
   graph = new TGraph(42,Graph1_fx86,Graph1_fy86);
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
   
   TH1F *Graph_Graph186 = new TH1F("Graph_Graph186","Graph",100,2.7,1099.7);
   Graph_Graph186->SetMinimum(1.711043);
   Graph_Graph186->SetMaximum(289.4988);
   Graph_Graph186->SetDirectory(nullptr);
   Graph_Graph186->SetStats(0);
   Graph_Graph186->SetLineWidth(2);
   Graph_Graph186->SetMarkerStyle(20);
   Graph_Graph186->SetMarkerSize(0.9);
   Graph_Graph186->GetXaxis()->SetLabelFont(42);
   Graph_Graph186->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph186->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph186->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph186->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph186->GetXaxis()->SetTitleFont(42);
   Graph_Graph186->GetYaxis()->SetLabelFont(42);
   Graph_Graph186->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph186->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph186->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph186->GetYaxis()->SetTickLength(0.02);
   Graph_Graph186->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph186->GetYaxis()->SetTitleFont(42);
   Graph_Graph186->GetZaxis()->SetLabelFont(42);
   Graph_Graph186->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph186->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph186->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph186->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph186->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph186);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx87[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph2_fy87[42] = { 167.9571, 13.70932, 12.9865, 10.4326, 9.578931, 9.239235, 9.0445, 13.54376, 18.70133, 24.41077, 29.87306, 54.81011, 56.33024, 54.64071, 55.68977, 55.1622, 52.87295,
   55.30855, 55.51818, 55.51818, 55.51818, 12.67709, 12.67709, 12.67709, 12.63184, 12.1099, 12.60131, 12.7142, 12.48837, 12.85225, 12.52694, 7.165181, 5.942446,
   4.645264, 3.478678, 2.897317, 2.99809, 3.15936, 3.443171, 4.365156, 5.318804, 63.9916 };
   graph = new TGraph(42,Graph2_fx87,Graph2_fy87);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph287 = new TH1F("Graph_Graph287","Graph",100,2.7,1099.7);
   Graph_Graph287->SetMinimum(2.607585);
   Graph_Graph287->SetMaximum(184.4631);
   Graph_Graph287->SetDirectory(nullptr);
   Graph_Graph287->SetStats(0);
   Graph_Graph287->SetLineWidth(2);
   Graph_Graph287->SetMarkerStyle(20);
   Graph_Graph287->SetMarkerSize(0.9);
   Graph_Graph287->GetXaxis()->SetLabelFont(42);
   Graph_Graph287->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph287->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph287->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph287->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph287->GetXaxis()->SetTitleFont(42);
   Graph_Graph287->GetYaxis()->SetLabelFont(42);
   Graph_Graph287->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph287->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph287->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph287->GetYaxis()->SetTickLength(0.02);
   Graph_Graph287->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph287->GetYaxis()->SetTitleFont(42);
   Graph_Graph287->GetZaxis()->SetLabelFont(42);
   Graph_Graph287->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph287->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph287->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph287->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph287->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph287);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx88[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy88[20] = { 102.3402, 8.363508, 7.354474, 5.768814, 5.291376, 5.044252, 4.905126, 6.727238, 9.269029, 12.08222, 14.78557, 27.12809, 27.88047, 27.04424, 27.56347, 27.30236, 26.1693,
   27.37479, 27.47854, 27.47854 };
   graph = new TGraph(20,Graph0_fx88,Graph0_fy88);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph088 = new TH1F("Graph_Graph088","",100,2.7,1099.7);
   Graph_Graph088->SetMinimum(0.2);
   Graph_Graph088->SetMaximum(100000);
   Graph_Graph088->SetDirectory(nullptr);
   Graph_Graph088->SetStats(0);
   Graph_Graph088->SetLineWidth(2);
   Graph_Graph088->SetMarkerStyle(20);
   Graph_Graph088->SetMarkerSize(0.9);
   Graph_Graph088->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph088->GetXaxis()->SetRange(0,91);
   Graph_Graph088->GetXaxis()->SetLabelFont(42);
   Graph_Graph088->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph088->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph088->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph088->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph088->GetXaxis()->SetTitleFont(42);
   Graph_Graph088->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph088->GetYaxis()->SetLabelFont(42);
   Graph_Graph088->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph088->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph088->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph088->GetYaxis()->SetTickLength(0.02);
   Graph_Graph088->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph088->GetYaxis()->SetTitleFont(42);
   Graph_Graph088->GetZaxis()->SetLabelFont(42);
   Graph_Graph088->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph088->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph088->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph088->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph088->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph088);
   
   graph->Draw("l");
   
   Double_t Graph_fx89[72] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180, 185, 190, 195, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450,
   475, 500, 600, 700, 800, 900, 1000 };
   Double_t Graph_fy89[72] = { 27.74574, 29.26066, 30.06417, 30.35211, 29.9397, 29.43071, 28.80531, 28.10577, 27.36247, 26.59721, 25.82548, 25.05827, 24.30323, 23.56558, 22.8488, 22.15506, 21.48561,
   20.22134, 19.62632, 19.05544, 18.50802, 17.23929, 16.09332, 15.0658, 14.13497, 13.29651, 12.53318, 11.84164, 3.783912, 2.998736, 2.456705, 2.063467, 1.767137,
   1.537047, 1.354011, 1.205466, 0.9802449, 0.8932642, 0.8187522, 0.7543181, 0.6981327, 0.6368494, 0.5848774, 0.5017963, 0.4385343, 0.3888317, 0.3487512, 0.3157251, 0.2880218,
   0.264437, 0.2441089, 0.2349615, 0.2264046, 0.2183831, 0.2108488, 0.1791537, 0.1549098, 0.1358258, 0.1204613, 0.1078621, 0.09737068, 0.08851913, 0.08096612, 0.07445704, 0.06879844,
   0.06384087, 0.05946722, 0.04620285, 0.03731954, 0.03101488, 0.02634249, 0.02634249 };
   graph = new TGraph(72,Graph_fx89,Graph_fy89);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph89 = new TH1F("Graph_Graph89","",100,1.44,1099.84);
   Graph_Graph89->SetMinimum(0.02370824);
   Graph_Graph89->SetMaximum(33.38469);
   Graph_Graph89->SetDirectory(nullptr);
   Graph_Graph89->SetStats(0);
   Graph_Graph89->SetLineWidth(2);
   Graph_Graph89->SetMarkerStyle(20);
   Graph_Graph89->SetMarkerSize(0.9);
   Graph_Graph89->GetXaxis()->SetLabelFont(42);
   Graph_Graph89->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph89->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph89->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph89->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph89->GetXaxis()->SetTitleFont(42);
   Graph_Graph89->GetYaxis()->SetLabelFont(42);
   Graph_Graph89->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph89->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph89->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph89->GetYaxis()->SetTickLength(0.02);
   Graph_Graph89->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph89->GetYaxis()->SetTitleFont(42);
   Graph_Graph89->GetZaxis()->SetLabelFont(42);
   Graph_Graph89->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph89->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph89->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph89->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph89->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph89);
   
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
   
   Double_t Graph_fx91[72] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180, 185, 190, 195, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450,
   475, 500, 600, 700, 800, 900, 1000 };
   Double_t Graph_fy91[72] = { 30.52031, 32.18673, 33.07059, 33.38732, 32.93367, 32.37378, 31.68584, 30.91635, 30.09872, 29.25693, 28.40803, 27.5641, 26.73355, 25.92214, 25.13368, 24.37057, 23.63417,
   22.24347, 21.58895, 20.96098, 20.35882, 18.96322, 17.70265, 16.57238, 15.54847, 14.62616, 13.7865, 13.0258, 4.162303, 3.29861, 2.702376, 2.269814, 1.943851,
   1.690752, 1.489412, 1.326013, 1.078269, 0.9825906, 0.9006274, 0.8297499, 0.767946, 0.7005343, 0.6433651, 0.5519759, 0.4823877, 0.4277149, 0.3836263, 0.3472976, 0.316824,
   0.2908807, 0.2685198, 0.2584576, 0.2490451, 0.2402214, 0.2319337, 0.1970691, 0.1704008, 0.1494084, 0.1325074, 0.1186483, 0.1071077, 0.09737104, 0.08906273, 0.08190274, 0.07567828,
   0.07022496, 0.06541394, 0.05082313, 0.04105149, 0.03411637, 0.02897674, 0.02897674 };
   graph = new TGraph(72,Graph_fx91,Graph_fy91);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph91 = new TH1F("Graph_Graph91","",100,1.44,1099.84);
   Graph_Graph91->SetMinimum(0.02607907);
   Graph_Graph91->SetMaximum(36.72316);
   Graph_Graph91->SetDirectory(nullptr);
   Graph_Graph91->SetStats(0);
   Graph_Graph91->SetLineWidth(2);
   Graph_Graph91->SetMarkerStyle(20);
   Graph_Graph91->SetMarkerSize(0.9);
   Graph_Graph91->GetXaxis()->SetLabelFont(42);
   Graph_Graph91->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph91->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph91->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph91->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph91->GetXaxis()->SetTitleFont(42);
   Graph_Graph91->GetYaxis()->SetLabelFont(42);
   Graph_Graph91->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph91->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph91->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph91->GetYaxis()->SetTickLength(0.02);
   Graph_Graph91->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph91->GetYaxis()->SetTitleFont(42);
   Graph_Graph91->GetZaxis()->SetLabelFont(42);
   Graph_Graph91->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph91->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph91->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph91->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph91->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph91);
   
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
   line = new TLine(3.53233,0,3.53233,26.98075);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(3.52733,0,"  3.53 TeV");

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
   pt_LaTex = pt->AddText("#varepsilon = 1.6e-08");
   pt_LaTex = pt->AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
