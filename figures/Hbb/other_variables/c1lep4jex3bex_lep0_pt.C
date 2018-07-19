void c1lep4jex3bex_lep0_pt()
{
//=========Macro generated from canvas: c_c1lep4jex3bex_lep0_pt/c_c1lep4jex3bex_lep0_pt
//=========  (Thu Jul 19 17:38:07 2018) by ROOT version6.04/14
   TCanvas *c_c1lep4jex3bex_lep0_pt = new TCanvas("c_c1lep4jex3bex_lep0_pt", "c_c1lep4jex3bex_lep0_pt",0,0,600,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c_c1lep4jex3bex_lep0_pt->SetHighLightColor(2);
   c_c1lep4jex3bex_lep0_pt->Range(0,0,1,1);
   c_c1lep4jex3bex_lep0_pt->SetFillColor(0);
   c_c1lep4jex3bex_lep0_pt->SetBorderMode(0);
   c_c1lep4jex3bex_lep0_pt->SetBorderSize(2);
   c_c1lep4jex3bex_lep0_pt->SetTickx(1);
   c_c1lep4jex3bex_lep0_pt->SetTicky(1);
   c_c1lep4jex3bex_lep0_pt->SetLeftMargin(0.16);
   c_c1lep4jex3bex_lep0_pt->SetRightMargin(0.05);
   c_c1lep4jex3bex_lep0_pt->SetTopMargin(0.05);
   c_c1lep4jex3bex_lep0_pt->SetBottomMargin(0.16);
   c_c1lep4jex3bex_lep0_pt->SetFrameBorderMode(0);
  
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
   Double_t xAxis341[5] = {25, 75, 125, 175, 225}; 
   
   TH1D *h_dummy2__307 = new TH1D("h_dummy2__307","Data/MC",4, xAxis341);
   h_dummy2__307->SetMinimum(0.5);
   h_dummy2__307->SetMaximum(1.5);
   h_dummy2__307->SetEntries(2920966);
   h_dummy2__307->SetDirectory(0);
   h_dummy2__307->SetStats(0);
   h_dummy2__307->SetMarkerStyle(20);
   h_dummy2__307->SetMarkerSize(1.2);
   h_dummy2__307->GetXaxis()->SetTitle("lepton p_{T} [Gev]");
   h_dummy2__307->GetXaxis()->SetRange(1,16);
   h_dummy2__307->GetXaxis()->SetLabelFont(43);
   h_dummy2__307->GetXaxis()->SetLabelOffset(0.025);
   h_dummy2__307->GetXaxis()->SetLabelSize(16.8);
   h_dummy2__307->GetXaxis()->SetTitleSize(21);
   h_dummy2__307->GetXaxis()->SetTitleOffset(5.05);
   h_dummy2__307->GetXaxis()->SetTitleFont(43);
   h_dummy2__307->GetYaxis()->SetTitle("Data / Bkg");
   h_dummy2__307->GetYaxis()->SetNdivisions(-504);
   h_dummy2__307->GetYaxis()->SetLabelFont(43);
   h_dummy2__307->GetYaxis()->SetLabelOffset(0.02);
   h_dummy2__307->GetYaxis()->SetLabelSize(16.8);
   h_dummy2__307->GetYaxis()->SetTitleSize(21);
   h_dummy2__307->GetYaxis()->SetTitleOffset(2.4);
   h_dummy2__307->GetYaxis()->SetTitleFont(43);
   h_dummy2__307->GetZaxis()->SetLabelFont(43);
   h_dummy2__307->GetZaxis()->SetLabelSize(21);
   h_dummy2__307->GetZaxis()->SetTitleSize(21);
   h_dummy2__307->GetZaxis()->SetTitleFont(43);
   h_dummy2__307->Draw("HIST");
   
   Double_t Graph_from_h_ratio_fx3137[4] = {
   50,
   100,
   150,
   200};
   Double_t Graph_from_h_ratio_fy3137[4] = {
   1.119597,
   1.05261,
   1.155031,
   1.236833};
   Double_t Graph_from_h_ratio_felx3137[4] = {
   24.95,
   24.95,
   24.95,
   24.95};
   Double_t Graph_from_h_ratio_fely3137[4] = {
   0.01139366,
   0.03048803,
   0.06829841,
   0.1365854};
   Double_t Graph_from_h_ratio_fehx3137[4] = {
   25,
   25,
   25,
   25};
   Double_t Graph_from_h_ratio_fehy3137[4] = {
   0.01139366,
   0.03048803,
   0.06829841,
   0.1365854};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(4,Graph_from_h_ratio_fx3137,Graph_from_h_ratio_fy3137,Graph_from_h_ratio_felx3137,Graph_from_h_ratio_fehx3137,Graph_from_h_ratio_fely3137,Graph_from_h_ratio_fehy3137);
   grae->SetName("Graph_from_h_ratio");
   grae->SetTitle("");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(24);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_h_ratio3137 = new TH1F("Graph_Graph_from_h_ratio3137","",100,5.055,244.995);
   Graph_Graph_from_h_ratio3137->SetMinimum(0.9869922);
   Graph_Graph_from_h_ratio3137->SetMaximum(1.408549);
   Graph_Graph_from_h_ratio3137->SetDirectory(0);
   Graph_Graph_from_h_ratio3137->SetStats(0);
   Graph_Graph_from_h_ratio3137->SetLineWidth(2);
   Graph_Graph_from_h_ratio3137->SetMarkerStyle(20);
   Graph_Graph_from_h_ratio3137->SetMarkerSize(1.2);
   Graph_Graph_from_h_ratio3137->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3137->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3137->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3137->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3137->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3137->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3137->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3137->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3137->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3137->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3137->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3137->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3137->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3137->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_h_ratio3137);
   
   grae->Draw("pe0");
   TLine *line = new TLine(25,1,225,1);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t g_ratio2_fx3138[4] = {
   50,
   100,
   150,
   200};
   Double_t g_ratio2_fy3138[4] = {
   1,
   1,
   1,
   1};
   Double_t g_ratio2_felx3138[4] = {
   25,
   25,
   25,
   25};
   Double_t g_ratio2_fely3138[4] = {
   0.1934219,
   0.1938099,
   0.2159865,
   0.2312703};
   Double_t g_ratio2_fehx3138[4] = {
   25,
   25,
   25,
   25};
   Double_t g_ratio2_fehy3138[4] = {
   0.1934219,
   0.1938099,
   0.2159865,
   0.2312703};
   grae = new TGraphAsymmErrors(4,g_ratio2_fx3138,g_ratio2_fy3138,g_ratio2_felx3138,g_ratio2_fehx3138,g_ratio2_fely3138,g_ratio2_fehy3138);
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
   
   TH1F *Graph_g_ratio23138 = new TH1F("Graph_g_ratio23138","",100,5,245);
   Graph_g_ratio23138->SetMinimum(0.7224756);
   Graph_g_ratio23138->SetMaximum(1.277524);
   Graph_g_ratio23138->SetDirectory(0);
   Graph_g_ratio23138->SetStats(0);
   Graph_g_ratio23138->SetLineWidth(2);
   Graph_g_ratio23138->SetMarkerStyle(20);
   Graph_g_ratio23138->SetMarkerSize(1.2);
   Graph_g_ratio23138->GetXaxis()->SetLabelFont(43);
   Graph_g_ratio23138->GetXaxis()->SetLabelSize(21);
   Graph_g_ratio23138->GetXaxis()->SetTitleSize(21);
   Graph_g_ratio23138->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23138->GetXaxis()->SetTitleFont(43);
   Graph_g_ratio23138->GetYaxis()->SetLabelFont(43);
   Graph_g_ratio23138->GetYaxis()->SetLabelSize(21);
   Graph_g_ratio23138->GetYaxis()->SetTitleSize(21);
   Graph_g_ratio23138->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23138->GetYaxis()->SetTitleFont(43);
   Graph_g_ratio23138->GetZaxis()->SetLabelFont(43);
   Graph_g_ratio23138->GetZaxis()->SetLabelSize(21);
   Graph_g_ratio23138->GetZaxis()->SetTitleSize(21);
   Graph_g_ratio23138->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_ratio23138);
   
   grae->Draw("e2");
   Double_t xAxis342[5] = {25, 75, 125, 175, 225}; 
   
   TH1D *h_dummy2_copy__308 = new TH1D("h_dummy2_copy__308","Data/MC",4, xAxis342);
   h_dummy2_copy__308->SetMinimum(0.5);
   h_dummy2_copy__308->SetMaximum(1.5);
   h_dummy2_copy__308->SetEntries(2920966);
   h_dummy2_copy__308->SetDirectory(0);
   h_dummy2_copy__308->SetStats(0);
   h_dummy2_copy__308->SetMarkerStyle(20);
   h_dummy2_copy__308->SetMarkerSize(1.2);
   h_dummy2_copy__308->GetXaxis()->SetTitle("lepton p_{T} [Gev]");
   h_dummy2_copy__308->GetXaxis()->SetRange(1,16);
   h_dummy2_copy__308->GetXaxis()->SetLabelFont(43);
   h_dummy2_copy__308->GetXaxis()->SetLabelOffset(0.025);
   h_dummy2_copy__308->GetXaxis()->SetLabelSize(16.8);
   h_dummy2_copy__308->GetXaxis()->SetTitleSize(21);
   h_dummy2_copy__308->GetXaxis()->SetTitleOffset(5.05);
   h_dummy2_copy__308->GetXaxis()->SetTitleFont(43);
   h_dummy2_copy__308->GetYaxis()->SetTitle("Data / Bkg");
   h_dummy2_copy__308->GetYaxis()->SetNdivisions(-504);
   h_dummy2_copy__308->GetYaxis()->SetLabelFont(43);
   h_dummy2_copy__308->GetYaxis()->SetLabelOffset(0.02);
   h_dummy2_copy__308->GetYaxis()->SetLabelSize(16.8);
   h_dummy2_copy__308->GetYaxis()->SetTitleSize(21);
   h_dummy2_copy__308->GetYaxis()->SetTitleOffset(2.4);
   h_dummy2_copy__308->GetYaxis()->SetTitleFont(43);
   h_dummy2_copy__308->GetZaxis()->SetLabelFont(43);
   h_dummy2_copy__308->GetZaxis()->SetLabelSize(21);
   h_dummy2_copy__308->GetZaxis()->SetTitleSize(21);
   h_dummy2_copy__308->GetZaxis()->SetTitleFont(43);
   h_dummy2_copy__308->Draw("sameaxis");
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
   c_c1lep4jex3bex_lep0_pt->cd();
  
