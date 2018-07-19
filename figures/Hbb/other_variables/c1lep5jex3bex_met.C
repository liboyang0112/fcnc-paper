void c1lep5jex3bex_met()
{
//=========Macro generated from canvas: c_c1lep5jex3bex_met/c_c1lep5jex3bex_met
//=========  (Thu Jul 19 17:38:05 2018) by ROOT version6.04/14
   TCanvas *c_c1lep5jex3bex_met = new TCanvas("c_c1lep5jex3bex_met", "c_c1lep5jex3bex_met",0,0,600,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c_c1lep5jex3bex_met->SetHighLightColor(2);
   c_c1lep5jex3bex_met->Range(0,0,1,1);
   c_c1lep5jex3bex_met->SetFillColor(0);
   c_c1lep5jex3bex_met->SetBorderMode(0);
   c_c1lep5jex3bex_met->SetBorderSize(2);
   c_c1lep5jex3bex_met->SetTickx(1);
   c_c1lep5jex3bex_met->SetTicky(1);
   c_c1lep5jex3bex_met->SetLeftMargin(0.16);
   c_c1lep5jex3bex_met->SetRightMargin(0.05);
   c_c1lep5jex3bex_met->SetTopMargin(0.05);
   c_c1lep5jex3bex_met->SetBottomMargin(0.16);
   c_c1lep5jex3bex_met->SetFrameBorderMode(0);
  
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
   Double_t xAxis191[5] = {0, 50, 100, 150, 200}; 
   
   TH1D *h_dummy2__172 = new TH1D("h_dummy2__172","Data/MC",4, xAxis191);
   h_dummy2__172->SetMinimum(0.5);
   h_dummy2__172->SetMaximum(1.5);
   h_dummy2__172->SetEntries(1363497);
   h_dummy2__172->SetDirectory(0);
   h_dummy2__172->SetStats(0);
   h_dummy2__172->SetMarkerStyle(20);
   h_dummy2__172->SetMarkerSize(1.2);
   h_dummy2__172->GetXaxis()->SetTitle("E_{T}^{miss} [GeV]");
   h_dummy2__172->GetXaxis()->SetRange(1,25);
   h_dummy2__172->GetXaxis()->SetLabelFont(43);
   h_dummy2__172->GetXaxis()->SetLabelOffset(0.025);
   h_dummy2__172->GetXaxis()->SetLabelSize(16.8);
   h_dummy2__172->GetXaxis()->SetTitleSize(21);
   h_dummy2__172->GetXaxis()->SetTitleOffset(5.05);
   h_dummy2__172->GetXaxis()->SetTitleFont(43);
   h_dummy2__172->GetYaxis()->SetTitle("Data / Bkg");
   h_dummy2__172->GetYaxis()->SetNdivisions(-504);
   h_dummy2__172->GetYaxis()->SetLabelFont(43);
   h_dummy2__172->GetYaxis()->SetLabelOffset(0.02);
   h_dummy2__172->GetYaxis()->SetLabelSize(16.8);
   h_dummy2__172->GetYaxis()->SetTitleSize(21);
   h_dummy2__172->GetYaxis()->SetTitleOffset(2.4);
   h_dummy2__172->GetYaxis()->SetTitleFont(43);
   h_dummy2__172->GetZaxis()->SetLabelFont(43);
   h_dummy2__172->GetZaxis()->SetLabelSize(21);
   h_dummy2__172->GetZaxis()->SetTitleSize(21);
   h_dummy2__172->GetZaxis()->SetTitleFont(43);
   h_dummy2__172->Draw("HIST");
   
   Double_t Graph_from_h_ratio_fx3077[4] = {
   25,
   75,
   125,
   175};
   Double_t Graph_from_h_ratio_fy3077[4] = {
   1.138861,
   1.178251,
   1.10944,
   1.045996};
   Double_t Graph_from_h_ratio_felx3077[4] = {
   24.95,
   24.95,
   24.95,
   24.95};
   Double_t Graph_from_h_ratio_fely3077[4] = {
   0.0191304,
   0.01425593,
   0.03937256,
   0.06019031};
   Double_t Graph_from_h_ratio_fehx3077[4] = {
   25,
   25,
   25,
   25};
   Double_t Graph_from_h_ratio_fehy3077[4] = {
   0.0191304,
   0.01425593,
   0.03937256,
   0.06019031};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(4,Graph_from_h_ratio_fx3077,Graph_from_h_ratio_fy3077,Graph_from_h_ratio_felx3077,Graph_from_h_ratio_fehx3077,Graph_from_h_ratio_fely3077,Graph_from_h_ratio_fehy3077);
   grae->SetName("Graph_from_h_ratio");
   grae->SetTitle("");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(24);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_h_ratio3077 = new TH1F("Graph_Graph_from_h_ratio3077","",100,0,219.995);
   Graph_Graph_from_h_ratio3077->SetMinimum(0.9651356);
   Graph_Graph_from_h_ratio3077->SetMaximum(1.213177);
   Graph_Graph_from_h_ratio3077->SetDirectory(0);
   Graph_Graph_from_h_ratio3077->SetStats(0);
   Graph_Graph_from_h_ratio3077->SetLineWidth(2);
   Graph_Graph_from_h_ratio3077->SetMarkerStyle(20);
   Graph_Graph_from_h_ratio3077->SetMarkerSize(1.2);
   Graph_Graph_from_h_ratio3077->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3077->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3077->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3077->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3077->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3077->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3077->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3077->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3077->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3077->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3077->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3077->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3077->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3077->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_h_ratio3077);
   
   grae->Draw("pe0");
   TLine *line = new TLine(0,1,200,1);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t g_ratio2_fx3078[4] = {
   25,
   75,
   125,
   175};
   Double_t g_ratio2_fy3078[4] = {
   1,
   1,
   1,
   1};
   Double_t g_ratio2_felx3078[4] = {
   25,
   25,
   25,
   25};
   Double_t g_ratio2_fely3078[4] = {
   0.185347,
   0.1905013,
   0.186404,
   0.2045391};
   Double_t g_ratio2_fehx3078[4] = {
   25,
   25,
   25,
   25};
   Double_t g_ratio2_fehy3078[4] = {
   0.185347,
   0.1905013,
   0.186404,
   0.2045391};
   grae = new TGraphAsymmErrors(4,g_ratio2_fx3078,g_ratio2_fy3078,g_ratio2_felx3078,g_ratio2_fehx3078,g_ratio2_fely3078,g_ratio2_fehy3078);
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
   
   TH1F *Graph_g_ratio23078 = new TH1F("Graph_g_ratio23078","",100,0,220);
   Graph_g_ratio23078->SetMinimum(0.754553);
   Graph_g_ratio23078->SetMaximum(1.245447);
   Graph_g_ratio23078->SetDirectory(0);
   Graph_g_ratio23078->SetStats(0);
   Graph_g_ratio23078->SetLineWidth(2);
   Graph_g_ratio23078->SetMarkerStyle(20);
   Graph_g_ratio23078->SetMarkerSize(1.2);
   Graph_g_ratio23078->GetXaxis()->SetLabelFont(43);
   Graph_g_ratio23078->GetXaxis()->SetLabelSize(21);
   Graph_g_ratio23078->GetXaxis()->SetTitleSize(21);
   Graph_g_ratio23078->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23078->GetXaxis()->SetTitleFont(43);
   Graph_g_ratio23078->GetYaxis()->SetLabelFont(43);
   Graph_g_ratio23078->GetYaxis()->SetLabelSize(21);
   Graph_g_ratio23078->GetYaxis()->SetTitleSize(21);
   Graph_g_ratio23078->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23078->GetYaxis()->SetTitleFont(43);
   Graph_g_ratio23078->GetZaxis()->SetLabelFont(43);
   Graph_g_ratio23078->GetZaxis()->SetLabelSize(21);
   Graph_g_ratio23078->GetZaxis()->SetTitleSize(21);
   Graph_g_ratio23078->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_ratio23078);
   
   grae->Draw("e2");
   Double_t xAxis192[5] = {0, 50, 100, 150, 200}; 
   
   TH1D *h_dummy2_copy__173 = new TH1D("h_dummy2_copy__173","Data/MC",4, xAxis192);
   h_dummy2_copy__173->SetMinimum(0.5);
   h_dummy2_copy__173->SetMaximum(1.5);
   h_dummy2_copy__173->SetEntries(1363497);
   h_dummy2_copy__173->SetDirectory(0);
   h_dummy2_copy__173->SetStats(0);
   h_dummy2_copy__173->SetMarkerStyle(20);
   h_dummy2_copy__173->SetMarkerSize(1.2);
   h_dummy2_copy__173->GetXaxis()->SetTitle("E_{T}^{miss} [GeV]");
   h_dummy2_copy__173->GetXaxis()->SetRange(1,25);
   h_dummy2_copy__173->GetXaxis()->SetLabelFont(43);
   h_dummy2_copy__173->GetXaxis()->SetLabelOffset(0.025);
   h_dummy2_copy__173->GetXaxis()->SetLabelSize(16.8);
   h_dummy2_copy__173->GetXaxis()->SetTitleSize(21);
   h_dummy2_copy__173->GetXaxis()->SetTitleOffset(5.05);
   h_dummy2_copy__173->GetXaxis()->SetTitleFont(43);
   h_dummy2_copy__173->GetYaxis()->SetTitle("Data / Bkg");
   h_dummy2_copy__173->GetYaxis()->SetNdivisions(-504);
   h_dummy2_copy__173->GetYaxis()->SetLabelFont(43);
   h_dummy2_copy__173->GetYaxis()->SetLabelOffset(0.02);
   h_dummy2_copy__173->GetYaxis()->SetLabelSize(16.8);
   h_dummy2_copy__173->GetYaxis()->SetTitleSize(21);
   h_dummy2_copy__173->GetYaxis()->SetTitleOffset(2.4);
   h_dummy2_copy__173->GetYaxis()->SetTitleFont(43);
   h_dummy2_copy__173->GetZaxis()->SetLabelFont(43);
   h_dummy2_copy__173->GetZaxis()->SetLabelSize(21);
   h_dummy2_copy__173->GetZaxis()->SetTitleSize(21);
   h_dummy2_copy__173->GetZaxis()->SetTitleFont(43);
   h_dummy2_copy__173->Draw("sameaxis");
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
   c_c1lep5jex3bex_met->cd();
  
