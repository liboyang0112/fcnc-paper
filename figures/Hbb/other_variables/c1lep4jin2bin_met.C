void c1lep4jin2bin_met()
{
//=========Macro generated from canvas: c_c1lep4jin2bin_met/c_c1lep4jin2bin_met
//=========  (Thu Jul 19 17:38:04 2018) by ROOT version6.04/14
   TCanvas *c_c1lep4jin2bin_met = new TCanvas("c_c1lep4jin2bin_met", "c_c1lep4jin2bin_met",0,0,600,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c_c1lep4jin2bin_met->SetHighLightColor(2);
   c_c1lep4jin2bin_met->Range(0,0,1,1);
   c_c1lep4jin2bin_met->SetFillColor(0);
   c_c1lep4jin2bin_met->SetBorderMode(0);
   c_c1lep4jin2bin_met->SetBorderSize(2);
   c_c1lep4jin2bin_met->SetTickx(1);
   c_c1lep4jin2bin_met->SetTicky(1);
   c_c1lep4jin2bin_met->SetLeftMargin(0.16);
   c_c1lep4jin2bin_met->SetRightMargin(0.05);
   c_c1lep4jin2bin_met->SetTopMargin(0.05);
   c_c1lep4jin2bin_met->SetBottomMargin(0.16);
   c_c1lep4jin2bin_met->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0,1,0.28);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-34.5679,-0.0873016,212.3457,1.5);
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
   Double_t xAxis171[5] = {0, 50, 100, 150, 200}; 
   
   TH1D *h_dummy2__154 = new TH1D("h_dummy2__154","Data/MC",4, xAxis171);
   h_dummy2__154->SetMinimum(0.5);
   h_dummy2__154->SetMaximum(1.5);
   h_dummy2__154->SetEntries(1.123257e+07);
   h_dummy2__154->SetDirectory(0);
   h_dummy2__154->SetStats(0);
   h_dummy2__154->SetMarkerStyle(20);
   h_dummy2__154->SetMarkerSize(1.2);
   h_dummy2__154->GetXaxis()->SetTitle("E_{T}^{miss} [GeV]");
   h_dummy2__154->GetXaxis()->SetRange(1,25);
   h_dummy2__154->GetXaxis()->SetLabelFont(43);
   h_dummy2__154->GetXaxis()->SetLabelOffset(0.025);
   h_dummy2__154->GetXaxis()->SetLabelSize(16.8);
   h_dummy2__154->GetXaxis()->SetTitleSize(21);
   h_dummy2__154->GetXaxis()->SetTitleOffset(5.05);
   h_dummy2__154->GetXaxis()->SetTitleFont(43);
   h_dummy2__154->GetYaxis()->SetTitle("Data / Bkg");
   h_dummy2__154->GetYaxis()->SetNdivisions(-504);
   h_dummy2__154->GetYaxis()->SetLabelFont(43);
   h_dummy2__154->GetYaxis()->SetLabelOffset(0.02);
   h_dummy2__154->GetYaxis()->SetLabelSize(16.8);
   h_dummy2__154->GetYaxis()->SetTitleSize(21);
   h_dummy2__154->GetYaxis()->SetTitleOffset(2.4);
   h_dummy2__154->GetYaxis()->SetTitleFont(43);
   h_dummy2__154->GetZaxis()->SetLabelFont(43);
   h_dummy2__154->GetZaxis()->SetLabelSize(21);
   h_dummy2__154->GetZaxis()->SetTitleSize(21);
   h_dummy2__154->GetZaxis()->SetTitleFont(43);
   h_dummy2__154->Draw("HIST");
   
   Double_t Graph_from_h_ratio_fx3069[4] = {
   25,
   75,
   125,
   175};
   Double_t Graph_from_h_ratio_fy3069[4] = {
   0.9600296,
   0.9632202,
   0.9419262,
   0.9183969};
   Double_t Graph_from_h_ratio_felx3069[4] = {
   24.95,
   24.95,
   24.95,
   24.95};
   Double_t Graph_from_h_ratio_fely3069[4] = {
   0.001807043,
   0.001329555,
   0.003985135,
   0.006419375};
   Double_t Graph_from_h_ratio_fehx3069[4] = {
   25,
   25,
   25,
   25};
   Double_t Graph_from_h_ratio_fehy3069[4] = {
   0.001807043,
   0.001329555,
   0.003985135,
   0.006419375};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(4,Graph_from_h_ratio_fx3069,Graph_from_h_ratio_fy3069,Graph_from_h_ratio_felx3069,Graph_from_h_ratio_fehx3069,Graph_from_h_ratio_fely3069,Graph_from_h_ratio_fehy3069);
   grae->SetName("Graph_from_h_ratio");
   grae->SetTitle("");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(24);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_h_ratio3069 = new TH1F("Graph_Graph_from_h_ratio3069","",100,0,219.995);
   Graph_Graph_from_h_ratio3069->SetMinimum(0.9067203);
   Graph_Graph_from_h_ratio3069->SetMaximum(0.9698069);
   Graph_Graph_from_h_ratio3069->SetDirectory(0);
   Graph_Graph_from_h_ratio3069->SetStats(0);
   Graph_Graph_from_h_ratio3069->SetLineWidth(2);
   Graph_Graph_from_h_ratio3069->SetMarkerStyle(20);
   Graph_Graph_from_h_ratio3069->SetMarkerSize(1.2);
   Graph_Graph_from_h_ratio3069->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3069->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3069->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3069->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3069->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3069->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3069->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3069->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3069->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3069->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3069->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3069->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3069->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3069->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_h_ratio3069);
   
   grae->Draw("pe0");
   TLine *line = new TLine(0,1,200,1);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t g_ratio2_fx3070[4] = {
   25,
   75,
   125,
   175};
   Double_t g_ratio2_fy3070[4] = {
   1,
   1,
   1,
   1};
   Double_t g_ratio2_felx3070[4] = {
   25,
   25,
   25,
   25};
   Double_t g_ratio2_fely3070[4] = {
   0.1147958,
   0.1272933,
   0.1459806,
   0.1580001};
   Double_t g_ratio2_fehx3070[4] = {
   25,
   25,
   25,
   25};
   Double_t g_ratio2_fehy3070[4] = {
   0.1147958,
   0.1272933,
   0.1459806,
   0.1580001};
   grae = new TGraphAsymmErrors(4,g_ratio2_fx3070,g_ratio2_fy3070,g_ratio2_felx3070,g_ratio2_fehx3070,g_ratio2_fely3070,g_ratio2_fehy3070);
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
   
   TH1F *Graph_g_ratio23070 = new TH1F("Graph_g_ratio23070","",100,0,220);
   Graph_g_ratio23070->SetMinimum(0.8103999);
   Graph_g_ratio23070->SetMaximum(1.1896);
   Graph_g_ratio23070->SetDirectory(0);
   Graph_g_ratio23070->SetStats(0);
   Graph_g_ratio23070->SetLineWidth(2);
   Graph_g_ratio23070->SetMarkerStyle(20);
   Graph_g_ratio23070->SetMarkerSize(1.2);
   Graph_g_ratio23070->GetXaxis()->SetLabelFont(43);
   Graph_g_ratio23070->GetXaxis()->SetLabelSize(21);
   Graph_g_ratio23070->GetXaxis()->SetTitleSize(21);
   Graph_g_ratio23070->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23070->GetXaxis()->SetTitleFont(43);
   Graph_g_ratio23070->GetYaxis()->SetLabelFont(43);
   Graph_g_ratio23070->GetYaxis()->SetLabelSize(21);
   Graph_g_ratio23070->GetYaxis()->SetTitleSize(21);
   Graph_g_ratio23070->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23070->GetYaxis()->SetTitleFont(43);
   Graph_g_ratio23070->GetZaxis()->SetLabelFont(43);
   Graph_g_ratio23070->GetZaxis()->SetLabelSize(21);
   Graph_g_ratio23070->GetZaxis()->SetTitleSize(21);
   Graph_g_ratio23070->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_ratio23070);
   
   grae->Draw("e2");
   Double_t xAxis172[5] = {0, 50, 100, 150, 200}; 
   
   TH1D *h_dummy2_copy__155 = new TH1D("h_dummy2_copy__155","Data/MC",4, xAxis172);
   h_dummy2_copy__155->SetMinimum(0.5);
   h_dummy2_copy__155->SetMaximum(1.5);
   h_dummy2_copy__155->SetEntries(1.123257e+07);
   h_dummy2_copy__155->SetDirectory(0);
   h_dummy2_copy__155->SetStats(0);
   h_dummy2_copy__155->SetMarkerStyle(20);
   h_dummy2_copy__155->SetMarkerSize(1.2);
   h_dummy2_copy__155->GetXaxis()->SetTitle("E_{T}^{miss} [GeV]");
   h_dummy2_copy__155->GetXaxis()->SetRange(1,25);
   h_dummy2_copy__155->GetXaxis()->SetLabelFont(43);
   h_dummy2_copy__155->GetXaxis()->SetLabelOffset(0.025);
   h_dummy2_copy__155->GetXaxis()->SetLabelSize(16.8);
   h_dummy2_copy__155->GetXaxis()->SetTitleSize(21);
   h_dummy2_copy__155->GetXaxis()->SetTitleOffset(5.05);
   h_dummy2_copy__155->GetXaxis()->SetTitleFont(43);
   h_dummy2_copy__155->GetYaxis()->SetTitle("Data / Bkg");
   h_dummy2_copy__155->GetYaxis()->SetNdivisions(-504);
   h_dummy2_copy__155->GetYaxis()->SetLabelFont(43);
   h_dummy2_copy__155->GetYaxis()->SetLabelOffset(0.02);
   h_dummy2_copy__155->GetYaxis()->SetLabelSize(16.8);
   h_dummy2_copy__155->GetYaxis()->SetTitleSize(21);
   h_dummy2_copy__155->GetYaxis()->SetTitleOffset(2.4);
   h_dummy2_copy__155->GetYaxis()->SetTitleFont(43);
   h_dummy2_copy__155->GetZaxis()->SetLabelFont(43);
   h_dummy2_copy__155->GetZaxis()->SetLabelSize(21);
   h_dummy2_copy__155->GetZaxis()->SetTitleSize(21);
   h_dummy2_copy__155->GetZaxis()->SetTitleFont(43);
   h_dummy2_copy__155->Draw("sameaxis");
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
   c_c1lep4jin2bin_met->cd();
  
