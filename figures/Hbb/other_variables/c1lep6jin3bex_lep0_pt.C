void c1lep6jin3bex_lep0_pt()
{
//=========Macro generated from canvas: c_c1lep6jin3bex_lep0_pt/c_c1lep6jin3bex_lep0_pt
//=========  (Thu Jul 19 17:38:07 2018) by ROOT version6.04/14
   TCanvas *c_c1lep6jin3bex_lep0_pt = new TCanvas("c_c1lep6jin3bex_lep0_pt", "c_c1lep6jin3bex_lep0_pt",0,0,600,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c_c1lep6jin3bex_lep0_pt->SetHighLightColor(2);
   c_c1lep6jin3bex_lep0_pt->Range(0,0,1,1);
   c_c1lep6jin3bex_lep0_pt->SetFillColor(0);
   c_c1lep6jin3bex_lep0_pt->SetBorderMode(0);
   c_c1lep6jin3bex_lep0_pt->SetBorderSize(2);
   c_c1lep6jin3bex_lep0_pt->SetTickx(1);
   c_c1lep6jin3bex_lep0_pt->SetTicky(1);
   c_c1lep6jin3bex_lep0_pt->SetLeftMargin(0.16);
   c_c1lep6jin3bex_lep0_pt->SetRightMargin(0.05);
   c_c1lep6jin3bex_lep0_pt->SetTopMargin(0.05);
   c_c1lep6jin3bex_lep0_pt->SetBottomMargin(0.16);
   c_c1lep6jin3bex_lep0_pt->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0,1,0.28);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-9.567901,-0.0873016,237.3457,1.5);
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
   Double_t xAxis361[5] = {25, 75, 125, 175, 225}; 
   
   TH1D *h_dummy2__325 = new TH1D("h_dummy2__325","Data/MC",4, xAxis361);
   h_dummy2__325->SetMinimum(0.5);
   h_dummy2__325->SetMaximum(1.5);
   h_dummy2__325->SetEntries(1164512);
   h_dummy2__325->SetDirectory(0);
   h_dummy2__325->SetStats(0);
   h_dummy2__325->SetMarkerStyle(20);
   h_dummy2__325->SetMarkerSize(1.2);
   h_dummy2__325->GetXaxis()->SetTitle("lepton p_{T} [Gev]");
   h_dummy2__325->GetXaxis()->SetRange(1,16);
   h_dummy2__325->GetXaxis()->SetLabelFont(43);
   h_dummy2__325->GetXaxis()->SetLabelOffset(0.025);
   h_dummy2__325->GetXaxis()->SetLabelSize(16.8);
   h_dummy2__325->GetXaxis()->SetTitleSize(21);
   h_dummy2__325->GetXaxis()->SetTitleOffset(5.05);
   h_dummy2__325->GetXaxis()->SetTitleFont(43);
   h_dummy2__325->GetYaxis()->SetTitle("Data / Bkg");
   h_dummy2__325->GetYaxis()->SetNdivisions(-504);
   h_dummy2__325->GetYaxis()->SetLabelFont(43);
   h_dummy2__325->GetYaxis()->SetLabelOffset(0.02);
   h_dummy2__325->GetYaxis()->SetLabelSize(16.8);
   h_dummy2__325->GetYaxis()->SetTitleSize(21);
   h_dummy2__325->GetYaxis()->SetTitleOffset(2.4);
   h_dummy2__325->GetYaxis()->SetTitleFont(43);
   h_dummy2__325->GetZaxis()->SetLabelFont(43);
   h_dummy2__325->GetZaxis()->SetLabelSize(21);
   h_dummy2__325->GetZaxis()->SetTitleSize(21);
   h_dummy2__325->GetZaxis()->SetTitleFont(43);
   h_dummy2__325->Draw("HIST");
   
   Double_t Graph_from_h_ratio_fx3145[4] = {
   50,
   100,
   150,
   200};
   Double_t Graph_from_h_ratio_fy3145[4] = {
   1.115953,
   1.094336,
   1.076149,
   1.19433};
   Double_t Graph_from_h_ratio_felx3145[4] = {
   24.95,
   24.95,
   24.95,
   24.95};
   Double_t Graph_from_h_ratio_fely3145[4] = {
   0.01026058,
   0.02427665,
   0.04294303,
   0.07892354};
   Double_t Graph_from_h_ratio_fehx3145[4] = {
   25,
   25,
   25,
   25};
   Double_t Graph_from_h_ratio_fehy3145[4] = {
   0.01026058,
   0.02427665,
   0.04294303,
   0.07892354};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(4,Graph_from_h_ratio_fx3145,Graph_from_h_ratio_fy3145,Graph_from_h_ratio_felx3145,Graph_from_h_ratio_fehx3145,Graph_from_h_ratio_fely3145,Graph_from_h_ratio_fehy3145);
   grae->SetName("Graph_from_h_ratio");
   grae->SetTitle("");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(24);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_h_ratio3145 = new TH1F("Graph_Graph_from_h_ratio3145","",100,5.055,244.995);
   Graph_Graph_from_h_ratio3145->SetMinimum(1.009202);
   Graph_Graph_from_h_ratio3145->SetMaximum(1.297258);
   Graph_Graph_from_h_ratio3145->SetDirectory(0);
   Graph_Graph_from_h_ratio3145->SetStats(0);
   Graph_Graph_from_h_ratio3145->SetLineWidth(2);
   Graph_Graph_from_h_ratio3145->SetMarkerStyle(20);
   Graph_Graph_from_h_ratio3145->SetMarkerSize(1.2);
   Graph_Graph_from_h_ratio3145->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3145->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3145->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3145->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3145->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3145->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3145->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3145->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3145->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3145->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3145->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3145->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3145->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3145->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_h_ratio3145);
   
   grae->Draw("pe0");
   TLine *line = new TLine(25,1,225,1);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t g_ratio2_fx3146[4] = {
   50,
   100,
   150,
   200};
   Double_t g_ratio2_fy3146[4] = {
   1,
   1,
   1,
   1};
   Double_t g_ratio2_felx3146[4] = {
   25,
   25,
   25,
   25};
   Double_t g_ratio2_fely3146[4] = {
   0.19382,
   0.1914201,
   0.188832,
   0.1942003};
   Double_t g_ratio2_fehx3146[4] = {
   25,
   25,
   25,
   25};
   Double_t g_ratio2_fehy3146[4] = {
   0.19382,
   0.1914201,
   0.188832,
   0.1942003};
   grae = new TGraphAsymmErrors(4,g_ratio2_fx3146,g_ratio2_fy3146,g_ratio2_felx3146,g_ratio2_fehx3146,g_ratio2_fely3146,g_ratio2_fehy3146);
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
   
   TH1F *Graph_g_ratio23146 = new TH1F("Graph_g_ratio23146","",100,5,245);
   Graph_g_ratio23146->SetMinimum(0.7669597);
   Graph_g_ratio23146->SetMaximum(1.23304);
   Graph_g_ratio23146->SetDirectory(0);
   Graph_g_ratio23146->SetStats(0);
   Graph_g_ratio23146->SetLineWidth(2);
   Graph_g_ratio23146->SetMarkerStyle(20);
   Graph_g_ratio23146->SetMarkerSize(1.2);
   Graph_g_ratio23146->GetXaxis()->SetLabelFont(43);
   Graph_g_ratio23146->GetXaxis()->SetLabelSize(21);
   Graph_g_ratio23146->GetXaxis()->SetTitleSize(21);
   Graph_g_ratio23146->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23146->GetXaxis()->SetTitleFont(43);
   Graph_g_ratio23146->GetYaxis()->SetLabelFont(43);
   Graph_g_ratio23146->GetYaxis()->SetLabelSize(21);
   Graph_g_ratio23146->GetYaxis()->SetTitleSize(21);
   Graph_g_ratio23146->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23146->GetYaxis()->SetTitleFont(43);
   Graph_g_ratio23146->GetZaxis()->SetLabelFont(43);
   Graph_g_ratio23146->GetZaxis()->SetLabelSize(21);
   Graph_g_ratio23146->GetZaxis()->SetTitleSize(21);
   Graph_g_ratio23146->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_ratio23146);
   
   grae->Draw("e2");
   Double_t xAxis362[5] = {25, 75, 125, 175, 225}; 
   
   TH1D *h_dummy2_copy__326 = new TH1D("h_dummy2_copy__326","Data/MC",4, xAxis362);
   h_dummy2_copy__326->SetMinimum(0.5);
   h_dummy2_copy__326->SetMaximum(1.5);
   h_dummy2_copy__326->SetEntries(1164512);
   h_dummy2_copy__326->SetDirectory(0);
   h_dummy2_copy__326->SetStats(0);
   h_dummy2_copy__326->SetMarkerStyle(20);
   h_dummy2_copy__326->SetMarkerSize(1.2);
   h_dummy2_copy__326->GetXaxis()->SetTitle("lepton p_{T} [Gev]");
   h_dummy2_copy__326->GetXaxis()->SetRange(1,16);
   h_dummy2_copy__326->GetXaxis()->SetLabelFont(43);
   h_dummy2_copy__326->GetXaxis()->SetLabelOffset(0.025);
   h_dummy2_copy__326->GetXaxis()->SetLabelSize(16.8);
   h_dummy2_copy__326->GetXaxis()->SetTitleSize(21);
   h_dummy2_copy__326->GetXaxis()->SetTitleOffset(5.05);
   h_dummy2_copy__326->GetXaxis()->SetTitleFont(43);
   h_dummy2_copy__326->GetYaxis()->SetTitle("Data / Bkg");
   h_dummy2_copy__326->GetYaxis()->SetNdivisions(-504);
   h_dummy2_copy__326->GetYaxis()->SetLabelFont(43);
   h_dummy2_copy__326->GetYaxis()->SetLabelOffset(0.02);
   h_dummy2_copy__326->GetYaxis()->SetLabelSize(16.8);
   h_dummy2_copy__326->GetYaxis()->SetTitleSize(21);
   h_dummy2_copy__326->GetYaxis()->SetTitleOffset(2.4);
   h_dummy2_copy__326->GetYaxis()->SetTitleFont(43);
   h_dummy2_copy__326->GetZaxis()->SetLabelFont(43);
   h_dummy2_copy__326->GetZaxis()->SetLabelSize(21);
   h_dummy2_copy__326->GetZaxis()->SetTitleSize(21);
   h_dummy2_copy__326->GetZaxis()->SetTitleFont(43);
   h_dummy2_copy__326->Draw("sameaxis");
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
   c_c1lep6jin3bex_lep0_pt->cd();
  
