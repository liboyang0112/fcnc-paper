void c1lep6jin3bex_met()
{
//=========Macro generated from canvas: c_c1lep6jin3bex_met/c_c1lep6jin3bex_met
//=========  (Thu Jul 19 17:38:05 2018) by ROOT version6.04/14
   TCanvas *c_c1lep6jin3bex_met = new TCanvas("c_c1lep6jin3bex_met", "c_c1lep6jin3bex_met",0,0,600,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c_c1lep6jin3bex_met->SetHighLightColor(2);
   c_c1lep6jin3bex_met->Range(0,0,1,1);
   c_c1lep6jin3bex_met->SetFillColor(0);
   c_c1lep6jin3bex_met->SetBorderMode(0);
   c_c1lep6jin3bex_met->SetBorderSize(2);
   c_c1lep6jin3bex_met->SetTickx(1);
   c_c1lep6jin3bex_met->SetTicky(1);
   c_c1lep6jin3bex_met->SetLeftMargin(0.16);
   c_c1lep6jin3bex_met->SetRightMargin(0.05);
   c_c1lep6jin3bex_met->SetTopMargin(0.05);
   c_c1lep6jin3bex_met->SetBottomMargin(0.16);
   c_c1lep6jin3bex_met->SetFrameBorderMode(0);
  
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
   Double_t xAxis201[5] = {0, 50, 100, 150, 200}; 
   
   TH1D *h_dummy2__181 = new TH1D("h_dummy2__181","Data/MC",4, xAxis201);
   h_dummy2__181->SetMinimum(0.5);
   h_dummy2__181->SetMaximum(1.5);
   h_dummy2__181->SetEntries(1164493);
   h_dummy2__181->SetDirectory(0);
   h_dummy2__181->SetStats(0);
   h_dummy2__181->SetMarkerStyle(20);
   h_dummy2__181->SetMarkerSize(1.2);
   h_dummy2__181->GetXaxis()->SetTitle("E_{T}^{miss} [GeV]");
   h_dummy2__181->GetXaxis()->SetRange(1,25);
   h_dummy2__181->GetXaxis()->SetLabelFont(43);
   h_dummy2__181->GetXaxis()->SetLabelOffset(0.025);
   h_dummy2__181->GetXaxis()->SetLabelSize(16.8);
   h_dummy2__181->GetXaxis()->SetTitleSize(21);
   h_dummy2__181->GetXaxis()->SetTitleOffset(5.05);
   h_dummy2__181->GetXaxis()->SetTitleFont(43);
   h_dummy2__181->GetYaxis()->SetTitle("Data / Bkg");
   h_dummy2__181->GetYaxis()->SetNdivisions(-504);
   h_dummy2__181->GetYaxis()->SetLabelFont(43);
   h_dummy2__181->GetYaxis()->SetLabelOffset(0.02);
   h_dummy2__181->GetYaxis()->SetLabelSize(16.8);
   h_dummy2__181->GetYaxis()->SetTitleSize(21);
   h_dummy2__181->GetYaxis()->SetTitleOffset(2.4);
   h_dummy2__181->GetYaxis()->SetTitleFont(43);
   h_dummy2__181->GetZaxis()->SetLabelFont(43);
   h_dummy2__181->GetZaxis()->SetLabelSize(21);
   h_dummy2__181->GetZaxis()->SetTitleSize(21);
   h_dummy2__181->GetZaxis()->SetTitleFont(43);
   h_dummy2__181->Draw("HIST");
   
   Double_t Graph_from_h_ratio_fx3081[4] = {
   25,
   75,
   125,
   175};
   Double_t Graph_from_h_ratio_fy3081[4] = {
   1.192309,
   1.101085,
   1.030549,
   1.040997};
   Double_t Graph_from_h_ratio_felx3081[4] = {
   24.95,
   24.95,
   24.95,
   24.95};
   Double_t Graph_from_h_ratio_fely3081[4] = {
   0.01860034,
   0.01197256,
   0.02890653,
   0.04463237};
   Double_t Graph_from_h_ratio_fehx3081[4] = {
   25,
   25,
   25,
   25};
   Double_t Graph_from_h_ratio_fehy3081[4] = {
   0.01860034,
   0.01197256,
   0.02890653,
   0.04463237};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(4,Graph_from_h_ratio_fx3081,Graph_from_h_ratio_fy3081,Graph_from_h_ratio_felx3081,Graph_from_h_ratio_fehx3081,Graph_from_h_ratio_fely3081,Graph_from_h_ratio_fehy3081);
   grae->SetName("Graph_from_h_ratio");
   grae->SetTitle("");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(24);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_h_ratio3081 = new TH1F("Graph_Graph_from_h_ratio3081","",100,0,219.995);
   Graph_Graph_from_h_ratio3081->SetMinimum(0.9749098);
   Graph_Graph_from_h_ratio3081->SetMaximum(1.232364);
   Graph_Graph_from_h_ratio3081->SetDirectory(0);
   Graph_Graph_from_h_ratio3081->SetStats(0);
   Graph_Graph_from_h_ratio3081->SetLineWidth(2);
   Graph_Graph_from_h_ratio3081->SetMarkerStyle(20);
   Graph_Graph_from_h_ratio3081->SetMarkerSize(1.2);
   Graph_Graph_from_h_ratio3081->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3081->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3081->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3081->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3081->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3081->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3081->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3081->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3081->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3081->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3081->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3081->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3081->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3081->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_h_ratio3081);
   
   grae->Draw("pe0");
   TLine *line = new TLine(0,1,200,1);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t g_ratio2_fx3082[4] = {
   25,
   75,
   125,
   175};
   Double_t g_ratio2_fy3082[4] = {
   1,
   1,
   1,
   1};
   Double_t g_ratio2_felx3082[4] = {
   25,
   25,
   25,
   25};
   Double_t g_ratio2_fely3082[4] = {
   0.1894724,
   0.1960545,
   0.1948484,
   0.225094};
   Double_t g_ratio2_fehx3082[4] = {
   25,
   25,
   25,
   25};
   Double_t g_ratio2_fehy3082[4] = {
   0.1894724,
   0.1960545,
   0.1948484,
   0.225094};
   grae = new TGraphAsymmErrors(4,g_ratio2_fx3082,g_ratio2_fy3082,g_ratio2_felx3082,g_ratio2_fehx3082,g_ratio2_fely3082,g_ratio2_fehy3082);
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
   
   TH1F *Graph_g_ratio23082 = new TH1F("Graph_g_ratio23082","",100,0,220);
   Graph_g_ratio23082->SetMinimum(0.7298872);
   Graph_g_ratio23082->SetMaximum(1.270113);
   Graph_g_ratio23082->SetDirectory(0);
   Graph_g_ratio23082->SetStats(0);
   Graph_g_ratio23082->SetLineWidth(2);
   Graph_g_ratio23082->SetMarkerStyle(20);
   Graph_g_ratio23082->SetMarkerSize(1.2);
   Graph_g_ratio23082->GetXaxis()->SetLabelFont(43);
   Graph_g_ratio23082->GetXaxis()->SetLabelSize(21);
   Graph_g_ratio23082->GetXaxis()->SetTitleSize(21);
   Graph_g_ratio23082->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23082->GetXaxis()->SetTitleFont(43);
   Graph_g_ratio23082->GetYaxis()->SetLabelFont(43);
   Graph_g_ratio23082->GetYaxis()->SetLabelSize(21);
   Graph_g_ratio23082->GetYaxis()->SetTitleSize(21);
   Graph_g_ratio23082->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23082->GetYaxis()->SetTitleFont(43);
   Graph_g_ratio23082->GetZaxis()->SetLabelFont(43);
   Graph_g_ratio23082->GetZaxis()->SetLabelSize(21);
   Graph_g_ratio23082->GetZaxis()->SetTitleSize(21);
   Graph_g_ratio23082->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_ratio23082);
   
   grae->Draw("e2");
   Double_t xAxis202[5] = {0, 50, 100, 150, 200}; 
   
   TH1D *h_dummy2_copy__182 = new TH1D("h_dummy2_copy__182","Data/MC",4, xAxis202);
   h_dummy2_copy__182->SetMinimum(0.5);
   h_dummy2_copy__182->SetMaximum(1.5);
   h_dummy2_copy__182->SetEntries(1164493);
   h_dummy2_copy__182->SetDirectory(0);
   h_dummy2_copy__182->SetStats(0);
   h_dummy2_copy__182->SetMarkerStyle(20);
   h_dummy2_copy__182->SetMarkerSize(1.2);
   h_dummy2_copy__182->GetXaxis()->SetTitle("E_{T}^{miss} [GeV]");
   h_dummy2_copy__182->GetXaxis()->SetRange(1,25);
   h_dummy2_copy__182->GetXaxis()->SetLabelFont(43);
   h_dummy2_copy__182->GetXaxis()->SetLabelOffset(0.025);
   h_dummy2_copy__182->GetXaxis()->SetLabelSize(16.8);
   h_dummy2_copy__182->GetXaxis()->SetTitleSize(21);
   h_dummy2_copy__182->GetXaxis()->SetTitleOffset(5.05);
   h_dummy2_copy__182->GetXaxis()->SetTitleFont(43);
   h_dummy2_copy__182->GetYaxis()->SetTitle("Data / Bkg");
   h_dummy2_copy__182->GetYaxis()->SetNdivisions(-504);
   h_dummy2_copy__182->GetYaxis()->SetLabelFont(43);
   h_dummy2_copy__182->GetYaxis()->SetLabelOffset(0.02);
   h_dummy2_copy__182->GetYaxis()->SetLabelSize(16.8);
   h_dummy2_copy__182->GetYaxis()->SetTitleSize(21);
   h_dummy2_copy__182->GetYaxis()->SetTitleOffset(2.4);
   h_dummy2_copy__182->GetYaxis()->SetTitleFont(43);
   h_dummy2_copy__182->GetZaxis()->SetLabelFont(43);
   h_dummy2_copy__182->GetZaxis()->SetLabelSize(21);
   h_dummy2_copy__182->GetZaxis()->SetTitleSize(21);
   h_dummy2_copy__182->GetZaxis()->SetTitleFont(43);
   h_dummy2_copy__182->Draw("sameaxis");
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
   c_c1lep6jin3bex_met->cd();
  