// ------------>Primitives in pad: pad0
   TPad *pad0 = new TPad("pad0", "pad0",0,0.2,1,1);
   pad0->Draw();
   pad0->cd();
   pad0->Range(-34.5679,-1464.067,212.3457,13176.6);
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
   Double_t xAxis193[5] = {0, 50, 100, 150, 200}; 
   
   TH1D *h_dummy__174 = new TH1D("h_dummy__174","",4, xAxis193);
   h_dummy__174->SetMinimum(0);
   h_dummy__174->SetMaximum(12444.57);
   h_dummy__174->SetEntries(1363497);
   h_dummy__174->SetDirectory(0);
   h_dummy__174->SetStats(0);
   h_dummy__174->SetMarkerStyle(20);
   h_dummy__174->SetMarkerSize(1.2);
   h_dummy__174->GetXaxis()->SetRange(1,25);
   h_dummy__174->GetXaxis()->SetLabelFont(43);
   h_dummy__174->GetXaxis()->SetLabelSize(0);
   h_dummy__174->GetXaxis()->SetTitleSize(21);
   h_dummy__174->GetXaxis()->SetTitleOffset(1.4);
   h_dummy__174->GetXaxis()->SetTitleFont(43);
   h_dummy__174->GetYaxis()->SetTitle("Events / 50 GeV");
   h_dummy__174->GetYaxis()->SetLabelFont(43);
   h_dummy__174->GetYaxis()->SetLabelSize(16.8);
   h_dummy__174->GetYaxis()->SetTitleSize(21);
   h_dummy__174->GetYaxis()->SetTitleOffset(2.4);
   h_dummy__174->GetYaxis()->SetTitleFont(43);
   h_dummy__174->GetZaxis()->SetLabelFont(43);
   h_dummy__174->GetZaxis()->SetLabelSize(21);
   h_dummy__174->GetZaxis()->SetTitleSize(21);
   h_dummy__174->GetZaxis()->SetTitleFont(43);
   h_dummy__174->Draw("HIST");
   
   THStack *h_stack = new THStack();
   h_stack->SetName("h_stack");
   h_stack->SetTitle("h_stack");
   Double_t xAxis194[5] = {0, 50, 100, 150, 200}; 
   
   TH1F *h_stack_stack_20 = new TH1F("h_stack_stack_20","h_stack",4, xAxis194);
   h_stack_stack_20->SetMinimum(0);
   h_stack_stack_20->SetMaximum(6698.452);
   h_stack_stack_20->SetDirectory(0);
   h_stack_stack_20->SetStats(0);
   h_stack_stack_20->SetLineWidth(2);
   h_stack_stack_20->SetMarkerStyle(20);
   h_stack_stack_20->SetMarkerSize(1.2);
   h_stack_stack_20->GetXaxis()->SetLabelFont(43);
   h_stack_stack_20->GetXaxis()->SetLabelSize(21);
   h_stack_stack_20->GetXaxis()->SetTitleSize(21);
   h_stack_stack_20->GetXaxis()->SetTitleOffset(1.4);
   h_stack_stack_20->GetXaxis()->SetTitleFont(43);
   h_stack_stack_20->GetYaxis()->SetLabelFont(43);
   h_stack_stack_20->GetYaxis()->SetLabelSize(21);
   h_stack_stack_20->GetYaxis()->SetTitleSize(21);
   h_stack_stack_20->GetYaxis()->SetTitleOffset(1.4);
   h_stack_stack_20->GetYaxis()->SetTitleFont(43);
   h_stack_stack_20->GetZaxis()->SetLabelFont(43);
   h_stack_stack_20->GetZaxis()->SetLabelSize(21);
   h_stack_stack_20->GetZaxis()->SetTitleSize(21);
   h_stack_stack_20->GetZaxis()->SetTitleFont(43);
   h_stack->SetHistogram(h_stack_stack_20);
   
   Double_t xAxis195[5] = {0, 50, 100, 150, 200}; 
   
   TH1D *c1lep5jex3bex_met_topEW__175 = new TH1D("c1lep5jex3bex_met_topEW__175","",4, xAxis195);
   c1lep5jex3bex_met_topEW__175->SetBinContent(1,547.6818);
   c1lep5jex3bex_met_topEW__175->SetBinContent(2,599.3738);
   c1lep5jex3bex_met_topEW__175->SetBinContent(3,72.28559);
   c1lep5jex3bex_met_topEW__175->SetBinContent(4,61.11245);
   c1lep5jex3bex_met_topEW__175->SetBinContent(5,25.39423);
   c1lep5jex3bex_met_topEW__175->SetBinError(1,55.21664);
   c1lep5jex3bex_met_topEW__175->SetBinError(2,43.1419);
   c1lep5jex3bex_met_topEW__175->SetBinError(3,17.4469);
   c1lep5jex3bex_met_topEW__175->SetBinError(4,20.14267);
   c1lep5jex3bex_met_topEW__175->SetBinError(5,9.946935);
   c1lep5jex3bex_met_topEW__175->SetEntries(1334887);
   c1lep5jex3bex_met_topEW__175->SetDirectory(0);
   c1lep5jex3bex_met_topEW__175->SetStats(0);

   ci = TColor::GetColor("#66cc66");
   c1lep5jex3bex_met_topEW__175->SetFillColor(ci);
   c1lep5jex3bex_met_topEW__175->SetMarkerStyle(20);
   c1lep5jex3bex_met_topEW__175->SetMarkerSize(1.2);
   c1lep5jex3bex_met_topEW__175->GetXaxis()->SetTitle("E_{T}^{miss} [GeV]");
   c1lep5jex3bex_met_topEW__175->GetXaxis()->SetRange(1,25);
   c1lep5jex3bex_met_topEW__175->GetXaxis()->SetLabelFont(43);
   c1lep5jex3bex_met_topEW__175->GetXaxis()->SetLabelSize(21);
   c1lep5jex3bex_met_topEW__175->GetXaxis()->SetTitleSize(21);
   c1lep5jex3bex_met_topEW__175->GetXaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_met_topEW__175->GetXaxis()->SetTitleFont(43);
   c1lep5jex3bex_met_topEW__175->GetYaxis()->SetLabelFont(43);
   c1lep5jex3bex_met_topEW__175->GetYaxis()->SetLabelSize(21);
   c1lep5jex3bex_met_topEW__175->GetYaxis()->SetTitleSize(21);
   c1lep5jex3bex_met_topEW__175->GetYaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_met_topEW__175->GetYaxis()->SetTitleFont(43);
   c1lep5jex3bex_met_topEW__175->GetZaxis()->SetLabelFont(43);
   c1lep5jex3bex_met_topEW__175->GetZaxis()->SetLabelSize(21);
   c1lep5jex3bex_met_topEW__175->GetZaxis()->SetTitleSize(21);
   c1lep5jex3bex_met_topEW__175->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep5jex3bex_met_topEW,"");
   Double_t xAxis196[5] = {0, 50, 100, 150, 200}; 
   
   TH1D *c1lep5jex3bex_met_ttbarbb__176 = new TH1D("c1lep5jex3bex_met_ttbarbb__176","",4, xAxis196);
   c1lep5jex3bex_met_ttbarbb__176->SetBinContent(1,1174.133);
   c1lep5jex3bex_met_ttbarbb__176->SetBinContent(2,2545.755);
   c1lep5jex3bex_met_ttbarbb__176->SetBinContent(3,372.794);
   c1lep5jex3bex_met_ttbarbb__176->SetBinContent(4,119.8657);
   c1lep5jex3bex_met_ttbarbb__176->SetBinContent(5,109.6587);
   c1lep5jex3bex_met_ttbarbb__176->SetBinError(1,21.41713);
   c1lep5jex3bex_met_ttbarbb__176->SetBinError(2,32.12086);
   c1lep5jex3bex_met_ttbarbb__176->SetBinError(3,12.9649);
   c1lep5jex3bex_met_ttbarbb__176->SetBinError(4,6.440725);
   c1lep5jex3bex_met_ttbarbb__176->SetBinError(5,7.324568);
   c1lep5jex3bex_met_ttbarbb__176->SetEntries(15468);
   c1lep5jex3bex_met_ttbarbb__176->SetDirectory(0);
   c1lep5jex3bex_met_ttbarbb__176->SetStats(0);

   ci = TColor::GetColor("#6666cc");
   c1lep5jex3bex_met_ttbarbb__176->SetFillColor(ci);
   c1lep5jex3bex_met_ttbarbb__176->SetMarkerStyle(20);
   c1lep5jex3bex_met_ttbarbb__176->SetMarkerSize(1.2);
   c1lep5jex3bex_met_ttbarbb__176->GetXaxis()->SetTitle("E_{T}^{miss} [GeV]");
   c1lep5jex3bex_met_ttbarbb__176->GetXaxis()->SetRange(1,25);
   c1lep5jex3bex_met_ttbarbb__176->GetXaxis()->SetLabelFont(43);
   c1lep5jex3bex_met_ttbarbb__176->GetXaxis()->SetLabelSize(21);
   c1lep5jex3bex_met_ttbarbb__176->GetXaxis()->SetTitleSize(21);
   c1lep5jex3bex_met_ttbarbb__176->GetXaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_met_ttbarbb__176->GetXaxis()->SetTitleFont(43);
   c1lep5jex3bex_met_ttbarbb__176->GetYaxis()->SetLabelFont(43);
   c1lep5jex3bex_met_ttbarbb__176->GetYaxis()->SetLabelSize(21);
   c1lep5jex3bex_met_ttbarbb__176->GetYaxis()->SetTitleSize(21);
   c1lep5jex3bex_met_ttbarbb__176->GetYaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_met_ttbarbb__176->GetYaxis()->SetTitleFont(43);
   c1lep5jex3bex_met_ttbarbb__176->GetZaxis()->SetLabelFont(43);
   c1lep5jex3bex_met_ttbarbb__176->GetZaxis()->SetLabelSize(21);
   c1lep5jex3bex_met_ttbarbb__176->GetZaxis()->SetTitleSize(21);
   c1lep5jex3bex_met_ttbarbb__176->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep5jex3bex_met_ttbarbb,"");
   Double_t xAxis197[5] = {0, 50, 100, 150, 200}; 
   
   TH1D *c1lep5jex3bex_met_ttbarcc__177 = new TH1D("c1lep5jex3bex_met_ttbarcc__177","",4, xAxis197);
   c1lep5jex3bex_met_ttbarcc__177->SetBinContent(1,374.0162);
   c1lep5jex3bex_met_ttbarcc__177->SetBinContent(2,797.4545);
   c1lep5jex3bex_met_ttbarcc__177->SetBinContent(3,84.99544);
   c1lep5jex3bex_met_ttbarcc__177->SetBinContent(4,36.3903);
   c1lep5jex3bex_met_ttbarcc__177->SetBinContent(5,27.97177);
   c1lep5jex3bex_met_ttbarcc__177->SetBinError(1,13.31258);
   c1lep5jex3bex_met_ttbarcc__177->SetBinError(2,19.77013);
   c1lep5jex3bex_met_ttbarcc__177->SetBinError(3,6.15584);
   c1lep5jex3bex_met_ttbarcc__177->SetBinError(4,5.452237);
   c1lep5jex3bex_met_ttbarcc__177->SetBinError(5,4.543767);
   c1lep5jex3bex_met_ttbarcc__177->SetEntries(4006);
   c1lep5jex3bex_met_ttbarcc__177->SetDirectory(0);
   c1lep5jex3bex_met_ttbarcc__177->SetStats(0);

   ci = TColor::GetColor("#ccccff");
   c1lep5jex3bex_met_ttbarcc__177->SetFillColor(ci);
   c1lep5jex3bex_met_ttbarcc__177->SetMarkerStyle(20);
   c1lep5jex3bex_met_ttbarcc__177->SetMarkerSize(1.2);
   c1lep5jex3bex_met_ttbarcc__177->GetXaxis()->SetTitle("E_{T}^{miss} [GeV]");
   c1lep5jex3bex_met_ttbarcc__177->GetXaxis()->SetRange(1,25);
   c1lep5jex3bex_met_ttbarcc__177->GetXaxis()->SetLabelFont(43);
   c1lep5jex3bex_met_ttbarcc__177->GetXaxis()->SetLabelSize(21);
   c1lep5jex3bex_met_ttbarcc__177->GetXaxis()->SetTitleSize(21);
   c1lep5jex3bex_met_ttbarcc__177->GetXaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_met_ttbarcc__177->GetXaxis()->SetTitleFont(43);
   c1lep5jex3bex_met_ttbarcc__177->GetYaxis()->SetLabelFont(43);
   c1lep5jex3bex_met_ttbarcc__177->GetYaxis()->SetLabelSize(21);
   c1lep5jex3bex_met_ttbarcc__177->GetYaxis()->SetTitleSize(21);
   c1lep5jex3bex_met_ttbarcc__177->GetYaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_met_ttbarcc__177->GetYaxis()->SetTitleFont(43);
   c1lep5jex3bex_met_ttbarcc__177->GetZaxis()->SetLabelFont(43);
   c1lep5jex3bex_met_ttbarcc__177->GetZaxis()->SetLabelSize(21);
   c1lep5jex3bex_met_ttbarcc__177->GetZaxis()->SetTitleSize(21);
   c1lep5jex3bex_met_ttbarcc__177->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep5jex3bex_met_ttbarcc,"");
   Double_t xAxis198[5] = {0, 50, 100, 150, 200}; 
   
   TH1D *c1lep5jex3bex_met_ttbarlight__178 = new TH1D("c1lep5jex3bex_met_ttbarlight__178","",4, xAxis198);
   c1lep5jex3bex_met_ttbarlight__178->SetBinContent(1,1016.05);
   c1lep5jex3bex_met_ttbarlight__178->SetBinContent(2,1854.994);
   c1lep5jex3bex_met_ttbarlight__178->SetBinContent(3,185.6012);
   c1lep5jex3bex_met_ttbarlight__178->SetBinContent(4,71.35156);
   c1lep5jex3bex_met_ttbarlight__178->SetBinContent(5,58.7287);
   c1lep5jex3bex_met_ttbarlight__178->SetBinError(1,22.95939);
   c1lep5jex3bex_met_ttbarlight__178->SetBinError(2,32.51429);
   c1lep5jex3bex_met_ttbarlight__178->SetBinError(3,10.27218);
   c1lep5jex3bex_met_ttbarlight__178->SetBinError(4,6.421099);
   c1lep5jex3bex_met_ttbarlight__178->SetBinError(5,6.068256);
   c1lep5jex3bex_met_ttbarlight__178->SetEntries(9132);
   c1lep5jex3bex_met_ttbarlight__178->SetDirectory(0);
   c1lep5jex3bex_met_ttbarlight__178->SetStats(0);
   c1lep5jex3bex_met_ttbarlight__178->SetMarkerStyle(20);
   c1lep5jex3bex_met_ttbarlight__178->SetMarkerSize(1.2);
   c1lep5jex3bex_met_ttbarlight__178->GetXaxis()->SetTitle("E_{T}^{miss} [GeV]");
   c1lep5jex3bex_met_ttbarlight__178->GetXaxis()->SetRange(1,25);
   c1lep5jex3bex_met_ttbarlight__178->GetXaxis()->SetLabelFont(43);
   c1lep5jex3bex_met_ttbarlight__178->GetXaxis()->SetLabelSize(21);
   c1lep5jex3bex_met_ttbarlight__178->GetXaxis()->SetTitleSize(21);
   c1lep5jex3bex_met_ttbarlight__178->GetXaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_met_ttbarlight__178->GetXaxis()->SetTitleFont(43);
   c1lep5jex3bex_met_ttbarlight__178->GetYaxis()->SetLabelFont(43);
   c1lep5jex3bex_met_ttbarlight__178->GetYaxis()->SetLabelSize(21);
   c1lep5jex3bex_met_ttbarlight__178->GetYaxis()->SetTitleSize(21);
   c1lep5jex3bex_met_ttbarlight__178->GetYaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_met_ttbarlight__178->GetYaxis()->SetTitleFont(43);
   c1lep5jex3bex_met_ttbarlight__178->GetZaxis()->SetLabelFont(43);
   c1lep5jex3bex_met_ttbarlight__178->GetZaxis()->SetLabelSize(21);
   c1lep5jex3bex_met_ttbarlight__178->GetZaxis()->SetTitleSize(21);
   c1lep5jex3bex_met_ttbarlight__178->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep5jex3bex_met_ttbarlight,"");
   Double_t xAxis199[5] = {0, 50, 100, 150, 200}; 
   
   TH1D *c1lep5jex3bex_met_uHcW__179 = new TH1D("c1lep5jex3bex_met_uHcW__179","",4, xAxis199);
   c1lep5jex3bex_met_uHcW__179->SetBinContent(1,352.8694);
   c1lep5jex3bex_met_uHcW__179->SetBinContent(2,581.9013);
   c1lep5jex3bex_met_uHcW__179->SetBinContent(3,43.71178);
   c1lep5jex3bex_met_uHcW__179->SetBinContent(4,22.77607);
   c1lep5jex3bex_met_uHcW__179->SetBinContent(5,10.54425);
   c1lep5jex3bex_met_uHcW__179->SetBinError(1,17.36981);
   c1lep5jex3bex_met_uHcW__179->SetBinError(2,24.3807);
   c1lep5jex3bex_met_uHcW__179->SetBinError(3,6.773134);
   c1lep5jex3bex_met_uHcW__179->SetBinError(4,4.52958);
   c1lep5jex3bex_met_uHcW__179->SetBinError(5,2.637969);
   c1lep5jex3bex_met_uHcW__179->SetEntries(5357);
   c1lep5jex3bex_met_uHcW__179->SetDirectory(0);
   c1lep5jex3bex_met_uHcW__179->SetStats(0);
   c1lep5jex3bex_met_uHcW__179->SetFillColor(2);
   c1lep5jex3bex_met_uHcW__179->SetLineColor(2);
   c1lep5jex3bex_met_uHcW__179->SetMarkerStyle(20);
   c1lep5jex3bex_met_uHcW__179->SetMarkerSize(1.2);
   c1lep5jex3bex_met_uHcW__179->GetXaxis()->SetTitle("E_{T}^{miss} [GeV]");
   c1lep5jex3bex_met_uHcW__179->GetXaxis()->SetRange(1,25);
   c1lep5jex3bex_met_uHcW__179->GetXaxis()->SetLabelFont(43);
   c1lep5jex3bex_met_uHcW__179->GetXaxis()->SetLabelSize(21);
   c1lep5jex3bex_met_uHcW__179->GetXaxis()->SetTitleSize(21);
   c1lep5jex3bex_met_uHcW__179->GetXaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_met_uHcW__179->GetXaxis()->SetTitleFont(43);
   c1lep5jex3bex_met_uHcW__179->GetYaxis()->SetLabelFont(43);
   c1lep5jex3bex_met_uHcW__179->GetYaxis()->SetLabelSize(21);
   c1lep5jex3bex_met_uHcW__179->GetYaxis()->SetTitleSize(21);
   c1lep5jex3bex_met_uHcW__179->GetYaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_met_uHcW__179->GetYaxis()->SetTitleFont(43);
   c1lep5jex3bex_met_uHcW__179->GetZaxis()->SetLabelFont(43);
   c1lep5jex3bex_met_uHcW__179->GetZaxis()->SetLabelSize(21);
   c1lep5jex3bex_met_uHcW__179->GetZaxis()->SetTitleSize(21);
   c1lep5jex3bex_met_uHcW__179->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep5jex3bex_met_uHcW,"");
   h_stack->Draw("hist same");
   
   Double_t g_totErr_fx3079[4] = {
   25,
   75,
   125,
   175};
   Double_t g_totErr_fy3079[4] = {
   3111.88,
   5797.577,
   715.6763,
   288.72};
   Double_t g_totErr_felx3079[4] = {
   25,
   25,
   25,
   25};
   Double_t g_totErr_fely3079[4] = {
   576.7776,
   1104.446,
   133.4049,
   59.05455};
   Double_t g_totErr_fehx3079[4] = {
   25,
   25,
   25,
   25};
   Double_t g_totErr_fehy3079[4] = {
   576.7776,
   1104.446,
   133.4049,
   59.05455};
   grae = new TGraphAsymmErrors(4,g_totErr_fx3079,g_totErr_fy3079,g_totErr_felx3079,g_totErr_fehx3079,g_totErr_fely3079,g_totErr_fehy3079);
   grae->SetName("g_totErr");
   grae->SetTitle("");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(3354);
   grae->SetLineColor(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0);
   
   TH1F *Graph_g_totErr3079 = new TH1F("Graph_g_totErr3079","",100,0,220);
   Graph_g_totErr3079->SetMinimum(0);
   Graph_g_totErr3079->SetMaximum(7569.259);
   Graph_g_totErr3079->SetDirectory(0);
   Graph_g_totErr3079->SetStats(0);
   Graph_g_totErr3079->SetLineWidth(2);
   Graph_g_totErr3079->SetMarkerStyle(20);
   Graph_g_totErr3079->SetMarkerSize(1.2);
   Graph_g_totErr3079->GetXaxis()->SetLabelFont(43);
   Graph_g_totErr3079->GetXaxis()->SetLabelSize(21);
   Graph_g_totErr3079->GetXaxis()->SetTitleSize(21);
   Graph_g_totErr3079->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_totErr3079->GetXaxis()->SetTitleFont(43);
   Graph_g_totErr3079->GetYaxis()->SetLabelFont(43);
   Graph_g_totErr3079->GetYaxis()->SetLabelSize(21);
   Graph_g_totErr3079->GetYaxis()->SetTitleSize(21);
   Graph_g_totErr3079->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_totErr3079->GetYaxis()->SetTitleFont(43);
   Graph_g_totErr3079->GetZaxis()->SetLabelFont(43);
   Graph_g_totErr3079->GetZaxis()->SetLabelSize(21);
   Graph_g_totErr3079->GetZaxis()->SetTitleSize(21);
   Graph_g_totErr3079->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_totErr3079);
   
   grae->Draw("e2");
   
   Double_t Graph_from_c1lep5jex3bex_met_Data_fx3080[4] = {
   25,
   75,
   125,
   175};
   Double_t Graph_from_c1lep5jex3bex_met_Data_fy3080[4] = {
   3544,
   6831,
   794,
   302};
   Double_t Graph_from_c1lep5jex3bex_met_Data_felx3080[4] = {
   24.95,
   24.95,
   24.95,
   24.95};
   Double_t Graph_from_c1lep5jex3bex_met_Data_fely3080[4] = {
   59.5315,
   82.64986,
   28.17801,
   17.37815};
   Double_t Graph_from_c1lep5jex3bex_met_Data_fehx3080[4] = {
   25,
   25,
   25,
   25};
   Double_t Graph_from_c1lep5jex3bex_met_Data_fehy3080[4] = {
   59.5315,
   82.64986,
   28.17801,
   17.37815};
   grae = new TGraphAsymmErrors(4,Graph_from_c1lep5jex3bex_met_Data_fx3080,Graph_from_c1lep5jex3bex_met_Data_fy3080,Graph_from_c1lep5jex3bex_met_Data_felx3080,Graph_from_c1lep5jex3bex_met_Data_fehx3080,Graph_from_c1lep5jex3bex_met_Data_fely3080,Graph_from_c1lep5jex3bex_met_Data_fehy3080);
   grae->SetName("Graph_from_c1lep5jex3bex_met_Data");
   grae->SetTitle("");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_c1lep5jex3bex_met_Data3080 = new TH1F("Graph_Graph_from_c1lep5jex3bex_met_Data3080","",100,0,219.995);
   Graph_Graph_from_c1lep5jex3bex_met_Data3080->SetMinimum(0);
   Graph_Graph_from_c1lep5jex3bex_met_Data3080->SetMaximum(7576.553);
   Graph_Graph_from_c1lep5jex3bex_met_Data3080->SetDirectory(0);
   Graph_Graph_from_c1lep5jex3bex_met_Data3080->SetStats(0);
   Graph_Graph_from_c1lep5jex3bex_met_Data3080->SetLineWidth(2);
   Graph_Graph_from_c1lep5jex3bex_met_Data3080->SetMarkerStyle(20);
   Graph_Graph_from_c1lep5jex3bex_met_Data3080->SetMarkerSize(1.2);
   Graph_Graph_from_c1lep5jex3bex_met_Data3080->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep5jex3bex_met_Data3080->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep5jex3bex_met_Data3080->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep5jex3bex_met_Data3080->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep5jex3bex_met_Data3080->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep5jex3bex_met_Data3080->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep5jex3bex_met_Data3080->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep5jex3bex_met_Data3080->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep5jex3bex_met_Data3080->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep5jex3bex_met_Data3080->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep5jex3bex_met_Data3080->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep5jex3bex_met_Data3080->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep5jex3bex_met_Data3080->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep5jex3bex_met_Data3080->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_c1lep5jex3bex_met_Data3080);
   
   grae->Draw("ep1 ");
   Double_t xAxis200[5] = {0, 50, 100, 150, 200}; 
   
   TH1D *h_dummy_copy__180 = new TH1D("h_dummy_copy__180","",4, xAxis200);
   h_dummy_copy__180->SetEntries(1363497);
   h_dummy_copy__180->SetDirectory(0);
   h_dummy_copy__180->SetStats(0);
   h_dummy_copy__180->SetMarkerStyle(20);
   h_dummy_copy__180->SetMarkerSize(1.2);
   h_dummy_copy__180->GetXaxis()->SetTitle("E_{T}^{miss} [GeV]");
   h_dummy_copy__180->GetXaxis()->SetRange(1,25);
   h_dummy_copy__180->GetXaxis()->SetLabelFont(43);
   h_dummy_copy__180->GetXaxis()->SetLabelSize(21);
   h_dummy_copy__180->GetXaxis()->SetTitleSize(21);
   h_dummy_copy__180->GetXaxis()->SetTitleOffset(1.4);
   h_dummy_copy__180->GetXaxis()->SetTitleFont(43);
   h_dummy_copy__180->GetYaxis()->SetTitle("Events / 50 GeV");
   h_dummy_copy__180->GetYaxis()->SetLabelFont(43);
   h_dummy_copy__180->GetYaxis()->SetLabelSize(16.8);
   h_dummy_copy__180->GetYaxis()->SetTitleSize(21);
   h_dummy_copy__180->GetYaxis()->SetTitleOffset(2.4);
   h_dummy_copy__180->GetYaxis()->SetTitleFont(43);
   h_dummy_copy__180->GetZaxis()->SetLabelFont(43);
   h_dummy_copy__180->GetZaxis()->SetLabelSize(21);
   h_dummy_copy__180->GetZaxis()->SetTitleSize(21);
   h_dummy_copy__180->GetZaxis()->SetTitleFont(43);
   h_dummy_copy__180->Draw("sameaxis");
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
   TLegendEntry *entry=leg->AddEntry("c1lep5jex3bex_met_Data","Data","lep");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep5jex3bex_met_uHcW","t#bar{t}#rightarrowWbHc (BR=1%)","f");
   entry->SetFillColor(2);
   entry->SetFillStyle(1001);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep5jex3bex_met_ttbarlight","t#bar{t}+light","f");
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep5jex3bex_met_ttbarcc","t#bar{t}+cc","f");

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
   entry=leg->AddEntry("c1lep5jex3bex_met_ttbarbb","t#bar{t}+bb","f");

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
   entry=leg->AddEntry("c1lep5jex3bex_met_topEW","Non-t#bar{t}","f");

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
   c_c1lep5jex3bex_met->cd();
   c_c1lep5jex3bex_met->Modified();
   c_c1lep5jex3bex_met->cd();
   c_c1lep5jex3bex_met->SetSelected(c_c1lep5jex3bex_met);
}
