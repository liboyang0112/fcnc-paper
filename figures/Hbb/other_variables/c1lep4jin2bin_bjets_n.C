void c1lep4jin2bin_bjets_n()
{
//=========Macro generated from canvas: c_c1lep4jin2bin_bjets_n/c_c1lep4jin2bin_bjets_n
//=========  (Thu Jul 19 17:38:08 2018) by ROOT version6.04/14
   TCanvas *c_c1lep4jin2bin_bjets_n = new TCanvas("c_c1lep4jin2bin_bjets_n", "c_c1lep4jin2bin_bjets_n",0,0,600,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c_c1lep4jin2bin_bjets_n->SetHighLightColor(2);
   c_c1lep4jin2bin_bjets_n->Range(0,0,1,1);
   c_c1lep4jin2bin_bjets_n->SetFillColor(0);
   c_c1lep4jin2bin_bjets_n->SetBorderMode(0);
   c_c1lep4jin2bin_bjets_n->SetBorderSize(2);
   c_c1lep4jin2bin_bjets_n->SetTickx(1);
   c_c1lep4jin2bin_bjets_n->SetTicky(1);
   c_c1lep4jin2bin_bjets_n->SetLeftMargin(0.16);
   c_c1lep4jin2bin_bjets_n->SetRightMargin(0.05);
   c_c1lep4jin2bin_bjets_n->SetTopMargin(0.05);
   c_c1lep4jin2bin_bjets_n->SetBottomMargin(0.16);
   c_c1lep4jin2bin_bjets_n->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0,1,0.28);
   pad1->Draw();
   pad1->cd();
   pad1->Range(0.9814815,-0.0873016,4.685185,1.5);
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
   Double_t xAxis381[4] = {1.5, 2.5, 3.5, 4.5}; 
   
   TH1D *h_dummy2__343 = new TH1D("h_dummy2__343","Data/MC",3, xAxis381);
   h_dummy2__343->SetMinimum(0.5);
   h_dummy2__343->SetMaximum(1.5);
   h_dummy2__343->SetEntries(1.123257e+07);
   h_dummy2__343->SetDirectory(0);
   h_dummy2__343->SetStats(0);
   h_dummy2__343->SetMarkerStyle(20);
   h_dummy2__343->SetMarkerSize(1.2);
   h_dummy2__343->GetXaxis()->SetTitle("N_{b}");
   h_dummy2__343->GetXaxis()->SetRange(1,9);
   h_dummy2__343->GetXaxis()->SetLabelFont(43);
   h_dummy2__343->GetXaxis()->SetLabelOffset(0.025);
   h_dummy2__343->GetXaxis()->SetLabelSize(16.8);
   h_dummy2__343->GetXaxis()->SetTitleSize(21);
   h_dummy2__343->GetXaxis()->SetTitleOffset(5.05);
   h_dummy2__343->GetXaxis()->SetTitleFont(43);
   h_dummy2__343->GetYaxis()->SetTitle("Data / Bkg");
   h_dummy2__343->GetYaxis()->SetNdivisions(-504);
   h_dummy2__343->GetYaxis()->SetLabelFont(43);
   h_dummy2__343->GetYaxis()->SetLabelOffset(0.02);
   h_dummy2__343->GetYaxis()->SetLabelSize(16.8);
   h_dummy2__343->GetYaxis()->SetTitleSize(21);
   h_dummy2__343->GetYaxis()->SetTitleOffset(2.4);
   h_dummy2__343->GetYaxis()->SetTitleFont(43);
   h_dummy2__343->GetZaxis()->SetLabelFont(43);
   h_dummy2__343->GetZaxis()->SetLabelSize(21);
   h_dummy2__343->GetZaxis()->SetTitleSize(21);
   h_dummy2__343->GetZaxis()->SetTitleFont(43);
   h_dummy2__343->Draw("HIST");
   
   Double_t Graph_from_h_ratio_fx3153[3] = {
   2,
   3,
   4};
   Double_t Graph_from_h_ratio_fy3153[3] = {
   0.9524039,
   1.119171,
   1.051487};
   Double_t Graph_from_h_ratio_felx3153[3] = {
   0.499,
   0.499,
   0.499};
   Double_t Graph_from_h_ratio_fely3153[3] = {
   0.001027461,
   0.005751906,
   0.02390978};
   Double_t Graph_from_h_ratio_fehx3153[3] = {
   0.5,
   0.5,
   0.5};
   Double_t Graph_from_h_ratio_fehy3153[3] = {
   0.001027461,
   0.005751906,
   0.02390978};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(3,Graph_from_h_ratio_fx3153,Graph_from_h_ratio_fy3153,Graph_from_h_ratio_felx3153,Graph_from_h_ratio_fehx3153,Graph_from_h_ratio_fely3153,Graph_from_h_ratio_fehy3153);
   grae->SetName("Graph_from_h_ratio");
   grae->SetTitle("");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(24);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_h_ratio3153 = new TH1F("Graph_Graph_from_h_ratio3153","",100,1.2011,4.7999);
   Graph_Graph_from_h_ratio3153->SetMinimum(0.9340218);
   Graph_Graph_from_h_ratio3153->SetMaximum(1.142277);
   Graph_Graph_from_h_ratio3153->SetDirectory(0);
   Graph_Graph_from_h_ratio3153->SetStats(0);
   Graph_Graph_from_h_ratio3153->SetLineWidth(2);
   Graph_Graph_from_h_ratio3153->SetMarkerStyle(20);
   Graph_Graph_from_h_ratio3153->SetMarkerSize(1.2);
   Graph_Graph_from_h_ratio3153->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3153->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3153->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3153->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3153->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3153->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3153->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3153->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3153->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3153->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3153->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3153->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3153->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3153->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_h_ratio3153);
   
   grae->Draw("pe0");
   TLine *line = new TLine(1.5,1,4.5,1);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t g_ratio2_fx3154[3] = {
   2,
   3,
   4};
   Double_t g_ratio2_fy3154[3] = {
   1,
   1,
   1};
   Double_t g_ratio2_felx3154[3] = {
   0.5,
   0.5,
   0.5};
   Double_t g_ratio2_fely3154[3] = {
   0.1225753,
   0.1745186,
   0.2038864};
   Double_t g_ratio2_fehx3154[3] = {
   0.5,
   0.5,
   0.5};
   Double_t g_ratio2_fehy3154[3] = {
   0.1225753,
   0.1745186,
   0.2038864};
   grae = new TGraphAsymmErrors(3,g_ratio2_fx3154,g_ratio2_fy3154,g_ratio2_felx3154,g_ratio2_fehx3154,g_ratio2_fely3154,g_ratio2_fehy3154);
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
   
   TH1F *Graph_g_ratio23154 = new TH1F("Graph_g_ratio23154","",100,1.2,4.8);
   Graph_g_ratio23154->SetMinimum(0.7553363);
   Graph_g_ratio23154->SetMaximum(1.244664);
   Graph_g_ratio23154->SetDirectory(0);
   Graph_g_ratio23154->SetStats(0);
   Graph_g_ratio23154->SetLineWidth(2);
   Graph_g_ratio23154->SetMarkerStyle(20);
   Graph_g_ratio23154->SetMarkerSize(1.2);
   Graph_g_ratio23154->GetXaxis()->SetLabelFont(43);
   Graph_g_ratio23154->GetXaxis()->SetLabelSize(21);
   Graph_g_ratio23154->GetXaxis()->SetTitleSize(21);
   Graph_g_ratio23154->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23154->GetXaxis()->SetTitleFont(43);
   Graph_g_ratio23154->GetYaxis()->SetLabelFont(43);
   Graph_g_ratio23154->GetYaxis()->SetLabelSize(21);
   Graph_g_ratio23154->GetYaxis()->SetTitleSize(21);
   Graph_g_ratio23154->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23154->GetYaxis()->SetTitleFont(43);
   Graph_g_ratio23154->GetZaxis()->SetLabelFont(43);
   Graph_g_ratio23154->GetZaxis()->SetLabelSize(21);
   Graph_g_ratio23154->GetZaxis()->SetTitleSize(21);
   Graph_g_ratio23154->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_ratio23154);
   
   grae->Draw("e2");
   Double_t xAxis382[4] = {1.5, 2.5, 3.5, 4.5}; 
   
   TH1D *h_dummy2_copy__344 = new TH1D("h_dummy2_copy__344","Data/MC",3, xAxis382);
   h_dummy2_copy__344->SetMinimum(0.5);
   h_dummy2_copy__344->SetMaximum(1.5);
   h_dummy2_copy__344->SetEntries(1.123257e+07);
   h_dummy2_copy__344->SetDirectory(0);
   h_dummy2_copy__344->SetStats(0);
   h_dummy2_copy__344->SetMarkerStyle(20);
   h_dummy2_copy__344->SetMarkerSize(1.2);
   h_dummy2_copy__344->GetXaxis()->SetTitle("N_{b}");
   h_dummy2_copy__344->GetXaxis()->SetRange(1,9);
   h_dummy2_copy__344->GetXaxis()->SetLabelFont(43);
   h_dummy2_copy__344->GetXaxis()->SetLabelOffset(0.025);
   h_dummy2_copy__344->GetXaxis()->SetLabelSize(16.8);
   h_dummy2_copy__344->GetXaxis()->SetTitleSize(21);
   h_dummy2_copy__344->GetXaxis()->SetTitleOffset(5.05);
   h_dummy2_copy__344->GetXaxis()->SetTitleFont(43);
   h_dummy2_copy__344->GetYaxis()->SetTitle("Data / Bkg");
   h_dummy2_copy__344->GetYaxis()->SetNdivisions(-504);
   h_dummy2_copy__344->GetYaxis()->SetLabelFont(43);
   h_dummy2_copy__344->GetYaxis()->SetLabelOffset(0.02);
   h_dummy2_copy__344->GetYaxis()->SetLabelSize(16.8);
   h_dummy2_copy__344->GetYaxis()->SetTitleSize(21);
   h_dummy2_copy__344->GetYaxis()->SetTitleOffset(2.4);
   h_dummy2_copy__344->GetYaxis()->SetTitleFont(43);
   h_dummy2_copy__344->GetZaxis()->SetLabelFont(43);
   h_dummy2_copy__344->GetZaxis()->SetLabelSize(21);
   h_dummy2_copy__344->GetZaxis()->SetTitleSize(21);
   h_dummy2_copy__344->GetZaxis()->SetTitleFont(43);
   h_dummy2_copy__344->Draw("sameaxis");
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
   c_c1lep4jin2bin_bjets_n->cd();
  
