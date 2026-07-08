#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signal_rpf2x0_Binningv13_Inputv28_SR_Blind_alpha_max_9e-09()
{
//=========Macro generated from canvas: climits/climits
//=========  (Tue Jul  7 21:09:27 2026) by ROOT version 6.30/07
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
   
   Double_t Graph0_fx36[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy36[20] = { 102.3402, 8.363508, 7.354474, 5.768814, 5.291376, 5.044252, 4.905126, 6.727238, 9.269029, 12.08222, 14.78557, 27.12809, 27.88047, 27.04424, 27.56347, 27.30236, 26.1693,
   27.37479, 27.47854, 27.47854 };
   TGraph *graph = new TGraph(20,Graph0_fx36,Graph0_fy36);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph036 = new TH1F("Graph_Graph036","",100,2.7,1099.7);
   Graph_Graph036->SetMinimum(0.2);
   Graph_Graph036->SetMaximum(100000);
   Graph_Graph036->SetDirectory(nullptr);
   Graph_Graph036->SetStats(0);
   Graph_Graph036->SetLineWidth(2);
   Graph_Graph036->SetMarkerStyle(20);
   Graph_Graph036->SetMarkerSize(0.9);
   Graph_Graph036->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph036->GetXaxis()->SetRange(0,91);
   Graph_Graph036->GetXaxis()->SetLabelFont(42);
   Graph_Graph036->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph036->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph036->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph036->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph036->GetXaxis()->SetTitleFont(42);
   Graph_Graph036->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph036->GetYaxis()->SetLabelFont(42);
   Graph_Graph036->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph036->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph036->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph036->GetYaxis()->SetTickLength(0.02);
   Graph_Graph036->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph036->GetYaxis()->SetTitleFont(42);
   Graph_Graph036->GetZaxis()->SetLabelFont(42);
   Graph_Graph036->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph036->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph036->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph036->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph036->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph036);
   
   graph->Draw("al");
   
   Double_t Graph1_fx37[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph1_fy37[42] = { 263.3536, 22.30594, 21.12988, 17.06116, 15.59377, 14.93766, 14.53641, 20.4565, 28.18569, 36.74017, 44.96066, 82.49234, 84.78023, 82.23738, 83.81629, 83.02227, 79.57681,
   83.24253, 83.55803, 83.55803, 83.55803, 7.100603, 7.100603, 7.100603, 7.073947, 6.804864, 7.054077, 7.123885, 7.003339, 7.189512, 7.023805, 4.175044, 3.473909,
   2.747375, 2.098302, 1.901159, 1.981428, 2.095599, 2.279342, 2.893423, 3.688819, 43.23465 };
   graph = new TGraph(42,Graph1_fx37,Graph1_fy37);
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
   
   TH1F *Graph_Graph137 = new TH1F("Graph_Graph137","Graph",100,2.7,1099.7);
   Graph_Graph137->SetMinimum(1.711043);
   Graph_Graph137->SetMaximum(289.4988);
   Graph_Graph137->SetDirectory(nullptr);
   Graph_Graph137->SetStats(0);
   Graph_Graph137->SetLineWidth(2);
   Graph_Graph137->SetMarkerStyle(20);
   Graph_Graph137->SetMarkerSize(0.9);
   Graph_Graph137->GetXaxis()->SetLabelFont(42);
   Graph_Graph137->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph137->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph137->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph137->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph137->GetXaxis()->SetTitleFont(42);
   Graph_Graph137->GetYaxis()->SetLabelFont(42);
   Graph_Graph137->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph137->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph137->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph137->GetYaxis()->SetTickLength(0.02);
   Graph_Graph137->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph137->GetYaxis()->SetTitleFont(42);
   Graph_Graph137->GetZaxis()->SetLabelFont(42);
   Graph_Graph137->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph137->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph137->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph137->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph137->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph137);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx38[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph2_fy38[42] = { 167.9571, 13.70932, 12.9865, 10.4326, 9.578931, 9.239235, 9.0445, 13.54376, 18.70133, 24.41077, 29.87306, 54.81011, 56.33024, 54.64071, 55.68977, 55.1622, 52.87295,
   55.30855, 55.51818, 55.51818, 55.51818, 12.67709, 12.67709, 12.67709, 12.63184, 12.1099, 12.60131, 12.7142, 12.48837, 12.85225, 12.52694, 7.165181, 5.942446,
   4.645264, 3.478678, 2.897317, 2.99809, 3.15936, 3.443171, 4.365156, 5.318804, 63.9916 };
   graph = new TGraph(42,Graph2_fx38,Graph2_fy38);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph238 = new TH1F("Graph_Graph238","Graph",100,2.7,1099.7);
   Graph_Graph238->SetMinimum(2.607585);
   Graph_Graph238->SetMaximum(184.4631);
   Graph_Graph238->SetDirectory(nullptr);
   Graph_Graph238->SetStats(0);
   Graph_Graph238->SetLineWidth(2);
   Graph_Graph238->SetMarkerStyle(20);
   Graph_Graph238->SetMarkerSize(0.9);
   Graph_Graph238->GetXaxis()->SetLabelFont(42);
   Graph_Graph238->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph238->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph238->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph238->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph238->GetXaxis()->SetTitleFont(42);
   Graph_Graph238->GetYaxis()->SetLabelFont(42);
   Graph_Graph238->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph238->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph238->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph238->GetYaxis()->SetTickLength(0.02);
   Graph_Graph238->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph238->GetYaxis()->SetTitleFont(42);
   Graph_Graph238->GetZaxis()->SetLabelFont(42);
   Graph_Graph238->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph238->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph238->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph238->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph238->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph238);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx39[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy39[20] = { 102.3402, 8.363508, 7.354474, 5.768814, 5.291376, 5.044252, 4.905126, 6.727238, 9.269029, 12.08222, 14.78557, 27.12809, 27.88047, 27.04424, 27.56347, 27.30236, 26.1693,
   27.37479, 27.47854, 27.47854 };
   graph = new TGraph(20,Graph0_fx39,Graph0_fy39);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph039 = new TH1F("Graph_Graph039","",100,2.7,1099.7);
   Graph_Graph039->SetMinimum(0.2);
   Graph_Graph039->SetMaximum(100000);
   Graph_Graph039->SetDirectory(nullptr);
   Graph_Graph039->SetStats(0);
   Graph_Graph039->SetLineWidth(2);
   Graph_Graph039->SetMarkerStyle(20);
   Graph_Graph039->SetMarkerSize(0.9);
   Graph_Graph039->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph039->GetXaxis()->SetRange(0,91);
   Graph_Graph039->GetXaxis()->SetLabelFont(42);
   Graph_Graph039->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph039->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph039->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph039->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph039->GetXaxis()->SetTitleFont(42);
   Graph_Graph039->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph039->GetYaxis()->SetLabelFont(42);
   Graph_Graph039->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph039->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph039->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph039->GetYaxis()->SetTickLength(0.02);
   Graph_Graph039->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph039->GetYaxis()->SetTitleFont(42);
   Graph_Graph039->GetZaxis()->SetLabelFont(42);
   Graph_Graph039->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph039->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph039->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph039->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph039->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph039);
   
   graph->Draw("l");
   
   Double_t Graph_fx40[72] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180, 185, 190, 195, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450,
   475, 500, 600, 700, 800, 900, 1000 };
   Double_t Graph_fy40[72] = { 10.57611, 9.61387, 8.771038, 8.034563, 6.824239, 6.325354, 5.883518, 5.490417, 5.139106, 4.823787, 4.539608, 4.282497, 4.049022, 3.836277, 3.641792, 3.463455, 3.299457,
   3.00844, 2.878896, 2.758579, 2.646593, 2.398868, 2.187023, 2.006313, 1.848897, 1.71221, 1.591388, 1.484969, 0.4126597, 0.3224005, 0.2614488, 0.217928, 0.1855262,
   0.1606045, 0.14093, 0.125063, 0.1011804, 0.09201466, 0.08418901, 0.0774416, 0.07157322, 0.06520878, 0.05981983, 0.05122279, 0.04469259, 0.03957292, 0.03545208, 0.03206216, 0.02922281,
   0.02680879, 0.02473061, 0.02379625, 0.02292266, 0.02210413, 0.02133567, 0.01810693, 0.01564174, 0.0137041, 0.01214603, 0.0108697, 0.009807824, 0.008912604, 0.008149219, 0.007491725, 0.006920432,
   0.006420144, 0.005978962, 0.004642022, 0.003747603, 0.003113304, 0.0026435, 0.0026435 };
   graph = new TGraph(72,Graph_fx40,Graph_fy40);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph40 = new TH1F("Graph_Graph40","",100,1.44,1099.84);
   Graph_Graph40->SetMinimum(0.00237915);
   Graph_Graph40->SetMaximum(11.63346);
   Graph_Graph40->SetDirectory(nullptr);
   Graph_Graph40->SetStats(0);
   Graph_Graph40->SetLineWidth(2);
   Graph_Graph40->SetMarkerStyle(20);
   Graph_Graph40->SetMarkerSize(0.9);
   Graph_Graph40->GetXaxis()->SetLabelFont(42);
   Graph_Graph40->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph40->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph40->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph40->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph40->GetXaxis()->SetTitleFont(42);
   Graph_Graph40->GetYaxis()->SetLabelFont(42);
   Graph_Graph40->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph40->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph40->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph40->GetYaxis()->SetTickLength(0.02);
   Graph_Graph40->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph40->GetYaxis()->SetTitleFont(42);
   Graph_Graph40->GetZaxis()->SetLabelFont(42);
   Graph_Graph40->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph40->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph40->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph40->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph40->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph40);
   
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
   
   Double_t Graph_fx42[72] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180, 185, 190, 195, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450,
   475, 500, 600, 700, 800, 900, 1000 };
   Double_t Graph_fy42[72] = { 11.63372, 10.57526, 9.648142, 8.838019, 7.506663, 6.957889, 6.47187, 6.039459, 5.653017, 5.306166, 4.993569, 4.710747, 4.453924, 4.219905, 4.005971, 3.809801, 3.629403,
   3.309284, 3.166786, 3.034437, 2.911252, 2.638755, 2.405725, 2.206944, 2.033787, 1.883431, 1.750527, 1.633466, 0.4539257, 0.3546405, 0.2875937, 0.2397208, 0.2040788,
   0.176665, 0.155023, 0.1375693, 0.1112984, 0.1012161, 0.09260791, 0.08518576, 0.07873054, 0.07172966, 0.06580181, 0.05634507, 0.04916185, 0.04353021, 0.03899729, 0.03526838, 0.03214509,
   0.02948967, 0.02720367, 0.02617588, 0.02521493, 0.02431454, 0.02346924, 0.01991762, 0.01720591, 0.01507451, 0.01336063, 0.01195667, 0.01078861, 0.009803864, 0.008964141, 0.008240898, 0.007612475,
   0.007062158, 0.006576858, 0.005106224, 0.004122363, 0.003424634, 0.00290785, 0.00290785 };
   graph = new TGraph(72,Graph_fx42,Graph_fy42);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph42 = new TH1F("Graph_Graph42","",100,1.44,1099.84);
   Graph_Graph42->SetMinimum(0.002617065);
   Graph_Graph42->SetMaximum(12.7968);
   Graph_Graph42->SetDirectory(nullptr);
   Graph_Graph42->SetStats(0);
   Graph_Graph42->SetLineWidth(2);
   Graph_Graph42->SetMarkerStyle(20);
   Graph_Graph42->SetMarkerSize(0.9);
   Graph_Graph42->GetXaxis()->SetLabelFont(42);
   Graph_Graph42->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph42->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph42->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph42->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph42->GetXaxis()->SetTitleFont(42);
   Graph_Graph42->GetYaxis()->SetLabelFont(42);
   Graph_Graph42->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph42->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph42->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph42->GetYaxis()->SetTickLength(0.02);
   Graph_Graph42->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph42->GetYaxis()->SetTitleFont(42);
   Graph_Graph42->GetZaxis()->SetLabelFont(42);
   Graph_Graph42->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph42->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph42->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph42->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph42->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph42);
   
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
   pt_LaTex = pt->AddText("#varepsilon = 9e-09");
   pt_LaTex = pt->AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
