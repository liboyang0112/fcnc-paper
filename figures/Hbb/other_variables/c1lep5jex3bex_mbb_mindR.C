void c1lep5jex3bex_mbb_mindR()
{
//=========Macro generated from canvas: c_c1lep5jex3bex_mbb_mindR/c_c1lep5jex3bex_mbb_mindR
//=========  (Thu Jul 19 17:38:09 2018) by ROOT version6.04/14
   TCanvas *c_c1lep5jex3bex_mbb_mindR = new TCanvas("c_c1lep5jex3bex_mbb_mindR", "c_c1lep5jex3bex_mbb_mindR",0,0,600,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c_c1lep5jex3bex_mbb_mindR->SetHighLightColor(2);
   c_c1lep5jex3bex_mbb_mindR->Range(0,0,1,1);
   c_c1lep5jex3bex_mbb_mindR->SetFillColor(0);
   c_c1lep5jex3bex_mbb_mindR->SetBorderMode(0);
   c_c1lep5jex3bex_mbb_mindR->SetBorderSize(2);
   c_c1lep5jex3bex_mbb_mindR->SetTickx(1);
   c_c1lep5jex3bex_mbb_mindR->SetTicky(1);
   c_c1lep5jex3bex_mbb_mindR->SetLeftMargin(0.16);
   c_c1lep5jex3bex_mbb_mindR->SetRightMargin(0.05);
   c_c1lep5jex3bex_mbb_mindR->SetTopMargin(0.05);
   c_c1lep5jex3bex_mbb_mindR->SetBottomMargin(0.16);
   c_c1lep5jex3bex_mbb_mindR->SetFrameBorderMode(0);
  
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
   Double_t xAxis451[9] = {50, 75, 100, 125, 150, 175, 200, 225, 250}; 
   
   TH1D *h_dummy2__406 = new TH1D("h_dummy2__406","Data/MC",8, xAxis451);
   h_dummy2__406->SetMinimum(0.5);
   h_dummy2__406->SetMaximum(1.5);
   h_dummy2__406->SetEntries(1363531);
   h_dummy2__406->SetDirectory(0);
   h_dummy2__406->SetStats(0);
   h_dummy2__406->SetMarkerStyle(20);
   h_dummy2__406->SetMarkerSize(1.2);
   h_dummy2__406->GetXaxis()->SetTitle("m_{bb}^{min. #DeltaR} [GeV]");
   h_dummy2__406->GetXaxis()->SetRange(1,30);
   h_dummy2__406->GetXaxis()->SetLabelFont(43);
   h_dummy2__406->GetXaxis()->SetLabelOffset(0.025);
   h_dummy2__406->GetXaxis()->SetLabelSize(16.8);
   h_dummy2__406->GetXaxis()->SetTitleSize(21);
   h_dummy2__406->GetXaxis()->SetTitleOffset(5.05);
   h_dummy2__406->GetXaxis()->SetTitleFont(43);
   h_dummy2__406->GetYaxis()->SetTitle("Data / Bkg");
   h_dummy2__406->GetYaxis()->SetNdivisions(-504);
   h_dummy2__406->GetYaxis()->SetLabelFont(43);
   h_dummy2__406->GetYaxis()->SetLabelOffset(0.02);
   h_dummy2__406->GetYaxis()->SetLabelSize(16.8);
   h_dummy2__406->GetYaxis()->SetTitleSize(21);
   h_dummy2__406->GetYaxis()->SetTitleOffset(2.4);
   h_dummy2__406->GetYaxis()->SetTitleFont(43);
   h_dummy2__406->GetZaxis()->SetLabelFont(43);
   h_dummy2__406->GetZaxis()->SetLabelSize(21);
   h_dummy2__406->GetZaxis()->SetTitleSize(21);
   h_dummy2__406->GetZaxis()->SetTitleFont(43);
   h_dummy2__406->Draw("HIST");
   
   Double_t Graph_from_h_ratio_fx3181[8] = {
   62.5,
   87.5,
   112.5,
   137.5,
   162.5,
   187.5,
   212.5,
   237.5};
   Double_t Graph_from_h_ratio_fy3181[8] = {
   1.160683,
   1.126838,
   1.163493,
   1.125451,
   1.137304,
   1.090743,
   1.317642,
   1.239124};
   Double_t Graph_from_h_ratio_felx3181[8] = {
   12.475,
   12.475,
   12.475,
   12.475,
   12.475,
   12.475,
   12.475,
   12.475};
   Double_t Graph_from_h_ratio_fely3181[8] = {
   0.0215052,
   0.02641348,
   0.02467155,
   0.03749419,
   0.04103893,
   0.06175119,
   0.07532457,
   0.1112766};
   Double_t Graph_from_h_ratio_fehx3181[8] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t Graph_from_h_ratio_fehy3181[8] = {
   0.0215052,
   0.02641348,
   0.02467155,
   0.03749419,
   0.04103893,
   0.06175119,
   0.07532457,
   0.1112766};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(8,Graph_from_h_ratio_fx3181,Graph_from_h_ratio_fy3181,Graph_from_h_ratio_felx3181,Graph_from_h_ratio_fehx3181,Graph_from_h_ratio_fely3181,Graph_from_h_ratio_fehy3181);
   grae->SetName("Graph_from_h_ratio");
   grae->SetTitle("");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(24);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_h_ratio3181 = new TH1F("Graph_Graph_from_h_ratio3181","",100,30.0275,269.9975);
   Graph_Graph_from_h_ratio3181->SetMinimum(0.9925949);
   Graph_Graph_from_h_ratio3181->SetMaximum(1.429364);
   Graph_Graph_from_h_ratio3181->SetDirectory(0);
   Graph_Graph_from_h_ratio3181->SetStats(0);
   Graph_Graph_from_h_ratio3181->SetLineWidth(2);
   Graph_Graph_from_h_ratio3181->SetMarkerStyle(20);
   Graph_Graph_from_h_ratio3181->SetMarkerSize(1.2);
   Graph_Graph_from_h_ratio3181->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3181->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3181->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3181->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3181->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3181->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3181->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3181->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3181->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3181->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3181->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3181->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3181->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3181->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_h_ratio3181);
   
   grae->Draw("pe0");
   TLine *line = new TLine(50,1,250,1);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t g_ratio2_fx3182[8] = {
   62.5,
   87.5,
   112.5,
   137.5,
   162.5,
   187.5,
   212.5,
   237.5};
   Double_t g_ratio2_fy3182[8] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t g_ratio2_felx3182[8] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t g_ratio2_fely3182[8] = {
   0.2034275,
   0.1978272,
   0.2015423,
   0.1911776,
   0.1757874,
   0.1790854,
   0.1950009,
   0.2237455};
   Double_t g_ratio2_fehx3182[8] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t g_ratio2_fehy3182[8] = {
   0.2034275,
   0.1978272,
   0.2015423,
   0.1911776,
   0.1757874,
   0.1790854,
   0.1950009,
   0.2237455};
   grae = new TGraphAsymmErrors(8,g_ratio2_fx3182,g_ratio2_fy3182,g_ratio2_felx3182,g_ratio2_fehx3182,g_ratio2_fely3182,g_ratio2_fehy3182);
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
   
   TH1F *Graph_g_ratio23182 = new TH1F("Graph_g_ratio23182","",100,30,270);
   Graph_g_ratio23182->SetMinimum(0.7315054);
   Graph_g_ratio23182->SetMaximum(1.268495);
   Graph_g_ratio23182->SetDirectory(0);
   Graph_g_ratio23182->SetStats(0);
   Graph_g_ratio23182->SetLineWidth(2);
   Graph_g_ratio23182->SetMarkerStyle(20);
   Graph_g_ratio23182->SetMarkerSize(1.2);
   Graph_g_ratio23182->GetXaxis()->SetLabelFont(43);
   Graph_g_ratio23182->GetXaxis()->SetLabelSize(21);
   Graph_g_ratio23182->GetXaxis()->SetTitleSize(21);
   Graph_g_ratio23182->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23182->GetXaxis()->SetTitleFont(43);
   Graph_g_ratio23182->GetYaxis()->SetLabelFont(43);
   Graph_g_ratio23182->GetYaxis()->SetLabelSize(21);
   Graph_g_ratio23182->GetYaxis()->SetTitleSize(21);
   Graph_g_ratio23182->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23182->GetYaxis()->SetTitleFont(43);
   Graph_g_ratio23182->GetZaxis()->SetLabelFont(43);
   Graph_g_ratio23182->GetZaxis()->SetLabelSize(21);
   Graph_g_ratio23182->GetZaxis()->SetTitleSize(21);
   Graph_g_ratio23182->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_ratio23182);
   
   grae->Draw("e2");
   Double_t xAxis452[9] = {50, 75, 100, 125, 150, 175, 200, 225, 250}; 
   
   TH1D *h_dummy2_copy__407 = new TH1D("h_dummy2_copy__407","Data/MC",8, xAxis452);
   h_dummy2_copy__407->SetMinimum(0.5);
   h_dummy2_copy__407->SetMaximum(1.5);
   h_dummy2_copy__407->SetEntries(1363531);
   h_dummy2_copy__407->SetDirectory(0);
   h_dummy2_copy__407->SetStats(0);
   h_dummy2_copy__407->SetMarkerStyle(20);
   h_dummy2_copy__407->SetMarkerSize(1.2);
   h_dummy2_copy__407->GetXaxis()->SetTitle("m_{bb}^{min. #DeltaR} [GeV]");
   h_dummy2_copy__407->GetXaxis()->SetRange(1,30);
   h_dummy2_copy__407->GetXaxis()->SetLabelFont(43);
   h_dummy2_copy__407->GetXaxis()->SetLabelOffset(0.025);
   h_dummy2_copy__407->GetXaxis()->SetLabelSize(16.8);
   h_dummy2_copy__407->GetXaxis()->SetTitleSize(21);
   h_dummy2_copy__407->GetXaxis()->SetTitleOffset(5.05);
   h_dummy2_copy__407->GetXaxis()->SetTitleFont(43);
   h_dummy2_copy__407->GetYaxis()->SetTitle("Data / Bkg");
   h_dummy2_copy__407->GetYaxis()->SetNdivisions(-504);
   h_dummy2_copy__407->GetYaxis()->SetLabelFont(43);
   h_dummy2_copy__407->GetYaxis()->SetLabelOffset(0.02);
   h_dummy2_copy__407->GetYaxis()->SetLabelSize(16.8);
   h_dummy2_copy__407->GetYaxis()->SetTitleSize(21);
   h_dummy2_copy__407->GetYaxis()->SetTitleOffset(2.4);
   h_dummy2_copy__407->GetYaxis()->SetTitleFont(43);
   h_dummy2_copy__407->GetZaxis()->SetLabelFont(43);
   h_dummy2_copy__407->GetZaxis()->SetLabelSize(21);
   h_dummy2_copy__407->GetZaxis()->SetTitleSize(21);
   h_dummy2_copy__407->GetZaxis()->SetTitleFont(43);
   h_dummy2_copy__407->Draw("sameaxis");
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
   c_c1lep5jex3bex_mbb_mindR->cd();
  
