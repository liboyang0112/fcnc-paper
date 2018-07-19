void c1lep6jin3bex_bjets_n()
{
//=========Macro generated from canvas: c_c1lep6jin3bex_bjets_n/c_c1lep6jin3bex_bjets_n
//=========  (Thu Jul 19 16:48:44 2018) by ROOT version6.04/14
   TCanvas *c_c1lep6jin3bex_bjets_n = new TCanvas("c_c1lep6jin3bex_bjets_n", "c_c1lep6jin3bex_bjets_n",0,0,600,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c_c1lep6jin3bex_bjets_n->SetHighLightColor(2);
   c_c1lep6jin3bex_bjets_n->Range(0,0,1,1);
   c_c1lep6jin3bex_bjets_n->SetFillColor(0);
   c_c1lep6jin3bex_bjets_n->SetBorderMode(0);
   c_c1lep6jin3bex_bjets_n->SetBorderSize(2);
   c_c1lep6jin3bex_bjets_n->SetTickx(1);
   c_c1lep6jin3bex_bjets_n->SetTicky(1);
   c_c1lep6jin3bex_bjets_n->SetLeftMargin(0.16);
   c_c1lep6jin3bex_bjets_n->SetRightMargin(0.05);
   c_c1lep6jin3bex_bjets_n->SetTopMargin(0.05);
   c_c1lep6jin3bex_bjets_n->SetBottomMargin(0.16);
   c_c1lep6jin3bex_bjets_n->SetFrameBorderMode(0);
  
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
   Double_t xAxis441[4] = {1.5, 2.5, 3.5, 4.5}; 
   
   TH1D *h_dummy2__397 = new TH1D("h_dummy2__397","Data/MC",3, xAxis441);
   h_dummy2__397->SetMinimum(0.5);
   h_dummy2__397->SetMaximum(1.5);
   h_dummy2__397->SetEntries(1164523);
   h_dummy2__397->SetDirectory(0);
   h_dummy2__397->SetStats(0);
   h_dummy2__397->SetMarkerStyle(20);
   h_dummy2__397->SetMarkerSize(1.2);
   h_dummy2__397->GetXaxis()->SetTitle("N_{b}");
   h_dummy2__397->GetXaxis()->SetRange(1,9);
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
   
   Double_t Graph_from_h_ratio_fx3177[3] = {
   2,
   3,
   4};
   Double_t Graph_from_h_ratio_fy3177[3] = {
   0,
   1.108697,
   0};
   Double_t Graph_from_h_ratio_felx3177[3] = {
   0.499,
   0.499,
   0.499};
   Double_t Graph_from_h_ratio_fely3177[3] = {
   0,
   0.00908982,
   0};
   Double_t Graph_from_h_ratio_fehx3177[3] = {
   0.5,
   0.5,
   0.5};
   Double_t Graph_from_h_ratio_fehy3177[3] = {
   0,
   0.00908982,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(3,Graph_from_h_ratio_fx3177,Graph_from_h_ratio_fy3177,Graph_from_h_ratio_felx3177,Graph_from_h_ratio_fehx3177,Graph_from_h_ratio_fely3177,Graph_from_h_ratio_fehy3177);
   grae->SetName("Graph_from_h_ratio");
   grae->SetTitle("");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(24);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_h_ratio3177 = new TH1F("Graph_Graph_from_h_ratio3177","",100,1.2011,4.7999);
   Graph_Graph_from_h_ratio3177->SetMinimum(0);
   Graph_Graph_from_h_ratio3177->SetMaximum(1.229566);
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
   TLine *line = new TLine(1.5,1,4.5,1);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t g_ratio2_fx3178[3] = {
   2,
   3,
   4};
   Double_t g_ratio2_fy3178[3] = {
   1,
   1,
   1};
   Double_t g_ratio2_felx3178[3] = {
   0.5,
   0.5,
   0.5};
   Double_t g_ratio2_fely3178[3] = {
   4725825,
   0.1921903,
   4725825};
   Double_t g_ratio2_fehx3178[3] = {
   0.5,
   0.5,
   0.5};
   Double_t g_ratio2_fehy3178[3] = {
   4725825,
   0.1921903,
   4725825};
   grae = new TGraphAsymmErrors(3,g_ratio2_fx3178,g_ratio2_fy3178,g_ratio2_felx3178,g_ratio2_fehx3178,g_ratio2_fely3178,g_ratio2_fehy3178);
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
   
   TH1F *Graph_g_ratio23178 = new TH1F("Graph_g_ratio23178","",100,1.2,4.8);
   Graph_g_ratio23178->SetMinimum(-5670989);
   Graph_g_ratio23178->SetMaximum(5670991);
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
   Double_t xAxis442[4] = {1.5, 2.5, 3.5, 4.5}; 
   
   TH1D *h_dummy2_copy__398 = new TH1D("h_dummy2_copy__398","Data/MC",3, xAxis442);
   h_dummy2_copy__398->SetMinimum(0.5);
   h_dummy2_copy__398->SetMaximum(1.5);
   h_dummy2_copy__398->SetEntries(1164523);
   h_dummy2_copy__398->SetDirectory(0);
   h_dummy2_copy__398->SetStats(0);
   h_dummy2_copy__398->SetMarkerStyle(20);
   h_dummy2_copy__398->SetMarkerSize(1.2);
   h_dummy2_copy__398->GetXaxis()->SetTitle("N_{b}");
   h_dummy2_copy__398->GetXaxis()->SetRange(1,9);
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
   c_c1lep6jin3bex_bjets_n->cd();
  
// ------------>Primitives in pad: pad0
   TPad *pad0 = new TPad("pad0", "pad0",0,0.2,1,1);
   pad0->Draw();
   pad0->cd();
   pad0->Range(0.9814815,-3176.253,4.685185,28586.27);
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
   Double_t xAxis443[4] = {1.5, 2.5, 3.5, 4.5}; 
   
   TH1D *h_dummy__399 = new TH1D("h_dummy__399","",3, xAxis443);
   h_dummy__399->SetMinimum(0);
   h_dummy__399->SetMaximum(26998.15);
   h_dummy__399->SetEntries(1164523);
   h_dummy__399->SetDirectory(0);
   h_dummy__399->SetStats(0);
   h_dummy__399->SetMarkerStyle(20);
   h_dummy__399->SetMarkerSize(1.2);
   h_dummy__399->GetXaxis()->SetRange(1,9);
   h_dummy__399->GetXaxis()->SetLabelFont(43);
   h_dummy__399->GetXaxis()->SetLabelSize(0);
   h_dummy__399->GetXaxis()->SetTitleSize(21);
   h_dummy__399->GetXaxis()->SetTitleOffset(1.4);
   h_dummy__399->GetXaxis()->SetTitleFont(43);
   h_dummy__399->GetYaxis()->SetTitle("Events");
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
   Double_t xAxis444[4] = {1.5, 2.5, 3.5, 4.5}; 
   
   TH1F *h_stack_stack_45 = new TH1F("h_stack_stack_45","h_stack",3, xAxis444);
   h_stack_stack_45->SetMinimum(-55.35741);
   h_stack_stack_45->SetMaximum(14451.12);
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
   
   Double_t xAxis445[4] = {1.5, 2.5, 3.5, 4.5}; 
   
   TH1D *c1lep6jin3bex_bjets_n_topEW__400 = new TH1D("c1lep6jin3bex_bjets_n_topEW__400","",3, xAxis445);
   c1lep6jin3bex_bjets_n_topEW__400->SetBinContent(1,1.3e-05);
   c1lep6jin3bex_bjets_n_topEW__400->SetBinContent(2,1872.078);
   c1lep6jin3bex_bjets_n_topEW__400->SetBinContent(3,1.3e-05);
   c1lep6jin3bex_bjets_n_topEW__400->SetBinError(1,19.05553);
   c1lep6jin3bex_bjets_n_topEW__400->SetBinError(2,160.006);
   c1lep6jin3bex_bjets_n_topEW__400->SetBinError(3,19.05553);
   c1lep6jin3bex_bjets_n_topEW__400->SetEntries(1125888);
   c1lep6jin3bex_bjets_n_topEW__400->SetDirectory(0);
   c1lep6jin3bex_bjets_n_topEW__400->SetStats(0);

   ci = TColor::GetColor("#66cc66");
   c1lep6jin3bex_bjets_n_topEW__400->SetFillColor(ci);
   c1lep6jin3bex_bjets_n_topEW__400->SetMarkerStyle(20);
   c1lep6jin3bex_bjets_n_topEW__400->SetMarkerSize(1.2);
   c1lep6jin3bex_bjets_n_topEW__400->GetXaxis()->SetTitle("Number of b-jets");
   c1lep6jin3bex_bjets_n_topEW__400->GetXaxis()->SetRange(1,9);
   c1lep6jin3bex_bjets_n_topEW__400->GetXaxis()->SetLabelFont(43);
   c1lep6jin3bex_bjets_n_topEW__400->GetXaxis()->SetLabelSize(21);
   c1lep6jin3bex_bjets_n_topEW__400->GetXaxis()->SetTitleSize(21);
   c1lep6jin3bex_bjets_n_topEW__400->GetXaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_bjets_n_topEW__400->GetXaxis()->SetTitleFont(43);
   c1lep6jin3bex_bjets_n_topEW__400->GetYaxis()->SetLabelFont(43);
   c1lep6jin3bex_bjets_n_topEW__400->GetYaxis()->SetLabelSize(21);
   c1lep6jin3bex_bjets_n_topEW__400->GetYaxis()->SetTitleSize(21);
   c1lep6jin3bex_bjets_n_topEW__400->GetYaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_bjets_n_topEW__400->GetYaxis()->SetTitleFont(43);
   c1lep6jin3bex_bjets_n_topEW__400->GetZaxis()->SetLabelFont(43);
   c1lep6jin3bex_bjets_n_topEW__400->GetZaxis()->SetLabelSize(21);
   c1lep6jin3bex_bjets_n_topEW__400->GetZaxis()->SetTitleSize(21);
   c1lep6jin3bex_bjets_n_topEW__400->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep6jin3bex_bjets_n_topEW,"");
   Double_t xAxis446[4] = {1.5, 2.5, 3.5, 4.5}; 
   
   TH1D *c1lep6jin3bex_bjets_n_ttbarbb__401 = new TH1D("c1lep6jin3bex_bjets_n_ttbarbb__401","",3, xAxis446);
   c1lep6jin3bex_bjets_n_ttbarbb__401->SetBinContent(1,1e-06);
   c1lep6jin3bex_bjets_n_ttbarbb__401->SetBinContent(2,7282.493);
   c1lep6jin3bex_bjets_n_ttbarbb__401->SetBinContent(3,1e-06);
   c1lep6jin3bex_bjets_n_ttbarbb__401->SetBinError(1,55.35741);
   c1lep6jin3bex_bjets_n_ttbarbb__401->SetBinError(2,55.35741);
   c1lep6jin3bex_bjets_n_ttbarbb__401->SetBinError(3,55.35741);
   c1lep6jin3bex_bjets_n_ttbarbb__401->SetEntries(26044);
   c1lep6jin3bex_bjets_n_ttbarbb__401->SetDirectory(0);
   c1lep6jin3bex_bjets_n_ttbarbb__401->SetStats(0);

   ci = TColor::GetColor("#6666cc");
   c1lep6jin3bex_bjets_n_ttbarbb__401->SetFillColor(ci);
   c1lep6jin3bex_bjets_n_ttbarbb__401->SetMarkerStyle(20);
   c1lep6jin3bex_bjets_n_ttbarbb__401->SetMarkerSize(1.2);
   c1lep6jin3bex_bjets_n_ttbarbb__401->GetXaxis()->SetTitle("Number of b-jets");
   c1lep6jin3bex_bjets_n_ttbarbb__401->GetXaxis()->SetRange(1,9);
   c1lep6jin3bex_bjets_n_ttbarbb__401->GetXaxis()->SetLabelFont(43);
   c1lep6jin3bex_bjets_n_ttbarbb__401->GetXaxis()->SetLabelSize(21);
   c1lep6jin3bex_bjets_n_ttbarbb__401->GetXaxis()->SetTitleSize(21);
   c1lep6jin3bex_bjets_n_ttbarbb__401->GetXaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_bjets_n_ttbarbb__401->GetXaxis()->SetTitleFont(43);
   c1lep6jin3bex_bjets_n_ttbarbb__401->GetYaxis()->SetLabelFont(43);
   c1lep6jin3bex_bjets_n_ttbarbb__401->GetYaxis()->SetLabelSize(21);
   c1lep6jin3bex_bjets_n_ttbarbb__401->GetYaxis()->SetTitleSize(21);
   c1lep6jin3bex_bjets_n_ttbarbb__401->GetYaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_bjets_n_ttbarbb__401->GetYaxis()->SetTitleFont(43);
   c1lep6jin3bex_bjets_n_ttbarbb__401->GetZaxis()->SetLabelFont(43);
   c1lep6jin3bex_bjets_n_ttbarbb__401->GetZaxis()->SetLabelSize(21);
   c1lep6jin3bex_bjets_n_ttbarbb__401->GetZaxis()->SetTitleSize(21);
   c1lep6jin3bex_bjets_n_ttbarbb__401->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep6jin3bex_bjets_n_ttbarbb,"");
   Double_t xAxis447[4] = {1.5, 2.5, 3.5, 4.5}; 
   
   TH1D *c1lep6jin3bex_bjets_n_ttbarcc__402 = new TH1D("c1lep6jin3bex_bjets_n_ttbarcc__402","",3, xAxis447);
   c1lep6jin3bex_bjets_n_ttbarcc__402->SetBinContent(1,1e-06);
   c1lep6jin3bex_bjets_n_ttbarcc__402->SetBinContent(2,1814.255);
   c1lep6jin3bex_bjets_n_ttbarcc__402->SetBinContent(3,1e-06);
   c1lep6jin3bex_bjets_n_ttbarcc__402->SetBinError(1,29.8612);
   c1lep6jin3bex_bjets_n_ttbarcc__402->SetBinError(2,29.8612);
   c1lep6jin3bex_bjets_n_ttbarcc__402->SetBinError(3,29.8612);
   c1lep6jin3bex_bjets_n_ttbarcc__402->SetEntries(5632);
   c1lep6jin3bex_bjets_n_ttbarcc__402->SetDirectory(0);
   c1lep6jin3bex_bjets_n_ttbarcc__402->SetStats(0);

   ci = TColor::GetColor("#ccccff");
   c1lep6jin3bex_bjets_n_ttbarcc__402->SetFillColor(ci);
   c1lep6jin3bex_bjets_n_ttbarcc__402->SetMarkerStyle(20);
   c1lep6jin3bex_bjets_n_ttbarcc__402->SetMarkerSize(1.2);
   c1lep6jin3bex_bjets_n_ttbarcc__402->GetXaxis()->SetTitle("Number of b-jets");
   c1lep6jin3bex_bjets_n_ttbarcc__402->GetXaxis()->SetRange(1,9);
   c1lep6jin3bex_bjets_n_ttbarcc__402->GetXaxis()->SetLabelFont(43);
   c1lep6jin3bex_bjets_n_ttbarcc__402->GetXaxis()->SetLabelSize(21);
   c1lep6jin3bex_bjets_n_ttbarcc__402->GetXaxis()->SetTitleSize(21);
   c1lep6jin3bex_bjets_n_ttbarcc__402->GetXaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_bjets_n_ttbarcc__402->GetXaxis()->SetTitleFont(43);
   c1lep6jin3bex_bjets_n_ttbarcc__402->GetYaxis()->SetLabelFont(43);
   c1lep6jin3bex_bjets_n_ttbarcc__402->GetYaxis()->SetLabelSize(21);
   c1lep6jin3bex_bjets_n_ttbarcc__402->GetYaxis()->SetTitleSize(21);
   c1lep6jin3bex_bjets_n_ttbarcc__402->GetYaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_bjets_n_ttbarcc__402->GetYaxis()->SetTitleFont(43);
   c1lep6jin3bex_bjets_n_ttbarcc__402->GetZaxis()->SetLabelFont(43);
   c1lep6jin3bex_bjets_n_ttbarcc__402->GetZaxis()->SetLabelSize(21);
   c1lep6jin3bex_bjets_n_ttbarcc__402->GetZaxis()->SetTitleSize(21);
   c1lep6jin3bex_bjets_n_ttbarcc__402->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep6jin3bex_bjets_n_ttbarcc,"");
   Double_t xAxis448[4] = {1.5, 2.5, 3.5, 4.5}; 
   
   TH1D *c1lep6jin3bex_bjets_n_ttbarlight__403 = new TH1D("c1lep6jin3bex_bjets_n_ttbarlight__403","",3, xAxis448);
   c1lep6jin3bex_bjets_n_ttbarlight__403->SetBinContent(1,1e-06);
   c1lep6jin3bex_bjets_n_ttbarlight__403->SetBinContent(2,2449.625);
   c1lep6jin3bex_bjets_n_ttbarlight__403->SetBinContent(3,1e-06);
   c1lep6jin3bex_bjets_n_ttbarlight__403->SetBinError(1,37.39127);
   c1lep6jin3bex_bjets_n_ttbarlight__403->SetBinError(2,37.39127);
   c1lep6jin3bex_bjets_n_ttbarlight__403->SetBinError(3,37.39127);
   c1lep6jin3bex_bjets_n_ttbarlight__403->SetEntries(6956);
   c1lep6jin3bex_bjets_n_ttbarlight__403->SetDirectory(0);
   c1lep6jin3bex_bjets_n_ttbarlight__403->SetStats(0);
   c1lep6jin3bex_bjets_n_ttbarlight__403->SetMarkerStyle(20);
   c1lep6jin3bex_bjets_n_ttbarlight__403->SetMarkerSize(1.2);
   c1lep6jin3bex_bjets_n_ttbarlight__403->GetXaxis()->SetTitle("Number of b-jets");
   c1lep6jin3bex_bjets_n_ttbarlight__403->GetXaxis()->SetRange(1,9);
   c1lep6jin3bex_bjets_n_ttbarlight__403->GetXaxis()->SetLabelFont(43);
   c1lep6jin3bex_bjets_n_ttbarlight__403->GetXaxis()->SetLabelSize(21);
   c1lep6jin3bex_bjets_n_ttbarlight__403->GetXaxis()->SetTitleSize(21);
   c1lep6jin3bex_bjets_n_ttbarlight__403->GetXaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_bjets_n_ttbarlight__403->GetXaxis()->SetTitleFont(43);
   c1lep6jin3bex_bjets_n_ttbarlight__403->GetYaxis()->SetLabelFont(43);
   c1lep6jin3bex_bjets_n_ttbarlight__403->GetYaxis()->SetLabelSize(21);
   c1lep6jin3bex_bjets_n_ttbarlight__403->GetYaxis()->SetTitleSize(21);
   c1lep6jin3bex_bjets_n_ttbarlight__403->GetYaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_bjets_n_ttbarlight__403->GetYaxis()->SetTitleFont(43);
   c1lep6jin3bex_bjets_n_ttbarlight__403->GetZaxis()->SetLabelFont(43);
   c1lep6jin3bex_bjets_n_ttbarlight__403->GetZaxis()->SetLabelSize(21);
   c1lep6jin3bex_bjets_n_ttbarlight__403->GetZaxis()->SetTitleSize(21);
   c1lep6jin3bex_bjets_n_ttbarlight__403->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep6jin3bex_bjets_n_ttbarlight,"");
   Double_t xAxis449[4] = {1.5, 2.5, 3.5, 4.5}; 
   
   TH1D *c1lep6jin3bex_bjets_n_uHcW__404 = new TH1D("c1lep6jin3bex_bjets_n_uHcW__404","",3, xAxis449);
   c1lep6jin3bex_bjets_n_uHcW__404->SetBinContent(2,344.5163);
   c1lep6jin3bex_bjets_n_uHcW__404->SetBinError(2,15.76266);
   c1lep6jin3bex_bjets_n_uHcW__404->SetEntries(5540);
   c1lep6jin3bex_bjets_n_uHcW__404->SetDirectory(0);
   c1lep6jin3bex_bjets_n_uHcW__404->SetStats(0);
   c1lep6jin3bex_bjets_n_uHcW__404->SetFillColor(2);
   c1lep6jin3bex_bjets_n_uHcW__404->SetLineColor(2);
   c1lep6jin3bex_bjets_n_uHcW__404->SetMarkerStyle(20);
   c1lep6jin3bex_bjets_n_uHcW__404->SetMarkerSize(1.2);
   c1lep6jin3bex_bjets_n_uHcW__404->GetXaxis()->SetTitle("Number of b-jets");
   c1lep6jin3bex_bjets_n_uHcW__404->GetXaxis()->SetRange(1,9);
   c1lep6jin3bex_bjets_n_uHcW__404->GetXaxis()->SetLabelFont(43);
   c1lep6jin3bex_bjets_n_uHcW__404->GetXaxis()->SetLabelSize(21);
   c1lep6jin3bex_bjets_n_uHcW__404->GetXaxis()->SetTitleSize(21);
   c1lep6jin3bex_bjets_n_uHcW__404->GetXaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_bjets_n_uHcW__404->GetXaxis()->SetTitleFont(43);
   c1lep6jin3bex_bjets_n_uHcW__404->GetYaxis()->SetLabelFont(43);
   c1lep6jin3bex_bjets_n_uHcW__404->GetYaxis()->SetLabelSize(21);
   c1lep6jin3bex_bjets_n_uHcW__404->GetYaxis()->SetTitleSize(21);
   c1lep6jin3bex_bjets_n_uHcW__404->GetYaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_bjets_n_uHcW__404->GetYaxis()->SetTitleFont(43);
   c1lep6jin3bex_bjets_n_uHcW__404->GetZaxis()->SetLabelFont(43);
   c1lep6jin3bex_bjets_n_uHcW__404->GetZaxis()->SetLabelSize(21);
   c1lep6jin3bex_bjets_n_uHcW__404->GetZaxis()->SetTitleSize(21);
   c1lep6jin3bex_bjets_n_uHcW__404->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep6jin3bex_bjets_n_uHcW,"");
   h_stack->Draw("hist same");
   
   Double_t g_totErr_fx3179[3] = {
   2,
   3,
   4};
   Double_t g_totErr_fy3179[3] = {
   1.6e-05,
   13418.45,
   1.6e-05};
   Double_t g_totErr_felx3179[3] = {
   0.5,
   0.5,
   0.5};
   Double_t g_totErr_fely3179[3] = {
   75.61319,
   2578.896,
   75.61319};
   Double_t g_totErr_fehx3179[3] = {
   0.5,
   0.5,
   0.5};
   Double_t g_totErr_fehy3179[3] = {
   75.61319,
   2578.896,
   75.61319};
   grae = new TGraphAsymmErrors(3,g_totErr_fx3179,g_totErr_fy3179,g_totErr_felx3179,g_totErr_fehx3179,g_totErr_fely3179,g_totErr_fehy3179);
   grae->SetName("g_totErr");
   grae->SetTitle("");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(3354);
   grae->SetLineColor(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0);
   
   TH1F *Graph_g_totErr3179 = new TH1F("Graph_g_totErr3179","",100,1.2,4.8);
   Graph_g_totErr3179->SetMinimum(-1682.909);
   Graph_g_totErr3179->SetMaximum(17604.64);
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
   
   Double_t Graph_from_c1lep6jin3bex_bjets_n_Data_fx3180[3] = {
   2,
   3,
   4};
   Double_t Graph_from_c1lep6jin3bex_bjets_n_Data_fy3180[3] = {
   0,
   14877,
   0};
   Double_t Graph_from_c1lep6jin3bex_bjets_n_Data_felx3180[3] = {
   0.499,
   0.499,
   0.499};
   Double_t Graph_from_c1lep6jin3bex_bjets_n_Data_fely3180[3] = {
   0,
   121.9713,
   0};
   Double_t Graph_from_c1lep6jin3bex_bjets_n_Data_fehx3180[3] = {
   0.5,
   0.5,
   0.5};
   Double_t Graph_from_c1lep6jin3bex_bjets_n_Data_fehy3180[3] = {
   0,
   121.9713,
   0};
   grae = new TGraphAsymmErrors(3,Graph_from_c1lep6jin3bex_bjets_n_Data_fx3180,Graph_from_c1lep6jin3bex_bjets_n_Data_fy3180,Graph_from_c1lep6jin3bex_bjets_n_Data_felx3180,Graph_from_c1lep6jin3bex_bjets_n_Data_fehx3180,Graph_from_c1lep6jin3bex_bjets_n_Data_fely3180,Graph_from_c1lep6jin3bex_bjets_n_Data_fehy3180);
   grae->SetName("Graph_from_c1lep6jin3bex_bjets_n_Data");
   grae->SetTitle("");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_c1lep6jin3bex_bjets_n_Data3180 = new TH1F("Graph_Graph_from_c1lep6jin3bex_bjets_n_Data3180","",100,1.2011,4.7999);
   Graph_Graph_from_c1lep6jin3bex_bjets_n_Data3180->SetMinimum(0);
   Graph_Graph_from_c1lep6jin3bex_bjets_n_Data3180->SetMaximum(16498.87);
   Graph_Graph_from_c1lep6jin3bex_bjets_n_Data3180->SetDirectory(0);
   Graph_Graph_from_c1lep6jin3bex_bjets_n_Data3180->SetStats(0);
   Graph_Graph_from_c1lep6jin3bex_bjets_n_Data3180->SetLineWidth(2);
   Graph_Graph_from_c1lep6jin3bex_bjets_n_Data3180->SetMarkerStyle(20);
   Graph_Graph_from_c1lep6jin3bex_bjets_n_Data3180->SetMarkerSize(1.2);
   Graph_Graph_from_c1lep6jin3bex_bjets_n_Data3180->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep6jin3bex_bjets_n_Data3180->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep6jin3bex_bjets_n_Data3180->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep6jin3bex_bjets_n_Data3180->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep6jin3bex_bjets_n_Data3180->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep6jin3bex_bjets_n_Data3180->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep6jin3bex_bjets_n_Data3180->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep6jin3bex_bjets_n_Data3180->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep6jin3bex_bjets_n_Data3180->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep6jin3bex_bjets_n_Data3180->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep6jin3bex_bjets_n_Data3180->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep6jin3bex_bjets_n_Data3180->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep6jin3bex_bjets_n_Data3180->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep6jin3bex_bjets_n_Data3180->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_c1lep6jin3bex_bjets_n_Data3180);
   
   grae->Draw("ep1 ");
   Double_t xAxis450[4] = {1.5, 2.5, 3.5, 4.5}; 
   
   TH1D *h_dummy_copy__405 = new TH1D("h_dummy_copy__405","",3, xAxis450);
   h_dummy_copy__405->SetEntries(1164523);
   h_dummy_copy__405->SetDirectory(0);
   h_dummy_copy__405->SetStats(0);
   h_dummy_copy__405->SetMarkerStyle(20);
   h_dummy_copy__405->SetMarkerSize(1.2);
   h_dummy_copy__405->GetXaxis()->SetTitle("N_{b}");
   h_dummy_copy__405->GetXaxis()->SetRange(1,9);
   h_dummy_copy__405->GetXaxis()->SetLabelFont(43);
   h_dummy_copy__405->GetXaxis()->SetLabelSize(21);
   h_dummy_copy__405->GetXaxis()->SetTitleSize(21);
   h_dummy_copy__405->GetXaxis()->SetTitleOffset(1.4);
   h_dummy_copy__405->GetXaxis()->SetTitleFont(43);
   h_dummy_copy__405->GetYaxis()->SetTitle("Events");
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
      tex = new TLatex(0.18,0.73,"6jin-3bex");
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
   TLegendEntry *entry=leg->AddEntry("c1lep6jin3bex_bjets_n_Data","Data","lep");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep6jin3bex_bjets_n_uHcW","t#rightarrow Hc","f");
   entry->SetFillColor(2);
   entry->SetFillStyle(1001);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep6jin3bex_bjets_n_ttbarlight","t#bar{t}+light","f");
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep6jin3bex_bjets_n_ttbarcc","t#bar{t}+cc","f");

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
   entry=leg->AddEntry("c1lep6jin3bex_bjets_n_ttbarbb","t#bar{t}+bb","f");

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
   entry=leg->AddEntry("c1lep6jin3bex_bjets_n_topEW","Non-t#bar{t}","f");

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
   c_c1lep6jin3bex_bjets_n->cd();
   c_c1lep6jin3bex_bjets_n->Modified();
   c_c1lep6jin3bex_bjets_n->cd();
   c_c1lep6jin3bex_bjets_n->SetSelected(c_c1lep6jin3bex_bjets_n);
}
