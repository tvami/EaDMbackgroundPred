#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_depth_e5_17mnthNorm_rate_2.1e-08()
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
   
   Double_t Graph0_fx120[16] = { 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 20, 30, 40, 50, 60, 70, 80, 90 };
   Double_t Graph0_fy120[16] = { 6.914062, 5.519727, 4.955078, 4.229102, 4.183008, 4.079297, 4.067773, 4.033203, 5.485156, 7.052344, 8.85, 10.41719, 12.03047, 13.82812, 16.31719, 17.7 };
   TGraph *graph = new TGraph(16,Graph0_fx120,Graph0_fy120);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0120 = new TH1F("Graph_Graph0120","",100,0,98.9);
   Graph_Graph0120->SetMinimum(0.2);
   Graph_Graph0120->SetMaximum(100000);
   Graph_Graph0120->SetDirectory(nullptr);
   Graph_Graph0120->SetStats(0);
   Graph_Graph0120->SetLineWidth(2);
   Graph_Graph0120->SetMarkerStyle(20);
   Graph_Graph0120->SetMarkerSize(0.9);
   Graph_Graph0120->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0120->GetXaxis()->SetRange(2,101);
   Graph_Graph0120->GetXaxis()->SetLabelFont(42);
   Graph_Graph0120->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0120->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0120->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0120->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0120->GetXaxis()->SetTitleFont(42);
   Graph_Graph0120->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0120->GetYaxis()->SetLabelFont(42);
   Graph_Graph0120->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0120->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0120->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0120->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0120->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0120->GetYaxis()->SetTitleFont(42);
   Graph_Graph0120->GetZaxis()->SetLabelFont(42);
   Graph_Graph0120->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0120->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0120->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0120->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0120->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0120);
   
   graph->Draw("al");
   
   Double_t Graph1_fx121[34] = { 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 20, 30, 40, 50, 60, 70, 80, 90, 90,
   90, 90, 80, 70, 60, 50, 40, 30, 20, 4.5, 4, 3.5, 3, 2.5, 2, 1.5,
   1 };
   Double_t Graph1_fy121[34] = { 14.91576, 12.75073, 11.69612, 10.73249, 10.59214, 10.87939, 10.89486, 11.01324, 16.67951, 21.44508, 26.91148, 31.67705, 36.58279, 42.04918, 49.61804, 53.82296, 53.82296,
   6.360938, 6.360938, 5.863989, 4.969482, 4.32345, 3.743677, 3.215039, 2.561984, 2.014081, 1.717262, 1.779651, 1.784692, 1.895425, 1.916312, 2.38076, 2.652056,
   3.511047 };
   graph = new TGraph(34,Graph1_fx121,Graph1_fy121);
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
   
   TH1F *Graph_Graph1121 = new TH1F("Graph_Graph1121","Graph",100,0,98.9);
   Graph_Graph1121->SetMinimum(1.545536);
   Graph_Graph1121->SetMaximum(59.03352);
   Graph_Graph1121->SetDirectory(nullptr);
   Graph_Graph1121->SetStats(0);
   Graph_Graph1121->SetLineWidth(2);
   Graph_Graph1121->SetMarkerStyle(20);
   Graph_Graph1121->SetMarkerSize(0.9);
   Graph_Graph1121->GetXaxis()->SetLabelFont(42);
   Graph_Graph1121->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1121->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1121->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1121->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1121->GetXaxis()->SetTitleFont(42);
   Graph_Graph1121->GetYaxis()->SetLabelFont(42);
   Graph_Graph1121->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1121->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1121->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1121->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1121->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1121->GetYaxis()->SetTitleFont(42);
   Graph_Graph1121->GetZaxis()->SetLabelFont(42);
   Graph_Graph1121->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1121->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1121->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1121->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1121->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1121);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx122[34] = { 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 20, 30, 40, 50, 60, 70, 80, 90, 90,
   90, 90, 80, 70, 60, 50, 40, 30, 20, 4.5, 4, 3.5, 3, 2.5, 2, 1.5,
   1 };
   Double_t Graph2_fy122[34] = { 10.27635, 8.489978, 7.690613, 6.808281, 6.734076, 6.745978, 6.735029, 6.742097, 10.05475, 13.01186, 16.39917, 19.38623, 22.38853, 25.84418, 30.36604, 33.22165, 33.22165,
   9.992981, 9.992981, 9.293945, 7.84162, 6.852315, 5.933422, 5.064011, 4.035383, 3.180145, 2.513367, 2.566193, 2.591389, 2.717525, 2.729402, 3.326018, 3.705029,
   4.760592 };
   graph = new TGraph(34,Graph2_fx122,Graph2_fy122);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2122 = new TH1F("Graph_Graph2122","Graph",100,0,98.9);
   Graph_Graph2122->SetMinimum(2.26203);
   Graph_Graph2122->SetMaximum(36.29248);
   Graph_Graph2122->SetDirectory(nullptr);
   Graph_Graph2122->SetStats(0);
   Graph_Graph2122->SetLineWidth(2);
   Graph_Graph2122->SetMarkerStyle(20);
   Graph_Graph2122->SetMarkerSize(0.9);
   Graph_Graph2122->GetXaxis()->SetLabelFont(42);
   Graph_Graph2122->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2122->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2122->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2122->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2122->GetXaxis()->SetTitleFont(42);
   Graph_Graph2122->GetYaxis()->SetLabelFont(42);
   Graph_Graph2122->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2122->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2122->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2122->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2122->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2122->GetYaxis()->SetTitleFont(42);
   Graph_Graph2122->GetZaxis()->SetLabelFont(42);
   Graph_Graph2122->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2122->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2122->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2122->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2122->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2122);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx123[16] = { 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 20, 30, 40, 50, 60, 70, 80, 90 };
   Double_t Graph0_fy123[16] = { 6.914062, 5.519727, 4.955078, 4.229102, 4.183008, 4.079297, 4.067773, 4.033203, 5.485156, 7.052344, 8.85, 10.41719, 12.03047, 13.82812, 16.31719, 17.7 };
   graph = new TGraph(16,Graph0_fx123,Graph0_fy123);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0123 = new TH1F("Graph_Graph0123","",100,0,98.9);
   Graph_Graph0123->SetMinimum(0.2);
   Graph_Graph0123->SetMaximum(100000);
   Graph_Graph0123->SetDirectory(nullptr);
   Graph_Graph0123->SetStats(0);
   Graph_Graph0123->SetLineWidth(2);
   Graph_Graph0123->SetMarkerStyle(20);
   Graph_Graph0123->SetMarkerSize(0.9);
   Graph_Graph0123->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0123->GetXaxis()->SetRange(2,101);
   Graph_Graph0123->GetXaxis()->SetLabelFont(42);
   Graph_Graph0123->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0123->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0123->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0123->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0123->GetXaxis()->SetTitleFont(42);
   Graph_Graph0123->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0123->GetYaxis()->SetLabelFont(42);
   Graph_Graph0123->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0123->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0123->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0123->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0123->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0123->GetYaxis()->SetTitleFont(42);
   Graph_Graph0123->GetZaxis()->SetLabelFont(42);
   Graph_Graph0123->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0123->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0123->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0123->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0123->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0123);
   
   graph->Draw("l");
   
   Double_t Graph_fx124[16] = { 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 20, 30, 40, 50, 60, 70, 80, 90 };
   Double_t Graph_fy124[16] = { 28.79992, 40.22534, 42.24943, 40.56233, 37.67663, 34.57334, 31.61755, 28.9291, 5.786846, 3.444957, 2.361965, 1.755582, 1.374868, 1.116843, 0.9321236, 0.7943233 };
   graph = new TGraph(16,Graph_fx124,Graph_fy124);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph124 = new TH1F("Graph_Graph124","",100,0,98.9);
   Graph_Graph124->SetMinimum(0.7148909);
   Graph_Graph124->SetMaximum(46.39494);
   Graph_Graph124->SetDirectory(nullptr);
   Graph_Graph124->SetStats(0);
   Graph_Graph124->SetLineWidth(2);
   Graph_Graph124->SetMarkerStyle(20);
   Graph_Graph124->SetMarkerSize(0.9);
   Graph_Graph124->GetXaxis()->SetLabelFont(42);
   Graph_Graph124->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph124->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph124->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph124->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph124->GetXaxis()->SetTitleFont(42);
   Graph_Graph124->GetYaxis()->SetLabelFont(42);
   Graph_Graph124->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph124->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph124->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph124->GetYaxis()->SetTickLength(0.02);
   Graph_Graph124->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph124->GetYaxis()->SetTitleFont(42);
   Graph_Graph124->GetZaxis()->SetLabelFont(42);
   Graph_Graph124->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph124->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph124->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph124->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph124->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph124);
   
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
   
   Double_t Graph_fx126[16] = { 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 20, 30, 40, 50, 60, 70, 80, 90 };
   Double_t Graph_fy126[16] = { 31.67992, 44.24788, 46.47437, 44.61856, 41.44429, 38.03067, 34.77931, 31.82202, 6.365531, 3.789452, 2.598161, 1.93114, 1.512355, 1.228527, 1.025336, 0.8737556 };
   graph = new TGraph(16,Graph_fx126,Graph_fy126);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph126 = new TH1F("Graph_Graph126","",100,0,98.9);
   Graph_Graph126->SetMinimum(0.78638);
   Graph_Graph126->SetMaximum(51.03443);
   Graph_Graph126->SetDirectory(nullptr);
   Graph_Graph126->SetStats(0);
   Graph_Graph126->SetLineWidth(2);
   Graph_Graph126->SetMarkerStyle(20);
   Graph_Graph126->SetMarkerSize(0.9);
   Graph_Graph126->GetXaxis()->SetLabelFont(42);
   Graph_Graph126->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph126->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph126->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph126->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph126->GetXaxis()->SetTitleFont(42);
   Graph_Graph126->GetYaxis()->SetLabelFont(42);
   Graph_Graph126->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph126->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph126->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph126->GetYaxis()->SetTickLength(0.02);
   Graph_Graph126->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph126->GetYaxis()->SetTitleFont(42);
   Graph_Graph126->GetZaxis()->SetLabelFont(42);
   Graph_Graph126->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph126->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph126->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph126->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph126->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph126);
   
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
   line = new TLine(20.69536,0,20.69536,5.581854);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(20.69036,0,"  20.70 TeV");

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
   TText *pt_LaTex = pt->AddText("#varepsilon = 2.1e-08");
   pt_LaTex = pt->AddText("#alpha_{#chi} = 0.245");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
