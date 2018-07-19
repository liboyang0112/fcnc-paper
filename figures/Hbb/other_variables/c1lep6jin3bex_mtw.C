void c1lep6jin3bex_mtw()
{
//=========Macro generated from canvas: c_c1lep6jin3bex_mtw/c_c1lep6jin3bex_mtw
//=========  (Thu Jul 19 17:38:05 2018) by ROOT version6.04/14
   TCanvas *c_c1lep6jin3bex_mtw = new TCanvas("c_c1lep6jin3bex_mtw", "c_c1lep6jin3bex_mtw",0,0,600,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c_c1lep6jin3bex_mtw->SetHighLightColor(2);
   c_c1lep6jin3bex_mtw->Range(0,0,1,1);
   c_c1lep6jin3bex_mtw->SetFillColor(0);
   c_c1lep6jin3bex_mtw->SetBorderMode(0);
   c_c1lep6jin3bex_mtw->SetBorderSize(2);
   c_c1lep6jin3bex_mtw->SetTickx(1);
   c_c1lep6jin3bex_mtw->SetTicky(1);
   c_c1lep6jin3bex_mtw->SetLeftMargin(0.16);
   c_c1lep6jin3bex_mtw->SetRightMargin(0.05);
   c_c1lep6jin3bex_mtw->SetTopMargin(0.05);
   c_c1lep6jin3bex_mtw->SetBottomMargin(0.16);
   c_c1lep6jin3bex_mtw->SetFrameBorderMode(0);
  
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
   Double_t xAxis241[5] = {0, 50, 100, 150, 200}; 
   
   TH1D *h_dummy2__217 = new TH1D("h_dummy2__217","Data/MC",4, xAxis241);
   h_dummy2__217->SetMinimum(0.5);
   h_dummy2__217->SetMaximum(1.5);
   h_dummy2__217->SetEntries(1164502);
   h_dummy2__217->SetDirectory(0);
   h_dummy2__217->SetStats(0);
   h_dummy2__217->SetMarkerStyle(20);
   h_dummy2__217->SetMarkerSize(1.2);
   h_dummy2__217->GetXaxis()->SetTitle("m_{T}^{W} [GeV]");
   h_dummy2__217->GetXaxis()->SetRange(1,25);
   h_dummy2__217->GetXaxis()->SetLabelFont(43);
   h_dummy2__217->GetXaxis()->SetLabelOffset(0.025);
   h_dummy2__217->GetXaxis()->SetLabelSize(16.8);
   h_dummy2__217->GetXaxis()->SetTitleSize(21);
   h_dummy2__217->GetXaxis()->SetTitleOffset(5.05);
   h_dummy2__217->GetXaxis()->SetTitleFont(43);
   h_dummy2__217->GetYaxis()->SetTitle("Data / Bkg");
   h_dummy2__217->GetYaxis()->SetNdivisions(-504);
   h_dummy2__217->GetYaxis()->SetLabelFont(43);
   h_dummy2__217->GetYaxis()->SetLabelOffset(0.02);
   h_dummy2__217->GetYaxis()->SetLabelSize(16.8);
   h_dummy2__217->GetYaxis()->SetTitleSize(21);
   h_dummy2__217->GetYaxis()->SetTitleOffset(2.4);
   h_dummy2__217->GetYaxis()->SetTitleFont(43);
   h_dummy2__217->GetZaxis()->SetLabelFont(43);
   h_dummy2__217->GetZaxis()->SetLabelSize(21);
   h_dummy2__217->GetZaxis()->SetTitleSize(21);
   h_dummy2__217->GetZaxis()->SetTitleFont(43);
   h_dummy2__217->Draw("HIST");
   
   Double_t Graph_from_h_ratio_fx3097[4] = {
   25,
   75,
   125,
   175};
   Double_t Graph_from_h_ratio_fy3097[4] = {
   1.108103,
   1.119429,
   1.072266,
   1.059744};
   Double_t Graph_from_h_ratio_felx3097[4] = {
   24.95,
   24.95,
   24.95,
   24.95};
   Double_t Graph_from_h_ratio_fely3097[4] = {
   0.01776893,
   0.01156573,
   0.03219858,
   0.05990029};
   Double_t Graph_from_h_ratio_fehx3097[4] = {
   25,
   25,
   25,
   25};
   Double_t Graph_from_h_ratio_fehy3097[4] = {
   0.01776893,
   0.01156573,
   0.03219858,
   0.05990029};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(4,Graph_from_h_ratio_fx3097,Graph_from_h_ratio_fy3097,Graph_from_h_ratio_felx3097,Graph_from_h_ratio_fehx3097,Graph_from_h_ratio_fely3097,Graph_from_h_ratio_fehy3097);
   grae->SetName("Graph_from_h_ratio");
   grae->SetTitle("");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(24);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_h_ratio3097 = new TH1F("Graph_Graph_from_h_ratio3097","",100,0,219.995);
   Graph_Graph_from_h_ratio3097->SetMinimum(0.9867289);
   Graph_Graph_from_h_ratio3097->SetMaximum(1.14411);
   Graph_Graph_from_h_ratio3097->SetDirectory(0);
   Graph_Graph_from_h_ratio3097->SetStats(0);
   Graph_Graph_from_h_ratio3097->SetLineWidth(2);
   Graph_Graph_from_h_ratio3097->SetMarkerStyle(20);
   Graph_Graph_from_h_ratio3097->SetMarkerSize(1.2);
   Graph_Graph_from_h_ratio3097->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3097->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3097->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3097->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3097->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3097->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3097->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3097->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3097->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3097->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3097->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3097->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3097->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3097->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_h_ratio3097);
   
   grae->Draw("pe0");
   TLine *line = new TLine(0,1,200,1);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t g_ratio2_fx3098[4] = {
   25,
   75,
   125,
   175};
   Double_t g_ratio2_fy3098[4] = {
   1,
   1,
   1,
   1};
   Double_t g_ratio2_felx3098[4] = {
   25,
   25,
   25,
   25};
   Double_t g_ratio2_fely3098[4] = {
   0.1993503,
   0.1972922,
   0.1804081,
   0.1992967};
   Double_t g_ratio2_fehx3098[4] = {
   25,
   25,
   25,
   25};
   Double_t g_ratio2_fehy3098[4] = {
   0.1993503,
   0.1972922,
   0.1804081,
   0.1992967};
   grae = new TGraphAsymmErrors(4,g_ratio2_fx3098,g_ratio2_fy3098,g_ratio2_felx3098,g_ratio2_fehx3098,g_ratio2_fely3098,g_ratio2_fehy3098);
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
   
   TH1F *Graph_g_ratio23098 = new TH1F("Graph_g_ratio23098","",100,0,220);
   Graph_g_ratio23098->SetMinimum(0.7607797);
   Graph_g_ratio23098->SetMaximum(1.23922);
   Graph_g_ratio23098->SetDirectory(0);
   Graph_g_ratio23098->SetStats(0);
   Graph_g_ratio23098->SetLineWidth(2);
   Graph_g_ratio23098->SetMarkerStyle(20);
   Graph_g_ratio23098->SetMarkerSize(1.2);
   Graph_g_ratio23098->GetXaxis()->SetLabelFont(43);
   Graph_g_ratio23098->GetXaxis()->SetLabelSize(21);
   Graph_g_ratio23098->GetXaxis()->SetTitleSize(21);
   Graph_g_ratio23098->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23098->GetXaxis()->SetTitleFont(43);
   Graph_g_ratio23098->GetYaxis()->SetLabelFont(43);
   Graph_g_ratio23098->GetYaxis()->SetLabelSize(21);
   Graph_g_ratio23098->GetYaxis()->SetTitleSize(21);
   Graph_g_ratio23098->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23098->GetYaxis()->SetTitleFont(43);
   Graph_g_ratio23098->GetZaxis()->SetLabelFont(43);
   Graph_g_ratio23098->GetZaxis()->SetLabelSize(21);
   Graph_g_ratio23098->GetZaxis()->SetTitleSize(21);
   Graph_g_ratio23098->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_ratio23098);
   
   grae->Draw("e2");
   Double_t xAxis242[5] = {0, 50, 100, 150, 200}; 
   
   TH1D *h_dummy2_copy__218 = new TH1D("h_dummy2_copy__218","Data/MC",4, xAxis242);
   h_dummy2_copy__218->SetMinimum(0.5);
   h_dummy2_copy__218->SetMaximum(1.5);
   h_dummy2_copy__218->SetEntries(1164502);
   h_dummy2_copy__218->SetDirectory(0);
   h_dummy2_copy__218->SetStats(0);
   h_dummy2_copy__218->SetMarkerStyle(20);
   h_dummy2_copy__218->SetMarkerSize(1.2);
   h_dummy2_copy__218->GetXaxis()->SetTitle("m_{T}^{W} [GeV]");
   h_dummy2_copy__218->GetXaxis()->SetRange(1,25);
   h_dummy2_copy__218->GetXaxis()->SetLabelFont(43);
   h_dummy2_copy__218->GetXaxis()->SetLabelOffset(0.025);
   h_dummy2_copy__218->GetXaxis()->SetLabelSize(16.8);
   h_dummy2_copy__218->GetXaxis()->SetTitleSize(21);
   h_dummy2_copy__218->GetXaxis()->SetTitleOffset(5.05);
   h_dummy2_copy__218->GetXaxis()->SetTitleFont(43);
   h_dummy2_copy__218->GetYaxis()->SetTitle("Data / Bkg");
   h_dummy2_copy__218->GetYaxis()->SetNdivisions(-504);
   h_dummy2_copy__218->GetYaxis()->SetLabelFont(43);
   h_dummy2_copy__218->GetYaxis()->SetLabelOffset(0.02);
   h_dummy2_copy__218->GetYaxis()->SetLabelSize(16.8);
   h_dummy2_copy__218->GetYaxis()->SetTitleSize(21);
   h_dummy2_copy__218->GetYaxis()->SetTitleOffset(2.4);
   h_dummy2_copy__218->GetYaxis()->SetTitleFont(43);
   h_dummy2_copy__218->GetZaxis()->SetLabelFont(43);
   h_dummy2_copy__218->GetZaxis()->SetLabelSize(21);
   h_dummy2_copy__218->GetZaxis()->SetTitleSize(21);
   h_dummy2_copy__218->GetZaxis()->SetTitleFont(43);
   h_dummy2_copy__218->Draw("sameaxis");
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
   c_c1lep6jin3bex_mtw->cd();
  
