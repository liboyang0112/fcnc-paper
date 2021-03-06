void c1lep5jex3bex()
{
//=========Macro generated from canvas: c_c1lep5jex3bex/c_c1lep5jex3bex
//=========  (Fri Jul 20 18:09:26 2018) by ROOT version6.04/14
   TCanvas *c_c1lep5jex3bex = new TCanvas("c_c1lep5jex3bex", "c_c1lep5jex3bex",0,0,600,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c_c1lep5jex3bex->SetHighLightColor(2);
   c_c1lep5jex3bex->Range(0,0,1,1);
   c_c1lep5jex3bex->SetFillColor(0);
   c_c1lep5jex3bex->SetBorderMode(0);
   c_c1lep5jex3bex->SetBorderSize(2);
   c_c1lep5jex3bex->SetTickx(1);
   c_c1lep5jex3bex->SetTicky(1);
   c_c1lep5jex3bex->SetLeftMargin(0.16);
   c_c1lep5jex3bex->SetRightMargin(0.05);
   c_c1lep5jex3bex->SetTopMargin(0.05);
   c_c1lep5jex3bex->SetBottomMargin(0.16);
   c_c1lep5jex3bex->SetFrameBorderMode(0);
  
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
   Double_t xAxis41[11] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1D *h_dummy2__37 = new TH1D("h_dummy2__37","Data/MC",10, xAxis41);
   h_dummy2__37->SetMinimum(0.5);
   h_dummy2__37->SetMaximum(1.5);
   h_dummy2__37->SetEntries(1363480);
   h_dummy2__37->SetDirectory(0);
   h_dummy2__37->SetStats(0);
   h_dummy2__37->SetMarkerStyle(20);
   h_dummy2__37->SetMarkerSize(1.2);
   h_dummy2__37->GetXaxis()->SetTitle("LH discriminant");
   h_dummy2__37->GetXaxis()->SetRange(1,20);
   h_dummy2__37->GetXaxis()->SetLabelFont(43);
   h_dummy2__37->GetXaxis()->SetLabelOffset(0.025);
   h_dummy2__37->GetXaxis()->SetLabelSize(16.8);
   h_dummy2__37->GetXaxis()->SetTitleSize(21);
   h_dummy2__37->GetXaxis()->SetTitleOffset(5.05);
   h_dummy2__37->GetXaxis()->SetTitleFont(43);
   h_dummy2__37->GetYaxis()->SetTitle("Data / Bkg");
   h_dummy2__37->GetYaxis()->CenterTitle(true);
   h_dummy2__37->GetYaxis()->SetNdivisions(-504);
   h_dummy2__37->GetYaxis()->SetLabelFont(43);
   h_dummy2__37->GetYaxis()->SetLabelOffset(0.02);
   h_dummy2__37->GetYaxis()->SetLabelSize(16.8);
   h_dummy2__37->GetYaxis()->SetTitleSize(21);
   h_dummy2__37->GetYaxis()->SetTitleOffset(2.4);
   h_dummy2__37->GetYaxis()->SetTitleFont(43);
   h_dummy2__37->GetZaxis()->SetLabelFont(43);
   h_dummy2__37->GetZaxis()->SetLabelSize(21);
   h_dummy2__37->GetZaxis()->SetTitleSize(21);
   h_dummy2__37->GetZaxis()->SetTitleFont(43);
   h_dummy2__37->Draw("HIST");
   
   Double_t Graph_from_h_ratio_fx3017[10] = {
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95};
   Double_t Graph_from_h_ratio_fy3017[10] = {
   1.16676,
   1.188455,
   1.150176,
   1.150522,
   1.090528,
   1.110958,
   1.195509,
   1.133288,
   1.308222,
   1.152814};
   Double_t Graph_from_h_ratio_felx3017[10] = {
   0.0499,
   0.0499,
   0.0499,
   0.0499,
   0.0499,
   0.0499,
   0.0499,
   0.0499,
   0.0499,
   0.0499};
   Double_t Graph_from_h_ratio_fely3017[10] = {
   0.02571303,
   0.03017705,
   0.0301428,
   0.03094858,
   0.02986907,
   0.02968101,
   0.03451137,
   0.04194487,
   0.06040806,
   0.1027008};
   Double_t Graph_from_h_ratio_fehx3017[10] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t Graph_from_h_ratio_fehy3017[10] = {
   0.02571303,
   0.03017705,
   0.0301428,
   0.03094858,
   0.02986907,
   0.02968101,
   0.03451137,
   0.04194487,
   0.06040806,
   0.1027008};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(10,Graph_from_h_ratio_fx3017,Graph_from_h_ratio_fy3017,Graph_from_h_ratio_felx3017,Graph_from_h_ratio_fehx3017,Graph_from_h_ratio_fely3017,Graph_from_h_ratio_fehy3017);
   grae->SetName("Graph_from_h_ratio");
   grae->SetTitle("FcncDiscriminant");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(24);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_h_ratio3017 = new TH1F("Graph_Graph_from_h_ratio3017","FcncDiscriminant",100,0,1.09999);
   Graph_Graph_from_h_ratio3017->SetMinimum(1.018261);
   Graph_Graph_from_h_ratio3017->SetMaximum(1.400481);
   Graph_Graph_from_h_ratio3017->SetDirectory(0);
   Graph_Graph_from_h_ratio3017->SetStats(0);
   Graph_Graph_from_h_ratio3017->SetLineWidth(2);
   Graph_Graph_from_h_ratio3017->SetMarkerStyle(20);
   Graph_Graph_from_h_ratio3017->SetMarkerSize(1.2);
   Graph_Graph_from_h_ratio3017->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3017->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3017->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3017->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3017->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3017->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3017->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3017->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3017->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3017->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3017->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3017->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3017->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3017->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_h_ratio3017);
   
   grae->Draw("pe0");
   TLine *line = new TLine(0,1,1,1);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t g_ratio2_fx3018[10] = {
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95};
   Double_t g_ratio2_fy3018[10] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t g_ratio2_felx3018[10] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t g_ratio2_fely3018[10] = {
   0.1707143,
   0.1792098,
   0.1874369,
   0.1971134,
   0.2013953,
   0.2090197,
   0.2085382,
   0.2035614,
   0.2114732,
   0.2312165};
   Double_t g_ratio2_fehx3018[10] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t g_ratio2_fehy3018[10] = {
   0.1707143,
   0.1792098,
   0.1874369,
   0.1971134,
   0.2013953,
   0.2090197,
   0.2085382,
   0.2035614,
   0.2114732,
   0.2312165};
   grae = new TGraphAsymmErrors(10,g_ratio2_fx3018,g_ratio2_fy3018,g_ratio2_felx3018,g_ratio2_fehx3018,g_ratio2_fely3018,g_ratio2_fehy3018);
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
   
   TH1F *Graph_g_ratio23018 = new TH1F("Graph_g_ratio23018","FcncDiscriminant",100,0,1.1);
   Graph_g_ratio23018->SetMinimum(0.7225402);
   Graph_g_ratio23018->SetMaximum(1.27746);
   Graph_g_ratio23018->SetDirectory(0);
   Graph_g_ratio23018->SetStats(0);
   Graph_g_ratio23018->SetLineWidth(2);
   Graph_g_ratio23018->SetMarkerStyle(20);
   Graph_g_ratio23018->SetMarkerSize(1.2);
   Graph_g_ratio23018->GetXaxis()->SetLabelFont(43);
   Graph_g_ratio23018->GetXaxis()->SetLabelSize(21);
   Graph_g_ratio23018->GetXaxis()->SetTitleSize(21);
   Graph_g_ratio23018->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23018->GetXaxis()->SetTitleFont(43);
   Graph_g_ratio23018->GetYaxis()->SetLabelFont(43);
   Graph_g_ratio23018->GetYaxis()->SetLabelSize(21);
   Graph_g_ratio23018->GetYaxis()->SetTitleSize(21);
   Graph_g_ratio23018->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23018->GetYaxis()->SetTitleFont(43);
   Graph_g_ratio23018->GetZaxis()->SetLabelFont(43);
   Graph_g_ratio23018->GetZaxis()->SetLabelSize(21);
   Graph_g_ratio23018->GetZaxis()->SetTitleSize(21);
   Graph_g_ratio23018->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_ratio23018);
   
   grae->Draw("e2");
   Double_t xAxis42[11] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1D *h_dummy2_copy__38 = new TH1D("h_dummy2_copy__38","Data/MC",10, xAxis42);
   h_dummy2_copy__38->SetMinimum(0.5);
   h_dummy2_copy__38->SetMaximum(1.5);
   h_dummy2_copy__38->SetEntries(1363480);
   h_dummy2_copy__38->SetDirectory(0);
   h_dummy2_copy__38->SetStats(0);
   h_dummy2_copy__38->SetMarkerStyle(20);
   h_dummy2_copy__38->SetMarkerSize(1.2);
   h_dummy2_copy__38->GetXaxis()->SetTitle("LH discriminant");
   h_dummy2_copy__38->GetXaxis()->SetRange(1,20);
   h_dummy2_copy__38->GetXaxis()->SetLabelFont(43);
   h_dummy2_copy__38->GetXaxis()->SetLabelOffset(0.025);
   h_dummy2_copy__38->GetXaxis()->SetLabelSize(16.8);
   h_dummy2_copy__38->GetXaxis()->SetTitleSize(21);
   h_dummy2_copy__38->GetXaxis()->SetTitleOffset(5.05);
   h_dummy2_copy__38->GetXaxis()->SetTitleFont(43);
   h_dummy2_copy__38->GetYaxis()->SetTitle("Data / Bkg");
   h_dummy2_copy__38->GetYaxis()->CenterTitle(true);
   h_dummy2_copy__38->GetYaxis()->SetNdivisions(-504);
   h_dummy2_copy__38->GetYaxis()->SetLabelFont(43);
   h_dummy2_copy__38->GetYaxis()->SetLabelOffset(0.02);
   h_dummy2_copy__38->GetYaxis()->SetLabelSize(16.8);
   h_dummy2_copy__38->GetYaxis()->SetTitleSize(21);
   h_dummy2_copy__38->GetYaxis()->SetTitleOffset(2.4);
   h_dummy2_copy__38->GetYaxis()->SetTitleFont(43);
   h_dummy2_copy__38->GetZaxis()->SetLabelFont(43);
   h_dummy2_copy__38->GetZaxis()->SetLabelSize(21);
   h_dummy2_copy__38->GetZaxis()->SetTitleSize(21);
   h_dummy2_copy__38->GetZaxis()->SetTitleFont(43);
   h_dummy2_copy__38->Draw("sameaxis");
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
   c_c1lep5jex3bex->cd();
  
