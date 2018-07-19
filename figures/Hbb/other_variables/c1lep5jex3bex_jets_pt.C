void c1lep5jex3bex_jets_pt()
{
//=========Macro generated from canvas: c_c1lep5jex3bex_jets_pt/c_c1lep5jex3bex_jets_pt
//=========  (Thu Jul 19 17:38:06 2018) by ROOT version6.04/14
   TCanvas *c_c1lep5jex3bex_jets_pt = new TCanvas("c_c1lep5jex3bex_jets_pt", "c_c1lep5jex3bex_jets_pt",0,0,600,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c_c1lep5jex3bex_jets_pt->SetHighLightColor(2);
   c_c1lep5jex3bex_jets_pt->Range(0,0,1,1);
   c_c1lep5jex3bex_jets_pt->SetFillColor(0);
   c_c1lep5jex3bex_jets_pt->SetBorderMode(0);
   c_c1lep5jex3bex_jets_pt->SetBorderSize(2);
   c_c1lep5jex3bex_jets_pt->SetTickx(1);
   c_c1lep5jex3bex_jets_pt->SetTicky(1);
   c_c1lep5jex3bex_jets_pt->SetLeftMargin(0.16);
   c_c1lep5jex3bex_jets_pt->SetRightMargin(0.05);
   c_c1lep5jex3bex_jets_pt->SetTopMargin(0.05);
   c_c1lep5jex3bex_jets_pt->SetBottomMargin(0.16);
   c_c1lep5jex3bex_jets_pt->SetFrameBorderMode(0);
  
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
   Double_t xAxis271[7] = {25, 75, 125, 175, 225, 275, 325}; 
   
   TH1D *h_dummy2__244 = new TH1D("h_dummy2__244","Data/MC",6, xAxis271);
   h_dummy2__244->SetMinimum(0.5);
   h_dummy2__244->SetMaximum(1.5);
   h_dummy2__244->SetEntries(6817304);
   h_dummy2__244->SetDirectory(0);
   h_dummy2__244->SetStats(0);
   h_dummy2__244->SetMarkerStyle(20);
   h_dummy2__244->SetMarkerSize(1.2);
   h_dummy2__244->GetXaxis()->SetTitle("jets p_{T} [GeV]");
   h_dummy2__244->GetXaxis()->SetRange(1,100);
   h_dummy2__244->GetXaxis()->SetLabelFont(43);
   h_dummy2__244->GetXaxis()->SetLabelOffset(0.025);
   h_dummy2__244->GetXaxis()->SetLabelSize(16.8);
   h_dummy2__244->GetXaxis()->SetTitleSize(21);
   h_dummy2__244->GetXaxis()->SetTitleOffset(5.05);
   h_dummy2__244->GetXaxis()->SetTitleFont(43);
   h_dummy2__244->GetYaxis()->SetTitle("Data / Bkg");
   h_dummy2__244->GetYaxis()->SetNdivisions(-504);
   h_dummy2__244->GetYaxis()->SetLabelFont(43);
   h_dummy2__244->GetYaxis()->SetLabelOffset(0.02);
   h_dummy2__244->GetYaxis()->SetLabelSize(16.8);
   h_dummy2__244->GetYaxis()->SetTitleSize(21);
   h_dummy2__244->GetYaxis()->SetTitleOffset(2.4);
   h_dummy2__244->GetYaxis()->SetTitleFont(43);
   h_dummy2__244->GetZaxis()->SetLabelFont(43);
   h_dummy2__244->GetZaxis()->SetLabelSize(21);
   h_dummy2__244->GetZaxis()->SetTitleSize(21);
   h_dummy2__244->GetZaxis()->SetTitleFont(43);
   h_dummy2__244->Draw("HIST");
   
   Double_t Graph_from_h_ratio_fx3109[6] = {
   50,
   100,
   150,
   200,
   250,
   300};
   Double_t Graph_from_h_ratio_fy3109[6] = {
   1.166285,
   1.138668,
   1.147293,
   1.102344,
   1.108281,
   1.073132};
   Double_t Graph_from_h_ratio_felx3109[6] = {
   24.95,
   24.95,
   24.95,
   24.95,
   24.95,
   24.95};
   Double_t Graph_from_h_ratio_fely3109[6] = {
   0.005834488,
   0.0105001,
   0.01788937,
   0.02896896,
   0.04551166,
   0.060657};
   Double_t Graph_from_h_ratio_fehx3109[6] = {
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t Graph_from_h_ratio_fehy3109[6] = {
   0.005834488,
   0.0105001,
   0.01788937,
   0.02896896,
   0.04551166,
   0.060657};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(6,Graph_from_h_ratio_fx3109,Graph_from_h_ratio_fy3109,Graph_from_h_ratio_felx3109,Graph_from_h_ratio_fehx3109,Graph_from_h_ratio_fely3109,Graph_from_h_ratio_fehy3109);
   grae->SetName("Graph_from_h_ratio");
   grae->SetTitle("");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(24);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_h_ratio3109 = new TH1F("Graph_Graph_from_h_ratio3109","",100,0,354.995);
   Graph_Graph_from_h_ratio3109->SetMinimum(0.9965105);
   Graph_Graph_from_h_ratio3109->SetMaximum(1.188084);
   Graph_Graph_from_h_ratio3109->SetDirectory(0);
   Graph_Graph_from_h_ratio3109->SetStats(0);
   Graph_Graph_from_h_ratio3109->SetLineWidth(2);
   Graph_Graph_from_h_ratio3109->SetMarkerStyle(20);
   Graph_Graph_from_h_ratio3109->SetMarkerSize(1.2);
   Graph_Graph_from_h_ratio3109->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3109->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3109->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3109->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3109->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3109->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3109->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3109->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3109->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3109->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3109->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3109->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3109->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3109->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_h_ratio3109);
   
   grae->Draw("pe0");
   TLine *line = new TLine(25,1,325,1);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t g_ratio2_fx3110[6] = {
   50,
   100,
   150,
   200,
   250,
   300};
   Double_t g_ratio2_fy3110[6] = {
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t g_ratio2_felx3110[6] = {
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t g_ratio2_fely3110[6] = {
   0.189208,
   0.1804196,
   0.181795,
   0.1879455,
   0.1992817,
   0.2138461};
   Double_t g_ratio2_fehx3110[6] = {
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t g_ratio2_fehy3110[6] = {
   0.189208,
   0.1804196,
   0.181795,
   0.1879455,
   0.1992817,
   0.2138461};
   grae = new TGraphAsymmErrors(6,g_ratio2_fx3110,g_ratio2_fy3110,g_ratio2_felx3110,g_ratio2_fehx3110,g_ratio2_fely3110,g_ratio2_fehy3110);
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
   
   TH1F *Graph_g_ratio23110 = new TH1F("Graph_g_ratio23110","",100,0,355);
   Graph_g_ratio23110->SetMinimum(0.7433847);
   Graph_g_ratio23110->SetMaximum(1.256615);
   Graph_g_ratio23110->SetDirectory(0);
   Graph_g_ratio23110->SetStats(0);
   Graph_g_ratio23110->SetLineWidth(2);
   Graph_g_ratio23110->SetMarkerStyle(20);
   Graph_g_ratio23110->SetMarkerSize(1.2);
   Graph_g_ratio23110->GetXaxis()->SetLabelFont(43);
   Graph_g_ratio23110->GetXaxis()->SetLabelSize(21);
   Graph_g_ratio23110->GetXaxis()->SetTitleSize(21);
   Graph_g_ratio23110->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23110->GetXaxis()->SetTitleFont(43);
   Graph_g_ratio23110->GetYaxis()->SetLabelFont(43);
   Graph_g_ratio23110->GetYaxis()->SetLabelSize(21);
   Graph_g_ratio23110->GetYaxis()->SetTitleSize(21);
   Graph_g_ratio23110->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23110->GetYaxis()->SetTitleFont(43);
   Graph_g_ratio23110->GetZaxis()->SetLabelFont(43);
   Graph_g_ratio23110->GetZaxis()->SetLabelSize(21);
   Graph_g_ratio23110->GetZaxis()->SetTitleSize(21);
   Graph_g_ratio23110->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_ratio23110);
   
   grae->Draw("e2");
   Double_t xAxis272[7] = {25, 75, 125, 175, 225, 275, 325}; 
   
   TH1D *h_dummy2_copy__245 = new TH1D("h_dummy2_copy__245","Data/MC",6, xAxis272);
   h_dummy2_copy__245->SetMinimum(0.5);
   h_dummy2_copy__245->SetMaximum(1.5);
   h_dummy2_copy__245->SetEntries(6817304);
   h_dummy2_copy__245->SetDirectory(0);
   h_dummy2_copy__245->SetStats(0);
   h_dummy2_copy__245->SetMarkerStyle(20);
   h_dummy2_copy__245->SetMarkerSize(1.2);
   h_dummy2_copy__245->GetXaxis()->SetTitle("jets p_{T} [GeV]");
   h_dummy2_copy__245->GetXaxis()->SetRange(1,100);
   h_dummy2_copy__245->GetXaxis()->SetLabelFont(43);
   h_dummy2_copy__245->GetXaxis()->SetLabelOffset(0.025);
   h_dummy2_copy__245->GetXaxis()->SetLabelSize(16.8);
   h_dummy2_copy__245->GetXaxis()->SetTitleSize(21);
   h_dummy2_copy__245->GetXaxis()->SetTitleOffset(5.05);
   h_dummy2_copy__245->GetXaxis()->SetTitleFont(43);
   h_dummy2_copy__245->GetYaxis()->SetTitle("Data / Bkg");
   h_dummy2_copy__245->GetYaxis()->SetNdivisions(-504);
   h_dummy2_copy__245->GetYaxis()->SetLabelFont(43);
   h_dummy2_copy__245->GetYaxis()->SetLabelOffset(0.02);
   h_dummy2_copy__245->GetYaxis()->SetLabelSize(16.8);
   h_dummy2_copy__245->GetYaxis()->SetTitleSize(21);
   h_dummy2_copy__245->GetYaxis()->SetTitleOffset(2.4);
   h_dummy2_copy__245->GetYaxis()->SetTitleFont(43);
   h_dummy2_copy__245->GetZaxis()->SetLabelFont(43);
   h_dummy2_copy__245->GetZaxis()->SetLabelSize(21);
   h_dummy2_copy__245->GetZaxis()->SetTitleSize(21);
   h_dummy2_copy__245->GetZaxis()->SetTitleFont(43);
   h_dummy2_copy__245->Draw("sameaxis");
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
   c_c1lep5jex3bex_jets_pt->cd();
  
// ------------>Primitives in pad: pad0
   TPad *pad0 = new TPad("pad0", "pad0",0,0.2,1,1);
   pad0->Draw();
   pad0->cd();
   pad0->Range(-26.85185,-8504.025,343.5185,76536.22);
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
   Double_t xAxis273[7] = {25, 75, 125, 175, 225, 275, 325}; 
   
   TH1D *h_dummy__246 = new TH1D("h_dummy__246","",6, xAxis273);
   h_dummy__246->SetMinimum(0);
   h_dummy__246->SetMaximum(72284.21);
   h_dummy__246->SetEntries(6817304);
   h_dummy__246->SetDirectory(0);
   h_dummy__246->SetStats(0);
   h_dummy__246->SetMarkerStyle(20);
   h_dummy__246->SetMarkerSize(1.2);
   h_dummy__246->GetXaxis()->SetRange(1,100);
   h_dummy__246->GetXaxis()->SetLabelFont(43);
   h_dummy__246->GetXaxis()->SetLabelSize(0);
   h_dummy__246->GetXaxis()->SetTitleSize(21);
   h_dummy__246->GetXaxis()->SetTitleOffset(1.4);
   h_dummy__246->GetXaxis()->SetTitleFont(43);
   h_dummy__246->GetYaxis()->SetTitle("Events / 50 GeV");
   h_dummy__246->GetYaxis()->SetLabelFont(43);
   h_dummy__246->GetYaxis()->SetLabelSize(16.8);
   h_dummy__246->GetYaxis()->SetTitleSize(21);
   h_dummy__246->GetYaxis()->SetTitleOffset(2.4);
   h_dummy__246->GetYaxis()->SetTitleFont(43);
   h_dummy__246->GetZaxis()->SetLabelFont(43);
   h_dummy__246->GetZaxis()->SetLabelSize(21);
   h_dummy__246->GetZaxis()->SetTitleSize(21);
   h_dummy__246->GetZaxis()->SetTitleFont(43);
   h_dummy__246->Draw("HIST");
   
   THStack *h_stack = new THStack();
   h_stack->SetName("h_stack");
   h_stack->SetTitle("h_stack");
   Double_t xAxis274[7] = {25, 75, 125, 175, 225, 275, 325}; 
   
   TH1F *h_stack_stack_28 = new TH1F("h_stack_stack_28","h_stack",6, xAxis274);
   h_stack_stack_28->SetMinimum(0);
   h_stack_stack_28->SetMaximum(39755.07);
   h_stack_stack_28->SetDirectory(0);
   h_stack_stack_28->SetStats(0);
   h_stack_stack_28->SetLineWidth(2);
   h_stack_stack_28->SetMarkerStyle(20);
   h_stack_stack_28->SetMarkerSize(1.2);
   h_stack_stack_28->GetXaxis()->SetLabelFont(43);
   h_stack_stack_28->GetXaxis()->SetLabelSize(21);
   h_stack_stack_28->GetXaxis()->SetTitleSize(21);
   h_stack_stack_28->GetXaxis()->SetTitleOffset(1.4);
   h_stack_stack_28->GetXaxis()->SetTitleFont(43);
   h_stack_stack_28->GetYaxis()->SetLabelFont(43);
   h_stack_stack_28->GetYaxis()->SetLabelSize(21);
   h_stack_stack_28->GetYaxis()->SetTitleSize(21);
   h_stack_stack_28->GetYaxis()->SetTitleOffset(1.4);
   h_stack_stack_28->GetYaxis()->SetTitleFont(43);
   h_stack_stack_28->GetZaxis()->SetLabelFont(43);
   h_stack_stack_28->GetZaxis()->SetLabelSize(21);
   h_stack_stack_28->GetZaxis()->SetTitleSize(21);
   h_stack_stack_28->GetZaxis()->SetTitleFont(43);
   h_stack->SetHistogram(h_stack_stack_28);
   
   Double_t xAxis275[7] = {25, 75, 125, 175, 225, 275, 325}; 
   
   TH1D *c1lep5jex3bex_jets_pt_topEW__247 = new TH1D("c1lep5jex3bex_jets_pt_topEW__247","",6, xAxis275);
   c1lep5jex3bex_jets_pt_topEW__247->SetBinContent(1,4339.989);
   c1lep5jex3bex_jets_pt_topEW__247->SetBinContent(2,1244.018);
   c1lep5jex3bex_jets_pt_topEW__247->SetBinContent(3,511.7642);
   c1lep5jex3bex_jets_pt_topEW__247->SetBinContent(4,203.3394);
   c1lep5jex3bex_jets_pt_topEW__247->SetBinContent(5,97.0679);
   c1lep5jex3bex_jets_pt_topEW__247->SetBinContent(6,59.27821);
   c1lep5jex3bex_jets_pt_topEW__247->SetBinContent(7,74.54381);
   c1lep5jex3bex_jets_pt_topEW__247->SetBinError(1,141.12);
   c1lep5jex3bex_jets_pt_topEW__247->SetBinError(2,75.47118);
   c1lep5jex3bex_jets_pt_topEW__247->SetBinError(3,46.82264);
   c1lep5jex3bex_jets_pt_topEW__247->SetBinError(4,27.52575);
   c1lep5jex3bex_jets_pt_topEW__247->SetBinError(5,14.79906);
   c1lep5jex3bex_jets_pt_topEW__247->SetBinError(6,17.25653);
   c1lep5jex3bex_jets_pt_topEW__247->SetBinError(7,13.94341);
   c1lep5jex3bex_jets_pt_topEW__247->SetEntries(6674268);
   c1lep5jex3bex_jets_pt_topEW__247->SetDirectory(0);
   c1lep5jex3bex_jets_pt_topEW__247->SetStats(0);

   ci = TColor::GetColor("#66cc66");
   c1lep5jex3bex_jets_pt_topEW__247->SetFillColor(ci);
   c1lep5jex3bex_jets_pt_topEW__247->SetMarkerStyle(20);
   c1lep5jex3bex_jets_pt_topEW__247->SetMarkerSize(1.2);
   c1lep5jex3bex_jets_pt_topEW__247->GetXaxis()->SetTitle("Jets p_{T} [GeV]");
   c1lep5jex3bex_jets_pt_topEW__247->GetXaxis()->SetRange(1,100);
   c1lep5jex3bex_jets_pt_topEW__247->GetXaxis()->SetLabelFont(43);
   c1lep5jex3bex_jets_pt_topEW__247->GetXaxis()->SetLabelSize(21);
   c1lep5jex3bex_jets_pt_topEW__247->GetXaxis()->SetTitleSize(21);
   c1lep5jex3bex_jets_pt_topEW__247->GetXaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_jets_pt_topEW__247->GetXaxis()->SetTitleFont(43);
   c1lep5jex3bex_jets_pt_topEW__247->GetYaxis()->SetLabelFont(43);
   c1lep5jex3bex_jets_pt_topEW__247->GetYaxis()->SetLabelSize(21);
   c1lep5jex3bex_jets_pt_topEW__247->GetYaxis()->SetTitleSize(21);
   c1lep5jex3bex_jets_pt_topEW__247->GetYaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_jets_pt_topEW__247->GetYaxis()->SetTitleFont(43);
   c1lep5jex3bex_jets_pt_topEW__247->GetZaxis()->SetLabelFont(43);
   c1lep5jex3bex_jets_pt_topEW__247->GetZaxis()->SetLabelSize(21);
   c1lep5jex3bex_jets_pt_topEW__247->GetZaxis()->SetTitleSize(21);
   c1lep5jex3bex_jets_pt_topEW__247->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep5jex3bex_jets_pt_topEW,"");
   Double_t xAxis276[7] = {25, 75, 125, 175, 225, 275, 325}; 
   
   TH1D *c1lep5jex3bex_jets_pt_ttbarbb__248 = new TH1D("c1lep5jex3bex_jets_pt_ttbarbb__248","",6, xAxis276);
   c1lep5jex3bex_jets_pt_ttbarbb__248->SetBinContent(1,14338.61);
   c1lep5jex3bex_jets_pt_ttbarbb__248->SetBinContent(2,4573.982);
   c1lep5jex3bex_jets_pt_ttbarbb__248->SetBinContent(3,1580.352);
   c1lep5jex3bex_jets_pt_ttbarbb__248->SetBinContent(4,599.8593);
   c1lep5jex3bex_jets_pt_ttbarbb__248->SetBinContent(5,237.2972);
   c1lep5jex3bex_jets_pt_ttbarbb__248->SetBinContent(6,116.126);
   c1lep5jex3bex_jets_pt_ttbarbb__248->SetBinContent(7,164.8026);
   c1lep5jex3bex_jets_pt_ttbarbb__248->SetBinError(1,76.33193);
   c1lep5jex3bex_jets_pt_ttbarbb__248->SetBinError(2,43.35242);
   c1lep5jex3bex_jets_pt_ttbarbb__248->SetBinError(3,25.16158);
   c1lep5jex3bex_jets_pt_ttbarbb__248->SetBinError(4,15.21139);
   c1lep5jex3bex_jets_pt_ttbarbb__248->SetBinError(5,9.511381);
   c1lep5jex3bex_jets_pt_ttbarbb__248->SetBinError(6,6.700677);
   c1lep5jex3bex_jets_pt_ttbarbb__248->SetBinError(7,7.903637);
   c1lep5jex3bex_jets_pt_ttbarbb__248->SetEntries(77340);
   c1lep5jex3bex_jets_pt_ttbarbb__248->SetDirectory(0);
   c1lep5jex3bex_jets_pt_ttbarbb__248->SetStats(0);

   ci = TColor::GetColor("#6666cc");
   c1lep5jex3bex_jets_pt_ttbarbb__248->SetFillColor(ci);
   c1lep5jex3bex_jets_pt_ttbarbb__248->SetMarkerStyle(20);
   c1lep5jex3bex_jets_pt_ttbarbb__248->SetMarkerSize(1.2);
   c1lep5jex3bex_jets_pt_ttbarbb__248->GetXaxis()->SetTitle("Jets p_{T} [GeV]");
   c1lep5jex3bex_jets_pt_ttbarbb__248->GetXaxis()->SetRange(1,100);
   c1lep5jex3bex_jets_pt_ttbarbb__248->GetXaxis()->SetLabelFont(43);
   c1lep5jex3bex_jets_pt_ttbarbb__248->GetXaxis()->SetLabelSize(21);
   c1lep5jex3bex_jets_pt_ttbarbb__248->GetXaxis()->SetTitleSize(21);
   c1lep5jex3bex_jets_pt_ttbarbb__248->GetXaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_jets_pt_ttbarbb__248->GetXaxis()->SetTitleFont(43);
   c1lep5jex3bex_jets_pt_ttbarbb__248->GetYaxis()->SetLabelFont(43);
   c1lep5jex3bex_jets_pt_ttbarbb__248->GetYaxis()->SetLabelSize(21);
   c1lep5jex3bex_jets_pt_ttbarbb__248->GetYaxis()->SetTitleSize(21);
   c1lep5jex3bex_jets_pt_ttbarbb__248->GetYaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_jets_pt_ttbarbb__248->GetYaxis()->SetTitleFont(43);
   c1lep5jex3bex_jets_pt_ttbarbb__248->GetZaxis()->SetLabelFont(43);
   c1lep5jex3bex_jets_pt_ttbarbb__248->GetZaxis()->SetLabelSize(21);
   c1lep5jex3bex_jets_pt_ttbarbb__248->GetZaxis()->SetTitleSize(21);
   c1lep5jex3bex_jets_pt_ttbarbb__248->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep5jex3bex_jets_pt_ttbarbb,"");
   Double_t xAxis277[7] = {25, 75, 125, 175, 225, 275, 325}; 
   
   TH1D *c1lep5jex3bex_jets_pt_ttbarcc__249 = new TH1D("c1lep5jex3bex_jets_pt_ttbarcc__249","",6, xAxis277);
   c1lep5jex3bex_jets_pt_ttbarcc__249->SetBinContent(1,4422.871);
   c1lep5jex3bex_jets_pt_ttbarcc__249->SetBinContent(2,1351.77);
   c1lep5jex3bex_jets_pt_ttbarcc__249->SetBinContent(3,480.082);
   c1lep5jex3bex_jets_pt_ttbarcc__249->SetBinContent(4,170.3922);
   c1lep5jex3bex_jets_pt_ttbarcc__249->SetBinContent(5,75.78344);
   c1lep5jex3bex_jets_pt_ttbarcc__249->SetBinContent(6,45.72859);
   c1lep5jex3bex_jets_pt_ttbarcc__249->SetBinContent(7,57.51367);
   c1lep5jex3bex_jets_pt_ttbarcc__249->SetBinError(1,46.42938);
   c1lep5jex3bex_jets_pt_ttbarcc__249->SetBinError(2,25.52084);
   c1lep5jex3bex_jets_pt_ttbarcc__249->SetBinError(3,15.19411);
   c1lep5jex3bex_jets_pt_ttbarcc__249->SetBinError(4,10.22142);
   c1lep5jex3bex_jets_pt_ttbarcc__249->SetBinError(5,5.352005);
   c1lep5jex3bex_jets_pt_ttbarcc__249->SetBinError(6,5.569725);
   c1lep5jex3bex_jets_pt_ttbarcc__249->SetBinError(7,8.930016);
   c1lep5jex3bex_jets_pt_ttbarcc__249->SetEntries(20030);
   c1lep5jex3bex_jets_pt_ttbarcc__249->SetDirectory(0);
   c1lep5jex3bex_jets_pt_ttbarcc__249->SetStats(0);

   ci = TColor::GetColor("#ccccff");
   c1lep5jex3bex_jets_pt_ttbarcc__249->SetFillColor(ci);
   c1lep5jex3bex_jets_pt_ttbarcc__249->SetMarkerStyle(20);
   c1lep5jex3bex_jets_pt_ttbarcc__249->SetMarkerSize(1.2);
   c1lep5jex3bex_jets_pt_ttbarcc__249->GetXaxis()->SetTitle("Jets p_{T} [GeV]");
   c1lep5jex3bex_jets_pt_ttbarcc__249->GetXaxis()->SetRange(1,100);
   c1lep5jex3bex_jets_pt_ttbarcc__249->GetXaxis()->SetLabelFont(43);
   c1lep5jex3bex_jets_pt_ttbarcc__249->GetXaxis()->SetLabelSize(21);
   c1lep5jex3bex_jets_pt_ttbarcc__249->GetXaxis()->SetTitleSize(21);
   c1lep5jex3bex_jets_pt_ttbarcc__249->GetXaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_jets_pt_ttbarcc__249->GetXaxis()->SetTitleFont(43);
   c1lep5jex3bex_jets_pt_ttbarcc__249->GetYaxis()->SetLabelFont(43);
   c1lep5jex3bex_jets_pt_ttbarcc__249->GetYaxis()->SetLabelSize(21);
   c1lep5jex3bex_jets_pt_ttbarcc__249->GetYaxis()->SetTitleSize(21);
   c1lep5jex3bex_jets_pt_ttbarcc__249->GetYaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_jets_pt_ttbarcc__249->GetYaxis()->SetTitleFont(43);
   c1lep5jex3bex_jets_pt_ttbarcc__249->GetZaxis()->SetLabelFont(43);
   c1lep5jex3bex_jets_pt_ttbarcc__249->GetZaxis()->SetLabelSize(21);
   c1lep5jex3bex_jets_pt_ttbarcc__249->GetZaxis()->SetTitleSize(21);
   c1lep5jex3bex_jets_pt_ttbarcc__249->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep5jex3bex_jets_pt_ttbarcc,"");
   Double_t xAxis278[7] = {25, 75, 125, 175, 225, 275, 325}; 
   
   TH1D *c1lep5jex3bex_jets_pt_ttbarlight__250 = new TH1D("c1lep5jex3bex_jets_pt_ttbarlight__250","",6, xAxis278);
   c1lep5jex3bex_jets_pt_ttbarlight__250->SetBinContent(1,11159.46);
   c1lep5jex3bex_jets_pt_ttbarlight__250->SetBinContent(2,3158.083);
   c1lep5jex3bex_jets_pt_ttbarlight__250->SetBinContent(3,1012.763);
   c1lep5jex3bex_jets_pt_ttbarlight__250->SetBinContent(4,339.9736);
   c1lep5jex3bex_jets_pt_ttbarlight__250->SetBinContent(5,124.9142);
   c1lep5jex3bex_jets_pt_ttbarlight__250->SetBinContent(6,70.5368);
   c1lep5jex3bex_jets_pt_ttbarlight__250->SetBinContent(7,67.896);
   c1lep5jex3bex_jets_pt_ttbarlight__250->SetBinError(1,79.17622);
   c1lep5jex3bex_jets_pt_ttbarlight__250->SetBinError(2,41.41006);
   c1lep5jex3bex_jets_pt_ttbarlight__250->SetBinError(3,23.89608);
   c1lep5jex3bex_jets_pt_ttbarlight__250->SetBinError(4,12.2738);
   c1lep5jex3bex_jets_pt_ttbarlight__250->SetBinError(5,7.476497);
   c1lep5jex3bex_jets_pt_ttbarlight__250->SetBinError(6,6.485191);
   c1lep5jex3bex_jets_pt_ttbarlight__250->SetBinError(7,6.010684);
   c1lep5jex3bex_jets_pt_ttbarlight__250->SetEntries(45660);
   c1lep5jex3bex_jets_pt_ttbarlight__250->SetDirectory(0);
   c1lep5jex3bex_jets_pt_ttbarlight__250->SetStats(0);
   c1lep5jex3bex_jets_pt_ttbarlight__250->SetMarkerStyle(20);
   c1lep5jex3bex_jets_pt_ttbarlight__250->SetMarkerSize(1.2);
   c1lep5jex3bex_jets_pt_ttbarlight__250->GetXaxis()->SetTitle("Jets p_{T} [GeV]");
   c1lep5jex3bex_jets_pt_ttbarlight__250->GetXaxis()->SetRange(1,100);
   c1lep5jex3bex_jets_pt_ttbarlight__250->GetXaxis()->SetLabelFont(43);
   c1lep5jex3bex_jets_pt_ttbarlight__250->GetXaxis()->SetLabelSize(21);
   c1lep5jex3bex_jets_pt_ttbarlight__250->GetXaxis()->SetTitleSize(21);
   c1lep5jex3bex_jets_pt_ttbarlight__250->GetXaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_jets_pt_ttbarlight__250->GetXaxis()->SetTitleFont(43);
   c1lep5jex3bex_jets_pt_ttbarlight__250->GetYaxis()->SetLabelFont(43);
   c1lep5jex3bex_jets_pt_ttbarlight__250->GetYaxis()->SetLabelSize(21);
   c1lep5jex3bex_jets_pt_ttbarlight__250->GetYaxis()->SetTitleSize(21);
   c1lep5jex3bex_jets_pt_ttbarlight__250->GetYaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_jets_pt_ttbarlight__250->GetYaxis()->SetTitleFont(43);
   c1lep5jex3bex_jets_pt_ttbarlight__250->GetZaxis()->SetLabelFont(43);
   c1lep5jex3bex_jets_pt_ttbarlight__250->GetZaxis()->SetLabelSize(21);
   c1lep5jex3bex_jets_pt_ttbarlight__250->GetZaxis()->SetTitleSize(21);
   c1lep5jex3bex_jets_pt_ttbarlight__250->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep5jex3bex_jets_pt_ttbarlight,"");
   Double_t xAxis279[7] = {25, 75, 125, 175, 225, 275, 325}; 
   
   TH1D *c1lep5jex3bex_jets_pt_uHcW__251 = new TH1D("c1lep5jex3bex_jets_pt_uHcW__251","",6, xAxis279);
   c1lep5jex3bex_jets_pt_uHcW__251->SetBinContent(1,3601.043);
   c1lep5jex3bex_jets_pt_uHcW__251->SetBinContent(2,995.8743);
   c1lep5jex3bex_jets_pt_uHcW__251->SetBinContent(3,288.933);
   c1lep5jex3bex_jets_pt_uHcW__251->SetBinContent(4,91.43893);
   c1lep5jex3bex_jets_pt_uHcW__251->SetBinContent(5,38.72014);
   c1lep5jex3bex_jets_pt_uHcW__251->SetBinContent(6,25.34854);
   c1lep5jex3bex_jets_pt_uHcW__251->SetBinContent(7,17.65623);
   c1lep5jex3bex_jets_pt_uHcW__251->SetBinError(1,58.06145);
   c1lep5jex3bex_jets_pt_uHcW__251->SetBinError(2,31.50774);
   c1lep5jex3bex_jets_pt_uHcW__251->SetBinError(3,17.1332);
   c1lep5jex3bex_jets_pt_uHcW__251->SetBinError(4,10.23385);
   c1lep5jex3bex_jets_pt_uHcW__251->SetBinError(5,6.047448);
   c1lep5jex3bex_jets_pt_uHcW__251->SetBinError(6,4.835991);
   c1lep5jex3bex_jets_pt_uHcW__251->SetBinError(7,5.029388);
   c1lep5jex3bex_jets_pt_uHcW__251->SetEntries(26785);
   c1lep5jex3bex_jets_pt_uHcW__251->SetDirectory(0);
   c1lep5jex3bex_jets_pt_uHcW__251->SetStats(0);
   c1lep5jex3bex_jets_pt_uHcW__251->SetFillColor(2);
   c1lep5jex3bex_jets_pt_uHcW__251->SetLineColor(2);
   c1lep5jex3bex_jets_pt_uHcW__251->SetMarkerStyle(20);
   c1lep5jex3bex_jets_pt_uHcW__251->SetMarkerSize(1.2);
   c1lep5jex3bex_jets_pt_uHcW__251->GetXaxis()->SetTitle("Jets p_{T} [GeV]");
   c1lep5jex3bex_jets_pt_uHcW__251->GetXaxis()->SetRange(1,100);
   c1lep5jex3bex_jets_pt_uHcW__251->GetXaxis()->SetLabelFont(43);
   c1lep5jex3bex_jets_pt_uHcW__251->GetXaxis()->SetLabelSize(21);
   c1lep5jex3bex_jets_pt_uHcW__251->GetXaxis()->SetTitleSize(21);
   c1lep5jex3bex_jets_pt_uHcW__251->GetXaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_jets_pt_uHcW__251->GetXaxis()->SetTitleFont(43);
   c1lep5jex3bex_jets_pt_uHcW__251->GetYaxis()->SetLabelFont(43);
   c1lep5jex3bex_jets_pt_uHcW__251->GetYaxis()->SetLabelSize(21);
   c1lep5jex3bex_jets_pt_uHcW__251->GetYaxis()->SetTitleSize(21);
   c1lep5jex3bex_jets_pt_uHcW__251->GetYaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_jets_pt_uHcW__251->GetYaxis()->SetTitleFont(43);
   c1lep5jex3bex_jets_pt_uHcW__251->GetZaxis()->SetLabelFont(43);
   c1lep5jex3bex_jets_pt_uHcW__251->GetZaxis()->SetLabelSize(21);
   c1lep5jex3bex_jets_pt_uHcW__251->GetZaxis()->SetTitleSize(21);
   c1lep5jex3bex_jets_pt_uHcW__251->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep5jex3bex_jets_pt_uHcW,"");
   h_stack->Draw("hist same");
   
   Double_t g_totErr_fx3111[6] = {
   50,
   100,
   150,
   200,
   250,
   300};
   Double_t g_totErr_fy3111[6] = {
   34260.93,
   10327.85,
   3584.961,
   1313.564,
   535.0627,
   291.6696};
   Double_t g_totErr_felx3111[6] = {
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t g_totErr_fely3111[6] = {
   6482.441,
   1863.347,
   651.7278,
   246.8786,
   106.6282,
   62.37242};
   Double_t g_totErr_fehx3111[6] = {
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t g_totErr_fehy3111[6] = {
   6482.441,
   1863.347,
   651.7278,
   246.8786,
   106.6282,
   62.37242};
   grae = new TGraphAsymmErrors(6,g_totErr_fx3111,g_totErr_fy3111,g_totErr_felx3111,g_totErr_fehx3111,g_totErr_fely3111,g_totErr_fehy3111);
   grae->SetName("g_totErr");
   grae->SetTitle("");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(3354);
   grae->SetLineColor(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0);
   
   TH1F *Graph_g_totErr3111 = new TH1F("Graph_g_totErr3111","",100,0,355);
   Graph_g_totErr3111->SetMinimum(0);
   Graph_g_totErr3111->SetMaximum(44794.78);
   Graph_g_totErr3111->SetDirectory(0);
   Graph_g_totErr3111->SetStats(0);
   Graph_g_totErr3111->SetLineWidth(2);
   Graph_g_totErr3111->SetMarkerStyle(20);
   Graph_g_totErr3111->SetMarkerSize(1.2);
   Graph_g_totErr3111->GetXaxis()->SetLabelFont(43);
   Graph_g_totErr3111->GetXaxis()->SetLabelSize(21);
   Graph_g_totErr3111->GetXaxis()->SetTitleSize(21);
   Graph_g_totErr3111->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_totErr3111->GetXaxis()->SetTitleFont(43);
   Graph_g_totErr3111->GetYaxis()->SetLabelFont(43);
   Graph_g_totErr3111->GetYaxis()->SetLabelSize(21);
   Graph_g_totErr3111->GetYaxis()->SetTitleSize(21);
   Graph_g_totErr3111->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_totErr3111->GetYaxis()->SetTitleFont(43);
   Graph_g_totErr3111->GetZaxis()->SetLabelFont(43);
   Graph_g_totErr3111->GetZaxis()->SetLabelSize(21);
   Graph_g_totErr3111->GetZaxis()->SetTitleSize(21);
   Graph_g_totErr3111->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_totErr3111);
   
   grae->Draw("e2");
   
   Double_t Graph_from_c1lep5jex3bex_jets_pt_Data_fx3112[6] = {
   50,
   100,
   150,
   200,
   250,
   300};
   Double_t Graph_from_c1lep5jex3bex_jets_pt_Data_fy3112[6] = {
   39958,
   11760,
   4113,
   1448,
   593,
   313};
   Double_t Graph_from_c1lep5jex3bex_jets_pt_Data_felx3112[6] = {
   24.95,
   24.95,
   24.95,
   24.95,
   24.95,
   24.95};
   Double_t Graph_from_c1lep5jex3bex_jets_pt_Data_fely3112[6] = {
   199.895,
   108.4435,
   64.13267,
   38.0526,
   24.35159,
   17.69181};
   Double_t Graph_from_c1lep5jex3bex_jets_pt_Data_fehx3112[6] = {
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t Graph_from_c1lep5jex3bex_jets_pt_Data_fehy3112[6] = {
   199.895,
   108.4435,
   64.13267,
   38.0526,
   24.35159,
   17.69181};
   grae = new TGraphAsymmErrors(6,Graph_from_c1lep5jex3bex_jets_pt_Data_fx3112,Graph_from_c1lep5jex3bex_jets_pt_Data_fy3112,Graph_from_c1lep5jex3bex_jets_pt_Data_felx3112,Graph_from_c1lep5jex3bex_jets_pt_Data_fehx3112,Graph_from_c1lep5jex3bex_jets_pt_Data_fely3112,Graph_from_c1lep5jex3bex_jets_pt_Data_fehy3112);
   grae->SetName("Graph_from_c1lep5jex3bex_jets_pt_Data");
   grae->SetTitle("");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_c1lep5jex3bex_jets_pt_Data3112 = new TH1F("Graph_Graph_from_c1lep5jex3bex_jets_pt_Data3112","",100,0,354.995);
   Graph_Graph_from_c1lep5jex3bex_jets_pt_Data3112->SetMinimum(0);
   Graph_Graph_from_c1lep5jex3bex_jets_pt_Data3112->SetMaximum(44144.15);
   Graph_Graph_from_c1lep5jex3bex_jets_pt_Data3112->SetDirectory(0);
   Graph_Graph_from_c1lep5jex3bex_jets_pt_Data3112->SetStats(0);
   Graph_Graph_from_c1lep5jex3bex_jets_pt_Data3112->SetLineWidth(2);
   Graph_Graph_from_c1lep5jex3bex_jets_pt_Data3112->SetMarkerStyle(20);
   Graph_Graph_from_c1lep5jex3bex_jets_pt_Data3112->SetMarkerSize(1.2);
   Graph_Graph_from_c1lep5jex3bex_jets_pt_Data3112->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep5jex3bex_jets_pt_Data3112->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep5jex3bex_jets_pt_Data3112->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep5jex3bex_jets_pt_Data3112->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep5jex3bex_jets_pt_Data3112->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep5jex3bex_jets_pt_Data3112->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep5jex3bex_jets_pt_Data3112->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep5jex3bex_jets_pt_Data3112->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep5jex3bex_jets_pt_Data3112->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep5jex3bex_jets_pt_Data3112->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep5jex3bex_jets_pt_Data3112->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep5jex3bex_jets_pt_Data3112->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep5jex3bex_jets_pt_Data3112->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep5jex3bex_jets_pt_Data3112->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_c1lep5jex3bex_jets_pt_Data3112);
   
   grae->Draw("ep1 ");
   Double_t xAxis280[7] = {25, 75, 125, 175, 225, 275, 325}; 
   
   TH1D *h_dummy_copy__252 = new TH1D("h_dummy_copy__252","",6, xAxis280);
   h_dummy_copy__252->SetEntries(6817304);
   h_dummy_copy__252->SetDirectory(0);
   h_dummy_copy__252->SetStats(0);
   h_dummy_copy__252->SetMarkerStyle(20);
   h_dummy_copy__252->SetMarkerSize(1.2);
   h_dummy_copy__252->GetXaxis()->SetTitle("jets p_{T} [GeV]");
   h_dummy_copy__252->GetXaxis()->SetRange(1,100);
   h_dummy_copy__252->GetXaxis()->SetLabelFont(43);
   h_dummy_copy__252->GetXaxis()->SetLabelSize(21);
   h_dummy_copy__252->GetXaxis()->SetTitleSize(21);
   h_dummy_copy__252->GetXaxis()->SetTitleOffset(1.4);
   h_dummy_copy__252->GetXaxis()->SetTitleFont(43);
   h_dummy_copy__252->GetYaxis()->SetTitle("Events / 50 GeV");
   h_dummy_copy__252->GetYaxis()->SetLabelFont(43);
   h_dummy_copy__252->GetYaxis()->SetLabelSize(16.8);
   h_dummy_copy__252->GetYaxis()->SetTitleSize(21);
   h_dummy_copy__252->GetYaxis()->SetTitleOffset(2.4);
   h_dummy_copy__252->GetYaxis()->SetTitleFont(43);
   h_dummy_copy__252->GetZaxis()->SetLabelFont(43);
   h_dummy_copy__252->GetZaxis()->SetLabelSize(21);
   h_dummy_copy__252->GetZaxis()->SetTitleSize(21);
   h_dummy_copy__252->GetZaxis()->SetTitleFont(43);
   h_dummy_copy__252->Draw("sameaxis");
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
   TLegendEntry *entry=leg->AddEntry("c1lep5jex3bex_jets_pt_Data","Data","lep");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep5jex3bex_jets_pt_uHcW","t#bar{t}#rightarrowWbHc (BR=1%)","f");
   entry->SetFillColor(2);
   entry->SetFillStyle(1001);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep5jex3bex_jets_pt_ttbarlight","t#bar{t}+light","f");
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep5jex3bex_jets_pt_ttbarcc","t#bar{t}+cc","f");

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
   entry=leg->AddEntry("c1lep5jex3bex_jets_pt_ttbarbb","t#bar{t}+bb","f");

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
   entry=leg->AddEntry("c1lep5jex3bex_jets_pt_topEW","Non-t#bar{t}","f");

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
   c_c1lep5jex3bex_jets_pt->cd();
   c_c1lep5jex3bex_jets_pt->Modified();
   c_c1lep5jex3bex_jets_pt->cd();
   c_c1lep5jex3bex_jets_pt->SetSelected(c_c1lep5jex3bex_jets_pt);
}
