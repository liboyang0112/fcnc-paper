void c1lep4jin2bin_meff()
{
//=========Macro generated from canvas: c_c1lep4jin2bin_meff/c_c1lep4jin2bin_meff
//=========  (Thu Jul 19 17:38:03 2018) by ROOT version6.04/14
   TCanvas *c_c1lep4jin2bin_meff = new TCanvas("c_c1lep4jin2bin_meff", "c_c1lep4jin2bin_meff",0,0,600,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c_c1lep4jin2bin_meff->SetHighLightColor(2);
   c_c1lep4jin2bin_meff->Range(0,0,1,1);
   c_c1lep4jin2bin_meff->SetFillColor(0);
   c_c1lep4jin2bin_meff->SetBorderMode(0);
   c_c1lep4jin2bin_meff->SetBorderSize(2);
   c_c1lep4jin2bin_meff->SetTickx(1);
   c_c1lep4jin2bin_meff->SetTicky(1);
   c_c1lep4jin2bin_meff->SetLeftMargin(0.16);
   c_c1lep4jin2bin_meff->SetRightMargin(0.05);
   c_c1lep4jin2bin_meff->SetTopMargin(0.05);
   c_c1lep4jin2bin_meff->SetBottomMargin(0.16);
   c_c1lep4jin2bin_meff->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0,1,0.28);
   pad1->Draw();
   pad1->cd();
   pad1->Range(4.012346,-0.0873016,868.2099,1.5);
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
   Double_t xAxis91[8] = {125, 225, 325, 425, 525, 625, 725, 825}; 
   
   TH1D *h_dummy2__82 = new TH1D("h_dummy2__82","Data/MC",7, xAxis91);
   h_dummy2__82->SetMinimum(0.5);
   h_dummy2__82->SetMaximum(1.5);
   h_dummy2__82->SetEntries(1.123261e+07);
   h_dummy2__82->SetDirectory(0);
   h_dummy2__82->SetStats(0);
   h_dummy2__82->SetMarkerStyle(20);
   h_dummy2__82->SetMarkerSize(1.2);
   h_dummy2__82->GetXaxis()->SetTitle("m_{eff} [GeV]");
   h_dummy2__82->GetXaxis()->SetRange(1,70);
   h_dummy2__82->GetXaxis()->SetLabelFont(43);
   h_dummy2__82->GetXaxis()->SetLabelOffset(0.025);
   h_dummy2__82->GetXaxis()->SetLabelSize(16.8);
   h_dummy2__82->GetXaxis()->SetTitleSize(21);
   h_dummy2__82->GetXaxis()->SetTitleOffset(5.05);
   h_dummy2__82->GetXaxis()->SetTitleFont(43);
   h_dummy2__82->GetYaxis()->SetTitle("Data / Bkg");
   h_dummy2__82->GetYaxis()->SetNdivisions(-504);
   h_dummy2__82->GetYaxis()->SetLabelFont(43);
   h_dummy2__82->GetYaxis()->SetLabelOffset(0.02);
   h_dummy2__82->GetYaxis()->SetLabelSize(16.8);
   h_dummy2__82->GetYaxis()->SetTitleSize(21);
   h_dummy2__82->GetYaxis()->SetTitleOffset(2.4);
   h_dummy2__82->GetYaxis()->SetTitleFont(43);
   h_dummy2__82->GetZaxis()->SetLabelFont(43);
   h_dummy2__82->GetZaxis()->SetLabelSize(21);
   h_dummy2__82->GetZaxis()->SetTitleSize(21);
   h_dummy2__82->GetZaxis()->SetTitleFont(43);
   h_dummy2__82->Draw("HIST");
   
   Double_t Graph_from_h_ratio_fx3037[7] = {
   175,
   275,
   375,
   475,
   575,
   675,
   775};
   Double_t Graph_from_h_ratio_fy3037[7] = {
   1.045759,
   0.990282,
   0.9577769,
   0.9478282,
   0.9408249,
   0.9437482,
   0.9694104};
   Double_t Graph_from_h_ratio_felx3037[7] = {
   49.9,
   49.9,
   49.9,
   49.9,
   49.9,
   49.9,
   49.9};
   Double_t Graph_from_h_ratio_fely3037[7] = {
   0.008276251,
   0.002244879,
   0.001846158,
   0.00225253,
   0.002959344,
   0.00394315,
   0.005324502};
   Double_t Graph_from_h_ratio_fehx3037[7] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t Graph_from_h_ratio_fehy3037[7] = {
   0.008276251,
   0.002244879,
   0.001846158,
   0.00225253,
   0.002959344,
   0.00394315,
   0.005324502};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(7,Graph_from_h_ratio_fx3037,Graph_from_h_ratio_fy3037,Graph_from_h_ratio_felx3037,Graph_from_h_ratio_fehx3037,Graph_from_h_ratio_fely3037,Graph_from_h_ratio_fehy3037);
   grae->SetName("Graph_from_h_ratio");
   grae->SetTitle("");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(24);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_h_ratio3037 = new TH1F("Graph_Graph_from_h_ratio3037","",100,55.11,894.99);
   Graph_Graph_from_h_ratio3037->SetMinimum(0.9262485);
   Graph_Graph_from_h_ratio3037->SetMaximum(1.065652);
   Graph_Graph_from_h_ratio3037->SetDirectory(0);
   Graph_Graph_from_h_ratio3037->SetStats(0);
   Graph_Graph_from_h_ratio3037->SetLineWidth(2);
   Graph_Graph_from_h_ratio3037->SetMarkerStyle(20);
   Graph_Graph_from_h_ratio3037->SetMarkerSize(1.2);
   Graph_Graph_from_h_ratio3037->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3037->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3037->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3037->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3037->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3037->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3037->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3037->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3037->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3037->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3037->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3037->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3037->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3037->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_h_ratio3037);
   
   grae->Draw("pe0");
   TLine *line = new TLine(125,1,825,1);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t g_ratio2_fx3038[7] = {
   175,
   275,
   375,
   475,
   575,
   675,
   775};
   Double_t g_ratio2_fy3038[7] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t g_ratio2_felx3038[7] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t g_ratio2_fely3038[7] = {
   0.1696929,
   0.1287351,
   0.1199738,
   0.1331171,
   0.1384579,
   0.1437038,
   0.1550708};
   Double_t g_ratio2_fehx3038[7] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t g_ratio2_fehy3038[7] = {
   0.1696929,
   0.1287351,
   0.1199738,
   0.1331171,
   0.1384579,
   0.1437038,
   0.1550708};
   grae = new TGraphAsymmErrors(7,g_ratio2_fx3038,g_ratio2_fy3038,g_ratio2_felx3038,g_ratio2_fehx3038,g_ratio2_fely3038,g_ratio2_fehy3038);
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
   
   TH1F *Graph_g_ratio23038 = new TH1F("Graph_g_ratio23038","",100,55,895);
   Graph_g_ratio23038->SetMinimum(0.7963686);
   Graph_g_ratio23038->SetMaximum(1.203631);
   Graph_g_ratio23038->SetDirectory(0);
   Graph_g_ratio23038->SetStats(0);
   Graph_g_ratio23038->SetLineWidth(2);
   Graph_g_ratio23038->SetMarkerStyle(20);
   Graph_g_ratio23038->SetMarkerSize(1.2);
   Graph_g_ratio23038->GetXaxis()->SetLabelFont(43);
   Graph_g_ratio23038->GetXaxis()->SetLabelSize(21);
   Graph_g_ratio23038->GetXaxis()->SetTitleSize(21);
   Graph_g_ratio23038->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23038->GetXaxis()->SetTitleFont(43);
   Graph_g_ratio23038->GetYaxis()->SetLabelFont(43);
   Graph_g_ratio23038->GetYaxis()->SetLabelSize(21);
   Graph_g_ratio23038->GetYaxis()->SetTitleSize(21);
   Graph_g_ratio23038->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23038->GetYaxis()->SetTitleFont(43);
   Graph_g_ratio23038->GetZaxis()->SetLabelFont(43);
   Graph_g_ratio23038->GetZaxis()->SetLabelSize(21);
   Graph_g_ratio23038->GetZaxis()->SetTitleSize(21);
   Graph_g_ratio23038->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_ratio23038);
   
   grae->Draw("e2");
   Double_t xAxis92[8] = {125, 225, 325, 425, 525, 625, 725, 825}; 
   
   TH1D *h_dummy2_copy__83 = new TH1D("h_dummy2_copy__83","Data/MC",7, xAxis92);
   h_dummy2_copy__83->SetMinimum(0.5);
   h_dummy2_copy__83->SetMaximum(1.5);
   h_dummy2_copy__83->SetEntries(1.123261e+07);
   h_dummy2_copy__83->SetDirectory(0);
   h_dummy2_copy__83->SetStats(0);
   h_dummy2_copy__83->SetMarkerStyle(20);
   h_dummy2_copy__83->SetMarkerSize(1.2);
   h_dummy2_copy__83->GetXaxis()->SetTitle("m_{eff} [GeV]");
   h_dummy2_copy__83->GetXaxis()->SetRange(1,70);
   h_dummy2_copy__83->GetXaxis()->SetLabelFont(43);
   h_dummy2_copy__83->GetXaxis()->SetLabelOffset(0.025);
   h_dummy2_copy__83->GetXaxis()->SetLabelSize(16.8);
   h_dummy2_copy__83->GetXaxis()->SetTitleSize(21);
   h_dummy2_copy__83->GetXaxis()->SetTitleOffset(5.05);
   h_dummy2_copy__83->GetXaxis()->SetTitleFont(43);
   h_dummy2_copy__83->GetYaxis()->SetTitle("Data / Bkg");
   h_dummy2_copy__83->GetYaxis()->SetNdivisions(-504);
   h_dummy2_copy__83->GetYaxis()->SetLabelFont(43);
   h_dummy2_copy__83->GetYaxis()->SetLabelOffset(0.02);
   h_dummy2_copy__83->GetYaxis()->SetLabelSize(16.8);
   h_dummy2_copy__83->GetYaxis()->SetTitleSize(21);
   h_dummy2_copy__83->GetYaxis()->SetTitleOffset(2.4);
   h_dummy2_copy__83->GetYaxis()->SetTitleFont(43);
   h_dummy2_copy__83->GetZaxis()->SetLabelFont(43);
   h_dummy2_copy__83->GetZaxis()->SetLabelSize(21);
   h_dummy2_copy__83->GetZaxis()->SetTitleSize(21);
   h_dummy2_copy__83->GetZaxis()->SetTitleFont(43);
   h_dummy2_copy__83->Draw("sameaxis");
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
   c_c1lep4jin2bin_meff->cd();
  
