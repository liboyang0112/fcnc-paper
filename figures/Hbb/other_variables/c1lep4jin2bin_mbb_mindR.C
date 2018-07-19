void c1lep4jin2bin_mbb_mindR()
{
//=========Macro generated from canvas: c_c1lep4jin2bin_mbb_mindR/c_c1lep4jin2bin_mbb_mindR
//=========  (Thu Jul 19 17:38:09 2018) by ROOT version6.04/14
   TCanvas *c_c1lep4jin2bin_mbb_mindR = new TCanvas("c_c1lep4jin2bin_mbb_mindR", "c_c1lep4jin2bin_mbb_mindR",0,0,600,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c_c1lep4jin2bin_mbb_mindR->SetHighLightColor(2);
   c_c1lep4jin2bin_mbb_mindR->Range(0,0,1,1);
   c_c1lep4jin2bin_mbb_mindR->SetFillColor(0);
   c_c1lep4jin2bin_mbb_mindR->SetBorderMode(0);
   c_c1lep4jin2bin_mbb_mindR->SetBorderSize(2);
   c_c1lep4jin2bin_mbb_mindR->SetTickx(1);
   c_c1lep4jin2bin_mbb_mindR->SetTicky(1);
   c_c1lep4jin2bin_mbb_mindR->SetLeftMargin(0.16);
   c_c1lep4jin2bin_mbb_mindR->SetRightMargin(0.05);
   c_c1lep4jin2bin_mbb_mindR->SetTopMargin(0.05);
   c_c1lep4jin2bin_mbb_mindR->SetBottomMargin(0.16);
   c_c1lep4jin2bin_mbb_mindR->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0,1,0.28);
   pad1->Draw();
   pad1->cd();
   pad1->Range(15.4321,-0.0873016,262.3457,1.5);
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
   Double_t xAxis431[9] = {50, 75, 100, 125, 150, 175, 200, 225, 250}; 
   
   TH1D *h_dummy2__388 = new TH1D("h_dummy2__388","Data/MC",8, xAxis431);
   h_dummy2__388->SetMinimum(0.5);
   h_dummy2__388->SetMaximum(1.5);
   h_dummy2__388->SetEntries(1.123266e+07);
   h_dummy2__388->SetDirectory(0);
   h_dummy2__388->SetStats(0);
   h_dummy2__388->SetMarkerStyle(20);
   h_dummy2__388->SetMarkerSize(1.2);
   h_dummy2__388->GetXaxis()->SetTitle("m_{bb}^{min. #DeltaR} [GeV]");
   h_dummy2__388->GetXaxis()->SetRange(1,30);
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
   
   Double_t Graph_from_h_ratio_fx3173[8] = {
   62.5,
   87.5,
   112.5,
   137.5,
   162.5,
   187.5,
   212.5,
   237.5};
   Double_t Graph_from_h_ratio_fy3173[8] = {
   0.9663552,
   0.9660263,
   0.9614837,
   0.9476191,
   0.9396936,
   0.9500865,
   0.9505037,
   0.9492567};
   Double_t Graph_from_h_ratio_felx3173[8] = {
   12.475,
   12.475,
   12.475,
   12.475,
   12.475,
   12.475,
   12.475,
   12.475};
   Double_t Graph_from_h_ratio_fely3173[8] = {
   0.002831586,
   0.003089849,
   0.002502269,
   0.003224332,
   0.002903028,
   0.004045083,
   0.003768637,
   0.005283442};
   Double_t Graph_from_h_ratio_fehx3173[8] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t Graph_from_h_ratio_fehy3173[8] = {
   0.002831586,
   0.003089849,
   0.002502269,
   0.003224332,
   0.002903028,
   0.004045083,
   0.003768637,
   0.005283442};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(8,Graph_from_h_ratio_fx3173,Graph_from_h_ratio_fy3173,Graph_from_h_ratio_felx3173,Graph_from_h_ratio_fehx3173,Graph_from_h_ratio_fely3173,Graph_from_h_ratio_fehy3173);
   grae->SetName("Graph_from_h_ratio");
   grae->SetTitle("");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(24);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_h_ratio3173 = new TH1F("Graph_Graph_from_h_ratio3173","",100,30.0275,269.9975);
   Graph_Graph_from_h_ratio3173->SetMinimum(0.9335509);
   Graph_Graph_from_h_ratio3173->SetMaximum(0.9724264);
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
   TLine *line = new TLine(50,1,250,1);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t g_ratio2_fx3174[8] = {
   62.5,
   87.5,
   112.5,
   137.5,
   162.5,
   187.5,
   212.5,
   237.5};
   Double_t g_ratio2_fy3174[8] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t g_ratio2_felx3174[8] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t g_ratio2_fely3174[8] = {
   0.1430932,
   0.1367872,
   0.1300742,
   0.1231739,
   0.119568,
   0.1184971,
   0.1192304,
   0.1191501};
   Double_t g_ratio2_fehx3174[8] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t g_ratio2_fehy3174[8] = {
   0.1430932,
   0.1367872,
   0.1300742,
   0.1231739,
   0.119568,
   0.1184971,
   0.1192304,
   0.1191501};
   grae = new TGraphAsymmErrors(8,g_ratio2_fx3174,g_ratio2_fy3174,g_ratio2_felx3174,g_ratio2_fehx3174,g_ratio2_fely3174,g_ratio2_fehy3174);
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
   
   TH1F *Graph_g_ratio23174 = new TH1F("Graph_g_ratio23174","",100,30,270);
   Graph_g_ratio23174->SetMinimum(0.8282881);
   Graph_g_ratio23174->SetMaximum(1.171712);
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
   Double_t xAxis432[9] = {50, 75, 100, 125, 150, 175, 200, 225, 250}; 
   
   TH1D *h_dummy2_copy__389 = new TH1D("h_dummy2_copy__389","Data/MC",8, xAxis432);
   h_dummy2_copy__389->SetMinimum(0.5);
   h_dummy2_copy__389->SetMaximum(1.5);
   h_dummy2_copy__389->SetEntries(1.123266e+07);
   h_dummy2_copy__389->SetDirectory(0);
   h_dummy2_copy__389->SetStats(0);
   h_dummy2_copy__389->SetMarkerStyle(20);
   h_dummy2_copy__389->SetMarkerSize(1.2);
   h_dummy2_copy__389->GetXaxis()->SetTitle("m_{bb}^{min. #DeltaR} [GeV]");
   h_dummy2_copy__389->GetXaxis()->SetRange(1,30);
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
   c_c1lep4jin2bin_mbb_mindR->cd();
  
// ------------>Primitives in pad: pad0
   TPad *pad0 = new TPad("pad0", "pad0",0,0.2,1,1);
   pad0->Draw();
   pad0->cd();
   pad0->Range(15.4321,-32518.27,262.3457,292664.4);
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
   Double_t xAxis433[9] = {50, 75, 100, 125, 150, 175, 200, 225, 250}; 
   
   TH1D *h_dummy__390 = new TH1D("h_dummy__390","",8, xAxis433);
   h_dummy__390->SetMinimum(0);
   h_dummy__390->SetMaximum(276405.3);
   h_dummy__390->SetEntries(1.123266e+07);
   h_dummy__390->SetDirectory(0);
   h_dummy__390->SetStats(0);
   h_dummy__390->SetMarkerStyle(20);
   h_dummy__390->SetMarkerSize(1.2);
   h_dummy__390->GetXaxis()->SetRange(1,30);
   h_dummy__390->GetXaxis()->SetLabelFont(43);
   h_dummy__390->GetXaxis()->SetLabelSize(0);
   h_dummy__390->GetXaxis()->SetTitleSize(21);
   h_dummy__390->GetXaxis()->SetTitleOffset(1.4);
   h_dummy__390->GetXaxis()->SetTitleFont(43);
   h_dummy__390->GetYaxis()->SetTitle("Events / 25 GeV");
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
   Double_t xAxis434[9] = {50, 75, 100, 125, 150, 175, 200, 225, 250}; 
   
   TH1F *h_stack_stack_44 = new TH1F("h_stack_stack_44","h_stack",8, xAxis434);
   h_stack_stack_44->SetMinimum(0);
   h_stack_stack_44->SetMaximum(164643.4);
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
   
   Double_t xAxis435[9] = {50, 75, 100, 125, 150, 175, 200, 225, 250}; 
   
   TH1D *c1lep4jin2bin_mbb_mindR_topEW__391 = new TH1D("c1lep4jin2bin_mbb_mindR_topEW__391","",8, xAxis435);
   c1lep4jin2bin_mbb_mindR_topEW__391->SetBinContent(0,15529.97);
   c1lep4jin2bin_mbb_mindR_topEW__391->SetBinContent(1,19734.62);
   c1lep4jin2bin_mbb_mindR_topEW__391->SetBinContent(2,13205.23);
   c1lep4jin2bin_mbb_mindR_topEW__391->SetBinContent(3,16112.72);
   c1lep4jin2bin_mbb_mindR_topEW__391->SetBinContent(4,9076.387);
   c1lep4jin2bin_mbb_mindR_topEW__391->SetBinContent(5,10975.68);
   c1lep4jin2bin_mbb_mindR_topEW__391->SetBinContent(6,5465.005);
   c1lep4jin2bin_mbb_mindR_topEW__391->SetBinContent(7,6054.019);
   c1lep4jin2bin_mbb_mindR_topEW__391->SetBinContent(8,3275.871);
   c1lep4jin2bin_mbb_mindR_topEW__391->SetBinContent(9,16766.96);
   c1lep4jin2bin_mbb_mindR_topEW__391->SetBinError(0,252.2423);
   c1lep4jin2bin_mbb_mindR_topEW__391->SetBinError(1,342.273);
   c1lep4jin2bin_mbb_mindR_topEW__391->SetBinError(2,262.6254);
   c1lep4jin2bin_mbb_mindR_topEW__391->SetBinError(3,277.8264);
   c1lep4jin2bin_mbb_mindR_topEW__391->SetBinError(4,215.4265);
   c1lep4jin2bin_mbb_mindR_topEW__391->SetBinError(5,238.1487);
   c1lep4jin2bin_mbb_mindR_topEW__391->SetBinError(6,167.7789);
   c1lep4jin2bin_mbb_mindR_topEW__391->SetBinError(7,166.8185);
   c1lep4jin2bin_mbb_mindR_topEW__391->SetBinError(8,125.1248);
   c1lep4jin2bin_mbb_mindR_topEW__391->SetBinError(9,290.1923);
   c1lep4jin2bin_mbb_mindR_topEW__391->SetEntries(8198883);
   c1lep4jin2bin_mbb_mindR_topEW__391->SetDirectory(0);
   c1lep4jin2bin_mbb_mindR_topEW__391->SetStats(0);

   ci = TColor::GetColor("#66cc66");
   c1lep4jin2bin_mbb_mindR_topEW__391->SetFillColor(ci);
   c1lep4jin2bin_mbb_mindR_topEW__391->SetMarkerStyle(20);
   c1lep4jin2bin_mbb_mindR_topEW__391->SetMarkerSize(1.2);
   c1lep4jin2bin_mbb_mindR_topEW__391->GetXaxis()->SetTitle("m_{bb}^{#DeltaR min} [GeV]");
   c1lep4jin2bin_mbb_mindR_topEW__391->GetXaxis()->SetRange(1,30);
   c1lep4jin2bin_mbb_mindR_topEW__391->GetXaxis()->SetLabelFont(43);
   c1lep4jin2bin_mbb_mindR_topEW__391->GetXaxis()->SetLabelSize(21);
   c1lep4jin2bin_mbb_mindR_topEW__391->GetXaxis()->SetTitleSize(21);
   c1lep4jin2bin_mbb_mindR_topEW__391->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_mbb_mindR_topEW__391->GetXaxis()->SetTitleFont(43);
   c1lep4jin2bin_mbb_mindR_topEW__391->GetYaxis()->SetLabelFont(43);
   c1lep4jin2bin_mbb_mindR_topEW__391->GetYaxis()->SetLabelSize(21);
   c1lep4jin2bin_mbb_mindR_topEW__391->GetYaxis()->SetTitleSize(21);
   c1lep4jin2bin_mbb_mindR_topEW__391->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_mbb_mindR_topEW__391->GetYaxis()->SetTitleFont(43);
   c1lep4jin2bin_mbb_mindR_topEW__391->GetZaxis()->SetLabelFont(43);
   c1lep4jin2bin_mbb_mindR_topEW__391->GetZaxis()->SetLabelSize(21);
   c1lep4jin2bin_mbb_mindR_topEW__391->GetZaxis()->SetTitleSize(21);
   c1lep4jin2bin_mbb_mindR_topEW__391->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jin2bin_mbb_mindR_topEW,"");
   Double_t xAxis436[9] = {50, 75, 100, 125, 150, 175, 200, 225, 250}; 
   
   TH1D *c1lep4jin2bin_mbb_mindR_ttbarbb__392 = new TH1D("c1lep4jin2bin_mbb_mindR_ttbarbb__392","",8, xAxis436);
   c1lep4jin2bin_mbb_mindR_ttbarbb__392->SetBinContent(0,4849.764);
   c1lep4jin2bin_mbb_mindR_ttbarbb__392->SetBinContent(1,8321.058);
   c1lep4jin2bin_mbb_mindR_ttbarbb__392->SetBinContent(2,6057.266);
   c1lep4jin2bin_mbb_mindR_ttbarbb__392->SetBinContent(3,8301.993);
   c1lep4jin2bin_mbb_mindR_ttbarbb__392->SetBinContent(4,4707.627);
   c1lep4jin2bin_mbb_mindR_ttbarbb__392->SetBinContent(5,5556.313);
   c1lep4jin2bin_mbb_mindR_ttbarbb__392->SetBinContent(6,2796.855);
   c1lep4jin2bin_mbb_mindR_ttbarbb__392->SetBinContent(7,3232.913);
   c1lep4jin2bin_mbb_mindR_ttbarbb__392->SetBinContent(8,1690.144);
   c1lep4jin2bin_mbb_mindR_ttbarbb__392->SetBinContent(9,8227.413);
   c1lep4jin2bin_mbb_mindR_ttbarbb__392->SetBinError(0,43.46948);
   c1lep4jin2bin_mbb_mindR_ttbarbb__392->SetBinError(1,57.90632);
   c1lep4jin2bin_mbb_mindR_ttbarbb__392->SetBinError(2,49.42285);
   c1lep4jin2bin_mbb_mindR_ttbarbb__392->SetBinError(3,57.58761);
   c1lep4jin2bin_mbb_mindR_ttbarbb__392->SetBinError(4,43.62497);
   c1lep4jin2bin_mbb_mindR_ttbarbb__392->SetBinError(5,47.80802);
   c1lep4jin2bin_mbb_mindR_ttbarbb__392->SetBinError(6,32.97909);
   c1lep4jin2bin_mbb_mindR_ttbarbb__392->SetBinError(7,35.62399);
   c1lep4jin2bin_mbb_mindR_ttbarbb__392->SetBinError(8,26.39667);
   c1lep4jin2bin_mbb_mindR_ttbarbb__392->SetBinError(9,56.44438);
   c1lep4jin2bin_mbb_mindR_ttbarbb__392->SetEntries(197629);
   c1lep4jin2bin_mbb_mindR_ttbarbb__392->SetDirectory(0);
   c1lep4jin2bin_mbb_mindR_ttbarbb__392->SetStats(0);

   ci = TColor::GetColor("#6666cc");
   c1lep4jin2bin_mbb_mindR_ttbarbb__392->SetFillColor(ci);
   c1lep4jin2bin_mbb_mindR_ttbarbb__392->SetMarkerStyle(20);
   c1lep4jin2bin_mbb_mindR_ttbarbb__392->SetMarkerSize(1.2);
   c1lep4jin2bin_mbb_mindR_ttbarbb__392->GetXaxis()->SetTitle("m_{bb}^{#DeltaR min} [GeV]");
   c1lep4jin2bin_mbb_mindR_ttbarbb__392->GetXaxis()->SetRange(1,30);
   c1lep4jin2bin_mbb_mindR_ttbarbb__392->GetXaxis()->SetLabelFont(43);
   c1lep4jin2bin_mbb_mindR_ttbarbb__392->GetXaxis()->SetLabelSize(21);
   c1lep4jin2bin_mbb_mindR_ttbarbb__392->GetXaxis()->SetTitleSize(21);
   c1lep4jin2bin_mbb_mindR_ttbarbb__392->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_mbb_mindR_ttbarbb__392->GetXaxis()->SetTitleFont(43);
   c1lep4jin2bin_mbb_mindR_ttbarbb__392->GetYaxis()->SetLabelFont(43);
   c1lep4jin2bin_mbb_mindR_ttbarbb__392->GetYaxis()->SetLabelSize(21);
   c1lep4jin2bin_mbb_mindR_ttbarbb__392->GetYaxis()->SetTitleSize(21);
   c1lep4jin2bin_mbb_mindR_ttbarbb__392->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_mbb_mindR_ttbarbb__392->GetYaxis()->SetTitleFont(43);
   c1lep4jin2bin_mbb_mindR_ttbarbb__392->GetZaxis()->SetLabelFont(43);
   c1lep4jin2bin_mbb_mindR_ttbarbb__392->GetZaxis()->SetLabelSize(21);
   c1lep4jin2bin_mbb_mindR_ttbarbb__392->GetZaxis()->SetTitleSize(21);
   c1lep4jin2bin_mbb_mindR_ttbarbb__392->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jin2bin_mbb_mindR_ttbarbb,"");
   Double_t xAxis437[9] = {50, 75, 100, 125, 150, 175, 200, 225, 250}; 
   
   TH1D *c1lep4jin2bin_mbb_mindR_ttbarcc__393 = new TH1D("c1lep4jin2bin_mbb_mindR_ttbarcc__393","",8, xAxis437);
   c1lep4jin2bin_mbb_mindR_ttbarcc__393->SetBinContent(0,4530.759);
   c1lep4jin2bin_mbb_mindR_ttbarcc__393->SetBinContent(1,10701.16);
   c1lep4jin2bin_mbb_mindR_ttbarcc__393->SetBinContent(2,9409.312);
   c1lep4jin2bin_mbb_mindR_ttbarcc__393->SetBinContent(3,14625.35);
   c1lep4jin2bin_mbb_mindR_ttbarcc__393->SetBinContent(4,8697.484);
   c1lep4jin2bin_mbb_mindR_ttbarcc__393->SetBinContent(5,10664.56);
   c1lep4jin2bin_mbb_mindR_ttbarcc__393->SetBinContent(6,5539.461);
   c1lep4jin2bin_mbb_mindR_ttbarcc__393->SetBinContent(7,6453.185);
   c1lep4jin2bin_mbb_mindR_ttbarcc__393->SetBinContent(8,3262.07);
   c1lep4jin2bin_mbb_mindR_ttbarcc__393->SetBinContent(9,13599.06);
   c1lep4jin2bin_mbb_mindR_ttbarcc__393->SetBinError(0,41.47057);
   c1lep4jin2bin_mbb_mindR_ttbarcc__393->SetBinError(1,65.43686);
   c1lep4jin2bin_mbb_mindR_ttbarcc__393->SetBinError(2,61.0547);
   c1lep4jin2bin_mbb_mindR_ttbarcc__393->SetBinError(3,76.08506);
   c1lep4jin2bin_mbb_mindR_ttbarcc__393->SetBinError(4,58.05611);
   c1lep4jin2bin_mbb_mindR_ttbarcc__393->SetBinError(5,64.5186);
   c1lep4jin2bin_mbb_mindR_ttbarcc__393->SetBinError(6,46.56753);
   c1lep4jin2bin_mbb_mindR_ttbarcc__393->SetBinError(7,49.5454);
   c1lep4jin2bin_mbb_mindR_ttbarcc__393->SetBinError(8,36.83132);
   c1lep4jin2bin_mbb_mindR_ttbarcc__393->SetBinError(9,72.8587);
   c1lep4jin2bin_mbb_mindR_ttbarcc__393->SetEntries(319744);
   c1lep4jin2bin_mbb_mindR_ttbarcc__393->SetDirectory(0);
   c1lep4jin2bin_mbb_mindR_ttbarcc__393->SetStats(0);

   ci = TColor::GetColor("#ccccff");
   c1lep4jin2bin_mbb_mindR_ttbarcc__393->SetFillColor(ci);
   c1lep4jin2bin_mbb_mindR_ttbarcc__393->SetMarkerStyle(20);
   c1lep4jin2bin_mbb_mindR_ttbarcc__393->SetMarkerSize(1.2);
   c1lep4jin2bin_mbb_mindR_ttbarcc__393->GetXaxis()->SetTitle("m_{bb}^{#DeltaR min} [GeV]");
   c1lep4jin2bin_mbb_mindR_ttbarcc__393->GetXaxis()->SetRange(1,30);
   c1lep4jin2bin_mbb_mindR_ttbarcc__393->GetXaxis()->SetLabelFont(43);
   c1lep4jin2bin_mbb_mindR_ttbarcc__393->GetXaxis()->SetLabelSize(21);
   c1lep4jin2bin_mbb_mindR_ttbarcc__393->GetXaxis()->SetTitleSize(21);
   c1lep4jin2bin_mbb_mindR_ttbarcc__393->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_mbb_mindR_ttbarcc__393->GetXaxis()->SetTitleFont(43);
   c1lep4jin2bin_mbb_mindR_ttbarcc__393->GetYaxis()->SetLabelFont(43);
   c1lep4jin2bin_mbb_mindR_ttbarcc__393->GetYaxis()->SetLabelSize(21);
   c1lep4jin2bin_mbb_mindR_ttbarcc__393->GetYaxis()->SetTitleSize(21);
   c1lep4jin2bin_mbb_mindR_ttbarcc__393->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_mbb_mindR_ttbarcc__393->GetYaxis()->SetTitleFont(43);
   c1lep4jin2bin_mbb_mindR_ttbarcc__393->GetZaxis()->SetLabelFont(43);
   c1lep4jin2bin_mbb_mindR_ttbarcc__393->GetZaxis()->SetLabelSize(21);
   c1lep4jin2bin_mbb_mindR_ttbarcc__393->GetZaxis()->SetTitleSize(21);
   c1lep4jin2bin_mbb_mindR_ttbarcc__393->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jin2bin_mbb_mindR_ttbarcc,"");
   Double_t xAxis438[9] = {50, 75, 100, 125, 150, 175, 200, 225, 250}; 
   
   TH1D *c1lep4jin2bin_mbb_mindR_ttbarlight__394 = new TH1D("c1lep4jin2bin_mbb_mindR_ttbarlight__394","",8, xAxis438);
   c1lep4jin2bin_mbb_mindR_ttbarlight__394->SetBinContent(0,34665.16);
   c1lep4jin2bin_mbb_mindR_ttbarlight__394->SetBinContent(1,81768.2);
   c1lep4jin2bin_mbb_mindR_ttbarlight__394->SetBinContent(2,72512.81);
   c1lep4jin2bin_mbb_mindR_ttbarlight__394->SetBinContent(3,114518.4);
   c1lep4jin2bin_mbb_mindR_ttbarlight__394->SetBinContent(4,68668);
   c1lep4jin2bin_mbb_mindR_ttbarlight__394->SetBinContent(5,84305.76);
   c1lep4jin2bin_mbb_mindR_ttbarlight__394->SetBinContent(6,44262.87);
   c1lep4jin2bin_mbb_mindR_ttbarlight__394->SetBinContent(7,51184.4);
   c1lep4jin2bin_mbb_mindR_ttbarlight__394->SetBinContent(8,25777.47);
   c1lep4jin2bin_mbb_mindR_ttbarlight__394->SetBinContent(9,102958.6);
   c1lep4jin2bin_mbb_mindR_ttbarlight__394->SetBinError(0,116.0731);
   c1lep4jin2bin_mbb_mindR_ttbarlight__394->SetBinError(1,179.5554);
   c1lep4jin2bin_mbb_mindR_ttbarlight__394->SetBinError(2,167.4146);
   c1lep4jin2bin_mbb_mindR_ttbarlight__394->SetBinError(3,211.0927);
   c1lep4jin2bin_mbb_mindR_ttbarlight__394->SetBinError(4,164.0439);
   c1lep4jin2bin_mbb_mindR_ttbarlight__394->SetBinError(5,180.9104);
   c1lep4jin2bin_mbb_mindR_ttbarlight__394->SetBinError(6,130.9369);
   c1lep4jin2bin_mbb_mindR_ttbarlight__394->SetBinError(7,140.8749);
   c1lep4jin2bin_mbb_mindR_ttbarlight__394->SetBinError(8,99.93768);
   c1lep4jin2bin_mbb_mindR_ttbarlight__394->SetBinError(9,198.7967);
   c1lep4jin2bin_mbb_mindR_ttbarlight__394->SetEntries(2516401);
   c1lep4jin2bin_mbb_mindR_ttbarlight__394->SetDirectory(0);
   c1lep4jin2bin_mbb_mindR_ttbarlight__394->SetStats(0);
   c1lep4jin2bin_mbb_mindR_ttbarlight__394->SetMarkerStyle(20);
   c1lep4jin2bin_mbb_mindR_ttbarlight__394->SetMarkerSize(1.2);
   c1lep4jin2bin_mbb_mindR_ttbarlight__394->GetXaxis()->SetTitle("m_{bb}^{#DeltaR min} [GeV]");
   c1lep4jin2bin_mbb_mindR_ttbarlight__394->GetXaxis()->SetRange(1,30);
   c1lep4jin2bin_mbb_mindR_ttbarlight__394->GetXaxis()->SetLabelFont(43);
   c1lep4jin2bin_mbb_mindR_ttbarlight__394->GetXaxis()->SetLabelSize(21);
   c1lep4jin2bin_mbb_mindR_ttbarlight__394->GetXaxis()->SetTitleSize(21);
   c1lep4jin2bin_mbb_mindR_ttbarlight__394->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_mbb_mindR_ttbarlight__394->GetXaxis()->SetTitleFont(43);
   c1lep4jin2bin_mbb_mindR_ttbarlight__394->GetYaxis()->SetLabelFont(43);
   c1lep4jin2bin_mbb_mindR_ttbarlight__394->GetYaxis()->SetLabelSize(21);
   c1lep4jin2bin_mbb_mindR_ttbarlight__394->GetYaxis()->SetTitleSize(21);
   c1lep4jin2bin_mbb_mindR_ttbarlight__394->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_mbb_mindR_ttbarlight__394->GetYaxis()->SetTitleFont(43);
   c1lep4jin2bin_mbb_mindR_ttbarlight__394->GetZaxis()->SetLabelFont(43);
   c1lep4jin2bin_mbb_mindR_ttbarlight__394->GetZaxis()->SetLabelSize(21);
   c1lep4jin2bin_mbb_mindR_ttbarlight__394->GetZaxis()->SetTitleSize(21);
   c1lep4jin2bin_mbb_mindR_ttbarlight__394->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jin2bin_mbb_mindR_ttbarlight,"");
   Double_t xAxis439[9] = {50, 75, 100, 125, 150, 175, 200, 225, 250}; 
   
   TH1D *c1lep4jin2bin_mbb_mindR_uHcW__395 = new TH1D("c1lep4jin2bin_mbb_mindR_uHcW__395","",8, xAxis439);
   c1lep4jin2bin_mbb_mindR_uHcW__395->SetBinContent(0,750.2953);
   c1lep4jin2bin_mbb_mindR_uHcW__395->SetBinContent(1,1616.242);
   c1lep4jin2bin_mbb_mindR_uHcW__395->SetBinContent(2,1790.446);
   c1lep4jin2bin_mbb_mindR_uHcW__395->SetBinContent(3,3244.771);
   c1lep4jin2bin_mbb_mindR_uHcW__395->SetBinContent(4,1168.048);
   c1lep4jin2bin_mbb_mindR_uHcW__395->SetBinContent(5,978.2855);
   c1lep4jin2bin_mbb_mindR_uHcW__395->SetBinContent(6,400.7202);
   c1lep4jin2bin_mbb_mindR_uHcW__395->SetBinContent(7,493.8642);
   c1lep4jin2bin_mbb_mindR_uHcW__395->SetBinContent(8,272.7875);
   c1lep4jin2bin_mbb_mindR_uHcW__395->SetBinContent(9,949.6139);
   c1lep4jin2bin_mbb_mindR_uHcW__395->SetBinError(0,27.7441);
   c1lep4jin2bin_mbb_mindR_uHcW__395->SetBinError(1,40.00793);
   c1lep4jin2bin_mbb_mindR_uHcW__395->SetBinError(2,43.32763);
   c1lep4jin2bin_mbb_mindR_uHcW__395->SetBinError(3,57.33467);
   c1lep4jin2bin_mbb_mindR_uHcW__395->SetBinError(4,34.99427);
   c1lep4jin2bin_mbb_mindR_uHcW__395->SetBinError(5,32.585);
   c1lep4jin2bin_mbb_mindR_uHcW__395->SetBinError(6,21.88154);
   c1lep4jin2bin_mbb_mindR_uHcW__395->SetBinError(7,24.36537);
   c1lep4jin2bin_mbb_mindR_uHcW__395->SetBinError(8,17.03626);
   c1lep4jin2bin_mbb_mindR_uHcW__395->SetBinError(9,33.02343);
   c1lep4jin2bin_mbb_mindR_uHcW__395->SetEntries(70178);
   c1lep4jin2bin_mbb_mindR_uHcW__395->SetDirectory(0);
   c1lep4jin2bin_mbb_mindR_uHcW__395->SetStats(0);
   c1lep4jin2bin_mbb_mindR_uHcW__395->SetFillColor(2);
   c1lep4jin2bin_mbb_mindR_uHcW__395->SetLineColor(2);
   c1lep4jin2bin_mbb_mindR_uHcW__395->SetMarkerStyle(20);
   c1lep4jin2bin_mbb_mindR_uHcW__395->SetMarkerSize(1.2);
   c1lep4jin2bin_mbb_mindR_uHcW__395->GetXaxis()->SetTitle("m_{bb}^{#DeltaR min} [GeV]");
   c1lep4jin2bin_mbb_mindR_uHcW__395->GetXaxis()->SetRange(1,30);
   c1lep4jin2bin_mbb_mindR_uHcW__395->GetXaxis()->SetLabelFont(43);
   c1lep4jin2bin_mbb_mindR_uHcW__395->GetXaxis()->SetLabelSize(21);
   c1lep4jin2bin_mbb_mindR_uHcW__395->GetXaxis()->SetTitleSize(21);
   c1lep4jin2bin_mbb_mindR_uHcW__395->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_mbb_mindR_uHcW__395->GetXaxis()->SetTitleFont(43);
   c1lep4jin2bin_mbb_mindR_uHcW__395->GetYaxis()->SetLabelFont(43);
   c1lep4jin2bin_mbb_mindR_uHcW__395->GetYaxis()->SetLabelSize(21);
   c1lep4jin2bin_mbb_mindR_uHcW__395->GetYaxis()->SetTitleSize(21);
   c1lep4jin2bin_mbb_mindR_uHcW__395->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_mbb_mindR_uHcW__395->GetYaxis()->SetTitleFont(43);
   c1lep4jin2bin_mbb_mindR_uHcW__395->GetZaxis()->SetLabelFont(43);
   c1lep4jin2bin_mbb_mindR_uHcW__395->GetZaxis()->SetLabelSize(21);
   c1lep4jin2bin_mbb_mindR_uHcW__395->GetZaxis()->SetTitleSize(21);
   c1lep4jin2bin_mbb_mindR_uHcW__395->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jin2bin_mbb_mindR_uHcW,"");
   h_stack->Draw("hist same");
   
   Double_t g_totErr_fx3175[8] = {
   62.5,
   87.5,
   112.5,
   137.5,
   162.5,
   187.5,
   212.5,
   237.5};
   Double_t g_totErr_fy3175[8] = {
   120525,
   101184.6,
   153558.5,
   91149.5,
   111502.3,
   58064.19,
   66924.51,
   34005.55};
   Double_t g_totErr_felx3175[8] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t g_totErr_fely3175[8] = {
   17246.32,
   13840.76,
   19974,
   11227.24,
   13332.11,
   6880.439,
   7979.438,
   4051.766};
   Double_t g_totErr_fehx3175[8] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t g_totErr_fehy3175[8] = {
   17246.32,
   13840.76,
   19974,
   11227.24,
   13332.11,
   6880.439,
   7979.438,
   4051.766};
   grae = new TGraphAsymmErrors(8,g_totErr_fx3175,g_totErr_fy3175,g_totErr_felx3175,g_totErr_fehx3175,g_totErr_fely3175,g_totErr_fehy3175);
   grae->SetName("g_totErr");
   grae->SetTitle("");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(3354);
   grae->SetLineColor(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0);
   
   TH1F *Graph_g_totErr3175 = new TH1F("Graph_g_totErr3175","",100,30,270);
   Graph_g_totErr3175->SetMinimum(15595.92);
   Graph_g_totErr3175->SetMaximum(187890.4);
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
   
   Double_t Graph_from_c1lep4jin2bin_mbb_mindR_Data_fx3176[8] = {
   62.5,
   87.5,
   112.5,
   137.5,
   162.5,
   187.5,
   212.5,
   237.5};
   Double_t Graph_from_c1lep4jin2bin_mbb_mindR_Data_fy3176[8] = {
   116470,
   97747,
   147644,
   86375,
   104778,
   55166,
   63612,
   32280};
   Double_t Graph_from_c1lep4jin2bin_mbb_mindR_Data_felx3176[8] = {
   12.475,
   12.475,
   12.475,
   12.475,
   12.475,
   12.475,
   12.475,
   12.475};
   Double_t Graph_from_c1lep4jin2bin_mbb_mindR_Data_fely3176[8] = {
   341.277,
   312.6452,
   384.2447,
   293.8962,
   323.6943,
   234.8744,
   252.2142,
   179.6664};
   Double_t Graph_from_c1lep4jin2bin_mbb_mindR_Data_fehx3176[8] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t Graph_from_c1lep4jin2bin_mbb_mindR_Data_fehy3176[8] = {
   341.277,
   312.6452,
   384.2447,
   293.8962,
   323.6943,
   234.8744,
   252.2142,
   179.6664};
   grae = new TGraphAsymmErrors(8,Graph_from_c1lep4jin2bin_mbb_mindR_Data_fx3176,Graph_from_c1lep4jin2bin_mbb_mindR_Data_fy3176,Graph_from_c1lep4jin2bin_mbb_mindR_Data_felx3176,Graph_from_c1lep4jin2bin_mbb_mindR_Data_fehx3176,Graph_from_c1lep4jin2bin_mbb_mindR_Data_fely3176,Graph_from_c1lep4jin2bin_mbb_mindR_Data_fehy3176);
   grae->SetName("Graph_from_c1lep4jin2bin_mbb_mindR_Data");
   grae->SetTitle("");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_c1lep4jin2bin_mbb_mindR_Data3176 = new TH1F("Graph_Graph_from_c1lep4jin2bin_mbb_mindR_Data3176","",100,30.0275,269.9975);
   Graph_Graph_from_c1lep4jin2bin_mbb_mindR_Data3176->SetMinimum(20507.54);
   Graph_Graph_from_c1lep4jin2bin_mbb_mindR_Data3176->SetMaximum(159621);
   Graph_Graph_from_c1lep4jin2bin_mbb_mindR_Data3176->SetDirectory(0);
   Graph_Graph_from_c1lep4jin2bin_mbb_mindR_Data3176->SetStats(0);
   Graph_Graph_from_c1lep4jin2bin_mbb_mindR_Data3176->SetLineWidth(2);
   Graph_Graph_from_c1lep4jin2bin_mbb_mindR_Data3176->SetMarkerStyle(20);
   Graph_Graph_from_c1lep4jin2bin_mbb_mindR_Data3176->SetMarkerSize(1.2);
   Graph_Graph_from_c1lep4jin2bin_mbb_mindR_Data3176->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep4jin2bin_mbb_mindR_Data3176->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep4jin2bin_mbb_mindR_Data3176->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep4jin2bin_mbb_mindR_Data3176->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep4jin2bin_mbb_mindR_Data3176->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep4jin2bin_mbb_mindR_Data3176->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep4jin2bin_mbb_mindR_Data3176->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep4jin2bin_mbb_mindR_Data3176->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep4jin2bin_mbb_mindR_Data3176->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep4jin2bin_mbb_mindR_Data3176->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep4jin2bin_mbb_mindR_Data3176->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep4jin2bin_mbb_mindR_Data3176->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep4jin2bin_mbb_mindR_Data3176->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep4jin2bin_mbb_mindR_Data3176->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_c1lep4jin2bin_mbb_mindR_Data3176);
   
   grae->Draw("ep1 ");
   Double_t xAxis440[9] = {50, 75, 100, 125, 150, 175, 200, 225, 250}; 
   
   TH1D *h_dummy_copy__396 = new TH1D("h_dummy_copy__396","",8, xAxis440);
   h_dummy_copy__396->SetEntries(1.123266e+07);
   h_dummy_copy__396->SetDirectory(0);
   h_dummy_copy__396->SetStats(0);
   h_dummy_copy__396->SetMarkerStyle(20);
   h_dummy_copy__396->SetMarkerSize(1.2);
   h_dummy_copy__396->GetXaxis()->SetTitle("m_{bb}^{min. #DeltaR} [GeV]");
   h_dummy_copy__396->GetXaxis()->SetRange(1,30);
   h_dummy_copy__396->GetXaxis()->SetLabelFont(43);
   h_dummy_copy__396->GetXaxis()->SetLabelSize(21);
   h_dummy_copy__396->GetXaxis()->SetTitleSize(21);
   h_dummy_copy__396->GetXaxis()->SetTitleOffset(1.4);
   h_dummy_copy__396->GetXaxis()->SetTitleFont(43);
   h_dummy_copy__396->GetYaxis()->SetTitle("Events / 25 GeV");
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
   TLegendEntry *entry=leg->AddEntry("c1lep4jin2bin_mbb_mindR_Data","Data","lep");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep4jin2bin_mbb_mindR_uHcW","t#bar{t}#rightarrowWbHc (BR=1%)","f");
   entry->SetFillColor(2);
   entry->SetFillStyle(1001);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep4jin2bin_mbb_mindR_ttbarlight","t#bar{t}+light","f");
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep4jin2bin_mbb_mindR_ttbarcc","t#bar{t}+cc","f");

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
   entry=leg->AddEntry("c1lep4jin2bin_mbb_mindR_ttbarbb","t#bar{t}+bb","f");

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
   entry=leg->AddEntry("c1lep4jin2bin_mbb_mindR_topEW","Non-t#bar{t}","f");

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
   c_c1lep4jin2bin_mbb_mindR->cd();
   c_c1lep4jin2bin_mbb_mindR->Modified();
   c_c1lep4jin2bin_mbb_mindR->cd();
   c_c1lep4jin2bin_mbb_mindR->SetSelected(c_c1lep4jin2bin_mbb_mindR);
}
