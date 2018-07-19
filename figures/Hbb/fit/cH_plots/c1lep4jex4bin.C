void c1lep4jex4bin()
{
//=========Macro generated from canvas: c_c1lep4jex4bin/c_c1lep4jex4bin
//=========  (Thu Jul 19 23:20:13 2018) by ROOT version6.04/14
   TCanvas *c_c1lep4jex4bin = new TCanvas("c_c1lep4jex4bin", "c_c1lep4jex4bin",0,0,600,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c_c1lep4jex4bin->SetHighLightColor(2);
   c_c1lep4jex4bin->Range(0,0,1,1);
   c_c1lep4jex4bin->SetFillColor(0);
   c_c1lep4jex4bin->SetBorderMode(0);
   c_c1lep4jex4bin->SetBorderSize(2);
   c_c1lep4jex4bin->SetTickx(1);
   c_c1lep4jex4bin->SetTicky(1);
   c_c1lep4jex4bin->SetLeftMargin(0.16);
   c_c1lep4jex4bin->SetRightMargin(0.05);
   c_c1lep4jex4bin->SetTopMargin(0.05);
   c_c1lep4jex4bin->SetBottomMargin(0.16);
   c_c1lep4jex4bin->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0,1,0.28);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-0.1728395,-0.0873016,1.061728,1.5);
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
   Double_t xAxis21[3] = {0, 0.5, 1}; 
   
   TH1D *h_dummy2__19 = new TH1D("h_dummy2__19","Data/MC",2, xAxis21);
   h_dummy2__19->SetMinimum(0.5);
   h_dummy2__19->SetMaximum(1.5);
   h_dummy2__19->SetEntries(2821709);
   h_dummy2__19->SetDirectory(0);
   h_dummy2__19->SetStats(0);
   h_dummy2__19->SetMarkerStyle(20);
   h_dummy2__19->SetMarkerSize(1.2);
   h_dummy2__19->GetXaxis()->SetTitle("LH discriminant");
   h_dummy2__19->GetXaxis()->SetRange(1,20);
   h_dummy2__19->GetXaxis()->SetLabelFont(43);
   h_dummy2__19->GetXaxis()->SetLabelOffset(0.025);
   h_dummy2__19->GetXaxis()->SetLabelSize(16.8);
   h_dummy2__19->GetXaxis()->SetTitleSize(21);
   h_dummy2__19->GetXaxis()->SetTitleOffset(5.05);
   h_dummy2__19->GetXaxis()->SetTitleFont(43);
   h_dummy2__19->GetYaxis()->SetTitle("Data / Bkg");
   h_dummy2__19->GetYaxis()->SetNdivisions(-504);
   h_dummy2__19->GetYaxis()->SetLabelFont(43);
   h_dummy2__19->GetYaxis()->SetLabelOffset(0.02);
   h_dummy2__19->GetYaxis()->SetLabelSize(16.8);
   h_dummy2__19->GetYaxis()->SetTitleSize(21);
   h_dummy2__19->GetYaxis()->SetTitleOffset(2.4);
   h_dummy2__19->GetYaxis()->SetTitleFont(43);
   h_dummy2__19->GetZaxis()->SetLabelFont(43);
   h_dummy2__19->GetZaxis()->SetLabelSize(21);
   h_dummy2__19->GetZaxis()->SetTitleSize(21);
   h_dummy2__19->GetZaxis()->SetTitleFont(43);
   h_dummy2__19->Draw("HIST");
   
   Double_t Graph_from_h_ratio_fx3009[2] = {
   0.25,
   0.75};
   Double_t Graph_from_h_ratio_fy3009[2] = {
   1.069758,
   1.118328};
   Double_t Graph_from_h_ratio_felx3009[2] = {
   0.2495,
   0.2495};
   Double_t Graph_from_h_ratio_fely3009[2] = {
   0.1029375,
   0.1356172};
   Double_t Graph_from_h_ratio_fehx3009[2] = {
   0.25,
   0.25};
   Double_t Graph_from_h_ratio_fehy3009[2] = {
   0.1029375,
   0.1356172};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(2,Graph_from_h_ratio_fx3009,Graph_from_h_ratio_fy3009,Graph_from_h_ratio_felx3009,Graph_from_h_ratio_fehx3009,Graph_from_h_ratio_fely3009,Graph_from_h_ratio_fehy3009);
   grae->SetName("Graph_from_h_ratio");
   grae->SetTitle("FcncDiscriminant");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(24);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_h_ratio3009 = new TH1F("Graph_Graph_from_h_ratio3009","FcncDiscriminant",100,0,1.09995);
   Graph_Graph_from_h_ratio3009->SetMinimum(0.9381079);
   Graph_Graph_from_h_ratio3009->SetMaximum(1.282658);
   Graph_Graph_from_h_ratio3009->SetDirectory(0);
   Graph_Graph_from_h_ratio3009->SetStats(0);
   Graph_Graph_from_h_ratio3009->SetLineWidth(2);
   Graph_Graph_from_h_ratio3009->SetMarkerStyle(20);
   Graph_Graph_from_h_ratio3009->SetMarkerSize(1.2);
   Graph_Graph_from_h_ratio3009->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3009->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3009->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3009->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3009->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3009->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3009->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3009->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3009->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3009->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3009->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3009->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3009->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3009->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_h_ratio3009);
   
   grae->Draw("pe0");
   TLine *line = new TLine(0,1,1,1);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t g_ratio2_fx3010[2] = {
   0.25,
   0.75};
   Double_t g_ratio2_fy3010[2] = {
   1,
   1};
   Double_t g_ratio2_felx3010[2] = {
   0.25,
   0.25};
   Double_t g_ratio2_fely3010[2] = {
   0.2748883,
   0.3242168};
   Double_t g_ratio2_fehx3010[2] = {
   0.25,
   0.25};
   Double_t g_ratio2_fehy3010[2] = {
   0.2748883,
   0.3242168};
   grae = new TGraphAsymmErrors(2,g_ratio2_fx3010,g_ratio2_fy3010,g_ratio2_felx3010,g_ratio2_fehx3010,g_ratio2_fely3010,g_ratio2_fehy3010);
   grae->SetName("g_ratio2");
   grae->SetTitle("FcncDiscriminant");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(3354);
   grae->SetLineColor(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0);
   
   TH1F *Graph_g_ratio23010 = new TH1F("Graph_g_ratio23010","FcncDiscriminant",100,0,1.1);
   Graph_g_ratio23010->SetMinimum(0.6109398);
   Graph_g_ratio23010->SetMaximum(1.38906);
   Graph_g_ratio23010->SetDirectory(0);
   Graph_g_ratio23010->SetStats(0);
   Graph_g_ratio23010->SetLineWidth(2);
   Graph_g_ratio23010->SetMarkerStyle(20);
   Graph_g_ratio23010->SetMarkerSize(1.2);
   Graph_g_ratio23010->GetXaxis()->SetLabelFont(43);
   Graph_g_ratio23010->GetXaxis()->SetLabelSize(21);
   Graph_g_ratio23010->GetXaxis()->SetTitleSize(21);
   Graph_g_ratio23010->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23010->GetXaxis()->SetTitleFont(43);
   Graph_g_ratio23010->GetYaxis()->SetLabelFont(43);
   Graph_g_ratio23010->GetYaxis()->SetLabelSize(21);
   Graph_g_ratio23010->GetYaxis()->SetTitleSize(21);
   Graph_g_ratio23010->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23010->GetYaxis()->SetTitleFont(43);
   Graph_g_ratio23010->GetZaxis()->SetLabelFont(43);
   Graph_g_ratio23010->GetZaxis()->SetLabelSize(21);
   Graph_g_ratio23010->GetZaxis()->SetTitleSize(21);
   Graph_g_ratio23010->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_ratio23010);
   
   grae->Draw("e2");
   Double_t xAxis22[3] = {0, 0.5, 1}; 
   
   TH1D *h_dummy2_copy__20 = new TH1D("h_dummy2_copy__20","Data/MC",2, xAxis22);
   h_dummy2_copy__20->SetMinimum(0.5);
   h_dummy2_copy__20->SetMaximum(1.5);
   h_dummy2_copy__20->SetEntries(2821709);
   h_dummy2_copy__20->SetDirectory(0);
   h_dummy2_copy__20->SetStats(0);
   h_dummy2_copy__20->SetMarkerStyle(20);
   h_dummy2_copy__20->SetMarkerSize(1.2);
   h_dummy2_copy__20->GetXaxis()->SetTitle("LH discriminant");
   h_dummy2_copy__20->GetXaxis()->SetRange(1,20);
   h_dummy2_copy__20->GetXaxis()->SetLabelFont(43);
   h_dummy2_copy__20->GetXaxis()->SetLabelOffset(0.025);
   h_dummy2_copy__20->GetXaxis()->SetLabelSize(16.8);
   h_dummy2_copy__20->GetXaxis()->SetTitleSize(21);
   h_dummy2_copy__20->GetXaxis()->SetTitleOffset(5.05);
   h_dummy2_copy__20->GetXaxis()->SetTitleFont(43);
   h_dummy2_copy__20->GetYaxis()->SetTitle("Data / Bkg");
   h_dummy2_copy__20->GetYaxis()->SetNdivisions(-504);
   h_dummy2_copy__20->GetYaxis()->SetLabelFont(43);
   h_dummy2_copy__20->GetYaxis()->SetLabelOffset(0.02);
   h_dummy2_copy__20->GetYaxis()->SetLabelSize(16.8);
   h_dummy2_copy__20->GetYaxis()->SetTitleSize(21);
   h_dummy2_copy__20->GetYaxis()->SetTitleOffset(2.4);
   h_dummy2_copy__20->GetYaxis()->SetTitleFont(43);
   h_dummy2_copy__20->GetZaxis()->SetLabelFont(43);
   h_dummy2_copy__20->GetZaxis()->SetLabelSize(21);
   h_dummy2_copy__20->GetZaxis()->SetTitleSize(21);
   h_dummy2_copy__20->GetZaxis()->SetTitleFont(43);
   h_dummy2_copy__20->Draw("sameaxis");
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
   c_c1lep4jex4bin->cd();
  