// ------------>Primitives in pad: pad0
   TPad *pad0 = new TPad("pad0", "pad0",0,0.2,1,1);
   pad0->Draw();
   pad0->cd();
   pad0->Range(4.012346,-59508.69,868.2099,535578.2);
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
   Double_t xAxis93[8] = {125, 225, 325, 425, 525, 625, 725, 825}; 
   
   TH1D *h_dummy__84 = new TH1D("h_dummy__84","",7, xAxis93);
   h_dummy__84->SetMinimum(0);
   h_dummy__84->SetMaximum(505823.8);
   h_dummy__84->SetEntries(1.123261e+07);
   h_dummy__84->SetDirectory(0);
   h_dummy__84->SetStats(0);
   h_dummy__84->SetMarkerStyle(20);
   h_dummy__84->SetMarkerSize(1.2);
   h_dummy__84->GetXaxis()->SetRange(1,70);
   h_dummy__84->GetXaxis()->SetLabelFont(43);
   h_dummy__84->GetXaxis()->SetLabelSize(0);
   h_dummy__84->GetXaxis()->SetTitleSize(21);
   h_dummy__84->GetXaxis()->SetTitleOffset(1.4);
   h_dummy__84->GetXaxis()->SetTitleFont(43);
   h_dummy__84->GetYaxis()->SetTitle("Events / 100 GeV");
   h_dummy__84->GetYaxis()->SetLabelFont(43);
   h_dummy__84->GetYaxis()->SetLabelSize(16.8);
   h_dummy__84->GetYaxis()->SetTitleSize(21);
   h_dummy__84->GetYaxis()->SetTitleOffset(2.4);
   h_dummy__84->GetYaxis()->SetTitleFont(43);
   h_dummy__84->GetZaxis()->SetLabelFont(43);
   h_dummy__84->GetZaxis()->SetLabelSize(21);
   h_dummy__84->GetZaxis()->SetTitleSize(21);
   h_dummy__84->GetZaxis()->SetTitleFont(43);
   h_dummy__84->Draw("HIST");
   
   THStack *h_stack = new THStack();
   h_stack->SetName("h_stack");
   h_stack->SetTitle("h_stack");
   Double_t xAxis94[8] = {125, 225, 325, 425, 525, 625, 725, 825}; 
   
   TH1F *h_stack_stack_10 = new TH1F("h_stack_stack_10","h_stack",7, xAxis94);
   h_stack_stack_10->SetMinimum(0);
   h_stack_stack_10->SetMaximum(298699.6);
   h_stack_stack_10->SetDirectory(0);
   h_stack_stack_10->SetStats(0);
   h_stack_stack_10->SetLineWidth(2);
   h_stack_stack_10->SetMarkerStyle(20);
   h_stack_stack_10->SetMarkerSize(1.2);
   h_stack_stack_10->GetXaxis()->SetLabelFont(43);
   h_stack_stack_10->GetXaxis()->SetLabelSize(21);
   h_stack_stack_10->GetXaxis()->SetTitleSize(21);
   h_stack_stack_10->GetXaxis()->SetTitleOffset(1.4);
   h_stack_stack_10->GetXaxis()->SetTitleFont(43);
   h_stack_stack_10->GetYaxis()->SetLabelFont(43);
   h_stack_stack_10->GetYaxis()->SetLabelSize(21);
   h_stack_stack_10->GetYaxis()->SetTitleSize(21);
   h_stack_stack_10->GetYaxis()->SetTitleOffset(1.4);
   h_stack_stack_10->GetYaxis()->SetTitleFont(43);
   h_stack_stack_10->GetZaxis()->SetLabelFont(43);
   h_stack_stack_10->GetZaxis()->SetLabelSize(21);
   h_stack_stack_10->GetZaxis()->SetTitleSize(21);
   h_stack_stack_10->GetZaxis()->SetTitleFont(43);
   h_stack->SetHistogram(h_stack_stack_10);
   
   Double_t xAxis95[8] = {125, 225, 325, 425, 525, 625, 725, 825}; 
   
   TH1D *c1lep4jin2bin_meff_topEW__85 = new TH1D("c1lep4jin2bin_meff_topEW__85","",7, xAxis95);
   c1lep4jin2bin_meff_topEW__85->SetBinContent(1,5703.119);
   c1lep4jin2bin_meff_topEW__85->SetBinContent(2,26827.94);
   c1lep4jin2bin_meff_topEW__85->SetBinContent(3,29623.33);
   c1lep4jin2bin_meff_topEW__85->SetBinContent(4,20305.45);
   c1lep4jin2bin_meff_topEW__85->SetBinContent(5,13036.01);
   c1lep4jin2bin_meff_topEW__85->SetBinContent(6,7714.225);
   c1lep4jin2bin_meff_topEW__85->SetBinContent(7,3978.657);
   c1lep4jin2bin_meff_topEW__85->SetBinContent(8,8947.448);
   c1lep4jin2bin_meff_topEW__85->SetBinError(1,193.4139);
   c1lep4jin2bin_meff_topEW__85->SetBinError(2,383.4587);
   c1lep4jin2bin_meff_topEW__85->SetBinError(3,404.8135);
   c1lep4jin2bin_meff_topEW__85->SetBinError(4,309.2665);
   c1lep4jin2bin_meff_topEW__85->SetBinError(5,248.9863);
   c1lep4jin2bin_meff_topEW__85->SetBinError(6,178.8464);
   c1lep4jin2bin_meff_topEW__85->SetBinError(7,93.18723);
   c1lep4jin2bin_meff_topEW__85->SetBinError(8,194.3047);
   c1lep4jin2bin_meff_topEW__85->SetEntries(8198830);
   c1lep4jin2bin_meff_topEW__85->SetDirectory(0);
   c1lep4jin2bin_meff_topEW__85->SetStats(0);

   ci = TColor::GetColor("#66cc66");
   c1lep4jin2bin_meff_topEW__85->SetFillColor(ci);
   c1lep4jin2bin_meff_topEW__85->SetMarkerStyle(20);
   c1lep4jin2bin_meff_topEW__85->SetMarkerSize(1.2);
   c1lep4jin2bin_meff_topEW__85->GetXaxis()->SetTitle("m_{eff} [GeV]");
   c1lep4jin2bin_meff_topEW__85->GetXaxis()->SetRange(1,70);
   c1lep4jin2bin_meff_topEW__85->GetXaxis()->SetLabelFont(43);
   c1lep4jin2bin_meff_topEW__85->GetXaxis()->SetLabelSize(21);
   c1lep4jin2bin_meff_topEW__85->GetXaxis()->SetTitleSize(21);
   c1lep4jin2bin_meff_topEW__85->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_meff_topEW__85->GetXaxis()->SetTitleFont(43);
   c1lep4jin2bin_meff_topEW__85->GetYaxis()->SetLabelFont(43);
   c1lep4jin2bin_meff_topEW__85->GetYaxis()->SetLabelSize(21);
   c1lep4jin2bin_meff_topEW__85->GetYaxis()->SetTitleSize(21);
   c1lep4jin2bin_meff_topEW__85->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_meff_topEW__85->GetYaxis()->SetTitleFont(43);
   c1lep4jin2bin_meff_topEW__85->GetZaxis()->SetLabelFont(43);
   c1lep4jin2bin_meff_topEW__85->GetZaxis()->SetLabelSize(21);
   c1lep4jin2bin_meff_topEW__85->GetZaxis()->SetTitleSize(21);
   c1lep4jin2bin_meff_topEW__85->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jin2bin_meff_topEW,"");
   Double_t xAxis96[8] = {125, 225, 325, 425, 525, 625, 725, 825}; 
   
   TH1D *c1lep4jin2bin_meff_ttbarbb__86 = new TH1D("c1lep4jin2bin_meff_ttbarbb__86","",7, xAxis96);
   c1lep4jin2bin_meff_ttbarbb__86->SetBinContent(1,325.3824);
   c1lep4jin2bin_meff_ttbarbb__86->SetBinContent(2,5622.52);
   c1lep4jin2bin_meff_ttbarbb__86->SetBinContent(3,12287.02);
   c1lep4jin2bin_meff_ttbarbb__86->SetBinContent(4,11464.57);
   c1lep4jin2bin_meff_ttbarbb__86->SetBinContent(5,8179.91);
   c1lep4jin2bin_meff_ttbarbb__86->SetBinContent(6,5491.018);
   c1lep4jin2bin_meff_ttbarbb__86->SetBinContent(7,3516.535);
   c1lep4jin2bin_meff_ttbarbb__86->SetBinContent(8,6854.385);
   c1lep4jin2bin_meff_ttbarbb__86->SetBinError(1,10.87823);
   c1lep4jin2bin_meff_ttbarbb__86->SetBinError(2,45.51303);
   c1lep4jin2bin_meff_ttbarbb__86->SetBinError(3,69.0638);
   c1lep4jin2bin_meff_ttbarbb__86->SetBinError(4,67.09994);
   c1lep4jin2bin_meff_ttbarbb__86->SetBinError(5,56.80836);
   c1lep4jin2bin_meff_ttbarbb__86->SetBinError(6,48.57058);
   c1lep4jin2bin_meff_ttbarbb__86->SetBinError(7,38.43329);
   c1lep4jin2bin_meff_ttbarbb__86->SetBinError(8,53.89325);
   c1lep4jin2bin_meff_ttbarbb__86->SetEntries(197629);
   c1lep4jin2bin_meff_ttbarbb__86->SetDirectory(0);
   c1lep4jin2bin_meff_ttbarbb__86->SetStats(0);

   ci = TColor::GetColor("#6666cc");
   c1lep4jin2bin_meff_ttbarbb__86->SetFillColor(ci);
   c1lep4jin2bin_meff_ttbarbb__86->SetMarkerStyle(20);
   c1lep4jin2bin_meff_ttbarbb__86->SetMarkerSize(1.2);
   c1lep4jin2bin_meff_ttbarbb__86->GetXaxis()->SetTitle("m_{eff} [GeV]");
   c1lep4jin2bin_meff_ttbarbb__86->GetXaxis()->SetRange(1,70);
   c1lep4jin2bin_meff_ttbarbb__86->GetXaxis()->SetLabelFont(43);
   c1lep4jin2bin_meff_ttbarbb__86->GetXaxis()->SetLabelSize(21);
   c1lep4jin2bin_meff_ttbarbb__86->GetXaxis()->SetTitleSize(21);
   c1lep4jin2bin_meff_ttbarbb__86->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_meff_ttbarbb__86->GetXaxis()->SetTitleFont(43);
   c1lep4jin2bin_meff_ttbarbb__86->GetYaxis()->SetLabelFont(43);
   c1lep4jin2bin_meff_ttbarbb__86->GetYaxis()->SetLabelSize(21);
   c1lep4jin2bin_meff_ttbarbb__86->GetYaxis()->SetTitleSize(21);
   c1lep4jin2bin_meff_ttbarbb__86->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_meff_ttbarbb__86->GetYaxis()->SetTitleFont(43);
   c1lep4jin2bin_meff_ttbarbb__86->GetZaxis()->SetLabelFont(43);
   c1lep4jin2bin_meff_ttbarbb__86->GetZaxis()->SetLabelSize(21);
   c1lep4jin2bin_meff_ttbarbb__86->GetZaxis()->SetTitleSize(21);
   c1lep4jin2bin_meff_ttbarbb__86->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jin2bin_meff_ttbarbb,"");
   Double_t xAxis97[8] = {125, 225, 325, 425, 525, 625, 725, 825}; 
   
   TH1D *c1lep4jin2bin_meff_ttbarcc__87 = new TH1D("c1lep4jin2bin_meff_ttbarcc__87","",7, xAxis97);
   c1lep4jin2bin_meff_ttbarcc__87->SetBinContent(1,650.9877);
   c1lep4jin2bin_meff_ttbarcc__87->SetBinContent(2,12919);
   c1lep4jin2bin_meff_ttbarcc__87->SetBinContent(3,23409.62);
   c1lep4jin2bin_meff_ttbarcc__87->SetBinContent(4,18608.95);
   c1lep4jin2bin_meff_ttbarcc__87->SetBinContent(5,11995.37);
   c1lep4jin2bin_meff_ttbarcc__87->SetBinContent(6,7318.207);
   c1lep4jin2bin_meff_ttbarcc__87->SetBinContent(7,4526.272);
   c1lep4jin2bin_meff_ttbarcc__87->SetBinContent(8,8053.986);
   c1lep4jin2bin_meff_ttbarcc__87->SetBinError(1,15.58526);
   c1lep4jin2bin_meff_ttbarcc__87->SetBinError(2,71.05974);
   c1lep4jin2bin_meff_ttbarcc__87->SetBinError(3,95.67859);
   c1lep4jin2bin_meff_ttbarcc__87->SetBinError(4,85.35919);
   c1lep4jin2bin_meff_ttbarcc__87->SetBinError(5,68.90272);
   c1lep4jin2bin_meff_ttbarcc__87->SetBinError(6,53.81669);
   c1lep4jin2bin_meff_ttbarcc__87->SetBinError(7,42.13714);
   c1lep4jin2bin_meff_ttbarcc__87->SetBinError(8,56.45748);
   c1lep4jin2bin_meff_ttbarcc__87->SetEntries(319744);
   c1lep4jin2bin_meff_ttbarcc__87->SetDirectory(0);
   c1lep4jin2bin_meff_ttbarcc__87->SetStats(0);

   ci = TColor::GetColor("#ccccff");
   c1lep4jin2bin_meff_ttbarcc__87->SetFillColor(ci);
   c1lep4jin2bin_meff_ttbarcc__87->SetMarkerStyle(20);
   c1lep4jin2bin_meff_ttbarcc__87->SetMarkerSize(1.2);
   c1lep4jin2bin_meff_ttbarcc__87->GetXaxis()->SetTitle("m_{eff} [GeV]");
   c1lep4jin2bin_meff_ttbarcc__87->GetXaxis()->SetRange(1,70);
   c1lep4jin2bin_meff_ttbarcc__87->GetXaxis()->SetLabelFont(43);
   c1lep4jin2bin_meff_ttbarcc__87->GetXaxis()->SetLabelSize(21);
   c1lep4jin2bin_meff_ttbarcc__87->GetXaxis()->SetTitleSize(21);
   c1lep4jin2bin_meff_ttbarcc__87->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_meff_ttbarcc__87->GetXaxis()->SetTitleFont(43);
   c1lep4jin2bin_meff_ttbarcc__87->GetYaxis()->SetLabelFont(43);
   c1lep4jin2bin_meff_ttbarcc__87->GetYaxis()->SetLabelSize(21);
   c1lep4jin2bin_meff_ttbarcc__87->GetYaxis()->SetTitleSize(21);
   c1lep4jin2bin_meff_ttbarcc__87->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_meff_ttbarcc__87->GetYaxis()->SetTitleFont(43);
   c1lep4jin2bin_meff_ttbarcc__87->GetZaxis()->SetLabelFont(43);
   c1lep4jin2bin_meff_ttbarcc__87->GetZaxis()->SetLabelSize(21);
   c1lep4jin2bin_meff_ttbarcc__87->GetZaxis()->SetTitleSize(21);
   c1lep4jin2bin_meff_ttbarcc__87->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jin2bin_meff_ttbarcc,"");
   Double_t xAxis98[8] = {125, 225, 325, 425, 525, 625, 725, 825}; 
   
   TH1D *c1lep4jin2bin_meff_ttbarlight__88 = new TH1D("c1lep4jin2bin_meff_ttbarlight__88","",7, xAxis98);
   c1lep4jin2bin_meff_ttbarlight__88->SetBinContent(1,8587.887);
   c1lep4jin2bin_meff_ttbarlight__88->SetBinContent(2,151135.2);
   c1lep4jin2bin_meff_ttbarlight__88->SetBinContent(3,215693.3);
   c1lep4jin2bin_meff_ttbarlight__88->SetBinContent(4,136426);
   c1lep4jin2bin_meff_ttbarlight__88->SetBinContent(5,74216.78);
   c1lep4jin2bin_meff_ttbarlight__88->SetBinContent(6,40173.88);
   c1lep4jin2bin_meff_ttbarlight__88->SetBinContent(7,22172.52);
   c1lep4jin2bin_meff_ttbarlight__88->SetBinContent(8,32216.14);
   c1lep4jin2bin_meff_ttbarlight__88->SetBinError(1,56.66844);
   c1lep4jin2bin_meff_ttbarlight__88->SetBinError(2,239.7223);
   c1lep4jin2bin_meff_ttbarlight__88->SetBinError(3,290.3622);
   c1lep4jin2bin_meff_ttbarlight__88->SetBinError(4,231.954);
   c1lep4jin2bin_meff_ttbarlight__88->SetBinError(5,170.2913);
   c1lep4jin2bin_meff_ttbarlight__88->SetBinError(6,125.1734);
   c1lep4jin2bin_meff_ttbarlight__88->SetBinError(7,92.57033);
   c1lep4jin2bin_meff_ttbarlight__88->SetBinError(8,111.4002);
   c1lep4jin2bin_meff_ttbarlight__88->SetEntries(2516401);
   c1lep4jin2bin_meff_ttbarlight__88->SetDirectory(0);
   c1lep4jin2bin_meff_ttbarlight__88->SetStats(0);
   c1lep4jin2bin_meff_ttbarlight__88->SetMarkerStyle(20);
   c1lep4jin2bin_meff_ttbarlight__88->SetMarkerSize(1.2);
   c1lep4jin2bin_meff_ttbarlight__88->GetXaxis()->SetTitle("m_{eff} [GeV]");
   c1lep4jin2bin_meff_ttbarlight__88->GetXaxis()->SetRange(1,70);
   c1lep4jin2bin_meff_ttbarlight__88->GetXaxis()->SetLabelFont(43);
   c1lep4jin2bin_meff_ttbarlight__88->GetXaxis()->SetLabelSize(21);
   c1lep4jin2bin_meff_ttbarlight__88->GetXaxis()->SetTitleSize(21);
   c1lep4jin2bin_meff_ttbarlight__88->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_meff_ttbarlight__88->GetXaxis()->SetTitleFont(43);
   c1lep4jin2bin_meff_ttbarlight__88->GetYaxis()->SetLabelFont(43);
   c1lep4jin2bin_meff_ttbarlight__88->GetYaxis()->SetLabelSize(21);
   c1lep4jin2bin_meff_ttbarlight__88->GetYaxis()->SetTitleSize(21);
   c1lep4jin2bin_meff_ttbarlight__88->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_meff_ttbarlight__88->GetYaxis()->SetTitleFont(43);
   c1lep4jin2bin_meff_ttbarlight__88->GetZaxis()->SetLabelFont(43);
   c1lep4jin2bin_meff_ttbarlight__88->GetZaxis()->SetLabelSize(21);
   c1lep4jin2bin_meff_ttbarlight__88->GetZaxis()->SetTitleSize(21);
   c1lep4jin2bin_meff_ttbarlight__88->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jin2bin_meff_ttbarlight,"");
   Double_t xAxis99[8] = {125, 225, 325, 425, 525, 625, 725, 825}; 
   
   TH1D *c1lep4jin2bin_meff_uHcW__89 = new TH1D("c1lep4jin2bin_meff_uHcW__89","",7, xAxis99);
   c1lep4jin2bin_meff_uHcW__89->SetBinContent(1,209.3248);
   c1lep4jin2bin_meff_uHcW__89->SetBinContent(2,2744.636);
   c1lep4jin2bin_meff_uHcW__89->SetBinContent(3,3462.605);
   c1lep4jin2bin_meff_uHcW__89->SetBinContent(4,2230.664);
   c1lep4jin2bin_meff_uHcW__89->SetBinContent(5,1332.209);
   c1lep4jin2bin_meff_uHcW__89->SetBinContent(6,709.8586);
   c1lep4jin2bin_meff_uHcW__89->SetBinContent(7,423.4888);
   c1lep4jin2bin_meff_uHcW__89->SetBinContent(8,552.2862);
   c1lep4jin2bin_meff_uHcW__89->SetBinError(1,14.6247);
   c1lep4jin2bin_meff_uHcW__89->SetBinError(2,48.47291);
   c1lep4jin2bin_meff_uHcW__89->SetBinError(3,57.40189);
   c1lep4jin2bin_meff_uHcW__89->SetBinError(4,49.69362);
   c1lep4jin2bin_meff_uHcW__89->SetBinError(5,38.66428);
   c1lep4jin2bin_meff_uHcW__89->SetBinError(6,29.94183);
   c1lep4jin2bin_meff_uHcW__89->SetBinError(7,23.83957);
   c1lep4jin2bin_meff_uHcW__89->SetBinError(8,31.41418);
   c1lep4jin2bin_meff_uHcW__89->SetEntries(70178);
   c1lep4jin2bin_meff_uHcW__89->SetDirectory(0);
   c1lep4jin2bin_meff_uHcW__89->SetStats(0);
   c1lep4jin2bin_meff_uHcW__89->SetFillColor(2);
   c1lep4jin2bin_meff_uHcW__89->SetLineColor(2);
   c1lep4jin2bin_meff_uHcW__89->SetMarkerStyle(20);
   c1lep4jin2bin_meff_uHcW__89->SetMarkerSize(1.2);
   c1lep4jin2bin_meff_uHcW__89->GetXaxis()->SetTitle("m_{eff} [GeV]");
   c1lep4jin2bin_meff_uHcW__89->GetXaxis()->SetRange(1,70);
   c1lep4jin2bin_meff_uHcW__89->GetXaxis()->SetLabelFont(43);
   c1lep4jin2bin_meff_uHcW__89->GetXaxis()->SetLabelSize(21);
   c1lep4jin2bin_meff_uHcW__89->GetXaxis()->SetTitleSize(21);
   c1lep4jin2bin_meff_uHcW__89->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_meff_uHcW__89->GetXaxis()->SetTitleFont(43);
   c1lep4jin2bin_meff_uHcW__89->GetYaxis()->SetLabelFont(43);
   c1lep4jin2bin_meff_uHcW__89->GetYaxis()->SetLabelSize(21);
   c1lep4jin2bin_meff_uHcW__89->GetYaxis()->SetTitleSize(21);
   c1lep4jin2bin_meff_uHcW__89->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_meff_uHcW__89->GetYaxis()->SetTitleFont(43);
   c1lep4jin2bin_meff_uHcW__89->GetZaxis()->SetLabelFont(43);
   c1lep4jin2bin_meff_uHcW__89->GetZaxis()->SetLabelSize(21);
   c1lep4jin2bin_meff_uHcW__89->GetZaxis()->SetTitleSize(21);
   c1lep4jin2bin_meff_uHcW__89->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jin2bin_meff_uHcW,"");
   h_stack->Draw("hist same");
   
   Double_t g_totErr_fx3039[7] = {
   175,
   275,
   375,
   475,
   575,
   675,
   775};
   Double_t g_totErr_fy3039[7] = {
   15267.38,
   196504.6,
   281013.2,
   186804.9,
   107428.1,
   60697.33,
   34193.98};
   Double_t g_totErr_felx3039[7] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t g_totErr_fely3039[7] = {
   2590.765,
   25297.05,
   33714.23,
   24866.92,
   14874.26,
   8722.436,
   5302.488};
   Double_t g_totErr_fehx3039[7] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t g_totErr_fehy3039[7] = {
   2590.765,
   25297.05,
   33714.23,
   24866.92,
   14874.26,
   8722.436,
   5302.488};
   grae = new TGraphAsymmErrors(7,g_totErr_fx3039,g_totErr_fy3039,g_totErr_felx3039,g_totErr_fehx3039,g_totErr_fely3039,g_totErr_fehy3039);
   grae->SetName("g_totErr");
   grae->SetTitle("");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(3354);
   grae->SetLineColor(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0);
   
   TH1F *Graph_g_totErr3039 = new TH1F("Graph_g_totErr3039","",100,55,895);
   Graph_g_totErr3039->SetMinimum(0);
   Graph_g_totErr3039->SetMaximum(344932.6);
   Graph_g_totErr3039->SetDirectory(0);
   Graph_g_totErr3039->SetStats(0);
   Graph_g_totErr3039->SetLineWidth(2);
   Graph_g_totErr3039->SetMarkerStyle(20);
   Graph_g_totErr3039->SetMarkerSize(1.2);
   Graph_g_totErr3039->GetXaxis()->SetLabelFont(43);
   Graph_g_totErr3039->GetXaxis()->SetLabelSize(21);
   Graph_g_totErr3039->GetXaxis()->SetTitleSize(21);
   Graph_g_totErr3039->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_totErr3039->GetXaxis()->SetTitleFont(43);
   Graph_g_totErr3039->GetYaxis()->SetLabelFont(43);
   Graph_g_totErr3039->GetYaxis()->SetLabelSize(21);
   Graph_g_totErr3039->GetYaxis()->SetTitleSize(21);
   Graph_g_totErr3039->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_totErr3039->GetYaxis()->SetTitleFont(43);
   Graph_g_totErr3039->GetZaxis()->SetLabelFont(43);
   Graph_g_totErr3039->GetZaxis()->SetLabelSize(21);
   Graph_g_totErr3039->GetZaxis()->SetTitleSize(21);
   Graph_g_totErr3039->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_totErr3039);
   
   grae->Draw("e2");
   
   Double_t Graph_from_c1lep4jin2bin_meff_Data_fx3040[7] = {
   175,
   275,
   375,
   475,
   575,
   675,
   775};
   Double_t Graph_from_c1lep4jin2bin_meff_Data_fy3040[7] = {
   15966,
   194595,
   269148,
   177059,
   101071,
   57283,
   33148};
   Double_t Graph_from_c1lep4jin2bin_meff_Data_felx3040[7] = {
   49.9,
   49.9,
   49.9,
   49.9,
   49.9,
   49.9,
   49.9};
   Double_t Graph_from_c1lep4jin2bin_meff_Data_fely3040[7] = {
   126.3566,
   441.1292,
   518.7948,
   420.7838,
   317.9167,
   239.3387,
   182.0659};
   Double_t Graph_from_c1lep4jin2bin_meff_Data_fehx3040[7] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t Graph_from_c1lep4jin2bin_meff_Data_fehy3040[7] = {
   126.3566,
   441.1292,
   518.7948,
   420.7838,
   317.9167,
   239.3387,
   182.0659};
   grae = new TGraphAsymmErrors(7,Graph_from_c1lep4jin2bin_meff_Data_fx3040,Graph_from_c1lep4jin2bin_meff_Data_fy3040,Graph_from_c1lep4jin2bin_meff_Data_felx3040,Graph_from_c1lep4jin2bin_meff_Data_fehx3040,Graph_from_c1lep4jin2bin_meff_Data_fely3040,Graph_from_c1lep4jin2bin_meff_Data_fehy3040);
   grae->SetName("Graph_from_c1lep4jin2bin_meff_Data");
   grae->SetTitle("");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_c1lep4jin2bin_meff_Data3040 = new TH1F("Graph_Graph_from_c1lep4jin2bin_meff_Data3040","",100,55.11,894.99);
   Graph_Graph_from_c1lep4jin2bin_meff_Data3040->SetMinimum(0);
   Graph_Graph_from_c1lep4jin2bin_meff_Data3040->SetMaximum(295049.5);
   Graph_Graph_from_c1lep4jin2bin_meff_Data3040->SetDirectory(0);
   Graph_Graph_from_c1lep4jin2bin_meff_Data3040->SetStats(0);
   Graph_Graph_from_c1lep4jin2bin_meff_Data3040->SetLineWidth(2);
   Graph_Graph_from_c1lep4jin2bin_meff_Data3040->SetMarkerStyle(20);
   Graph_Graph_from_c1lep4jin2bin_meff_Data3040->SetMarkerSize(1.2);
   Graph_Graph_from_c1lep4jin2bin_meff_Data3040->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep4jin2bin_meff_Data3040->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep4jin2bin_meff_Data3040->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep4jin2bin_meff_Data3040->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep4jin2bin_meff_Data3040->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep4jin2bin_meff_Data3040->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep4jin2bin_meff_Data3040->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep4jin2bin_meff_Data3040->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep4jin2bin_meff_Data3040->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep4jin2bin_meff_Data3040->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep4jin2bin_meff_Data3040->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep4jin2bin_meff_Data3040->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep4jin2bin_meff_Data3040->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep4jin2bin_meff_Data3040->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_c1lep4jin2bin_meff_Data3040);
   
   grae->Draw("ep1 ");
   Double_t xAxis100[8] = {125, 225, 325, 425, 525, 625, 725, 825}; 
   
   TH1D *h_dummy_copy__90 = new TH1D("h_dummy_copy__90","",7, xAxis100);
   h_dummy_copy__90->SetEntries(1.123261e+07);
   h_dummy_copy__90->SetDirectory(0);
   h_dummy_copy__90->SetStats(0);
   h_dummy_copy__90->SetMarkerStyle(20);
   h_dummy_copy__90->SetMarkerSize(1.2);
   h_dummy_copy__90->GetXaxis()->SetTitle("m_{eff} [GeV]");
   h_dummy_copy__90->GetXaxis()->SetRange(1,70);
   h_dummy_copy__90->GetXaxis()->SetLabelFont(43);
   h_dummy_copy__90->GetXaxis()->SetLabelSize(21);
   h_dummy_copy__90->GetXaxis()->SetTitleSize(21);
   h_dummy_copy__90->GetXaxis()->SetTitleOffset(1.4);
   h_dummy_copy__90->GetXaxis()->SetTitleFont(43);
   h_dummy_copy__90->GetYaxis()->SetTitle("Events / 100 GeV");
   h_dummy_copy__90->GetYaxis()->SetLabelFont(43);
   h_dummy_copy__90->GetYaxis()->SetLabelSize(16.8);
   h_dummy_copy__90->GetYaxis()->SetTitleSize(21);
   h_dummy_copy__90->GetYaxis()->SetTitleOffset(2.4);
   h_dummy_copy__90->GetYaxis()->SetTitleFont(43);
   h_dummy_copy__90->GetZaxis()->SetLabelFont(43);
   h_dummy_copy__90->GetZaxis()->SetLabelSize(21);
   h_dummy_copy__90->GetZaxis()->SetTitleSize(21);
   h_dummy_copy__90->GetZaxis()->SetTitleFont(43);
   h_dummy_copy__90->Draw("sameaxis");
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
   TLegendEntry *entry=leg->AddEntry("c1lep4jin2bin_meff_Data","Data","lep");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep4jin2bin_meff_uHcW","t#bar{t}#rightarrowWbHc (BR=1%)","f");
   entry->SetFillColor(2);
   entry->SetFillStyle(1001);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep4jin2bin_meff_ttbarlight","t#bar{t}+light","f");
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep4jin2bin_meff_ttbarcc","t#bar{t}+cc","f");

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
   entry=leg->AddEntry("c1lep4jin2bin_meff_ttbarbb","t#bar{t}+bb","f");

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
   entry=leg->AddEntry("c1lep4jin2bin_meff_topEW","Non-t#bar{t}","f");

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
   c_c1lep4jin2bin_meff->cd();
   c_c1lep4jin2bin_meff->Modified();
   c_c1lep4jin2bin_meff->cd();
   c_c1lep4jin2bin_meff->SetSelected(c_c1lep4jin2bin_meff);
}
