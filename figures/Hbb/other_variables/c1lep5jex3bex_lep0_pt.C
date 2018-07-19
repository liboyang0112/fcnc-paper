void c1lep5jex3bex_lep0_pt()
{
//=========Macro generated from canvas: c_c1lep5jex3bex_lep0_pt/c_c1lep5jex3bex_lep0_pt
//=========  (Thu Jul 19 17:38:07 2018) by ROOT version6.04/14
   TCanvas *c_c1lep5jex3bex_lep0_pt = new TCanvas("c_c1lep5jex3bex_lep0_pt", "c_c1lep5jex3bex_lep0_pt",0,0,600,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c_c1lep5jex3bex_lep0_pt->SetHighLightColor(2);
   c_c1lep5jex3bex_lep0_pt->Range(0,0,1,1);
   c_c1lep5jex3bex_lep0_pt->SetFillColor(0);
   c_c1lep5jex3bex_lep0_pt->SetBorderMode(0);
   c_c1lep5jex3bex_lep0_pt->SetBorderSize(2);
   c_c1lep5jex3bex_lep0_pt->SetTickx(1);
   c_c1lep5jex3bex_lep0_pt->SetTicky(1);
   c_c1lep5jex3bex_lep0_pt->SetLeftMargin(0.16);
   c_c1lep5jex3bex_lep0_pt->SetRightMargin(0.05);
   c_c1lep5jex3bex_lep0_pt->SetTopMargin(0.05);
   c_c1lep5jex3bex_lep0_pt->SetBottomMargin(0.16);
   c_c1lep5jex3bex_lep0_pt->SetFrameBorderMode(0);
  
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
   Double_t xAxis351[5] = {25, 75, 125, 175, 225}; 
   
   TH1D *h_dummy2__316 = new TH1D("h_dummy2__316","Data/MC",4, xAxis351);
   h_dummy2__316->SetMinimum(0.5);
   h_dummy2__316->SetMaximum(1.5);
   h_dummy2__316->SetEntries(1363517);
   h_dummy2__316->SetDirectory(0);
   h_dummy2__316->SetStats(0);
   h_dummy2__316->SetMarkerStyle(20);
   h_dummy2__316->SetMarkerSize(1.2);
   h_dummy2__316->GetXaxis()->SetTitle("lepton p_{T} [Gev]");
   h_dummy2__316->GetXaxis()->SetRange(1,16);
   h_dummy2__316->GetXaxis()->SetLabelFont(43);
   h_dummy2__316->GetXaxis()->SetLabelOffset(0.025);
   h_dummy2__316->GetXaxis()->SetLabelSize(16.8);
   h_dummy2__316->GetXaxis()->SetTitleSize(21);
   h_dummy2__316->GetXaxis()->SetTitleOffset(5.05);
   h_dummy2__316->GetXaxis()->SetTitleFont(43);
   h_dummy2__316->GetYaxis()->SetTitle("Data / Bkg");
   h_dummy2__316->GetYaxis()->SetNdivisions(-504);
   h_dummy2__316->GetYaxis()->SetLabelFont(43);
   h_dummy2__316->GetYaxis()->SetLabelOffset(0.02);
   h_dummy2__316->GetYaxis()->SetLabelSize(16.8);
   h_dummy2__316->GetYaxis()->SetTitleSize(21);
   h_dummy2__316->GetYaxis()->SetTitleOffset(2.4);
   h_dummy2__316->GetYaxis()->SetTitleFont(43);
   h_dummy2__316->GetZaxis()->SetLabelFont(43);
   h_dummy2__316->GetZaxis()->SetLabelSize(21);
   h_dummy2__316->GetZaxis()->SetTitleSize(21);
   h_dummy2__316->GetZaxis()->SetTitleFont(43);
   h_dummy2__316->Draw("HIST");
   
   Double_t Graph_from_h_ratio_fx3141[4] = {
   50,
   100,
   150,
   200};
   Double_t Graph_from_h_ratio_fy3141[4] = {
   1.164292,
   1.142346,
   1.022883,
   1.047909};
   Double_t Graph_from_h_ratio_felx3141[4] = {
   24.95,
   24.95,
   24.95,
   24.95};
   Double_t Graph_from_h_ratio_fely3141[4] = {
   0.01179185,
   0.0303575,
   0.05317714,
   0.1042709};
   Double_t Graph_from_h_ratio_fehx3141[4] = {
   25,
   25,
   25,
   25};
   Double_t Graph_from_h_ratio_fehy3141[4] = {
   0.01179185,
   0.0303575,
   0.05317714,
   0.1042709};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(4,Graph_from_h_ratio_fx3141,Graph_from_h_ratio_fy3141,Graph_from_h_ratio_felx3141,Graph_from_h_ratio_fehx3141,Graph_from_h_ratio_fely3141,Graph_from_h_ratio_fehy3141);
   grae->SetName("Graph_from_h_ratio");
   grae->SetTitle("");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(24);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_h_ratio3141 = new TH1F("Graph_Graph_from_h_ratio3141","",100,5.055,244.995);
   Graph_Graph_from_h_ratio3141->SetMinimum(0.9203939);
   Graph_Graph_from_h_ratio3141->SetMaximum(1.199328);
   Graph_Graph_from_h_ratio3141->SetDirectory(0);
   Graph_Graph_from_h_ratio3141->SetStats(0);
   Graph_Graph_from_h_ratio3141->SetLineWidth(2);
   Graph_Graph_from_h_ratio3141->SetMarkerStyle(20);
   Graph_Graph_from_h_ratio3141->SetMarkerSize(1.2);
   Graph_Graph_from_h_ratio3141->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3141->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3141->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3141->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3141->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3141->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3141->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3141->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3141->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3141->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3141->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3141->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3141->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3141->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_h_ratio3141);
   
   grae->Draw("pe0");
   TLine *line = new TLine(25,1,225,1);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t g_ratio2_fx3142[4] = {
   50,
   100,
   150,
   200};
   Double_t g_ratio2_fy3142[4] = {
   1,
   1,
   1,
   1};
   Double_t g_ratio2_felx3142[4] = {
   25,
   25,
   25,
   25};
   Double_t g_ratio2_fely3142[4] = {
   0.1865172,
   0.1873661,
   0.1890435,
   0.2157958};
   Double_t g_ratio2_fehx3142[4] = {
   25,
   25,
   25,
   25};
   Double_t g_ratio2_fehy3142[4] = {
   0.1865172,
   0.1873661,
   0.1890435,
   0.2157958};
   grae = new TGraphAsymmErrors(4,g_ratio2_fx3142,g_ratio2_fy3142,g_ratio2_felx3142,g_ratio2_fehx3142,g_ratio2_fely3142,g_ratio2_fehy3142);
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
   
   TH1F *Graph_g_ratio23142 = new TH1F("Graph_g_ratio23142","",100,5,245);
   Graph_g_ratio23142->SetMinimum(0.741045);
   Graph_g_ratio23142->SetMaximum(1.258955);
   Graph_g_ratio23142->SetDirectory(0);
   Graph_g_ratio23142->SetStats(0);
   Graph_g_ratio23142->SetLineWidth(2);
   Graph_g_ratio23142->SetMarkerStyle(20);
   Graph_g_ratio23142->SetMarkerSize(1.2);
   Graph_g_ratio23142->GetXaxis()->SetLabelFont(43);
   Graph_g_ratio23142->GetXaxis()->SetLabelSize(21);
   Graph_g_ratio23142->GetXaxis()->SetTitleSize(21);
   Graph_g_ratio23142->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23142->GetXaxis()->SetTitleFont(43);
   Graph_g_ratio23142->GetYaxis()->SetLabelFont(43);
   Graph_g_ratio23142->GetYaxis()->SetLabelSize(21);
   Graph_g_ratio23142->GetYaxis()->SetTitleSize(21);
   Graph_g_ratio23142->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23142->GetYaxis()->SetTitleFont(43);
   Graph_g_ratio23142->GetZaxis()->SetLabelFont(43);
   Graph_g_ratio23142->GetZaxis()->SetLabelSize(21);
   Graph_g_ratio23142->GetZaxis()->SetTitleSize(21);
   Graph_g_ratio23142->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_ratio23142);
   
   grae->Draw("e2");
   Double_t xAxis352[5] = {25, 75, 125, 175, 225}; 
   
   TH1D *h_dummy2_copy__317 = new TH1D("h_dummy2_copy__317","Data/MC",4, xAxis352);
   h_dummy2_copy__317->SetMinimum(0.5);
   h_dummy2_copy__317->SetMaximum(1.5);
   h_dummy2_copy__317->SetEntries(1363517);
   h_dummy2_copy__317->SetDirectory(0);
   h_dummy2_copy__317->SetStats(0);
   h_dummy2_copy__317->SetMarkerStyle(20);
   h_dummy2_copy__317->SetMarkerSize(1.2);
   h_dummy2_copy__317->GetXaxis()->SetTitle("lepton p_{T} [Gev]");
   h_dummy2_copy__317->GetXaxis()->SetRange(1,16);
   h_dummy2_copy__317->GetXaxis()->SetLabelFont(43);
   h_dummy2_copy__317->GetXaxis()->SetLabelOffset(0.025);
   h_dummy2_copy__317->GetXaxis()->SetLabelSize(16.8);
   h_dummy2_copy__317->GetXaxis()->SetTitleSize(21);
   h_dummy2_copy__317->GetXaxis()->SetTitleOffset(5.05);
   h_dummy2_copy__317->GetXaxis()->SetTitleFont(43);
   h_dummy2_copy__317->GetYaxis()->SetTitle("Data / Bkg");
   h_dummy2_copy__317->GetYaxis()->SetNdivisions(-504);
   h_dummy2_copy__317->GetYaxis()->SetLabelFont(43);
   h_dummy2_copy__317->GetYaxis()->SetLabelOffset(0.02);
   h_dummy2_copy__317->GetYaxis()->SetLabelSize(16.8);
   h_dummy2_copy__317->GetYaxis()->SetTitleSize(21);
   h_dummy2_copy__317->GetYaxis()->SetTitleOffset(2.4);
   h_dummy2_copy__317->GetYaxis()->SetTitleFont(43);
   h_dummy2_copy__317->GetZaxis()->SetLabelFont(43);
   h_dummy2_copy__317->GetZaxis()->SetLabelSize(21);
   h_dummy2_copy__317->GetZaxis()->SetTitleSize(21);
   h_dummy2_copy__317->GetZaxis()->SetTitleFont(43);
   h_dummy2_copy__317->Draw("sameaxis");
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
   c_c1lep5jex3bex_lep0_pt->cd();
  