// ------------>Primitives in pad: pad0
   TPad *pad0 = new TPad("pad0", "pad0",0,0.2,1,1);
   pad0->Draw();
   pad0->cd();
   pad0->Range(-0.1728395,-445.6326,1.061728,4010.694);
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
   Double_t xAxis43[11] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1D *h_dummy__39 = new TH1D("h_dummy__39","FcncDiscriminant",10, xAxis43);
   h_dummy__39->SetMinimum(0);
   h_dummy__39->SetMaximum(3787.877);
   h_dummy__39->SetEntries(1363480);
   h_dummy__39->SetDirectory(0);
   h_dummy__39->SetStats(0);
   h_dummy__39->SetMarkerStyle(20);
   h_dummy__39->SetMarkerSize(1.2);
   h_dummy__39->GetXaxis()->SetRange(1,20);
   h_dummy__39->GetXaxis()->SetLabelFont(43);
   h_dummy__39->GetXaxis()->SetLabelSize(0);
   h_dummy__39->GetXaxis()->SetTitleSize(21);
   h_dummy__39->GetXaxis()->SetTitleOffset(1.4);
   h_dummy__39->GetXaxis()->SetTitleFont(43);
   h_dummy__39->GetYaxis()->SetTitle("Events / 0.1");
   h_dummy__39->GetYaxis()->SetLabelFont(43);
   h_dummy__39->GetYaxis()->SetLabelSize(16.8);
   h_dummy__39->GetYaxis()->SetTitleSize(21);
   h_dummy__39->GetYaxis()->SetTitleOffset(2.4);
   h_dummy__39->GetYaxis()->SetTitleFont(43);
   h_dummy__39->GetZaxis()->SetLabelFont(43);
   h_dummy__39->GetZaxis()->SetLabelSize(21);
   h_dummy__39->GetZaxis()->SetTitleSize(21);
   h_dummy__39->GetZaxis()->SetTitleFont(43);
   h_dummy__39->Draw("HIST");
   
   THStack *h_stack = new THStack();
   h_stack->SetName("h_stack");
   h_stack->SetTitle("h_stack");
   Double_t xAxis44[11] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1F *h_stack_stack_5 = new TH1F("h_stack_stack_5","h_stack",10, xAxis44);
   h_stack_stack_5->SetMinimum(0);
   h_stack_stack_5->SetMaximum(1889.481);
   h_stack_stack_5->SetDirectory(0);
   h_stack_stack_5->SetStats(0);
   h_stack_stack_5->SetLineWidth(2);
   h_stack_stack_5->SetMarkerStyle(20);
   h_stack_stack_5->SetMarkerSize(1.2);
   h_stack_stack_5->GetXaxis()->SetLabelFont(43);
   h_stack_stack_5->GetXaxis()->SetLabelSize(21);
   h_stack_stack_5->GetXaxis()->SetTitleSize(21);
   h_stack_stack_5->GetXaxis()->SetTitleOffset(1.4);
   h_stack_stack_5->GetXaxis()->SetTitleFont(43);
   h_stack_stack_5->GetYaxis()->SetLabelFont(43);
   h_stack_stack_5->GetYaxis()->SetLabelSize(21);
   h_stack_stack_5->GetYaxis()->SetTitleSize(21);
   h_stack_stack_5->GetYaxis()->SetTitleOffset(1.4);
   h_stack_stack_5->GetYaxis()->SetTitleFont(43);
   h_stack_stack_5->GetZaxis()->SetLabelFont(43);
   h_stack_stack_5->GetZaxis()->SetLabelSize(21);
   h_stack_stack_5->GetZaxis()->SetTitleSize(21);
   h_stack_stack_5->GetZaxis()->SetTitleFont(43);
   h_stack->SetHistogram(h_stack_stack_5);
   
   Double_t xAxis45[11] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1D *c1lep5jex3bex_topEW__40 = new TH1D("c1lep5jex3bex_topEW__40","FcncDiscriminant",10, xAxis45);
   c1lep5jex3bex_topEW__40->SetBinContent(1,264.6167);
   c1lep5jex3bex_topEW__40->SetBinContent(2,186.2412);
   c1lep5jex3bex_topEW__40->SetBinContent(3,166.8435);
   c1lep5jex3bex_topEW__40->SetBinContent(4,145.173);
   c1lep5jex3bex_topEW__40->SetBinContent(5,135.0127);
   c1lep5jex3bex_topEW__40->SetBinContent(6,135.437);
   c1lep5jex3bex_topEW__40->SetBinContent(7,108.8751);
   c1lep5jex3bex_topEW__40->SetBinContent(8,83.08087);
   c1lep5jex3bex_topEW__40->SetBinContent(9,56.94816);
   c1lep5jex3bex_topEW__40->SetBinContent(10,23.98966);
   c1lep5jex3bex_topEW__40->SetBinError(1,32.11408);
   c1lep5jex3bex_topEW__40->SetBinError(2,28.94531);
   c1lep5jex3bex_topEW__40->SetBinError(3,27.22149);
   c1lep5jex3bex_topEW__40->SetBinError(4,25.71711);
   c1lep5jex3bex_topEW__40->SetBinError(5,24.3179);
   c1lep5jex3bex_topEW__40->SetBinError(6,22.80901);
   c1lep5jex3bex_topEW__40->SetBinError(7,20.23754);
   c1lep5jex3bex_topEW__40->SetBinError(8,17.82531);
   c1lep5jex3bex_topEW__40->SetBinError(9,15.15019);
   c1lep5jex3bex_topEW__40->SetBinError(10,11.79198);
   c1lep5jex3bex_topEW__40->SetEntries(1334864);
   c1lep5jex3bex_topEW__40->SetDirectory(0);
   c1lep5jex3bex_topEW__40->SetStats(0);

   ci = TColor::GetColor("#66cc66");
   c1lep5jex3bex_topEW__40->SetFillColor(ci);
   c1lep5jex3bex_topEW__40->SetMarkerStyle(20);
   c1lep5jex3bex_topEW__40->SetMarkerSize(1.2);
   c1lep5jex3bex_topEW__40->GetXaxis()->SetRange(1,20);
   c1lep5jex3bex_topEW__40->GetXaxis()->SetLabelFont(43);
   c1lep5jex3bex_topEW__40->GetXaxis()->SetLabelSize(21);
   c1lep5jex3bex_topEW__40->GetXaxis()->SetTitleSize(21);
   c1lep5jex3bex_topEW__40->GetXaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_topEW__40->GetXaxis()->SetTitleFont(43);
   c1lep5jex3bex_topEW__40->GetYaxis()->SetLabelFont(43);
   c1lep5jex3bex_topEW__40->GetYaxis()->SetLabelSize(21);
   c1lep5jex3bex_topEW__40->GetYaxis()->SetTitleSize(21);
   c1lep5jex3bex_topEW__40->GetYaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_topEW__40->GetYaxis()->SetTitleFont(43);
   c1lep5jex3bex_topEW__40->GetZaxis()->SetLabelFont(43);
   c1lep5jex3bex_topEW__40->GetZaxis()->SetLabelSize(21);
   c1lep5jex3bex_topEW__40->GetZaxis()->SetTitleSize(21);
   c1lep5jex3bex_topEW__40->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep5jex3bex_topEW,"");
   Double_t xAxis46[11] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1D *c1lep5jex3bex_ttbarbb__41 = new TH1D("c1lep5jex3bex_ttbarbb__41","FcncDiscriminant",10, xAxis46);
   c1lep5jex3bex_ttbarbb__41->SetBinContent(1,959.9507);
   c1lep5jex3bex_ttbarbb__41->SetBinContent(2,631.7487);
   c1lep5jex3bex_ttbarbb__41->SetBinContent(3,553.9627);
   c1lep5jex3bex_ttbarbb__41->SetBinContent(4,483.7378);
   c1lep5jex3bex_ttbarbb__41->SetBinContent(5,463.8313);
   c1lep5jex3bex_ttbarbb__41->SetBinContent(6,436.192);
   c1lep5jex3bex_ttbarbb__41->SetBinContent(7,369.3242);
   c1lep5jex3bex_ttbarbb__41->SetBinContent(8,253.3805);
   c1lep5jex3bex_ttbarbb__41->SetBinContent(9,129.5655);
   c1lep5jex3bex_ttbarbb__41->SetBinContent(10,40.51265);
   c1lep5jex3bex_ttbarbb__41->SetBinError(1,18.92534);
   c1lep5jex3bex_ttbarbb__41->SetBinError(2,15.75561);
   c1lep5jex3bex_ttbarbb__41->SetBinError(3,15.4007);
   c1lep5jex3bex_ttbarbb__41->SetBinError(4,14.2618);
   c1lep5jex3bex_ttbarbb__41->SetBinError(5,13.57198);
   c1lep5jex3bex_ttbarbb__41->SetBinError(6,12.89113);
   c1lep5jex3bex_ttbarbb__41->SetBinError(7,13.43821);
   c1lep5jex3bex_ttbarbb__41->SetBinError(8,10.96164);
   c1lep5jex3bex_ttbarbb__41->SetBinError(9,6.534359);
   c1lep5jex3bex_ttbarbb__41->SetBinError(10,3.585352);
   c1lep5jex3bex_ttbarbb__41->SetEntries(15468);
   c1lep5jex3bex_ttbarbb__41->SetDirectory(0);
   c1lep5jex3bex_ttbarbb__41->SetStats(0);

   ci = TColor::GetColor("#6666cc");
   c1lep5jex3bex_ttbarbb__41->SetFillColor(ci);
   c1lep5jex3bex_ttbarbb__41->SetMarkerStyle(20);
   c1lep5jex3bex_ttbarbb__41->SetMarkerSize(1.2);
   c1lep5jex3bex_ttbarbb__41->GetXaxis()->SetRange(1,20);
   c1lep5jex3bex_ttbarbb__41->GetXaxis()->SetLabelFont(43);
   c1lep5jex3bex_ttbarbb__41->GetXaxis()->SetLabelSize(21);
   c1lep5jex3bex_ttbarbb__41->GetXaxis()->SetTitleSize(21);
   c1lep5jex3bex_ttbarbb__41->GetXaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_ttbarbb__41->GetXaxis()->SetTitleFont(43);
   c1lep5jex3bex_ttbarbb__41->GetYaxis()->SetLabelFont(43);
   c1lep5jex3bex_ttbarbb__41->GetYaxis()->SetLabelSize(21);
   c1lep5jex3bex_ttbarbb__41->GetYaxis()->SetTitleSize(21);
   c1lep5jex3bex_ttbarbb__41->GetYaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_ttbarbb__41->GetYaxis()->SetTitleFont(43);
   c1lep5jex3bex_ttbarbb__41->GetZaxis()->SetLabelFont(43);
   c1lep5jex3bex_ttbarbb__41->GetZaxis()->SetLabelSize(21);
   c1lep5jex3bex_ttbarbb__41->GetZaxis()->SetTitleSize(21);
   c1lep5jex3bex_ttbarbb__41->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep5jex3bex_ttbarbb,"");
   Double_t xAxis47[11] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1D *c1lep5jex3bex_ttbarcc__42 = new TH1D("c1lep5jex3bex_ttbarcc__42","FcncDiscriminant",10, xAxis47);
   c1lep5jex3bex_ttbarcc__42->SetBinContent(1,244.3074);
   c1lep5jex3bex_ttbarcc__42->SetBinContent(2,167.2882);
   c1lep5jex3bex_ttbarcc__42->SetBinContent(3,157.0668);
   c1lep5jex3bex_ttbarcc__42->SetBinContent(4,151.0145);
   c1lep5jex3bex_ttbarcc__42->SetBinContent(5,147.766);
   c1lep5jex3bex_ttbarcc__42->SetBinContent(6,172.7494);
   c1lep5jex3bex_ttbarcc__42->SetBinContent(7,133.643);
   c1lep5jex3bex_ttbarcc__42->SetBinContent(8,83.68512);
   c1lep5jex3bex_ttbarcc__42->SetBinContent(9,49.8789);
   c1lep5jex3bex_ttbarcc__42->SetBinContent(10,13.42901);
   c1lep5jex3bex_ttbarcc__42->SetBinError(1,12.26435);
   c1lep5jex3bex_ttbarcc__42->SetBinError(2,8.374582);
   c1lep5jex3bex_ttbarcc__42->SetBinError(3,8.43894);
   c1lep5jex3bex_ttbarcc__42->SetBinError(4,8.183682);
   c1lep5jex3bex_ttbarcc__42->SetBinError(5,8.057841);
   c1lep5jex3bex_ttbarcc__42->SetBinError(6,8.906187);
   c1lep5jex3bex_ttbarcc__42->SetBinError(7,8.45452);
   c1lep5jex3bex_ttbarcc__42->SetBinError(8,6.884403);
   c1lep5jex3bex_ttbarcc__42->SetBinError(9,5.401685);
   c1lep5jex3bex_ttbarcc__42->SetBinError(10,2.304915);
   c1lep5jex3bex_ttbarcc__42->SetEntries(4006);
   c1lep5jex3bex_ttbarcc__42->SetDirectory(0);
   c1lep5jex3bex_ttbarcc__42->SetStats(0);

   ci = TColor::GetColor("#ccccff");
   c1lep5jex3bex_ttbarcc__42->SetFillColor(ci);
   c1lep5jex3bex_ttbarcc__42->SetMarkerStyle(20);
   c1lep5jex3bex_ttbarcc__42->SetMarkerSize(1.2);
   c1lep5jex3bex_ttbarcc__42->GetXaxis()->SetRange(1,20);
   c1lep5jex3bex_ttbarcc__42->GetXaxis()->SetLabelFont(43);
   c1lep5jex3bex_ttbarcc__42->GetXaxis()->SetLabelSize(21);
   c1lep5jex3bex_ttbarcc__42->GetXaxis()->SetTitleSize(21);
   c1lep5jex3bex_ttbarcc__42->GetXaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_ttbarcc__42->GetXaxis()->SetTitleFont(43);
   c1lep5jex3bex_ttbarcc__42->GetYaxis()->SetLabelFont(43);
   c1lep5jex3bex_ttbarcc__42->GetYaxis()->SetLabelSize(21);
   c1lep5jex3bex_ttbarcc__42->GetYaxis()->SetTitleSize(21);
   c1lep5jex3bex_ttbarcc__42->GetYaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_ttbarcc__42->GetYaxis()->SetTitleFont(43);
   c1lep5jex3bex_ttbarcc__42->GetZaxis()->SetLabelFont(43);
   c1lep5jex3bex_ttbarcc__42->GetZaxis()->SetLabelSize(21);
   c1lep5jex3bex_ttbarcc__42->GetZaxis()->SetTitleSize(21);
   c1lep5jex3bex_ttbarcc__42->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep5jex3bex_ttbarcc,"");
   Double_t xAxis48[11] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1D *c1lep5jex3bex_ttbarlight__43 = new TH1D("c1lep5jex3bex_ttbarlight__43","FcncDiscriminant",10, xAxis48);
   c1lep5jex3bex_ttbarlight__43->SetBinContent(1,295.8419);
   c1lep5jex3bex_ttbarlight__43->SetBinContent(2,319.7779);
   c1lep5jex3bex_ttbarlight__43->SetBinContent(3,388.0201);
   c1lep5jex3bex_ttbarlight__43->SetBinContent(4,421.2689);
   c1lep5jex3bex_ttbarlight__43->SetBinContent(5,475.7337);
   c1lep5jex3bex_ttbarlight__43->SetBinContent(6,516.6952);
   c1lep5jex3bex_ttbarlight__43->SetBinContent(7,391.9144);
   c1lep5jex3bex_ttbarlight__43->SetBinContent(8,223.997);
   c1lep5jex3bex_ttbarlight__43->SetBinContent(9,122.1094);
   c1lep5jex3bex_ttbarlight__43->SetBinContent(10,31.36647);
   c1lep5jex3bex_ttbarlight__43->SetBinError(1,16.84751);
   c1lep5jex3bex_ttbarlight__43->SetBinError(2,12.47106);
   c1lep5jex3bex_ttbarlight__43->SetBinError(3,13.84295);
   c1lep5jex3bex_ttbarlight__43->SetBinError(4,14.36694);
   c1lep5jex3bex_ttbarlight__43->SetBinError(5,15.47214);
   c1lep5jex3bex_ttbarlight__43->SetBinError(6,16.78383);
   c1lep5jex3bex_ttbarlight__43->SetBinError(7,14.50188);
   c1lep5jex3bex_ttbarlight__43->SetBinError(8,10.64775);
   c1lep5jex3bex_ttbarlight__43->SetBinError(9,8.471361);
   c1lep5jex3bex_ttbarlight__43->SetBinError(10,3.735671);
   c1lep5jex3bex_ttbarlight__43->SetEntries(9132);
   c1lep5jex3bex_ttbarlight__43->SetDirectory(0);
   c1lep5jex3bex_ttbarlight__43->SetStats(0);
   c1lep5jex3bex_ttbarlight__43->SetMarkerStyle(20);
   c1lep5jex3bex_ttbarlight__43->SetMarkerSize(1.2);
   c1lep5jex3bex_ttbarlight__43->GetXaxis()->SetRange(1,20);
   c1lep5jex3bex_ttbarlight__43->GetXaxis()->SetLabelFont(43);
   c1lep5jex3bex_ttbarlight__43->GetXaxis()->SetLabelSize(21);
   c1lep5jex3bex_ttbarlight__43->GetXaxis()->SetTitleSize(21);
   c1lep5jex3bex_ttbarlight__43->GetXaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_ttbarlight__43->GetXaxis()->SetTitleFont(43);
   c1lep5jex3bex_ttbarlight__43->GetYaxis()->SetLabelFont(43);
   c1lep5jex3bex_ttbarlight__43->GetYaxis()->SetLabelSize(21);
   c1lep5jex3bex_ttbarlight__43->GetYaxis()->SetTitleSize(21);
   c1lep5jex3bex_ttbarlight__43->GetYaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_ttbarlight__43->GetYaxis()->SetTitleFont(43);
   c1lep5jex3bex_ttbarlight__43->GetZaxis()->SetLabelFont(43);
   c1lep5jex3bex_ttbarlight__43->GetZaxis()->SetLabelSize(21);
   c1lep5jex3bex_ttbarlight__43->GetZaxis()->SetTitleSize(21);
   c1lep5jex3bex_ttbarlight__43->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep5jex3bex_ttbarlight,"");
   Double_t xAxis49[11] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1D *c1lep5jex3bex_uHcW__44 = new TH1D("c1lep5jex3bex_uHcW__44","FcncDiscriminant",10, xAxis49);
   c1lep5jex3bex_uHcW__44->SetBinContent(1,34.78928);
   c1lep5jex3bex_uHcW__44->SetBinContent(2,46.28699);
   c1lep5jex3bex_uHcW__44->SetBinContent(3,59.39544);
   c1lep5jex3bex_uHcW__44->SetBinContent(4,61.8596);
   c1lep5jex3bex_uHcW__44->SetBinContent(5,114.8981);
   c1lep5jex3bex_uHcW__44->SetBinContent(6,157.9515);
   c1lep5jex3bex_uHcW__44->SetBinContent(7,194.4669);
   c1lep5jex3bex_uHcW__44->SetBinContent(8,146.007);
   c1lep5jex3bex_uHcW__44->SetBinContent(9,135.2955);
   c1lep5jex3bex_uHcW__44->SetBinContent(10,60.85258);
   c1lep5jex3bex_uHcW__44->SetBinError(1,5.658495);
   c1lep5jex3bex_uHcW__44->SetBinError(2,6.504422);
   c1lep5jex3bex_uHcW__44->SetBinError(3,7.985662);
   c1lep5jex3bex_uHcW__44->SetBinError(4,8.545653);
   c1lep5jex3bex_uHcW__44->SetBinError(5,11.26752);
   c1lep5jex3bex_uHcW__44->SetBinError(6,12.58501);
   c1lep5jex3bex_uHcW__44->SetBinError(7,13.08405);
   c1lep5jex3bex_uHcW__44->SetBinError(8,11.62051);
   c1lep5jex3bex_uHcW__44->SetBinError(9,11.08979);
   c1lep5jex3bex_uHcW__44->SetBinError(10,6.618435);
   c1lep5jex3bex_uHcW__44->SetEntries(5357);
   c1lep5jex3bex_uHcW__44->SetDirectory(0);
   c1lep5jex3bex_uHcW__44->SetStats(0);
   c1lep5jex3bex_uHcW__44->SetFillColor(2);
   c1lep5jex3bex_uHcW__44->SetLineColor(2);
   c1lep5jex3bex_uHcW__44->SetMarkerStyle(20);
   c1lep5jex3bex_uHcW__44->SetMarkerSize(1.2);
   c1lep5jex3bex_uHcW__44->GetXaxis()->SetRange(1,20);
   c1lep5jex3bex_uHcW__44->GetXaxis()->SetLabelFont(43);
   c1lep5jex3bex_uHcW__44->GetXaxis()->SetLabelSize(21);
   c1lep5jex3bex_uHcW__44->GetXaxis()->SetTitleSize(21);
   c1lep5jex3bex_uHcW__44->GetXaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_uHcW__44->GetXaxis()->SetTitleFont(43);
   c1lep5jex3bex_uHcW__44->GetYaxis()->SetLabelFont(43);
   c1lep5jex3bex_uHcW__44->GetYaxis()->SetLabelSize(21);
   c1lep5jex3bex_uHcW__44->GetYaxis()->SetTitleSize(21);
   c1lep5jex3bex_uHcW__44->GetYaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_uHcW__44->GetYaxis()->SetTitleFont(43);
   c1lep5jex3bex_uHcW__44->GetZaxis()->SetLabelFont(43);
   c1lep5jex3bex_uHcW__44->GetZaxis()->SetLabelSize(21);
   c1lep5jex3bex_uHcW__44->GetZaxis()->SetTitleSize(21);
   c1lep5jex3bex_uHcW__44->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep5jex3bex_uHcW,"");
   h_stack->Draw("hist same");
   
   Double_t g_totErr_fx3019[10] = {
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95};
   Double_t g_totErr_fy3019[10] = {
   1764.717,
   1305.056,
   1265.893,
   1201.194,
   1222.344,
   1261.074,
   1003.757,
   644.1434,
   358.502,
   109.2978};
   Double_t g_totErr_felx3019[10] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t g_totErr_fely3019[10] = {
   301.2624,
   233.8789,
   237.2751,
   236.7714,
   246.1743,
   263.5892,
   209.3216,
   131.1227,
   75.81357,
   25.27145};
   Double_t g_totErr_fehx3019[10] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t g_totErr_fehy3019[10] = {
   301.2624,
   233.8789,
   237.2751,
   236.7714,
   246.1743,
   263.5892,
   209.3216,
   131.1227,
   75.81357,
   25.27145};
   grae = new TGraphAsymmErrors(10,g_totErr_fx3019,g_totErr_fy3019,g_totErr_felx3019,g_totErr_fehx3019,g_totErr_fely3019,g_totErr_fehy3019);
   grae->SetName("g_totErr");
   grae->SetTitle("FcncDiscriminant");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(3354);
   grae->SetLineColor(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0);
   
   TH1F *Graph_g_totErr3019 = new TH1F("Graph_g_totErr3019","FcncDiscriminant",100,0,1.1);
   Graph_g_totErr3019->SetMinimum(0);
   Graph_g_totErr3019->SetMaximum(2264.174);
   Graph_g_totErr3019->SetDirectory(0);
   Graph_g_totErr3019->SetStats(0);
   Graph_g_totErr3019->SetLineWidth(2);
   Graph_g_totErr3019->SetMarkerStyle(20);
   Graph_g_totErr3019->SetMarkerSize(1.2);
   Graph_g_totErr3019->GetXaxis()->SetLabelFont(43);
   Graph_g_totErr3019->GetXaxis()->SetLabelSize(21);
   Graph_g_totErr3019->GetXaxis()->SetTitleSize(21);
   Graph_g_totErr3019->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_totErr3019->GetXaxis()->SetTitleFont(43);
   Graph_g_totErr3019->GetYaxis()->SetLabelFont(43);
   Graph_g_totErr3019->GetYaxis()->SetLabelSize(21);
   Graph_g_totErr3019->GetYaxis()->SetTitleSize(21);
   Graph_g_totErr3019->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_totErr3019->GetYaxis()->SetTitleFont(43);
   Graph_g_totErr3019->GetZaxis()->SetLabelFont(43);
   Graph_g_totErr3019->GetZaxis()->SetLabelSize(21);
   Graph_g_totErr3019->GetZaxis()->SetTitleSize(21);
   Graph_g_totErr3019->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_totErr3019);
   
   grae->Draw("e2");
   
   Double_t Graph_from_c1lep5jex3bex_Data_fx3020[10] = {
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95};
   Double_t Graph_from_c1lep5jex3bex_Data_fy3020[10] = {
   2059,
   1551,
   1456,
   1382,
   1333,
   1401,
   1200,
   730,
   469,
   126};
   Double_t Graph_from_c1lep5jex3bex_Data_felx3020[10] = {
   0.0499,
   0.0499,
   0.0499,
   0.0499,
   0.0499,
   0.0499,
   0.0499,
   0.0499,
   0.0499,
   0.0499};
   Double_t Graph_from_c1lep5jex3bex_Data_fely3020[10] = {
   45.37621,
   39.38274,
   38.15757,
   37.17526,
   36.51027,
   37.42993,
   34.64102,
   27.01851,
   21.65641,
   11.22497};
   Double_t Graph_from_c1lep5jex3bex_Data_fehx3020[10] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t Graph_from_c1lep5jex3bex_Data_fehy3020[10] = {
   45.37621,
   39.38274,
   38.15757,
   37.17526,
   36.51027,
   37.42993,
   34.64102,
   27.01851,
   21.65641,
   11.22497};
   grae = new TGraphAsymmErrors(10,Graph_from_c1lep5jex3bex_Data_fx3020,Graph_from_c1lep5jex3bex_Data_fy3020,Graph_from_c1lep5jex3bex_Data_felx3020,Graph_from_c1lep5jex3bex_Data_fehx3020,Graph_from_c1lep5jex3bex_Data_fely3020,Graph_from_c1lep5jex3bex_Data_fehy3020);
   grae->SetName("Graph_from_c1lep5jex3bex_Data");
   grae->SetTitle("FcncDiscriminant");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_c1lep5jex3bex_Data3020 = new TH1F("Graph_Graph_from_c1lep5jex3bex_Data3020","FcncDiscriminant",100,0,1.09999);
   Graph_Graph_from_c1lep5jex3bex_Data3020->SetMinimum(0);
   Graph_Graph_from_c1lep5jex3bex_Data3020->SetMaximum(2303.336);
   Graph_Graph_from_c1lep5jex3bex_Data3020->SetDirectory(0);
   Graph_Graph_from_c1lep5jex3bex_Data3020->SetStats(0);
   Graph_Graph_from_c1lep5jex3bex_Data3020->SetLineWidth(2);
   Graph_Graph_from_c1lep5jex3bex_Data3020->SetMarkerStyle(20);
   Graph_Graph_from_c1lep5jex3bex_Data3020->SetMarkerSize(1.2);
   Graph_Graph_from_c1lep5jex3bex_Data3020->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep5jex3bex_Data3020->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep5jex3bex_Data3020->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep5jex3bex_Data3020->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep5jex3bex_Data3020->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep5jex3bex_Data3020->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep5jex3bex_Data3020->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep5jex3bex_Data3020->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep5jex3bex_Data3020->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep5jex3bex_Data3020->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep5jex3bex_Data3020->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep5jex3bex_Data3020->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep5jex3bex_Data3020->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep5jex3bex_Data3020->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_c1lep5jex3bex_Data3020);
   
   grae->Draw("ep1 ");
   Double_t xAxis50[11] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1D *h_dummy_copy__45 = new TH1D("h_dummy_copy__45","FcncDiscriminant",10, xAxis50);
   h_dummy_copy__45->SetEntries(1363480);
   h_dummy_copy__45->SetDirectory(0);
   h_dummy_copy__45->SetStats(0);
   h_dummy_copy__45->SetMarkerStyle(20);
   h_dummy_copy__45->SetMarkerSize(1.2);
   h_dummy_copy__45->GetXaxis()->SetTitle("LH discriminant");
   h_dummy_copy__45->GetXaxis()->SetRange(1,20);
   h_dummy_copy__45->GetXaxis()->SetLabelFont(43);
   h_dummy_copy__45->GetXaxis()->SetLabelSize(21);
   h_dummy_copy__45->GetXaxis()->SetTitleSize(21);
   h_dummy_copy__45->GetXaxis()->SetTitleOffset(1.4);
   h_dummy_copy__45->GetXaxis()->SetTitleFont(43);
   h_dummy_copy__45->GetYaxis()->SetTitle("Events / 0.1");
   h_dummy_copy__45->GetYaxis()->SetLabelFont(43);
   h_dummy_copy__45->GetYaxis()->SetLabelSize(16.8);
   h_dummy_copy__45->GetYaxis()->SetTitleSize(21);
   h_dummy_copy__45->GetYaxis()->SetTitleOffset(2.4);
   h_dummy_copy__45->GetYaxis()->SetTitleFont(43);
   h_dummy_copy__45->GetZaxis()->SetLabelFont(43);
   h_dummy_copy__45->GetZaxis()->SetLabelSize(21);
   h_dummy_copy__45->GetZaxis()->SetTitleSize(21);
   h_dummy_copy__45->GetZaxis()->SetTitleFont(43);
   h_dummy_copy__45->Draw("sameaxis");
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
   
   TLegend *leg = new TLegend(0.5308,0.63,0.92,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(43);
   leg->SetTextSize(18.9);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("c1lep5jex3bex_Data","Data","lep");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep5jex3bex_uHcW","t#bar{t}#rightarrowWbHc (BR=1%)","f");
   entry->SetFillColor(2);
   entry->SetFillStyle(1001);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep5jex3bex_ttbarlight","t#bar{t}+light-jets","f");
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep5jex3bex_ttbarcc","t#bar{t}+#geq1c","f");

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
   entry=leg->AddEntry("c1lep5jex3bex_ttbarbb","t#bar{t}+#geq1b","f");

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
   entry=leg->AddEntry("c1lep5jex3bex_topEW","Non-t#bar{t}","f");

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
   c_c1lep5jex3bex->cd();
   c_c1lep5jex3bex->Modified();
   c_c1lep5jex3bex->cd();
   c_c1lep5jex3bex->SetSelected(c_c1lep5jex3bex);
}
