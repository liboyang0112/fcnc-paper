void c1lep6jin3bex_hthad()
{
//=========Macro generated from canvas: c_c1lep6jin3bex_hthad/c_c1lep6jin3bex_hthad
//=========  (Thu Jul 19 17:38:04 2018) by ROOT version6.04/14
   TCanvas *c_c1lep6jin3bex_hthad = new TCanvas("c_c1lep6jin3bex_hthad", "c_c1lep6jin3bex_hthad",0,0,600,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c_c1lep6jin3bex_hthad->SetHighLightColor(2);
   c_c1lep6jin3bex_hthad->Range(0,0,1,1);
   c_c1lep6jin3bex_hthad->SetFillColor(0);
   c_c1lep6jin3bex_hthad->SetBorderMode(0);
   c_c1lep6jin3bex_hthad->SetBorderSize(2);
   c_c1lep6jin3bex_hthad->SetTickx(1);
   c_c1lep6jin3bex_hthad->SetTicky(1);
   c_c1lep6jin3bex_hthad->SetLeftMargin(0.16);
   c_c1lep6jin3bex_hthad->SetRightMargin(0.05);
   c_c1lep6jin3bex_hthad->SetTopMargin(0.05);
   c_c1lep6jin3bex_hthad->SetBottomMargin(0.16);
   c_c1lep6jin3bex_hthad->SetFrameBorderMode(0);
  
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
   Double_t xAxis161[8] = {100, 200, 300, 400, 500, 600, 700, 800}; 
   
   TH1D *h_dummy2__145 = new TH1D("h_dummy2__145","Data/MC",7, xAxis161);
   h_dummy2__145->SetMinimum(0.5);
   h_dummy2__145->SetMaximum(1.5);
   h_dummy2__145->SetEntries(1164496);
   h_dummy2__145->SetDirectory(0);
   h_dummy2__145->SetStats(0);
   h_dummy2__145->SetMarkerStyle(20);
   h_dummy2__145->SetMarkerSize(1.2);
   h_dummy2__145->GetXaxis()->SetTitle("H_{T}^{had.} [GeV]");
   h_dummy2__145->GetXaxis()->SetRange(1,100);
   h_dummy2__145->GetXaxis()->SetLabelFont(43);
   h_dummy2__145->GetXaxis()->SetLabelOffset(0.025);
   h_dummy2__145->GetXaxis()->SetLabelSize(16.8);
   h_dummy2__145->GetXaxis()->SetTitleSize(21);
   h_dummy2__145->GetXaxis()->SetTitleOffset(5.05);
   h_dummy2__145->GetXaxis()->SetTitleFont(43);
   h_dummy2__145->GetYaxis()->SetTitle("Data / Bkg");
   h_dummy2__145->GetYaxis()->SetNdivisions(-504);
   h_dummy2__145->GetYaxis()->SetLabelFont(43);
   h_dummy2__145->GetYaxis()->SetLabelOffset(0.02);
   h_dummy2__145->GetYaxis()->SetLabelSize(16.8);
   h_dummy2__145->GetYaxis()->SetTitleSize(21);
   h_dummy2__145->GetYaxis()->SetTitleOffset(2.4);
   h_dummy2__145->GetYaxis()->SetTitleFont(43);
   h_dummy2__145->GetZaxis()->SetLabelFont(43);
   h_dummy2__145->GetZaxis()->SetLabelSize(21);
   h_dummy2__145->GetZaxis()->SetTitleSize(21);
   h_dummy2__145->GetZaxis()->SetTitleFont(43);
   h_dummy2__145->Draw("HIST");
   
   Double_t Graph_from_h_ratio_fx3065[7] = {
   150,
   250,
   350,
   450,
   550,
   650,
   750};
   Double_t Graph_from_h_ratio_fy3065[7] = {
   3.139526,
   1.235872,
   1.182262,
   1.136253,
   1.100034,
   0.9964634,
   0.9595565};
   Double_t Graph_from_h_ratio_felx3065[7] = {
   49.9,
   49.9,
   49.9,
   49.9,
   49.9,
   49.9,
   49.9};
   Double_t Graph_from_h_ratio_fely3065[7] = {
   0.8390737,
   0.03582613,
   0.01994687,
   0.01934205,
   0.02219687,
   0.02558401,
   0.03101806};
   Double_t Graph_from_h_ratio_fehx3065[7] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t Graph_from_h_ratio_fehy3065[7] = {
   0.8390737,
   0.03582613,
   0.01994687,
   0.01934205,
   0.02219687,
   0.02558401,
   0.03101806};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(7,Graph_from_h_ratio_fx3065,Graph_from_h_ratio_fy3065,Graph_from_h_ratio_felx3065,Graph_from_h_ratio_fehx3065,Graph_from_h_ratio_fely3065,Graph_from_h_ratio_fehy3065);
   grae->SetName("Graph_from_h_ratio");
   grae->SetTitle("");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(24);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_h_ratio3065 = new TH1F("Graph_Graph_from_h_ratio3065","",100,30.11,869.99);
   Graph_Graph_from_h_ratio3065->SetMinimum(0.6235323);
   Graph_Graph_from_h_ratio3065->SetMaximum(4.283606);
   Graph_Graph_from_h_ratio3065->SetDirectory(0);
   Graph_Graph_from_h_ratio3065->SetStats(0);
   Graph_Graph_from_h_ratio3065->SetLineWidth(2);
   Graph_Graph_from_h_ratio3065->SetMarkerStyle(20);
   Graph_Graph_from_h_ratio3065->SetMarkerSize(1.2);
   Graph_Graph_from_h_ratio3065->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3065->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3065->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3065->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3065->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3065->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3065->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3065->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3065->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3065->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3065->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3065->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3065->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3065->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_h_ratio3065);
   
   grae->Draw("pe0");
   TLine *line = new TLine(100,1,800,1);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t g_ratio2_fx3066[7] = {
   150,
   250,
   350,
   450,
   550,
   650,
   750};
   Double_t g_ratio2_fy3066[7] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t g_ratio2_felx3066[7] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t g_ratio2_fely3066[7] = {
   2.014464,
   0.2590942,
   0.2181247,
   0.1915956,
   0.188671,
   0.195365,
   0.2003486};
   Double_t g_ratio2_fehx3066[7] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t g_ratio2_fehy3066[7] = {
   2.014464,
   0.2590942,
   0.2181247,
   0.1915956,
   0.188671,
   0.195365,
   0.2003486};
   grae = new TGraphAsymmErrors(7,g_ratio2_fx3066,g_ratio2_fy3066,g_ratio2_felx3066,g_ratio2_fehx3066,g_ratio2_fely3066,g_ratio2_fehy3066);
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
   
   TH1F *Graph_g_ratio23066 = new TH1F("Graph_g_ratio23066","",100,30,870);
   Graph_g_ratio23066->SetMinimum(-1.417356);
   Graph_g_ratio23066->SetMaximum(3.417356);
   Graph_g_ratio23066->SetDirectory(0);
   Graph_g_ratio23066->SetStats(0);
   Graph_g_ratio23066->SetLineWidth(2);
   Graph_g_ratio23066->SetMarkerStyle(20);
   Graph_g_ratio23066->SetMarkerSize(1.2);
   Graph_g_ratio23066->GetXaxis()->SetLabelFont(43);
   Graph_g_ratio23066->GetXaxis()->SetLabelSize(21);
   Graph_g_ratio23066->GetXaxis()->SetTitleSize(21);
   Graph_g_ratio23066->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23066->GetXaxis()->SetTitleFont(43);
   Graph_g_ratio23066->GetYaxis()->SetLabelFont(43);
   Graph_g_ratio23066->GetYaxis()->SetLabelSize(21);
   Graph_g_ratio23066->GetYaxis()->SetTitleSize(21);
   Graph_g_ratio23066->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23066->GetYaxis()->SetTitleFont(43);
   Graph_g_ratio23066->GetZaxis()->SetLabelFont(43);
   Graph_g_ratio23066->GetZaxis()->SetLabelSize(21);
   Graph_g_ratio23066->GetZaxis()->SetTitleSize(21);
   Graph_g_ratio23066->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_ratio23066);
   
   grae->Draw("e2");
   Double_t xAxis162[8] = {100, 200, 300, 400, 500, 600, 700, 800}; 
   
   TH1D *h_dummy2_copy__146 = new TH1D("h_dummy2_copy__146","Data/MC",7, xAxis162);
   h_dummy2_copy__146->SetMinimum(0.5);
   h_dummy2_copy__146->SetMaximum(1.5);
   h_dummy2_copy__146->SetEntries(1164496);
   h_dummy2_copy__146->SetDirectory(0);
   h_dummy2_copy__146->SetStats(0);
   h_dummy2_copy__146->SetMarkerStyle(20);
   h_dummy2_copy__146->SetMarkerSize(1.2);
   h_dummy2_copy__146->GetXaxis()->SetTitle("H_{T}^{had.} [GeV]");
   h_dummy2_copy__146->GetXaxis()->SetRange(1,100);
   h_dummy2_copy__146->GetXaxis()->SetLabelFont(43);
   h_dummy2_copy__146->GetXaxis()->SetLabelOffset(0.025);
   h_dummy2_copy__146->GetXaxis()->SetLabelSize(16.8);
   h_dummy2_copy__146->GetXaxis()->SetTitleSize(21);
   h_dummy2_copy__146->GetXaxis()->SetTitleOffset(5.05);
   h_dummy2_copy__146->GetXaxis()->SetTitleFont(43);
   h_dummy2_copy__146->GetYaxis()->SetTitle("Data / Bkg");
   h_dummy2_copy__146->GetYaxis()->SetNdivisions(-504);
   h_dummy2_copy__146->GetYaxis()->SetLabelFont(43);
   h_dummy2_copy__146->GetYaxis()->SetLabelOffset(0.02);
   h_dummy2_copy__146->GetYaxis()->SetLabelSize(16.8);
   h_dummy2_copy__146->GetYaxis()->SetTitleSize(21);
   h_dummy2_copy__146->GetYaxis()->SetTitleOffset(2.4);
   h_dummy2_copy__146->GetYaxis()->SetTitleFont(43);
   h_dummy2_copy__146->GetZaxis()->SetLabelFont(43);
   h_dummy2_copy__146->GetZaxis()->SetLabelSize(21);
   h_dummy2_copy__146->GetZaxis()->SetTitleSize(21);
   h_dummy2_copy__146->GetZaxis()->SetTitleFont(43);
   h_dummy2_copy__146->Draw("sameaxis");
   line = new TLine(0.07,1,0.135,1);
   line->SetLineColor(0);
   line->SetLineWidth(25);
   line->Draw();
   TArrow *arrow = new TArrow(150,1.45,150,1.5,0.03,"|>");
   arrow->SetFillColor(10);
   arrow->SetFillStyle(1001);

   ci = TColor::GetColor("#6666ff");
   arrow->SetLineColor(ci);
   arrow->SetLineWidth(2);
   arrow->SetAngle(40);
   arrow->Draw();
   TLatex *   tex = new TLatex(0.15,0.9,"");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.1);
   tex->SetLineWidth(2);
   tex->Draw();
   pad1->Modified();
   c_c1lep6jin3bex_hthad->cd();
  
