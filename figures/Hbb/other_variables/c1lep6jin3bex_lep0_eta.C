void c1lep6jin3bex_lep0_eta()
{
//=========Macro generated from canvas: c_c1lep6jin3bex_lep0_eta/c_c1lep6jin3bex_lep0_eta
//=========  (Thu Jul 19 17:38:07 2018) by ROOT version6.04/14
   TCanvas *c_c1lep6jin3bex_lep0_eta = new TCanvas("c_c1lep6jin3bex_lep0_eta", "c_c1lep6jin3bex_lep0_eta",0,0,600,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c_c1lep6jin3bex_lep0_eta->SetHighLightColor(2);
   c_c1lep6jin3bex_lep0_eta->Range(0,0,1,1);
   c_c1lep6jin3bex_lep0_eta->SetFillColor(0);
   c_c1lep6jin3bex_lep0_eta->SetBorderMode(0);
   c_c1lep6jin3bex_lep0_eta->SetBorderSize(2);
   c_c1lep6jin3bex_lep0_eta->SetTickx(1);
   c_c1lep6jin3bex_lep0_eta->SetTicky(1);
   c_c1lep6jin3bex_lep0_eta->SetLeftMargin(0.16);
   c_c1lep6jin3bex_lep0_eta->SetRightMargin(0.05);
   c_c1lep6jin3bex_lep0_eta->SetTopMargin(0.05);
   c_c1lep6jin3bex_lep0_eta->SetBottomMargin(0.16);
   c_c1lep6jin3bex_lep0_eta->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0,1,0.28);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-3.364198,-0.0873016,2.808642,1.5);
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
   Double_t xAxis321[11] = {-2.5, -2, -1.5, -1, -0.5, 0, 0.5, 1, 1.5, 2, 2.5}; 
   
   TH1D *h_dummy2__289 = new TH1D("h_dummy2__289","Data/MC",10, xAxis321);
   h_dummy2__289->SetMinimum(0.5);
   h_dummy2__289->SetMaximum(1.5);
   h_dummy2__289->SetEntries(1164515);
   h_dummy2__289->SetDirectory(0);
   h_dummy2__289->SetStats(0);
   h_dummy2__289->SetMarkerStyle(20);
   h_dummy2__289->SetMarkerSize(1.2);
   h_dummy2__289->GetXaxis()->SetTitle("lepton #eta");
   h_dummy2__289->GetXaxis()->SetRange(1,30);
   h_dummy2__289->GetXaxis()->SetLabelFont(43);
   h_dummy2__289->GetXaxis()->SetLabelOffset(0.025);
   h_dummy2__289->GetXaxis()->SetLabelSize(16.8);
   h_dummy2__289->GetXaxis()->SetTitleSize(21);
   h_dummy2__289->GetXaxis()->SetTitleOffset(5.05);
   h_dummy2__289->GetXaxis()->SetTitleFont(43);
   h_dummy2__289->GetYaxis()->SetTitle("Data / Bkg");
   h_dummy2__289->GetYaxis()->SetNdivisions(-504);
   h_dummy2__289->GetYaxis()->SetLabelFont(43);
   h_dummy2__289->GetYaxis()->SetLabelOffset(0.02);
   h_dummy2__289->GetYaxis()->SetLabelSize(16.8);
   h_dummy2__289->GetYaxis()->SetTitleSize(21);
   h_dummy2__289->GetYaxis()->SetTitleOffset(2.4);
   h_dummy2__289->GetYaxis()->SetTitleFont(43);
   h_dummy2__289->GetZaxis()->SetLabelFont(43);
   h_dummy2__289->GetZaxis()->SetLabelSize(21);
   h_dummy2__289->GetZaxis()->SetTitleSize(21);
   h_dummy2__289->GetZaxis()->SetTitleFont(43);
   h_dummy2__289->Draw("HIST");
   
   Double_t Graph_from_h_ratio_fx3129[10] = {
   -2.25,
   -1.75,
   -1.25,
   -0.75,
   -0.25,
   0.25,
   0.75,
   1.25,
   1.75,
   2.25};
   Double_t Graph_from_h_ratio_fy3129[10] = {
   0.9462717,
   1.021572,
   1.090421,
   1.172926,
   1.18067,
   1.163112,
   1.115451,
   1.026536,
   1.034512,
   1.060059};
   Double_t Graph_from_h_ratio_felx3129[10] = {
   0.2495,
   0.2495,
   0.2495,
   0.2495,
   0.2495,
   0.2495,
   0.2495,
   0.2495,
   0.2495,
   0.2495};
   Double_t Graph_from_h_ratio_fely3129[10] = {
   0.0438823,
   0.03695918,
   0.02734613,
   0.02848957,
   0.02177484,
   0.0261456,
   0.02199883,
   0.02897693,
   0.03062616,
   0.05025163};
   Double_t Graph_from_h_ratio_fehx3129[10] = {
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25};
   Double_t Graph_from_h_ratio_fehy3129[10] = {
   0.0438823,
   0.03695918,
   0.02734613,
   0.02848957,
   0.02177484,
   0.0261456,
   0.02199883,
   0.02897693,
   0.03062616,
   0.05025163};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(10,Graph_from_h_ratio_fx3129,Graph_from_h_ratio_fy3129,Graph_from_h_ratio_felx3129,Graph_from_h_ratio_fehx3129,Graph_from_h_ratio_fely3129,Graph_from_h_ratio_fehy3129);
   grae->SetName("Graph_from_h_ratio");
   grae->SetTitle("");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(24);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_h_ratio3129 = new TH1F("Graph_Graph_from_h_ratio3129","",100,-2.99945,2.99995);
   Graph_Graph_from_h_ratio3129->SetMinimum(0.8723838);
   Graph_Graph_from_h_ratio3129->SetMaximum(1.232451);
   Graph_Graph_from_h_ratio3129->SetDirectory(0);
   Graph_Graph_from_h_ratio3129->SetStats(0);
   Graph_Graph_from_h_ratio3129->SetLineWidth(2);
   Graph_Graph_from_h_ratio3129->SetMarkerStyle(20);
   Graph_Graph_from_h_ratio3129->SetMarkerSize(1.2);
   Graph_Graph_from_h_ratio3129->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3129->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3129->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3129->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3129->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3129->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3129->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3129->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3129->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3129->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3129->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3129->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3129->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3129->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_h_ratio3129);
   
   grae->Draw("pe0");
   TLine *line = new TLine(-2.5,1,2.5,1);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t g_ratio2_fx3130[10] = {
   -2.25,
   -1.75,
   -1.25,
   -0.75,
   -0.25,
   0.25,
   0.75,
   1.25,
   1.75,
   2.25};
   Double_t g_ratio2_fy3130[10] = {
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
   Double_t g_ratio2_felx3130[10] = {
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25};
   Double_t g_ratio2_fely3130[10] = {
   0.1901284,
   0.1922584,
   0.1914957,
   0.197804,
   0.2000312,
   0.1977535,
   0.2000873,
   0.1909029,
   0.1921635,
   0.192111};
   Double_t g_ratio2_fehx3130[10] = {
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25};
   Double_t g_ratio2_fehy3130[10] = {
   0.1901284,
   0.1922584,
   0.1914957,
   0.197804,
   0.2000312,
   0.1977535,
   0.2000873,
   0.1909029,
   0.1921635,
   0.192111};
   grae = new TGraphAsymmErrors(10,g_ratio2_fx3130,g_ratio2_fy3130,g_ratio2_felx3130,g_ratio2_fehx3130,g_ratio2_fely3130,g_ratio2_fehy3130);
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
   
   TH1F *Graph_g_ratio23130 = new TH1F("Graph_g_ratio23130","",100,-3,3);
   Graph_g_ratio23130->SetMinimum(0.7598952);
   Graph_g_ratio23130->SetMaximum(1.240105);
   Graph_g_ratio23130->SetDirectory(0);
   Graph_g_ratio23130->SetStats(0);
   Graph_g_ratio23130->SetLineWidth(2);
   Graph_g_ratio23130->SetMarkerStyle(20);
   Graph_g_ratio23130->SetMarkerSize(1.2);
   Graph_g_ratio23130->GetXaxis()->SetLabelFont(43);
   Graph_g_ratio23130->GetXaxis()->SetLabelSize(21);
   Graph_g_ratio23130->GetXaxis()->SetTitleSize(21);
   Graph_g_ratio23130->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23130->GetXaxis()->SetTitleFont(43);
   Graph_g_ratio23130->GetYaxis()->SetLabelFont(43);
   Graph_g_ratio23130->GetYaxis()->SetLabelSize(21);
   Graph_g_ratio23130->GetYaxis()->SetTitleSize(21);
   Graph_g_ratio23130->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23130->GetYaxis()->SetTitleFont(43);
   Graph_g_ratio23130->GetZaxis()->SetLabelFont(43);
   Graph_g_ratio23130->GetZaxis()->SetLabelSize(21);
   Graph_g_ratio23130->GetZaxis()->SetTitleSize(21);
   Graph_g_ratio23130->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_ratio23130);
   
   grae->Draw("e2");
   Double_t xAxis322[11] = {-2.5, -2, -1.5, -1, -0.5, 0, 0.5, 1, 1.5, 2, 2.5}; 
   
   TH1D *h_dummy2_copy__290 = new TH1D("h_dummy2_copy__290","Data/MC",10, xAxis322);
   h_dummy2_copy__290->SetMinimum(0.5);
   h_dummy2_copy__290->SetMaximum(1.5);
   h_dummy2_copy__290->SetEntries(1164515);
   h_dummy2_copy__290->SetDirectory(0);
   h_dummy2_copy__290->SetStats(0);
   h_dummy2_copy__290->SetMarkerStyle(20);
   h_dummy2_copy__290->SetMarkerSize(1.2);
   h_dummy2_copy__290->GetXaxis()->SetTitle("lepton #eta");
   h_dummy2_copy__290->GetXaxis()->SetRange(1,30);
   h_dummy2_copy__290->GetXaxis()->SetLabelFont(43);
   h_dummy2_copy__290->GetXaxis()->SetLabelOffset(0.025);
   h_dummy2_copy__290->GetXaxis()->SetLabelSize(16.8);
   h_dummy2_copy__290->GetXaxis()->SetTitleSize(21);
   h_dummy2_copy__290->GetXaxis()->SetTitleOffset(5.05);
   h_dummy2_copy__290->GetXaxis()->SetTitleFont(43);
   h_dummy2_copy__290->GetYaxis()->SetTitle("Data / Bkg");
   h_dummy2_copy__290->GetYaxis()->SetNdivisions(-504);
   h_dummy2_copy__290->GetYaxis()->SetLabelFont(43);
   h_dummy2_copy__290->GetYaxis()->SetLabelOffset(0.02);
   h_dummy2_copy__290->GetYaxis()->SetLabelSize(16.8);
   h_dummy2_copy__290->GetYaxis()->SetTitleSize(21);
   h_dummy2_copy__290->GetYaxis()->SetTitleOffset(2.4);
   h_dummy2_copy__290->GetYaxis()->SetTitleFont(43);
   h_dummy2_copy__290->GetZaxis()->SetLabelFont(43);
   h_dummy2_copy__290->GetZaxis()->SetLabelSize(21);
   h_dummy2_copy__290->GetZaxis()->SetTitleSize(21);
   h_dummy2_copy__290->GetZaxis()->SetTitleFont(43);
   h_dummy2_copy__290->Draw("sameaxis");
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
   c_c1lep6jin3bex_lep0_eta->cd();
  
