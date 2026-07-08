#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_17mnthNorm_rate_6.88e-07()
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
   
   Double_t Graph0_fx449[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy449[20] = { 757.5462, 10.21849, 10.34327, 6.892724, 6.856261, 6.805988, 6.792314, 12.65785, 17.70313, 23.2699, 28.51126, 53.76754, 55.00202, 53.61712, 54.59753, 53.87332, 52.0452,
   54.09839, 54.3541, 54.3541 };
   TGraph *graph = new TGraph(20,Graph0_fx449,Graph0_fy449);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0449 = new TH1F("Graph_Graph0449","",100,2.7,1099.7);
   Graph_Graph0449->SetMinimum(0.2);
   Graph_Graph0449->SetMaximum(100000);
   Graph_Graph0449->SetDirectory(nullptr);
   Graph_Graph0449->SetStats(0);
   Graph_Graph0449->SetLineWidth(2);
   Graph_Graph0449->SetMarkerStyle(20);
   Graph_Graph0449->SetMarkerSize(0.9);
   Graph_Graph0449->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0449->GetXaxis()->SetRange(0,91);
   Graph_Graph0449->GetXaxis()->SetLabelFont(42);
   Graph_Graph0449->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0449->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0449->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0449->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0449->GetXaxis()->SetTitleFont(42);
   Graph_Graph0449->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0449->GetYaxis()->SetLabelFont(42);
   Graph_Graph0449->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0449->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0449->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0449->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0449->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0449->GetYaxis()->SetTitleFont(42);
   Graph_Graph0449->GetZaxis()->SetLabelFont(42);
   Graph_Graph0449->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0449->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0449->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0449->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0449->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0449);
   
   graph->Draw("al");
   
   Double_t Graph1_fx450[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph1_fy450[42] = { 1720.352, 27.90013, 27.43299, 20.45865, 19.60471, 19.58701, 20.18621, 38.49057, 53.8325, 70.7602, 86.69836, 163.4988, 167.2527, 163.0414, 166.0227, 163.8205, 158.2614,
   164.5049, 165.2825, 165.2825, 165.2825, 16.01794, 16.01794, 16.01794, 15.95112, 15.38306, 15.89619, 16.08023, 15.81265, 16.20134, 15.8579, 9.197354, 7.685111,
   6.031651, 4.53485, 2.699894, 2.772078, 2.86258, 2.705659, 4.135912, 4.369327, 363.4345 };
   graph = new TGraph(42,Graph1_fx450,Graph1_fy450);
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
   
   TH1F *Graph_Graph1450 = new TH1F("Graph_Graph1450","Graph",100,2.7,1099.7);
   Graph_Graph1450->SetMinimum(2.429904);
   Graph_Graph1450->SetMaximum(1892.117);
   Graph_Graph1450->SetDirectory(nullptr);
   Graph_Graph1450->SetStats(0);
   Graph_Graph1450->SetLineWidth(2);
   Graph_Graph1450->SetMarkerStyle(20);
   Graph_Graph1450->SetMarkerSize(0.9);
   Graph_Graph1450->GetXaxis()->SetLabelFont(42);
   Graph_Graph1450->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1450->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1450->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph1450->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1450->GetXaxis()->SetTitleFont(42);
   Graph_Graph1450->GetYaxis()->SetLabelFont(42);
   Graph_Graph1450->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1450->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1450->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph1450->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1450->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1450->GetYaxis()->SetTitleFont(42);
   Graph_Graph1450->GetZaxis()->SetLabelFont(42);
   Graph_Graph1450->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1450->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph1450->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph1450->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph1450->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1450);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx451[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph2_fy451[42] = { 1160.926, 17.02504, 16.96798, 12.58076, 12.12039, 12.15113, 12.34657, 25.46744, 35.67231, 46.93706, 57.5468, 108.633, 111.1271, 108.3291, 110.3099, 108.8467, 105.1531,
   109.3014, 109.8181, 109.8181, 109.8181, 26.8075, 26.8075, 26.8075, 26.69259, 25.7127, 26.59725, 26.91459, 26.45393, 27.12298, 26.53014, 14.90124, 12.34613,
   9.596146, 7.043092, 4.067349, 4.14373, 4.220541, 4.103988, 6.260527, 6.413775, 508.0431 };
   graph = new TGraph(42,Graph2_fx451,Graph2_fy451);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph2451 = new TH1F("Graph_Graph2451","Graph",100,2.7,1099.7);
   Graph_Graph2451->SetMinimum(3.660614);
   Graph_Graph2451->SetMaximum(1276.612);
   Graph_Graph2451->SetDirectory(nullptr);
   Graph_Graph2451->SetStats(0);
   Graph_Graph2451->SetLineWidth(2);
   Graph_Graph2451->SetMarkerStyle(20);
   Graph_Graph2451->SetMarkerSize(0.9);
   Graph_Graph2451->GetXaxis()->SetLabelFont(42);
   Graph_Graph2451->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph2451->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph2451->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph2451->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2451->GetXaxis()->SetTitleFont(42);
   Graph_Graph2451->GetYaxis()->SetLabelFont(42);
   Graph_Graph2451->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph2451->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph2451->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph2451->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2451->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph2451->GetYaxis()->SetTitleFont(42);
   Graph_Graph2451->GetZaxis()->SetLabelFont(42);
   Graph_Graph2451->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph2451->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph2451->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph2451->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph2451->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2451);
   
   graph->Draw("lf");
   
   Double_t Graph0_fx452[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy452[20] = { 757.5462, 10.21849, 10.34327, 6.892724, 6.856261, 6.805988, 6.792314, 12.65785, 17.70313, 23.2699, 28.51126, 53.76754, 55.00202, 53.61712, 54.59753, 53.87332, 52.0452,
   54.09839, 54.3541, 54.3541 };
   graph = new TGraph(20,Graph0_fx452,Graph0_fy452);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph0452 = new TH1F("Graph_Graph0452","",100,2.7,1099.7);
   Graph_Graph0452->SetMinimum(0.2);
   Graph_Graph0452->SetMaximum(100000);
   Graph_Graph0452->SetDirectory(nullptr);
   Graph_Graph0452->SetStats(0);
   Graph_Graph0452->SetLineWidth(2);
   Graph_Graph0452->SetMarkerStyle(20);
   Graph_Graph0452->SetMarkerSize(0.9);
   Graph_Graph0452->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph0452->GetXaxis()->SetRange(0,91);
   Graph_Graph0452->GetXaxis()->SetLabelFont(42);
   Graph_Graph0452->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph0452->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph0452->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph0452->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph0452->GetXaxis()->SetTitleFont(42);
   Graph_Graph0452->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph0452->GetYaxis()->SetLabelFont(42);
   Graph_Graph0452->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph0452->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph0452->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph0452->GetYaxis()->SetTickLength(0.02);
   Graph_Graph0452->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph0452->GetYaxis()->SetTitleFont(42);
   Graph_Graph0452->GetZaxis()->SetLabelFont(42);
   Graph_Graph0452->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph0452->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph0452->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph0452->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph0452->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0452);
   
   graph->Draw("l");
   
   Double_t Graph_fx453[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph_fy453[20] = { 0, 0, 0, 0, 0, 5.608671e-307, 3.787078e-272, 1.151787e-56, 5.71427e-36, 1.131031e-25, 1.534959e-19, 1.997209e-07, 0.001750278, 0.1457023, 1.928337, 10.29758, 32.9591,
   76.92873, 145.8789, 145.8789 };
   graph = new TGraph(20,Graph_fx453,Graph_fy453);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph453 = new TH1F("Graph_Graph453","",100,2.7,1099.7);
   Graph_Graph453->SetMinimum(0.1604668);
   Graph_Graph453->SetMaximum(160.4668);
   Graph_Graph453->SetDirectory(nullptr);
   Graph_Graph453->SetStats(0);
   Graph_Graph453->SetLineWidth(2);
   Graph_Graph453->SetMarkerStyle(20);
   Graph_Graph453->SetMarkerSize(0.9);
   Graph_Graph453->GetXaxis()->SetLabelFont(42);
   Graph_Graph453->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph453->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph453->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph453->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph453->GetXaxis()->SetTitleFont(42);
   Graph_Graph453->GetYaxis()->SetLabelFont(42);
   Graph_Graph453->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph453->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph453->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph453->GetYaxis()->SetTickLength(0.02);
   Graph_Graph453->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph453->GetYaxis()->SetTitleFont(42);
   Graph_Graph453->GetZaxis()->SetLabelFont(42);
   Graph_Graph453->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph453->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph453->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph453->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph453->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph453);
   
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
   
   Double_t Graph_fx455[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph_fy455[20] = { 0, 0, 0, 0, 0, 6.169538e-307, 4.165786e-272, 1.266966e-56, 6.285697e-36, 1.244134e-25, 1.688455e-19, 2.19693e-07, 0.001925306, 0.1602725, 2.121171, 11.32734, 36.25501,
   84.6216, 160.4668, 160.4668 };
   graph = new TGraph(20,Graph_fx455,Graph_fy455);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph455 = new TH1F("Graph_Graph455","",100,2.7,1099.7);
   Graph_Graph455->SetMinimum(0.1765135);
   Graph_Graph455->SetMaximum(176.5135);
   Graph_Graph455->SetDirectory(nullptr);
   Graph_Graph455->SetStats(0);
   Graph_Graph455->SetLineWidth(2);
   Graph_Graph455->SetMarkerStyle(20);
   Graph_Graph455->SetMarkerSize(0.9);
   Graph_Graph455->GetXaxis()->SetLabelFont(42);
   Graph_Graph455->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph455->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph455->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph455->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph455->GetXaxis()->SetTitleFont(42);
   Graph_Graph455->GetYaxis()->SetLabelFont(42);
   Graph_Graph455->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph455->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph455->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph455->GetYaxis()->SetTickLength(0.02);
   Graph_Graph455->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph455->GetYaxis()->SetTitleFont(42);
   Graph_Graph455->GetZaxis()->SetLabelFont(42);
   Graph_Graph455->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph455->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph455->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph455->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph455->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph455);
   
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
   line = new TLine(756.4759,0,756.4759,53.19499);

   ci = TColor::GetColor("#666666");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   TLatex *   tex = new TLatex(756.4709,0,"  756.48 TeV");

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
   pt_LaTex = pt->AddText("#varepsilon = 6.88e-07");
   pt_LaTex = pt->AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
