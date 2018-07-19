void c1lep4jex3bex_mbb_mindR()
{
//=========Macro generated from canvas: c_c1lep4jex3bex_mbb_mindR/c_c1lep4jex3bex_mbb_mindR
//=========  (Thu Jul 19 17:38:09 2018) by ROOT version6.04/14
   TCanvas *c_c1lep4jex3bex_mbb_mindR = new TCanvas("c_c1lep4jex3bex_mbb_mindR", "c_c1lep4jex3bex_mbb_mindR",0,0,600,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c_c1lep4jex3bex_mbb_mindR->SetHighLightColor(2);
   c_c1lep4jex3bex_mbb_mindR->Range(0,0,1,1);
   c_c1lep4jex3bex_mbb_mindR->SetFillColor(0);
   c_c1lep4jex3bex_mbb_mindR->SetBorderMode(0);
   c_c1lep4jex3bex_mbb_mindR->SetBorderSize(2);
   c_c1lep4jex3bex_mbb_mindR->SetTickx(1);
   c_c1lep4jex3bex_mbb_mindR->SetTicky(1);
   c_c1lep4jex3bex_mbb_mindR->SetLeftMargin(0.16);
   c_c1lep4jex3bex_mbb_mindR->SetRightMargin(0.05);
   c_c1lep4jex3bex_mbb_mindR->SetTopMargin(0.05);
   c_c1lep4jex3bex_mbb_mindR->SetBottomMargin(0.16);
   c_c1lep4jex3bex_mbb_mindR->SetFrameBorderMode(0);
  
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
   Double_t xAxis441[9] = {50, 75, 100, 125, 150, 175, 200, 225, 250}; 
   
   TH1D *h_dummy2__397 = new TH1D("h_dummy2__397","Data/MC",8, xAxis441);
   h_dummy2__397->SetMinimum(0.5);
   h_dummy2__397->SetMaximum(1.5);
   h_dummy2__397->SetEntries(2920971);
   h_dummy2__397->SetDirectory(0);
   h_dummy2__397->SetStats(0);
   h_dummy2__397->SetMarkerStyle(20);
   h_dummy2__397->SetMarkerSize(1.2);
   h_dummy2__397->GetXaxis()->SetTitle("m_{bb}^{min. #DeltaR} [GeV]");
   h_dummy2__397->GetXaxis()->SetRange(1,30);
   h_dummy2__397->GetXaxis()->SetLabelFont(43);
   h_dummy2__397->GetXaxis()->SetLabelOffset(0.025);
   h_dummy2__397->GetXaxis()->SetLabelSize(16.8);
   h_dummy2__397->GetXaxis()->SetTitleSize(21);
   h_dummy2__397->GetXaxis()->SetTitleOffset(5.05);
   h_dummy2__397->GetXaxis()->SetTitleFont(43);
   h_dummy2__397->GetYaxis()->SetTitle("Data / Bkg");
   h_dummy2__397->GetYaxis()->SetNdivisions(-504);
   h_dummy2__397->GetYaxis()->SetLabelFont(43);
   h_dummy2__397->GetYaxis()->SetLabelOffset(0.02);
   h_dummy2__397->GetYaxis()->SetLabelSize(16.8);
   h_dummy2__397->GetYaxis()->SetTitleSize(21);
   h_dummy2__397->GetYaxis()->SetTitleOffset(2.4);
   h_dummy2__397->GetYaxis()->SetTitleFont(43);
   h_dummy2__397->GetZaxis()->SetLabelFont(43);
   h_dummy2__397->GetZaxis()->SetLabelSize(21);
   h_dummy2__397->GetZaxis()->SetTitleSize(21);
   h_dummy2__397->GetZaxis()->SetTitleFont(43);
   h_dummy2__397->Draw("HIST");
   
   Double_t Graph_from_h_ratio_fx3177[8] = {
   62.5,
   87.5,
   112.5,
   137.5,
   162.5,
   187.5,
   212.5,
   237.5};
   Double_t Graph_from_h_ratio_fy3177[8] = {
   1.073456,
   1.075336,
   1.123677,
   1.162046,
   1.085452,
   1.261735,
   1.305822,
   1.00243};
   Double_t Graph_from_h_ratio_felx3177[8] = {
   12.475,
   12.475,
   12.475,
   12.475,
   12.475,
   12.475,
   12.475,
   12.475};
   Double_t Graph_from_h_ratio_fely3177[8] = {
   0.02024307,
   0.02489363,
   0.02360021,
   0.03693226,
   0.04355768,
   0.07824946,
   0.09054245,
   0.112075};
   Double_t Graph_from_h_ratio_fehx3177[8] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t Graph_from_h_ratio_fehy3177[8] = {
   0.02024307,
   0.02489363,
   0.02360021,
   0.03693226,
   0.04355768,
   0.07824946,
   0.09054245,
   0.112075};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(8,Graph_from_h_ratio_fx3177,Graph_from_h_ratio_fy3177,Graph_from_h_ratio_felx3177,Graph_from_h_ratio_fehx3177,Graph_from_h_ratio_fely3177,Graph_from_h_ratio_fehy3177);
   grae->SetName("Graph_from_h_ratio");
   grae->SetTitle("");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(24);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_h_ratio3177 = new TH1F("Graph_Graph_from_h_ratio3177","",100,30.0275,269.9975);
   Graph_Graph_from_h_ratio3177->SetMinimum(0.8397537);
   Graph_Graph_from_h_ratio3177->SetMaximum(1.446965);
   Graph_Graph_from_h_ratio3177->SetDirectory(0);
   Graph_Graph_from_h_ratio3177->SetStats(0);
   Graph_Graph_from_h_ratio3177->SetLineWidth(2);
   Graph_Graph_from_h_ratio3177->SetMarkerStyle(20);
   Graph_Graph_from_h_ratio3177->SetMarkerSize(1.2);
   Graph_Graph_from_h_ratio3177->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3177->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3177->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3177->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3177->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3177->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3177->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3177->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3177->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3177->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3177->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3177->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3177->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3177->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_h_ratio3177);
   
   grae->Draw("pe0");
   TLine *line = new TLine(50,1,250,1);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t g_ratio2_fx3178[8] = {
   62.5,
   87.5,
   112.5,
   137.5,
   162.5,
   187.5,
   212.5,
   237.5};
   Double_t g_ratio2_fy3178[8] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t g_ratio2_felx3178[8] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t g_ratio2_fely3178[8] = {
   0.1967174,
   0.2104092,
   0.2153428,
   0.2034219,
   0.1918471,
   0.1852541,
   0.1870519,
   0.2074532};
   Double_t g_ratio2_fehx3178[8] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t g_ratio2_fehy3178[8] = {
   0.1967174,
   0.2104092,
   0.2153428,
   0.2034219,
   0.1918471,
   0.1852541,
   0.1870519,
   0.2074532};
   grae = new TGraphAsymmErrors(8,g_ratio2_fx3178,g_ratio2_fy3178,g_ratio2_felx3178,g_ratio2_fehx3178,g_ratio2_fely3178,g_ratio2_fehy3178);
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
   
   TH1F *Graph_g_ratio23178 = new TH1F("Graph_g_ratio23178","",100,30,270);
   Graph_g_ratio23178->SetMinimum(0.7415886);
   Graph_g_ratio23178->SetMaximum(1.258411);
   Graph_g_ratio23178->SetDirectory(0);
   Graph_g_ratio23178->SetStats(0);
   Graph_g_ratio23178->SetLineWidth(2);
   Graph_g_ratio23178->SetMarkerStyle(20);
   Graph_g_ratio23178->SetMarkerSize(1.2);
   Graph_g_ratio23178->GetXaxis()->SetLabelFont(43);
   Graph_g_ratio23178->GetXaxis()->SetLabelSize(21);
   Graph_g_ratio23178->GetXaxis()->SetTitleSize(21);
   Graph_g_ratio23178->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23178->GetXaxis()->SetTitleFont(43);
   Graph_g_ratio23178->GetYaxis()->SetLabelFont(43);
   Graph_g_ratio23178->GetYaxis()->SetLabelSize(21);
   Graph_g_ratio23178->GetYaxis()->SetTitleSize(21);
   Graph_g_ratio23178->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23178->GetYaxis()->SetTitleFont(43);
   Graph_g_ratio23178->GetZaxis()->SetLabelFont(43);
   Graph_g_ratio23178->GetZaxis()->SetLabelSize(21);
   Graph_g_ratio23178->GetZaxis()->SetTitleSize(21);
   Graph_g_ratio23178->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_ratio23178);
   
   grae->Draw("e2");
   Double_t xAxis442[9] = {50, 75, 100, 125, 150, 175, 200, 225, 250}; 
   
   TH1D *h_dummy2_copy__398 = new TH1D("h_dummy2_copy__398","Data/MC",8, xAxis442);
   h_dummy2_copy__398->SetMinimum(0.5);
   h_dummy2_copy__398->SetMaximum(1.5);
   h_dummy2_copy__398->SetEntries(2920971);
   h_dummy2_copy__398->SetDirectory(0);
   h_dummy2_copy__398->SetStats(0);
   h_dummy2_copy__398->SetMarkerStyle(20);
   h_dummy2_copy__398->SetMarkerSize(1.2);
   h_dummy2_copy__398->GetXaxis()->SetTitle("m_{bb}^{min. #DeltaR} [GeV]");
   h_dummy2_copy__398->GetXaxis()->SetRange(1,30);
   h_dummy2_copy__398->GetXaxis()->SetLabelFont(43);
   h_dummy2_copy__398->GetXaxis()->SetLabelOffset(0.025);
   h_dummy2_copy__398->GetXaxis()->SetLabelSize(16.8);
   h_dummy2_copy__398->GetXaxis()->SetTitleSize(21);
   h_dummy2_copy__398->GetXaxis()->SetTitleOffset(5.05);
   h_dummy2_copy__398->GetXaxis()->SetTitleFont(43);
   h_dummy2_copy__398->GetYaxis()->SetTitle("Data / Bkg");
   h_dummy2_copy__398->GetYaxis()->SetNdivisions(-504);
   h_dummy2_copy__398->GetYaxis()->SetLabelFont(43);
   h_dummy2_copy__398->GetYaxis()->SetLabelOffset(0.02);
   h_dummy2_copy__398->GetYaxis()->SetLabelSize(16.8);
   h_dummy2_copy__398->GetYaxis()->SetTitleSize(21);
   h_dummy2_copy__398->GetYaxis()->SetTitleOffset(2.4);
   h_dummy2_copy__398->GetYaxis()->SetTitleFont(43);
   h_dummy2_copy__398->GetZaxis()->SetLabelFont(43);
   h_dummy2_copy__398->GetZaxis()->SetLabelSize(21);
   h_dummy2_copy__398->GetZaxis()->SetTitleSize(21);
   h_dummy2_copy__398->GetZaxis()->SetTitleFont(43);
   h_dummy2_copy__398->Draw("sameaxis");
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
   c_c1lep4jex3bex_mbb_mindR->cd();
  