// ------------>Primitives in pad: pad0
   TPad *pad0 = new TPad("pad0", "pad0",0,0.2,1,1);
   pad0->Draw();
   pad0->cd();
   pad0->Range(-34.5679,-115389.6,212.3457,1038506);
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
   Double_t xAxis173[5] = {0, 50, 100, 150, 200}; 
   
   TH1D *h_dummy__156 = new TH1D("h_dummy__156","",4, xAxis173);
   h_dummy__156->SetMinimum(0);
   h_dummy__156->SetMaximum(980811.2);
   h_dummy__156->SetEntries(1.123257e+07);
   h_dummy__156->SetDirectory(0);
   h_dummy__156->SetStats(0);
   h_dummy__156->SetMarkerStyle(20);
   h_dummy__156->SetMarkerSize(1.2);
   h_dummy__156->GetXaxis()->SetRange(1,25);
   h_dummy__156->GetXaxis()->SetLabelFont(43);
   h_dummy__156->GetXaxis()->SetLabelSize(0);
   h_dummy__156->GetXaxis()->SetTitleSize(21);
   h_dummy__156->GetXaxis()->SetTitleOffset(1.4);
   h_dummy__156->GetXaxis()->SetTitleFont(43);
   h_dummy__156->GetYaxis()->SetTitle("Events / 50 GeV");
   h_dummy__156->GetYaxis()->SetLabelFont(43);
   h_dummy__156->GetYaxis()->SetLabelSize(16.8);
   h_dummy__156->GetYaxis()->SetTitleSize(21);
   h_dummy__156->GetYaxis()->SetTitleOffset(2.4);
   h_dummy__156->GetYaxis()->SetTitleFont(43);
   h_dummy__156->GetZaxis()->SetLabelFont(43);
   h_dummy__156->GetZaxis()->SetLabelSize(21);
   h_dummy__156->GetZaxis()->SetTitleSize(21);
   h_dummy__156->GetZaxis()->SetTitleFont(43);
   h_dummy__156->Draw("HIST");
   
   THStack *h_stack = new THStack();
   h_stack->SetName("h_stack");
   h_stack->SetTitle("h_stack");
   Double_t xAxis174[5] = {0, 50, 100, 150, 200}; 
   
   TH1F *h_stack_stack_18 = new TH1F("h_stack_stack_18","h_stack",4, xAxis174);
   h_stack_stack_18->SetMinimum(0);
   h_stack_stack_18->SetMaximum(579298.7);
   h_stack_stack_18->SetDirectory(0);
   h_stack_stack_18->SetStats(0);
   h_stack_stack_18->SetLineWidth(2);
   h_stack_stack_18->SetMarkerStyle(20);
   h_stack_stack_18->SetMarkerSize(1.2);
   h_stack_stack_18->GetXaxis()->SetLabelFont(43);
   h_stack_stack_18->GetXaxis()->SetLabelSize(21);
   h_stack_stack_18->GetXaxis()->SetTitleSize(21);
   h_stack_stack_18->GetXaxis()->SetTitleOffset(1.4);
   h_stack_stack_18->GetXaxis()->SetTitleFont(43);
   h_stack_stack_18->GetYaxis()->SetLabelFont(43);
   h_stack_stack_18->GetYaxis()->SetLabelSize(21);
   h_stack_stack_18->GetYaxis()->SetTitleSize(21);
   h_stack_stack_18->GetYaxis()->SetTitleOffset(1.4);
   h_stack_stack_18->GetYaxis()->SetTitleFont(43);
   h_stack_stack_18->GetZaxis()->SetLabelFont(43);
   h_stack_stack_18->GetZaxis()->SetLabelSize(21);
   h_stack_stack_18->GetZaxis()->SetTitleSize(21);
   h_stack_stack_18->GetZaxis()->SetTitleFont(43);
   h_stack->SetHistogram(h_stack_stack_18);
   
   Double_t xAxis175[5] = {0, 50, 100, 150, 200}; 
   
   TH1D *c1lep4jin2bin_met_topEW__157 = new TH1D("c1lep4jin2bin_met_topEW__157","",4, xAxis175);
   c1lep4jin2bin_met_topEW__157->SetBinContent(1,45081.41);
   c1lep4jin2bin_met_topEW__157->SetBinContent(2,59802.24);
   c1lep4jin2bin_met_topEW__157->SetBinContent(3,5925.723);
   c1lep4jin2bin_met_topEW__157->SetBinContent(4,2599.489);
   c1lep4jin2bin_met_topEW__157->SetBinContent(5,2657.809);
   c1lep4jin2bin_met_topEW__157->SetBinError(1,515.3054);
   c1lep4jin2bin_met_topEW__157->SetBinError(2,529.3583);
   c1lep4jin2bin_met_topEW__157->SetBinError(3,140.5634);
   c1lep4jin2bin_met_topEW__157->SetBinError(4,90.93736);
   c1lep4jin2bin_met_topEW__157->SetBinError(5,94.41797);
   c1lep4jin2bin_met_topEW__157->SetEntries(8198794);
   c1lep4jin2bin_met_topEW__157->SetDirectory(0);
   c1lep4jin2bin_met_topEW__157->SetStats(0);

   ci = TColor::GetColor("#66cc66");
   c1lep4jin2bin_met_topEW__157->SetFillColor(ci);
   c1lep4jin2bin_met_topEW__157->SetMarkerStyle(20);
   c1lep4jin2bin_met_topEW__157->SetMarkerSize(1.2);
   c1lep4jin2bin_met_topEW__157->GetXaxis()->SetTitle("E_{T}^{miss} [GeV]");
   c1lep4jin2bin_met_topEW__157->GetXaxis()->SetRange(1,25);
   c1lep4jin2bin_met_topEW__157->GetXaxis()->SetLabelFont(43);
   c1lep4jin2bin_met_topEW__157->GetXaxis()->SetLabelSize(21);
   c1lep4jin2bin_met_topEW__157->GetXaxis()->SetTitleSize(21);
   c1lep4jin2bin_met_topEW__157->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_met_topEW__157->GetXaxis()->SetTitleFont(43);
   c1lep4jin2bin_met_topEW__157->GetYaxis()->SetLabelFont(43);
   c1lep4jin2bin_met_topEW__157->GetYaxis()->SetLabelSize(21);
   c1lep4jin2bin_met_topEW__157->GetYaxis()->SetTitleSize(21);
   c1lep4jin2bin_met_topEW__157->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_met_topEW__157->GetYaxis()->SetTitleFont(43);
   c1lep4jin2bin_met_topEW__157->GetZaxis()->SetLabelFont(43);
   c1lep4jin2bin_met_topEW__157->GetZaxis()->SetLabelSize(21);
   c1lep4jin2bin_met_topEW__157->GetZaxis()->SetTitleSize(21);
   c1lep4jin2bin_met_topEW__157->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jin2bin_met_topEW,"");
   Double_t xAxis176[5] = {0, 50, 100, 150, 200}; 
   
   TH1D *c1lep4jin2bin_met_ttbarbb__158 = new TH1D("c1lep4jin2bin_met_ttbarbb__158","",4, xAxis176);
   c1lep4jin2bin_met_ttbarbb__158->SetBinContent(1,13931.17);
   c1lep4jin2bin_met_ttbarbb__158->SetBinContent(2,31670.49);
   c1lep4jin2bin_met_ttbarbb__158->SetBinContent(3,4568.04);
   c1lep4jin2bin_met_ttbarbb__158->SetBinContent(4,1917.292);
   c1lep4jin2bin_met_ttbarbb__158->SetBinContent(5,1654.354);
   c1lep4jin2bin_met_ttbarbb__158->SetBinError(1,73.85908);
   c1lep4jin2bin_met_ttbarbb__158->SetBinError(2,112.3173);
   c1lep4jin2bin_met_ttbarbb__158->SetBinError(3,43.39443);
   c1lep4jin2bin_met_ttbarbb__158->SetBinError(4,27.50787);
   c1lep4jin2bin_met_ttbarbb__158->SetBinError(5,26.82882);
   c1lep4jin2bin_met_ttbarbb__158->SetEntries(197629);
   c1lep4jin2bin_met_ttbarbb__158->SetDirectory(0);
   c1lep4jin2bin_met_ttbarbb__158->SetStats(0);

   ci = TColor::GetColor("#6666cc");
   c1lep4jin2bin_met_ttbarbb__158->SetFillColor(ci);
   c1lep4jin2bin_met_ttbarbb__158->SetMarkerStyle(20);
   c1lep4jin2bin_met_ttbarbb__158->SetMarkerSize(1.2);
   c1lep4jin2bin_met_ttbarbb__158->GetXaxis()->SetTitle("E_{T}^{miss} [GeV]");
   c1lep4jin2bin_met_ttbarbb__158->GetXaxis()->SetRange(1,25);
   c1lep4jin2bin_met_ttbarbb__158->GetXaxis()->SetLabelFont(43);
   c1lep4jin2bin_met_ttbarbb__158->GetXaxis()->SetLabelSize(21);
   c1lep4jin2bin_met_ttbarbb__158->GetXaxis()->SetTitleSize(21);
   c1lep4jin2bin_met_ttbarbb__158->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_met_ttbarbb__158->GetXaxis()->SetTitleFont(43);
   c1lep4jin2bin_met_ttbarbb__158->GetYaxis()->SetLabelFont(43);
   c1lep4jin2bin_met_ttbarbb__158->GetYaxis()->SetLabelSize(21);
   c1lep4jin2bin_met_ttbarbb__158->GetYaxis()->SetTitleSize(21);
   c1lep4jin2bin_met_ttbarbb__158->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_met_ttbarbb__158->GetYaxis()->SetTitleFont(43);
   c1lep4jin2bin_met_ttbarbb__158->GetZaxis()->SetLabelFont(43);
   c1lep4jin2bin_met_ttbarbb__158->GetZaxis()->SetLabelSize(21);
   c1lep4jin2bin_met_ttbarbb__158->GetZaxis()->SetTitleSize(21);
   c1lep4jin2bin_met_ttbarbb__158->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jin2bin_met_ttbarbb,"");
   Double_t xAxis177[5] = {0, 50, 100, 150, 200}; 
   
   TH1D *c1lep4jin2bin_met_ttbarcc__159 = new TH1D("c1lep4jin2bin_met_ttbarcc__159","",4, xAxis177);
   c1lep4jin2bin_met_ttbarcc__159->SetBinContent(1,25249.37);
   c1lep4jin2bin_met_ttbarcc__159->SetBinContent(2,51610.96);
   c1lep4jin2bin_met_ttbarcc__159->SetBinContent(3,6174.179);
   c1lep4jin2bin_met_ttbarcc__159->SetBinContent(4,2412.401);
   c1lep4jin2bin_met_ttbarcc__159->SetBinContent(5,2035.49);
   c1lep4jin2bin_met_ttbarcc__159->SetBinError(1,98.40059);
   c1lep4jin2bin_met_ttbarcc__159->SetBinError(2,142.5872);
   c1lep4jin2bin_met_ttbarcc__159->SetBinError(3,50.02415);
   c1lep4jin2bin_met_ttbarcc__159->SetBinError(4,31.22322);
   c1lep4jin2bin_met_ttbarcc__159->SetBinError(5,29.13248);
   c1lep4jin2bin_met_ttbarcc__159->SetEntries(319744);
   c1lep4jin2bin_met_ttbarcc__159->SetDirectory(0);
   c1lep4jin2bin_met_ttbarcc__159->SetStats(0);

   ci = TColor::GetColor("#ccccff");
   c1lep4jin2bin_met_ttbarcc__159->SetFillColor(ci);
   c1lep4jin2bin_met_ttbarcc__159->SetMarkerStyle(20);
   c1lep4jin2bin_met_ttbarcc__159->SetMarkerSize(1.2);
   c1lep4jin2bin_met_ttbarcc__159->GetXaxis()->SetTitle("E_{T}^{miss} [GeV]");
   c1lep4jin2bin_met_ttbarcc__159->GetXaxis()->SetRange(1,25);
   c1lep4jin2bin_met_ttbarcc__159->GetXaxis()->SetLabelFont(43);
   c1lep4jin2bin_met_ttbarcc__159->GetXaxis()->SetLabelSize(21);
   c1lep4jin2bin_met_ttbarcc__159->GetXaxis()->SetTitleSize(21);
   c1lep4jin2bin_met_ttbarcc__159->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_met_ttbarcc__159->GetXaxis()->SetTitleFont(43);
   c1lep4jin2bin_met_ttbarcc__159->GetYaxis()->SetLabelFont(43);
   c1lep4jin2bin_met_ttbarcc__159->GetYaxis()->SetLabelSize(21);
   c1lep4jin2bin_met_ttbarcc__159->GetYaxis()->SetTitleSize(21);
   c1lep4jin2bin_met_ttbarcc__159->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_met_ttbarcc__159->GetYaxis()->SetTitleFont(43);
   c1lep4jin2bin_met_ttbarcc__159->GetZaxis()->SetLabelFont(43);
   c1lep4jin2bin_met_ttbarcc__159->GetZaxis()->SetLabelSize(21);
   c1lep4jin2bin_met_ttbarcc__159->GetZaxis()->SetTitleSize(21);
   c1lep4jin2bin_met_ttbarcc__159->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jin2bin_met_ttbarcc,"");
   Double_t xAxis178[5] = {0, 50, 100, 150, 200}; 
   
   TH1D *c1lep4jin2bin_met_ttbarlight__160 = new TH1D("c1lep4jin2bin_met_ttbarlight__160","",4, xAxis178);
   c1lep4jin2bin_met_ttbarlight__160->SetBinContent(1,209738.4);
   c1lep4jin2bin_met_ttbarlight__160->SetBinContent(2,401811.5);
   c1lep4jin2bin_met_ttbarlight__160->SetBinContent(3,42642.44);
   c1lep4jin2bin_met_ttbarlight__160->SetBinContent(4,15357.48);
   c1lep4jin2bin_met_ttbarlight__160->SetBinContent(5,11071.9);
   c1lep4jin2bin_met_ttbarlight__160->SetBinError(1,283.6887);
   c1lep4jin2bin_met_ttbarlight__160->SetBinError(2,396.0742);
   c1lep4jin2bin_met_ttbarlight__160->SetBinError(3,129.7182);
   c1lep4jin2bin_met_ttbarlight__160->SetBinError(4,77.41771);
   c1lep4jin2bin_met_ttbarlight__160->SetBinError(5,65.29442);
   c1lep4jin2bin_met_ttbarlight__160->SetEntries(2516401);
   c1lep4jin2bin_met_ttbarlight__160->SetDirectory(0);
   c1lep4jin2bin_met_ttbarlight__160->SetStats(0);
   c1lep4jin2bin_met_ttbarlight__160->SetMarkerStyle(20);
   c1lep4jin2bin_met_ttbarlight__160->SetMarkerSize(1.2);
   c1lep4jin2bin_met_ttbarlight__160->GetXaxis()->SetTitle("E_{T}^{miss} [GeV]");
   c1lep4jin2bin_met_ttbarlight__160->GetXaxis()->SetRange(1,25);
   c1lep4jin2bin_met_ttbarlight__160->GetXaxis()->SetLabelFont(43);
   c1lep4jin2bin_met_ttbarlight__160->GetXaxis()->SetLabelSize(21);
   c1lep4jin2bin_met_ttbarlight__160->GetXaxis()->SetTitleSize(21);
   c1lep4jin2bin_met_ttbarlight__160->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_met_ttbarlight__160->GetXaxis()->SetTitleFont(43);
   c1lep4jin2bin_met_ttbarlight__160->GetYaxis()->SetLabelFont(43);
   c1lep4jin2bin_met_ttbarlight__160->GetYaxis()->SetLabelSize(21);
   c1lep4jin2bin_met_ttbarlight__160->GetYaxis()->SetTitleSize(21);
   c1lep4jin2bin_met_ttbarlight__160->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_met_ttbarlight__160->GetYaxis()->SetTitleFont(43);
   c1lep4jin2bin_met_ttbarlight__160->GetZaxis()->SetLabelFont(43);
   c1lep4jin2bin_met_ttbarlight__160->GetZaxis()->SetLabelSize(21);
   c1lep4jin2bin_met_ttbarlight__160->GetZaxis()->SetTitleSize(21);
   c1lep4jin2bin_met_ttbarlight__160->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jin2bin_met_ttbarlight,"");
   Double_t xAxis179[5] = {0, 50, 100, 150, 200}; 
   
   TH1D *c1lep4jin2bin_met_uHcW__161 = new TH1D("c1lep4jin2bin_met_uHcW__161","",4, xAxis179);
   c1lep4jin2bin_met_uHcW__161->SetBinContent(1,3884.548);
   c1lep4jin2bin_met_uHcW__161->SetBinContent(2,6817.893);
   c1lep4jin2bin_met_uHcW__161->SetBinContent(3,582.3409);
   c1lep4jin2bin_met_uHcW__161->SetBinContent(4,213.9728);
   c1lep4jin2bin_met_uHcW__161->SetBinContent(5,166.3183);
   c1lep4jin2bin_met_uHcW__161->SetBinError(1,63.20025);
   c1lep4jin2bin_met_uHcW__161->SetBinError(2,84.87625);
   c1lep4jin2bin_met_uHcW__161->SetBinError(3,25.5159);
   c1lep4jin2bin_met_uHcW__161->SetBinError(4,15.97164);
   c1lep4jin2bin_met_uHcW__161->SetBinError(5,13.04409);
   c1lep4jin2bin_met_uHcW__161->SetEntries(70178);
   c1lep4jin2bin_met_uHcW__161->SetDirectory(0);
   c1lep4jin2bin_met_uHcW__161->SetStats(0);
   c1lep4jin2bin_met_uHcW__161->SetFillColor(2);
   c1lep4jin2bin_met_uHcW__161->SetLineColor(2);
   c1lep4jin2bin_met_uHcW__161->SetMarkerStyle(20);
   c1lep4jin2bin_met_uHcW__161->SetMarkerSize(1.2);
   c1lep4jin2bin_met_uHcW__161->GetXaxis()->SetTitle("E_{T}^{miss} [GeV]");
   c1lep4jin2bin_met_uHcW__161->GetXaxis()->SetRange(1,25);
   c1lep4jin2bin_met_uHcW__161->GetXaxis()->SetLabelFont(43);
   c1lep4jin2bin_met_uHcW__161->GetXaxis()->SetLabelSize(21);
   c1lep4jin2bin_met_uHcW__161->GetXaxis()->SetTitleSize(21);
   c1lep4jin2bin_met_uHcW__161->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_met_uHcW__161->GetXaxis()->SetTitleFont(43);
   c1lep4jin2bin_met_uHcW__161->GetYaxis()->SetLabelFont(43);
   c1lep4jin2bin_met_uHcW__161->GetYaxis()->SetLabelSize(21);
   c1lep4jin2bin_met_uHcW__161->GetYaxis()->SetTitleSize(21);
   c1lep4jin2bin_met_uHcW__161->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_met_uHcW__161->GetYaxis()->SetTitleFont(43);
   c1lep4jin2bin_met_uHcW__161->GetZaxis()->SetLabelFont(43);
   c1lep4jin2bin_met_uHcW__161->GetZaxis()->SetLabelSize(21);
   c1lep4jin2bin_met_uHcW__161->GetZaxis()->SetTitleSize(21);
   c1lep4jin2bin_met_uHcW__161->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jin2bin_met_uHcW,"");
   h_stack->Draw("hist same");
   
   Double_t g_totErr_fx3071[4] = {
   25,
   75,
   125,
   175};
   Double_t g_totErr_fy3071[4] = {
   294000.3,
   544895.2,
   59310.38,
   22286.66};
   Double_t g_totErr_felx3071[4] = {
   25,
   25,
   25,
   25};
   Double_t g_totErr_fely3071[4] = {
   33750.01,
   69361.51,
   8658.166,
   3521.295};
   Double_t g_totErr_fehx3071[4] = {
   25,
   25,
   25,
   25};
   Double_t g_totErr_fehy3071[4] = {
   33750.01,
   69361.51,
   8658.166,
   3521.295};
   grae = new TGraphAsymmErrors(4,g_totErr_fx3071,g_totErr_fy3071,g_totErr_felx3071,g_totErr_fehx3071,g_totErr_fely3071,g_totErr_fehy3071);
   grae->SetName("g_totErr");
   grae->SetTitle("");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(3354);
   grae->SetLineColor(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0);
   
   TH1F *Graph_g_totErr3071 = new TH1F("Graph_g_totErr3071","",100,0,220);
   Graph_g_totErr3071->SetMinimum(0);
   Graph_g_totErr3071->SetMaximum(673805.8);
   Graph_g_totErr3071->SetDirectory(0);
   Graph_g_totErr3071->SetStats(0);
   Graph_g_totErr3071->SetLineWidth(2);
   Graph_g_totErr3071->SetMarkerStyle(20);
   Graph_g_totErr3071->SetMarkerSize(1.2);
   Graph_g_totErr3071->GetXaxis()->SetLabelFont(43);
   Graph_g_totErr3071->GetXaxis()->SetLabelSize(21);
   Graph_g_totErr3071->GetXaxis()->SetTitleSize(21);
   Graph_g_totErr3071->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_totErr3071->GetXaxis()->SetTitleFont(43);
   Graph_g_totErr3071->GetYaxis()->SetLabelFont(43);
   Graph_g_totErr3071->GetYaxis()->SetLabelSize(21);
   Graph_g_totErr3071->GetYaxis()->SetTitleSize(21);
   Graph_g_totErr3071->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_totErr3071->GetYaxis()->SetTitleFont(43);
   Graph_g_totErr3071->GetZaxis()->SetLabelFont(43);
   Graph_g_totErr3071->GetZaxis()->SetLabelSize(21);
   Graph_g_totErr3071->GetZaxis()->SetTitleSize(21);
   Graph_g_totErr3071->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_totErr3071);
   
   grae->Draw("e2");
   
   Double_t Graph_from_c1lep4jin2bin_met_Data_fx3072[4] = {
   25,
   75,
   125,
   175};
   Double_t Graph_from_c1lep4jin2bin_met_Data_fy3072[4] = {
   282249,
   524854,
   55866,
   20468};
   Double_t Graph_from_c1lep4jin2bin_met_Data_felx3072[4] = {
   24.95,
   24.95,
   24.95,
   24.95};
   Double_t Graph_from_c1lep4jin2bin_met_Data_fely3072[4] = {
   531.2711,
   724.4681,
   236.3599,
   143.0664};
   Double_t Graph_from_c1lep4jin2bin_met_Data_fehx3072[4] = {
   25,
   25,
   25,
   25};
   Double_t Graph_from_c1lep4jin2bin_met_Data_fehy3072[4] = {
   531.2711,
   724.4681,
   236.3599,
   143.0664};
   grae = new TGraphAsymmErrors(4,Graph_from_c1lep4jin2bin_met_Data_fx3072,Graph_from_c1lep4jin2bin_met_Data_fy3072,Graph_from_c1lep4jin2bin_met_Data_felx3072,Graph_from_c1lep4jin2bin_met_Data_fehx3072,Graph_from_c1lep4jin2bin_met_Data_fely3072,Graph_from_c1lep4jin2bin_met_Data_fehy3072);
   grae->SetName("Graph_from_c1lep4jin2bin_met_Data");
   grae->SetTitle("");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_c1lep4jin2bin_met_Data3072 = new TH1F("Graph_Graph_from_c1lep4jin2bin_met_Data3072","",100,0,219.995);
   Graph_Graph_from_c1lep4jin2bin_met_Data3072->SetMinimum(0);
   Graph_Graph_from_c1lep4jin2bin_met_Data3072->SetMaximum(576103.8);
   Graph_Graph_from_c1lep4jin2bin_met_Data3072->SetDirectory(0);
   Graph_Graph_from_c1lep4jin2bin_met_Data3072->SetStats(0);
   Graph_Graph_from_c1lep4jin2bin_met_Data3072->SetLineWidth(2);
   Graph_Graph_from_c1lep4jin2bin_met_Data3072->SetMarkerStyle(20);
   Graph_Graph_from_c1lep4jin2bin_met_Data3072->SetMarkerSize(1.2);
   Graph_Graph_from_c1lep4jin2bin_met_Data3072->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep4jin2bin_met_Data3072->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep4jin2bin_met_Data3072->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep4jin2bin_met_Data3072->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep4jin2bin_met_Data3072->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep4jin2bin_met_Data3072->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep4jin2bin_met_Data3072->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep4jin2bin_met_Data3072->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep4jin2bin_met_Data3072->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep4jin2bin_met_Data3072->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep4jin2bin_met_Data3072->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep4jin2bin_met_Data3072->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep4jin2bin_met_Data3072->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep4jin2bin_met_Data3072->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_c1lep4jin2bin_met_Data3072);
   
   grae->Draw("ep1 ");
   Double_t xAxis180[5] = {0, 50, 100, 150, 200}; 
   
   TH1D *h_dummy_copy__162 = new TH1D("h_dummy_copy__162","",4, xAxis180);
   h_dummy_copy__162->SetEntries(1.123257e+07);
   h_dummy_copy__162->SetDirectory(0);
   h_dummy_copy__162->SetStats(0);
   h_dummy_copy__162->SetMarkerStyle(20);
   h_dummy_copy__162->SetMarkerSize(1.2);
   h_dummy_copy__162->GetXaxis()->SetTitle("E_{T}^{miss} [GeV]");
   h_dummy_copy__162->GetXaxis()->SetRange(1,25);
   h_dummy_copy__162->GetXaxis()->SetLabelFont(43);
   h_dummy_copy__162->GetXaxis()->SetLabelSize(21);
   h_dummy_copy__162->GetXaxis()->SetTitleSize(21);
   h_dummy_copy__162->GetXaxis()->SetTitleOffset(1.4);
   h_dummy_copy__162->GetXaxis()->SetTitleFont(43);
   h_dummy_copy__162->GetYaxis()->SetTitle("Events / 50 GeV");
   h_dummy_copy__162->GetYaxis()->SetLabelFont(43);
   h_dummy_copy__162->GetYaxis()->SetLabelSize(16.8);
   h_dummy_copy__162->GetYaxis()->SetTitleSize(21);
   h_dummy_copy__162->GetYaxis()->SetTitleOffset(2.4);
   h_dummy_copy__162->GetYaxis()->SetTitleFont(43);
   h_dummy_copy__162->GetZaxis()->SetLabelFont(43);
   h_dummy_copy__162->GetZaxis()->SetLabelSize(21);
   h_dummy_copy__162->GetZaxis()->SetTitleSize(21);
   h_dummy_copy__162->GetZaxis()->SetTitleFont(43);
   h_dummy_copy__162->Draw("sameaxis");
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
   TLegendEntry *entry=leg->AddEntry("c1lep4jin2bin_met_Data","Data","lep");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep4jin2bin_met_uHcW","t#bar{t}#rightarrowWbHc (BR=1%)","f");
   entry->SetFillColor(2);
   entry->SetFillStyle(1001);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep4jin2bin_met_ttbarlight","t#bar{t}+light","f");
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep4jin2bin_met_ttbarcc","t#bar{t}+cc","f");

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
   entry=leg->AddEntry("c1lep4jin2bin_met_ttbarbb","t#bar{t}+bb","f");

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
   entry=leg->AddEntry("c1lep4jin2bin_met_topEW","Non-t#bar{t}","f");

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
   c_c1lep4jin2bin_met->cd();
   c_c1lep4jin2bin_met->Modified();
   c_c1lep4jin2bin_met->cd();
   c_c1lep4jin2bin_met->SetSelected(c_c1lep4jin2bin_met);
}
