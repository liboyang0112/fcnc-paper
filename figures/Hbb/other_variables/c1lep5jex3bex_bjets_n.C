void c1lep5jex3bex_bjets_n()
{
//=========Macro generated from canvas: c_c1lep5jex3bex_bjets_n/c_c1lep5jex3bex_bjets_n
//=========  (Thu Jul 19 16:48:44 2018) by ROOT version6.04/14
   TCanvas *c_c1lep5jex3bex_bjets_n = new TCanvas("c_c1lep5jex3bex_bjets_n", "c_c1lep5jex3bex_bjets_n",0,0,600,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c_c1lep5jex3bex_bjets_n->SetHighLightColor(2);
   c_c1lep5jex3bex_bjets_n->Range(0,0,1,1);
   c_c1lep5jex3bex_bjets_n->SetFillColor(0);
   c_c1lep5jex3bex_bjets_n->SetBorderMode(0);
   c_c1lep5jex3bex_bjets_n->SetBorderSize(2);
   c_c1lep5jex3bex_bjets_n->SetTickx(1);
   c_c1lep5jex3bex_bjets_n->SetTicky(1);
   c_c1lep5jex3bex_bjets_n->SetLeftMargin(0.16);
   c_c1lep5jex3bex_bjets_n->SetRightMargin(0.05);
   c_c1lep5jex3bex_bjets_n->SetTopMargin(0.05);
   c_c1lep5jex3bex_bjets_n->SetBottomMargin(0.16);
   c_c1lep5jex3bex_bjets_n->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0,1,0.28);
   pad1->Draw();
   pad1->cd();
   pad1->Range(0.9814815,-0.0873016,4.685185,1.5);
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
   Double_t xAxis431[4] = {1.5, 2.5, 3.5, 4.5}; 
   
   TH1D *h_dummy2__388 = new TH1D("h_dummy2__388","Data/MC",3, xAxis431);
   h_dummy2__388->SetMinimum(0.5);
   h_dummy2__388->SetMaximum(1.5);
   h_dummy2__388->SetEntries(1363526);
   h_dummy2__388->SetDirectory(0);
   h_dummy2__388->SetStats(0);
   h_dummy2__388->SetMarkerStyle(20);
   h_dummy2__388->SetMarkerSize(1.2);
   h_dummy2__388->GetXaxis()->SetTitle("N_{b}");
   h_dummy2__388->GetXaxis()->SetRange(1,9);
   h_dummy2__388->GetXaxis()->SetLabelFont(43);
   h_dummy2__388->GetXaxis()->SetLabelOffset(0.025);
   h_dummy2__388->GetXaxis()->SetLabelSize(16.8);
   h_dummy2__388->GetXaxis()->SetTitleSize(21);
   h_dummy2__388->GetXaxis()->SetTitleOffset(5.05);
   h_dummy2__388->GetXaxis()->SetTitleFont(43);
   h_dummy2__388->GetYaxis()->SetTitle("Data / Bkg");
   h_dummy2__388->GetYaxis()->SetNdivisions(-504);
   h_dummy2__388->GetYaxis()->SetLabelFont(43);
   h_dummy2__388->GetYaxis()->SetLabelOffset(0.02);
   h_dummy2__388->GetYaxis()->SetLabelSize(16.8);
   h_dummy2__388->GetYaxis()->SetTitleSize(21);
   h_dummy2__388->GetYaxis()->SetTitleOffset(2.4);
   h_dummy2__388->GetYaxis()->SetTitleFont(43);
   h_dummy2__388->GetZaxis()->SetLabelFont(43);
   h_dummy2__388->GetZaxis()->SetLabelSize(21);
   h_dummy2__388->GetZaxis()->SetTitleSize(21);
   h_dummy2__388->GetZaxis()->SetTitleFont(43);
   h_dummy2__388->Draw("HIST");
   
   Double_t Graph_from_h_ratio_fx3173[3] = {
   2,
   3,
   4};
   Double_t Graph_from_h_ratio_fy3173[3] = {
   0,
   1.154995,
   0};
   Double_t Graph_from_h_ratio_felx3173[3] = {
   0.499,
   0.499,
   0.499};
   Double_t Graph_from_h_ratio_fely3173[3] = {
   0,
   0.01067474,
   0};
   Double_t Graph_from_h_ratio_fehx3173[3] = {
   0.5,
   0.5,
   0.5};
   Double_t Graph_from_h_ratio_fehy3173[3] = {
   0,
   0.01067474,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(3,Graph_from_h_ratio_fx3173,Graph_from_h_ratio_fy3173,Graph_from_h_ratio_felx3173,Graph_from_h_ratio_fehx3173,Graph_from_h_ratio_fely3173,Graph_from_h_ratio_fehy3173);
   grae->SetName("Graph_from_h_ratio");
   grae->SetTitle("");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(24);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_h_ratio3173 = new TH1F("Graph_Graph_from_h_ratio3173","",100,1.2011,4.7999);
   Graph_Graph_from_h_ratio3173->SetMinimum(0);
   Graph_Graph_from_h_ratio3173->SetMaximum(1.282236);
   Graph_Graph_from_h_ratio3173->SetDirectory(0);
   Graph_Graph_from_h_ratio3173->SetStats(0);
   Graph_Graph_from_h_ratio3173->SetLineWidth(2);
   Graph_Graph_from_h_ratio3173->SetMarkerStyle(20);
   Graph_Graph_from_h_ratio3173->SetMarkerSize(1.2);
   Graph_Graph_from_h_ratio3173->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3173->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3173->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3173->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3173->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3173->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3173->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3173->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3173->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3173->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3173->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3173->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3173->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3173->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_h_ratio3173);
   
   grae->Draw("pe0");
   TLine *line = new TLine(1.5,1,4.5,1);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t g_ratio2_fx3174[3] = {
   2,
   3,
   4};
   Double_t g_ratio2_fy3174[3] = {
   1,
   1,
   1};
   Double_t g_ratio2_felx3174[3] = {
   0.5,
   0.5,
   0.5};
   Double_t g_ratio2_fely3174[3] = {
   4190067,
   0.1858066,
   4190067};
   Double_t g_ratio2_fehx3174[3] = {
   0.5,
   0.5,
   0.5};
   Double_t g_ratio2_fehy3174[3] = {
   4190067,
   0.1858066,
   4190067};
   grae = new TGraphAsymmErrors(3,g_ratio2_fx3174,g_ratio2_fy3174,g_ratio2_felx3174,g_ratio2_fehx3174,g_ratio2_fely3174,g_ratio2_fehy3174);
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
   
   TH1F *Graph_g_ratio23174 = new TH1F("Graph_g_ratio23174","",100,1.2,4.8);
   Graph_g_ratio23174->SetMinimum(-5028079);
   Graph_g_ratio23174->SetMaximum(5028081);
   Graph_g_ratio23174->SetDirectory(0);
   Graph_g_ratio23174->SetStats(0);
   Graph_g_ratio23174->SetLineWidth(2);
   Graph_g_ratio23174->SetMarkerStyle(20);
   Graph_g_ratio23174->SetMarkerSize(1.2);
   Graph_g_ratio23174->GetXaxis()->SetLabelFont(43);
   Graph_g_ratio23174->GetXaxis()->SetLabelSize(21);
   Graph_g_ratio23174->GetXaxis()->SetTitleSize(21);
   Graph_g_ratio23174->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23174->GetXaxis()->SetTitleFont(43);
   Graph_g_ratio23174->GetYaxis()->SetLabelFont(43);
   Graph_g_ratio23174->GetYaxis()->SetLabelSize(21);
   Graph_g_ratio23174->GetYaxis()->SetTitleSize(21);
   Graph_g_ratio23174->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23174->GetYaxis()->SetTitleFont(43);
   Graph_g_ratio23174->GetZaxis()->SetLabelFont(43);
   Graph_g_ratio23174->GetZaxis()->SetLabelSize(21);
   Graph_g_ratio23174->GetZaxis()->SetTitleSize(21);
   Graph_g_ratio23174->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_ratio23174);
   
   grae->Draw("e2");
   Double_t xAxis432[4] = {1.5, 2.5, 3.5, 4.5}; 
   
   TH1D *h_dummy2_copy__389 = new TH1D("h_dummy2_copy__389","Data/MC",3, xAxis432);
   h_dummy2_copy__389->SetMinimum(0.5);
   h_dummy2_copy__389->SetMaximum(1.5);
   h_dummy2_copy__389->SetEntries(1363526);
   h_dummy2_copy__389->SetDirectory(0);
   h_dummy2_copy__389->SetStats(0);
   h_dummy2_copy__389->SetMarkerStyle(20);
   h_dummy2_copy__389->SetMarkerSize(1.2);
   h_dummy2_copy__389->GetXaxis()->SetTitle("N_{b}");
   h_dummy2_copy__389->GetXaxis()->SetRange(1,9);
   h_dummy2_copy__389->GetXaxis()->SetLabelFont(43);
   h_dummy2_copy__389->GetXaxis()->SetLabelOffset(0.025);
   h_dummy2_copy__389->GetXaxis()->SetLabelSize(16.8);
   h_dummy2_copy__389->GetXaxis()->SetTitleSize(21);
   h_dummy2_copy__389->GetXaxis()->SetTitleOffset(5.05);
   h_dummy2_copy__389->GetXaxis()->SetTitleFont(43);
   h_dummy2_copy__389->GetYaxis()->SetTitle("Data / Bkg");
   h_dummy2_copy__389->GetYaxis()->SetNdivisions(-504);
   h_dummy2_copy__389->GetYaxis()->SetLabelFont(43);
   h_dummy2_copy__389->GetYaxis()->SetLabelOffset(0.02);
   h_dummy2_copy__389->GetYaxis()->SetLabelSize(16.8);
   h_dummy2_copy__389->GetYaxis()->SetTitleSize(21);
   h_dummy2_copy__389->GetYaxis()->SetTitleOffset(2.4);
   h_dummy2_copy__389->GetYaxis()->SetTitleFont(43);
   h_dummy2_copy__389->GetZaxis()->SetLabelFont(43);
   h_dummy2_copy__389->GetZaxis()->SetLabelSize(21);
   h_dummy2_copy__389->GetZaxis()->SetTitleSize(21);
   h_dummy2_copy__389->GetZaxis()->SetTitleFont(43);
   h_dummy2_copy__389->Draw("sameaxis");
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
   c_c1lep5jex3bex_bjets_n->cd();
  