// ------------>Primitives in pad: pad0
   TPad *pad0 = new TPad("pad0", "pad0",0,0.2,1,1);
   pad0->Draw();
   pad0->cd();
   pad0->Range(-9.567901,-2527.996,237.3457,22751.97);
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
   Double_t xAxis363[5] = {25, 75, 125, 175, 225}; 
   
   TH1D *h_dummy__327 = new TH1D("h_dummy__327","",4, xAxis363);
   h_dummy__327->SetMinimum(0);
   h_dummy__327->SetMaximum(21487.97);
   h_dummy__327->SetEntries(1164512);
   h_dummy__327->SetDirectory(0);
   h_dummy__327->SetStats(0);
   h_dummy__327->SetMarkerStyle(20);
   h_dummy__327->SetMarkerSize(1.2);
   h_dummy__327->GetXaxis()->SetRange(1,16);
   h_dummy__327->GetXaxis()->SetLabelFont(43);
   h_dummy__327->GetXaxis()->SetLabelSize(0);
   h_dummy__327->GetXaxis()->SetTitleSize(21);
   h_dummy__327->GetXaxis()->SetTitleOffset(1.4);
   h_dummy__327->GetXaxis()->SetTitleFont(43);
   h_dummy__327->GetYaxis()->SetTitle("Events / 50 GeV");
   h_dummy__327->GetYaxis()->SetLabelFont(43);
   h_dummy__327->GetYaxis()->SetLabelSize(16.8);
   h_dummy__327->GetYaxis()->SetTitleSize(21);
   h_dummy__327->GetYaxis()->SetTitleOffset(2.4);
   h_dummy__327->GetYaxis()->SetTitleFont(43);
   h_dummy__327->GetZaxis()->SetLabelFont(43);
   h_dummy__327->GetZaxis()->SetLabelSize(21);
   h_dummy__327->GetZaxis()->SetTitleSize(21);
   h_dummy__327->GetZaxis()->SetTitleFont(43);
   h_dummy__327->Draw("HIST");
   
   THStack *h_stack = new THStack();
   h_stack->SetName("h_stack");
   h_stack->SetTitle("h_stack");
   Double_t xAxis364[5] = {25, 75, 125, 175, 225}; 
   
   TH1F *h_stack_stack_37 = new TH1F("h_stack_stack_37","h_stack",4, xAxis364);
   h_stack_stack_37->SetMinimum(0);
   h_stack_stack_37->SetMaximum(11713.51);
   h_stack_stack_37->SetDirectory(0);
   h_stack_stack_37->SetStats(0);
   h_stack_stack_37->SetLineWidth(2);
   h_stack_stack_37->SetMarkerStyle(20);
   h_stack_stack_37->SetMarkerSize(1.2);
   h_stack_stack_37->GetXaxis()->SetLabelFont(43);
   h_stack_stack_37->GetXaxis()->SetLabelSize(21);
   h_stack_stack_37->GetXaxis()->SetTitleSize(21);
   h_stack_stack_37->GetXaxis()->SetTitleOffset(1.4);
   h_stack_stack_37->GetXaxis()->SetTitleFont(43);
   h_stack_stack_37->GetYaxis()->SetLabelFont(43);
   h_stack_stack_37->GetYaxis()->SetLabelSize(21);
   h_stack_stack_37->GetYaxis()->SetTitleSize(21);
   h_stack_stack_37->GetYaxis()->SetTitleOffset(1.4);
   h_stack_stack_37->GetYaxis()->SetTitleFont(43);
   h_stack_stack_37->GetZaxis()->SetLabelFont(43);
   h_stack_stack_37->GetZaxis()->SetLabelSize(21);
   h_stack_stack_37->GetZaxis()->SetTitleSize(21);
   h_stack_stack_37->GetZaxis()->SetTitleFont(43);
   h_stack->SetHistogram(h_stack_stack_37);
   
   Double_t xAxis365[5] = {25, 75, 125, 175, 225}; 
   
   TH1D *c1lep6jin3bex_lep0_pt_topEW__328 = new TH1D("c1lep6jin3bex_lep0_pt_topEW__328","",4, xAxis365);
   c1lep6jin3bex_lep0_pt_topEW__328->SetBinContent(1,1384.591);
   c1lep6jin3bex_lep0_pt_topEW__328->SetBinContent(2,280.1292);
   c1lep6jin3bex_lep0_pt_topEW__328->SetBinContent(3,101.6298);
   c1lep6jin3bex_lep0_pt_topEW__328->SetBinContent(4,27.16114);
   c1lep6jin3bex_lep0_pt_topEW__328->SetBinContent(5,77.4014);
   c1lep6jin3bex_lep0_pt_topEW__328->SetBinError(1,82.05763);
   c1lep6jin3bex_lep0_pt_topEW__328->SetBinError(2,34.85128);
   c1lep6jin3bex_lep0_pt_topEW__328->SetBinError(3,19.00953);
   c1lep6jin3bex_lep0_pt_topEW__328->SetBinError(4,1.785891);
   c1lep6jin3bex_lep0_pt_topEW__328->SetBinError(5,20.72325);
   c1lep6jin3bex_lep0_pt_topEW__328->SetEntries(1125882);
   c1lep6jin3bex_lep0_pt_topEW__328->SetDirectory(0);
   c1lep6jin3bex_lep0_pt_topEW__328->SetStats(0);

   ci = TColor::GetColor("#66cc66");
   c1lep6jin3bex_lep0_pt_topEW__328->SetFillColor(ci);
   c1lep6jin3bex_lep0_pt_topEW__328->SetMarkerStyle(20);
   c1lep6jin3bex_lep0_pt_topEW__328->SetMarkerSize(1.2);
   c1lep6jin3bex_lep0_pt_topEW__328->GetXaxis()->SetTitle("Lepton p_{T} [GeV]");
   c1lep6jin3bex_lep0_pt_topEW__328->GetXaxis()->SetRange(1,16);
   c1lep6jin3bex_lep0_pt_topEW__328->GetXaxis()->SetLabelFont(43);
   c1lep6jin3bex_lep0_pt_topEW__328->GetXaxis()->SetLabelSize(21);
   c1lep6jin3bex_lep0_pt_topEW__328->GetXaxis()->SetTitleSize(21);
   c1lep6jin3bex_lep0_pt_topEW__328->GetXaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_lep0_pt_topEW__328->GetXaxis()->SetTitleFont(43);
   c1lep6jin3bex_lep0_pt_topEW__328->GetYaxis()->SetLabelFont(43);
   c1lep6jin3bex_lep0_pt_topEW__328->GetYaxis()->SetLabelSize(21);
   c1lep6jin3bex_lep0_pt_topEW__328->GetYaxis()->SetTitleSize(21);
   c1lep6jin3bex_lep0_pt_topEW__328->GetYaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_lep0_pt_topEW__328->GetYaxis()->SetTitleFont(43);
   c1lep6jin3bex_lep0_pt_topEW__328->GetZaxis()->SetLabelFont(43);
   c1lep6jin3bex_lep0_pt_topEW__328->GetZaxis()->SetLabelSize(21);
   c1lep6jin3bex_lep0_pt_topEW__328->GetZaxis()->SetTitleSize(21);
   c1lep6jin3bex_lep0_pt_topEW__328->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep6jin3bex_lep0_pt_topEW,"");
   Double_t xAxis366[5] = {25, 75, 125, 175, 225}; 
   
   TH1D *c1lep6jin3bex_lep0_pt_ttbarbb__329 = new TH1D("c1lep6jin3bex_lep0_pt_ttbarbb__329","",4, xAxis366);
   c1lep6jin3bex_lep0_pt_ttbarbb__329->SetBinContent(1,5786.276);
   c1lep6jin3bex_lep0_pt_ttbarbb__329->SetBinContent(2,1000.093);
   c1lep6jin3bex_lep0_pt_ttbarbb__329->SetBinContent(3,310.4431);
   c1lep6jin3bex_lep0_pt_ttbarbb__329->SetBinContent(4,113.2522);
   c1lep6jin3bex_lep0_pt_ttbarbb__329->SetBinContent(5,72.42868);
   c1lep6jin3bex_lep0_pt_ttbarbb__329->SetBinError(1,48.69439);
   c1lep6jin3bex_lep0_pt_ttbarbb__329->SetBinError(2,21.37415);
   c1lep6jin3bex_lep0_pt_ttbarbb__329->SetBinError(3,12.33337);
   c1lep6jin3bex_lep0_pt_ttbarbb__329->SetBinError(4,7.516517);
   c1lep6jin3bex_lep0_pt_ttbarbb__329->SetBinError(5,5.275891);
   c1lep6jin3bex_lep0_pt_ttbarbb__329->SetEntries(26042);
   c1lep6jin3bex_lep0_pt_ttbarbb__329->SetDirectory(0);
   c1lep6jin3bex_lep0_pt_ttbarbb__329->SetStats(0);

   ci = TColor::GetColor("#6666cc");
   c1lep6jin3bex_lep0_pt_ttbarbb__329->SetFillColor(ci);
   c1lep6jin3bex_lep0_pt_ttbarbb__329->SetMarkerStyle(20);
   c1lep6jin3bex_lep0_pt_ttbarbb__329->SetMarkerSize(1.2);
   c1lep6jin3bex_lep0_pt_ttbarbb__329->GetXaxis()->SetTitle("Lepton p_{T} [GeV]");
   c1lep6jin3bex_lep0_pt_ttbarbb__329->GetXaxis()->SetRange(1,16);
   c1lep6jin3bex_lep0_pt_ttbarbb__329->GetXaxis()->SetLabelFont(43);
   c1lep6jin3bex_lep0_pt_ttbarbb__329->GetXaxis()->SetLabelSize(21);
   c1lep6jin3bex_lep0_pt_ttbarbb__329->GetXaxis()->SetTitleSize(21);
   c1lep6jin3bex_lep0_pt_ttbarbb__329->GetXaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_lep0_pt_ttbarbb__329->GetXaxis()->SetTitleFont(43);
   c1lep6jin3bex_lep0_pt_ttbarbb__329->GetYaxis()->SetLabelFont(43);
   c1lep6jin3bex_lep0_pt_ttbarbb__329->GetYaxis()->SetLabelSize(21);
   c1lep6jin3bex_lep0_pt_ttbarbb__329->GetYaxis()->SetTitleSize(21);
   c1lep6jin3bex_lep0_pt_ttbarbb__329->GetYaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_lep0_pt_ttbarbb__329->GetYaxis()->SetTitleFont(43);
   c1lep6jin3bex_lep0_pt_ttbarbb__329->GetZaxis()->SetLabelFont(43);
   c1lep6jin3bex_lep0_pt_ttbarbb__329->GetZaxis()->SetLabelSize(21);
   c1lep6jin3bex_lep0_pt_ttbarbb__329->GetZaxis()->SetTitleSize(21);
   c1lep6jin3bex_lep0_pt_ttbarbb__329->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep6jin3bex_lep0_pt_ttbarbb,"");
   Double_t xAxis367[5] = {25, 75, 125, 175, 225}; 
   
   TH1D *c1lep6jin3bex_lep0_pt_ttbarcc__330 = new TH1D("c1lep6jin3bex_lep0_pt_ttbarcc__330","",4, xAxis367);
   c1lep6jin3bex_lep0_pt_ttbarcc__330->SetBinContent(1,1440.898);
   c1lep6jin3bex_lep0_pt_ttbarcc__330->SetBinContent(2,259.8317);
   c1lep6jin3bex_lep0_pt_ttbarcc__330->SetBinContent(3,72.54242);
   c1lep6jin3bex_lep0_pt_ttbarcc__330->SetBinContent(4,20.95622);
   c1lep6jin3bex_lep0_pt_ttbarcc__330->SetBinContent(5,20.02669);
   c1lep6jin3bex_lep0_pt_ttbarcc__330->SetBinError(1,26.86917);
   c1lep6jin3bex_lep0_pt_ttbarcc__330->SetBinError(2,10.69112);
   c1lep6jin3bex_lep0_pt_ttbarcc__330->SetBinError(3,5.910308);
   c1lep6jin3bex_lep0_pt_ttbarcc__330->SetBinError(4,3.006388);
   c1lep6jin3bex_lep0_pt_ttbarcc__330->SetBinError(5,3.386519);
   c1lep6jin3bex_lep0_pt_ttbarcc__330->SetEntries(5630);
   c1lep6jin3bex_lep0_pt_ttbarcc__330->SetDirectory(0);
   c1lep6jin3bex_lep0_pt_ttbarcc__330->SetStats(0);

   ci = TColor::GetColor("#ccccff");
   c1lep6jin3bex_lep0_pt_ttbarcc__330->SetFillColor(ci);
   c1lep6jin3bex_lep0_pt_ttbarcc__330->SetMarkerStyle(20);
   c1lep6jin3bex_lep0_pt_ttbarcc__330->SetMarkerSize(1.2);
   c1lep6jin3bex_lep0_pt_ttbarcc__330->GetXaxis()->SetTitle("Lepton p_{T} [GeV]");
   c1lep6jin3bex_lep0_pt_ttbarcc__330->GetXaxis()->SetRange(1,16);
   c1lep6jin3bex_lep0_pt_ttbarcc__330->GetXaxis()->SetLabelFont(43);
   c1lep6jin3bex_lep0_pt_ttbarcc__330->GetXaxis()->SetLabelSize(21);
   c1lep6jin3bex_lep0_pt_ttbarcc__330->GetXaxis()->SetTitleSize(21);
   c1lep6jin3bex_lep0_pt_ttbarcc__330->GetXaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_lep0_pt_ttbarcc__330->GetXaxis()->SetTitleFont(43);
   c1lep6jin3bex_lep0_pt_ttbarcc__330->GetYaxis()->SetLabelFont(43);
   c1lep6jin3bex_lep0_pt_ttbarcc__330->GetYaxis()->SetLabelSize(21);
   c1lep6jin3bex_lep0_pt_ttbarcc__330->GetYaxis()->SetTitleSize(21);
   c1lep6jin3bex_lep0_pt_ttbarcc__330->GetYaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_lep0_pt_ttbarcc__330->GetYaxis()->SetTitleFont(43);
   c1lep6jin3bex_lep0_pt_ttbarcc__330->GetZaxis()->SetLabelFont(43);
   c1lep6jin3bex_lep0_pt_ttbarcc__330->GetZaxis()->SetLabelSize(21);
   c1lep6jin3bex_lep0_pt_ttbarcc__330->GetZaxis()->SetTitleSize(21);
   c1lep6jin3bex_lep0_pt_ttbarcc__330->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep6jin3bex_lep0_pt_ttbarcc,"");
   Double_t xAxis368[5] = {25, 75, 125, 175, 225}; 
   
   TH1D *c1lep6jin3bex_lep0_pt_ttbarlight__331 = new TH1D("c1lep6jin3bex_lep0_pt_ttbarlight__331","",4, xAxis368);
   c1lep6jin3bex_lep0_pt_ttbarlight__331->SetBinContent(1,1988.145);
   c1lep6jin3bex_lep0_pt_ttbarlight__331->SetBinContent(2,316.7799);
   c1lep6jin3bex_lep0_pt_ttbarlight__331->SetBinContent(3,98.94682);
   c1lep6jin3bex_lep0_pt_ttbarlight__331->SetBinContent(4,30.36977);
   c1lep6jin3bex_lep0_pt_ttbarlight__331->SetBinContent(5,15.38396);
   c1lep6jin3bex_lep0_pt_ttbarlight__331->SetBinError(1,33.82225);
   c1lep6jin3bex_lep0_pt_ttbarlight__331->SetBinError(2,12.8951);
   c1lep6jin3bex_lep0_pt_ttbarlight__331->SetBinError(3,8.286611);
   c1lep6jin3bex_lep0_pt_ttbarlight__331->SetBinError(4,3.615983);
   c1lep6jin3bex_lep0_pt_ttbarlight__331->SetBinError(5,2.476987);
   c1lep6jin3bex_lep0_pt_ttbarlight__331->SetEntries(6954);
   c1lep6jin3bex_lep0_pt_ttbarlight__331->SetDirectory(0);
   c1lep6jin3bex_lep0_pt_ttbarlight__331->SetStats(0);
   c1lep6jin3bex_lep0_pt_ttbarlight__331->SetMarkerStyle(20);
   c1lep6jin3bex_lep0_pt_ttbarlight__331->SetMarkerSize(1.2);
   c1lep6jin3bex_lep0_pt_ttbarlight__331->GetXaxis()->SetTitle("Lepton p_{T} [GeV]");
   c1lep6jin3bex_lep0_pt_ttbarlight__331->GetXaxis()->SetRange(1,16);
   c1lep6jin3bex_lep0_pt_ttbarlight__331->GetXaxis()->SetLabelFont(43);
   c1lep6jin3bex_lep0_pt_ttbarlight__331->GetXaxis()->SetLabelSize(21);
   c1lep6jin3bex_lep0_pt_ttbarlight__331->GetXaxis()->SetTitleSize(21);
   c1lep6jin3bex_lep0_pt_ttbarlight__331->GetXaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_lep0_pt_ttbarlight__331->GetXaxis()->SetTitleFont(43);
   c1lep6jin3bex_lep0_pt_ttbarlight__331->GetYaxis()->SetLabelFont(43);
   c1lep6jin3bex_lep0_pt_ttbarlight__331->GetYaxis()->SetLabelSize(21);
   c1lep6jin3bex_lep0_pt_ttbarlight__331->GetYaxis()->SetTitleSize(21);
   c1lep6jin3bex_lep0_pt_ttbarlight__331->GetYaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_lep0_pt_ttbarlight__331->GetYaxis()->SetTitleFont(43);
   c1lep6jin3bex_lep0_pt_ttbarlight__331->GetZaxis()->SetLabelFont(43);
   c1lep6jin3bex_lep0_pt_ttbarlight__331->GetZaxis()->SetLabelSize(21);
   c1lep6jin3bex_lep0_pt_ttbarlight__331->GetZaxis()->SetTitleSize(21);
   c1lep6jin3bex_lep0_pt_ttbarlight__331->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep6jin3bex_lep0_pt_ttbarlight,"");
   Double_t xAxis369[5] = {25, 75, 125, 175, 225}; 
   
   TH1D *c1lep6jin3bex_lep0_pt_uHcW__332 = new TH1D("c1lep6jin3bex_lep0_pt_uHcW__332","",4, xAxis369);
   c1lep6jin3bex_lep0_pt_uHcW__332->SetBinContent(1,555.8146);
   c1lep6jin3bex_lep0_pt_uHcW__332->SetBinContent(2,84.41798);
   c1lep6jin3bex_lep0_pt_uHcW__332->SetBinContent(3,27.51391);
   c1lep6jin3bex_lep0_pt_uHcW__332->SetBinContent(4,14.74342);
   c1lep6jin3bex_lep0_pt_uHcW__332->SetBinContent(5,6.542637);
   c1lep6jin3bex_lep0_pt_uHcW__332->SetBinError(1,28.10502);
   c1lep6jin3bex_lep0_pt_uHcW__332->SetBinError(2,12.01029);
   c1lep6jin3bex_lep0_pt_uHcW__332->SetBinError(3,6.161857);
   c1lep6jin3bex_lep0_pt_uHcW__332->SetBinError(4,4.038315);
   c1lep6jin3bex_lep0_pt_uHcW__332->SetBinError(5,2.330109);
   c1lep6jin3bex_lep0_pt_uHcW__332->SetEntries(5540);
   c1lep6jin3bex_lep0_pt_uHcW__332->SetDirectory(0);
   c1lep6jin3bex_lep0_pt_uHcW__332->SetStats(0);
   c1lep6jin3bex_lep0_pt_uHcW__332->SetFillColor(2);
   c1lep6jin3bex_lep0_pt_uHcW__332->SetLineColor(2);
   c1lep6jin3bex_lep0_pt_uHcW__332->SetMarkerStyle(20);
   c1lep6jin3bex_lep0_pt_uHcW__332->SetMarkerSize(1.2);
   c1lep6jin3bex_lep0_pt_uHcW__332->GetXaxis()->SetTitle("Lepton p_{T} [GeV]");
   c1lep6jin3bex_lep0_pt_uHcW__332->GetXaxis()->SetRange(1,16);
   c1lep6jin3bex_lep0_pt_uHcW__332->GetXaxis()->SetLabelFont(43);
   c1lep6jin3bex_lep0_pt_uHcW__332->GetXaxis()->SetLabelSize(21);
   c1lep6jin3bex_lep0_pt_uHcW__332->GetXaxis()->SetTitleSize(21);
   c1lep6jin3bex_lep0_pt_uHcW__332->GetXaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_lep0_pt_uHcW__332->GetXaxis()->SetTitleFont(43);
   c1lep6jin3bex_lep0_pt_uHcW__332->GetYaxis()->SetLabelFont(43);
   c1lep6jin3bex_lep0_pt_uHcW__332->GetYaxis()->SetLabelSize(21);
   c1lep6jin3bex_lep0_pt_uHcW__332->GetYaxis()->SetTitleSize(21);
   c1lep6jin3bex_lep0_pt_uHcW__332->GetYaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_lep0_pt_uHcW__332->GetYaxis()->SetTitleFont(43);
   c1lep6jin3bex_lep0_pt_uHcW__332->GetZaxis()->SetLabelFont(43);
   c1lep6jin3bex_lep0_pt_uHcW__332->GetZaxis()->SetLabelSize(21);
   c1lep6jin3bex_lep0_pt_uHcW__332->GetZaxis()->SetTitleSize(21);
   c1lep6jin3bex_lep0_pt_uHcW__332->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep6jin3bex_lep0_pt_uHcW,"");
   h_stack->Draw("hist same");
   
   Double_t g_totErr_fx3147[4] = {
   50,
   100,
   150,
   200};
   Double_t g_totErr_fy3147[4] = {
   10599.91,
   1856.834,
   583.5622,
   191.7393};
   Double_t g_totErr_felx3147[4] = {
   25,
   25,
   25,
   25};
   Double_t g_totErr_fely3147[4] = {
   2054.474,
   355.4354,
   110.1952,
   37.23583};
   Double_t g_totErr_fehx3147[4] = {
   25,
   25,
   25,
   25};
   Double_t g_totErr_fehy3147[4] = {
   2054.474,
   355.4354,
   110.1952,
   37.23583};
   grae = new TGraphAsymmErrors(4,g_totErr_fx3147,g_totErr_fy3147,g_totErr_felx3147,g_totErr_fehx3147,g_totErr_fely3147,g_totErr_fehy3147);
   grae->SetName("g_totErr");
   grae->SetTitle("");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(3354);
   grae->SetLineColor(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0);
   
   TH1F *Graph_g_totErr3147 = new TH1F("Graph_g_totErr3147","",100,5,245);
   Graph_g_totErr3147->SetMinimum(0);
   Graph_g_totErr3147->SetMaximum(13904.37);
   Graph_g_totErr3147->SetDirectory(0);
   Graph_g_totErr3147->SetStats(0);
   Graph_g_totErr3147->SetLineWidth(2);
   Graph_g_totErr3147->SetMarkerStyle(20);
   Graph_g_totErr3147->SetMarkerSize(1.2);
   Graph_g_totErr3147->GetXaxis()->SetLabelFont(43);
   Graph_g_totErr3147->GetXaxis()->SetLabelSize(21);
   Graph_g_totErr3147->GetXaxis()->SetTitleSize(21);
   Graph_g_totErr3147->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_totErr3147->GetXaxis()->SetTitleFont(43);
   Graph_g_totErr3147->GetYaxis()->SetLabelFont(43);
   Graph_g_totErr3147->GetYaxis()->SetLabelSize(21);
   Graph_g_totErr3147->GetYaxis()->SetTitleSize(21);
   Graph_g_totErr3147->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_totErr3147->GetYaxis()->SetTitleFont(43);
   Graph_g_totErr3147->GetZaxis()->SetLabelFont(43);
   Graph_g_totErr3147->GetZaxis()->SetLabelSize(21);
   Graph_g_totErr3147->GetZaxis()->SetTitleSize(21);
   Graph_g_totErr3147->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_totErr3147);
   
   grae->Draw("e2");
   
   Double_t Graph_from_c1lep6jin3bex_lep0_pt_Data_fx3148[4] = {
   50,
   100,
   150,
   200};
   Double_t Graph_from_c1lep6jin3bex_lep0_pt_Data_fy3148[4] = {
   11829,
   2032,
   628,
   229};
   Double_t Graph_from_c1lep6jin3bex_lep0_pt_Data_felx3148[4] = {
   24.95,
   24.95,
   24.95,
   24.95};
   Double_t Graph_from_c1lep6jin3bex_lep0_pt_Data_fely3148[4] = {
   108.7612,
   45.07771,
   25.05993,
   15.13275};
   Double_t Graph_from_c1lep6jin3bex_lep0_pt_Data_fehx3148[4] = {
   25,
   25,
   25,
   25};
   Double_t Graph_from_c1lep6jin3bex_lep0_pt_Data_fehy3148[4] = {
   108.7612,
   45.07771,
   25.05993,
   15.13275};
   grae = new TGraphAsymmErrors(4,Graph_from_c1lep6jin3bex_lep0_pt_Data_fx3148,Graph_from_c1lep6jin3bex_lep0_pt_Data_fy3148,Graph_from_c1lep6jin3bex_lep0_pt_Data_felx3148,Graph_from_c1lep6jin3bex_lep0_pt_Data_fehx3148,Graph_from_c1lep6jin3bex_lep0_pt_Data_fely3148,Graph_from_c1lep6jin3bex_lep0_pt_Data_fehy3148);
   grae->SetName("Graph_from_c1lep6jin3bex_lep0_pt_Data");
   grae->SetTitle("");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_c1lep6jin3bex_lep0_pt_Data3148 = new TH1F("Graph_Graph_from_c1lep6jin3bex_lep0_pt_Data3148","",100,5.055,244.995);
   Graph_Graph_from_c1lep6jin3bex_lep0_pt_Data3148->SetMinimum(0);
   Graph_Graph_from_c1lep6jin3bex_lep0_pt_Data3148->SetMaximum(13110.15);
   Graph_Graph_from_c1lep6jin3bex_lep0_pt_Data3148->SetDirectory(0);
   Graph_Graph_from_c1lep6jin3bex_lep0_pt_Data3148->SetStats(0);
   Graph_Graph_from_c1lep6jin3bex_lep0_pt_Data3148->SetLineWidth(2);
   Graph_Graph_from_c1lep6jin3bex_lep0_pt_Data3148->SetMarkerStyle(20);
   Graph_Graph_from_c1lep6jin3bex_lep0_pt_Data3148->SetMarkerSize(1.2);
   Graph_Graph_from_c1lep6jin3bex_lep0_pt_Data3148->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep6jin3bex_lep0_pt_Data3148->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep6jin3bex_lep0_pt_Data3148->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep6jin3bex_lep0_pt_Data3148->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep6jin3bex_lep0_pt_Data3148->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep6jin3bex_lep0_pt_Data3148->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep6jin3bex_lep0_pt_Data3148->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep6jin3bex_lep0_pt_Data3148->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep6jin3bex_lep0_pt_Data3148->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep6jin3bex_lep0_pt_Data3148->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep6jin3bex_lep0_pt_Data3148->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep6jin3bex_lep0_pt_Data3148->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep6jin3bex_lep0_pt_Data3148->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep6jin3bex_lep0_pt_Data3148->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_c1lep6jin3bex_lep0_pt_Data3148);
   
   grae->Draw("ep1 ");
   Double_t xAxis370[5] = {25, 75, 125, 175, 225}; 
   
   TH1D *h_dummy_copy__333 = new TH1D("h_dummy_copy__333","",4, xAxis370);
   h_dummy_copy__333->SetEntries(1164512);
   h_dummy_copy__333->SetDirectory(0);
   h_dummy_copy__333->SetStats(0);
   h_dummy_copy__333->SetMarkerStyle(20);
   h_dummy_copy__333->SetMarkerSize(1.2);
   h_dummy_copy__333->GetXaxis()->SetTitle("lepton p_{T} [Gev]");
   h_dummy_copy__333->GetXaxis()->SetRange(1,16);
   h_dummy_copy__333->GetXaxis()->SetLabelFont(43);
   h_dummy_copy__333->GetXaxis()->SetLabelSize(21);
   h_dummy_copy__333->GetXaxis()->SetTitleSize(21);
   h_dummy_copy__333->GetXaxis()->SetTitleOffset(1.4);
   h_dummy_copy__333->GetXaxis()->SetTitleFont(43);
   h_dummy_copy__333->GetYaxis()->SetTitle("Events / 50 GeV");
   h_dummy_copy__333->GetYaxis()->SetLabelFont(43);
   h_dummy_copy__333->GetYaxis()->SetLabelSize(16.8);
   h_dummy_copy__333->GetYaxis()->SetTitleSize(21);
   h_dummy_copy__333->GetYaxis()->SetTitleOffset(2.4);
   h_dummy_copy__333->GetYaxis()->SetTitleFont(43);
   h_dummy_copy__333->GetZaxis()->SetLabelFont(43);
   h_dummy_copy__333->GetZaxis()->SetLabelSize(21);
   h_dummy_copy__333->GetZaxis()->SetTitleSize(21);
   h_dummy_copy__333->GetZaxis()->SetTitleFont(43);
   h_dummy_copy__333->Draw("sameaxis");
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
   TLegendEntry *entry=leg->AddEntry("c1lep6jin3bex_lep0_pt_Data","Data","lep");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep6jin3bex_lep0_pt_uHcW","t#bar{t}#rightarrowWbHc (BR=1%)","f");
   entry->SetFillColor(2);
   entry->SetFillStyle(1001);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep6jin3bex_lep0_pt_ttbarlight","t#bar{t}+light","f");
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep6jin3bex_lep0_pt_ttbarcc","t#bar{t}+cc","f");

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
   entry=leg->AddEntry("c1lep6jin3bex_lep0_pt_ttbarbb","t#bar{t}+bb","f");

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
   entry=leg->AddEntry("c1lep6jin3bex_lep0_pt_topEW","Non-t#bar{t}","f");

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
   c_c1lep6jin3bex_lep0_pt->cd();
   c_c1lep6jin3bex_lep0_pt->Modified();
   c_c1lep6jin3bex_lep0_pt->cd();
   c_c1lep6jin3bex_lep0_pt->SetSelected(c_c1lep6jin3bex_lep0_pt);
}
