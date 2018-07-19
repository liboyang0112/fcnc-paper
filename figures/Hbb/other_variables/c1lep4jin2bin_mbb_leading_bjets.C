void c1lep4jin2bin_mbb_leading_bjets()
{
//=========Macro generated from canvas: c_c1lep4jin2bin_mbb_leading_bjets/c_c1lep4jin2bin_mbb_leading_bjets
//=========  (Thu Jul 19 17:38:08 2018) by ROOT version6.04/14
   TCanvas *c_c1lep4jin2bin_mbb_leading_bjets = new TCanvas("c_c1lep4jin2bin_mbb_leading_bjets", "c_c1lep4jin2bin_mbb_leading_bjets",0,0,600,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c_c1lep4jin2bin_mbb_leading_bjets->SetHighLightColor(2);
   c_c1lep4jin2bin_mbb_leading_bjets->Range(0,0,1,1);
   c_c1lep4jin2bin_mbb_leading_bjets->SetFillColor(0);
   c_c1lep4jin2bin_mbb_leading_bjets->SetBorderMode(0);
   c_c1lep4jin2bin_mbb_leading_bjets->SetBorderSize(2);
   c_c1lep4jin2bin_mbb_leading_bjets->SetTickx(1);
   c_c1lep4jin2bin_mbb_leading_bjets->SetTicky(1);
   c_c1lep4jin2bin_mbb_leading_bjets->SetLeftMargin(0.16);
   c_c1lep4jin2bin_mbb_leading_bjets->SetRightMargin(0.05);
   c_c1lep4jin2bin_mbb_leading_bjets->SetTopMargin(0.05);
   c_c1lep4jin2bin_mbb_leading_bjets->SetBottomMargin(0.16);
   c_c1lep4jin2bin_mbb_leading_bjets->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0,1,0.28);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-27.77778,-0.0873016,527.7778,1.5);
   pad1->SetFillColor(0);
   pad1->SetFillStyle(4000);
   pad1->SetBorderMode(0);
   pad1->SetBorderSize(0);
   pad1->SetTickx(1);
   pad1->SetTicky(1);
   pad1->SetLeftMargin(0.14);
   pad1->SetRightMargin(0.05);
   pad1->SetTopMargin(0);
   pad1->SetBottomMargin(0.37);
   pad1->SetFrameBorderMode(0);
   pad1->SetFrameBorderMode(0);
   Double_t xAxis391[10] = {50, 100, 150, 200, 250, 300, 350, 400, 450, 500}; 
   
   TH1D *h_dummy2__352 = new TH1D("h_dummy2__352","Data/MC",9, xAxis391);
   h_dummy2__352->SetMinimum(0.5);
   h_dummy2__352->SetMaximum(1.5);
   h_dummy2__352->SetEntries(1.123253e+07);
   h_dummy2__352->SetDirectory(0);
   h_dummy2__352->SetStats(0);
   h_dummy2__352->SetMarkerStyle(20);
   h_dummy2__352->SetMarkerSize(1.2);
   h_dummy2__352->GetXaxis()->SetTitle("m_{bb} leading b-jets [GeV]");
   h_dummy2__352->GetXaxis()->SetRange(1,1000);
   h_dummy2__352->GetXaxis()->SetLabelFont(43);
   h_dummy2__352->GetXaxis()->SetLabelOffset(0.025);
   h_dummy2__352->GetXaxis()->SetLabelSize(16.8);
   h_dummy2__352->GetXaxis()->SetTitleSize(21);
   h_dummy2__352->GetXaxis()->SetTitleOffset(5.05);
   h_dummy2__352->GetXaxis()->SetTitleFont(43);
   h_dummy2__352->GetYaxis()->SetTitle("Data / Bkg");
   h_dummy2__352->GetYaxis()->SetNdivisions(-504);
   h_dummy2__352->GetYaxis()->SetLabelFont(43);
   h_dummy2__352->GetYaxis()->SetLabelOffset(0.02);
   h_dummy2__352->GetYaxis()->SetLabelSize(16.8);
   h_dummy2__352->GetYaxis()->SetTitleSize(21);
   h_dummy2__352->GetYaxis()->SetTitleOffset(2.4);
   h_dummy2__352->GetYaxis()->SetTitleFont(43);
   h_dummy2__352->GetZaxis()->SetLabelFont(43);
   h_dummy2__352->GetZaxis()->SetLabelSize(21);
   h_dummy2__352->GetZaxis()->SetTitleSize(21);
   h_dummy2__352->GetZaxis()->SetTitleFont(43);
   h_dummy2__352->Draw("HIST");
   
   Double_t Graph_from_h_ratio_fx3157[9] = {
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475};
   Double_t Graph_from_h_ratio_fy3157[9] = {
   0.9605622,
   0.956785,
   0.9478084,
   0.948506,
   0.9645633,
   0.9718104,
   0.9843567,
   0.9762399,
   0.9820025};
   Double_t Graph_from_h_ratio_felx3157[9] = {
   24.95,
   24.95,
   24.95,
   24.95,
   24.95,
   24.95,
   24.95,
   24.95,
   24.95};
   Double_t Graph_from_h_ratio_fely3157[9] = {
   0.002127988,
   0.001982766,
   0.002342904,
   0.003004883,
   0.003984608,
   0.005259873,
   0.006926596,
   0.008881884,
   0.01141246};
   Double_t Graph_from_h_ratio_fehx3157[9] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t Graph_from_h_ratio_fehy3157[9] = {
   0.002127988,
   0.001982766,
   0.002342904,
   0.003004883,
   0.003984608,
   0.005259873,
   0.006926596,
   0.008881884,
   0.01141246};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(9,Graph_from_h_ratio_fx3157,Graph_from_h_ratio_fy3157,Graph_from_h_ratio_felx3157,Graph_from_h_ratio_fehx3157,Graph_from_h_ratio_fely3157,Graph_from_h_ratio_fehy3157);
   grae->SetName("Graph_from_h_ratio");
   grae->SetTitle("");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(24);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_h_ratio3157 = new TH1F("Graph_Graph_from_h_ratio3157","",100,5.055,544.995);
   Graph_Graph_from_h_ratio3157->SetMinimum(0.9406705);
   Graph_Graph_from_h_ratio3157->SetMaximum(0.99821);
   Graph_Graph_from_h_ratio3157->SetDirectory(0);
   Graph_Graph_from_h_ratio3157->SetStats(0);
   Graph_Graph_from_h_ratio3157->SetLineWidth(2);
   Graph_Graph_from_h_ratio3157->SetMarkerStyle(20);
   Graph_Graph_from_h_ratio3157->SetMarkerSize(1.2);
   Graph_Graph_from_h_ratio3157->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3157->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3157->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3157->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3157->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3157->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3157->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3157->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3157->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3157->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3157->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3157->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3157->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3157->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_h_ratio3157);
   
   grae->Draw("pe0");
   TLine *line = new TLine(50,1,500,1);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t g_ratio2_fx3158[9] = {
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475};
   Double_t g_ratio2_fy3158[9] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t g_ratio2_felx3158[9] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t g_ratio2_fely3158[9] = {
   0.1410435,
   0.1270697,
   0.1192973,
   0.1190023,
   0.1224111,
   0.1260551,
   0.1282646,
   0.129946,
   0.1309069};
   Double_t g_ratio2_fehx3158[9] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t g_ratio2_fehy3158[9] = {
   0.1410435,
   0.1270697,
   0.1192973,
   0.1190023,
   0.1224111,
   0.1260551,
   0.1282646,
   0.129946,
   0.1309069};
   grae = new TGraphAsymmErrors(9,g_ratio2_fx3158,g_ratio2_fy3158,g_ratio2_felx3158,g_ratio2_fehx3158,g_ratio2_fely3158,g_ratio2_fehy3158);
   grae->SetName("g_ratio2");
   grae->SetTitle("");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(3354);
   grae->SetLineColor(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0);
   
   TH1F *Graph_g_ratio23158 = new TH1F("Graph_g_ratio23158","",100,5,545);
   Graph_g_ratio23158->SetMinimum(0.8307477);
   Graph_g_ratio23158->SetMaximum(1.169252);
   Graph_g_ratio23158->SetDirectory(0);
   Graph_g_ratio23158->SetStats(0);
   Graph_g_ratio23158->SetLineWidth(2);
   Graph_g_ratio23158->SetMarkerStyle(20);
   Graph_g_ratio23158->SetMarkerSize(1.2);
   Graph_g_ratio23158->GetXaxis()->SetLabelFont(43);
   Graph_g_ratio23158->GetXaxis()->SetLabelSize(21);
   Graph_g_ratio23158->GetXaxis()->SetTitleSize(21);
   Graph_g_ratio23158->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23158->GetXaxis()->SetTitleFont(43);
   Graph_g_ratio23158->GetYaxis()->SetLabelFont(43);
   Graph_g_ratio23158->GetYaxis()->SetLabelSize(21);
   Graph_g_ratio23158->GetYaxis()->SetTitleSize(21);
   Graph_g_ratio23158->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23158->GetYaxis()->SetTitleFont(43);
   Graph_g_ratio23158->GetZaxis()->SetLabelFont(43);
   Graph_g_ratio23158->GetZaxis()->SetLabelSize(21);
   Graph_g_ratio23158->GetZaxis()->SetTitleSize(21);
   Graph_g_ratio23158->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_ratio23158);
   
   grae->Draw("e2");
   Double_t xAxis392[10] = {50, 100, 150, 200, 250, 300, 350, 400, 450, 500}; 
   
   TH1D *h_dummy2_copy__353 = new TH1D("h_dummy2_copy__353","Data/MC",9, xAxis392);
   h_dummy2_copy__353->SetMinimum(0.5);
   h_dummy2_copy__353->SetMaximum(1.5);
   h_dummy2_copy__353->SetEntries(1.123253e+07);
   h_dummy2_copy__353->SetDirectory(0);
   h_dummy2_copy__353->SetStats(0);
   h_dummy2_copy__353->SetMarkerStyle(20);
   h_dummy2_copy__353->SetMarkerSize(1.2);
   h_dummy2_copy__353->GetXaxis()->SetTitle("m_{bb} leading b-jets [GeV]");
   h_dummy2_copy__353->GetXaxis()->SetRange(1,1000);
   h_dummy2_copy__353->GetXaxis()->SetLabelFont(43);
   h_dummy2_copy__353->GetXaxis()->SetLabelOffset(0.025);
   h_dummy2_copy__353->GetXaxis()->SetLabelSize(16.8);
   h_dummy2_copy__353->GetXaxis()->SetTitleSize(21);
   h_dummy2_copy__353->GetXaxis()->SetTitleOffset(5.05);
   h_dummy2_copy__353->GetXaxis()->SetTitleFont(43);
   h_dummy2_copy__353->GetYaxis()->SetTitle("Data / Bkg");
   h_dummy2_copy__353->GetYaxis()->SetNdivisions(-504);
   h_dummy2_copy__353->GetYaxis()->SetLabelFont(43);
   h_dummy2_copy__353->GetYaxis()->SetLabelOffset(0.02);
   h_dummy2_copy__353->GetYaxis()->SetLabelSize(16.8);
   h_dummy2_copy__353->GetYaxis()->SetTitleSize(21);
   h_dummy2_copy__353->GetYaxis()->SetTitleOffset(2.4);
   h_dummy2_copy__353->GetYaxis()->SetTitleFont(43);
   h_dummy2_copy__353->GetZaxis()->SetLabelFont(43);
   h_dummy2_copy__353->GetZaxis()->SetLabelSize(21);
   h_dummy2_copy__353->GetZaxis()->SetTitleSize(21);
   h_dummy2_copy__353->GetZaxis()->SetTitleFont(43);
   h_dummy2_copy__353->Draw("sameaxis");
   line = new TLine(0.07,1,0.135,1);
   line->SetLineColor(0);
   line->SetLineWidth(25);
   line->Draw();
   TLatex *   tex = new TLatex(0.15,0.9,"");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.1);
   tex->SetLineWidth(2);
   tex->Draw();
   pad1->Modified();
   c_c1lep4jin2bin_mbb_leading_bjets->cd();
  
