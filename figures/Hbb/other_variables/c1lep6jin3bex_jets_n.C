void c1lep6jin3bex_jets_n()
{
//=========Macro generated from canvas: c_c1lep6jin3bex_jets_n/c_c1lep6jin3bex_jets_n
//=========  (Thu Jul 19 16:48:44 2018) by ROOT version6.04/14
   TCanvas *c_c1lep6jin3bex_jets_n = new TCanvas("c_c1lep6jin3bex_jets_n", "c_c1lep6jin3bex_jets_n",0,0,600,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c_c1lep6jin3bex_jets_n->SetHighLightColor(2);
   c_c1lep6jin3bex_jets_n->Range(0,0,1,1);
   c_c1lep6jin3bex_jets_n->SetFillColor(0);
   c_c1lep6jin3bex_jets_n->SetBorderMode(0);
   c_c1lep6jin3bex_jets_n->SetBorderSize(2);
   c_c1lep6jin3bex_jets_n->SetTickx(1);
   c_c1lep6jin3bex_jets_n->SetTicky(1);
   c_c1lep6jin3bex_jets_n->SetLeftMargin(0.16);
   c_c1lep6jin3bex_jets_n->SetRightMargin(0.05);
   c_c1lep6jin3bex_jets_n->SetTopMargin(0.05);
   c_c1lep6jin3bex_jets_n->SetBottomMargin(0.16);
   c_c1lep6jin3bex_jets_n->SetFrameBorderMode(0);
  
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
   Double_t xAxis401[5] = {3.5, 4.5, 5.5, 6.5, 7.5}; 
   
   TH1D *h_dummy2__361 = new TH1D("h_dummy2__361","Data/MC",4, xAxis401);
   h_dummy2__361->SetMinimum(0.5);
   h_dummy2__361->SetMaximum(1.5);
   h_dummy2__361->SetEntries(1164538);
   h_dummy2__361->SetDirectory(0);
   h_dummy2__361->SetStats(0);
   h_dummy2__361->SetMarkerStyle(20);
   h_dummy2__361->SetMarkerSize(1.2);
   h_dummy2__361->GetXaxis()->SetTitle("N_{j}");
   h_dummy2__361->GetXaxis()->SetRange(1,18);
   h_dummy2__361->GetXaxis()->SetLabelFont(43);
   h_dummy2__361->GetXaxis()->SetLabelOffset(0.025);
   h_dummy2__361->GetXaxis()->SetLabelSize(16.8);
   h_dummy2__361->GetXaxis()->SetTitleSize(21);
   h_dummy2__361->GetXaxis()->SetTitleOffset(5.05);
   h_dummy2__361->GetXaxis()->SetTitleFont(43);
   h_dummy2__361->GetYaxis()->SetTitle("Data / Bkg");
   h_dummy2__361->GetYaxis()->SetNdivisions(-504);
   h_dummy2__361->GetYaxis()->SetLabelFont(43);
   h_dummy2__361->GetYaxis()->SetLabelOffset(0.02);
   h_dummy2__361->GetYaxis()->SetLabelSize(16.8);
   h_dummy2__361->GetYaxis()->SetTitleSize(21);
   h_dummy2__361->GetYaxis()->SetTitleOffset(2.4);
   h_dummy2__361->GetYaxis()->SetTitleFont(43);
   h_dummy2__361->GetZaxis()->SetLabelFont(43);
   h_dummy2__361->GetZaxis()->SetLabelSize(21);
   h_dummy2__361->GetZaxis()->SetTitleSize(21);
   h_dummy2__361->GetZaxis()->SetTitleFont(43);
   h_dummy2__361->Draw("HIST");
   
   Double_t Graph_from_h_ratio_fx3161[4] = {
   4,
   5,
   6,
   7};
   Double_t Graph_from_h_ratio_fy3161[4] = {
   0,
   0,
   1.117729,
   1.124738};
   Double_t Graph_from_h_ratio_felx3161[4] = {
   0.499,
   0.499,
   0.499,
   0.499};
   Double_t Graph_from_h_ratio_fely3161[4] = {
   0,
   0,
   0.01257145,
   0.01749942};
   Double_t Graph_from_h_ratio_fehx3161[4] = {
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t Graph_from_h_ratio_fehy3161[4] = {
   0,
   0,
   0.01257145,
   0.01749942};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(4,Graph_from_h_ratio_fx3161,Graph_from_h_ratio_fy3161,Graph_from_h_ratio_felx3161,Graph_from_h_ratio_fehx3161,Graph_from_h_ratio_fely3161,Graph_from_h_ratio_fehy3161);
   grae->SetName("Graph_from_h_ratio");
   grae->SetTitle("");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(24);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_h_ratio3161 = new TH1F("Graph_Graph_from_h_ratio3161","",100,3.1011,7.8999);
   Graph_Graph_from_h_ratio3161->SetMinimum(0);
   Graph_Graph_from_h_ratio3161->SetMaximum(1.256461);
   Graph_Graph_from_h_ratio3161->SetDirectory(0);
   Graph_Graph_from_h_ratio3161->SetStats(0);
   Graph_Graph_from_h_ratio3161->SetLineWidth(2);
   Graph_Graph_from_h_ratio3161->SetMarkerStyle(20);
   Graph_Graph_from_h_ratio3161->SetMarkerSize(1.2);
   Graph_Graph_from_h_ratio3161->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3161->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3161->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3161->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3161->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3161->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3161->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3161->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3161->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3161->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3161->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3161->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3161->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3161->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_h_ratio3161);
   
   grae->Draw("pe0");
   TLine *line = new TLine(3.5,1,7.5,1);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t g_ratio2_fx3162[4] = {
   4,
   5,
   6,
   7};
   Double_t g_ratio2_fy3162[4] = {
   1,
   1,
   1,
   1};
   Double_t g_ratio2_felx3162[4] = {
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t g_ratio2_fely3162[4] = {
   2164180,
   0.6883927,
   0.191978,
   0.1802184};
   Double_t g_ratio2_fehx3162[4] = {
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t g_ratio2_fehy3162[4] = {
   2164180,
   0.6883927,
   0.191978,
   0.1802184};
   grae = new TGraphAsymmErrors(4,g_ratio2_fx3162,g_ratio2_fy3162,g_ratio2_felx3162,g_ratio2_fehx3162,g_ratio2_fely3162,g_ratio2_fehy3162);
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
   
   TH1F *Graph_g_ratio23162 = new TH1F("Graph_g_ratio23162","",100,3.1,7.9);
   Graph_g_ratio23162->SetMinimum(-2597015);
   Graph_g_ratio23162->SetMaximum(2597017);
   Graph_g_ratio23162->SetDirectory(0);
   Graph_g_ratio23162->SetStats(0);
   Graph_g_ratio23162->SetLineWidth(2);
   Graph_g_ratio23162->SetMarkerStyle(20);
   Graph_g_ratio23162->SetMarkerSize(1.2);
   Graph_g_ratio23162->GetXaxis()->SetLabelFont(43);
   Graph_g_ratio23162->GetXaxis()->SetLabelSize(21);
   Graph_g_ratio23162->GetXaxis()->SetTitleSize(21);
   Graph_g_ratio23162->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23162->GetXaxis()->SetTitleFont(43);
   Graph_g_ratio23162->GetYaxis()->SetLabelFont(43);
   Graph_g_ratio23162->GetYaxis()->SetLabelSize(21);
   Graph_g_ratio23162->GetYaxis()->SetTitleSize(21);
   Graph_g_ratio23162->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23162->GetYaxis()->SetTitleFont(43);
   Graph_g_ratio23162->GetZaxis()->SetLabelFont(43);
   Graph_g_ratio23162->GetZaxis()->SetLabelSize(21);
   Graph_g_ratio23162->GetZaxis()->SetTitleSize(21);
   Graph_g_ratio23162->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_ratio23162);
   
   grae->Draw("e2");
   Double_t xAxis402[5] = {3.5, 4.5, 5.5, 6.5, 7.5}; 
   
   TH1D *h_dummy2_copy__362 = new TH1D("h_dummy2_copy__362","Data/MC",4, xAxis402);
   h_dummy2_copy__362->SetMinimum(0.5);
   h_dummy2_copy__362->SetMaximum(1.5);
   h_dummy2_copy__362->SetEntries(1164538);
   h_dummy2_copy__362->SetDirectory(0);
   h_dummy2_copy__362->SetStats(0);
   h_dummy2_copy__362->SetMarkerStyle(20);
   h_dummy2_copy__362->SetMarkerSize(1.2);
   h_dummy2_copy__362->GetXaxis()->SetTitle("N_{j}");
   h_dummy2_copy__362->GetXaxis()->SetRange(1,18);
   h_dummy2_copy__362->GetXaxis()->SetLabelFont(43);
   h_dummy2_copy__362->GetXaxis()->SetLabelOffset(0.025);
   h_dummy2_copy__362->GetXaxis()->SetLabelSize(16.8);
   h_dummy2_copy__362->GetXaxis()->SetTitleSize(21);
   h_dummy2_copy__362->GetXaxis()->SetTitleOffset(5.05);
   h_dummy2_copy__362->GetXaxis()->SetTitleFont(43);
   h_dummy2_copy__362->GetYaxis()->SetTitle("Data / Bkg");
   h_dummy2_copy__362->GetYaxis()->SetNdivisions(-504);
   h_dummy2_copy__362->GetYaxis()->SetLabelFont(43);
   h_dummy2_copy__362->GetYaxis()->SetLabelOffset(0.02);
   h_dummy2_copy__362->GetYaxis()->SetLabelSize(16.8);
   h_dummy2_copy__362->GetYaxis()->SetTitleSize(21);
   h_dummy2_copy__362->GetYaxis()->SetTitleOffset(2.4);
   h_dummy2_copy__362->GetYaxis()->SetTitleFont(43);
   h_dummy2_copy__362->GetZaxis()->SetLabelFont(43);
   h_dummy2_copy__362->GetZaxis()->SetLabelSize(21);
   h_dummy2_copy__362->GetZaxis()->SetTitleSize(21);
   h_dummy2_copy__362->GetZaxis()->SetTitleFont(43);
   h_dummy2_copy__362->Draw("sameaxis");
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
   c_c1lep6jin3bex_jets_n->cd();
  
// ------------>Primitives in pad: pad0
   TPad *pad0 = new TPad("pad0", "pad0",0,0.2,1,1);
   pad0->Draw();
   pad0->cd();
   pad0->Range(2.808642,-1692.828,7.746914,15235.45);
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
   Double_t xAxis403[5] = {3.5, 4.5, 5.5, 6.5, 7.5}; 
   
   TH1D *h_dummy__363 = new TH1D("h_dummy__363","",4, xAxis403);
   h_dummy__363->SetMinimum(0);
   h_dummy__363->SetMaximum(14389.04);
   h_dummy__363->SetEntries(1164538);
   h_dummy__363->SetDirectory(0);
   h_dummy__363->SetStats(0);
   h_dummy__363->SetMarkerStyle(20);
   h_dummy__363->SetMarkerSize(1.2);
   h_dummy__363->GetXaxis()->SetRange(1,18);
   h_dummy__363->GetXaxis()->SetLabelFont(43);
   h_dummy__363->GetXaxis()->SetLabelSize(0);
   h_dummy__363->GetXaxis()->SetTitleSize(21);
   h_dummy__363->GetXaxis()->SetTitleOffset(1.4);
   h_dummy__363->GetXaxis()->SetTitleFont(43);
   h_dummy__363->GetYaxis()->SetTitle("Events");
   h_dummy__363->GetYaxis()->SetLabelFont(43);
   h_dummy__363->GetYaxis()->SetLabelSize(16.8);
   h_dummy__363->GetYaxis()->SetTitleSize(21);
   h_dummy__363->GetYaxis()->SetTitleOffset(2.4);
   h_dummy__363->GetYaxis()->SetTitleFont(43);
   h_dummy__363->GetZaxis()->SetLabelFont(43);
   h_dummy__363->GetZaxis()->SetLabelSize(21);
   h_dummy__363->GetZaxis()->SetTitleSize(21);
   h_dummy__363->GetZaxis()->SetTitleFont(43);
   h_dummy__363->Draw("HIST");
   
   THStack *h_stack = new THStack();
   h_stack->SetName("h_stack");
   h_stack->SetTitle("h_stack");
   Double_t xAxis404[5] = {3.5, 4.5, 5.5, 6.5, 7.5}; 
   
   TH1F *h_stack_stack_41 = new TH1F("h_stack_stack_41","h_stack",4, xAxis404);
   h_stack_stack_41->SetMinimum(-29.88667);
   h_stack_stack_41->SetMaximum(7659.795);
   h_stack_stack_41->SetDirectory(0);
   h_stack_stack_41->SetStats(0);
   h_stack_stack_41->SetLineWidth(2);
   h_stack_stack_41->SetMarkerStyle(20);
   h_stack_stack_41->SetMarkerSize(1.2);
   h_stack_stack_41->GetXaxis()->SetLabelFont(43);
   h_stack_stack_41->GetXaxis()->SetLabelSize(21);
   h_stack_stack_41->GetXaxis()->SetTitleSize(21);
   h_stack_stack_41->GetXaxis()->SetTitleOffset(1.4);
   h_stack_stack_41->GetXaxis()->SetTitleFont(43);
   h_stack_stack_41->GetYaxis()->SetLabelFont(43);
   h_stack_stack_41->GetYaxis()->SetLabelSize(21);
   h_stack_stack_41->GetYaxis()->SetTitleSize(21);
   h_stack_stack_41->GetYaxis()->SetTitleOffset(1.4);
   h_stack_stack_41->GetYaxis()->SetTitleFont(43);
   h_stack_stack_41->GetZaxis()->SetLabelFont(43);
   h_stack_stack_41->GetZaxis()->SetLabelSize(21);
   h_stack_stack_41->GetZaxis()->SetTitleSize(21);
   h_stack_stack_41->GetZaxis()->SetTitleFont(43);
   h_stack->SetHistogram(h_stack_stack_41);
   
   Double_t xAxis405[5] = {3.5, 4.5, 5.5, 6.5, 7.5}; 
   
   TH1D *c1lep6jin3bex_jets_n_topEW__364 = new TH1D("c1lep6jin3bex_jets_n_topEW__364","",4, xAxis405);
   c1lep6jin3bex_jets_n_topEW__364->SetBinContent(1,1.50976e-05);
   c1lep6jin3bex_jets_n_topEW__364->SetBinContent(2,79.77639);
   c1lep6jin3bex_jets_n_topEW__364->SetBinContent(3,883.7825);
   c1lep6jin3bex_jets_n_topEW__364->SetBinContent(4,484.4227);
   c1lep6jin3bex_jets_n_topEW__364->SetBinContent(5,481.039);
   c1lep6jin3bex_jets_n_topEW__364->SetBinError(1,10.30956);
   c1lep6jin3bex_jets_n_topEW__364->SetBinError(2,39.8523);
   c1lep6jin3bex_jets_n_topEW__364->SetBinError(3,78.01674);
   c1lep6jin3bex_jets_n_topEW__364->SetBinError(4,58.6324);
   c1lep6jin3bex_jets_n_topEW__364->SetBinError(5,69.31876);
   c1lep6jin3bex_jets_n_topEW__364->SetEntries(1125902);
   c1lep6jin3bex_jets_n_topEW__364->SetDirectory(0);
   c1lep6jin3bex_jets_n_topEW__364->SetStats(0);

   ci = TColor::GetColor("#66cc66");
   c1lep6jin3bex_jets_n_topEW__364->SetFillColor(ci);
   c1lep6jin3bex_jets_n_topEW__364->SetMarkerStyle(20);
   c1lep6jin3bex_jets_n_topEW__364->SetMarkerSize(1.2);
   c1lep6jin3bex_jets_n_topEW__364->GetXaxis()->SetTitle("Number of jets");
   c1lep6jin3bex_jets_n_topEW__364->GetXaxis()->SetRange(1,18);
   c1lep6jin3bex_jets_n_topEW__364->GetXaxis()->SetLabelFont(43);
   c1lep6jin3bex_jets_n_topEW__364->GetXaxis()->SetLabelSize(21);
   c1lep6jin3bex_jets_n_topEW__364->GetXaxis()->SetTitleSize(21);
   c1lep6jin3bex_jets_n_topEW__364->GetXaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_jets_n_topEW__364->GetXaxis()->SetTitleFont(43);
   c1lep6jin3bex_jets_n_topEW__364->GetYaxis()->SetLabelFont(43);
   c1lep6jin3bex_jets_n_topEW__364->GetYaxis()->SetLabelSize(21);
   c1lep6jin3bex_jets_n_topEW__364->GetYaxis()->SetTitleSize(21);
   c1lep6jin3bex_jets_n_topEW__364->GetYaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_jets_n_topEW__364->GetYaxis()->SetTitleFont(43);
   c1lep6jin3bex_jets_n_topEW__364->GetZaxis()->SetLabelFont(43);
   c1lep6jin3bex_jets_n_topEW__364->GetZaxis()->SetLabelSize(21);
   c1lep6jin3bex_jets_n_topEW__364->GetZaxis()->SetTitleSize(21);
   c1lep6jin3bex_jets_n_topEW__364->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep6jin3bex_jets_n_topEW,"");
   Double_t xAxis406[5] = {3.5, 4.5, 5.5, 6.5, 7.5}; 
   
   TH1D *c1lep6jin3bex_jets_n_ttbarbb__365 = new TH1D("c1lep6jin3bex_jets_n_ttbarbb__365","",4, xAxis406);
   c1lep6jin3bex_jets_n_ttbarbb__365->SetBinContent(1,1e-06);
   c1lep6jin3bex_jets_n_ttbarbb__365->SetBinContent(2,1e-06);
   c1lep6jin3bex_jets_n_ttbarbb__365->SetBinContent(3,3644.508);
   c1lep6jin3bex_jets_n_ttbarbb__365->SetBinContent(4,2103.794);
   c1lep6jin3bex_jets_n_ttbarbb__365->SetBinContent(5,1534.191);
   c1lep6jin3bex_jets_n_ttbarbb__365->SetBinError(1,29.88667);
   c1lep6jin3bex_jets_n_ttbarbb__365->SetBinError(2,29.88667);
   c1lep6jin3bex_jets_n_ttbarbb__365->SetBinError(3,38.4675);
   c1lep6jin3bex_jets_n_ttbarbb__365->SetBinError(4,29.88667);
   c1lep6jin3bex_jets_n_ttbarbb__365->SetBinError(5,26.29604);
   c1lep6jin3bex_jets_n_ttbarbb__365->SetEntries(26044);
   c1lep6jin3bex_jets_n_ttbarbb__365->SetDirectory(0);
   c1lep6jin3bex_jets_n_ttbarbb__365->SetStats(0);

   ci = TColor::GetColor("#6666cc");
   c1lep6jin3bex_jets_n_ttbarbb__365->SetFillColor(ci);
   c1lep6jin3bex_jets_n_ttbarbb__365->SetMarkerStyle(20);
   c1lep6jin3bex_jets_n_ttbarbb__365->SetMarkerSize(1.2);
   c1lep6jin3bex_jets_n_ttbarbb__365->GetXaxis()->SetTitle("Number of jets");
   c1lep6jin3bex_jets_n_ttbarbb__365->GetXaxis()->SetRange(1,18);
   c1lep6jin3bex_jets_n_ttbarbb__365->GetXaxis()->SetLabelFont(43);
   c1lep6jin3bex_jets_n_ttbarbb__365->GetXaxis()->SetLabelSize(21);
   c1lep6jin3bex_jets_n_ttbarbb__365->GetXaxis()->SetTitleSize(21);
   c1lep6jin3bex_jets_n_ttbarbb__365->GetXaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_jets_n_ttbarbb__365->GetXaxis()->SetTitleFont(43);
   c1lep6jin3bex_jets_n_ttbarbb__365->GetYaxis()->SetLabelFont(43);
   c1lep6jin3bex_jets_n_ttbarbb__365->GetYaxis()->SetLabelSize(21);
   c1lep6jin3bex_jets_n_ttbarbb__365->GetYaxis()->SetTitleSize(21);
   c1lep6jin3bex_jets_n_ttbarbb__365->GetYaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_jets_n_ttbarbb__365->GetYaxis()->SetTitleFont(43);
   c1lep6jin3bex_jets_n_ttbarbb__365->GetZaxis()->SetLabelFont(43);
   c1lep6jin3bex_jets_n_ttbarbb__365->GetZaxis()->SetLabelSize(21);
   c1lep6jin3bex_jets_n_ttbarbb__365->GetZaxis()->SetTitleSize(21);
   c1lep6jin3bex_jets_n_ttbarbb__365->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep6jin3bex_jets_n_ttbarbb,"");
   Double_t xAxis407[5] = {3.5, 4.5, 5.5, 6.5, 7.5}; 
   
   TH1D *c1lep6jin3bex_jets_n_ttbarcc__366 = new TH1D("c1lep6jin3bex_jets_n_ttbarcc__366","",4, xAxis407);
   c1lep6jin3bex_jets_n_ttbarcc__366->SetBinContent(1,1e-06);
   c1lep6jin3bex_jets_n_ttbarcc__366->SetBinContent(2,1e-06);
   c1lep6jin3bex_jets_n_ttbarcc__366->SetBinContent(3,981.6406);
   c1lep6jin3bex_jets_n_ttbarcc__366->SetBinContent(4,497.2945);
   c1lep6jin3bex_jets_n_ttbarcc__366->SetBinContent(5,335.3202);
   c1lep6jin3bex_jets_n_ttbarcc__366->SetBinError(1,14.4957);
   c1lep6jin3bex_jets_n_ttbarcc__366->SetBinError(2,14.4957);
   c1lep6jin3bex_jets_n_ttbarcc__366->SetBinError(3,23.24303);
   c1lep6jin3bex_jets_n_ttbarcc__366->SetBinError(4,14.4957);
   c1lep6jin3bex_jets_n_ttbarcc__366->SetBinError(5,11.88813);
   c1lep6jin3bex_jets_n_ttbarcc__366->SetEntries(5632);
   c1lep6jin3bex_jets_n_ttbarcc__366->SetDirectory(0);
   c1lep6jin3bex_jets_n_ttbarcc__366->SetStats(0);

   ci = TColor::GetColor("#ccccff");
   c1lep6jin3bex_jets_n_ttbarcc__366->SetFillColor(ci);
   c1lep6jin3bex_jets_n_ttbarcc__366->SetMarkerStyle(20);
   c1lep6jin3bex_jets_n_ttbarcc__366->SetMarkerSize(1.2);
   c1lep6jin3bex_jets_n_ttbarcc__366->GetXaxis()->SetTitle("Number of jets");
   c1lep6jin3bex_jets_n_ttbarcc__366->GetXaxis()->SetRange(1,18);
   c1lep6jin3bex_jets_n_ttbarcc__366->GetXaxis()->SetLabelFont(43);
   c1lep6jin3bex_jets_n_ttbarcc__366->GetXaxis()->SetLabelSize(21);
   c1lep6jin3bex_jets_n_ttbarcc__366->GetXaxis()->SetTitleSize(21);
   c1lep6jin3bex_jets_n_ttbarcc__366->GetXaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_jets_n_ttbarcc__366->GetXaxis()->SetTitleFont(43);
   c1lep6jin3bex_jets_n_ttbarcc__366->GetYaxis()->SetLabelFont(43);
   c1lep6jin3bex_jets_n_ttbarcc__366->GetYaxis()->SetLabelSize(21);
   c1lep6jin3bex_jets_n_ttbarcc__366->GetYaxis()->SetTitleSize(21);
   c1lep6jin3bex_jets_n_ttbarcc__366->GetYaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_jets_n_ttbarcc__366->GetYaxis()->SetTitleFont(43);
   c1lep6jin3bex_jets_n_ttbarcc__366->GetZaxis()->SetLabelFont(43);
   c1lep6jin3bex_jets_n_ttbarcc__366->GetZaxis()->SetLabelSize(21);
   c1lep6jin3bex_jets_n_ttbarcc__366->GetZaxis()->SetTitleSize(21);
   c1lep6jin3bex_jets_n_ttbarcc__366->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep6jin3bex_jets_n_ttbarcc,"");
   Double_t xAxis408[5] = {3.5, 4.5, 5.5, 6.5, 7.5}; 
   
   TH1D *c1lep6jin3bex_jets_n_ttbarlight__367 = new TH1D("c1lep6jin3bex_jets_n_ttbarlight__367","",4, xAxis408);
   c1lep6jin3bex_jets_n_ttbarlight__367->SetBinContent(1,1e-06);
   c1lep6jin3bex_jets_n_ttbarlight__367->SetBinContent(2,1e-06);
   c1lep6jin3bex_jets_n_ttbarlight__367->SetBinContent(3,1562.447);
   c1lep6jin3bex_jets_n_ttbarlight__367->SetBinContent(4,587.3457);
   c1lep6jin3bex_jets_n_ttbarlight__367->SetBinContent(5,299.8332);
   c1lep6jin3bex_jets_n_ttbarlight__367->SetBinError(1,18.01071);
   c1lep6jin3bex_jets_n_ttbarlight__367->SetBinError(2,18.01071);
   c1lep6jin3bex_jets_n_ttbarlight__367->SetBinError(3,29.82755);
   c1lep6jin3bex_jets_n_ttbarlight__367->SetBinError(4,18.01071);
   c1lep6jin3bex_jets_n_ttbarlight__367->SetBinError(5,13.56608);
   c1lep6jin3bex_jets_n_ttbarlight__367->SetEntries(6956);
   c1lep6jin3bex_jets_n_ttbarlight__367->SetDirectory(0);
   c1lep6jin3bex_jets_n_ttbarlight__367->SetStats(0);
   c1lep6jin3bex_jets_n_ttbarlight__367->SetMarkerStyle(20);
   c1lep6jin3bex_jets_n_ttbarlight__367->SetMarkerSize(1.2);
   c1lep6jin3bex_jets_n_ttbarlight__367->GetXaxis()->SetTitle("Number of jets");
   c1lep6jin3bex_jets_n_ttbarlight__367->GetXaxis()->SetRange(1,18);
   c1lep6jin3bex_jets_n_ttbarlight__367->GetXaxis()->SetLabelFont(43);
   c1lep6jin3bex_jets_n_ttbarlight__367->GetXaxis()->SetLabelSize(21);
   c1lep6jin3bex_jets_n_ttbarlight__367->GetXaxis()->SetTitleSize(21);
   c1lep6jin3bex_jets_n_ttbarlight__367->GetXaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_jets_n_ttbarlight__367->GetXaxis()->SetTitleFont(43);
   c1lep6jin3bex_jets_n_ttbarlight__367->GetYaxis()->SetLabelFont(43);
   c1lep6jin3bex_jets_n_ttbarlight__367->GetYaxis()->SetLabelSize(21);
   c1lep6jin3bex_jets_n_ttbarlight__367->GetYaxis()->SetTitleSize(21);
   c1lep6jin3bex_jets_n_ttbarlight__367->GetYaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_jets_n_ttbarlight__367->GetYaxis()->SetTitleFont(43);
   c1lep6jin3bex_jets_n_ttbarlight__367->GetZaxis()->SetLabelFont(43);
   c1lep6jin3bex_jets_n_ttbarlight__367->GetZaxis()->SetLabelSize(21);
   c1lep6jin3bex_jets_n_ttbarlight__367->GetZaxis()->SetTitleSize(21);
   c1lep6jin3bex_jets_n_ttbarlight__367->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep6jin3bex_jets_n_ttbarlight,"");
   Double_t xAxis409[5] = {3.5, 4.5, 5.5, 6.5, 7.5}; 
   
   TH1D *c1lep6jin3bex_jets_n_uHcW__368 = new TH1D("c1lep6jin3bex_jets_n_uHcW__368","",4, xAxis409);
   c1lep6jin3bex_jets_n_uHcW__368->SetBinContent(3,222.6648);
   c1lep6jin3bex_jets_n_uHcW__368->SetBinContent(4,86.07877);
   c1lep6jin3bex_jets_n_uHcW__368->SetBinContent(5,35.77268);
   c1lep6jin3bex_jets_n_uHcW__368->SetBinError(3,12.15593);
   c1lep6jin3bex_jets_n_uHcW__368->SetBinError(4,8.197761);
   c1lep6jin3bex_jets_n_uHcW__368->SetBinError(5,5.787184);
   c1lep6jin3bex_jets_n_uHcW__368->SetEntries(5540);
   c1lep6jin3bex_jets_n_uHcW__368->SetDirectory(0);
   c1lep6jin3bex_jets_n_uHcW__368->SetStats(0);
   c1lep6jin3bex_jets_n_uHcW__368->SetFillColor(2);
   c1lep6jin3bex_jets_n_uHcW__368->SetLineColor(2);
   c1lep6jin3bex_jets_n_uHcW__368->SetMarkerStyle(20);
   c1lep6jin3bex_jets_n_uHcW__368->SetMarkerSize(1.2);
   c1lep6jin3bex_jets_n_uHcW__368->GetXaxis()->SetTitle("Number of jets");
   c1lep6jin3bex_jets_n_uHcW__368->GetXaxis()->SetRange(1,18);
   c1lep6jin3bex_jets_n_uHcW__368->GetXaxis()->SetLabelFont(43);
   c1lep6jin3bex_jets_n_uHcW__368->GetXaxis()->SetLabelSize(21);
   c1lep6jin3bex_jets_n_uHcW__368->GetXaxis()->SetTitleSize(21);
   c1lep6jin3bex_jets_n_uHcW__368->GetXaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_jets_n_uHcW__368->GetXaxis()->SetTitleFont(43);
   c1lep6jin3bex_jets_n_uHcW__368->GetYaxis()->SetLabelFont(43);
   c1lep6jin3bex_jets_n_uHcW__368->GetYaxis()->SetLabelSize(21);
   c1lep6jin3bex_jets_n_uHcW__368->GetYaxis()->SetTitleSize(21);
   c1lep6jin3bex_jets_n_uHcW__368->GetYaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_jets_n_uHcW__368->GetYaxis()->SetTitleFont(43);
   c1lep6jin3bex_jets_n_uHcW__368->GetZaxis()->SetLabelFont(43);
   c1lep6jin3bex_jets_n_uHcW__368->GetZaxis()->SetLabelSize(21);
   c1lep6jin3bex_jets_n_uHcW__368->GetZaxis()->SetTitleSize(21);
   c1lep6jin3bex_jets_n_uHcW__368->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep6jin3bex_jets_n_uHcW,"");
   h_stack->Draw("hist same");
   
   Double_t g_totErr_fx3163[4] = {
   4,
   5,
   6,
   7};
   Double_t g_totErr_fy3163[4] = {
   1.80976e-05,
   79.77639,
   7072.378,
   3672.857};
   Double_t g_totErr_felx3163[4] = {
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t g_totErr_fely3163[4] = {
   39.16645,
   54.91748,
   1357.741,
   661.9164};
   Double_t g_totErr_fehx3163[4] = {
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t g_totErr_fehy3163[4] = {
   39.16645,
   54.91748,
   1357.741,
   661.9164};
   grae = new TGraphAsymmErrors(4,g_totErr_fx3163,g_totErr_fy3163,g_totErr_felx3163,g_totErr_fehx3163,g_totErr_fely3163,g_totErr_fehy3163);
   grae->SetName("g_totErr");
   grae->SetTitle("");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(3354);
   grae->SetLineColor(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0);
   
   TH1F *Graph_g_totErr3163 = new TH1F("Graph_g_totErr3163","",100,3.1,7.9);
   Graph_g_totErr3163->SetMinimum(-886.095);
   Graph_g_totErr3163->SetMaximum(9277.048);
   Graph_g_totErr3163->SetDirectory(0);
   Graph_g_totErr3163->SetStats(0);
   Graph_g_totErr3163->SetLineWidth(2);
   Graph_g_totErr3163->SetMarkerStyle(20);
   Graph_g_totErr3163->SetMarkerSize(1.2);
   Graph_g_totErr3163->GetXaxis()->SetLabelFont(43);
   Graph_g_totErr3163->GetXaxis()->SetLabelSize(21);
   Graph_g_totErr3163->GetXaxis()->SetTitleSize(21);
   Graph_g_totErr3163->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_totErr3163->GetXaxis()->SetTitleFont(43);
   Graph_g_totErr3163->GetYaxis()->SetLabelFont(43);
   Graph_g_totErr3163->GetYaxis()->SetLabelSize(21);
   Graph_g_totErr3163->GetYaxis()->SetTitleSize(21);
   Graph_g_totErr3163->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_totErr3163->GetYaxis()->SetTitleFont(43);
   Graph_g_totErr3163->GetZaxis()->SetLabelFont(43);
   Graph_g_totErr3163->GetZaxis()->SetLabelSize(21);
   Graph_g_totErr3163->GetZaxis()->SetTitleSize(21);
   Graph_g_totErr3163->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_totErr3163);
   
   grae->Draw("e2");
   
   Double_t Graph_from_c1lep6jin3bex_jets_n_Data_fx3164[4] = {
   4,
   5,
   6,
   7};
   Double_t Graph_from_c1lep6jin3bex_jets_n_Data_fy3164[4] = {
   0,
   0,
   7905,
   4131};
   Double_t Graph_from_c1lep6jin3bex_jets_n_Data_felx3164[4] = {
   0.499,
   0.499,
   0.499,
   0.499};
   Double_t Graph_from_c1lep6jin3bex_jets_n_Data_fely3164[4] = {
   0,
   0,
   88.91007,
   64.27286};
   Double_t Graph_from_c1lep6jin3bex_jets_n_Data_fehx3164[4] = {
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t Graph_from_c1lep6jin3bex_jets_n_Data_fehy3164[4] = {
   0,
   0,
   88.91007,
   64.27286};
   grae = new TGraphAsymmErrors(4,Graph_from_c1lep6jin3bex_jets_n_Data_fx3164,Graph_from_c1lep6jin3bex_jets_n_Data_fy3164,Graph_from_c1lep6jin3bex_jets_n_Data_felx3164,Graph_from_c1lep6jin3bex_jets_n_Data_fehx3164,Graph_from_c1lep6jin3bex_jets_n_Data_fely3164,Graph_from_c1lep6jin3bex_jets_n_Data_fehy3164);
   grae->SetName("Graph_from_c1lep6jin3bex_jets_n_Data");
   grae->SetTitle("");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_c1lep6jin3bex_jets_n_Data3164 = new TH1F("Graph_Graph_from_c1lep6jin3bex_jets_n_Data3164","",100,3.1011,7.8999);
   Graph_Graph_from_c1lep6jin3bex_jets_n_Data3164->SetMinimum(0);
   Graph_Graph_from_c1lep6jin3bex_jets_n_Data3164->SetMaximum(8793.301);
   Graph_Graph_from_c1lep6jin3bex_jets_n_Data3164->SetDirectory(0);
   Graph_Graph_from_c1lep6jin3bex_jets_n_Data3164->SetStats(0);
   Graph_Graph_from_c1lep6jin3bex_jets_n_Data3164->SetLineWidth(2);
   Graph_Graph_from_c1lep6jin3bex_jets_n_Data3164->SetMarkerStyle(20);
   Graph_Graph_from_c1lep6jin3bex_jets_n_Data3164->SetMarkerSize(1.2);
   Graph_Graph_from_c1lep6jin3bex_jets_n_Data3164->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep6jin3bex_jets_n_Data3164->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep6jin3bex_jets_n_Data3164->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep6jin3bex_jets_n_Data3164->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep6jin3bex_jets_n_Data3164->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep6jin3bex_jets_n_Data3164->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep6jin3bex_jets_n_Data3164->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep6jin3bex_jets_n_Data3164->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep6jin3bex_jets_n_Data3164->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep6jin3bex_jets_n_Data3164->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep6jin3bex_jets_n_Data3164->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep6jin3bex_jets_n_Data3164->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep6jin3bex_jets_n_Data3164->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep6jin3bex_jets_n_Data3164->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_c1lep6jin3bex_jets_n_Data3164);
   
   grae->Draw("ep1 ");
   Double_t xAxis410[5] = {3.5, 4.5, 5.5, 6.5, 7.5}; 
   
   TH1D *h_dummy_copy__369 = new TH1D("h_dummy_copy__369","",4, xAxis410);
   h_dummy_copy__369->SetEntries(1164538);
   h_dummy_copy__369->SetDirectory(0);
   h_dummy_copy__369->SetStats(0);
   h_dummy_copy__369->SetMarkerStyle(20);
   h_dummy_copy__369->SetMarkerSize(1.2);
   h_dummy_copy__369->GetXaxis()->SetTitle("N_{j}");
   h_dummy_copy__369->GetXaxis()->SetRange(1,18);
   h_dummy_copy__369->GetXaxis()->SetLabelFont(43);
   h_dummy_copy__369->GetXaxis()->SetLabelSize(21);
   h_dummy_copy__369->GetXaxis()->SetTitleSize(21);
   h_dummy_copy__369->GetXaxis()->SetTitleOffset(1.4);
   h_dummy_copy__369->GetXaxis()->SetTitleFont(43);
   h_dummy_copy__369->GetYaxis()->SetTitle("Events");
   h_dummy_copy__369->GetYaxis()->SetLabelFont(43);
   h_dummy_copy__369->GetYaxis()->SetLabelSize(16.8);
   h_dummy_copy__369->GetYaxis()->SetTitleSize(21);
   h_dummy_copy__369->GetYaxis()->SetTitleOffset(2.4);
   h_dummy_copy__369->GetYaxis()->SetTitleFont(43);
   h_dummy_copy__369->GetZaxis()->SetLabelFont(43);
   h_dummy_copy__369->GetZaxis()->SetLabelSize(21);
   h_dummy_copy__369->GetZaxis()->SetTitleSize(21);
   h_dummy_copy__369->GetZaxis()->SetTitleFont(43);
   h_dummy_copy__369->Draw("sameaxis");
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
   TLegendEntry *entry=leg->AddEntry("c1lep6jin3bex_jets_n_Data","Data","lep");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep6jin3bex_jets_n_uHcW","t#rightarrow Hc","f");
   entry->SetFillColor(2);
   entry->SetFillStyle(1001);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep6jin3bex_jets_n_ttbarlight","t#bar{t}+light","f");
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep6jin3bex_jets_n_ttbarcc","t#bar{t}+cc","f");

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
   entry=leg->AddEntry("c1lep6jin3bex_jets_n_ttbarbb","t#bar{t}+bb","f");

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
   entry=leg->AddEntry("c1lep6jin3bex_jets_n_topEW","Non-t#bar{t}","f");

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
   c_c1lep6jin3bex_jets_n->cd();
   c_c1lep6jin3bex_jets_n->Modified();
   c_c1lep6jin3bex_jets_n->cd();
   c_c1lep6jin3bex_jets_n->SetSelected(c_c1lep6jin3bex_jets_n);
}