// ------------>Primitives in pad: pad0
   TPad *pad0 = new TPad("pad0", "pad0",0,0.2,1,1);
   pad0->Draw();
   pad0->cd();
   pad0->Range(-0.1728395,-25.07131,1.061728,225.6418);
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
   Double_t xAxis23[3] = {0, 0.5, 1}; 
   
   TH1D *h_dummy__21 = new TH1D("h_dummy__21","FcncDiscriminant",2, xAxis23);
   h_dummy__21->SetMinimum(0);
   h_dummy__21->SetMaximum(213.1061);
   h_dummy__21->SetEntries(2821709);
   h_dummy__21->SetDirectory(0);
   h_dummy__21->SetStats(0);
   h_dummy__21->SetMarkerStyle(20);
   h_dummy__21->SetMarkerSize(1.2);
   h_dummy__21->GetXaxis()->SetRange(1,20);
   h_dummy__21->GetXaxis()->SetLabelFont(43);
   h_dummy__21->GetXaxis()->SetLabelSize(0);
   h_dummy__21->GetXaxis()->SetTitleSize(21);
   h_dummy__21->GetXaxis()->SetTitleOffset(1.4);
   h_dummy__21->GetXaxis()->SetTitleFont(43);
   h_dummy__21->GetYaxis()->SetTitle("Events / 0.5");
   h_dummy__21->GetYaxis()->SetLabelFont(43);
   h_dummy__21->GetYaxis()->SetLabelSize(16.8);
   h_dummy__21->GetYaxis()->SetTitleSize(21);
   h_dummy__21->GetYaxis()->SetTitleOffset(2.4);
   h_dummy__21->GetYaxis()->SetTitleFont(43);
   h_dummy__21->GetZaxis()->SetLabelFont(43);
   h_dummy__21->GetZaxis()->SetLabelSize(21);
   h_dummy__21->GetZaxis()->SetTitleSize(21);
   h_dummy__21->GetZaxis()->SetTitleFont(43);
   h_dummy__21->Draw("HIST");
   
   THStack *h_stack = new THStack();
   h_stack->SetName("h_stack");
   h_stack->SetTitle("h_stack");
   Double_t xAxis24[3] = {0, 0.5, 1}; 
   
   TH1F *h_stack_stack_3 = new TH1F("h_stack_stack_3","h_stack",2, xAxis24);
   h_stack_stack_3->SetMinimum(0);
   h_stack_stack_3->SetMaximum(109.3265);
   h_stack_stack_3->SetDirectory(0);
   h_stack_stack_3->SetStats(0);
   h_stack_stack_3->SetLineWidth(2);
   h_stack_stack_3->SetMarkerStyle(20);
   h_stack_stack_3->SetMarkerSize(1.2);
   h_stack_stack_3->GetXaxis()->SetLabelFont(43);
   h_stack_stack_3->GetXaxis()->SetLabelSize(21);
   h_stack_stack_3->GetXaxis()->SetTitleSize(21);
   h_stack_stack_3->GetXaxis()->SetTitleOffset(1.4);
   h_stack_stack_3->GetXaxis()->SetTitleFont(43);
   h_stack_stack_3->GetYaxis()->SetLabelFont(43);
   h_stack_stack_3->GetYaxis()->SetLabelSize(21);
   h_stack_stack_3->GetYaxis()->SetTitleSize(21);
   h_stack_stack_3->GetYaxis()->SetTitleOffset(1.4);
   h_stack_stack_3->GetYaxis()->SetTitleFont(43);
   h_stack_stack_3->GetZaxis()->SetLabelFont(43);
   h_stack_stack_3->GetZaxis()->SetLabelSize(21);
   h_stack_stack_3->GetZaxis()->SetTitleSize(21);
   h_stack_stack_3->GetZaxis()->SetTitleFont(43);
   h_stack->SetHistogram(h_stack_stack_3);
   
   Double_t xAxis25[3] = {0, 0.5, 1}; 
   
   TH1D *c1lep4jex4bin_topEW__22 = new TH1D("c1lep4jex4bin_topEW__22","FcncDiscriminant",2, xAxis25);
   c1lep4jex4bin_topEW__22->SetBinContent(1,33.82202);
   c1lep4jex4bin_topEW__22->SetBinContent(2,19.06302);
   c1lep4jex4bin_topEW__22->SetBinError(1,10.23365);
   c1lep4jex4bin_topEW__22->SetBinError(2,8.253623);
   c1lep4jex4bin_topEW__22->SetEntries(2821374);
   c1lep4jex4bin_topEW__22->SetDirectory(0);
   c1lep4jex4bin_topEW__22->SetStats(0);

   ci = TColor::GetColor("#66cc66");
   c1lep4jex4bin_topEW__22->SetFillColor(ci);
   c1lep4jex4bin_topEW__22->SetMarkerStyle(20);
   c1lep4jex4bin_topEW__22->SetMarkerSize(1.2);
   c1lep4jex4bin_topEW__22->GetXaxis()->SetRange(1,20);
   c1lep4jex4bin_topEW__22->GetXaxis()->SetLabelFont(43);
   c1lep4jex4bin_topEW__22->GetXaxis()->SetLabelSize(21);
   c1lep4jex4bin_topEW__22->GetXaxis()->SetTitleSize(21);
   c1lep4jex4bin_topEW__22->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jex4bin_topEW__22->GetXaxis()->SetTitleFont(43);
   c1lep4jex4bin_topEW__22->GetYaxis()->SetLabelFont(43);
   c1lep4jex4bin_topEW__22->GetYaxis()->SetLabelSize(21);
   c1lep4jex4bin_topEW__22->GetYaxis()->SetTitleSize(21);
   c1lep4jex4bin_topEW__22->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jex4bin_topEW__22->GetYaxis()->SetTitleFont(43);
   c1lep4jex4bin_topEW__22->GetZaxis()->SetLabelFont(43);
   c1lep4jex4bin_topEW__22->GetZaxis()->SetLabelSize(21);
   c1lep4jex4bin_topEW__22->GetZaxis()->SetTitleSize(21);
   c1lep4jex4bin_topEW__22->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jex4bin_topEW,"");
   Double_t xAxis26[3] = {0, 0.5, 1}; 
   
   TH1D *c1lep4jex4bin_ttbarbb__23 = new TH1D("c1lep4jex4bin_ttbarbb__23","FcncDiscriminant",2, xAxis26);
   c1lep4jex4bin_ttbarbb__23->SetBinContent(1,61.78348);
   c1lep4jex4bin_ttbarbb__23->SetBinContent(2,33.68325);
   c1lep4jex4bin_ttbarbb__23->SetBinError(1,4.598663);
   c1lep4jex4bin_ttbarbb__23->SetBinError(2,3.943733);
   c1lep4jex4bin_ttbarbb__23->SetEntries(314);
   c1lep4jex4bin_ttbarbb__23->SetDirectory(0);
   c1lep4jex4bin_ttbarbb__23->SetStats(0);

   ci = TColor::GetColor("#6666cc");
   c1lep4jex4bin_ttbarbb__23->SetFillColor(ci);
   c1lep4jex4bin_ttbarbb__23->SetMarkerStyle(20);
   c1lep4jex4bin_ttbarbb__23->SetMarkerSize(1.2);
   c1lep4jex4bin_ttbarbb__23->GetXaxis()->SetRange(1,20);
   c1lep4jex4bin_ttbarbb__23->GetXaxis()->SetLabelFont(43);
   c1lep4jex4bin_ttbarbb__23->GetXaxis()->SetLabelSize(21);
   c1lep4jex4bin_ttbarbb__23->GetXaxis()->SetTitleSize(21);
   c1lep4jex4bin_ttbarbb__23->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jex4bin_ttbarbb__23->GetXaxis()->SetTitleFont(43);
   c1lep4jex4bin_ttbarbb__23->GetYaxis()->SetLabelFont(43);
   c1lep4jex4bin_ttbarbb__23->GetYaxis()->SetLabelSize(21);
   c1lep4jex4bin_ttbarbb__23->GetYaxis()->SetTitleSize(21);
   c1lep4jex4bin_ttbarbb__23->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jex4bin_ttbarbb__23->GetYaxis()->SetTitleFont(43);
   c1lep4jex4bin_ttbarbb__23->GetZaxis()->SetLabelFont(43);
   c1lep4jex4bin_ttbarbb__23->GetZaxis()->SetLabelSize(21);
   c1lep4jex4bin_ttbarbb__23->GetZaxis()->SetTitleSize(21);
   c1lep4jex4bin_ttbarbb__23->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jex4bin_ttbarbb,"");
   Double_t xAxis27[3] = {0, 0.5, 1}; 
   
   TH1D *c1lep4jex4bin_ttbarcc__24 = new TH1D("c1lep4jex4bin_ttbarcc__24","FcncDiscriminant",2, xAxis27);
   c1lep4jex4bin_ttbarcc__24->SetBinContent(1,2.240727);
   c1lep4jex4bin_ttbarcc__24->SetBinContent(2,0.9275166);
   c1lep4jex4bin_ttbarcc__24->SetBinError(1,1.081704);
   c1lep4jex4bin_ttbarcc__24->SetBinError(2,0.5370448);
   c1lep4jex4bin_ttbarcc__24->SetEntries(8);
   c1lep4jex4bin_ttbarcc__24->SetDirectory(0);
   c1lep4jex4bin_ttbarcc__24->SetStats(0);

   ci = TColor::GetColor("#ccccff");
   c1lep4jex4bin_ttbarcc__24->SetFillColor(ci);
   c1lep4jex4bin_ttbarcc__24->SetMarkerStyle(20);
   c1lep4jex4bin_ttbarcc__24->SetMarkerSize(1.2);
   c1lep4jex4bin_ttbarcc__24->GetXaxis()->SetRange(1,20);
   c1lep4jex4bin_ttbarcc__24->GetXaxis()->SetLabelFont(43);
   c1lep4jex4bin_ttbarcc__24->GetXaxis()->SetLabelSize(21);
   c1lep4jex4bin_ttbarcc__24->GetXaxis()->SetTitleSize(21);
   c1lep4jex4bin_ttbarcc__24->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jex4bin_ttbarcc__24->GetXaxis()->SetTitleFont(43);
   c1lep4jex4bin_ttbarcc__24->GetYaxis()->SetLabelFont(43);
   c1lep4jex4bin_ttbarcc__24->GetYaxis()->SetLabelSize(21);
   c1lep4jex4bin_ttbarcc__24->GetYaxis()->SetTitleSize(21);
   c1lep4jex4bin_ttbarcc__24->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jex4bin_ttbarcc__24->GetYaxis()->SetTitleFont(43);
   c1lep4jex4bin_ttbarcc__24->GetZaxis()->SetLabelFont(43);
   c1lep4jex4bin_ttbarcc__24->GetZaxis()->SetLabelSize(21);
   c1lep4jex4bin_ttbarcc__24->GetZaxis()->SetTitleSize(21);
   c1lep4jex4bin_ttbarcc__24->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jex4bin_ttbarcc,"");
   Double_t xAxis28[3] = {0, 0.5, 1}; 
   
   TH1D *c1lep4jex4bin_ttbarlight__25 = new TH1D("c1lep4jex4bin_ttbarlight__25","FcncDiscriminant",2, xAxis28);
   c1lep4jex4bin_ttbarlight__25->SetBinContent(1,3.111189);
   c1lep4jex4bin_ttbarlight__25->SetBinContent(2,7.131275);
   c1lep4jex4bin_ttbarlight__25->SetBinError(1,1.886086);
   c1lep4jex4bin_ttbarlight__25->SetBinError(2,3.273418);
   c1lep4jex4bin_ttbarlight__25->SetEntries(11);
   c1lep4jex4bin_ttbarlight__25->SetDirectory(0);
   c1lep4jex4bin_ttbarlight__25->SetStats(0);
   c1lep4jex4bin_ttbarlight__25->SetMarkerStyle(20);
   c1lep4jex4bin_ttbarlight__25->SetMarkerSize(1.2);
   c1lep4jex4bin_ttbarlight__25->GetXaxis()->SetRange(1,20);
   c1lep4jex4bin_ttbarlight__25->GetXaxis()->SetLabelFont(43);
   c1lep4jex4bin_ttbarlight__25->GetXaxis()->SetLabelSize(21);
   c1lep4jex4bin_ttbarlight__25->GetXaxis()->SetTitleSize(21);
   c1lep4jex4bin_ttbarlight__25->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jex4bin_ttbarlight__25->GetXaxis()->SetTitleFont(43);
   c1lep4jex4bin_ttbarlight__25->GetYaxis()->SetLabelFont(43);
   c1lep4jex4bin_ttbarlight__25->GetYaxis()->SetLabelSize(21);
   c1lep4jex4bin_ttbarlight__25->GetYaxis()->SetTitleSize(21);
   c1lep4jex4bin_ttbarlight__25->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jex4bin_ttbarlight__25->GetYaxis()->SetTitleFont(43);
   c1lep4jex4bin_ttbarlight__25->GetZaxis()->SetLabelFont(43);
   c1lep4jex4bin_ttbarlight__25->GetZaxis()->SetLabelSize(21);
   c1lep4jex4bin_ttbarlight__25->GetZaxis()->SetTitleSize(21);
   c1lep4jex4bin_ttbarlight__25->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jex4bin_ttbarlight,"");
   Double_t xAxis29[3] = {0, 0.5, 1}; 
   
   TH1D *c1lep4jex4bin_uHcW__26 = new TH1D("c1lep4jex4bin_uHcW__26","FcncDiscriminant",2, xAxis29);
   c1lep4jex4bin_uHcW__26->SetBinContent(1,3.163096);
   c1lep4jex4bin_uHcW__26->SetBinContent(2,21.63582);
   c1lep4jex4bin_uHcW__26->SetBinError(1,2.094862);
   c1lep4jex4bin_uHcW__26->SetBinError(2,4.413051);
   c1lep4jex4bin_uHcW__26->SetEntries(105);
   c1lep4jex4bin_uHcW__26->SetDirectory(0);
   c1lep4jex4bin_uHcW__26->SetStats(0);
   c1lep4jex4bin_uHcW__26->SetFillColor(2);
   c1lep4jex4bin_uHcW__26->SetLineColor(2);
   c1lep4jex4bin_uHcW__26->SetMarkerStyle(20);
   c1lep4jex4bin_uHcW__26->SetMarkerSize(1.2);
   c1lep4jex4bin_uHcW__26->GetXaxis()->SetRange(1,20);
   c1lep4jex4bin_uHcW__26->GetXaxis()->SetLabelFont(43);
   c1lep4jex4bin_uHcW__26->GetXaxis()->SetLabelSize(21);
   c1lep4jex4bin_uHcW__26->GetXaxis()->SetTitleSize(21);
   c1lep4jex4bin_uHcW__26->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jex4bin_uHcW__26->GetXaxis()->SetTitleFont(43);
   c1lep4jex4bin_uHcW__26->GetYaxis()->SetLabelFont(43);
   c1lep4jex4bin_uHcW__26->GetYaxis()->SetLabelSize(21);
   c1lep4jex4bin_uHcW__26->GetYaxis()->SetTitleSize(21);
   c1lep4jex4bin_uHcW__26->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jex4bin_uHcW__26->GetYaxis()->SetTitleFont(43);
   c1lep4jex4bin_uHcW__26->GetZaxis()->SetLabelFont(43);
   c1lep4jex4bin_uHcW__26->GetZaxis()->SetLabelSize(21);
   c1lep4jex4bin_uHcW__26->GetZaxis()->SetTitleSize(21);
   c1lep4jex4bin_uHcW__26->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jex4bin_uHcW,"");
   h_stack->Draw("hist same");
   
   Double_t g_totErr_fx3011[2] = {
   0.25,
   0.75};
   Double_t g_totErr_fy3011[2] = {
   100.9574,
   60.80506};
   Double_t g_totErr_felx3011[2] = {
   0.25,
   0.25};
   Double_t g_totErr_fely3011[2] = {
   27.75201,
   19.71402};
   Double_t g_totErr_fehx3011[2] = {
   0.25,
   0.25};
   Double_t g_totErr_fehy3011[2] = {
   27.75201,
   19.71402};
   grae = new TGraphAsymmErrors(2,g_totErr_fx3011,g_totErr_fy3011,g_totErr_felx3011,g_totErr_fehx3011,g_totErr_fely3011,g_totErr_fehy3011);
   grae->SetName("g_totErr");
   grae->SetTitle("FcncDiscriminant");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(3354);
   grae->SetLineColor(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0);
   
   TH1F *Graph_g_totErr3011 = new TH1F("Graph_g_totErr3011","FcncDiscriminant",100,0,1.1);
   Graph_g_totErr3011->SetMinimum(32.3292);
   Graph_g_totErr3011->SetMaximum(137.4713);
   Graph_g_totErr3011->SetDirectory(0);
   Graph_g_totErr3011->SetStats(0);
   Graph_g_totErr3011->SetLineWidth(2);
   Graph_g_totErr3011->SetMarkerStyle(20);
   Graph_g_totErr3011->SetMarkerSize(1.2);
   Graph_g_totErr3011->GetXaxis()->SetLabelFont(43);
   Graph_g_totErr3011->GetXaxis()->SetLabelSize(21);
   Graph_g_totErr3011->GetXaxis()->SetTitleSize(21);
   Graph_g_totErr3011->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_totErr3011->GetXaxis()->SetTitleFont(43);
   Graph_g_totErr3011->GetYaxis()->SetLabelFont(43);
   Graph_g_totErr3011->GetYaxis()->SetLabelSize(21);
   Graph_g_totErr3011->GetYaxis()->SetTitleSize(21);
   Graph_g_totErr3011->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_totErr3011->GetYaxis()->SetTitleFont(43);
   Graph_g_totErr3011->GetZaxis()->SetLabelFont(43);
   Graph_g_totErr3011->GetZaxis()->SetLabelSize(21);
   Graph_g_totErr3011->GetZaxis()->SetTitleSize(21);
   Graph_g_totErr3011->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_totErr3011);
   
   grae->Draw("e2");
   
   Double_t Graph_from_c1lep4jex4bin_Data_fx3012[2] = {
   0.25,
   0.75};
   Double_t Graph_from_c1lep4jex4bin_Data_fy3012[2] = {
   108,
   68};
   Double_t Graph_from_c1lep4jex4bin_Data_felx3012[2] = {
   0.2495,
   0.2495};
   Double_t Graph_from_c1lep4jex4bin_Data_fely3012[2] = {
   10.3923,
   8.246211};
   Double_t Graph_from_c1lep4jex4bin_Data_fehx3012[2] = {
   0.25,
   0.25};
   Double_t Graph_from_c1lep4jex4bin_Data_fehy3012[2] = {
   10.3923,
   8.246211};
   grae = new TGraphAsymmErrors(2,Graph_from_c1lep4jex4bin_Data_fx3012,Graph_from_c1lep4jex4bin_Data_fy3012,Graph_from_c1lep4jex4bin_Data_felx3012,Graph_from_c1lep4jex4bin_Data_fehx3012,Graph_from_c1lep4jex4bin_Data_fely3012,Graph_from_c1lep4jex4bin_Data_fehy3012);
   grae->SetName("Graph_from_c1lep4jex4bin_Data");
   grae->SetTitle("FcncDiscriminant");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_c1lep4jex4bin_Data3012 = new TH1F("Graph_Graph_from_c1lep4jex4bin_Data3012","FcncDiscriminant",100,0,1.09995);
   Graph_Graph_from_c1lep4jex4bin_Data3012->SetMinimum(53.88994);
   Graph_Graph_from_c1lep4jex4bin_Data3012->SetMaximum(124.2562);
   Graph_Graph_from_c1lep4jex4bin_Data3012->SetDirectory(0);
   Graph_Graph_from_c1lep4jex4bin_Data3012->SetStats(0);
   Graph_Graph_from_c1lep4jex4bin_Data3012->SetLineWidth(2);
   Graph_Graph_from_c1lep4jex4bin_Data3012->SetMarkerStyle(20);
   Graph_Graph_from_c1lep4jex4bin_Data3012->SetMarkerSize(1.2);
   Graph_Graph_from_c1lep4jex4bin_Data3012->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep4jex4bin_Data3012->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep4jex4bin_Data3012->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep4jex4bin_Data3012->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep4jex4bin_Data3012->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep4jex4bin_Data3012->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep4jex4bin_Data3012->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep4jex4bin_Data3012->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep4jex4bin_Data3012->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep4jex4bin_Data3012->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep4jex4bin_Data3012->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep4jex4bin_Data3012->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep4jex4bin_Data3012->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep4jex4bin_Data3012->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_c1lep4jex4bin_Data3012);
   
   grae->Draw("ep1 ");
   Double_t xAxis30[3] = {0, 0.5, 1}; 
   
   TH1D *h_dummy_copy__27 = new TH1D("h_dummy_copy__27","FcncDiscriminant",2, xAxis30);
   h_dummy_copy__27->SetEntries(2821709);
   h_dummy_copy__27->SetDirectory(0);
   h_dummy_copy__27->SetStats(0);
   h_dummy_copy__27->SetMarkerStyle(20);
   h_dummy_copy__27->SetMarkerSize(1.2);
   h_dummy_copy__27->GetXaxis()->SetTitle("LH discriminant");
   h_dummy_copy__27->GetXaxis()->SetRange(1,20);
   h_dummy_copy__27->GetXaxis()->SetLabelFont(43);
   h_dummy_copy__27->GetXaxis()->SetLabelSize(21);
   h_dummy_copy__27->GetXaxis()->SetTitleSize(21);
   h_dummy_copy__27->GetXaxis()->SetTitleOffset(1.4);
   h_dummy_copy__27->GetXaxis()->SetTitleFont(43);
   h_dummy_copy__27->GetYaxis()->SetTitle("Events / 0.5");
   h_dummy_copy__27->GetYaxis()->SetLabelFont(43);
   h_dummy_copy__27->GetYaxis()->SetLabelSize(16.8);
   h_dummy_copy__27->GetYaxis()->SetTitleSize(21);
   h_dummy_copy__27->GetYaxis()->SetTitleOffset(2.4);
   h_dummy_copy__27->GetYaxis()->SetTitleFont(43);
   h_dummy_copy__27->GetZaxis()->SetLabelFont(43);
   h_dummy_copy__27->GetZaxis()->SetLabelSize(21);
   h_dummy_copy__27->GetZaxis()->SetTitleSize(21);
   h_dummy_copy__27->GetZaxis()->SetTitleFont(43);
   h_dummy_copy__27->Draw("sameaxis");
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
      tex = new TLatex(0.18,0.78,"t#rightarrowH(b#bar{b})q search");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(21);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.18,0.73,"4j, #geq4b");
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
   
   TLegend *leg = new TLegend(0.5308,0.63,0.92,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(43);
   leg->SetTextSize(18.9);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("c1lep4jex4bin_Data","Data","lep");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep4jex4bin_uHcW","t#bar{t}#rightarrowWbHc (BR=1%)","f");
   entry->SetFillColor(2);
   entry->SetFillStyle(1001);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep4jex4bin_ttbarlight","t#bar{t}+light-jets","f");
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep4jex4bin_ttbarcc","t#bar{t}+#geq1c","f");

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
   entry=leg->AddEntry("c1lep4jex4bin_ttbarbb","t#bar{t}+#geq1b","f");

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
   entry=leg->AddEntry("c1lep4jex4bin_topEW","Non-t#bar{t}","f");

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
   c_c1lep4jex4bin->cd();
   c_c1lep4jex4bin->Modified();
   c_c1lep4jex4bin->cd();
   c_c1lep4jex4bin->SetSelected(c_c1lep4jex4bin);
}
