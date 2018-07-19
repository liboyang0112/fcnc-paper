void c1lep4jex3bex_met()
{
//=========Macro generated from canvas: c_c1lep4jex3bex_met/c_c1lep4jex3bex_met
//=========  (Thu Jul 19 17:38:05 2018) by ROOT version6.04/14
   TCanvas *c_c1lep4jex3bex_met = new TCanvas("c_c1lep4jex3bex_met", "c_c1lep4jex3bex_met",0,0,600,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c_c1lep4jex3bex_met->SetHighLightColor(2);
   c_c1lep4jex3bex_met->Range(0,0,1,1);
   c_c1lep4jex3bex_met->SetFillColor(0);
   c_c1lep4jex3bex_met->SetBorderMode(0);
   c_c1lep4jex3bex_met->SetBorderSize(2);
   c_c1lep4jex3bex_met->SetTickx(1);
   c_c1lep4jex3bex_met->SetTicky(1);
   c_c1lep4jex3bex_met->SetLeftMargin(0.16);
   c_c1lep4jex3bex_met->SetRightMargin(0.05);
   c_c1lep4jex3bex_met->SetTopMargin(0.05);
   c_c1lep4jex3bex_met->SetBottomMargin(0.16);
   c_c1lep4jex3bex_met->SetFrameBorderMode(0);
  
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
   Double_t xAxis181[5] = {0, 50, 100, 150, 200}; 
   
   TH1D *h_dummy2__163 = new TH1D("h_dummy2__163","Data/MC",4, xAxis181);
   h_dummy2__163->SetMinimum(0.5);
   h_dummy2__163->SetMaximum(1.5);
   h_dummy2__163->SetEntries(2920936);
   h_dummy2__163->SetDirectory(0);
   h_dummy2__163->SetStats(0);
   h_dummy2__163->SetMarkerStyle(20);
   h_dummy2__163->SetMarkerSize(1.2);
   h_dummy2__163->GetXaxis()->SetTitle("E_{T}^{miss} [GeV]");
   h_dummy2__163->GetXaxis()->SetRange(1,25);
   h_dummy2__163->GetXaxis()->SetLabelFont(43);
   h_dummy2__163->GetXaxis()->SetLabelOffset(0.025);
   h_dummy2__163->GetXaxis()->SetLabelSize(16.8);
   h_dummy2__163->GetXaxis()->SetTitleSize(21);
   h_dummy2__163->GetXaxis()->SetTitleOffset(5.05);
   h_dummy2__163->GetXaxis()->SetTitleFont(43);
   h_dummy2__163->GetYaxis()->SetTitle("Data / Bkg");
   h_dummy2__163->GetYaxis()->SetNdivisions(-504);
   h_dummy2__163->GetYaxis()->SetLabelFont(43);
   h_dummy2__163->GetYaxis()->SetLabelOffset(0.02);
   h_dummy2__163->GetYaxis()->SetLabelSize(16.8);
   h_dummy2__163->GetYaxis()->SetTitleSize(21);
   h_dummy2__163->GetYaxis()->SetTitleOffset(2.4);
   h_dummy2__163->GetYaxis()->SetTitleFont(43);
   h_dummy2__163->GetZaxis()->SetLabelFont(43);
   h_dummy2__163->GetZaxis()->SetLabelSize(21);
   h_dummy2__163->GetZaxis()->SetTitleSize(21);
   h_dummy2__163->GetZaxis()->SetTitleFont(43);
   h_dummy2__163->Draw("HIST");
   
   Double_t Graph_from_h_ratio_fx3073[4] = {
   25,
   75,
   125,
   175};
   Double_t Graph_from_h_ratio_fy3073[4] = {
   1.044373,
   1.143947,
   1.213787,
   1.064336};
   Double_t Graph_from_h_ratio_felx3073[4] = {
   24.95,
   24.95,
   24.95,
   24.95};
   Double_t Graph_from_h_ratio_fely3073[4] = {
   0.01728421,
   0.01409705,
   0.04710406,
   0.07309887};
   Double_t Graph_from_h_ratio_fehx3073[4] = {
   25,
   25,
   25,
   25};
   Double_t Graph_from_h_ratio_fehy3073[4] = {
   0.01728421,
   0.01409705,
   0.04710406,
   0.07309887};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(4,Graph_from_h_ratio_fx3073,Graph_from_h_ratio_fy3073,Graph_from_h_ratio_felx3073,Graph_from_h_ratio_fehx3073,Graph_from_h_ratio_fely3073,Graph_from_h_ratio_fehy3073);
   grae->SetName("Graph_from_h_ratio");
   grae->SetTitle("");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(24);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_h_ratio3073 = new TH1F("Graph_Graph_from_h_ratio3073","",100,0,219.995);
   Graph_Graph_from_h_ratio3073->SetMinimum(0.9642713);
   Graph_Graph_from_h_ratio3073->SetMaximum(1.287856);
   Graph_Graph_from_h_ratio3073->SetDirectory(0);
   Graph_Graph_from_h_ratio3073->SetStats(0);
   Graph_Graph_from_h_ratio3073->SetLineWidth(2);
   Graph_Graph_from_h_ratio3073->SetMarkerStyle(20);
   Graph_Graph_from_h_ratio3073->SetMarkerSize(1.2);
   Graph_Graph_from_h_ratio3073->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3073->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3073->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3073->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3073->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3073->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3073->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3073->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3073->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3073->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3073->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3073->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3073->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3073->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_h_ratio3073);
   
   grae->Draw("pe0");
   TLine *line = new TLine(0,1,200,1);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t g_ratio2_fx3074[4] = {
   25,
   75,
   125,
   175};
   Double_t g_ratio2_fy3074[4] = {
   1,
   1,
   1,
   1};
   Double_t g_ratio2_felx3074[4] = {
   25,
   25,
   25,
   25};
   Double_t g_ratio2_fely3074[4] = {
   0.1860843,
   0.2001335,
   0.1945031,
   0.2091688};
   Double_t g_ratio2_fehx3074[4] = {
   25,
   25,
   25,
   25};
   Double_t g_ratio2_fehy3074[4] = {
   0.1860843,
   0.2001335,
   0.1945031,
   0.2091688};
   grae = new TGraphAsymmErrors(4,g_ratio2_fx3074,g_ratio2_fy3074,g_ratio2_felx3074,g_ratio2_fehx3074,g_ratio2_fely3074,g_ratio2_fehy3074);
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
   
   TH1F *Graph_g_ratio23074 = new TH1F("Graph_g_ratio23074","",100,0,220);
   Graph_g_ratio23074->SetMinimum(0.7489975);
   Graph_g_ratio23074->SetMaximum(1.251003);
   Graph_g_ratio23074->SetDirectory(0);
   Graph_g_ratio23074->SetStats(0);
   Graph_g_ratio23074->SetLineWidth(2);
   Graph_g_ratio23074->SetMarkerStyle(20);
   Graph_g_ratio23074->SetMarkerSize(1.2);
   Graph_g_ratio23074->GetXaxis()->SetLabelFont(43);
   Graph_g_ratio23074->GetXaxis()->SetLabelSize(21);
   Graph_g_ratio23074->GetXaxis()->SetTitleSize(21);
   Graph_g_ratio23074->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23074->GetXaxis()->SetTitleFont(43);
   Graph_g_ratio23074->GetYaxis()->SetLabelFont(43);
   Graph_g_ratio23074->GetYaxis()->SetLabelSize(21);
   Graph_g_ratio23074->GetYaxis()->SetTitleSize(21);
   Graph_g_ratio23074->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23074->GetYaxis()->SetTitleFont(43);
   Graph_g_ratio23074->GetZaxis()->SetLabelFont(43);
   Graph_g_ratio23074->GetZaxis()->SetLabelSize(21);
   Graph_g_ratio23074->GetZaxis()->SetTitleSize(21);
   Graph_g_ratio23074->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_ratio23074);
   
   grae->Draw("e2");
   Double_t xAxis182[5] = {0, 50, 100, 150, 200}; 
   
   TH1D *h_dummy2_copy__164 = new TH1D("h_dummy2_copy__164","Data/MC",4, xAxis182);
   h_dummy2_copy__164->SetMinimum(0.5);
   h_dummy2_copy__164->SetMaximum(1.5);
   h_dummy2_copy__164->SetEntries(2920936);
   h_dummy2_copy__164->SetDirectory(0);
   h_dummy2_copy__164->SetStats(0);
   h_dummy2_copy__164->SetMarkerStyle(20);
   h_dummy2_copy__164->SetMarkerSize(1.2);
   h_dummy2_copy__164->GetXaxis()->SetTitle("E_{T}^{miss} [GeV]");
   h_dummy2_copy__164->GetXaxis()->SetRange(1,25);
   h_dummy2_copy__164->GetXaxis()->SetLabelFont(43);
   h_dummy2_copy__164->GetXaxis()->SetLabelOffset(0.025);
   h_dummy2_copy__164->GetXaxis()->SetLabelSize(16.8);
   h_dummy2_copy__164->GetXaxis()->SetTitleSize(21);
   h_dummy2_copy__164->GetXaxis()->SetTitleOffset(5.05);
   h_dummy2_copy__164->GetXaxis()->SetTitleFont(43);
   h_dummy2_copy__164->GetYaxis()->SetTitle("Data / Bkg");
   h_dummy2_copy__164->GetYaxis()->SetNdivisions(-504);
   h_dummy2_copy__164->GetYaxis()->SetLabelFont(43);
   h_dummy2_copy__164->GetYaxis()->SetLabelOffset(0.02);
   h_dummy2_copy__164->GetYaxis()->SetLabelSize(16.8);
   h_dummy2_copy__164->GetYaxis()->SetTitleSize(21);
   h_dummy2_copy__164->GetYaxis()->SetTitleOffset(2.4);
   h_dummy2_copy__164->GetYaxis()->SetTitleFont(43);
   h_dummy2_copy__164->GetZaxis()->SetLabelFont(43);
   h_dummy2_copy__164->GetZaxis()->SetLabelSize(21);
   h_dummy2_copy__164->GetZaxis()->SetTitleSize(21);
   h_dummy2_copy__164->GetZaxis()->SetTitleFont(43);
   h_dummy2_copy__164->Draw("sameaxis");
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
   c_c1lep4jex3bex_met->cd();
  
