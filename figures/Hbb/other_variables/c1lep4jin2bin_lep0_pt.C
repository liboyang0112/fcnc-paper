void c1lep4jin2bin_lep0_pt()
{
//=========Macro generated from canvas: c_c1lep4jin2bin_lep0_pt/c_c1lep4jin2bin_lep0_pt
//=========  (Thu Jul 19 17:38:07 2018) by ROOT version6.04/14
   TCanvas *c_c1lep4jin2bin_lep0_pt = new TCanvas("c_c1lep4jin2bin_lep0_pt", "c_c1lep4jin2bin_lep0_pt",0,0,600,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c_c1lep4jin2bin_lep0_pt->SetHighLightColor(2);
   c_c1lep4jin2bin_lep0_pt->Range(0,0,1,1);
   c_c1lep4jin2bin_lep0_pt->SetFillColor(0);
   c_c1lep4jin2bin_lep0_pt->SetBorderMode(0);
   c_c1lep4jin2bin_lep0_pt->SetBorderSize(2);
   c_c1lep4jin2bin_lep0_pt->SetTickx(1);
   c_c1lep4jin2bin_lep0_pt->SetTicky(1);
   c_c1lep4jin2bin_lep0_pt->SetLeftMargin(0.16);
   c_c1lep4jin2bin_lep0_pt->SetRightMargin(0.05);
   c_c1lep4jin2bin_lep0_pt->SetTopMargin(0.05);
   c_c1lep4jin2bin_lep0_pt->SetBottomMargin(0.16);
   c_c1lep4jin2bin_lep0_pt->SetFrameBorderMode(0);
  
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
   Double_t xAxis331[5] = {25, 75, 125, 175, 225}; 
   
   TH1D *h_dummy2__298 = new TH1D("h_dummy2__298","Data/MC",4, xAxis331);
   h_dummy2__298->SetMinimum(0.5);
   h_dummy2__298->SetMaximum(1.5);
   h_dummy2__298->SetEntries(1.12326e+07);
   h_dummy2__298->SetDirectory(0);
   h_dummy2__298->SetStats(0);
   h_dummy2__298->SetMarkerStyle(20);
   h_dummy2__298->SetMarkerSize(1.2);
   h_dummy2__298->GetXaxis()->SetTitle("lepton p_{T} [Gev]");
   h_dummy2__298->GetXaxis()->SetRange(1,16);
   h_dummy2__298->GetXaxis()->SetLabelFont(43);
   h_dummy2__298->GetXaxis()->SetLabelOffset(0.025);
   h_dummy2__298->GetXaxis()->SetLabelSize(16.8);
   h_dummy2__298->GetXaxis()->SetTitleSize(21);
   h_dummy2__298->GetXaxis()->SetTitleOffset(5.05);
   h_dummy2__298->GetXaxis()->SetTitleFont(43);
   h_dummy2__298->GetYaxis()->SetTitle("Data / Bkg");
   h_dummy2__298->GetYaxis()->SetNdivisions(-504);
   h_dummy2__298->GetYaxis()->SetLabelFont(43);
   h_dummy2__298->GetYaxis()->SetLabelOffset(0.02);
   h_dummy2__298->GetYaxis()->SetLabelSize(16.8);
   h_dummy2__298->GetYaxis()->SetTitleSize(21);
   h_dummy2__298->GetYaxis()->SetTitleOffset(2.4);
   h_dummy2__298->GetYaxis()->SetTitleFont(43);
   h_dummy2__298->GetZaxis()->SetLabelFont(43);
   h_dummy2__298->GetZaxis()->SetLabelSize(21);
   h_dummy2__298->GetZaxis()->SetTitleSize(21);
   h_dummy2__298->GetZaxis()->SetTitleFont(43);
   h_dummy2__298->Draw("HIST");
   
   Double_t Graph_from_h_ratio_fx3133[4] = {
   50,
   100,
   150,
   200};
   Double_t Graph_from_h_ratio_fy3133[4] = {
   0.9642506,
   0.9310716,
   0.9414682,
   0.9026199};
   Double_t Graph_from_h_ratio_felx3133[4] = {
   24.95,
   24.95,
   24.95,
   24.95};
   Double_t Graph_from_h_ratio_fely3133[4] = {
   0.001105983,
   0.00292926,
   0.005862234,
   0.0103722};
   Double_t Graph_from_h_ratio_fehx3133[4] = {
   25,
   25,
   25,
   25};
   Double_t Graph_from_h_ratio_fehy3133[4] = {
   0.001105983,
   0.00292926,
   0.005862234,
   0.0103722};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(4,Graph_from_h_ratio_fx3133,Graph_from_h_ratio_fy3133,Graph_from_h_ratio_felx3133,Graph_from_h_ratio_fehx3133,Graph_from_h_ratio_fely3133,Graph_from_h_ratio_fehy3133);
   grae->SetName("Graph_from_h_ratio");
   grae->SetTitle("");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(24);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_h_ratio3133 = new TH1F("Graph_Graph_from_h_ratio3133","",100,5.055,244.995);
   Graph_Graph_from_h_ratio3133->SetMinimum(0.8849368);
   Graph_Graph_from_h_ratio3133->SetMaximum(0.9726675);
   Graph_Graph_from_h_ratio3133->SetDirectory(0);
   Graph_Graph_from_h_ratio3133->SetStats(0);
   Graph_Graph_from_h_ratio3133->SetLineWidth(2);
   Graph_Graph_from_h_ratio3133->SetMarkerStyle(20);
   Graph_Graph_from_h_ratio3133->SetMarkerSize(1.2);
   Graph_Graph_from_h_ratio3133->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3133->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3133->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3133->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3133->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3133->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3133->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3133->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3133->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3133->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3133->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3133->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3133->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3133->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_h_ratio3133);
   
   grae->Draw("pe0");
   TLine *line = new TLine(25,1,225,1);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t g_ratio2_fx3134[4] = {
   50,
   100,
   150,
   200};
   Double_t g_ratio2_fy3134[4] = {
   1,
   1,
   1,
   1};
   Double_t g_ratio2_felx3134[4] = {
   25,
   25,
   25,
   25};
   Double_t g_ratio2_fely3134[4] = {
   0.1233788,
   0.1221219,
   0.1246779,
   0.1259554};
   Double_t g_ratio2_fehx3134[4] = {
   25,
   25,
   25,
   25};
   Double_t g_ratio2_fehy3134[4] = {
   0.1233788,
   0.1221219,
   0.1246779,
   0.1259554};
   grae = new TGraphAsymmErrors(4,g_ratio2_fx3134,g_ratio2_fy3134,g_ratio2_felx3134,g_ratio2_fehx3134,g_ratio2_fely3134,g_ratio2_fehy3134);
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
   
   TH1F *Graph_g_ratio23134 = new TH1F("Graph_g_ratio23134","",100,5,245);
   Graph_g_ratio23134->SetMinimum(0.8488536);
   Graph_g_ratio23134->SetMaximum(1.151146);
   Graph_g_ratio23134->SetDirectory(0);
   Graph_g_ratio23134->SetStats(0);
   Graph_g_ratio23134->SetLineWidth(2);
   Graph_g_ratio23134->SetMarkerStyle(20);
   Graph_g_ratio23134->SetMarkerSize(1.2);
   Graph_g_ratio23134->GetXaxis()->SetLabelFont(43);
   Graph_g_ratio23134->GetXaxis()->SetLabelSize(21);
   Graph_g_ratio23134->GetXaxis()->SetTitleSize(21);
   Graph_g_ratio23134->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23134->GetXaxis()->SetTitleFont(43);
   Graph_g_ratio23134->GetYaxis()->SetLabelFont(43);
   Graph_g_ratio23134->GetYaxis()->SetLabelSize(21);
   Graph_g_ratio23134->GetYaxis()->SetTitleSize(21);
   Graph_g_ratio23134->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23134->GetYaxis()->SetTitleFont(43);
   Graph_g_ratio23134->GetZaxis()->SetLabelFont(43);
   Graph_g_ratio23134->GetZaxis()->SetLabelSize(21);
   Graph_g_ratio23134->GetZaxis()->SetTitleSize(21);
   Graph_g_ratio23134->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_ratio23134);
   
   grae->Draw("e2");
   Double_t xAxis332[5] = {25, 75, 125, 175, 225}; 
   
   TH1D *h_dummy2_copy__299 = new TH1D("h_dummy2_copy__299","Data/MC",4, xAxis332);
   h_dummy2_copy__299->SetMinimum(0.5);
   h_dummy2_copy__299->SetMaximum(1.5);
   h_dummy2_copy__299->SetEntries(1.12326e+07);
   h_dummy2_copy__299->SetDirectory(0);
   h_dummy2_copy__299->SetStats(0);
   h_dummy2_copy__299->SetMarkerStyle(20);
   h_dummy2_copy__299->SetMarkerSize(1.2);
   h_dummy2_copy__299->GetXaxis()->SetTitle("lepton p_{T} [Gev]");
   h_dummy2_copy__299->GetXaxis()->SetRange(1,16);
   h_dummy2_copy__299->GetXaxis()->SetLabelFont(43);
   h_dummy2_copy__299->GetXaxis()->SetLabelOffset(0.025);
   h_dummy2_copy__299->GetXaxis()->SetLabelSize(16.8);
   h_dummy2_copy__299->GetXaxis()->SetTitleSize(21);
   h_dummy2_copy__299->GetXaxis()->SetTitleOffset(5.05);
   h_dummy2_copy__299->GetXaxis()->SetTitleFont(43);
   h_dummy2_copy__299->GetYaxis()->SetTitle("Data / Bkg");
   h_dummy2_copy__299->GetYaxis()->SetNdivisions(-504);
   h_dummy2_copy__299->GetYaxis()->SetLabelFont(43);
   h_dummy2_copy__299->GetYaxis()->SetLabelOffset(0.02);
   h_dummy2_copy__299->GetYaxis()->SetLabelSize(16.8);
   h_dummy2_copy__299->GetYaxis()->SetTitleSize(21);
   h_dummy2_copy__299->GetYaxis()->SetTitleOffset(2.4);
   h_dummy2_copy__299->GetYaxis()->SetTitleFont(43);
   h_dummy2_copy__299->GetZaxis()->SetLabelFont(43);
   h_dummy2_copy__299->GetZaxis()->SetLabelSize(21);
   h_dummy2_copy__299->GetZaxis()->SetTitleSize(21);
   h_dummy2_copy__299->GetZaxis()->SetTitleFont(43);
   h_dummy2_copy__299->Draw("sameaxis");
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
   c_c1lep4jin2bin_lep0_pt->cd();
  
