void c1lep4jex3bex_mtw()
{
//=========Macro generated from canvas: c_c1lep4jex3bex_mtw/c_c1lep4jex3bex_mtw
//=========  (Thu Jul 19 17:38:05 2018) by ROOT version6.04/14
   TCanvas *c_c1lep4jex3bex_mtw = new TCanvas("c_c1lep4jex3bex_mtw", "c_c1lep4jex3bex_mtw",0,0,600,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c_c1lep4jex3bex_mtw->SetHighLightColor(2);
   c_c1lep4jex3bex_mtw->Range(0,0,1,1);
   c_c1lep4jex3bex_mtw->SetFillColor(0);
   c_c1lep4jex3bex_mtw->SetBorderMode(0);
   c_c1lep4jex3bex_mtw->SetBorderSize(2);
   c_c1lep4jex3bex_mtw->SetTickx(1);
   c_c1lep4jex3bex_mtw->SetTicky(1);
   c_c1lep4jex3bex_mtw->SetLeftMargin(0.16);
   c_c1lep4jex3bex_mtw->SetRightMargin(0.05);
   c_c1lep4jex3bex_mtw->SetTopMargin(0.05);
   c_c1lep4jex3bex_mtw->SetBottomMargin(0.16);
   c_c1lep4jex3bex_mtw->SetFrameBorderMode(0);
  
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
   Double_t xAxis221[5] = {0, 50, 100, 150, 200}; 
   
   TH1D *h_dummy2__199 = new TH1D("h_dummy2__199","Data/MC",4, xAxis221);
   h_dummy2__199->SetMinimum(0.5);
   h_dummy2__199->SetMaximum(1.5);
   h_dummy2__199->SetEntries(2920944);
   h_dummy2__199->SetDirectory(0);
   h_dummy2__199->SetStats(0);
   h_dummy2__199->SetMarkerStyle(20);
   h_dummy2__199->SetMarkerSize(1.2);
   h_dummy2__199->GetXaxis()->SetTitle("m_{T}^{W} [GeV]");
   h_dummy2__199->GetXaxis()->SetRange(1,25);
   h_dummy2__199->GetXaxis()->SetLabelFont(43);
   h_dummy2__199->GetXaxis()->SetLabelOffset(0.025);
   h_dummy2__199->GetXaxis()->SetLabelSize(16.8);
   h_dummy2__199->GetXaxis()->SetTitleSize(21);
   h_dummy2__199->GetXaxis()->SetTitleOffset(5.05);
   h_dummy2__199->GetXaxis()->SetTitleFont(43);
   h_dummy2__199->GetYaxis()->SetTitle("Data / Bkg");
   h_dummy2__199->GetYaxis()->SetNdivisions(-504);
   h_dummy2__199->GetYaxis()->SetLabelFont(43);
   h_dummy2__199->GetYaxis()->SetLabelOffset(0.02);
   h_dummy2__199->GetYaxis()->SetLabelSize(16.8);
   h_dummy2__199->GetYaxis()->SetTitleSize(21);
   h_dummy2__199->GetYaxis()->SetTitleOffset(2.4);
   h_dummy2__199->GetYaxis()->SetTitleFont(43);
   h_dummy2__199->GetZaxis()->SetLabelFont(43);
   h_dummy2__199->GetZaxis()->SetLabelSize(21);
   h_dummy2__199->GetZaxis()->SetTitleSize(21);
   h_dummy2__199->GetZaxis()->SetTitleFont(43);
   h_dummy2__199->Draw("HIST");
   
   Double_t Graph_from_h_ratio_fx3089[4] = {
   25,
   75,
   125,
   175};
   Double_t Graph_from_h_ratio_fy3089[4] = {
   1.0343,
   1.154062,
   1.056899,
   1.120614};
   Double_t Graph_from_h_ratio_felx3089[4] = {
   24.95,
   24.95,
   24.95,
   24.95};
   Double_t Graph_from_h_ratio_fely3089[4] = {
   0.01966264,
   0.01354723,
   0.03606092,
   0.0742145};
   Double_t Graph_from_h_ratio_fehx3089[4] = {
   25,
   25,
   25,
   25};
   Double_t Graph_from_h_ratio_fehy3089[4] = {
   0.01966264,
   0.01354723,
   0.03606092,
   0.0742145};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(4,Graph_from_h_ratio_fx3089,Graph_from_h_ratio_fy3089,Graph_from_h_ratio_felx3089,Graph_from_h_ratio_fehx3089,Graph_from_h_ratio_fely3089,Graph_from_h_ratio_fehy3089);
   grae->SetName("Graph_from_h_ratio");
   grae->SetTitle("");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(24);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_h_ratio3089 = new TH1F("Graph_Graph_from_h_ratio3089","",100,0,219.995);
   Graph_Graph_from_h_ratio3089->SetMinimum(0.9966181);
   Graph_Graph_from_h_ratio3089->SetMaximum(1.212848);
   Graph_Graph_from_h_ratio3089->SetDirectory(0);
   Graph_Graph_from_h_ratio3089->SetStats(0);
   Graph_Graph_from_h_ratio3089->SetLineWidth(2);
   Graph_Graph_from_h_ratio3089->SetMarkerStyle(20);
   Graph_Graph_from_h_ratio3089->SetMarkerSize(1.2);
   Graph_Graph_from_h_ratio3089->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3089->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3089->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3089->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3089->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3089->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3089->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3089->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3089->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3089->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3089->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3089->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3089->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3089->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_h_ratio3089);
   
   grae->Draw("pe0");
   TLine *line = new TLine(0,1,200,1);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t g_ratio2_fx3090[4] = {
   25,
   75,
   125,
   175};
   Double_t g_ratio2_fy3090[4] = {
   1,
   1,
   1,
   1};
   Double_t g_ratio2_felx3090[4] = {
   25,
   25,
   25,
   25};
   Double_t g_ratio2_fely3090[4] = {
   0.1786959,
   0.2067141,
   0.172792,
   0.1966021};
   Double_t g_ratio2_fehx3090[4] = {
   25,
   25,
   25,
   25};
   Double_t g_ratio2_fehy3090[4] = {
   0.1786959,
   0.2067141,
   0.172792,
   0.1966021};
   grae = new TGraphAsymmErrors(4,g_ratio2_fx3090,g_ratio2_fy3090,g_ratio2_felx3090,g_ratio2_fehx3090,g_ratio2_fely3090,g_ratio2_fehy3090);
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
   
   TH1F *Graph_g_ratio23090 = new TH1F("Graph_g_ratio23090","",100,0,220);
   Graph_g_ratio23090->SetMinimum(0.7519431);
   Graph_g_ratio23090->SetMaximum(1.248057);
   Graph_g_ratio23090->SetDirectory(0);
   Graph_g_ratio23090->SetStats(0);
   Graph_g_ratio23090->SetLineWidth(2);
   Graph_g_ratio23090->SetMarkerStyle(20);
   Graph_g_ratio23090->SetMarkerSize(1.2);
   Graph_g_ratio23090->GetXaxis()->SetLabelFont(43);
   Graph_g_ratio23090->GetXaxis()->SetLabelSize(21);
   Graph_g_ratio23090->GetXaxis()->SetTitleSize(21);
   Graph_g_ratio23090->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23090->GetXaxis()->SetTitleFont(43);
   Graph_g_ratio23090->GetYaxis()->SetLabelFont(43);
   Graph_g_ratio23090->GetYaxis()->SetLabelSize(21);
   Graph_g_ratio23090->GetYaxis()->SetTitleSize(21);
   Graph_g_ratio23090->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23090->GetYaxis()->SetTitleFont(43);
   Graph_g_ratio23090->GetZaxis()->SetLabelFont(43);
   Graph_g_ratio23090->GetZaxis()->SetLabelSize(21);
   Graph_g_ratio23090->GetZaxis()->SetTitleSize(21);
   Graph_g_ratio23090->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_ratio23090);
   
   grae->Draw("e2");
   Double_t xAxis222[5] = {0, 50, 100, 150, 200}; 
   
   TH1D *h_dummy2_copy__200 = new TH1D("h_dummy2_copy__200","Data/MC",4, xAxis222);
   h_dummy2_copy__200->SetMinimum(0.5);
   h_dummy2_copy__200->SetMaximum(1.5);
   h_dummy2_copy__200->SetEntries(2920944);
   h_dummy2_copy__200->SetDirectory(0);
   h_dummy2_copy__200->SetStats(0);
   h_dummy2_copy__200->SetMarkerStyle(20);
   h_dummy2_copy__200->SetMarkerSize(1.2);
   h_dummy2_copy__200->GetXaxis()->SetTitle("m_{T}^{W} [GeV]");
   h_dummy2_copy__200->GetXaxis()->SetRange(1,25);
   h_dummy2_copy__200->GetXaxis()->SetLabelFont(43);
   h_dummy2_copy__200->GetXaxis()->SetLabelOffset(0.025);
   h_dummy2_copy__200->GetXaxis()->SetLabelSize(16.8);
   h_dummy2_copy__200->GetXaxis()->SetTitleSize(21);
   h_dummy2_copy__200->GetXaxis()->SetTitleOffset(5.05);
   h_dummy2_copy__200->GetXaxis()->SetTitleFont(43);
   h_dummy2_copy__200->GetYaxis()->SetTitle("Data / Bkg");
   h_dummy2_copy__200->GetYaxis()->SetNdivisions(-504);
   h_dummy2_copy__200->GetYaxis()->SetLabelFont(43);
   h_dummy2_copy__200->GetYaxis()->SetLabelOffset(0.02);
   h_dummy2_copy__200->GetYaxis()->SetLabelSize(16.8);
   h_dummy2_copy__200->GetYaxis()->SetTitleSize(21);
   h_dummy2_copy__200->GetYaxis()->SetTitleOffset(2.4);
   h_dummy2_copy__200->GetYaxis()->SetTitleFont(43);
   h_dummy2_copy__200->GetZaxis()->SetLabelFont(43);
   h_dummy2_copy__200->GetZaxis()->SetLabelSize(21);
   h_dummy2_copy__200->GetZaxis()->SetTitleSize(21);
   h_dummy2_copy__200->GetZaxis()->SetTitleFont(43);
   h_dummy2_copy__200->Draw("sameaxis");
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
   c_c1lep4jex3bex_mtw->cd();
  
