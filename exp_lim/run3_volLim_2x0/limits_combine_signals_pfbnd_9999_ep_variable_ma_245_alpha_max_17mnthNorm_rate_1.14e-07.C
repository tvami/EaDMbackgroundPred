#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_17mnthNorm_rate_1.14e-07()
{
//=========Macro generated from canvas: climits/climits
//=========  (Thu Jun 11 01:13:36 2026) by ROOT version 6.30/07
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
   
   Double_t Graph0_fx204[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy204[20] = { 757.5462, 10.21849, 10.34327, 6.892724, 6.856261, 6.805988, 6.792314, 12.65785, 17.70313, 23.2699, 28.51126, 53.76754, 55.00202, 53.61712, 54.59753, 53.87332, 52.0452,
   54.09839, 54.3541, 54.3541 };
   TGraph *graph = new TGraph(20,Graph0_fx204,Graph0_fy204);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0204 = new TH1F("Graph_Graph0204","",100,2.7,1099.7);
   Graph_Graph0204->SetMinimum(0.2);
   Graph_Graph0204->SetMaximum(100000);
   Graph_Graph0204->SetDirectory(nullptr);
   Graph_Graph0204->SetStats(0);
   Graph_Graph0204->SetLineWidth(2);
   Graph_Graph0204->SetMarkerStyle(20);
   Graph_Graph0204->SetMarkerSize(0.9);
   Graph_Graph0204->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0204->GetXaxis()->SetRange(0,91);
   Graph_Graph0204->GetXaxis()->SetLabelFont(42);
   Graph_Graph0204->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0204->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0204->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0204->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0204->GetXaxis()->SetTitleFont(42);
   Graph_Graph0204->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0204->GetYaxis()->SetLabelFont(42);
   Graph_Graph0204->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0204->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0204->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0204->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0204->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0204->GetYaxis()->SetTitleFont(42);
   Graph_Graph0204->GetZaxis()->SetLabelFont(42);
   Graph_Graph0204->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0204->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0204->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0204->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0204->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0204);
   
   graph->Draw("al");
   
   Double_t Graph1_fx205[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph1_fy205[42] = { 1720.352, 27.90013, 27.43299, 20.45865, 19.60471, 19.58701, 20.18621, 38.49057, 53.8325, 70.7602, 86.69836, 163.4988, 167.2527, 163.0414, 166.0227, 163.8205, 158.2614,
   164.5049, 165.2825, 165.2825, 165.2825, 16.01794, 16.01794, 16.01794, 15.95112, 15.38306, 15.89619, 16.08023, 15.81265, 16.20134, 15.8579, 9.197354, 7.685111,
   6.031651, 4.53485, 2.699894, 2.772078, 2.86258, 2.705659, 4.135912, 4.369327, 363.4345 };
   graph = new TGraph(42,Graph1_fx205,Graph1_fy205);
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
   
   TH1F *Graph_Graph1205 = new TH1F("Graph_Graph1205","Graph",100,2.7,1099.7);
   Graph_Graph1205->SetMinimum(2.429904);
   Graph_Graph1205->SetMaximum(1892.117);
   Graph_Graph1205->SetDirectory(nullptr);
   Graph_Graph1205->SetStats(0);
   Graph_Graph1205->SetLineWidth(2);
   Graph_Graph1205->SetMarkerStyle(20);
   Graph_Graph1205->SetMarkerSize(0.9);
   Graph_Graph1205->GetXaxis()->SetLabelFont(42);
   Graph_Graph1205->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1205->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1205->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1205->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1205->GetXaxis()->SetTitleFont(42);
   Graph_Graph1205->GetYaxis()->SetLabelFont(42);
   Graph_Graph1205->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1205->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1205->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1205->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1205->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1205->GetYaxis()->SetTitleFont(42);
   Graph_Graph1205->GetZaxis()->SetLabelFont(42);
   Graph_Graph1205->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1205->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1205->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1205->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1205->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1205);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx206[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph2_fy206[42] = { 1160.926, 17.02504, 16.96798, 12.58076, 12.12039, 12.15113, 12.34657, 25.46744, 35.67231, 46.93706, 57.5468, 108.633, 111.1271, 108.3291, 110.3099, 108.8467, 105.1531,
   109.3014, 109.8181, 109.8181, 109.8181, 26.8075, 26.8075, 26.8075, 26.69259, 25.7127, 26.59725, 26.91459, 26.45393, 27.12298, 26.53014, 14.90124, 12.34613,
   9.596146, 7.043092, 4.067349, 4.14373, 4.220541, 4.103988, 6.260527, 6.413775, 508.0431 };
   graph = new TGraph(42,Graph2_fx206,Graph2_fy206);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2206 = new TH1F("Graph_Graph2206","Graph",100,2.7,1099.7);
   Graph_Graph2206->SetMinimum(3.660614);
   Graph_Graph2206->SetMaximum(1276.612);
   Graph_Graph2206->SetDirectory(nullptr);
   Graph_Graph2206->SetStats(0);
   Graph_Graph2206->SetLineWidth(2);
   Graph_Graph2206->SetMarkerStyle(20);
   Graph_Graph2206->SetMarkerSize(0.9);
   Graph_Graph2206->GetXaxis()->SetLabelFont(42);
   Graph_Graph2206->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2206->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2206->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2206->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2206->GetXaxis()->SetTitleFont(42);
   Graph_Graph2206->GetYaxis()->SetLabelFont(42);
   Graph_Graph2206->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2206->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2206->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2206->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2206->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2206->GetYaxis()->SetTitleFont(42);
   Graph_Graph2206->GetZaxis()->SetLabelFont(42);
   Graph_Graph2206->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2206->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2206->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2206->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2206->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2206);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx207[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy207[20] = { 757.5462, 10.21849, 10.34327, 6.892724, 6.856261, 6.805988, 6.792314, 12.65785, 17.70313, 23.2699, 28.51126, 53.76754, 55.00202, 53.61712, 54.59753, 53.87332, 52.0452,
   54.09839, 54.3541, 54.3541 };
   graph = new TGraph(20,Graph0_fx207,Graph0_fy207);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0207 = new TH1F("Graph_Graph0207","",100,2.7,1099.7);
   Graph_Graph0207->SetMinimum(0.2);
   Graph_Graph0207->SetMaximum(100000);
   Graph_Graph0207->SetDirectory(nullptr);
   Graph_Graph0207->SetStats(0);
   Graph_Graph0207->SetLineWidth(2);
   Graph_Graph0207->SetMarkerStyle(20);
   Graph_Graph0207->SetMarkerSize(0.9);
   Graph_Graph0207->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0207->GetXaxis()->SetRange(0,91);
   Graph_Graph0207->GetXaxis()->SetLabelFont(42);
   Graph_Graph0207->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0207->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0207->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0207->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0207->GetXaxis()->SetTitleFont(42);
   Graph_Graph0207->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0207->GetYaxis()->SetLabelFont(42);
   Graph_Graph0207->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0207->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0207->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0207->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0207->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0207->GetYaxis()->SetTitleFont(42);
   Graph_Graph0207->GetZaxis()->SetLabelFont(42);
   Graph_Graph0207->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0207->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0207->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0207->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0207->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0207);
   
   graph->Draw("l");
   
   Double_t Graph_fx208[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph_fy208[20] = { 2.1199e-18, 7.97752e-13, 1.647058e-09, 2.548888e-07, 9.035315e-06, 0.0001280332, 0.0009872673, 108.3714, 231.7819, 301.2179, 317.5963, 249.4285, 184.7328, 141.3711, 112.241, 91.8516, 76.99408,
   65.79131, 57.10166, 57.10166 };
   graph = new TGraph(20,Graph_fx208,Graph_fy208);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph208 = new TH1F("Graph_Graph208","",100,2.7,1099.7);
   Graph_Graph208->SetMinimum(1.90791e-18);
   Graph_Graph208->SetMaximum(349.3559);
   Graph_Graph208->SetDirectory(nullptr);
   Graph_Graph208->SetStats(0);
   Graph_Graph208->SetLineWidth(2);
   Graph_Graph208->SetMarkerStyle(20);
   Graph_Graph208->SetMarkerSize(0.9);
   Graph_Graph208->GetXaxis()->SetLabelFont(42);
   Graph_Graph208->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph208->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph208->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph208->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph208->GetXaxis()->SetTitleFont(42);
   Graph_Graph208->GetYaxis()->SetLabelFont(42);
   Graph_Graph208->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph208->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph208->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph208->GetYaxis()->SetTickLength(0.02);
   Graph_Graph208->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph208->GetYaxis()->SetTitleFont(42);
   Graph_Graph208->GetZaxis()->SetLabelFont(42);
   Graph_Graph208->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph208->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph208->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph208->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph208->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph208);
   
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
   
   Double_t Graph_fx210[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph_fy210[20] = { 2.33189e-18, 8.775272e-13, 1.811764e-09, 2.803777e-07, 9.938847e-06, 0.0001408365, 0.001085994, 119.2085, 254.9601, 331.3397, 349.3559, 274.3714, 203.2061, 155.5082, 123.4651, 101.0368, 84.69349,
   72.37044, 62.81183, 62.81183 };
   graph = new TGraph(20,Graph_fx210,Graph_fy210);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph210 = new TH1F("Graph_Graph210","",100,2.7,1099.7);
   Graph_Graph210->SetMinimum(2.098701e-18);
   Graph_Graph210->SetMaximum(384.2915);
   Graph_Graph210->SetDirectory(nullptr);
   Graph_Graph210->SetStats(0);
   Graph_Graph210->SetLineWidth(2);
   Graph_Graph210->SetMarkerStyle(20);
   Graph_Graph210->SetMarkerSize(0.9);
   Graph_Graph210->GetXaxis()->SetLabelFont(42);
   Graph_Graph210->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph210->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph210->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph210->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph210->GetXaxis()->SetTitleFont(42);
   Graph_Graph210->GetYaxis()->SetLabelFont(42);
   Graph_Graph210->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph210->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph210->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph210->GetYaxis()->SetTickLength(0.02);
   Graph_Graph210->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph210->GetYaxis()->SetTitleFont(42);
   Graph_Graph210->GetZaxis()->SetLabelFont(42);
   Graph_Graph210->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph210->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph210->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph210->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph210->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph210);
   
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
   line = new TLine(33.93955,0,33.93955,11.20749);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(33.93455,0,"  33.94 TeV");

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
   pt_LaTex = pt->AddText("#varepsilon = 1.14e-07");
   pt_LaTex = pt->AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