// ------------>Primitives in pad: pad0
   TPad *pad0 = new TPad("pad0", "pad0",0,0.2,1,1);
   pad0->Draw();
   pad0->cd();
   pad0->Range(0.9814815,-2502.042,4.685185,22518.38);
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
   Double_t xAxis433[4] = {1.5, 2.5, 3.5, 4.5}; 
   
   TH1D *h_dummy__390 = new TH1D("h_dummy__390","",3, xAxis433);
   h_dummy__390->SetMinimum(0);
   h_dummy__390->SetMaximum(21267.36);
   h_dummy__390->SetEntries(1363526);
   h_dummy__390->SetDirectory(0);
   h_dummy__390->SetStats(0);
   h_dummy__390->SetMarkerStyle(20);
   h_dummy__390->SetMarkerSize(1.2);
   h_dummy__390->GetXaxis()->SetRange(1,9);
   h_dummy__390->GetXaxis()->SetLabelFont(43);
   h_dummy__390->GetXaxis()->SetLabelSize(0);
   h_dummy__390->GetXaxis()->SetTitleSize(21);
   h_dummy__390->GetXaxis()->SetTitleOffset(1.4);
   h_dummy__390->GetXaxis()->SetTitleFont(43);
   h_dummy__390->GetYaxis()->SetTitle("Events");
   h_dummy__390->GetYaxis()->SetLabelFont(43);
   h_dummy__390->GetYaxis()->SetLabelSize(16.8);
   h_dummy__390->GetYaxis()->SetTitleSize(21);
   h_dummy__390->GetYaxis()->SetTitleOffset(2.4);
   h_dummy__390->GetYaxis()->SetTitleFont(43);
   h_dummy__390->GetZaxis()->SetLabelFont(43);
   h_dummy__390->GetZaxis()->SetLabelSize(21);
   h_dummy__390->GetZaxis()->SetTitleSize(21);
   h_dummy__390->GetZaxis()->SetTitleFont(43);
   h_dummy__390->Draw("HIST");
   
   THStack *h_stack = new THStack();
   h_stack->SetName("h_stack");
   h_stack->SetTitle("h_stack");
   Double_t xAxis434[4] = {1.5, 2.5, 3.5, 4.5}; 
   
   TH1F *h_stack_stack_44 = new TH1F("h_stack_stack_44","h_stack",3, xAxis434);
   h_stack_stack_44->SetMinimum(-42.04621);
   h_stack_stack_44->SetMaximum(11173.97);
   h_stack_stack_44->SetDirectory(0);
   h_stack_stack_44->SetStats(0);
   h_stack_stack_44->SetLineWidth(2);
   h_stack_stack_44->SetMarkerStyle(20);
   h_stack_stack_44->SetMarkerSize(1.2);
   h_stack_stack_44->GetXaxis()->SetLabelFont(43);
   h_stack_stack_44->GetXaxis()->SetLabelSize(21);
   h_stack_stack_44->GetXaxis()->SetTitleSize(21);
   h_stack_stack_44->GetXaxis()->SetTitleOffset(1.4);
   h_stack_stack_44->GetXaxis()->SetTitleFont(43);
   h_stack_stack_44->GetYaxis()->SetLabelFont(43);
   h_stack_stack_44->GetYaxis()->SetLabelSize(21);
   h_stack_stack_44->GetYaxis()->SetTitleSize(21);
   h_stack_stack_44->GetYaxis()->SetTitleOffset(1.4);
   h_stack_stack_44->GetYaxis()->SetTitleFont(43);
   h_stack_stack_44->GetZaxis()->SetLabelFont(43);
   h_stack_stack_44->GetZaxis()->SetLabelSize(21);
   h_stack_stack_44->GetZaxis()->SetTitleSize(21);
   h_stack_stack_44->GetZaxis()->SetTitleFont(43);
   h_stack->SetHistogram(h_stack_stack_44);
   
   Double_t xAxis435[4] = {1.5, 2.5, 3.5, 4.5}; 
   
   TH1D *c1lep5jex3bex_bjets_n_topEW__391 = new TH1D("c1lep5jex3bex_bjets_n_topEW__391","",3, xAxis435);
   c1lep5jex3bex_bjets_n_topEW__391->SetBinContent(1,1.299999e-05);
   c1lep5jex3bex_bjets_n_topEW__391->SetBinContent(2,1306.218);
   c1lep5jex3bex_bjets_n_topEW__391->SetBinContent(3,1.299999e-05);
   c1lep5jex3bex_bjets_n_topEW__391->SetBinError(1,17.79335);
   c1lep5jex3bex_bjets_n_topEW__391->SetBinError(2,130.1636);
   c1lep5jex3bex_bjets_n_topEW__391->SetBinError(3,17.79335);
   c1lep5jex3bex_bjets_n_topEW__391->SetEntries(1334911);
   c1lep5jex3bex_bjets_n_topEW__391->SetDirectory(0);
   c1lep5jex3bex_bjets_n_topEW__391->SetStats(0);

   ci = TColor::GetColor("#66cc66");
   c1lep5jex3bex_bjets_n_topEW__391->SetFillColor(ci);
   c1lep5jex3bex_bjets_n_topEW__391->SetMarkerStyle(20);
   c1lep5jex3bex_bjets_n_topEW__391->SetMarkerSize(1.2);
   c1lep5jex3bex_bjets_n_topEW__391->GetXaxis()->SetTitle("Number of b-jets");
   c1lep5jex3bex_bjets_n_topEW__391->GetXaxis()->SetRange(1,9);
   c1lep5jex3bex_bjets_n_topEW__391->GetXaxis()->SetLabelFont(43);
   c1lep5jex3bex_bjets_n_topEW__391->GetXaxis()->SetLabelSize(21);
   c1lep5jex3bex_bjets_n_topEW__391->GetXaxis()->SetTitleSize(21);
   c1lep5jex3bex_bjets_n_topEW__391->GetXaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_bjets_n_topEW__391->GetXaxis()->SetTitleFont(43);
   c1lep5jex3bex_bjets_n_topEW__391->GetYaxis()->SetLabelFont(43);
   c1lep5jex3bex_bjets_n_topEW__391->GetYaxis()->SetLabelSize(21);
   c1lep5jex3bex_bjets_n_topEW__391->GetYaxis()->SetTitleSize(21);
   c1lep5jex3bex_bjets_n_topEW__391->GetYaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_bjets_n_topEW__391->GetYaxis()->SetTitleFont(43);
   c1lep5jex3bex_bjets_n_topEW__391->GetZaxis()->SetLabelFont(43);
   c1lep5jex3bex_bjets_n_topEW__391->GetZaxis()->SetLabelSize(21);
   c1lep5jex3bex_bjets_n_topEW__391->GetZaxis()->SetTitleSize(21);
   c1lep5jex3bex_bjets_n_topEW__391->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep5jex3bex_bjets_n_topEW,"");
   Double_t xAxis436[4] = {1.5, 2.5, 3.5, 4.5}; 
   
   TH1D *c1lep5jex3bex_bjets_n_ttbarbb__392 = new TH1D("c1lep5jex3bex_bjets_n_ttbarbb__392","",3, xAxis436);
   c1lep5jex3bex_bjets_n_ttbarbb__392->SetBinContent(1,1e-06);
   c1lep5jex3bex_bjets_n_ttbarbb__392->SetBinContent(2,4322.206);
   c1lep5jex3bex_bjets_n_ttbarbb__392->SetBinContent(3,1e-06);
   c1lep5jex3bex_bjets_n_ttbarbb__392->SetBinError(1,41.87677);
   c1lep5jex3bex_bjets_n_ttbarbb__392->SetBinError(2,41.87677);
   c1lep5jex3bex_bjets_n_ttbarbb__392->SetBinError(3,41.87677);
   c1lep5jex3bex_bjets_n_ttbarbb__392->SetEntries(15470);
   c1lep5jex3bex_bjets_n_ttbarbb__392->SetDirectory(0);
   c1lep5jex3bex_bjets_n_ttbarbb__392->SetStats(0);

   ci = TColor::GetColor("#6666cc");
   c1lep5jex3bex_bjets_n_ttbarbb__392->SetFillColor(ci);
   c1lep5jex3bex_bjets_n_ttbarbb__392->SetMarkerStyle(20);
   c1lep5jex3bex_bjets_n_ttbarbb__392->SetMarkerSize(1.2);
   c1lep5jex3bex_bjets_n_ttbarbb__392->GetXaxis()->SetTitle("Number of b-jets");
   c1lep5jex3bex_bjets_n_ttbarbb__392->GetXaxis()->SetRange(1,9);
   c1lep5jex3bex_bjets_n_ttbarbb__392->GetXaxis()->SetLabelFont(43);
   c1lep5jex3bex_bjets_n_ttbarbb__392->GetXaxis()->SetLabelSize(21);
   c1lep5jex3bex_bjets_n_ttbarbb__392->GetXaxis()->SetTitleSize(21);
   c1lep5jex3bex_bjets_n_ttbarbb__392->GetXaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_bjets_n_ttbarbb__392->GetXaxis()->SetTitleFont(43);
   c1lep5jex3bex_bjets_n_ttbarbb__392->GetYaxis()->SetLabelFont(43);
   c1lep5jex3bex_bjets_n_ttbarbb__392->GetYaxis()->SetLabelSize(21);
   c1lep5jex3bex_bjets_n_ttbarbb__392->GetYaxis()->SetTitleSize(21);
   c1lep5jex3bex_bjets_n_ttbarbb__392->GetYaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_bjets_n_ttbarbb__392->GetYaxis()->SetTitleFont(43);
   c1lep5jex3bex_bjets_n_ttbarbb__392->GetZaxis()->SetLabelFont(43);
   c1lep5jex3bex_bjets_n_ttbarbb__392->GetZaxis()->SetLabelSize(21);
   c1lep5jex3bex_bjets_n_ttbarbb__392->GetZaxis()->SetTitleSize(21);
   c1lep5jex3bex_bjets_n_ttbarbb__392->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep5jex3bex_bjets_n_ttbarbb,"");
   Double_t xAxis437[4] = {1.5, 2.5, 3.5, 4.5}; 
   
   TH1D *c1lep5jex3bex_bjets_n_ttbarcc__393 = new TH1D("c1lep5jex3bex_bjets_n_ttbarcc__393","",3, xAxis437);
   c1lep5jex3bex_bjets_n_ttbarcc__393->SetBinContent(1,1e-06);
   c1lep5jex3bex_bjets_n_ttbarcc__393->SetBinContent(2,1320.828);
   c1lep5jex3bex_bjets_n_ttbarcc__393->SetBinContent(3,1e-06);
   c1lep5jex3bex_bjets_n_ttbarcc__393->SetBinError(1,25.61933);
   c1lep5jex3bex_bjets_n_ttbarcc__393->SetBinError(2,25.61933);
   c1lep5jex3bex_bjets_n_ttbarcc__393->SetBinError(3,25.61933);
   c1lep5jex3bex_bjets_n_ttbarcc__393->SetEntries(4008);
   c1lep5jex3bex_bjets_n_ttbarcc__393->SetDirectory(0);
   c1lep5jex3bex_bjets_n_ttbarcc__393->SetStats(0);

   ci = TColor::GetColor("#ccccff");
   c1lep5jex3bex_bjets_n_ttbarcc__393->SetFillColor(ci);
   c1lep5jex3bex_bjets_n_ttbarcc__393->SetMarkerStyle(20);
   c1lep5jex3bex_bjets_n_ttbarcc__393->SetMarkerSize(1.2);
   c1lep5jex3bex_bjets_n_ttbarcc__393->GetXaxis()->SetTitle("Number of b-jets");
   c1lep5jex3bex_bjets_n_ttbarcc__393->GetXaxis()->SetRange(1,9);
   c1lep5jex3bex_bjets_n_ttbarcc__393->GetXaxis()->SetLabelFont(43);
   c1lep5jex3bex_bjets_n_ttbarcc__393->GetXaxis()->SetLabelSize(21);
   c1lep5jex3bex_bjets_n_ttbarcc__393->GetXaxis()->SetTitleSize(21);
   c1lep5jex3bex_bjets_n_ttbarcc__393->GetXaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_bjets_n_ttbarcc__393->GetXaxis()->SetTitleFont(43);
   c1lep5jex3bex_bjets_n_ttbarcc__393->GetYaxis()->SetLabelFont(43);
   c1lep5jex3bex_bjets_n_ttbarcc__393->GetYaxis()->SetLabelSize(21);
   c1lep5jex3bex_bjets_n_ttbarcc__393->GetYaxis()->SetTitleSize(21);
   c1lep5jex3bex_bjets_n_ttbarcc__393->GetYaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_bjets_n_ttbarcc__393->GetYaxis()->SetTitleFont(43);
   c1lep5jex3bex_bjets_n_ttbarcc__393->GetZaxis()->SetLabelFont(43);
   c1lep5jex3bex_bjets_n_ttbarcc__393->GetZaxis()->SetLabelSize(21);
   c1lep5jex3bex_bjets_n_ttbarcc__393->GetZaxis()->SetTitleSize(21);
   c1lep5jex3bex_bjets_n_ttbarcc__393->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep5jex3bex_bjets_n_ttbarcc,"");
   Double_t xAxis438[4] = {1.5, 2.5, 3.5, 4.5}; 
   
   TH1D *c1lep5jex3bex_bjets_n_ttbarlight__394 = new TH1D("c1lep5jex3bex_bjets_n_ttbarlight__394","",3, xAxis438);
   c1lep5jex3bex_bjets_n_ttbarlight__394->SetBinContent(1,1e-06);
   c1lep5jex3bex_bjets_n_ttbarlight__394->SetBinContent(2,3186.725);
   c1lep5jex3bex_bjets_n_ttbarlight__394->SetBinContent(3,1e-06);
   c1lep5jex3bex_bjets_n_ttbarlight__394->SetBinError(1,42.04621);
   c1lep5jex3bex_bjets_n_ttbarlight__394->SetBinError(2,42.04621);
   c1lep5jex3bex_bjets_n_ttbarlight__394->SetBinError(3,42.04621);
   c1lep5jex3bex_bjets_n_ttbarlight__394->SetEntries(9134);
   c1lep5jex3bex_bjets_n_ttbarlight__394->SetDirectory(0);
   c1lep5jex3bex_bjets_n_ttbarlight__394->SetStats(0);
   c1lep5jex3bex_bjets_n_ttbarlight__394->SetMarkerStyle(20);
   c1lep5jex3bex_bjets_n_ttbarlight__394->SetMarkerSize(1.2);
   c1lep5jex3bex_bjets_n_ttbarlight__394->GetXaxis()->SetTitle("Number of b-jets");
   c1lep5jex3bex_bjets_n_ttbarlight__394->GetXaxis()->SetRange(1,9);
   c1lep5jex3bex_bjets_n_ttbarlight__394->GetXaxis()->SetLabelFont(43);
   c1lep5jex3bex_bjets_n_ttbarlight__394->GetXaxis()->SetLabelSize(21);
   c1lep5jex3bex_bjets_n_ttbarlight__394->GetXaxis()->SetTitleSize(21);
   c1lep5jex3bex_bjets_n_ttbarlight__394->GetXaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_bjets_n_ttbarlight__394->GetXaxis()->SetTitleFont(43);
   c1lep5jex3bex_bjets_n_ttbarlight__394->GetYaxis()->SetLabelFont(43);
   c1lep5jex3bex_bjets_n_ttbarlight__394->GetYaxis()->SetLabelSize(21);
   c1lep5jex3bex_bjets_n_ttbarlight__394->GetYaxis()->SetTitleSize(21);
   c1lep5jex3bex_bjets_n_ttbarlight__394->GetYaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_bjets_n_ttbarlight__394->GetYaxis()->SetTitleFont(43);
   c1lep5jex3bex_bjets_n_ttbarlight__394->GetZaxis()->SetLabelFont(43);
   c1lep5jex3bex_bjets_n_ttbarlight__394->GetZaxis()->SetLabelSize(21);
   c1lep5jex3bex_bjets_n_ttbarlight__394->GetZaxis()->SetTitleSize(21);
   c1lep5jex3bex_bjets_n_ttbarlight__394->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep5jex3bex_bjets_n_ttbarlight,"");
   Double_t xAxis439[4] = {1.5, 2.5, 3.5, 4.5}; 
   
   TH1D *c1lep5jex3bex_bjets_n_uHcW__395 = new TH1D("c1lep5jex3bex_bjets_n_uHcW__395","",3, xAxis439);
   c1lep5jex3bex_bjets_n_uHcW__395->SetBinContent(2,505.9014);
   c1lep5jex3bex_bjets_n_uHcW__395->SetBinError(2,15.56824);
   c1lep5jex3bex_bjets_n_uHcW__395->SetEntries(5357);
   c1lep5jex3bex_bjets_n_uHcW__395->SetDirectory(0);
   c1lep5jex3bex_bjets_n_uHcW__395->SetStats(0);
   c1lep5jex3bex_bjets_n_uHcW__395->SetFillColor(2);
   c1lep5jex3bex_bjets_n_uHcW__395->SetLineColor(2);
   c1lep5jex3bex_bjets_n_uHcW__395->SetMarkerStyle(20);
   c1lep5jex3bex_bjets_n_uHcW__395->SetMarkerSize(1.2);
   c1lep5jex3bex_bjets_n_uHcW__395->GetXaxis()->SetTitle("Number of b-jets");
   c1lep5jex3bex_bjets_n_uHcW__395->GetXaxis()->SetRange(1,9);
   c1lep5jex3bex_bjets_n_uHcW__395->GetXaxis()->SetLabelFont(43);
   c1lep5jex3bex_bjets_n_uHcW__395->GetXaxis()->SetLabelSize(21);
   c1lep5jex3bex_bjets_n_uHcW__395->GetXaxis()->SetTitleSize(21);
   c1lep5jex3bex_bjets_n_uHcW__395->GetXaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_bjets_n_uHcW__395->GetXaxis()->SetTitleFont(43);
   c1lep5jex3bex_bjets_n_uHcW__395->GetYaxis()->SetLabelFont(43);
   c1lep5jex3bex_bjets_n_uHcW__395->GetYaxis()->SetLabelSize(21);
   c1lep5jex3bex_bjets_n_uHcW__395->GetYaxis()->SetTitleSize(21);
   c1lep5jex3bex_bjets_n_uHcW__395->GetYaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_bjets_n_uHcW__395->GetYaxis()->SetTitleFont(43);
   c1lep5jex3bex_bjets_n_uHcW__395->GetZaxis()->SetLabelFont(43);
   c1lep5jex3bex_bjets_n_uHcW__395->GetZaxis()->SetLabelSize(21);
   c1lep5jex3bex_bjets_n_uHcW__395->GetZaxis()->SetTitleSize(21);
   c1lep5jex3bex_bjets_n_uHcW__395->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep5jex3bex_bjets_n_uHcW,"");
   h_stack->Draw("hist same");
   
   Double_t g_totErr_fx3175[3] = {
   2,
   3,
   4};
   Double_t g_totErr_fy3175[3] = {
   1.599999e-05,
   10135.98,
   1.599999e-05};
   Double_t g_totErr_felx3175[3] = {
   0.5,
   0.5,
   0.5};
   Double_t g_totErr_fely3175[3] = {
   67.04105,
   1883.331,
   67.04105};
   Double_t g_totErr_fehx3175[3] = {
   0.5,
   0.5,
   0.5};
   Double_t g_totErr_fehy3175[3] = {
   67.04105,
   1883.331,
   67.04105};
   grae = new TGraphAsymmErrors(3,g_totErr_fx3175,g_totErr_fy3175,g_totErr_felx3175,g_totErr_fehx3175,g_totErr_fely3175,g_totErr_fehy3175);
   grae->SetName("g_totErr");
   grae->SetTitle("");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(3354);
   grae->SetLineColor(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0);
   
   TH1F *Graph_g_totErr3175 = new TH1F("Graph_g_totErr3175","",100,1.2,4.8);
   Graph_g_totErr3175->SetMinimum(-1275.676);
   Graph_g_totErr3175->SetMaximum(13227.94);
   Graph_g_totErr3175->SetDirectory(0);
   Graph_g_totErr3175->SetStats(0);
   Graph_g_totErr3175->SetLineWidth(2);
   Graph_g_totErr3175->SetMarkerStyle(20);
   Graph_g_totErr3175->SetMarkerSize(1.2);
   Graph_g_totErr3175->GetXaxis()->SetLabelFont(43);
   Graph_g_totErr3175->GetXaxis()->SetLabelSize(21);
   Graph_g_totErr3175->GetXaxis()->SetTitleSize(21);
   Graph_g_totErr3175->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_totErr3175->GetXaxis()->SetTitleFont(43);
   Graph_g_totErr3175->GetYaxis()->SetLabelFont(43);
   Graph_g_totErr3175->GetYaxis()->SetLabelSize(21);
   Graph_g_totErr3175->GetYaxis()->SetTitleSize(21);
   Graph_g_totErr3175->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_totErr3175->GetYaxis()->SetTitleFont(43);
   Graph_g_totErr3175->GetZaxis()->SetLabelFont(43);
   Graph_g_totErr3175->GetZaxis()->SetLabelSize(21);
   Graph_g_totErr3175->GetZaxis()->SetTitleSize(21);
   Graph_g_totErr3175->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_totErr3175);
   
   grae->Draw("e2");
   
   Double_t Graph_from_c1lep5jex3bex_bjets_n_Data_fx3176[3] = {
   2,
   3,
   4};
   Double_t Graph_from_c1lep5jex3bex_bjets_n_Data_fy3176[3] = {
   0,
   11707,
   0};
   Double_t Graph_from_c1lep5jex3bex_bjets_n_Data_felx3176[3] = {
   0.499,
   0.499,
   0.499};
   Double_t Graph_from_c1lep5jex3bex_bjets_n_Data_fely3176[3] = {
   0,
   108.1989,
   0};
   Double_t Graph_from_c1lep5jex3bex_bjets_n_Data_fehx3176[3] = {
   0.5,
   0.5,
   0.5};
   Double_t Graph_from_c1lep5jex3bex_bjets_n_Data_fehy3176[3] = {
   0,
   108.1989,
   0};
   grae = new TGraphAsymmErrors(3,Graph_from_c1lep5jex3bex_bjets_n_Data_fx3176,Graph_from_c1lep5jex3bex_bjets_n_Data_fy3176,Graph_from_c1lep5jex3bex_bjets_n_Data_felx3176,Graph_from_c1lep5jex3bex_bjets_n_Data_fehx3176,Graph_from_c1lep5jex3bex_bjets_n_Data_fely3176,Graph_from_c1lep5jex3bex_bjets_n_Data_fehy3176);
   grae->SetName("Graph_from_c1lep5jex3bex_bjets_n_Data");
   grae->SetTitle("");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_c1lep5jex3bex_bjets_n_Data3176 = new TH1F("Graph_Graph_from_c1lep5jex3bex_bjets_n_Data3176","",100,1.2011,4.7999);
   Graph_Graph_from_c1lep5jex3bex_bjets_n_Data3176->SetMinimum(0);
   Graph_Graph_from_c1lep5jex3bex_bjets_n_Data3176->SetMaximum(12996.72);
   Graph_Graph_from_c1lep5jex3bex_bjets_n_Data3176->SetDirectory(0);
   Graph_Graph_from_c1lep5jex3bex_bjets_n_Data3176->SetStats(0);
   Graph_Graph_from_c1lep5jex3bex_bjets_n_Data3176->SetLineWidth(2);
   Graph_Graph_from_c1lep5jex3bex_bjets_n_Data3176->SetMarkerStyle(20);
   Graph_Graph_from_c1lep5jex3bex_bjets_n_Data3176->SetMarkerSize(1.2);
   Graph_Graph_from_c1lep5jex3bex_bjets_n_Data3176->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep5jex3bex_bjets_n_Data3176->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep5jex3bex_bjets_n_Data3176->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep5jex3bex_bjets_n_Data3176->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep5jex3bex_bjets_n_Data3176->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep5jex3bex_bjets_n_Data3176->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep5jex3bex_bjets_n_Data3176->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep5jex3bex_bjets_n_Data3176->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep5jex3bex_bjets_n_Data3176->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep5jex3bex_bjets_n_Data3176->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep5jex3bex_bjets_n_Data3176->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep5jex3bex_bjets_n_Data3176->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep5jex3bex_bjets_n_Data3176->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep5jex3bex_bjets_n_Data3176->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_c1lep5jex3bex_bjets_n_Data3176);
   
   grae->Draw("ep1 ");
   Double_t xAxis440[4] = {1.5, 2.5, 3.5, 4.5}; 
   
   TH1D *h_dummy_copy__396 = new TH1D("h_dummy_copy__396","",3, xAxis440);
   h_dummy_copy__396->SetEntries(1363526);
   h_dummy_copy__396->SetDirectory(0);
   h_dummy_copy__396->SetStats(0);
   h_dummy_copy__396->SetMarkerStyle(20);
   h_dummy_copy__396->SetMarkerSize(1.2);
   h_dummy_copy__396->GetXaxis()->SetTitle("N_{b}");
   h_dummy_copy__396->GetXaxis()->SetRange(1,9);
   h_dummy_copy__396->GetXaxis()->SetLabelFont(43);
   h_dummy_copy__396->GetXaxis()->SetLabelSize(21);
   h_dummy_copy__396->GetXaxis()->SetTitleSize(21);
   h_dummy_copy__396->GetXaxis()->SetTitleOffset(1.4);
   h_dummy_copy__396->GetXaxis()->SetTitleFont(43);
   h_dummy_copy__396->GetYaxis()->SetTitle("Events");
   h_dummy_copy__396->GetYaxis()->SetLabelFont(43);
   h_dummy_copy__396->GetYaxis()->SetLabelSize(16.8);
   h_dummy_copy__396->GetYaxis()->SetTitleSize(21);
   h_dummy_copy__396->GetYaxis()->SetTitleOffset(2.4);
   h_dummy_copy__396->GetYaxis()->SetTitleFont(43);
   h_dummy_copy__396->GetZaxis()->SetLabelFont(43);
   h_dummy_copy__396->GetZaxis()->SetLabelSize(21);
   h_dummy_copy__396->GetZaxis()->SetTitleSize(21);
   h_dummy_copy__396->GetZaxis()->SetTitleFont(43);
   h_dummy_copy__396->Draw("sameaxis");
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
      tex = new TLatex(0.18,0.73,"5jex-3bex");
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
   TLegendEntry *entry=leg->AddEntry("c1lep5jex3bex_bjets_n_Data","Data","lep");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep5jex3bex_bjets_n_uHcW","t#rightarrow Hc","f");
   entry->SetFillColor(2);
   entry->SetFillStyle(1001);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep5jex3bex_bjets_n_ttbarlight","t#bar{t}+light","f");
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep5jex3bex_bjets_n_ttbarcc","t#bar{t}+cc","f");

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
   entry=leg->AddEntry("c1lep5jex3bex_bjets_n_ttbarbb","t#bar{t}+bb","f");

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
   entry=leg->AddEntry("c1lep5jex3bex_bjets_n_topEW","Non-t#bar{t}","f");

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
   c_c1lep5jex3bex_bjets_n->cd();
   c_c1lep5jex3bex_bjets_n->Modified();
   c_c1lep5jex3bex_bjets_n->cd();
   c_c1lep5jex3bex_bjets_n->SetSelected(c_c1lep5jex3bex_bjets_n);
}
