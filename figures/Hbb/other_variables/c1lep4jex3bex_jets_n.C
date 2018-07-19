void c1lep4jex3bex_jets_n()
{
//=========Macro generated from canvas: c_c1lep4jex3bex_jets_n/c_c1lep4jex3bex_jets_n
//=========  (Thu Jul 19 16:48:43 2018) by ROOT version6.04/14
   TCanvas *c_c1lep4jex3bex_jets_n = new TCanvas("c_c1lep4jex3bex_jets_n", "c_c1lep4jex3bex_jets_n",0,0,600,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c_c1lep4jex3bex_jets_n->SetHighLightColor(2);
   c_c1lep4jex3bex_jets_n->Range(0,0,1,1);
   c_c1lep4jex3bex_jets_n->SetFillColor(0);
   c_c1lep4jex3bex_jets_n->SetBorderMode(0);
   c_c1lep4jex3bex_jets_n->SetBorderSize(2);
   c_c1lep4jex3bex_jets_n->SetTickx(1);
   c_c1lep4jex3bex_jets_n->SetTicky(1);
   c_c1lep4jex3bex_jets_n->SetLeftMargin(0.16);
   c_c1lep4jex3bex_jets_n->SetRightMargin(0.05);
   c_c1lep4jex3bex_jets_n->SetTopMargin(0.05);
   c_c1lep4jex3bex_jets_n->SetBottomMargin(0.16);
   c_c1lep4jex3bex_jets_n->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0,1,0.28);
   pad1->Draw();
   pad1->cd();
   pad1->Range(2.808642,-0.0873016,7.746914,1.5);
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
   Double_t xAxis381[5] = {3.5, 4.5, 5.5, 6.5, 7.5}; 
   
   TH1D *h_dummy2__343 = new TH1D("h_dummy2__343","Data/MC",4, xAxis381);
   h_dummy2__343->SetMinimum(0.5);
   h_dummy2__343->SetMaximum(1.5);
   h_dummy2__343->SetEntries(2920990);
   h_dummy2__343->SetDirectory(0);
   h_dummy2__343->SetStats(0);
   h_dummy2__343->SetMarkerStyle(20);
   h_dummy2__343->SetMarkerSize(1.2);
   h_dummy2__343->GetXaxis()->SetTitle("N_{j}");
   h_dummy2__343->GetXaxis()->SetRange(1,18);
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
   
   Double_t Graph_from_h_ratio_fx3153[4] = {
   4,
   5,
   6,
   7};
   Double_t Graph_from_h_ratio_fy3153[4] = {
   1.114024,
   0,
   0,
   0};
   Double_t Graph_from_h_ratio_felx3153[4] = {
   0.499,
   0.499,
   0.499,
   0.499};
   Double_t Graph_from_h_ratio_fely3153[4] = {
   0.01049147,
   0,
   0,
   0};
   Double_t Graph_from_h_ratio_fehx3153[4] = {
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t Graph_from_h_ratio_fehy3153[4] = {
   0.01049147,
   0,
   0,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(4,Graph_from_h_ratio_fx3153,Graph_from_h_ratio_fy3153,Graph_from_h_ratio_felx3153,Graph_from_h_ratio_fehx3153,Graph_from_h_ratio_fely3153,Graph_from_h_ratio_fehy3153);
   grae->SetName("Graph_from_h_ratio");
   grae->SetTitle("");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(24);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_h_ratio3153 = new TH1F("Graph_Graph_from_h_ratio3153","",100,3.1011,7.8999);
   Graph_Graph_from_h_ratio3153->SetMinimum(0);
   Graph_Graph_from_h_ratio3153->SetMaximum(1.236967);
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
   TLine *line = new TLine(3.5,1,7.5,1);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t g_ratio2_fx3154[4] = {
   4,
   5,
   6,
   7};
   Double_t g_ratio2_fy3154[4] = {
   1,
   1,
   1,
   1};
   Double_t g_ratio2_felx3154[4] = {
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t g_ratio2_fely3154[4] = {
   0.1935532,
   4246442,
   4246442,
   4246442};
   Double_t g_ratio2_fehx3154[4] = {
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t g_ratio2_fehy3154[4] = {
   0.1935532,
   4246442,
   4246442,
   4246442};
   grae = new TGraphAsymmErrors(4,g_ratio2_fx3154,g_ratio2_fy3154,g_ratio2_felx3154,g_ratio2_fehx3154,g_ratio2_fely3154,g_ratio2_fehy3154);
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
   
   TH1F *Graph_g_ratio23154 = new TH1F("Graph_g_ratio23154","",100,3.1,7.9);
   Graph_g_ratio23154->SetMinimum(-5095729);
   Graph_g_ratio23154->SetMaximum(5095731);
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
   Double_t xAxis382[5] = {3.5, 4.5, 5.5, 6.5, 7.5}; 
   
   TH1D *h_dummy2_copy__344 = new TH1D("h_dummy2_copy__344","Data/MC",4, xAxis382);
   h_dummy2_copy__344->SetMinimum(0.5);
   h_dummy2_copy__344->SetMaximum(1.5);
   h_dummy2_copy__344->SetEntries(2920990);
   h_dummy2_copy__344->SetDirectory(0);
   h_dummy2_copy__344->SetStats(0);
   h_dummy2_copy__344->SetMarkerStyle(20);
   h_dummy2_copy__344->SetMarkerSize(1.2);
   h_dummy2_copy__344->GetXaxis()->SetTitle("N_{j}");
   h_dummy2_copy__344->GetXaxis()->SetRange(1,18);
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
   c_c1lep4jex3bex_jets_n->cd();
  
// ------------>Primitives in pad: pad0
   TPad *pad0 = new TPad("pad0", "pad0",0,0.2,1,1);
   pad0->Draw();
   pad0->cd();
   pad0->Range(2.808642,-2410.133,7.746914,21691.2);
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
   Double_t xAxis383[5] = {3.5, 4.5, 5.5, 6.5, 7.5}; 
   
   TH1D *h_dummy__345 = new TH1D("h_dummy__345","",4, xAxis383);
   h_dummy__345->SetMinimum(0);
   h_dummy__345->SetMaximum(20486.13);
   h_dummy__345->SetEntries(2920990);
   h_dummy__345->SetDirectory(0);
   h_dummy__345->SetStats(0);
   h_dummy__345->SetMarkerStyle(20);
   h_dummy__345->SetMarkerSize(1.2);
   h_dummy__345->GetXaxis()->SetRange(1,18);
   h_dummy__345->GetXaxis()->SetLabelFont(43);
   h_dummy__345->GetXaxis()->SetLabelSize(0);
   h_dummy__345->GetXaxis()->SetTitleSize(21);
   h_dummy__345->GetXaxis()->SetTitleOffset(1.4);
   h_dummy__345->GetXaxis()->SetTitleFont(43);
   h_dummy__345->GetYaxis()->SetTitle("Events");
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
   Double_t xAxis384[5] = {3.5, 4.5, 5.5, 6.5, 7.5}; 
   
   TH1F *h_stack_stack_39 = new TH1F("h_stack_stack_39","h_stack",4, xAxis384);
   h_stack_stack_39->SetMinimum(-48.14027);
   h_stack_stack_39->SetMaximum(11289.12);
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
   
   Double_t xAxis385[5] = {3.5, 4.5, 5.5, 6.5, 7.5}; 
   
   TH1D *c1lep4jex3bex_jets_n_topEW__346 = new TH1D("c1lep4jex3bex_jets_n_topEW__346","",4, xAxis385);
   c1lep4jex3bex_jets_n_topEW__346->SetBinContent(1,1835.133);
   c1lep4jex3bex_jets_n_topEW__346->SetBinContent(2,1.299997e-05);
   c1lep4jex3bex_jets_n_topEW__346->SetBinContent(3,1.299997e-05);
   c1lep4jex3bex_jets_n_topEW__346->SetBinContent(4,1.299997e-05);
   c1lep4jex3bex_jets_n_topEW__346->SetBinError(1,176.1324);
   c1lep4jex3bex_jets_n_topEW__346->SetBinError(2,24.38558);
   c1lep4jex3bex_jets_n_topEW__346->SetBinError(3,24.38558);
   c1lep4jex3bex_jets_n_topEW__346->SetBinError(4,24.38558);
   c1lep4jex3bex_jets_n_topEW__346->SetEntries(2895075);
   c1lep4jex3bex_jets_n_topEW__346->SetDirectory(0);
   c1lep4jex3bex_jets_n_topEW__346->SetStats(0);

   ci = TColor::GetColor("#66cc66");
   c1lep4jex3bex_jets_n_topEW__346->SetFillColor(ci);
   c1lep4jex3bex_jets_n_topEW__346->SetMarkerStyle(20);
   c1lep4jex3bex_jets_n_topEW__346->SetMarkerSize(1.2);
   c1lep4jex3bex_jets_n_topEW__346->GetXaxis()->SetTitle("Number of jets");
   c1lep4jex3bex_jets_n_topEW__346->GetXaxis()->SetRange(1,18);
   c1lep4jex3bex_jets_n_topEW__346->GetXaxis()->SetLabelFont(43);
   c1lep4jex3bex_jets_n_topEW__346->GetXaxis()->SetLabelSize(21);
   c1lep4jex3bex_jets_n_topEW__346->GetXaxis()->SetTitleSize(21);
   c1lep4jex3bex_jets_n_topEW__346->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_jets_n_topEW__346->GetXaxis()->SetTitleFont(43);
   c1lep4jex3bex_jets_n_topEW__346->GetYaxis()->SetLabelFont(43);
   c1lep4jex3bex_jets_n_topEW__346->GetYaxis()->SetLabelSize(21);
   c1lep4jex3bex_jets_n_topEW__346->GetYaxis()->SetTitleSize(21);
   c1lep4jex3bex_jets_n_topEW__346->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_jets_n_topEW__346->GetYaxis()->SetTitleFont(43);
   c1lep4jex3bex_jets_n_topEW__346->GetZaxis()->SetLabelFont(43);
   c1lep4jex3bex_jets_n_topEW__346->GetZaxis()->SetLabelSize(21);
   c1lep4jex3bex_jets_n_topEW__346->GetZaxis()->SetTitleSize(21);
   c1lep4jex3bex_jets_n_topEW__346->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jex3bex_jets_n_topEW,"");
   Double_t xAxis386[5] = {3.5, 4.5, 5.5, 6.5, 7.5}; 
   
   TH1D *c1lep4jex3bex_jets_n_ttbarbb__347 = new TH1D("c1lep4jex3bex_jets_n_ttbarbb__347","",4, xAxis386);
   c1lep4jex3bex_jets_n_ttbarbb__347->SetBinContent(1,2896.615);
   c1lep4jex3bex_jets_n_ttbarbb__347->SetBinContent(2,1e-06);
   c1lep4jex3bex_jets_n_ttbarbb__347->SetBinContent(3,1e-06);
   c1lep4jex3bex_jets_n_ttbarbb__347->SetBinContent(4,1e-06);
   c1lep4jex3bex_jets_n_ttbarbb__347->SetBinError(1,35.31256);
   c1lep4jex3bex_jets_n_ttbarbb__347->SetBinError(2,35.31256);
   c1lep4jex3bex_jets_n_ttbarbb__347->SetBinError(3,35.31256);
   c1lep4jex3bex_jets_n_ttbarbb__347->SetBinError(4,35.31256);
   c1lep4jex3bex_jets_n_ttbarbb__347->SetEntries(10169);
   c1lep4jex3bex_jets_n_ttbarbb__347->SetDirectory(0);
   c1lep4jex3bex_jets_n_ttbarbb__347->SetStats(0);

   ci = TColor::GetColor("#6666cc");
   c1lep4jex3bex_jets_n_ttbarbb__347->SetFillColor(ci);
   c1lep4jex3bex_jets_n_ttbarbb__347->SetMarkerStyle(20);
   c1lep4jex3bex_jets_n_ttbarbb__347->SetMarkerSize(1.2);
   c1lep4jex3bex_jets_n_ttbarbb__347->GetXaxis()->SetTitle("Number of jets");
   c1lep4jex3bex_jets_n_ttbarbb__347->GetXaxis()->SetRange(1,18);
   c1lep4jex3bex_jets_n_ttbarbb__347->GetXaxis()->SetLabelFont(43);
   c1lep4jex3bex_jets_n_ttbarbb__347->GetXaxis()->SetLabelSize(21);
   c1lep4jex3bex_jets_n_ttbarbb__347->GetXaxis()->SetTitleSize(21);
   c1lep4jex3bex_jets_n_ttbarbb__347->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_jets_n_ttbarbb__347->GetXaxis()->SetTitleFont(43);
   c1lep4jex3bex_jets_n_ttbarbb__347->GetYaxis()->SetLabelFont(43);
   c1lep4jex3bex_jets_n_ttbarbb__347->GetYaxis()->SetLabelSize(21);
   c1lep4jex3bex_jets_n_ttbarbb__347->GetYaxis()->SetTitleSize(21);
   c1lep4jex3bex_jets_n_ttbarbb__347->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_jets_n_ttbarbb__347->GetYaxis()->SetTitleFont(43);
   c1lep4jex3bex_jets_n_ttbarbb__347->GetZaxis()->SetLabelFont(43);
   c1lep4jex3bex_jets_n_ttbarbb__347->GetZaxis()->SetLabelSize(21);
   c1lep4jex3bex_jets_n_ttbarbb__347->GetZaxis()->SetTitleSize(21);
   c1lep4jex3bex_jets_n_ttbarbb__347->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jex3bex_jets_n_ttbarbb,"");
   Double_t xAxis387[5] = {3.5, 4.5, 5.5, 6.5, 7.5}; 
   
   TH1D *c1lep4jex3bex_jets_n_ttbarcc__348 = new TH1D("c1lep4jex3bex_jets_n_ttbarcc__348","",4, xAxis387);
   c1lep4jex3bex_jets_n_ttbarcc__348->SetBinContent(1,1052.65);
   c1lep4jex3bex_jets_n_ttbarcc__348->SetBinContent(2,1e-06);
   c1lep4jex3bex_jets_n_ttbarcc__348->SetBinContent(3,1e-06);
   c1lep4jex3bex_jets_n_ttbarcc__348->SetBinContent(4,1e-06);
   c1lep4jex3bex_jets_n_ttbarcc__348->SetBinError(1,21.38042);
   c1lep4jex3bex_jets_n_ttbarcc__348->SetBinError(2,21.38042);
   c1lep4jex3bex_jets_n_ttbarcc__348->SetBinError(3,21.38042);
   c1lep4jex3bex_jets_n_ttbarcc__348->SetBinError(4,21.38042);
   c1lep4jex3bex_jets_n_ttbarcc__348->SetEntries(3209);
   c1lep4jex3bex_jets_n_ttbarcc__348->SetDirectory(0);
   c1lep4jex3bex_jets_n_ttbarcc__348->SetStats(0);

   ci = TColor::GetColor("#ccccff");
   c1lep4jex3bex_jets_n_ttbarcc__348->SetFillColor(ci);
   c1lep4jex3bex_jets_n_ttbarcc__348->SetMarkerStyle(20);
   c1lep4jex3bex_jets_n_ttbarcc__348->SetMarkerSize(1.2);
   c1lep4jex3bex_jets_n_ttbarcc__348->GetXaxis()->SetTitle("Number of jets");
   c1lep4jex3bex_jets_n_ttbarcc__348->GetXaxis()->SetRange(1,18);
   c1lep4jex3bex_jets_n_ttbarcc__348->GetXaxis()->SetLabelFont(43);
   c1lep4jex3bex_jets_n_ttbarcc__348->GetXaxis()->SetLabelSize(21);
   c1lep4jex3bex_jets_n_ttbarcc__348->GetXaxis()->SetTitleSize(21);
   c1lep4jex3bex_jets_n_ttbarcc__348->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_jets_n_ttbarcc__348->GetXaxis()->SetTitleFont(43);
   c1lep4jex3bex_jets_n_ttbarcc__348->GetYaxis()->SetLabelFont(43);
   c1lep4jex3bex_jets_n_ttbarcc__348->GetYaxis()->SetLabelSize(21);
   c1lep4jex3bex_jets_n_ttbarcc__348->GetYaxis()->SetTitleSize(21);
   c1lep4jex3bex_jets_n_ttbarcc__348->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_jets_n_ttbarcc__348->GetYaxis()->SetTitleFont(43);
   c1lep4jex3bex_jets_n_ttbarcc__348->GetZaxis()->SetLabelFont(43);
   c1lep4jex3bex_jets_n_ttbarcc__348->GetZaxis()->SetLabelSize(21);
   c1lep4jex3bex_jets_n_ttbarcc__348->GetZaxis()->SetTitleSize(21);
   c1lep4jex3bex_jets_n_ttbarcc__348->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jex3bex_jets_n_ttbarcc,"");
   Double_t xAxis388[5] = {3.5, 4.5, 5.5, 6.5, 7.5}; 
   
   TH1D *c1lep4jex3bex_jets_n_ttbarlight__349 = new TH1D("c1lep4jex3bex_jets_n_ttbarlight__349","",4, xAxis388);
   c1lep4jex3bex_jets_n_ttbarlight__349->SetBinContent(1,4336.567);
   c1lep4jex3bex_jets_n_ttbarlight__349->SetBinContent(2,1e-06);
   c1lep4jex3bex_jets_n_ttbarlight__349->SetBinContent(3,1e-06);
   c1lep4jex3bex_jets_n_ttbarlight__349->SetBinContent(4,1e-06);
   c1lep4jex3bex_jets_n_ttbarlight__349->SetBinError(1,48.14027);
   c1lep4jex3bex_jets_n_ttbarlight__349->SetBinError(2,48.14027);
   c1lep4jex3bex_jets_n_ttbarlight__349->SetBinError(3,48.14027);
   c1lep4jex3bex_jets_n_ttbarlight__349->SetBinError(4,48.14027);
   c1lep4jex3bex_jets_n_ttbarlight__349->SetEntries(12533);
   c1lep4jex3bex_jets_n_ttbarlight__349->SetDirectory(0);
   c1lep4jex3bex_jets_n_ttbarlight__349->SetStats(0);
   c1lep4jex3bex_jets_n_ttbarlight__349->SetMarkerStyle(20);
   c1lep4jex3bex_jets_n_ttbarlight__349->SetMarkerSize(1.2);
   c1lep4jex3bex_jets_n_ttbarlight__349->GetXaxis()->SetTitle("Number of jets");
   c1lep4jex3bex_jets_n_ttbarlight__349->GetXaxis()->SetRange(1,18);
   c1lep4jex3bex_jets_n_ttbarlight__349->GetXaxis()->SetLabelFont(43);
   c1lep4jex3bex_jets_n_ttbarlight__349->GetXaxis()->SetLabelSize(21);
   c1lep4jex3bex_jets_n_ttbarlight__349->GetXaxis()->SetTitleSize(21);
   c1lep4jex3bex_jets_n_ttbarlight__349->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_jets_n_ttbarlight__349->GetXaxis()->SetTitleFont(43);
   c1lep4jex3bex_jets_n_ttbarlight__349->GetYaxis()->SetLabelFont(43);
   c1lep4jex3bex_jets_n_ttbarlight__349->GetYaxis()->SetLabelSize(21);
   c1lep4jex3bex_jets_n_ttbarlight__349->GetYaxis()->SetTitleSize(21);
   c1lep4jex3bex_jets_n_ttbarlight__349->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_jets_n_ttbarlight__349->GetYaxis()->SetTitleFont(43);
   c1lep4jex3bex_jets_n_ttbarlight__349->GetZaxis()->SetLabelFont(43);
   c1lep4jex3bex_jets_n_ttbarlight__349->GetZaxis()->SetLabelSize(21);
   c1lep4jex3bex_jets_n_ttbarlight__349->GetZaxis()->SetTitleSize(21);
   c1lep4jex3bex_jets_n_ttbarlight__349->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jex3bex_jets_n_ttbarlight,"");
   Double_t xAxis389[5] = {3.5, 4.5, 5.5, 6.5, 7.5}; 
   
   TH1D *c1lep4jex3bex_jets_n_uHcW__350 = new TH1D("c1lep4jex3bex_jets_n_uHcW__350","",4, xAxis389);
   c1lep4jex3bex_jets_n_uHcW__350->SetBinContent(1,630.5727);
   c1lep4jex3bex_jets_n_uHcW__350->SetBinError(1,16.35196);
   c1lep4jex3bex_jets_n_uHcW__350->SetEntries(5559);
   c1lep4jex3bex_jets_n_uHcW__350->SetDirectory(0);
   c1lep4jex3bex_jets_n_uHcW__350->SetStats(0);
   c1lep4jex3bex_jets_n_uHcW__350->SetFillColor(2);
   c1lep4jex3bex_jets_n_uHcW__350->SetLineColor(2);
   c1lep4jex3bex_jets_n_uHcW__350->SetMarkerStyle(20);
   c1lep4jex3bex_jets_n_uHcW__350->SetMarkerSize(1.2);
   c1lep4jex3bex_jets_n_uHcW__350->GetXaxis()->SetTitle("Number of jets");
   c1lep4jex3bex_jets_n_uHcW__350->GetXaxis()->SetRange(1,18);
   c1lep4jex3bex_jets_n_uHcW__350->GetXaxis()->SetLabelFont(43);
   c1lep4jex3bex_jets_n_uHcW__350->GetXaxis()->SetLabelSize(21);
   c1lep4jex3bex_jets_n_uHcW__350->GetXaxis()->SetTitleSize(21);
   c1lep4jex3bex_jets_n_uHcW__350->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_jets_n_uHcW__350->GetXaxis()->SetTitleFont(43);
   c1lep4jex3bex_jets_n_uHcW__350->GetYaxis()->SetLabelFont(43);
   c1lep4jex3bex_jets_n_uHcW__350->GetYaxis()->SetLabelSize(21);
   c1lep4jex3bex_jets_n_uHcW__350->GetYaxis()->SetTitleSize(21);
   c1lep4jex3bex_jets_n_uHcW__350->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_jets_n_uHcW__350->GetYaxis()->SetTitleFont(43);
   c1lep4jex3bex_jets_n_uHcW__350->GetZaxis()->SetLabelFont(43);
   c1lep4jex3bex_jets_n_uHcW__350->GetZaxis()->SetLabelSize(21);
   c1lep4jex3bex_jets_n_uHcW__350->GetZaxis()->SetTitleSize(21);
   c1lep4jex3bex_jets_n_uHcW__350->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jex3bex_jets_n_uHcW,"");
   h_stack->Draw("hist same");
   
   Double_t g_totErr_fx3155[4] = {
   4,
   5,
   6,
   7};
   Double_t g_totErr_fy3155[4] = {
   10120.97,
   1.599997e-05,
   1.599997e-05,
   1.599997e-05};
   Double_t g_totErr_felx3155[4] = {
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t g_totErr_fely3155[4] = {
   1958.946,
   67.94293,
   67.94293,
   67.94293};
   Double_t g_totErr_fehx3155[4] = {
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t g_totErr_fehy3155[4] = {
   1958.946,
   67.94293,
   67.94293,
   67.94293};
   grae = new TGraphAsymmErrors(4,g_totErr_fx3155,g_totErr_fy3155,g_totErr_felx3155,g_totErr_fehx3155,g_totErr_fely3155,g_totErr_fehy3155);
   grae->SetName("g_totErr");
   grae->SetTitle("");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(3354);
   grae->SetLineColor(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0);
   
   TH1F *Graph_g_totErr3155 = new TH1F("Graph_g_totErr3155","",100,3.1,7.9);
   Graph_g_totErr3155->SetMinimum(-1282.728);
   Graph_g_totErr3155->SetMaximum(13294.7);
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
   
   Double_t Graph_from_c1lep4jex3bex_jets_n_Data_fx3156[4] = {
   4,
   5,
   6,
   7};
   Double_t Graph_from_c1lep4jex3bex_jets_n_Data_fy3156[4] = {
   11275,
   0,
   0,
   0};
   Double_t Graph_from_c1lep4jex3bex_jets_n_Data_felx3156[4] = {
   0.499,
   0.499,
   0.499,
   0.499};
   Double_t Graph_from_c1lep4jex3bex_jets_n_Data_fely3156[4] = {
   106.1838,
   0,
   0,
   0};
   Double_t Graph_from_c1lep4jex3bex_jets_n_Data_fehx3156[4] = {
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t Graph_from_c1lep4jex3bex_jets_n_Data_fehy3156[4] = {
   106.1838,
   0,
   0,
   0};
   grae = new TGraphAsymmErrors(4,Graph_from_c1lep4jex3bex_jets_n_Data_fx3156,Graph_from_c1lep4jex3bex_jets_n_Data_fy3156,Graph_from_c1lep4jex3bex_jets_n_Data_felx3156,Graph_from_c1lep4jex3bex_jets_n_Data_fehx3156,Graph_from_c1lep4jex3bex_jets_n_Data_fely3156,Graph_from_c1lep4jex3bex_jets_n_Data_fehy3156);
   grae->SetName("Graph_from_c1lep4jex3bex_jets_n_Data");
   grae->SetTitle("");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_c1lep4jex3bex_jets_n_Data3156 = new TH1F("Graph_Graph_from_c1lep4jex3bex_jets_n_Data3156","",100,3.1011,7.8999);
   Graph_Graph_from_c1lep4jex3bex_jets_n_Data3156->SetMinimum(0);
   Graph_Graph_from_c1lep4jex3bex_jets_n_Data3156->SetMaximum(12519.3);
   Graph_Graph_from_c1lep4jex3bex_jets_n_Data3156->SetDirectory(0);
   Graph_Graph_from_c1lep4jex3bex_jets_n_Data3156->SetStats(0);
   Graph_Graph_from_c1lep4jex3bex_jets_n_Data3156->SetLineWidth(2);
   Graph_Graph_from_c1lep4jex3bex_jets_n_Data3156->SetMarkerStyle(20);
   Graph_Graph_from_c1lep4jex3bex_jets_n_Data3156->SetMarkerSize(1.2);
   Graph_Graph_from_c1lep4jex3bex_jets_n_Data3156->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep4jex3bex_jets_n_Data3156->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep4jex3bex_jets_n_Data3156->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep4jex3bex_jets_n_Data3156->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep4jex3bex_jets_n_Data3156->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep4jex3bex_jets_n_Data3156->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep4jex3bex_jets_n_Data3156->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep4jex3bex_jets_n_Data3156->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep4jex3bex_jets_n_Data3156->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep4jex3bex_jets_n_Data3156->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep4jex3bex_jets_n_Data3156->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep4jex3bex_jets_n_Data3156->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep4jex3bex_jets_n_Data3156->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep4jex3bex_jets_n_Data3156->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_c1lep4jex3bex_jets_n_Data3156);
   
   grae->Draw("ep1 ");
   Double_t xAxis390[5] = {3.5, 4.5, 5.5, 6.5, 7.5}; 
   
   TH1D *h_dummy_copy__351 = new TH1D("h_dummy_copy__351","",4, xAxis390);
   h_dummy_copy__351->SetEntries(2920990);
   h_dummy_copy__351->SetDirectory(0);
   h_dummy_copy__351->SetStats(0);
   h_dummy_copy__351->SetMarkerStyle(20);
   h_dummy_copy__351->SetMarkerSize(1.2);
   h_dummy_copy__351->GetXaxis()->SetTitle("N_{j}");
   h_dummy_copy__351->GetXaxis()->SetRange(1,18);
   h_dummy_copy__351->GetXaxis()->SetLabelFont(43);
   h_dummy_copy__351->GetXaxis()->SetLabelSize(21);
   h_dummy_copy__351->GetXaxis()->SetTitleSize(21);
   h_dummy_copy__351->GetXaxis()->SetTitleOffset(1.4);
   h_dummy_copy__351->GetXaxis()->SetTitleFont(43);
   h_dummy_copy__351->GetYaxis()->SetTitle("Events");
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
      tex = new TLatex(0.18,0.73,"4jex-3bex");
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
   TLegendEntry *entry=leg->AddEntry("c1lep4jex3bex_jets_n_Data","Data","lep");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep4jex3bex_jets_n_uHcW","t#rightarrow Hc","f");
   entry->SetFillColor(2);
   entry->SetFillStyle(1001);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep4jex3bex_jets_n_ttbarlight","t#bar{t}+light","f");
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep4jex3bex_jets_n_ttbarcc","t#bar{t}+cc","f");

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
   entry=leg->AddEntry("c1lep4jex3bex_jets_n_ttbarbb","t#bar{t}+bb","f");

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
   entry=leg->AddEntry("c1lep4jex3bex_jets_n_topEW","Non-t#bar{t}","f");

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
   c_c1lep4jex3bex_jets_n->cd();
   c_c1lep4jex3bex_jets_n->Modified();
   c_c1lep4jex3bex_jets_n->cd();
   c_c1lep4jex3bex_jets_n->SetSelected(c_c1lep4jex3bex_jets_n);
}
