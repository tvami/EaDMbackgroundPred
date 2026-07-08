#ifdef __CLING__
#pragma cling optimize(0)
#endif
void limits_combine_signals_pfbnd_9999_ep_variable_ma_245_alpha_max_17mnthNorm_rate_Vol_5e-09()
{
//=========Macro generated from canvas: climits/climits
//=========  (Sat Jul  4 12:17:21 2026) by ROOT version 6.30/07
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
   
   Double_t Graph0_fx8[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy8[20] = { 87.81109, 7.17615, 6.310367, 4.949822, 4.540165, 4.328125, 4.208751, 5.772179, 7.953115, 10.36692, 12.68648, 23.27674, 23.92231, 23.2048, 23.65032, 23.42627, 22.45407,
   23.48842, 23.57745, 23.57745 };
   TGraph *graph = new TGraph(20,Graph0_fx8,Graph0_fy8);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph08 = new TH1F("Graph_Graph08","",100,2.7,1099.7);
   Graph_Graph08->SetMinimum(0.2);
   Graph_Graph08->SetMaximum(100000);
   Graph_Graph08->SetDirectory(nullptr);
   Graph_Graph08->SetStats(0);
   Graph_Graph08->SetLineWidth(2);
   Graph_Graph08->SetMarkerStyle(20);
   Graph_Graph08->SetMarkerSize(0.9);
   Graph_Graph08->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph08->GetXaxis()->SetRange(0,91);
   Graph_Graph08->GetXaxis()->SetLabelFont(42);
   Graph_Graph08->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph08->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph08->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph08->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph08->GetXaxis()->SetTitleFont(42);
   Graph_Graph08->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph08->GetYaxis()->SetLabelFont(42);
   Graph_Graph08->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph08->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph08->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph08->GetYaxis()->SetTickLength(0.02);
   Graph_Graph08->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph08->GetYaxis()->SetTitleFont(42);
   Graph_Graph08->GetZaxis()->SetLabelFont(42);
   Graph_Graph08->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph08->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph08->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph08->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph08->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph08);
   
   graph->Draw("al");
   
   Double_t Graph1_fx9[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph1_fy9[42] = { 225.9655, 19.13919, 18.1301, 14.63901, 13.37994, 12.81698, 12.47269, 17.55231, 24.1842, 31.52421, 38.57764, 70.78099, 72.74408, 70.56223, 71.91698, 71.23569, 68.27937,
   71.42468, 71.69539, 71.69539, 71.69539, 6.092538, 6.092538, 6.092538, 6.069666, 5.838785, 6.052617, 6.112515, 6.009083, 6.168825, 6.026643, 3.582317, 2.980722,
   2.357333, 1.800408, 1.631254, 1.700126, 1.798089, 1.955746, 2.482647, 3.165121, 37.09668 };
   graph = new TGraph(42,Graph1_fx9,Graph1_fy9);
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
   
   TH1F *Graph_Graph19 = new TH1F("Graph_Graph19","Graph",100,2.7,1099.7);
   Graph_Graph19->SetMinimum(1.468128);
   Graph_Graph19->SetMaximum(248.399);
   Graph_Graph19->SetDirectory(nullptr);
   Graph_Graph19->SetStats(0);
   Graph_Graph19->SetLineWidth(2);
   Graph_Graph19->SetMarkerStyle(20);
   Graph_Graph19->SetMarkerSize(0.9);
   Graph_Graph19->GetXaxis()->SetLabelFont(42);
   Graph_Graph19->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph19->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph19->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph19->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph19->GetXaxis()->SetTitleFont(42);
   Graph_Graph19->GetYaxis()->SetLabelFont(42);
   Graph_Graph19->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph19->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph19->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph19->GetYaxis()->SetTickLength(0.02);
   Graph_Graph19->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph19->GetYaxis()->SetTitleFont(42);
   Graph_Graph19->GetZaxis()->SetLabelFont(42);
   Graph_Graph19->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph19->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph19->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph19->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph19->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph19);
   
   graph->Draw("lf");
   
   Double_t Graph2_fx10[42] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000, 1000, 1000, 1000, 900, 800, 700, 600, 500, 400, 300, 200, 100, 80,
   60, 40, 9, 8, 7, 6, 5, 4, 3 };
   Double_t Graph2_fy10[42] = { 144.1124, 11.76302, 11.14282, 8.951492, 8.21902, 7.927551, 7.760462, 11.62097, 16.04632, 20.9452, 25.63201, 47.02878, 48.3331, 46.88342, 47.78356, 47.33089, 45.36663,
   47.45646, 47.63632, 47.63632, 47.63632, 10.87734, 10.87734, 10.87734, 10.83851, 10.39067, 10.81232, 10.90918, 10.71541, 11.02763, 10.7485, 6.147948, 5.098804,
   3.985781, 2.984814, 2.485988, 2.572454, 2.710829, 2.954348, 3.74544, 4.563699, 54.90678 };
   graph = new TGraph(42,Graph2_fx10,Graph2_fy10);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");

   ci = TColor::GetColor("#00cc00");
   graph->SetFillColor(ci);
   graph->SetFillStyle(1000);
   graph->SetLineColor(0);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.9);
   
   TH1F *Graph_Graph210 = new TH1F("Graph_Graph210","Graph",100,2.7,1099.7);
   Graph_Graph210->SetMinimum(2.237389);
   Graph_Graph210->SetMaximum(158.2751);
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
   
   graph->Draw("lf");
   
   Double_t Graph0_fx11[20] = { 3, 4, 5, 6, 7, 8, 9, 40, 60, 80, 100, 200, 300, 400, 500, 600, 700,
   800, 900, 1000 };
   Double_t Graph0_fy11[20] = { 87.81109, 7.17615, 6.310367, 4.949822, 4.540165, 4.328125, 4.208751, 5.772179, 7.953115, 10.36692, 12.68648, 23.27674, 23.92231, 23.2048, 23.65032, 23.42627, 22.45407,
   23.48842, 23.57745, 23.57745 };
   graph = new TGraph(20,Graph0_fx11,Graph0_fy11);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(21);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph011 = new TH1F("Graph_Graph011","",100,2.7,1099.7);
   Graph_Graph011->SetMinimum(0.2);
   Graph_Graph011->SetMaximum(100000);
   Graph_Graph011->SetDirectory(nullptr);
   Graph_Graph011->SetStats(0);
   Graph_Graph011->SetLineWidth(2);
   Graph_Graph011->SetMarkerStyle(20);
   Graph_Graph011->SetMarkerSize(0.9);
   Graph_Graph011->GetXaxis()->SetTitle("m(#chi) [TeV]");
   Graph_Graph011->GetXaxis()->SetRange(0,91);
   Graph_Graph011->GetXaxis()->SetLabelFont(42);
   Graph_Graph011->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph011->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph011->GetXaxis()->SetTitleSize(0.055);
   Graph_Graph011->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph011->GetXaxis()->SetTitleFont(42);
   Graph_Graph011->GetYaxis()->SetTitle("Monthly DM-induced muon rate");
   Graph_Graph011->GetYaxis()->SetLabelFont(42);
   Graph_Graph011->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph011->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph011->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph011->GetYaxis()->SetTickLength(0.02);
   Graph_Graph011->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph011->GetYaxis()->SetTitleFont(42);
   Graph_Graph011->GetZaxis()->SetLabelFont(42);
   Graph_Graph011->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph011->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph011->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph011->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph011->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph011);
   
   graph->Draw("l");
   
   Double_t Graph_fx12[72] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180, 185, 190, 195, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450,
   475, 500, 600, 700, 800, 900, 1000 };
   Double_t Graph_fy12[72] = { 1.545399, 1.339578, 1.176535, 1.044727, 0.8458737, 0.7694296, 0.7041139, 0.6477653, 0.5987356, 0.5557481, 0.5177998, 0.4840931, 0.4539864, 0.4269581, 0.4025805, 0.3804998, 0.3604209,
   0.3253153, 0.309901, 0.2957004, 0.2825824, 0.2539087, 0.229738, 0.2093935, 0.1918597, 0.1767882, 0.1635754, 0.1520299, 0.04040113, 0.03142066, 0.02539748, 0.02111812, 0.0179441,
   0.01551006, 0.01359311, 0.01205018, 0.009733149, 0.008845672, 0.008088751, 0.007436726, 0.00687011, 0.006256701, 0.00573757, 0.004909935, 0.004281766, 0.003789614, 0.003393714, 0.003068207, 0.002795696,
   0.002564106, 0.002364811, 0.002275231, 0.002191491, 0.002113041, 0.002039401, 0.00173012, 0.001494116, 0.001308705, 0.001159672, 0.00103763, 0.0009361211, 0.0008505647, 0.0007776231, 0.0007148111, 0.000660243,
   0.0006124641, 0.0005703355, 0.0004427032, 0.0003573454, 0.0002968268, 0.000252011, 0.000252011 };
   graph = new TGraph(72,Graph_fx12,Graph_fy12);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(3);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph12 = new TH1F("Graph_Graph12","",100,1.44,1099.84);
   Graph_Graph12->SetMinimum(0.0002268099);
   Graph_Graph12->SetMaximum(1.699914);
   Graph_Graph12->SetDirectory(nullptr);
   Graph_Graph12->SetStats(0);
   Graph_Graph12->SetLineWidth(2);
   Graph_Graph12->SetMarkerStyle(20);
   Graph_Graph12->SetMarkerSize(0.9);
   Graph_Graph12->GetXaxis()->SetLabelFont(42);
   Graph_Graph12->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph12->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph12->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph12->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph12->GetXaxis()->SetTitleFont(42);
   Graph_Graph12->GetYaxis()->SetLabelFont(42);
   Graph_Graph12->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph12->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph12->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph12->GetYaxis()->SetTickLength(0.02);
   Graph_Graph12->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph12->GetYaxis()->SetTitleFont(42);
   Graph_Graph12->GetZaxis()->SetLabelFont(42);
   Graph_Graph12->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph12->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph12->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph12->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph12->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph12);
   
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
   
   Double_t Graph_fx14[72] = { 1.6, 1.8, 2, 2.2, 2.6, 2.8, 3, 3.2, 3.4, 3.6, 3.8, 4, 4.2, 4.4, 4.6, 4.8, 5,
   5.4, 5.6, 5.8, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 25, 30, 35, 40, 45,
   50, 55, 60, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160,
   170, 180, 185, 190, 195, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450,
   475, 500, 600, 700, 800, 900, 1000 };
   Double_t Graph_fy14[72] = { 1.699939, 1.473536, 1.294189, 1.1492, 0.9304611, 0.8463726, 0.7745253, 0.7125418, 0.6586092, 0.6113229, 0.5695798, 0.5325024, 0.499385, 0.4696539, 0.4428386, 0.4185498, 0.396463,
   0.3578468, 0.3408911, 0.3252704, 0.3108406, 0.2792996, 0.2527118, 0.2303329, 0.2110457, 0.194467, 0.1799329, 0.1672329, 0.04444124, 0.03456273, 0.02793723, 0.02322993, 0.01973851,
   0.01706107, 0.01495242, 0.0132552, 0.01070646, 0.009730239, 0.008897626, 0.008180399, 0.007557121, 0.006882371, 0.006311327, 0.005400928, 0.004709943, 0.004168575, 0.003733085, 0.003375028, 0.003075266,
   0.002820517, 0.002601292, 0.002502754, 0.00241064, 0.002324345, 0.002243341, 0.001903132, 0.001643528, 0.001439576, 0.001275639, 0.001141393, 0.001029733, 0.0009356212, 0.0008553854, 0.0007862922, 0.0007262673,
   0.0006737105, 0.0006273691, 0.0004869735, 0.0003930799, 0.0003265095, 0.0002772121, 0.0002772121 };
   graph = new TGraph(72,Graph_fx14,Graph_fy14);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(0.5);
   
   TH1F *Graph_Graph14 = new TH1F("Graph_Graph14","",100,1.44,1099.84);
   Graph_Graph14->SetMinimum(0.0002494909);
   Graph_Graph14->SetMaximum(1.869905);
   Graph_Graph14->SetDirectory(nullptr);
   Graph_Graph14->SetStats(0);
   Graph_Graph14->SetLineWidth(2);
   Graph_Graph14->SetMarkerStyle(20);
   Graph_Graph14->SetMarkerSize(0.9);
   Graph_Graph14->GetXaxis()->SetLabelFont(42);
   Graph_Graph14->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph14->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph14->GetXaxis()->SetTitleSize(0.065);
   Graph_Graph14->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph14->GetXaxis()->SetTitleFont(42);
   Graph_Graph14->GetYaxis()->SetLabelFont(42);
   Graph_Graph14->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph14->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph14->GetYaxis()->SetTitleSize(0.065);
   Graph_Graph14->GetYaxis()->SetTickLength(0.02);
   Graph_Graph14->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph14->GetYaxis()->SetTitleFont(42);
   Graph_Graph14->GetZaxis()->SetLabelFont(42);
   Graph_Graph14->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph14->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph14->GetZaxis()->SetTitleSize(0.065);
   Graph_Graph14->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph14->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph14);
   
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
      tex = new TLatex(0.4325,0.95,"Work in Progress");
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
   pt_LaTex = pt->AddText("#varepsilon = 5e-09");
   pt_LaTex = pt->AddText("#alpha_{#chi}^{max} = 0.17 (m_{#chi}/TeV)^{1.61}");
   pt->Draw();
   climits->Modified();
   climits->SetSelected(climits);
}