// ------------>Primitives in pad: pad0
   TPad *pad0 = new TPad("pad0", "pad0",0,0.2,1,1);
   pad0->Draw();
   pad0->cd();
   pad0->Range(-20.98765,-756.4809,843.2099,6808.327);
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
   Double_t xAxis163[8] = {100, 200, 300, 400, 500, 600, 700, 800}; 
   
   TH1D *h_dummy__147 = new TH1D("h_dummy__147","",7, xAxis163);
   h_dummy__147->SetMinimum(0);
   h_dummy__147->SetMaximum(6430.087);
   h_dummy__147->SetEntries(1164496);
   h_dummy__147->SetDirectory(0);
   h_dummy__147->SetStats(0);
   h_dummy__147->SetMarkerStyle(20);
   h_dummy__147->SetMarkerSize(1.2);
   h_dummy__147->GetXaxis()->SetRange(1,100);
   h_dummy__147->GetXaxis()->SetLabelFont(43);
   h_dummy__147->GetXaxis()->SetLabelSize(0);
   h_dummy__147->GetXaxis()->SetTitleSize(21);
   h_dummy__147->GetXaxis()->SetTitleOffset(1.4);
   h_dummy__147->GetXaxis()->SetTitleFont(43);
   h_dummy__147->GetYaxis()->SetTitle("Events / 100 GeV");
   h_dummy__147->GetYaxis()->SetLabelFont(43);
   h_dummy__147->GetYaxis()->SetLabelSize(16.8);
   h_dummy__147->GetYaxis()->SetTitleSize(21);
   h_dummy__147->GetYaxis()->SetTitleOffset(2.4);
   h_dummy__147->GetYaxis()->SetTitleFont(43);
   h_dummy__147->GetZaxis()->SetLabelFont(43);
   h_dummy__147->GetZaxis()->SetLabelSize(21);
   h_dummy__147->GetZaxis()->SetTitleSize(21);
   h_dummy__147->GetZaxis()->SetTitleFont(43);
   h_dummy__147->Draw("HIST");
   
   THStack *h_stack = new THStack();
   h_stack->SetName("h_stack");
   h_stack->SetTitle("h_stack");
   Double_t xAxis164[8] = {100, 200, 300, 400, 500, 600, 700, 800}; 
   
   TH1F *h_stack_stack_17 = new TH1F("h_stack_stack_17","h_stack",7, xAxis164);
   h_stack_stack_17->SetMinimum(-7.753734);
   h_stack_stack_17->SetMaximum(3385.559);
   h_stack_stack_17->SetDirectory(0);
   h_stack_stack_17->SetStats(0);
   h_stack_stack_17->SetLineWidth(2);
   h_stack_stack_17->SetMarkerStyle(20);
   h_stack_stack_17->SetMarkerSize(1.2);
   h_stack_stack_17->GetXaxis()->SetLabelFont(43);
   h_stack_stack_17->GetXaxis()->SetLabelSize(21);
   h_stack_stack_17->GetXaxis()->SetTitleSize(21);
   h_stack_stack_17->GetXaxis()->SetTitleOffset(1.4);
   h_stack_stack_17->GetXaxis()->SetTitleFont(43);
   h_stack_stack_17->GetYaxis()->SetLabelFont(43);
   h_stack_stack_17->GetYaxis()->SetLabelSize(21);
   h_stack_stack_17->GetYaxis()->SetTitleSize(21);
   h_stack_stack_17->GetYaxis()->SetTitleOffset(1.4);
   h_stack_stack_17->GetYaxis()->SetTitleFont(43);
   h_stack_stack_17->GetZaxis()->SetLabelFont(43);
   h_stack_stack_17->GetZaxis()->SetLabelSize(21);
   h_stack_stack_17->GetZaxis()->SetTitleSize(21);
   h_stack_stack_17->GetZaxis()->SetTitleFont(43);
   h_stack->SetHistogram(h_stack_stack_17);
   
   Double_t xAxis165[8] = {100, 200, 300, 400, 500, 600, 700, 800}; 
   
   TH1D *c1lep6jin3bex_hthad_topEW__148 = new TH1D("c1lep6jin3bex_hthad_topEW__148","",7, xAxis165);
   c1lep6jin3bex_hthad_topEW__148->SetBinContent(1,0.7605708);
   c1lep6jin3bex_hthad_topEW__148->SetBinContent(2,144.6646);
   c1lep6jin3bex_hthad_topEW__148->SetBinContent(3,318.8077);
   c1lep6jin3bex_hthad_topEW__148->SetBinContent(4,363.9127);
   c1lep6jin3bex_hthad_topEW__148->SetBinContent(5,320.057);
   c1lep6jin3bex_hthad_topEW__148->SetBinContent(6,260.7188);
   c1lep6jin3bex_hthad_topEW__148->SetBinContent(7,184.8633);
   c1lep6jin3bex_hthad_topEW__148->SetBinContent(8,291.2973);
   c1lep6jin3bex_hthad_topEW__148->SetBinError(1,4.097122);
   c1lep6jin3bex_hthad_topEW__148->SetBinError(2,29.7693);
   c1lep6jin3bex_hthad_topEW__148->SetBinError(3,37.20037);
   c1lep6jin3bex_hthad_topEW__148->SetBinError(4,39.89839);
   c1lep6jin3bex_hthad_topEW__148->SetBinError(5,39.30575);
   c1lep6jin3bex_hthad_topEW__148->SetBinError(6,36.57164);
   c1lep6jin3bex_hthad_topEW__148->SetBinError(7,30.59243);
   c1lep6jin3bex_hthad_topEW__148->SetBinError(8,36.85751);
   c1lep6jin3bex_hthad_topEW__148->SetEntries(1125862);
   c1lep6jin3bex_hthad_topEW__148->SetDirectory(0);
   c1lep6jin3bex_hthad_topEW__148->SetStats(0);

   ci = TColor::GetColor("#66cc66");
   c1lep6jin3bex_hthad_topEW__148->SetFillColor(ci);
   c1lep6jin3bex_hthad_topEW__148->SetMarkerStyle(20);
   c1lep6jin3bex_hthad_topEW__148->SetMarkerSize(1.2);
   c1lep6jin3bex_hthad_topEW__148->GetXaxis()->SetTitle("H_{T}^{had} [GeV]");
   c1lep6jin3bex_hthad_topEW__148->GetXaxis()->SetRange(1,100);
   c1lep6jin3bex_hthad_topEW__148->GetXaxis()->SetLabelFont(43);
   c1lep6jin3bex_hthad_topEW__148->GetXaxis()->SetLabelSize(21);
   c1lep6jin3bex_hthad_topEW__148->GetXaxis()->SetTitleSize(21);
   c1lep6jin3bex_hthad_topEW__148->GetXaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_hthad_topEW__148->GetXaxis()->SetTitleFont(43);
   c1lep6jin3bex_hthad_topEW__148->GetYaxis()->SetLabelFont(43);
   c1lep6jin3bex_hthad_topEW__148->GetYaxis()->SetLabelSize(21);
   c1lep6jin3bex_hthad_topEW__148->GetYaxis()->SetTitleSize(21);
   c1lep6jin3bex_hthad_topEW__148->GetYaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_hthad_topEW__148->GetYaxis()->SetTitleFont(43);
   c1lep6jin3bex_hthad_topEW__148->GetZaxis()->SetLabelFont(43);
   c1lep6jin3bex_hthad_topEW__148->GetZaxis()->SetLabelSize(21);
   c1lep6jin3bex_hthad_topEW__148->GetZaxis()->SetTitleSize(21);
   c1lep6jin3bex_hthad_topEW__148->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep6jin3bex_hthad_topEW,"");
   Double_t xAxis166[8] = {100, 200, 300, 400, 500, 600, 700, 800}; 
   
   TH1D *c1lep6jin3bex_hthad_ttbarbb__149 = new TH1D("c1lep6jin3bex_hthad_ttbarbb__149","",7, xAxis166);
   c1lep6jin3bex_hthad_ttbarbb__149->SetBinContent(1,2.252424);
   c1lep6jin3bex_hthad_ttbarbb__149->SetBinContent(2,435.373);
   c1lep6jin3bex_hthad_ttbarbb__149->SetBinContent(3,1553.337);
   c1lep6jin3bex_hthad_ttbarbb__149->SetBinContent(4,1706.11);
   c1lep6jin3bex_hthad_ttbarbb__149->SetBinContent(5,1240.621);
   c1lep6jin3bex_hthad_ttbarbb__149->SetBinContent(6,824.5262);
   c1lep6jin3bex_hthad_ttbarbb__149->SetBinContent(7,539.9733);
   c1lep6jin3bex_hthad_ttbarbb__149->SetBinContent(8,980.2993);
   c1lep6jin3bex_hthad_ttbarbb__149->SetBinError(1,0.9370512);
   c1lep6jin3bex_hthad_ttbarbb__149->SetBinError(2,12.6947);
   c1lep6jin3bex_hthad_ttbarbb__149->SetBinError(3,25.40906);
   c1lep6jin3bex_hthad_ttbarbb__149->SetBinError(4,26.99865);
   c1lep6jin3bex_hthad_ttbarbb__149->SetBinError(5,23.1382);
   c1lep6jin3bex_hthad_ttbarbb__149->SetBinError(6,18.46404);
   c1lep6jin3bex_hthad_ttbarbb__149->SetBinError(7,14.96044);
   c1lep6jin3bex_hthad_ttbarbb__149->SetBinError(8,20.68213);
   c1lep6jin3bex_hthad_ttbarbb__149->SetEntries(26042);
   c1lep6jin3bex_hthad_ttbarbb__149->SetDirectory(0);
   c1lep6jin3bex_hthad_ttbarbb__149->SetStats(0);

   ci = TColor::GetColor("#6666cc");
   c1lep6jin3bex_hthad_ttbarbb__149->SetFillColor(ci);
   c1lep6jin3bex_hthad_ttbarbb__149->SetMarkerStyle(20);
   c1lep6jin3bex_hthad_ttbarbb__149->SetMarkerSize(1.2);
   c1lep6jin3bex_hthad_ttbarbb__149->GetXaxis()->SetTitle("H_{T}^{had} [GeV]");
   c1lep6jin3bex_hthad_ttbarbb__149->GetXaxis()->SetRange(1,100);
   c1lep6jin3bex_hthad_ttbarbb__149->GetXaxis()->SetLabelFont(43);
   c1lep6jin3bex_hthad_ttbarbb__149->GetXaxis()->SetLabelSize(21);
   c1lep6jin3bex_hthad_ttbarbb__149->GetXaxis()->SetTitleSize(21);
   c1lep6jin3bex_hthad_ttbarbb__149->GetXaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_hthad_ttbarbb__149->GetXaxis()->SetTitleFont(43);
   c1lep6jin3bex_hthad_ttbarbb__149->GetYaxis()->SetLabelFont(43);
   c1lep6jin3bex_hthad_ttbarbb__149->GetYaxis()->SetLabelSize(21);
   c1lep6jin3bex_hthad_ttbarbb__149->GetYaxis()->SetTitleSize(21);
   c1lep6jin3bex_hthad_ttbarbb__149->GetYaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_hthad_ttbarbb__149->GetYaxis()->SetTitleFont(43);
   c1lep6jin3bex_hthad_ttbarbb__149->GetZaxis()->SetLabelFont(43);
   c1lep6jin3bex_hthad_ttbarbb__149->GetZaxis()->SetLabelSize(21);
   c1lep6jin3bex_hthad_ttbarbb__149->GetZaxis()->SetTitleSize(21);
   c1lep6jin3bex_hthad_ttbarbb__149->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep6jin3bex_hthad_ttbarbb,"");
   Double_t xAxis167[8] = {100, 200, 300, 400, 500, 600, 700, 800}; 
   
   TH1D *c1lep6jin3bex_hthad_ttbarcc__150 = new TH1D("c1lep6jin3bex_hthad_ttbarcc__150","",7, xAxis167);
   c1lep6jin3bex_hthad_ttbarcc__150->SetBinContent(1,1e-06);
   c1lep6jin3bex_hthad_ttbarcc__150->SetBinContent(2,119.6155);
   c1lep6jin3bex_hthad_ttbarcc__150->SetBinContent(3,404.1835);
   c1lep6jin3bex_hthad_ttbarcc__150->SetBinContent(4,414.3923);
   c1lep6jin3bex_hthad_ttbarcc__150->SetBinContent(5,295.8469);
   c1lep6jin3bex_hthad_ttbarcc__150->SetBinContent(6,217.9981);
   c1lep6jin3bex_hthad_ttbarcc__150->SetBinContent(7,133.8271);
   c1lep6jin3bex_hthad_ttbarcc__150->SetBinContent(8,228.3922);
   c1lep6jin3bex_hthad_ttbarcc__150->SetBinError(1,7.753735);
   c1lep6jin3bex_hthad_ttbarcc__150->SetBinError(2,9.763232);
   c1lep6jin3bex_hthad_ttbarcc__150->SetBinError(3,13.66231);
   c1lep6jin3bex_hthad_ttbarcc__150->SetBinError(4,13.43431);
   c1lep6jin3bex_hthad_ttbarcc__150->SetBinError(5,12.55635);
   c1lep6jin3bex_hthad_ttbarcc__150->SetBinError(6,11.00247);
   c1lep6jin3bex_hthad_ttbarcc__150->SetBinError(7,7.753735);
   c1lep6jin3bex_hthad_ttbarcc__150->SetBinError(8,9.507585);
   c1lep6jin3bex_hthad_ttbarcc__150->SetEntries(5631);
   c1lep6jin3bex_hthad_ttbarcc__150->SetDirectory(0);
   c1lep6jin3bex_hthad_ttbarcc__150->SetStats(0);

   ci = TColor::GetColor("#ccccff");
   c1lep6jin3bex_hthad_ttbarcc__150->SetFillColor(ci);
   c1lep6jin3bex_hthad_ttbarcc__150->SetMarkerStyle(20);
   c1lep6jin3bex_hthad_ttbarcc__150->SetMarkerSize(1.2);
   c1lep6jin3bex_hthad_ttbarcc__150->GetXaxis()->SetTitle("H_{T}^{had} [GeV]");
   c1lep6jin3bex_hthad_ttbarcc__150->GetXaxis()->SetRange(1,100);
   c1lep6jin3bex_hthad_ttbarcc__150->GetXaxis()->SetLabelFont(43);
   c1lep6jin3bex_hthad_ttbarcc__150->GetXaxis()->SetLabelSize(21);
   c1lep6jin3bex_hthad_ttbarcc__150->GetXaxis()->SetTitleSize(21);
   c1lep6jin3bex_hthad_ttbarcc__150->GetXaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_hthad_ttbarcc__150->GetXaxis()->SetTitleFont(43);
   c1lep6jin3bex_hthad_ttbarcc__150->GetYaxis()->SetLabelFont(43);
   c1lep6jin3bex_hthad_ttbarcc__150->GetYaxis()->SetLabelSize(21);
   c1lep6jin3bex_hthad_ttbarcc__150->GetYaxis()->SetTitleSize(21);
   c1lep6jin3bex_hthad_ttbarcc__150->GetYaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_hthad_ttbarcc__150->GetYaxis()->SetTitleFont(43);
   c1lep6jin3bex_hthad_ttbarcc__150->GetZaxis()->SetLabelFont(43);
   c1lep6jin3bex_hthad_ttbarcc__150->GetZaxis()->SetLabelSize(21);
   c1lep6jin3bex_hthad_ttbarcc__150->GetZaxis()->SetTitleSize(21);
   c1lep6jin3bex_hthad_ttbarcc__150->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep6jin3bex_hthad_ttbarcc,"");
   Double_t xAxis168[8] = {100, 200, 300, 400, 500, 600, 700, 800}; 
   
   TH1D *c1lep6jin3bex_hthad_ttbarlight__151 = new TH1D("c1lep6jin3bex_hthad_ttbarlight__151","",7, xAxis168);
   c1lep6jin3bex_hthad_ttbarlight__151->SetBinContent(1,1.446276);
   c1lep6jin3bex_hthad_ttbarlight__151->SetBinContent(2,263.2301);
   c1lep6jin3bex_hthad_ttbarlight__151->SetBinContent(3,695.0931);
   c1lep6jin3bex_hthad_ttbarlight__151->SetBinContent(4,552.7617);
   c1lep6jin3bex_hthad_ttbarlight__151->SetBinContent(5,376.134);
   c1lep6jin3bex_hthad_ttbarlight__151->SetBinContent(6,219.141);
   c1lep6jin3bex_hthad_ttbarlight__151->SetBinContent(7,138.672);
   c1lep6jin3bex_hthad_ttbarlight__151->SetBinContent(8,203.1471);
   c1lep6jin3bex_hthad_ttbarlight__151->SetBinError(1,0.7006348);
   c1lep6jin3bex_hthad_ttbarlight__151->SetBinError(2,13.65726);
   c1lep6jin3bex_hthad_ttbarlight__151->SetBinError(3,20.31265);
   c1lep6jin3bex_hthad_ttbarlight__151->SetBinError(4,16.57292);
   c1lep6jin3bex_hthad_ttbarlight__151->SetBinError(5,14.50567);
   c1lep6jin3bex_hthad_ttbarlight__151->SetBinError(6,10.95704);
   c1lep6jin3bex_hthad_ttbarlight__151->SetBinError(7,8.478341);
   c1lep6jin3bex_hthad_ttbarlight__151->SetBinError(8,11.02164);
   c1lep6jin3bex_hthad_ttbarlight__151->SetEntries(6954);
   c1lep6jin3bex_hthad_ttbarlight__151->SetDirectory(0);
   c1lep6jin3bex_hthad_ttbarlight__151->SetStats(0);
   c1lep6jin3bex_hthad_ttbarlight__151->SetMarkerStyle(20);
   c1lep6jin3bex_hthad_ttbarlight__151->SetMarkerSize(1.2);
   c1lep6jin3bex_hthad_ttbarlight__151->GetXaxis()->SetTitle("H_{T}^{had} [GeV]");
   c1lep6jin3bex_hthad_ttbarlight__151->GetXaxis()->SetRange(1,100);
   c1lep6jin3bex_hthad_ttbarlight__151->GetXaxis()->SetLabelFont(43);
   c1lep6jin3bex_hthad_ttbarlight__151->GetXaxis()->SetLabelSize(21);
   c1lep6jin3bex_hthad_ttbarlight__151->GetXaxis()->SetTitleSize(21);
   c1lep6jin3bex_hthad_ttbarlight__151->GetXaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_hthad_ttbarlight__151->GetXaxis()->SetTitleFont(43);
   c1lep6jin3bex_hthad_ttbarlight__151->GetYaxis()->SetLabelFont(43);
   c1lep6jin3bex_hthad_ttbarlight__151->GetYaxis()->SetLabelSize(21);
   c1lep6jin3bex_hthad_ttbarlight__151->GetYaxis()->SetTitleSize(21);
   c1lep6jin3bex_hthad_ttbarlight__151->GetYaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_hthad_ttbarlight__151->GetYaxis()->SetTitleFont(43);
   c1lep6jin3bex_hthad_ttbarlight__151->GetZaxis()->SetLabelFont(43);
   c1lep6jin3bex_hthad_ttbarlight__151->GetZaxis()->SetLabelSize(21);
   c1lep6jin3bex_hthad_ttbarlight__151->GetZaxis()->SetTitleSize(21);
   c1lep6jin3bex_hthad_ttbarlight__151->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep6jin3bex_hthad_ttbarlight,"");
   Double_t xAxis169[8] = {100, 200, 300, 400, 500, 600, 700, 800}; 
   
   TH1D *c1lep6jin3bex_hthad_uHcW__152 = new TH1D("c1lep6jin3bex_hthad_uHcW__152","",7, xAxis169);
   c1lep6jin3bex_hthad_uHcW__152->SetBinContent(1,2e-05);
   c1lep6jin3bex_hthad_uHcW__152->SetBinContent(2,84.39379);
   c1lep6jin3bex_hthad_uHcW__152->SetBinContent(3,162.6327);
   c1lep6jin3bex_hthad_uHcW__152->SetBinContent(4,187.1647);
   c1lep6jin3bex_hthad_uHcW__152->SetBinContent(5,102.0848);
   c1lep6jin3bex_hthad_uHcW__152->SetBinContent(6,76.9017);
   c1lep6jin3bex_hthad_uHcW__152->SetBinContent(7,36.21349);
   c1lep6jin3bex_hthad_uHcW__152->SetBinContent(8,39.66133);
   c1lep6jin3bex_hthad_uHcW__152->SetBinError(1,2e-06);
   c1lep6jin3bex_hthad_uHcW__152->SetBinError(2,8.636767);
   c1lep6jin3bex_hthad_uHcW__152->SetBinError(3,14.96942);
   c1lep6jin3bex_hthad_uHcW__152->SetBinError(4,16.90494);
   c1lep6jin3bex_hthad_uHcW__152->SetBinError(5,11.93067);
   c1lep6jin3bex_hthad_uHcW__152->SetBinError(6,10.42208);
   c1lep6jin3bex_hthad_uHcW__152->SetBinError(7,7.7975);
   c1lep6jin3bex_hthad_uHcW__152->SetBinError(8,9.870296);
   c1lep6jin3bex_hthad_uHcW__152->SetEntries(5541);
   c1lep6jin3bex_hthad_uHcW__152->SetDirectory(0);
   c1lep6jin3bex_hthad_uHcW__152->SetStats(0);
   c1lep6jin3bex_hthad_uHcW__152->SetFillColor(2);
   c1lep6jin3bex_hthad_uHcW__152->SetLineColor(2);
   c1lep6jin3bex_hthad_uHcW__152->SetMarkerStyle(20);
   c1lep6jin3bex_hthad_uHcW__152->SetMarkerSize(1.2);
   c1lep6jin3bex_hthad_uHcW__152->GetXaxis()->SetTitle("H_{T}^{had} [GeV]");
   c1lep6jin3bex_hthad_uHcW__152->GetXaxis()->SetRange(1,100);
   c1lep6jin3bex_hthad_uHcW__152->GetXaxis()->SetLabelFont(43);
   c1lep6jin3bex_hthad_uHcW__152->GetXaxis()->SetLabelSize(21);
   c1lep6jin3bex_hthad_uHcW__152->GetXaxis()->SetTitleSize(21);
   c1lep6jin3bex_hthad_uHcW__152->GetXaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_hthad_uHcW__152->GetXaxis()->SetTitleFont(43);
   c1lep6jin3bex_hthad_uHcW__152->GetYaxis()->SetLabelFont(43);
   c1lep6jin3bex_hthad_uHcW__152->GetYaxis()->SetLabelSize(21);
   c1lep6jin3bex_hthad_uHcW__152->GetYaxis()->SetTitleSize(21);
   c1lep6jin3bex_hthad_uHcW__152->GetYaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_hthad_uHcW__152->GetYaxis()->SetTitleFont(43);
   c1lep6jin3bex_hthad_uHcW__152->GetZaxis()->SetLabelFont(43);
   c1lep6jin3bex_hthad_uHcW__152->GetZaxis()->SetLabelSize(21);
   c1lep6jin3bex_hthad_uHcW__152->GetZaxis()->SetTitleSize(21);
   c1lep6jin3bex_hthad_uHcW__152->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep6jin3bex_hthad_uHcW,"");
   h_stack->Draw("hist same");
   
   Double_t g_totErr_fx3067[7] = {
   150,
   250,
   350,
   450,
   550,
   650,
   750};
   Double_t g_totErr_fy3067[7] = {
   4.459272,
   962.8831,
   2971.422,
   3037.177,
   2232.659,
   1522.384,
   997.3357};
   Double_t g_totErr_felx3067[7] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t g_totErr_fely3067[7] = {
   8.983041,
   249.4774,
   648.1406,
   581.9097,
   421.2381,
   297.4205,
   199.8148};
   Double_t g_totErr_fehx3067[7] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t g_totErr_fehy3067[7] = {
   8.983041,
   249.4774,
   648.1406,
   581.9097,
   421.2381,
   297.4205,
   199.8148};
   grae = new TGraphAsymmErrors(7,g_totErr_fx3067,g_totErr_fy3067,g_totErr_felx3067,g_totErr_fehx3067,g_totErr_fely3067,g_totErr_fehy3067);
   grae->SetName("g_totErr");
   grae->SetTitle("");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(3354);
   grae->SetLineColor(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0);
   
   TH1F *Graph_g_totErr3067 = new TH1F("Graph_g_totErr3067","",100,30,870);
   Graph_g_totErr3067->SetMinimum(-366.9324);
   Graph_g_totErr3067->SetMaximum(3981.971);
   Graph_g_totErr3067->SetDirectory(0);
   Graph_g_totErr3067->SetStats(0);
   Graph_g_totErr3067->SetLineWidth(2);
   Graph_g_totErr3067->SetMarkerStyle(20);
   Graph_g_totErr3067->SetMarkerSize(1.2);
   Graph_g_totErr3067->GetXaxis()->SetLabelFont(43);
   Graph_g_totErr3067->GetXaxis()->SetLabelSize(21);
   Graph_g_totErr3067->GetXaxis()->SetTitleSize(21);
   Graph_g_totErr3067->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_totErr3067->GetXaxis()->SetTitleFont(43);
   Graph_g_totErr3067->GetYaxis()->SetLabelFont(43);
   Graph_g_totErr3067->GetYaxis()->SetLabelSize(21);
   Graph_g_totErr3067->GetYaxis()->SetTitleSize(21);
   Graph_g_totErr3067->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_totErr3067->GetYaxis()->SetTitleFont(43);
   Graph_g_totErr3067->GetZaxis()->SetLabelFont(43);
   Graph_g_totErr3067->GetZaxis()->SetLabelSize(21);
   Graph_g_totErr3067->GetZaxis()->SetTitleSize(21);
   Graph_g_totErr3067->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_totErr3067);
   
   grae->Draw("e2");
   
   Double_t Graph_from_c1lep6jin3bex_hthad_Data_fx3068[7] = {
   150,
   250,
   350,
   450,
   550,
   650,
   750};
   Double_t Graph_from_c1lep6jin3bex_hthad_Data_fy3068[7] = {
   14,
   1190,
   3513,
   3451,
   2456,
   1517,
   957};
   Double_t Graph_from_c1lep6jin3bex_hthad_Data_felx3068[7] = {
   49.9,
   49.9,
   49.9,
   49.9,
   49.9,
   49.9,
   49.9};
   Double_t Graph_from_c1lep6jin3bex_hthad_Data_fely3068[7] = {
   3.741657,
   34.49638,
   59.27057,
   58.74521,
   49.55805,
   38.94868,
   30.93542};
   Double_t Graph_from_c1lep6jin3bex_hthad_Data_fehx3068[7] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t Graph_from_c1lep6jin3bex_hthad_Data_fehy3068[7] = {
   3.741657,
   34.49638,
   59.27057,
   58.74521,
   49.55805,
   38.94868,
   30.93542};
   grae = new TGraphAsymmErrors(7,Graph_from_c1lep6jin3bex_hthad_Data_fx3068,Graph_from_c1lep6jin3bex_hthad_Data_fy3068,Graph_from_c1lep6jin3bex_hthad_Data_felx3068,Graph_from_c1lep6jin3bex_hthad_Data_fehx3068,Graph_from_c1lep6jin3bex_hthad_Data_fely3068,Graph_from_c1lep6jin3bex_hthad_Data_fehy3068);
   grae->SetName("Graph_from_c1lep6jin3bex_hthad_Data");
   grae->SetTitle("");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_c1lep6jin3bex_hthad_Data3068 = new TH1F("Graph_Graph_from_c1lep6jin3bex_hthad_Data3068","",100,30.11,869.99);
   Graph_Graph_from_c1lep6jin3bex_hthad_Data3068->SetMinimum(0);
   Graph_Graph_from_c1lep6jin3bex_hthad_Data3068->SetMaximum(3928.472);
   Graph_Graph_from_c1lep6jin3bex_hthad_Data3068->SetDirectory(0);
   Graph_Graph_from_c1lep6jin3bex_hthad_Data3068->SetStats(0);
   Graph_Graph_from_c1lep6jin3bex_hthad_Data3068->SetLineWidth(2);
   Graph_Graph_from_c1lep6jin3bex_hthad_Data3068->SetMarkerStyle(20);
   Graph_Graph_from_c1lep6jin3bex_hthad_Data3068->SetMarkerSize(1.2);
   Graph_Graph_from_c1lep6jin3bex_hthad_Data3068->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep6jin3bex_hthad_Data3068->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep6jin3bex_hthad_Data3068->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep6jin3bex_hthad_Data3068->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep6jin3bex_hthad_Data3068->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep6jin3bex_hthad_Data3068->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep6jin3bex_hthad_Data3068->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep6jin3bex_hthad_Data3068->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep6jin3bex_hthad_Data3068->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep6jin3bex_hthad_Data3068->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep6jin3bex_hthad_Data3068->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep6jin3bex_hthad_Data3068->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep6jin3bex_hthad_Data3068->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep6jin3bex_hthad_Data3068->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_c1lep6jin3bex_hthad_Data3068);
   
   grae->Draw("ep1 ");
   Double_t xAxis170[8] = {100, 200, 300, 400, 500, 600, 700, 800}; 
   
   TH1D *h_dummy_copy__153 = new TH1D("h_dummy_copy__153","",7, xAxis170);
   h_dummy_copy__153->SetEntries(1164496);
   h_dummy_copy__153->SetDirectory(0);
   h_dummy_copy__153->SetStats(0);
   h_dummy_copy__153->SetMarkerStyle(20);
   h_dummy_copy__153->SetMarkerSize(1.2);
   h_dummy_copy__153->GetXaxis()->SetTitle("H_{T}^{had.} [GeV]");
   h_dummy_copy__153->GetXaxis()->SetRange(1,100);
   h_dummy_copy__153->GetXaxis()->SetLabelFont(43);
   h_dummy_copy__153->GetXaxis()->SetLabelSize(21);
   h_dummy_copy__153->GetXaxis()->SetTitleSize(21);
   h_dummy_copy__153->GetXaxis()->SetTitleOffset(1.4);
   h_dummy_copy__153->GetXaxis()->SetTitleFont(43);
   h_dummy_copy__153->GetYaxis()->SetTitle("Events / 100 GeV");
   h_dummy_copy__153->GetYaxis()->SetLabelFont(43);
   h_dummy_copy__153->GetYaxis()->SetLabelSize(16.8);
   h_dummy_copy__153->GetYaxis()->SetTitleSize(21);
   h_dummy_copy__153->GetYaxis()->SetTitleOffset(2.4);
   h_dummy_copy__153->GetYaxis()->SetTitleFont(43);
   h_dummy_copy__153->GetZaxis()->SetLabelFont(43);
   h_dummy_copy__153->GetZaxis()->SetLabelSize(21);
   h_dummy_copy__153->GetZaxis()->SetTitleSize(21);
   h_dummy_copy__153->GetZaxis()->SetTitleFont(43);
   h_dummy_copy__153->Draw("sameaxis");
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
      tex = new TLatex(0.18,0.73,"#geq6j, 3b");
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
   TLegendEntry *entry=leg->AddEntry("c1lep6jin3bex_hthad_Data","Data","lep");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep6jin3bex_hthad_uHcW","t#bar{t}#rightarrowWbHc (BR=1%)","f");
   entry->SetFillColor(2);
   entry->SetFillStyle(1001);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep6jin3bex_hthad_ttbarlight","t#bar{t}+light","f");
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep6jin3bex_hthad_ttbarcc","t#bar{t}+cc","f");

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
   entry=leg->AddEntry("c1lep6jin3bex_hthad_ttbarbb","t#bar{t}+bb","f");

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
   entry=leg->AddEntry("c1lep6jin3bex_hthad_topEW","Non-t#bar{t}","f");

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
   c_c1lep6jin3bex_hthad->cd();
   c_c1lep6jin3bex_hthad->Modified();
   c_c1lep6jin3bex_hthad->cd();
   c_c1lep6jin3bex_hthad->SetSelected(c_c1lep6jin3bex_hthad);
}
