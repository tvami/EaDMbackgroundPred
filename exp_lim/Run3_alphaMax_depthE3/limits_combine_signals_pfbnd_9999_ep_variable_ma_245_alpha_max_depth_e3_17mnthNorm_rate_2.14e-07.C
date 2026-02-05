#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_depth_e3_17mnthNorm_rate_2.14e-07()
{
//=========Macro generated from canvas: climits/climits
//=========  (Tue Feb  3 11:37:21 2026) by ROOT version 6.30/07
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
   
   Double_t Graph0_fx274[16] = { 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 20, 30, 40, 50, 60, 70, 80, 90 };
   Double_t Graph0_fy274[16] = { 9.495313, 6.337891, 5.139453, 5.243164, 4.897461, 4.862891, 4.851367, 4.782227, 6.522266, 8.342969, 10.27891, 12.21484, 14.28906, 15.85625, 18.89844, 20.09688 };
   TGraph *graph = new TGraph(16,Graph0_fx274,Graph0_fy274);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0274 = new TH1F("Graph_Graph0274","",100,0,98.9);
   Graph_Graph0274->SetMinimum(0.2);
   Graph_Graph0274->SetMaximum(100000);
   Graph_Graph0274->SetDirectory(nullptr);
   Graph_Graph0274->SetStats(0);
   Graph_Graph0274->SetLineWidth(2);
   Graph_Graph0274->SetMarkerStyle(20);
   Graph_Graph0274->SetMarkerSize(0.9);
   Graph_Graph0274->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0274->GetXaxis()->SetRange(2,101);
   Graph_Graph0274->GetXaxis()->SetLabelFont(42);
   Graph_Graph0274->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0274->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0274->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0274->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0274->GetXaxis()->SetTitleFont(42);
   Graph_Graph0274->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0274->GetYaxis()->SetLabelFont(42);
   Graph_Graph0274->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0274->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0274->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0274->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0274->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0274->GetYaxis()->SetTitleFont(42);
   Graph_Graph0274->GetZaxis()->SetLabelFont(42);
   Graph_Graph0274->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0274->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0274->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0274->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0274->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0274);
   
   graph->Draw("al");
   
   Double_t Graph1_fx275[34] = { 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 20, 30, 40, 50, 60, 70, 80, 90, 90,
   90, 90, 80, 70, 60, 50, 40, 30, 20, 4.5, 4, 3.5, 3, 2.5, 2, 1.5,
   1 };
   Double_t Graph1_fy275[34] = { 20.69942, 15.00274, 13.19256, 13.28391, 13.19066, 13.21999, 13.52314, 13.38432, 19.8332, 25.36967, 31.25656, 37.14345, 43.45082, 48.2164, 57.46722, 61.11148, 61.11148,
   7.379321, 7.379321, 6.791626, 5.69834, 5.135132, 4.389709, 3.693982, 3.030844, 2.394894, 2.017502, 2.046671, 2.089523, 2.104378, 2.39629, 2.308739, 3.020401,
   4.784747 };
   graph = new TGraph(34,Graph1_fx275,Graph1_fy275);
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
   
   TH1F *Graph_Graph1275 = new TH1F("Graph_Graph1275","Graph",100,0,98.9);
   Graph_Graph1275->SetMinimum(1.815752);
   Graph_Graph1275->SetMaximum(67.02088);
   Graph_Graph1275->SetDirectory(nullptr);
   Graph_Graph1275->SetStats(0);
   Graph_Graph1275->SetLineWidth(2);
   Graph_Graph1275->SetMarkerStyle(20);
   Graph_Graph1275->SetMarkerSize(0.9);
   Graph_Graph1275->GetXaxis()->SetLabelFont(42);
   Graph_Graph1275->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1275->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1275->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1275->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1275->GetXaxis()->SetTitleFont(42);
   Graph_Graph1275->GetYaxis()->SetLabelFont(42);
   Graph_Graph1275->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1275->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1275->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1275->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1275->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1275->GetYaxis()->SetTitleFont(42);
   Graph_Graph1275->GetZaxis()->SetLabelFont(42);
   Graph_Graph1275->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1275->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1275->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1275->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1275->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1275);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx276[34] = { 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 20, 30, 40, 50, 60, 70, 80, 90, 90,
   90, 90, 80, 70, 60, 50, 40, 30, 20, 4.5, 4, 3.5, 3, 2.5, 2, 1.5,
   1 };
   Double_t Graph2_fy276[34] = { 14.18855, 9.849462, 8.335282, 8.419885, 8.138028, 8.099967, 8.196799, 8.099042, 11.98185, 15.39312, 19.21084, 22.63427, 26.53478, 29.63465, 35.32037, 37.15967, 37.15967,
   11.55227, 11.55227, 10.76417, 8.991725, 8.138765, 6.957332, 5.85466, 4.773885, 3.749188, 2.967876, 3.010785, 3.064535, 3.086321, 3.397144, 3.303912, 4.238542,
   6.551209 };
   graph = new TGraph(34,Graph2_fx276,Graph2_fy276);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2276 = new TH1F("Graph_Graph2276","Graph",100,0,98.9);
   Graph_Graph2276->SetMinimum(2.671088);
   Graph_Graph2276->SetMaximum(40.57885);
   Graph_Graph2276->SetDirectory(nullptr);
   Graph_Graph2276->SetStats(0);
   Graph_Graph2276->SetLineWidth(2);
   Graph_Graph2276->SetMarkerStyle(20);
   Graph_Graph2276->SetMarkerSize(0.9);
   Graph_Graph2276->GetXaxis()->SetLabelFont(42);
   Graph_Graph2276->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2276->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2276->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2276->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2276->GetXaxis()->SetTitleFont(42);
   Graph_Graph2276->GetYaxis()->SetLabelFont(42);
   Graph_Graph2276->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2276->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2276->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2276->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2276->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2276->GetYaxis()->SetTitleFont(42);
   Graph_Graph2276->GetZaxis()->SetLabelFont(42);
   Graph_Graph2276->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2276->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2276->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2276->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2276->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2276);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx277[16] = { 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 20, 30, 40, 50, 60, 70, 80, 90 };
   Double_t Graph0_fy277[16] = { 9.495313, 6.337891, 5.139453, 5.243164, 4.897461, 4.862891, 4.851367, 4.782227, 6.522266, 8.342969, 10.27891, 12.21484, 14.28906, 15.85625, 18.89844, 20.09688 };
   graph = new TGraph(16,Graph0_fx277,Graph0_fy277);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0277 = new TH1F("Graph_Graph0277","",100,0,98.9);
   Graph_Graph0277->SetMinimum(0.2);
   Graph_Graph0277->SetMaximum(100000);
   Graph_Graph0277->SetDirectory(nullptr);
   Graph_Graph0277->SetStats(0);
   Graph_Graph0277->SetLineWidth(2);
   Graph_Graph0277->SetMarkerStyle(20);
   Graph_Graph0277->SetMarkerSize(0.9);
   Graph_Graph0277->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0277->GetXaxis()->SetRange(2,101);
   Graph_Graph0277->GetXaxis()->SetLabelFont(42);
   Graph_Graph0277->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0277->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0277->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0277->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0277->GetXaxis()->SetTitleFont(42);
   Graph_Graph0277->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0277->GetYaxis()->SetLabelFont(42);
   Graph_Graph0277->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0277->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0277->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0277->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0277->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0277->GetYaxis()->SetTitleFont(42);
   Graph_Graph0277->GetZaxis()->SetLabelFont(42);
   Graph_Graph0277->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0277->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0277->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0277->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0277->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0277);
   
   graph->Draw("l");
   
   Double_t Graph_fx278[16] = { 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 20, 30, 40, 50, 60, 70, 80, 90 };
   Double_t Graph_fy278[16] = { 1.270752e-115, 2.390732e-75, 2.91431e-55, 3.05949e-43, 3.016287e-35, 1.495925e-29, 2.72692e-25, 5.510536e-22, 0.05967779, 3.605982, 24.90851, 74.03485, 146.073, 229.5828, 314.34, 393.6671 };
   graph = new TGraph(16,Graph_fx278,Graph_fy278);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph278 = new TH1F("Graph_Graph278","",100,0,98.9);
   Graph_Graph278->SetMinimum(1.143677e-115);
   Graph_Graph278->SetMaximum(433.0339);
   Graph_Graph278->SetDirectory(nullptr);
   Graph_Graph278->SetStats(0);
   Graph_Graph278->SetLineWidth(2);
   Graph_Graph278->SetMarkerStyle(20);
   Graph_Graph278->SetMarkerSize(0.9);
   Graph_Graph278->GetXaxis()->SetLabelFont(42);
   Graph_Graph278->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph278->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph278->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph278->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph278->GetXaxis()->SetTitleFont(42);
   Graph_Graph278->GetYaxis()->SetLabelFont(42);
   Graph_Graph278->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph278->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph278->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph278->GetYaxis()->SetTickLength(0.02);
   Graph_Graph278->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph278->GetYaxis()->SetTitleFont(42);
   Graph_Graph278->GetZaxis()->SetLabelFont(42);
   Graph_Graph278->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph278->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph278->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph278->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph278->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph278);
   
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
   
   Double_t Graph_fx280[16] = { 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 20, 30, 40, 50, 60, 70, 80, 90 };
   Double_t Graph_fy280[16] = { 1.397827e-115, 2.629805e-75, 3.205741e-55, 3.365439e-43, 3.317916e-35, 1.645517e-29, 2.999613e-25, 6.06159e-22, 0.06564557, 3.966581, 27.39936, 81.43834, 160.6803, 252.5411, 345.774, 433.0339 };
   graph = new TGraph(16,Graph_fx280,Graph_fy280);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph280 = new TH1F("Graph_Graph280","",100,0,98.9);
   Graph_Graph280->SetMinimum(1.258044e-115);
   Graph_Graph280->SetMaximum(476.3372);
   Graph_Graph280->SetDirectory(nullptr);
   Graph_Graph280->SetStats(0);
   Graph_Graph280->SetLineWidth(2);
   Graph_Graph280->SetMarkerStyle(20);
   Graph_Graph280->SetMarkerSize(0.9);
   Graph_Graph280->GetXaxis()->SetLabelFont(42);
   Graph_Graph280->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph280->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph280->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph280->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph280->GetXaxis()->SetTitleFont(42);
   Graph_Graph280->GetYaxis()->SetLabelFont(42);
   Graph_Graph280->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph280->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph280->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph280->GetYaxis()->SetTickLength(0.02);
   Graph_Graph280->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph280->GetYaxis()->SetTitleFont(42);
   Graph_Graph280->GetZaxis()->SetLabelFont(42);
   Graph_Graph280->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph280->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph280->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph280->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph280->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph280);
   
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
   line = new TLine(34.86574,0,34.86574,9.234577);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(34.86074,0,"  34.87 TeV");

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
   TText *pt_LaTex = pt->AddText("#varepsilon = 2.14e-07");
   pt_LaTex = pt->AddText("#alpha_{#chi} = 0.245");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
