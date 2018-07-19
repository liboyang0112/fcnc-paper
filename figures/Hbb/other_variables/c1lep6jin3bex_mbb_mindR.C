void c1lep6jin3bex_mbb_mindR()
{
//=========Macro generated from canvas: c_c1lep6jin3bex_mbb_mindR/c_c1lep6jin3bex_mbb_mindR
//=========  (Thu Jul 19 17:38:09 2018) by ROOT version6.04/14
   TCanvas *c_c1lep6jin3bex_mbb_mindR = new TCanvas("c_c1lep6jin3bex_mbb_mindR", "c_c1lep6jin3bex_mbb_mindR",0,0,600,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c_c1lep6jin3bex_mbb_mindR->SetHighLightColor(2);
   c_c1lep6jin3bex_mbb_mindR->Range(0,0,1,1);
   c_c1lep6jin3bex_mbb_mindR->SetFillColor(0);
   c_c1lep6jin3bex_mbb_mindR->SetBorderMode(0);
   c_c1lep6jin3bex_mbb_mindR->SetBorderSize(2);
   c_c1lep6jin3bex_mbb_mindR->SetTickx(1);
   c_c1lep6jin3bex_mbb_mindR->SetTicky(1);
   c_c1lep6jin3bex_mbb_mindR->SetLeftMargin(0.16);
   c_c1lep6jin3bex_mbb_mindR->SetRightMargin(0.05);
   c_c1lep6jin3bex_mbb_mindR->SetTopMargin(0.05);
   c_c1lep6jin3bex_mbb_mindR->SetBottomMargin(0.16);
   c_c1lep6jin3bex_mbb_mindR->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0,1,0.28);
   pad1->Draw();
   pad1->cd();
   pad1->Range(15.4321,-0.0873016,262.3457,1.5);
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
   Double_t xAxis461[9] = {50, 75, 100, 125, 150, 175, 200, 225, 250}; 
   
   TH1D *h_dummy2__415 = new TH1D("h_dummy2__415","Data/MC",8, xAxis461);
   h_dummy2__415->SetMinimum(0.5);
   h_dummy2__415->SetMaximum(1.5);
   h_dummy2__415->SetEntries(1164490);
   h_dummy2__415->SetDirectory(0);
   h_dummy2__415->SetStats(0);
   h_dummy2__415->SetMarkerStyle(20);
   h_dummy2__415->SetMarkerSize(1.2);
   h_dummy2__415->GetXaxis()->SetTitle("m_{bb}^{min. #DeltaR} [GeV]");
   h_dummy2__415->GetXaxis()->SetRange(1,30);
   h_dummy2__415->GetXaxis()->SetLabelFont(43);
   h_dummy2__415->GetXaxis()->SetLabelOffset(0.025);
   h_dummy2__415->GetXaxis()->SetLabelSize(16.8);
   h_dummy2__415->GetXaxis()->SetTitleSize(21);
   h_dummy2__415->GetXaxis()->SetTitleOffset(5.05);
   h_dummy2__415->GetXaxis()->SetTitleFont(43);
   h_dummy2__415->GetYaxis()->SetTitle("Data / Bkg");
   h_dummy2__415->GetYaxis()->SetNdivisions(-504);
   h_dummy2__415->GetYaxis()->SetLabelFont(43);
   h_dummy2__415->GetYaxis()->SetLabelOffset(0.02);
   h_dummy2__415->GetYaxis()->SetLabelSize(16.8);
   h_dummy2__415->GetYaxis()->SetTitleSize(21);
   h_dummy2__415->GetYaxis()->SetTitleOffset(2.4);
   h_dummy2__415->GetYaxis()->SetTitleFont(43);
   h_dummy2__415->GetZaxis()->SetLabelFont(43);
   h_dummy2__415->GetZaxis()->SetLabelSize(21);
   h_dummy2__415->GetZaxis()->SetTitleSize(21);
   h_dummy2__415->GetZaxis()->SetTitleFont(43);
   h_dummy2__415->Draw("HIST");
   
   Double_t Graph_from_h_ratio_fx3185[8] = {
   62.5,
   87.5,
   112.5,
   137.5,
   162.5,
   187.5,
   212.5,
   237.5};
   Double_t Graph_from_h_ratio_fy3185[8] = {
   1.095961,
   1.093725,
   1.147113,
   1.031034,
   1.089272,
   1.138167,
   1.217686,
   1.160898};
   Double_t Graph_from_h_ratio_felx3185[8] = {
   12.475,
   12.475,
   12.475,
   12.475,
   12.475,
   12.475,
   12.475,
   12.475};
   Double_t Graph_from_h_ratio_fely3185[8] = {
   0.01820544,
   0.02333422,
   0.02210899,
   0.03094649,
   0.03333117,
   0.05306732,
   0.05440219,
   0.07688237};
   Double_t Graph_from_h_ratio_fehx3185[8] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t Graph_from_h_ratio_fehy3185[8] = {
   0.01820544,
   0.02333422,
   0.02210899,
   0.03094649,
   0.03333117,
   0.05306732,
   0.05440219,
   0.07688237};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(8,Graph_from_h_ratio_fx3185,Graph_from_h_ratio_fy3185,Graph_from_h_ratio_felx3185,Graph_from_h_ratio_fehx3185,Graph_from_h_ratio_fely3185,Graph_from_h_ratio_fehy3185);
   grae->SetName("Graph_from_h_ratio");
   grae->SetTitle("");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(24);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_h_ratio3185 = new TH1F("Graph_Graph_from_h_ratio3185","",100,30.0275,269.9975);
   Graph_Graph_from_h_ratio3185->SetMinimum(0.9728872);
   Graph_Graph_from_h_ratio3185->SetMaximum(1.299288);
   Graph_Graph_from_h_ratio3185->SetDirectory(0);
   Graph_Graph_from_h_ratio3185->SetStats(0);
   Graph_Graph_from_h_ratio3185->SetLineWidth(2);
   Graph_Graph_from_h_ratio3185->SetMarkerStyle(20);
   Graph_Graph_from_h_ratio3185->SetMarkerSize(1.2);
   Graph_Graph_from_h_ratio3185->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3185->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3185->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3185->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3185->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3185->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3185->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3185->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3185->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3185->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3185->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3185->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3185->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3185->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_h_ratio3185);
   
   grae->Draw("pe0");
   TLine *line = new TLine(50,1,250,1);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t g_ratio2_fx3186[8] = {
   62.5,
   87.5,
   112.5,
   137.5,
   162.5,
   187.5,
   212.5,
   237.5};
   Double_t g_ratio2_fy3186[8] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t g_ratio2_felx3186[8] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t g_ratio2_fely3186[8] = {
   0.2004942,
   0.2020124,
   0.2034241,
   0.1976924,
   0.1942616,
   0.1960756,
   0.1994981,
   0.2069641};
   Double_t g_ratio2_fehx3186[8] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t g_ratio2_fehy3186[8] = {
   0.2004942,
   0.2020124,
   0.2034241,
   0.1976924,
   0.1942616,
   0.1960756,
   0.1994981,
   0.2069641};
   grae = new TGraphAsymmErrors(8,g_ratio2_fx3186,g_ratio2_fy3186,g_ratio2_felx3186,g_ratio2_fehx3186,g_ratio2_fely3186,g_ratio2_fehy3186);
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
   
   TH1F *Graph_g_ratio23186 = new TH1F("Graph_g_ratio23186","",100,30,270);
   Graph_g_ratio23186->SetMinimum(0.7516431);
   Graph_g_ratio23186->SetMaximum(1.248357);
   Graph_g_ratio23186->SetDirectory(0);
   Graph_g_ratio23186->SetStats(0);
   Graph_g_ratio23186->SetLineWidth(2);
   Graph_g_ratio23186->SetMarkerStyle(20);
   Graph_g_ratio23186->SetMarkerSize(1.2);
   Graph_g_ratio23186->GetXaxis()->SetLabelFont(43);
   Graph_g_ratio23186->GetXaxis()->SetLabelSize(21);
   Graph_g_ratio23186->GetXaxis()->SetTitleSize(21);
   Graph_g_ratio23186->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23186->GetXaxis()->SetTitleFont(43);
   Graph_g_ratio23186->GetYaxis()->SetLabelFont(43);
   Graph_g_ratio23186->GetYaxis()->SetLabelSize(21);
   Graph_g_ratio23186->GetYaxis()->SetTitleSize(21);
   Graph_g_ratio23186->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23186->GetYaxis()->SetTitleFont(43);
   Graph_g_ratio23186->GetZaxis()->SetLabelFont(43);
   Graph_g_ratio23186->GetZaxis()->SetLabelSize(21);
   Graph_g_ratio23186->GetZaxis()->SetTitleSize(21);
   Graph_g_ratio23186->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_ratio23186);
   
   grae->Draw("e2");
   Double_t xAxis462[9] = {50, 75, 100, 125, 150, 175, 200, 225, 250}; 
   
   TH1D *h_dummy2_copy__416 = new TH1D("h_dummy2_copy__416","Data/MC",8, xAxis462);
   h_dummy2_copy__416->SetMinimum(0.5);
   h_dummy2_copy__416->SetMaximum(1.5);
   h_dummy2_copy__416->SetEntries(1164490);
   h_dummy2_copy__416->SetDirectory(0);
   h_dummy2_copy__416->SetStats(0);
   h_dummy2_copy__416->SetMarkerStyle(20);
   h_dummy2_copy__416->SetMarkerSize(1.2);
   h_dummy2_copy__416->GetXaxis()->SetTitle("m_{bb}^{min. #DeltaR} [GeV]");
   h_dummy2_copy__416->GetXaxis()->SetRange(1,30);
   h_dummy2_copy__416->GetXaxis()->SetLabelFont(43);
   h_dummy2_copy__416->GetXaxis()->SetLabelOffset(0.025);
   h_dummy2_copy__416->GetXaxis()->SetLabelSize(16.8);
   h_dummy2_copy__416->GetXaxis()->SetTitleSize(21);
   h_dummy2_copy__416->GetXaxis()->SetTitleOffset(5.05);
   h_dummy2_copy__416->GetXaxis()->SetTitleFont(43);
   h_dummy2_copy__416->GetYaxis()->SetTitle("Data / Bkg");
   h_dummy2_copy__416->GetYaxis()->SetNdivisions(-504);
   h_dummy2_copy__416->GetYaxis()->SetLabelFont(43);
   h_dummy2_copy__416->GetYaxis()->SetLabelOffset(0.02);
   h_dummy2_copy__416->GetYaxis()->SetLabelSize(16.8);
   h_dummy2_copy__416->GetYaxis()->SetTitleSize(21);
   h_dummy2_copy__416->GetYaxis()->SetTitleOffset(2.4);
   h_dummy2_copy__416->GetYaxis()->SetTitleFont(43);
   h_dummy2_copy__416->GetZaxis()->SetLabelFont(43);
   h_dummy2_copy__416->GetZaxis()->SetLabelSize(21);
   h_dummy2_copy__416->GetZaxis()->SetTitleSize(21);
   h_dummy2_copy__416->GetZaxis()->SetTitleFont(43);
   h_dummy2_copy__416->Draw("sameaxis");
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
   c_c1lep6jin3bex_mbb_mindR->cd();
  
