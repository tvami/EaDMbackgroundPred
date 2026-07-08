#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signal_rpf2x0_Binningv13_Inputv28_SR_Blind_alpha_max_1.7e-08()
{
//=========Macro generated from canvas: climits/climits
//=========  (Tue Jul  7 21:09:35 2026) by ROOT version 6.30/07
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
   
   Double_t Graph0_fx92[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy92[20] = { 102.3402, 8.363508, 7.354474, 5.768814, 5.291376, 5.044252, 4.905126, 6.727238, 9.269029, 12.08222, 14.78557, 27.12809, 27.88047, 27.04424, 27.56347, 27.30236, 26.1693,
   27.37479, 27.47854, 27.47854 };
   TGraph *graph = new TGraph(20,Graph0_fx92,Graph0_fy92);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph092 = new TH1F("Graph_Graph092","",100,2.7,1099.7);
   Graph_Graph092->SetMinimum(0.2);
   Graph_Graph092->SetMaximum(100000);
   Graph_Graph092->SetDirectory(nullptr);
   Graph_Graph092->SetStats(0);
   Graph_Graph092->SetLineWidth(2);
   Graph_Graph092->SetMarkerStyle(20);
   Graph_Graph092->SetMarkerSize(0.9);
   Graph_Graph092->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph092->GetXaxis()->SetRange(0,91);
   Graph_Graph092->GetXaxis()->SetLabelFont(42);
   Graph_Graph092->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph092->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph092->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph092->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph092->GetXaxis()->SetTitleFont(42);
   Graph_Graph092->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph092->GetYaxis()->SetLabelFont(42);
   Graph_Graph092->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph092->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph092->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph092->GetYaxis()->SetTickLength(0.02);
   Graph_Graph092->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph092->GetYaxis()->SetTitleFont(42);
   Graph_Graph092->GetZaxis()->SetLabelFont(42);
   Graph_Graph092->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph092->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph092->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph092->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph092->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph092);
   
   graph->Draw("al");
   
   Double_t Graph1_fx93[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph1_fy93[42] = { 263.3536, 22.30594, 21.12988, 17.06116, 15.59377, 14.93766, 14.53641, 20.4565, 28.18569, 36.74017, 44.96066, 82.49234, 84.78023, 82.23738, 83.81629, 83.02227, 79.57681,
   83.24253, 83.55803, 83.55803, 83.55803, 7.100603, 7.100603, 7.100603, 7.073947, 6.804864, 7.054077, 7.123885, 7.003339, 7.189512, 7.023805, 4.175044, 3.473909,
   2.747375, 2.098302, 1.901159, 1.981428, 2.095599, 2.279342, 2.893423, 3.688819, 43.23465 };
   graph = new TGraph(42,Graph1_fx93,Graph1_fy93);
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
   
   TH1F *Graph_Graph193 = new TH1F("Graph_Graph193","Graph",100,2.7,1099.7);
   Graph_Graph193->SetMinimum(1.711043);
   Graph_Graph193->SetMaximum(289.4988);
   Graph_Graph193->SetDirectory(nullptr);
   Graph_Graph193->SetStats(0);
   Graph_Graph193->SetLineWidth(2);
   Graph_Graph193->SetMarkerStyle(20);
   Graph_Graph193->SetMarkerSize(0.9);
   Graph_Graph193->GetXaxis()->SetLabelFont(42);
   Graph_Graph193->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph193->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph193->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph193->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph193->GetXaxis()->SetTitleFont(42);
   Graph_Graph193->GetYaxis()->SetLabelFont(42);
   Graph_Graph193->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph193->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph193->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph193->GetYaxis()->SetTickLength(0.02);
   Graph_Graph193->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph193->GetYaxis()->SetTitleFont(42);
   Graph_Graph193->GetZaxis()->SetLabelFont(42);
   Graph_Graph193->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph193->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph193->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph193->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph193->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph193);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx94[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph2_fy94[42] = { 167.9571, 13.70932, 12.9865, 10.4326, 9.578931, 9.239235, 9.0445, 13.54376, 18.70133, 24.41077, 29.87306, 54.81011, 56.33024, 54.64071, 55.68977, 55.1622, 52.87295,
   55.30855, 55.51818, 55.51818, 55.51818, 12.67709, 12.67709, 12.67709, 12.63184, 12.1099, 12.60131, 12.7142, 12.48837, 12.85225, 12.52694, 7.165181, 5.942446,
   4.645264, 3.478678, 2.897317, 2.99809, 3.15936, 3.443171, 4.365156, 5.318804, 63.9916 };
   graph = new TGraph(42,Graph2_fx94,Graph2_fy94);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph294 = new TH1F("Graph_Graph294","Graph",100,2.7,1099.7);
   Graph_Graph294->SetMinimum(2.607585);
   Graph_Graph294->SetMaximum(184.4631);
   Graph_Graph294->SetDirectory(nullptr);
   Graph_Graph294->SetStats(0);
   Graph_Graph294->SetLineWidth(2);
   Graph_Graph294->SetMarkerStyle(20);
   Graph_Graph294->SetMarkerSize(0.9);
   Graph_Graph294->GetXaxis()->SetLabelFont(42);
   Graph_Graph294->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph294->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph294->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph294->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph294->GetXaxis()->SetTitleFont(42);
   Graph_Graph294->GetYaxis()->SetLabelFont(42);
   Graph_Graph294->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph294->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph294->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph294->GetYaxis()->SetTickLength(0.02);
   Graph_Graph294->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph294->GetYaxis()->SetTitleFont(42);
   Graph_Graph294->GetZaxis()->SetLabelFont(42);
   Graph_Graph294->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph294->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph294->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph294->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph294->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph294);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx95[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy95[20] = { 102.3402, 8.363508, 7.354474, 5.768814, 5.291376, 5.044252, 4.905126, 6.727238, 9.269029, 12.08222, 14.78557, 27.12809, 27.88047, 27.04424, 27.56347, 27.30236, 26.1693,
   27.37479, 27.47854, 27.47854 };
   graph = new TGraph(20,Graph0_fx95,Graph0_fy95);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph095 = new TH1F("Graph_Graph095","",100,2.7,1099.7);
   Graph_Graph095->SetMinimum(0.2);
   Graph_Graph095->SetMaximum(100000);
   Graph_Graph095->SetDirectory(nullptr);
   Graph_Graph095->SetStats(0);
   Graph_Graph095->SetLineWidth(2);
   Graph_Graph095->SetMarkerStyle(20);
   Graph_Graph095->SetMarkerSize(0.9);
   Graph_Graph095->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph095->GetXaxis()->SetRange(0,91);
   Graph_Graph095->GetXaxis()->SetLabelFont(42);
   Graph_Graph095->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph095->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph095->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph095->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph095->GetXaxis()->SetTitleFont(42);
   Graph_Graph095->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph095->GetYaxis()->SetLabelFont(42);
   Graph_Graph095->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph095->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph095->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph095->GetYaxis()->SetTickLength(0.02);
   Graph_Graph095->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph095->GetYaxis()->SetTitleFont(42);
   Graph_Graph095->GetZaxis()->SetLabelFont(42);
   Graph_Graph095->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph095->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph095->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph095->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph095->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph095);
   
   graph->Draw("l");
   
   Double_t Graph_fx96[72] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180, 185, 190, 195, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450,
   475, 500, 600, 700, 800, 900, 1000 };
   Double_t Graph_fy96[72] = { 27.48021, 29.80394, 31.31637, 32.20135, 32.67259, 32.47503, 32.09169, 31.57659, 30.9703, 30.30321, 29.59799, 28.87155, 28.1364, 27.40177, 26.67442, 25.95921, 25.25957,
   23.91572, 23.27401, 22.65322, 22.05351, 20.64768, 19.3613, 18.19456, 17.12822, 16.15985, 15.27255, 14.46381, 4.745143, 3.770634, 3.09502, 2.603356, 2.231993,
   1.943118, 1.712981, 1.525987, 1.242075, 1.132296, 1.038194, 0.9567737, 0.8857419, 0.8081807, 0.7423842, 0.637163, 0.5570055, 0.4940033, 0.44318, 0.4012887, 0.3661392,
   0.3362075, 0.3104031, 0.2987896, 0.2879248, 0.2777387, 0.2681704, 0.2279098, 0.1971033, 0.1728466, 0.1533131, 0.1372922, 0.1239491, 0.1126901, 0.1030816, 0.09480022, 0.08760019,
   0.08129161, 0.07572566, 0.05884269, 0.04753372, 0.03950635, 0.0335566, 0.0335566 };
   graph = new TGraph(72,Graph_fx96,Graph_fy96);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph96 = new TH1F("Graph_Graph96","",100,1.44,1099.84);
   Graph_Graph96->SetMinimum(0.03020094);
   Graph_Graph96->SetMaximum(35.93649);
   Graph_Graph96->SetDirectory(nullptr);
   Graph_Graph96->SetStats(0);
   Graph_Graph96->SetLineWidth(2);
   Graph_Graph96->SetMarkerStyle(20);
   Graph_Graph96->SetMarkerSize(0.9);
   Graph_Graph96->GetXaxis()->SetLabelFont(42);
   Graph_Graph96->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph96->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph96->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph96->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph96->GetXaxis()->SetTitleFont(42);
   Graph_Graph96->GetYaxis()->SetLabelFont(42);
   Graph_Graph96->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph96->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph96->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph96->GetYaxis()->SetTickLength(0.02);
   Graph_Graph96->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph96->GetYaxis()->SetTitleFont(42);
   Graph_Graph96->GetZaxis()->SetLabelFont(42);
   Graph_Graph96->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph96->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph96->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph96->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph96->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph96);
   
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
   
   Double_t Graph_fx98[72] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180, 185, 190, 195, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450,
   475, 500, 600, 700, 800, 900, 1000 };
   Double_t Graph_fy98[72] = { 30.22823, 32.78433, 34.44801, 35.42149, 35.93985, 35.72253, 35.30086, 34.73425, 34.06733, 33.33353, 32.55779, 31.75871, 30.95004, 30.14195, 29.34186, 28.55513, 27.78553,
   26.30729, 25.60141, 24.91854, 24.25886, 22.71245, 21.29743, 20.01402, 18.84104, 17.77584, 16.79981, 15.91019, 5.219657, 4.147697, 3.404522, 2.863692, 2.455192,
   2.13743, 1.884279, 1.678586, 1.366283, 1.245526, 1.142013, 1.052451, 0.9743161, 0.8889988, 0.8166226, 0.7008793, 0.6127061, 0.5434036, 0.487498, 0.4414176, 0.4027531,
   0.3698283, 0.3414434, 0.3286686, 0.3167173, 0.3055126, 0.2949874, 0.2507008, 0.2168136, 0.1901313, 0.1686444, 0.1510214, 0.136344, 0.1239591, 0.1133898, 0.1042802, 0.09636021,
   0.08942077, 0.08329823, 0.06472696, 0.05228709, 0.04345699, 0.03691226, 0.03691226 };
   graph = new TGraph(72,Graph_fx98,Graph_fy98);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph98 = new TH1F("Graph_Graph98","",100,1.44,1099.84);
   Graph_Graph98->SetMinimum(0.03322103);
   Graph_Graph98->SetMaximum(39.53014);
   Graph_Graph98->SetDirectory(nullptr);
   Graph_Graph98->SetStats(0);
   Graph_Graph98->SetLineWidth(2);
   Graph_Graph98->SetMarkerStyle(20);
   Graph_Graph98->SetMarkerSize(0.9);
   Graph_Graph98->GetXaxis()->SetLabelFont(42);
   Graph_Graph98->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph98->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph98->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph98->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph98->GetXaxis()->SetTitleFont(42);
   Graph_Graph98->GetYaxis()->SetLabelFont(42);
   Graph_Graph98->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph98->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph98->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph98->GetYaxis()->SetTickLength(0.02);
   Graph_Graph98->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph98->GetYaxis()->SetTitleFont(42);
   Graph_Graph98->GetZaxis()->SetLabelFont(42);
   Graph_Graph98->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph98->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph98->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph98->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph98->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph98);
   
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
   line = new TLine(3.478521,0,3.478521,30.873);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(3.473521,0,"  3.48 TeV");

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
   pt_LaTex = pt->AddText("#varepsilon = 1.7e-08");
   pt_LaTex = pt->AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
