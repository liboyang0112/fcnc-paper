void c1lep4jin2bin_jets_n()
{
//=========Macro generated from canvas: c_c1lep4jin2bin_jets_n/c_c1lep4jin2bin_jets_n
//=========  (Thu Jul 19 17:38:08 2018) by ROOT version6.04/14
   TCanvas *c_c1lep4jin2bin_jets_n = new TCanvas("c_c1lep4jin2bin_jets_n", "c_c1lep4jin2bin_jets_n",0,0,600,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c_c1lep4jin2bin_jets_n->SetHighLightColor(2);
   c_c1lep4jin2bin_jets_n->Range(0,0,1,1);
   c_c1lep4jin2bin_jets_n->SetFillColor(0);
   c_c1lep4jin2bin_jets_n->SetBorderMode(0);
   c_c1lep4jin2bin_jets_n->SetBorderSize(2);
   c_c1lep4jin2bin_jets_n->SetTickx(1);
   c_c1lep4jin2bin_jets_n->SetTicky(1);
   c_c1lep4jin2bin_jets_n->SetLeftMargin(0.16);
   c_c1lep4jin2bin_jets_n->SetRightMargin(0.05);
   c_c1lep4jin2bin_jets_n->SetTopMargin(0.05);
   c_c1lep4jin2bin_jets_n->SetBottomMargin(0.16);
   c_c1lep4jin2bin_jets_n->SetFrameBorderMode(0);
  
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
   Double_t xAxis371[5] = {3.5, 4.5, 5.5, 6.5, 7.5}; 
   
   TH1D *h_dummy2__334 = new TH1D("h_dummy2__334","Data/MC",4, xAxis371);
   h_dummy2__334->SetMinimum(0.5);
   h_dummy2__334->SetMaximum(1.5);
   h_dummy2__334->SetEntries(1.123258e+07);
   h_dummy2__334->SetDirectory(0);
   h_dummy2__334->SetStats(0);
   h_dummy2__334->SetMarkerStyle(20);
   h_dummy2__334->SetMarkerSize(1.2);
   h_dummy2__334->GetXaxis()->SetTitle("N_{j}");
   h_dummy2__334->GetXaxis()->SetRange(1,18);
   h_dummy2__334->GetXaxis()->SetLabelFont(43);
   h_dummy2__334->GetXaxis()->SetLabelOffset(0.025);
   h_dummy2__334->GetXaxis()->SetLabelSize(16.8);
   h_dummy2__334->GetXaxis()->SetTitleSize(21);
   h_dummy2__334->GetXaxis()->SetTitleOffset(5.05);
   h_dummy2__334->GetXaxis()->SetTitleFont(43);
   h_dummy2__334->GetYaxis()->SetTitle("Data / Bkg");
   h_dummy2__334->GetYaxis()->SetNdivisions(-504);
   h_dummy2__334->GetYaxis()->SetLabelFont(43);
   h_dummy2__334->GetYaxis()->SetLabelOffset(0.02);
   h_dummy2__334->GetYaxis()->SetLabelSize(16.8);
   h_dummy2__334->GetYaxis()->SetTitleSize(21);
   h_dummy2__334->GetYaxis()->SetTitleOffset(2.4);
   h_dummy2__334->GetYaxis()->SetTitleFont(43);
   h_dummy2__334->GetZaxis()->SetLabelFont(43);
   h_dummy2__334->GetZaxis()->SetLabelSize(21);
   h_dummy2__334->GetZaxis()->SetTitleSize(21);
   h_dummy2__334->GetZaxis()->SetTitleFont(43);
   h_dummy2__334->Draw("HIST");
   
   Double_t Graph_from_h_ratio_fx3149[4] = {
   4,
   5,
   6,
   7};
   Double_t Graph_from_h_ratio_fy3149[4] = {
   0.9593044,
   0.9565249,
   0.9512567,
   0.9733073};
   Double_t Graph_from_h_ratio_felx3149[4] = {
   0.499,
   0.499,
   0.499,
   0.499};
   Double_t Graph_from_h_ratio_fely3149[4] = {
   0.001467791,
   0.001841413,
   0.002676847,
   0.004347852};
   Double_t Graph_from_h_ratio_fehx3149[4] = {
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t Graph_from_h_ratio_fehy3149[4] = {
   0.001467791,
   0.001841413,
   0.002676847,
   0.004347852};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(4,Graph_from_h_ratio_fx3149,Graph_from_h_ratio_fy3149,Graph_from_h_ratio_felx3149,Graph_from_h_ratio_fehx3149,Graph_from_h_ratio_fely3149,Graph_from_h_ratio_fehy3149);
   grae->SetName("Graph_from_h_ratio");
   grae->SetTitle("");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(24);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_h_ratio3149 = new TH1F("Graph_Graph_from_h_ratio3149","",100,3.1011,7.8999);
   Graph_Graph_from_h_ratio3149->SetMinimum(0.9456723);
   Graph_Graph_from_h_ratio3149->SetMaximum(0.9805626);
   Graph_Graph_from_h_ratio3149->SetDirectory(0);
   Graph_Graph_from_h_ratio3149->SetStats(0);
   Graph_Graph_from_h_ratio3149->SetLineWidth(2);
   Graph_Graph_from_h_ratio3149->SetMarkerStyle(20);
   Graph_Graph_from_h_ratio3149->SetMarkerSize(1.2);
   Graph_Graph_from_h_ratio3149->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3149->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3149->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3149->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3149->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3149->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3149->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3149->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3149->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3149->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3149->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3149->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3149->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3149->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_h_ratio3149);
   
   grae->Draw("pe0");
   TLine *line = new TLine(3.5,1,7.5,1);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t g_ratio2_fx3150[4] = {
   4,
   5,
   6,
   7};
   Double_t g_ratio2_fy3150[4] = {
   1,
   1,
   1,
   1};
   Double_t g_ratio2_felx3150[4] = {
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t g_ratio2_fely3150[4] = {
   0.1048653,
   0.13588,
   0.1962934,
   0.255485};
   Double_t g_ratio2_fehx3150[4] = {
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t g_ratio2_fehy3150[4] = {
   0.1048653,
   0.13588,
   0.1962934,
   0.255485};
   grae = new TGraphAsymmErrors(4,g_ratio2_fx3150,g_ratio2_fy3150,g_ratio2_felx3150,g_ratio2_fehx3150,g_ratio2_fely3150,g_ratio2_fehy3150);
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
   
   TH1F *Graph_g_ratio23150 = new TH1F("Graph_g_ratio23150","",100,3.1,7.9);
   Graph_g_ratio23150->SetMinimum(0.6934179);
   Graph_g_ratio23150->SetMaximum(1.306582);
   Graph_g_ratio23150->SetDirectory(0);
   Graph_g_ratio23150->SetStats(0);
   Graph_g_ratio23150->SetLineWidth(2);
   Graph_g_ratio23150->SetMarkerStyle(20);
   Graph_g_ratio23150->SetMarkerSize(1.2);
   Graph_g_ratio23150->GetXaxis()->SetLabelFont(43);
   Graph_g_ratio23150->GetXaxis()->SetLabelSize(21);
   Graph_g_ratio23150->GetXaxis()->SetTitleSize(21);
   Graph_g_ratio23150->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23150->GetXaxis()->SetTitleFont(43);
   Graph_g_ratio23150->GetYaxis()->SetLabelFont(43);
   Graph_g_ratio23150->GetYaxis()->SetLabelSize(21);
   Graph_g_ratio23150->GetYaxis()->SetTitleSize(21);
   Graph_g_ratio23150->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23150->GetYaxis()->SetTitleFont(43);
   Graph_g_ratio23150->GetZaxis()->SetLabelFont(43);
   Graph_g_ratio23150->GetZaxis()->SetLabelSize(21);
   Graph_g_ratio23150->GetZaxis()->SetTitleSize(21);
   Graph_g_ratio23150->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_ratio23150);
   
   grae->Draw("e2");
   Double_t xAxis372[5] = {3.5, 4.5, 5.5, 6.5, 7.5}; 
   
   TH1D *h_dummy2_copy__335 = new TH1D("h_dummy2_copy__335","Data/MC",4, xAxis372);
   h_dummy2_copy__335->SetMinimum(0.5);
   h_dummy2_copy__335->SetMaximum(1.5);
   h_dummy2_copy__335->SetEntries(1.123258e+07);
   h_dummy2_copy__335->SetDirectory(0);
   h_dummy2_copy__335->SetStats(0);
   h_dummy2_copy__335->SetMarkerStyle(20);
   h_dummy2_copy__335->SetMarkerSize(1.2);
   h_dummy2_copy__335->GetXaxis()->SetTitle("N_{j}");
   h_dummy2_copy__335->GetXaxis()->SetRange(1,18);
   h_dummy2_copy__335->GetXaxis()->SetLabelFont(43);
   h_dummy2_copy__335->GetXaxis()->SetLabelOffset(0.025);
   h_dummy2_copy__335->GetXaxis()->SetLabelSize(16.8);
   h_dummy2_copy__335->GetXaxis()->SetTitleSize(21);
   h_dummy2_copy__335->GetXaxis()->SetTitleOffset(5.05);
   h_dummy2_copy__335->GetXaxis()->SetTitleFont(43);
   h_dummy2_copy__335->GetYaxis()->SetTitle("Data / Bkg");
   h_dummy2_copy__335->GetYaxis()->SetNdivisions(-504);
   h_dummy2_copy__335->GetYaxis()->SetLabelFont(43);
   h_dummy2_copy__335->GetYaxis()->SetLabelOffset(0.02);
   h_dummy2_copy__335->GetYaxis()->SetLabelSize(16.8);
   h_dummy2_copy__335->GetYaxis()->SetTitleSize(21);
   h_dummy2_copy__335->GetYaxis()->SetTitleOffset(2.4);
   h_dummy2_copy__335->GetYaxis()->SetTitleFont(43);
   h_dummy2_copy__335->GetZaxis()->SetLabelFont(43);
   h_dummy2_copy__335->GetZaxis()->SetLabelSize(21);
   h_dummy2_copy__335->GetZaxis()->SetTitleSize(21);
   h_dummy2_copy__335->GetZaxis()->SetTitleFont(43);
   h_dummy2_copy__335->Draw("sameaxis");
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
   c_c1lep4jin2bin_jets_n->cd();
  
// ------------>Primitives in pad: pad0
   TPad *pad0 = new TPad("pad0", "pad0",0,0.2,1,1);
   pad0->Draw();
   pad0->cd();
   pad0->Range(2.808642,-94293.48,7.746914,848641.2);
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
   Double_t xAxis373[5] = {3.5, 4.5, 5.5, 6.5, 7.5}; 
   
   TH1D *h_dummy__336 = new TH1D("h_dummy__336","",4, xAxis373);
   h_dummy__336->SetMinimum(0);
   h_dummy__336->SetMaximum(801494.5);
   h_dummy__336->SetEntries(1.123258e+07);
   h_dummy__336->SetDirectory(0);
   h_dummy__336->SetStats(0);
   h_dummy__336->SetMarkerStyle(20);
   h_dummy__336->SetMarkerSize(1.2);
   h_dummy__336->GetXaxis()->SetRange(1,18);
   h_dummy__336->GetXaxis()->SetLabelFont(43);
   h_dummy__336->GetXaxis()->SetLabelSize(0);
   h_dummy__336->GetXaxis()->SetTitleSize(21);
   h_dummy__336->GetXaxis()->SetTitleOffset(1.4);
   h_dummy__336->GetXaxis()->SetTitleFont(43);
   h_dummy__336->GetYaxis()->SetTitle("Events / 1");
   h_dummy__336->GetYaxis()->SetLabelFont(43);
   h_dummy__336->GetYaxis()->SetLabelSize(16.8);
   h_dummy__336->GetYaxis()->SetTitleSize(21);
   h_dummy__336->GetYaxis()->SetTitleOffset(2.4);
   h_dummy__336->GetYaxis()->SetTitleFont(43);
   h_dummy__336->GetZaxis()->SetLabelFont(43);
   h_dummy__336->GetZaxis()->SetLabelSize(21);
   h_dummy__336->GetZaxis()->SetTitleSize(21);
   h_dummy__336->GetZaxis()->SetTitleFont(43);
   h_dummy__336->Draw("HIST");
   
   THStack *h_stack = new THStack();
   h_stack->SetName("h_stack");
   h_stack->SetTitle("h_stack");
   Double_t xAxis374[5] = {3.5, 4.5, 5.5, 6.5, 7.5}; 
   
   TH1F *h_stack_stack_38 = new TH1F("h_stack_stack_38","h_stack",4, xAxis374);
   h_stack_stack_38->SetMinimum(0);
   h_stack_stack_38->SetMaximum(473087.1);
   h_stack_stack_38->SetDirectory(0);
   h_stack_stack_38->SetStats(0);
   h_stack_stack_38->SetLineWidth(2);
   h_stack_stack_38->SetMarkerStyle(20);
   h_stack_stack_38->SetMarkerSize(1.2);
   h_stack_stack_38->GetXaxis()->SetLabelFont(43);
   h_stack_stack_38->GetXaxis()->SetLabelSize(21);
   h_stack_stack_38->GetXaxis()->SetTitleSize(21);
   h_stack_stack_38->GetXaxis()->SetTitleOffset(1.4);
   h_stack_stack_38->GetXaxis()->SetTitleFont(43);
   h_stack_stack_38->GetYaxis()->SetLabelFont(43);
   h_stack_stack_38->GetYaxis()->SetLabelSize(21);
   h_stack_stack_38->GetYaxis()->SetTitleSize(21);
   h_stack_stack_38->GetYaxis()->SetTitleOffset(1.4);
   h_stack_stack_38->GetYaxis()->SetTitleFont(43);
   h_stack_stack_38->GetZaxis()->SetLabelFont(43);
   h_stack_stack_38->GetZaxis()->SetLabelSize(21);
   h_stack_stack_38->GetZaxis()->SetTitleSize(21);
   h_stack_stack_38->GetZaxis()->SetTitleFont(43);
   h_stack->SetHistogram(h_stack_stack_38);
   
   Double_t xAxis375[5] = {3.5, 4.5, 5.5, 6.5, 7.5}; 
   
   TH1D *c1lep4jin2bin_jets_n_topEW__337 = new TH1D("c1lep4jin2bin_jets_n_topEW__337","",4, xAxis375);
   c1lep4jin2bin_jets_n_topEW__337->SetBinContent(1,59024.64);
   c1lep4jin2bin_jets_n_topEW__337->SetBinContent(2,32838.95);
   c1lep4jin2bin_jets_n_topEW__337->SetBinContent(3,15448.89);
   c1lep4jin2bin_jets_n_topEW__337->SetBinContent(4,5480.161);
   c1lep4jin2bin_jets_n_topEW__337->SetBinContent(5,3333.7);
   c1lep4jin2bin_jets_n_topEW__337->SetBinError(1,532.383);
   c1lep4jin2bin_jets_n_topEW__337->SetBinError(2,416.3418);
   c1lep4jin2bin_jets_n_topEW__337->SetBinError(3,290.0175);
   c1lep4jin2bin_jets_n_topEW__337->SetBinError(4,157.6918);
   c1lep4jin2bin_jets_n_topEW__337->SetBinError(5,135.138);
   c1lep4jin2bin_jets_n_topEW__337->SetEntries(8198804);
   c1lep4jin2bin_jets_n_topEW__337->SetDirectory(0);
   c1lep4jin2bin_jets_n_topEW__337->SetStats(0);

   ci = TColor::GetColor("#66cc66");
   c1lep4jin2bin_jets_n_topEW__337->SetFillColor(ci);
   c1lep4jin2bin_jets_n_topEW__337->SetMarkerStyle(20);
   c1lep4jin2bin_jets_n_topEW__337->SetMarkerSize(1.2);
   c1lep4jin2bin_jets_n_topEW__337->GetXaxis()->SetTitle("Number of jets");
   c1lep4jin2bin_jets_n_topEW__337->GetXaxis()->SetRange(1,18);
   c1lep4jin2bin_jets_n_topEW__337->GetXaxis()->SetLabelFont(43);
   c1lep4jin2bin_jets_n_topEW__337->GetXaxis()->SetLabelSize(21);
   c1lep4jin2bin_jets_n_topEW__337->GetXaxis()->SetTitleSize(21);
   c1lep4jin2bin_jets_n_topEW__337->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_jets_n_topEW__337->GetXaxis()->SetTitleFont(43);
   c1lep4jin2bin_jets_n_topEW__337->GetYaxis()->SetLabelFont(43);
   c1lep4jin2bin_jets_n_topEW__337->GetYaxis()->SetLabelSize(21);
   c1lep4jin2bin_jets_n_topEW__337->GetYaxis()->SetTitleSize(21);
   c1lep4jin2bin_jets_n_topEW__337->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_jets_n_topEW__337->GetYaxis()->SetTitleFont(43);
   c1lep4jin2bin_jets_n_topEW__337->GetZaxis()->SetLabelFont(43);
   c1lep4jin2bin_jets_n_topEW__337->GetZaxis()->SetLabelSize(21);
   c1lep4jin2bin_jets_n_topEW__337->GetZaxis()->SetTitleSize(21);
   c1lep4jin2bin_jets_n_topEW__337->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jin2bin_jets_n_topEW,"");
   Double_t xAxis376[5] = {3.5, 4.5, 5.5, 6.5, 7.5}; 
   
   TH1D *c1lep4jin2bin_jets_n_ttbarbb__338 = new TH1D("c1lep4jin2bin_jets_n_ttbarbb__338","",4, xAxis376);
   c1lep4jin2bin_jets_n_ttbarbb__338->SetBinContent(1,13823);
   c1lep4jin2bin_jets_n_ttbarbb__338->SetBinContent(2,16428.66);
   c1lep4jin2bin_jets_n_ttbarbb__338->SetBinContent(3,12126.92);
   c1lep4jin2bin_jets_n_ttbarbb__338->SetBinContent(4,6612.589);
   c1lep4jin2bin_jets_n_ttbarbb__338->SetBinContent(5,4750.181);
   c1lep4jin2bin_jets_n_ttbarbb__338->SetBinError(1,73.97978);
   c1lep4jin2bin_jets_n_ttbarbb__338->SetBinError(2,80.40621);
   c1lep4jin2bin_jets_n_ttbarbb__338->SetBinError(3,68.51624);
   c1lep4jin2bin_jets_n_ttbarbb__338->SetBinError(4,51.86159);
   c1lep4jin2bin_jets_n_ttbarbb__338->SetBinError(5,45.90871);
   c1lep4jin2bin_jets_n_ttbarbb__338->SetEntries(197629);
   c1lep4jin2bin_jets_n_ttbarbb__338->SetDirectory(0);
   c1lep4jin2bin_jets_n_ttbarbb__338->SetStats(0);

   ci = TColor::GetColor("#6666cc");
   c1lep4jin2bin_jets_n_ttbarbb__338->SetFillColor(ci);
   c1lep4jin2bin_jets_n_ttbarbb__338->SetMarkerStyle(20);
   c1lep4jin2bin_jets_n_ttbarbb__338->SetMarkerSize(1.2);
   c1lep4jin2bin_jets_n_ttbarbb__338->GetXaxis()->SetTitle("Number of jets");
   c1lep4jin2bin_jets_n_ttbarbb__338->GetXaxis()->SetRange(1,18);
   c1lep4jin2bin_jets_n_ttbarbb__338->GetXaxis()->SetLabelFont(43);
   c1lep4jin2bin_jets_n_ttbarbb__338->GetXaxis()->SetLabelSize(21);
   c1lep4jin2bin_jets_n_ttbarbb__338->GetXaxis()->SetTitleSize(21);
   c1lep4jin2bin_jets_n_ttbarbb__338->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_jets_n_ttbarbb__338->GetXaxis()->SetTitleFont(43);
   c1lep4jin2bin_jets_n_ttbarbb__338->GetYaxis()->SetLabelFont(43);
   c1lep4jin2bin_jets_n_ttbarbb__338->GetYaxis()->SetLabelSize(21);
   c1lep4jin2bin_jets_n_ttbarbb__338->GetYaxis()->SetTitleSize(21);
   c1lep4jin2bin_jets_n_ttbarbb__338->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_jets_n_ttbarbb__338->GetYaxis()->SetTitleFont(43);
   c1lep4jin2bin_jets_n_ttbarbb__338->GetZaxis()->SetLabelFont(43);
   c1lep4jin2bin_jets_n_ttbarbb__338->GetZaxis()->SetLabelSize(21);
   c1lep4jin2bin_jets_n_ttbarbb__338->GetZaxis()->SetTitleSize(21);
   c1lep4jin2bin_jets_n_ttbarbb__338->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jin2bin_jets_n_ttbarbb,"");
   Double_t xAxis377[5] = {3.5, 4.5, 5.5, 6.5, 7.5}; 
   
   TH1D *c1lep4jin2bin_jets_n_ttbarcc__339 = new TH1D("c1lep4jin2bin_jets_n_ttbarcc__339","",4, xAxis377);
   c1lep4jin2bin_jets_n_ttbarcc__339->SetBinContent(1,28866.09);
   c1lep4jin2bin_jets_n_ttbarcc__339->SetBinContent(2,27887.47);
   c1lep4jin2bin_jets_n_ttbarcc__339->SetBinContent(3,17450.37);
   c1lep4jin2bin_jets_n_ttbarcc__339->SetBinContent(4,8303.457);
   c1lep4jin2bin_jets_n_ttbarcc__339->SetBinContent(5,4975.015);
   c1lep4jin2bin_jets_n_ttbarcc__339->SetBinError(1,107.2846);
   c1lep4jin2bin_jets_n_ttbarcc__339->SetBinError(2,104.6089);
   c1lep4jin2bin_jets_n_ttbarcc__339->SetBinError(3,82.70898);
   c1lep4jin2bin_jets_n_ttbarcc__339->SetBinError(4,56.60377);
   c1lep4jin2bin_jets_n_ttbarcc__339->SetBinError(5,42.91883);
   c1lep4jin2bin_jets_n_ttbarcc__339->SetEntries(319744);
   c1lep4jin2bin_jets_n_ttbarcc__339->SetDirectory(0);
   c1lep4jin2bin_jets_n_ttbarcc__339->SetStats(0);

   ci = TColor::GetColor("#ccccff");
   c1lep4jin2bin_jets_n_ttbarcc__339->SetFillColor(ci);
   c1lep4jin2bin_jets_n_ttbarcc__339->SetMarkerStyle(20);
   c1lep4jin2bin_jets_n_ttbarcc__339->SetMarkerSize(1.2);
   c1lep4jin2bin_jets_n_ttbarcc__339->GetXaxis()->SetTitle("Number of jets");
   c1lep4jin2bin_jets_n_ttbarcc__339->GetXaxis()->SetRange(1,18);
   c1lep4jin2bin_jets_n_ttbarcc__339->GetXaxis()->SetLabelFont(43);
   c1lep4jin2bin_jets_n_ttbarcc__339->GetXaxis()->SetLabelSize(21);
   c1lep4jin2bin_jets_n_ttbarcc__339->GetXaxis()->SetTitleSize(21);
   c1lep4jin2bin_jets_n_ttbarcc__339->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_jets_n_ttbarcc__339->GetXaxis()->SetTitleFont(43);
   c1lep4jin2bin_jets_n_ttbarcc__339->GetYaxis()->SetLabelFont(43);
   c1lep4jin2bin_jets_n_ttbarcc__339->GetYaxis()->SetLabelSize(21);
   c1lep4jin2bin_jets_n_ttbarcc__339->GetYaxis()->SetTitleSize(21);
   c1lep4jin2bin_jets_n_ttbarcc__339->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_jets_n_ttbarcc__339->GetYaxis()->SetTitleFont(43);
   c1lep4jin2bin_jets_n_ttbarcc__339->GetZaxis()->SetLabelFont(43);
   c1lep4jin2bin_jets_n_ttbarcc__339->GetZaxis()->SetLabelSize(21);
   c1lep4jin2bin_jets_n_ttbarcc__339->GetZaxis()->SetTitleSize(21);
   c1lep4jin2bin_jets_n_ttbarcc__339->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jin2bin_jets_n_ttbarcc,"");
   Double_t xAxis378[5] = {3.5, 4.5, 5.5, 6.5, 7.5}; 
   
   TH1D *c1lep4jin2bin_jets_n_ttbarlight__340 = new TH1D("c1lep4jin2bin_jets_n_ttbarlight__340","",4, xAxis378);
   c1lep4jin2bin_jets_n_ttbarlight__340->SetBinContent(1,343561);
   c1lep4jin2bin_jets_n_ttbarlight__340->SetBinContent(2,204939);
   c1lep4jin2bin_jets_n_ttbarlight__340->SetBinContent(3,87728.74);
   c1lep4jin2bin_jets_n_ttbarlight__340->SetBinContent(4,31091.13);
   c1lep4jin2bin_jets_n_ttbarlight__340->SetBinContent(5,13301.76);
   c1lep4jin2bin_jets_n_ttbarlight__340->SetBinError(1,365.5983);
   c1lep4jin2bin_jets_n_ttbarlight__340->SetBinError(2,282.0224);
   c1lep4jin2bin_jets_n_ttbarlight__340->SetBinError(3,184.8426);
   c1lep4jin2bin_jets_n_ttbarlight__340->SetBinError(4,109.112);
   c1lep4jin2bin_jets_n_ttbarlight__340->SetBinError(5,71.88027);
   c1lep4jin2bin_jets_n_ttbarlight__340->SetEntries(2516401);
   c1lep4jin2bin_jets_n_ttbarlight__340->SetDirectory(0);
   c1lep4jin2bin_jets_n_ttbarlight__340->SetStats(0);
   c1lep4jin2bin_jets_n_ttbarlight__340->SetMarkerStyle(20);
   c1lep4jin2bin_jets_n_ttbarlight__340->SetMarkerSize(1.2);
   c1lep4jin2bin_jets_n_ttbarlight__340->GetXaxis()->SetTitle("Number of jets");
   c1lep4jin2bin_jets_n_ttbarlight__340->GetXaxis()->SetRange(1,18);
   c1lep4jin2bin_jets_n_ttbarlight__340->GetXaxis()->SetLabelFont(43);
   c1lep4jin2bin_jets_n_ttbarlight__340->GetXaxis()->SetLabelSize(21);
   c1lep4jin2bin_jets_n_ttbarlight__340->GetXaxis()->SetTitleSize(21);
   c1lep4jin2bin_jets_n_ttbarlight__340->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_jets_n_ttbarlight__340->GetXaxis()->SetTitleFont(43);
   c1lep4jin2bin_jets_n_ttbarlight__340->GetYaxis()->SetLabelFont(43);
   c1lep4jin2bin_jets_n_ttbarlight__340->GetYaxis()->SetLabelSize(21);
   c1lep4jin2bin_jets_n_ttbarlight__340->GetYaxis()->SetTitleSize(21);
   c1lep4jin2bin_jets_n_ttbarlight__340->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_jets_n_ttbarlight__340->GetYaxis()->SetTitleFont(43);
   c1lep4jin2bin_jets_n_ttbarlight__340->GetZaxis()->SetLabelFont(43);
   c1lep4jin2bin_jets_n_ttbarlight__340->GetZaxis()->SetLabelSize(21);
   c1lep4jin2bin_jets_n_ttbarlight__340->GetZaxis()->SetTitleSize(21);
   c1lep4jin2bin_jets_n_ttbarlight__340->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jin2bin_jets_n_ttbarlight,"");
   Double_t xAxis379[5] = {3.5, 4.5, 5.5, 6.5, 7.5}; 
   
   TH1D *c1lep4jin2bin_jets_n_uHcW__341 = new TH1D("c1lep4jin2bin_jets_n_uHcW__341","",4, xAxis379);
   c1lep4jin2bin_jets_n_uHcW__341->SetBinContent(1,5284.452);
   c1lep4jin2bin_jets_n_uHcW__341->SetBinContent(2,3837.569);
   c1lep4jin2bin_jets_n_uHcW__341->SetBinContent(3,1708.848);
   c1lep4jin2bin_jets_n_uHcW__341->SetBinContent(4,579.9783);
   c1lep4jin2bin_jets_n_uHcW__341->SetBinContent(5,254.2262);
   c1lep4jin2bin_jets_n_uHcW__341->SetBinError(1,68.65094);
   c1lep4jin2bin_jets_n_uHcW__341->SetBinError(2,62.10008);
   c1lep4jin2bin_jets_n_uHcW__341->SetBinError(3,46.5693);
   c1lep4jin2bin_jets_n_uHcW__341->SetBinError(4,31.28683);
   c1lep4jin2bin_jets_n_uHcW__341->SetBinError(5,23.61391);
   c1lep4jin2bin_jets_n_uHcW__341->SetEntries(70178);
   c1lep4jin2bin_jets_n_uHcW__341->SetDirectory(0);
   c1lep4jin2bin_jets_n_uHcW__341->SetStats(0);
   c1lep4jin2bin_jets_n_uHcW__341->SetFillColor(2);
   c1lep4jin2bin_jets_n_uHcW__341->SetLineColor(2);
   c1lep4jin2bin_jets_n_uHcW__341->SetMarkerStyle(20);
   c1lep4jin2bin_jets_n_uHcW__341->SetMarkerSize(1.2);
   c1lep4jin2bin_jets_n_uHcW__341->GetXaxis()->SetTitle("Number of jets");
   c1lep4jin2bin_jets_n_uHcW__341->GetXaxis()->SetRange(1,18);
   c1lep4jin2bin_jets_n_uHcW__341->GetXaxis()->SetLabelFont(43);
   c1lep4jin2bin_jets_n_uHcW__341->GetXaxis()->SetLabelSize(21);
   c1lep4jin2bin_jets_n_uHcW__341->GetXaxis()->SetTitleSize(21);
   c1lep4jin2bin_jets_n_uHcW__341->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_jets_n_uHcW__341->GetXaxis()->SetTitleFont(43);
   c1lep4jin2bin_jets_n_uHcW__341->GetYaxis()->SetLabelFont(43);
   c1lep4jin2bin_jets_n_uHcW__341->GetYaxis()->SetLabelSize(21);
   c1lep4jin2bin_jets_n_uHcW__341->GetYaxis()->SetTitleSize(21);
   c1lep4jin2bin_jets_n_uHcW__341->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_jets_n_uHcW__341->GetYaxis()->SetTitleFont(43);
   c1lep4jin2bin_jets_n_uHcW__341->GetZaxis()->SetLabelFont(43);
   c1lep4jin2bin_jets_n_uHcW__341->GetZaxis()->SetLabelSize(21);
   c1lep4jin2bin_jets_n_uHcW__341->GetZaxis()->SetTitleSize(21);
   c1lep4jin2bin_jets_n_uHcW__341->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jin2bin_jets_n_uHcW,"");
   h_stack->Draw("hist same");
   
   Double_t g_totErr_fx3151[4] = {
   4,
   5,
   6,
   7};
   Double_t g_totErr_fy3151[4] = {
   445274.7,
   282094.1,
   132754.9,
   51487.34};
   Double_t g_totErr_felx3151[4] = {
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t g_totErr_fely3151[4] = {
   46693.87,
   38330.93,
   26058.92,
   13154.25};
   Double_t g_totErr_fehx3151[4] = {
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t g_totErr_fehy3151[4] = {
   46693.87,
   38330.93,
   26058.92,
   13154.25};
   grae = new TGraphAsymmErrors(4,g_totErr_fx3151,g_totErr_fy3151,g_totErr_felx3151,g_totErr_fehx3151,g_totErr_fely3151,g_totErr_fehy3151);
   grae->SetName("g_totErr");
   grae->SetTitle("");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(3354);
   grae->SetLineColor(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0);
   
   TH1F *Graph_g_totErr3151 = new TH1F("Graph_g_totErr3151","",100,3.1,7.9);
   Graph_g_totErr3151->SetMinimum(0);
   Graph_g_totErr3151->SetMaximum(537332.2);
   Graph_g_totErr3151->SetDirectory(0);
   Graph_g_totErr3151->SetStats(0);
   Graph_g_totErr3151->SetLineWidth(2);
   Graph_g_totErr3151->SetMarkerStyle(20);
   Graph_g_totErr3151->SetMarkerSize(1.2);
   Graph_g_totErr3151->GetXaxis()->SetLabelFont(43);
   Graph_g_totErr3151->GetXaxis()->SetLabelSize(21);
   Graph_g_totErr3151->GetXaxis()->SetTitleSize(21);
   Graph_g_totErr3151->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_totErr3151->GetXaxis()->SetTitleFont(43);
   Graph_g_totErr3151->GetYaxis()->SetLabelFont(43);
   Graph_g_totErr3151->GetYaxis()->SetLabelSize(21);
   Graph_g_totErr3151->GetYaxis()->SetTitleSize(21);
   Graph_g_totErr3151->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_totErr3151->GetYaxis()->SetTitleFont(43);
   Graph_g_totErr3151->GetZaxis()->SetLabelFont(43);
   Graph_g_totErr3151->GetZaxis()->SetLabelSize(21);
   Graph_g_totErr3151->GetZaxis()->SetTitleSize(21);
   Graph_g_totErr3151->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_totErr3151);
   
   grae->Draw("e2");
   
   Double_t Graph_from_c1lep4jin2bin_jets_n_Data_fx3152[4] = {
   4,
   5,
   6,
   7};
   Double_t Graph_from_c1lep4jin2bin_jets_n_Data_fy3152[4] = {
   427154,
   269830,
   126284,
   50113};
   Double_t Graph_from_c1lep4jin2bin_jets_n_Data_felx3152[4] = {
   0.499,
   0.499,
   0.499,
   0.499};
   Double_t Graph_from_c1lep4jin2bin_jets_n_Data_fely3152[4] = {
   653.5702,
   519.4516,
   355.3646,
   223.8593};
   Double_t Graph_from_c1lep4jin2bin_jets_n_Data_fehx3152[4] = {
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t Graph_from_c1lep4jin2bin_jets_n_Data_fehy3152[4] = {
   653.5702,
   519.4516,
   355.3646,
   223.8593};
   grae = new TGraphAsymmErrors(4,Graph_from_c1lep4jin2bin_jets_n_Data_fx3152,Graph_from_c1lep4jin2bin_jets_n_Data_fy3152,Graph_from_c1lep4jin2bin_jets_n_Data_felx3152,Graph_from_c1lep4jin2bin_jets_n_Data_fehx3152,Graph_from_c1lep4jin2bin_jets_n_Data_fely3152,Graph_from_c1lep4jin2bin_jets_n_Data_fehy3152);
   grae->SetName("Graph_from_c1lep4jin2bin_jets_n_Data");
   grae->SetTitle("");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_c1lep4jin2bin_jets_n_Data3152 = new TH1F("Graph_Graph_from_c1lep4jin2bin_jets_n_Data3152","",100,3.1011,7.8999);
   Graph_Graph_from_c1lep4jin2bin_jets_n_Data3152->SetMinimum(12097.3);
   Graph_Graph_from_c1lep4jin2bin_jets_n_Data3152->SetMaximum(465599.4);
   Graph_Graph_from_c1lep4jin2bin_jets_n_Data3152->SetDirectory(0);
   Graph_Graph_from_c1lep4jin2bin_jets_n_Data3152->SetStats(0);
   Graph_Graph_from_c1lep4jin2bin_jets_n_Data3152->SetLineWidth(2);
   Graph_Graph_from_c1lep4jin2bin_jets_n_Data3152->SetMarkerStyle(20);
   Graph_Graph_from_c1lep4jin2bin_jets_n_Data3152->SetMarkerSize(1.2);
   Graph_Graph_from_c1lep4jin2bin_jets_n_Data3152->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep4jin2bin_jets_n_Data3152->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep4jin2bin_jets_n_Data3152->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep4jin2bin_jets_n_Data3152->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep4jin2bin_jets_n_Data3152->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep4jin2bin_jets_n_Data3152->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep4jin2bin_jets_n_Data3152->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep4jin2bin_jets_n_Data3152->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep4jin2bin_jets_n_Data3152->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep4jin2bin_jets_n_Data3152->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep4jin2bin_jets_n_Data3152->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep4jin2bin_jets_n_Data3152->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep4jin2bin_jets_n_Data3152->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep4jin2bin_jets_n_Data3152->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_c1lep4jin2bin_jets_n_Data3152);
   
   grae->Draw("ep1 ");
   Double_t xAxis380[5] = {3.5, 4.5, 5.5, 6.5, 7.5}; 
   
   TH1D *h_dummy_copy__342 = new TH1D("h_dummy_copy__342","",4, xAxis380);
   h_dummy_copy__342->SetEntries(1.123258e+07);
   h_dummy_copy__342->SetDirectory(0);
   h_dummy_copy__342->SetStats(0);
   h_dummy_copy__342->SetMarkerStyle(20);
   h_dummy_copy__342->SetMarkerSize(1.2);
   h_dummy_copy__342->GetXaxis()->SetTitle("N_{j}");
   h_dummy_copy__342->GetXaxis()->SetRange(1,18);
   h_dummy_copy__342->GetXaxis()->SetLabelFont(43);
   h_dummy_copy__342->GetXaxis()->SetLabelSize(21);
   h_dummy_copy__342->GetXaxis()->SetTitleSize(21);
   h_dummy_copy__342->GetXaxis()->SetTitleOffset(1.4);
   h_dummy_copy__342->GetXaxis()->SetTitleFont(43);
   h_dummy_copy__342->GetYaxis()->SetTitle("Events / 1");
   h_dummy_copy__342->GetYaxis()->SetLabelFont(43);
   h_dummy_copy__342->GetYaxis()->SetLabelSize(16.8);
   h_dummy_copy__342->GetYaxis()->SetTitleSize(21);
   h_dummy_copy__342->GetYaxis()->SetTitleOffset(2.4);
   h_dummy_copy__342->GetYaxis()->SetTitleFont(43);
   h_dummy_copy__342->GetZaxis()->SetLabelFont(43);
   h_dummy_copy__342->GetZaxis()->SetLabelSize(21);
   h_dummy_copy__342->GetZaxis()->SetTitleSize(21);
   h_dummy_copy__342->GetZaxis()->SetTitleFont(43);
   h_dummy_copy__342->Draw("sameaxis");
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
   TLegendEntry *entry=leg->AddEntry("c1lep4jin2bin_jets_n_Data","Data","lep");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep4jin2bin_jets_n_uHcW","t#bar{t}#rightarrowWbHc (BR=1%)","f");
   entry->SetFillColor(2);
   entry->SetFillStyle(1001);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep4jin2bin_jets_n_ttbarlight","t#bar{t}+light","f");
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep4jin2bin_jets_n_ttbarcc","t#bar{t}+cc","f");

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
   entry=leg->AddEntry("c1lep4jin2bin_jets_n_ttbarbb","t#bar{t}+bb","f");

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
   entry=leg->AddEntry("c1lep4jin2bin_jets_n_topEW","Non-t#bar{t}","f");

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
   c_c1lep4jin2bin_jets_n->cd();
   c_c1lep4jin2bin_jets_n->Modified();
   c_c1lep4jin2bin_jets_n->cd();
   c_c1lep4jin2bin_jets_n->SetSelected(c_c1lep4jin2bin_jets_n);
}