// ------------>Primitives in pad: pad0
   TPad *pad0 = new TPad("pad0", "pad0",0,0.2,1,1);
   pad0->Draw();
   pad0->cd();
   pad0->Range(0.9814815,-191048.8,4.685185,1719440);
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
   Double_t xAxis383[4] = {1.5, 2.5, 3.5, 4.5}; 
   
   TH1D *h_dummy__345 = new TH1D("h_dummy__345","",3, xAxis383);
   h_dummy__345->SetMinimum(0);
   h_dummy__345->SetMaximum(1623915);
   h_dummy__345->SetEntries(1.123257e+07);
   h_dummy__345->SetDirectory(0);
   h_dummy__345->SetStats(0);
   h_dummy__345->SetMarkerStyle(20);
   h_dummy__345->SetMarkerSize(1.2);
   h_dummy__345->GetXaxis()->SetRange(1,9);
   h_dummy__345->GetXaxis()->SetLabelFont(43);
   h_dummy__345->GetXaxis()->SetLabelSize(0);
   h_dummy__345->GetXaxis()->SetTitleSize(21);
   h_dummy__345->GetXaxis()->SetTitleOffset(1.4);
   h_dummy__345->GetXaxis()->SetTitleFont(43);
   h_dummy__345->GetYaxis()->SetTitle("Events / 1");
   h_dummy__345->GetYaxis()->SetLabelFont(43);
   h_dummy__345->GetYaxis()->SetLabelSize(16.8);
   h_dummy__345->GetYaxis()->SetTitleSize(21);
   h_dummy__345->GetYaxis()->SetTitleOffset(2.4);
   h_dummy__345->GetYaxis()->SetTitleFont(43);
   h_dummy__345->GetZaxis()->SetLabelFont(43);
   h_dummy__345->GetZaxis()->SetLabelSize(21);
   h_dummy__345->GetZaxis()->SetTitleSize(21);
   h_dummy__345->GetZaxis()->SetTitleFont(43);
   h_dummy__345->Draw("HIST");
   
   THStack *h_stack = new THStack();
   h_stack->SetName("h_stack");
   h_stack->SetTitle("h_stack");
   Double_t xAxis384[4] = {1.5, 2.5, 3.5, 4.5}; 
   
   TH1F *h_stack_stack_39 = new TH1F("h_stack_stack_39","h_stack",3, xAxis384);
   h_stack_stack_39->SetMinimum(0);
   h_stack_stack_39->SetMaximum(956306.7);
   h_stack_stack_39->SetDirectory(0);
   h_stack_stack_39->SetStats(0);
   h_stack_stack_39->SetLineWidth(2);
   h_stack_stack_39->SetMarkerStyle(20);
   h_stack_stack_39->SetMarkerSize(1.2);
   h_stack_stack_39->GetXaxis()->SetLabelFont(43);
   h_stack_stack_39->GetXaxis()->SetLabelSize(21);
   h_stack_stack_39->GetXaxis()->SetTitleSize(21);
   h_stack_stack_39->GetXaxis()->SetTitleOffset(1.4);
   h_stack_stack_39->GetXaxis()->SetTitleFont(43);
   h_stack_stack_39->GetYaxis()->SetLabelFont(43);
   h_stack_stack_39->GetYaxis()->SetLabelSize(21);
   h_stack_stack_39->GetYaxis()->SetTitleSize(21);
   h_stack_stack_39->GetYaxis()->SetTitleOffset(1.4);
   h_stack_stack_39->GetYaxis()->SetTitleFont(43);
   h_stack_stack_39->GetZaxis()->SetLabelFont(43);
   h_stack_stack_39->GetZaxis()->SetLabelSize(21);
   h_stack_stack_39->GetZaxis()->SetTitleSize(21);
   h_stack_stack_39->GetZaxis()->SetTitleFont(43);
   h_stack->SetHistogram(h_stack_stack_39);
   
   Double_t xAxis385[4] = {1.5, 2.5, 3.5, 4.5}; 
   
   TH1D *c1lep4jin2bin_bjets_n_topEW__346 = new TH1D("c1lep4jin2bin_bjets_n_topEW__346","",3, xAxis385);
   c1lep4jin2bin_bjets_n_topEW__346->SetBinContent(1,110592.5);
   c1lep4jin2bin_bjets_n_topEW__346->SetBinContent(2,5165.76);
   c1lep4jin2bin_bjets_n_topEW__346->SetBinContent(3,297.4772);
   c1lep4jin2bin_bjets_n_topEW__346->SetBinContent(4,10.93563);
   c1lep4jin2bin_bjets_n_topEW__346->SetBinError(1,742.2384);
   c1lep4jin2bin_bjets_n_topEW__346->SetBinError(2,175.9166);
   c1lep4jin2bin_bjets_n_topEW__346->SetBinError(3,28.76159);
   c1lep4jin2bin_bjets_n_topEW__346->SetBinError(4,3.24878);
   c1lep4jin2bin_bjets_n_topEW__346->SetEntries(8198796);
   c1lep4jin2bin_bjets_n_topEW__346->SetDirectory(0);
   c1lep4jin2bin_bjets_n_topEW__346->SetStats(0);

   ci = TColor::GetColor("#66cc66");
   c1lep4jin2bin_bjets_n_topEW__346->SetFillColor(ci);
   c1lep4jin2bin_bjets_n_topEW__346->SetMarkerStyle(20);
   c1lep4jin2bin_bjets_n_topEW__346->SetMarkerSize(1.2);
   c1lep4jin2bin_bjets_n_topEW__346->GetXaxis()->SetTitle("Number of b-jets");
   c1lep4jin2bin_bjets_n_topEW__346->GetXaxis()->SetRange(1,9);
   c1lep4jin2bin_bjets_n_topEW__346->GetXaxis()->SetLabelFont(43);
   c1lep4jin2bin_bjets_n_topEW__346->GetXaxis()->SetLabelSize(21);
   c1lep4jin2bin_bjets_n_topEW__346->GetXaxis()->SetTitleSize(21);
   c1lep4jin2bin_bjets_n_topEW__346->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_bjets_n_topEW__346->GetXaxis()->SetTitleFont(43);
   c1lep4jin2bin_bjets_n_topEW__346->GetYaxis()->SetLabelFont(43);
   c1lep4jin2bin_bjets_n_topEW__346->GetYaxis()->SetLabelSize(21);
   c1lep4jin2bin_bjets_n_topEW__346->GetYaxis()->SetTitleSize(21);
   c1lep4jin2bin_bjets_n_topEW__346->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_bjets_n_topEW__346->GetYaxis()->SetTitleFont(43);
   c1lep4jin2bin_bjets_n_topEW__346->GetZaxis()->SetLabelFont(43);
   c1lep4jin2bin_bjets_n_topEW__346->GetZaxis()->SetLabelSize(21);
   c1lep4jin2bin_bjets_n_topEW__346->GetZaxis()->SetTitleSize(21);
   c1lep4jin2bin_bjets_n_topEW__346->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jin2bin_bjets_n_topEW,"");
   Double_t xAxis386[4] = {1.5, 2.5, 3.5, 4.5}; 
   
   TH1D *c1lep4jin2bin_bjets_n_ttbarbb__347 = new TH1D("c1lep4jin2bin_bjets_n_ttbarbb__347","",3, xAxis386);
   c1lep4jin2bin_bjets_n_ttbarbb__347->SetBinContent(1,37729.42);
   c1lep4jin2bin_bjets_n_ttbarbb__347->SetBinContent(2,14501.31);
   c1lep4jin2bin_bjets_n_ttbarbb__347->SetBinContent(3,1452.335);
   c1lep4jin2bin_bjets_n_ttbarbb__347->SetBinContent(4,58.27721);
   c1lep4jin2bin_bjets_n_ttbarbb__347->SetBinError(1,120.6641);
   c1lep4jin2bin_bjets_n_ttbarbb__347->SetBinError(2,77.87865);
   c1lep4jin2bin_bjets_n_ttbarbb__347->SetBinError(3,27.68376);
   c1lep4jin2bin_bjets_n_ttbarbb__347->SetBinError(4,6.211408);
   c1lep4jin2bin_bjets_n_ttbarbb__347->SetEntries(197629);
   c1lep4jin2bin_bjets_n_ttbarbb__347->SetDirectory(0);
   c1lep4jin2bin_bjets_n_ttbarbb__347->SetStats(0);

   ci = TColor::GetColor("#6666cc");
   c1lep4jin2bin_bjets_n_ttbarbb__347->SetFillColor(ci);
   c1lep4jin2bin_bjets_n_ttbarbb__347->SetMarkerStyle(20);
   c1lep4jin2bin_bjets_n_ttbarbb__347->SetMarkerSize(1.2);
   c1lep4jin2bin_bjets_n_ttbarbb__347->GetXaxis()->SetTitle("Number of b-jets");
   c1lep4jin2bin_bjets_n_ttbarbb__347->GetXaxis()->SetRange(1,9);
   c1lep4jin2bin_bjets_n_ttbarbb__347->GetXaxis()->SetLabelFont(43);
   c1lep4jin2bin_bjets_n_ttbarbb__347->GetXaxis()->SetLabelSize(21);
   c1lep4jin2bin_bjets_n_ttbarbb__347->GetXaxis()->SetTitleSize(21);
   c1lep4jin2bin_bjets_n_ttbarbb__347->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_bjets_n_ttbarbb__347->GetXaxis()->SetTitleFont(43);
   c1lep4jin2bin_bjets_n_ttbarbb__347->GetYaxis()->SetLabelFont(43);
   c1lep4jin2bin_bjets_n_ttbarbb__347->GetYaxis()->SetLabelSize(21);
   c1lep4jin2bin_bjets_n_ttbarbb__347->GetYaxis()->SetTitleSize(21);
   c1lep4jin2bin_bjets_n_ttbarbb__347->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_bjets_n_ttbarbb__347->GetYaxis()->SetTitleFont(43);
   c1lep4jin2bin_bjets_n_ttbarbb__347->GetZaxis()->SetLabelFont(43);
   c1lep4jin2bin_bjets_n_ttbarbb__347->GetZaxis()->SetLabelSize(21);
   c1lep4jin2bin_bjets_n_ttbarbb__347->GetZaxis()->SetTitleSize(21);
   c1lep4jin2bin_bjets_n_ttbarbb__347->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jin2bin_bjets_n_ttbarbb,"");
   Double_t xAxis387[4] = {1.5, 2.5, 3.5, 4.5}; 
   
   TH1D *c1lep4jin2bin_bjets_n_ttbarcc__348 = new TH1D("c1lep4jin2bin_bjets_n_ttbarcc__348","",3, xAxis387);
   c1lep4jin2bin_bjets_n_ttbarcc__348->SetBinContent(1,83241.71);
   c1lep4jin2bin_bjets_n_ttbarcc__348->SetBinContent(2,4187.734);
   c1lep4jin2bin_bjets_n_ttbarcc__348->SetBinContent(3,52.18345);
   c1lep4jin2bin_bjets_n_ttbarcc__348->SetBinContent(4,0.7686052);
   c1lep4jin2bin_bjets_n_ttbarcc__348->SetBinError(1,179.7051);
   c1lep4jin2bin_bjets_n_ttbarcc__348->SetBinError(2,44.77905);
   c1lep4jin2bin_bjets_n_ttbarcc__348->SetBinError(3,6.333104);
   c1lep4jin2bin_bjets_n_ttbarcc__348->SetBinError(4,0.7686052);
   c1lep4jin2bin_bjets_n_ttbarcc__348->SetEntries(319744);
   c1lep4jin2bin_bjets_n_ttbarcc__348->SetDirectory(0);
   c1lep4jin2bin_bjets_n_ttbarcc__348->SetStats(0);

   ci = TColor::GetColor("#ccccff");
   c1lep4jin2bin_bjets_n_ttbarcc__348->SetFillColor(ci);
   c1lep4jin2bin_bjets_n_ttbarcc__348->SetMarkerStyle(20);
   c1lep4jin2bin_bjets_n_ttbarcc__348->SetMarkerSize(1.2);
   c1lep4jin2bin_bjets_n_ttbarcc__348->GetXaxis()->SetTitle("Number of b-jets");
   c1lep4jin2bin_bjets_n_ttbarcc__348->GetXaxis()->SetRange(1,9);
   c1lep4jin2bin_bjets_n_ttbarcc__348->GetXaxis()->SetLabelFont(43);
   c1lep4jin2bin_bjets_n_ttbarcc__348->GetXaxis()->SetLabelSize(21);
   c1lep4jin2bin_bjets_n_ttbarcc__348->GetXaxis()->SetTitleSize(21);
   c1lep4jin2bin_bjets_n_ttbarcc__348->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_bjets_n_ttbarcc__348->GetXaxis()->SetTitleFont(43);
   c1lep4jin2bin_bjets_n_ttbarcc__348->GetYaxis()->SetLabelFont(43);
   c1lep4jin2bin_bjets_n_ttbarcc__348->GetYaxis()->SetLabelSize(21);
   c1lep4jin2bin_bjets_n_ttbarcc__348->GetYaxis()->SetTitleSize(21);
   c1lep4jin2bin_bjets_n_ttbarcc__348->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_bjets_n_ttbarcc__348->GetYaxis()->SetTitleFont(43);
   c1lep4jin2bin_bjets_n_ttbarcc__348->GetZaxis()->SetLabelFont(43);
   c1lep4jin2bin_bjets_n_ttbarcc__348->GetZaxis()->SetLabelSize(21);
   c1lep4jin2bin_bjets_n_ttbarcc__348->GetZaxis()->SetTitleSize(21);
   c1lep4jin2bin_bjets_n_ttbarcc__348->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jin2bin_bjets_n_ttbarcc,"");
   Double_t xAxis388[4] = {1.5, 2.5, 3.5, 4.5}; 
   
   TH1D *c1lep4jin2bin_bjets_n_ttbarlight__349 = new TH1D("c1lep4jin2bin_bjets_n_ttbarlight__349","",3, xAxis388);
   c1lep4jin2bin_bjets_n_ttbarlight__349->SetBinContent(1,670611.4);
   c1lep4jin2bin_bjets_n_ttbarlight__349->SetBinContent(2,9972.917);
   c1lep4jin2bin_bjets_n_ttbarlight__349->SetBinContent(3,37.30457);
   c1lep4jin2bin_bjets_n_ttbarlight__349->SetBinError(1,508.8377);
   c1lep4jin2bin_bjets_n_ttbarlight__349->SetBinError(2,74.0505);
   c1lep4jin2bin_bjets_n_ttbarlight__349->SetBinError(3,6.201672);
   c1lep4jin2bin_bjets_n_ttbarlight__349->SetEntries(2516401);
   c1lep4jin2bin_bjets_n_ttbarlight__349->SetDirectory(0);
   c1lep4jin2bin_bjets_n_ttbarlight__349->SetStats(0);
   c1lep4jin2bin_bjets_n_ttbarlight__349->SetMarkerStyle(20);
   c1lep4jin2bin_bjets_n_ttbarlight__349->SetMarkerSize(1.2);
   c1lep4jin2bin_bjets_n_ttbarlight__349->GetXaxis()->SetTitle("Number of b-jets");
   c1lep4jin2bin_bjets_n_ttbarlight__349->GetXaxis()->SetRange(1,9);
   c1lep4jin2bin_bjets_n_ttbarlight__349->GetXaxis()->SetLabelFont(43);
   c1lep4jin2bin_bjets_n_ttbarlight__349->GetXaxis()->SetLabelSize(21);
   c1lep4jin2bin_bjets_n_ttbarlight__349->GetXaxis()->SetTitleSize(21);
   c1lep4jin2bin_bjets_n_ttbarlight__349->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_bjets_n_ttbarlight__349->GetXaxis()->SetTitleFont(43);
   c1lep4jin2bin_bjets_n_ttbarlight__349->GetYaxis()->SetLabelFont(43);
   c1lep4jin2bin_bjets_n_ttbarlight__349->GetYaxis()->SetLabelSize(21);
   c1lep4jin2bin_bjets_n_ttbarlight__349->GetYaxis()->SetTitleSize(21);
   c1lep4jin2bin_bjets_n_ttbarlight__349->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_bjets_n_ttbarlight__349->GetYaxis()->SetTitleFont(43);
   c1lep4jin2bin_bjets_n_ttbarlight__349->GetZaxis()->SetLabelFont(43);
   c1lep4jin2bin_bjets_n_ttbarlight__349->GetZaxis()->SetLabelSize(21);
   c1lep4jin2bin_bjets_n_ttbarlight__349->GetZaxis()->SetTitleSize(21);
   c1lep4jin2bin_bjets_n_ttbarlight__349->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jin2bin_bjets_n_ttbarlight,"");
   Double_t xAxis389[4] = {1.5, 2.5, 3.5, 4.5}; 
   
   TH1D *c1lep4jin2bin_bjets_n_uHcW__350 = new TH1D("c1lep4jin2bin_bjets_n_uHcW__350","",3, xAxis389);
   c1lep4jin2bin_bjets_n_uHcW__350->SetBinContent(1,8593.285);
   c1lep4jin2bin_bjets_n_uHcW__350->SetBinContent(2,2961.981);
   c1lep4jin2bin_bjets_n_uHcW__350->SetBinContent(3,102.5842);
   c1lep4jin2bin_bjets_n_uHcW__350->SetBinContent(4,7.22262);
   c1lep4jin2bin_bjets_n_uHcW__350->SetBinError(1,95.4617);
   c1lep4jin2bin_bjets_n_uHcW__350->SetBinError(2,55.07152);
   c1lep4jin2bin_bjets_n_uHcW__350->SetBinError(3,10.74253);
   c1lep4jin2bin_bjets_n_uHcW__350->SetBinError(4,3.652714);
   c1lep4jin2bin_bjets_n_uHcW__350->SetEntries(70178);
   c1lep4jin2bin_bjets_n_uHcW__350->SetDirectory(0);
   c1lep4jin2bin_bjets_n_uHcW__350->SetStats(0);
   c1lep4jin2bin_bjets_n_uHcW__350->SetFillColor(2);
   c1lep4jin2bin_bjets_n_uHcW__350->SetLineColor(2);
   c1lep4jin2bin_bjets_n_uHcW__350->SetMarkerStyle(20);
   c1lep4jin2bin_bjets_n_uHcW__350->SetMarkerSize(1.2);
   c1lep4jin2bin_bjets_n_uHcW__350->GetXaxis()->SetTitle("Number of b-jets");
   c1lep4jin2bin_bjets_n_uHcW__350->GetXaxis()->SetRange(1,9);
   c1lep4jin2bin_bjets_n_uHcW__350->GetXaxis()->SetLabelFont(43);
   c1lep4jin2bin_bjets_n_uHcW__350->GetXaxis()->SetLabelSize(21);
   c1lep4jin2bin_bjets_n_uHcW__350->GetXaxis()->SetTitleSize(21);
   c1lep4jin2bin_bjets_n_uHcW__350->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_bjets_n_uHcW__350->GetXaxis()->SetTitleFont(43);
   c1lep4jin2bin_bjets_n_uHcW__350->GetYaxis()->SetLabelFont(43);
   c1lep4jin2bin_bjets_n_uHcW__350->GetYaxis()->SetLabelSize(21);
   c1lep4jin2bin_bjets_n_uHcW__350->GetYaxis()->SetTitleSize(21);
   c1lep4jin2bin_bjets_n_uHcW__350->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_bjets_n_uHcW__350->GetYaxis()->SetTitleFont(43);
   c1lep4jin2bin_bjets_n_uHcW__350->GetZaxis()->SetLabelFont(43);
   c1lep4jin2bin_bjets_n_uHcW__350->GetZaxis()->SetLabelSize(21);
   c1lep4jin2bin_bjets_n_uHcW__350->GetZaxis()->SetTitleSize(21);
   c1lep4jin2bin_bjets_n_uHcW__350->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jin2bin_bjets_n_uHcW,"");
   h_stack->Draw("hist same");
   
   Double_t g_totErr_fx3155[3] = {
   2,
   3,
   4};
   Double_t g_totErr_fy3155[3] = {
   902175,
   33827.73,
   1839.3};
   Double_t g_totErr_felx3155[3] = {
   0.5,
   0.5,
   0.5};
   Double_t g_totErr_fely3155[3] = {
   110584.4,
   5903.567,
   375.0083};
   Double_t g_totErr_fehx3155[3] = {
   0.5,
   0.5,
   0.5};
   Double_t g_totErr_fehy3155[3] = {
   110584.4,
   5903.567,
   375.0083};
   grae = new TGraphAsymmErrors(3,g_totErr_fx3155,g_totErr_fy3155,g_totErr_felx3155,g_totErr_fehx3155,g_totErr_fely3155,g_totErr_fehy3155);
   grae->SetName("g_totErr");
   grae->SetTitle("");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(3354);
   grae->SetLineColor(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0);
   
   TH1F *Graph_g_totErr3155 = new TH1F("Graph_g_totErr3155","",100,1.2,4.8);
   Graph_g_totErr3155->SetMinimum(0);
   Graph_g_totErr3155->SetMaximum(1113889);
   Graph_g_totErr3155->SetDirectory(0);
   Graph_g_totErr3155->SetStats(0);
   Graph_g_totErr3155->SetLineWidth(2);
   Graph_g_totErr3155->SetMarkerStyle(20);
   Graph_g_totErr3155->SetMarkerSize(1.2);
   Graph_g_totErr3155->GetXaxis()->SetLabelFont(43);
   Graph_g_totErr3155->GetXaxis()->SetLabelSize(21);
   Graph_g_totErr3155->GetXaxis()->SetTitleSize(21);
   Graph_g_totErr3155->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_totErr3155->GetXaxis()->SetTitleFont(43);
   Graph_g_totErr3155->GetYaxis()->SetLabelFont(43);
   Graph_g_totErr3155->GetYaxis()->SetLabelSize(21);
   Graph_g_totErr3155->GetYaxis()->SetTitleSize(21);
   Graph_g_totErr3155->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_totErr3155->GetYaxis()->SetTitleFont(43);
   Graph_g_totErr3155->GetZaxis()->SetLabelFont(43);
   Graph_g_totErr3155->GetZaxis()->SetLabelSize(21);
   Graph_g_totErr3155->GetZaxis()->SetTitleSize(21);
   Graph_g_totErr3155->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_totErr3155);
   
   grae->Draw("e2");
   
   Double_t Graph_from_c1lep4jin2bin_bjets_n_Data_fx3156[3] = {
   2,
   3,
   4};
   Double_t Graph_from_c1lep4jin2bin_bjets_n_Data_fy3156[3] = {
   859235,
   37859,
   1934};
   Double_t Graph_from_c1lep4jin2bin_bjets_n_Data_felx3156[3] = {
   0.499,
   0.499,
   0.499};
   Double_t Graph_from_c1lep4jin2bin_bjets_n_Data_fely3156[3] = {
   926.9493,
   194.5739,
   43.97727};
   Double_t Graph_from_c1lep4jin2bin_bjets_n_Data_fehx3156[3] = {
   0.5,
   0.5,
   0.5};
   Double_t Graph_from_c1lep4jin2bin_bjets_n_Data_fehy3156[3] = {
   926.9493,
   194.5739,
   43.97727};
   grae = new TGraphAsymmErrors(3,Graph_from_c1lep4jin2bin_bjets_n_Data_fx3156,Graph_from_c1lep4jin2bin_bjets_n_Data_fy3156,Graph_from_c1lep4jin2bin_bjets_n_Data_felx3156,Graph_from_c1lep4jin2bin_bjets_n_Data_fehx3156,Graph_from_c1lep4jin2bin_bjets_n_Data_fely3156,Graph_from_c1lep4jin2bin_bjets_n_Data_fehy3156);
   grae->SetName("Graph_from_c1lep4jin2bin_bjets_n_Data");
   grae->SetTitle("");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_c1lep4jin2bin_bjets_n_Data3156 = new TH1F("Graph_Graph_from_c1lep4jin2bin_bjets_n_Data3156","",100,1.2011,4.7999);
   Graph_Graph_from_c1lep4jin2bin_bjets_n_Data3156->SetMinimum(0);
   Graph_Graph_from_c1lep4jin2bin_bjets_n_Data3156->SetMaximum(945989.1);
   Graph_Graph_from_c1lep4jin2bin_bjets_n_Data3156->SetDirectory(0);
   Graph_Graph_from_c1lep4jin2bin_bjets_n_Data3156->SetStats(0);
   Graph_Graph_from_c1lep4jin2bin_bjets_n_Data3156->SetLineWidth(2);
   Graph_Graph_from_c1lep4jin2bin_bjets_n_Data3156->SetMarkerStyle(20);
   Graph_Graph_from_c1lep4jin2bin_bjets_n_Data3156->SetMarkerSize(1.2);
   Graph_Graph_from_c1lep4jin2bin_bjets_n_Data3156->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep4jin2bin_bjets_n_Data3156->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep4jin2bin_bjets_n_Data3156->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep4jin2bin_bjets_n_Data3156->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep4jin2bin_bjets_n_Data3156->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep4jin2bin_bjets_n_Data3156->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep4jin2bin_bjets_n_Data3156->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep4jin2bin_bjets_n_Data3156->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep4jin2bin_bjets_n_Data3156->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep4jin2bin_bjets_n_Data3156->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep4jin2bin_bjets_n_Data3156->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep4jin2bin_bjets_n_Data3156->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep4jin2bin_bjets_n_Data3156->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep4jin2bin_bjets_n_Data3156->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_c1lep4jin2bin_bjets_n_Data3156);
   
   grae->Draw("ep1 ");
   Double_t xAxis390[4] = {1.5, 2.5, 3.5, 4.5}; 
   
   TH1D *h_dummy_copy__351 = new TH1D("h_dummy_copy__351","",3, xAxis390);
   h_dummy_copy__351->SetEntries(1.123257e+07);
   h_dummy_copy__351->SetDirectory(0);
   h_dummy_copy__351->SetStats(0);
   h_dummy_copy__351->SetMarkerStyle(20);
   h_dummy_copy__351->SetMarkerSize(1.2);
   h_dummy_copy__351->GetXaxis()->SetTitle("N_{b}");
   h_dummy_copy__351->GetXaxis()->SetRange(1,9);
   h_dummy_copy__351->GetXaxis()->SetLabelFont(43);
   h_dummy_copy__351->GetXaxis()->SetLabelSize(21);
   h_dummy_copy__351->GetXaxis()->SetTitleSize(21);
   h_dummy_copy__351->GetXaxis()->SetTitleOffset(1.4);
   h_dummy_copy__351->GetXaxis()->SetTitleFont(43);
   h_dummy_copy__351->GetYaxis()->SetTitle("Events / 1");
   h_dummy_copy__351->GetYaxis()->SetLabelFont(43);
   h_dummy_copy__351->GetYaxis()->SetLabelSize(16.8);
   h_dummy_copy__351->GetYaxis()->SetTitleSize(21);
   h_dummy_copy__351->GetYaxis()->SetTitleOffset(2.4);
   h_dummy_copy__351->GetYaxis()->SetTitleFont(43);
   h_dummy_copy__351->GetZaxis()->SetLabelFont(43);
   h_dummy_copy__351->GetZaxis()->SetLabelSize(21);
   h_dummy_copy__351->GetZaxis()->SetTitleSize(21);
   h_dummy_copy__351->GetZaxis()->SetTitleFont(43);
   h_dummy_copy__351->Draw("sameaxis");
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
   TLegendEntry *entry=leg->AddEntry("c1lep4jin2bin_bjets_n_Data","Data","lep");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep4jin2bin_bjets_n_uHcW","t#bar{t}#rightarrowWbHc (BR=1%)","f");
   entry->SetFillColor(2);
   entry->SetFillStyle(1001);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep4jin2bin_bjets_n_ttbarlight","t#bar{t}+light","f");
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep4jin2bin_bjets_n_ttbarcc","t#bar{t}+cc","f");

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
   entry=leg->AddEntry("c1lep4jin2bin_bjets_n_ttbarbb","t#bar{t}+bb","f");

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
   entry=leg->AddEntry("c1lep4jin2bin_bjets_n_topEW","Non-t#bar{t}","f");

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
   c_c1lep4jin2bin_bjets_n->cd();
   c_c1lep4jin2bin_bjets_n->Modified();
   c_c1lep4jin2bin_bjets_n->cd();
   c_c1lep4jin2bin_bjets_n->SetSelected(c_c1lep4jin2bin_bjets_n);
}
