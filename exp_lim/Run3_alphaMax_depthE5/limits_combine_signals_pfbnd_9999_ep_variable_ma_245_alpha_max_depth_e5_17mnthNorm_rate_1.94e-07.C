#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_depth_e5_17mnthNorm_rate_1.94e-07()
{
//=========Macro generated from canvas: climits/climits
//=========  (Tue Feb  3 11:48:00 2026) by ROOT version 6.30/07
   TCanvas *climits = new TCanvas("climits", "climits",0,0,700,600);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   climits->SetHighLightColor(2);
   climits->Range(-17.55475,-1.838764,106.0703,5.759863);
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
   
   Double_t Graph0_fx260[16] = { 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 20, 30, 40, 50, 60, 70, 80, 90 };
   Double_t Graph0_fy260[16] = { 6.914062, 5.519727, 4.955078, 4.229102, 4.183008, 4.079297, 4.067773, 4.033203, 5.485156, 7.052344, 8.85, 10.41719, 12.03047, 13.82812, 16.31719, 17.7 };
   TGraph *graph = new TGraph(16,Graph0_fx260,Graph0_fy260);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0260 = new TH1F("Graph_Graph0260","",100,0,98.9);
   Graph_Graph0260->SetMinimum(0.2);
   Graph_Graph0260->SetMaximum(100000);
   Graph_Graph0260->SetDirectory(nullptr);
   Graph_Graph0260->SetStats(0);
   Graph_Graph0260->SetLineWidth(2);
   Graph_Graph0260->SetMarkerStyle(20);
   Graph_Graph0260->SetMarkerSize(0.9);
   Graph_Graph0260->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0260->GetXaxis()->SetRange(2,101);
   Graph_Graph0260->GetXaxis()->SetLabelFont(42);
   Graph_Graph0260->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0260->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0260->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0260->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0260->GetXaxis()->SetTitleFont(42);
   Graph_Graph0260->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0260->GetYaxis()->SetLabelFont(42);
   Graph_Graph0260->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0260->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0260->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0260->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0260->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0260->GetYaxis()->SetTitleFont(42);
   Graph_Graph0260->GetZaxis()->SetLabelFont(42);
   Graph_Graph0260->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0260->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0260->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0260->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0260->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0260);
   
   graph->Draw("al");
   
   Double_t Graph1_fx261[34] = { 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 20, 30, 40, 50, 60, 70, 80, 90, 90,
   90, 90, 80, 70, 60, 50, 40, 30, 20, 4.5, 4, 3.5, 3, 2.5, 2, 1.5,
   1 };
   Double_t Graph1_fy261[34] = { 14.91576, 12.75073, 11.69612, 10.73249, 10.59214, 10.87939, 10.89486, 11.01324, 16.67951, 21.44508, 26.91148, 31.67705, 36.58279, 42.04918, 49.61804, 53.82296, 53.82296,
   6.360938, 6.360938, 5.863989, 4.969482, 4.32345, 3.743677, 3.215039, 2.561984, 2.014081, 1.717262, 1.779651, 1.784692, 1.895425, 1.916312, 2.38076, 2.652056,
   3.511047 };
   graph = new TGraph(34,Graph1_fx261,Graph1_fy261);
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
   
   TH1F *Graph_Graph1261 = new TH1F("Graph_Graph1261","Graph",100,0,98.9);
   Graph_Graph1261->SetMinimum(1.545536);
   Graph_Graph1261->SetMaximum(59.03352);
   Graph_Graph1261->SetDirectory(nullptr);
   Graph_Graph1261->SetStats(0);
   Graph_Graph1261->SetLineWidth(2);
   Graph_Graph1261->SetMarkerStyle(20);
   Graph_Graph1261->SetMarkerSize(0.9);
   Graph_Graph1261->GetXaxis()->SetLabelFont(42);
   Graph_Graph1261->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1261->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1261->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1261->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1261->GetXaxis()->SetTitleFont(42);
   Graph_Graph1261->GetYaxis()->SetLabelFont(42);
   Graph_Graph1261->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1261->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1261->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1261->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1261->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1261->GetYaxis()->SetTitleFont(42);
   Graph_Graph1261->GetZaxis()->SetLabelFont(42);
   Graph_Graph1261->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1261->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1261->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1261->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1261->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1261);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx262[34] = { 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 20, 30, 40, 50, 60, 70, 80, 90, 90,
   90, 90, 80, 70, 60, 50, 40, 30, 20, 4.5, 4, 3.5, 3, 2.5, 2, 1.5,
   1 };
   Double_t Graph2_fy262[34] = { 10.27635, 8.489978, 7.690613, 6.808281, 6.734076, 6.745978, 6.735029, 6.742097, 10.05475, 13.01186, 16.39917, 19.38623, 22.38853, 25.84418, 30.36604, 33.22165, 33.22165,
   9.992981, 9.992981, 9.293945, 7.84162, 6.852315, 5.933422, 5.064011, 4.035383, 3.180145, 2.513367, 2.566193, 2.591389, 2.717525, 2.729402, 3.326018, 3.705029,
   4.760592 };
   graph = new TGraph(34,Graph2_fx262,Graph2_fy262);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2262 = new TH1F("Graph_Graph2262","Graph",100,0,98.9);
   Graph_Graph2262->SetMinimum(2.26203);
   Graph_Graph2262->SetMaximum(36.29248);
   Graph_Graph2262->SetDirectory(nullptr);
   Graph_Graph2262->SetStats(0);
   Graph_Graph2262->SetLineWidth(2);
   Graph_Graph2262->SetMarkerStyle(20);
   Graph_Graph2262->SetMarkerSize(0.9);
   Graph_Graph2262->GetXaxis()->SetLabelFont(42);
   Graph_Graph2262->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2262->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2262->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2262->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2262->GetXaxis()->SetTitleFont(42);
   Graph_Graph2262->GetYaxis()->SetLabelFont(42);
   Graph_Graph2262->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2262->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2262->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2262->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2262->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2262->GetYaxis()->SetTitleFont(42);
   Graph_Graph2262->GetZaxis()->SetLabelFont(42);
   Graph_Graph2262->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2262->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2262->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2262->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2262->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2262);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx263[16] = { 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 20, 30, 40, 50, 60, 70, 80, 90 };
   Double_t Graph0_fy263[16] = { 6.914062, 5.519727, 4.955078, 4.229102, 4.183008, 4.079297, 4.067773, 4.033203, 5.485156, 7.052344, 8.85, 10.41719, 12.03047, 13.82812, 16.31719, 17.7 };
   graph = new TGraph(16,Graph0_fx263,Graph0_fy263);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0263 = new TH1F("Graph_Graph0263","",100,0,98.9);
   Graph_Graph0263->SetMinimum(0.2);
   Graph_Graph0263->SetMaximum(100000);
   Graph_Graph0263->SetDirectory(nullptr);
   Graph_Graph0263->SetStats(0);
   Graph_Graph0263->SetLineWidth(2);
   Graph_Graph0263->SetMarkerStyle(20);
   Graph_Graph0263->SetMarkerSize(0.9);
   Graph_Graph0263->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0263->GetXaxis()->SetRange(2,101);
   Graph_Graph0263->GetXaxis()->SetLabelFont(42);
   Graph_Graph0263->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0263->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0263->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0263->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0263->GetXaxis()->SetTitleFont(42);
   Graph_Graph0263->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0263->GetYaxis()->SetLabelFont(42);
   Graph_Graph0263->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0263->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0263->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0263->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0263->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0263->GetYaxis()->SetTitleFont(42);
   Graph_Graph0263->GetZaxis()->SetLabelFont(42);
   Graph_Graph0263->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0263->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0263->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0263->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0263->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0263);
   
   graph->Draw("l");
   
   Double_t Graph_fx264[16] = { 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 20, 30, 40, 50, 60, 70, 80, 90 };
   Double_t Graph_fy264[16] = { 3.918457e-94, 4.443791e-61, 1.329969e-44, 9.528062e-35, 3.379568e-28, 1.559169e-23, 4.787426e-20, 2.420864e-17, 0.4879106, 12.83983, 58.53119, 135.5746, 226.5237, 316.1643, 396.0002, 462.7456 };
   graph = new TGraph(16,Graph_fx264,Graph_fy264);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph264 = new TH1F("Graph_Graph264","",100,0,98.9);
   Graph_Graph264->SetMinimum(3.526612e-94);
   Graph_Graph264->SetMaximum(509.0201);
   Graph_Graph264->SetDirectory(nullptr);
   Graph_Graph264->SetStats(0);
   Graph_Graph264->SetLineWidth(2);
   Graph_Graph264->SetMarkerStyle(20);
   Graph_Graph264->SetMarkerSize(0.9);
   Graph_Graph264->GetXaxis()->SetLabelFont(42);
   Graph_Graph264->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph264->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph264->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph264->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph264->GetXaxis()->SetTitleFont(42);
   Graph_Graph264->GetYaxis()->SetLabelFont(42);
   Graph_Graph264->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph264->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph264->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph264->GetYaxis()->SetTickLength(0.02);
   Graph_Graph264->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph264->GetYaxis()->SetTitleFont(42);
   Graph_Graph264->GetZaxis()->SetLabelFont(42);
   Graph_Graph264->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph264->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph264->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph264->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph264->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph264);
   
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
   
   Double_t Graph_fx266[16] = { 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 20, 30, 40, 50, 60, 70, 80, 90 };
   Double_t Graph_fy266[16] = { 4.310303e-94, 4.88817e-61, 1.462966e-44, 1.048087e-34, 3.717525e-28, 1.715086e-23, 5.266168e-20, 2.662951e-17, 0.5367016, 14.12381, 64.38431, 149.1321, 249.1761, 347.7807, 435.6002, 509.0201 };
   graph = new TGraph(16,Graph_fx266,Graph_fy266);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph266 = new TH1F("Graph_Graph266","",100,0,98.9);
   Graph_Graph266->SetMinimum(3.879273e-94);
   Graph_Graph266->SetMaximum(559.9221);
   Graph_Graph266->SetDirectory(nullptr);
   Graph_Graph266->SetStats(0);
   Graph_Graph266->SetLineWidth(2);
   Graph_Graph266->SetMarkerStyle(20);
   Graph_Graph266->SetMarkerSize(0.9);
   Graph_Graph266->GetXaxis()->SetLabelFont(42);
   Graph_Graph266->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph266->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph266->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph266->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph266->GetXaxis()->SetTitleFont(42);
   Graph_Graph266->GetYaxis()->SetLabelFont(42);
   Graph_Graph266->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph266->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph266->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph266->GetYaxis()->SetTickLength(0.02);
   Graph_Graph266->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph266->GetYaxis()->SetTitleFont(42);
   Graph_Graph266->GetZaxis()->SetLabelFont(42);
   Graph_Graph266->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph266->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph266->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph266->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph266->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph266);
   
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
   line = new TLine(28.01517,0,28.01517,6.709191);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(28.01017,0,"  28.02 TeV");

   ci = TColor::GetColor("#666666");
   tex->SetTextColor(ci);
   tex->SetTextFont(43);
   tex->SetTextSize(14);
   tex->SetTextAngle(90);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TH1F *Graph_copy = new TH1F("Graph_copy","",100,0,98.9);
   Graph_copy->SetMinimum(1e-06);
   Graph_copy->SetMaximum(1000);
   Graph_copy->SetDirectory(nullptr);
   Graph_copy->SetStats(0);
   Graph_copy->SetLineWidth(2);
   Graph_copy->SetMarkerStyle(20);
   Graph_copy->SetMarkerSize(0.9);
   Graph_copy->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_copy->GetXaxis()->SetRange(2,101);
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
      tex = new TLatex(0.375,0.96,"Internal");
   tex->SetNDC();
   tex->SetTextAlign(23);
   tex->SetTextFont(52);
   tex->SetTextSize(0.0608);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TPaveText *pt = new TPaveText(0.2,0.75,0.43,0.88,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextAlign(12);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("#varepsilon = 1.94e-07");
   pt_LaTex = pt->AddText("#alpha_{#chi} = 0.245");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