// ------------>Primitives in pad: pad0
   TPad *pad0 = new TPad("pad0", "pad0",0,0.2,1,1);
   pad0->Draw();
   pad0->cd();
   pad0->Range(-34.5679,-2004.308,212.3457,18038.77);
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
   Double_t xAxis243[5] = {0, 50, 100, 150, 200}; 
   
   TH1D *h_dummy__219 = new TH1D("h_dummy__219","",4, xAxis243);
   h_dummy__219->SetMinimum(0);
   h_dummy__219->SetMaximum(17036.62);
   h_dummy__219->SetEntries(1164502);
   h_dummy__219->SetDirectory(0);
   h_dummy__219->SetStats(0);
   h_dummy__219->SetMarkerStyle(20);
   h_dummy__219->SetMarkerSize(1.2);
   h_dummy__219->GetXaxis()->SetRange(1,25);
   h_dummy__219->GetXaxis()->SetLabelFont(43);
   h_dummy__219->GetXaxis()->SetLabelSize(0);
   h_dummy__219->GetXaxis()->SetTitleSize(21);
   h_dummy__219->GetXaxis()->SetTitleOffset(1.4);
   h_dummy__219->GetXaxis()->SetTitleFont(43);
   h_dummy__219->GetYaxis()->SetTitle("Events / 50 GeV");
   h_dummy__219->GetYaxis()->SetLabelFont(43);
   h_dummy__219->GetYaxis()->SetLabelSize(16.8);
   h_dummy__219->GetYaxis()->SetTitleSize(21);
   h_dummy__219->GetYaxis()->SetTitleOffset(2.4);
   h_dummy__219->GetYaxis()->SetTitleFont(43);
   h_dummy__219->GetZaxis()->SetLabelFont(43);
   h_dummy__219->GetZaxis()->SetLabelSize(21);
   h_dummy__219->GetZaxis()->SetTitleSize(21);
   h_dummy__219->GetZaxis()->SetTitleFont(43);
   h_dummy__219->Draw("HIST");
   
   THStack *h_stack = new THStack();
   h_stack->SetName("h_stack");
   h_stack->SetTitle("h_stack");
   Double_t xAxis244[5] = {0, 50, 100, 150, 200}; 
   
   TH1F *h_stack_stack_25 = new TH1F("h_stack_stack_25","h_stack",4, xAxis244);
   h_stack_stack_25->SetMinimum(0);
   h_stack_stack_25->SetMaximum(9259.896);
   h_stack_stack_25->SetDirectory(0);
   h_stack_stack_25->SetStats(0);
   h_stack_stack_25->SetLineWidth(2);
   h_stack_stack_25->SetMarkerStyle(20);
   h_stack_stack_25->SetMarkerSize(1.2);
   h_stack_stack_25->GetXaxis()->SetLabelFont(43);
   h_stack_stack_25->GetXaxis()->SetLabelSize(21);
   h_stack_stack_25->GetXaxis()->SetTitleSize(21);
   h_stack_stack_25->GetXaxis()->SetTitleOffset(1.4);
   h_stack_stack_25->GetXaxis()->SetTitleFont(43);
   h_stack_stack_25->GetYaxis()->SetLabelFont(43);
   h_stack_stack_25->GetYaxis()->SetLabelSize(21);
   h_stack_stack_25->GetYaxis()->SetTitleSize(21);
   h_stack_stack_25->GetYaxis()->SetTitleOffset(1.4);
   h_stack_stack_25->GetYaxis()->SetTitleFont(43);
   h_stack_stack_25->GetZaxis()->SetLabelFont(43);
   h_stack_stack_25->GetZaxis()->SetLabelSize(21);
   h_stack_stack_25->GetZaxis()->SetTitleSize(21);
   h_stack_stack_25->GetZaxis()->SetTitleFont(43);
   h_stack->SetHistogram(h_stack_stack_25);
   
   Double_t xAxis245[5] = {0, 50, 100, 150, 200}; 
   
   TH1D *c1lep6jin3bex_mtw_topEW__220 = new TH1D("c1lep6jin3bex_mtw_topEW__220","",4, xAxis245);
   c1lep6jin3bex_mtw_topEW__220->SetBinContent(1,521.4615);
   c1lep6jin3bex_mtw_topEW__220->SetBinContent(2,1021.425);
   c1lep6jin3bex_mtw_topEW__220->SetBinContent(3,216.3934);
   c1lep6jin3bex_mtw_topEW__220->SetBinContent(4,57.55807);
   c1lep6jin3bex_mtw_topEW__220->SetBinContent(5,53.92099);
   c1lep6jin3bex_mtw_topEW__220->SetBinError(1,51.96941);
   c1lep6jin3bex_mtw_topEW__220->SetBinError(2,63.22861);
   c1lep6jin3bex_mtw_topEW__220->SetBinError(3,36.5202);
   c1lep6jin3bex_mtw_topEW__220->SetBinError(4,16.14839);
   c1lep6jin3bex_mtw_topEW__220->SetBinError(5,20.49032);
   c1lep6jin3bex_mtw_topEW__220->SetEntries(1125872);
   c1lep6jin3bex_mtw_topEW__220->SetDirectory(0);
   c1lep6jin3bex_mtw_topEW__220->SetStats(0);

   ci = TColor::GetColor("#66cc66");
   c1lep6jin3bex_mtw_topEW__220->SetFillColor(ci);
   c1lep6jin3bex_mtw_topEW__220->SetMarkerStyle(20);
   c1lep6jin3bex_mtw_topEW__220->SetMarkerSize(1.2);
   c1lep6jin3bex_mtw_topEW__220->GetXaxis()->SetTitle("m_{T}(W) [GeV]");
   c1lep6jin3bex_mtw_topEW__220->GetXaxis()->SetRange(1,25);
   c1lep6jin3bex_mtw_topEW__220->GetXaxis()->SetLabelFont(43);
   c1lep6jin3bex_mtw_topEW__220->GetXaxis()->SetLabelSize(21);
   c1lep6jin3bex_mtw_topEW__220->GetXaxis()->SetTitleSize(21);
   c1lep6jin3bex_mtw_topEW__220->GetXaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_mtw_topEW__220->GetXaxis()->SetTitleFont(43);
   c1lep6jin3bex_mtw_topEW__220->GetYaxis()->SetLabelFont(43);
   c1lep6jin3bex_mtw_topEW__220->GetYaxis()->SetLabelSize(21);
   c1lep6jin3bex_mtw_topEW__220->GetYaxis()->SetTitleSize(21);
   c1lep6jin3bex_mtw_topEW__220->GetYaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_mtw_topEW__220->GetYaxis()->SetTitleFont(43);
   c1lep6jin3bex_mtw_topEW__220->GetZaxis()->SetLabelFont(43);
   c1lep6jin3bex_mtw_topEW__220->GetZaxis()->SetLabelSize(21);
   c1lep6jin3bex_mtw_topEW__220->GetZaxis()->SetTitleSize(21);
   c1lep6jin3bex_mtw_topEW__220->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep6jin3bex_mtw_topEW,"");
   Double_t xAxis246[5] = {0, 50, 100, 150, 200}; 
   
   TH1D *c1lep6jin3bex_mtw_ttbarbb__221 = new TH1D("c1lep6jin3bex_mtw_ttbarbb__221","",4, xAxis246);
   c1lep6jin3bex_mtw_ttbarbb__221->SetBinContent(1,1887.199);
   c1lep6jin3bex_mtw_ttbarbb__221->SetBinContent(2,4546.01);
   c1lep6jin3bex_mtw_ttbarbb__221->SetBinContent(3,559.0475);
   c1lep6jin3bex_mtw_ttbarbb__221->SetBinContent(4,175.6225);
   c1lep6jin3bex_mtw_ttbarbb__221->SetBinContent(5,114.6143);
   c1lep6jin3bex_mtw_ttbarbb__221->SetBinError(1,28.6052);
   c1lep6jin3bex_mtw_ttbarbb__221->SetBinError(2,43.29149);
   c1lep6jin3bex_mtw_ttbarbb__221->SetBinError(3,15.46065);
   c1lep6jin3bex_mtw_ttbarbb__221->SetBinError(4,9.434244);
   c1lep6jin3bex_mtw_ttbarbb__221->SetBinError(5,6.632976);
   c1lep6jin3bex_mtw_ttbarbb__221->SetEntries(26042);
   c1lep6jin3bex_mtw_ttbarbb__221->SetDirectory(0);
   c1lep6jin3bex_mtw_ttbarbb__221->SetStats(0);

   ci = TColor::GetColor("#6666cc");
   c1lep6jin3bex_mtw_ttbarbb__221->SetFillColor(ci);
   c1lep6jin3bex_mtw_ttbarbb__221->SetMarkerStyle(20);
   c1lep6jin3bex_mtw_ttbarbb__221->SetMarkerSize(1.2);
   c1lep6jin3bex_mtw_ttbarbb__221->GetXaxis()->SetTitle("m_{T}(W) [GeV]");
   c1lep6jin3bex_mtw_ttbarbb__221->GetXaxis()->SetRange(1,25);
   c1lep6jin3bex_mtw_ttbarbb__221->GetXaxis()->SetLabelFont(43);
   c1lep6jin3bex_mtw_ttbarbb__221->GetXaxis()->SetLabelSize(21);
   c1lep6jin3bex_mtw_ttbarbb__221->GetXaxis()->SetTitleSize(21);
   c1lep6jin3bex_mtw_ttbarbb__221->GetXaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_mtw_ttbarbb__221->GetXaxis()->SetTitleFont(43);
   c1lep6jin3bex_mtw_ttbarbb__221->GetYaxis()->SetLabelFont(43);
   c1lep6jin3bex_mtw_ttbarbb__221->GetYaxis()->SetLabelSize(21);
   c1lep6jin3bex_mtw_ttbarbb__221->GetYaxis()->SetTitleSize(21);
   c1lep6jin3bex_mtw_ttbarbb__221->GetYaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_mtw_ttbarbb__221->GetYaxis()->SetTitleFont(43);
   c1lep6jin3bex_mtw_ttbarbb__221->GetZaxis()->SetLabelFont(43);
   c1lep6jin3bex_mtw_ttbarbb__221->GetZaxis()->SetLabelSize(21);
   c1lep6jin3bex_mtw_ttbarbb__221->GetZaxis()->SetTitleSize(21);
   c1lep6jin3bex_mtw_ttbarbb__221->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep6jin3bex_mtw_ttbarbb,"");
   Double_t xAxis247[5] = {0, 50, 100, 150, 200}; 
   
   TH1D *c1lep6jin3bex_mtw_ttbarcc__222 = new TH1D("c1lep6jin3bex_mtw_ttbarcc__222","",4, xAxis247);
   c1lep6jin3bex_mtw_ttbarcc__222->SetBinContent(1,467.0628);
   c1lep6jin3bex_mtw_ttbarcc__222->SetBinContent(2,1186.044);
   c1lep6jin3bex_mtw_ttbarcc__222->SetBinContent(3,111.2914);
   c1lep6jin3bex_mtw_ttbarcc__222->SetBinContent(4,30.06237);
   c1lep6jin3bex_mtw_ttbarcc__222->SetBinContent(5,19.79463);
   c1lep6jin3bex_mtw_ttbarcc__222->SetBinError(1,14.68114);
   c1lep6jin3bex_mtw_ttbarcc__222->SetBinError(2,24.6215);
   c1lep6jin3bex_mtw_ttbarcc__222->SetBinError(3,7.126711);
   c1lep6jin3bex_mtw_ttbarcc__222->SetBinError(4,3.49802);
   c1lep6jin3bex_mtw_ttbarcc__222->SetBinError(5,2.628838);
   c1lep6jin3bex_mtw_ttbarcc__222->SetEntries(5630);
   c1lep6jin3bex_mtw_ttbarcc__222->SetDirectory(0);
   c1lep6jin3bex_mtw_ttbarcc__222->SetStats(0);

   ci = TColor::GetColor("#ccccff");
   c1lep6jin3bex_mtw_ttbarcc__222->SetFillColor(ci);
   c1lep6jin3bex_mtw_ttbarcc__222->SetMarkerStyle(20);
   c1lep6jin3bex_mtw_ttbarcc__222->SetMarkerSize(1.2);
   c1lep6jin3bex_mtw_ttbarcc__222->GetXaxis()->SetTitle("m_{T}(W) [GeV]");
   c1lep6jin3bex_mtw_ttbarcc__222->GetXaxis()->SetRange(1,25);
   c1lep6jin3bex_mtw_ttbarcc__222->GetXaxis()->SetLabelFont(43);
   c1lep6jin3bex_mtw_ttbarcc__222->GetXaxis()->SetLabelSize(21);
   c1lep6jin3bex_mtw_ttbarcc__222->GetXaxis()->SetTitleSize(21);
   c1lep6jin3bex_mtw_ttbarcc__222->GetXaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_mtw_ttbarcc__222->GetXaxis()->SetTitleFont(43);
   c1lep6jin3bex_mtw_ttbarcc__222->GetYaxis()->SetLabelFont(43);
   c1lep6jin3bex_mtw_ttbarcc__222->GetYaxis()->SetLabelSize(21);
   c1lep6jin3bex_mtw_ttbarcc__222->GetYaxis()->SetTitleSize(21);
   c1lep6jin3bex_mtw_ttbarcc__222->GetYaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_mtw_ttbarcc__222->GetYaxis()->SetTitleFont(43);
   c1lep6jin3bex_mtw_ttbarcc__222->GetZaxis()->SetLabelFont(43);
   c1lep6jin3bex_mtw_ttbarcc__222->GetZaxis()->SetLabelSize(21);
   c1lep6jin3bex_mtw_ttbarcc__222->GetZaxis()->SetTitleSize(21);
   c1lep6jin3bex_mtw_ttbarcc__222->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep6jin3bex_mtw_ttbarcc,"");
   Double_t xAxis248[5] = {0, 50, 100, 150, 200}; 
   
   TH1D *c1lep6jin3bex_mtw_ttbarlight__223 = new TH1D("c1lep6jin3bex_mtw_ttbarlight__223","",4, xAxis248);
   c1lep6jin3bex_mtw_ttbarlight__223->SetBinContent(1,633.8783);
   c1lep6jin3bex_mtw_ttbarlight__223->SetBinContent(2,1615.072);
   c1lep6jin3bex_mtw_ttbarlight__223->SetBinContent(3,147.5262);
   c1lep6jin3bex_mtw_ttbarlight__223->SetBinContent(4,32.1113);
   c1lep6jin3bex_mtw_ttbarlight__223->SetBinContent(5,21.03762);
   c1lep6jin3bex_mtw_ttbarlight__223->SetBinError(1,18.81557);
   c1lep6jin3bex_mtw_ttbarlight__223->SetBinError(2,30.25434);
   c1lep6jin3bex_mtw_ttbarlight__223->SetBinError(3,9.455418);
   c1lep6jin3bex_mtw_ttbarlight__223->SetBinError(4,4.119923);
   c1lep6jin3bex_mtw_ttbarlight__223->SetBinError(5,4.730443);
   c1lep6jin3bex_mtw_ttbarlight__223->SetEntries(6954);
   c1lep6jin3bex_mtw_ttbarlight__223->SetDirectory(0);
   c1lep6jin3bex_mtw_ttbarlight__223->SetStats(0);
   c1lep6jin3bex_mtw_ttbarlight__223->SetMarkerStyle(20);
   c1lep6jin3bex_mtw_ttbarlight__223->SetMarkerSize(1.2);
   c1lep6jin3bex_mtw_ttbarlight__223->GetXaxis()->SetTitle("m_{T}(W) [GeV]");
   c1lep6jin3bex_mtw_ttbarlight__223->GetXaxis()->SetRange(1,25);
   c1lep6jin3bex_mtw_ttbarlight__223->GetXaxis()->SetLabelFont(43);
   c1lep6jin3bex_mtw_ttbarlight__223->GetXaxis()->SetLabelSize(21);
   c1lep6jin3bex_mtw_ttbarlight__223->GetXaxis()->SetTitleSize(21);
   c1lep6jin3bex_mtw_ttbarlight__223->GetXaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_mtw_ttbarlight__223->GetXaxis()->SetTitleFont(43);
   c1lep6jin3bex_mtw_ttbarlight__223->GetYaxis()->SetLabelFont(43);
   c1lep6jin3bex_mtw_ttbarlight__223->GetYaxis()->SetLabelSize(21);
   c1lep6jin3bex_mtw_ttbarlight__223->GetYaxis()->SetTitleSize(21);
   c1lep6jin3bex_mtw_ttbarlight__223->GetYaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_mtw_ttbarlight__223->GetYaxis()->SetTitleFont(43);
   c1lep6jin3bex_mtw_ttbarlight__223->GetZaxis()->SetLabelFont(43);
   c1lep6jin3bex_mtw_ttbarlight__223->GetZaxis()->SetLabelSize(21);
   c1lep6jin3bex_mtw_ttbarlight__223->GetZaxis()->SetTitleSize(21);
   c1lep6jin3bex_mtw_ttbarlight__223->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep6jin3bex_mtw_ttbarlight,"");
   Double_t xAxis249[5] = {0, 50, 100, 150, 200}; 
   
   TH1D *c1lep6jin3bex_mtw_uHcW__224 = new TH1D("c1lep6jin3bex_mtw_uHcW__224","",4, xAxis249);
   c1lep6jin3bex_mtw_uHcW__224->SetBinContent(1,178.4154);
   c1lep6jin3bex_mtw_uHcW__224->SetBinContent(2,450.3976);
   c1lep6jin3bex_mtw_uHcW__224->SetBinContent(3,50.48169);
   c1lep6jin3bex_mtw_uHcW__224->SetBinContent(4,10.27839);
   c1lep6jin3bex_mtw_uHcW__224->SetBinContent(5,-0.5405901);
   c1lep6jin3bex_mtw_uHcW__224->SetBinError(1,15.38935);
   c1lep6jin3bex_mtw_uHcW__224->SetBinError(2,26.13292);
   c1lep6jin3bex_mtw_uHcW__224->SetBinError(3,7.49232);
   c1lep6jin3bex_mtw_uHcW__224->SetBinError(4,3.518384);
   c1lep6jin3bex_mtw_uHcW__224->SetBinError(5,2.360092);
   c1lep6jin3bex_mtw_uHcW__224->SetEntries(5540);
   c1lep6jin3bex_mtw_uHcW__224->SetDirectory(0);
   c1lep6jin3bex_mtw_uHcW__224->SetStats(0);
   c1lep6jin3bex_mtw_uHcW__224->SetFillColor(2);
   c1lep6jin3bex_mtw_uHcW__224->SetLineColor(2);
   c1lep6jin3bex_mtw_uHcW__224->SetMarkerStyle(20);
   c1lep6jin3bex_mtw_uHcW__224->SetMarkerSize(1.2);
   c1lep6jin3bex_mtw_uHcW__224->GetXaxis()->SetTitle("m_{T}(W) [GeV]");
   c1lep6jin3bex_mtw_uHcW__224->GetXaxis()->SetRange(1,25);
   c1lep6jin3bex_mtw_uHcW__224->GetXaxis()->SetLabelFont(43);
   c1lep6jin3bex_mtw_uHcW__224->GetXaxis()->SetLabelSize(21);
   c1lep6jin3bex_mtw_uHcW__224->GetXaxis()->SetTitleSize(21);
   c1lep6jin3bex_mtw_uHcW__224->GetXaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_mtw_uHcW__224->GetXaxis()->SetTitleFont(43);
   c1lep6jin3bex_mtw_uHcW__224->GetYaxis()->SetLabelFont(43);
   c1lep6jin3bex_mtw_uHcW__224->GetYaxis()->SetLabelSize(21);
   c1lep6jin3bex_mtw_uHcW__224->GetYaxis()->SetTitleSize(21);
   c1lep6jin3bex_mtw_uHcW__224->GetYaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_mtw_uHcW__224->GetYaxis()->SetTitleFont(43);
   c1lep6jin3bex_mtw_uHcW__224->GetZaxis()->SetLabelFont(43);
   c1lep6jin3bex_mtw_uHcW__224->GetZaxis()->SetLabelSize(21);
   c1lep6jin3bex_mtw_uHcW__224->GetZaxis()->SetTitleSize(21);
   c1lep6jin3bex_mtw_uHcW__224->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep6jin3bex_mtw_uHcW,"");
   h_stack->Draw("hist same");
   
   Double_t g_totErr_fx3099[4] = {
   25,
   75,
   125,
   175};
   Double_t g_totErr_fy3099[4] = {
   3509.601,
   8368.551,
   1034.258,
   295.3543};
   Double_t g_totErr_felx3099[4] = {
   25,
   25,
   25,
   25};
   Double_t g_totErr_fely3099[4] = {
   699.64,
   1651.05,
   186.5886,
   58.86312};
   Double_t g_totErr_fehx3099[4] = {
   25,
   25,
   25,
   25};
   Double_t g_totErr_fehy3099[4] = {
   699.64,
   1651.05,
   186.5886,
   58.86312};
   grae = new TGraphAsymmErrors(4,g_totErr_fx3099,g_totErr_fy3099,g_totErr_felx3099,g_totErr_fehx3099,g_totErr_fely3099,g_totErr_fehy3099);
   grae->SetName("g_totErr");
   grae->SetTitle("");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(3354);
   grae->SetLineColor(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0);
   
   TH1F *Graph_g_totErr3099 = new TH1F("Graph_g_totErr3099","",100,0,220);
   Graph_g_totErr3099->SetMinimum(0);
   Graph_g_totErr3099->SetMaximum(10997.91);
   Graph_g_totErr3099->SetDirectory(0);
   Graph_g_totErr3099->SetStats(0);
   Graph_g_totErr3099->SetLineWidth(2);
   Graph_g_totErr3099->SetMarkerStyle(20);
   Graph_g_totErr3099->SetMarkerSize(1.2);
   Graph_g_totErr3099->GetXaxis()->SetLabelFont(43);
   Graph_g_totErr3099->GetXaxis()->SetLabelSize(21);
   Graph_g_totErr3099->GetXaxis()->SetTitleSize(21);
   Graph_g_totErr3099->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_totErr3099->GetXaxis()->SetTitleFont(43);
   Graph_g_totErr3099->GetYaxis()->SetLabelFont(43);
   Graph_g_totErr3099->GetYaxis()->SetLabelSize(21);
   Graph_g_totErr3099->GetYaxis()->SetTitleSize(21);
   Graph_g_totErr3099->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_totErr3099->GetYaxis()->SetTitleFont(43);
   Graph_g_totErr3099->GetZaxis()->SetLabelFont(43);
   Graph_g_totErr3099->GetZaxis()->SetLabelSize(21);
   Graph_g_totErr3099->GetZaxis()->SetTitleSize(21);
   Graph_g_totErr3099->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_totErr3099);
   
   grae->Draw("e2");
   
   Double_t Graph_from_c1lep6jin3bex_mtw_Data_fx3100[4] = {
   25,
   75,
   125,
   175};
   Double_t Graph_from_c1lep6jin3bex_mtw_Data_fy3100[4] = {
   3889,
   9368,
   1109,
   313};
   Double_t Graph_from_c1lep6jin3bex_mtw_Data_felx3100[4] = {
   24.95,
   24.95,
   24.95,
   24.95};
   Double_t Graph_from_c1lep6jin3bex_mtw_Data_fely3100[4] = {
   62.36185,
   96.78843,
   33.30165,
   17.69181};
   Double_t Graph_from_c1lep6jin3bex_mtw_Data_fehx3100[4] = {
   25,
   25,
   25,
   25};
   Double_t Graph_from_c1lep6jin3bex_mtw_Data_fehy3100[4] = {
   62.36185,
   96.78843,
   33.30165,
   17.69181};
   grae = new TGraphAsymmErrors(4,Graph_from_c1lep6jin3bex_mtw_Data_fx3100,Graph_from_c1lep6jin3bex_mtw_Data_fy3100,Graph_from_c1lep6jin3bex_mtw_Data_felx3100,Graph_from_c1lep6jin3bex_mtw_Data_fehx3100,Graph_from_c1lep6jin3bex_mtw_Data_fely3100,Graph_from_c1lep6jin3bex_mtw_Data_fehy3100);
   grae->SetName("Graph_from_c1lep6jin3bex_mtw_Data");
   grae->SetTitle("");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_c1lep6jin3bex_mtw_Data3100 = new TH1F("Graph_Graph_from_c1lep6jin3bex_mtw_Data3100","",100,0,219.995);
   Graph_Graph_from_c1lep6jin3bex_mtw_Data3100->SetMinimum(0);
   Graph_Graph_from_c1lep6jin3bex_mtw_Data3100->SetMaximum(10381.74);
   Graph_Graph_from_c1lep6jin3bex_mtw_Data3100->SetDirectory(0);
   Graph_Graph_from_c1lep6jin3bex_mtw_Data3100->SetStats(0);
   Graph_Graph_from_c1lep6jin3bex_mtw_Data3100->SetLineWidth(2);
   Graph_Graph_from_c1lep6jin3bex_mtw_Data3100->SetMarkerStyle(20);
   Graph_Graph_from_c1lep6jin3bex_mtw_Data3100->SetMarkerSize(1.2);
   Graph_Graph_from_c1lep6jin3bex_mtw_Data3100->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep6jin3bex_mtw_Data3100->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep6jin3bex_mtw_Data3100->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep6jin3bex_mtw_Data3100->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep6jin3bex_mtw_Data3100->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep6jin3bex_mtw_Data3100->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep6jin3bex_mtw_Data3100->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep6jin3bex_mtw_Data3100->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep6jin3bex_mtw_Data3100->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep6jin3bex_mtw_Data3100->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep6jin3bex_mtw_Data3100->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep6jin3bex_mtw_Data3100->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep6jin3bex_mtw_Data3100->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep6jin3bex_mtw_Data3100->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_c1lep6jin3bex_mtw_Data3100);
   
   grae->Draw("ep1 ");
   Double_t xAxis250[5] = {0, 50, 100, 150, 200}; 
   
   TH1D *h_dummy_copy__225 = new TH1D("h_dummy_copy__225","",4, xAxis250);
   h_dummy_copy__225->SetEntries(1164502);
   h_dummy_copy__225->SetDirectory(0);
   h_dummy_copy__225->SetStats(0);
   h_dummy_copy__225->SetMarkerStyle(20);
   h_dummy_copy__225->SetMarkerSize(1.2);
   h_dummy_copy__225->GetXaxis()->SetTitle("m_{T}^{W} [GeV]");
   h_dummy_copy__225->GetXaxis()->SetRange(1,25);
   h_dummy_copy__225->GetXaxis()->SetLabelFont(43);
   h_dummy_copy__225->GetXaxis()->SetLabelSize(21);
   h_dummy_copy__225->GetXaxis()->SetTitleSize(21);
   h_dummy_copy__225->GetXaxis()->SetTitleOffset(1.4);
   h_dummy_copy__225->GetXaxis()->SetTitleFont(43);
   h_dummy_copy__225->GetYaxis()->SetTitle("Events / 50 GeV");
   h_dummy_copy__225->GetYaxis()->SetLabelFont(43);
   h_dummy_copy__225->GetYaxis()->SetLabelSize(16.8);
   h_dummy_copy__225->GetYaxis()->SetTitleSize(21);
   h_dummy_copy__225->GetYaxis()->SetTitleOffset(2.4);
   h_dummy_copy__225->GetYaxis()->SetTitleFont(43);
   h_dummy_copy__225->GetZaxis()->SetLabelFont(43);
   h_dummy_copy__225->GetZaxis()->SetLabelSize(21);
   h_dummy_copy__225->GetZaxis()->SetTitleSize(21);
   h_dummy_copy__225->GetZaxis()->SetTitleFont(43);
   h_dummy_copy__225->Draw("sameaxis");
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
   TLegendEntry *entry=leg->AddEntry("c1lep6jin3bex_mtw_Data","Data","lep");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep6jin3bex_mtw_uHcW","t#bar{t}#rightarrowWbHc (BR=1%)","f");
   entry->SetFillColor(2);
   entry->SetFillStyle(1001);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep6jin3bex_mtw_ttbarlight","t#bar{t}+light","f");
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep6jin3bex_mtw_ttbarcc","t#bar{t}+cc","f");

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
   entry=leg->AddEntry("c1lep6jin3bex_mtw_ttbarbb","t#bar{t}+bb","f");

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
   entry=leg->AddEntry("c1lep6jin3bex_mtw_topEW","Non-t#bar{t}","f");

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
   c_c1lep6jin3bex_mtw->cd();
   c_c1lep6jin3bex_mtw->Modified();
   c_c1lep6jin3bex_mtw->cd();
   c_c1lep6jin3bex_mtw->SetSelected(c_c1lep6jin3bex_mtw);
}
