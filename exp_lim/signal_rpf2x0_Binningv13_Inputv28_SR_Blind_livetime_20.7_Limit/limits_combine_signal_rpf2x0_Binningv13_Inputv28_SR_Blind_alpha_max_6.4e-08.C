#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signal_rpf2x0_Binningv13_Inputv28_SR_Blind_alpha_max_6.4e-08()
{
//=========Macro generated from canvas: climits/climits
//=========  (Tue Jul  7 21:09:47 2026) by ROOT version 6.30/07
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
   
   Double_t Graph0_fx169[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy169[20] = { 102.3402, 8.363508, 7.354474, 5.768814, 5.291376, 5.044252, 4.905126, 6.727238, 9.269029, 12.08222, 14.78557, 27.12809, 27.88047, 27.04424, 27.56347, 27.30236, 26.1693,
   27.37479, 27.47854, 27.47854 };
   TGraph *graph = new TGraph(20,Graph0_fx169,Graph0_fy169);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0169 = new TH1F("Graph_Graph0169","",100,2.7,1099.7);
   Graph_Graph0169->SetMinimum(0.2);
   Graph_Graph0169->SetMaximum(100000);
   Graph_Graph0169->SetDirectory(nullptr);
   Graph_Graph0169->SetStats(0);
   Graph_Graph0169->SetLineWidth(2);
   Graph_Graph0169->SetMarkerStyle(20);
   Graph_Graph0169->SetMarkerSize(0.9);
   Graph_Graph0169->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0169->GetXaxis()->SetRange(0,91);
   Graph_Graph0169->GetXaxis()->SetLabelFont(42);
   Graph_Graph0169->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0169->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0169->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0169->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0169->GetXaxis()->SetTitleFont(42);
   Graph_Graph0169->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0169->GetYaxis()->SetLabelFont(42);
   Graph_Graph0169->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0169->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0169->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0169->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0169->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0169->GetYaxis()->SetTitleFont(42);
   Graph_Graph0169->GetZaxis()->SetLabelFont(42);
   Graph_Graph0169->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0169->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0169->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0169->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0169->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0169);
   
   graph->Draw("al");
   
   Double_t Graph1_fx170[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph1_fy170[42] = { 263.3536, 22.30594, 21.12988, 17.06116, 15.59377, 14.93766, 14.53641, 20.4565, 28.18569, 36.74017, 44.96066, 82.49234, 84.78023, 82.23738, 83.81629, 83.02227, 79.57681,
   83.24253, 83.55803, 83.55803, 83.55803, 7.100603, 7.100603, 7.100603, 7.073947, 6.804864, 7.054077, 7.123885, 7.003339, 7.189512, 7.023805, 4.175044, 3.473909,
   2.747375, 2.098302, 1.901159, 1.981428, 2.095599, 2.279342, 2.893423, 3.688819, 43.23465 };
   graph = new TGraph(42,Graph1_fx170,Graph1_fy170);
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
   
   TH1F *Graph_Graph1170 = new TH1F("Graph_Graph1170","Graph",100,2.7,1099.7);
   Graph_Graph1170->SetMinimum(1.711043);
   Graph_Graph1170->SetMaximum(289.4988);
   Graph_Graph1170->SetDirectory(nullptr);
   Graph_Graph1170->SetStats(0);
   Graph_Graph1170->SetLineWidth(2);
   Graph_Graph1170->SetMarkerStyle(20);
   Graph_Graph1170->SetMarkerSize(0.9);
   Graph_Graph1170->GetXaxis()->SetLabelFont(42);
   Graph_Graph1170->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1170->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1170->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1170->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1170->GetXaxis()->SetTitleFont(42);
   Graph_Graph1170->GetYaxis()->SetLabelFont(42);
   Graph_Graph1170->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1170->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1170->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1170->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1170->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1170->GetYaxis()->SetTitleFont(42);
   Graph_Graph1170->GetZaxis()->SetLabelFont(42);
   Graph_Graph1170->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1170->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1170->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1170->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1170->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1170);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx171[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph2_fy171[42] = { 167.9571, 13.70932, 12.9865, 10.4326, 9.578931, 9.239235, 9.0445, 13.54376, 18.70133, 24.41077, 29.87306, 54.81011, 56.33024, 54.64071, 55.68977, 55.1622, 52.87295,
   55.30855, 55.51818, 55.51818, 55.51818, 12.67709, 12.67709, 12.67709, 12.63184, 12.1099, 12.60131, 12.7142, 12.48837, 12.85225, 12.52694, 7.165181, 5.942446,
   4.645264, 3.478678, 2.897317, 2.99809, 3.15936, 3.443171, 4.365156, 5.318804, 63.9916 };
   graph = new TGraph(42,Graph2_fx171,Graph2_fy171);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2171 = new TH1F("Graph_Graph2171","Graph",100,2.7,1099.7);
   Graph_Graph2171->SetMinimum(2.607585);
   Graph_Graph2171->SetMaximum(184.4631);
   Graph_Graph2171->SetDirectory(nullptr);
   Graph_Graph2171->SetStats(0);
   Graph_Graph2171->SetLineWidth(2);
   Graph_Graph2171->SetMarkerStyle(20);
   Graph_Graph2171->SetMarkerSize(0.9);
   Graph_Graph2171->GetXaxis()->SetLabelFont(42);
   Graph_Graph2171->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2171->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2171->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2171->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2171->GetXaxis()->SetTitleFont(42);
   Graph_Graph2171->GetYaxis()->SetLabelFont(42);
   Graph_Graph2171->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2171->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2171->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2171->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2171->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2171->GetYaxis()->SetTitleFont(42);
   Graph_Graph2171->GetZaxis()->SetLabelFont(42);
   Graph_Graph2171->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2171->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2171->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2171->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2171->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2171);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx172[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy172[20] = { 102.3402, 8.363508, 7.354474, 5.768814, 5.291376, 5.044252, 4.905126, 6.727238, 9.269029, 12.08222, 14.78557, 27.12809, 27.88047, 27.04424, 27.56347, 27.30236, 26.1693,
   27.37479, 27.47854, 27.47854 };
   graph = new TGraph(20,Graph0_fx172,Graph0_fy172);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0172 = new TH1F("Graph_Graph0172","",100,2.7,1099.7);
   Graph_Graph0172->SetMinimum(0.2);
   Graph_Graph0172->SetMaximum(100000);
   Graph_Graph0172->SetDirectory(nullptr);
   Graph_Graph0172->SetStats(0);
   Graph_Graph0172->SetLineWidth(2);
   Graph_Graph0172->SetMarkerStyle(20);
   Graph_Graph0172->SetMarkerSize(0.9);
   Graph_Graph0172->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0172->GetXaxis()->SetRange(0,91);
   Graph_Graph0172->GetXaxis()->SetLabelFont(42);
   Graph_Graph0172->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0172->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0172->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0172->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0172->GetXaxis()->SetTitleFont(42);
   Graph_Graph0172->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0172->GetYaxis()->SetLabelFont(42);
   Graph_Graph0172->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0172->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0172->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0172->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0172->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0172->GetYaxis()->SetTitleFont(42);
   Graph_Graph0172->GetZaxis()->SetLabelFont(42);
   Graph_Graph0172->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0172->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0172->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0172->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0172->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0172);
   
   graph->Draw("l");
   
   Double_t Graph_fx173[72] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180, 185, 190, 195, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450,
   475, 500, 600, 700, 800, 900, 1000 };
   Double_t Graph_fy173[72] = { 1.289871e-09, 3.542325e-08, 4.938296e-07, 4.210434e-06, 0.000110647, 0.0003949408, 0.001181874, 0.003066128, 0.00707428, 0.01480669, 0.02855637, 0.05138484, 0.08714279, 0.1404323, 0.2165157, 0.3211807, 0.4605775,
   0.8689028, 1.150335, 1.491182, 1.896833, 3.234456, 5.042919, 7.391519, 10.24134, 13.61249, 17.42825, 21.6728, 148.1713, 160.5698, 164.4948, 163.3811, 159.4046,
   153.8929, 147.6447, 141.136, 128.3377, 122.2966, 116.5667, 111.1645, 106.0897, 99.47027, 93.63766, 83.83886, 75.92154, 69.37303, 63.84774, 59.108, 54.98655,
   51.36271, 48.14721, 46.6708, 45.27241, 43.94591, 42.68585, 37.2275, 32.86829, 29.31523, 26.37157, 23.89927, 21.79837, 19.99475, 18.43231, 17.0679, 15.86783,
   14.80547, 13.85948, 10.93788, 8.93417, 7.487354, 6.400979, 6.400979 };
   graph = new TGraph(72,Graph_fx173,Graph_fy173);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph173 = new TH1F("Graph_Graph173","",100,1.44,1099.84);
   Graph_Graph173->SetMinimum(1.160884e-09);
   Graph_Graph173->SetMaximum(180.9443);
   Graph_Graph173->SetDirectory(nullptr);
   Graph_Graph173->SetStats(0);
   Graph_Graph173->SetLineWidth(2);
   Graph_Graph173->SetMarkerStyle(20);
   Graph_Graph173->SetMarkerSize(0.9);
   Graph_Graph173->GetXaxis()->SetLabelFont(42);
   Graph_Graph173->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph173->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph173->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph173->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph173->GetXaxis()->SetTitleFont(42);
   Graph_Graph173->GetYaxis()->SetLabelFont(42);
   Graph_Graph173->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph173->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph173->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph173->GetYaxis()->SetTickLength(0.02);
   Graph_Graph173->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph173->GetYaxis()->SetTitleFont(42);
   Graph_Graph173->GetZaxis()->SetLabelFont(42);
   Graph_Graph173->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph173->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph173->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph173->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph173->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph173);
   
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
   
   Double_t Graph_fx175[72] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180, 185, 190, 195, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450,
   475, 500, 600, 700, 800, 900, 1000 };
   Double_t Graph_fy175[72] = { 1.418858e-09, 3.896557e-08, 5.432126e-07, 4.631477e-06, 0.0001217117, 0.0004344349, 0.001300061, 0.003372741, 0.007781708, 0.01628736, 0.03141201, 0.05652332, 0.09585707, 0.1544755, 0.2381673, 0.3532988, 0.5066352,
   0.9557931, 1.265369, 1.6403, 2.086516, 3.557902, 5.547211, 8.130671, 11.26547, 14.97374, 19.17107, 23.84008, 162.9884, 176.6268, 180.9443, 179.7192, 175.3451,
   169.2822, 162.4092, 155.2496, 141.1715, 134.5263, 128.2234, 122.281, 116.6987, 109.4173, 103.0014, 92.22275, 83.51369, 76.31033, 70.23251, 65.0188, 60.48521,
   56.49898, 52.96193, 51.33788, 49.79965, 48.3405, 46.95444, 40.95025, 36.15512, 32.24675, 29.00873, 26.2892, 23.97821, 21.99423, 20.27554, 18.77469, 17.45461,
   16.28602, 15.24543, 12.03167, 9.827587, 8.236089, 7.041077, 7.041077 };
   graph = new TGraph(72,Graph_fx175,Graph_fy175);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph175 = new TH1F("Graph_Graph175","",100,1.44,1099.84);
   Graph_Graph175->SetMinimum(1.276972e-09);
   Graph_Graph175->SetMaximum(199.0387);
   Graph_Graph175->SetDirectory(nullptr);
   Graph_Graph175->SetStats(0);
   Graph_Graph175->SetLineWidth(2);
   Graph_Graph175->SetMarkerStyle(20);
   Graph_Graph175->SetMarkerSize(0.9);
   Graph_Graph175->GetXaxis()->SetLabelFont(42);
   Graph_Graph175->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph175->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph175->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph175->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph175->GetXaxis()->SetTitleFont(42);
   Graph_Graph175->GetYaxis()->SetLabelFont(42);
   Graph_Graph175->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph175->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph175->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph175->GetYaxis()->SetTickLength(0.02);
   Graph_Graph175->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph175->GetYaxis()->SetTitleFont(42);
   Graph_Graph175->GetZaxis()->SetLabelFont(42);
   Graph_Graph175->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph175->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph175->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph175->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph175->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph175);
   
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
   line = new TLine(7.05919,0,7.05919,5.276417);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(7.05419,0,"  7.06 TeV");

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
   pt_LaTex = pt->AddText("#varepsilon = 6.4e-08");
   pt_LaTex = pt->AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
