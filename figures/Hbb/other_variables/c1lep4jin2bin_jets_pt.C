void c1lep4jin2bin_jets_pt()
{
//=========Macro generated from canvas: c_c1lep4jin2bin_jets_pt/c_c1lep4jin2bin_jets_pt
//=========  (Thu Jul 19 17:38:06 2018) by ROOT version6.04/14
   TCanvas *c_c1lep4jin2bin_jets_pt = new TCanvas("c_c1lep4jin2bin_jets_pt", "c_c1lep4jin2bin_jets_pt",0,0,600,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c_c1lep4jin2bin_jets_pt->SetHighLightColor(2);
   c_c1lep4jin2bin_jets_pt->Range(0,0,1,1);
   c_c1lep4jin2bin_jets_pt->SetFillColor(0);
   c_c1lep4jin2bin_jets_pt->SetBorderMode(0);
   c_c1lep4jin2bin_jets_pt->SetBorderSize(2);
   c_c1lep4jin2bin_jets_pt->SetTickx(1);
   c_c1lep4jin2bin_jets_pt->SetTicky(1);
   c_c1lep4jin2bin_jets_pt->SetLeftMargin(0.16);
   c_c1lep4jin2bin_jets_pt->SetRightMargin(0.05);
   c_c1lep4jin2bin_jets_pt->SetTopMargin(0.05);
   c_c1lep4jin2bin_jets_pt->SetBottomMargin(0.16);
   c_c1lep4jin2bin_jets_pt->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0,1,0.28);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-26.85185,-0.0873016,343.5185,1.5);
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
   Double_t xAxis251[7] = {25, 75, 125, 175, 225, 275, 325}; 
   
   TH1D *h_dummy2__226 = new TH1D("h_dummy2__226","Data/MC",6, xAxis251);
   h_dummy2__226->SetMinimum(0.5);
   h_dummy2__226->SetMaximum(1.5);
   h_dummy2__226->SetEntries(5.635582e+07);
   h_dummy2__226->SetDirectory(0);
   h_dummy2__226->SetStats(0);
   h_dummy2__226->SetMarkerStyle(20);
   h_dummy2__226->SetMarkerSize(1.2);
   h_dummy2__226->GetXaxis()->SetTitle("jets p_{T} [GeV]");
   h_dummy2__226->GetXaxis()->SetRange(1,100);
   h_dummy2__226->GetXaxis()->SetLabelFont(43);
   h_dummy2__226->GetXaxis()->SetLabelOffset(0.025);
   h_dummy2__226->GetXaxis()->SetLabelSize(16.8);
   h_dummy2__226->GetXaxis()->SetTitleSize(21);
   h_dummy2__226->GetXaxis()->SetTitleOffset(5.05);
   h_dummy2__226->GetXaxis()->SetTitleFont(43);
   h_dummy2__226->GetYaxis()->SetTitle("Data / Bkg");
   h_dummy2__226->GetYaxis()->SetNdivisions(-504);
   h_dummy2__226->GetYaxis()->SetLabelFont(43);
   h_dummy2__226->GetYaxis()->SetLabelOffset(0.02);
   h_dummy2__226->GetYaxis()->SetLabelSize(16.8);
   h_dummy2__226->GetYaxis()->SetTitleSize(21);
   h_dummy2__226->GetYaxis()->SetTitleOffset(2.4);
   h_dummy2__226->GetYaxis()->SetTitleFont(43);
   h_dummy2__226->GetZaxis()->SetLabelFont(43);
   h_dummy2__226->GetZaxis()->SetLabelSize(21);
   h_dummy2__226->GetZaxis()->SetTitleSize(21);
   h_dummy2__226->GetZaxis()->SetTitleFont(43);
   h_dummy2__226->Draw("HIST");
   
   Double_t Graph_from_h_ratio_fx3101[6] = {
   50,
   100,
   150,
   200,
   250,
   300};
   Double_t Graph_from_h_ratio_fy3101[6] = {
   0.9672633,
   0.9445196,
   0.9342947,
   0.9451834,
   0.9730151,
   0.9660724};
   Double_t Graph_from_h_ratio_felx3101[6] = {
   24.95,
   24.95,
   24.95,
   24.95,
   24.95,
   24.95};
   Double_t Graph_from_h_ratio_fely3101[6] = {
   0.000552696,
   0.001024388,
   0.001767068,
   0.002981636,
   0.004693824,
   0.006645364};
   Double_t Graph_from_h_ratio_fehx3101[6] = {
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t Graph_from_h_ratio_fehy3101[6] = {
   0.000552696,
   0.001024388,
   0.001767068,
   0.002981636,
   0.004693824,
   0.006645364};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(6,Graph_from_h_ratio_fx3101,Graph_from_h_ratio_fy3101,Graph_from_h_ratio_felx3101,Graph_from_h_ratio_fehx3101,Graph_from_h_ratio_fely3101,Graph_from_h_ratio_fehy3101);
   grae->SetName("Graph_from_h_ratio");
   grae->SetTitle("");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(24);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_h_ratio3101 = new TH1F("Graph_Graph_from_h_ratio3101","",100,0,354.995);
   Graph_Graph_from_h_ratio3101->SetMinimum(0.9280095);
   Graph_Graph_from_h_ratio3101->SetMaximum(0.982227);
   Graph_Graph_from_h_ratio3101->SetDirectory(0);
   Graph_Graph_from_h_ratio3101->SetStats(0);
   Graph_Graph_from_h_ratio3101->SetLineWidth(2);
   Graph_Graph_from_h_ratio3101->SetMarkerStyle(20);
   Graph_Graph_from_h_ratio3101->SetMarkerSize(1.2);
   Graph_Graph_from_h_ratio3101->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3101->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3101->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3101->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3101->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3101->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3101->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3101->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3101->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3101->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3101->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3101->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3101->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3101->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_h_ratio3101);
   
   grae->Draw("pe0");
   TLine *line = new TLine(25,1,325,1);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t g_ratio2_fx3102[6] = {
   50,
   100,
   150,
   200,
   250,
   300};
   Double_t g_ratio2_fy3102[6] = {
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t g_ratio2_felx3102[6] = {
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t g_ratio2_fely3102[6] = {
   0.1355852,
   0.1288312,
   0.1292671,
   0.1374349,
   0.1518185,
   0.164254};
   Double_t g_ratio2_fehx3102[6] = {
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t g_ratio2_fehy3102[6] = {
   0.1355852,
   0.1288312,
   0.1292671,
   0.1374349,
   0.1518185,
   0.164254};
   grae = new TGraphAsymmErrors(6,g_ratio2_fx3102,g_ratio2_fy3102,g_ratio2_felx3102,g_ratio2_fehx3102,g_ratio2_fely3102,g_ratio2_fehy3102);
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
   
   TH1F *Graph_g_ratio23102 = new TH1F("Graph_g_ratio23102","",100,0,355);
   Graph_g_ratio23102->SetMinimum(0.8028952);
   Graph_g_ratio23102->SetMaximum(1.197105);
   Graph_g_ratio23102->SetDirectory(0);
   Graph_g_ratio23102->SetStats(0);
   Graph_g_ratio23102->SetLineWidth(2);
   Graph_g_ratio23102->SetMarkerStyle(20);
   Graph_g_ratio23102->SetMarkerSize(1.2);
   Graph_g_ratio23102->GetXaxis()->SetLabelFont(43);
   Graph_g_ratio23102->GetXaxis()->SetLabelSize(21);
   Graph_g_ratio23102->GetXaxis()->SetTitleSize(21);
   Graph_g_ratio23102->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23102->GetXaxis()->SetTitleFont(43);
   Graph_g_ratio23102->GetYaxis()->SetLabelFont(43);
   Graph_g_ratio23102->GetYaxis()->SetLabelSize(21);
   Graph_g_ratio23102->GetYaxis()->SetTitleSize(21);
   Graph_g_ratio23102->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23102->GetYaxis()->SetTitleFont(43);
   Graph_g_ratio23102->GetZaxis()->SetLabelFont(43);
   Graph_g_ratio23102->GetZaxis()->SetLabelSize(21);
   Graph_g_ratio23102->GetZaxis()->SetTitleSize(21);
   Graph_g_ratio23102->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_ratio23102);
   
   grae->Draw("e2");
   Double_t xAxis252[7] = {25, 75, 125, 175, 225, 275, 325}; 
   
   TH1D *h_dummy2_copy__227 = new TH1D("h_dummy2_copy__227","Data/MC",6, xAxis252);
   h_dummy2_copy__227->SetMinimum(0.5);
   h_dummy2_copy__227->SetMaximum(1.5);
   h_dummy2_copy__227->SetEntries(5.635582e+07);
   h_dummy2_copy__227->SetDirectory(0);
   h_dummy2_copy__227->SetStats(0);
   h_dummy2_copy__227->SetMarkerStyle(20);
   h_dummy2_copy__227->SetMarkerSize(1.2);
   h_dummy2_copy__227->GetXaxis()->SetTitle("jets p_{T} [GeV]");
   h_dummy2_copy__227->GetXaxis()->SetRange(1,100);
   h_dummy2_copy__227->GetXaxis()->SetLabelFont(43);
   h_dummy2_copy__227->GetXaxis()->SetLabelOffset(0.025);
   h_dummy2_copy__227->GetXaxis()->SetLabelSize(16.8);
   h_dummy2_copy__227->GetXaxis()->SetTitleSize(21);
   h_dummy2_copy__227->GetXaxis()->SetTitleOffset(5.05);
   h_dummy2_copy__227->GetXaxis()->SetTitleFont(43);
   h_dummy2_copy__227->GetYaxis()->SetTitle("Data / Bkg");
   h_dummy2_copy__227->GetYaxis()->SetNdivisions(-504);
   h_dummy2_copy__227->GetYaxis()->SetLabelFont(43);
   h_dummy2_copy__227->GetYaxis()->SetLabelOffset(0.02);
   h_dummy2_copy__227->GetYaxis()->SetLabelSize(16.8);
   h_dummy2_copy__227->GetYaxis()->SetTitleSize(21);
   h_dummy2_copy__227->GetYaxis()->SetTitleOffset(2.4);
   h_dummy2_copy__227->GetYaxis()->SetTitleFont(43);
   h_dummy2_copy__227->GetZaxis()->SetLabelFont(43);
   h_dummy2_copy__227->GetZaxis()->SetLabelSize(21);
   h_dummy2_copy__227->GetZaxis()->SetTitleSize(21);
   h_dummy2_copy__227->GetZaxis()->SetTitleFont(43);
   h_dummy2_copy__227->Draw("sameaxis");
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
   c_c1lep4jin2bin_jets_pt->cd();
  
// ------------>Primitives in pad: pad0
   TPad *pad0 = new TPad("pad0", "pad0",0,0.2,1,1);
   pad0->Draw();
   pad0->cd();
   pad0->Range(-26.85185,-670541.5,343.5185,6034873);
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
   Double_t xAxis253[7] = {25, 75, 125, 175, 225, 275, 325}; 
   
   TH1D *h_dummy__228 = new TH1D("h_dummy__228","",6, xAxis253);
   h_dummy__228->SetMinimum(0);
   h_dummy__228->SetMaximum(5699602);
   h_dummy__228->SetEntries(5.635582e+07);
   h_dummy__228->SetDirectory(0);
   h_dummy__228->SetStats(0);
   h_dummy__228->SetMarkerStyle(20);
   h_dummy__228->SetMarkerSize(1.2);
   h_dummy__228->GetXaxis()->SetRange(1,100);
   h_dummy__228->GetXaxis()->SetLabelFont(43);
   h_dummy__228->GetXaxis()->SetLabelSize(0);
   h_dummy__228->GetXaxis()->SetTitleSize(21);
   h_dummy__228->GetXaxis()->SetTitleOffset(1.4);
   h_dummy__228->GetXaxis()->SetTitleFont(43);
   h_dummy__228->GetYaxis()->SetTitle("Events / 50 GeV");
   h_dummy__228->GetYaxis()->SetLabelFont(43);
   h_dummy__228->GetYaxis()->SetLabelSize(16.8);
   h_dummy__228->GetYaxis()->SetTitleSize(21);
   h_dummy__228->GetYaxis()->SetTitleOffset(2.4);
   h_dummy__228->GetYaxis()->SetTitleFont(43);
   h_dummy__228->GetZaxis()->SetLabelFont(43);
   h_dummy__228->GetZaxis()->SetLabelSize(21);
   h_dummy__228->GetZaxis()->SetTitleSize(21);
   h_dummy__228->GetZaxis()->SetTitleFont(43);
   h_dummy__228->Draw("HIST");
   
   THStack *h_stack = new THStack();
   h_stack->SetName("h_stack");
   h_stack->SetTitle("h_stack");
   Double_t xAxis254[7] = {25, 75, 125, 175, 225, 275, 325}; 
   
   TH1F *h_stack_stack_26 = new TH1F("h_stack_stack_26","h_stack",6, xAxis254);
   h_stack_stack_26->SetMinimum(0);
   h_stack_stack_26->SetMaximum(3366889);
   h_stack_stack_26->SetDirectory(0);
   h_stack_stack_26->SetStats(0);
   h_stack_stack_26->SetLineWidth(2);
   h_stack_stack_26->SetMarkerStyle(20);
   h_stack_stack_26->SetMarkerSize(1.2);
   h_stack_stack_26->GetXaxis()->SetLabelFont(43);
   h_stack_stack_26->GetXaxis()->SetLabelSize(21);
   h_stack_stack_26->GetXaxis()->SetTitleSize(21);
   h_stack_stack_26->GetXaxis()->SetTitleOffset(1.4);
   h_stack_stack_26->GetXaxis()->SetTitleFont(43);
   h_stack_stack_26->GetYaxis()->SetLabelFont(43);
   h_stack_stack_26->GetYaxis()->SetLabelSize(21);
   h_stack_stack_26->GetYaxis()->SetTitleSize(21);
   h_stack_stack_26->GetYaxis()->SetTitleOffset(1.4);
   h_stack_stack_26->GetYaxis()->SetTitleFont(43);
   h_stack_stack_26->GetZaxis()->SetLabelFont(43);
   h_stack_stack_26->GetZaxis()->SetLabelSize(21);
   h_stack_stack_26->GetZaxis()->SetTitleSize(21);
   h_stack_stack_26->GetZaxis()->SetTitleFont(43);
   h_stack->SetHistogram(h_stack_stack_26);
   
   Double_t xAxis255[7] = {25, 75, 125, 175, 225, 275, 325}; 
   
   TH1D *c1lep4jin2bin_jets_pt_topEW__229 = new TH1D("c1lep4jin2bin_jets_pt_topEW__229","",6, xAxis255);
   c1lep4jin2bin_jets_pt_topEW__229->SetBinContent(1,388304.2);
   c1lep4jin2bin_jets_pt_topEW__229->SetBinContent(2,98335.54);
   c1lep4jin2bin_jets_pt_topEW__229->SetBinContent(3,38930.21);
   c1lep4jin2bin_jets_pt_topEW__229->SetBinContent(4,14876.86);
   c1lep4jin2bin_jets_pt_topEW__229->SetBinContent(5,6528.297);
   c1lep4jin2bin_jets_pt_topEW__229->SetBinContent(6,3912.031);
   c1lep4jin2bin_jets_pt_topEW__229->SetBinContent(7,5773.065);
   c1lep4jin2bin_jets_pt_topEW__229->SetBinError(1,1414.634);
   c1lep4jin2bin_jets_pt_topEW__229->SetBinError(2,705.1328);
   c1lep4jin2bin_jets_pt_topEW__229->SetBinError(3,451.4368);
   c1lep4jin2bin_jets_pt_topEW__229->SetBinError(4,237.9295);
   c1lep4jin2bin_jets_pt_topEW__229->SetBinError(5,133.4701);
   c1lep4jin2bin_jets_pt_topEW__229->SetBinError(6,120.6529);
   c1lep4jin2bin_jets_pt_topEW__229->SetBinError(7,142.7589);
   c1lep4jin2bin_jets_pt_topEW__229->SetEntries(4.151889e+07);
   c1lep4jin2bin_jets_pt_topEW__229->SetDirectory(0);
   c1lep4jin2bin_jets_pt_topEW__229->SetStats(0);

   ci = TColor::GetColor("#66cc66");
   c1lep4jin2bin_jets_pt_topEW__229->SetFillColor(ci);
   c1lep4jin2bin_jets_pt_topEW__229->SetMarkerStyle(20);
   c1lep4jin2bin_jets_pt_topEW__229->SetMarkerSize(1.2);
   c1lep4jin2bin_jets_pt_topEW__229->GetXaxis()->SetTitle("Jets p_{T} [GeV]");
   c1lep4jin2bin_jets_pt_topEW__229->GetXaxis()->SetRange(1,100);
   c1lep4jin2bin_jets_pt_topEW__229->GetXaxis()->SetLabelFont(43);
   c1lep4jin2bin_jets_pt_topEW__229->GetXaxis()->SetLabelSize(21);
   c1lep4jin2bin_jets_pt_topEW__229->GetXaxis()->SetTitleSize(21);
   c1lep4jin2bin_jets_pt_topEW__229->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_jets_pt_topEW__229->GetXaxis()->SetTitleFont(43);
   c1lep4jin2bin_jets_pt_topEW__229->GetYaxis()->SetLabelFont(43);
   c1lep4jin2bin_jets_pt_topEW__229->GetYaxis()->SetLabelSize(21);
   c1lep4jin2bin_jets_pt_topEW__229->GetYaxis()->SetTitleSize(21);
   c1lep4jin2bin_jets_pt_topEW__229->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_jets_pt_topEW__229->GetYaxis()->SetTitleFont(43);
   c1lep4jin2bin_jets_pt_topEW__229->GetZaxis()->SetLabelFont(43);
   c1lep4jin2bin_jets_pt_topEW__229->GetZaxis()->SetLabelSize(21);
   c1lep4jin2bin_jets_pt_topEW__229->GetZaxis()->SetTitleSize(21);
   c1lep4jin2bin_jets_pt_topEW__229->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jin2bin_jets_pt_topEW,"");
   Double_t xAxis256[7] = {25, 75, 125, 175, 225, 275, 325}; 
   
   TH1D *c1lep4jin2bin_jets_pt_ttbarbb__230 = new TH1D("c1lep4jin2bin_jets_pt_ttbarbb__230","",6, xAxis256);
   c1lep4jin2bin_jets_pt_ttbarbb__230->SetBinContent(1,196412.5);
   c1lep4jin2bin_jets_pt_ttbarbb__230->SetBinContent(2,59338.43);
   c1lep4jin2bin_jets_pt_ttbarbb__230->SetBinContent(3,22194.39);
   c1lep4jin2bin_jets_pt_ttbarbb__230->SetBinContent(4,9222.577);
   c1lep4jin2bin_jets_pt_ttbarbb__230->SetBinContent(5,4208.188);
   c1lep4jin2bin_jets_pt_ttbarbb__230->SetBinContent(6,2226.792);
   c1lep4jin2bin_jets_pt_ttbarbb__230->SetBinContent(7,3473.45);
   c1lep4jin2bin_jets_pt_ttbarbb__230->SetBinError(1,279.5399);
   c1lep4jin2bin_jets_pt_ttbarbb__230->SetBinError(2,155.5963);
   c1lep4jin2bin_jets_pt_ttbarbb__230->SetBinError(3,96.01112);
   c1lep4jin2bin_jets_pt_ttbarbb__230->SetBinError(4,61.28449);
   c1lep4jin2bin_jets_pt_ttbarbb__230->SetBinError(5,41.09445);
   c1lep4jin2bin_jets_pt_ttbarbb__230->SetBinError(6,29.53401);
   c1lep4jin2bin_jets_pt_ttbarbb__230->SetBinError(7,38.891);
   c1lep4jin2bin_jets_pt_ttbarbb__230->SetEntries(1091348);
   c1lep4jin2bin_jets_pt_ttbarbb__230->SetDirectory(0);
   c1lep4jin2bin_jets_pt_ttbarbb__230->SetStats(0);

   ci = TColor::GetColor("#6666cc");
   c1lep4jin2bin_jets_pt_ttbarbb__230->SetFillColor(ci);
   c1lep4jin2bin_jets_pt_ttbarbb__230->SetMarkerStyle(20);
   c1lep4jin2bin_jets_pt_ttbarbb__230->SetMarkerSize(1.2);
   c1lep4jin2bin_jets_pt_ttbarbb__230->GetXaxis()->SetTitle("Jets p_{T} [GeV]");
   c1lep4jin2bin_jets_pt_ttbarbb__230->GetXaxis()->SetRange(1,100);
   c1lep4jin2bin_jets_pt_ttbarbb__230->GetXaxis()->SetLabelFont(43);
   c1lep4jin2bin_jets_pt_ttbarbb__230->GetXaxis()->SetLabelSize(21);
   c1lep4jin2bin_jets_pt_ttbarbb__230->GetXaxis()->SetTitleSize(21);
   c1lep4jin2bin_jets_pt_ttbarbb__230->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_jets_pt_ttbarbb__230->GetXaxis()->SetTitleFont(43);
   c1lep4jin2bin_jets_pt_ttbarbb__230->GetYaxis()->SetLabelFont(43);
   c1lep4jin2bin_jets_pt_ttbarbb__230->GetYaxis()->SetLabelSize(21);
   c1lep4jin2bin_jets_pt_ttbarbb__230->GetYaxis()->SetTitleSize(21);
   c1lep4jin2bin_jets_pt_ttbarbb__230->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_jets_pt_ttbarbb__230->GetYaxis()->SetTitleFont(43);
   c1lep4jin2bin_jets_pt_ttbarbb__230->GetZaxis()->SetLabelFont(43);
   c1lep4jin2bin_jets_pt_ttbarbb__230->GetZaxis()->SetLabelSize(21);
   c1lep4jin2bin_jets_pt_ttbarbb__230->GetZaxis()->SetTitleSize(21);
   c1lep4jin2bin_jets_pt_ttbarbb__230->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jin2bin_jets_pt_ttbarbb,"");
   Double_t xAxis257[7] = {25, 75, 125, 175, 225, 275, 325}; 
   
   TH1D *c1lep4jin2bin_jets_pt_ttbarcc__231 = new TH1D("c1lep4jin2bin_jets_pt_ttbarcc__231","",6, xAxis257);
   c1lep4jin2bin_jets_pt_ttbarcc__231->SetBinContent(1,310773.8);
   c1lep4jin2bin_jets_pt_ttbarcc__231->SetBinContent(2,92095.46);
   c1lep4jin2bin_jets_pt_ttbarcc__231->SetBinContent(3,32418.83);
   c1lep4jin2bin_jets_pt_ttbarcc__231->SetBinContent(4,12350.5);
   c1lep4jin2bin_jets_pt_ttbarcc__231->SetBinContent(5,5455.238);
   c1lep4jin2bin_jets_pt_ttbarcc__231->SetBinContent(6,2808.066);
   c1lep4jin2bin_jets_pt_ttbarcc__231->SetBinContent(7,4008.489);
   c1lep4jin2bin_jets_pt_ttbarcc__231->SetBinError(1,347.9909);
   c1lep4jin2bin_jets_pt_ttbarcc__231->SetBinError(2,190.7437);
   c1lep4jin2bin_jets_pt_ttbarcc__231->SetBinError(3,112.5546);
   c1lep4jin2bin_jets_pt_ttbarcc__231->SetBinError(4,69.68577);
   c1lep4jin2bin_jets_pt_ttbarcc__231->SetBinError(5,45.99478);
   c1lep4jin2bin_jets_pt_ttbarcc__231->SetBinError(6,32.92045);
   c1lep4jin2bin_jets_pt_ttbarcc__231->SetBinError(7,40.59758);
   c1lep4jin2bin_jets_pt_ttbarcc__231->SetEntries(1687798);
   c1lep4jin2bin_jets_pt_ttbarcc__231->SetDirectory(0);
   c1lep4jin2bin_jets_pt_ttbarcc__231->SetStats(0);

   ci = TColor::GetColor("#ccccff");
   c1lep4jin2bin_jets_pt_ttbarcc__231->SetFillColor(ci);
   c1lep4jin2bin_jets_pt_ttbarcc__231->SetMarkerStyle(20);
   c1lep4jin2bin_jets_pt_ttbarcc__231->SetMarkerSize(1.2);
   c1lep4jin2bin_jets_pt_ttbarcc__231->GetXaxis()->SetTitle("Jets p_{T} [GeV]");
   c1lep4jin2bin_jets_pt_ttbarcc__231->GetXaxis()->SetRange(1,100);
   c1lep4jin2bin_jets_pt_ttbarcc__231->GetXaxis()->SetLabelFont(43);
   c1lep4jin2bin_jets_pt_ttbarcc__231->GetXaxis()->SetLabelSize(21);
   c1lep4jin2bin_jets_pt_ttbarcc__231->GetXaxis()->SetTitleSize(21);
   c1lep4jin2bin_jets_pt_ttbarcc__231->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_jets_pt_ttbarcc__231->GetXaxis()->SetTitleFont(43);
   c1lep4jin2bin_jets_pt_ttbarcc__231->GetYaxis()->SetLabelFont(43);
   c1lep4jin2bin_jets_pt_ttbarcc__231->GetYaxis()->SetLabelSize(21);
   c1lep4jin2bin_jets_pt_ttbarcc__231->GetYaxis()->SetTitleSize(21);
   c1lep4jin2bin_jets_pt_ttbarcc__231->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_jets_pt_ttbarcc__231->GetYaxis()->SetTitleFont(43);
   c1lep4jin2bin_jets_pt_ttbarcc__231->GetZaxis()->SetLabelFont(43);
   c1lep4jin2bin_jets_pt_ttbarcc__231->GetZaxis()->SetLabelSize(21);
   c1lep4jin2bin_jets_pt_ttbarcc__231->GetZaxis()->SetTitleSize(21);
   c1lep4jin2bin_jets_pt_ttbarcc__231->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jin2bin_jets_pt_ttbarcc,"");
   Double_t xAxis258[7] = {25, 75, 125, 175, 225, 275, 325}; 
   
   TH1D *c1lep4jin2bin_jets_pt_ttbarlight__232 = new TH1D("c1lep4jin2bin_jets_pt_ttbarlight__232","",6, xAxis258);
   c1lep4jin2bin_jets_pt_ttbarlight__232->SetBinContent(1,2270955);
   c1lep4jin2bin_jets_pt_ttbarlight__232->SetBinContent(2,650312.4);
   c1lep4jin2bin_jets_pt_ttbarlight__232->SetBinContent(3,205667.3);
   c1lep4jin2bin_jets_pt_ttbarlight__232->SetBinContent(4,69868.05);
   c1lep4jin2bin_jets_pt_ttbarlight__232->SetBinContent(5,27972.03);
   c1lep4jin2bin_jets_pt_ttbarlight__232->SetBinContent(6,12929.32);
   c1lep4jin2bin_jets_pt_ttbarlight__232->SetBinContent(7,16544.61);
   c1lep4jin2bin_jets_pt_ttbarlight__232->SetBinError(1,938.6976);
   c1lep4jin2bin_jets_pt_ttbarlight__232->SetBinError(2,504.2828);
   c1lep4jin2bin_jets_pt_ttbarlight__232->SetBinError(3,282.3541);
   c1lep4jin2bin_jets_pt_ttbarlight__232->SetBinError(4,163.4921);
   c1lep4jin2bin_jets_pt_ttbarlight__232->SetBinError(5,103.6626);
   c1lep4jin2bin_jets_pt_ttbarlight__232->SetBinError(6,70.00365);
   c1lep4jin2bin_jets_pt_ttbarlight__232->SetBinError(7,79.51352);
   c1lep4jin2bin_jets_pt_ttbarlight__232->SetEntries(1.205778e+07);
   c1lep4jin2bin_jets_pt_ttbarlight__232->SetDirectory(0);
   c1lep4jin2bin_jets_pt_ttbarlight__232->SetStats(0);
   c1lep4jin2bin_jets_pt_ttbarlight__232->SetMarkerStyle(20);
   c1lep4jin2bin_jets_pt_ttbarlight__232->SetMarkerSize(1.2);
   c1lep4jin2bin_jets_pt_ttbarlight__232->GetXaxis()->SetTitle("Jets p_{T} [GeV]");
   c1lep4jin2bin_jets_pt_ttbarlight__232->GetXaxis()->SetRange(1,100);
   c1lep4jin2bin_jets_pt_ttbarlight__232->GetXaxis()->SetLabelFont(43);
   c1lep4jin2bin_jets_pt_ttbarlight__232->GetXaxis()->SetLabelSize(21);
   c1lep4jin2bin_jets_pt_ttbarlight__232->GetXaxis()->SetTitleSize(21);
   c1lep4jin2bin_jets_pt_ttbarlight__232->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_jets_pt_ttbarlight__232->GetXaxis()->SetTitleFont(43);
   c1lep4jin2bin_jets_pt_ttbarlight__232->GetYaxis()->SetLabelFont(43);
   c1lep4jin2bin_jets_pt_ttbarlight__232->GetYaxis()->SetLabelSize(21);
   c1lep4jin2bin_jets_pt_ttbarlight__232->GetYaxis()->SetTitleSize(21);
   c1lep4jin2bin_jets_pt_ttbarlight__232->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_jets_pt_ttbarlight__232->GetYaxis()->SetTitleFont(43);
   c1lep4jin2bin_jets_pt_ttbarlight__232->GetZaxis()->SetLabelFont(43);
   c1lep4jin2bin_jets_pt_ttbarlight__232->GetZaxis()->SetLabelSize(21);
   c1lep4jin2bin_jets_pt_ttbarlight__232->GetZaxis()->SetTitleSize(21);
   c1lep4jin2bin_jets_pt_ttbarlight__232->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jin2bin_jets_pt_ttbarlight,"");
   Double_t xAxis259[7] = {25, 75, 125, 175, 225, 275, 325}; 
   
   TH1D *c1lep4jin2bin_jets_pt_uHcW__233 = new TH1D("c1lep4jin2bin_jets_pt_uHcW__233","",6, xAxis259);
   c1lep4jin2bin_jets_pt_uHcW__233->SetBinContent(1,40115);
   c1lep4jin2bin_jets_pt_uHcW__233->SetBinContent(2,10818.52);
   c1lep4jin2bin_jets_pt_uHcW__233->SetBinContent(3,3546.088);
   c1lep4jin2bin_jets_pt_uHcW__233->SetBinContent(4,1276.614);
   c1lep4jin2bin_jets_pt_uHcW__233->SetBinContent(5,518.875);
   c1lep4jin2bin_jets_pt_uHcW__233->SetBinContent(6,239.0989);
   c1lep4jin2bin_jets_pt_uHcW__233->SetBinContent(7,218.5814);
   c1lep4jin2bin_jets_pt_uHcW__233->SetBinError(1,207.5386);
   c1lep4jin2bin_jets_pt_uHcW__233->SetBinError(2,110.6435);
   c1lep4jin2bin_jets_pt_uHcW__233->SetBinError(3,64.61488);
   c1lep4jin2bin_jets_pt_uHcW__233->SetBinError(4,39.78457);
   c1lep4jin2bin_jets_pt_uHcW__233->SetBinError(5,27.80016);
   c1lep4jin2bin_jets_pt_uHcW__233->SetBinError(6,19.36771);
   c1lep4jin2bin_jets_pt_uHcW__233->SetBinError(7,21.79615);
   c1lep4jin2bin_jets_pt_uHcW__233->SetEntries(359940);
   c1lep4jin2bin_jets_pt_uHcW__233->SetDirectory(0);
   c1lep4jin2bin_jets_pt_uHcW__233->SetStats(0);
   c1lep4jin2bin_jets_pt_uHcW__233->SetFillColor(2);
   c1lep4jin2bin_jets_pt_uHcW__233->SetLineColor(2);
   c1lep4jin2bin_jets_pt_uHcW__233->SetMarkerStyle(20);
   c1lep4jin2bin_jets_pt_uHcW__233->SetMarkerSize(1.2);
   c1lep4jin2bin_jets_pt_uHcW__233->GetXaxis()->SetTitle("Jets p_{T} [GeV]");
   c1lep4jin2bin_jets_pt_uHcW__233->GetXaxis()->SetRange(1,100);
   c1lep4jin2bin_jets_pt_uHcW__233->GetXaxis()->SetLabelFont(43);
   c1lep4jin2bin_jets_pt_uHcW__233->GetXaxis()->SetLabelSize(21);
   c1lep4jin2bin_jets_pt_uHcW__233->GetXaxis()->SetTitleSize(21);
   c1lep4jin2bin_jets_pt_uHcW__233->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_jets_pt_uHcW__233->GetXaxis()->SetTitleFont(43);
   c1lep4jin2bin_jets_pt_uHcW__233->GetYaxis()->SetLabelFont(43);
   c1lep4jin2bin_jets_pt_uHcW__233->GetYaxis()->SetLabelSize(21);
   c1lep4jin2bin_jets_pt_uHcW__233->GetYaxis()->SetTitleSize(21);
   c1lep4jin2bin_jets_pt_uHcW__233->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_jets_pt_uHcW__233->GetYaxis()->SetTitleFont(43);
   c1lep4jin2bin_jets_pt_uHcW__233->GetZaxis()->SetLabelFont(43);
   c1lep4jin2bin_jets_pt_uHcW__233->GetZaxis()->SetLabelSize(21);
   c1lep4jin2bin_jets_pt_uHcW__233->GetZaxis()->SetTitleSize(21);
   c1lep4jin2bin_jets_pt_uHcW__233->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jin2bin_jets_pt_uHcW,"");
   h_stack->Draw("hist same");
   
   Double_t g_totErr_fx3103[6] = {
   50,
   100,
   150,
   200,
   250,
   300};
   Double_t g_totErr_fy3103[6] = {
   3166446,
   900081.9,
   299210.7,
   106318,
   44163.76,
   21876.21};
   Double_t g_totErr_felx3103[6] = {
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t g_totErr_fely3103[6] = {
   429323.2,
   115958.7,
   38678.1,
   14611.8,
   6704.877,
   3593.255};
   Double_t g_totErr_fehx3103[6] = {
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t g_totErr_fehy3103[6] = {
   429323.2,
   115958.7,
   38678.1,
   14611.8,
   6704.877,
   3593.255};
   grae = new TGraphAsymmErrors(6,g_totErr_fx3103,g_totErr_fy3103,g_totErr_felx3103,g_totErr_fehx3103,g_totErr_fely3103,g_totErr_fehy3103);
   grae->SetName("g_totErr");
   grae->SetTitle("");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(3354);
   grae->SetLineColor(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0);
   
   TH1F *Graph_g_totErr3103 = new TH1F("Graph_g_totErr3103","",100,0,355);
   Graph_g_totErr3103->SetMinimum(0);
   Graph_g_totErr3103->SetMaximum(3953518);
   Graph_g_totErr3103->SetDirectory(0);
   Graph_g_totErr3103->SetStats(0);
   Graph_g_totErr3103->SetLineWidth(2);
   Graph_g_totErr3103->SetMarkerStyle(20);
   Graph_g_totErr3103->SetMarkerSize(1.2);
   Graph_g_totErr3103->GetXaxis()->SetLabelFont(43);
   Graph_g_totErr3103->GetXaxis()->SetLabelSize(21);
   Graph_g_totErr3103->GetXaxis()->SetTitleSize(21);
   Graph_g_totErr3103->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_totErr3103->GetXaxis()->SetTitleFont(43);
   Graph_g_totErr3103->GetYaxis()->SetLabelFont(43);
   Graph_g_totErr3103->GetYaxis()->SetLabelSize(21);
   Graph_g_totErr3103->GetYaxis()->SetTitleSize(21);
   Graph_g_totErr3103->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_totErr3103->GetYaxis()->SetTitleFont(43);
   Graph_g_totErr3103->GetZaxis()->SetLabelFont(43);
   Graph_g_totErr3103->GetZaxis()->SetLabelSize(21);
   Graph_g_totErr3103->GetZaxis()->SetTitleSize(21);
   Graph_g_totErr3103->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_totErr3103);
   
   grae->Draw("e2");
   
   Double_t Graph_from_c1lep4jin2bin_jets_pt_Data_fx3104[6] = {
   50,
   100,
   150,
   200,
   250,
   300};
   Double_t Graph_from_c1lep4jin2bin_jets_pt_Data_fy3104[6] = {
   3062787,
   850145,
   279551,
   100490,
   42972,
   21134};
   Double_t Graph_from_c1lep4jin2bin_jets_pt_Data_felx3104[6] = {
   24.95,
   24.95,
   24.95,
   24.95,
   24.95,
   24.95};
   Double_t Graph_from_c1lep4jin2bin_jets_pt_Data_fely3104[6] = {
   1750.082,
   922.0331,
   528.7258,
   317.0016,
   207.2969,
   145.3754};
   Double_t Graph_from_c1lep4jin2bin_jets_pt_Data_fehx3104[6] = {
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t Graph_from_c1lep4jin2bin_jets_pt_Data_fehy3104[6] = {
   1750.082,
   922.0331,
   528.7258,
   317.0016,
   207.2969,
   145.3754};
   grae = new TGraphAsymmErrors(6,Graph_from_c1lep4jin2bin_jets_pt_Data_fx3104,Graph_from_c1lep4jin2bin_jets_pt_Data_fy3104,Graph_from_c1lep4jin2bin_jets_pt_Data_felx3104,Graph_from_c1lep4jin2bin_jets_pt_Data_fehx3104,Graph_from_c1lep4jin2bin_jets_pt_Data_fely3104,Graph_from_c1lep4jin2bin_jets_pt_Data_fehy3104);
   grae->SetName("Graph_from_c1lep4jin2bin_jets_pt_Data");
   grae->SetTitle("");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_c1lep4jin2bin_jets_pt_Data3104 = new TH1F("Graph_Graph_from_c1lep4jin2bin_jets_pt_Data3104","",100,0,354.995);
   Graph_Graph_from_c1lep4jin2bin_jets_pt_Data3104->SetMinimum(0);
   Graph_Graph_from_c1lep4jin2bin_jets_pt_Data3104->SetMaximum(3368892);
   Graph_Graph_from_c1lep4jin2bin_jets_pt_Data3104->SetDirectory(0);
   Graph_Graph_from_c1lep4jin2bin_jets_pt_Data3104->SetStats(0);
   Graph_Graph_from_c1lep4jin2bin_jets_pt_Data3104->SetLineWidth(2);
   Graph_Graph_from_c1lep4jin2bin_jets_pt_Data3104->SetMarkerStyle(20);
   Graph_Graph_from_c1lep4jin2bin_jets_pt_Data3104->SetMarkerSize(1.2);
   Graph_Graph_from_c1lep4jin2bin_jets_pt_Data3104->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep4jin2bin_jets_pt_Data3104->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep4jin2bin_jets_pt_Data3104->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep4jin2bin_jets_pt_Data3104->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep4jin2bin_jets_pt_Data3104->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep4jin2bin_jets_pt_Data3104->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep4jin2bin_jets_pt_Data3104->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep4jin2bin_jets_pt_Data3104->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep4jin2bin_jets_pt_Data3104->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep4jin2bin_jets_pt_Data3104->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep4jin2bin_jets_pt_Data3104->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep4jin2bin_jets_pt_Data3104->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep4jin2bin_jets_pt_Data3104->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep4jin2bin_jets_pt_Data3104->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_c1lep4jin2bin_jets_pt_Data3104);
   
   grae->Draw("ep1 ");
   Double_t xAxis260[7] = {25, 75, 125, 175, 225, 275, 325}; 
   
   TH1D *h_dummy_copy__234 = new TH1D("h_dummy_copy__234","",6, xAxis260);
   h_dummy_copy__234->SetEntries(5.635582e+07);
   h_dummy_copy__234->SetDirectory(0);
   h_dummy_copy__234->SetStats(0);
   h_dummy_copy__234->SetMarkerStyle(20);
   h_dummy_copy__234->SetMarkerSize(1.2);
   h_dummy_copy__234->GetXaxis()->SetTitle("jets p_{T} [GeV]");
   h_dummy_copy__234->GetXaxis()->SetRange(1,100);
   h_dummy_copy__234->GetXaxis()->SetLabelFont(43);
   h_dummy_copy__234->GetXaxis()->SetLabelSize(21);
   h_dummy_copy__234->GetXaxis()->SetTitleSize(21);
   h_dummy_copy__234->GetXaxis()->SetTitleOffset(1.4);
   h_dummy_copy__234->GetXaxis()->SetTitleFont(43);
   h_dummy_copy__234->GetYaxis()->SetTitle("Events / 50 GeV");
   h_dummy_copy__234->GetYaxis()->SetLabelFont(43);
   h_dummy_copy__234->GetYaxis()->SetLabelSize(16.8);
   h_dummy_copy__234->GetYaxis()->SetTitleSize(21);
   h_dummy_copy__234->GetYaxis()->SetTitleOffset(2.4);
   h_dummy_copy__234->GetYaxis()->SetTitleFont(43);
   h_dummy_copy__234->GetZaxis()->SetLabelFont(43);
   h_dummy_copy__234->GetZaxis()->SetLabelSize(21);
   h_dummy_copy__234->GetZaxis()->SetTitleSize(21);
   h_dummy_copy__234->GetZaxis()->SetTitleFont(43);
   h_dummy_copy__234->Draw("sameaxis");
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
   TLegendEntry *entry=leg->AddEntry("c1lep4jin2bin_jets_pt_Data","Data","lep");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep4jin2bin_jets_pt_uHcW","t#bar{t}#rightarrowWbHc (BR=1%)","f");
   entry->SetFillColor(2);
   entry->SetFillStyle(1001);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep4jin2bin_jets_pt_ttbarlight","t#bar{t}+light","f");
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep4jin2bin_jets_pt_ttbarcc","t#bar{t}+cc","f");

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
   entry=leg->AddEntry("c1lep4jin2bin_jets_pt_ttbarbb","t#bar{t}+bb","f");

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
   entry=leg->AddEntry("c1lep4jin2bin_jets_pt_topEW","Non-t#bar{t}","f");

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
   c_c1lep4jin2bin_jets_pt->cd();
   c_c1lep4jin2bin_jets_pt->Modified();
   c_c1lep4jin2bin_jets_pt->cd();
   c_c1lep4jin2bin_jets_pt->SetSelected(c_c1lep4jin2bin_jets_pt);
}
