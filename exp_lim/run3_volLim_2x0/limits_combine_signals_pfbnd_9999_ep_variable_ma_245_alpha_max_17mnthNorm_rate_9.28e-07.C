#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_17mnthNorm_rate_9.28e-07()
{
//=========Macro generated from canvas: climits/climits
//=========  (Thu Jun 11 01:13:40 2026) by ROOT version 6.30/07
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
   
   Double_t Graph0_fx519[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy519[20] = { 757.5462, 10.21849, 10.34327, 6.892724, 6.856261, 6.805988, 6.792314, 12.65785, 17.70313, 23.2699, 28.51126, 53.76754, 55.00202, 53.61712, 54.59753, 53.87332, 52.0452,
   54.09839, 54.3541, 54.3541 };
   TGraph *graph = new TGraph(20,Graph0_fx519,Graph0_fy519);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0519 = new TH1F("Graph_Graph0519","",100,2.7,1099.7);
   Graph_Graph0519->SetMinimum(0.2);
   Graph_Graph0519->SetMaximum(100000);
   Graph_Graph0519->SetDirectory(nullptr);
   Graph_Graph0519->SetStats(0);
   Graph_Graph0519->SetLineWidth(2);
   Graph_Graph0519->SetMarkerStyle(20);
   Graph_Graph0519->SetMarkerSize(0.9);
   Graph_Graph0519->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0519->GetXaxis()->SetRange(0,91);
   Graph_Graph0519->GetXaxis()->SetLabelFont(42);
   Graph_Graph0519->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0519->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0519->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0519->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0519->GetXaxis()->SetTitleFont(42);
   Graph_Graph0519->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0519->GetYaxis()->SetLabelFont(42);
   Graph_Graph0519->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0519->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0519->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0519->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0519->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0519->GetYaxis()->SetTitleFont(42);
   Graph_Graph0519->GetZaxis()->SetLabelFont(42);
   Graph_Graph0519->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0519->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0519->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0519->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0519->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0519);
   
   graph->Draw("al");
   
   Double_t Graph1_fx520[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph1_fy520[42] = { 1720.352, 27.90013, 27.43299, 20.45865, 19.60471, 19.58701, 20.18621, 38.49057, 53.8325, 70.7602, 86.69836, 163.4988, 167.2527, 163.0414, 166.0227, 163.8205, 158.2614,
   164.5049, 165.2825, 165.2825, 165.2825, 16.01794, 16.01794, 16.01794, 15.95112, 15.38306, 15.89619, 16.08023, 15.81265, 16.20134, 15.8579, 9.197354, 7.685111,
   6.031651, 4.53485, 2.699894, 2.772078, 2.86258, 2.705659, 4.135912, 4.369327, 363.4345 };
   graph = new TGraph(42,Graph1_fx520,Graph1_fy520);
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
   
   TH1F *Graph_Graph1520 = new TH1F("Graph_Graph1520","Graph",100,2.7,1099.7);
   Graph_Graph1520->SetMinimum(2.429904);
   Graph_Graph1520->SetMaximum(1892.117);
   Graph_Graph1520->SetDirectory(nullptr);
   Graph_Graph1520->SetStats(0);
   Graph_Graph1520->SetLineWidth(2);
   Graph_Graph1520->SetMarkerStyle(20);
   Graph_Graph1520->SetMarkerSize(0.9);
   Graph_Graph1520->GetXaxis()->SetLabelFont(42);
   Graph_Graph1520->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1520->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1520->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1520->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1520->GetXaxis()->SetTitleFont(42);
   Graph_Graph1520->GetYaxis()->SetLabelFont(42);
   Graph_Graph1520->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1520->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1520->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1520->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1520->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1520->GetYaxis()->SetTitleFont(42);
   Graph_Graph1520->GetZaxis()->SetLabelFont(42);
   Graph_Graph1520->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1520->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1520->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1520->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1520->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1520);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx521[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph2_fy521[42] = { 1160.926, 17.02504, 16.96798, 12.58076, 12.12039, 12.15113, 12.34657, 25.46744, 35.67231, 46.93706, 57.5468, 108.633, 111.1271, 108.3291, 110.3099, 108.8467, 105.1531,
   109.3014, 109.8181, 109.8181, 109.8181, 26.8075, 26.8075, 26.8075, 26.69259, 25.7127, 26.59725, 26.91459, 26.45393, 27.12298, 26.53014, 14.90124, 12.34613,
   9.596146, 7.043092, 4.067349, 4.14373, 4.220541, 4.103988, 6.260527, 6.413775, 508.0431 };
   graph = new TGraph(42,Graph2_fx521,Graph2_fy521);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2521 = new TH1F("Graph_Graph2521","Graph",100,2.7,1099.7);
   Graph_Graph2521->SetMinimum(3.660614);
   Graph_Graph2521->SetMaximum(1276.612);
   Graph_Graph2521->SetDirectory(nullptr);
   Graph_Graph2521->SetStats(0);
   Graph_Graph2521->SetLineWidth(2);
   Graph_Graph2521->SetMarkerStyle(20);
   Graph_Graph2521->SetMarkerSize(0.9);
   Graph_Graph2521->GetXaxis()->SetLabelFont(42);
   Graph_Graph2521->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2521->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2521->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2521->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2521->GetXaxis()->SetTitleFont(42);
   Graph_Graph2521->GetYaxis()->SetLabelFont(42);
   Graph_Graph2521->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2521->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2521->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2521->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2521->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2521->GetYaxis()->SetTitleFont(42);
   Graph_Graph2521->GetZaxis()->SetLabelFont(42);
   Graph_Graph2521->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2521->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2521->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2521->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2521->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2521);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx522[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy522[20] = { 757.5462, 10.21849, 10.34327, 6.892724, 6.856261, 6.805988, 6.792314, 12.65785, 17.70313, 23.2699, 28.51126, 53.76754, 55.00202, 53.61712, 54.59753, 53.87332, 52.0452,
   54.09839, 54.3541, 54.3541 };
   graph = new TGraph(20,Graph0_fx522,Graph0_fy522);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0522 = new TH1F("Graph_Graph0522","",100,2.7,1099.7);
   Graph_Graph0522->SetMinimum(0.2);
   Graph_Graph0522->SetMaximum(100000);
   Graph_Graph0522->SetDirectory(nullptr);
   Graph_Graph0522->SetStats(0);
   Graph_Graph0522->SetLineWidth(2);
   Graph_Graph0522->SetMarkerStyle(20);
   Graph_Graph0522->SetMarkerSize(0.9);
   Graph_Graph0522->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0522->GetXaxis()->SetRange(0,91);
   Graph_Graph0522->GetXaxis()->SetLabelFont(42);
   Graph_Graph0522->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0522->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0522->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0522->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0522->GetXaxis()->SetTitleFont(42);
   Graph_Graph0522->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0522->GetYaxis()->SetLabelFont(42);
   Graph_Graph0522->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0522->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0522->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0522->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0522->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0522->GetYaxis()->SetTitleFont(42);
   Graph_Graph0522->GetZaxis()->SetLabelFont(42);
   Graph_Graph0522->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0522->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0522->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0522->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0522->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0522);
   
   graph->Draw("l");
   
   Double_t Graph_fx523[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph_fy523[20] = { 0, 0, 0, 0, 0, 0, 0, 1.282432e-107, 9.148363e-70, 6.866244e-51, 1.308156e-39, 3.354463e-17, 7.940586e-10, 3.435461e-06, 0.0004865925, 0.01261906, 0.1248786,
   0.6796212, 2.48962, 2.48962 };
   graph = new TGraph(20,Graph_fx523,Graph_fy523);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph523 = new TH1F("Graph_Graph523","",100,2.7,1099.7);
   Graph_Graph523->SetMinimum(0.002738582);
   Graph_Graph523->SetMaximum(2.738582);
   Graph_Graph523->SetDirectory(nullptr);
   Graph_Graph523->SetStats(0);
   Graph_Graph523->SetLineWidth(2);
   Graph_Graph523->SetMarkerStyle(20);
   Graph_Graph523->SetMarkerSize(0.9);
   Graph_Graph523->GetXaxis()->SetLabelFont(42);
   Graph_Graph523->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph523->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph523->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph523->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph523->GetXaxis()->SetTitleFont(42);
   Graph_Graph523->GetYaxis()->SetLabelFont(42);
   Graph_Graph523->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph523->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph523->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph523->GetYaxis()->SetTickLength(0.02);
   Graph_Graph523->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph523->GetYaxis()->SetTitleFont(42);
   Graph_Graph523->GetZaxis()->SetLabelFont(42);
   Graph_Graph523->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph523->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph523->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph523->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph523->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph523);
   
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
   
   Double_t Graph_fx525[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph_fy525[20] = { 0, 0, 0, 0, 0, 0, 0, 1.410675e-107, 1.00632e-69, 7.552868e-51, 1.438972e-39, 3.689909e-17, 8.734645e-10, 3.779007e-06, 0.0005352518, 0.01388097, 0.1373665,
   0.7475833, 2.738582, 2.738582 };
   graph = new TGraph(20,Graph_fx525,Graph_fy525);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph525 = new TH1F("Graph_Graph525","",100,2.7,1099.7);
   Graph_Graph525->SetMinimum(0.00301244);
   Graph_Graph525->SetMaximum(3.01244);
   Graph_Graph525->SetDirectory(nullptr);
   Graph_Graph525->SetStats(0);
   Graph_Graph525->SetLineWidth(2);
   Graph_Graph525->SetMarkerStyle(20);
   Graph_Graph525->SetMarkerSize(0.9);
   Graph_Graph525->GetXaxis()->SetLabelFont(42);
   Graph_Graph525->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph525->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph525->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph525->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph525->GetXaxis()->SetTitleFont(42);
   Graph_Graph525->GetYaxis()->SetLabelFont(42);
   Graph_Graph525->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph525->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph525->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph525->GetYaxis()->SetTickLength(0.02);
   Graph_Graph525->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph525->GetYaxis()->SetTitleFont(42);
   Graph_Graph525->GetZaxis()->SetLabelFont(42);
   Graph_Graph525->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph525->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph525->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph525->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph525->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph525);
   
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
   pt_LaTex = pt->AddText("#varepsilon = 9.28e-07");
   pt_LaTex = pt->AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