// ------------>Primitives in pad: pad0
   TPad *pad0 = new TPad("pad0", "pad0",0,0.2,1,1);
   pad0->Draw();
   pad0->cd();
   pad0->Range(-34.5679,-1810.581,212.3457,16295.23);
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
   Double_t xAxis203[5] = {0, 50, 100, 150, 200}; 
   
   TH1D *h_dummy__183 = new TH1D("h_dummy__183","",4, xAxis203);
   h_dummy__183->SetMinimum(0);
   h_dummy__183->SetMaximum(15389.94);
   h_dummy__183->SetEntries(1164493);
   h_dummy__183->SetDirectory(0);
   h_dummy__183->SetStats(0);
   h_dummy__183->SetMarkerStyle(20);
   h_dummy__183->SetMarkerSize(1.2);
   h_dummy__183->GetXaxis()->SetRange(1,25);
   h_dummy__183->GetXaxis()->SetLabelFont(43);
   h_dummy__183->GetXaxis()->SetLabelSize(0);
   h_dummy__183->GetXaxis()->SetTitleSize(21);
   h_dummy__183->GetXaxis()->SetTitleOffset(1.4);
   h_dummy__183->GetXaxis()->SetTitleFont(43);
   h_dummy__183->GetYaxis()->SetTitle("Events / 50 GeV");
   h_dummy__183->GetYaxis()->SetLabelFont(43);
   h_dummy__183->GetYaxis()->SetLabelSize(16.8);
   h_dummy__183->GetYaxis()->SetTitleSize(21);
   h_dummy__183->GetYaxis()->SetTitleOffset(2.4);
   h_dummy__183->GetYaxis()->SetTitleFont(43);
   h_dummy__183->GetZaxis()->SetLabelFont(43);
   h_dummy__183->GetZaxis()->SetLabelSize(21);
   h_dummy__183->GetZaxis()->SetTitleSize(21);
   h_dummy__183->GetZaxis()->SetTitleFont(43);
   h_dummy__183->Draw("HIST");
   
   THStack *h_stack = new THStack();
   h_stack->SetName("h_stack");
   h_stack->SetTitle("h_stack");
   Double_t xAxis204[5] = {0, 50, 100, 150, 200}; 
   
   TH1F *h_stack_stack_21 = new TH1F("h_stack_stack_21","h_stack",4, xAxis204);
   h_stack_stack_21->SetMinimum(0);
   h_stack_stack_21->SetMaximum(8495.328);
   h_stack_stack_21->SetDirectory(0);
   h_stack_stack_21->SetStats(0);
   h_stack_stack_21->SetLineWidth(2);
   h_stack_stack_21->SetMarkerStyle(20);
   h_stack_stack_21->SetMarkerSize(1.2);
   h_stack_stack_21->GetXaxis()->SetLabelFont(43);
   h_stack_stack_21->GetXaxis()->SetLabelSize(21);
   h_stack_stack_21->GetXaxis()->SetTitleSize(21);
   h_stack_stack_21->GetXaxis()->SetTitleOffset(1.4);
   h_stack_stack_21->GetXaxis()->SetTitleFont(43);
   h_stack_stack_21->GetYaxis()->SetLabelFont(43);
   h_stack_stack_21->GetYaxis()->SetLabelSize(21);
   h_stack_stack_21->GetYaxis()->SetTitleSize(21);
   h_stack_stack_21->GetYaxis()->SetTitleOffset(1.4);
   h_stack_stack_21->GetYaxis()->SetTitleFont(43);
   h_stack_stack_21->GetZaxis()->SetLabelFont(43);
   h_stack_stack_21->GetZaxis()->SetLabelSize(21);
   h_stack_stack_21->GetZaxis()->SetTitleSize(21);
   h_stack_stack_21->GetZaxis()->SetTitleFont(43);
   h_stack->SetHistogram(h_stack_stack_21);
   
   Double_t xAxis205[5] = {0, 50, 100, 150, 200}; 
   
   TH1D *c1lep6jin3bex_met_topEW__184 = new TH1D("c1lep6jin3bex_met_topEW__184","",4, xAxis205);
   c1lep6jin3bex_met_topEW__184->SetBinContent(1,493.1938);
   c1lep6jin3bex_met_topEW__184->SetBinContent(2,916.0083);
   c1lep6jin3bex_met_topEW__184->SetBinContent(3,240.6767);
   c1lep6jin3bex_met_topEW__184->SetBinContent(4,107.7667);
   c1lep6jin3bex_met_topEW__184->SetBinContent(5,115.2291);
   c1lep6jin3bex_met_topEW__184->SetBinError(1,48.64917);
   c1lep6jin3bex_met_topEW__184->SetBinError(2,58.83728);
   c1lep6jin3bex_met_topEW__184->SetBinError(3,38.58425);
   c1lep6jin3bex_met_topEW__184->SetBinError(4,26.27954);
   c1lep6jin3bex_met_topEW__184->SetBinError(5,23.87618);
   c1lep6jin3bex_met_topEW__184->SetEntries(1125863);
   c1lep6jin3bex_met_topEW__184->SetDirectory(0);
   c1lep6jin3bex_met_topEW__184->SetStats(0);

   ci = TColor::GetColor("#66cc66");
   c1lep6jin3bex_met_topEW__184->SetFillColor(ci);
   c1lep6jin3bex_met_topEW__184->SetMarkerStyle(20);
   c1lep6jin3bex_met_topEW__184->SetMarkerSize(1.2);
   c1lep6jin3bex_met_topEW__184->GetXaxis()->SetTitle("E_{T}^{miss} [GeV]");
   c1lep6jin3bex_met_topEW__184->GetXaxis()->SetRange(1,25);
   c1lep6jin3bex_met_topEW__184->GetXaxis()->SetLabelFont(43);
   c1lep6jin3bex_met_topEW__184->GetXaxis()->SetLabelSize(21);
   c1lep6jin3bex_met_topEW__184->GetXaxis()->SetTitleSize(21);
   c1lep6jin3bex_met_topEW__184->GetXaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_met_topEW__184->GetXaxis()->SetTitleFont(43);
   c1lep6jin3bex_met_topEW__184->GetYaxis()->SetLabelFont(43);
   c1lep6jin3bex_met_topEW__184->GetYaxis()->SetLabelSize(21);
   c1lep6jin3bex_met_topEW__184->GetYaxis()->SetTitleSize(21);
   c1lep6jin3bex_met_topEW__184->GetYaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_met_topEW__184->GetYaxis()->SetTitleFont(43);
   c1lep6jin3bex_met_topEW__184->GetZaxis()->SetLabelFont(43);
   c1lep6jin3bex_met_topEW__184->GetZaxis()->SetLabelSize(21);
   c1lep6jin3bex_met_topEW__184->GetZaxis()->SetTitleSize(21);
   c1lep6jin3bex_met_topEW__184->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep6jin3bex_met_topEW,"");
   Double_t xAxis206[5] = {0, 50, 100, 150, 200}; 
   
   TH1D *c1lep6jin3bex_met_ttbarbb__185 = new TH1D("c1lep6jin3bex_met_ttbarbb__185","",4, xAxis206);
   c1lep6jin3bex_met_ttbarbb__185->SetBinContent(1,1795.706);
   c1lep6jin3bex_met_ttbarbb__185->SetBinContent(2,4256.737);
   c1lep6jin3bex_met_ttbarbb__185->SetBinContent(3,661.9298);
   c1lep6jin3bex_met_ttbarbb__185->SetBinContent(4,274.3223);
   c1lep6jin3bex_met_ttbarbb__185->SetBinContent(5,293.7981);
   c1lep6jin3bex_met_ttbarbb__185->SetBinError(1,27.26324);
   c1lep6jin3bex_met_ttbarbb__185->SetBinError(2,41.55826);
   c1lep6jin3bex_met_ttbarbb__185->SetBinError(3,18.12193);
   c1lep6jin3bex_met_ttbarbb__185->SetBinError(4,10.59178);
   c1lep6jin3bex_met_ttbarbb__185->SetBinError(5,12.38869);
   c1lep6jin3bex_met_ttbarbb__185->SetEntries(26042);
   c1lep6jin3bex_met_ttbarbb__185->SetDirectory(0);
   c1lep6jin3bex_met_ttbarbb__185->SetStats(0);

   ci = TColor::GetColor("#6666cc");
   c1lep6jin3bex_met_ttbarbb__185->SetFillColor(ci);
   c1lep6jin3bex_met_ttbarbb__185->SetMarkerStyle(20);
   c1lep6jin3bex_met_ttbarbb__185->SetMarkerSize(1.2);
   c1lep6jin3bex_met_ttbarbb__185->GetXaxis()->SetTitle("E_{T}^{miss} [GeV]");
   c1lep6jin3bex_met_ttbarbb__185->GetXaxis()->SetRange(1,25);
   c1lep6jin3bex_met_ttbarbb__185->GetXaxis()->SetLabelFont(43);
   c1lep6jin3bex_met_ttbarbb__185->GetXaxis()->SetLabelSize(21);
   c1lep6jin3bex_met_ttbarbb__185->GetXaxis()->SetTitleSize(21);
   c1lep6jin3bex_met_ttbarbb__185->GetXaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_met_ttbarbb__185->GetXaxis()->SetTitleFont(43);
   c1lep6jin3bex_met_ttbarbb__185->GetYaxis()->SetLabelFont(43);
   c1lep6jin3bex_met_ttbarbb__185->GetYaxis()->SetLabelSize(21);
   c1lep6jin3bex_met_ttbarbb__185->GetYaxis()->SetTitleSize(21);
   c1lep6jin3bex_met_ttbarbb__185->GetYaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_met_ttbarbb__185->GetYaxis()->SetTitleFont(43);
   c1lep6jin3bex_met_ttbarbb__185->GetZaxis()->SetLabelFont(43);
   c1lep6jin3bex_met_ttbarbb__185->GetZaxis()->SetLabelSize(21);
   c1lep6jin3bex_met_ttbarbb__185->GetZaxis()->SetTitleSize(21);
   c1lep6jin3bex_met_ttbarbb__185->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep6jin3bex_met_ttbarbb,"");
   Double_t xAxis207[5] = {0, 50, 100, 150, 200}; 
   
   TH1D *c1lep6jin3bex_met_ttbarcc__186 = new TH1D("c1lep6jin3bex_met_ttbarcc__186","",4, xAxis207);
   c1lep6jin3bex_met_ttbarcc__186->SetBinContent(1,476.7181);
   c1lep6jin3bex_met_ttbarcc__186->SetBinContent(2,1050.731);
   c1lep6jin3bex_met_ttbarcc__186->SetBinContent(3,154.8696);
   c1lep6jin3bex_met_ttbarcc__186->SetBinContent(4,71.31156);
   c1lep6jin3bex_met_ttbarcc__186->SetBinContent(5,60.62521);
   c1lep6jin3bex_met_ttbarcc__186->SetBinError(1,14.99029);
   c1lep6jin3bex_met_ttbarcc__186->SetBinError(2,23.34396);
   c1lep6jin3bex_met_ttbarcc__186->SetBinError(3,8.105007);
   c1lep6jin3bex_met_ttbarcc__186->SetBinError(4,5.465994);
   c1lep6jin3bex_met_ttbarcc__186->SetBinError(5,5.145251);
   c1lep6jin3bex_met_ttbarcc__186->SetEntries(5630);
   c1lep6jin3bex_met_ttbarcc__186->SetDirectory(0);
   c1lep6jin3bex_met_ttbarcc__186->SetStats(0);

   ci = TColor::GetColor("#ccccff");
   c1lep6jin3bex_met_ttbarcc__186->SetFillColor(ci);
   c1lep6jin3bex_met_ttbarcc__186->SetMarkerStyle(20);
   c1lep6jin3bex_met_ttbarcc__186->SetMarkerSize(1.2);
   c1lep6jin3bex_met_ttbarcc__186->GetXaxis()->SetTitle("E_{T}^{miss} [GeV]");
   c1lep6jin3bex_met_ttbarcc__186->GetXaxis()->SetRange(1,25);
   c1lep6jin3bex_met_ttbarcc__186->GetXaxis()->SetLabelFont(43);
   c1lep6jin3bex_met_ttbarcc__186->GetXaxis()->SetLabelSize(21);
   c1lep6jin3bex_met_ttbarcc__186->GetXaxis()->SetTitleSize(21);
   c1lep6jin3bex_met_ttbarcc__186->GetXaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_met_ttbarcc__186->GetXaxis()->SetTitleFont(43);
   c1lep6jin3bex_met_ttbarcc__186->GetYaxis()->SetLabelFont(43);
   c1lep6jin3bex_met_ttbarcc__186->GetYaxis()->SetLabelSize(21);
   c1lep6jin3bex_met_ttbarcc__186->GetYaxis()->SetTitleSize(21);
   c1lep6jin3bex_met_ttbarcc__186->GetYaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_met_ttbarcc__186->GetYaxis()->SetTitleFont(43);
   c1lep6jin3bex_met_ttbarcc__186->GetZaxis()->SetLabelFont(43);
   c1lep6jin3bex_met_ttbarcc__186->GetZaxis()->SetLabelSize(21);
   c1lep6jin3bex_met_ttbarcc__186->GetZaxis()->SetTitleSize(21);
   c1lep6jin3bex_met_ttbarcc__186->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep6jin3bex_met_ttbarcc,"");
   Double_t xAxis208[5] = {0, 50, 100, 150, 200}; 
   
   TH1D *c1lep6jin3bex_met_ttbarlight__187 = new TH1D("c1lep6jin3bex_met_ttbarlight__187","",4, xAxis208);
   c1lep6jin3bex_met_ttbarlight__187->SetBinContent(1,680.6362);
   c1lep6jin3bex_met_ttbarlight__187->SetBinContent(2,1458.039);
   c1lep6jin3bex_met_ttbarlight__187->SetBinContent(3,175.8469);
   c1lep6jin3bex_met_ttbarlight__187->SetBinContent(4,69.17557);
   c1lep6jin3bex_met_ttbarlight__187->SetBinContent(5,65.92776);
   c1lep6jin3bex_met_ttbarlight__187->SetBinError(1,19.21024);
   c1lep6jin3bex_met_ttbarlight__187->SetBinError(2,29.60103);
   c1lep6jin3bex_met_ttbarlight__187->SetBinError(3,9.66987);
   c1lep6jin3bex_met_ttbarlight__187->SetBinError(4,5.421771);
   c1lep6jin3bex_met_ttbarlight__187->SetBinError(5,5.472642);
   c1lep6jin3bex_met_ttbarlight__187->SetEntries(6954);
   c1lep6jin3bex_met_ttbarlight__187->SetDirectory(0);
   c1lep6jin3bex_met_ttbarlight__187->SetStats(0);
   c1lep6jin3bex_met_ttbarlight__187->SetMarkerStyle(20);
   c1lep6jin3bex_met_ttbarlight__187->SetMarkerSize(1.2);
   c1lep6jin3bex_met_ttbarlight__187->GetXaxis()->SetTitle("E_{T}^{miss} [GeV]");
   c1lep6jin3bex_met_ttbarlight__187->GetXaxis()->SetRange(1,25);
   c1lep6jin3bex_met_ttbarlight__187->GetXaxis()->SetLabelFont(43);
   c1lep6jin3bex_met_ttbarlight__187->GetXaxis()->SetLabelSize(21);
   c1lep6jin3bex_met_ttbarlight__187->GetXaxis()->SetTitleSize(21);
   c1lep6jin3bex_met_ttbarlight__187->GetXaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_met_ttbarlight__187->GetXaxis()->SetTitleFont(43);
   c1lep6jin3bex_met_ttbarlight__187->GetYaxis()->SetLabelFont(43);
   c1lep6jin3bex_met_ttbarlight__187->GetYaxis()->SetLabelSize(21);
   c1lep6jin3bex_met_ttbarlight__187->GetYaxis()->SetTitleSize(21);
   c1lep6jin3bex_met_ttbarlight__187->GetYaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_met_ttbarlight__187->GetYaxis()->SetTitleFont(43);
   c1lep6jin3bex_met_ttbarlight__187->GetZaxis()->SetLabelFont(43);
   c1lep6jin3bex_met_ttbarlight__187->GetZaxis()->SetLabelSize(21);
   c1lep6jin3bex_met_ttbarlight__187->GetZaxis()->SetTitleSize(21);
   c1lep6jin3bex_met_ttbarlight__187->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep6jin3bex_met_ttbarlight,"");
   Double_t xAxis209[5] = {0, 50, 100, 150, 200}; 
   
   TH1D *c1lep6jin3bex_met_uHcW__188 = new TH1D("c1lep6jin3bex_met_uHcW__188","",4, xAxis209);
   c1lep6jin3bex_met_uHcW__188->SetBinContent(1,211.0804);
   c1lep6jin3bex_met_uHcW__188->SetBinContent(2,409.2738);
   c1lep6jin3bex_met_uHcW__188->SetBinContent(3,37.32536);
   c1lep6jin3bex_met_uHcW__188->SetBinContent(4,15.24824);
   c1lep6jin3bex_met_uHcW__188->SetBinContent(5,16.10467);
   c1lep6jin3bex_met_uHcW__188->SetBinError(1,17.69918);
   c1lep6jin3bex_met_uHcW__188->SetBinError(2,23.86449);
   c1lep6jin3bex_met_uHcW__188->SetBinError(3,7.831136);
   c1lep6jin3bex_met_uHcW__188->SetBinError(4,5.313819);
   c1lep6jin3bex_met_uHcW__188->SetBinError(5,4.637584);
   c1lep6jin3bex_met_uHcW__188->SetEntries(5540);
   c1lep6jin3bex_met_uHcW__188->SetDirectory(0);
   c1lep6jin3bex_met_uHcW__188->SetStats(0);
   c1lep6jin3bex_met_uHcW__188->SetFillColor(2);
   c1lep6jin3bex_met_uHcW__188->SetLineColor(2);
   c1lep6jin3bex_met_uHcW__188->SetMarkerStyle(20);
   c1lep6jin3bex_met_uHcW__188->SetMarkerSize(1.2);
   c1lep6jin3bex_met_uHcW__188->GetXaxis()->SetTitle("E_{T}^{miss} [GeV]");
   c1lep6jin3bex_met_uHcW__188->GetXaxis()->SetRange(1,25);
   c1lep6jin3bex_met_uHcW__188->GetXaxis()->SetLabelFont(43);
   c1lep6jin3bex_met_uHcW__188->GetXaxis()->SetLabelSize(21);
   c1lep6jin3bex_met_uHcW__188->GetXaxis()->SetTitleSize(21);
   c1lep6jin3bex_met_uHcW__188->GetXaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_met_uHcW__188->GetXaxis()->SetTitleFont(43);
   c1lep6jin3bex_met_uHcW__188->GetYaxis()->SetLabelFont(43);
   c1lep6jin3bex_met_uHcW__188->GetYaxis()->SetLabelSize(21);
   c1lep6jin3bex_met_uHcW__188->GetYaxis()->SetTitleSize(21);
   c1lep6jin3bex_met_uHcW__188->GetYaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_met_uHcW__188->GetYaxis()->SetTitleFont(43);
   c1lep6jin3bex_met_uHcW__188->GetZaxis()->SetLabelFont(43);
   c1lep6jin3bex_met_uHcW__188->GetZaxis()->SetLabelSize(21);
   c1lep6jin3bex_met_uHcW__188->GetZaxis()->SetTitleSize(21);
   c1lep6jin3bex_met_uHcW__188->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep6jin3bex_met_uHcW,"");
   h_stack->Draw("hist same");
   
   Double_t g_totErr_fx3083[4] = {
   25,
   75,
   125,
   175};
   Double_t g_totErr_fy3083[4] = {
   3446.254,
   7681.515,
   1233.323,
   522.5761};
   Double_t g_totErr_felx3083[4] = {
   25,
   25,
   25,
   25};
   Double_t g_totErr_fely3083[4] = {
   652.9701,
   1505.996,
   240.311,
   117.6287};
   Double_t g_totErr_fehx3083[4] = {
   25,
   25,
   25,
   25};
   Double_t g_totErr_fehy3083[4] = {
   652.9701,
   1505.996,
   240.311,
   117.6287};
   grae = new TGraphAsymmErrors(4,g_totErr_fx3083,g_totErr_fy3083,g_totErr_felx3083,g_totErr_fehx3083,g_totErr_fely3083,g_totErr_fehy3083);
   grae->SetName("g_totErr");
   grae->SetTitle("");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(3354);
   grae->SetLineColor(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0);
   
   TH1F *Graph_g_totErr3083 = new TH1F("Graph_g_totErr3083","",100,0,220);
   Graph_g_totErr3083->SetMinimum(0);
   Graph_g_totErr3083->SetMaximum(10065.77);
   Graph_g_totErr3083->SetDirectory(0);
   Graph_g_totErr3083->SetStats(0);
   Graph_g_totErr3083->SetLineWidth(2);
   Graph_g_totErr3083->SetMarkerStyle(20);
   Graph_g_totErr3083->SetMarkerSize(1.2);
   Graph_g_totErr3083->GetXaxis()->SetLabelFont(43);
   Graph_g_totErr3083->GetXaxis()->SetLabelSize(21);
   Graph_g_totErr3083->GetXaxis()->SetTitleSize(21);
   Graph_g_totErr3083->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_totErr3083->GetXaxis()->SetTitleFont(43);
   Graph_g_totErr3083->GetYaxis()->SetLabelFont(43);
   Graph_g_totErr3083->GetYaxis()->SetLabelSize(21);
   Graph_g_totErr3083->GetYaxis()->SetTitleSize(21);
   Graph_g_totErr3083->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_totErr3083->GetYaxis()->SetTitleFont(43);
   Graph_g_totErr3083->GetZaxis()->SetLabelFont(43);
   Graph_g_totErr3083->GetZaxis()->SetLabelSize(21);
   Graph_g_totErr3083->GetZaxis()->SetTitleSize(21);
   Graph_g_totErr3083->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_totErr3083);
   
   grae->Draw("e2");
   
   Double_t Graph_from_c1lep6jin3bex_met_Data_fx3084[4] = {
   25,
   75,
   125,
   175};
   Double_t Graph_from_c1lep6jin3bex_met_Data_fy3084[4] = {
   4109,
   8458,
   1271,
   544};
   Double_t Graph_from_c1lep6jin3bex_met_Data_felx3084[4] = {
   24.95,
   24.95,
   24.95,
   24.95};
   Double_t Graph_from_c1lep6jin3bex_met_Data_fely3084[4] = {
   64.10148,
   91.96739,
   35.65109,
   23.32381};
   Double_t Graph_from_c1lep6jin3bex_met_Data_fehx3084[4] = {
   25,
   25,
   25,
   25};
   Double_t Graph_from_c1lep6jin3bex_met_Data_fehy3084[4] = {
   64.10148,
   91.96739,
   35.65109,
   23.32381};
   grae = new TGraphAsymmErrors(4,Graph_from_c1lep6jin3bex_met_Data_fx3084,Graph_from_c1lep6jin3bex_met_Data_fy3084,Graph_from_c1lep6jin3bex_met_Data_felx3084,Graph_from_c1lep6jin3bex_met_Data_fehx3084,Graph_from_c1lep6jin3bex_met_Data_fely3084,Graph_from_c1lep6jin3bex_met_Data_fehy3084);
   grae->SetName("Graph_from_c1lep6jin3bex_met_Data");
   grae->SetTitle("");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_c1lep6jin3bex_met_Data3084 = new TH1F("Graph_Graph_from_c1lep6jin3bex_met_Data3084","",100,0,219.995);
   Graph_Graph_from_c1lep6jin3bex_met_Data3084->SetMinimum(0);
   Graph_Graph_from_c1lep6jin3bex_met_Data3084->SetMaximum(9352.897);
   Graph_Graph_from_c1lep6jin3bex_met_Data3084->SetDirectory(0);
   Graph_Graph_from_c1lep6jin3bex_met_Data3084->SetStats(0);
   Graph_Graph_from_c1lep6jin3bex_met_Data3084->SetLineWidth(2);
   Graph_Graph_from_c1lep6jin3bex_met_Data3084->SetMarkerStyle(20);
   Graph_Graph_from_c1lep6jin3bex_met_Data3084->SetMarkerSize(1.2);
   Graph_Graph_from_c1lep6jin3bex_met_Data3084->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep6jin3bex_met_Data3084->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep6jin3bex_met_Data3084->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep6jin3bex_met_Data3084->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep6jin3bex_met_Data3084->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep6jin3bex_met_Data3084->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep6jin3bex_met_Data3084->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep6jin3bex_met_Data3084->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep6jin3bex_met_Data3084->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep6jin3bex_met_Data3084->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep6jin3bex_met_Data3084->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep6jin3bex_met_Data3084->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep6jin3bex_met_Data3084->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep6jin3bex_met_Data3084->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_c1lep6jin3bex_met_Data3084);
   
   grae->Draw("ep1 ");
   Double_t xAxis210[5] = {0, 50, 100, 150, 200}; 
   
   TH1D *h_dummy_copy__189 = new TH1D("h_dummy_copy__189","",4, xAxis210);
   h_dummy_copy__189->SetEntries(1164493);
   h_dummy_copy__189->SetDirectory(0);
   h_dummy_copy__189->SetStats(0);
   h_dummy_copy__189->SetMarkerStyle(20);
   h_dummy_copy__189->SetMarkerSize(1.2);
   h_dummy_copy__189->GetXaxis()->SetTitle("E_{T}^{miss} [GeV]");
   h_dummy_copy__189->GetXaxis()->SetRange(1,25);
   h_dummy_copy__189->GetXaxis()->SetLabelFont(43);
   h_dummy_copy__189->GetXaxis()->SetLabelSize(21);
   h_dummy_copy__189->GetXaxis()->SetTitleSize(21);
   h_dummy_copy__189->GetXaxis()->SetTitleOffset(1.4);
   h_dummy_copy__189->GetXaxis()->SetTitleFont(43);
   h_dummy_copy__189->GetYaxis()->SetTitle("Events / 50 GeV");
   h_dummy_copy__189->GetYaxis()->SetLabelFont(43);
   h_dummy_copy__189->GetYaxis()->SetLabelSize(16.8);
   h_dummy_copy__189->GetYaxis()->SetTitleSize(21);
   h_dummy_copy__189->GetYaxis()->SetTitleOffset(2.4);
   h_dummy_copy__189->GetYaxis()->SetTitleFont(43);
   h_dummy_copy__189->GetZaxis()->SetLabelFont(43);
   h_dummy_copy__189->GetZaxis()->SetLabelSize(21);
   h_dummy_copy__189->GetZaxis()->SetTitleSize(21);
   h_dummy_copy__189->GetZaxis()->SetTitleFont(43);
   h_dummy_copy__189->Draw("sameaxis");
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
   TLegendEntry *entry=leg->AddEntry("c1lep6jin3bex_met_Data","Data","lep");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep6jin3bex_met_uHcW","t#bar{t}#rightarrowWbHc (BR=1%)","f");
   entry->SetFillColor(2);
   entry->SetFillStyle(1001);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep6jin3bex_met_ttbarlight","t#bar{t}+light","f");
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep6jin3bex_met_ttbarcc","t#bar{t}+cc","f");

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
   entry=leg->AddEntry("c1lep6jin3bex_met_ttbarbb","t#bar{t}+bb","f");

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
   entry=leg->AddEntry("c1lep6jin3bex_met_topEW","Non-t#bar{t}","f");

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
   c_c1lep6jin3bex_met->cd();
   c_c1lep6jin3bex_met->Modified();
   c_c1lep6jin3bex_met->cd();
   c_c1lep6jin3bex_met->SetSelected(c_c1lep6jin3bex_met);
}
