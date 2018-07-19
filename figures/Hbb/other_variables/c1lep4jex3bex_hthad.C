void c1lep4jex3bex_hthad()
{
//=========Macro generated from canvas: c_c1lep4jex3bex_hthad/c_c1lep4jex3bex_hthad
//=========  (Thu Jul 19 17:38:04 2018) by ROOT version6.04/14
   TCanvas *c_c1lep4jex3bex_hthad = new TCanvas("c_c1lep4jex3bex_hthad", "c_c1lep4jex3bex_hthad",0,0,600,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c_c1lep4jex3bex_hthad->SetHighLightColor(2);
   c_c1lep4jex3bex_hthad->Range(0,0,1,1);
   c_c1lep4jex3bex_hthad->SetFillColor(0);
   c_c1lep4jex3bex_hthad->SetBorderMode(0);
   c_c1lep4jex3bex_hthad->SetBorderSize(2);
   c_c1lep4jex3bex_hthad->SetTickx(1);
   c_c1lep4jex3bex_hthad->SetTicky(1);
   c_c1lep4jex3bex_hthad->SetLeftMargin(0.16);
   c_c1lep4jex3bex_hthad->SetRightMargin(0.05);
   c_c1lep4jex3bex_hthad->SetTopMargin(0.05);
   c_c1lep4jex3bex_hthad->SetBottomMargin(0.16);
   c_c1lep4jex3bex_hthad->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0,1,0.28);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-20.98765,-0.0873016,843.2099,1.5);
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
   Double_t xAxis141[8] = {100, 200, 300, 400, 500, 600, 700, 800}; 
   
   TH1D *h_dummy2__127 = new TH1D("h_dummy2__127","Data/MC",7, xAxis141);
   h_dummy2__127->SetMinimum(0.5);
   h_dummy2__127->SetMaximum(1.5);
   h_dummy2__127->SetEntries(2920942);
   h_dummy2__127->SetDirectory(0);
   h_dummy2__127->SetStats(0);
   h_dummy2__127->SetMarkerStyle(20);
   h_dummy2__127->SetMarkerSize(1.2);
   h_dummy2__127->GetXaxis()->SetTitle("H_{T}^{had.} [GeV]");
   h_dummy2__127->GetXaxis()->SetRange(1,100);
   h_dummy2__127->GetXaxis()->SetLabelFont(43);
   h_dummy2__127->GetXaxis()->SetLabelOffset(0.025);
   h_dummy2__127->GetXaxis()->SetLabelSize(16.8);
   h_dummy2__127->GetXaxis()->SetTitleSize(21);
   h_dummy2__127->GetXaxis()->SetTitleOffset(5.05);
   h_dummy2__127->GetXaxis()->SetTitleFont(43);
   h_dummy2__127->GetYaxis()->SetTitle("Data / Bkg");
   h_dummy2__127->GetYaxis()->SetNdivisions(-504);
   h_dummy2__127->GetYaxis()->SetLabelFont(43);
   h_dummy2__127->GetYaxis()->SetLabelOffset(0.02);
   h_dummy2__127->GetYaxis()->SetLabelSize(16.8);
   h_dummy2__127->GetYaxis()->SetTitleSize(21);
   h_dummy2__127->GetYaxis()->SetTitleOffset(2.4);
   h_dummy2__127->GetYaxis()->SetTitleFont(43);
   h_dummy2__127->GetZaxis()->SetLabelFont(43);
   h_dummy2__127->GetZaxis()->SetLabelSize(21);
   h_dummy2__127->GetZaxis()->SetTitleSize(21);
   h_dummy2__127->GetZaxis()->SetTitleFont(43);
   h_dummy2__127->Draw("HIST");
   
   Double_t Graph_from_h_ratio_fx3057[7] = {
   150,
   250,
   350,
   450,
   550,
   650,
   750};
   Double_t Graph_from_h_ratio_fy3057[7] = {
   1.095479,
   1.137085,
   1.06354,
   1.125208,
   1.088602,
   1.383257,
   1.024103};
   Double_t Graph_from_h_ratio_felx3057[7] = {
   49.9,
   49.9,
   49.9,
   49.9,
   49.9,
   49.9,
   49.9};
   Double_t Graph_from_h_ratio_fely3057[7] = {
   0.02543501,
   0.01550251,
   0.02165086,
   0.03631592,
   0.0582715,
   0.1051671,
   0.1174726};
   Double_t Graph_from_h_ratio_fehx3057[7] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t Graph_from_h_ratio_fehy3057[7] = {
   0.02543501,
   0.01550251,
   0.02165086,
   0.03631592,
   0.0582715,
   0.1051671,
   0.1174726};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(7,Graph_from_h_ratio_fx3057,Graph_from_h_ratio_fy3057,Graph_from_h_ratio_felx3057,Graph_from_h_ratio_fehx3057,Graph_from_h_ratio_fely3057,Graph_from_h_ratio_fehy3057);
   grae->SetName("Graph_from_h_ratio");
   grae->SetTitle("");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(24);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_h_ratio3057 = new TH1F("Graph_Graph_from_h_ratio3057","",100,30.11,869.99);
   Graph_Graph_from_h_ratio3057->SetMinimum(0.8484506);
   Graph_Graph_from_h_ratio3057->SetMaximum(1.546603);
   Graph_Graph_from_h_ratio3057->SetDirectory(0);
   Graph_Graph_from_h_ratio3057->SetStats(0);
   Graph_Graph_from_h_ratio3057->SetLineWidth(2);
   Graph_Graph_from_h_ratio3057->SetMarkerStyle(20);
   Graph_Graph_from_h_ratio3057->SetMarkerSize(1.2);
   Graph_Graph_from_h_ratio3057->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3057->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3057->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3057->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3057->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3057->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3057->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3057->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3057->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3057->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3057->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3057->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3057->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3057->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_h_ratio3057);
   
   grae->Draw("pe0");
   TLine *line = new TLine(100,1,800,1);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t g_ratio2_fx3058[7] = {
   150,
   250,
   350,
   450,
   550,
   650,
   750};
   Double_t g_ratio2_fy3058[7] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t g_ratio2_felx3058[7] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t g_ratio2_fely3058[7] = {
   0.2009064,
   0.2016985,
   0.190063,
   0.187706,
   0.1998008,
   0.2151174,
   0.2471216};
   Double_t g_ratio2_fehx3058[7] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t g_ratio2_fehy3058[7] = {
   0.2009064,
   0.2016985,
   0.190063,
   0.187706,
   0.1998008,
   0.2151174,
   0.2471216};
   grae = new TGraphAsymmErrors(7,g_ratio2_fx3058,g_ratio2_fy3058,g_ratio2_felx3058,g_ratio2_fehx3058,g_ratio2_fely3058,g_ratio2_fehy3058);
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
   
   TH1F *Graph_g_ratio23058 = new TH1F("Graph_g_ratio23058","",100,30,870);
   Graph_g_ratio23058->SetMinimum(0.7034541);
   Graph_g_ratio23058->SetMaximum(1.296546);
   Graph_g_ratio23058->SetDirectory(0);
   Graph_g_ratio23058->SetStats(0);
   Graph_g_ratio23058->SetLineWidth(2);
   Graph_g_ratio23058->SetMarkerStyle(20);
   Graph_g_ratio23058->SetMarkerSize(1.2);
   Graph_g_ratio23058->GetXaxis()->SetLabelFont(43);
   Graph_g_ratio23058->GetXaxis()->SetLabelSize(21);
   Graph_g_ratio23058->GetXaxis()->SetTitleSize(21);
   Graph_g_ratio23058->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23058->GetXaxis()->SetTitleFont(43);
   Graph_g_ratio23058->GetYaxis()->SetLabelFont(43);
   Graph_g_ratio23058->GetYaxis()->SetLabelSize(21);
   Graph_g_ratio23058->GetYaxis()->SetTitleSize(21);
   Graph_g_ratio23058->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23058->GetYaxis()->SetTitleFont(43);
   Graph_g_ratio23058->GetZaxis()->SetLabelFont(43);
   Graph_g_ratio23058->GetZaxis()->SetLabelSize(21);
   Graph_g_ratio23058->GetZaxis()->SetTitleSize(21);
   Graph_g_ratio23058->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_ratio23058);
   
   grae->Draw("e2");
   Double_t xAxis142[8] = {100, 200, 300, 400, 500, 600, 700, 800}; 
   
   TH1D *h_dummy2_copy__128 = new TH1D("h_dummy2_copy__128","Data/MC",7, xAxis142);
   h_dummy2_copy__128->SetMinimum(0.5);
   h_dummy2_copy__128->SetMaximum(1.5);
   h_dummy2_copy__128->SetEntries(2920942);
   h_dummy2_copy__128->SetDirectory(0);
   h_dummy2_copy__128->SetStats(0);
   h_dummy2_copy__128->SetMarkerStyle(20);
   h_dummy2_copy__128->SetMarkerSize(1.2);
   h_dummy2_copy__128->GetXaxis()->SetTitle("H_{T}^{had.} [GeV]");
   h_dummy2_copy__128->GetXaxis()->SetRange(1,100);
   h_dummy2_copy__128->GetXaxis()->SetLabelFont(43);
   h_dummy2_copy__128->GetXaxis()->SetLabelOffset(0.025);
   h_dummy2_copy__128->GetXaxis()->SetLabelSize(16.8);
   h_dummy2_copy__128->GetXaxis()->SetTitleSize(21);
   h_dummy2_copy__128->GetXaxis()->SetTitleOffset(5.05);
   h_dummy2_copy__128->GetXaxis()->SetTitleFont(43);
   h_dummy2_copy__128->GetYaxis()->SetTitle("Data / Bkg");
   h_dummy2_copy__128->GetYaxis()->SetNdivisions(-504);
   h_dummy2_copy__128->GetYaxis()->SetLabelFont(43);
   h_dummy2_copy__128->GetYaxis()->SetLabelOffset(0.02);
   h_dummy2_copy__128->GetYaxis()->SetLabelSize(16.8);
   h_dummy2_copy__128->GetYaxis()->SetTitleSize(21);
   h_dummy2_copy__128->GetYaxis()->SetTitleOffset(2.4);
   h_dummy2_copy__128->GetYaxis()->SetTitleFont(43);
   h_dummy2_copy__128->GetZaxis()->SetLabelFont(43);
   h_dummy2_copy__128->GetZaxis()->SetLabelSize(21);
   h_dummy2_copy__128->GetZaxis()->SetTitleSize(21);
   h_dummy2_copy__128->GetZaxis()->SetTitleFont(43);
   h_dummy2_copy__128->Draw("sameaxis");
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
   c_c1lep4jex3bex_hthad->cd();
  