// ------------>Primitives in pad: pad0
   TPad *pad0 = new TPad("pad0", "pad0",0,0.2,1,1);
   pad0->Draw();
   pad0->cd();
   pad0->Range(-34.5679,-1554.816,212.3457,13993.35);
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
   Double_t xAxis223[5] = {0, 50, 100, 150, 200}; 
   
   TH1D *h_dummy__201 = new TH1D("h_dummy__201","",4, xAxis223);
   h_dummy__201->SetMinimum(0);
   h_dummy__201->SetMaximum(13215.94);
   h_dummy__201->SetEntries(2920944);
   h_dummy__201->SetDirectory(0);
   h_dummy__201->SetStats(0);
   h_dummy__201->SetMarkerStyle(20);
   h_dummy__201->SetMarkerSize(1.2);
   h_dummy__201->GetXaxis()->SetRange(1,25);
   h_dummy__201->GetXaxis()->SetLabelFont(43);
   h_dummy__201->GetXaxis()->SetLabelSize(0);
   h_dummy__201->GetXaxis()->SetTitleSize(21);
   h_dummy__201->GetXaxis()->SetTitleOffset(1.4);
   h_dummy__201->GetXaxis()->SetTitleFont(43);
   h_dummy__201->GetYaxis()->SetTitle("Events / 50 GeV");
   h_dummy__201->GetYaxis()->SetLabelFont(43);
   h_dummy__201->GetYaxis()->SetLabelSize(16.8);
   h_dummy__201->GetYaxis()->SetTitleSize(21);
   h_dummy__201->GetYaxis()->SetTitleOffset(2.4);
   h_dummy__201->GetYaxis()->SetTitleFont(43);
   h_dummy__201->GetZaxis()->SetLabelFont(43);
   h_dummy__201->GetZaxis()->SetLabelSize(21);
   h_dummy__201->GetZaxis()->SetTitleSize(21);
   h_dummy__201->GetZaxis()->SetTitleFont(43);
   h_dummy__201->Draw("HIST");
   
   THStack *h_stack = new THStack();
   h_stack->SetName("h_stack");
   h_stack->SetTitle("h_stack");
   Double_t xAxis224[5] = {0, 50, 100, 150, 200}; 
   
   TH1F *h_stack_stack_23 = new TH1F("h_stack_stack_23","h_stack",4, xAxis224);
   h_stack_stack_23->SetMinimum(0);
   h_stack_stack_23->SetMaximum(7546.505);
   h_stack_stack_23->SetDirectory(0);
   h_stack_stack_23->SetStats(0);
   h_stack_stack_23->SetLineWidth(2);
   h_stack_stack_23->SetMarkerStyle(20);
   h_stack_stack_23->SetMarkerSize(1.2);
   h_stack_stack_23->GetXaxis()->SetLabelFont(43);
   h_stack_stack_23->GetXaxis()->SetLabelSize(21);
   h_stack_stack_23->GetXaxis()->SetTitleSize(21);
   h_stack_stack_23->GetXaxis()->SetTitleOffset(1.4);
   h_stack_stack_23->GetXaxis()->SetTitleFont(43);
   h_stack_stack_23->GetYaxis()->SetLabelFont(43);
   h_stack_stack_23->GetYaxis()->SetLabelSize(21);
   h_stack_stack_23->GetYaxis()->SetTitleSize(21);
   h_stack_stack_23->GetYaxis()->SetTitleOffset(1.4);
   h_stack_stack_23->GetYaxis()->SetTitleFont(43);
   h_stack_stack_23->GetZaxis()->SetLabelFont(43);
   h_stack_stack_23->GetZaxis()->SetLabelSize(21);
   h_stack_stack_23->GetZaxis()->SetTitleSize(21);
   h_stack_stack_23->GetZaxis()->SetTitleFont(43);
   h_stack->SetHistogram(h_stack_stack_23);
   
   Double_t xAxis225[5] = {0, 50, 100, 150, 200}; 
   
   TH1D *c1lep4jex3bex_mtw_topEW__202 = new TH1D("c1lep4jex3bex_mtw_topEW__202","",4, xAxis225);
   c1lep4jex3bex_mtw_topEW__202->SetBinContent(1,710.2165);
   c1lep4jex3bex_mtw_topEW__202->SetBinContent(2,875.0419);
   c1lep4jex3bex_mtw_topEW__202->SetBinContent(3,198.3185);
   c1lep4jex3bex_mtw_topEW__202->SetBinContent(4,20.33049);
   c1lep4jex3bex_mtw_topEW__202->SetBinContent(5,31.60936);
   c1lep4jex3bex_mtw_topEW__202->SetBinError(1,64.55328);
   c1lep4jex3bex_mtw_topEW__202->SetBinError(2,53.30802);
   c1lep4jex3bex_mtw_topEW__202->SetBinError(3,32.37741);
   c1lep4jex3bex_mtw_topEW__202->SetBinError(4,2.154546);
   c1lep4jex3bex_mtw_topEW__202->SetBinError(5,11.53343);
   c1lep4jex3bex_mtw_topEW__202->SetEntries(2895038);
   c1lep4jex3bex_mtw_topEW__202->SetDirectory(0);
   c1lep4jex3bex_mtw_topEW__202->SetStats(0);

   ci = TColor::GetColor("#66cc66");
   c1lep4jex3bex_mtw_topEW__202->SetFillColor(ci);
   c1lep4jex3bex_mtw_topEW__202->SetMarkerStyle(20);
   c1lep4jex3bex_mtw_topEW__202->SetMarkerSize(1.2);
   c1lep4jex3bex_mtw_topEW__202->GetXaxis()->SetTitle("m_{T}(W) [GeV]");
   c1lep4jex3bex_mtw_topEW__202->GetXaxis()->SetRange(1,25);
   c1lep4jex3bex_mtw_topEW__202->GetXaxis()->SetLabelFont(43);
   c1lep4jex3bex_mtw_topEW__202->GetXaxis()->SetLabelSize(21);
   c1lep4jex3bex_mtw_topEW__202->GetXaxis()->SetTitleSize(21);
   c1lep4jex3bex_mtw_topEW__202->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_mtw_topEW__202->GetXaxis()->SetTitleFont(43);
   c1lep4jex3bex_mtw_topEW__202->GetYaxis()->SetLabelFont(43);
   c1lep4jex3bex_mtw_topEW__202->GetYaxis()->SetLabelSize(21);
   c1lep4jex3bex_mtw_topEW__202->GetYaxis()->SetTitleSize(21);
   c1lep4jex3bex_mtw_topEW__202->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_mtw_topEW__202->GetYaxis()->SetTitleFont(43);
   c1lep4jex3bex_mtw_topEW__202->GetZaxis()->SetLabelFont(43);
   c1lep4jex3bex_mtw_topEW__202->GetZaxis()->SetLabelSize(21);
   c1lep4jex3bex_mtw_topEW__202->GetZaxis()->SetTitleSize(21);
   c1lep4jex3bex_mtw_topEW__202->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jex3bex_mtw_topEW,"");
   Double_t xAxis226[5] = {0, 50, 100, 150, 200}; 
   
   TH1D *c1lep4jex3bex_mtw_ttbarbb__203 = new TH1D("c1lep4jex3bex_mtw_ttbarbb__203","",4, xAxis226);
   c1lep4jex3bex_mtw_ttbarbb__203->SetBinContent(1,666.4924);
   c1lep4jex3bex_mtw_ttbarbb__203->SetBinContent(2,1751.849);
   c1lep4jex3bex_mtw_ttbarbb__203->SetBinContent(3,300.0655);
   c1lep4jex3bex_mtw_ttbarbb__203->SetBinContent(4,109.7017);
   c1lep4jex3bex_mtw_ttbarbb__203->SetBinContent(5,68.50712);
   c1lep4jex3bex_mtw_ttbarbb__203->SetBinError(1,16.94048);
   c1lep4jex3bex_mtw_ttbarbb__203->SetBinError(2,27.20965);
   c1lep4jex3bex_mtw_ttbarbb__203->SetBinError(3,11.82934);
   c1lep4jex3bex_mtw_ttbarbb__203->SetBinError(4,7.362086);
   c1lep4jex3bex_mtw_ttbarbb__203->SetBinError(5,5.049591);
   c1lep4jex3bex_mtw_ttbarbb__203->SetEntries(10166);
   c1lep4jex3bex_mtw_ttbarbb__203->SetDirectory(0);
   c1lep4jex3bex_mtw_ttbarbb__203->SetStats(0);

   ci = TColor::GetColor("#6666cc");
   c1lep4jex3bex_mtw_ttbarbb__203->SetFillColor(ci);
   c1lep4jex3bex_mtw_ttbarbb__203->SetMarkerStyle(20);
   c1lep4jex3bex_mtw_ttbarbb__203->SetMarkerSize(1.2);
   c1lep4jex3bex_mtw_ttbarbb__203->GetXaxis()->SetTitle("m_{T}(W) [GeV]");
   c1lep4jex3bex_mtw_ttbarbb__203->GetXaxis()->SetRange(1,25);
   c1lep4jex3bex_mtw_ttbarbb__203->GetXaxis()->SetLabelFont(43);
   c1lep4jex3bex_mtw_ttbarbb__203->GetXaxis()->SetLabelSize(21);
   c1lep4jex3bex_mtw_ttbarbb__203->GetXaxis()->SetTitleSize(21);
   c1lep4jex3bex_mtw_ttbarbb__203->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_mtw_ttbarbb__203->GetXaxis()->SetTitleFont(43);
   c1lep4jex3bex_mtw_ttbarbb__203->GetYaxis()->SetLabelFont(43);
   c1lep4jex3bex_mtw_ttbarbb__203->GetYaxis()->SetLabelSize(21);
   c1lep4jex3bex_mtw_ttbarbb__203->GetYaxis()->SetTitleSize(21);
   c1lep4jex3bex_mtw_ttbarbb__203->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_mtw_ttbarbb__203->GetYaxis()->SetTitleFont(43);
   c1lep4jex3bex_mtw_ttbarbb__203->GetZaxis()->SetLabelFont(43);
   c1lep4jex3bex_mtw_ttbarbb__203->GetZaxis()->SetLabelSize(21);
   c1lep4jex3bex_mtw_ttbarbb__203->GetZaxis()->SetTitleSize(21);
   c1lep4jex3bex_mtw_ttbarbb__203->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jex3bex_mtw_ttbarbb,"");
   Double_t xAxis227[5] = {0, 50, 100, 150, 200}; 
   
   TH1D *c1lep4jex3bex_mtw_ttbarcc__204 = new TH1D("c1lep4jex3bex_mtw_ttbarcc__204","",4, xAxis227);
   c1lep4jex3bex_mtw_ttbarcc__204->SetBinContent(1,251.8964);
   c1lep4jex3bex_mtw_ttbarcc__204->SetBinContent(2,690.4622);
   c1lep4jex3bex_mtw_ttbarcc__204->SetBinContent(3,75.55918);
   c1lep4jex3bex_mtw_ttbarcc__204->SetBinContent(4,22.09529);
   c1lep4jex3bex_mtw_ttbarcc__204->SetBinContent(5,12.63717);
   c1lep4jex3bex_mtw_ttbarcc__204->SetBinError(1,11.09581);
   c1lep4jex3bex_mtw_ttbarcc__204->SetBinError(2,16.83004);
   c1lep4jex3bex_mtw_ttbarcc__204->SetBinError(3,5.893462);
   c1lep4jex3bex_mtw_ttbarcc__204->SetBinError(4,3.464618);
   c1lep4jex3bex_mtw_ttbarcc__204->SetBinError(5,2.004654);
   c1lep4jex3bex_mtw_ttbarcc__204->SetEntries(3206);
   c1lep4jex3bex_mtw_ttbarcc__204->SetDirectory(0);
   c1lep4jex3bex_mtw_ttbarcc__204->SetStats(0);

   ci = TColor::GetColor("#ccccff");
   c1lep4jex3bex_mtw_ttbarcc__204->SetFillColor(ci);
   c1lep4jex3bex_mtw_ttbarcc__204->SetMarkerStyle(20);
   c1lep4jex3bex_mtw_ttbarcc__204->SetMarkerSize(1.2);
   c1lep4jex3bex_mtw_ttbarcc__204->GetXaxis()->SetTitle("m_{T}(W) [GeV]");
   c1lep4jex3bex_mtw_ttbarcc__204->GetXaxis()->SetRange(1,25);
   c1lep4jex3bex_mtw_ttbarcc__204->GetXaxis()->SetLabelFont(43);
   c1lep4jex3bex_mtw_ttbarcc__204->GetXaxis()->SetLabelSize(21);
   c1lep4jex3bex_mtw_ttbarcc__204->GetXaxis()->SetTitleSize(21);
   c1lep4jex3bex_mtw_ttbarcc__204->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_mtw_ttbarcc__204->GetXaxis()->SetTitleFont(43);
   c1lep4jex3bex_mtw_ttbarcc__204->GetYaxis()->SetLabelFont(43);
   c1lep4jex3bex_mtw_ttbarcc__204->GetYaxis()->SetLabelSize(21);
   c1lep4jex3bex_mtw_ttbarcc__204->GetYaxis()->SetTitleSize(21);
   c1lep4jex3bex_mtw_ttbarcc__204->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_mtw_ttbarcc__204->GetYaxis()->SetTitleFont(43);
   c1lep4jex3bex_mtw_ttbarcc__204->GetZaxis()->SetLabelFont(43);
   c1lep4jex3bex_mtw_ttbarcc__204->GetZaxis()->SetLabelSize(21);
   c1lep4jex3bex_mtw_ttbarcc__204->GetZaxis()->SetTitleSize(21);
   c1lep4jex3bex_mtw_ttbarcc__204->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jex3bex_mtw_ttbarcc,"");
   Double_t xAxis228[5] = {0, 50, 100, 150, 200}; 
   
   TH1D *c1lep4jex3bex_mtw_ttbarlight__205 = new TH1D("c1lep4jex3bex_mtw_ttbarlight__205","",4, xAxis228);
   c1lep4jex3bex_mtw_ttbarlight__205->SetBinContent(1,1046.634);
   c1lep4jex3bex_mtw_ttbarlight__205->SetBinContent(2,2970.872);
   c1lep4jex3bex_mtw_ttbarlight__205->SetBinContent(3,238.8122);
   c1lep4jex3bex_mtw_ttbarlight__205->SetBinContent(4,51.3324);
   c1lep4jex3bex_mtw_ttbarlight__205->SetBinContent(5,28.91625);
   c1lep4jex3bex_mtw_ttbarlight__205->SetBinError(1,22.82338);
   c1lep4jex3bex_mtw_ttbarlight__205->SetBinError(2,39.90508);
   c1lep4jex3bex_mtw_ttbarlight__205->SetBinError(3,12.6884);
   c1lep4jex3bex_mtw_ttbarlight__205->SetBinError(4,4.94811);
   c1lep4jex3bex_mtw_ttbarlight__205->SetBinError(5,4.322555);
   c1lep4jex3bex_mtw_ttbarlight__205->SetEntries(12530);
   c1lep4jex3bex_mtw_ttbarlight__205->SetDirectory(0);
   c1lep4jex3bex_mtw_ttbarlight__205->SetStats(0);
   c1lep4jex3bex_mtw_ttbarlight__205->SetMarkerStyle(20);
   c1lep4jex3bex_mtw_ttbarlight__205->SetMarkerSize(1.2);
   c1lep4jex3bex_mtw_ttbarlight__205->GetXaxis()->SetTitle("m_{T}(W) [GeV]");
   c1lep4jex3bex_mtw_ttbarlight__205->GetXaxis()->SetRange(1,25);
   c1lep4jex3bex_mtw_ttbarlight__205->GetXaxis()->SetLabelFont(43);
   c1lep4jex3bex_mtw_ttbarlight__205->GetXaxis()->SetLabelSize(21);
   c1lep4jex3bex_mtw_ttbarlight__205->GetXaxis()->SetTitleSize(21);
   c1lep4jex3bex_mtw_ttbarlight__205->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_mtw_ttbarlight__205->GetXaxis()->SetTitleFont(43);
   c1lep4jex3bex_mtw_ttbarlight__205->GetYaxis()->SetLabelFont(43);
   c1lep4jex3bex_mtw_ttbarlight__205->GetYaxis()->SetLabelSize(21);
   c1lep4jex3bex_mtw_ttbarlight__205->GetYaxis()->SetTitleSize(21);
   c1lep4jex3bex_mtw_ttbarlight__205->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_mtw_ttbarlight__205->GetYaxis()->SetTitleFont(43);
   c1lep4jex3bex_mtw_ttbarlight__205->GetZaxis()->SetLabelFont(43);
   c1lep4jex3bex_mtw_ttbarlight__205->GetZaxis()->SetLabelSize(21);
   c1lep4jex3bex_mtw_ttbarlight__205->GetZaxis()->SetTitleSize(21);
   c1lep4jex3bex_mtw_ttbarlight__205->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jex3bex_mtw_ttbarlight,"");
   Double_t xAxis229[5] = {0, 50, 100, 150, 200}; 
   
   TH1D *c1lep4jex3bex_mtw_uHcW__206 = new TH1D("c1lep4jex3bex_mtw_uHcW__206","",4, xAxis229);
   c1lep4jex3bex_mtw_uHcW__206->SetBinContent(1,286.8174);
   c1lep4jex3bex_mtw_uHcW__206->SetBinContent(2,898.9225);
   c1lep4jex3bex_mtw_uHcW__206->SetBinContent(3,61.21509);
   c1lep4jex3bex_mtw_uHcW__206->SetBinContent(4,9.10947);
   c1lep4jex3bex_mtw_uHcW__206->SetBinContent(5,5.080971);
   c1lep4jex3bex_mtw_uHcW__206->SetBinError(1,15.55643);
   c1lep4jex3bex_mtw_uHcW__206->SetBinError(2,27.58337);
   c1lep4jex3bex_mtw_uHcW__206->SetBinError(3,7.561282);
   c1lep4jex3bex_mtw_uHcW__206->SetBinError(4,2.60864);
   c1lep4jex3bex_mtw_uHcW__206->SetBinError(5,1.65041);
   c1lep4jex3bex_mtw_uHcW__206->SetEntries(5559);
   c1lep4jex3bex_mtw_uHcW__206->SetDirectory(0);
   c1lep4jex3bex_mtw_uHcW__206->SetStats(0);
   c1lep4jex3bex_mtw_uHcW__206->SetFillColor(2);
   c1lep4jex3bex_mtw_uHcW__206->SetLineColor(2);
   c1lep4jex3bex_mtw_uHcW__206->SetMarkerStyle(20);
   c1lep4jex3bex_mtw_uHcW__206->SetMarkerSize(1.2);
   c1lep4jex3bex_mtw_uHcW__206->GetXaxis()->SetTitle("m_{T}(W) [GeV]");
   c1lep4jex3bex_mtw_uHcW__206->GetXaxis()->SetRange(1,25);
   c1lep4jex3bex_mtw_uHcW__206->GetXaxis()->SetLabelFont(43);
   c1lep4jex3bex_mtw_uHcW__206->GetXaxis()->SetLabelSize(21);
   c1lep4jex3bex_mtw_uHcW__206->GetXaxis()->SetTitleSize(21);
   c1lep4jex3bex_mtw_uHcW__206->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_mtw_uHcW__206->GetXaxis()->SetTitleFont(43);
   c1lep4jex3bex_mtw_uHcW__206->GetYaxis()->SetLabelFont(43);
   c1lep4jex3bex_mtw_uHcW__206->GetYaxis()->SetLabelSize(21);
   c1lep4jex3bex_mtw_uHcW__206->GetYaxis()->SetTitleSize(21);
   c1lep4jex3bex_mtw_uHcW__206->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_mtw_uHcW__206->GetYaxis()->SetTitleFont(43);
   c1lep4jex3bex_mtw_uHcW__206->GetZaxis()->SetLabelFont(43);
   c1lep4jex3bex_mtw_uHcW__206->GetZaxis()->SetLabelSize(21);
   c1lep4jex3bex_mtw_uHcW__206->GetZaxis()->SetTitleSize(21);
   c1lep4jex3bex_mtw_uHcW__206->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jex3bex_mtw_uHcW,"");
   h_stack->Draw("hist same");
   
   Double_t g_totErr_fx3091[4] = {
   25,
   75,
   125,
   175};
   Double_t g_totErr_fy3091[4] = {
   2675.24,
   6288.225,
   812.7553,
   203.4598};
   Double_t g_totErr_felx3091[4] = {
   25,
   25,
   25,
   25};
   Double_t g_totErr_fely3091[4] = {
   478.0544,
   1299.865,
   140.4376,
   40.00063};
   Double_t g_totErr_fehx3091[4] = {
   25,
   25,
   25,
   25};
   Double_t g_totErr_fehy3091[4] = {
   478.0544,
   1299.865,
   140.4376,
   40.00063};
   grae = new TGraphAsymmErrors(4,g_totErr_fx3091,g_totErr_fy3091,g_totErr_felx3091,g_totErr_fehx3091,g_totErr_fely3091,g_totErr_fehy3091);
   grae->SetName("g_totErr");
   grae->SetTitle("");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(3354);
   grae->SetLineColor(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0);
   
   TH1F *Graph_g_totErr3091 = new TH1F("Graph_g_totErr3091","",100,0,220);
   Graph_g_totErr3091->SetMinimum(0);
   Graph_g_totErr3091->SetMaximum(8330.552);
   Graph_g_totErr3091->SetDirectory(0);
   Graph_g_totErr3091->SetStats(0);
   Graph_g_totErr3091->SetLineWidth(2);
   Graph_g_totErr3091->SetMarkerStyle(20);
   Graph_g_totErr3091->SetMarkerSize(1.2);
   Graph_g_totErr3091->GetXaxis()->SetLabelFont(43);
   Graph_g_totErr3091->GetXaxis()->SetLabelSize(21);
   Graph_g_totErr3091->GetXaxis()->SetTitleSize(21);
   Graph_g_totErr3091->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_totErr3091->GetXaxis()->SetTitleFont(43);
   Graph_g_totErr3091->GetYaxis()->SetLabelFont(43);
   Graph_g_totErr3091->GetYaxis()->SetLabelSize(21);
   Graph_g_totErr3091->GetYaxis()->SetTitleSize(21);
   Graph_g_totErr3091->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_totErr3091->GetYaxis()->SetTitleFont(43);
   Graph_g_totErr3091->GetZaxis()->SetLabelFont(43);
   Graph_g_totErr3091->GetZaxis()->SetLabelSize(21);
   Graph_g_totErr3091->GetZaxis()->SetTitleSize(21);
   Graph_g_totErr3091->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_totErr3091);
   
   grae->Draw("e2");
   
   Double_t Graph_from_c1lep4jex3bex_mtw_Data_fx3092[4] = {
   25,
   75,
   125,
   175};
   Double_t Graph_from_c1lep4jex3bex_mtw_Data_fy3092[4] = {
   2767,
   7257,
   859,
   228};
   Double_t Graph_from_c1lep4jex3bex_mtw_Data_felx3092[4] = {
   24.95,
   24.95,
   24.95,
   24.95};
   Double_t Graph_from_c1lep4jex3bex_mtw_Data_fely3092[4] = {
   52.60228,
   85.18803,
   29.3087,
   15.09967};
   Double_t Graph_from_c1lep4jex3bex_mtw_Data_fehx3092[4] = {
   25,
   25,
   25,
   25};
   Double_t Graph_from_c1lep4jex3bex_mtw_Data_fehy3092[4] = {
   52.60228,
   85.18803,
   29.3087,
   15.09967};
   grae = new TGraphAsymmErrors(4,Graph_from_c1lep4jex3bex_mtw_Data_fx3092,Graph_from_c1lep4jex3bex_mtw_Data_fy3092,Graph_from_c1lep4jex3bex_mtw_Data_felx3092,Graph_from_c1lep4jex3bex_mtw_Data_fehx3092,Graph_from_c1lep4jex3bex_mtw_Data_fely3092,Graph_from_c1lep4jex3bex_mtw_Data_fehy3092);
   grae->SetName("Graph_from_c1lep4jex3bex_mtw_Data");
   grae->SetTitle("");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_c1lep4jex3bex_mtw_Data3092 = new TH1F("Graph_Graph_from_c1lep4jex3bex_mtw_Data3092","",100,0,219.995);
   Graph_Graph_from_c1lep4jex3bex_mtw_Data3092->SetMinimum(0);
   Graph_Graph_from_c1lep4jex3bex_mtw_Data3092->SetMaximum(8055.117);
   Graph_Graph_from_c1lep4jex3bex_mtw_Data3092->SetDirectory(0);
   Graph_Graph_from_c1lep4jex3bex_mtw_Data3092->SetStats(0);
   Graph_Graph_from_c1lep4jex3bex_mtw_Data3092->SetLineWidth(2);
   Graph_Graph_from_c1lep4jex3bex_mtw_Data3092->SetMarkerStyle(20);
   Graph_Graph_from_c1lep4jex3bex_mtw_Data3092->SetMarkerSize(1.2);
   Graph_Graph_from_c1lep4jex3bex_mtw_Data3092->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep4jex3bex_mtw_Data3092->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep4jex3bex_mtw_Data3092->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep4jex3bex_mtw_Data3092->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep4jex3bex_mtw_Data3092->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep4jex3bex_mtw_Data3092->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep4jex3bex_mtw_Data3092->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep4jex3bex_mtw_Data3092->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep4jex3bex_mtw_Data3092->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep4jex3bex_mtw_Data3092->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep4jex3bex_mtw_Data3092->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep4jex3bex_mtw_Data3092->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep4jex3bex_mtw_Data3092->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep4jex3bex_mtw_Data3092->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_c1lep4jex3bex_mtw_Data3092);
   
   grae->Draw("ep1 ");
   Double_t xAxis230[5] = {0, 50, 100, 150, 200}; 
   
   TH1D *h_dummy_copy__207 = new TH1D("h_dummy_copy__207","",4, xAxis230);
   h_dummy_copy__207->SetEntries(2920944);
   h_dummy_copy__207->SetDirectory(0);
   h_dummy_copy__207->SetStats(0);
   h_dummy_copy__207->SetMarkerStyle(20);
   h_dummy_copy__207->SetMarkerSize(1.2);
   h_dummy_copy__207->GetXaxis()->SetTitle("m_{T}^{W} [GeV]");
   h_dummy_copy__207->GetXaxis()->SetRange(1,25);
   h_dummy_copy__207->GetXaxis()->SetLabelFont(43);
   h_dummy_copy__207->GetXaxis()->SetLabelSize(21);
   h_dummy_copy__207->GetXaxis()->SetTitleSize(21);
   h_dummy_copy__207->GetXaxis()->SetTitleOffset(1.4);
   h_dummy_copy__207->GetXaxis()->SetTitleFont(43);
   h_dummy_copy__207->GetYaxis()->SetTitle("Events / 50 GeV");
   h_dummy_copy__207->GetYaxis()->SetLabelFont(43);
   h_dummy_copy__207->GetYaxis()->SetLabelSize(16.8);
   h_dummy_copy__207->GetYaxis()->SetTitleSize(21);
   h_dummy_copy__207->GetYaxis()->SetTitleOffset(2.4);
   h_dummy_copy__207->GetYaxis()->SetTitleFont(43);
   h_dummy_copy__207->GetZaxis()->SetLabelFont(43);
   h_dummy_copy__207->GetZaxis()->SetLabelSize(21);
   h_dummy_copy__207->GetZaxis()->SetTitleSize(21);
   h_dummy_copy__207->GetZaxis()->SetTitleFont(43);
   h_dummy_copy__207->Draw("sameaxis");
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
   TLegendEntry *entry=leg->AddEntry("c1lep4jex3bex_mtw_Data","Data","lep");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep4jex3bex_mtw_uHcW","t#bar{t}#rightarrowWbHc (BR=1%)","f");
   entry->SetFillColor(2);
   entry->SetFillStyle(1001);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep4jex3bex_mtw_ttbarlight","t#bar{t}+light","f");
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep4jex3bex_mtw_ttbarcc","t#bar{t}+cc","f");

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
   entry=leg->AddEntry("c1lep4jex3bex_mtw_ttbarbb","t#bar{t}+bb","f");

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
   entry=leg->AddEntry("c1lep4jex3bex_mtw_topEW","Non-t#bar{t}","f");

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
   c_c1lep4jex3bex_mtw->cd();
   c_c1lep4jex3bex_mtw->Modified();
   c_c1lep4jex3bex_mtw->cd();
   c_c1lep4jex3bex_mtw->SetSelected(c_c1lep4jex3bex_mtw);
}
