#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signal_rpf2x0_Binningv13_Inputv28_SR_Blind_alpha_max_3.52e-07()
{
//=========Macro generated from canvas: climits/climits
//=========  (Tue Jul  7 21:10:19 2026) by ROOT version 6.30/07
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
   
   Double_t Graph0_fx351[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy351[20] = { 102.3402, 8.363508, 7.354474, 5.768814, 5.291376, 5.044252, 4.905126, 6.727238, 9.269029, 12.08222, 14.78557, 27.12809, 27.88047, 27.04424, 27.56347, 27.30236, 26.1693,
   27.37479, 27.47854, 27.47854 };
   TGraph *graph = new TGraph(20,Graph0_fx351,Graph0_fy351);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0351 = new TH1F("Graph_Graph0351","",100,2.7,1099.7);
   Graph_Graph0351->SetMinimum(0.2);
   Graph_Graph0351->SetMaximum(100000);
   Graph_Graph0351->SetDirectory(nullptr);
   Graph_Graph0351->SetStats(0);
   Graph_Graph0351->SetLineWidth(2);
   Graph_Graph0351->SetMarkerStyle(20);
   Graph_Graph0351->SetMarkerSize(0.9);
   Graph_Graph0351->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0351->GetXaxis()->SetRange(0,91);
   Graph_Graph0351->GetXaxis()->SetLabelFont(42);
   Graph_Graph0351->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0351->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0351->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0351->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0351->GetXaxis()->SetTitleFont(42);
   Graph_Graph0351->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0351->GetYaxis()->SetLabelFont(42);
   Graph_Graph0351->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0351->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0351->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0351->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0351->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0351->GetYaxis()->SetTitleFont(42);
   Graph_Graph0351->GetZaxis()->SetLabelFont(42);
   Graph_Graph0351->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0351->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0351->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0351->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0351->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0351);
   
   graph->Draw("al");
   
   Double_t Graph1_fx352[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph1_fy352[42] = { 263.3536, 22.30594, 21.12988, 17.06116, 15.59377, 14.93766, 14.53641, 20.4565, 28.18569, 36.74017, 44.96066, 82.49234, 84.78023, 82.23738, 83.81629, 83.02227, 79.57681,
   83.24253, 83.55803, 83.55803, 83.55803, 7.100603, 7.100603, 7.100603, 7.073947, 6.804864, 7.054077, 7.123885, 7.003339, 7.189512, 7.023805, 4.175044, 3.473909,
   2.747375, 2.098302, 1.901159, 1.981428, 2.095599, 2.279342, 2.893423, 3.688819, 43.23465 };
   graph = new TGraph(42,Graph1_fx352,Graph1_fy352);
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
   
   TH1F *Graph_Graph1352 = new TH1F("Graph_Graph1352","Graph",100,2.7,1099.7);
   Graph_Graph1352->SetMinimum(1.711043);
   Graph_Graph1352->SetMaximum(289.4988);
   Graph_Graph1352->SetDirectory(nullptr);
   Graph_Graph1352->SetStats(0);
   Graph_Graph1352->SetLineWidth(2);
   Graph_Graph1352->SetMarkerStyle(20);
   Graph_Graph1352->SetMarkerSize(0.9);
   Graph_Graph1352->GetXaxis()->SetLabelFont(42);
   Graph_Graph1352->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1352->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1352->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1352->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1352->GetXaxis()->SetTitleFont(42);
   Graph_Graph1352->GetYaxis()->SetLabelFont(42);
   Graph_Graph1352->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1352->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1352->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1352->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1352->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1352->GetYaxis()->SetTitleFont(42);
   Graph_Graph1352->GetZaxis()->SetLabelFont(42);
   Graph_Graph1352->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1352->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1352->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1352->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1352->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1352);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx353[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph2_fy353[42] = { 167.9571, 13.70932, 12.9865, 10.4326, 9.578931, 9.239235, 9.0445, 13.54376, 18.70133, 24.41077, 29.87306, 54.81011, 56.33024, 54.64071, 55.68977, 55.1622, 52.87295,
   55.30855, 55.51818, 55.51818, 55.51818, 12.67709, 12.67709, 12.67709, 12.63184, 12.1099, 12.60131, 12.7142, 12.48837, 12.85225, 12.52694, 7.165181, 5.942446,
   4.645264, 3.478678, 2.897317, 2.99809, 3.15936, 3.443171, 4.365156, 5.318804, 63.9916 };
   graph = new TGraph(42,Graph2_fx353,Graph2_fy353);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2353 = new TH1F("Graph_Graph2353","Graph",100,2.7,1099.7);
   Graph_Graph2353->SetMinimum(2.607585);
   Graph_Graph2353->SetMaximum(184.4631);
   Graph_Graph2353->SetDirectory(nullptr);
   Graph_Graph2353->SetStats(0);
   Graph_Graph2353->SetLineWidth(2);
   Graph_Graph2353->SetMarkerStyle(20);
   Graph_Graph2353->SetMarkerSize(0.9);
   Graph_Graph2353->GetXaxis()->SetLabelFont(42);
   Graph_Graph2353->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2353->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2353->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2353->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2353->GetXaxis()->SetTitleFont(42);
   Graph_Graph2353->GetYaxis()->SetLabelFont(42);
   Graph_Graph2353->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2353->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2353->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2353->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2353->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2353->GetYaxis()->SetTitleFont(42);
   Graph_Graph2353->GetZaxis()->SetLabelFont(42);
   Graph_Graph2353->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2353->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2353->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2353->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2353->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2353);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx354[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy354[20] = { 102.3402, 8.363508, 7.354474, 5.768814, 5.291376, 5.044252, 4.905126, 6.727238, 9.269029, 12.08222, 14.78557, 27.12809, 27.88047, 27.04424, 27.56347, 27.30236, 26.1693,
   27.37479, 27.47854, 27.47854 };
   graph = new TGraph(20,Graph0_fx354,Graph0_fy354);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0354 = new TH1F("Graph_Graph0354","",100,2.7,1099.7);
   Graph_Graph0354->SetMinimum(0.2);
   Graph_Graph0354->SetMaximum(100000);
   Graph_Graph0354->SetDirectory(nullptr);
   Graph_Graph0354->SetStats(0);
   Graph_Graph0354->SetLineWidth(2);
   Graph_Graph0354->SetMarkerStyle(20);
   Graph_Graph0354->SetMarkerSize(0.9);
   Graph_Graph0354->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0354->GetXaxis()->SetRange(0,91);
   Graph_Graph0354->GetXaxis()->SetLabelFont(42);
   Graph_Graph0354->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0354->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0354->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0354->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0354->GetXaxis()->SetTitleFont(42);
   Graph_Graph0354->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0354->GetYaxis()->SetLabelFont(42);
   Graph_Graph0354->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0354->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0354->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0354->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0354->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0354->GetYaxis()->SetTitleFont(42);
   Graph_Graph0354->GetZaxis()->SetLabelFont(42);
   Graph_Graph0354->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0354->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0354->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0354->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0354->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0354);
   
   graph->Draw("l");
   
   Double_t Graph_fx355[72] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180, 185, 190, 195, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450,
   475, 500, 600, 700, 800, 900, 1000 };
   Double_t Graph_fy355[72] = { 0, 0, 0, 3.045094e-292, 2.401287e-246, 2.548219e-228, 1.061005e-212, 4.900599e-199, 5.558663e-187, 2.872805e-176, 1.10194e-166, 4.634856e-158, 2.931946e-150, 3.612241e-143, 1.073072e-136, 9.182976e-131, 2.628716e-125,
   1.312208e-115, 2.794922e-111, 2.98872e-107, 1.719093e-103, 6.970659e-94, 6.359209e-88, 7.468497e-81, 2.942163e-76, 7.363069e-71, 3.413852e-67, 5.975935e-63, 4.91141e-21, 9.252819e-17, 1.012637e-13, 1.879411e-11, 1.071661e-09,
   2.680185e-08, 3.686155e-07, 3.240918e-06, 9.632302e-05, 0.0003702785, 0.001195941, 0.003347856, 0.008321025, 0.01837137, 0.03738083, 0.126721, 0.348021, 0.8130917, 1.673242, 3.111206, 5.327819,
   8.526557, 12.89877, 15.57836, 18.61157, 22.01412, 25.79933, 50.76165, 85.92645, 130.5344, 183.0217, 241.4541, 303.8504, 368.3828, 433.4783, 497.8526, 560.5043,
   620.6865, 677.871, 871.6491, 1009.015, 1098.367, 1150.807, 1150.807 };
   graph = new TGraph(72,Graph_fx355,Graph_fy355);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph355 = new TH1F("Graph_Graph355","",100,1.44,1099.84);
   Graph_Graph355->SetMinimum(1.265888);
   Graph_Graph355->SetMaximum(1265.888);
   Graph_Graph355->SetDirectory(nullptr);
   Graph_Graph355->SetStats(0);
   Graph_Graph355->SetLineWidth(2);
   Graph_Graph355->SetMarkerStyle(20);
   Graph_Graph355->SetMarkerSize(0.9);
   Graph_Graph355->GetXaxis()->SetLabelFont(42);
   Graph_Graph355->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph355->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph355->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph355->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph355->GetXaxis()->SetTitleFont(42);
   Graph_Graph355->GetYaxis()->SetLabelFont(42);
   Graph_Graph355->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph355->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph355->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph355->GetYaxis()->SetTickLength(0.02);
   Graph_Graph355->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph355->GetYaxis()->SetTitleFont(42);
   Graph_Graph355->GetZaxis()->SetLabelFont(42);
   Graph_Graph355->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph355->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph355->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph355->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph355->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph355);
   
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
   
   Double_t Graph_fx357[72] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180, 185, 190, 195, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450,
   475, 500, 600, 700, 800, 900, 1000 };
   Double_t Graph_fy357[72] = { 0, 0, 0, 3.349603e-292, 2.641416e-246, 2.803041e-228, 1.167106e-212, 5.390659e-199, 6.114529e-187, 3.160086e-176, 1.212134e-166, 5.098342e-158, 3.225141e-150, 3.973465e-143, 1.180379e-136, 1.010127e-130, 2.891588e-125,
   1.443429e-115, 3.074414e-111, 3.287592e-107, 1.891002e-103, 7.667725e-94, 6.99513e-88, 8.215347e-81, 3.236379e-76, 8.099376e-71, 3.755237e-67, 6.573528e-63, 5.402551e-21, 1.01781e-16, 1.113901e-13, 2.067352e-11, 1.178827e-09,
   2.948204e-08, 4.054771e-07, 3.56501e-06, 0.0001059553, 0.0004073064, 0.001315535, 0.003682642, 0.009153128, 0.02020851, 0.04111891, 0.1393931, 0.3828231, 0.8944009, 1.840566, 3.422327, 5.860601,
   9.379213, 14.18865, 17.1362, 20.47273, 24.21553, 28.37926, 55.83782, 94.5191, 143.5878, 201.3239, 265.5995, 334.2354, 405.2211, 476.8261, 547.6379, 616.5547,
   682.7552, 745.6581, 958.814, 1109.917, 1208.204, 1265.888, 1265.888 };
   graph = new TGraph(72,Graph_fx357,Graph_fy357);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph357 = new TH1F("Graph_Graph357","",100,1.44,1099.84);
   Graph_Graph357->SetMinimum(1.392476);
   Graph_Graph357->SetMaximum(1392.476);
   Graph_Graph357->SetDirectory(nullptr);
   Graph_Graph357->SetStats(0);
   Graph_Graph357->SetLineWidth(2);
   Graph_Graph357->SetMarkerStyle(20);
   Graph_Graph357->SetMarkerSize(0.9);
   Graph_Graph357->GetXaxis()->SetLabelFont(42);
   Graph_Graph357->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph357->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph357->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph357->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph357->GetXaxis()->SetTitleFont(42);
   Graph_Graph357->GetYaxis()->SetLabelFont(42);
   Graph_Graph357->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph357->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph357->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph357->GetYaxis()->SetTickLength(0.02);
   Graph_Graph357->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph357->GetYaxis()->SetTitleFont(42);
   Graph_Graph357->GetZaxis()->SetLabelFont(42);
   Graph_Graph357->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph357->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph357->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph357->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph357->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph357);
   
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
   line = new TLine(200.7111,0,200.7111,27.24542);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(200.7061,0,"  200.71 TeV");

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
   pt_LaTex = pt->AddText("#varepsilon = 3.52e-07");
   pt_LaTex = pt->AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
