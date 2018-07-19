void c1lep6jin3bex_jets_pt()
{
//=========Macro generated from canvas: c_c1lep6jin3bex_jets_pt/c_c1lep6jin3bex_jets_pt
//=========  (Thu Jul 19 17:38:06 2018) by ROOT version6.04/14
   TCanvas *c_c1lep6jin3bex_jets_pt = new TCanvas("c_c1lep6jin3bex_jets_pt", "c_c1lep6jin3bex_jets_pt",0,0,600,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c_c1lep6jin3bex_jets_pt->SetHighLightColor(2);
   c_c1lep6jin3bex_jets_pt->Range(0,0,1,1);
   c_c1lep6jin3bex_jets_pt->SetFillColor(0);
   c_c1lep6jin3bex_jets_pt->SetBorderMode(0);
   c_c1lep6jin3bex_jets_pt->SetBorderSize(2);
   c_c1lep6jin3bex_jets_pt->SetTickx(1);
   c_c1lep6jin3bex_jets_pt->SetTicky(1);
   c_c1lep6jin3bex_jets_pt->SetLeftMargin(0.16);
   c_c1lep6jin3bex_jets_pt->SetRightMargin(0.05);
   c_c1lep6jin3bex_jets_pt->SetTopMargin(0.05);
   c_c1lep6jin3bex_jets_pt->SetBottomMargin(0.16);
   c_c1lep6jin3bex_jets_pt->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0,1,0.28);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-26.85185,-0.0873016,343.5185,1.5);
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
   Double_t xAxis281[7] = {25, 75, 125, 175, 225, 275, 325}; 
   
   TH1D *h_dummy2__253 = new TH1D("h_dummy2__253","Data/MC",6, xAxis281);
   h_dummy2__253->SetMinimum(0.5);
   h_dummy2__253->SetMaximum(1.5);
   h_dummy2__253->SetEntries(7835000);
   h_dummy2__253->SetDirectory(0);
   h_dummy2__253->SetStats(0);
   h_dummy2__253->SetMarkerStyle(20);
   h_dummy2__253->SetMarkerSize(1.2);
   h_dummy2__253->GetXaxis()->SetTitle("jets p_{T} [GeV]");
   h_dummy2__253->GetXaxis()->SetRange(1,100);
   h_dummy2__253->GetXaxis()->SetLabelFont(43);
   h_dummy2__253->GetXaxis()->SetLabelOffset(0.025);
   h_dummy2__253->GetXaxis()->SetLabelSize(16.8);
   h_dummy2__253->GetXaxis()->SetTitleSize(21);
   h_dummy2__253->GetXaxis()->SetTitleOffset(5.05);
   h_dummy2__253->GetXaxis()->SetTitleFont(43);
   h_dummy2__253->GetYaxis()->SetTitle("Data / Bkg");
   h_dummy2__253->GetYaxis()->SetNdivisions(-504);
   h_dummy2__253->GetYaxis()->SetLabelFont(43);
   h_dummy2__253->GetYaxis()->SetLabelOffset(0.02);
   h_dummy2__253->GetYaxis()->SetLabelSize(16.8);
   h_dummy2__253->GetYaxis()->SetTitleSize(21);
   h_dummy2__253->GetYaxis()->SetTitleOffset(2.4);
   h_dummy2__253->GetYaxis()->SetTitleFont(43);
   h_dummy2__253->GetZaxis()->SetLabelFont(43);
   h_dummy2__253->GetZaxis()->SetLabelSize(21);
   h_dummy2__253->GetZaxis()->SetTitleSize(21);
   h_dummy2__253->GetZaxis()->SetTitleFont(43);
   h_dummy2__253->Draw("HIST");
   
   Double_t Graph_from_h_ratio_fx3113[6] = {
   50,
   100,
   150,
   200,
   250,
   300};
   Double_t Graph_from_h_ratio_fy3113[6] = {
   1.133591,
   1.068835,
   1.073815,
   1.049411,
   1.064386,
   1.093896};
   Double_t Graph_from_h_ratio_felx3113[6] = {
   24.95,
   24.95,
   24.95,
   24.95,
   24.95,
   24.95};
   Double_t Graph_from_h_ratio_fely3113[6] = {
   0.004371198,
   0.007740712,
   0.01241508,
   0.01853956,
   0.0266848,
   0.03719357};
   Double_t Graph_from_h_ratio_fehx3113[6] = {
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t Graph_from_h_ratio_fehy3113[6] = {
   0.004371198,
   0.007740712,
   0.01241508,
   0.01853956,
   0.0266848,
   0.03719357};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(6,Graph_from_h_ratio_fx3113,Graph_from_h_ratio_fy3113,Graph_from_h_ratio_felx3113,Graph_from_h_ratio_fehx3113,Graph_from_h_ratio_fely3113,Graph_from_h_ratio_fehy3113);
   grae->SetName("Graph_from_h_ratio");
   grae->SetTitle("");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(24);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_h_ratio3113 = new TH1F("Graph_Graph_from_h_ratio3113","",100,0,354.995);
   Graph_Graph_from_h_ratio3113->SetMinimum(1.020162);
   Graph_Graph_from_h_ratio3113->SetMaximum(1.148671);
   Graph_Graph_from_h_ratio3113->SetDirectory(0);
   Graph_Graph_from_h_ratio3113->SetStats(0);
   Graph_Graph_from_h_ratio3113->SetLineWidth(2);
   Graph_Graph_from_h_ratio3113->SetMarkerStyle(20);
   Graph_Graph_from_h_ratio3113->SetMarkerSize(1.2);
   Graph_Graph_from_h_ratio3113->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3113->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3113->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3113->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3113->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3113->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3113->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3113->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3113->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3113->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3113->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3113->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3113->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3113->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_h_ratio3113);
   
   grae->Draw("pe0");
   TLine *line = new TLine(25,1,325,1);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t g_ratio2_fx3114[6] = {
   50,
   100,
   150,
   200,
   250,
   300};
   Double_t g_ratio2_fy3114[6] = {
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t g_ratio2_felx3114[6] = {
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t g_ratio2_fely3114[6] = {
   0.1997747,
   0.1889307,
   0.1889581,
   0.1979918,
   0.2114228,
   0.23466};
   Double_t g_ratio2_fehx3114[6] = {
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t g_ratio2_fehy3114[6] = {
   0.1997747,
   0.1889307,
   0.1889581,
   0.1979918,
   0.2114228,
   0.23466};
   grae = new TGraphAsymmErrors(6,g_ratio2_fx3114,g_ratio2_fy3114,g_ratio2_felx3114,g_ratio2_fehx3114,g_ratio2_fely3114,g_ratio2_fehy3114);
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
   
   TH1F *Graph_g_ratio23114 = new TH1F("Graph_g_ratio23114","",100,0,355);
   Graph_g_ratio23114->SetMinimum(0.718408);
   Graph_g_ratio23114->SetMaximum(1.281592);
   Graph_g_ratio23114->SetDirectory(0);
   Graph_g_ratio23114->SetStats(0);
   Graph_g_ratio23114->SetLineWidth(2);
   Graph_g_ratio23114->SetMarkerStyle(20);
   Graph_g_ratio23114->SetMarkerSize(1.2);
   Graph_g_ratio23114->GetXaxis()->SetLabelFont(43);
   Graph_g_ratio23114->GetXaxis()->SetLabelSize(21);
   Graph_g_ratio23114->GetXaxis()->SetTitleSize(21);
   Graph_g_ratio23114->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23114->GetXaxis()->SetTitleFont(43);
   Graph_g_ratio23114->GetYaxis()->SetLabelFont(43);
   Graph_g_ratio23114->GetYaxis()->SetLabelSize(21);
   Graph_g_ratio23114->GetYaxis()->SetTitleSize(21);
   Graph_g_ratio23114->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23114->GetYaxis()->SetTitleFont(43);
   Graph_g_ratio23114->GetZaxis()->SetLabelFont(43);
   Graph_g_ratio23114->GetZaxis()->SetLabelSize(21);
   Graph_g_ratio23114->GetZaxis()->SetTitleSize(21);
   Graph_g_ratio23114->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_ratio23114);
   
   grae->Draw("e2");
   Double_t xAxis282[7] = {25, 75, 125, 175, 225, 275, 325}; 
   
   TH1D *h_dummy2_copy__254 = new TH1D("h_dummy2_copy__254","Data/MC",6, xAxis282);
   h_dummy2_copy__254->SetMinimum(0.5);
   h_dummy2_copy__254->SetMaximum(1.5);
   h_dummy2_copy__254->SetEntries(7835000);
   h_dummy2_copy__254->SetDirectory(0);
   h_dummy2_copy__254->SetStats(0);
   h_dummy2_copy__254->SetMarkerStyle(20);
   h_dummy2_copy__254->SetMarkerSize(1.2);
   h_dummy2_copy__254->GetXaxis()->SetTitle("jets p_{T} [GeV]");
   h_dummy2_copy__254->GetXaxis()->SetRange(1,100);
   h_dummy2_copy__254->GetXaxis()->SetLabelFont(43);
   h_dummy2_copy__254->GetXaxis()->SetLabelOffset(0.025);
   h_dummy2_copy__254->GetXaxis()->SetLabelSize(16.8);
   h_dummy2_copy__254->GetXaxis()->SetTitleSize(21);
   h_dummy2_copy__254->GetXaxis()->SetTitleOffset(5.05);
   h_dummy2_copy__254->GetXaxis()->SetTitleFont(43);
   h_dummy2_copy__254->GetYaxis()->SetTitle("Data / Bkg");
   h_dummy2_copy__254->GetYaxis()->SetNdivisions(-504);
   h_dummy2_copy__254->GetYaxis()->SetLabelFont(43);
   h_dummy2_copy__254->GetYaxis()->SetLabelOffset(0.02);
   h_dummy2_copy__254->GetYaxis()->SetLabelSize(16.8);
   h_dummy2_copy__254->GetYaxis()->SetTitleSize(21);
   h_dummy2_copy__254->GetYaxis()->SetTitleOffset(2.4);
   h_dummy2_copy__254->GetYaxis()->SetTitleFont(43);
   h_dummy2_copy__254->GetZaxis()->SetLabelFont(43);
   h_dummy2_copy__254->GetZaxis()->SetLabelSize(21);
   h_dummy2_copy__254->GetZaxis()->SetTitleSize(21);
   h_dummy2_copy__254->GetZaxis()->SetTitleFont(43);
   h_dummy2_copy__254->Draw("sameaxis");
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
   c_c1lep6jin3bex_jets_pt->cd();
  
// ------------>Primitives in pad: pad0
   TPad *pad0 = new TPad("pad0", "pad0",0,0.2,1,1);
   pad0->Draw();
   pad0->cd();
   pad0->Range(-26.85185,-14296.73,343.5185,128670.6);
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
   Double_t xAxis283[7] = {25, 75, 125, 175, 225, 275, 325}; 
   
   TH1D *h_dummy__255 = new TH1D("h_dummy__255","",6, xAxis283);
   h_dummy__255->SetMinimum(0);
   h_dummy__255->SetMaximum(121522.2);
   h_dummy__255->SetEntries(7835000);
   h_dummy__255->SetDirectory(0);
   h_dummy__255->SetStats(0);
   h_dummy__255->SetMarkerStyle(20);
   h_dummy__255->SetMarkerSize(1.2);
   h_dummy__255->GetXaxis()->SetRange(1,100);
   h_dummy__255->GetXaxis()->SetLabelFont(43);
   h_dummy__255->GetXaxis()->SetLabelSize(0);
   h_dummy__255->GetXaxis()->SetTitleSize(21);
   h_dummy__255->GetXaxis()->SetTitleOffset(1.4);
   h_dummy__255->GetXaxis()->SetTitleFont(43);
   h_dummy__255->GetYaxis()->SetTitle("Events / 50 GeV");
   h_dummy__255->GetYaxis()->SetLabelFont(43);
   h_dummy__255->GetYaxis()->SetLabelSize(16.8);
   h_dummy__255->GetYaxis()->SetTitleSize(21);
   h_dummy__255->GetYaxis()->SetTitleOffset(2.4);
   h_dummy__255->GetYaxis()->SetTitleFont(43);
   h_dummy__255->GetZaxis()->SetLabelFont(43);
   h_dummy__255->GetZaxis()->SetLabelSize(21);
   h_dummy__255->GetZaxis()->SetTitleSize(21);
   h_dummy__255->GetZaxis()->SetTitleFont(43);
   h_dummy__255->Draw("HIST");
   
   THStack *h_stack = new THStack();
   h_stack->SetName("h_stack");
   h_stack->SetTitle("h_stack");
   Double_t xAxis284[7] = {25, 75, 125, 175, 225, 275, 325}; 
   
   TH1F *h_stack_stack_29 = new TH1F("h_stack_stack_29","h_stack",6, xAxis284);
   h_stack_stack_29->SetMinimum(0);
   h_stack_stack_29->SetMaximum(65476.77);
   h_stack_stack_29->SetDirectory(0);
   h_stack_stack_29->SetStats(0);
   h_stack_stack_29->SetLineWidth(2);
   h_stack_stack_29->SetMarkerStyle(20);
   h_stack_stack_29->SetMarkerSize(1.2);
   h_stack_stack_29->GetXaxis()->SetLabelFont(43);
   h_stack_stack_29->GetXaxis()->SetLabelSize(21);
   h_stack_stack_29->GetXaxis()->SetTitleSize(21);
   h_stack_stack_29->GetXaxis()->SetTitleOffset(1.4);
   h_stack_stack_29->GetXaxis()->SetTitleFont(43);
   h_stack_stack_29->GetYaxis()->SetLabelFont(43);
   h_stack_stack_29->GetYaxis()->SetLabelSize(21);
   h_stack_stack_29->GetYaxis()->SetTitleSize(21);
   h_stack_stack_29->GetYaxis()->SetTitleOffset(1.4);
   h_stack_stack_29->GetYaxis()->SetTitleFont(43);
   h_stack_stack_29->GetZaxis()->SetLabelFont(43);
   h_stack_stack_29->GetZaxis()->SetLabelSize(21);
   h_stack_stack_29->GetZaxis()->SetTitleSize(21);
   h_stack_stack_29->GetZaxis()->SetTitleFont(43);
   h_stack->SetHistogram(h_stack_stack_29);
   
   Double_t xAxis285[7] = {25, 75, 125, 175, 225, 275, 325}; 
   
   TH1D *c1lep6jin3bex_jets_pt_topEW__256 = new TH1D("c1lep6jin3bex_jets_pt_topEW__256","",6, xAxis285);
   c1lep6jin3bex_jets_pt_topEW__256->SetBinContent(1,7971.557);
   c1lep6jin3bex_jets_pt_topEW__256->SetBinContent(2,2613.571);
   c1lep6jin3bex_jets_pt_topEW__256->SetBinContent(3,1111.045);
   c1lep6jin3bex_jets_pt_topEW__256->SetBinContent(4,483.3423);
   c1lep6jin3bex_jets_pt_topEW__256->SetBinContent(5,239.4312);
   c1lep6jin3bex_jets_pt_topEW__256->SetBinContent(6,119.2685);
   c1lep6jin3bex_jets_pt_topEW__256->SetBinContent(7,226.7125);
   c1lep6jin3bex_jets_pt_topEW__256->SetBinError(1,190.3385);
   c1lep6jin3bex_jets_pt_topEW__256->SetBinError(2,117.6012);
   c1lep6jin3bex_jets_pt_topEW__256->SetBinError(3,75.87908);
   c1lep6jin3bex_jets_pt_topEW__256->SetBinError(4,47.01542);
   c1lep6jin3bex_jets_pt_topEW__256->SetBinError(5,29.56802);
   c1lep6jin3bex_jets_pt_topEW__256->SetBinError(6,17.51169);
   c1lep6jin3bex_jets_pt_topEW__256->SetBinError(7,27.7216);
   c1lep6jin3bex_jets_pt_topEW__256->SetEntries(7573895);
   c1lep6jin3bex_jets_pt_topEW__256->SetDirectory(0);
   c1lep6jin3bex_jets_pt_topEW__256->SetStats(0);

   ci = TColor::GetColor("#66cc66");
   c1lep6jin3bex_jets_pt_topEW__256->SetFillColor(ci);
   c1lep6jin3bex_jets_pt_topEW__256->SetMarkerStyle(20);
   c1lep6jin3bex_jets_pt_topEW__256->SetMarkerSize(1.2);
   c1lep6jin3bex_jets_pt_topEW__256->GetXaxis()->SetTitle("Jets p_{T} [GeV]");
   c1lep6jin3bex_jets_pt_topEW__256->GetXaxis()->SetRange(1,100);
   c1lep6jin3bex_jets_pt_topEW__256->GetXaxis()->SetLabelFont(43);
   c1lep6jin3bex_jets_pt_topEW__256->GetXaxis()->SetLabelSize(21);
   c1lep6jin3bex_jets_pt_topEW__256->GetXaxis()->SetTitleSize(21);
   c1lep6jin3bex_jets_pt_topEW__256->GetXaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_jets_pt_topEW__256->GetXaxis()->SetTitleFont(43);
   c1lep6jin3bex_jets_pt_topEW__256->GetYaxis()->SetLabelFont(43);
   c1lep6jin3bex_jets_pt_topEW__256->GetYaxis()->SetLabelSize(21);
   c1lep6jin3bex_jets_pt_topEW__256->GetYaxis()->SetTitleSize(21);
   c1lep6jin3bex_jets_pt_topEW__256->GetYaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_jets_pt_topEW__256->GetYaxis()->SetTitleFont(43);
   c1lep6jin3bex_jets_pt_topEW__256->GetZaxis()->SetLabelFont(43);
   c1lep6jin3bex_jets_pt_topEW__256->GetZaxis()->SetLabelSize(21);
   c1lep6jin3bex_jets_pt_topEW__256->GetZaxis()->SetTitleSize(21);
   c1lep6jin3bex_jets_pt_topEW__256->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep6jin3bex_jets_pt_topEW,"");
   Double_t xAxis286[7] = {25, 75, 125, 175, 225, 275, 325}; 
   
   TH1D *c1lep6jin3bex_jets_pt_ttbarbb__257 = new TH1D("c1lep6jin3bex_jets_pt_ttbarbb__257","",6, xAxis286);
   c1lep6jin3bex_jets_pt_ttbarbb__257->SetBinContent(1,32406.61);
   c1lep6jin3bex_jets_pt_ttbarbb__257->SetBinContent(2,9815.329);
   c1lep6jin3bex_jets_pt_ttbarbb__257->SetBinContent(3,3863.01);
   c1lep6jin3bex_jets_pt_ttbarbb__257->SetBinContent(4,1677.59);
   c1lep6jin3bex_jets_pt_ttbarbb__257->SetBinContent(5,826.4594);
   c1lep6jin3bex_jets_pt_ttbarbb__257->SetBinContent(6,441.9089);
   c1lep6jin3bex_jets_pt_ttbarbb__257->SetBinContent(7,699.9264);
   c1lep6jin3bex_jets_pt_ttbarbb__257->SetBinError(1,117.4458);
   c1lep6jin3bex_jets_pt_ttbarbb__257->SetBinError(2,64.46867);
   c1lep6jin3bex_jets_pt_ttbarbb__257->SetBinError(3,41.02384);
   c1lep6jin3bex_jets_pt_ttbarbb__257->SetBinError(4,26.40495);
   c1lep6jin3bex_jets_pt_ttbarbb__257->SetBinError(5,18.10692);
   c1lep6jin3bex_jets_pt_ttbarbb__257->SetBinError(6,13.16946);
   c1lep6jin3bex_jets_pt_ttbarbb__257->SetBinError(7,17.54991);
   c1lep6jin3bex_jets_pt_ttbarbb__257->SetEntries(177706);
   c1lep6jin3bex_jets_pt_ttbarbb__257->SetDirectory(0);
   c1lep6jin3bex_jets_pt_ttbarbb__257->SetStats(0);

   ci = TColor::GetColor("#6666cc");
   c1lep6jin3bex_jets_pt_ttbarbb__257->SetFillColor(ci);
   c1lep6jin3bex_jets_pt_ttbarbb__257->SetMarkerStyle(20);
   c1lep6jin3bex_jets_pt_ttbarbb__257->SetMarkerSize(1.2);
   c1lep6jin3bex_jets_pt_ttbarbb__257->GetXaxis()->SetTitle("Jets p_{T} [GeV]");
   c1lep6jin3bex_jets_pt_ttbarbb__257->GetXaxis()->SetRange(1,100);
   c1lep6jin3bex_jets_pt_ttbarbb__257->GetXaxis()->SetLabelFont(43);
   c1lep6jin3bex_jets_pt_ttbarbb__257->GetXaxis()->SetLabelSize(21);
   c1lep6jin3bex_jets_pt_ttbarbb__257->GetXaxis()->SetTitleSize(21);
   c1lep6jin3bex_jets_pt_ttbarbb__257->GetXaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_jets_pt_ttbarbb__257->GetXaxis()->SetTitleFont(43);
   c1lep6jin3bex_jets_pt_ttbarbb__257->GetYaxis()->SetLabelFont(43);
   c1lep6jin3bex_jets_pt_ttbarbb__257->GetYaxis()->SetLabelSize(21);
   c1lep6jin3bex_jets_pt_ttbarbb__257->GetYaxis()->SetTitleSize(21);
   c1lep6jin3bex_jets_pt_ttbarbb__257->GetYaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_jets_pt_ttbarbb__257->GetYaxis()->SetTitleFont(43);
   c1lep6jin3bex_jets_pt_ttbarbb__257->GetZaxis()->SetLabelFont(43);
   c1lep6jin3bex_jets_pt_ttbarbb__257->GetZaxis()->SetLabelSize(21);
   c1lep6jin3bex_jets_pt_ttbarbb__257->GetZaxis()->SetTitleSize(21);
   c1lep6jin3bex_jets_pt_ttbarbb__257->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep6jin3bex_jets_pt_ttbarbb,"");
   Double_t xAxis287[7] = {25, 75, 125, 175, 225, 275, 325}; 
   
   TH1D *c1lep6jin3bex_jets_pt_ttbarcc__258 = new TH1D("c1lep6jin3bex_jets_pt_ttbarcc__258","",6, xAxis287);
   c1lep6jin3bex_jets_pt_ttbarcc__258->SetBinContent(1,7984.723);
   c1lep6jin3bex_jets_pt_ttbarcc__258->SetBinContent(2,2389.933);
   c1lep6jin3bex_jets_pt_ttbarcc__258->SetBinContent(3,936.1997);
   c1lep6jin3bex_jets_pt_ttbarcc__258->SetBinContent(4,418.1305);
   c1lep6jin3bex_jets_pt_ttbarcc__258->SetBinContent(5,207.2889);
   c1lep6jin3bex_jets_pt_ttbarcc__258->SetBinContent(6,119.371);
   c1lep6jin3bex_jets_pt_ttbarcc__258->SetBinContent(7,163.4423);
   c1lep6jin3bex_jets_pt_ttbarcc__258->SetBinError(1,62.51226);
   c1lep6jin3bex_jets_pt_ttbarcc__258->SetBinError(2,33.70815);
   c1lep6jin3bex_jets_pt_ttbarcc__258->SetBinError(3,20.86998);
   c1lep6jin3bex_jets_pt_ttbarcc__258->SetBinError(4,13.84656);
   c1lep6jin3bex_jets_pt_ttbarcc__258->SetBinError(5,10.55904);
   c1lep6jin3bex_jets_pt_ttbarcc__258->SetBinError(6,7.527384);
   c1lep6jin3bex_jets_pt_ttbarcc__258->SetBinError(7,8.219812);
   c1lep6jin3bex_jets_pt_ttbarcc__258->SetEntries(38033);
   c1lep6jin3bex_jets_pt_ttbarcc__258->SetDirectory(0);
   c1lep6jin3bex_jets_pt_ttbarcc__258->SetStats(0);

   ci = TColor::GetColor("#ccccff");
   c1lep6jin3bex_jets_pt_ttbarcc__258->SetFillColor(ci);
   c1lep6jin3bex_jets_pt_ttbarcc__258->SetMarkerStyle(20);
   c1lep6jin3bex_jets_pt_ttbarcc__258->SetMarkerSize(1.2);
   c1lep6jin3bex_jets_pt_ttbarcc__258->GetXaxis()->SetTitle("Jets p_{T} [GeV]");
   c1lep6jin3bex_jets_pt_ttbarcc__258->GetXaxis()->SetRange(1,100);
   c1lep6jin3bex_jets_pt_ttbarcc__258->GetXaxis()->SetLabelFont(43);
   c1lep6jin3bex_jets_pt_ttbarcc__258->GetXaxis()->SetLabelSize(21);
   c1lep6jin3bex_jets_pt_ttbarcc__258->GetXaxis()->SetTitleSize(21);
   c1lep6jin3bex_jets_pt_ttbarcc__258->GetXaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_jets_pt_ttbarcc__258->GetXaxis()->SetTitleFont(43);
   c1lep6jin3bex_jets_pt_ttbarcc__258->GetYaxis()->SetLabelFont(43);
   c1lep6jin3bex_jets_pt_ttbarcc__258->GetYaxis()->SetLabelSize(21);
   c1lep6jin3bex_jets_pt_ttbarcc__258->GetYaxis()->SetTitleSize(21);
   c1lep6jin3bex_jets_pt_ttbarcc__258->GetYaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_jets_pt_ttbarcc__258->GetYaxis()->SetTitleFont(43);
   c1lep6jin3bex_jets_pt_ttbarcc__258->GetZaxis()->SetLabelFont(43);
   c1lep6jin3bex_jets_pt_ttbarcc__258->GetZaxis()->SetLabelSize(21);
   c1lep6jin3bex_jets_pt_ttbarcc__258->GetZaxis()->SetTitleSize(21);
   c1lep6jin3bex_jets_pt_ttbarcc__258->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep6jin3bex_jets_pt_ttbarcc,"");
   Double_t xAxis288[7] = {25, 75, 125, 175, 225, 275, 325}; 
   
   TH1D *c1lep6jin3bex_jets_pt_ttbarlight__259 = new TH1D("c1lep6jin3bex_jets_pt_ttbarlight__259","",6, xAxis288);
   c1lep6jin3bex_jets_pt_ttbarlight__259->SetBinContent(1,10964.52);
   c1lep6jin3bex_jets_pt_ttbarlight__259->SetBinContent(2,3019.279);
   c1lep6jin3bex_jets_pt_ttbarlight__259->SetBinContent(3,1056.496);
   c1lep6jin3bex_jets_pt_ttbarlight__259->SetBinContent(4,474.0789);
   c1lep6jin3bex_jets_pt_ttbarlight__259->SetBinContent(5,221.5793);
   c1lep6jin3bex_jets_pt_ttbarlight__259->SetBinContent(6,110.2033);
   c1lep6jin3bex_jets_pt_ttbarlight__259->SetBinContent(7,158.0544);
   c1lep6jin3bex_jets_pt_ttbarlight__259->SetBinError(1,79.56551);
   c1lep6jin3bex_jets_pt_ttbarlight__259->SetBinError(2,42.27084);
   c1lep6jin3bex_jets_pt_ttbarlight__259->SetBinError(3,22.86605);
   c1lep6jin3bex_jets_pt_ttbarlight__259->SetBinError(4,16.04603);
   c1lep6jin3bex_jets_pt_ttbarlight__259->SetBinError(5,10.9836);
   c1lep6jin3bex_jets_pt_ttbarlight__259->SetBinError(6,7.033516);
   c1lep6jin3bex_jets_pt_ttbarlight__259->SetBinError(7,9.575688);
   c1lep6jin3bex_jets_pt_ttbarlight__259->SetEntries(45360);
   c1lep6jin3bex_jets_pt_ttbarlight__259->SetDirectory(0);
   c1lep6jin3bex_jets_pt_ttbarlight__259->SetStats(0);
   c1lep6jin3bex_jets_pt_ttbarlight__259->SetMarkerStyle(20);
   c1lep6jin3bex_jets_pt_ttbarlight__259->SetMarkerSize(1.2);
   c1lep6jin3bex_jets_pt_ttbarlight__259->GetXaxis()->SetTitle("Jets p_{T} [GeV]");
   c1lep6jin3bex_jets_pt_ttbarlight__259->GetXaxis()->SetRange(1,100);
   c1lep6jin3bex_jets_pt_ttbarlight__259->GetXaxis()->SetLabelFont(43);
   c1lep6jin3bex_jets_pt_ttbarlight__259->GetXaxis()->SetLabelSize(21);
   c1lep6jin3bex_jets_pt_ttbarlight__259->GetXaxis()->SetTitleSize(21);
   c1lep6jin3bex_jets_pt_ttbarlight__259->GetXaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_jets_pt_ttbarlight__259->GetXaxis()->SetTitleFont(43);
   c1lep6jin3bex_jets_pt_ttbarlight__259->GetYaxis()->SetLabelFont(43);
   c1lep6jin3bex_jets_pt_ttbarlight__259->GetYaxis()->SetLabelSize(21);
   c1lep6jin3bex_jets_pt_ttbarlight__259->GetYaxis()->SetTitleSize(21);
   c1lep6jin3bex_jets_pt_ttbarlight__259->GetYaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_jets_pt_ttbarlight__259->GetYaxis()->SetTitleFont(43);
   c1lep6jin3bex_jets_pt_ttbarlight__259->GetZaxis()->SetLabelFont(43);
   c1lep6jin3bex_jets_pt_ttbarlight__259->GetZaxis()->SetLabelSize(21);
   c1lep6jin3bex_jets_pt_ttbarlight__259->GetZaxis()->SetTitleSize(21);
   c1lep6jin3bex_jets_pt_ttbarlight__259->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep6jin3bex_jets_pt_ttbarlight,"");
   Double_t xAxis289[7] = {25, 75, 125, 175, 225, 275, 325}; 
   
   TH1D *c1lep6jin3bex_jets_pt_uHcW__260 = new TH1D("c1lep6jin3bex_jets_pt_uHcW__260","",6, xAxis289);
   c1lep6jin3bex_jets_pt_uHcW__260->SetBinContent(1,3031.426);
   c1lep6jin3bex_jets_pt_uHcW__260->SetBinContent(2,899.2574);
   c1lep6jin3bex_jets_pt_uHcW__260->SetBinContent(3,329.3434);
   c1lep6jin3bex_jets_pt_uHcW__260->SetBinContent(4,109.3172);
   c1lep6jin3bex_jets_pt_uHcW__260->SetBinContent(5,62.40249);
   c1lep6jin3bex_jets_pt_uHcW__260->SetBinContent(6,23.49174);
   c1lep6jin3bex_jets_pt_uHcW__260->SetBinContent(7,24.68727);
   c1lep6jin3bex_jets_pt_uHcW__260->SetBinError(1,65.68217);
   c1lep6jin3bex_jets_pt_uHcW__260->SetBinError(2,36.53682);
   c1lep6jin3bex_jets_pt_uHcW__260->SetBinError(3,21.57327);
   c1lep6jin3bex_jets_pt_uHcW__260->SetBinError(4,14.5596);
   c1lep6jin3bex_jets_pt_uHcW__260->SetBinError(5,10.7162);
   c1lep6jin3bex_jets_pt_uHcW__260->SetBinError(6,6.156762);
   c1lep6jin3bex_jets_pt_uHcW__260->SetBinError(7,8.551178);
   c1lep6jin3bex_jets_pt_uHcW__260->SetEntries(36883);
   c1lep6jin3bex_jets_pt_uHcW__260->SetDirectory(0);
   c1lep6jin3bex_jets_pt_uHcW__260->SetStats(0);
   c1lep6jin3bex_jets_pt_uHcW__260->SetFillColor(2);
   c1lep6jin3bex_jets_pt_uHcW__260->SetLineColor(2);
   c1lep6jin3bex_jets_pt_uHcW__260->SetMarkerStyle(20);
   c1lep6jin3bex_jets_pt_uHcW__260->SetMarkerSize(1.2);
   c1lep6jin3bex_jets_pt_uHcW__260->GetXaxis()->SetTitle("Jets p_{T} [GeV]");
   c1lep6jin3bex_jets_pt_uHcW__260->GetXaxis()->SetRange(1,100);
   c1lep6jin3bex_jets_pt_uHcW__260->GetXaxis()->SetLabelFont(43);
   c1lep6jin3bex_jets_pt_uHcW__260->GetXaxis()->SetLabelSize(21);
   c1lep6jin3bex_jets_pt_uHcW__260->GetXaxis()->SetTitleSize(21);
   c1lep6jin3bex_jets_pt_uHcW__260->GetXaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_jets_pt_uHcW__260->GetXaxis()->SetTitleFont(43);
   c1lep6jin3bex_jets_pt_uHcW__260->GetYaxis()->SetLabelFont(43);
   c1lep6jin3bex_jets_pt_uHcW__260->GetYaxis()->SetLabelSize(21);
   c1lep6jin3bex_jets_pt_uHcW__260->GetYaxis()->SetTitleSize(21);
   c1lep6jin3bex_jets_pt_uHcW__260->GetYaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_jets_pt_uHcW__260->GetYaxis()->SetTitleFont(43);
   c1lep6jin3bex_jets_pt_uHcW__260->GetZaxis()->SetLabelFont(43);
   c1lep6jin3bex_jets_pt_uHcW__260->GetZaxis()->SetLabelSize(21);
   c1lep6jin3bex_jets_pt_uHcW__260->GetZaxis()->SetTitleSize(21);
   c1lep6jin3bex_jets_pt_uHcW__260->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep6jin3bex_jets_pt_uHcW,"");
   h_stack->Draw("hist same");
   
   Double_t g_totErr_fx3115[6] = {
   50,
   100,
   150,
   200,
   250,
   300};
   Double_t g_totErr_fy3115[6] = {
   59327.41,
   17838.11,
   6966.75,
   3053.142,
   1494.759,
   790.7518};
   Double_t g_totErr_felx3115[6] = {
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t g_totErr_fely3115[6] = {
   11852.12,
   3370.168,
   1316.424,
   604.4971,
   316.0261,
   185.5578};
   Double_t g_totErr_fehx3115[6] = {
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t g_totErr_fehy3115[6] = {
   11852.12,
   3370.168,
   1316.424,
   604.4971,
   316.0261,
   185.5578};
   grae = new TGraphAsymmErrors(6,g_totErr_fx3115,g_totErr_fy3115,g_totErr_felx3115,g_totErr_fehx3115,g_totErr_fely3115,g_totErr_fehy3115);
   grae->SetName("g_totErr");
   grae->SetTitle("");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(3354);
   grae->SetLineColor(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0);
   
   TH1F *Graph_g_totErr3115 = new TH1F("Graph_g_totErr3115","",100,0,355);
   Graph_g_totErr3115->SetMinimum(0);
   Graph_g_totErr3115->SetMaximum(78236.95);
   Graph_g_totErr3115->SetDirectory(0);
   Graph_g_totErr3115->SetStats(0);
   Graph_g_totErr3115->SetLineWidth(2);
   Graph_g_totErr3115->SetMarkerStyle(20);
   Graph_g_totErr3115->SetMarkerSize(1.2);
   Graph_g_totErr3115->GetXaxis()->SetLabelFont(43);
   Graph_g_totErr3115->GetXaxis()->SetLabelSize(21);
   Graph_g_totErr3115->GetXaxis()->SetTitleSize(21);
   Graph_g_totErr3115->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_totErr3115->GetXaxis()->SetTitleFont(43);
   Graph_g_totErr3115->GetYaxis()->SetLabelFont(43);
   Graph_g_totErr3115->GetYaxis()->SetLabelSize(21);
   Graph_g_totErr3115->GetYaxis()->SetTitleSize(21);
   Graph_g_totErr3115->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_totErr3115->GetYaxis()->SetTitleFont(43);
   Graph_g_totErr3115->GetZaxis()->SetLabelFont(43);
   Graph_g_totErr3115->GetZaxis()->SetLabelSize(21);
   Graph_g_totErr3115->GetZaxis()->SetTitleSize(21);
   Graph_g_totErr3115->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_totErr3115);
   
   grae->Draw("e2");
   
   Double_t Graph_from_c1lep6jin3bex_jets_pt_Data_fx3116[6] = {
   50,
   100,
   150,
   200,
   250,
   300};
   Double_t Graph_from_c1lep6jin3bex_jets_pt_Data_fy3116[6] = {
   67253,
   19066,
   7481,
   3204,
   1591,
   865};
   Double_t Graph_from_c1lep6jin3bex_jets_pt_Data_felx3116[6] = {
   24.95,
   24.95,
   24.95,
   24.95,
   24.95,
   24.95};
   Double_t Graph_from_c1lep6jin3bex_jets_pt_Data_fely3116[6] = {
   259.3318,
   138.0797,
   86.49277,
   56.60389,
   39.88734,
   29.41088};
   Double_t Graph_from_c1lep6jin3bex_jets_pt_Data_fehx3116[6] = {
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t Graph_from_c1lep6jin3bex_jets_pt_Data_fehy3116[6] = {
   259.3318,
   138.0797,
   86.49277,
   56.60389,
   39.88734,
   29.41088};
   grae = new TGraphAsymmErrors(6,Graph_from_c1lep6jin3bex_jets_pt_Data_fx3116,Graph_from_c1lep6jin3bex_jets_pt_Data_fy3116,Graph_from_c1lep6jin3bex_jets_pt_Data_felx3116,Graph_from_c1lep6jin3bex_jets_pt_Data_fehx3116,Graph_from_c1lep6jin3bex_jets_pt_Data_fely3116,Graph_from_c1lep6jin3bex_jets_pt_Data_fehy3116);
   grae->SetName("Graph_from_c1lep6jin3bex_jets_pt_Data");
   grae->SetTitle("");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_c1lep6jin3bex_jets_pt_Data3116 = new TH1F("Graph_Graph_from_c1lep6jin3bex_jets_pt_Data3116","",100,0,354.995);
   Graph_Graph_from_c1lep6jin3bex_jets_pt_Data3116->SetMinimum(0);
   Graph_Graph_from_c1lep6jin3bex_jets_pt_Data3116->SetMaximum(74180.01);
   Graph_Graph_from_c1lep6jin3bex_jets_pt_Data3116->SetDirectory(0);
   Graph_Graph_from_c1lep6jin3bex_jets_pt_Data3116->SetStats(0);
   Graph_Graph_from_c1lep6jin3bex_jets_pt_Data3116->SetLineWidth(2);
   Graph_Graph_from_c1lep6jin3bex_jets_pt_Data3116->SetMarkerStyle(20);
   Graph_Graph_from_c1lep6jin3bex_jets_pt_Data3116->SetMarkerSize(1.2);
   Graph_Graph_from_c1lep6jin3bex_jets_pt_Data3116->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep6jin3bex_jets_pt_Data3116->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep6jin3bex_jets_pt_Data3116->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep6jin3bex_jets_pt_Data3116->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep6jin3bex_jets_pt_Data3116->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep6jin3bex_jets_pt_Data3116->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep6jin3bex_jets_pt_Data3116->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep6jin3bex_jets_pt_Data3116->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep6jin3bex_jets_pt_Data3116->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep6jin3bex_jets_pt_Data3116->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep6jin3bex_jets_pt_Data3116->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep6jin3bex_jets_pt_Data3116->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep6jin3bex_jets_pt_Data3116->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep6jin3bex_jets_pt_Data3116->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_c1lep6jin3bex_jets_pt_Data3116);
   
   grae->Draw("ep1 ");
   Double_t xAxis290[7] = {25, 75, 125, 175, 225, 275, 325}; 
   
   TH1D *h_dummy_copy__261 = new TH1D("h_dummy_copy__261","",6, xAxis290);
   h_dummy_copy__261->SetEntries(7835000);
   h_dummy_copy__261->SetDirectory(0);
   h_dummy_copy__261->SetStats(0);
   h_dummy_copy__261->SetMarkerStyle(20);
   h_dummy_copy__261->SetMarkerSize(1.2);
   h_dummy_copy__261->GetXaxis()->SetTitle("jets p_{T} [GeV]");
   h_dummy_copy__261->GetXaxis()->SetRange(1,100);
   h_dummy_copy__261->GetXaxis()->SetLabelFont(43);
   h_dummy_copy__261->GetXaxis()->SetLabelSize(21);
   h_dummy_copy__261->GetXaxis()->SetTitleSize(21);
   h_dummy_copy__261->GetXaxis()->SetTitleOffset(1.4);
   h_dummy_copy__261->GetXaxis()->SetTitleFont(43);
   h_dummy_copy__261->GetYaxis()->SetTitle("Events / 50 GeV");
   h_dummy_copy__261->GetYaxis()->SetLabelFont(43);
   h_dummy_copy__261->GetYaxis()->SetLabelSize(16.8);
   h_dummy_copy__261->GetYaxis()->SetTitleSize(21);
   h_dummy_copy__261->GetYaxis()->SetTitleOffset(2.4);
   h_dummy_copy__261->GetYaxis()->SetTitleFont(43);
   h_dummy_copy__261->GetZaxis()->SetLabelFont(43);
   h_dummy_copy__261->GetZaxis()->SetLabelSize(21);
   h_dummy_copy__261->GetZaxis()->SetTitleSize(21);
   h_dummy_copy__261->GetZaxis()->SetTitleFont(43);
   h_dummy_copy__261->Draw("sameaxis");
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
   TLegendEntry *entry=leg->AddEntry("c1lep6jin3bex_jets_pt_Data","Data","lep");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep6jin3bex_jets_pt_uHcW","t#bar{t}#rightarrowWbHc (BR=1%)","f");
   entry->SetFillColor(2);
   entry->SetFillStyle(1001);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep6jin3bex_jets_pt_ttbarlight","t#bar{t}+light","f");
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep6jin3bex_jets_pt_ttbarcc","t#bar{t}+cc","f");

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
   entry=leg->AddEntry("c1lep6jin3bex_jets_pt_ttbarbb","t#bar{t}+bb","f");

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
   entry=leg->AddEntry("c1lep6jin3bex_jets_pt_topEW","Non-t#bar{t}","f");

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
   c_c1lep6jin3bex_jets_pt->cd();
   c_c1lep6jin3bex_jets_pt->Modified();
   c_c1lep6jin3bex_jets_pt->cd();
   c_c1lep6jin3bex_jets_pt->SetSelected(c_c1lep6jin3bex_jets_pt);
}