// ------------>Primitives in pad: pad0
   TPad *pad0 = new TPad("pad0", "pad0",0,0.2,1,1);
   pad0->Draw();
   pad0->cd();
   pad0->Range(-27.77778,-51537.68,527.7778,463839.1);
   pad0->SetFillColor(0);
   pad0->SetFillStyle(4000);
   pad0->SetBorderMode(0);
   pad0->SetBorderSize(0);
   pad0->SetTickx(1);
   pad0->SetTicky(1);
   pad0->SetLeftMargin(0.14);
   pad0->SetRightMargin(0.05);
   pad0->SetTopMargin(0.05);
   pad0->SetFrameBorderMode(0);
   pad0->SetFrameBorderMode(0);
   Double_t xAxis393[10] = {50, 100, 150, 200, 250, 300, 350, 400, 450, 500}; 
   
   TH1D *h_dummy__354 = new TH1D("h_dummy__354","",9, xAxis393);
   h_dummy__354->SetMinimum(0);
   h_dummy__354->SetMaximum(438070.2);
   h_dummy__354->SetEntries(1.123253e+07);
   h_dummy__354->SetDirectory(0);
   h_dummy__354->SetStats(0);
   h_dummy__354->SetMarkerStyle(20);
   h_dummy__354->SetMarkerSize(1.2);
   h_dummy__354->GetXaxis()->SetRange(1,1000);
   h_dummy__354->GetXaxis()->SetLabelFont(43);
   h_dummy__354->GetXaxis()->SetLabelSize(0);
   h_dummy__354->GetXaxis()->SetTitleSize(21);
   h_dummy__354->GetXaxis()->SetTitleOffset(1.4);
   h_dummy__354->GetXaxis()->SetTitleFont(43);
   h_dummy__354->GetYaxis()->SetTitle("Events / 50 GeV");
   h_dummy__354->GetYaxis()->SetLabelFont(43);
   h_dummy__354->GetYaxis()->SetLabelSize(16.8);
   h_dummy__354->GetYaxis()->SetTitleSize(21);
   h_dummy__354->GetYaxis()->SetTitleOffset(2.4);
   h_dummy__354->GetYaxis()->SetTitleFont(43);
   h_dummy__354->GetZaxis()->SetLabelFont(43);
   h_dummy__354->GetZaxis()->SetLabelSize(21);
   h_dummy__354->GetZaxis()->SetTitleSize(21);
   h_dummy__354->GetZaxis()->SetTitleFont(43);
   h_dummy__354->Draw("HIST");
   
   THStack *h_stack = new THStack();
   h_stack->SetName("h_stack");
   h_stack->SetTitle("h_stack");
   Double_t xAxis394[10] = {50, 100, 150, 200, 250, 300, 350, 400, 450, 500}; 
   
   TH1F *h_stack_stack_40 = new TH1F("h_stack_stack_40","h_stack",9, xAxis394);
   h_stack_stack_40->SetMinimum(0);
   h_stack_stack_40->SetMaximum(260073.7);
   h_stack_stack_40->SetDirectory(0);
   h_stack_stack_40->SetStats(0);
   h_stack_stack_40->SetLineWidth(2);
   h_stack_stack_40->SetMarkerStyle(20);
   h_stack_stack_40->SetMarkerSize(1.2);
   h_stack_stack_40->GetXaxis()->SetLabelFont(43);
   h_stack_stack_40->GetXaxis()->SetLabelSize(21);
   h_stack_stack_40->GetXaxis()->SetTitleSize(21);
   h_stack_stack_40->GetXaxis()->SetTitleOffset(1.4);
   h_stack_stack_40->GetXaxis()->SetTitleFont(43);
   h_stack_stack_40->GetYaxis()->SetLabelFont(43);
   h_stack_stack_40->GetYaxis()->SetLabelSize(21);
   h_stack_stack_40->GetYaxis()->SetTitleSize(21);
   h_stack_stack_40->GetYaxis()->SetTitleOffset(1.4);
   h_stack_stack_40->GetYaxis()->SetTitleFont(43);
   h_stack_stack_40->GetZaxis()->SetLabelFont(43);
   h_stack_stack_40->GetZaxis()->SetLabelSize(21);
   h_stack_stack_40->GetZaxis()->SetTitleSize(21);
   h_stack_stack_40->GetZaxis()->SetTitleFont(43);
   h_stack->SetHistogram(h_stack_stack_40);
   
   Double_t xAxis395[10] = {50, 100, 150, 200, 250, 300, 350, 400, 450, 500}; 
   
   TH1D *c1lep4jin2bin_mbb_leading_bjets_topEW__355 = new TH1D("c1lep4jin2bin_mbb_leading_bjets_topEW__355","",9, xAxis395);
   c1lep4jin2bin_mbb_leading_bjets_topEW__355->SetBinContent(0,14392.59);
   c1lep4jin2bin_mbb_leading_bjets_topEW__355->SetBinContent(1,31752.18);
   c1lep4jin2bin_mbb_leading_bjets_topEW__355->SetBinContent(2,24922.94);
   c1lep4jin2bin_mbb_leading_bjets_topEW__355->SetBinContent(3,16700.99);
   c1lep4jin2bin_mbb_leading_bjets_topEW__355->SetBinContent(4,10407.85);
   c1lep4jin2bin_mbb_leading_bjets_topEW__355->SetBinContent(5,6404.496);
   c1lep4jin2bin_mbb_leading_bjets_topEW__355->SetBinContent(6,3845.913);
   c1lep4jin2bin_mbb_leading_bjets_topEW__355->SetBinContent(7,2447.803);
   c1lep4jin2bin_mbb_leading_bjets_topEW__355->SetBinContent(8,1657.407);
   c1lep4jin2bin_mbb_leading_bjets_topEW__355->SetBinContent(9,1101.227);
   c1lep4jin2bin_mbb_leading_bjets_topEW__355->SetBinContent(10,2376.653);
   c1lep4jin2bin_mbb_leading_bjets_topEW__355->SetBinError(0,239.0635);
   c1lep4jin2bin_mbb_leading_bjets_topEW__355->SetBinError(1,425.1768);
   c1lep4jin2bin_mbb_leading_bjets_topEW__355->SetBinError(2,348.397);
   c1lep4jin2bin_mbb_leading_bjets_topEW__355->SetBinError(3,292.6309);
   c1lep4jin2bin_mbb_leading_bjets_topEW__355->SetBinError(4,230.8507);
   c1lep4jin2bin_mbb_leading_bjets_topEW__355->SetBinError(5,183.5361);
   c1lep4jin2bin_mbb_leading_bjets_topEW__355->SetBinError(6,134.2506);
   c1lep4jin2bin_mbb_leading_bjets_topEW__355->SetBinError(7,104.565);
   c1lep4jin2bin_mbb_leading_bjets_topEW__355->SetBinError(8,85.18882);
   c1lep4jin2bin_mbb_leading_bjets_topEW__355->SetBinError(9,69.58767);
   c1lep4jin2bin_mbb_leading_bjets_topEW__355->SetBinError(10,94.09409);
   c1lep4jin2bin_mbb_leading_bjets_topEW__355->SetEntries(8198748);
   c1lep4jin2bin_mbb_leading_bjets_topEW__355->SetDirectory(0);
   c1lep4jin2bin_mbb_leading_bjets_topEW__355->SetStats(0);

   ci = TColor::GetColor("#66cc66");
   c1lep4jin2bin_mbb_leading_bjets_topEW__355->SetFillColor(ci);
   c1lep4jin2bin_mbb_leading_bjets_topEW__355->SetMarkerStyle(20);
   c1lep4jin2bin_mbb_leading_bjets_topEW__355->SetMarkerSize(1.2);
   c1lep4jin2bin_mbb_leading_bjets_topEW__355->GetXaxis()->SetTitle("m(b,b) leading b-jets [GeV]");
   c1lep4jin2bin_mbb_leading_bjets_topEW__355->GetXaxis()->SetRange(1,1000);
   c1lep4jin2bin_mbb_leading_bjets_topEW__355->GetXaxis()->SetLabelFont(43);
   c1lep4jin2bin_mbb_leading_bjets_topEW__355->GetXaxis()->SetLabelSize(21);
   c1lep4jin2bin_mbb_leading_bjets_topEW__355->GetXaxis()->SetTitleSize(21);
   c1lep4jin2bin_mbb_leading_bjets_topEW__355->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_mbb_leading_bjets_topEW__355->GetXaxis()->SetTitleFont(43);
   c1lep4jin2bin_mbb_leading_bjets_topEW__355->GetYaxis()->SetLabelFont(43);
   c1lep4jin2bin_mbb_leading_bjets_topEW__355->GetYaxis()->SetLabelSize(21);
   c1lep4jin2bin_mbb_leading_bjets_topEW__355->GetYaxis()->SetTitleSize(21);
   c1lep4jin2bin_mbb_leading_bjets_topEW__355->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_mbb_leading_bjets_topEW__355->GetYaxis()->SetTitleFont(43);
   c1lep4jin2bin_mbb_leading_bjets_topEW__355->GetZaxis()->SetLabelFont(43);
   c1lep4jin2bin_mbb_leading_bjets_topEW__355->GetZaxis()->SetLabelSize(21);
   c1lep4jin2bin_mbb_leading_bjets_topEW__355->GetZaxis()->SetTitleSize(21);
   c1lep4jin2bin_mbb_leading_bjets_topEW__355->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jin2bin_mbb_leading_bjets_topEW,"");
   Double_t xAxis396[10] = {50, 100, 150, 200, 250, 300, 350, 400, 450, 500}; 
   
   TH1D *c1lep4jin2bin_mbb_leading_bjets_ttbarbb__356 = new TH1D("c1lep4jin2bin_mbb_leading_bjets_ttbarbb__356","",9, xAxis396);
   c1lep4jin2bin_mbb_leading_bjets_ttbarbb__356->SetBinContent(0,2403.343);
   c1lep4jin2bin_mbb_leading_bjets_ttbarbb__356->SetBinContent(1,10156.41);
   c1lep4jin2bin_mbb_leading_bjets_ttbarbb__356->SetBinContent(2,12374.52);
   c1lep4jin2bin_mbb_leading_bjets_ttbarbb__356->SetBinContent(3,9526.015);
   c1lep4jin2bin_mbb_leading_bjets_ttbarbb__356->SetBinContent(4,6435.911);
   c1lep4jin2bin_mbb_leading_bjets_ttbarbb__356->SetBinContent(5,4204.802);
   c1lep4jin2bin_mbb_leading_bjets_ttbarbb__356->SetBinContent(6,2798.655);
   c1lep4jin2bin_mbb_leading_bjets_ttbarbb__356->SetBinContent(7,1798.843);
   c1lep4jin2bin_mbb_leading_bjets_ttbarbb__356->SetBinContent(8,1187.102);
   c1lep4jin2bin_mbb_leading_bjets_ttbarbb__356->SetBinContent(9,821.3052);
   c1lep4jin2bin_mbb_leading_bjets_ttbarbb__356->SetBinContent(10,2034.434);
   c1lep4jin2bin_mbb_leading_bjets_ttbarbb__356->SetBinError(0,29.96377);
   c1lep4jin2bin_mbb_leading_bjets_ttbarbb__356->SetBinError(1,62.58188);
   c1lep4jin2bin_mbb_leading_bjets_ttbarbb__356->SetBinError(2,70.69095);
   c1lep4jin2bin_mbb_leading_bjets_ttbarbb__356->SetBinError(3,62.06323);
   c1lep4jin2bin_mbb_leading_bjets_ttbarbb__356->SetBinError(4,50.71957);
   c1lep4jin2bin_mbb_leading_bjets_ttbarbb__356->SetBinError(5,40.50159);
   c1lep4jin2bin_mbb_leading_bjets_ttbarbb__356->SetBinError(6,33.59702);
   c1lep4jin2bin_mbb_leading_bjets_ttbarbb__356->SetBinError(7,27.10326);
   c1lep4jin2bin_mbb_leading_bjets_ttbarbb__356->SetBinError(8,21.61836);
   c1lep4jin2bin_mbb_leading_bjets_ttbarbb__356->SetBinError(9,18.91697);
   c1lep4jin2bin_mbb_leading_bjets_ttbarbb__356->SetBinError(10,29.41249);
   c1lep4jin2bin_mbb_leading_bjets_ttbarbb__356->SetEntries(197629);
   c1lep4jin2bin_mbb_leading_bjets_ttbarbb__356->SetDirectory(0);
   c1lep4jin2bin_mbb_leading_bjets_ttbarbb__356->SetStats(0);

   ci = TColor::GetColor("#6666cc");
   c1lep4jin2bin_mbb_leading_bjets_ttbarbb__356->SetFillColor(ci);
   c1lep4jin2bin_mbb_leading_bjets_ttbarbb__356->SetMarkerStyle(20);
   c1lep4jin2bin_mbb_leading_bjets_ttbarbb__356->SetMarkerSize(1.2);
   c1lep4jin2bin_mbb_leading_bjets_ttbarbb__356->GetXaxis()->SetTitle("m(b,b) leading b-jets [GeV]");
   c1lep4jin2bin_mbb_leading_bjets_ttbarbb__356->GetXaxis()->SetRange(1,1000);
   c1lep4jin2bin_mbb_leading_bjets_ttbarbb__356->GetXaxis()->SetLabelFont(43);
   c1lep4jin2bin_mbb_leading_bjets_ttbarbb__356->GetXaxis()->SetLabelSize(21);
   c1lep4jin2bin_mbb_leading_bjets_ttbarbb__356->GetXaxis()->SetTitleSize(21);
   c1lep4jin2bin_mbb_leading_bjets_ttbarbb__356->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_mbb_leading_bjets_ttbarbb__356->GetXaxis()->SetTitleFont(43);
   c1lep4jin2bin_mbb_leading_bjets_ttbarbb__356->GetYaxis()->SetLabelFont(43);
   c1lep4jin2bin_mbb_leading_bjets_ttbarbb__356->GetYaxis()->SetLabelSize(21);
   c1lep4jin2bin_mbb_leading_bjets_ttbarbb__356->GetYaxis()->SetTitleSize(21);
   c1lep4jin2bin_mbb_leading_bjets_ttbarbb__356->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_mbb_leading_bjets_ttbarbb__356->GetYaxis()->SetTitleFont(43);
   c1lep4jin2bin_mbb_leading_bjets_ttbarbb__356->GetZaxis()->SetLabelFont(43);
   c1lep4jin2bin_mbb_leading_bjets_ttbarbb__356->GetZaxis()->SetLabelSize(21);
   c1lep4jin2bin_mbb_leading_bjets_ttbarbb__356->GetZaxis()->SetTitleSize(21);
   c1lep4jin2bin_mbb_leading_bjets_ttbarbb__356->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jin2bin_mbb_leading_bjets_ttbarbb,"");
   Double_t xAxis397[10] = {50, 100, 150, 200, 250, 300, 350, 400, 450, 500}; 
   
   TH1D *c1lep4jin2bin_mbb_leading_bjets_ttbarcc__357 = new TH1D("c1lep4jin2bin_mbb_leading_bjets_ttbarcc__357","",9, xAxis397);
   c1lep4jin2bin_mbb_leading_bjets_ttbarcc__357->SetBinContent(0,4044.246);
   c1lep4jin2bin_mbb_leading_bjets_ttbarcc__357->SetBinContent(1,18923.76);
   c1lep4jin2bin_mbb_leading_bjets_ttbarcc__357->SetBinContent(2,23106.54);
   c1lep4jin2bin_mbb_leading_bjets_ttbarcc__357->SetBinContent(3,16582.92);
   c1lep4jin2bin_mbb_leading_bjets_ttbarcc__357->SetBinContent(4,10131.24);
   c1lep4jin2bin_mbb_leading_bjets_ttbarcc__357->SetBinContent(5,5874.788);
   c1lep4jin2bin_mbb_leading_bjets_ttbarcc__357->SetBinContent(6,3434.3);
   c1lep4jin2bin_mbb_leading_bjets_ttbarcc__357->SetBinContent(7,1985.208);
   c1lep4jin2bin_mbb_leading_bjets_ttbarcc__357->SetBinContent(8,1238.89);
   c1lep4jin2bin_mbb_leading_bjets_ttbarcc__357->SetBinContent(9,746.6822);
   c1lep4jin2bin_mbb_leading_bjets_ttbarcc__357->SetBinContent(10,1413.83);
   c1lep4jin2bin_mbb_leading_bjets_ttbarcc__357->SetBinError(0,38.55236);
   c1lep4jin2bin_mbb_leading_bjets_ttbarcc__357->SetBinError(1,85.92028);
   c1lep4jin2bin_mbb_leading_bjets_ttbarcc__357->SetBinError(2,95.36337);
   c1lep4jin2bin_mbb_leading_bjets_ttbarcc__357->SetBinError(3,80.77172);
   c1lep4jin2bin_mbb_leading_bjets_ttbarcc__357->SetBinError(4,63.43213);
   c1lep4jin2bin_mbb_leading_bjets_ttbarcc__357->SetBinError(5,47.67386);
   c1lep4jin2bin_mbb_leading_bjets_ttbarcc__357->SetBinError(6,36.81023);
   c1lep4jin2bin_mbb_leading_bjets_ttbarcc__357->SetBinError(7,28.21345);
   c1lep4jin2bin_mbb_leading_bjets_ttbarcc__357->SetBinError(8,22.0019);
   c1lep4jin2bin_mbb_leading_bjets_ttbarcc__357->SetBinError(9,17.58903);
   c1lep4jin2bin_mbb_leading_bjets_ttbarcc__357->SetBinError(10,24.74024);
   c1lep4jin2bin_mbb_leading_bjets_ttbarcc__357->SetEntries(319744);
   c1lep4jin2bin_mbb_leading_bjets_ttbarcc__357->SetDirectory(0);
   c1lep4jin2bin_mbb_leading_bjets_ttbarcc__357->SetStats(0);

   ci = TColor::GetColor("#ccccff");
   c1lep4jin2bin_mbb_leading_bjets_ttbarcc__357->SetFillColor(ci);
   c1lep4jin2bin_mbb_leading_bjets_ttbarcc__357->SetMarkerStyle(20);
   c1lep4jin2bin_mbb_leading_bjets_ttbarcc__357->SetMarkerSize(1.2);
   c1lep4jin2bin_mbb_leading_bjets_ttbarcc__357->GetXaxis()->SetTitle("m(b,b) leading b-jets [GeV]");
   c1lep4jin2bin_mbb_leading_bjets_ttbarcc__357->GetXaxis()->SetRange(1,1000);
   c1lep4jin2bin_mbb_leading_bjets_ttbarcc__357->GetXaxis()->SetLabelFont(43);
   c1lep4jin2bin_mbb_leading_bjets_ttbarcc__357->GetXaxis()->SetLabelSize(21);
   c1lep4jin2bin_mbb_leading_bjets_ttbarcc__357->GetXaxis()->SetTitleSize(21);
   c1lep4jin2bin_mbb_leading_bjets_ttbarcc__357->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_mbb_leading_bjets_ttbarcc__357->GetXaxis()->SetTitleFont(43);
   c1lep4jin2bin_mbb_leading_bjets_ttbarcc__357->GetYaxis()->SetLabelFont(43);
   c1lep4jin2bin_mbb_leading_bjets_ttbarcc__357->GetYaxis()->SetLabelSize(21);
   c1lep4jin2bin_mbb_leading_bjets_ttbarcc__357->GetYaxis()->SetTitleSize(21);
   c1lep4jin2bin_mbb_leading_bjets_ttbarcc__357->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_mbb_leading_bjets_ttbarcc__357->GetYaxis()->SetTitleFont(43);
   c1lep4jin2bin_mbb_leading_bjets_ttbarcc__357->GetZaxis()->SetLabelFont(43);
   c1lep4jin2bin_mbb_leading_bjets_ttbarcc__357->GetZaxis()->SetLabelSize(21);
   c1lep4jin2bin_mbb_leading_bjets_ttbarcc__357->GetZaxis()->SetTitleSize(21);
   c1lep4jin2bin_mbb_leading_bjets_ttbarcc__357->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jin2bin_mbb_leading_bjets_ttbarcc,"");
   Double_t xAxis398[10] = {50, 100, 150, 200, 250, 300, 350, 400, 450, 500}; 
   
   TH1D *c1lep4jin2bin_mbb_leading_bjets_ttbarlight__358 = new TH1D("c1lep4jin2bin_mbb_leading_bjets_ttbarlight__358","",9, xAxis398);
   c1lep4jin2bin_mbb_leading_bjets_ttbarlight__358->SetBinContent(0,33465.25);
   c1lep4jin2bin_mbb_leading_bjets_ttbarlight__358->SetBinContent(1,151290.3);
   c1lep4jin2bin_mbb_leading_bjets_ttbarlight__358->SetBinContent(2,182968.3);
   c1lep4jin2bin_mbb_leading_bjets_ttbarlight__358->SetBinContent(3,129857.9);
   c1lep4jin2bin_mbb_leading_bjets_ttbarlight__358->SetBinContent(4,78072.31);
   c1lep4jin2bin_mbb_leading_bjets_ttbarlight__358->SetBinContent(5,44267.76);
   c1lep4jin2bin_mbb_leading_bjets_ttbarlight__358->SetBinContent(6,25047.32);
   c1lep4jin2bin_mbb_leading_bjets_ttbarlight__358->SetBinContent(7,14285.1);
   c1lep4jin2bin_mbb_leading_bjets_ttbarlight__358->SetBinContent(8,8291.632);
   c1lep4jin2bin_mbb_leading_bjets_ttbarlight__358->SetBinContent(9,4870.481);
   c1lep4jin2bin_mbb_leading_bjets_ttbarlight__358->SetBinContent(10,8205.251);
   c1lep4jin2bin_mbb_leading_bjets_ttbarlight__358->SetBinError(0,112.8777);
   c1lep4jin2bin_mbb_leading_bjets_ttbarlight__358->SetBinError(1,242.1036);
   c1lep4jin2bin_mbb_leading_bjets_ttbarlight__358->SetBinError(2,267.0878);
   c1lep4jin2bin_mbb_leading_bjets_ttbarlight__358->SetBinError(3,225.0785);
   c1lep4jin2bin_mbb_leading_bjets_ttbarlight__358->SetBinError(4,174.3781);
   c1lep4jin2bin_mbb_leading_bjets_ttbarlight__358->SetBinError(5,130.7645);
   c1lep4jin2bin_mbb_leading_bjets_ttbarlight__358->SetBinError(6,98.38338);
   c1lep4jin2bin_mbb_leading_bjets_ttbarlight__358->SetBinError(7,74.25412);
   c1lep4jin2bin_mbb_leading_bjets_ttbarlight__358->SetBinError(8,56.64533);
   c1lep4jin2bin_mbb_leading_bjets_ttbarlight__358->SetBinError(9,44.01673);
   c1lep4jin2bin_mbb_leading_bjets_ttbarlight__358->SetBinError(10,56.9191);
   c1lep4jin2bin_mbb_leading_bjets_ttbarlight__358->SetEntries(2516401);
   c1lep4jin2bin_mbb_leading_bjets_ttbarlight__358->SetDirectory(0);
   c1lep4jin2bin_mbb_leading_bjets_ttbarlight__358->SetStats(0);
   c1lep4jin2bin_mbb_leading_bjets_ttbarlight__358->SetMarkerStyle(20);
   c1lep4jin2bin_mbb_leading_bjets_ttbarlight__358->SetMarkerSize(1.2);
   c1lep4jin2bin_mbb_leading_bjets_ttbarlight__358->GetXaxis()->SetTitle("m(b,b) leading b-jets [GeV]");
   c1lep4jin2bin_mbb_leading_bjets_ttbarlight__358->GetXaxis()->SetRange(1,1000);
   c1lep4jin2bin_mbb_leading_bjets_ttbarlight__358->GetXaxis()->SetLabelFont(43);
   c1lep4jin2bin_mbb_leading_bjets_ttbarlight__358->GetXaxis()->SetLabelSize(21);
   c1lep4jin2bin_mbb_leading_bjets_ttbarlight__358->GetXaxis()->SetTitleSize(21);
   c1lep4jin2bin_mbb_leading_bjets_ttbarlight__358->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_mbb_leading_bjets_ttbarlight__358->GetXaxis()->SetTitleFont(43);
   c1lep4jin2bin_mbb_leading_bjets_ttbarlight__358->GetYaxis()->SetLabelFont(43);
   c1lep4jin2bin_mbb_leading_bjets_ttbarlight__358->GetYaxis()->SetLabelSize(21);
   c1lep4jin2bin_mbb_leading_bjets_ttbarlight__358->GetYaxis()->SetTitleSize(21);
   c1lep4jin2bin_mbb_leading_bjets_ttbarlight__358->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_mbb_leading_bjets_ttbarlight__358->GetYaxis()->SetTitleFont(43);
   c1lep4jin2bin_mbb_leading_bjets_ttbarlight__358->GetZaxis()->SetLabelFont(43);
   c1lep4jin2bin_mbb_leading_bjets_ttbarlight__358->GetZaxis()->SetLabelSize(21);
   c1lep4jin2bin_mbb_leading_bjets_ttbarlight__358->GetZaxis()->SetTitleSize(21);
   c1lep4jin2bin_mbb_leading_bjets_ttbarlight__358->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jin2bin_mbb_leading_bjets_ttbarlight,"");
   Double_t xAxis399[10] = {50, 100, 150, 200, 250, 300, 350, 400, 450, 500}; 
   
   TH1D *c1lep4jin2bin_mbb_leading_bjets_uHcW__359 = new TH1D("c1lep4jin2bin_mbb_leading_bjets_uHcW__359","",9, xAxis399);
   c1lep4jin2bin_mbb_leading_bjets_uHcW__359->SetBinContent(0,378.3591);
   c1lep4jin2bin_mbb_leading_bjets_uHcW__359->SetBinContent(1,2581.595);
   c1lep4jin2bin_mbb_leading_bjets_uHcW__359->SetBinContent(2,4316.919);
   c1lep4jin2bin_mbb_leading_bjets_uHcW__359->SetBinContent(3,1790.67);
   c1lep4jin2bin_mbb_leading_bjets_uHcW__359->SetBinContent(4,1123.378);
   c1lep4jin2bin_mbb_leading_bjets_uHcW__359->SetBinContent(5,578.9905);
   c1lep4jin2bin_mbb_leading_bjets_uHcW__359->SetBinContent(6,322.3396);
   c1lep4jin2bin_mbb_leading_bjets_uHcW__359->SetBinContent(7,198.7156);
   c1lep4jin2bin_mbb_leading_bjets_uHcW__359->SetBinContent(8,140.1544);
   c1lep4jin2bin_mbb_leading_bjets_uHcW__359->SetBinContent(9,96.36349);
   c1lep4jin2bin_mbb_leading_bjets_uHcW__359->SetBinContent(10,137.5886);
   c1lep4jin2bin_mbb_leading_bjets_uHcW__359->SetBinError(0,18.95826);
   c1lep4jin2bin_mbb_leading_bjets_uHcW__359->SetBinError(1,51.22467);
   c1lep4jin2bin_mbb_leading_bjets_uHcW__359->SetBinError(2,66.05331);
   c1lep4jin2bin_mbb_leading_bjets_uHcW__359->SetBinError(3,44.43828);
   c1lep4jin2bin_mbb_leading_bjets_uHcW__359->SetBinError(4,35.7708);
   c1lep4jin2bin_mbb_leading_bjets_uHcW__359->SetBinError(5,24.38211);
   c1lep4jin2bin_mbb_leading_bjets_uHcW__359->SetBinError(6,19.92707);
   c1lep4jin2bin_mbb_leading_bjets_uHcW__359->SetBinError(7,15.9833);
   c1lep4jin2bin_mbb_leading_bjets_uHcW__359->SetBinError(8,12.19164);
   c1lep4jin2bin_mbb_leading_bjets_uHcW__359->SetBinError(9,9.682302);
   c1lep4jin2bin_mbb_leading_bjets_uHcW__359->SetBinError(10,13.57923);
   c1lep4jin2bin_mbb_leading_bjets_uHcW__359->SetEntries(70178);
   c1lep4jin2bin_mbb_leading_bjets_uHcW__359->SetDirectory(0);
   c1lep4jin2bin_mbb_leading_bjets_uHcW__359->SetStats(0);
   c1lep4jin2bin_mbb_leading_bjets_uHcW__359->SetFillColor(2);
   c1lep4jin2bin_mbb_leading_bjets_uHcW__359->SetLineColor(2);
   c1lep4jin2bin_mbb_leading_bjets_uHcW__359->SetMarkerStyle(20);
   c1lep4jin2bin_mbb_leading_bjets_uHcW__359->SetMarkerSize(1.2);
   c1lep4jin2bin_mbb_leading_bjets_uHcW__359->GetXaxis()->SetTitle("m(b,b) leading b-jets [GeV]");
   c1lep4jin2bin_mbb_leading_bjets_uHcW__359->GetXaxis()->SetRange(1,1000);
   c1lep4jin2bin_mbb_leading_bjets_uHcW__359->GetXaxis()->SetLabelFont(43);
   c1lep4jin2bin_mbb_leading_bjets_uHcW__359->GetXaxis()->SetLabelSize(21);
   c1lep4jin2bin_mbb_leading_bjets_uHcW__359->GetXaxis()->SetTitleSize(21);
   c1lep4jin2bin_mbb_leading_bjets_uHcW__359->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_mbb_leading_bjets_uHcW__359->GetXaxis()->SetTitleFont(43);
   c1lep4jin2bin_mbb_leading_bjets_uHcW__359->GetYaxis()->SetLabelFont(43);
   c1lep4jin2bin_mbb_leading_bjets_uHcW__359->GetYaxis()->SetLabelSize(21);
   c1lep4jin2bin_mbb_leading_bjets_uHcW__359->GetYaxis()->SetTitleSize(21);
   c1lep4jin2bin_mbb_leading_bjets_uHcW__359->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_mbb_leading_bjets_uHcW__359->GetYaxis()->SetTitleFont(43);
   c1lep4jin2bin_mbb_leading_bjets_uHcW__359->GetZaxis()->SetLabelFont(43);
   c1lep4jin2bin_mbb_leading_bjets_uHcW__359->GetZaxis()->SetLabelSize(21);
   c1lep4jin2bin_mbb_leading_bjets_uHcW__359->GetZaxis()->SetTitleSize(21);
   c1lep4jin2bin_mbb_leading_bjets_uHcW__359->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jin2bin_mbb_leading_bjets_uHcW,"");
   h_stack->Draw("hist same");
   
   Double_t g_totErr_fx3159[9] = {
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475};
   Double_t g_totErr_fy3159[9] = {
   212122.6,
   243372.3,
   172667.8,
   105047.3,
   60751.85,
   35126.19,
   20516.95,
   12375.03,
   7539.695};
   Double_t g_totErr_felx3159[9] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t g_totErr_fely3159[9] = {
   29918.53,
   30925.24,
   20598.8,
   12500.87,
   7436.699,
   4427.834,
   2631.598,
   1608.086,
   986.9978};
   Double_t g_totErr_fehx3159[9] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t g_totErr_fehy3159[9] = {
   29918.53,
   30925.24,
   20598.8,
   12500.87,
   7436.699,
   4427.834,
   2631.598,
   1608.086,
   986.9978};
   grae = new TGraphAsymmErrors(9,g_totErr_fx3159,g_totErr_fy3159,g_totErr_felx3159,g_totErr_fehx3159,g_totErr_fely3159,g_totErr_fehy3159);
   grae->SetName("g_totErr");
   grae->SetTitle("");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(3354);
   grae->SetLineColor(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0);
   
   TH1F *Graph_g_totErr3159 = new TH1F("Graph_g_totErr3159","",100,5,545);
   Graph_g_totErr3159->SetMinimum(0);
   Graph_g_totErr3159->SetMaximum(301072.1);
   Graph_g_totErr3159->SetDirectory(0);
   Graph_g_totErr3159->SetStats(0);
   Graph_g_totErr3159->SetLineWidth(2);
   Graph_g_totErr3159->SetMarkerStyle(20);
   Graph_g_totErr3159->SetMarkerSize(1.2);
   Graph_g_totErr3159->GetXaxis()->SetLabelFont(43);
   Graph_g_totErr3159->GetXaxis()->SetLabelSize(21);
   Graph_g_totErr3159->GetXaxis()->SetTitleSize(21);
   Graph_g_totErr3159->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_totErr3159->GetXaxis()->SetTitleFont(43);
   Graph_g_totErr3159->GetYaxis()->SetLabelFont(43);
   Graph_g_totErr3159->GetYaxis()->SetLabelSize(21);
   Graph_g_totErr3159->GetYaxis()->SetTitleSize(21);
   Graph_g_totErr3159->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_totErr3159->GetYaxis()->SetTitleFont(43);
   Graph_g_totErr3159->GetZaxis()->SetLabelFont(43);
   Graph_g_totErr3159->GetZaxis()->SetLabelSize(21);
   Graph_g_totErr3159->GetZaxis()->SetTitleSize(21);
   Graph_g_totErr3159->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_totErr3159);
   
   grae->Draw("e2");
   
   Double_t Graph_from_c1lep4jin2bin_mbb_leading_bjets_Data_fx3160[9] = {
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475};
   Double_t Graph_from_c1lep4jin2bin_mbb_leading_bjets_Data_fy3160[9] = {
   203757,
   232855,
   163656,
   99638,
   58599,
   34136,
   20196,
   12081,
   7404};
   Double_t Graph_from_c1lep4jin2bin_mbb_leading_bjets_Data_felx3160[9] = {
   24.95,
   24.95,
   24.95,
   24.95,
   24.95,
   24.95,
   24.95,
   24.95,
   24.95};
   Double_t Graph_from_c1lep4jin2bin_mbb_leading_bjets_Data_fely3160[9] = {
   451.3945,
   482.5505,
   404.5442,
   315.6549,
   242.0723,
   184.7593,
   142.1126,
   109.9136,
   86.0465};
   Double_t Graph_from_c1lep4jin2bin_mbb_leading_bjets_Data_fehx3160[9] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t Graph_from_c1lep4jin2bin_mbb_leading_bjets_Data_fehy3160[9] = {
   451.3945,
   482.5505,
   404.5442,
   315.6549,
   242.0723,
   184.7593,
   142.1126,
   109.9136,
   86.0465};
   grae = new TGraphAsymmErrors(9,Graph_from_c1lep4jin2bin_mbb_leading_bjets_Data_fx3160,Graph_from_c1lep4jin2bin_mbb_leading_bjets_Data_fy3160,Graph_from_c1lep4jin2bin_mbb_leading_bjets_Data_felx3160,Graph_from_c1lep4jin2bin_mbb_leading_bjets_Data_fehx3160,Graph_from_c1lep4jin2bin_mbb_leading_bjets_Data_fely3160,Graph_from_c1lep4jin2bin_mbb_leading_bjets_Data_fehy3160);
   grae->SetName("Graph_from_c1lep4jin2bin_mbb_leading_bjets_Data");
   grae->SetTitle("");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_c1lep4jin2bin_mbb_leading_bjets_Data3160 = new TH1F("Graph_Graph_from_c1lep4jin2bin_mbb_leading_bjets_Data3160","",100,5.055,544.995);
   Graph_Graph_from_c1lep4jin2bin_mbb_leading_bjets_Data3160->SetMinimum(0);
   Graph_Graph_from_c1lep4jin2bin_mbb_leading_bjets_Data3160->SetMaximum(255939.5);
   Graph_Graph_from_c1lep4jin2bin_mbb_leading_bjets_Data3160->SetDirectory(0);
   Graph_Graph_from_c1lep4jin2bin_mbb_leading_bjets_Data3160->SetStats(0);
   Graph_Graph_from_c1lep4jin2bin_mbb_leading_bjets_Data3160->SetLineWidth(2);
   Graph_Graph_from_c1lep4jin2bin_mbb_leading_bjets_Data3160->SetMarkerStyle(20);
   Graph_Graph_from_c1lep4jin2bin_mbb_leading_bjets_Data3160->SetMarkerSize(1.2);
   Graph_Graph_from_c1lep4jin2bin_mbb_leading_bjets_Data3160->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep4jin2bin_mbb_leading_bjets_Data3160->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep4jin2bin_mbb_leading_bjets_Data3160->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep4jin2bin_mbb_leading_bjets_Data3160->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep4jin2bin_mbb_leading_bjets_Data3160->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep4jin2bin_mbb_leading_bjets_Data3160->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep4jin2bin_mbb_leading_bjets_Data3160->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep4jin2bin_mbb_leading_bjets_Data3160->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep4jin2bin_mbb_leading_bjets_Data3160->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep4jin2bin_mbb_leading_bjets_Data3160->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep4jin2bin_mbb_leading_bjets_Data3160->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep4jin2bin_mbb_leading_bjets_Data3160->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep4jin2bin_mbb_leading_bjets_Data3160->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep4jin2bin_mbb_leading_bjets_Data3160->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_c1lep4jin2bin_mbb_leading_bjets_Data3160);
   
   grae->Draw("ep1 ");
   Double_t xAxis400[10] = {50, 100, 150, 200, 250, 300, 350, 400, 450, 500}; 
   
   TH1D *h_dummy_copy__360 = new TH1D("h_dummy_copy__360","",9, xAxis400);
   h_dummy_copy__360->SetEntries(1.123253e+07);
   h_dummy_copy__360->SetDirectory(0);
   h_dummy_copy__360->SetStats(0);
   h_dummy_copy__360->SetMarkerStyle(20);
   h_dummy_copy__360->SetMarkerSize(1.2);
   h_dummy_copy__360->GetXaxis()->SetTitle("m_{bb} leading b-jets [GeV]");
   h_dummy_copy__360->GetXaxis()->SetRange(1,1000);
   h_dummy_copy__360->GetXaxis()->SetLabelFont(43);
   h_dummy_copy__360->GetXaxis()->SetLabelSize(21);
   h_dummy_copy__360->GetXaxis()->SetTitleSize(21);
   h_dummy_copy__360->GetXaxis()->SetTitleOffset(1.4);
   h_dummy_copy__360->GetXaxis()->SetTitleFont(43);
   h_dummy_copy__360->GetYaxis()->SetTitle("Events / 50 GeV");
   h_dummy_copy__360->GetYaxis()->SetLabelFont(43);
   h_dummy_copy__360->GetYaxis()->SetLabelSize(16.8);
   h_dummy_copy__360->GetYaxis()->SetTitleSize(21);
   h_dummy_copy__360->GetYaxis()->SetTitleOffset(2.4);
   h_dummy_copy__360->GetYaxis()->SetTitleFont(43);
   h_dummy_copy__360->GetZaxis()->SetLabelFont(43);
   h_dummy_copy__360->GetZaxis()->SetLabelSize(21);
   h_dummy_copy__360->GetZaxis()->SetTitleSize(21);
   h_dummy_copy__360->GetZaxis()->SetTitleFont(43);
   h_dummy_copy__360->Draw("sameaxis");
      tex = new TLatex(0.18,0.88,"ATLAS");
