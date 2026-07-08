#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_17mnthNorm_rate_6.4e-07()
{
//=========Macro generated from canvas: climits/climits
//=========  (Thu Jun 11 01:13:39 2026) by ROOT version 6.30/07
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
   
   Double_t Graph0_fx435[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy435[20] = { 757.5462, 10.21849, 10.34327, 6.892724, 6.856261, 6.805988, 6.792314, 12.65785, 17.70313, 23.2699, 28.51126, 53.76754, 55.00202, 53.61712, 54.59753, 53.87332, 52.0452,
   54.09839, 54.3541, 54.3541 };
   TGraph *graph = new TGraph(20,Graph0_fx435,Graph0_fy435);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0435 = new TH1F("Graph_Graph0435","",100,2.7,1099.7);
   Graph_Graph0435->SetMinimum(0.2);
   Graph_Graph0435->SetMaximum(100000);
   Graph_Graph0435->SetDirectory(nullptr);
   Graph_Graph0435->SetStats(0);
   Graph_Graph0435->SetLineWidth(2);
   Graph_Graph0435->SetMarkerStyle(20);
   Graph_Graph0435->SetMarkerSize(0.9);
   Graph_Graph0435->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0435->GetXaxis()->SetRange(0,91);
   Graph_Graph0435->GetXaxis()->SetLabelFont(42);
   Graph_Graph0435->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0435->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0435->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0435->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0435->GetXaxis()->SetTitleFont(42);
   Graph_Graph0435->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0435->GetYaxis()->SetLabelFont(42);
   Graph_Graph0435->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0435->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0435->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0435->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0435->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0435->GetYaxis()->SetTitleFont(42);
   Graph_Graph0435->GetZaxis()->SetLabelFont(42);
   Graph_Graph0435->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0435->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0435->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0435->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0435->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0435);
   
   graph->Draw("al");
   
   Double_t Graph1_fx436[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph1_fy436[42] = { 1720.352, 27.90013, 27.43299, 20.45865, 19.60471, 19.58701, 20.18621, 38.49057, 53.8325, 70.7602, 86.69836, 163.4988, 167.2527, 163.0414, 166.0227, 163.8205, 158.2614,
   164.5049, 165.2825, 165.2825, 165.2825, 16.01794, 16.01794, 16.01794, 15.95112, 15.38306, 15.89619, 16.08023, 15.81265, 16.20134, 15.8579, 9.197354, 7.685111,
   6.031651, 4.53485, 2.699894, 2.772078, 2.86258, 2.705659, 4.135912, 4.369327, 363.4345 };
   graph = new TGraph(42,Graph1_fx436,Graph1_fy436);
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
   
   TH1F *Graph_Graph1436 = new TH1F("Graph_Graph1436","Graph",100,2.7,1099.7);
   Graph_Graph1436->SetMinimum(2.429904);
   Graph_Graph1436->SetMaximum(1892.117);
   Graph_Graph1436->SetDirectory(nullptr);
   Graph_Graph1436->SetStats(0);
   Graph_Graph1436->SetLineWidth(2);
   Graph_Graph1436->SetMarkerStyle(20);
   Graph_Graph1436->SetMarkerSize(0.9);
   Graph_Graph1436->GetXaxis()->SetLabelFont(42);
   Graph_Graph1436->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1436->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1436->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1436->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1436->GetXaxis()->SetTitleFont(42);
   Graph_Graph1436->GetYaxis()->SetLabelFont(42);
   Graph_Graph1436->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1436->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1436->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1436->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1436->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1436->GetYaxis()->SetTitleFont(42);
   Graph_Graph1436->GetZaxis()->SetLabelFont(42);
   Graph_Graph1436->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1436->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1436->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1436->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1436->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1436);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx437[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph2_fy437[42] = { 1160.926, 17.02504, 16.96798, 12.58076, 12.12039, 12.15113, 12.34657, 25.46744, 35.67231, 46.93706, 57.5468, 108.633, 111.1271, 108.3291, 110.3099, 108.8467, 105.1531,
   109.3014, 109.8181, 109.8181, 109.8181, 26.8075, 26.8075, 26.8075, 26.69259, 25.7127, 26.59725, 26.91459, 26.45393, 27.12298, 26.53014, 14.90124, 12.34613,
   9.596146, 7.043092, 4.067349, 4.14373, 4.220541, 4.103988, 6.260527, 6.413775, 508.0431 };
   graph = new TGraph(42,Graph2_fx437,Graph2_fy437);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2437 = new TH1F("Graph_Graph2437","Graph",100,2.7,1099.7);
   Graph_Graph2437->SetMinimum(3.660614);
   Graph_Graph2437->SetMaximum(1276.612);
   Graph_Graph2437->SetDirectory(nullptr);
   Graph_Graph2437->SetStats(0);
   Graph_Graph2437->SetLineWidth(2);
   Graph_Graph2437->SetMarkerStyle(20);
   Graph_Graph2437->SetMarkerSize(0.9);
   Graph_Graph2437->GetXaxis()->SetLabelFont(42);
   Graph_Graph2437->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2437->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2437->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2437->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2437->GetXaxis()->SetTitleFont(42);
   Graph_Graph2437->GetYaxis()->SetLabelFont(42);
   Graph_Graph2437->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2437->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2437->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2437->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2437->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2437->GetYaxis()->SetTitleFont(42);
   Graph_Graph2437->GetZaxis()->SetLabelFont(42);
   Graph_Graph2437->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2437->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2437->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2437->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2437->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2437);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx438[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy438[20] = { 757.5462, 10.21849, 10.34327, 6.892724, 6.856261, 6.805988, 6.792314, 12.65785, 17.70313, 23.2699, 28.51126, 53.76754, 55.00202, 53.61712, 54.59753, 53.87332, 52.0452,
   54.09839, 54.3541, 54.3541 };
   graph = new TGraph(20,Graph0_fx438,Graph0_fy438);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0438 = new TH1F("Graph_Graph0438","",100,2.7,1099.7);
   Graph_Graph0438->SetMinimum(0.2);
   Graph_Graph0438->SetMaximum(100000);
   Graph_Graph0438->SetDirectory(nullptr);
   Graph_Graph0438->SetStats(0);
   Graph_Graph0438->SetLineWidth(2);
   Graph_Graph0438->SetMarkerStyle(20);
   Graph_Graph0438->SetMarkerSize(0.9);
   Graph_Graph0438->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0438->GetXaxis()->SetRange(0,91);
   Graph_Graph0438->GetXaxis()->SetLabelFont(42);
   Graph_Graph0438->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0438->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0438->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0438->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0438->GetXaxis()->SetTitleFont(42);
   Graph_Graph0438->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0438->GetYaxis()->SetLabelFont(42);
   Graph_Graph0438->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0438->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0438->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0438->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0438->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0438->GetYaxis()->SetTitleFont(42);
   Graph_Graph0438->GetZaxis()->SetLabelFont(42);
   Graph_Graph0438->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0438->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0438->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0438->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0438->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0438);
   
   graph->Draw("l");
   
   Double_t Graph_fx439[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph_fy439[20] = { 0, 0, 0, 0, 1.493537e-303, 8.373828e-265, 1.128256e-234, 2.487066e-48, 1.867641e-30, 1.438188e-21, 2.782551e-16, 7.35834e-06, 0.01759813, 0.7652928, 6.860332, 28.25519, 75.12203,
   152.5641, 259.631, 259.631 };
   graph = new TGraph(20,Graph_fx439,Graph_fy439);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph439 = new TH1F("Graph_Graph439","",100,2.7,1099.7);
   Graph_Graph439->SetMinimum(0.2855941);
   Graph_Graph439->SetMaximum(285.5941);
   Graph_Graph439->SetDirectory(nullptr);
   Graph_Graph439->SetStats(0);
   Graph_Graph439->SetLineWidth(2);
   Graph_Graph439->SetMarkerStyle(20);
   Graph_Graph439->SetMarkerSize(0.9);
   Graph_Graph439->GetXaxis()->SetLabelFont(42);
   Graph_Graph439->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph439->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph439->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph439->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph439->GetXaxis()->SetTitleFont(42);
   Graph_Graph439->GetYaxis()->SetLabelFont(42);
   Graph_Graph439->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph439->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph439->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph439->GetYaxis()->SetTickLength(0.02);
   Graph_Graph439->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph439->GetYaxis()->SetTitleFont(42);
   Graph_Graph439->GetZaxis()->SetLabelFont(42);
   Graph_Graph439->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph439->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph439->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph439->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph439->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph439);
   
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
   
   Double_t Graph_fx441[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph_fy441[20] = { 0, 0, 0, 0, 1.642891e-303, 9.211211e-265, 1.241082e-234, 2.735773e-48, 2.054405e-30, 1.582007e-21, 3.060806e-16, 8.094174e-06, 0.01935794, 0.8418221, 7.546365, 31.08071, 82.63423,
   167.8205, 285.5941, 285.5941 };
   graph = new TGraph(20,Graph_fx441,Graph_fy441);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph441 = new TH1F("Graph_Graph441","",100,2.7,1099.7);
   Graph_Graph441->SetMinimum(0.3141535);
   Graph_Graph441->SetMaximum(314.1535);
   Graph_Graph441->SetDirectory(nullptr);
   Graph_Graph441->SetStats(0);
   Graph_Graph441->SetLineWidth(2);
   Graph_Graph441->SetMarkerStyle(20);
   Graph_Graph441->SetMarkerSize(0.9);
   Graph_Graph441->GetXaxis()->SetLabelFont(42);
   Graph_Graph441->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph441->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph441->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph441->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph441->GetXaxis()->SetTitleFont(42);
   Graph_Graph441->GetYaxis()->SetLabelFont(42);
   Graph_Graph441->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph441->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph441->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph441->GetYaxis()->SetTickLength(0.02);
   Graph_Graph441->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph441->GetYaxis()->SetTitleFont(42);
   Graph_Graph441->GetZaxis()->SetLabelFont(42);
   Graph_Graph441->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph441->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph441->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph441->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph441->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph441);
   
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
   line = new TLine(663.7479,0,663.7479,52.70065);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(663.7429,0,"  663.75 TeV");

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
   pt_LaTex = pt->AddText("#varepsilon = 6.4e-07");
   pt_LaTex = pt->AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
