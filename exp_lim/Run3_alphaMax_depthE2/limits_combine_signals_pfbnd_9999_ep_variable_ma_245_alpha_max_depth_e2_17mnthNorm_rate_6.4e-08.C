#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_depth_e2_17mnthNorm_rate_6.4e-08()
{
//=========Macro generated from canvas: climits/climits
//=========  (Tue Feb  3 11:44:05 2026) by ROOT version 6.30/07
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
   
   Double_t Graph0_fx169[16] = { 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 20, 30, 40, 50, 60, 70, 80, 90 };
   Double_t Graph0_fy169[16] = { 9.403125, 6.407031, 5.139453, 5.369922, 4.874414, 4.862891, 4.690039, 4.79375, 6.499219, 8.527344, 10.325, 11.89219, 14.93438, 16.31719, 18.25313, 21.20312 };
   TGraph *graph = new TGraph(16,Graph0_fx169,Graph0_fy169);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0169 = new TH1F("Graph_Graph0169","",100,0,98.9);
   Graph_Graph0169->SetMinimum(0.2);
   Graph_Graph0169->SetMaximum(100000);
   Graph_Graph0169->SetDirectory(nullptr);
   Graph_Graph0169->SetStats(0);
   Graph_Graph0169->SetLineWidth(2);
   Graph_Graph0169->SetMarkerStyle(20);
   Graph_Graph0169->SetMarkerSize(0.9);
   Graph_Graph0169->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0169->GetXaxis()->SetRange(2,101);
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
   
   Double_t Graph1_fx170[34] = { 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 20, 30, 40, 50, 60, 70, 80, 90, 90,
   90, 90, 80, 70, 60, 50, 40, 30, 20, 4.5, 4, 3.5, 3, 2.5, 2, 1.5,
   1 };
   Double_t Graph1_fy170[34] = { 20.45958, 15.1478, 13.24202, 13.54486, 13.14658, 13.2636, 12.91702, 13.43259, 19.76311, 25.93033, 31.39673, 36.1623, 45.41312, 49.61804, 55.50492, 64.47542, 64.47542,
   7.619873, 7.619873, 6.559717, 5.863989, 5.308704, 4.320209, 3.710547, 3.097824, 2.386432, 2.022363, 1.97861, 2.108519, 2.094475, 2.454222, 2.308739, 3.053351,
   4.738293 };
   graph = new TGraph(34,Graph1_fx170,Graph1_fy170);
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
   
   TH1F *Graph_Graph1170 = new TH1F("Graph_Graph1170","Graph",100,0,98.9);
   Graph_Graph1170->SetMinimum(1.780749);
   Graph_Graph1170->SetMaximum(70.7251);
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
   
   Double_t Graph2_fx171[34] = { 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 20, 30, 40, 50, 60, 70, 80, 90, 90,
   90, 90, 80, 70, 60, 50, 40, 30, 20, 4.5, 4, 3.5, 3, 2.5, 2, 1.5,
   1 };
   Double_t Graph2_fy171[34] = { 14.03206, 9.95691, 8.355768, 8.623442, 8.119161, 8.11935, 7.886832, 8.137666, 11.91361, 15.76729, 19.21467, 21.89417, 28.03077, 30.49613, 34.11431, 39.54322, 39.54322,
   12.07688, 12.07688, 10.39662, 9.293945, 8.467127, 6.804764, 5.880914, 4.879385, 3.73594, 2.975027, 2.910664, 3.055334, 3.071797, 3.502052, 3.303912, 4.28478,
   6.487605 };
   graph = new TGraph(34,Graph2_fx171,Graph2_fy171);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2171 = new TH1F("Graph_Graph2171","Graph",100,0,98.9);
   Graph_Graph2171->SetMinimum(2.619598);
   Graph_Graph2171->SetMaximum(43.20647);
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
   
   Double_t Graph0_fx172[16] = { 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 20, 30, 40, 50, 60, 70, 80, 90 };
   Double_t Graph0_fy172[16] = { 9.403125, 6.407031, 5.139453, 5.369922, 4.874414, 4.862891, 4.690039, 4.79375, 6.499219, 8.527344, 10.325, 11.89219, 14.93438, 16.31719, 18.25313, 21.20312 };
   graph = new TGraph(16,Graph0_fx172,Graph0_fy172);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0172 = new TH1F("Graph_Graph0172","",100,0,98.9);
   Graph_Graph0172->SetMinimum(0.2);
   Graph_Graph0172->SetMaximum(100000);
   Graph_Graph0172->SetDirectory(nullptr);
   Graph_Graph0172->SetStats(0);
   Graph_Graph0172->SetLineWidth(2);
   Graph_Graph0172->SetMarkerStyle(20);
   Graph_Graph0172->SetMarkerSize(0.9);
   Graph_Graph0172->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0172->GetXaxis()->SetRange(2,101);
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
   
   Double_t Graph_fx173[16] = { 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 20, 30, 40, 50, 60, 70, 80, 90 };
   Double_t Graph_fy173[16] = { 4.938296e-07, 0.001181874, 0.05138484, 0.4605775, 1.896833, 5.042919, 10.24134, 17.42825, 163.3811, 141.136, 116.5667, 96.87924, 81.73527, 70.02283, 60.81987, 53.46183 };
   graph = new TGraph(16,Graph_fx173,Graph_fy173);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph173 = new TH1F("Graph_Graph173","",100,0,98.9);
   Graph_Graph173->SetMinimum(4.444466e-07);
   Graph_Graph173->SetMaximum(179.7192);
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
   
   Double_t Graph_fx175[16] = { 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 20, 30, 40, 50, 60, 70, 80, 90 };
   Double_t Graph_fy175[16] = { 5.432125e-07, 0.001300061, 0.05652332, 0.5066353, 2.086516, 5.547211, 11.26547, 19.17108, 179.7192, 155.2496, 128.2234, 106.5672, 89.90879, 77.02511, 66.90186, 58.80801 };
   graph = new TGraph(16,Graph_fx175,Graph_fy175);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph175 = new TH1F("Graph_Graph175","",100,0,98.9);
   Graph_Graph175->SetMinimum(4.888913e-07);
   Graph_Graph175->SetMaximum(197.6911);
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
   line = new TLine(3.481456,0,3.481456,4.863318);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(3.476456,0,"  3.48 TeV");

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
   TText *pt_LaTex = pt->AddText("#varepsilon = 6.4e-08");
   pt_LaTex = pt->AddText("#alpha_{#chi} = 0.245");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