tex->SetNDC();
   tex->SetTextFont(73);
   tex->SetTextSize(21);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.3712001,0.88,"Internal");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(21);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.18,0.83,"#sqrt{s} = 13 TeV, 36.1 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(21);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.18,0.78,"FCNC analysis");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(21);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.18,0.73,"#geq4j, #geq2b");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(21);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.18,0.68,"Pre-Fit");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(21);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TLegend *leg = new TLegend(0.5508,0.63,0.94,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(43);
   leg->SetTextSize(18.9);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("c1lep4jin2bin_mbb_leading_bjets_Data","Data","lep");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep4jin2bin_mbb_leading_bjets_uHcW","t#bar{t}#rightarrowWbHc (BR=1%)","f");
   entry->SetFillColor(2);
   entry->SetFillStyle(1001);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep4jin2bin_mbb_leading_bjets_ttbarlight","t#bar{t}+light","f");
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep4jin2bin_mbb_leading_bjets_ttbarcc","t#bar{t}+cc","f");

   ci = TColor::GetColor("#ccccff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep4jin2bin_mbb_leading_bjets_ttbarbb","t#bar{t}+bb","f");

   ci = TColor::GetColor("#6666cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep4jin2bin_mbb_leading_bjets_topEW","Non-t#bar{t}","f");

   ci = TColor::GetColor("#66cc66");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("g_totErr","Total Bkg unc.","f");

   ci = TColor::GetColor("#6666ff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3354);
   entry->SetLineStyle(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   leg->Draw();
   pad0->Modified();
   c_c1lep4jin2bin_mbb_leading_bjets->cd();
   c_c1lep4jin2bin_mbb_leading_bjets->Modified();
   c_c1lep4jin2bin_mbb_leading_bjets->cd();
   c_c1lep4jin2bin_mbb_leading_bjets->SetSelected(c_c1lep4jin2bin_mbb_leading_bjets);
}