// ------------>Primitives in pad: pad0
   TPad *pad0 = new TPad("pad0", "pad0",0,0.2,1,1);
   pad0->Draw();
   pad0->cd();
   pad0->Range(-9.567901,-166934.6,237.3457,1502411);
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
   Double_t xAxis333[5] = {25, 75, 125, 175, 225}; 
   
   TH1D *h_dummy__300 = new TH1D("h_dummy__300","",4, xAxis333);
   h_dummy__300->SetMinimum(0);
   h_dummy__300->SetMaximum(1418944);
   h_dummy__300->SetEntries(1.12326e+07);
   h_dummy__300->SetDirectory(0);
   h_dummy__300->SetStats(0);
   h_dummy__300->SetMarkerStyle(20);
   h_dummy__300->SetMarkerSize(1.2);
   h_dummy__300->GetXaxis()->SetRange(1,16);
   h_dummy__300->GetXaxis()->SetLabelFont(43);
   h_dummy__300->GetXaxis()->SetLabelSize(0);
   h_dummy__300->GetXaxis()->SetTitleSize(21);
   h_dummy__300->GetXaxis()->SetTitleOffset(1.4);
   h_dummy__300->GetXaxis()->SetTitleFont(43);
   h_dummy__300->GetYaxis()->SetTitle("Events / 50 GeV");
   h_dummy__300->GetYaxis()->SetLabelFont(43);
   h_dummy__300->GetYaxis()->SetLabelSize(16.8);
   h_dummy__300->GetYaxis()->SetTitleSize(21);
   h_dummy__300->GetYaxis()->SetTitleOffset(2.4);
   h_dummy__300->GetYaxis()->SetTitleFont(43);
   h_dummy__300->GetZaxis()->SetLabelFont(43);
   h_dummy__300->GetZaxis()->SetLabelSize(21);
   h_dummy__300->GetZaxis()->SetTitleSize(21);
   h_dummy__300->GetZaxis()->SetTitleFont(43);
   h_dummy__300->Draw("HIST");
   
   THStack *h_stack = new THStack();
   h_stack->SetName("h_stack");
   h_stack->SetTitle("h_stack");
   Double_t xAxis334[5] = {25, 75, 125, 175, 225}; 
   
   TH1F *h_stack_stack_34 = new TH1F("h_stack_stack_34","h_stack",4, xAxis334);
   h_stack_stack_34->SetMinimum(0);
   h_stack_stack_34->SetMaximum(838107.9);
   h_stack_stack_34->SetDirectory(0);
   h_stack_stack_34->SetStats(0);
   h_stack_stack_34->SetLineWidth(2);
   h_stack_stack_34->SetMarkerStyle(20);
   h_stack_stack_34->SetMarkerSize(1.2);
   h_stack_stack_34->GetXaxis()->SetLabelFont(43);
   h_stack_stack_34->GetXaxis()->SetLabelSize(21);
   h_stack_stack_34->GetXaxis()->SetTitleSize(21);
   h_stack_stack_34->GetXaxis()->SetTitleOffset(1.4);
   h_stack_stack_34->GetXaxis()->SetTitleFont(43);
   h_stack_stack_34->GetYaxis()->SetLabelFont(43);
   h_stack_stack_34->GetYaxis()->SetLabelSize(21);
   h_stack_stack_34->GetYaxis()->SetTitleSize(21);
   h_stack_stack_34->GetYaxis()->SetTitleOffset(1.4);
   h_stack_stack_34->GetYaxis()->SetTitleFont(43);
   h_stack_stack_34->GetZaxis()->SetLabelFont(43);
   h_stack_stack_34->GetZaxis()->SetLabelSize(21);
   h_stack_stack_34->GetZaxis()->SetTitleSize(21);
   h_stack_stack_34->GetZaxis()->SetTitleFont(43);
   h_stack->SetHistogram(h_stack_stack_34);
   
   Double_t xAxis335[5] = {25, 75, 125, 175, 225}; 
   
   TH1D *c1lep4jin2bin_lep0_pt_topEW__301 = new TH1D("c1lep4jin2bin_lep0_pt_topEW__301","",4, xAxis335);
   c1lep4jin2bin_lep0_pt_topEW__301->SetBinContent(1,92488.68);
   c1lep4jin2bin_lep0_pt_topEW__301->SetBinContent(2,15578.84);
   c1lep4jin2bin_lep0_pt_topEW__301->SetBinContent(3,4377.288);
   c1lep4jin2bin_lep0_pt_topEW__301->SetBinContent(4,1774.056);
   c1lep4jin2bin_lep0_pt_topEW__301->SetBinContent(5,1832.797);
   c1lep4jin2bin_lep0_pt_topEW__301->SetBinError(1,704.0632);
   c1lep4jin2bin_lep0_pt_topEW__301->SetBinError(2,250.1013);
   c1lep4jin2bin_lep0_pt_topEW__301->SetBinError(3,108.85);
   c1lep4jin2bin_lep0_pt_topEW__301->SetBinError(4,71.30318);
   c1lep4jin2bin_lep0_pt_topEW__301->SetBinError(5,85.05481);
   c1lep4jin2bin_lep0_pt_topEW__301->SetEntries(8198823);
   c1lep4jin2bin_lep0_pt_topEW__301->SetDirectory(0);
   c1lep4jin2bin_lep0_pt_topEW__301->SetStats(0);

   ci = TColor::GetColor("#66cc66");
   c1lep4jin2bin_lep0_pt_topEW__301->SetFillColor(ci);
   c1lep4jin2bin_lep0_pt_topEW__301->SetMarkerStyle(20);
   c1lep4jin2bin_lep0_pt_topEW__301->SetMarkerSize(1.2);
   c1lep4jin2bin_lep0_pt_topEW__301->GetXaxis()->SetTitle("Lepton p_{T} [GeV]");
   c1lep4jin2bin_lep0_pt_topEW__301->GetXaxis()->SetRange(1,16);
   c1lep4jin2bin_lep0_pt_topEW__301->GetXaxis()->SetLabelFont(43);
   c1lep4jin2bin_lep0_pt_topEW__301->GetXaxis()->SetLabelSize(21);
   c1lep4jin2bin_lep0_pt_topEW__301->GetXaxis()->SetTitleSize(21);
   c1lep4jin2bin_lep0_pt_topEW__301->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_lep0_pt_topEW__301->GetXaxis()->SetTitleFont(43);
   c1lep4jin2bin_lep0_pt_topEW__301->GetYaxis()->SetLabelFont(43);
   c1lep4jin2bin_lep0_pt_topEW__301->GetYaxis()->SetLabelSize(21);
   c1lep4jin2bin_lep0_pt_topEW__301->GetYaxis()->SetTitleSize(21);
   c1lep4jin2bin_lep0_pt_topEW__301->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_lep0_pt_topEW__301->GetYaxis()->SetTitleFont(43);
   c1lep4jin2bin_lep0_pt_topEW__301->GetZaxis()->SetLabelFont(43);
   c1lep4jin2bin_lep0_pt_topEW__301->GetZaxis()->SetLabelSize(21);
   c1lep4jin2bin_lep0_pt_topEW__301->GetZaxis()->SetTitleSize(21);
   c1lep4jin2bin_lep0_pt_topEW__301->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jin2bin_lep0_pt_topEW,"");
   Double_t xAxis336[5] = {25, 75, 125, 175, 225}; 
   
   TH1D *c1lep4jin2bin_lep0_pt_ttbarbb__302 = new TH1D("c1lep4jin2bin_lep0_pt_ttbarbb__302","",4, xAxis336);
   c1lep4jin2bin_lep0_pt_ttbarbb__302->SetBinContent(1,43571.88);
   c1lep4jin2bin_lep0_pt_ttbarbb__302->SetBinContent(2,7041.976);
   c1lep4jin2bin_lep0_pt_ttbarbb__302->SetBinContent(3,2047.823);
   c1lep4jin2bin_lep0_pt_ttbarbb__302->SetBinContent(4,660.9245);
   c1lep4jin2bin_lep0_pt_ttbarbb__302->SetBinContent(5,418.7413);
   c1lep4jin2bin_lep0_pt_ttbarbb__302->SetBinError(1,130.6783);
   c1lep4jin2bin_lep0_pt_ttbarbb__302->SetBinError(2,55.31155);
   c1lep4jin2bin_lep0_pt_ttbarbb__302->SetBinError(3,29.19469);
   c1lep4jin2bin_lep0_pt_ttbarbb__302->SetBinError(4,16.37332);
   c1lep4jin2bin_lep0_pt_ttbarbb__302->SetBinError(5,13.1638);
   c1lep4jin2bin_lep0_pt_ttbarbb__302->SetEntries(197629);
   c1lep4jin2bin_lep0_pt_ttbarbb__302->SetDirectory(0);
   c1lep4jin2bin_lep0_pt_ttbarbb__302->SetStats(0);

   ci = TColor::GetColor("#6666cc");
   c1lep4jin2bin_lep0_pt_ttbarbb__302->SetFillColor(ci);
   c1lep4jin2bin_lep0_pt_ttbarbb__302->SetMarkerStyle(20);
   c1lep4jin2bin_lep0_pt_ttbarbb__302->SetMarkerSize(1.2);
   c1lep4jin2bin_lep0_pt_ttbarbb__302->GetXaxis()->SetTitle("Lepton p_{T} [GeV]");
   c1lep4jin2bin_lep0_pt_ttbarbb__302->GetXaxis()->SetRange(1,16);
   c1lep4jin2bin_lep0_pt_ttbarbb__302->GetXaxis()->SetLabelFont(43);
   c1lep4jin2bin_lep0_pt_ttbarbb__302->GetXaxis()->SetLabelSize(21);
   c1lep4jin2bin_lep0_pt_ttbarbb__302->GetXaxis()->SetTitleSize(21);
   c1lep4jin2bin_lep0_pt_ttbarbb__302->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_lep0_pt_ttbarbb__302->GetXaxis()->SetTitleFont(43);
   c1lep4jin2bin_lep0_pt_ttbarbb__302->GetYaxis()->SetLabelFont(43);
   c1lep4jin2bin_lep0_pt_ttbarbb__302->GetYaxis()->SetLabelSize(21);
   c1lep4jin2bin_lep0_pt_ttbarbb__302->GetYaxis()->SetTitleSize(21);
   c1lep4jin2bin_lep0_pt_ttbarbb__302->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_lep0_pt_ttbarbb__302->GetYaxis()->SetTitleFont(43);
   c1lep4jin2bin_lep0_pt_ttbarbb__302->GetZaxis()->SetLabelFont(43);
   c1lep4jin2bin_lep0_pt_ttbarbb__302->GetZaxis()->SetLabelSize(21);
   c1lep4jin2bin_lep0_pt_ttbarbb__302->GetZaxis()->SetTitleSize(21);
   c1lep4jin2bin_lep0_pt_ttbarbb__302->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jin2bin_lep0_pt_ttbarbb,"");
   Double_t xAxis337[5] = {25, 75, 125, 175, 225}; 
   
   TH1D *c1lep4jin2bin_lep0_pt_ttbarcc__303 = new TH1D("c1lep4jin2bin_lep0_pt_ttbarcc__303","",4, xAxis337);
   c1lep4jin2bin_lep0_pt_ttbarcc__303->SetBinContent(1,72870.07);
   c1lep4jin2bin_lep0_pt_ttbarcc__303->SetBinContent(2,10485.25);
   c1lep4jin2bin_lep0_pt_ttbarcc__303->SetBinContent(3,2803.165);
   c1lep4jin2bin_lep0_pt_ttbarcc__303->SetBinContent(4,842.4638);
   c1lep4jin2bin_lep0_pt_ttbarcc__303->SetBinContent(5,481.4452);
   c1lep4jin2bin_lep0_pt_ttbarcc__303->SetBinError(1,168.7079);
   c1lep4jin2bin_lep0_pt_ttbarcc__303->SetBinError(2,64.97874);
   c1lep4jin2bin_lep0_pt_ttbarcc__303->SetBinError(3,33.44713);
   c1lep4jin2bin_lep0_pt_ttbarcc__303->SetBinError(4,17.93662);
   c1lep4jin2bin_lep0_pt_ttbarcc__303->SetBinError(5,14.65515);
   c1lep4jin2bin_lep0_pt_ttbarcc__303->SetEntries(319744);
   c1lep4jin2bin_lep0_pt_ttbarcc__303->SetDirectory(0);
   c1lep4jin2bin_lep0_pt_ttbarcc__303->SetStats(0);

   ci = TColor::GetColor("#ccccff");
   c1lep4jin2bin_lep0_pt_ttbarcc__303->SetFillColor(ci);
   c1lep4jin2bin_lep0_pt_ttbarcc__303->SetMarkerStyle(20);
   c1lep4jin2bin_lep0_pt_ttbarcc__303->SetMarkerSize(1.2);
   c1lep4jin2bin_lep0_pt_ttbarcc__303->GetXaxis()->SetTitle("Lepton p_{T} [GeV]");
   c1lep4jin2bin_lep0_pt_ttbarcc__303->GetXaxis()->SetRange(1,16);
   c1lep4jin2bin_lep0_pt_ttbarcc__303->GetXaxis()->SetLabelFont(43);
   c1lep4jin2bin_lep0_pt_ttbarcc__303->GetXaxis()->SetLabelSize(21);
   c1lep4jin2bin_lep0_pt_ttbarcc__303->GetXaxis()->SetTitleSize(21);
   c1lep4jin2bin_lep0_pt_ttbarcc__303->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_lep0_pt_ttbarcc__303->GetXaxis()->SetTitleFont(43);
   c1lep4jin2bin_lep0_pt_ttbarcc__303->GetYaxis()->SetLabelFont(43);
   c1lep4jin2bin_lep0_pt_ttbarcc__303->GetYaxis()->SetLabelSize(21);
   c1lep4jin2bin_lep0_pt_ttbarcc__303->GetYaxis()->SetTitleSize(21);
   c1lep4jin2bin_lep0_pt_ttbarcc__303->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_lep0_pt_ttbarcc__303->GetYaxis()->SetTitleFont(43);
   c1lep4jin2bin_lep0_pt_ttbarcc__303->GetZaxis()->SetLabelFont(43);
   c1lep4jin2bin_lep0_pt_ttbarcc__303->GetZaxis()->SetLabelSize(21);
   c1lep4jin2bin_lep0_pt_ttbarcc__303->GetZaxis()->SetTitleSize(21);
   c1lep4jin2bin_lep0_pt_ttbarcc__303->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jin2bin_lep0_pt_ttbarcc,"");
   Double_t xAxis338[5] = {25, 75, 125, 175, 225}; 
   
   TH1D *c1lep4jin2bin_lep0_pt_ttbarlight__304 = new TH1D("c1lep4jin2bin_lep0_pt_ttbarlight__304","",4, xAxis338);
   c1lep4jin2bin_lep0_pt_ttbarlight__304->SetBinContent(1,579371.7);
   c1lep4jin2bin_lep0_pt_ttbarlight__304->SetBinContent(2,75403.31);
   c1lep4jin2bin_lep0_pt_ttbarlight__304->SetBinContent(3,18167.23);
   c1lep4jin2bin_lep0_pt_ttbarlight__304->SetBinContent(4,5112.577);
   c1lep4jin2bin_lep0_pt_ttbarlight__304->SetBinContent(5,2566.872);
   c1lep4jin2bin_lep0_pt_ttbarlight__304->SetBinError(1,473.5663);
   c1lep4jin2bin_lep0_pt_ttbarlight__304->SetBinError(2,172.829);
   c1lep4jin2bin_lep0_pt_ttbarlight__304->SetBinError(3,85.25024);
   c1lep4jin2bin_lep0_pt_ttbarlight__304->SetBinError(4,44.98086);
   c1lep4jin2bin_lep0_pt_ttbarlight__304->SetBinError(5,31.81261);
   c1lep4jin2bin_lep0_pt_ttbarlight__304->SetEntries(2516401);
   c1lep4jin2bin_lep0_pt_ttbarlight__304->SetDirectory(0);
   c1lep4jin2bin_lep0_pt_ttbarlight__304->SetStats(0);
   c1lep4jin2bin_lep0_pt_ttbarlight__304->SetMarkerStyle(20);
   c1lep4jin2bin_lep0_pt_ttbarlight__304->SetMarkerSize(1.2);
   c1lep4jin2bin_lep0_pt_ttbarlight__304->GetXaxis()->SetTitle("Lepton p_{T} [GeV]");
   c1lep4jin2bin_lep0_pt_ttbarlight__304->GetXaxis()->SetRange(1,16);
   c1lep4jin2bin_lep0_pt_ttbarlight__304->GetXaxis()->SetLabelFont(43);
   c1lep4jin2bin_lep0_pt_ttbarlight__304->GetXaxis()->SetLabelSize(21);
   c1lep4jin2bin_lep0_pt_ttbarlight__304->GetXaxis()->SetTitleSize(21);
   c1lep4jin2bin_lep0_pt_ttbarlight__304->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_lep0_pt_ttbarlight__304->GetXaxis()->SetTitleFont(43);
   c1lep4jin2bin_lep0_pt_ttbarlight__304->GetYaxis()->SetLabelFont(43);
   c1lep4jin2bin_lep0_pt_ttbarlight__304->GetYaxis()->SetLabelSize(21);
   c1lep4jin2bin_lep0_pt_ttbarlight__304->GetYaxis()->SetTitleSize(21);
   c1lep4jin2bin_lep0_pt_ttbarlight__304->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_lep0_pt_ttbarlight__304->GetYaxis()->SetTitleFont(43);
   c1lep4jin2bin_lep0_pt_ttbarlight__304->GetZaxis()->SetLabelFont(43);
   c1lep4jin2bin_lep0_pt_ttbarlight__304->GetZaxis()->SetLabelSize(21);
   c1lep4jin2bin_lep0_pt_ttbarlight__304->GetZaxis()->SetTitleSize(21);
   c1lep4jin2bin_lep0_pt_ttbarlight__304->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jin2bin_lep0_pt_ttbarlight,"");
   Double_t xAxis339[5] = {25, 75, 125, 175, 225}; 
   
   TH1D *c1lep4jin2bin_lep0_pt_uHcW__305 = new TH1D("c1lep4jin2bin_lep0_pt_uHcW__305","",4, xAxis339);
   c1lep4jin2bin_lep0_pt_uHcW__305->SetBinContent(1,9895.633);
   c1lep4jin2bin_lep0_pt_uHcW__305->SetBinContent(2,1273.216);
   c1lep4jin2bin_lep0_pt_uHcW__305->SetBinContent(3,335.8737);
   c1lep4jin2bin_lep0_pt_uHcW__305->SetBinContent(4,110.4834);
   c1lep4jin2bin_lep0_pt_uHcW__305->SetBinContent(5,49.86689);
   c1lep4jin2bin_lep0_pt_uHcW__305->SetBinError(1,100.7288);
   c1lep4jin2bin_lep0_pt_uHcW__305->SetBinError(2,38.8805);
   c1lep4jin2bin_lep0_pt_uHcW__305->SetBinError(3,20.59232);
   c1lep4jin2bin_lep0_pt_uHcW__305->SetBinError(4,11.92146);
   c1lep4jin2bin_lep0_pt_uHcW__305->SetBinError(5,7.099214);
   c1lep4jin2bin_lep0_pt_uHcW__305->SetEntries(70178);
   c1lep4jin2bin_lep0_pt_uHcW__305->SetDirectory(0);
   c1lep4jin2bin_lep0_pt_uHcW__305->SetStats(0);
   c1lep4jin2bin_lep0_pt_uHcW__305->SetFillColor(2);
   c1lep4jin2bin_lep0_pt_uHcW__305->SetLineColor(2);
   c1lep4jin2bin_lep0_pt_uHcW__305->SetMarkerStyle(20);
   c1lep4jin2bin_lep0_pt_uHcW__305->SetMarkerSize(1.2);
   c1lep4jin2bin_lep0_pt_uHcW__305->GetXaxis()->SetTitle("Lepton p_{T} [GeV]");
   c1lep4jin2bin_lep0_pt_uHcW__305->GetXaxis()->SetRange(1,16);
   c1lep4jin2bin_lep0_pt_uHcW__305->GetXaxis()->SetLabelFont(43);
   c1lep4jin2bin_lep0_pt_uHcW__305->GetXaxis()->SetLabelSize(21);
   c1lep4jin2bin_lep0_pt_uHcW__305->GetXaxis()->SetTitleSize(21);
   c1lep4jin2bin_lep0_pt_uHcW__305->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_lep0_pt_uHcW__305->GetXaxis()->SetTitleFont(43);
   c1lep4jin2bin_lep0_pt_uHcW__305->GetYaxis()->SetLabelFont(43);
   c1lep4jin2bin_lep0_pt_uHcW__305->GetYaxis()->SetLabelSize(21);
   c1lep4jin2bin_lep0_pt_uHcW__305->GetYaxis()->SetTitleSize(21);
   c1lep4jin2bin_lep0_pt_uHcW__305->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_lep0_pt_uHcW__305->GetYaxis()->SetTitleFont(43);
   c1lep4jin2bin_lep0_pt_uHcW__305->GetZaxis()->SetLabelFont(43);
   c1lep4jin2bin_lep0_pt_uHcW__305->GetZaxis()->SetLabelSize(21);
   c1lep4jin2bin_lep0_pt_uHcW__305->GetZaxis()->SetTitleSize(21);
   c1lep4jin2bin_lep0_pt_uHcW__305->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jin2bin_lep0_pt_uHcW,"");
   h_stack->Draw("hist same");
   
   Double_t g_totErr_fx3135[4] = {
   50,
   100,
   150,
   200};
   Double_t g_totErr_fy3135[4] = {
   788302.3,
   108509.4,
   27395.51,
   8390.021};
   Double_t g_totErr_felx3135[4] = {
   25,
   25,
   25,
   25};
   Double_t g_totErr_fely3135[4] = {
   97259.82,
   13251.37,
   3415.614,
   1056.768};
   Double_t g_totErr_fehx3135[4] = {
   25,
   25,
   25,
   25};
   Double_t g_totErr_fehy3135[4] = {
   97259.82,
   13251.37,
   3415.614,
   1056.768};
   grae = new TGraphAsymmErrors(4,g_totErr_fx3135,g_totErr_fy3135,g_totErr_felx3135,g_totErr_fehx3135,g_totErr_fely3135,g_totErr_fehy3135);
   grae->SetName("g_totErr");
   grae->SetTitle("");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(3354);
   grae->SetLineColor(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0);
   
   TH1F *Graph_g_totErr3135 = new TH1F("Graph_g_totErr3135","",100,5,245);
   Graph_g_totErr3135->SetMinimum(0);
   Graph_g_totErr3135->SetMaximum(973385);
   Graph_g_totErr3135->SetDirectory(0);
   Graph_g_totErr3135->SetStats(0);
   Graph_g_totErr3135->SetLineWidth(2);
   Graph_g_totErr3135->SetMarkerStyle(20);
   Graph_g_totErr3135->SetMarkerSize(1.2);
   Graph_g_totErr3135->GetXaxis()->SetLabelFont(43);
   Graph_g_totErr3135->GetXaxis()->SetLabelSize(21);
   Graph_g_totErr3135->GetXaxis()->SetTitleSize(21);
   Graph_g_totErr3135->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_totErr3135->GetXaxis()->SetTitleFont(43);
   Graph_g_totErr3135->GetYaxis()->SetLabelFont(43);
   Graph_g_totErr3135->GetYaxis()->SetLabelSize(21);
   Graph_g_totErr3135->GetYaxis()->SetTitleSize(21);
   Graph_g_totErr3135->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_totErr3135->GetYaxis()->SetTitleFont(43);
   Graph_g_totErr3135->GetZaxis()->SetLabelFont(43);
   Graph_g_totErr3135->GetZaxis()->SetLabelSize(21);
   Graph_g_totErr3135->GetZaxis()->SetTitleSize(21);
   Graph_g_totErr3135->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_totErr3135);
   
   grae->Draw("e2");
   
   Double_t Graph_from_c1lep4jin2bin_lep0_pt_Data_fx3136[4] = {
   50,
   100,
   150,
   200};
   Double_t Graph_from_c1lep4jin2bin_lep0_pt_Data_fy3136[4] = {
   760121,
   101030,
   25792,
   7573};
   Double_t Graph_from_c1lep4jin2bin_lep0_pt_Data_felx3136[4] = {
   24.95,
   24.95,
   24.95,
   24.95};
   Double_t Graph_from_c1lep4jin2bin_lep0_pt_Data_fely3136[4] = {
   871.8492,
   317.8522,
   160.5989,
   87.02299};
   Double_t Graph_from_c1lep4jin2bin_lep0_pt_Data_fehx3136[4] = {
   25,
   25,
   25,
   25};
   Double_t Graph_from_c1lep4jin2bin_lep0_pt_Data_fehy3136[4] = {
   871.8492,
   317.8522,
   160.5989,
   87.02299};
   grae = new TGraphAsymmErrors(4,Graph_from_c1lep4jin2bin_lep0_pt_Data_fx3136,Graph_from_c1lep4jin2bin_lep0_pt_Data_fy3136,Graph_from_c1lep4jin2bin_lep0_pt_Data_felx3136,Graph_from_c1lep4jin2bin_lep0_pt_Data_fehx3136,Graph_from_c1lep4jin2bin_lep0_pt_Data_fely3136,Graph_from_c1lep4jin2bin_lep0_pt_Data_fehy3136);
   grae->SetName("Graph_from_c1lep4jin2bin_lep0_pt_Data");
   grae->SetTitle("");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_c1lep4jin2bin_lep0_pt_Data3136 = new TH1F("Graph_Graph_from_c1lep4jin2bin_lep0_pt_Data3136","",100,5.055,244.995);
   Graph_Graph_from_c1lep4jin2bin_lep0_pt_Data3136->SetMinimum(0);
   Graph_Graph_from_c1lep4jin2bin_lep0_pt_Data3136->SetMaximum(836343.5);
   Graph_Graph_from_c1lep4jin2bin_lep0_pt_Data3136->SetDirectory(0);
   Graph_Graph_from_c1lep4jin2bin_lep0_pt_Data3136->SetStats(0);
   Graph_Graph_from_c1lep4jin2bin_lep0_pt_Data3136->SetLineWidth(2);
   Graph_Graph_from_c1lep4jin2bin_lep0_pt_Data3136->SetMarkerStyle(20);
   Graph_Graph_from_c1lep4jin2bin_lep0_pt_Data3136->SetMarkerSize(1.2);
   Graph_Graph_from_c1lep4jin2bin_lep0_pt_Data3136->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep4jin2bin_lep0_pt_Data3136->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep4jin2bin_lep0_pt_Data3136->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep4jin2bin_lep0_pt_Data3136->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep4jin2bin_lep0_pt_Data3136->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep4jin2bin_lep0_pt_Data3136->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep4jin2bin_lep0_pt_Data3136->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep4jin2bin_lep0_pt_Data3136->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep4jin2bin_lep0_pt_Data3136->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep4jin2bin_lep0_pt_Data3136->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep4jin2bin_lep0_pt_Data3136->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep4jin2bin_lep0_pt_Data3136->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep4jin2bin_lep0_pt_Data3136->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep4jin2bin_lep0_pt_Data3136->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_c1lep4jin2bin_lep0_pt_Data3136);
   
   grae->Draw("ep1 ");
   Double_t xAxis340[5] = {25, 75, 125, 175, 225}; 
   
   TH1D *h_dummy_copy__306 = new TH1D("h_dummy_copy__306","",4, xAxis340);
   h_dummy_copy__306->SetEntries(1.12326e+07);
   h_dummy_copy__306->SetDirectory(0);
   h_dummy_copy__306->SetStats(0);
   h_dummy_copy__306->SetMarkerStyle(20);
   h_dummy_copy__306->SetMarkerSize(1.2);
   h_dummy_copy__306->GetXaxis()->SetTitle("lepton p_{T} [Gev]");
   h_dummy_copy__306->GetXaxis()->SetRange(1,16);
   h_dummy_copy__306->GetXaxis()->SetLabelFont(43);
   h_dummy_copy__306->GetXaxis()->SetLabelSize(21);
   h_dummy_copy__306->GetXaxis()->SetTitleSize(21);
   h_dummy_copy__306->GetXaxis()->SetTitleOffset(1.4);
   h_dummy_copy__306->GetXaxis()->SetTitleFont(43);
   h_dummy_copy__306->GetYaxis()->SetTitle("Events / 50 GeV");
   h_dummy_copy__306->GetYaxis()->SetLabelFont(43);
   h_dummy_copy__306->GetYaxis()->SetLabelSize(16.8);
   h_dummy_copy__306->GetYaxis()->SetTitleSize(21);
   h_dummy_copy__306->GetYaxis()->SetTitleOffset(2.4);
   h_dummy_copy__306->GetYaxis()->SetTitleFont(43);
   h_dummy_copy__306->GetZaxis()->SetLabelFont(43);
   h_dummy_copy__306->GetZaxis()->SetLabelSize(21);
   h_dummy_copy__306->GetZaxis()->SetTitleSize(21);
   h_dummy_copy__306->GetZaxis()->SetTitleFont(43);
   h_dummy_copy__306->Draw("sameaxis");
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
      tex = new TLatex(0.18,0.73,"#geq4j, #geq2b");
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
   TLegendEntry *entry=leg->AddEntry("c1lep4jin2bin_lep0_pt_Data","Data","lep");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep4jin2bin_lep0_pt_uHcW","t#bar{t}#rightarrowWbHc (BR=1%)","f");
   entry->SetFillColor(2);
   entry->SetFillStyle(1001);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep4jin2bin_lep0_pt_ttbarlight","t#bar{t}+light","f");
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep4jin2bin_lep0_pt_ttbarcc","t#bar{t}+cc","f");

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
   entry=leg->AddEntry("c1lep4jin2bin_lep0_pt_ttbarbb","t#bar{t}+bb","f");

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
   entry=leg->AddEntry("c1lep4jin2bin_lep0_pt_topEW","Non-t#bar{t}","f");

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
   c_c1lep4jin2bin_lep0_pt->cd();
   c_c1lep4jin2bin_lep0_pt->Modified();
   c_c1lep4jin2bin_lep0_pt->cd();
   c_c1lep4jin2bin_lep0_pt->SetSelected(c_c1lep4jin2bin_lep0_pt);
}