// ------------>Primitives in pad: pad0
   TPad *pad0 = new TPad("pad0", "pad0",0,0.2,1,1);
   pad0->Draw();
   pad0->cd();
   pad0->Range(15.4321,-780.1835,262.3457,7021.651);
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
   Double_t xAxis463[9] = {50, 75, 100, 125, 150, 175, 200, 225, 250}; 
   
   TH1D *h_dummy__417 = new TH1D("h_dummy__417","",8, xAxis463);
   h_dummy__417->SetMinimum(0);
   h_dummy__417->SetMaximum(6631.559);
   h_dummy__417->SetEntries(1164490);
   h_dummy__417->SetDirectory(0);
   h_dummy__417->SetStats(0);
   h_dummy__417->SetMarkerStyle(20);
   h_dummy__417->SetMarkerSize(1.2);
   h_dummy__417->GetXaxis()->SetRange(1,30);
   h_dummy__417->GetXaxis()->SetLabelFont(43);
   h_dummy__417->GetXaxis()->SetLabelSize(0);
   h_dummy__417->GetXaxis()->SetTitleSize(21);
   h_dummy__417->GetXaxis()->SetTitleOffset(1.4);
   h_dummy__417->GetXaxis()->SetTitleFont(43);
   h_dummy__417->GetYaxis()->SetTitle("Events / 25 GeV");
   h_dummy__417->GetYaxis()->SetLabelFont(43);
   h_dummy__417->GetYaxis()->SetLabelSize(16.8);
   h_dummy__417->GetYaxis()->SetTitleSize(21);
   h_dummy__417->GetYaxis()->SetTitleOffset(2.4);
   h_dummy__417->GetYaxis()->SetTitleFont(43);
   h_dummy__417->GetZaxis()->SetLabelFont(43);
   h_dummy__417->GetZaxis()->SetLabelSize(21);
   h_dummy__417->GetZaxis()->SetTitleSize(21);
   h_dummy__417->GetZaxis()->SetTitleFont(43);
   h_dummy__417->Draw("HIST");
   
   THStack *h_stack = new THStack();
   h_stack->SetName("h_stack");
   h_stack->SetTitle("h_stack");
   Double_t xAxis464[9] = {50, 75, 100, 125, 150, 175, 200, 225, 250}; 
   
   TH1F *h_stack_stack_47 = new TH1F("h_stack_stack_47","h_stack",8, xAxis464);
   h_stack_stack_47->SetMinimum(0);
   h_stack_stack_47->SetMaximum(3631.525);
   h_stack_stack_47->SetDirectory(0);
   h_stack_stack_47->SetStats(0);
   h_stack_stack_47->SetLineWidth(2);
   h_stack_stack_47->SetMarkerStyle(20);
   h_stack_stack_47->SetMarkerSize(1.2);
   h_stack_stack_47->GetXaxis()->SetLabelFont(43);
   h_stack_stack_47->GetXaxis()->SetLabelSize(21);
   h_stack_stack_47->GetXaxis()->SetTitleSize(21);
   h_stack_stack_47->GetXaxis()->SetTitleOffset(1.4);
   h_stack_stack_47->GetXaxis()->SetTitleFont(43);
   h_stack_stack_47->GetYaxis()->SetLabelFont(43);
   h_stack_stack_47->GetYaxis()->SetLabelSize(21);
   h_stack_stack_47->GetYaxis()->SetTitleSize(21);
   h_stack_stack_47->GetYaxis()->SetTitleOffset(1.4);
   h_stack_stack_47->GetYaxis()->SetTitleFont(43);
   h_stack_stack_47->GetZaxis()->SetLabelFont(43);
   h_stack_stack_47->GetZaxis()->SetLabelSize(21);
   h_stack_stack_47->GetZaxis()->SetTitleSize(21);
   h_stack_stack_47->GetZaxis()->SetTitleFont(43);
   h_stack->SetHistogram(h_stack_stack_47);
   
   Double_t xAxis465[9] = {50, 75, 100, 125, 150, 175, 200, 225, 250}; 
   
   TH1D *c1lep6jin3bex_mbb_mindR_topEW__418 = new TH1D("c1lep6jin3bex_mbb_mindR_topEW__418","",8, xAxis465);
   c1lep6jin3bex_mbb_mindR_topEW__418->SetBinContent(0,337.0921);
   c1lep6jin3bex_mbb_mindR_topEW__418->SetBinContent(1,516.4789);
   c1lep6jin3bex_mbb_mindR_topEW__418->SetBinContent(2,263.5869);
   c1lep6jin3bex_mbb_mindR_topEW__418->SetBinContent(3,267.6697);
   c1lep6jin3bex_mbb_mindR_topEW__418->SetBinContent(4,139.958);
   c1lep6jin3bex_mbb_mindR_topEW__418->SetBinContent(5,112.1691);
   c1lep6jin3bex_mbb_mindR_topEW__418->SetBinContent(6,60.4937);
   c1lep6jin3bex_mbb_mindR_topEW__418->SetBinContent(7,50.4386);
   c1lep6jin3bex_mbb_mindR_topEW__418->SetBinContent(8,29.04719);
   c1lep6jin3bex_mbb_mindR_topEW__418->SetBinContent(9,94.5842);
   c1lep6jin3bex_mbb_mindR_topEW__418->SetBinError(0,38.15203);
   c1lep6jin3bex_mbb_mindR_topEW__418->SetBinError(1,51.56664);
   c1lep6jin3bex_mbb_mindR_topEW__418->SetBinError(2,34.65441);
   c1lep6jin3bex_mbb_mindR_topEW__418->SetBinError(3,30.87572);
   c1lep6jin3bex_mbb_mindR_topEW__418->SetBinError(4,27.06501);
   c1lep6jin3bex_mbb_mindR_topEW__418->SetBinError(5,23.00417);
   c1lep6jin3bex_mbb_mindR_topEW__418->SetBinError(6,18.92533);
   c1lep6jin3bex_mbb_mindR_topEW__418->SetBinError(7,15.57765);
   c1lep6jin3bex_mbb_mindR_topEW__418->SetBinError(8,12.94715);
   c1lep6jin3bex_mbb_mindR_topEW__418->SetBinError(9,21.55627);
   c1lep6jin3bex_mbb_mindR_topEW__418->SetEntries(1125856);
   c1lep6jin3bex_mbb_mindR_topEW__418->SetDirectory(0);
   c1lep6jin3bex_mbb_mindR_topEW__418->SetStats(0);

   ci = TColor::GetColor("#66cc66");
   c1lep6jin3bex_mbb_mindR_topEW__418->SetFillColor(ci);
   c1lep6jin3bex_mbb_mindR_topEW__418->SetMarkerStyle(20);
   c1lep6jin3bex_mbb_mindR_topEW__418->SetMarkerSize(1.2);
   c1lep6jin3bex_mbb_mindR_topEW__418->GetXaxis()->SetTitle("m_{bb}^{#DeltaR min} [GeV]");
   c1lep6jin3bex_mbb_mindR_topEW__418->GetXaxis()->SetRange(1,30);
   c1lep6jin3bex_mbb_mindR_topEW__418->GetXaxis()->SetLabelFont(43);
   c1lep6jin3bex_mbb_mindR_topEW__418->GetXaxis()->SetLabelSize(21);
   c1lep6jin3bex_mbb_mindR_topEW__418->GetXaxis()->SetTitleSize(21);
   c1lep6jin3bex_mbb_mindR_topEW__418->GetXaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_mbb_mindR_topEW__418->GetXaxis()->SetTitleFont(43);
   c1lep6jin3bex_mbb_mindR_topEW__418->GetYaxis()->SetLabelFont(43);
   c1lep6jin3bex_mbb_mindR_topEW__418->GetYaxis()->SetLabelSize(21);
   c1lep6jin3bex_mbb_mindR_topEW__418->GetYaxis()->SetTitleSize(21);
   c1lep6jin3bex_mbb_mindR_topEW__418->GetYaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_mbb_mindR_topEW__418->GetYaxis()->SetTitleFont(43);
   c1lep6jin3bex_mbb_mindR_topEW__418->GetZaxis()->SetLabelFont(43);
   c1lep6jin3bex_mbb_mindR_topEW__418->GetZaxis()->SetLabelSize(21);
   c1lep6jin3bex_mbb_mindR_topEW__418->GetZaxis()->SetTitleSize(21);
   c1lep6jin3bex_mbb_mindR_topEW__418->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep6jin3bex_mbb_mindR_topEW,"");
   Double_t xAxis466[9] = {50, 75, 100, 125, 150, 175, 200, 225, 250}; 
   
   TH1D *c1lep6jin3bex_mbb_mindR_ttbarbb__419 = new TH1D("c1lep6jin3bex_mbb_mindR_ttbarbb__419","",8, xAxis466);
   c1lep6jin3bex_mbb_mindR_ttbarbb__419->SetBinContent(0,1162.113);
   c1lep6jin3bex_mbb_mindR_ttbarbb__419->SetBinContent(1,1707.682);
   c1lep6jin3bex_mbb_mindR_ttbarbb__419->SetBinContent(2,1017.953);
   c1lep6jin3bex_mbb_mindR_ttbarbb__419->SetBinContent(3,1180.141);
   c1lep6jin3bex_mbb_mindR_ttbarbb__419->SetBinContent(4,565.7553);
   c1lep6jin3bex_mbb_mindR_ttbarbb__419->SetBinContent(5,593.1056);
   c1lep6jin3bex_mbb_mindR_ttbarbb__419->SetBinContent(6,248.508);
   c1lep6jin3bex_mbb_mindR_ttbarbb__419->SetBinContent(7,272.4216);
   c1lep6jin3bex_mbb_mindR_ttbarbb__419->SetBinContent(8,123.556);
   c1lep6jin3bex_mbb_mindR_ttbarbb__419->SetBinContent(9,411.2567);
   c1lep6jin3bex_mbb_mindR_ttbarbb__419->SetBinError(0,20.83236);
   c1lep6jin3bex_mbb_mindR_ttbarbb__419->SetBinError(1,27.65525);
   c1lep6jin3bex_mbb_mindR_ttbarbb__419->SetBinError(2,21.16459);
   c1lep6jin3bex_mbb_mindR_ttbarbb__419->SetBinError(3,21.97377);
   c1lep6jin3bex_mbb_mindR_ttbarbb__419->SetBinError(4,15.42296);
   c1lep6jin3bex_mbb_mindR_ttbarbb__419->SetBinError(5,15.70214);
   c1lep6jin3bex_mbb_mindR_ttbarbb__419->SetBinError(6,9.937088);
   c1lep6jin3bex_mbb_mindR_ttbarbb__419->SetBinError(7,11.30283);
   c1lep6jin3bex_mbb_mindR_ttbarbb__419->SetBinError(8,7.137856);
   c1lep6jin3bex_mbb_mindR_ttbarbb__419->SetBinError(9,13.15231);
   c1lep6jin3bex_mbb_mindR_ttbarbb__419->SetEntries(26042);
   c1lep6jin3bex_mbb_mindR_ttbarbb__419->SetDirectory(0);
   c1lep6jin3bex_mbb_mindR_ttbarbb__419->SetStats(0);

   ci = TColor::GetColor("#6666cc");
   c1lep6jin3bex_mbb_mindR_ttbarbb__419->SetFillColor(ci);
   c1lep6jin3bex_mbb_mindR_ttbarbb__419->SetMarkerStyle(20);
   c1lep6jin3bex_mbb_mindR_ttbarbb__419->SetMarkerSize(1.2);
   c1lep6jin3bex_mbb_mindR_ttbarbb__419->GetXaxis()->SetTitle("m_{bb}^{#DeltaR min} [GeV]");
   c1lep6jin3bex_mbb_mindR_ttbarbb__419->GetXaxis()->SetRange(1,30);
   c1lep6jin3bex_mbb_mindR_ttbarbb__419->GetXaxis()->SetLabelFont(43);
   c1lep6jin3bex_mbb_mindR_ttbarbb__419->GetXaxis()->SetLabelSize(21);
   c1lep6jin3bex_mbb_mindR_ttbarbb__419->GetXaxis()->SetTitleSize(21);
   c1lep6jin3bex_mbb_mindR_ttbarbb__419->GetXaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_mbb_mindR_ttbarbb__419->GetXaxis()->SetTitleFont(43);
   c1lep6jin3bex_mbb_mindR_ttbarbb__419->GetYaxis()->SetLabelFont(43);
   c1lep6jin3bex_mbb_mindR_ttbarbb__419->GetYaxis()->SetLabelSize(21);
   c1lep6jin3bex_mbb_mindR_ttbarbb__419->GetYaxis()->SetTitleSize(21);
   c1lep6jin3bex_mbb_mindR_ttbarbb__419->GetYaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_mbb_mindR_ttbarbb__419->GetYaxis()->SetTitleFont(43);
   c1lep6jin3bex_mbb_mindR_ttbarbb__419->GetZaxis()->SetLabelFont(43);
   c1lep6jin3bex_mbb_mindR_ttbarbb__419->GetZaxis()->SetLabelSize(21);
   c1lep6jin3bex_mbb_mindR_ttbarbb__419->GetZaxis()->SetTitleSize(21);
   c1lep6jin3bex_mbb_mindR_ttbarbb__419->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep6jin3bex_mbb_mindR_ttbarbb,"");
   Double_t xAxis467[9] = {50, 75, 100, 125, 150, 175, 200, 225, 250}; 
   
   TH1D *c1lep6jin3bex_mbb_mindR_ttbarcc__420 = new TH1D("c1lep6jin3bex_mbb_mindR_ttbarcc__420","",8, xAxis467);
   c1lep6jin3bex_mbb_mindR_ttbarcc__420->SetBinContent(0,219.7451);
   c1lep6jin3bex_mbb_mindR_ttbarcc__420->SetBinContent(1,432.9448);
   c1lep6jin3bex_mbb_mindR_ttbarcc__420->SetBinContent(2,295.4932);
   c1lep6jin3bex_mbb_mindR_ttbarcc__420->SetBinContent(3,338.136);
   c1lep6jin3bex_mbb_mindR_ttbarcc__420->SetBinContent(4,160.0481);
   c1lep6jin3bex_mbb_mindR_ttbarcc__420->SetBinContent(5,145.8371);
   c1lep6jin3bex_mbb_mindR_ttbarcc__420->SetBinContent(6,57.69266);
   c1lep6jin3bex_mbb_mindR_ttbarcc__420->SetBinContent(7,56.66992);
   c1lep6jin3bex_mbb_mindR_ttbarcc__420->SetBinContent(8,28.18736);
   c1lep6jin3bex_mbb_mindR_ttbarcc__420->SetBinContent(9,79.50115);
   c1lep6jin3bex_mbb_mindR_ttbarcc__420->SetBinError(0,9.582369);
   c1lep6jin3bex_mbb_mindR_ttbarcc__420->SetBinError(1,16.47893);
   c1lep6jin3bex_mbb_mindR_ttbarcc__420->SetBinError(2,11.90964);
   c1lep6jin3bex_mbb_mindR_ttbarcc__420->SetBinError(3,12.08668);
   c1lep6jin3bex_mbb_mindR_ttbarcc__420->SetBinError(4,8.725012);
   c1lep6jin3bex_mbb_mindR_ttbarcc__420->SetBinError(5,8.303127);
   c1lep6jin3bex_mbb_mindR_ttbarcc__420->SetBinError(6,5.396612);
   c1lep6jin3bex_mbb_mindR_ttbarcc__420->SetBinError(7,5.333259);
   c1lep6jin3bex_mbb_mindR_ttbarcc__420->SetBinError(8,3.230187);
   c1lep6jin3bex_mbb_mindR_ttbarcc__420->SetBinError(9,5.226657);
   c1lep6jin3bex_mbb_mindR_ttbarcc__420->SetEntries(5630);
   c1lep6jin3bex_mbb_mindR_ttbarcc__420->SetDirectory(0);
   c1lep6jin3bex_mbb_mindR_ttbarcc__420->SetStats(0);

   ci = TColor::GetColor("#ccccff");
   c1lep6jin3bex_mbb_mindR_ttbarcc__420->SetFillColor(ci);
   c1lep6jin3bex_mbb_mindR_ttbarcc__420->SetMarkerStyle(20);
   c1lep6jin3bex_mbb_mindR_ttbarcc__420->SetMarkerSize(1.2);
   c1lep6jin3bex_mbb_mindR_ttbarcc__420->GetXaxis()->SetTitle("m_{bb}^{#DeltaR min} [GeV]");
   c1lep6jin3bex_mbb_mindR_ttbarcc__420->GetXaxis()->SetRange(1,30);
   c1lep6jin3bex_mbb_mindR_ttbarcc__420->GetXaxis()->SetLabelFont(43);
   c1lep6jin3bex_mbb_mindR_ttbarcc__420->GetXaxis()->SetLabelSize(21);
   c1lep6jin3bex_mbb_mindR_ttbarcc__420->GetXaxis()->SetTitleSize(21);
   c1lep6jin3bex_mbb_mindR_ttbarcc__420->GetXaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_mbb_mindR_ttbarcc__420->GetXaxis()->SetTitleFont(43);
   c1lep6jin3bex_mbb_mindR_ttbarcc__420->GetYaxis()->SetLabelFont(43);
   c1lep6jin3bex_mbb_mindR_ttbarcc__420->GetYaxis()->SetLabelSize(21);
   c1lep6jin3bex_mbb_mindR_ttbarcc__420->GetYaxis()->SetTitleSize(21);
   c1lep6jin3bex_mbb_mindR_ttbarcc__420->GetYaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_mbb_mindR_ttbarcc__420->GetYaxis()->SetTitleFont(43);
   c1lep6jin3bex_mbb_mindR_ttbarcc__420->GetZaxis()->SetLabelFont(43);
   c1lep6jin3bex_mbb_mindR_ttbarcc__420->GetZaxis()->SetLabelSize(21);
   c1lep6jin3bex_mbb_mindR_ttbarcc__420->GetZaxis()->SetTitleSize(21);
   c1lep6jin3bex_mbb_mindR_ttbarcc__420->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep6jin3bex_mbb_mindR_ttbarcc,"");
   Double_t xAxis468[9] = {50, 75, 100, 125, 150, 175, 200, 225, 250}; 
   
   TH1D *c1lep6jin3bex_mbb_mindR_ttbarlight__421 = new TH1D("c1lep6jin3bex_mbb_mindR_ttbarlight__421","",8, xAxis468);
   c1lep6jin3bex_mbb_mindR_ttbarlight__421->SetBinContent(0,337.3746);
   c1lep6jin3bex_mbb_mindR_ttbarlight__421->SetBinContent(1,649.5799);
   c1lep6jin3bex_mbb_mindR_ttbarlight__421->SetBinContent(2,431.6974);
   c1lep6jin3bex_mbb_mindR_ttbarlight__421->SetBinContent(3,560.8131);
   c1lep6jin3bex_mbb_mindR_ttbarlight__421->SetBinContent(4,210.828);
   c1lep6jin3bex_mbb_mindR_ttbarlight__421->SetBinContent(5,129.3598);
   c1lep6jin3bex_mbb_mindR_ttbarlight__421->SetBinContent(6,37.46421);
   c1lep6jin3bex_mbb_mindR_ttbarlight__421->SetBinContent(7,31.90602);
   c1lep6jin3bex_mbb_mindR_ttbarlight__421->SetBinContent(8,15.60908);
   c1lep6jin3bex_mbb_mindR_ttbarlight__421->SetBinContent(9,44.99334);
   c1lep6jin3bex_mbb_mindR_ttbarlight__421->SetBinError(0,14.73151);
   c1lep6jin3bex_mbb_mindR_ttbarlight__421->SetBinError(1,20.05204);
   c1lep6jin3bex_mbb_mindR_ttbarlight__421->SetBinError(2,15.90628);
   c1lep6jin3bex_mbb_mindR_ttbarlight__421->SetBinError(3,17.01991);
   c1lep6jin3bex_mbb_mindR_ttbarlight__421->SetBinError(4,10.18478);
   c1lep6jin3bex_mbb_mindR_ttbarlight__421->SetBinError(5,7.934357);
   c1lep6jin3bex_mbb_mindR_ttbarlight__421->SetBinError(6,3.822065);
   c1lep6jin3bex_mbb_mindR_ttbarlight__421->SetBinError(7,3.777267);
   c1lep6jin3bex_mbb_mindR_ttbarlight__421->SetBinError(8,3.007792);
   c1lep6jin3bex_mbb_mindR_ttbarlight__421->SetBinError(9,5.631323);
   c1lep6jin3bex_mbb_mindR_ttbarlight__421->SetEntries(6954);
   c1lep6jin3bex_mbb_mindR_ttbarlight__421->SetDirectory(0);
   c1lep6jin3bex_mbb_mindR_ttbarlight__421->SetStats(0);
   c1lep6jin3bex_mbb_mindR_ttbarlight__421->SetMarkerStyle(20);
   c1lep6jin3bex_mbb_mindR_ttbarlight__421->SetMarkerSize(1.2);
   c1lep6jin3bex_mbb_mindR_ttbarlight__421->GetXaxis()->SetTitle("m_{bb}^{#DeltaR min} [GeV]");
   c1lep6jin3bex_mbb_mindR_ttbarlight__421->GetXaxis()->SetRange(1,30);
   c1lep6jin3bex_mbb_mindR_ttbarlight__421->GetXaxis()->SetLabelFont(43);
   c1lep6jin3bex_mbb_mindR_ttbarlight__421->GetXaxis()->SetLabelSize(21);
   c1lep6jin3bex_mbb_mindR_ttbarlight__421->GetXaxis()->SetTitleSize(21);
   c1lep6jin3bex_mbb_mindR_ttbarlight__421->GetXaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_mbb_mindR_ttbarlight__421->GetXaxis()->SetTitleFont(43);
   c1lep6jin3bex_mbb_mindR_ttbarlight__421->GetYaxis()->SetLabelFont(43);
   c1lep6jin3bex_mbb_mindR_ttbarlight__421->GetYaxis()->SetLabelSize(21);
   c1lep6jin3bex_mbb_mindR_ttbarlight__421->GetYaxis()->SetTitleSize(21);
   c1lep6jin3bex_mbb_mindR_ttbarlight__421->GetYaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_mbb_mindR_ttbarlight__421->GetYaxis()->SetTitleFont(43);
   c1lep6jin3bex_mbb_mindR_ttbarlight__421->GetZaxis()->SetLabelFont(43);
   c1lep6jin3bex_mbb_mindR_ttbarlight__421->GetZaxis()->SetLabelSize(21);
   c1lep6jin3bex_mbb_mindR_ttbarlight__421->GetZaxis()->SetTitleSize(21);
   c1lep6jin3bex_mbb_mindR_ttbarlight__421->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep6jin3bex_mbb_mindR_ttbarlight,"");
   Double_t xAxis469[9] = {50, 75, 100, 125, 150, 175, 200, 225, 250}; 
   
   TH1D *c1lep6jin3bex_mbb_mindR_uHcW__422 = new TH1D("c1lep6jin3bex_mbb_mindR_uHcW__422","",8, xAxis469);
   c1lep6jin3bex_mbb_mindR_uHcW__422->SetBinContent(0,86.62782);
   c1lep6jin3bex_mbb_mindR_uHcW__422->SetBinContent(1,151.9096);
   c1lep6jin3bex_mbb_mindR_uHcW__422->SetBinContent(2,128.3871);
   c1lep6jin3bex_mbb_mindR_uHcW__422->SetBinContent(3,217.614);
   c1lep6jin3bex_mbb_mindR_uHcW__422->SetBinContent(4,65.38533);
   c1lep6jin3bex_mbb_mindR_uHcW__422->SetBinContent(5,21.46386);
   c1lep6jin3bex_mbb_mindR_uHcW__422->SetBinContent(6,7.749512);
   c1lep6jin3bex_mbb_mindR_uHcW__422->SetBinContent(7,3.808227);
   c1lep6jin3bex_mbb_mindR_uHcW__422->SetBinContent(8,1.629261);
   c1lep6jin3bex_mbb_mindR_uHcW__422->SetBinContent(9,4.457793);
   c1lep6jin3bex_mbb_mindR_uHcW__422->SetBinError(0,11.71702);
   c1lep6jin3bex_mbb_mindR_uHcW__422->SetBinError(1,14.10873);
   c1lep6jin3bex_mbb_mindR_uHcW__422->SetBinError(2,13.6555);
   c1lep6jin3bex_mbb_mindR_uHcW__422->SetBinError(3,17.50813);
   c1lep6jin3bex_mbb_mindR_uHcW__422->SetBinError(4,9.363329);
   c1lep6jin3bex_mbb_mindR_uHcW__422->SetBinError(5,6.562798);
   c1lep6jin3bex_mbb_mindR_uHcW__422->SetBinError(6,3.188721);
   c1lep6jin3bex_mbb_mindR_uHcW__422->SetBinError(7,3.599848);
   c1lep6jin3bex_mbb_mindR_uHcW__422->SetBinError(8,1.439352);
   c1lep6jin3bex_mbb_mindR_uHcW__422->SetBinError(9,2.924524);
   c1lep6jin3bex_mbb_mindR_uHcW__422->SetEntries(5540);
   c1lep6jin3bex_mbb_mindR_uHcW__422->SetDirectory(0);
   c1lep6jin3bex_mbb_mindR_uHcW__422->SetStats(0);
   c1lep6jin3bex_mbb_mindR_uHcW__422->SetFillColor(2);
   c1lep6jin3bex_mbb_mindR_uHcW__422->SetLineColor(2);
   c1lep6jin3bex_mbb_mindR_uHcW__422->SetMarkerStyle(20);
   c1lep6jin3bex_mbb_mindR_uHcW__422->SetMarkerSize(1.2);
   c1lep6jin3bex_mbb_mindR_uHcW__422->GetXaxis()->SetTitle("m_{bb}^{#DeltaR min} [GeV]");
   c1lep6jin3bex_mbb_mindR_uHcW__422->GetXaxis()->SetRange(1,30);
   c1lep6jin3bex_mbb_mindR_uHcW__422->GetXaxis()->SetLabelFont(43);
   c1lep6jin3bex_mbb_mindR_uHcW__422->GetXaxis()->SetLabelSize(21);
   c1lep6jin3bex_mbb_mindR_uHcW__422->GetXaxis()->SetTitleSize(21);
   c1lep6jin3bex_mbb_mindR_uHcW__422->GetXaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_mbb_mindR_uHcW__422->GetXaxis()->SetTitleFont(43);
   c1lep6jin3bex_mbb_mindR_uHcW__422->GetYaxis()->SetLabelFont(43);
   c1lep6jin3bex_mbb_mindR_uHcW__422->GetYaxis()->SetLabelSize(21);
   c1lep6jin3bex_mbb_mindR_uHcW__422->GetYaxis()->SetTitleSize(21);
   c1lep6jin3bex_mbb_mindR_uHcW__422->GetYaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_mbb_mindR_uHcW__422->GetYaxis()->SetTitleFont(43);
   c1lep6jin3bex_mbb_mindR_uHcW__422->GetZaxis()->SetLabelFont(43);
   c1lep6jin3bex_mbb_mindR_uHcW__422->GetZaxis()->SetLabelSize(21);
   c1lep6jin3bex_mbb_mindR_uHcW__422->GetZaxis()->SetTitleSize(21);
   c1lep6jin3bex_mbb_mindR_uHcW__422->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep6jin3bex_mbb_mindR_uHcW,"");
   h_stack->Draw("hist same");
   
   Double_t g_totErr_fx3187[8] = {
   62.5,
   87.5,
   112.5,
   137.5,
   162.5,
   187.5,
   212.5,
   237.5};
   Double_t g_totErr_fy3187[8] = {
   3306.686,
   2008.731,
   2346.76,
   1076.589,
   980.4717,
   404.1585,
   411.4362,
   196.3996};
   Double_t g_totErr_felx3187[8] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t g_totErr_fely3187[8] = {
   662.9713,
   405.7885,
   477.3875,
   212.8336,
   190.468,
   79.24563,
   82.08073,
   40.64767};
   Double_t g_totErr_fehx3187[8] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t g_totErr_fehy3187[8] = {
   662.9713,
   405.7885,
   477.3875,
   212.8336,
   190.468,
   79.24563,
   82.08073,
   40.64767};
   grae = new TGraphAsymmErrors(8,g_totErr_fx3187,g_totErr_fy3187,g_totErr_felx3187,g_totErr_fehx3187,g_totErr_fely3187,g_totErr_fehy3187);
   grae->SetName("g_totErr");
   grae->SetTitle("");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(3354);
   grae->SetLineColor(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0);
   
   TH1F *Graph_g_totErr3187 = new TH1F("Graph_g_totErr3187","",100,30,270);
   Graph_g_totErr3187->SetMinimum(0);
   Graph_g_totErr3187->SetMaximum(4351.048);
   Graph_g_totErr3187->SetDirectory(0);
   Graph_g_totErr3187->SetStats(0);
   Graph_g_totErr3187->SetLineWidth(2);
   Graph_g_totErr3187->SetMarkerStyle(20);
   Graph_g_totErr3187->SetMarkerSize(1.2);
   Graph_g_totErr3187->GetXaxis()->SetLabelFont(43);
   Graph_g_totErr3187->GetXaxis()->SetLabelSize(21);
   Graph_g_totErr3187->GetXaxis()->SetTitleSize(21);
   Graph_g_totErr3187->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_totErr3187->GetXaxis()->SetTitleFont(43);
   Graph_g_totErr3187->GetYaxis()->SetLabelFont(43);
   Graph_g_totErr3187->GetYaxis()->SetLabelSize(21);
   Graph_g_totErr3187->GetYaxis()->SetTitleSize(21);
   Graph_g_totErr3187->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_totErr3187->GetYaxis()->SetTitleFont(43);
   Graph_g_totErr3187->GetZaxis()->SetLabelFont(43);
   Graph_g_totErr3187->GetZaxis()->SetLabelSize(21);
   Graph_g_totErr3187->GetZaxis()->SetTitleSize(21);
   Graph_g_totErr3187->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_totErr3187);
   
   grae->Draw("e2");
   
   Double_t Graph_from_c1lep6jin3bex_mbb_mindR_Data_fx3188[8] = {
   62.5,
   87.5,
   112.5,
   137.5,
   162.5,
   187.5,
   212.5,
   237.5};
   Double_t Graph_from_c1lep6jin3bex_mbb_mindR_Data_fy3188[8] = {
   3624,
   2197,
   2692,
   1110,
   1068,
   460,
   501,
   228};
   Double_t Graph_from_c1lep6jin3bex_mbb_mindR_Data_felx3188[8] = {
   12.475,
   12.475,
   12.475,
   12.475,
   12.475,
   12.475,
   12.475,
   12.475};
   Double_t Graph_from_c1lep6jin3bex_mbb_mindR_Data_fely3188[8] = {
   60.19967,
   46.87217,
   51.88449,
   33.31666,
   32.68027,
   21.44761,
   22.38303,
   15.09967};
   Double_t Graph_from_c1lep6jin3bex_mbb_mindR_Data_fehx3188[8] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t Graph_from_c1lep6jin3bex_mbb_mindR_Data_fehy3188[8] = {
   60.19967,
   46.87217,
   51.88449,
   33.31666,
   32.68027,
   21.44761,
   22.38303,
   15.09967};
   grae = new TGraphAsymmErrors(8,Graph_from_c1lep6jin3bex_mbb_mindR_Data_fx3188,Graph_from_c1lep6jin3bex_mbb_mindR_Data_fy3188,Graph_from_c1lep6jin3bex_mbb_mindR_Data_felx3188,Graph_from_c1lep6jin3bex_mbb_mindR_Data_fehx3188,Graph_from_c1lep6jin3bex_mbb_mindR_Data_fely3188,Graph_from_c1lep6jin3bex_mbb_mindR_Data_fehy3188);
   grae->SetName("Graph_from_c1lep6jin3bex_mbb_mindR_Data");
   grae->SetTitle("");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_c1lep6jin3bex_mbb_mindR_Data3188 = new TH1F("Graph_Graph_from_c1lep6jin3bex_mbb_mindR_Data3188","",100,30.0275,269.9975);
   Graph_Graph_from_c1lep6jin3bex_mbb_mindR_Data3188->SetMinimum(0);
   Graph_Graph_from_c1lep6jin3bex_mbb_mindR_Data3188->SetMaximum(4031.33);
   Graph_Graph_from_c1lep6jin3bex_mbb_mindR_Data3188->SetDirectory(0);
   Graph_Graph_from_c1lep6jin3bex_mbb_mindR_Data3188->SetStats(0);
   Graph_Graph_from_c1lep6jin3bex_mbb_mindR_Data3188->SetLineWidth(2);
   Graph_Graph_from_c1lep6jin3bex_mbb_mindR_Data3188->SetMarkerStyle(20);
   Graph_Graph_from_c1lep6jin3bex_mbb_mindR_Data3188->SetMarkerSize(1.2);
   Graph_Graph_from_c1lep6jin3bex_mbb_mindR_Data3188->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep6jin3bex_mbb_mindR_Data3188->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep6jin3bex_mbb_mindR_Data3188->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep6jin3bex_mbb_mindR_Data3188->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep6jin3bex_mbb_mindR_Data3188->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep6jin3bex_mbb_mindR_Data3188->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep6jin3bex_mbb_mindR_Data3188->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep6jin3bex_mbb_mindR_Data3188->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep6jin3bex_mbb_mindR_Data3188->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep6jin3bex_mbb_mindR_Data3188->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep6jin3bex_mbb_mindR_Data3188->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep6jin3bex_mbb_mindR_Data3188->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep6jin3bex_mbb_mindR_Data3188->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep6jin3bex_mbb_mindR_Data3188->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_c1lep6jin3bex_mbb_mindR_Data3188);
   
   grae->Draw("ep1 ");
   Double_t xAxis470[9] = {50, 75, 100, 125, 150, 175, 200, 225, 250}; 
   
   TH1D *h_dummy_copy__423 = new TH1D("h_dummy_copy__423","",8, xAxis470);
   h_dummy_copy__423->SetEntries(1164490);
   h_dummy_copy__423->SetDirectory(0);
   h_dummy_copy__423->SetStats(0);
   h_dummy_copy__423->SetMarkerStyle(20);
   h_dummy_copy__423->SetMarkerSize(1.2);
   h_dummy_copy__423->GetXaxis()->SetTitle("m_{bb}^{min. #DeltaR} [GeV]");
   h_dummy_copy__423->GetXaxis()->SetRange(1,30);
   h_dummy_copy__423->GetXaxis()->SetLabelFont(43);
   h_dummy_copy__423->GetXaxis()->SetLabelSize(21);
   h_dummy_copy__423->GetXaxis()->SetTitleSize(21);
   h_dummy_copy__423->GetXaxis()->SetTitleOffset(1.4);
   h_dummy_copy__423->GetXaxis()->SetTitleFont(43);
   h_dummy_copy__423->GetYaxis()->SetTitle("Events / 25 GeV");
   h_dummy_copy__423->GetYaxis()->SetLabelFont(43);
   h_dummy_copy__423->GetYaxis()->SetLabelSize(16.8);
   h_dummy_copy__423->GetYaxis()->SetTitleSize(21);
   h_dummy_copy__423->GetYaxis()->SetTitleOffset(2.4);
   h_dummy_copy__423->GetYaxis()->SetTitleFont(43);
   h_dummy_copy__423->GetZaxis()->SetLabelFont(43);
   h_dummy_copy__423->GetZaxis()->SetLabelSize(21);
   h_dummy_copy__423->GetZaxis()->SetTitleSize(21);
   h_dummy_copy__423->GetZaxis()->SetTitleFont(43);
   h_dummy_copy__423->Draw("sameaxis");
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
      tex = new TLatex(0.18,0.73,"#geq6j, 3b");
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
   TLegendEntry *entry=leg->AddEntry("c1lep6jin3bex_mbb_mindR_Data","Data","lep");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep6jin3bex_mbb_mindR_uHcW","t#bar{t}#rightarrowWbHc (BR=1%)","f");
   entry->SetFillColor(2);
   entry->SetFillStyle(1001);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep6jin3bex_mbb_mindR_ttbarlight","t#bar{t}+light","f");
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep6jin3bex_mbb_mindR_ttbarcc","t#bar{t}+cc","f");

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
   entry=leg->AddEntry("c1lep6jin3bex_mbb_mindR_ttbarbb","t#bar{t}+bb","f");

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
   entry=leg->AddEntry("c1lep6jin3bex_mbb_mindR_topEW","Non-t#bar{t}","f");

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
   c_c1lep6jin3bex_mbb_mindR->cd();
   c_c1lep6jin3bex_mbb_mindR->Modified();
   c_c1lep6jin3bex_mbb_mindR->cd();
   c_c1lep6jin3bex_mbb_mindR->SetSelected(c_c1lep6jin3bex_mbb_mindR);
}
