#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_17mnthNorm_rate_9.04e-07()
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
   
   Double_t Graph0_fx512[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy512[20] = { 757.5462, 10.21849, 10.34327, 6.892724, 6.856261, 6.805988, 6.792314, 12.65785, 17.70313, 23.2699, 28.51126, 53.76754, 55.00202, 53.61712, 54.59753, 53.87332, 52.0452,
   54.09839, 54.3541, 54.3541 };
   TGraph *graph = new TGraph(20,Graph0_fx512,Graph0_fy512);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0512 = new TH1F("Graph_Graph0512","",100,2.7,1099.7);
   Graph_Graph0512->SetMinimum(0.2);
   Graph_Graph0512->SetMaximum(100000);
   Graph_Graph0512->SetDirectory(nullptr);
   Graph_Graph0512->SetStats(0);
   Graph_Graph0512->SetLineWidth(2);
   Graph_Graph0512->SetMarkerStyle(20);
   Graph_Graph0512->SetMarkerSize(0.9);
   Graph_Graph0512->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0512->GetXaxis()->SetRange(0,91);
   Graph_Graph0512->GetXaxis()->SetLabelFont(42);
   Graph_Graph0512->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0512->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0512->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0512->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0512->GetXaxis()->SetTitleFont(42);
   Graph_Graph0512->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0512->GetYaxis()->SetLabelFont(42);
   Graph_Graph0512->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0512->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0512->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0512->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0512->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0512->GetYaxis()->SetTitleFont(42);
   Graph_Graph0512->GetZaxis()->SetLabelFont(42);
   Graph_Graph0512->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0512->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0512->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0512->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0512->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0512);
   
   graph->Draw("al");
   
   Double_t Graph1_fx513[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph1_fy513[42] = { 1720.352, 27.90013, 27.43299, 20.45865, 19.60471, 19.58701, 20.18621, 38.49057, 53.8325, 70.7602, 86.69836, 163.4988, 167.2527, 163.0414, 166.0227, 163.8205, 158.2614,
   164.5049, 165.2825, 165.2825, 165.2825, 16.01794, 16.01794, 16.01794, 15.95112, 15.38306, 15.89619, 16.08023, 15.81265, 16.20134, 15.8579, 9.197354, 7.685111,
   6.031651, 4.53485, 2.699894, 2.772078, 2.86258, 2.705659, 4.135912, 4.369327, 363.4345 };
   graph = new TGraph(42,Graph1_fx513,Graph1_fy513);
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
   
   TH1F *Graph_Graph1513 = new TH1F("Graph_Graph1513","Graph",100,2.7,1099.7);
   Graph_Graph1513->SetMinimum(2.429904);
   Graph_Graph1513->SetMaximum(1892.117);
   Graph_Graph1513->SetDirectory(nullptr);
   Graph_Graph1513->SetStats(0);
   Graph_Graph1513->SetLineWidth(2);
   Graph_Graph1513->SetMarkerStyle(20);
   Graph_Graph1513->SetMarkerSize(0.9);
   Graph_Graph1513->GetXaxis()->SetLabelFont(42);
   Graph_Graph1513->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1513->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1513->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1513->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1513->GetXaxis()->SetTitleFont(42);
   Graph_Graph1513->GetYaxis()->SetLabelFont(42);
   Graph_Graph1513->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1513->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1513->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1513->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1513->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1513->GetYaxis()->SetTitleFont(42);
   Graph_Graph1513->GetZaxis()->SetLabelFont(42);
   Graph_Graph1513->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1513->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1513->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1513->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1513->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1513);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx514[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph2_fy514[42] = { 1160.926, 17.02504, 16.96798, 12.58076, 12.12039, 12.15113, 12.34657, 25.46744, 35.67231, 46.93706, 57.5468, 108.633, 111.1271, 108.3291, 110.3099, 108.8467, 105.1531,
   109.3014, 109.8181, 109.8181, 109.8181, 26.8075, 26.8075, 26.8075, 26.69259, 25.7127, 26.59725, 26.91459, 26.45393, 27.12298, 26.53014, 14.90124, 12.34613,
   9.596146, 7.043092, 4.067349, 4.14373, 4.220541, 4.103988, 6.260527, 6.413775, 508.0431 };
   graph = new TGraph(42,Graph2_fx514,Graph2_fy514);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2514 = new TH1F("Graph_Graph2514","Graph",100,2.7,1099.7);
   Graph_Graph2514->SetMinimum(3.660614);
   Graph_Graph2514->SetMaximum(1276.612);
   Graph_Graph2514->SetDirectory(nullptr);
   Graph_Graph2514->SetStats(0);
   Graph_Graph2514->SetLineWidth(2);
   Graph_Graph2514->SetMarkerStyle(20);
   Graph_Graph2514->SetMarkerSize(0.9);
   Graph_Graph2514->GetXaxis()->SetLabelFont(42);
   Graph_Graph2514->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2514->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2514->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2514->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2514->GetXaxis()->SetTitleFont(42);
   Graph_Graph2514->GetYaxis()->SetLabelFont(42);
   Graph_Graph2514->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2514->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2514->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2514->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2514->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2514->GetYaxis()->SetTitleFont(42);
   Graph_Graph2514->GetZaxis()->SetLabelFont(42);
   Graph_Graph2514->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2514->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2514->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2514->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2514->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2514);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx515[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy515[20] = { 757.5462, 10.21849, 10.34327, 6.892724, 6.856261, 6.805988, 6.792314, 12.65785, 17.70313, 23.2699, 28.51126, 53.76754, 55.00202, 53.61712, 54.59753, 53.87332, 52.0452,
   54.09839, 54.3541, 54.3541 };
   graph = new TGraph(20,Graph0_fx515,Graph0_fy515);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0515 = new TH1F("Graph_Graph0515","",100,2.7,1099.7);
   Graph_Graph0515->SetMinimum(0.2);
   Graph_Graph0515->SetMaximum(100000);
   Graph_Graph0515->SetDirectory(nullptr);
   Graph_Graph0515->SetStats(0);
   Graph_Graph0515->SetLineWidth(2);
   Graph_Graph0515->SetMarkerStyle(20);
   Graph_Graph0515->SetMarkerSize(0.9);
   Graph_Graph0515->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0515->GetXaxis()->SetRange(0,91);
   Graph_Graph0515->GetXaxis()->SetLabelFont(42);
   Graph_Graph0515->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0515->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0515->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0515->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0515->GetXaxis()->SetTitleFont(42);
   Graph_Graph0515->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0515->GetYaxis()->SetLabelFont(42);
   Graph_Graph0515->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0515->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0515->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0515->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0515->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0515->GetYaxis()->SetTitleFont(42);
   Graph_Graph0515->GetZaxis()->SetLabelFont(42);
   Graph_Graph0515->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0515->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0515->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0515->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0515->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0515);
   
   graph->Draw("l");
   
   Double_t Graph_fx516[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph_fy516[20] = { 0, 0, 0, 0, 0, 0, 0, 7.903891e-102, 6.397973e-66, 5.115219e-48, 2.542564e-37, 4.437827e-16, 4.289217e-09, 1.185768e-05, 0.001283729, 0.02783113, 0.2423355,
   1.198161, 4.073454, 4.073454 };
   graph = new TGraph(20,Graph_fx516,Graph_fy516);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph516 = new TH1F("Graph_Graph516","",100,2.7,1099.7);
   Graph_Graph516->SetMinimum(0.004480799);
   Graph_Graph516->SetMaximum(4.480799);
   Graph_Graph516->SetDirectory(nullptr);
   Graph_Graph516->SetStats(0);
   Graph_Graph516->SetLineWidth(2);
   Graph_Graph516->SetMarkerStyle(20);
   Graph_Graph516->SetMarkerSize(0.9);
   Graph_Graph516->GetXaxis()->SetLabelFont(42);
   Graph_Graph516->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph516->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph516->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph516->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph516->GetXaxis()->SetTitleFont(42);
   Graph_Graph516->GetYaxis()->SetLabelFont(42);
   Graph_Graph516->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph516->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph516->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph516->GetYaxis()->SetTickLength(0.02);
   Graph_Graph516->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph516->GetYaxis()->SetTitleFont(42);
   Graph_Graph516->GetZaxis()->SetLabelFont(42);
   Graph_Graph516->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph516->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph516->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph516->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph516->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph516);
   
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
   
   Double_t Graph_fx518[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph_fy518[20] = { 0, 0, 0, 0, 0, 0, 0, 8.69428e-102, 7.03777e-66, 5.626741e-48, 2.79682e-37, 4.88161e-16, 4.718139e-09, 1.304345e-05, 0.001412102, 0.03061424, 0.2665691,
   1.317977, 4.480799, 4.480799 };
   graph = new TGraph(20,Graph_fx518,Graph_fy518);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph518 = new TH1F("Graph_Graph518","",100,2.7,1099.7);
   Graph_Graph518->SetMinimum(0.004928879);
   Graph_Graph518->SetMaximum(4.928879);
   Graph_Graph518->SetDirectory(nullptr);
   Graph_Graph518->SetStats(0);
   Graph_Graph518->SetLineWidth(2);
   Graph_Graph518->SetMarkerStyle(20);
   Graph_Graph518->SetMarkerSize(0.9);
   Graph_Graph518->GetXaxis()->SetLabelFont(42);
   Graph_Graph518->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph518->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph518->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph518->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph518->GetXaxis()->SetTitleFont(42);
   Graph_Graph518->GetYaxis()->SetLabelFont(42);
   Graph_Graph518->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph518->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph518->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph518->GetYaxis()->SetTickLength(0.02);
   Graph_Graph518->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph518->GetYaxis()->SetTitleFont(42);
   Graph_Graph518->GetZaxis()->SetLabelFont(42);
   Graph_Graph518->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph518->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph518->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph518->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph518->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph518);
   
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
   pt_LaTex = pt->AddText("#varepsilon = 9.04e-07");
   pt_LaTex = pt->AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