// ------------>Primitives in pad: pad0
   TPad *pad0 = new TPad("pad0", "pad0",0,0.2,1,1);
   pad0->Draw();
   pad0->cd();
   pad0->Range(-20.98765,-1154.827,843.2099,10393.44);
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
   Double_t xAxis143[8] = {100, 200, 300, 400, 500, 600, 700, 800}; 
   
   TH1D *h_dummy__129 = new TH1D("h_dummy__129","",7, xAxis143);
   h_dummy__129->SetMinimum(0);
   h_dummy__129->SetMaximum(9816.027);
   h_dummy__129->SetEntries(2920942);
   h_dummy__129->SetDirectory(0);
   h_dummy__129->SetStats(0);
   h_dummy__129->SetMarkerStyle(20);
   h_dummy__129->SetMarkerSize(1.2);
   h_dummy__129->GetXaxis()->SetRange(1,100);
   h_dummy__129->GetXaxis()->SetLabelFont(43);
   h_dummy__129->GetXaxis()->SetLabelSize(0);
   h_dummy__129->GetXaxis()->SetTitleSize(21);
   h_dummy__129->GetXaxis()->SetTitleOffset(1.4);
   h_dummy__129->GetXaxis()->SetTitleFont(43);
   h_dummy__129->GetYaxis()->SetTitle("Events / 100 GeV");
   h_dummy__129->GetYaxis()->SetLabelFont(43);
   h_dummy__129->GetYaxis()->SetLabelSize(16.8);
   h_dummy__129->GetYaxis()->SetTitleSize(21);
   h_dummy__129->GetYaxis()->SetTitleOffset(2.4);
   h_dummy__129->GetYaxis()->SetTitleFont(43);
   h_dummy__129->GetZaxis()->SetLabelFont(43);
   h_dummy__129->GetZaxis()->SetLabelSize(21);
   h_dummy__129->GetZaxis()->SetTitleSize(21);
   h_dummy__129->GetZaxis()->SetTitleFont(43);
   h_dummy__129->Draw("HIST");
   
   THStack *h_stack = new THStack();
   h_stack->SetName("h_stack");
   h_stack->SetTitle("h_stack");
   Double_t xAxis144[8] = {100, 200, 300, 400, 500, 600, 700, 800}; 
   
   TH1F *h_stack_stack_15 = new TH1F("h_stack_stack_15","h_stack",7, xAxis144);
   h_stack_stack_15->SetMinimum(0);
   h_stack_stack_15->SetMaximum(5635.653);
   h_stack_stack_15->SetDirectory(0);
   h_stack_stack_15->SetStats(0);
   h_stack_stack_15->SetLineWidth(2);
   h_stack_stack_15->SetMarkerStyle(20);
   h_stack_stack_15->SetMarkerSize(1.2);
   h_stack_stack_15->GetXaxis()->SetLabelFont(43);
   h_stack_stack_15->GetXaxis()->SetLabelSize(21);
   h_stack_stack_15->GetXaxis()->SetTitleSize(21);
   h_stack_stack_15->GetXaxis()->SetTitleOffset(1.4);
   h_stack_stack_15->GetXaxis()->SetTitleFont(43);
   h_stack_stack_15->GetYaxis()->SetLabelFont(43);
   h_stack_stack_15->GetYaxis()->SetLabelSize(21);
   h_stack_stack_15->GetYaxis()->SetTitleSize(21);
   h_stack_stack_15->GetYaxis()->SetTitleOffset(1.4);
   h_stack_stack_15->GetYaxis()->SetTitleFont(43);
   h_stack_stack_15->GetZaxis()->SetLabelFont(43);
   h_stack_stack_15->GetZaxis()->SetLabelSize(21);
   h_stack_stack_15->GetZaxis()->SetTitleSize(21);
   h_stack_stack_15->GetZaxis()->SetTitleFont(43);
   h_stack->SetHistogram(h_stack_stack_15);
   
   Double_t xAxis145[8] = {100, 200, 300, 400, 500, 600, 700, 800}; 
   
   TH1D *c1lep4jex3bex_hthad_topEW__130 = new TH1D("c1lep4jex3bex_hthad_topEW__130","",7, xAxis145);
   c1lep4jex3bex_hthad_topEW__130->SetBinContent(1,484.9085);
   c1lep4jex3bex_hthad_topEW__130->SetBinContent(2,718.4782);
   c1lep4jex3bex_hthad_topEW__130->SetBinContent(3,362.2222);
   c1lep4jex3bex_hthad_topEW__130->SetBinContent(4,160.0709);
   c1lep4jex3bex_hthad_topEW__130->SetBinContent(5,65.78449);
   c1lep4jex3bex_hthad_topEW__130->SetBinContent(6,21.95272);
   c1lep4jex3bex_hthad_topEW__130->SetBinContent(7,12.5704);
   c1lep4jex3bex_hthad_topEW__130->SetBinContent(8,9.100259);
   c1lep4jex3bex_hthad_topEW__130->SetBinError(1,50.61044);
   c1lep4jex3bex_hthad_topEW__130->SetBinError(2,55.12676);
   c1lep4jex3bex_hthad_topEW__130->SetBinError(3,39.32061);
   c1lep4jex3bex_hthad_topEW__130->SetBinError(4,26.53343);
   c1lep4jex3bex_hthad_topEW__130->SetBinError(5,14.33876);
   c1lep4jex3bex_hthad_topEW__130->SetBinError(6,4.467006);
   c1lep4jex3bex_hthad_topEW__130->SetBinError(7,5.275257);
   c1lep4jex3bex_hthad_topEW__130->SetBinError(8,1.865189);
   c1lep4jex3bex_hthad_topEW__130->SetEntries(2895033);
   c1lep4jex3bex_hthad_topEW__130->SetDirectory(0);
   c1lep4jex3bex_hthad_topEW__130->SetStats(0);

   ci = TColor::GetColor("#66cc66");
   c1lep4jex3bex_hthad_topEW__130->SetFillColor(ci);
   c1lep4jex3bex_hthad_topEW__130->SetMarkerStyle(20);
   c1lep4jex3bex_hthad_topEW__130->SetMarkerSize(1.2);
   c1lep4jex3bex_hthad_topEW__130->GetXaxis()->SetTitle("H_{T}^{had} [GeV]");
   c1lep4jex3bex_hthad_topEW__130->GetXaxis()->SetRange(1,100);
   c1lep4jex3bex_hthad_topEW__130->GetXaxis()->SetLabelFont(43);
   c1lep4jex3bex_hthad_topEW__130->GetXaxis()->SetLabelSize(21);
   c1lep4jex3bex_hthad_topEW__130->GetXaxis()->SetTitleSize(21);
   c1lep4jex3bex_hthad_topEW__130->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_hthad_topEW__130->GetXaxis()->SetTitleFont(43);
   c1lep4jex3bex_hthad_topEW__130->GetYaxis()->SetLabelFont(43);
   c1lep4jex3bex_hthad_topEW__130->GetYaxis()->SetLabelSize(21);
   c1lep4jex3bex_hthad_topEW__130->GetYaxis()->SetTitleSize(21);
   c1lep4jex3bex_hthad_topEW__130->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_hthad_topEW__130->GetYaxis()->SetTitleFont(43);
   c1lep4jex3bex_hthad_topEW__130->GetZaxis()->SetLabelFont(43);
   c1lep4jex3bex_hthad_topEW__130->GetZaxis()->SetLabelSize(21);
   c1lep4jex3bex_hthad_topEW__130->GetZaxis()->SetTitleSize(21);
   c1lep4jex3bex_hthad_topEW__130->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jex3bex_hthad_topEW,"");
   Double_t xAxis146[8] = {100, 200, 300, 400, 500, 600, 700, 800}; 
   
   TH1D *c1lep4jex3bex_hthad_ttbarbb__131 = new TH1D("c1lep4jex3bex_hthad_ttbarbb__131","",7, xAxis146);
   c1lep4jex3bex_hthad_ttbarbb__131->SetBinContent(1,364.8907);
   c1lep4jex3bex_hthad_ttbarbb__131->SetBinContent(2,1272.454);
   c1lep4jex3bex_hthad_ttbarbb__131->SetBinContent(3,742.0128);
   c1lep4jex3bex_hthad_ttbarbb__131->SetBinContent(4,297.0751);
   c1lep4jex3bex_hthad_ttbarbb__131->SetBinContent(5,111.5624);
   c1lep4jex3bex_hthad_ttbarbb__131->SetBinContent(6,50.56119);
   c1lep4jex3bex_hthad_ttbarbb__131->SetBinContent(7,29.17145);
   c1lep4jex3bex_hthad_ttbarbb__131->SetBinContent(8,28.88763);
   c1lep4jex3bex_hthad_ttbarbb__131->SetBinError(1,12.32717);
   c1lep4jex3bex_hthad_ttbarbb__131->SetBinError(2,23.07852);
   c1lep4jex3bex_hthad_ttbarbb__131->SetBinError(3,18.30187);
   c1lep4jex3bex_hthad_ttbarbb__131->SetBinError(4,10.87082);
   c1lep4jex3bex_hthad_ttbarbb__131->SetBinError(5,7.276595);
   c1lep4jex3bex_hthad_ttbarbb__131->SetBinError(6,4.102364);
   c1lep4jex3bex_hthad_ttbarbb__131->SetBinError(7,5.249191);
   c1lep4jex3bex_hthad_ttbarbb__131->SetBinError(8,3.454616);
   c1lep4jex3bex_hthad_ttbarbb__131->SetEntries(10166);
   c1lep4jex3bex_hthad_ttbarbb__131->SetDirectory(0);
   c1lep4jex3bex_hthad_ttbarbb__131->SetStats(0);

   ci = TColor::GetColor("#6666cc");
   c1lep4jex3bex_hthad_ttbarbb__131->SetFillColor(ci);
   c1lep4jex3bex_hthad_ttbarbb__131->SetMarkerStyle(20);
   c1lep4jex3bex_hthad_ttbarbb__131->SetMarkerSize(1.2);
   c1lep4jex3bex_hthad_ttbarbb__131->GetXaxis()->SetTitle("H_{T}^{had} [GeV]");
   c1lep4jex3bex_hthad_ttbarbb__131->GetXaxis()->SetRange(1,100);
   c1lep4jex3bex_hthad_ttbarbb__131->GetXaxis()->SetLabelFont(43);
   c1lep4jex3bex_hthad_ttbarbb__131->GetXaxis()->SetLabelSize(21);
   c1lep4jex3bex_hthad_ttbarbb__131->GetXaxis()->SetTitleSize(21);
   c1lep4jex3bex_hthad_ttbarbb__131->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_hthad_ttbarbb__131->GetXaxis()->SetTitleFont(43);
   c1lep4jex3bex_hthad_ttbarbb__131->GetYaxis()->SetLabelFont(43);
   c1lep4jex3bex_hthad_ttbarbb__131->GetYaxis()->SetLabelSize(21);
   c1lep4jex3bex_hthad_ttbarbb__131->GetYaxis()->SetTitleSize(21);
   c1lep4jex3bex_hthad_ttbarbb__131->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_hthad_ttbarbb__131->GetYaxis()->SetTitleFont(43);
   c1lep4jex3bex_hthad_ttbarbb__131->GetZaxis()->SetLabelFont(43);
   c1lep4jex3bex_hthad_ttbarbb__131->GetZaxis()->SetLabelSize(21);
   c1lep4jex3bex_hthad_ttbarbb__131->GetZaxis()->SetTitleSize(21);
   c1lep4jex3bex_hthad_ttbarbb__131->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jex3bex_hthad_ttbarbb,"");
   Double_t xAxis147[8] = {100, 200, 300, 400, 500, 600, 700, 800}; 
   
   TH1D *c1lep4jex3bex_hthad_ttbarcc__132 = new TH1D("c1lep4jex3bex_hthad_ttbarcc__132","",7, xAxis147);
   c1lep4jex3bex_hthad_ttbarcc__132->SetBinContent(1,152.7005);
   c1lep4jex3bex_hthad_ttbarcc__132->SetBinContent(2,489.0225);
   c1lep4jex3bex_hthad_ttbarcc__132->SetBinContent(3,249.5276);
   c1lep4jex3bex_hthad_ttbarcc__132->SetBinContent(4,96.3798);
   c1lep4jex3bex_hthad_ttbarcc__132->SetBinContent(5,36.84325);
   c1lep4jex3bex_hthad_ttbarcc__132->SetBinContent(6,12.99488);
   c1lep4jex3bex_hthad_ttbarcc__132->SetBinContent(7,8.640319);
   c1lep4jex3bex_hthad_ttbarcc__132->SetBinContent(8,6.541292);
   c1lep4jex3bex_hthad_ttbarcc__132->SetBinError(1,8.797226);
   c1lep4jex3bex_hthad_ttbarcc__132->SetBinError(2,14.09525);
   c1lep4jex3bex_hthad_ttbarcc__132->SetBinError(3,10.71078);
   c1lep4jex3bex_hthad_ttbarcc__132->SetBinError(4,6.328559);
   c1lep4jex3bex_hthad_ttbarcc__132->SetBinError(5,3.890503);
   c1lep4jex3bex_hthad_ttbarcc__132->SetBinError(6,2.041432);
   c1lep4jex3bex_hthad_ttbarcc__132->SetBinError(7,1.803715);
   c1lep4jex3bex_hthad_ttbarcc__132->SetBinError(8,1.93047);
   c1lep4jex3bex_hthad_ttbarcc__132->SetEntries(3206);
   c1lep4jex3bex_hthad_ttbarcc__132->SetDirectory(0);
   c1lep4jex3bex_hthad_ttbarcc__132->SetStats(0);

   ci = TColor::GetColor("#ccccff");
   c1lep4jex3bex_hthad_ttbarcc__132->SetFillColor(ci);
   c1lep4jex3bex_hthad_ttbarcc__132->SetMarkerStyle(20);
   c1lep4jex3bex_hthad_ttbarcc__132->SetMarkerSize(1.2);
   c1lep4jex3bex_hthad_ttbarcc__132->GetXaxis()->SetTitle("H_{T}^{had} [GeV]");
   c1lep4jex3bex_hthad_ttbarcc__132->GetXaxis()->SetRange(1,100);
   c1lep4jex3bex_hthad_ttbarcc__132->GetXaxis()->SetLabelFont(43);
   c1lep4jex3bex_hthad_ttbarcc__132->GetXaxis()->SetLabelSize(21);
   c1lep4jex3bex_hthad_ttbarcc__132->GetXaxis()->SetTitleSize(21);
   c1lep4jex3bex_hthad_ttbarcc__132->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_hthad_ttbarcc__132->GetXaxis()->SetTitleFont(43);
   c1lep4jex3bex_hthad_ttbarcc__132->GetYaxis()->SetLabelFont(43);
   c1lep4jex3bex_hthad_ttbarcc__132->GetYaxis()->SetLabelSize(21);
   c1lep4jex3bex_hthad_ttbarcc__132->GetYaxis()->SetTitleSize(21);
   c1lep4jex3bex_hthad_ttbarcc__132->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_hthad_ttbarcc__132->GetYaxis()->SetTitleFont(43);
   c1lep4jex3bex_hthad_ttbarcc__132->GetZaxis()->SetLabelFont(43);
   c1lep4jex3bex_hthad_ttbarcc__132->GetZaxis()->SetLabelSize(21);
   c1lep4jex3bex_hthad_ttbarcc__132->GetZaxis()->SetTitleSize(21);
   c1lep4jex3bex_hthad_ttbarcc__132->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jex3bex_hthad_ttbarcc,"");
   Double_t xAxis148[8] = {100, 200, 300, 400, 500, 600, 700, 800}; 
   
   TH1D *c1lep4jex3bex_hthad_ttbarlight__133 = new TH1D("c1lep4jex3bex_hthad_ttbarlight__133","",7, xAxis148);
   c1lep4jex3bex_hthad_ttbarlight__133->SetBinContent(1,690.8242);
   c1lep4jex3bex_hthad_ttbarlight__133->SetBinContent(2,2251.441);
   c1lep4jex3bex_hthad_ttbarlight__133->SetBinContent(3,915.0751);
   c1lep4jex3bex_hthad_ttbarlight__133->SetBinContent(4,299.6502);
   c1lep4jex3bex_hthad_ttbarlight__133->SetBinContent(5,106.4047);
   c1lep4jex3bex_hthad_ttbarlight__133->SetBinContent(6,39.55835);
   c1lep4jex3bex_hthad_ttbarlight__133->SetBinContent(7,23.82914);
   c1lep4jex3bex_hthad_ttbarlight__133->SetBinContent(8,9.784855);
   c1lep4jex3bex_hthad_ttbarlight__133->SetBinError(1,19.41799);
   c1lep4jex3bex_hthad_ttbarlight__133->SetBinError(2,34.94534);
   c1lep4jex3bex_hthad_ttbarlight__133->SetBinError(3,21.96688);
   c1lep4jex3bex_hthad_ttbarlight__133->SetBinError(4,12.00434);
   c1lep4jex3bex_hthad_ttbarlight__133->SetBinError(5,7.07635);
   c1lep4jex3bex_hthad_ttbarlight__133->SetBinError(6,4.538227);
   c1lep4jex3bex_hthad_ttbarlight__133->SetBinError(7,4.33492);
   c1lep4jex3bex_hthad_ttbarlight__133->SetBinError(8,1.77221);
   c1lep4jex3bex_hthad_ttbarlight__133->SetEntries(12530);
   c1lep4jex3bex_hthad_ttbarlight__133->SetDirectory(0);
   c1lep4jex3bex_hthad_ttbarlight__133->SetStats(0);
   c1lep4jex3bex_hthad_ttbarlight__133->SetMarkerStyle(20);
   c1lep4jex3bex_hthad_ttbarlight__133->SetMarkerSize(1.2);
   c1lep4jex3bex_hthad_ttbarlight__133->GetXaxis()->SetTitle("H_{T}^{had} [GeV]");
   c1lep4jex3bex_hthad_ttbarlight__133->GetXaxis()->SetRange(1,100);
   c1lep4jex3bex_hthad_ttbarlight__133->GetXaxis()->SetLabelFont(43);
   c1lep4jex3bex_hthad_ttbarlight__133->GetXaxis()->SetLabelSize(21);
   c1lep4jex3bex_hthad_ttbarlight__133->GetXaxis()->SetTitleSize(21);
   c1lep4jex3bex_hthad_ttbarlight__133->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_hthad_ttbarlight__133->GetXaxis()->SetTitleFont(43);
   c1lep4jex3bex_hthad_ttbarlight__133->GetYaxis()->SetLabelFont(43);
   c1lep4jex3bex_hthad_ttbarlight__133->GetYaxis()->SetLabelSize(21);
   c1lep4jex3bex_hthad_ttbarlight__133->GetYaxis()->SetTitleSize(21);
   c1lep4jex3bex_hthad_ttbarlight__133->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_hthad_ttbarlight__133->GetYaxis()->SetTitleFont(43);
   c1lep4jex3bex_hthad_ttbarlight__133->GetZaxis()->SetLabelFont(43);
   c1lep4jex3bex_hthad_ttbarlight__133->GetZaxis()->SetLabelSize(21);
   c1lep4jex3bex_hthad_ttbarlight__133->GetZaxis()->SetTitleSize(21);
   c1lep4jex3bex_hthad_ttbarlight__133->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jex3bex_hthad_ttbarlight,"");
   Double_t xAxis149[8] = {100, 200, 300, 400, 500, 600, 700, 800}; 
   
   TH1D *c1lep4jex3bex_hthad_uHcW__134 = new TH1D("c1lep4jex3bex_hthad_uHcW__134","",7, xAxis149);
   c1lep4jex3bex_hthad_uHcW__134->SetBinContent(1,242.2303);
   c1lep4jex3bex_hthad_uHcW__134->SetBinContent(2,635.8934);
   c1lep4jex3bex_hthad_uHcW__134->SetBinContent(3,241.2512);
   c1lep4jex3bex_hthad_uHcW__134->SetBinContent(4,97.44248);
   c1lep4jex3bex_hthad_uHcW__134->SetBinContent(5,23.7692);
   c1lep4jex3bex_hthad_uHcW__134->SetBinContent(6,8.673547);
   c1lep4jex3bex_hthad_uHcW__134->SetBinContent(7,5.951231);
   c1lep4jex3bex_hthad_uHcW__134->SetBinContent(8,5.934042);
   c1lep4jex3bex_hthad_uHcW__134->SetBinError(1,14.67094);
   c1lep4jex3bex_hthad_uHcW__134->SetBinError(2,22.80698);
   c1lep4jex3bex_hthad_uHcW__134->SetBinError(3,14.6905);
   c1lep4jex3bex_hthad_uHcW__134->SetBinError(4,8.963822);
   c1lep4jex3bex_hthad_uHcW__134->SetBinError(5,4.787207);
   c1lep4jex3bex_hthad_uHcW__134->SetBinError(6,2.657155);
   c1lep4jex3bex_hthad_uHcW__134->SetBinError(7,2.130844);
   c1lep4jex3bex_hthad_uHcW__134->SetBinError(8,1.863454);
   c1lep4jex3bex_hthad_uHcW__134->SetEntries(5559);
   c1lep4jex3bex_hthad_uHcW__134->SetDirectory(0);
   c1lep4jex3bex_hthad_uHcW__134->SetStats(0);
   c1lep4jex3bex_hthad_uHcW__134->SetFillColor(2);
   c1lep4jex3bex_hthad_uHcW__134->SetLineColor(2);
   c1lep4jex3bex_hthad_uHcW__134->SetMarkerStyle(20);
   c1lep4jex3bex_hthad_uHcW__134->SetMarkerSize(1.2);
   c1lep4jex3bex_hthad_uHcW__134->GetXaxis()->SetTitle("H_{T}^{had} [GeV]");
   c1lep4jex3bex_hthad_uHcW__134->GetXaxis()->SetRange(1,100);
   c1lep4jex3bex_hthad_uHcW__134->GetXaxis()->SetLabelFont(43);
   c1lep4jex3bex_hthad_uHcW__134->GetXaxis()->SetLabelSize(21);
   c1lep4jex3bex_hthad_uHcW__134->GetXaxis()->SetTitleSize(21);
   c1lep4jex3bex_hthad_uHcW__134->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_hthad_uHcW__134->GetXaxis()->SetTitleFont(43);
   c1lep4jex3bex_hthad_uHcW__134->GetYaxis()->SetLabelFont(43);
   c1lep4jex3bex_hthad_uHcW__134->GetYaxis()->SetLabelSize(21);
   c1lep4jex3bex_hthad_uHcW__134->GetYaxis()->SetTitleSize(21);
   c1lep4jex3bex_hthad_uHcW__134->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_hthad_uHcW__134->GetYaxis()->SetTitleFont(43);
   c1lep4jex3bex_hthad_uHcW__134->GetZaxis()->SetLabelFont(43);
   c1lep4jex3bex_hthad_uHcW__134->GetZaxis()->SetLabelSize(21);
   c1lep4jex3bex_hthad_uHcW__134->GetZaxis()->SetTitleSize(21);
   c1lep4jex3bex_hthad_uHcW__134->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jex3bex_hthad_uHcW,"");
   h_stack->Draw("hist same");
   
   Double_t g_totErr_fx3059[7] = {
   150,
   250,
   350,
   450,
   550,
   650,
   750};
   Double_t g_totErr_fy3059[7] = {
   1693.324,
   4731.396,
   2268.838,
   853.176,
   320.5948,
   125.0671,
   74.21131};
   Double_t g_totErr_felx3059[7] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t g_totErr_fely3059[7] = {
   340.1996,
   954.3152,
   431.222,
   160.1462,
   64.05511,
   26.90412,
   18.33922};
   Double_t g_totErr_fehx3059[7] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t g_totErr_fehy3059[7] = {
   340.1996,
   954.3152,
   431.222,
   160.1462,
   64.05511,
   26.90412,
   18.33922};
   grae = new TGraphAsymmErrors(7,g_totErr_fx3059,g_totErr_fy3059,g_totErr_felx3059,g_totErr_fehx3059,g_totErr_fely3059,g_totErr_fehy3059);
   grae->SetName("g_totErr");
   grae->SetTitle("");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(3354);
   grae->SetLineColor(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0);
   
   TH1F *Graph_g_totErr3059 = new TH1F("Graph_g_totErr3059","",100,30,870);
   Graph_g_totErr3059->SetMinimum(0);
   Graph_g_totErr3059->SetMaximum(6248.695);
   Graph_g_totErr3059->SetDirectory(0);
   Graph_g_totErr3059->SetStats(0);
   Graph_g_totErr3059->SetLineWidth(2);
   Graph_g_totErr3059->SetMarkerStyle(20);
   Graph_g_totErr3059->SetMarkerSize(1.2);
   Graph_g_totErr3059->GetXaxis()->SetLabelFont(43);
   Graph_g_totErr3059->GetXaxis()->SetLabelSize(21);
   Graph_g_totErr3059->GetXaxis()->SetTitleSize(21);
   Graph_g_totErr3059->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_totErr3059->GetXaxis()->SetTitleFont(43);
   Graph_g_totErr3059->GetYaxis()->SetLabelFont(43);
   Graph_g_totErr3059->GetYaxis()->SetLabelSize(21);
   Graph_g_totErr3059->GetYaxis()->SetTitleSize(21);
   Graph_g_totErr3059->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_totErr3059->GetYaxis()->SetTitleFont(43);
   Graph_g_totErr3059->GetZaxis()->SetLabelFont(43);
   Graph_g_totErr3059->GetZaxis()->SetLabelSize(21);
   Graph_g_totErr3059->GetZaxis()->SetTitleSize(21);
   Graph_g_totErr3059->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_totErr3059);
   
   grae->Draw("e2");
   
   Double_t Graph_from_c1lep4jex3bex_hthad_Data_fx3060[7] = {
   150,
   250,
   350,
   450,
   550,
   650,
   750};
   Double_t Graph_from_c1lep4jex3bex_hthad_Data_fy3060[7] = {
   1855,
   5380,
   2413,
   960,
   349,
   173,
   76};
   Double_t Graph_from_c1lep4jex3bex_hthad_Data_felx3060[7] = {
   49.9,
   49.9,
   49.9,
   49.9,
   49.9,
   49.9,
   49.9};
   Double_t Graph_from_c1lep4jex3bex_hthad_Data_fely3060[7] = {
   43.06971,
   73.34848,
   49.1223,
   30.98387,
   18.68154,
   13.15295,
   8.717798};
   Double_t Graph_from_c1lep4jex3bex_hthad_Data_fehx3060[7] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t Graph_from_c1lep4jex3bex_hthad_Data_fehy3060[7] = {
   43.06971,
   73.34848,
   49.1223,
   30.98387,
   18.68154,
   13.15295,
   8.717798};
   grae = new TGraphAsymmErrors(7,Graph_from_c1lep4jex3bex_hthad_Data_fx3060,Graph_from_c1lep4jex3bex_hthad_Data_fy3060,Graph_from_c1lep4jex3bex_hthad_Data_felx3060,Graph_from_c1lep4jex3bex_hthad_Data_fehx3060,Graph_from_c1lep4jex3bex_hthad_Data_fely3060,Graph_from_c1lep4jex3bex_hthad_Data_fehy3060);
   grae->SetName("Graph_from_c1lep4jex3bex_hthad_Data");
   grae->SetTitle("");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_c1lep4jex3bex_hthad_Data3060 = new TH1F("Graph_Graph_from_c1lep4jex3bex_hthad_Data3060","",100,30.11,869.99);
   Graph_Graph_from_c1lep4jex3bex_hthad_Data3060->SetMinimum(0);
   Graph_Graph_from_c1lep4jex3bex_hthad_Data3060->SetMaximum(5991.955);
   Graph_Graph_from_c1lep4jex3bex_hthad_Data3060->SetDirectory(0);
   Graph_Graph_from_c1lep4jex3bex_hthad_Data3060->SetStats(0);
   Graph_Graph_from_c1lep4jex3bex_hthad_Data3060->SetLineWidth(2);
   Graph_Graph_from_c1lep4jex3bex_hthad_Data3060->SetMarkerStyle(20);
   Graph_Graph_from_c1lep4jex3bex_hthad_Data3060->SetMarkerSize(1.2);
   Graph_Graph_from_c1lep4jex3bex_hthad_Data3060->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep4jex3bex_hthad_Data3060->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep4jex3bex_hthad_Data3060->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep4jex3bex_hthad_Data3060->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep4jex3bex_hthad_Data3060->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep4jex3bex_hthad_Data3060->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep4jex3bex_hthad_Data3060->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep4jex3bex_hthad_Data3060->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep4jex3bex_hthad_Data3060->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep4jex3bex_hthad_Data3060->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep4jex3bex_hthad_Data3060->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep4jex3bex_hthad_Data3060->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep4jex3bex_hthad_Data3060->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep4jex3bex_hthad_Data3060->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_c1lep4jex3bex_hthad_Data3060);
   
   grae->Draw("ep1 ");
   Double_t xAxis150[8] = {100, 200, 300, 400, 500, 600, 700, 800}; 
   
   TH1D *h_dummy_copy__135 = new TH1D("h_dummy_copy__135","",7, xAxis150);
   h_dummy_copy__135->SetEntries(2920942);
   h_dummy_copy__135->SetDirectory(0);
   h_dummy_copy__135->SetStats(0);
   h_dummy_copy__135->SetMarkerStyle(20);
   h_dummy_copy__135->SetMarkerSize(1.2);
   h_dummy_copy__135->GetXaxis()->SetTitle("H_{T}^{had.} [GeV]");
   h_dummy_copy__135->GetXaxis()->SetRange(1,100);
   h_dummy_copy__135->GetXaxis()->SetLabelFont(43);
   h_dummy_copy__135->GetXaxis()->SetLabelSize(21);
   h_dummy_copy__135->GetXaxis()->SetTitleSize(21);
   h_dummy_copy__135->GetXaxis()->SetTitleOffset(1.4);
   h_dummy_copy__135->GetXaxis()->SetTitleFont(43);
   h_dummy_copy__135->GetYaxis()->SetTitle("Events / 100 GeV");
   h_dummy_copy__135->GetYaxis()->SetLabelFont(43);
   h_dummy_copy__135->GetYaxis()->SetLabelSize(16.8);
   h_dummy_copy__135->GetYaxis()->SetTitleSize(21);
   h_dummy_copy__135->GetYaxis()->SetTitleOffset(2.4);
   h_dummy_copy__135->GetYaxis()->SetTitleFont(43);
   h_dummy_copy__135->GetZaxis()->SetLabelFont(43);
   h_dummy_copy__135->GetZaxis()->SetLabelSize(21);
   h_dummy_copy__135->GetZaxis()->SetTitleSize(21);
   h_dummy_copy__135->GetZaxis()->SetTitleFont(43);
   h_dummy_copy__135->Draw("sameaxis");
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
   TLegendEntry *entry=leg->AddEntry("c1lep4jex3bex_hthad_Data","Data","lep");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep4jex3bex_hthad_uHcW","t#bar{t}#rightarrowWbHc (BR=1%)","f");
   entry->SetFillColor(2);
   entry->SetFillStyle(1001);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep4jex3bex_hthad_ttbarlight","t#bar{t}+light","f");
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep4jex3bex_hthad_ttbarcc","t#bar{t}+cc","f");

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
   entry=leg->AddEntry("c1lep4jex3bex_hthad_ttbarbb","t#bar{t}+bb","f");

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
   entry=leg->AddEntry("c1lep4jex3bex_hthad_topEW","Non-t#bar{t}","f");

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
   c_c1lep4jex3bex_hthad->cd();
   c_c1lep4jex3bex_hthad->Modified();
   c_c1lep4jex3bex_hthad->cd();
   c_c1lep4jex3bex_hthad->SetSelected(c_c1lep4jex3bex_hthad);
}