// ------------>Primitives in pad: pad0
   TPad *pad0 = new TPad("pad0", "pad0",0,0.2,1,1);
   pad0->Draw();
   pad0->cd();
   pad0->Range(15.4321,-628.3,262.3457,5654.7);
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
   Double_t xAxis453[9] = {50, 75, 100, 125, 150, 175, 200, 225, 250}; 
   
   TH1D *h_dummy__408 = new TH1D("h_dummy__408","",8, xAxis453);
   h_dummy__408->SetMinimum(0);
   h_dummy__408->SetMaximum(5340.55);
   h_dummy__408->SetEntries(1363531);
   h_dummy__408->SetDirectory(0);
   h_dummy__408->SetStats(0);
   h_dummy__408->SetMarkerStyle(20);
   h_dummy__408->SetMarkerSize(1.2);
   h_dummy__408->GetXaxis()->SetRange(1,30);
   h_dummy__408->GetXaxis()->SetLabelFont(43);
   h_dummy__408->GetXaxis()->SetLabelSize(0);
   h_dummy__408->GetXaxis()->SetTitleSize(21);
   h_dummy__408->GetXaxis()->SetTitleOffset(1.4);
   h_dummy__408->GetXaxis()->SetTitleFont(43);
   h_dummy__408->GetYaxis()->SetTitle("Events / 25 GeV");
   h_dummy__408->GetYaxis()->SetLabelFont(43);
   h_dummy__408->GetYaxis()->SetLabelSize(16.8);
   h_dummy__408->GetYaxis()->SetTitleSize(21);
   h_dummy__408->GetYaxis()->SetTitleOffset(2.4);
   h_dummy__408->GetYaxis()->SetTitleFont(43);
   h_dummy__408->GetZaxis()->SetLabelFont(43);
   h_dummy__408->GetZaxis()->SetLabelSize(21);
   h_dummy__408->GetZaxis()->SetTitleSize(21);
   h_dummy__408->GetZaxis()->SetTitleFont(43);
   h_dummy__408->Draw("HIST");
   
   THStack *h_stack = new THStack();
   h_stack->SetName("h_stack");
   h_stack->SetTitle("h_stack");
   Double_t xAxis454[9] = {50, 75, 100, 125, 150, 175, 200, 225, 250}; 
   
   TH1F *h_stack_stack_46 = new TH1F("h_stack_stack_46","h_stack",8, xAxis454);
   h_stack_stack_46->SetMinimum(0);
   h_stack_stack_46->SetMaximum(2881.69);
   h_stack_stack_46->SetDirectory(0);
   h_stack_stack_46->SetStats(0);
   h_stack_stack_46->SetLineWidth(2);
   h_stack_stack_46->SetMarkerStyle(20);
   h_stack_stack_46->SetMarkerSize(1.2);
   h_stack_stack_46->GetXaxis()->SetLabelFont(43);
   h_stack_stack_46->GetXaxis()->SetLabelSize(21);
   h_stack_stack_46->GetXaxis()->SetTitleSize(21);
   h_stack_stack_46->GetXaxis()->SetTitleOffset(1.4);
   h_stack_stack_46->GetXaxis()->SetTitleFont(43);
   h_stack_stack_46->GetYaxis()->SetLabelFont(43);
   h_stack_stack_46->GetYaxis()->SetLabelSize(21);
   h_stack_stack_46->GetYaxis()->SetTitleSize(21);
   h_stack_stack_46->GetYaxis()->SetTitleOffset(1.4);
   h_stack_stack_46->GetYaxis()->SetTitleFont(43);
   h_stack_stack_46->GetZaxis()->SetLabelFont(43);
   h_stack_stack_46->GetZaxis()->SetLabelSize(21);
   h_stack_stack_46->GetZaxis()->SetTitleSize(21);
   h_stack_stack_46->GetZaxis()->SetTitleFont(43);
   h_stack->SetHistogram(h_stack_stack_46);
   
   Double_t xAxis455[9] = {50, 75, 100, 125, 150, 175, 200, 225, 250}; 
   
   TH1D *c1lep5jex3bex_mbb_mindR_topEW__409 = new TH1D("c1lep5jex3bex_mbb_mindR_topEW__409","",8, xAxis455);
   c1lep5jex3bex_mbb_mindR_topEW__409->SetBinContent(0,370.2401);
   c1lep5jex3bex_mbb_mindR_topEW__409->SetBinContent(1,300.3668);
   c1lep5jex3bex_mbb_mindR_topEW__409->SetBinContent(2,172.6085);
   c1lep5jex3bex_mbb_mindR_topEW__409->SetBinContent(3,174.1948);
   c1lep5jex3bex_mbb_mindR_topEW__409->SetBinContent(4,86.39153);
   c1lep5jex3bex_mbb_mindR_topEW__409->SetBinContent(5,82.69498);
   c1lep5jex3bex_mbb_mindR_topEW__409->SetBinContent(6,48.50986);
   c1lep5jex3bex_mbb_mindR_topEW__409->SetBinContent(7,36.67499);
   c1lep5jex3bex_mbb_mindR_topEW__409->SetBinContent(8,9.565505);
   c1lep5jex3bex_mbb_mindR_topEW__409->SetBinContent(9,45.62118);
   c1lep5jex3bex_mbb_mindR_topEW__409->SetBinError(0,43.61229);
   c1lep5jex3bex_mbb_mindR_topEW__409->SetBinError(1,33.0823);
   c1lep5jex3bex_mbb_mindR_topEW__409->SetBinError(2,28.61212);
   c1lep5jex3bex_mbb_mindR_topEW__409->SetBinError(3,25.33132);
   c1lep5jex3bex_mbb_mindR_topEW__409->SetBinError(4,22.17516);
   c1lep5jex3bex_mbb_mindR_topEW__409->SetBinError(5,20.59346);
   c1lep5jex3bex_mbb_mindR_topEW__409->SetBinError(6,18.25022);
   c1lep5jex3bex_mbb_mindR_topEW__409->SetBinError(7,15.51757);
   c1lep5jex3bex_mbb_mindR_topEW__409->SetBinError(8,5.898368);
   c1lep5jex3bex_mbb_mindR_topEW__409->SetBinError(9,14.33506);
   c1lep5jex3bex_mbb_mindR_topEW__409->SetEntries(1334917);
   c1lep5jex3bex_mbb_mindR_topEW__409->SetDirectory(0);
   c1lep5jex3bex_mbb_mindR_topEW__409->SetStats(0);

   ci = TColor::GetColor("#66cc66");
   c1lep5jex3bex_mbb_mindR_topEW__409->SetFillColor(ci);
   c1lep5jex3bex_mbb_mindR_topEW__409->SetMarkerStyle(20);
   c1lep5jex3bex_mbb_mindR_topEW__409->SetMarkerSize(1.2);
   c1lep5jex3bex_mbb_mindR_topEW__409->GetXaxis()->SetTitle("m_{bb}^{#DeltaR min} [GeV]");
   c1lep5jex3bex_mbb_mindR_topEW__409->GetXaxis()->SetRange(1,30);
   c1lep5jex3bex_mbb_mindR_topEW__409->GetXaxis()->SetLabelFont(43);
   c1lep5jex3bex_mbb_mindR_topEW__409->GetXaxis()->SetLabelSize(21);
   c1lep5jex3bex_mbb_mindR_topEW__409->GetXaxis()->SetTitleSize(21);
   c1lep5jex3bex_mbb_mindR_topEW__409->GetXaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_mbb_mindR_topEW__409->GetXaxis()->SetTitleFont(43);
   c1lep5jex3bex_mbb_mindR_topEW__409->GetYaxis()->SetLabelFont(43);
   c1lep5jex3bex_mbb_mindR_topEW__409->GetYaxis()->SetLabelSize(21);
   c1lep5jex3bex_mbb_mindR_topEW__409->GetYaxis()->SetTitleSize(21);
   c1lep5jex3bex_mbb_mindR_topEW__409->GetYaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_mbb_mindR_topEW__409->GetYaxis()->SetTitleFont(43);
   c1lep5jex3bex_mbb_mindR_topEW__409->GetZaxis()->SetLabelFont(43);
   c1lep5jex3bex_mbb_mindR_topEW__409->GetZaxis()->SetLabelSize(21);
   c1lep5jex3bex_mbb_mindR_topEW__409->GetZaxis()->SetTitleSize(21);
   c1lep5jex3bex_mbb_mindR_topEW__409->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep5jex3bex_mbb_mindR_topEW,"");
   Double_t xAxis456[9] = {50, 75, 100, 125, 150, 175, 200, 225, 250}; 
   
   TH1D *c1lep5jex3bex_mbb_mindR_ttbarbb__410 = new TH1D("c1lep5jex3bex_mbb_mindR_ttbarbb__410","",8, xAxis456);
   c1lep5jex3bex_mbb_mindR_ttbarbb__410->SetBinContent(0,712.4157);
   c1lep5jex3bex_mbb_mindR_ttbarbb__410->SetBinContent(1,1030.531);
   c1lep5jex3bex_mbb_mindR_ttbarbb__410->SetBinContent(2,632.7611);
   c1lep5jex3bex_mbb_mindR_ttbarbb__410->SetBinContent(3,711.0872);
   c1lep5jex3bex_mbb_mindR_ttbarbb__410->SetBinContent(4,322.0838);
   c1lep5jex3bex_mbb_mindR_ttbarbb__410->SetBinContent(5,354.1829);
   c1lep5jex3bex_mbb_mindR_ttbarbb__410->SetBinContent(6,155.0197);
   c1lep5jex3bex_mbb_mindR_ttbarbb__410->SetBinContent(7,141.92);
   c1lep5jex3bex_mbb_mindR_ttbarbb__410->SetBinContent(8,70.71493);
   c1lep5jex3bex_mbb_mindR_ttbarbb__410->SetBinContent(9,191.4897);
   c1lep5jex3bex_mbb_mindR_ttbarbb__410->SetBinError(0,17.37344);
   c1lep5jex3bex_mbb_mindR_ttbarbb__410->SetBinError(1,19.83028);
   c1lep5jex3bex_mbb_mindR_ttbarbb__410->SetBinError(2,16.26856);
   c1lep5jex3bex_mbb_mindR_ttbarbb__410->SetBinError(3,17.84789);
   c1lep5jex3bex_mbb_mindR_ttbarbb__410->SetBinError(4,10.49538);
   c1lep5jex3bex_mbb_mindR_ttbarbb__410->SetBinError(5,12.3764);
   c1lep5jex3bex_mbb_mindR_ttbarbb__410->SetBinError(6,7.900307);
   c1lep5jex3bex_mbb_mindR_ttbarbb__410->SetBinError(7,7.522609);
   c1lep5jex3bex_mbb_mindR_ttbarbb__410->SetBinError(8,5.443058);
   c1lep5jex3bex_mbb_mindR_ttbarbb__410->SetBinError(9,7.963329);
   c1lep5jex3bex_mbb_mindR_ttbarbb__410->SetEntries(15468);
   c1lep5jex3bex_mbb_mindR_ttbarbb__410->SetDirectory(0);
   c1lep5jex3bex_mbb_mindR_ttbarbb__410->SetStats(0);

   ci = TColor::GetColor("#6666cc");
   c1lep5jex3bex_mbb_mindR_ttbarbb__410->SetFillColor(ci);
   c1lep5jex3bex_mbb_mindR_ttbarbb__410->SetMarkerStyle(20);
   c1lep5jex3bex_mbb_mindR_ttbarbb__410->SetMarkerSize(1.2);
   c1lep5jex3bex_mbb_mindR_ttbarbb__410->GetXaxis()->SetTitle("m_{bb}^{#DeltaR min} [GeV]");
   c1lep5jex3bex_mbb_mindR_ttbarbb__410->GetXaxis()->SetRange(1,30);
   c1lep5jex3bex_mbb_mindR_ttbarbb__410->GetXaxis()->SetLabelFont(43);
   c1lep5jex3bex_mbb_mindR_ttbarbb__410->GetXaxis()->SetLabelSize(21);
   c1lep5jex3bex_mbb_mindR_ttbarbb__410->GetXaxis()->SetTitleSize(21);
   c1lep5jex3bex_mbb_mindR_ttbarbb__410->GetXaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_mbb_mindR_ttbarbb__410->GetXaxis()->SetTitleFont(43);
   c1lep5jex3bex_mbb_mindR_ttbarbb__410->GetYaxis()->SetLabelFont(43);
   c1lep5jex3bex_mbb_mindR_ttbarbb__410->GetYaxis()->SetLabelSize(21);
   c1lep5jex3bex_mbb_mindR_ttbarbb__410->GetYaxis()->SetTitleSize(21);
   c1lep5jex3bex_mbb_mindR_ttbarbb__410->GetYaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_mbb_mindR_ttbarbb__410->GetYaxis()->SetTitleFont(43);
   c1lep5jex3bex_mbb_mindR_ttbarbb__410->GetZaxis()->SetLabelFont(43);
   c1lep5jex3bex_mbb_mindR_ttbarbb__410->GetZaxis()->SetLabelSize(21);
   c1lep5jex3bex_mbb_mindR_ttbarbb__410->GetZaxis()->SetTitleSize(21);
   c1lep5jex3bex_mbb_mindR_ttbarbb__410->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep5jex3bex_mbb_mindR_ttbarbb,"");
   Double_t xAxis457[9] = {50, 75, 100, 125, 150, 175, 200, 225, 250}; 
   
   TH1D *c1lep5jex3bex_mbb_mindR_ttbarcc__411 = new TH1D("c1lep5jex3bex_mbb_mindR_ttbarcc__411","",8, xAxis457);
   c1lep5jex3bex_mbb_mindR_ttbarcc__411->SetBinContent(0,184.118);
   c1lep5jex3bex_mbb_mindR_ttbarcc__411->SetBinContent(1,340.7911);
   c1lep5jex3bex_mbb_mindR_ttbarcc__411->SetBinContent(2,213.8282);
   c1lep5jex3bex_mbb_mindR_ttbarcc__411->SetBinContent(3,264.6799);
   c1lep5jex3bex_mbb_mindR_ttbarcc__411->SetBinContent(4,104.4548);
   c1lep5jex3bex_mbb_mindR_ttbarcc__411->SetBinContent(5,88.64887);
   c1lep5jex3bex_mbb_mindR_ttbarcc__411->SetBinContent(6,35.22926);
   c1lep5jex3bex_mbb_mindR_ttbarcc__411->SetBinContent(7,30.41269);
   c1lep5jex3bex_mbb_mindR_ttbarcc__411->SetBinContent(8,10.36847);
   c1lep5jex3bex_mbb_mindR_ttbarcc__411->SetBinContent(9,48.29691);
   c1lep5jex3bex_mbb_mindR_ttbarcc__411->SetBinError(0,9.488984);
   c1lep5jex3bex_mbb_mindR_ttbarcc__411->SetBinError(1,12.88341);
   c1lep5jex3bex_mbb_mindR_ttbarcc__411->SetBinError(2,10.17484);
   c1lep5jex3bex_mbb_mindR_ttbarcc__411->SetBinError(3,12.12235);
   c1lep5jex3bex_mbb_mindR_ttbarcc__411->SetBinError(4,6.236774);
   c1lep5jex3bex_mbb_mindR_ttbarcc__411->SetBinError(5,7.030732);
   c1lep5jex3bex_mbb_mindR_ttbarcc__411->SetBinError(6,3.980384);
   c1lep5jex3bex_mbb_mindR_ttbarcc__411->SetBinError(7,3.442215);
   c1lep5jex3bex_mbb_mindR_ttbarcc__411->SetBinError(8,1.99993);
   c1lep5jex3bex_mbb_mindR_ttbarcc__411->SetBinError(9,5.46145);
   c1lep5jex3bex_mbb_mindR_ttbarcc__411->SetEntries(4006);
   c1lep5jex3bex_mbb_mindR_ttbarcc__411->SetDirectory(0);
   c1lep5jex3bex_mbb_mindR_ttbarcc__411->SetStats(0);

   ci = TColor::GetColor("#ccccff");
   c1lep5jex3bex_mbb_mindR_ttbarcc__411->SetFillColor(ci);
   c1lep5jex3bex_mbb_mindR_ttbarcc__411->SetMarkerStyle(20);
   c1lep5jex3bex_mbb_mindR_ttbarcc__411->SetMarkerSize(1.2);
   c1lep5jex3bex_mbb_mindR_ttbarcc__411->GetXaxis()->SetTitle("m_{bb}^{#DeltaR min} [GeV]");
   c1lep5jex3bex_mbb_mindR_ttbarcc__411->GetXaxis()->SetRange(1,30);
   c1lep5jex3bex_mbb_mindR_ttbarcc__411->GetXaxis()->SetLabelFont(43);
   c1lep5jex3bex_mbb_mindR_ttbarcc__411->GetXaxis()->SetLabelSize(21);
   c1lep5jex3bex_mbb_mindR_ttbarcc__411->GetXaxis()->SetTitleSize(21);
   c1lep5jex3bex_mbb_mindR_ttbarcc__411->GetXaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_mbb_mindR_ttbarcc__411->GetXaxis()->SetTitleFont(43);
   c1lep5jex3bex_mbb_mindR_ttbarcc__411->GetYaxis()->SetLabelFont(43);
   c1lep5jex3bex_mbb_mindR_ttbarcc__411->GetYaxis()->SetLabelSize(21);
   c1lep5jex3bex_mbb_mindR_ttbarcc__411->GetYaxis()->SetTitleSize(21);
   c1lep5jex3bex_mbb_mindR_ttbarcc__411->GetYaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_mbb_mindR_ttbarcc__411->GetYaxis()->SetTitleFont(43);
   c1lep5jex3bex_mbb_mindR_ttbarcc__411->GetZaxis()->SetLabelFont(43);
   c1lep5jex3bex_mbb_mindR_ttbarcc__411->GetZaxis()->SetLabelSize(21);
   c1lep5jex3bex_mbb_mindR_ttbarcc__411->GetZaxis()->SetTitleSize(21);
   c1lep5jex3bex_mbb_mindR_ttbarcc__411->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep5jex3bex_mbb_mindR_ttbarcc,"");
   Double_t xAxis458[9] = {50, 75, 100, 125, 150, 175, 200, 225, 250}; 
   
   TH1D *c1lep5jex3bex_mbb_mindR_ttbarlight__412 = new TH1D("c1lep5jex3bex_mbb_mindR_ttbarlight__412","",8, xAxis458);
   c1lep5jex3bex_mbb_mindR_ttbarlight__412->SetBinContent(0,454.3443);
   c1lep5jex3bex_mbb_mindR_ttbarlight__412->SetBinContent(1,838.0392);
   c1lep5jex3bex_mbb_mindR_ttbarlight__412->SetBinContent(2,595.9415);
   c1lep5jex3bex_mbb_mindR_ttbarlight__412->SetBinContent(3,761.5233);
   c1lep5jex3bex_mbb_mindR_ttbarlight__412->SetBinContent(4,287.6381);
   c1lep5jex3bex_mbb_mindR_ttbarlight__412->SetBinContent(5,149.7544);
   c1lep5jex3bex_mbb_mindR_ttbarlight__412->SetBinContent(6,47.28463);
   c1lep5jex3bex_mbb_mindR_ttbarlight__412->SetBinContent(7,23.22537);
   c1lep5jex3bex_mbb_mindR_ttbarlight__412->SetBinContent(8,9.4218);
   c1lep5jex3bex_mbb_mindR_ttbarlight__412->SetBinContent(9,19.55219);
   c1lep5jex3bex_mbb_mindR_ttbarlight__412->SetBinError(0,16.04324);
   c1lep5jex3bex_mbb_mindR_ttbarlight__412->SetBinError(1,23.65626);
   c1lep5jex3bex_mbb_mindR_ttbarlight__412->SetBinError(2,17.20121);
   c1lep5jex3bex_mbb_mindR_ttbarlight__412->SetBinError(3,19.73275);
   c1lep5jex3bex_mbb_mindR_ttbarlight__412->SetBinError(4,11.79884);
   c1lep5jex3bex_mbb_mindR_ttbarlight__412->SetBinError(5,8.699731);
   c1lep5jex3bex_mbb_mindR_ttbarlight__412->SetBinError(6,5.282392);
   c1lep5jex3bex_mbb_mindR_ttbarlight__412->SetBinError(7,3.114179);
   c1lep5jex3bex_mbb_mindR_ttbarlight__412->SetBinError(8,1.910546);
   c1lep5jex3bex_mbb_mindR_ttbarlight__412->SetBinError(9,3.076918);
   c1lep5jex3bex_mbb_mindR_ttbarlight__412->SetEntries(9132);
   c1lep5jex3bex_mbb_mindR_ttbarlight__412->SetDirectory(0);
   c1lep5jex3bex_mbb_mindR_ttbarlight__412->SetStats(0);
   c1lep5jex3bex_mbb_mindR_ttbarlight__412->SetMarkerStyle(20);
   c1lep5jex3bex_mbb_mindR_ttbarlight__412->SetMarkerSize(1.2);
   c1lep5jex3bex_mbb_mindR_ttbarlight__412->GetXaxis()->SetTitle("m_{bb}^{#DeltaR min} [GeV]");
   c1lep5jex3bex_mbb_mindR_ttbarlight__412->GetXaxis()->SetRange(1,30);
   c1lep5jex3bex_mbb_mindR_ttbarlight__412->GetXaxis()->SetLabelFont(43);
   c1lep5jex3bex_mbb_mindR_ttbarlight__412->GetXaxis()->SetLabelSize(21);
   c1lep5jex3bex_mbb_mindR_ttbarlight__412->GetXaxis()->SetTitleSize(21);
   c1lep5jex3bex_mbb_mindR_ttbarlight__412->GetXaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_mbb_mindR_ttbarlight__412->GetXaxis()->SetTitleFont(43);
   c1lep5jex3bex_mbb_mindR_ttbarlight__412->GetYaxis()->SetLabelFont(43);
   c1lep5jex3bex_mbb_mindR_ttbarlight__412->GetYaxis()->SetLabelSize(21);
   c1lep5jex3bex_mbb_mindR_ttbarlight__412->GetYaxis()->SetTitleSize(21);
   c1lep5jex3bex_mbb_mindR_ttbarlight__412->GetYaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_mbb_mindR_ttbarlight__412->GetYaxis()->SetTitleFont(43);
   c1lep5jex3bex_mbb_mindR_ttbarlight__412->GetZaxis()->SetLabelFont(43);
   c1lep5jex3bex_mbb_mindR_ttbarlight__412->GetZaxis()->SetLabelSize(21);
   c1lep5jex3bex_mbb_mindR_ttbarlight__412->GetZaxis()->SetTitleSize(21);
   c1lep5jex3bex_mbb_mindR_ttbarlight__412->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep5jex3bex_mbb_mindR_ttbarlight,"");
   Double_t xAxis459[9] = {50, 75, 100, 125, 150, 175, 200, 225, 250}; 
   
   TH1D *c1lep5jex3bex_mbb_mindR_uHcW__413 = new TH1D("c1lep5jex3bex_mbb_mindR_uHcW__413","",8, xAxis459);
   c1lep5jex3bex_mbb_mindR_uHcW__413->SetBinContent(0,133.6642);
   c1lep5jex3bex_mbb_mindR_uHcW__413->SetBinContent(1,234.7388);
   c1lep5jex3bex_mbb_mindR_uHcW__413->SetBinContent(2,192.4367);
   c1lep5jex3bex_mbb_mindR_uHcW__413->SetBinContent(3,306.4558);
   c1lep5jex3bex_mbb_mindR_uHcW__413->SetBinContent(4,81.9694);
   c1lep5jex3bex_mbb_mindR_uHcW__413->SetBinContent(5,41.89585);
   c1lep5jex3bex_mbb_mindR_uHcW__413->SetBinContent(6,8.679389);
   c1lep5jex3bex_mbb_mindR_uHcW__413->SetBinContent(7,7.388962);
   c1lep5jex3bex_mbb_mindR_uHcW__413->SetBinContent(8,2.43433);
   c1lep5jex3bex_mbb_mindR_uHcW__413->SetBinContent(9,2.139508);
   c1lep5jex3bex_mbb_mindR_uHcW__413->SetBinError(0,11.38625);
   c1lep5jex3bex_mbb_mindR_uHcW__413->SetBinError(1,14.53405);
   c1lep5jex3bex_mbb_mindR_uHcW__413->SetBinError(2,14.05169);
   c1lep5jex3bex_mbb_mindR_uHcW__413->SetBinError(3,16.27395);
   c1lep5jex3bex_mbb_mindR_uHcW__413->SetBinError(4,9.53364);
   c1lep5jex3bex_mbb_mindR_uHcW__413->SetBinError(5,7.489421);
   c1lep5jex3bex_mbb_mindR_uHcW__413->SetBinError(6,2.802561);
   c1lep5jex3bex_mbb_mindR_uHcW__413->SetBinError(7,2.432321);
   c1lep5jex3bex_mbb_mindR_uHcW__413->SetBinError(8,1.133306);
   c1lep5jex3bex_mbb_mindR_uHcW__413->SetBinError(9,2.065652);
   c1lep5jex3bex_mbb_mindR_uHcW__413->SetEntries(5357);
   c1lep5jex3bex_mbb_mindR_uHcW__413->SetDirectory(0);
   c1lep5jex3bex_mbb_mindR_uHcW__413->SetStats(0);
   c1lep5jex3bex_mbb_mindR_uHcW__413->SetFillColor(2);
   c1lep5jex3bex_mbb_mindR_uHcW__413->SetLineColor(2);
   c1lep5jex3bex_mbb_mindR_uHcW__413->SetMarkerStyle(20);
   c1lep5jex3bex_mbb_mindR_uHcW__413->SetMarkerSize(1.2);
   c1lep5jex3bex_mbb_mindR_uHcW__413->GetXaxis()->SetTitle("m_{bb}^{#DeltaR min} [GeV]");
   c1lep5jex3bex_mbb_mindR_uHcW__413->GetXaxis()->SetRange(1,30);
   c1lep5jex3bex_mbb_mindR_uHcW__413->GetXaxis()->SetLabelFont(43);
   c1lep5jex3bex_mbb_mindR_uHcW__413->GetXaxis()->SetLabelSize(21);
   c1lep5jex3bex_mbb_mindR_uHcW__413->GetXaxis()->SetTitleSize(21);
   c1lep5jex3bex_mbb_mindR_uHcW__413->GetXaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_mbb_mindR_uHcW__413->GetXaxis()->SetTitleFont(43);
   c1lep5jex3bex_mbb_mindR_uHcW__413->GetYaxis()->SetLabelFont(43);
   c1lep5jex3bex_mbb_mindR_uHcW__413->GetYaxis()->SetLabelSize(21);
   c1lep5jex3bex_mbb_mindR_uHcW__413->GetYaxis()->SetTitleSize(21);
   c1lep5jex3bex_mbb_mindR_uHcW__413->GetYaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_mbb_mindR_uHcW__413->GetYaxis()->SetTitleFont(43);
   c1lep5jex3bex_mbb_mindR_uHcW__413->GetZaxis()->SetLabelFont(43);
   c1lep5jex3bex_mbb_mindR_uHcW__413->GetZaxis()->SetLabelSize(21);
   c1lep5jex3bex_mbb_mindR_uHcW__413->GetZaxis()->SetTitleSize(21);
   c1lep5jex3bex_mbb_mindR_uHcW__413->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep5jex3bex_mbb_mindR_uHcW,"");
   h_stack->Draw("hist same");
   
   Double_t g_totErr_fx3183[8] = {
   62.5,
   87.5,
   112.5,
   137.5,
   162.5,
   187.5,
   212.5,
   237.5};
   Double_t g_totErr_fy3183[8] = {
   2509.728,
   1615.139,
   1911.485,
   800.5683,
   675.2811,
   286.0434,
   232.2331,
   100.0707};
   Double_t g_totErr_felx3183[8] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t g_totErr_fely3183[8] = {
   510.5477,
   319.5185,
   385.2451,
   153.0507,
   118.7059,
   51.2262,
   45.28566,
   22.39037};
   Double_t g_totErr_fehx3183[8] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t g_totErr_fehy3183[8] = {
   510.5477,
   319.5185,
   385.2451,
   153.0507,
   118.7059,
   51.2262,
   45.28566,
   22.39037};
   grae = new TGraphAsymmErrors(8,g_totErr_fx3183,g_totErr_fy3183,g_totErr_felx3183,g_totErr_fehx3183,g_totErr_fely3183,g_totErr_fehy3183);
   grae->SetName("g_totErr");
   grae->SetTitle("");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(3354);
   grae->SetLineColor(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0);
   
   TH1F *Graph_g_totErr3183 = new TH1F("Graph_g_totErr3183","",100,30,270);
   Graph_g_totErr3183->SetMinimum(0);
   Graph_g_totErr3183->SetMaximum(3314.536);
   Graph_g_totErr3183->SetDirectory(0);
   Graph_g_totErr3183->SetStats(0);
   Graph_g_totErr3183->SetLineWidth(2);
   Graph_g_totErr3183->SetMarkerStyle(20);
   Graph_g_totErr3183->SetMarkerSize(1.2);
   Graph_g_totErr3183->GetXaxis()->SetLabelFont(43);
   Graph_g_totErr3183->GetXaxis()->SetLabelSize(21);
   Graph_g_totErr3183->GetXaxis()->SetTitleSize(21);
   Graph_g_totErr3183->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_totErr3183->GetXaxis()->SetTitleFont(43);
   Graph_g_totErr3183->GetYaxis()->SetLabelFont(43);
   Graph_g_totErr3183->GetYaxis()->SetLabelSize(21);
   Graph_g_totErr3183->GetYaxis()->SetTitleSize(21);
   Graph_g_totErr3183->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_totErr3183->GetYaxis()->SetTitleFont(43);
   Graph_g_totErr3183->GetZaxis()->SetLabelFont(43);
   Graph_g_totErr3183->GetZaxis()->SetLabelSize(21);
   Graph_g_totErr3183->GetZaxis()->SetTitleSize(21);
   Graph_g_totErr3183->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_totErr3183);
   
   grae->Draw("e2");
   
   Double_t Graph_from_c1lep5jex3bex_mbb_mindR_Data_fx3184[8] = {
   62.5,
   87.5,
   112.5,
   137.5,
   162.5,
   187.5,
   212.5,
   237.5};
   Double_t Graph_from_c1lep5jex3bex_mbb_mindR_Data_fy3184[8] = {
   2913,
   1820,
   2224,
   901,
   768,
   312,
   306,
   124};
   Double_t Graph_from_c1lep5jex3bex_mbb_mindR_Data_felx3184[8] = {
   12.475,
   12.475,
   12.475,
   12.475,
   12.475,
   12.475,
   12.475,
   12.475};
   Double_t Graph_from_c1lep5jex3bex_mbb_mindR_Data_fely3184[8] = {
   53.97222,
   42.66146,
   47.1593,
   30.01666,
   27.71281,
   17.66352,
   17.49286,
   11.13553};
   Double_t Graph_from_c1lep5jex3bex_mbb_mindR_Data_fehx3184[8] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t Graph_from_c1lep5jex3bex_mbb_mindR_Data_fehy3184[8] = {
   53.97222,
   42.66146,
   47.1593,
   30.01666,
   27.71281,
   17.66352,
   17.49286,
   11.13553};
   grae = new TGraphAsymmErrors(8,Graph_from_c1lep5jex3bex_mbb_mindR_Data_fx3184,Graph_from_c1lep5jex3bex_mbb_mindR_Data_fy3184,Graph_from_c1lep5jex3bex_mbb_mindR_Data_felx3184,Graph_from_c1lep5jex3bex_mbb_mindR_Data_fehx3184,Graph_from_c1lep5jex3bex_mbb_mindR_Data_fely3184,Graph_from_c1lep5jex3bex_mbb_mindR_Data_fehy3184);
   grae->SetName("Graph_from_c1lep5jex3bex_mbb_mindR_Data");
   grae->SetTitle("");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_c1lep5jex3bex_mbb_mindR_Data3184 = new TH1F("Graph_Graph_from_c1lep5jex3bex_mbb_mindR_Data3184","",100,30.0275,269.9975);
   Graph_Graph_from_c1lep5jex3bex_mbb_mindR_Data3184->SetMinimum(0);
   Graph_Graph_from_c1lep5jex3bex_mbb_mindR_Data3184->SetMaximum(3252.383);
   Graph_Graph_from_c1lep5jex3bex_mbb_mindR_Data3184->SetDirectory(0);
   Graph_Graph_from_c1lep5jex3bex_mbb_mindR_Data3184->SetStats(0);
   Graph_Graph_from_c1lep5jex3bex_mbb_mindR_Data3184->SetLineWidth(2);
   Graph_Graph_from_c1lep5jex3bex_mbb_mindR_Data3184->SetMarkerStyle(20);
   Graph_Graph_from_c1lep5jex3bex_mbb_mindR_Data3184->SetMarkerSize(1.2);
   Graph_Graph_from_c1lep5jex3bex_mbb_mindR_Data3184->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep5jex3bex_mbb_mindR_Data3184->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep5jex3bex_mbb_mindR_Data3184->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep5jex3bex_mbb_mindR_Data3184->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep5jex3bex_mbb_mindR_Data3184->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep5jex3bex_mbb_mindR_Data3184->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep5jex3bex_mbb_mindR_Data3184->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep5jex3bex_mbb_mindR_Data3184->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep5jex3bex_mbb_mindR_Data3184->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep5jex3bex_mbb_mindR_Data3184->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep5jex3bex_mbb_mindR_Data3184->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep5jex3bex_mbb_mindR_Data3184->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep5jex3bex_mbb_mindR_Data3184->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep5jex3bex_mbb_mindR_Data3184->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_c1lep5jex3bex_mbb_mindR_Data3184);
   
   grae->Draw("ep1 ");
   Double_t xAxis460[9] = {50, 75, 100, 125, 150, 175, 200, 225, 250}; 
   
   TH1D *h_dummy_copy__414 = new TH1D("h_dummy_copy__414","",8, xAxis460);
   h_dummy_copy__414->SetEntries(1363531);
   h_dummy_copy__414->SetDirectory(0);
   h_dummy_copy__414->SetStats(0);
   h_dummy_copy__414->SetMarkerStyle(20);
   h_dummy_copy__414->SetMarkerSize(1.2);
   h_dummy_copy__414->GetXaxis()->SetTitle("m_{bb}^{min. #DeltaR} [GeV]");
   h_dummy_copy__414->GetXaxis()->SetRange(1,30);
   h_dummy_copy__414->GetXaxis()->SetLabelFont(43);
   h_dummy_copy__414->GetXaxis()->SetLabelSize(21);
   h_dummy_copy__414->GetXaxis()->SetTitleSize(21);
   h_dummy_copy__414->GetXaxis()->SetTitleOffset(1.4);
   h_dummy_copy__414->GetXaxis()->SetTitleFont(43);
   h_dummy_copy__414->GetYaxis()->SetTitle("Events / 25 GeV");
   h_dummy_copy__414->GetYaxis()->SetLabelFont(43);
   h_dummy_copy__414->GetYaxis()->SetLabelSize(16.8);
   h_dummy_copy__414->GetYaxis()->SetTitleSize(21);
   h_dummy_copy__414->GetYaxis()->SetTitleOffset(2.4);
   h_dummy_copy__414->GetYaxis()->SetTitleFont(43);
   h_dummy_copy__414->GetZaxis()->SetLabelFont(43);
   h_dummy_copy__414->GetZaxis()->SetLabelSize(21);
   h_dummy_copy__414->GetZaxis()->SetTitleSize(21);
   h_dummy_copy__414->GetZaxis()->SetTitleFont(43);
   h_dummy_copy__414->Draw("sameaxis");
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
      tex = new TLatex(0.18,0.73,"5j, 3b");
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
   TLegendEntry *entry=leg->AddEntry("c1lep5jex3bex_mbb_mindR_Data","Data","lep");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep5jex3bex_mbb_mindR_uHcW","t#bar{t}#rightarrowWbHc (BR=1%)","f");
   entry->SetFillColor(2);
   entry->SetFillStyle(1001);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep5jex3bex_mbb_mindR_ttbarlight","t#bar{t}+light","f");
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep5jex3bex_mbb_mindR_ttbarcc","t#bar{t}+cc","f");

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
   entry=leg->AddEntry("c1lep5jex3bex_mbb_mindR_ttbarbb","t#bar{t}+bb","f");

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
   entry=leg->AddEntry("c1lep5jex3bex_mbb_mindR_topEW","Non-t#bar{t}","f");

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
   c_c1lep5jex3bex_mbb_mindR->cd();
   c_c1lep5jex3bex_mbb_mindR->Modified();
   c_c1lep5jex3bex_mbb_mindR->cd();
   c_c1lep5jex3bex_mbb_mindR->SetSelected(c_c1lep5jex3bex_mbb_mindR);
}