// ------------>Primitives in pad: pad0
   TPad *pad0 = new TPad("pad0", "pad0",0,0.2,1,1);
   pad0->Draw();
   pad0->cd();
   pad0->Range(-9.567901,-2085.403,237.3457,18768.63);
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
   Double_t xAxis353[5] = {25, 75, 125, 175, 225}; 
   
   TH1D *h_dummy__318 = new TH1D("h_dummy__318","",4, xAxis353);
   h_dummy__318->SetMinimum(0);
   h_dummy__318->SetMaximum(17725.93);
   h_dummy__318->SetEntries(1363517);
   h_dummy__318->SetDirectory(0);
   h_dummy__318->SetStats(0);
   h_dummy__318->SetMarkerStyle(20);
   h_dummy__318->SetMarkerSize(1.2);
   h_dummy__318->GetXaxis()->SetRange(1,16);
   h_dummy__318->GetXaxis()->SetLabelFont(43);
   h_dummy__318->GetXaxis()->SetLabelSize(0);
   h_dummy__318->GetXaxis()->SetTitleSize(21);
   h_dummy__318->GetXaxis()->SetTitleOffset(1.4);
   h_dummy__318->GetXaxis()->SetTitleFont(43);
   h_dummy__318->GetYaxis()->SetTitle("Events / 50 GeV");
   h_dummy__318->GetYaxis()->SetLabelFont(43);
   h_dummy__318->GetYaxis()->SetLabelSize(16.8);
   h_dummy__318->GetYaxis()->SetTitleSize(21);
   h_dummy__318->GetYaxis()->SetTitleOffset(2.4);
   h_dummy__318->GetYaxis()->SetTitleFont(43);
   h_dummy__318->GetZaxis()->SetLabelFont(43);
   h_dummy__318->GetZaxis()->SetLabelSize(21);
   h_dummy__318->GetZaxis()->SetTitleSize(21);
   h_dummy__318->GetZaxis()->SetTitleFont(43);
   h_dummy__318->Draw("HIST");
   
   THStack *h_stack = new THStack();
   h_stack->SetName("h_stack");
   h_stack->SetTitle("h_stack");
   Double_t xAxis354[5] = {25, 75, 125, 175, 225}; 
   
   TH1F *h_stack_stack_36 = new TH1F("h_stack_stack_36","h_stack",4, xAxis354);
   h_stack_stack_36->SetMinimum(0);
   h_stack_stack_36->SetMaximum(9697.605);
   h_stack_stack_36->SetDirectory(0);
   h_stack_stack_36->SetStats(0);
   h_stack_stack_36->SetLineWidth(2);
   h_stack_stack_36->SetMarkerStyle(20);
   h_stack_stack_36->SetMarkerSize(1.2);
   h_stack_stack_36->GetXaxis()->SetLabelFont(43);
   h_stack_stack_36->GetXaxis()->SetLabelSize(21);
   h_stack_stack_36->GetXaxis()->SetTitleSize(21);
   h_stack_stack_36->GetXaxis()->SetTitleOffset(1.4);
   h_stack_stack_36->GetXaxis()->SetTitleFont(43);
   h_stack_stack_36->GetYaxis()->SetLabelFont(43);
   h_stack_stack_36->GetYaxis()->SetLabelSize(21);
   h_stack_stack_36->GetYaxis()->SetTitleSize(21);
   h_stack_stack_36->GetYaxis()->SetTitleOffset(1.4);
   h_stack_stack_36->GetYaxis()->SetTitleFont(43);
   h_stack_stack_36->GetZaxis()->SetLabelFont(43);
   h_stack_stack_36->GetZaxis()->SetLabelSize(21);
   h_stack_stack_36->GetZaxis()->SetTitleSize(21);
   h_stack_stack_36->GetZaxis()->SetTitleFont(43);
   h_stack->SetHistogram(h_stack_stack_36);
   
   Double_t xAxis355[5] = {25, 75, 125, 175, 225}; 
   
   TH1D *c1lep5jex3bex_lep0_pt_topEW__319 = new TH1D("c1lep5jex3bex_lep0_pt_topEW__319","",4, xAxis355);
   c1lep5jex3bex_lep0_pt_topEW__319->SetBinContent(1,1009.001);
   c1lep5jex3bex_lep0_pt_topEW__319->SetBinContent(2,189.9716);
   c1lep5jex3bex_lep0_pt_topEW__319->SetBinContent(3,73.76056);
   c1lep5jex3bex_lep0_pt_topEW__319->SetBinContent(4,15.51325);
   c1lep5jex3bex_lep0_pt_topEW__319->SetBinContent(5,17.6219);
   c1lep5jex3bex_lep0_pt_topEW__319->SetBinError(1,66.89348);
   c1lep5jex3bex_lep0_pt_topEW__319->SetBinError(2,30.08424);
   c1lep5jex3bex_lep0_pt_topEW__319->SetBinError(3,18.71647);
   c1lep5jex3bex_lep0_pt_topEW__319->SetBinError(4,1.70672);
   c1lep5jex3bex_lep0_pt_topEW__319->SetBinError(5,5.676846);
   c1lep5jex3bex_lep0_pt_topEW__319->SetEntries(1334907);
   c1lep5jex3bex_lep0_pt_topEW__319->SetDirectory(0);
   c1lep5jex3bex_lep0_pt_topEW__319->SetStats(0);

   ci = TColor::GetColor("#66cc66");
   c1lep5jex3bex_lep0_pt_topEW__319->SetFillColor(ci);
   c1lep5jex3bex_lep0_pt_topEW__319->SetMarkerStyle(20);
   c1lep5jex3bex_lep0_pt_topEW__319->SetMarkerSize(1.2);
   c1lep5jex3bex_lep0_pt_topEW__319->GetXaxis()->SetTitle("Lepton p_{T} [GeV]");
   c1lep5jex3bex_lep0_pt_topEW__319->GetXaxis()->SetRange(1,16);
   c1lep5jex3bex_lep0_pt_topEW__319->GetXaxis()->SetLabelFont(43);
   c1lep5jex3bex_lep0_pt_topEW__319->GetXaxis()->SetLabelSize(21);
   c1lep5jex3bex_lep0_pt_topEW__319->GetXaxis()->SetTitleSize(21);
   c1lep5jex3bex_lep0_pt_topEW__319->GetXaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_lep0_pt_topEW__319->GetXaxis()->SetTitleFont(43);
   c1lep5jex3bex_lep0_pt_topEW__319->GetYaxis()->SetLabelFont(43);
   c1lep5jex3bex_lep0_pt_topEW__319->GetYaxis()->SetLabelSize(21);
   c1lep5jex3bex_lep0_pt_topEW__319->GetYaxis()->SetTitleSize(21);
   c1lep5jex3bex_lep0_pt_topEW__319->GetYaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_lep0_pt_topEW__319->GetYaxis()->SetTitleFont(43);
   c1lep5jex3bex_lep0_pt_topEW__319->GetZaxis()->SetLabelFont(43);
   c1lep5jex3bex_lep0_pt_topEW__319->GetZaxis()->SetLabelSize(21);
   c1lep5jex3bex_lep0_pt_topEW__319->GetZaxis()->SetTitleSize(21);
   c1lep5jex3bex_lep0_pt_topEW__319->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep5jex3bex_lep0_pt_topEW,"");
   Double_t xAxis356[5] = {25, 75, 125, 175, 225}; 
   
   TH1D *c1lep5jex3bex_lep0_pt_ttbarbb__320 = new TH1D("c1lep5jex3bex_lep0_pt_ttbarbb__320","",4, xAxis356);
   c1lep5jex3bex_lep0_pt_ttbarbb__320->SetBinContent(1,3594.07);
   c1lep5jex3bex_lep0_pt_ttbarbb__320->SetBinContent(2,517.5853);
   c1lep5jex3bex_lep0_pt_ttbarbb__320->SetBinContent(3,144.631);
   c1lep5jex3bex_lep0_pt_ttbarbb__320->SetBinContent(4,36.27246);
   c1lep5jex3bex_lep0_pt_ttbarbb__320->SetBinContent(5,29.64704);
   c1lep5jex3bex_lep0_pt_ttbarbb__320->SetBinError(1,37.73211);
   c1lep5jex3bex_lep0_pt_ttbarbb__320->SetBinError(2,15.43);
   c1lep5jex3bex_lep0_pt_ttbarbb__320->SetBinError(3,7.527659);
   c1lep5jex3bex_lep0_pt_ttbarbb__320->SetBinError(4,3.593093);
   c1lep5jex3bex_lep0_pt_ttbarbb__320->SetBinError(5,4.721365);
   c1lep5jex3bex_lep0_pt_ttbarbb__320->SetEntries(15468);
   c1lep5jex3bex_lep0_pt_ttbarbb__320->SetDirectory(0);
   c1lep5jex3bex_lep0_pt_ttbarbb__320->SetStats(0);

   ci = TColor::GetColor("#6666cc");
   c1lep5jex3bex_lep0_pt_ttbarbb__320->SetFillColor(ci);
   c1lep5jex3bex_lep0_pt_ttbarbb__320->SetMarkerStyle(20);
   c1lep5jex3bex_lep0_pt_ttbarbb__320->SetMarkerSize(1.2);
   c1lep5jex3bex_lep0_pt_ttbarbb__320->GetXaxis()->SetTitle("Lepton p_{T} [GeV]");
   c1lep5jex3bex_lep0_pt_ttbarbb__320->GetXaxis()->SetRange(1,16);
   c1lep5jex3bex_lep0_pt_ttbarbb__320->GetXaxis()->SetLabelFont(43);
   c1lep5jex3bex_lep0_pt_ttbarbb__320->GetXaxis()->SetLabelSize(21);
   c1lep5jex3bex_lep0_pt_ttbarbb__320->GetXaxis()->SetTitleSize(21);
   c1lep5jex3bex_lep0_pt_ttbarbb__320->GetXaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_lep0_pt_ttbarbb__320->GetXaxis()->SetTitleFont(43);
   c1lep5jex3bex_lep0_pt_ttbarbb__320->GetYaxis()->SetLabelFont(43);
   c1lep5jex3bex_lep0_pt_ttbarbb__320->GetYaxis()->SetLabelSize(21);
   c1lep5jex3bex_lep0_pt_ttbarbb__320->GetYaxis()->SetTitleSize(21);
   c1lep5jex3bex_lep0_pt_ttbarbb__320->GetYaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_lep0_pt_ttbarbb__320->GetYaxis()->SetTitleFont(43);
   c1lep5jex3bex_lep0_pt_ttbarbb__320->GetZaxis()->SetLabelFont(43);
   c1lep5jex3bex_lep0_pt_ttbarbb__320->GetZaxis()->SetLabelSize(21);
   c1lep5jex3bex_lep0_pt_ttbarbb__320->GetZaxis()->SetTitleSize(21);
   c1lep5jex3bex_lep0_pt_ttbarbb__320->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep5jex3bex_lep0_pt_ttbarbb,"");
   Double_t xAxis357[5] = {25, 75, 125, 175, 225}; 
   
   TH1D *c1lep5jex3bex_lep0_pt_ttbarcc__321 = new TH1D("c1lep5jex3bex_lep0_pt_ttbarcc__321","",4, xAxis357);
   c1lep5jex3bex_lep0_pt_ttbarcc__321->SetBinContent(1,1095.854);
   c1lep5jex3bex_lep0_pt_ttbarcc__321->SetBinContent(2,154.7108);
   c1lep5jex3bex_lep0_pt_ttbarcc__321->SetBinContent(3,46.08903);
   c1lep5jex3bex_lep0_pt_ttbarcc__321->SetBinContent(4,17.23352);
   c1lep5jex3bex_lep0_pt_ttbarcc__321->SetBinContent(5,6.940937);
   c1lep5jex3bex_lep0_pt_ttbarcc__321->SetBinError(1,22.99019);
   c1lep5jex3bex_lep0_pt_ttbarcc__321->SetBinError(2,9.536927);
   c1lep5jex3bex_lep0_pt_ttbarcc__321->SetBinError(3,5.072404);
   c1lep5jex3bex_lep0_pt_ttbarcc__321->SetBinError(4,2.938281);
   c1lep5jex3bex_lep0_pt_ttbarcc__321->SetBinError(5,1.576479);
   c1lep5jex3bex_lep0_pt_ttbarcc__321->SetEntries(4006);
   c1lep5jex3bex_lep0_pt_ttbarcc__321->SetDirectory(0);
   c1lep5jex3bex_lep0_pt_ttbarcc__321->SetStats(0);

   ci = TColor::GetColor("#ccccff");
   c1lep5jex3bex_lep0_pt_ttbarcc__321->SetFillColor(ci);
   c1lep5jex3bex_lep0_pt_ttbarcc__321->SetMarkerStyle(20);
   c1lep5jex3bex_lep0_pt_ttbarcc__321->SetMarkerSize(1.2);
   c1lep5jex3bex_lep0_pt_ttbarcc__321->GetXaxis()->SetTitle("Lepton p_{T} [GeV]");
   c1lep5jex3bex_lep0_pt_ttbarcc__321->GetXaxis()->SetRange(1,16);
   c1lep5jex3bex_lep0_pt_ttbarcc__321->GetXaxis()->SetLabelFont(43);
   c1lep5jex3bex_lep0_pt_ttbarcc__321->GetXaxis()->SetLabelSize(21);
   c1lep5jex3bex_lep0_pt_ttbarcc__321->GetXaxis()->SetTitleSize(21);
   c1lep5jex3bex_lep0_pt_ttbarcc__321->GetXaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_lep0_pt_ttbarcc__321->GetXaxis()->SetTitleFont(43);
   c1lep5jex3bex_lep0_pt_ttbarcc__321->GetYaxis()->SetLabelFont(43);
   c1lep5jex3bex_lep0_pt_ttbarcc__321->GetYaxis()->SetLabelSize(21);
   c1lep5jex3bex_lep0_pt_ttbarcc__321->GetYaxis()->SetTitleSize(21);
   c1lep5jex3bex_lep0_pt_ttbarcc__321->GetYaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_lep0_pt_ttbarcc__321->GetYaxis()->SetTitleFont(43);
   c1lep5jex3bex_lep0_pt_ttbarcc__321->GetZaxis()->SetLabelFont(43);
   c1lep5jex3bex_lep0_pt_ttbarcc__321->GetZaxis()->SetLabelSize(21);
   c1lep5jex3bex_lep0_pt_ttbarcc__321->GetZaxis()->SetTitleSize(21);
   c1lep5jex3bex_lep0_pt_ttbarcc__321->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep5jex3bex_lep0_pt_ttbarcc,"");
   Double_t xAxis358[5] = {25, 75, 125, 175, 225}; 
   
   TH1D *c1lep5jex3bex_lep0_pt_ttbarlight__322 = new TH1D("c1lep5jex3bex_lep0_pt_ttbarlight__322","",4, xAxis358);
   c1lep5jex3bex_lep0_pt_ttbarlight__322->SetBinContent(1,2674.403);
   c1lep5jex3bex_lep0_pt_ttbarlight__322->SetBinContent(2,377.287);
   c1lep5jex3bex_lep0_pt_ttbarlight__322->SetBinContent(3,97.24228);
   c1lep5jex3bex_lep0_pt_ttbarlight__322->SetBinContent(4,27.36315);
   c1lep5jex3bex_lep0_pt_ttbarlight__322->SetBinContent(5,10.42924);
   c1lep5jex3bex_lep0_pt_ttbarlight__322->SetBinError(1,38.34068);
   c1lep5jex3bex_lep0_pt_ttbarlight__322->SetBinError(2,15.07025);
   c1lep5jex3bex_lep0_pt_ttbarlight__322->SetBinError(3,7.12322);
   c1lep5jex3bex_lep0_pt_ttbarlight__322->SetBinError(4,3.911196);
   c1lep5jex3bex_lep0_pt_ttbarlight__322->SetBinError(5,2.173895);
   c1lep5jex3bex_lep0_pt_ttbarlight__322->SetEntries(9132);
   c1lep5jex3bex_lep0_pt_ttbarlight__322->SetDirectory(0);
   c1lep5jex3bex_lep0_pt_ttbarlight__322->SetStats(0);
   c1lep5jex3bex_lep0_pt_ttbarlight__322->SetMarkerStyle(20);
   c1lep5jex3bex_lep0_pt_ttbarlight__322->SetMarkerSize(1.2);
   c1lep5jex3bex_lep0_pt_ttbarlight__322->GetXaxis()->SetTitle("Lepton p_{T} [GeV]");
   c1lep5jex3bex_lep0_pt_ttbarlight__322->GetXaxis()->SetRange(1,16);
   c1lep5jex3bex_lep0_pt_ttbarlight__322->GetXaxis()->SetLabelFont(43);
   c1lep5jex3bex_lep0_pt_ttbarlight__322->GetXaxis()->SetLabelSize(21);
   c1lep5jex3bex_lep0_pt_ttbarlight__322->GetXaxis()->SetTitleSize(21);
   c1lep5jex3bex_lep0_pt_ttbarlight__322->GetXaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_lep0_pt_ttbarlight__322->GetXaxis()->SetTitleFont(43);
   c1lep5jex3bex_lep0_pt_ttbarlight__322->GetYaxis()->SetLabelFont(43);
   c1lep5jex3bex_lep0_pt_ttbarlight__322->GetYaxis()->SetLabelSize(21);
   c1lep5jex3bex_lep0_pt_ttbarlight__322->GetYaxis()->SetTitleSize(21);
   c1lep5jex3bex_lep0_pt_ttbarlight__322->GetYaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_lep0_pt_ttbarlight__322->GetYaxis()->SetTitleFont(43);
   c1lep5jex3bex_lep0_pt_ttbarlight__322->GetZaxis()->SetLabelFont(43);
   c1lep5jex3bex_lep0_pt_ttbarlight__322->GetZaxis()->SetLabelSize(21);
   c1lep5jex3bex_lep0_pt_ttbarlight__322->GetZaxis()->SetTitleSize(21);
   c1lep5jex3bex_lep0_pt_ttbarlight__322->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep5jex3bex_lep0_pt_ttbarlight,"");
   Double_t xAxis359[5] = {25, 75, 125, 175, 225}; 
   
   TH1D *c1lep5jex3bex_lep0_pt_uHcW__323 = new TH1D("c1lep5jex3bex_lep0_pt_uHcW__323","",4, xAxis359);
   c1lep5jex3bex_lep0_pt_uHcW__323->SetBinContent(1,862.4851);
   c1lep5jex3bex_lep0_pt_uHcW__323->SetBinContent(2,118.5541);
   c1lep5jex3bex_lep0_pt_uHcW__323->SetBinContent(3,19.33833);
   c1lep5jex3bex_lep0_pt_uHcW__323->SetBinContent(4,12.607);
   c1lep5jex3bex_lep0_pt_uHcW__323->SetBinContent(5,-1.181685);
   c1lep5jex3bex_lep0_pt_uHcW__323->SetBinError(1,28.79895);
   c1lep5jex3bex_lep0_pt_uHcW__323->SetBinError(2,10.60255);
   c1lep5jex3bex_lep0_pt_uHcW__323->SetBinError(3,3.909901);
   c1lep5jex3bex_lep0_pt_uHcW__323->SetBinError(4,3.142383);
   c1lep5jex3bex_lep0_pt_uHcW__323->SetBinError(5,1.588948);
   c1lep5jex3bex_lep0_pt_uHcW__323->SetEntries(5357);
   c1lep5jex3bex_lep0_pt_uHcW__323->SetDirectory(0);
   c1lep5jex3bex_lep0_pt_uHcW__323->SetStats(0);
   c1lep5jex3bex_lep0_pt_uHcW__323->SetFillColor(2);
   c1lep5jex3bex_lep0_pt_uHcW__323->SetLineColor(2);
   c1lep5jex3bex_lep0_pt_uHcW__323->SetMarkerStyle(20);
   c1lep5jex3bex_lep0_pt_uHcW__323->SetMarkerSize(1.2);
   c1lep5jex3bex_lep0_pt_uHcW__323->GetXaxis()->SetTitle("Lepton p_{T} [GeV]");
   c1lep5jex3bex_lep0_pt_uHcW__323->GetXaxis()->SetRange(1,16);
   c1lep5jex3bex_lep0_pt_uHcW__323->GetXaxis()->SetLabelFont(43);
   c1lep5jex3bex_lep0_pt_uHcW__323->GetXaxis()->SetLabelSize(21);
   c1lep5jex3bex_lep0_pt_uHcW__323->GetXaxis()->SetTitleSize(21);
   c1lep5jex3bex_lep0_pt_uHcW__323->GetXaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_lep0_pt_uHcW__323->GetXaxis()->SetTitleFont(43);
   c1lep5jex3bex_lep0_pt_uHcW__323->GetYaxis()->SetLabelFont(43);
   c1lep5jex3bex_lep0_pt_uHcW__323->GetYaxis()->SetLabelSize(21);
   c1lep5jex3bex_lep0_pt_uHcW__323->GetYaxis()->SetTitleSize(21);
   c1lep5jex3bex_lep0_pt_uHcW__323->GetYaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_lep0_pt_uHcW__323->GetYaxis()->SetTitleFont(43);
   c1lep5jex3bex_lep0_pt_uHcW__323->GetZaxis()->SetLabelFont(43);
   c1lep5jex3bex_lep0_pt_uHcW__323->GetZaxis()->SetLabelSize(21);
   c1lep5jex3bex_lep0_pt_uHcW__323->GetZaxis()->SetTitleSize(21);
   c1lep5jex3bex_lep0_pt_uHcW__323->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep5jex3bex_lep0_pt_uHcW,"");
   h_stack->Draw("hist same");
   
   Double_t g_totErr_fx3143[4] = {
   50,
   100,
   150,
   200};
   Double_t g_totErr_fy3143[4] = {
   8373.329,
   1239.555,
   361.7228,
   96.38239};
   Double_t g_totErr_felx3143[4] = {
   25,
   25,
   25,
   25};
   Double_t g_totErr_fely3143[4] = {
   1561.77,
   232.2505,
   68.38136,
   20.79891};
   Double_t g_totErr_fehx3143[4] = {
   25,
   25,
   25,
   25};
   Double_t g_totErr_fehy3143[4] = {
   1561.77,
   232.2505,
   68.38136,
   20.79891};
   grae = new TGraphAsymmErrors(4,g_totErr_fx3143,g_totErr_fy3143,g_totErr_felx3143,g_totErr_fehx3143,g_totErr_fely3143,g_totErr_fehy3143);
   grae->SetName("g_totErr");
   grae->SetTitle("");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(3354);
   grae->SetLineColor(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0);
   
   TH1F *Graph_g_totErr3143 = new TH1F("Graph_g_totErr3143","",100,5,245);
   Graph_g_totErr3143->SetMinimum(0);
   Graph_g_totErr3143->SetMaximum(10921.05);
   Graph_g_totErr3143->SetDirectory(0);
   Graph_g_totErr3143->SetStats(0);
   Graph_g_totErr3143->SetLineWidth(2);
   Graph_g_totErr3143->SetMarkerStyle(20);
   Graph_g_totErr3143->SetMarkerSize(1.2);
   Graph_g_totErr3143->GetXaxis()->SetLabelFont(43);
   Graph_g_totErr3143->GetXaxis()->SetLabelSize(21);
   Graph_g_totErr3143->GetXaxis()->SetTitleSize(21);
   Graph_g_totErr3143->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_totErr3143->GetXaxis()->SetTitleFont(43);
   Graph_g_totErr3143->GetYaxis()->SetLabelFont(43);
   Graph_g_totErr3143->GetYaxis()->SetLabelSize(21);
   Graph_g_totErr3143->GetYaxis()->SetTitleSize(21);
   Graph_g_totErr3143->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_totErr3143->GetYaxis()->SetTitleFont(43);
   Graph_g_totErr3143->GetZaxis()->SetLabelFont(43);
   Graph_g_totErr3143->GetZaxis()->SetLabelSize(21);
   Graph_g_totErr3143->GetZaxis()->SetTitleSize(21);
   Graph_g_totErr3143->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_totErr3143);
   
   grae->Draw("e2");
   
   Double_t Graph_from_c1lep5jex3bex_lep0_pt_Data_fx3144[4] = {
   50,
   100,
   150,
   200};
   Double_t Graph_from_c1lep5jex3bex_lep0_pt_Data_fy3144[4] = {
   9749,
   1416,
   370,
   101};
   Double_t Graph_from_c1lep5jex3bex_lep0_pt_Data_felx3144[4] = {
   24.95,
   24.95,
   24.95,
   24.95};
   Double_t Graph_from_c1lep5jex3bex_lep0_pt_Data_fely3144[4] = {
   98.73702,
   37.62978,
   19.23538,
   10.04988};
   Double_t Graph_from_c1lep5jex3bex_lep0_pt_Data_fehx3144[4] = {
   25,
   25,
   25,
   25};
   Double_t Graph_from_c1lep5jex3bex_lep0_pt_Data_fehy3144[4] = {
   98.73702,
   37.62978,
   19.23538,
   10.04988};
   grae = new TGraphAsymmErrors(4,Graph_from_c1lep5jex3bex_lep0_pt_Data_fx3144,Graph_from_c1lep5jex3bex_lep0_pt_Data_fy3144,Graph_from_c1lep5jex3bex_lep0_pt_Data_felx3144,Graph_from_c1lep5jex3bex_lep0_pt_Data_fehx3144,Graph_from_c1lep5jex3bex_lep0_pt_Data_fely3144,Graph_from_c1lep5jex3bex_lep0_pt_Data_fehy3144);
   grae->SetName("Graph_from_c1lep5jex3bex_lep0_pt_Data");
   grae->SetTitle("");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_c1lep5jex3bex_lep0_pt_Data3144 = new TH1F("Graph_Graph_from_c1lep5jex3bex_lep0_pt_Data3144","",100,5.055,244.995);
   Graph_Graph_from_c1lep5jex3bex_lep0_pt_Data3144->SetMinimum(0);
   Graph_Graph_from_c1lep5jex3bex_lep0_pt_Data3144->SetMaximum(10823.42);
   Graph_Graph_from_c1lep5jex3bex_lep0_pt_Data3144->SetDirectory(0);
   Graph_Graph_from_c1lep5jex3bex_lep0_pt_Data3144->SetStats(0);
   Graph_Graph_from_c1lep5jex3bex_lep0_pt_Data3144->SetLineWidth(2);
   Graph_Graph_from_c1lep5jex3bex_lep0_pt_Data3144->SetMarkerStyle(20);
   Graph_Graph_from_c1lep5jex3bex_lep0_pt_Data3144->SetMarkerSize(1.2);
   Graph_Graph_from_c1lep5jex3bex_lep0_pt_Data3144->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep5jex3bex_lep0_pt_Data3144->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep5jex3bex_lep0_pt_Data3144->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep5jex3bex_lep0_pt_Data3144->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep5jex3bex_lep0_pt_Data3144->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep5jex3bex_lep0_pt_Data3144->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep5jex3bex_lep0_pt_Data3144->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep5jex3bex_lep0_pt_Data3144->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep5jex3bex_lep0_pt_Data3144->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep5jex3bex_lep0_pt_Data3144->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep5jex3bex_lep0_pt_Data3144->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep5jex3bex_lep0_pt_Data3144->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep5jex3bex_lep0_pt_Data3144->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep5jex3bex_lep0_pt_Data3144->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_c1lep5jex3bex_lep0_pt_Data3144);
   
   grae->Draw("ep1 ");
   Double_t xAxis360[5] = {25, 75, 125, 175, 225}; 
   
   TH1D *h_dummy_copy__324 = new TH1D("h_dummy_copy__324","",4, xAxis360);
   h_dummy_copy__324->SetEntries(1363517);
   h_dummy_copy__324->SetDirectory(0);
   h_dummy_copy__324->SetStats(0);
   h_dummy_copy__324->SetMarkerStyle(20);
   h_dummy_copy__324->SetMarkerSize(1.2);
   h_dummy_copy__324->GetXaxis()->SetTitle("lepton p_{T} [Gev]");
   h_dummy_copy__324->GetXaxis()->SetRange(1,16);
   h_dummy_copy__324->GetXaxis()->SetLabelFont(43);
   h_dummy_copy__324->GetXaxis()->SetLabelSize(21);
   h_dummy_copy__324->GetXaxis()->SetTitleSize(21);
   h_dummy_copy__324->GetXaxis()->SetTitleOffset(1.4);
   h_dummy_copy__324->GetXaxis()->SetTitleFont(43);
   h_dummy_copy__324->GetYaxis()->SetTitle("Events / 50 GeV");
   h_dummy_copy__324->GetYaxis()->SetLabelFont(43);
   h_dummy_copy__324->GetYaxis()->SetLabelSize(16.8);
   h_dummy_copy__324->GetYaxis()->SetTitleSize(21);
   h_dummy_copy__324->GetYaxis()->SetTitleOffset(2.4);
   h_dummy_copy__324->GetYaxis()->SetTitleFont(43);
   h_dummy_copy__324->GetZaxis()->SetLabelFont(43);
   h_dummy_copy__324->GetZaxis()->SetLabelSize(21);
   h_dummy_copy__324->GetZaxis()->SetTitleSize(21);
   h_dummy_copy__324->GetZaxis()->SetTitleFont(43);
   h_dummy_copy__324->Draw("sameaxis");
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
      tex = new TLatex(0.18,0.73,"5j, 3b");
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
   TLegendEntry *entry=leg->AddEntry("c1lep5jex3bex_lep0_pt_Data","Data","lep");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep5jex3bex_lep0_pt_uHcW","t#bar{t}#rightarrowWbHc (BR=1%)","f");
   entry->SetFillColor(2);
   entry->SetFillStyle(1001);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep5jex3bex_lep0_pt_ttbarlight","t#bar{t}+light","f");
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep5jex3bex_lep0_pt_ttbarcc","t#bar{t}+cc","f");

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
   entry=leg->AddEntry("c1lep5jex3bex_lep0_pt_ttbarbb","t#bar{t}+bb","f");

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
   entry=leg->AddEntry("c1lep5jex3bex_lep0_pt_topEW","Non-t#bar{t}","f");

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
   c_c1lep5jex3bex_lep0_pt->cd();
   c_c1lep5jex3bex_lep0_pt->Modified();
   c_c1lep5jex3bex_lep0_pt->cd();
   c_c1lep5jex3bex_lep0_pt->SetSelected(c_c1lep5jex3bex_lep0_pt);
}