// ------------>Primitives in pad: pad0
   TPad *pad0 = new TPad("pad0", "pad0",0,0.2,1,1);
   pad0->Draw();
   pad0->cd();
   pad0->Range(-3.364198,-634.0705,2.808642,5706.634);
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
   Double_t xAxis323[11] = {-2.5, -2, -1.5, -1, -0.5, 0, 0.5, 1, 1.5, 2, 2.5}; 
   
   TH1D *h_dummy__291 = new TH1D("h_dummy__291","",10, xAxis323);
   h_dummy__291->SetMinimum(0);
   h_dummy__291->SetMaximum(5389.599);
   h_dummy__291->SetEntries(1164515);
   h_dummy__291->SetDirectory(0);
   h_dummy__291->SetStats(0);
   h_dummy__291->SetMarkerStyle(20);
   h_dummy__291->SetMarkerSize(1.2);
   h_dummy__291->GetXaxis()->SetRange(1,30);
   h_dummy__291->GetXaxis()->SetLabelFont(43);
   h_dummy__291->GetXaxis()->SetLabelSize(0);
   h_dummy__291->GetXaxis()->SetTitleSize(21);
   h_dummy__291->GetXaxis()->SetTitleOffset(1.4);
   h_dummy__291->GetXaxis()->SetTitleFont(43);
   h_dummy__291->GetYaxis()->SetTitle("Events");
   h_dummy__291->GetYaxis()->SetLabelFont(43);
   h_dummy__291->GetYaxis()->SetLabelSize(16.8);
   h_dummy__291->GetYaxis()->SetTitleSize(21);
   h_dummy__291->GetYaxis()->SetTitleOffset(2.4);
   h_dummy__291->GetYaxis()->SetTitleFont(43);
   h_dummy__291->GetZaxis()->SetLabelFont(43);
   h_dummy__291->GetZaxis()->SetLabelSize(21);
   h_dummy__291->GetZaxis()->SetTitleSize(21);
   h_dummy__291->GetZaxis()->SetTitleFont(43);
   h_dummy__291->Draw("HIST");
   
   THStack *h_stack = new THStack();
   h_stack->SetName("h_stack");
   h_stack->SetTitle("h_stack");
   Double_t xAxis324[11] = {-2.5, -2, -1.5, -1, -0.5, 0, 0.5, 1, 1.5, 2, 2.5}; 
   
   TH1F *h_stack_stack_33 = new TH1F("h_stack_stack_33","h_stack",10, xAxis324);
   h_stack_stack_33->SetMinimum(0);
   h_stack_stack_33->SetMaximum(2754.039);
   h_stack_stack_33->SetDirectory(0);
   h_stack_stack_33->SetStats(0);
   h_stack_stack_33->SetLineWidth(2);
   h_stack_stack_33->SetMarkerStyle(20);
   h_stack_stack_33->SetMarkerSize(1.2);
   h_stack_stack_33->GetXaxis()->SetLabelFont(43);
   h_stack_stack_33->GetXaxis()->SetLabelSize(21);
   h_stack_stack_33->GetXaxis()->SetTitleSize(21);
   h_stack_stack_33->GetXaxis()->SetTitleOffset(1.4);
   h_stack_stack_33->GetXaxis()->SetTitleFont(43);
   h_stack_stack_33->GetYaxis()->SetLabelFont(43);
   h_stack_stack_33->GetYaxis()->SetLabelSize(21);
   h_stack_stack_33->GetYaxis()->SetTitleSize(21);
   h_stack_stack_33->GetYaxis()->SetTitleOffset(1.4);
   h_stack_stack_33->GetYaxis()->SetTitleFont(43);
   h_stack_stack_33->GetZaxis()->SetLabelFont(43);
   h_stack_stack_33->GetZaxis()->SetLabelSize(21);
   h_stack_stack_33->GetZaxis()->SetTitleSize(21);
   h_stack_stack_33->GetZaxis()->SetTitleFont(43);
   h_stack->SetHistogram(h_stack_stack_33);
   
   Double_t xAxis325[11] = {-2.5, -2, -1.5, -1, -0.5, 0, 0.5, 1, 1.5, 2, 2.5}; 
   
   TH1D *c1lep6jin3bex_lep0_eta_topEW__292 = new TH1D("c1lep6jin3bex_lep0_eta_topEW__292","",10, xAxis325);
   c1lep6jin3bex_lep0_eta_topEW__292->SetBinContent(1,136.2741);
   c1lep6jin3bex_lep0_eta_topEW__292->SetBinContent(2,149.8887);
   c1lep6jin3bex_lep0_eta_topEW__292->SetBinContent(3,201.9756);
   c1lep6jin3bex_lep0_eta_topEW__292->SetBinContent(4,176.9521);
   c1lep6jin3bex_lep0_eta_topEW__292->SetBinContent(5,258.1104);
   c1lep6jin3bex_lep0_eta_topEW__292->SetBinContent(6,195.6541);
   c1lep6jin3bex_lep0_eta_topEW__292->SetBinContent(7,268.1248);
   c1lep6jin3bex_lep0_eta_topEW__292->SetBinContent(8,181.7214);
   c1lep6jin3bex_lep0_eta_topEW__292->SetBinContent(9,190.2011);
   c1lep6jin3bex_lep0_eta_topEW__292->SetBinContent(10,104.5053);
   c1lep6jin3bex_lep0_eta_topEW__292->SetBinContent(11,8.604929);
   c1lep6jin3bex_lep0_eta_topEW__292->SetBinError(1,30.45982);
   c1lep6jin3bex_lep0_eta_topEW__292->SetBinError(2,30.1084);
   c1lep6jin3bex_lep0_eta_topEW__292->SetBinError(3,29.21978);
   c1lep6jin3bex_lep0_eta_topEW__292->SetBinError(4,27.42873);
   c1lep6jin3bex_lep0_eta_topEW__292->SetBinError(5,26.57139);
   c1lep6jin3bex_lep0_eta_topEW__292->SetBinError(6,26.46427);
   c1lep6jin3bex_lep0_eta_topEW__292->SetBinError(7,30.17976);
   c1lep6jin3bex_lep0_eta_topEW__292->SetBinError(8,30.71572);
   c1lep6jin3bex_lep0_eta_topEW__292->SetBinError(9,31.76676);
   c1lep6jin3bex_lep0_eta_topEW__292->SetBinError(10,24.38245);
   c1lep6jin3bex_lep0_eta_topEW__292->SetBinError(11,3.525914);
   c1lep6jin3bex_lep0_eta_topEW__292->SetEntries(1125879);
   c1lep6jin3bex_lep0_eta_topEW__292->SetDirectory(0);
   c1lep6jin3bex_lep0_eta_topEW__292->SetStats(0);

   ci = TColor::GetColor("#66cc66");
   c1lep6jin3bex_lep0_eta_topEW__292->SetFillColor(ci);
   c1lep6jin3bex_lep0_eta_topEW__292->SetMarkerStyle(20);
   c1lep6jin3bex_lep0_eta_topEW__292->SetMarkerSize(1.2);
   c1lep6jin3bex_lep0_eta_topEW__292->GetXaxis()->SetTitle("Lepton #eta");
   c1lep6jin3bex_lep0_eta_topEW__292->GetXaxis()->SetRange(1,30);
   c1lep6jin3bex_lep0_eta_topEW__292->GetXaxis()->SetLabelFont(43);
   c1lep6jin3bex_lep0_eta_topEW__292->GetXaxis()->SetLabelSize(21);
   c1lep6jin3bex_lep0_eta_topEW__292->GetXaxis()->SetTitleSize(21);
   c1lep6jin3bex_lep0_eta_topEW__292->GetXaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_lep0_eta_topEW__292->GetXaxis()->SetTitleFont(43);
   c1lep6jin3bex_lep0_eta_topEW__292->GetYaxis()->SetLabelFont(43);
   c1lep6jin3bex_lep0_eta_topEW__292->GetYaxis()->SetLabelSize(21);
   c1lep6jin3bex_lep0_eta_topEW__292->GetYaxis()->SetTitleSize(21);
   c1lep6jin3bex_lep0_eta_topEW__292->GetYaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_lep0_eta_topEW__292->GetYaxis()->SetTitleFont(43);
   c1lep6jin3bex_lep0_eta_topEW__292->GetZaxis()->SetLabelFont(43);
   c1lep6jin3bex_lep0_eta_topEW__292->GetZaxis()->SetLabelSize(21);
   c1lep6jin3bex_lep0_eta_topEW__292->GetZaxis()->SetTitleSize(21);
   c1lep6jin3bex_lep0_eta_topEW__292->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep6jin3bex_lep0_eta_topEW,"");
   Double_t xAxis326[11] = {-2.5, -2, -1.5, -1, -0.5, 0, 0.5, 1, 1.5, 2, 2.5}; 
   
   TH1D *c1lep6jin3bex_lep0_eta_ttbarbb__293 = new TH1D("c1lep6jin3bex_lep0_eta_ttbarbb__293","",10, xAxis326);
   c1lep6jin3bex_lep0_eta_ttbarbb__293->SetBinContent(1,227.1302);
   c1lep6jin3bex_lep0_eta_ttbarbb__293->SetBinContent(2,365.732);
   c1lep6jin3bex_lep0_eta_ttbarbb__293->SetBinContent(3,809.0759);
   c1lep6jin3bex_lep0_eta_ttbarbb__293->SetBinContent(4,783.4508);
   c1lep6jin3bex_lep0_eta_ttbarbb__293->SetBinContent(5,1421.773);
   c1lep6jin3bex_lep0_eta_ttbarbb__293->SetBinContent(6,962.7875);
   c1lep6jin3bex_lep0_eta_ttbarbb__293->SetBinContent(7,1275.936);
   c1lep6jin3bex_lep0_eta_ttbarbb__293->SetBinContent(8,657.9422);
   c1lep6jin3bex_lep0_eta_ttbarbb__293->SetBinContent(9,563.9226);
   c1lep6jin3bex_lep0_eta_ttbarbb__293->SetBinContent(10,195.5945);
   c1lep6jin3bex_lep0_eta_ttbarbb__293->SetBinContent(11,19.14868);
   c1lep6jin3bex_lep0_eta_ttbarbb__293->SetBinError(1,9.30834);
   c1lep6jin3bex_lep0_eta_ttbarbb__293->SetBinError(2,11.96283);
   c1lep6jin3bex_lep0_eta_ttbarbb__293->SetBinError(3,17.92023);
   c1lep6jin3bex_lep0_eta_ttbarbb__293->SetBinError(4,17.9776);
   c1lep6jin3bex_lep0_eta_ttbarbb__293->SetBinError(5,25.57818);
   c1lep6jin3bex_lep0_eta_ttbarbb__293->SetBinError(6,19.86969);
   c1lep6jin3bex_lep0_eta_ttbarbb__293->SetBinError(7,23.25698);
   c1lep6jin3bex_lep0_eta_ttbarbb__293->SetBinError(8,16.15675);
   c1lep6jin3bex_lep0_eta_ttbarbb__293->SetBinError(9,16.05878);
   c1lep6jin3bex_lep0_eta_ttbarbb__293->SetBinError(10,8.680218);
   c1lep6jin3bex_lep0_eta_ttbarbb__293->SetBinError(11,2.480605);
   c1lep6jin3bex_lep0_eta_ttbarbb__293->SetEntries(26042);
   c1lep6jin3bex_lep0_eta_ttbarbb__293->SetDirectory(0);
   c1lep6jin3bex_lep0_eta_ttbarbb__293->SetStats(0);

   ci = TColor::GetColor("#6666cc");
   c1lep6jin3bex_lep0_eta_ttbarbb__293->SetFillColor(ci);
   c1lep6jin3bex_lep0_eta_ttbarbb__293->SetMarkerStyle(20);
   c1lep6jin3bex_lep0_eta_ttbarbb__293->SetMarkerSize(1.2);
   c1lep6jin3bex_lep0_eta_ttbarbb__293->GetXaxis()->SetTitle("Lepton #eta");
   c1lep6jin3bex_lep0_eta_ttbarbb__293->GetXaxis()->SetRange(1,30);
   c1lep6jin3bex_lep0_eta_ttbarbb__293->GetXaxis()->SetLabelFont(43);
   c1lep6jin3bex_lep0_eta_ttbarbb__293->GetXaxis()->SetLabelSize(21);
   c1lep6jin3bex_lep0_eta_ttbarbb__293->GetXaxis()->SetTitleSize(21);
   c1lep6jin3bex_lep0_eta_ttbarbb__293->GetXaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_lep0_eta_ttbarbb__293->GetXaxis()->SetTitleFont(43);
   c1lep6jin3bex_lep0_eta_ttbarbb__293->GetYaxis()->SetLabelFont(43);
   c1lep6jin3bex_lep0_eta_ttbarbb__293->GetYaxis()->SetLabelSize(21);
   c1lep6jin3bex_lep0_eta_ttbarbb__293->GetYaxis()->SetTitleSize(21);
   c1lep6jin3bex_lep0_eta_ttbarbb__293->GetYaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_lep0_eta_ttbarbb__293->GetYaxis()->SetTitleFont(43);
   c1lep6jin3bex_lep0_eta_ttbarbb__293->GetZaxis()->SetLabelFont(43);
   c1lep6jin3bex_lep0_eta_ttbarbb__293->GetZaxis()->SetLabelSize(21);
   c1lep6jin3bex_lep0_eta_ttbarbb__293->GetZaxis()->SetTitleSize(21);
   c1lep6jin3bex_lep0_eta_ttbarbb__293->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep6jin3bex_lep0_eta_ttbarbb,"");
   Double_t xAxis327[11] = {-2.5, -2, -1.5, -1, -0.5, 0, 0.5, 1, 1.5, 2, 2.5}; 
   
   TH1D *c1lep6jin3bex_lep0_eta_ttbarcc__294 = new TH1D("c1lep6jin3bex_lep0_eta_ttbarcc__294","",10, xAxis327);
   c1lep6jin3bex_lep0_eta_ttbarcc__294->SetBinContent(1,51.67076);
   c1lep6jin3bex_lep0_eta_ttbarcc__294->SetBinContent(2,97.24861);
   c1lep6jin3bex_lep0_eta_ttbarcc__294->SetBinContent(3,199.1252);
   c1lep6jin3bex_lep0_eta_ttbarcc__294->SetBinContent(4,203.4856);
   c1lep6jin3bex_lep0_eta_ttbarcc__294->SetBinContent(5,349.7627);
   c1lep6jin3bex_lep0_eta_ttbarcc__294->SetBinContent(6,225.6262);
   c1lep6jin3bex_lep0_eta_ttbarcc__294->SetBinContent(7,321.6398);
   c1lep6jin3bex_lep0_eta_ttbarcc__294->SetBinContent(8,160.1741);
   c1lep6jin3bex_lep0_eta_ttbarcc__294->SetBinContent(9,145.2496);
   c1lep6jin3bex_lep0_eta_ttbarcc__294->SetBinContent(10,56.87489);
   c1lep6jin3bex_lep0_eta_ttbarcc__294->SetBinContent(11,3.398023);
   c1lep6jin3bex_lep0_eta_ttbarcc__294->SetBinError(1,5.859188);
   c1lep6jin3bex_lep0_eta_ttbarcc__294->SetBinError(2,6.93231);
   c1lep6jin3bex_lep0_eta_ttbarcc__294->SetBinError(3,9.107526);
   c1lep6jin3bex_lep0_eta_ttbarcc__294->SetBinError(4,8.876807);
   c1lep6jin3bex_lep0_eta_ttbarcc__294->SetBinError(5,12.24194);
   c1lep6jin3bex_lep0_eta_ttbarcc__294->SetBinError(6,9.753367);
   c1lep6jin3bex_lep0_eta_ttbarcc__294->SetBinError(7,12.14163);
   c1lep6jin3bex_lep0_eta_ttbarcc__294->SetBinError(8,9.450082);
   c1lep6jin3bex_lep0_eta_ttbarcc__294->SetBinError(9,11.64986);
   c1lep6jin3bex_lep0_eta_ttbarcc__294->SetBinError(10,5.405596);
   c1lep6jin3bex_lep0_eta_ttbarcc__294->SetBinError(11,0.9503437);
   c1lep6jin3bex_lep0_eta_ttbarcc__294->SetEntries(5630);
   c1lep6jin3bex_lep0_eta_ttbarcc__294->SetDirectory(0);
   c1lep6jin3bex_lep0_eta_ttbarcc__294->SetStats(0);

   ci = TColor::GetColor("#ccccff");
   c1lep6jin3bex_lep0_eta_ttbarcc__294->SetFillColor(ci);
   c1lep6jin3bex_lep0_eta_ttbarcc__294->SetMarkerStyle(20);
   c1lep6jin3bex_lep0_eta_ttbarcc__294->SetMarkerSize(1.2);
   c1lep6jin3bex_lep0_eta_ttbarcc__294->GetXaxis()->SetTitle("Lepton #eta");
   c1lep6jin3bex_lep0_eta_ttbarcc__294->GetXaxis()->SetRange(1,30);
   c1lep6jin3bex_lep0_eta_ttbarcc__294->GetXaxis()->SetLabelFont(43);
   c1lep6jin3bex_lep0_eta_ttbarcc__294->GetXaxis()->SetLabelSize(21);
   c1lep6jin3bex_lep0_eta_ttbarcc__294->GetXaxis()->SetTitleSize(21);
   c1lep6jin3bex_lep0_eta_ttbarcc__294->GetXaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_lep0_eta_ttbarcc__294->GetXaxis()->SetTitleFont(43);
   c1lep6jin3bex_lep0_eta_ttbarcc__294->GetYaxis()->SetLabelFont(43);
   c1lep6jin3bex_lep0_eta_ttbarcc__294->GetYaxis()->SetLabelSize(21);
   c1lep6jin3bex_lep0_eta_ttbarcc__294->GetYaxis()->SetTitleSize(21);
   c1lep6jin3bex_lep0_eta_ttbarcc__294->GetYaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_lep0_eta_ttbarcc__294->GetYaxis()->SetTitleFont(43);
   c1lep6jin3bex_lep0_eta_ttbarcc__294->GetZaxis()->SetLabelFont(43);
   c1lep6jin3bex_lep0_eta_ttbarcc__294->GetZaxis()->SetLabelSize(21);
   c1lep6jin3bex_lep0_eta_ttbarcc__294->GetZaxis()->SetTitleSize(21);
   c1lep6jin3bex_lep0_eta_ttbarcc__294->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep6jin3bex_lep0_eta_ttbarcc,"");
   Double_t xAxis328[11] = {-2.5, -2, -1.5, -1, -0.5, 0, 0.5, 1, 1.5, 2, 2.5}; 
   
   TH1D *c1lep6jin3bex_lep0_eta_ttbarlight__295 = new TH1D("c1lep6jin3bex_lep0_eta_ttbarlight__295","",10, xAxis328);
   c1lep6jin3bex_lep0_eta_ttbarlight__295->SetBinContent(1,76.32719);
   c1lep6jin3bex_lep0_eta_ttbarlight__295->SetBinContent(2,134.9976);
   c1lep6jin3bex_lep0_eta_ttbarlight__295->SetBinContent(3,247.9751);
   c1lep6jin3bex_lep0_eta_ttbarlight__295->SetBinContent(4,281.2151);
   c1lep6jin3bex_lep0_eta_ttbarlight__295->SetBinContent(5,460.4646);
   c1lep6jin3bex_lep0_eta_ttbarlight__295->SetBinContent(6,317.4023);
   c1lep6jin3bex_lep0_eta_ttbarlight__295->SetBinContent(7,439.1968);
   c1lep6jin3bex_lep0_eta_ttbarlight__295->SetBinContent(8,222.7206);
   c1lep6jin3bex_lep0_eta_ttbarlight__295->SetBinContent(9,203.5627);
   c1lep6jin3bex_lep0_eta_ttbarlight__295->SetBinContent(10,62.81317);
   c1lep6jin3bex_lep0_eta_ttbarlight__295->SetBinContent(11,2.950128);
   c1lep6jin3bex_lep0_eta_ttbarlight__295->SetBinError(1,8.178246);
   c1lep6jin3bex_lep0_eta_ttbarlight__295->SetBinError(2,9.148131);
   c1lep6jin3bex_lep0_eta_ttbarlight__295->SetBinError(3,11.30597);
   c1lep6jin3bex_lep0_eta_ttbarlight__295->SetBinError(4,12.7737);
   c1lep6jin3bex_lep0_eta_ttbarlight__295->SetBinError(5,14.68009);
   c1lep6jin3bex_lep0_eta_ttbarlight__295->SetBinError(6,12.74952);
   c1lep6jin3bex_lep0_eta_ttbarlight__295->SetBinError(7,15.58298);
   c1lep6jin3bex_lep0_eta_ttbarlight__295->SetBinError(8,10.94634);
   c1lep6jin3bex_lep0_eta_ttbarlight__295->SetBinError(9,13.20429);
   c1lep6jin3bex_lep0_eta_ttbarlight__295->SetBinError(10,6.358852);
   c1lep6jin3bex_lep0_eta_ttbarlight__295->SetBinError(11,1.023372);
   c1lep6jin3bex_lep0_eta_ttbarlight__295->SetEntries(6954);
   c1lep6jin3bex_lep0_eta_ttbarlight__295->SetDirectory(0);
   c1lep6jin3bex_lep0_eta_ttbarlight__295->SetStats(0);
   c1lep6jin3bex_lep0_eta_ttbarlight__295->SetMarkerStyle(20);
   c1lep6jin3bex_lep0_eta_ttbarlight__295->SetMarkerSize(1.2);
   c1lep6jin3bex_lep0_eta_ttbarlight__295->GetXaxis()->SetTitle("Lepton #eta");
   c1lep6jin3bex_lep0_eta_ttbarlight__295->GetXaxis()->SetRange(1,30);
   c1lep6jin3bex_lep0_eta_ttbarlight__295->GetXaxis()->SetLabelFont(43);
   c1lep6jin3bex_lep0_eta_ttbarlight__295->GetXaxis()->SetLabelSize(21);
   c1lep6jin3bex_lep0_eta_ttbarlight__295->GetXaxis()->SetTitleSize(21);
   c1lep6jin3bex_lep0_eta_ttbarlight__295->GetXaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_lep0_eta_ttbarlight__295->GetXaxis()->SetTitleFont(43);
   c1lep6jin3bex_lep0_eta_ttbarlight__295->GetYaxis()->SetLabelFont(43);
   c1lep6jin3bex_lep0_eta_ttbarlight__295->GetYaxis()->SetLabelSize(21);
   c1lep6jin3bex_lep0_eta_ttbarlight__295->GetYaxis()->SetTitleSize(21);
   c1lep6jin3bex_lep0_eta_ttbarlight__295->GetYaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_lep0_eta_ttbarlight__295->GetYaxis()->SetTitleFont(43);
   c1lep6jin3bex_lep0_eta_ttbarlight__295->GetZaxis()->SetLabelFont(43);
   c1lep6jin3bex_lep0_eta_ttbarlight__295->GetZaxis()->SetLabelSize(21);
   c1lep6jin3bex_lep0_eta_ttbarlight__295->GetZaxis()->SetTitleSize(21);
   c1lep6jin3bex_lep0_eta_ttbarlight__295->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep6jin3bex_lep0_eta_ttbarlight,"");
   Double_t xAxis329[11] = {-2.5, -2, -1.5, -1, -0.5, 0, 0.5, 1, 1.5, 2, 2.5}; 
   
   TH1D *c1lep6jin3bex_lep0_eta_uHcW__296 = new TH1D("c1lep6jin3bex_lep0_eta_uHcW__296","",10, xAxis329);
   c1lep6jin3bex_lep0_eta_uHcW__296->SetBinContent(1,10.89366);
   c1lep6jin3bex_lep0_eta_uHcW__296->SetBinContent(2,35.94449);
   c1lep6jin3bex_lep0_eta_uHcW__296->SetBinContent(3,79.39017);
   c1lep6jin3bex_lep0_eta_uHcW__296->SetBinContent(4,84.83297);
   c1lep6jin3bex_lep0_eta_uHcW__296->SetBinContent(5,132.7841);
   c1lep6jin3bex_lep0_eta_uHcW__296->SetBinContent(6,85.70547);
   c1lep6jin3bex_lep0_eta_uHcW__296->SetBinContent(7,126.0301);
   c1lep6jin3bex_lep0_eta_uHcW__296->SetBinContent(8,65.61803);
   c1lep6jin3bex_lep0_eta_uHcW__296->SetBinContent(9,45.49653);
   c1lep6jin3bex_lep0_eta_uHcW__296->SetBinContent(10,22.03136);
   c1lep6jin3bex_lep0_eta_uHcW__296->SetBinContent(11,0.3056251);
   c1lep6jin3bex_lep0_eta_uHcW__296->SetBinError(1,5.233652);
   c1lep6jin3bex_lep0_eta_uHcW__296->SetBinError(2,6.372328);
   c1lep6jin3bex_lep0_eta_uHcW__296->SetBinError(3,10.56723);
   c1lep6jin3bex_lep0_eta_uHcW__296->SetBinError(4,9.957331);
   c1lep6jin3bex_lep0_eta_uHcW__296->SetBinError(5,14.11121);
   c1lep6jin3bex_lep0_eta_uHcW__296->SetBinError(6,11.19753);
   c1lep6jin3bex_lep0_eta_uHcW__296->SetBinError(7,14.77148);
   c1lep6jin3bex_lep0_eta_uHcW__296->SetBinError(8,8.648923);
   c1lep6jin3bex_lep0_eta_uHcW__296->SetBinError(9,7.956583);
   c1lep6jin3bex_lep0_eta_uHcW__296->SetBinError(10,5.706947);
   c1lep6jin3bex_lep0_eta_uHcW__296->SetBinError(11,1.2826);
   c1lep6jin3bex_lep0_eta_uHcW__296->SetEntries(5540);
   c1lep6jin3bex_lep0_eta_uHcW__296->SetDirectory(0);
   c1lep6jin3bex_lep0_eta_uHcW__296->SetStats(0);
   c1lep6jin3bex_lep0_eta_uHcW__296->SetFillColor(2);
   c1lep6jin3bex_lep0_eta_uHcW__296->SetLineColor(2);
   c1lep6jin3bex_lep0_eta_uHcW__296->SetMarkerStyle(20);
   c1lep6jin3bex_lep0_eta_uHcW__296->SetMarkerSize(1.2);
   c1lep6jin3bex_lep0_eta_uHcW__296->GetXaxis()->SetTitle("Lepton #eta");
   c1lep6jin3bex_lep0_eta_uHcW__296->GetXaxis()->SetRange(1,30);
   c1lep6jin3bex_lep0_eta_uHcW__296->GetXaxis()->SetLabelFont(43);
   c1lep6jin3bex_lep0_eta_uHcW__296->GetXaxis()->SetLabelSize(21);
   c1lep6jin3bex_lep0_eta_uHcW__296->GetXaxis()->SetTitleSize(21);
   c1lep6jin3bex_lep0_eta_uHcW__296->GetXaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_lep0_eta_uHcW__296->GetXaxis()->SetTitleFont(43);
   c1lep6jin3bex_lep0_eta_uHcW__296->GetYaxis()->SetLabelFont(43);
   c1lep6jin3bex_lep0_eta_uHcW__296->GetYaxis()->SetLabelSize(21);
   c1lep6jin3bex_lep0_eta_uHcW__296->GetYaxis()->SetTitleSize(21);
   c1lep6jin3bex_lep0_eta_uHcW__296->GetYaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_lep0_eta_uHcW__296->GetYaxis()->SetTitleFont(43);
   c1lep6jin3bex_lep0_eta_uHcW__296->GetZaxis()->SetLabelFont(43);
   c1lep6jin3bex_lep0_eta_uHcW__296->GetZaxis()->SetLabelSize(21);
   c1lep6jin3bex_lep0_eta_uHcW__296->GetZaxis()->SetTitleSize(21);
   c1lep6jin3bex_lep0_eta_uHcW__296->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep6jin3bex_lep0_eta_uHcW,"");
   h_stack->Draw("hist same");
   
   Double_t g_totErr_fx3131[10] = {
   -2.25,
   -1.75,
   -1.25,
   -0.75,
   -0.25,
   0.25,
   0.75,
   1.25,
   1.75,
   2.25};
   Double_t g_totErr_fy3131[10] = {
   491.4022,
   747.867,
   1458.152,
   1445.104,
   2490.111,
   1701.47,
   2304.897,
   1222.558,
   1102.936,
   419.7879};
   Double_t g_totErr_felx3131[10] = {
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25};
   Double_t g_totErr_fely3131[10] = {
   93.4295,
   143.7837,
   279.2298,
   285.8472,
   498.0997,
   336.4717,
   461.1806,
   233.3899,
   211.9441,
   80.64587};
   Double_t g_totErr_fehx3131[10] = {
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25};
   Double_t g_totErr_fehy3131[10] = {
   93.4295,
   143.7837,
   279.2298,
   285.8472,
   498.0997,
   336.4717,
   461.1806,
   233.3899,
   211.9441,
   80.64587};
   grae = new TGraphAsymmErrors(10,g_totErr_fx3131,g_totErr_fy3131,g_totErr_felx3131,g_totErr_fehx3131,g_totErr_fely3131,g_totErr_fehy3131);
   grae->SetName("g_totErr");
   grae->SetTitle("");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(3354);
   grae->SetLineColor(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0);
   
   TH1F *Graph_g_totErr3131 = new TH1F("Graph_g_totErr3131","",100,-3,3);
   Graph_g_totErr3131->SetMinimum(74.23515);
   Graph_g_totErr3131->SetMaximum(3253.117);
   Graph_g_totErr3131->SetDirectory(0);
   Graph_g_totErr3131->SetStats(0);
   Graph_g_totErr3131->SetLineWidth(2);
   Graph_g_totErr3131->SetMarkerStyle(20);
   Graph_g_totErr3131->SetMarkerSize(1.2);
   Graph_g_totErr3131->GetXaxis()->SetLabelFont(43);
   Graph_g_totErr3131->GetXaxis()->SetLabelSize(21);
   Graph_g_totErr3131->GetXaxis()->SetTitleSize(21);
   Graph_g_totErr3131->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_totErr3131->GetXaxis()->SetTitleFont(43);
   Graph_g_totErr3131->GetYaxis()->SetLabelFont(43);
   Graph_g_totErr3131->GetYaxis()->SetLabelSize(21);
   Graph_g_totErr3131->GetYaxis()->SetTitleSize(21);
   Graph_g_totErr3131->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_totErr3131->GetYaxis()->SetTitleFont(43);
   Graph_g_totErr3131->GetZaxis()->SetLabelFont(43);
   Graph_g_totErr3131->GetZaxis()->SetLabelSize(21);
   Graph_g_totErr3131->GetZaxis()->SetTitleSize(21);
   Graph_g_totErr3131->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_totErr3131);
   
   grae->Draw("e2");
   
   Double_t Graph_from_c1lep6jin3bex_lep0_eta_Data_fx3132[10] = {
   -2.25,
   -1.75,
   -1.25,
   -0.75,
   -0.25,
   0.25,
   0.75,
   1.25,
   1.75,
   2.25};
   Double_t Graph_from_c1lep6jin3bex_lep0_eta_Data_fy3132[10] = {
   465,
   764,
   1590,
   1695,
   2940,
   1979,
   2571,
   1255,
   1141,
   445};
   Double_t Graph_from_c1lep6jin3bex_lep0_eta_Data_felx3132[10] = {
   0.2495,
   0.2495,
   0.2495,
   0.2495,
   0.2495,
   0.2495,
   0.2495,
   0.2495,
   0.2495,
   0.2495};
   Double_t Graph_from_c1lep6jin3bex_lep0_eta_Data_fely3132[10] = {
   21.56386,
   27.64055,
   39.8748,
   41.17038,
   54.22177,
   44.48595,
   50.70503,
   35.42598,
   33.77869,
   21.09502};
   Double_t Graph_from_c1lep6jin3bex_lep0_eta_Data_fehx3132[10] = {
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25};
   Double_t Graph_from_c1lep6jin3bex_lep0_eta_Data_fehy3132[10] = {
   21.56386,
   27.64055,
   39.8748,
   41.17038,
   54.22177,
   44.48595,
   50.70503,
   35.42598,
   33.77869,
   21.09502};
   grae = new TGraphAsymmErrors(10,Graph_from_c1lep6jin3bex_lep0_eta_Data_fx3132,Graph_from_c1lep6jin3bex_lep0_eta_Data_fy3132,Graph_from_c1lep6jin3bex_lep0_eta_Data_felx3132,Graph_from_c1lep6jin3bex_lep0_eta_Data_fehx3132,Graph_from_c1lep6jin3bex_lep0_eta_Data_fely3132,Graph_from_c1lep6jin3bex_lep0_eta_Data_fehy3132);
   grae->SetName("Graph_from_c1lep6jin3bex_lep0_eta_Data");
   grae->SetTitle("");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_c1lep6jin3bex_lep0_eta_Data3132 = new TH1F("Graph_Graph_from_c1lep6jin3bex_lep0_eta_Data3132","",100,-2.99945,2.99995);
   Graph_Graph_from_c1lep6jin3bex_lep0_eta_Data3132->SetMinimum(166.8733);
   Graph_Graph_from_c1lep6jin3bex_lep0_eta_Data3132->SetMaximum(3251.253);
   Graph_Graph_from_c1lep6jin3bex_lep0_eta_Data3132->SetDirectory(0);
   Graph_Graph_from_c1lep6jin3bex_lep0_eta_Data3132->SetStats(0);
   Graph_Graph_from_c1lep6jin3bex_lep0_eta_Data3132->SetLineWidth(2);
   Graph_Graph_from_c1lep6jin3bex_lep0_eta_Data3132->SetMarkerStyle(20);
   Graph_Graph_from_c1lep6jin3bex_lep0_eta_Data3132->SetMarkerSize(1.2);
   Graph_Graph_from_c1lep6jin3bex_lep0_eta_Data3132->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep6jin3bex_lep0_eta_Data3132->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep6jin3bex_lep0_eta_Data3132->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep6jin3bex_lep0_eta_Data3132->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep6jin3bex_lep0_eta_Data3132->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep6jin3bex_lep0_eta_Data3132->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep6jin3bex_lep0_eta_Data3132->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep6jin3bex_lep0_eta_Data3132->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep6jin3bex_lep0_eta_Data3132->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep6jin3bex_lep0_eta_Data3132->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep6jin3bex_lep0_eta_Data3132->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep6jin3bex_lep0_eta_Data3132->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep6jin3bex_lep0_eta_Data3132->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep6jin3bex_lep0_eta_Data3132->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_c1lep6jin3bex_lep0_eta_Data3132);
   
   grae->Draw("ep1 ");
   Double_t xAxis330[11] = {-2.5, -2, -1.5, -1, -0.5, 0, 0.5, 1, 1.5, 2, 2.5}; 
   
   TH1D *h_dummy_copy__297 = new TH1D("h_dummy_copy__297","",10, xAxis330);
   h_dummy_copy__297->SetEntries(1164515);
   h_dummy_copy__297->SetDirectory(0);
   h_dummy_copy__297->SetStats(0);
   h_dummy_copy__297->SetMarkerStyle(20);
   h_dummy_copy__297->SetMarkerSize(1.2);
   h_dummy_copy__297->GetXaxis()->SetTitle("lepton #eta");
   h_dummy_copy__297->GetXaxis()->SetRange(1,30);
   h_dummy_copy__297->GetXaxis()->SetLabelFont(43);
   h_dummy_copy__297->GetXaxis()->SetLabelSize(21);
   h_dummy_copy__297->GetXaxis()->SetTitleSize(21);
   h_dummy_copy__297->GetXaxis()->SetTitleOffset(1.4);
   h_dummy_copy__297->GetXaxis()->SetTitleFont(43);
   h_dummy_copy__297->GetYaxis()->SetTitle("Events");
   h_dummy_copy__297->GetYaxis()->SetLabelFont(43);
   h_dummy_copy__297->GetYaxis()->SetLabelSize(16.8);
   h_dummy_copy__297->GetYaxis()->SetTitleSize(21);
   h_dummy_copy__297->GetYaxis()->SetTitleOffset(2.4);
   h_dummy_copy__297->GetYaxis()->SetTitleFont(43);
   h_dummy_copy__297->GetZaxis()->SetLabelFont(43);
   h_dummy_copy__297->GetZaxis()->SetLabelSize(21);
   h_dummy_copy__297->GetZaxis()->SetTitleSize(21);
   h_dummy_copy__297->GetZaxis()->SetTitleFont(43);
   h_dummy_copy__297->Draw("sameaxis");
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
   TLegendEntry *entry=leg->AddEntry("c1lep6jin3bex_lep0_eta_Data","Data","lep");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep6jin3bex_lep0_eta_uHcW","t#bar{t}#rightarrowWbHc (BR=1%)","f");
   entry->SetFillColor(2);
   entry->SetFillStyle(1001);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep6jin3bex_lep0_eta_ttbarlight","t#bar{t}+light","f");
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep6jin3bex_lep0_eta_ttbarcc","t#bar{t}+cc","f");

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
   entry=leg->AddEntry("c1lep6jin3bex_lep0_eta_ttbarbb","t#bar{t}+bb","f");

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
   entry=leg->AddEntry("c1lep6jin3bex_lep0_eta_topEW","Non-t#bar{t}","f");

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
   c_c1lep6jin3bex_lep0_eta->cd();
   c_c1lep6jin3bex_lep0_eta->Modified();
   c_c1lep6jin3bex_lep0_eta->cd();
   c_c1lep6jin3bex_lep0_eta->SetSelected(c_c1lep6jin3bex_lep0_eta);
}