// ------------>Primitives in pad: pad0
   TPad *pad0 = new TPad("pad0", "pad0",0,0.2,1,1);
   pad0->Draw();
   pad0->cd();
   pad0->Range(15.4321,-606.7119,262.3457,5460.407);
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
   Double_t xAxis443[9] = {50, 75, 100, 125, 150, 175, 200, 225, 250}; 
   
   TH1D *h_dummy__399 = new TH1D("h_dummy__399","",8, xAxis443);
   h_dummy__399->SetMinimum(0);
   h_dummy__399->SetMaximum(5157.051);
   h_dummy__399->SetEntries(2920971);
   h_dummy__399->SetDirectory(0);
   h_dummy__399->SetStats(0);
   h_dummy__399->SetMarkerStyle(20);
   h_dummy__399->SetMarkerSize(1.2);
   h_dummy__399->GetXaxis()->SetRange(1,30);
   h_dummy__399->GetXaxis()->SetLabelFont(43);
   h_dummy__399->GetXaxis()->SetLabelSize(0);
   h_dummy__399->GetXaxis()->SetTitleSize(21);
   h_dummy__399->GetXaxis()->SetTitleOffset(1.4);
   h_dummy__399->GetXaxis()->SetTitleFont(43);
   h_dummy__399->GetYaxis()->SetTitle("Events / 25 GeV");
   h_dummy__399->GetYaxis()->SetLabelFont(43);
   h_dummy__399->GetYaxis()->SetLabelSize(16.8);
   h_dummy__399->GetYaxis()->SetTitleSize(21);
   h_dummy__399->GetYaxis()->SetTitleOffset(2.4);
   h_dummy__399->GetYaxis()->SetTitleFont(43);
   h_dummy__399->GetZaxis()->SetLabelFont(43);
   h_dummy__399->GetZaxis()->SetLabelSize(21);
   h_dummy__399->GetZaxis()->SetTitleSize(21);
   h_dummy__399->GetZaxis()->SetTitleFont(43);
   h_dummy__399->Draw("HIST");
   
   THStack *h_stack = new THStack();
   h_stack->SetName("h_stack");
   h_stack->SetTitle("h_stack");
   Double_t xAxis444[9] = {50, 75, 100, 125, 150, 175, 200, 225, 250}; 
   
   TH1F *h_stack_stack_45 = new TH1F("h_stack_stack_45","h_stack",8, xAxis444);
   h_stack_stack_45->SetMinimum(0);
   h_stack_stack_45->SetMaximum(3047.54);
   h_stack_stack_45->SetDirectory(0);
   h_stack_stack_45->SetStats(0);
   h_stack_stack_45->SetLineWidth(2);
   h_stack_stack_45->SetMarkerStyle(20);
   h_stack_stack_45->SetMarkerSize(1.2);
   h_stack_stack_45->GetXaxis()->SetLabelFont(43);
   h_stack_stack_45->GetXaxis()->SetLabelSize(21);
   h_stack_stack_45->GetXaxis()->SetTitleSize(21);
   h_stack_stack_45->GetXaxis()->SetTitleOffset(1.4);
   h_stack_stack_45->GetXaxis()->SetTitleFont(43);
   h_stack_stack_45->GetYaxis()->SetLabelFont(43);
   h_stack_stack_45->GetYaxis()->SetLabelSize(21);
   h_stack_stack_45->GetYaxis()->SetTitleSize(21);
   h_stack_stack_45->GetYaxis()->SetTitleOffset(1.4);
   h_stack_stack_45->GetYaxis()->SetTitleFont(43);
   h_stack_stack_45->GetZaxis()->SetLabelFont(43);
   h_stack_stack_45->GetZaxis()->SetLabelSize(21);
   h_stack_stack_45->GetZaxis()->SetTitleSize(21);
   h_stack_stack_45->GetZaxis()->SetTitleFont(43);
   h_stack->SetHistogram(h_stack_stack_45);
   
   Double_t xAxis445[9] = {50, 75, 100, 125, 150, 175, 200, 225, 250}; 
   
   TH1D *c1lep4jex3bex_mbb_mindR_topEW__400 = new TH1D("c1lep4jex3bex_mbb_mindR_topEW__400","",8, xAxis445);
   c1lep4jex3bex_mbb_mindR_topEW__400->SetBinContent(0,501.4763);
   c1lep4jex3bex_mbb_mindR_topEW__400->SetBinContent(1,534.0101);
   c1lep4jex3bex_mbb_mindR_topEW__400->SetBinContent(2,248.8088);
   c1lep4jex3bex_mbb_mindR_topEW__400->SetBinContent(3,230.8891);
   c1lep4jex3bex_mbb_mindR_topEW__400->SetBinContent(4,123.7338);
   c1lep4jex3bex_mbb_mindR_topEW__400->SetBinContent(5,91.35567);
   c1lep4jex3bex_mbb_mindR_topEW__400->SetBinContent(6,41.27265);
   c1lep4jex3bex_mbb_mindR_topEW__400->SetBinContent(7,21.60994);
   c1lep4jex3bex_mbb_mindR_topEW__400->SetBinContent(8,12.08891);
   c1lep4jex3bex_mbb_mindR_topEW__400->SetBinContent(9,57.16002);
   c1lep4jex3bex_mbb_mindR_topEW__400->SetBinError(0,45.4233);
   c1lep4jex3bex_mbb_mindR_topEW__400->SetBinError(1,51.40127);
   c1lep4jex3bex_mbb_mindR_topEW__400->SetBinError(2,34.17396);
   c1lep4jex3bex_mbb_mindR_topEW__400->SetBinError(3,30.64764);
   c1lep4jex3bex_mbb_mindR_topEW__400->SetBinError(4,25.03923);
   c1lep4jex3bex_mbb_mindR_topEW__400->SetBinError(5,20.53928);
   c1lep4jex3bex_mbb_mindR_topEW__400->SetBinError(6,14.5709);
   c1lep4jex3bex_mbb_mindR_topEW__400->SetBinError(7,6.088825);
   c1lep4jex3bex_mbb_mindR_topEW__400->SetBinError(8,5.070251);
   c1lep4jex3bex_mbb_mindR_topEW__400->SetBinError(9,15.9042);
   c1lep4jex3bex_mbb_mindR_topEW__400->SetEntries(2895061);
   c1lep4jex3bex_mbb_mindR_topEW__400->SetDirectory(0);
   c1lep4jex3bex_mbb_mindR_topEW__400->SetStats(0);

   ci = TColor::GetColor("#66cc66");
   c1lep4jex3bex_mbb_mindR_topEW__400->SetFillColor(ci);
   c1lep4jex3bex_mbb_mindR_topEW__400->SetMarkerStyle(20);
   c1lep4jex3bex_mbb_mindR_topEW__400->SetMarkerSize(1.2);
   c1lep4jex3bex_mbb_mindR_topEW__400->GetXaxis()->SetTitle("m_{bb}^{#DeltaR min} [GeV]");
   c1lep4jex3bex_mbb_mindR_topEW__400->GetXaxis()->SetRange(1,30);
   c1lep4jex3bex_mbb_mindR_topEW__400->GetXaxis()->SetLabelFont(43);
   c1lep4jex3bex_mbb_mindR_topEW__400->GetXaxis()->SetLabelSize(21);
   c1lep4jex3bex_mbb_mindR_topEW__400->GetXaxis()->SetTitleSize(21);
   c1lep4jex3bex_mbb_mindR_topEW__400->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_mbb_mindR_topEW__400->GetXaxis()->SetTitleFont(43);
   c1lep4jex3bex_mbb_mindR_topEW__400->GetYaxis()->SetLabelFont(43);
   c1lep4jex3bex_mbb_mindR_topEW__400->GetYaxis()->SetLabelSize(21);
   c1lep4jex3bex_mbb_mindR_topEW__400->GetYaxis()->SetTitleSize(21);
   c1lep4jex3bex_mbb_mindR_topEW__400->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_mbb_mindR_topEW__400->GetYaxis()->SetTitleFont(43);
   c1lep4jex3bex_mbb_mindR_topEW__400->GetZaxis()->SetLabelFont(43);
   c1lep4jex3bex_mbb_mindR_topEW__400->GetZaxis()->SetLabelSize(21);
   c1lep4jex3bex_mbb_mindR_topEW__400->GetZaxis()->SetTitleSize(21);
   c1lep4jex3bex_mbb_mindR_topEW__400->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jex3bex_mbb_mindR_topEW,"");
   Double_t xAxis446[9] = {50, 75, 100, 125, 150, 175, 200, 225, 250}; 
   
   TH1D *c1lep4jex3bex_mbb_mindR_ttbarbb__401 = new TH1D("c1lep4jex3bex_mbb_mindR_ttbarbb__401","",8, xAxis446);
   c1lep4jex3bex_mbb_mindR_ttbarbb__401->SetBinContent(0,441.6567);
   c1lep4jex3bex_mbb_mindR_ttbarbb__401->SetBinContent(1,679.0051);
   c1lep4jex3bex_mbb_mindR_ttbarbb__401->SetBinContent(2,434.251);
   c1lep4jex3bex_mbb_mindR_ttbarbb__401->SetBinContent(3,514.4813);
   c1lep4jex3bex_mbb_mindR_ttbarbb__401->SetBinContent(4,236.9529);
   c1lep4jex3bex_mbb_mindR_ttbarbb__401->SetBinContent(5,223.8726);
   c1lep4jex3bex_mbb_mindR_ttbarbb__401->SetBinContent(6,101.7722);
   c1lep4jex3bex_mbb_mindR_ttbarbb__401->SetBinContent(7,94.00496);
   c1lep4jex3bex_mbb_mindR_ttbarbb__401->SetBinContent(8,51.21335);
   c1lep4jex3bex_mbb_mindR_ttbarbb__401->SetBinContent(9,119.4053);
   c1lep4jex3bex_mbb_mindR_ttbarbb__401->SetBinError(0,13.08793);
   c1lep4jex3bex_mbb_mindR_ttbarbb__401->SetBinError(1,16.36233);
   c1lep4jex3bex_mbb_mindR_ttbarbb__401->SetBinError(2,14.51122);
   c1lep4jex3bex_mbb_mindR_ttbarbb__401->SetBinError(3,15.38409);
   c1lep4jex3bex_mbb_mindR_ttbarbb__401->SetBinError(4,10.13828);
   c1lep4jex3bex_mbb_mindR_ttbarbb__401->SetBinError(5,10.20746);
   c1lep4jex3bex_mbb_mindR_ttbarbb__401->SetBinError(6,6.483505);
   c1lep4jex3bex_mbb_mindR_ttbarbb__401->SetBinError(7,6.111322);
   c1lep4jex3bex_mbb_mindR_ttbarbb__401->SetBinError(8,5.556849);
   c1lep4jex3bex_mbb_mindR_ttbarbb__401->SetBinError(9,6.593282);
   c1lep4jex3bex_mbb_mindR_ttbarbb__401->SetEntries(10166);
   c1lep4jex3bex_mbb_mindR_ttbarbb__401->SetDirectory(0);
   c1lep4jex3bex_mbb_mindR_ttbarbb__401->SetStats(0);

   ci = TColor::GetColor("#6666cc");
   c1lep4jex3bex_mbb_mindR_ttbarbb__401->SetFillColor(ci);
   c1lep4jex3bex_mbb_mindR_ttbarbb__401->SetMarkerStyle(20);
   c1lep4jex3bex_mbb_mindR_ttbarbb__401->SetMarkerSize(1.2);
   c1lep4jex3bex_mbb_mindR_ttbarbb__401->GetXaxis()->SetTitle("m_{bb}^{#DeltaR min} [GeV]");
   c1lep4jex3bex_mbb_mindR_ttbarbb__401->GetXaxis()->SetRange(1,30);
   c1lep4jex3bex_mbb_mindR_ttbarbb__401->GetXaxis()->SetLabelFont(43);
   c1lep4jex3bex_mbb_mindR_ttbarbb__401->GetXaxis()->SetLabelSize(21);
   c1lep4jex3bex_mbb_mindR_ttbarbb__401->GetXaxis()->SetTitleSize(21);
   c1lep4jex3bex_mbb_mindR_ttbarbb__401->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_mbb_mindR_ttbarbb__401->GetXaxis()->SetTitleFont(43);
   c1lep4jex3bex_mbb_mindR_ttbarbb__401->GetYaxis()->SetLabelFont(43);
   c1lep4jex3bex_mbb_mindR_ttbarbb__401->GetYaxis()->SetLabelSize(21);
   c1lep4jex3bex_mbb_mindR_ttbarbb__401->GetYaxis()->SetTitleSize(21);
   c1lep4jex3bex_mbb_mindR_ttbarbb__401->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_mbb_mindR_ttbarbb__401->GetYaxis()->SetTitleFont(43);
   c1lep4jex3bex_mbb_mindR_ttbarbb__401->GetZaxis()->SetLabelFont(43);
   c1lep4jex3bex_mbb_mindR_ttbarbb__401->GetZaxis()->SetLabelSize(21);
   c1lep4jex3bex_mbb_mindR_ttbarbb__401->GetZaxis()->SetTitleSize(21);
   c1lep4jex3bex_mbb_mindR_ttbarbb__401->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jex3bex_mbb_mindR_ttbarbb,"");
   Double_t xAxis447[9] = {50, 75, 100, 125, 150, 175, 200, 225, 250}; 
   
   TH1D *c1lep4jex3bex_mbb_mindR_ttbarcc__402 = new TH1D("c1lep4jex3bex_mbb_mindR_ttbarcc__402","",8, xAxis447);
   c1lep4jex3bex_mbb_mindR_ttbarcc__402->SetBinContent(0,149.7222);
   c1lep4jex3bex_mbb_mindR_ttbarcc__402->SetBinContent(1,259.5691);
   c1lep4jex3bex_mbb_mindR_ttbarcc__402->SetBinContent(2,185.2644);
   c1lep4jex3bex_mbb_mindR_ttbarcc__402->SetBinContent(3,239.8704);
   c1lep4jex3bex_mbb_mindR_ttbarcc__402->SetBinContent(4,87.51594);
   c1lep4jex3bex_mbb_mindR_ttbarcc__402->SetBinContent(5,62.41206);
   c1lep4jex3bex_mbb_mindR_ttbarcc__402->SetBinContent(6,19.20775);
   c1lep4jex3bex_mbb_mindR_ttbarcc__402->SetBinContent(7,15.82137);
   c1lep4jex3bex_mbb_mindR_ttbarcc__402->SetBinContent(8,7.494005);
   c1lep4jex3bex_mbb_mindR_ttbarcc__402->SetBinContent(9,25.773);
   c1lep4jex3bex_mbb_mindR_ttbarcc__402->SetBinError(0,8.294049);
   c1lep4jex3bex_mbb_mindR_ttbarcc__402->SetBinError(1,10.75227);
   c1lep4jex3bex_mbb_mindR_ttbarcc__402->SetBinError(2,8.890376);
   c1lep4jex3bex_mbb_mindR_ttbarcc__402->SetBinError(3,9.919702);
   c1lep4jex3bex_mbb_mindR_ttbarcc__402->SetBinError(4,5.589695);
   c1lep4jex3bex_mbb_mindR_ttbarcc__402->SetBinError(5,5.144565);
   c1lep4jex3bex_mbb_mindR_ttbarcc__402->SetBinError(6,2.945897);
   c1lep4jex3bex_mbb_mindR_ttbarcc__402->SetBinError(7,2.188677);
   c1lep4jex3bex_mbb_mindR_ttbarcc__402->SetBinError(8,1.751485);
   c1lep4jex3bex_mbb_mindR_ttbarcc__402->SetBinError(9,4.586167);
   c1lep4jex3bex_mbb_mindR_ttbarcc__402->SetEntries(3206);
   c1lep4jex3bex_mbb_mindR_ttbarcc__402->SetDirectory(0);
   c1lep4jex3bex_mbb_mindR_ttbarcc__402->SetStats(0);

   ci = TColor::GetColor("#ccccff");
   c1lep4jex3bex_mbb_mindR_ttbarcc__402->SetFillColor(ci);
   c1lep4jex3bex_mbb_mindR_ttbarcc__402->SetMarkerStyle(20);
   c1lep4jex3bex_mbb_mindR_ttbarcc__402->SetMarkerSize(1.2);
   c1lep4jex3bex_mbb_mindR_ttbarcc__402->GetXaxis()->SetTitle("m_{bb}^{#DeltaR min} [GeV]");
   c1lep4jex3bex_mbb_mindR_ttbarcc__402->GetXaxis()->SetRange(1,30);
   c1lep4jex3bex_mbb_mindR_ttbarcc__402->GetXaxis()->SetLabelFont(43);
   c1lep4jex3bex_mbb_mindR_ttbarcc__402->GetXaxis()->SetLabelSize(21);
   c1lep4jex3bex_mbb_mindR_ttbarcc__402->GetXaxis()->SetTitleSize(21);
   c1lep4jex3bex_mbb_mindR_ttbarcc__402->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_mbb_mindR_ttbarcc__402->GetXaxis()->SetTitleFont(43);
   c1lep4jex3bex_mbb_mindR_ttbarcc__402->GetYaxis()->SetLabelFont(43);
   c1lep4jex3bex_mbb_mindR_ttbarcc__402->GetYaxis()->SetLabelSize(21);
   c1lep4jex3bex_mbb_mindR_ttbarcc__402->GetYaxis()->SetTitleSize(21);
   c1lep4jex3bex_mbb_mindR_ttbarcc__402->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_mbb_mindR_ttbarcc__402->GetYaxis()->SetTitleFont(43);
   c1lep4jex3bex_mbb_mindR_ttbarcc__402->GetZaxis()->SetLabelFont(43);
   c1lep4jex3bex_mbb_mindR_ttbarcc__402->GetZaxis()->SetLabelSize(21);
   c1lep4jex3bex_mbb_mindR_ttbarcc__402->GetZaxis()->SetTitleSize(21);
   c1lep4jex3bex_mbb_mindR_ttbarcc__402->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jex3bex_mbb_mindR_ttbarcc,"");
   Double_t xAxis448[9] = {50, 75, 100, 125, 150, 175, 200, 225, 250}; 
   
   TH1D *c1lep4jex3bex_mbb_mindR_ttbarlight__403 = new TH1D("c1lep4jex3bex_mbb_mindR_ttbarlight__403","",8, xAxis448);
   c1lep4jex3bex_mbb_mindR_ttbarlight__403->SetBinContent(0,597.8424);
   c1lep4jex3bex_mbb_mindR_ttbarlight__403->SetBinContent(1,1146.993);
   c1lep4jex3bex_mbb_mindR_ttbarlight__403->SetBinContent(2,866.9475);
   c1lep4jex3bex_mbb_mindR_ttbarlight__403->SetBinContent(3,1032.242);
   c1lep4jex3bex_mbb_mindR_ttbarlight__403->SetBinContent(4,403.7427);
   c1lep4jex3bex_mbb_mindR_ttbarlight__403->SetBinContent(5,194.4716);
   c1lep4jex3bex_mbb_mindR_ttbarlight__403->SetBinContent(6,43.81289);
   c1lep4jex3bex_mbb_mindR_ttbarlight__403->SetBinContent(7,27.85041);
   c1lep4jex3bex_mbb_mindR_ttbarlight__403->SetBinContent(8,9.009838);
   c1lep4jex3bex_mbb_mindR_ttbarlight__403->SetBinContent(9,13.65472);
   c1lep4jex3bex_mbb_mindR_ttbarlight__403->SetBinError(0,18.9043);
   c1lep4jex3bex_mbb_mindR_ttbarlight__403->SetBinError(1,24.92221);
   c1lep4jex3bex_mbb_mindR_ttbarlight__403->SetBinError(2,20.4217);
   c1lep4jex3bex_mbb_mindR_ttbarlight__403->SetBinError(3,22.48994);
   c1lep4jex3bex_mbb_mindR_ttbarlight__403->SetBinError(4,16.32836);
   c1lep4jex3bex_mbb_mindR_ttbarlight__403->SetBinError(5,9.443548);
   c1lep4jex3bex_mbb_mindR_ttbarlight__403->SetBinError(6,5.858984);
   c1lep4jex3bex_mbb_mindR_ttbarlight__403->SetBinError(7,3.954588);
   c1lep4jex3bex_mbb_mindR_ttbarlight__403->SetBinError(8,2.169365);
   c1lep4jex3bex_mbb_mindR_ttbarlight__403->SetBinError(9,2.384241);
   c1lep4jex3bex_mbb_mindR_ttbarlight__403->SetEntries(12530);
   c1lep4jex3bex_mbb_mindR_ttbarlight__403->SetDirectory(0);
   c1lep4jex3bex_mbb_mindR_ttbarlight__403->SetStats(0);
   c1lep4jex3bex_mbb_mindR_ttbarlight__403->SetMarkerStyle(20);
   c1lep4jex3bex_mbb_mindR_ttbarlight__403->SetMarkerSize(1.2);
   c1lep4jex3bex_mbb_mindR_ttbarlight__403->GetXaxis()->SetTitle("m_{bb}^{#DeltaR min} [GeV]");
   c1lep4jex3bex_mbb_mindR_ttbarlight__403->GetXaxis()->SetRange(1,30);
   c1lep4jex3bex_mbb_mindR_ttbarlight__403->GetXaxis()->SetLabelFont(43);
   c1lep4jex3bex_mbb_mindR_ttbarlight__403->GetXaxis()->SetLabelSize(21);
   c1lep4jex3bex_mbb_mindR_ttbarlight__403->GetXaxis()->SetTitleSize(21);
   c1lep4jex3bex_mbb_mindR_ttbarlight__403->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_mbb_mindR_ttbarlight__403->GetXaxis()->SetTitleFont(43);
   c1lep4jex3bex_mbb_mindR_ttbarlight__403->GetYaxis()->SetLabelFont(43);
   c1lep4jex3bex_mbb_mindR_ttbarlight__403->GetYaxis()->SetLabelSize(21);
   c1lep4jex3bex_mbb_mindR_ttbarlight__403->GetYaxis()->SetTitleSize(21);
   c1lep4jex3bex_mbb_mindR_ttbarlight__403->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_mbb_mindR_ttbarlight__403->GetYaxis()->SetTitleFont(43);
   c1lep4jex3bex_mbb_mindR_ttbarlight__403->GetZaxis()->SetLabelFont(43);
   c1lep4jex3bex_mbb_mindR_ttbarlight__403->GetZaxis()->SetLabelSize(21);
   c1lep4jex3bex_mbb_mindR_ttbarlight__403->GetZaxis()->SetTitleSize(21);
   c1lep4jex3bex_mbb_mindR_ttbarlight__403->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jex3bex_mbb_mindR_ttbarlight,"");
   Double_t xAxis449[9] = {50, 75, 100, 125, 150, 175, 200, 225, 250}; 
   
   TH1D *c1lep4jex3bex_mbb_mindR_uHcW__404 = new TH1D("c1lep4jex3bex_mbb_mindR_uHcW__404","",8, xAxis449);
   c1lep4jex3bex_mbb_mindR_uHcW__404->SetBinContent(0,174.227);
   c1lep4jex3bex_mbb_mindR_uHcW__404->SetBinContent(1,282.8421);
   c1lep4jex3bex_mbb_mindR_uHcW__404->SetBinContent(2,228.9091);
   c1lep4jex3bex_mbb_mindR_uHcW__404->SetBinContent(3,382.8006);
   c1lep4jex3bex_mbb_mindR_uHcW__404->SetBinContent(4,102.4215);
   c1lep4jex3bex_mbb_mindR_uHcW__404->SetBinContent(5,62.88636);
   c1lep4jex3bex_mbb_mindR_uHcW__404->SetBinContent(6,10.42374);
   c1lep4jex3bex_mbb_mindR_uHcW__404->SetBinContent(7,9.011294);
   c1lep4jex3bex_mbb_mindR_uHcW__404->SetBinContent(8,3.395287);
   c1lep4jex3bex_mbb_mindR_uHcW__404->SetBinContent(9,4.228409);
   c1lep4jex3bex_mbb_mindR_uHcW__404->SetBinError(0,12.29574);
   c1lep4jex3bex_mbb_mindR_uHcW__404->SetBinError(1,15.27074);
   c1lep4jex3bex_mbb_mindR_uHcW__404->SetBinError(2,14.27181);
   c1lep4jex3bex_mbb_mindR_uHcW__404->SetBinError(3,18.06136);
   c1lep4jex3bex_mbb_mindR_uHcW__404->SetBinError(4,8.288436);
   c1lep4jex3bex_mbb_mindR_uHcW__404->SetBinError(5,8.19214);
   c1lep4jex3bex_mbb_mindR_uHcW__404->SetBinError(6,2.301551);
   c1lep4jex3bex_mbb_mindR_uHcW__404->SetBinError(7,2.350665);
   c1lep4jex3bex_mbb_mindR_uHcW__404->SetBinError(8,2.353653);
   c1lep4jex3bex_mbb_mindR_uHcW__404->SetBinError(9,1.759802);
   c1lep4jex3bex_mbb_mindR_uHcW__404->SetEntries(5559);
   c1lep4jex3bex_mbb_mindR_uHcW__404->SetDirectory(0);
   c1lep4jex3bex_mbb_mindR_uHcW__404->SetStats(0);
   c1lep4jex3bex_mbb_mindR_uHcW__404->SetFillColor(2);
   c1lep4jex3bex_mbb_mindR_uHcW__404->SetLineColor(2);
   c1lep4jex3bex_mbb_mindR_uHcW__404->SetMarkerStyle(20);
   c1lep4jex3bex_mbb_mindR_uHcW__404->SetMarkerSize(1.2);
   c1lep4jex3bex_mbb_mindR_uHcW__404->GetXaxis()->SetTitle("m_{bb}^{#DeltaR min} [GeV]");
   c1lep4jex3bex_mbb_mindR_uHcW__404->GetXaxis()->SetRange(1,30);
   c1lep4jex3bex_mbb_mindR_uHcW__404->GetXaxis()->SetLabelFont(43);
   c1lep4jex3bex_mbb_mindR_uHcW__404->GetXaxis()->SetLabelSize(21);
   c1lep4jex3bex_mbb_mindR_uHcW__404->GetXaxis()->SetTitleSize(21);
   c1lep4jex3bex_mbb_mindR_uHcW__404->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_mbb_mindR_uHcW__404->GetXaxis()->SetTitleFont(43);
   c1lep4jex3bex_mbb_mindR_uHcW__404->GetYaxis()->SetLabelFont(43);
   c1lep4jex3bex_mbb_mindR_uHcW__404->GetYaxis()->SetLabelSize(21);
   c1lep4jex3bex_mbb_mindR_uHcW__404->GetYaxis()->SetTitleSize(21);
   c1lep4jex3bex_mbb_mindR_uHcW__404->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_mbb_mindR_uHcW__404->GetYaxis()->SetTitleFont(43);
   c1lep4jex3bex_mbb_mindR_uHcW__404->GetZaxis()->SetLabelFont(43);
   c1lep4jex3bex_mbb_mindR_uHcW__404->GetZaxis()->SetLabelSize(21);
   c1lep4jex3bex_mbb_mindR_uHcW__404->GetZaxis()->SetTitleSize(21);
   c1lep4jex3bex_mbb_mindR_uHcW__404->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jex3bex_mbb_mindR_uHcW,"");
   h_stack->Draw("hist same");
   
   Double_t g_totErr_fx3179[8] = {
   62.5,
   87.5,
   112.5,
   137.5,
   162.5,
   187.5,
   212.5,
   237.5};
   Double_t g_totErr_fy3179[8] = {
   2619.577,
   1735.272,
   2017.483,
   851.9453,
   572.112,
   206.0655,
   159.2867,
   79.8061};
   Double_t g_totErr_felx3179[8] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t g_totErr_fely3179[8] = {
   515.3165,
   365.1172,
   434.4505,
   173.3043,
   109.758,
   38.17448,
   29.79487,
   16.55603};
   Double_t g_totErr_fehx3179[8] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t g_totErr_fehy3179[8] = {
   515.3165,
   365.1172,
   434.4505,
   173.3043,
   109.758,
   38.17448,
   29.79487,
   16.55603};
   grae = new TGraphAsymmErrors(8,g_totErr_fx3179,g_totErr_fy3179,g_totErr_felx3179,g_totErr_fehx3179,g_totErr_fely3179,g_totErr_fehy3179);
   grae->SetName("g_totErr");
   grae->SetTitle("");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(3354);
   grae->SetLineColor(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0);
   
   TH1F *Graph_g_totErr3179 = new TH1F("Graph_g_totErr3179","",100,30,270);
   Graph_g_totErr3179->SetMinimum(0);
   Graph_g_totErr3179->SetMaximum(3442.058);
   Graph_g_totErr3179->SetDirectory(0);
   Graph_g_totErr3179->SetStats(0);
   Graph_g_totErr3179->SetLineWidth(2);
   Graph_g_totErr3179->SetMarkerStyle(20);
   Graph_g_totErr3179->SetMarkerSize(1.2);
   Graph_g_totErr3179->GetXaxis()->SetLabelFont(43);
   Graph_g_totErr3179->GetXaxis()->SetLabelSize(21);
   Graph_g_totErr3179->GetXaxis()->SetTitleSize(21);
   Graph_g_totErr3179->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_totErr3179->GetXaxis()->SetTitleFont(43);
   Graph_g_totErr3179->GetYaxis()->SetLabelFont(43);
   Graph_g_totErr3179->GetYaxis()->SetLabelSize(21);
   Graph_g_totErr3179->GetYaxis()->SetTitleSize(21);
   Graph_g_totErr3179->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_totErr3179->GetYaxis()->SetTitleFont(43);
   Graph_g_totErr3179->GetZaxis()->SetLabelFont(43);
   Graph_g_totErr3179->GetZaxis()->SetLabelSize(21);
   Graph_g_totErr3179->GetZaxis()->SetTitleSize(21);
   Graph_g_totErr3179->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_totErr3179);
   
   grae->Draw("e2");
   
   Double_t Graph_from_c1lep4jex3bex_mbb_mindR_Data_fx3180[8] = {
   62.5,
   87.5,
   112.5,
   137.5,
   162.5,
   187.5,
   212.5,
   237.5};
   Double_t Graph_from_c1lep4jex3bex_mbb_mindR_Data_fy3180[8] = {
   2812,
   1866,
   2267,
   990,
   621,
   260,
   208,
   80};
   Double_t Graph_from_c1lep4jex3bex_mbb_mindR_Data_felx3180[8] = {
   12.475,
   12.475,
   12.475,
   12.475,
   12.475,
   12.475,
   12.475,
   12.475};
   Double_t Graph_from_c1lep4jex3bex_mbb_mindR_Data_fely3180[8] = {
   53.02829,
   43.19722,
   47.61302,
   31.46427,
   24.91987,
   16.12452,
   14.42221,
   8.944272};
   Double_t Graph_from_c1lep4jex3bex_mbb_mindR_Data_fehx3180[8] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t Graph_from_c1lep4jex3bex_mbb_mindR_Data_fehy3180[8] = {
   53.02829,
   43.19722,
   47.61302,
   31.46427,
   24.91987,
   16.12452,
   14.42221,
   8.944272};
   grae = new TGraphAsymmErrors(8,Graph_from_c1lep4jex3bex_mbb_mindR_Data_fx3180,Graph_from_c1lep4jex3bex_mbb_mindR_Data_fy3180,Graph_from_c1lep4jex3bex_mbb_mindR_Data_felx3180,Graph_from_c1lep4jex3bex_mbb_mindR_Data_fehx3180,Graph_from_c1lep4jex3bex_mbb_mindR_Data_fely3180,Graph_from_c1lep4jex3bex_mbb_mindR_Data_fehy3180);
   grae->SetName("Graph_from_c1lep4jex3bex_mbb_mindR_Data");
   grae->SetTitle("");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_c1lep4jex3bex_mbb_mindR_Data3180 = new TH1F("Graph_Graph_from_c1lep4jex3bex_mbb_mindR_Data3180","",100,30.0275,269.9975);
   Graph_Graph_from_c1lep4jex3bex_mbb_mindR_Data3180->SetMinimum(0);
   Graph_Graph_from_c1lep4jex3bex_mbb_mindR_Data3180->SetMaximum(3144.426);
   Graph_Graph_from_c1lep4jex3bex_mbb_mindR_Data3180->SetDirectory(0);
   Graph_Graph_from_c1lep4jex3bex_mbb_mindR_Data3180->SetStats(0);
   Graph_Graph_from_c1lep4jex3bex_mbb_mindR_Data3180->SetLineWidth(2);
   Graph_Graph_from_c1lep4jex3bex_mbb_mindR_Data3180->SetMarkerStyle(20);
   Graph_Graph_from_c1lep4jex3bex_mbb_mindR_Data3180->SetMarkerSize(1.2);
   Graph_Graph_from_c1lep4jex3bex_mbb_mindR_Data3180->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep4jex3bex_mbb_mindR_Data3180->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep4jex3bex_mbb_mindR_Data3180->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep4jex3bex_mbb_mindR_Data3180->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep4jex3bex_mbb_mindR_Data3180->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep4jex3bex_mbb_mindR_Data3180->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep4jex3bex_mbb_mindR_Data3180->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep4jex3bex_mbb_mindR_Data3180->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep4jex3bex_mbb_mindR_Data3180->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep4jex3bex_mbb_mindR_Data3180->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep4jex3bex_mbb_mindR_Data3180->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep4jex3bex_mbb_mindR_Data3180->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep4jex3bex_mbb_mindR_Data3180->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep4jex3bex_mbb_mindR_Data3180->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_c1lep4jex3bex_mbb_mindR_Data3180);
   
   grae->Draw("ep1 ");
   Double_t xAxis450[9] = {50, 75, 100, 125, 150, 175, 200, 225, 250}; 
   
   TH1D *h_dummy_copy__405 = new TH1D("h_dummy_copy__405","",8, xAxis450);
   h_dummy_copy__405->SetEntries(2920971);
   h_dummy_copy__405->SetDirectory(0);
   h_dummy_copy__405->SetStats(0);
   h_dummy_copy__405->SetMarkerStyle(20);
   h_dummy_copy__405->SetMarkerSize(1.2);
   h_dummy_copy__405->GetXaxis()->SetTitle("m_{bb}^{min. #DeltaR} [GeV]");
   h_dummy_copy__405->GetXaxis()->SetRange(1,30);
   h_dummy_copy__405->GetXaxis()->SetLabelFont(43);
   h_dummy_copy__405->GetXaxis()->SetLabelSize(21);
   h_dummy_copy__405->GetXaxis()->SetTitleSize(21);
   h_dummy_copy__405->GetXaxis()->SetTitleOffset(1.4);
   h_dummy_copy__405->GetXaxis()->SetTitleFont(43);
   h_dummy_copy__405->GetYaxis()->SetTitle("Events / 25 GeV");
   h_dummy_copy__405->GetYaxis()->SetLabelFont(43);
   h_dummy_copy__405->GetYaxis()->SetLabelSize(16.8);
   h_dummy_copy__405->GetYaxis()->SetTitleSize(21);
   h_dummy_copy__405->GetYaxis()->SetTitleOffset(2.4);
   h_dummy_copy__405->GetYaxis()->SetTitleFont(43);
   h_dummy_copy__405->GetZaxis()->SetLabelFont(43);
   h_dummy_copy__405->GetZaxis()->SetLabelSize(21);
   h_dummy_copy__405->GetZaxis()->SetTitleSize(21);
   h_dummy_copy__405->GetZaxis()->SetTitleFont(43);
   h_dummy_copy__405->Draw("sameaxis");
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
      tex = new TLatex(0.18,0.73,"4j, 3b");
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
   TLegendEntry *entry=leg->AddEntry("c1lep4jex3bex_mbb_mindR_Data","Data","lep");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep4jex3bex_mbb_mindR_uHcW","t#bar{t}#rightarrowWbHc (BR=1%)","f");
   entry->SetFillColor(2);
   entry->SetFillStyle(1001);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep4jex3bex_mbb_mindR_ttbarlight","t#bar{t}+light","f");
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep4jex3bex_mbb_mindR_ttbarcc","t#bar{t}+cc","f");

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
   entry=leg->AddEntry("c1lep4jex3bex_mbb_mindR_ttbarbb","t#bar{t}+bb","f");

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
   entry=leg->AddEntry("c1lep4jex3bex_mbb_mindR_topEW","Non-t#bar{t}","f");

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
   c_c1lep4jex3bex_mbb_mindR->cd();
   c_c1lep4jex3bex_mbb_mindR->Modified();
   c_c1lep4jex3bex_mbb_mindR->cd();
   c_c1lep4jex3bex_mbb_mindR->SetSelected(c_c1lep4jex3bex_mbb_mindR);
}
