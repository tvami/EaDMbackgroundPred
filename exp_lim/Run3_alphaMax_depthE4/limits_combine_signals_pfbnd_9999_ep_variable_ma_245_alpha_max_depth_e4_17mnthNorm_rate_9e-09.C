#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_depth_e4_17mnthNorm_rate_9e-09()
{
//=========Macro generated from canvas: climits/climits
//=========  (Wed Mar 11 02:52:37 2026) by ROOT version 6.30/07
   TCanvas *climits = new TCanvas("climits", "climits",0,0,700,600);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   climits->SetHighLightColor(2);
   climits->Range(-34.1205,-1.838764,193.3495,5.759863);
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
   
   Double_t Graph0_fx36[18] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 40, 60, 80, 100, 120, 140, 160,
   180 };
   Double_t Graph0_fy36[18] = { 9.933203, 7.375, 7.121484, 4.436523, 3.629883, 3.030664, 2.754102, 2.719531, 2.811719, 3.595313, 5.485156, 7.00625, 8.988281, 11.01641, 11.75391, 14.56563, 17.51562,
   19.175 };
   TGraph *graph = new TGraph(18,Graph0_fx36,Graph0_fy36);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph036 = new TH1F("Graph_Graph036","",100,0,197.8);
   Graph_Graph036->SetMinimum(0.2);
   Graph_Graph036->SetMaximum(100000);
   Graph_Graph036->SetDirectory(nullptr);
   Graph_Graph036->SetStats(0);
   Graph_Graph036->SetLineWidth(2);
   Graph_Graph036->SetMarkerStyle(20);
   Graph_Graph036->SetMarkerSize(0.9);
   Graph_Graph036->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph036->GetXaxis()->SetRange(1,92);
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
   
   Double_t Graph1_fx37[38] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 40, 60, 80, 100, 120, 140, 160,
   180, 180, 180, 180, 160, 140, 120, 100, 80, 60, 40, 20, 10, 9, 8, 7,
   6, 5, 4, 3, 2 };
   Double_t Graph1_fy37[38] = { 22.68253, 17.88353, 16.02638, 12.53069, 11.03791, 9.215782, 8.374799, 8.269676, 8.550004, 10.93279, 16.67952, 21.30493, 27.33198, 33.4992, 35.74182, 44.29183, 53.26232,
   58.30822, 58.30822, 5.168262, 5.168262, 4.789429, 3.982788, 3.213959, 3.012299, 2.457733, 1.94314, 1.521274, 1.011182, 0.7907959, 0.7648682, 0.7853493, 0.8760513,
   1.29031, 1.99297, 3.950198, 3.457031, 4.850197 };
   graph = new TGraph(38,Graph1_fx37,Graph1_fy37);
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
   
   TH1F *Graph_Graph137 = new TH1F("Graph_Graph137","Graph",100,0,197.8);
   Graph_Graph137->SetMinimum(0.6883813);
   Graph_Graph137->SetMaximum(64.06256);
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
   
   Double_t Graph2_fx38[38] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 40, 60, 80, 100, 120, 140, 160,
   180, 180, 180, 180, 160, 140, 120, 100, 80, 60, 40, 20, 10, 9, 8, 7,
   6, 5, 4, 3, 2 };
   Double_t Graph2_fy38[38] = { 15.15963, 11.60818, 10.61303, 7.495885, 6.509188, 5.929949, 5.542505, 5.494593, 5.68085, 7.264038, 11.08232, 14.15556, 18.1601, 22.25776, 23.74782, 29.42867, 35.3889,
   38.74154, 38.74154, 9.43594, 9.43594, 8.666942, 7.207246, 5.815974, 5.45105, 4.44751, 3.485806, 2.759987, 1.808628, 1.422334, 1.3757, 1.400584, 1.566201,
   2.112816, 2.832941, 5.089879, 4.865051, 6.716613 };
   graph = new TGraph(38,Graph2_fx38,Graph2_fy38);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph238 = new TH1F("Graph_Graph238","Graph",100,0,197.8);
   Graph_Graph238->SetMinimum(1.23813);
   Graph_Graph238->SetMaximum(42.47812);
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
   
   Double_t Graph0_fx39[18] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 40, 60, 80, 100, 120, 140, 160,
   180 };
   Double_t Graph0_fy39[18] = { 9.933203, 7.375, 7.121484, 4.436523, 3.629883, 3.030664, 2.754102, 2.719531, 2.811719, 3.595313, 5.485156, 7.00625, 8.988281, 11.01641, 11.75391, 14.56563, 17.51562,
   19.175 };
   graph = new TGraph(18,Graph0_fx39,Graph0_fy39);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph039 = new TH1F("Graph_Graph039","",100,0,197.8);
   Graph_Graph039->SetMinimum(0.2);
   Graph_Graph039->SetMaximum(100000);
   Graph_Graph039->SetDirectory(nullptr);
   Graph_Graph039->SetStats(0);
   Graph_Graph039->SetLineWidth(2);
   Graph_Graph039->SetMarkerStyle(20);
   Graph_Graph039->SetMarkerSize(0.9);
   Graph_Graph039->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph039->GetXaxis()->SetRange(1,92);
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
   
   Double_t Graph_fx40[18] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 40, 60, 80, 100, 120, 140, 160,
   180 };
   Double_t Graph_fy40[18] = { 8.771038, 5.883518, 4.282497, 3.299457, 2.646593, 2.187023, 1.848897, 1.591388, 1.38978, 0.5571842, 0.217928, 0.125063, 0.08418901, 0.0618907, 0.04811495, 0.03888086, 0.03232295,
   0.02746044 };
   graph = new TGraph(18,Graph_fx40,Graph_fy40);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph40 = new TH1F("Graph_Graph40","",100,0,197.8);
   Graph_Graph40->SetMinimum(0.0247144);
   Graph_Graph40->SetMaximum(9.645396);
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
   
   Double_t Graph_fx42[18] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 40, 60, 80, 100, 120, 140, 160,
   180 };
   Double_t Graph_fy42[18] = { 9.648142, 6.47187, 4.710747, 3.629403, 2.911252, 2.405725, 2.033787, 1.750527, 1.528758, 0.6129027, 0.2397208, 0.1375693, 0.09260791, 0.06807976, 0.05292644, 0.04276895, 0.03555524,
   0.03020649 };
   graph = new TGraph(18,Graph_fx42,Graph_fy42);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph42 = new TH1F("Graph_Graph42","",100,0,197.8);
   Graph_Graph42->SetMinimum(0.02718584);
   Graph_Graph42->SetMaximum(10.60994);
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
   
   TH1F *Graph_copy = new TH1F("Graph_copy","",100,0,197.8);
   Graph_copy->SetMinimum(1e-06);
   Graph_copy->SetMaximum(1000);
   Graph_copy->SetDirectory(nullptr);
   Graph_copy->SetStats(0);
   Graph_copy->SetLineWidth(2);
   Graph_copy->SetMarkerStyle(20);
   Graph_copy->SetMarkerSize(0.9);
   Graph_copy->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_copy->GetXaxis()->SetRange(1,92);
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
      tex = new TLatex(0.4325,0.95,"Data Private Work");
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
