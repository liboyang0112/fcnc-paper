void c1lep5jex3bex_jets_n()
{
//=========Macro generated from canvas: c_c1lep5jex3bex_jets_n/c_c1lep5jex3bex_jets_n
//=========  (Thu Jul 19 16:48:43 2018) by ROOT version6.04/14
   TCanvas *c_c1lep5jex3bex_jets_n = new TCanvas("c_c1lep5jex3bex_jets_n", "c_c1lep5jex3bex_jets_n",0,0,600,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c_c1lep5jex3bex_jets_n->SetHighLightColor(2);
   c_c1lep5jex3bex_jets_n->Range(0,0,1,1);
   c_c1lep5jex3bex_jets_n->SetFillColor(0);
   c_c1lep5jex3bex_jets_n->SetBorderMode(0);
   c_c1lep5jex3bex_jets_n->SetBorderSize(2);
   c_c1lep5jex3bex_jets_n->SetTickx(1);
   c_c1lep5jex3bex_jets_n->SetTicky(1);
   c_c1lep5jex3bex_jets_n->SetLeftMargin(0.16);
   c_c1lep5jex3bex_jets_n->SetRightMargin(0.05);
   c_c1lep5jex3bex_jets_n->SetTopMargin(0.05);
   c_c1lep5jex3bex_jets_n->SetBottomMargin(0.16);
   c_c1lep5jex3bex_jets_n->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0,1,0.28);
   pad1->Draw();
   pad1->cd();
   pad1->Range(2.808642,-0.0873016,7.746914,1.5);
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
   Double_t xAxis391[5] = {3.5, 4.5, 5.5, 6.5, 7.5}; 
   
   TH1D *h_dummy2__352 = new TH1D("h_dummy2__352","Data/MC",4, xAxis391);
   h_dummy2__352->SetMinimum(0.5);
   h_dummy2__352->SetMaximum(1.5);
   h_dummy2__352->SetEntries(1363548);
   h_dummy2__352->SetDirectory(0);
   h_dummy2__352->SetStats(0);
   h_dummy2__352->SetMarkerStyle(20);
   h_dummy2__352->SetMarkerSize(1.2);
   h_dummy2__352->GetXaxis()->SetTitle("N_{j}");
   h_dummy2__352->GetXaxis()->SetRange(1,18);
   h_dummy2__352->GetXaxis()->SetLabelFont(43);
   h_dummy2__352->GetXaxis()->SetLabelOffset(0.025);
   h_dummy2__352->GetXaxis()->SetLabelSize(16.8);
   h_dummy2__352->GetXaxis()->SetTitleSize(21);
   h_dummy2__352->GetXaxis()->SetTitleOffset(5.05);
   h_dummy2__352->GetXaxis()->SetTitleFont(43);
   h_dummy2__352->GetYaxis()->SetTitle("Data / Bkg");
   h_dummy2__352->GetYaxis()->SetNdivisions(-504);
   h_dummy2__352->GetYaxis()->SetLabelFont(43);
   h_dummy2__352->GetYaxis()->SetLabelOffset(0.02);
   h_dummy2__352->GetYaxis()->SetLabelSize(16.8);
   h_dummy2__352->GetYaxis()->SetTitleSize(21);
   h_dummy2__352->GetYaxis()->SetTitleOffset(2.4);
   h_dummy2__352->GetYaxis()->SetTitleFont(43);
   h_dummy2__352->GetZaxis()->SetLabelFont(43);
   h_dummy2__352->GetZaxis()->SetLabelSize(21);
   h_dummy2__352->GetZaxis()->SetTitleSize(21);
   h_dummy2__352->GetZaxis()->SetTitleFont(43);
   h_dummy2__352->Draw("HIST");
   
   Double_t Graph_from_h_ratio_fx3157[4] = {
   4,
   5,
   6,
   7};
   Double_t Graph_from_h_ratio_fy3157[4] = {
   0,
   1.154995,
   0,
   0};
   Double_t Graph_from_h_ratio_felx3157[4] = {
   0.499,
   0.499,
   0.499,
   0.499};
   Double_t Graph_from_h_ratio_fely3157[4] = {
   0,
   0.01067474,
   0,
   0};
   Double_t Graph_from_h_ratio_fehx3157[4] = {
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t Graph_from_h_ratio_fehy3157[4] = {
   0,
   0.01067474,
   0,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(4,Graph_from_h_ratio_fx3157,Graph_from_h_ratio_fy3157,Graph_from_h_ratio_felx3157,Graph_from_h_ratio_fehx3157,Graph_from_h_ratio_fely3157,Graph_from_h_ratio_fehy3157);
   grae->SetName("Graph_from_h_ratio");
   grae->SetTitle("");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(24);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_h_ratio3157 = new TH1F("Graph_Graph_from_h_ratio3157","",100,3.1011,7.8999);
   Graph_Graph_from_h_ratio3157->SetMinimum(0);
   Graph_Graph_from_h_ratio3157->SetMaximum(1.282236);
   Graph_Graph_from_h_ratio3157->SetDirectory(0);
   Graph_Graph_from_h_ratio3157->SetStats(0);
   Graph_Graph_from_h_ratio3157->SetLineWidth(2);
   Graph_Graph_from_h_ratio3157->SetMarkerStyle(20);
   Graph_Graph_from_h_ratio3157->SetMarkerSize(1.2);
   Graph_Graph_from_h_ratio3157->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3157->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3157->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3157->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3157->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3157->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3157->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3157->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3157->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3157->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3157->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3157->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3157->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3157->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_h_ratio3157);
   
   grae->Draw("pe0");
   TLine *line = new TLine(3.5,1,7.5,1);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t g_ratio2_fx3158[4] = {
   4,
   5,
   6,
   7};
   Double_t g_ratio2_fy3158[4] = {
   1,
   1,
   1,
   1};
   Double_t g_ratio2_felx3158[4] = {
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t g_ratio2_fely3158[4] = {
   4190068,
   0.1859517,
   4190068,
   4190068};
   Double_t g_ratio2_fehx3158[4] = {
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t g_ratio2_fehy3158[4] = {
   4190068,
   0.1859517,
   4190068,
   4190068};
   grae = new TGraphAsymmErrors(4,g_ratio2_fx3158,g_ratio2_fy3158,g_ratio2_felx3158,g_ratio2_fehx3158,g_ratio2_fely3158,g_ratio2_fehy3158);
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
   
   TH1F *Graph_g_ratio23158 = new TH1F("Graph_g_ratio23158","",100,3.1,7.9);
   Graph_g_ratio23158->SetMinimum(-5028080);
   Graph_g_ratio23158->SetMaximum(5028082);
   Graph_g_ratio23158->SetDirectory(0);
   Graph_g_ratio23158->SetStats(0);
   Graph_g_ratio23158->SetLineWidth(2);
   Graph_g_ratio23158->SetMarkerStyle(20);
   Graph_g_ratio23158->SetMarkerSize(1.2);
   Graph_g_ratio23158->GetXaxis()->SetLabelFont(43);
   Graph_g_ratio23158->GetXaxis()->SetLabelSize(21);
   Graph_g_ratio23158->GetXaxis()->SetTitleSize(21);
   Graph_g_ratio23158->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23158->GetXaxis()->SetTitleFont(43);
   Graph_g_ratio23158->GetYaxis()->SetLabelFont(43);
   Graph_g_ratio23158->GetYaxis()->SetLabelSize(21);
   Graph_g_ratio23158->GetYaxis()->SetTitleSize(21);
   Graph_g_ratio23158->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23158->GetYaxis()->SetTitleFont(43);
   Graph_g_ratio23158->GetZaxis()->SetLabelFont(43);
   Graph_g_ratio23158->GetZaxis()->SetLabelSize(21);
   Graph_g_ratio23158->GetZaxis()->SetTitleSize(21);
   Graph_g_ratio23158->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_ratio23158);
   
   grae->Draw("e2");
   Double_t xAxis392[5] = {3.5, 4.5, 5.5, 6.5, 7.5}; 
   
   TH1D *h_dummy2_copy__353 = new TH1D("h_dummy2_copy__353","Data/MC",4, xAxis392);
   h_dummy2_copy__353->SetMinimum(0.5);
   h_dummy2_copy__353->SetMaximum(1.5);
   h_dummy2_copy__353->SetEntries(1363548);
   h_dummy2_copy__353->SetDirectory(0);
   h_dummy2_copy__353->SetStats(0);
   h_dummy2_copy__353->SetMarkerStyle(20);
   h_dummy2_copy__353->SetMarkerSize(1.2);
   h_dummy2_copy__353->GetXaxis()->SetTitle("N_{j}");
   h_dummy2_copy__353->GetXaxis()->SetRange(1,18);
   h_dummy2_copy__353->GetXaxis()->SetLabelFont(43);
   h_dummy2_copy__353->GetXaxis()->SetLabelOffset(0.025);
   h_dummy2_copy__353->GetXaxis()->SetLabelSize(16.8);
   h_dummy2_copy__353->GetXaxis()->SetTitleSize(21);
   h_dummy2_copy__353->GetXaxis()->SetTitleOffset(5.05);
   h_dummy2_copy__353->GetXaxis()->SetTitleFont(43);
   h_dummy2_copy__353->GetYaxis()->SetTitle("Data / Bkg");
   h_dummy2_copy__353->GetYaxis()->SetNdivisions(-504);
   h_dummy2_copy__353->GetYaxis()->SetLabelFont(43);
   h_dummy2_copy__353->GetYaxis()->SetLabelOffset(0.02);
   h_dummy2_copy__353->GetYaxis()->SetLabelSize(16.8);
   h_dummy2_copy__353->GetYaxis()->SetTitleSize(21);
   h_dummy2_copy__353->GetYaxis()->SetTitleOffset(2.4);
   h_dummy2_copy__353->GetYaxis()->SetTitleFont(43);
   h_dummy2_copy__353->GetZaxis()->SetLabelFont(43);
   h_dummy2_copy__353->GetZaxis()->SetLabelSize(21);
   h_dummy2_copy__353->GetZaxis()->SetTitleSize(21);
   h_dummy2_copy__353->GetZaxis()->SetTitleFont(43);
   h_dummy2_copy__353->Draw("sameaxis");
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
   c_c1lep5jex3bex_jets_n->cd();
  
// ------------>Primitives in pad: pad0
   TPad *pad0 = new TPad("pad0", "pad0",0,0.2,1,1);
   pad0->Draw();
   pad0->cd();
   pad0->Range(2.808642,-2502.042,7.746914,22518.38);
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
   Double_t xAxis393[5] = {3.5, 4.5, 5.5, 6.5, 7.5}; 
   
   TH1D *h_dummy__354 = new TH1D("h_dummy__354","",4, xAxis393);
   h_dummy__354->SetMinimum(0);
   h_dummy__354->SetMaximum(21267.36);
   h_dummy__354->SetEntries(1363548);
   h_dummy__354->SetDirectory(0);
   h_dummy__354->SetStats(0);
   h_dummy__354->SetMarkerStyle(20);
   h_dummy__354->SetMarkerSize(1.2);
   h_dummy__354->GetXaxis()->SetRange(1,18);
   h_dummy__354->GetXaxis()->SetLabelFont(43);
   h_dummy__354->GetXaxis()->SetLabelSize(0);
   h_dummy__354->GetXaxis()->SetTitleSize(21);
   h_dummy__354->GetXaxis()->SetTitleOffset(1.4);
   h_dummy__354->GetXaxis()->SetTitleFont(43);
   h_dummy__354->GetYaxis()->SetTitle("Events");
   h_dummy__354->GetYaxis()->SetLabelFont(43);
   h_dummy__354->GetYaxis()->SetLabelSize(16.8);
   h_dummy__354->GetYaxis()->SetTitleSize(21);
   h_dummy__354->GetYaxis()->SetTitleOffset(2.4);
   h_dummy__354->GetYaxis()->SetTitleFont(43);
   h_dummy__354->GetZaxis()->SetLabelFont(43);
   h_dummy__354->GetZaxis()->SetLabelSize(21);
   h_dummy__354->GetZaxis()->SetTitleSize(21);
   h_dummy__354->GetZaxis()->SetTitleFont(43);
   h_dummy__354->Draw("HIST");
   
   THStack *h_stack = new THStack();
   h_stack->SetName("h_stack");
   h_stack->SetTitle("h_stack");
   Double_t xAxis394[5] = {3.5, 4.5, 5.5, 6.5, 7.5}; 
   
   TH1F *h_stack_stack_40 = new TH1F("h_stack_stack_40","h_stack",4, xAxis394);
   h_stack_stack_40->SetMinimum(-42.04621);
   h_stack_stack_40->SetMaximum(11173.97);
   h_stack_stack_40->SetDirectory(0);
   h_stack_stack_40->SetStats(0);
   h_stack_stack_40->SetLineWidth(2);
   h_stack_stack_40->SetMarkerStyle(20);
   h_stack_stack_40->SetMarkerSize(1.2);
   h_stack_stack_40->GetXaxis()->SetLabelFont(43);
   h_stack_stack_40->GetXaxis()->SetLabelSize(21);
   h_stack_stack_40->GetXaxis()->SetTitleSize(21);
   h_stack_stack_40->GetXaxis()->SetTitleOffset(1.4);
   h_stack_stack_40->GetXaxis()->SetTitleFont(43);
   h_stack_stack_40->GetYaxis()->SetLabelFont(43);
   h_stack_stack_40->GetYaxis()->SetLabelSize(21);
   h_stack_stack_40->GetYaxis()->SetTitleSize(21);
   h_stack_stack_40->GetYaxis()->SetTitleOffset(1.4);
   h_stack_stack_40->GetYaxis()->SetTitleFont(43);
   h_stack_stack_40->GetZaxis()->SetLabelFont(43);
   h_stack_stack_40->GetZaxis()->SetLabelSize(21);
   h_stack_stack_40->GetZaxis()->SetTitleSize(21);
   h_stack_stack_40->GetZaxis()->SetTitleFont(43);
   h_stack->SetHistogram(h_stack_stack_40);
   
   Double_t xAxis395[5] = {3.5, 4.5, 5.5, 6.5, 7.5}; 
   
   TH1D *c1lep5jex3bex_jets_n_topEW__355 = new TH1D("c1lep5jex3bex_jets_n_topEW__355","",4, xAxis395);
   c1lep5jex3bex_jets_n_topEW__355->SetBinContent(1,1.299999e-05);
   c1lep5jex3bex_jets_n_topEW__355->SetBinContent(2,1306.218);
   c1lep5jex3bex_jets_n_topEW__355->SetBinContent(3,1.299999e-05);
   c1lep5jex3bex_jets_n_topEW__355->SetBinContent(4,1.299999e-05);
   c1lep5jex3bex_jets_n_topEW__355->SetBinError(1,17.79335);
   c1lep5jex3bex_jets_n_topEW__355->SetBinError(2,149.9485);
   c1lep5jex3bex_jets_n_topEW__355->SetBinError(3,17.79335);
   c1lep5jex3bex_jets_n_topEW__355->SetBinError(4,17.79335);
   c1lep5jex3bex_jets_n_topEW__355->SetEntries(1334929);
   c1lep5jex3bex_jets_n_topEW__355->SetDirectory(0);
   c1lep5jex3bex_jets_n_topEW__355->SetStats(0);

   ci = TColor::GetColor("#66cc66");
   c1lep5jex3bex_jets_n_topEW__355->SetFillColor(ci);
   c1lep5jex3bex_jets_n_topEW__355->SetMarkerStyle(20);
   c1lep5jex3bex_jets_n_topEW__355->SetMarkerSize(1.2);
   c1lep5jex3bex_jets_n_topEW__355->GetXaxis()->SetTitle("Number of jets");
   c1lep5jex3bex_jets_n_topEW__355->GetXaxis()->SetRange(1,18);
   c1lep5jex3bex_jets_n_topEW__355->GetXaxis()->SetLabelFont(43);
   c1lep5jex3bex_jets_n_topEW__355->GetXaxis()->SetLabelSize(21);
   c1lep5jex3bex_jets_n_topEW__355->GetXaxis()->SetTitleSize(21);
   c1lep5jex3bex_jets_n_topEW__355->GetXaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_jets_n_topEW__355->GetXaxis()->SetTitleFont(43);
   c1lep5jex3bex_jets_n_topEW__355->GetYaxis()->SetLabelFont(43);
   c1lep5jex3bex_jets_n_topEW__355->GetYaxis()->SetLabelSize(21);
   c1lep5jex3bex_jets_n_topEW__355->GetYaxis()->SetTitleSize(21);
   c1lep5jex3bex_jets_n_topEW__355->GetYaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_jets_n_topEW__355->GetYaxis()->SetTitleFont(43);
   c1lep5jex3bex_jets_n_topEW__355->GetZaxis()->SetLabelFont(43);
   c1lep5jex3bex_jets_n_topEW__355->GetZaxis()->SetLabelSize(21);
   c1lep5jex3bex_jets_n_topEW__355->GetZaxis()->SetTitleSize(21);
   c1lep5jex3bex_jets_n_topEW__355->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep5jex3bex_jets_n_topEW,"");
   Double_t xAxis396[5] = {3.5, 4.5, 5.5, 6.5, 7.5}; 
   
   TH1D *c1lep5jex3bex_jets_n_ttbarbb__356 = new TH1D("c1lep5jex3bex_jets_n_ttbarbb__356","",4, xAxis396);
   c1lep5jex3bex_jets_n_ttbarbb__356->SetBinContent(1,1e-06);
   c1lep5jex3bex_jets_n_ttbarbb__356->SetBinContent(2,4322.206);
   c1lep5jex3bex_jets_n_ttbarbb__356->SetBinContent(3,1e-06);
   c1lep5jex3bex_jets_n_ttbarbb__356->SetBinContent(4,1e-06);
   c1lep5jex3bex_jets_n_ttbarbb__356->SetBinError(1,41.87677);
   c1lep5jex3bex_jets_n_ttbarbb__356->SetBinError(2,41.87677);
   c1lep5jex3bex_jets_n_ttbarbb__356->SetBinError(3,41.87677);
   c1lep5jex3bex_jets_n_ttbarbb__356->SetBinError(4,41.87677);
   c1lep5jex3bex_jets_n_ttbarbb__356->SetEntries(15471);
   c1lep5jex3bex_jets_n_ttbarbb__356->SetDirectory(0);
   c1lep5jex3bex_jets_n_ttbarbb__356->SetStats(0);

   ci = TColor::GetColor("#6666cc");
   c1lep5jex3bex_jets_n_ttbarbb__356->SetFillColor(ci);
   c1lep5jex3bex_jets_n_ttbarbb__356->SetMarkerStyle(20);
   c1lep5jex3bex_jets_n_ttbarbb__356->SetMarkerSize(1.2);
   c1lep5jex3bex_jets_n_ttbarbb__356->GetXaxis()->SetTitle("Number of jets");
   c1lep5jex3bex_jets_n_ttbarbb__356->GetXaxis()->SetRange(1,18);
   c1lep5jex3bex_jets_n_ttbarbb__356->GetXaxis()->SetLabelFont(43);
   c1lep5jex3bex_jets_n_ttbarbb__356->GetXaxis()->SetLabelSize(21);
   c1lep5jex3bex_jets_n_ttbarbb__356->GetXaxis()->SetTitleSize(21);
   c1lep5jex3bex_jets_n_ttbarbb__356->GetXaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_jets_n_ttbarbb__356->GetXaxis()->SetTitleFont(43);
   c1lep5jex3bex_jets_n_ttbarbb__356->GetYaxis()->SetLabelFont(43);
   c1lep5jex3bex_jets_n_ttbarbb__356->GetYaxis()->SetLabelSize(21);
   c1lep5jex3bex_jets_n_ttbarbb__356->GetYaxis()->SetTitleSize(21);
   c1lep5jex3bex_jets_n_ttbarbb__356->GetYaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_jets_n_ttbarbb__356->GetYaxis()->SetTitleFont(43);
   c1lep5jex3bex_jets_n_ttbarbb__356->GetZaxis()->SetLabelFont(43);
   c1lep5jex3bex_jets_n_ttbarbb__356->GetZaxis()->SetLabelSize(21);
   c1lep5jex3bex_jets_n_ttbarbb__356->GetZaxis()->SetTitleSize(21);
   c1lep5jex3bex_jets_n_ttbarbb__356->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep5jex3bex_jets_n_ttbarbb,"");
   Double_t xAxis397[5] = {3.5, 4.5, 5.5, 6.5, 7.5}; 
   
   TH1D *c1lep5jex3bex_jets_n_ttbarcc__357 = new TH1D("c1lep5jex3bex_jets_n_ttbarcc__357","",4, xAxis397);
   c1lep5jex3bex_jets_n_ttbarcc__357->SetBinContent(1,1e-06);
   c1lep5jex3bex_jets_n_ttbarcc__357->SetBinContent(2,1320.828);
   c1lep5jex3bex_jets_n_ttbarcc__357->SetBinContent(3,1e-06);
   c1lep5jex3bex_jets_n_ttbarcc__357->SetBinContent(4,1e-06);
   c1lep5jex3bex_jets_n_ttbarcc__357->SetBinError(1,25.61933);
   c1lep5jex3bex_jets_n_ttbarcc__357->SetBinError(2,25.61933);
   c1lep5jex3bex_jets_n_ttbarcc__357->SetBinError(3,25.61933);
   c1lep5jex3bex_jets_n_ttbarcc__357->SetBinError(4,25.61933);
   c1lep5jex3bex_jets_n_ttbarcc__357->SetEntries(4009);
   c1lep5jex3bex_jets_n_ttbarcc__357->SetDirectory(0);
   c1lep5jex3bex_jets_n_ttbarcc__357->SetStats(0);

   ci = TColor::GetColor("#ccccff");
   c1lep5jex3bex_jets_n_ttbarcc__357->SetFillColor(ci);
   c1lep5jex3bex_jets_n_ttbarcc__357->SetMarkerStyle(20);
   c1lep5jex3bex_jets_n_ttbarcc__357->SetMarkerSize(1.2);
   c1lep5jex3bex_jets_n_ttbarcc__357->GetXaxis()->SetTitle("Number of jets");
   c1lep5jex3bex_jets_n_ttbarcc__357->GetXaxis()->SetRange(1,18);
   c1lep5jex3bex_jets_n_ttbarcc__357->GetXaxis()->SetLabelFont(43);
   c1lep5jex3bex_jets_n_ttbarcc__357->GetXaxis()->SetLabelSize(21);
   c1lep5jex3bex_jets_n_ttbarcc__357->GetXaxis()->SetTitleSize(21);
   c1lep5jex3bex_jets_n_ttbarcc__357->GetXaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_jets_n_ttbarcc__357->GetXaxis()->SetTitleFont(43);
   c1lep5jex3bex_jets_n_ttbarcc__357->GetYaxis()->SetLabelFont(43);
   c1lep5jex3bex_jets_n_ttbarcc__357->GetYaxis()->SetLabelSize(21);
   c1lep5jex3bex_jets_n_ttbarcc__357->GetYaxis()->SetTitleSize(21);
   c1lep5jex3bex_jets_n_ttbarcc__357->GetYaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_jets_n_ttbarcc__357->GetYaxis()->SetTitleFont(43);
   c1lep5jex3bex_jets_n_ttbarcc__357->GetZaxis()->SetLabelFont(43);
   c1lep5jex3bex_jets_n_ttbarcc__357->GetZaxis()->SetLabelSize(21);
   c1lep5jex3bex_jets_n_ttbarcc__357->GetZaxis()->SetTitleSize(21);
   c1lep5jex3bex_jets_n_ttbarcc__357->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep5jex3bex_jets_n_ttbarcc,"");
   Double_t xAxis398[5] = {3.5, 4.5, 5.5, 6.5, 7.5}; 
   
   TH1D *c1lep5jex3bex_jets_n_ttbarlight__358 = new TH1D("c1lep5jex3bex_jets_n_ttbarlight__358","",4, xAxis398);
   c1lep5jex3bex_jets_n_ttbarlight__358->SetBinContent(1,1e-06);
   c1lep5jex3bex_jets_n_ttbarlight__358->SetBinContent(2,3186.725);
   c1lep5jex3bex_jets_n_ttbarlight__358->SetBinContent(3,1e-06);
   c1lep5jex3bex_jets_n_ttbarlight__358->SetBinContent(4,1e-06);
   c1lep5jex3bex_jets_n_ttbarlight__358->SetBinError(1,42.04621);
   c1lep5jex3bex_jets_n_ttbarlight__358->SetBinError(2,42.04621);
   c1lep5jex3bex_jets_n_ttbarlight__358->SetBinError(3,42.04621);
   c1lep5jex3bex_jets_n_ttbarlight__358->SetBinError(4,42.04621);
   c1lep5jex3bex_jets_n_ttbarlight__358->SetEntries(9135);
   c1lep5jex3bex_jets_n_ttbarlight__358->SetDirectory(0);
   c1lep5jex3bex_jets_n_ttbarlight__358->SetStats(0);
   c1lep5jex3bex_jets_n_ttbarlight__358->SetMarkerStyle(20);
   c1lep5jex3bex_jets_n_ttbarlight__358->SetMarkerSize(1.2);
   c1lep5jex3bex_jets_n_ttbarlight__358->GetXaxis()->SetTitle("Number of jets");
   c1lep5jex3bex_jets_n_ttbarlight__358->GetXaxis()->SetRange(1,18);
   c1lep5jex3bex_jets_n_ttbarlight__358->GetXaxis()->SetLabelFont(43);
   c1lep5jex3bex_jets_n_ttbarlight__358->GetXaxis()->SetLabelSize(21);
   c1lep5jex3bex_jets_n_ttbarlight__358->GetXaxis()->SetTitleSize(21);
   c1lep5jex3bex_jets_n_ttbarlight__358->GetXaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_jets_n_ttbarlight__358->GetXaxis()->SetTitleFont(43);
   c1lep5jex3bex_jets_n_ttbarlight__358->GetYaxis()->SetLabelFont(43);
   c1lep5jex3bex_jets_n_ttbarlight__358->GetYaxis()->SetLabelSize(21);
   c1lep5jex3bex_jets_n_ttbarlight__358->GetYaxis()->SetTitleSize(21);
   c1lep5jex3bex_jets_n_ttbarlight__358->GetYaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_jets_n_ttbarlight__358->GetYaxis()->SetTitleFont(43);
   c1lep5jex3bex_jets_n_ttbarlight__358->GetZaxis()->SetLabelFont(43);
   c1lep5jex3bex_jets_n_ttbarlight__358->GetZaxis()->SetLabelSize(21);
   c1lep5jex3bex_jets_n_ttbarlight__358->GetZaxis()->SetTitleSize(21);
   c1lep5jex3bex_jets_n_ttbarlight__358->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep5jex3bex_jets_n_ttbarlight,"");
   Double_t xAxis399[5] = {3.5, 4.5, 5.5, 6.5, 7.5}; 
   
   TH1D *c1lep5jex3bex_jets_n_uHcW__359 = new TH1D("c1lep5jex3bex_jets_n_uHcW__359","",4, xAxis399);
   c1lep5jex3bex_jets_n_uHcW__359->SetBinContent(2,505.9014);
   c1lep5jex3bex_jets_n_uHcW__359->SetBinError(2,15.56824);
   c1lep5jex3bex_jets_n_uHcW__359->SetEntries(5357);
   c1lep5jex3bex_jets_n_uHcW__359->SetDirectory(0);
   c1lep5jex3bex_jets_n_uHcW__359->SetStats(0);
   c1lep5jex3bex_jets_n_uHcW__359->SetFillColor(2);
   c1lep5jex3bex_jets_n_uHcW__359->SetLineColor(2);
   c1lep5jex3bex_jets_n_uHcW__359->SetMarkerStyle(20);
   c1lep5jex3bex_jets_n_uHcW__359->SetMarkerSize(1.2);
   c1lep5jex3bex_jets_n_uHcW__359->GetXaxis()->SetTitle("Number of jets");
   c1lep5jex3bex_jets_n_uHcW__359->GetXaxis()->SetRange(1,18);
   c1lep5jex3bex_jets_n_uHcW__359->GetXaxis()->SetLabelFont(43);
   c1lep5jex3bex_jets_n_uHcW__359->GetXaxis()->SetLabelSize(21);
   c1lep5jex3bex_jets_n_uHcW__359->GetXaxis()->SetTitleSize(21);
   c1lep5jex3bex_jets_n_uHcW__359->GetXaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_jets_n_uHcW__359->GetXaxis()->SetTitleFont(43);
   c1lep5jex3bex_jets_n_uHcW__359->GetYaxis()->SetLabelFont(43);
   c1lep5jex3bex_jets_n_uHcW__359->GetYaxis()->SetLabelSize(21);
   c1lep5jex3bex_jets_n_uHcW__359->GetYaxis()->SetTitleSize(21);
   c1lep5jex3bex_jets_n_uHcW__359->GetYaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_jets_n_uHcW__359->GetYaxis()->SetTitleFont(43);
   c1lep5jex3bex_jets_n_uHcW__359->GetZaxis()->SetLabelFont(43);
   c1lep5jex3bex_jets_n_uHcW__359->GetZaxis()->SetLabelSize(21);
   c1lep5jex3bex_jets_n_uHcW__359->GetZaxis()->SetTitleSize(21);
   c1lep5jex3bex_jets_n_uHcW__359->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep5jex3bex_jets_n_uHcW,"");
   h_stack->Draw("hist same");
   
   Double_t g_totErr_fx3159[4] = {
   4,
   5,
   6,
   7};
   Double_t g_totErr_fy3159[4] = {
   1.599999e-05,
   10135.98,
   1.599999e-05,
   1.599999e-05};
   Double_t g_totErr_felx3159[4] = {
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t g_totErr_fely3159[4] = {
   67.04105,
   1884.802,
   67.04105,
   67.04105};
   Double_t g_totErr_fehx3159[4] = {
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t g_totErr_fehy3159[4] = {
   67.04105,
   1884.802,
   67.04105,
   67.04105};
   grae = new TGraphAsymmErrors(4,g_totErr_fx3159,g_totErr_fy3159,g_totErr_felx3159,g_totErr_fehx3159,g_totErr_fely3159,g_totErr_fehy3159);
   grae->SetName("g_totErr");
   grae->SetTitle("");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(3354);
   grae->SetLineColor(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0);
   
   TH1F *Graph_g_totErr3159 = new TH1F("Graph_g_totErr3159","",100,3.1,7.9);
   Graph_g_totErr3159->SetMinimum(-1275.823);
   Graph_g_totErr3159->SetMaximum(13229.56);
   Graph_g_totErr3159->SetDirectory(0);
   Graph_g_totErr3159->SetStats(0);
   Graph_g_totErr3159->SetLineWidth(2);
   Graph_g_totErr3159->SetMarkerStyle(20);
   Graph_g_totErr3159->SetMarkerSize(1.2);
   Graph_g_totErr3159->GetXaxis()->SetLabelFont(43);
   Graph_g_totErr3159->GetXaxis()->SetLabelSize(21);
   Graph_g_totErr3159->GetXaxis()->SetTitleSize(21);
   Graph_g_totErr3159->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_totErr3159->GetXaxis()->SetTitleFont(43);
   Graph_g_totErr3159->GetYaxis()->SetLabelFont(43);
   Graph_g_totErr3159->GetYaxis()->SetLabelSize(21);
   Graph_g_totErr3159->GetYaxis()->SetTitleSize(21);
   Graph_g_totErr3159->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_totErr3159->GetYaxis()->SetTitleFont(43);
   Graph_g_totErr3159->GetZaxis()->SetLabelFont(43);
   Graph_g_totErr3159->GetZaxis()->SetLabelSize(21);
   Graph_g_totErr3159->GetZaxis()->SetTitleSize(21);
   Graph_g_totErr3159->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_totErr3159);
   
   grae->Draw("e2");
   
   Double_t Graph_from_c1lep5jex3bex_jets_n_Data_fx3160[4] = {
   4,
   5,
   6,
   7};
   Double_t Graph_from_c1lep5jex3bex_jets_n_Data_fy3160[4] = {
   0,
   11707,
   0,
   0};
   Double_t Graph_from_c1lep5jex3bex_jets_n_Data_felx3160[4] = {
   0.499,
   0.499,
   0.499,
   0.499};
   Double_t Graph_from_c1lep5jex3bex_jets_n_Data_fely3160[4] = {
   0,
   108.1989,
   0,
   0};
   Double_t Graph_from_c1lep5jex3bex_jets_n_Data_fehx3160[4] = {
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t Graph_from_c1lep5jex3bex_jets_n_Data_fehy3160[4] = {
   0,
   108.1989,
   0,
   0};
   grae = new TGraphAsymmErrors(4,Graph_from_c1lep5jex3bex_jets_n_Data_fx3160,Graph_from_c1lep5jex3bex_jets_n_Data_fy3160,Graph_from_c1lep5jex3bex_jets_n_Data_felx3160,Graph_from_c1lep5jex3bex_jets_n_Data_fehx3160,Graph_from_c1lep5jex3bex_jets_n_Data_fely3160,Graph_from_c1lep5jex3bex_jets_n_Data_fehy3160);
   grae->SetName("Graph_from_c1lep5jex3bex_jets_n_Data");
   grae->SetTitle("");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_c1lep5jex3bex_jets_n_Data3160 = new TH1F("Graph_Graph_from_c1lep5jex3bex_jets_n_Data3160","",100,3.1011,7.8999);
   Graph_Graph_from_c1lep5jex3bex_jets_n_Data3160->SetMinimum(0);
   Graph_Graph_from_c1lep5jex3bex_jets_n_Data3160->SetMaximum(12996.72);
   Graph_Graph_from_c1lep5jex3bex_jets_n_Data3160->SetDirectory(0);
   Graph_Graph_from_c1lep5jex3bex_jets_n_Data3160->SetStats(0);
   Graph_Graph_from_c1lep5jex3bex_jets_n_Data3160->SetLineWidth(2);
   Graph_Graph_from_c1lep5jex3bex_jets_n_Data3160->SetMarkerStyle(20);
   Graph_Graph_from_c1lep5jex3bex_jets_n_Data3160->SetMarkerSize(1.2);
   Graph_Graph_from_c1lep5jex3bex_jets_n_Data3160->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep5jex3bex_jets_n_Data3160->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep5jex3bex_jets_n_Data3160->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep5jex3bex_jets_n_Data3160->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep5jex3bex_jets_n_Data3160->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep5jex3bex_jets_n_Data3160->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep5jex3bex_jets_n_Data3160->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep5jex3bex_jets_n_Data3160->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep5jex3bex_jets_n_Data3160->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep5jex3bex_jets_n_Data3160->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep5jex3bex_jets_n_Data3160->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep5jex3bex_jets_n_Data3160->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep5jex3bex_jets_n_Data3160->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep5jex3bex_jets_n_Data3160->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_c1lep5jex3bex_jets_n_Data3160);
   
   grae->Draw("ep1 ");
   Double_t xAxis400[5] = {3.5, 4.5, 5.5, 6.5, 7.5}; 
   
   TH1D *h_dummy_copy__360 = new TH1D("h_dummy_copy__360","",4, xAxis400);
   h_dummy_copy__360->SetEntries(1363548);
   h_dummy_copy__360->SetDirectory(0);
   h_dummy_copy__360->SetStats(0);
   h_dummy_copy__360->SetMarkerStyle(20);
   h_dummy_copy__360->SetMarkerSize(1.2);
   h_dummy_copy__360->GetXaxis()->SetTitle("N_{j}");
   h_dummy_copy__360->GetXaxis()->SetRange(1,18);
   h_dummy_copy__360->GetXaxis()->SetLabelFont(43);
   h_dummy_copy__360->GetXaxis()->SetLabelSize(21);
   h_dummy_copy__360->GetXaxis()->SetTitleSize(21);
   h_dummy_copy__360->GetXaxis()->SetTitleOffset(1.4);
   h_dummy_copy__360->GetXaxis()->SetTitleFont(43);
   h_dummy_copy__360->GetYaxis()->SetTitle("Events");
   h_dummy_copy__360->GetYaxis()->SetLabelFont(43);
   h_dummy_copy__360->GetYaxis()->SetLabelSize(16.8);
   h_dummy_copy__360->GetYaxis()->SetTitleSize(21);
   h_dummy_copy__360->GetYaxis()->SetTitleOffset(2.4);
   h_dummy_copy__360->GetYaxis()->SetTitleFont(43);
   h_dummy_copy__360->GetZaxis()->SetLabelFont(43);
   h_dummy_copy__360->GetZaxis()->SetLabelSize(21);
   h_dummy_copy__360->GetZaxis()->SetTitleSize(21);
   h_dummy_copy__360->GetZaxis()->SetTitleFont(43);
   h_dummy_copy__360->Draw("sameaxis");
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
   TLegendEntry *entry=leg->AddEntry("c1lep5jex3bex_jets_n_Data","Data","lep");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep5jex3bex_jets_n_uHcW","t#rightarrow Hc","f");
   entry->SetFillColor(2);
   entry->SetFillStyle(1001);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep5jex3bex_jets_n_ttbarlight","t#bar{t}+light","f");
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep5jex3bex_jets_n_ttbarcc","t#bar{t}+cc","f");

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
   entry=leg->AddEntry("c1lep5jex3bex_jets_n_ttbarbb","t#bar{t}+bb","f");

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
   entry=leg->AddEntry("c1lep5jex3bex_jets_n_topEW","Non-t#bar{t}","f");

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
   c_c1lep5jex3bex_jets_n->cd();
   c_c1lep5jex3bex_jets_n->Modified();
   c_c1lep5jex3bex_jets_n->cd();
   c_c1lep5jex3bex_jets_n->SetSelected(c_c1lep5jex3bex_jets_n);
}