// ------------>Primitives in pad: pad0
   TPad *pad0 = new TPad("pad0", "pad0",0,0.2,1,1);
   pad0->Draw();
   pad0->cd();
   pad0->Range(-9.567901,-2065.609,237.3457,18590.48);
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
   Double_t xAxis343[5] = {25, 75, 125, 175, 225}; 
   
   TH1D *h_dummy__309 = new TH1D("h_dummy__309","",4, xAxis343);
   h_dummy__309->SetMinimum(0);
   h_dummy__309->SetMaximum(17557.68);
   h_dummy__309->SetEntries(2920966);
   h_dummy__309->SetDirectory(0);
   h_dummy__309->SetStats(0);
   h_dummy__309->SetMarkerStyle(20);
   h_dummy__309->SetMarkerSize(1.2);
   h_dummy__309->GetXaxis()->SetRange(1,16);
   h_dummy__309->GetXaxis()->SetLabelFont(43);
   h_dummy__309->GetXaxis()->SetLabelSize(0);
   h_dummy__309->GetXaxis()->SetTitleSize(21);
   h_dummy__309->GetXaxis()->SetTitleOffset(1.4);
   h_dummy__309->GetXaxis()->SetTitleFont(43);
   h_dummy__309->GetYaxis()->SetTitle("Events / 50 GeV");
   h_dummy__309->GetYaxis()->SetLabelFont(43);
   h_dummy__309->GetYaxis()->SetLabelSize(16.8);
   h_dummy__309->GetYaxis()->SetTitleSize(21);
   h_dummy__309->GetYaxis()->SetTitleOffset(2.4);
   h_dummy__309->GetYaxis()->SetTitleFont(43);
   h_dummy__309->GetZaxis()->SetLabelFont(43);
   h_dummy__309->GetZaxis()->SetLabelSize(21);
   h_dummy__309->GetZaxis()->SetTitleSize(21);
   h_dummy__309->GetZaxis()->SetTitleFont(43);
   h_dummy__309->Draw("HIST");
   
   THStack *h_stack = new THStack();
   h_stack->SetName("h_stack");
   h_stack->SetTitle("h_stack");
   Double_t xAxis344[5] = {25, 75, 125, 175, 225}; 
   
   TH1F *h_stack_stack_35 = new TH1F("h_stack_stack_35","h_stack",4, xAxis344);
   h_stack_stack_35->SetMinimum(0);
   h_stack_stack_35->SetMaximum(10202.17);
   h_stack_stack_35->SetDirectory(0);
   h_stack_stack_35->SetStats(0);
   h_stack_stack_35->SetLineWidth(2);
   h_stack_stack_35->SetMarkerStyle(20);
   h_stack_stack_35->SetMarkerSize(1.2);
   h_stack_stack_35->GetXaxis()->SetLabelFont(43);
   h_stack_stack_35->GetXaxis()->SetLabelSize(21);
   h_stack_stack_35->GetXaxis()->SetTitleSize(21);
   h_stack_stack_35->GetXaxis()->SetTitleOffset(1.4);
   h_stack_stack_35->GetXaxis()->SetTitleFont(43);
   h_stack_stack_35->GetYaxis()->SetLabelFont(43);
   h_stack_stack_35->GetYaxis()->SetLabelSize(21);
   h_stack_stack_35->GetYaxis()->SetTitleSize(21);
   h_stack_stack_35->GetYaxis()->SetTitleOffset(1.4);
   h_stack_stack_35->GetYaxis()->SetTitleFont(43);
   h_stack_stack_35->GetZaxis()->SetLabelFont(43);
   h_stack_stack_35->GetZaxis()->SetLabelSize(21);
   h_stack_stack_35->GetZaxis()->SetTitleSize(21);
   h_stack_stack_35->GetZaxis()->SetTitleFont(43);
   h_stack->SetHistogram(h_stack_stack_35);
   
   Double_t xAxis345[5] = {25, 75, 125, 175, 225}; 
   
   TH1D *c1lep4jex3bex_lep0_pt_topEW__310 = new TH1D("c1lep4jex3bex_lep0_pt_topEW__310","",4, xAxis345);
   c1lep4jex3bex_lep0_pt_topEW__310->SetBinContent(1,1533.595);
   c1lep4jex3bex_lep0_pt_topEW__310->SetBinContent(2,217.9142);
   c1lep4jex3bex_lep0_pt_topEW__310->SetBinContent(3,40.94951);
   c1lep4jex3bex_lep0_pt_topEW__310->SetBinContent(4,17.03569);
   c1lep4jex3bex_lep0_pt_topEW__310->SetBinContent(5,25.47623);
   c1lep4jex3bex_lep0_pt_topEW__310->SetBinError(1,83.84053);
   c1lep4jex3bex_lep0_pt_topEW__310->SetBinError(2,29.06668);
   c1lep4jex3bex_lep0_pt_topEW__310->SetBinError(3,7.474747);
   c1lep4jex3bex_lep0_pt_topEW__310->SetBinError(4,3.411467);
   c1lep4jex3bex_lep0_pt_topEW__310->SetBinError(5,14.79475);
   c1lep4jex3bex_lep0_pt_topEW__310->SetEntries(2895060);
   c1lep4jex3bex_lep0_pt_topEW__310->SetDirectory(0);
   c1lep4jex3bex_lep0_pt_topEW__310->SetStats(0);

   ci = TColor::GetColor("#66cc66");
   c1lep4jex3bex_lep0_pt_topEW__310->SetFillColor(ci);
   c1lep4jex3bex_lep0_pt_topEW__310->SetMarkerStyle(20);
   c1lep4jex3bex_lep0_pt_topEW__310->SetMarkerSize(1.2);
   c1lep4jex3bex_lep0_pt_topEW__310->GetXaxis()->SetTitle("Lepton p_{T} [GeV]");
   c1lep4jex3bex_lep0_pt_topEW__310->GetXaxis()->SetRange(1,16);
   c1lep4jex3bex_lep0_pt_topEW__310->GetXaxis()->SetLabelFont(43);
   c1lep4jex3bex_lep0_pt_topEW__310->GetXaxis()->SetLabelSize(21);
   c1lep4jex3bex_lep0_pt_topEW__310->GetXaxis()->SetTitleSize(21);
   c1lep4jex3bex_lep0_pt_topEW__310->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_lep0_pt_topEW__310->GetXaxis()->SetTitleFont(43);
   c1lep4jex3bex_lep0_pt_topEW__310->GetYaxis()->SetLabelFont(43);
   c1lep4jex3bex_lep0_pt_topEW__310->GetYaxis()->SetLabelSize(21);
   c1lep4jex3bex_lep0_pt_topEW__310->GetYaxis()->SetTitleSize(21);
   c1lep4jex3bex_lep0_pt_topEW__310->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_lep0_pt_topEW__310->GetYaxis()->SetTitleFont(43);
   c1lep4jex3bex_lep0_pt_topEW__310->GetZaxis()->SetLabelFont(43);
   c1lep4jex3bex_lep0_pt_topEW__310->GetZaxis()->SetLabelSize(21);
   c1lep4jex3bex_lep0_pt_topEW__310->GetZaxis()->SetTitleSize(21);
   c1lep4jex3bex_lep0_pt_topEW__310->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jex3bex_lep0_pt_topEW,"");
   Double_t xAxis346[5] = {25, 75, 125, 175, 225}; 
   
   TH1D *c1lep4jex3bex_lep0_pt_ttbarbb__311 = new TH1D("c1lep4jex3bex_lep0_pt_ttbarbb__311","",4, xAxis346);
   c1lep4jex3bex_lep0_pt_ttbarbb__311->SetBinContent(1,2458.627);
   c1lep4jex3bex_lep0_pt_ttbarbb__311->SetBinContent(2,333.7041);
   c1lep4jex3bex_lep0_pt_ttbarbb__311->SetBinContent(3,74.08382);
   c1lep4jex3bex_lep0_pt_ttbarbb__311->SetBinContent(4,17.25426);
   c1lep4jex3bex_lep0_pt_ttbarbb__311->SetBinContent(5,12.94645);
   c1lep4jex3bex_lep0_pt_ttbarbb__311->SetBinError(1,32.30375);
   c1lep4jex3bex_lep0_pt_ttbarbb__311->SetBinError(2,12.61425);
   c1lep4jex3bex_lep0_pt_ttbarbb__311->SetBinError(3,5.879538);
   c1lep4jex3bex_lep0_pt_ttbarbb__311->SetBinError(4,2.327197);
   c1lep4jex3bex_lep0_pt_ttbarbb__311->SetBinError(5,2.08334);
   c1lep4jex3bex_lep0_pt_ttbarbb__311->SetEntries(10166);
   c1lep4jex3bex_lep0_pt_ttbarbb__311->SetDirectory(0);
   c1lep4jex3bex_lep0_pt_ttbarbb__311->SetStats(0);

   ci = TColor::GetColor("#6666cc");
   c1lep4jex3bex_lep0_pt_ttbarbb__311->SetFillColor(ci);
   c1lep4jex3bex_lep0_pt_ttbarbb__311->SetMarkerStyle(20);
   c1lep4jex3bex_lep0_pt_ttbarbb__311->SetMarkerSize(1.2);
   c1lep4jex3bex_lep0_pt_ttbarbb__311->GetXaxis()->SetTitle("Lepton p_{T} [GeV]");
   c1lep4jex3bex_lep0_pt_ttbarbb__311->GetXaxis()->SetRange(1,16);
   c1lep4jex3bex_lep0_pt_ttbarbb__311->GetXaxis()->SetLabelFont(43);
   c1lep4jex3bex_lep0_pt_ttbarbb__311->GetXaxis()->SetLabelSize(21);
   c1lep4jex3bex_lep0_pt_ttbarbb__311->GetXaxis()->SetTitleSize(21);
   c1lep4jex3bex_lep0_pt_ttbarbb__311->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_lep0_pt_ttbarbb__311->GetXaxis()->SetTitleFont(43);
   c1lep4jex3bex_lep0_pt_ttbarbb__311->GetYaxis()->SetLabelFont(43);
   c1lep4jex3bex_lep0_pt_ttbarbb__311->GetYaxis()->SetLabelSize(21);
   c1lep4jex3bex_lep0_pt_ttbarbb__311->GetYaxis()->SetTitleSize(21);
   c1lep4jex3bex_lep0_pt_ttbarbb__311->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_lep0_pt_ttbarbb__311->GetYaxis()->SetTitleFont(43);
   c1lep4jex3bex_lep0_pt_ttbarbb__311->GetZaxis()->SetLabelFont(43);
   c1lep4jex3bex_lep0_pt_ttbarbb__311->GetZaxis()->SetLabelSize(21);
   c1lep4jex3bex_lep0_pt_ttbarbb__311->GetZaxis()->SetTitleSize(21);
   c1lep4jex3bex_lep0_pt_ttbarbb__311->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jex3bex_lep0_pt_ttbarbb,"");
   Double_t xAxis347[5] = {25, 75, 125, 175, 225}; 
   
   TH1D *c1lep4jex3bex_lep0_pt_ttbarcc__312 = new TH1D("c1lep4jex3bex_lep0_pt_ttbarcc__312","",4, xAxis347);
   c1lep4jex3bex_lep0_pt_ttbarcc__312->SetBinContent(1,904.4469);
   c1lep4jex3bex_lep0_pt_ttbarcc__312->SetBinContent(2,113.574);
   c1lep4jex3bex_lep0_pt_ttbarcc__312->SetBinContent(3,28.20574);
   c1lep4jex3bex_lep0_pt_ttbarcc__312->SetBinContent(4,4.852663);
   c1lep4jex3bex_lep0_pt_ttbarcc__312->SetBinContent(5,1.570996);
   c1lep4jex3bex_lep0_pt_ttbarcc__312->SetBinError(1,19.91401);
   c1lep4jex3bex_lep0_pt_ttbarcc__312->SetBinError(2,6.746688);
   c1lep4jex3bex_lep0_pt_ttbarcc__312->SetBinError(3,3.60819);
   c1lep4jex3bex_lep0_pt_ttbarcc__312->SetBinError(4,1.195123);
   c1lep4jex3bex_lep0_pt_ttbarcc__312->SetBinError(5,0.767697);
   c1lep4jex3bex_lep0_pt_ttbarcc__312->SetEntries(3206);
   c1lep4jex3bex_lep0_pt_ttbarcc__312->SetDirectory(0);
   c1lep4jex3bex_lep0_pt_ttbarcc__312->SetStats(0);

   ci = TColor::GetColor("#ccccff");
   c1lep4jex3bex_lep0_pt_ttbarcc__312->SetFillColor(ci);
   c1lep4jex3bex_lep0_pt_ttbarcc__312->SetMarkerStyle(20);
   c1lep4jex3bex_lep0_pt_ttbarcc__312->SetMarkerSize(1.2);
   c1lep4jex3bex_lep0_pt_ttbarcc__312->GetXaxis()->SetTitle("Lepton p_{T} [GeV]");
   c1lep4jex3bex_lep0_pt_ttbarcc__312->GetXaxis()->SetRange(1,16);
   c1lep4jex3bex_lep0_pt_ttbarcc__312->GetXaxis()->SetLabelFont(43);
   c1lep4jex3bex_lep0_pt_ttbarcc__312->GetXaxis()->SetLabelSize(21);
   c1lep4jex3bex_lep0_pt_ttbarcc__312->GetXaxis()->SetTitleSize(21);
   c1lep4jex3bex_lep0_pt_ttbarcc__312->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_lep0_pt_ttbarcc__312->GetXaxis()->SetTitleFont(43);
   c1lep4jex3bex_lep0_pt_ttbarcc__312->GetYaxis()->SetLabelFont(43);
   c1lep4jex3bex_lep0_pt_ttbarcc__312->GetYaxis()->SetLabelSize(21);
   c1lep4jex3bex_lep0_pt_ttbarcc__312->GetYaxis()->SetTitleSize(21);
   c1lep4jex3bex_lep0_pt_ttbarcc__312->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_lep0_pt_ttbarcc__312->GetYaxis()->SetTitleFont(43);
   c1lep4jex3bex_lep0_pt_ttbarcc__312->GetZaxis()->SetLabelFont(43);
   c1lep4jex3bex_lep0_pt_ttbarcc__312->GetZaxis()->SetLabelSize(21);
   c1lep4jex3bex_lep0_pt_ttbarcc__312->GetZaxis()->SetTitleSize(21);
   c1lep4jex3bex_lep0_pt_ttbarcc__312->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jex3bex_lep0_pt_ttbarcc,"");
   Double_t xAxis348[5] = {25, 75, 125, 175, 225}; 
   
   TH1D *c1lep4jex3bex_lep0_pt_ttbarlight__313 = new TH1D("c1lep4jex3bex_lep0_pt_ttbarlight__313","",4, xAxis348);
   c1lep4jex3bex_lep0_pt_ttbarlight__313->SetBinContent(1,3727.86);
   c1lep4jex3bex_lep0_pt_ttbarlight__313->SetBinContent(2,467.231);
   c1lep4jex3bex_lep0_pt_ttbarlight__313->SetBinContent(3,104.3734);
   c1lep4jex3bex_lep0_pt_ttbarlight__313->SetBinContent(4,27.15572);
   c1lep4jex3bex_lep0_pt_ttbarlight__313->SetBinContent(5,9.946699);
   c1lep4jex3bex_lep0_pt_ttbarlight__313->SetBinError(1,44.99993);
   c1lep4jex3bex_lep0_pt_ttbarlight__313->SetBinError(2,14.81606);
   c1lep4jex3bex_lep0_pt_ttbarlight__313->SetBinError(3,7.566833);
   c1lep4jex3bex_lep0_pt_ttbarlight__313->SetBinError(4,3.362985);
   c1lep4jex3bex_lep0_pt_ttbarlight__313->SetBinError(5,2.099981);
   c1lep4jex3bex_lep0_pt_ttbarlight__313->SetEntries(12530);
   c1lep4jex3bex_lep0_pt_ttbarlight__313->SetDirectory(0);
   c1lep4jex3bex_lep0_pt_ttbarlight__313->SetStats(0);
   c1lep4jex3bex_lep0_pt_ttbarlight__313->SetMarkerStyle(20);
   c1lep4jex3bex_lep0_pt_ttbarlight__313->SetMarkerSize(1.2);
   c1lep4jex3bex_lep0_pt_ttbarlight__313->GetXaxis()->SetTitle("Lepton p_{T} [GeV]");
   c1lep4jex3bex_lep0_pt_ttbarlight__313->GetXaxis()->SetRange(1,16);
   c1lep4jex3bex_lep0_pt_ttbarlight__313->GetXaxis()->SetLabelFont(43);
   c1lep4jex3bex_lep0_pt_ttbarlight__313->GetXaxis()->SetLabelSize(21);
   c1lep4jex3bex_lep0_pt_ttbarlight__313->GetXaxis()->SetTitleSize(21);
   c1lep4jex3bex_lep0_pt_ttbarlight__313->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_lep0_pt_ttbarlight__313->GetXaxis()->SetTitleFont(43);
   c1lep4jex3bex_lep0_pt_ttbarlight__313->GetYaxis()->SetLabelFont(43);
   c1lep4jex3bex_lep0_pt_ttbarlight__313->GetYaxis()->SetLabelSize(21);
   c1lep4jex3bex_lep0_pt_ttbarlight__313->GetYaxis()->SetTitleSize(21);
   c1lep4jex3bex_lep0_pt_ttbarlight__313->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_lep0_pt_ttbarlight__313->GetYaxis()->SetTitleFont(43);
   c1lep4jex3bex_lep0_pt_ttbarlight__313->GetZaxis()->SetLabelFont(43);
   c1lep4jex3bex_lep0_pt_ttbarlight__313->GetZaxis()->SetLabelSize(21);
   c1lep4jex3bex_lep0_pt_ttbarlight__313->GetZaxis()->SetTitleSize(21);
   c1lep4jex3bex_lep0_pt_ttbarlight__313->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jex3bex_lep0_pt_ttbarlight,"");
   Double_t xAxis349[5] = {25, 75, 125, 175, 225}; 
   
   TH1D *c1lep4jex3bex_lep0_pt_uHcW__314 = new TH1D("c1lep4jex3bex_lep0_pt_uHcW__314","",4, xAxis349);
   c1lep4jex3bex_lep0_pt_uHcW__314->SetBinContent(1,1091.824);
   c1lep4jex3bex_lep0_pt_uHcW__314->SetBinContent(2,133.5797);
   c1lep4jex3bex_lep0_pt_uHcW__314->SetBinContent(3,28.13383);
   c1lep4jex3bex_lep0_pt_uHcW__314->SetBinContent(4,5.355706);
   c1lep4jex3bex_lep0_pt_uHcW__314->SetBinContent(5,2.251963);
   c1lep4jex3bex_lep0_pt_uHcW__314->SetBinError(1,30.25509);
   c1lep4jex3bex_lep0_pt_uHcW__314->SetBinError(2,11.41043);
   c1lep4jex3bex_lep0_pt_uHcW__314->SetBinError(3,4.297486);
   c1lep4jex3bex_lep0_pt_uHcW__314->SetBinError(4,1.838541);
   c1lep4jex3bex_lep0_pt_uHcW__314->SetBinError(5,1.459359);
   c1lep4jex3bex_lep0_pt_uHcW__314->SetEntries(5559);
   c1lep4jex3bex_lep0_pt_uHcW__314->SetDirectory(0);
   c1lep4jex3bex_lep0_pt_uHcW__314->SetStats(0);
   c1lep4jex3bex_lep0_pt_uHcW__314->SetFillColor(2);
   c1lep4jex3bex_lep0_pt_uHcW__314->SetLineColor(2);
   c1lep4jex3bex_lep0_pt_uHcW__314->SetMarkerStyle(20);
   c1lep4jex3bex_lep0_pt_uHcW__314->SetMarkerSize(1.2);
   c1lep4jex3bex_lep0_pt_uHcW__314->GetXaxis()->SetTitle("Lepton p_{T} [GeV]");
   c1lep4jex3bex_lep0_pt_uHcW__314->GetXaxis()->SetRange(1,16);
   c1lep4jex3bex_lep0_pt_uHcW__314->GetXaxis()->SetLabelFont(43);
   c1lep4jex3bex_lep0_pt_uHcW__314->GetXaxis()->SetLabelSize(21);
   c1lep4jex3bex_lep0_pt_uHcW__314->GetXaxis()->SetTitleSize(21);
   c1lep4jex3bex_lep0_pt_uHcW__314->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_lep0_pt_uHcW__314->GetXaxis()->SetTitleFont(43);
   c1lep4jex3bex_lep0_pt_uHcW__314->GetYaxis()->SetLabelFont(43);
   c1lep4jex3bex_lep0_pt_uHcW__314->GetYaxis()->SetLabelSize(21);
   c1lep4jex3bex_lep0_pt_uHcW__314->GetYaxis()->SetTitleSize(21);
   c1lep4jex3bex_lep0_pt_uHcW__314->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_lep0_pt_uHcW__314->GetYaxis()->SetTitleFont(43);
   c1lep4jex3bex_lep0_pt_uHcW__314->GetZaxis()->SetLabelFont(43);
   c1lep4jex3bex_lep0_pt_uHcW__314->GetZaxis()->SetLabelSize(21);
   c1lep4jex3bex_lep0_pt_uHcW__314->GetZaxis()->SetTitleSize(21);
   c1lep4jex3bex_lep0_pt_uHcW__314->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jex3bex_lep0_pt_uHcW,"");
   h_stack->Draw("hist same");
   
   Double_t g_totErr_fx3139[4] = {
   50,
   100,
   150,
   200};
   Double_t g_totErr_fy3139[4] = {
   8624.529,
   1132.423,
   247.6124,
   66.29833};
   Double_t g_totErr_felx3139[4] = {
   25,
   25,
   25,
   25};
   Double_t g_totErr_fely3139[4] = {
   1668.173,
   219.4748,
   53.48094,
   15.33284};
   Double_t g_totErr_fehx3139[4] = {
   25,
   25,
   25,
   25};
   Double_t g_totErr_fehy3139[4] = {
   1668.173,
   219.4748,
   53.48094,
   15.33284};
   grae = new TGraphAsymmErrors(4,g_totErr_fx3139,g_totErr_fy3139,g_totErr_felx3139,g_totErr_fehx3139,g_totErr_fely3139,g_totErr_fehy3139);
   grae->SetName("g_totErr");
   grae->SetTitle("");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(3354);
   grae->SetLineColor(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0);
   
   TH1F *Graph_g_totErr3139 = new TH1F("Graph_g_totErr3139","",100,5,245);
   Graph_g_totErr3139->SetMinimum(0);
   Graph_g_totErr3139->SetMaximum(11316.88);
   Graph_g_totErr3139->SetDirectory(0);
   Graph_g_totErr3139->SetStats(0);
   Graph_g_totErr3139->SetLineWidth(2);
   Graph_g_totErr3139->SetMarkerStyle(20);
   Graph_g_totErr3139->SetMarkerSize(1.2);
   Graph_g_totErr3139->GetXaxis()->SetLabelFont(43);
   Graph_g_totErr3139->GetXaxis()->SetLabelSize(21);
   Graph_g_totErr3139->GetXaxis()->SetTitleSize(21);
   Graph_g_totErr3139->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_totErr3139->GetXaxis()->SetTitleFont(43);
   Graph_g_totErr3139->GetYaxis()->SetLabelFont(43);
   Graph_g_totErr3139->GetYaxis()->SetLabelSize(21);
   Graph_g_totErr3139->GetYaxis()->SetTitleSize(21);
   Graph_g_totErr3139->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_totErr3139->GetYaxis()->SetTitleFont(43);
   Graph_g_totErr3139->GetZaxis()->SetLabelFont(43);
   Graph_g_totErr3139->GetZaxis()->SetLabelSize(21);
   Graph_g_totErr3139->GetZaxis()->SetTitleSize(21);
   Graph_g_totErr3139->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_totErr3139);
   
   grae->Draw("e2");
   
   Double_t Graph_from_c1lep4jex3bex_lep0_pt_Data_fx3140[4] = {
   50,
   100,
   150,
   200};
   Double_t Graph_from_c1lep4jex3bex_lep0_pt_Data_fy3140[4] = {
   9656,
   1192,
   286,
   82};
   Double_t Graph_from_c1lep4jex3bex_lep0_pt_Data_felx3140[4] = {
   24.95,
   24.95,
   24.95,
   24.95};
   Double_t Graph_from_c1lep4jex3bex_lep0_pt_Data_fely3140[4] = {
   98.26495,
   34.52535,
   16.91153,
   9.055385};
   Double_t Graph_from_c1lep4jex3bex_lep0_pt_Data_fehx3140[4] = {
   25,
   25,
   25,
   25};
   Double_t Graph_from_c1lep4jex3bex_lep0_pt_Data_fehy3140[4] = {
   98.26495,
   34.52535,
   16.91153,
   9.055385};
   grae = new TGraphAsymmErrors(4,Graph_from_c1lep4jex3bex_lep0_pt_Data_fx3140,Graph_from_c1lep4jex3bex_lep0_pt_Data_fy3140,Graph_from_c1lep4jex3bex_lep0_pt_Data_felx3140,Graph_from_c1lep4jex3bex_lep0_pt_Data_fehx3140,Graph_from_c1lep4jex3bex_lep0_pt_Data_fely3140,Graph_from_c1lep4jex3bex_lep0_pt_Data_fehy3140);
   grae->SetName("Graph_from_c1lep4jex3bex_lep0_pt_Data");
   grae->SetTitle("");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_c1lep4jex3bex_lep0_pt_Data3140 = new TH1F("Graph_Graph_from_c1lep4jex3bex_lep0_pt_Data3140","",100,5.055,244.995);
   Graph_Graph_from_c1lep4jex3bex_lep0_pt_Data3140->SetMinimum(0);
   Graph_Graph_from_c1lep4jex3bex_lep0_pt_Data3140->SetMaximum(10722.4);
   Graph_Graph_from_c1lep4jex3bex_lep0_pt_Data3140->SetDirectory(0);
   Graph_Graph_from_c1lep4jex3bex_lep0_pt_Data3140->SetStats(0);
   Graph_Graph_from_c1lep4jex3bex_lep0_pt_Data3140->SetLineWidth(2);
   Graph_Graph_from_c1lep4jex3bex_lep0_pt_Data3140->SetMarkerStyle(20);
   Graph_Graph_from_c1lep4jex3bex_lep0_pt_Data3140->SetMarkerSize(1.2);
   Graph_Graph_from_c1lep4jex3bex_lep0_pt_Data3140->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep4jex3bex_lep0_pt_Data3140->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep4jex3bex_lep0_pt_Data3140->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep4jex3bex_lep0_pt_Data3140->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep4jex3bex_lep0_pt_Data3140->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep4jex3bex_lep0_pt_Data3140->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep4jex3bex_lep0_pt_Data3140->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep4jex3bex_lep0_pt_Data3140->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep4jex3bex_lep0_pt_Data3140->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep4jex3bex_lep0_pt_Data3140->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep4jex3bex_lep0_pt_Data3140->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep4jex3bex_lep0_pt_Data3140->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep4jex3bex_lep0_pt_Data3140->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep4jex3bex_lep0_pt_Data3140->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_c1lep4jex3bex_lep0_pt_Data3140);
   
   grae->Draw("ep1 ");
   Double_t xAxis350[5] = {25, 75, 125, 175, 225}; 
   
   TH1D *h_dummy_copy__315 = new TH1D("h_dummy_copy__315","",4, xAxis350);
   h_dummy_copy__315->SetEntries(2920966);
   h_dummy_copy__315->SetDirectory(0);
   h_dummy_copy__315->SetStats(0);
   h_dummy_copy__315->SetMarkerStyle(20);
   h_dummy_copy__315->SetMarkerSize(1.2);
   h_dummy_copy__315->GetXaxis()->SetTitle("lepton p_{T} [Gev]");
   h_dummy_copy__315->GetXaxis()->SetRange(1,16);
   h_dummy_copy__315->GetXaxis()->SetLabelFont(43);
   h_dummy_copy__315->GetXaxis()->SetLabelSize(21);
   h_dummy_copy__315->GetXaxis()->SetTitleSize(21);
   h_dummy_copy__315->GetXaxis()->SetTitleOffset(1.4);
   h_dummy_copy__315->GetXaxis()->SetTitleFont(43);
   h_dummy_copy__315->GetYaxis()->SetTitle("Events / 50 GeV");
   h_dummy_copy__315->GetYaxis()->SetLabelFont(43);
   h_dummy_copy__315->GetYaxis()->SetLabelSize(16.8);
   h_dummy_copy__315->GetYaxis()->SetTitleSize(21);
   h_dummy_copy__315->GetYaxis()->SetTitleOffset(2.4);
   h_dummy_copy__315->GetYaxis()->SetTitleFont(43);
   h_dummy_copy__315->GetZaxis()->SetLabelFont(43);
   h_dummy_copy__315->GetZaxis()->SetLabelSize(21);
   h_dummy_copy__315->GetZaxis()->SetTitleSize(21);
   h_dummy_copy__315->GetZaxis()->SetTitleFont(43);
   h_dummy_copy__315->Draw("sameaxis");
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
   TLegendEntry *entry=leg->AddEntry("c1lep4jex3bex_lep0_pt_Data","Data","lep");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep4jex3bex_lep0_pt_uHcW","t#bar{t}#rightarrowWbHc (BR=1%)","f");
   entry->SetFillColor(2);
   entry->SetFillStyle(1001);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep4jex3bex_lep0_pt_ttbarlight","t#bar{t}+light","f");
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep4jex3bex_lep0_pt_ttbarcc","t#bar{t}+cc","f");

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
   entry=leg->AddEntry("c1lep4jex3bex_lep0_pt_ttbarbb","t#bar{t}+bb","f");

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
   entry=leg->AddEntry("c1lep4jex3bex_lep0_pt_topEW","Non-t#bar{t}","f");

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
   c_c1lep4jex3bex_lep0_pt->cd();
   c_c1lep4jex3bex_lep0_pt->Modified();
   c_c1lep4jex3bex_lep0_pt->cd();
   c_c1lep4jex3bex_lep0_pt->SetSelected(c_c1lep4jex3bex_lep0_pt);
}