// ------------>Primitives in pad: pad0
   TPad *pad0 = new TPad("pad0", "pad0",0,0.2,1,1);
   pad0->Draw();
   pad0->cd();
   pad0->Range(-34.5679,-1411.655,212.3457,12704.89);
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
   Double_t xAxis183[5] = {0, 50, 100, 150, 200}; 
   
   TH1D *h_dummy__165 = new TH1D("h_dummy__165","",4, xAxis183);
   h_dummy__165->SetMinimum(0);
   h_dummy__165->SetMaximum(11999.07);
   h_dummy__165->SetEntries(2920936);
   h_dummy__165->SetDirectory(0);
   h_dummy__165->SetStats(0);
   h_dummy__165->SetMarkerStyle(20);
   h_dummy__165->SetMarkerSize(1.2);
   h_dummy__165->GetXaxis()->SetRange(1,25);
   h_dummy__165->GetXaxis()->SetLabelFont(43);
   h_dummy__165->GetXaxis()->SetLabelSize(0);
   h_dummy__165->GetXaxis()->SetTitleSize(21);
   h_dummy__165->GetXaxis()->SetTitleOffset(1.4);
   h_dummy__165->GetXaxis()->SetTitleFont(43);
   h_dummy__165->GetYaxis()->SetTitle("Events / 50 GeV");
   h_dummy__165->GetYaxis()->SetLabelFont(43);
   h_dummy__165->GetYaxis()->SetLabelSize(16.8);
   h_dummy__165->GetYaxis()->SetTitleSize(21);
   h_dummy__165->GetYaxis()->SetTitleOffset(2.4);
   h_dummy__165->GetYaxis()->SetTitleFont(43);
   h_dummy__165->GetZaxis()->SetLabelFont(43);
   h_dummy__165->GetZaxis()->SetLabelSize(21);
   h_dummy__165->GetZaxis()->SetTitleSize(21);
   h_dummy__165->GetZaxis()->SetTitleFont(43);
   h_dummy__165->Draw("HIST");
   
   THStack *h_stack = new THStack();
   h_stack->SetName("h_stack");
   h_stack->SetTitle("h_stack");
   Double_t xAxis184[5] = {0, 50, 100, 150, 200}; 
   
   TH1F *h_stack_stack_19 = new TH1F("h_stack_stack_19","h_stack",4, xAxis184);
   h_stack_stack_19->SetMinimum(0);
   h_stack_stack_19->SetMaximum(6818.118);
   h_stack_stack_19->SetDirectory(0);
   h_stack_stack_19->SetStats(0);
   h_stack_stack_19->SetLineWidth(2);
   h_stack_stack_19->SetMarkerStyle(20);
   h_stack_stack_19->SetMarkerSize(1.2);
   h_stack_stack_19->GetXaxis()->SetLabelFont(43);
   h_stack_stack_19->GetXaxis()->SetLabelSize(21);
   h_stack_stack_19->GetXaxis()->SetTitleSize(21);
   h_stack_stack_19->GetXaxis()->SetTitleOffset(1.4);
   h_stack_stack_19->GetXaxis()->SetTitleFont(43);
   h_stack_stack_19->GetYaxis()->SetLabelFont(43);
   h_stack_stack_19->GetYaxis()->SetLabelSize(21);
   h_stack_stack_19->GetYaxis()->SetTitleSize(21);
   h_stack_stack_19->GetYaxis()->SetTitleOffset(1.4);
   h_stack_stack_19->GetYaxis()->SetTitleFont(43);
   h_stack_stack_19->GetZaxis()->SetLabelFont(43);
   h_stack_stack_19->GetZaxis()->SetLabelSize(21);
   h_stack_stack_19->GetZaxis()->SetTitleSize(21);
   h_stack_stack_19->GetZaxis()->SetTitleFont(43);
   h_stack->SetHistogram(h_stack_stack_19);
   
   Double_t xAxis185[5] = {0, 50, 100, 150, 200}; 
   
   TH1D *c1lep4jex3bex_met_topEW__166 = new TH1D("c1lep4jex3bex_met_topEW__166","",4, xAxis185);
   c1lep4jex3bex_met_topEW__166->SetBinContent(1,939.0508);
   c1lep4jex3bex_met_topEW__166->SetBinContent(2,791.3862);
   c1lep4jex3bex_met_topEW__166->SetBinContent(3,62.48851);
   c1lep4jex3bex_met_topEW__166->SetBinContent(4,22.60216);
   c1lep4jex3bex_met_topEW__166->SetBinContent(5,21.93694);
   c1lep4jex3bex_met_topEW__166->SetBinError(1,71.23029);
   c1lep4jex3bex_met_topEW__166->SetBinError(2,52.95799);
   c1lep4jex3bex_met_topEW__166->SetBinError(3,13.48043);
   c1lep4jex3bex_met_topEW__166->SetBinError(4,4.769211);
   c1lep4jex3bex_met_topEW__166->SetBinError(5,9.143055);
   c1lep4jex3bex_met_topEW__166->SetEntries(2895030);
   c1lep4jex3bex_met_topEW__166->SetDirectory(0);
   c1lep4jex3bex_met_topEW__166->SetStats(0);

   ci = TColor::GetColor("#66cc66");
   c1lep4jex3bex_met_topEW__166->SetFillColor(ci);
   c1lep4jex3bex_met_topEW__166->SetMarkerStyle(20);
   c1lep4jex3bex_met_topEW__166->SetMarkerSize(1.2);
   c1lep4jex3bex_met_topEW__166->GetXaxis()->SetTitle("E_{T}^{miss} [GeV]");
   c1lep4jex3bex_met_topEW__166->GetXaxis()->SetRange(1,25);
   c1lep4jex3bex_met_topEW__166->GetXaxis()->SetLabelFont(43);
   c1lep4jex3bex_met_topEW__166->GetXaxis()->SetLabelSize(21);
   c1lep4jex3bex_met_topEW__166->GetXaxis()->SetTitleSize(21);
   c1lep4jex3bex_met_topEW__166->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_met_topEW__166->GetXaxis()->SetTitleFont(43);
   c1lep4jex3bex_met_topEW__166->GetYaxis()->SetLabelFont(43);
   c1lep4jex3bex_met_topEW__166->GetYaxis()->SetLabelSize(21);
   c1lep4jex3bex_met_topEW__166->GetYaxis()->SetTitleSize(21);
   c1lep4jex3bex_met_topEW__166->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_met_topEW__166->GetYaxis()->SetTitleFont(43);
   c1lep4jex3bex_met_topEW__166->GetZaxis()->SetLabelFont(43);
   c1lep4jex3bex_met_topEW__166->GetZaxis()->SetLabelSize(21);
   c1lep4jex3bex_met_topEW__166->GetZaxis()->SetTitleSize(21);
   c1lep4jex3bex_met_topEW__166->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jex3bex_met_topEW,"");
   Double_t xAxis186[5] = {0, 50, 100, 150, 200}; 
   
   TH1D *c1lep4jex3bex_met_ttbarbb__167 = new TH1D("c1lep4jex3bex_met_ttbarbb__167","",4, xAxis186);
   c1lep4jex3bex_met_ttbarbb__167->SetBinContent(1,744.8261);
   c1lep4jex3bex_met_ttbarbb__167->SetBinContent(2,1798.991);
   c1lep4jex3bex_met_ttbarbb__167->SetBinContent(3,222.3195);
   c1lep4jex3bex_met_ttbarbb__167->SetBinContent(4,82.56188);
   c1lep4jex3bex_met_ttbarbb__167->SetBinContent(5,47.91704);
   c1lep4jex3bex_met_ttbarbb__167->SetBinError(1,17.55164);
   c1lep4jex3bex_met_ttbarbb__167->SetBinError(2,28.19774);
   c1lep4jex3bex_met_ttbarbb__167->SetBinError(3,9.258875);
   c1lep4jex3bex_met_ttbarbb__167->SetBinError(4,6.491316);
   c1lep4jex3bex_met_ttbarbb__167->SetBinError(5,3.992476);
   c1lep4jex3bex_met_ttbarbb__167->SetEntries(10166);
   c1lep4jex3bex_met_ttbarbb__167->SetDirectory(0);
   c1lep4jex3bex_met_ttbarbb__167->SetStats(0);

   ci = TColor::GetColor("#6666cc");
   c1lep4jex3bex_met_ttbarbb__167->SetFillColor(ci);
   c1lep4jex3bex_met_ttbarbb__167->SetMarkerStyle(20);
   c1lep4jex3bex_met_ttbarbb__167->SetMarkerSize(1.2);
   c1lep4jex3bex_met_ttbarbb__167->GetXaxis()->SetTitle("E_{T}^{miss} [GeV]");
   c1lep4jex3bex_met_ttbarbb__167->GetXaxis()->SetRange(1,25);
   c1lep4jex3bex_met_ttbarbb__167->GetXaxis()->SetLabelFont(43);
   c1lep4jex3bex_met_ttbarbb__167->GetXaxis()->SetLabelSize(21);
   c1lep4jex3bex_met_ttbarbb__167->GetXaxis()->SetTitleSize(21);
   c1lep4jex3bex_met_ttbarbb__167->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_met_ttbarbb__167->GetXaxis()->SetTitleFont(43);
   c1lep4jex3bex_met_ttbarbb__167->GetYaxis()->SetLabelFont(43);
   c1lep4jex3bex_met_ttbarbb__167->GetYaxis()->SetLabelSize(21);
   c1lep4jex3bex_met_ttbarbb__167->GetYaxis()->SetTitleSize(21);
   c1lep4jex3bex_met_ttbarbb__167->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_met_ttbarbb__167->GetYaxis()->SetTitleFont(43);
   c1lep4jex3bex_met_ttbarbb__167->GetZaxis()->SetLabelFont(43);
   c1lep4jex3bex_met_ttbarbb__167->GetZaxis()->SetLabelSize(21);
   c1lep4jex3bex_met_ttbarbb__167->GetZaxis()->SetTitleSize(21);
   c1lep4jex3bex_met_ttbarbb__167->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jex3bex_met_ttbarbb,"");
   Double_t xAxis187[5] = {0, 50, 100, 150, 200}; 
   
   TH1D *c1lep4jex3bex_met_ttbarcc__168 = new TH1D("c1lep4jex3bex_met_ttbarcc__168","",4, xAxis187);
   c1lep4jex3bex_met_ttbarcc__168->SetBinContent(1,322.5738);
   c1lep4jex3bex_met_ttbarcc__168->SetBinContent(2,635.7233);
   c1lep4jex3bex_met_ttbarcc__168->SetBinContent(3,58.87419);
   c1lep4jex3bex_met_ttbarcc__168->SetBinContent(4,23.65139);
   c1lep4jex3bex_met_ttbarcc__168->SetBinContent(5,11.82754);
   c1lep4jex3bex_met_ttbarcc__168->SetBinError(1,11.87079);
   c1lep4jex3bex_met_ttbarcc__168->SetBinError(2,16.70615);
   c1lep4jex3bex_met_ttbarcc__168->SetBinError(3,4.770645);
   c1lep4jex3bex_met_ttbarcc__168->SetBinError(4,2.933213);
   c1lep4jex3bex_met_ttbarcc__168->SetBinError(5,2.397533);
   c1lep4jex3bex_met_ttbarcc__168->SetEntries(3206);
   c1lep4jex3bex_met_ttbarcc__168->SetDirectory(0);
   c1lep4jex3bex_met_ttbarcc__168->SetStats(0);

   ci = TColor::GetColor("#ccccff");
   c1lep4jex3bex_met_ttbarcc__168->SetFillColor(ci);
   c1lep4jex3bex_met_ttbarcc__168->SetMarkerStyle(20);
   c1lep4jex3bex_met_ttbarcc__168->SetMarkerSize(1.2);
   c1lep4jex3bex_met_ttbarcc__168->GetXaxis()->SetTitle("E_{T}^{miss} [GeV]");
   c1lep4jex3bex_met_ttbarcc__168->GetXaxis()->SetRange(1,25);
   c1lep4jex3bex_met_ttbarcc__168->GetXaxis()->SetLabelFont(43);
   c1lep4jex3bex_met_ttbarcc__168->GetXaxis()->SetLabelSize(21);
   c1lep4jex3bex_met_ttbarcc__168->GetXaxis()->SetTitleSize(21);
   c1lep4jex3bex_met_ttbarcc__168->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_met_ttbarcc__168->GetXaxis()->SetTitleFont(43);
   c1lep4jex3bex_met_ttbarcc__168->GetYaxis()->SetLabelFont(43);
   c1lep4jex3bex_met_ttbarcc__168->GetYaxis()->SetLabelSize(21);
   c1lep4jex3bex_met_ttbarcc__168->GetYaxis()->SetTitleSize(21);
   c1lep4jex3bex_met_ttbarcc__168->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_met_ttbarcc__168->GetYaxis()->SetTitleFont(43);
   c1lep4jex3bex_met_ttbarcc__168->GetZaxis()->SetLabelFont(43);
   c1lep4jex3bex_met_ttbarcc__168->GetZaxis()->SetLabelSize(21);
   c1lep4jex3bex_met_ttbarcc__168->GetZaxis()->SetTitleSize(21);
   c1lep4jex3bex_met_ttbarcc__168->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jex3bex_met_ttbarcc,"");
   Double_t xAxis188[5] = {0, 50, 100, 150, 200}; 
   
   TH1D *c1lep4jex3bex_met_ttbarlight__169 = new TH1D("c1lep4jex3bex_met_ttbarlight__169","",4, xAxis188);
   c1lep4jex3bex_met_ttbarlight__169->SetBinContent(1,1489.428);
   c1lep4jex3bex_met_ttbarlight__169->SetBinContent(2,2530.283);
   c1lep4jex3bex_met_ttbarlight__169->SetBinContent(3,203.3661);
   c1lep4jex3bex_met_ttbarlight__169->SetBinContent(4,70.36987);
   c1lep4jex3bex_met_ttbarlight__169->SetBinContent(5,43.11997);
   c1lep4jex3bex_met_ttbarlight__169->SetBinError(1,28.28195);
   c1lep4jex3bex_met_ttbarlight__169->SetBinError(2,36.77159);
   c1lep4jex3bex_met_ttbarlight__169->SetBinError(3,9.727884);
   c1lep4jex3bex_met_ttbarlight__169->SetBinError(4,6.232233);
   c1lep4jex3bex_met_ttbarlight__169->SetBinError(5,5.656358);
   c1lep4jex3bex_met_ttbarlight__169->SetEntries(12530);
   c1lep4jex3bex_met_ttbarlight__169->SetDirectory(0);
   c1lep4jex3bex_met_ttbarlight__169->SetStats(0);
   c1lep4jex3bex_met_ttbarlight__169->SetMarkerStyle(20);
   c1lep4jex3bex_met_ttbarlight__169->SetMarkerSize(1.2);
   c1lep4jex3bex_met_ttbarlight__169->GetXaxis()->SetTitle("E_{T}^{miss} [GeV]");
   c1lep4jex3bex_met_ttbarlight__169->GetXaxis()->SetRange(1,25);
   c1lep4jex3bex_met_ttbarlight__169->GetXaxis()->SetLabelFont(43);
   c1lep4jex3bex_met_ttbarlight__169->GetXaxis()->SetLabelSize(21);
   c1lep4jex3bex_met_ttbarlight__169->GetXaxis()->SetTitleSize(21);
   c1lep4jex3bex_met_ttbarlight__169->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_met_ttbarlight__169->GetXaxis()->SetTitleFont(43);
   c1lep4jex3bex_met_ttbarlight__169->GetYaxis()->SetLabelFont(43);
   c1lep4jex3bex_met_ttbarlight__169->GetYaxis()->SetLabelSize(21);
   c1lep4jex3bex_met_ttbarlight__169->GetYaxis()->SetTitleSize(21);
   c1lep4jex3bex_met_ttbarlight__169->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_met_ttbarlight__169->GetYaxis()->SetTitleFont(43);
   c1lep4jex3bex_met_ttbarlight__169->GetZaxis()->SetLabelFont(43);
   c1lep4jex3bex_met_ttbarlight__169->GetZaxis()->SetLabelSize(21);
   c1lep4jex3bex_met_ttbarlight__169->GetZaxis()->SetTitleSize(21);
   c1lep4jex3bex_met_ttbarlight__169->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jex3bex_met_ttbarlight,"");
   Double_t xAxis189[5] = {0, 50, 100, 150, 200}; 
   
   TH1D *c1lep4jex3bex_met_uHcW__170 = new TH1D("c1lep4jex3bex_met_uHcW__170","",4, xAxis189);
   c1lep4jex3bex_met_uHcW__170->SetBinContent(1,440.4347);
   c1lep4jex3bex_met_uHcW__170->SetBinContent(2,737.0618);
   c1lep4jex3bex_met_uHcW__170->SetBinContent(3,57.91256);
   c1lep4jex3bex_met_uHcW__170->SetBinContent(4,12.55508);
   c1lep4jex3bex_met_uHcW__170->SetBinContent(5,13.18121);
   c1lep4jex3bex_met_uHcW__170->SetBinError(1,18.14759);
   c1lep4jex3bex_met_uHcW__170->SetBinError(2,26.02358);
   c1lep4jex3bex_met_uHcW__170->SetBinError(3,6.92368);
   c1lep4jex3bex_met_uHcW__170->SetBinError(4,2.782765);
   c1lep4jex3bex_met_uHcW__170->SetBinError(5,2.702522);
   c1lep4jex3bex_met_uHcW__170->SetEntries(5559);
   c1lep4jex3bex_met_uHcW__170->SetDirectory(0);
   c1lep4jex3bex_met_uHcW__170->SetStats(0);
   c1lep4jex3bex_met_uHcW__170->SetFillColor(2);
   c1lep4jex3bex_met_uHcW__170->SetLineColor(2);
   c1lep4jex3bex_met_uHcW__170->SetMarkerStyle(20);
   c1lep4jex3bex_met_uHcW__170->SetMarkerSize(1.2);
   c1lep4jex3bex_met_uHcW__170->GetXaxis()->SetTitle("E_{T}^{miss} [GeV]");
   c1lep4jex3bex_met_uHcW__170->GetXaxis()->SetRange(1,25);
   c1lep4jex3bex_met_uHcW__170->GetXaxis()->SetLabelFont(43);
   c1lep4jex3bex_met_uHcW__170->GetXaxis()->SetLabelSize(21);
   c1lep4jex3bex_met_uHcW__170->GetXaxis()->SetTitleSize(21);
   c1lep4jex3bex_met_uHcW__170->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_met_uHcW__170->GetXaxis()->SetTitleFont(43);
   c1lep4jex3bex_met_uHcW__170->GetYaxis()->SetLabelFont(43);
   c1lep4jex3bex_met_uHcW__170->GetYaxis()->SetLabelSize(21);
   c1lep4jex3bex_met_uHcW__170->GetYaxis()->SetTitleSize(21);
   c1lep4jex3bex_met_uHcW__170->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_met_uHcW__170->GetYaxis()->SetTitleFont(43);
   c1lep4jex3bex_met_uHcW__170->GetZaxis()->SetLabelFont(43);
   c1lep4jex3bex_met_uHcW__170->GetZaxis()->SetLabelSize(21);
   c1lep4jex3bex_met_uHcW__170->GetZaxis()->SetTitleSize(21);
   c1lep4jex3bex_met_uHcW__170->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jex3bex_met_uHcW,"");
   h_stack->Draw("hist same");
   
   Double_t g_totErr_fx3075[4] = {
   25,
   75,
   125,
   175};
   Double_t g_totErr_fy3075[4] = {
   3495.879,
   5756.384,
   547.0484,
   199.1853};
   Double_t g_totErr_felx3075[4] = {
   25,
   25,
   25,
   25};
   Double_t g_totErr_fely3075[4] = {
   650.5282,
   1152.046,
   106.4026,
   41.66335};
   Double_t g_totErr_fehx3075[4] = {
   25,
   25,
   25,
   25};
   Double_t g_totErr_fehy3075[4] = {
   650.5282,
   1152.046,
   106.4026,
   41.66335};
   grae = new TGraphAsymmErrors(4,g_totErr_fx3075,g_totErr_fy3075,g_totErr_felx3075,g_totErr_fehx3075,g_totErr_fely3075,g_totErr_fehy3075);
   grae->SetName("g_totErr");
   grae->SetTitle("");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(3354);
   grae->SetLineColor(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0);
   
   TH1F *Graph_g_totErr3075 = new TH1F("Graph_g_totErr3075","",100,0,220);
   Graph_g_totErr3075->SetMinimum(0);
   Graph_g_totErr3075->SetMaximum(7583.52);
   Graph_g_totErr3075->SetDirectory(0);
   Graph_g_totErr3075->SetStats(0);
   Graph_g_totErr3075->SetLineWidth(2);
   Graph_g_totErr3075->SetMarkerStyle(20);
   Graph_g_totErr3075->SetMarkerSize(1.2);
   Graph_g_totErr3075->GetXaxis()->SetLabelFont(43);
   Graph_g_totErr3075->GetXaxis()->SetLabelSize(21);
   Graph_g_totErr3075->GetXaxis()->SetTitleSize(21);
   Graph_g_totErr3075->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_totErr3075->GetXaxis()->SetTitleFont(43);
   Graph_g_totErr3075->GetYaxis()->SetLabelFont(43);
   Graph_g_totErr3075->GetYaxis()->SetLabelSize(21);
   Graph_g_totErr3075->GetYaxis()->SetTitleSize(21);
   Graph_g_totErr3075->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_totErr3075->GetYaxis()->SetTitleFont(43);
   Graph_g_totErr3075->GetZaxis()->SetLabelFont(43);
   Graph_g_totErr3075->GetZaxis()->SetLabelSize(21);
   Graph_g_totErr3075->GetZaxis()->SetTitleSize(21);
   Graph_g_totErr3075->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_totErr3075);
   
   grae->Draw("e2");
   
   Double_t Graph_from_c1lep4jex3bex_met_Data_fx3076[4] = {
   25,
   75,
   125,
   175};
   Double_t Graph_from_c1lep4jex3bex_met_Data_fy3076[4] = {
   3651,
   6585,
   664,
   212};
   Double_t Graph_from_c1lep4jex3bex_met_Data_felx3076[4] = {
   24.95,
   24.95,
   24.95,
   24.95};
   Double_t Graph_from_c1lep4jex3bex_met_Data_fely3076[4] = {
   60.42351,
   81.14801,
   25.7682,
   14.56022};
   Double_t Graph_from_c1lep4jex3bex_met_Data_fehx3076[4] = {
   25,
   25,
   25,
   25};
   Double_t Graph_from_c1lep4jex3bex_met_Data_fehy3076[4] = {
   60.42351,
   81.14801,
   25.7682,
   14.56022};
   grae = new TGraphAsymmErrors(4,Graph_from_c1lep4jex3bex_met_Data_fx3076,Graph_from_c1lep4jex3bex_met_Data_fy3076,Graph_from_c1lep4jex3bex_met_Data_felx3076,Graph_from_c1lep4jex3bex_met_Data_fehx3076,Graph_from_c1lep4jex3bex_met_Data_fely3076,Graph_from_c1lep4jex3bex_met_Data_fehy3076);
   grae->SetName("Graph_from_c1lep4jex3bex_met_Data");
   grae->SetTitle("");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_c1lep4jex3bex_met_Data3076 = new TH1F("Graph_Graph_from_c1lep4jex3bex_met_Data3076","",100,0,219.995);
   Graph_Graph_from_c1lep4jex3bex_met_Data3076->SetMinimum(0);
   Graph_Graph_from_c1lep4jex3bex_met_Data3076->SetMaximum(7313.019);
   Graph_Graph_from_c1lep4jex3bex_met_Data3076->SetDirectory(0);
   Graph_Graph_from_c1lep4jex3bex_met_Data3076->SetStats(0);
   Graph_Graph_from_c1lep4jex3bex_met_Data3076->SetLineWidth(2);
   Graph_Graph_from_c1lep4jex3bex_met_Data3076->SetMarkerStyle(20);
   Graph_Graph_from_c1lep4jex3bex_met_Data3076->SetMarkerSize(1.2);
   Graph_Graph_from_c1lep4jex3bex_met_Data3076->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep4jex3bex_met_Data3076->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep4jex3bex_met_Data3076->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep4jex3bex_met_Data3076->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep4jex3bex_met_Data3076->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep4jex3bex_met_Data3076->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep4jex3bex_met_Data3076->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep4jex3bex_met_Data3076->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep4jex3bex_met_Data3076->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep4jex3bex_met_Data3076->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep4jex3bex_met_Data3076->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep4jex3bex_met_Data3076->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep4jex3bex_met_Data3076->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep4jex3bex_met_Data3076->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_c1lep4jex3bex_met_Data3076);
   
   grae->Draw("ep1 ");
   Double_t xAxis190[5] = {0, 50, 100, 150, 200}; 
   
   TH1D *h_dummy_copy__171 = new TH1D("h_dummy_copy__171","",4, xAxis190);
   h_dummy_copy__171->SetEntries(2920936);
   h_dummy_copy__171->SetDirectory(0);
   h_dummy_copy__171->SetStats(0);
   h_dummy_copy__171->SetMarkerStyle(20);
   h_dummy_copy__171->SetMarkerSize(1.2);
   h_dummy_copy__171->GetXaxis()->SetTitle("E_{T}^{miss} [GeV]");
   h_dummy_copy__171->GetXaxis()->SetRange(1,25);
   h_dummy_copy__171->GetXaxis()->SetLabelFont(43);
   h_dummy_copy__171->GetXaxis()->SetLabelSize(21);
   h_dummy_copy__171->GetXaxis()->SetTitleSize(21);
   h_dummy_copy__171->GetXaxis()->SetTitleOffset(1.4);
   h_dummy_copy__171->GetXaxis()->SetTitleFont(43);
   h_dummy_copy__171->GetYaxis()->SetTitle("Events / 50 GeV");
   h_dummy_copy__171->GetYaxis()->SetLabelFont(43);
   h_dummy_copy__171->GetYaxis()->SetLabelSize(16.8);
   h_dummy_copy__171->GetYaxis()->SetTitleSize(21);
   h_dummy_copy__171->GetYaxis()->SetTitleOffset(2.4);
   h_dummy_copy__171->GetYaxis()->SetTitleFont(43);
   h_dummy_copy__171->GetZaxis()->SetLabelFont(43);
   h_dummy_copy__171->GetZaxis()->SetLabelSize(21);
   h_dummy_copy__171->GetZaxis()->SetTitleSize(21);
   h_dummy_copy__171->GetZaxis()->SetTitleFont(43);
   h_dummy_copy__171->Draw("sameaxis");
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
   TLegendEntry *entry=leg->AddEntry("c1lep4jex3bex_met_Data","Data","lep");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep4jex3bex_met_uHcW","t#bar{t}#rightarrowWbHc (BR=1%)","f");
   entry->SetFillColor(2);
   entry->SetFillStyle(1001);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep4jex3bex_met_ttbarlight","t#bar{t}+light","f");
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep4jex3bex_met_ttbarcc","t#bar{t}+cc","f");

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
   entry=leg->AddEntry("c1lep4jex3bex_met_ttbarbb","t#bar{t}+bb","f");

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
   entry=leg->AddEntry("c1lep4jex3bex_met_topEW","Non-t#bar{t}","f");

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
   c_c1lep4jex3bex_met->cd();
   c_c1lep4jex3bex_met->Modified();
   c_c1lep4jex3bex_met->cd();
   c_c1lep4jex3bex_met->SetSelected(c_c1lep4jex3bex_met);
}
