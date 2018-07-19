void c1lep5jex3bex_meff()
{
//=========Macro generated from canvas: c_c1lep5jex3bex_meff/c_c1lep5jex3bex_meff
//=========  (Thu Jul 19 17:38:03 2018) by ROOT version6.04/14
   TCanvas *c_c1lep5jex3bex_meff = new TCanvas("c_c1lep5jex3bex_meff", "c_c1lep5jex3bex_meff",0,0,600,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c_c1lep5jex3bex_meff->SetHighLightColor(2);
   c_c1lep5jex3bex_meff->Range(0,0,1,1);
   c_c1lep5jex3bex_meff->SetFillColor(0);
   c_c1lep5jex3bex_meff->SetBorderMode(0);
   c_c1lep5jex3bex_meff->SetBorderSize(2);
   c_c1lep5jex3bex_meff->SetTickx(1);
   c_c1lep5jex3bex_meff->SetTicky(1);
   c_c1lep5jex3bex_meff->SetLeftMargin(0.16);
   c_c1lep5jex3bex_meff->SetRightMargin(0.05);
   c_c1lep5jex3bex_meff->SetTopMargin(0.05);
   c_c1lep5jex3bex_meff->SetBottomMargin(0.16);
   c_c1lep5jex3bex_meff->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0,1,0.28);
   pad1->Draw();
   pad1->cd();
   pad1->Range(4.012346,-0.0873016,868.2099,1.5);
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
   Double_t xAxis111[8] = {125, 225, 325, 425, 525, 625, 725, 825}; 
   
   TH1D *h_dummy2__100 = new TH1D("h_dummy2__100","Data/MC",7, xAxis111);
   h_dummy2__100->SetMinimum(0.5);
   h_dummy2__100->SetMaximum(1.5);
   h_dummy2__100->SetEntries(1363497);
   h_dummy2__100->SetDirectory(0);
   h_dummy2__100->SetStats(0);
   h_dummy2__100->SetMarkerStyle(20);
   h_dummy2__100->SetMarkerSize(1.2);
   h_dummy2__100->GetXaxis()->SetTitle("m_{eff} [GeV]");
   h_dummy2__100->GetXaxis()->SetRange(1,70);
   h_dummy2__100->GetXaxis()->SetLabelFont(43);
   h_dummy2__100->GetXaxis()->SetLabelOffset(0.025);
   h_dummy2__100->GetXaxis()->SetLabelSize(16.8);
   h_dummy2__100->GetXaxis()->SetTitleSize(21);
   h_dummy2__100->GetXaxis()->SetTitleOffset(5.05);
   h_dummy2__100->GetXaxis()->SetTitleFont(43);
   h_dummy2__100->GetYaxis()->SetTitle("Data / Bkg");
   h_dummy2__100->GetYaxis()->SetNdivisions(-504);
   h_dummy2__100->GetYaxis()->SetLabelFont(43);
   h_dummy2__100->GetYaxis()->SetLabelOffset(0.02);
   h_dummy2__100->GetYaxis()->SetLabelSize(16.8);
   h_dummy2__100->GetYaxis()->SetTitleSize(21);
   h_dummy2__100->GetYaxis()->SetTitleOffset(2.4);
   h_dummy2__100->GetYaxis()->SetTitleFont(43);
   h_dummy2__100->GetZaxis()->SetLabelFont(43);
   h_dummy2__100->GetZaxis()->SetLabelSize(21);
   h_dummy2__100->GetZaxis()->SetTitleSize(21);
   h_dummy2__100->GetZaxis()->SetTitleFont(43);
   h_dummy2__100->Draw("HIST");
   
   Double_t Graph_from_h_ratio_fx3045[7] = {
   175,
   275,
   375,
   475,
   575,
   675,
   775};
   Double_t Graph_from_h_ratio_fy3045[7] = {
   0.585592,
   1.268294,
   1.189456,
   1.138558,
   1.117647,
   1.106057,
   1.059802};
   Double_t Graph_from_h_ratio_felx3045[7] = {
   49.9,
   49.9,
   49.9,
   49.9,
   49.9,
   49.9,
   49.9};
   Double_t Graph_from_h_ratio_fely3045[7] = {
   0.1126972,
   0.03286795,
   0.01951501,
   0.02108079,
   0.02765742,
   0.03760708,
   0.05046678};
   Double_t Graph_from_h_ratio_fehx3045[7] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t Graph_from_h_ratio_fehy3045[7] = {
   0.1126972,
   0.03286795,
   0.01951501,
   0.02108079,
   0.02765742,
   0.03760708,
   0.05046678};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(7,Graph_from_h_ratio_fx3045,Graph_from_h_ratio_fy3045,Graph_from_h_ratio_felx3045,Graph_from_h_ratio_fehx3045,Graph_from_h_ratio_fely3045,Graph_from_h_ratio_fehy3045);
   grae->SetName("Graph_from_h_ratio");
   grae->SetTitle("");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(24);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_h_ratio3045 = new TH1F("Graph_Graph_from_h_ratio3045","",100,55.11,894.99);
   Graph_Graph_from_h_ratio3045->SetMinimum(0.390068);
   Graph_Graph_from_h_ratio3045->SetMaximum(1.383989);
   Graph_Graph_from_h_ratio3045->SetDirectory(0);
   Graph_Graph_from_h_ratio3045->SetStats(0);
   Graph_Graph_from_h_ratio3045->SetLineWidth(2);
   Graph_Graph_from_h_ratio3045->SetMarkerStyle(20);
   Graph_Graph_from_h_ratio3045->SetMarkerSize(1.2);
   Graph_Graph_from_h_ratio3045->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3045->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3045->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3045->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3045->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3045->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3045->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3045->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3045->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3045->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3045->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3045->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3045->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3045->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_h_ratio3045);
   
   grae->Draw("pe0");
   TLine *line = new TLine(125,1,825,1);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t g_ratio2_fx3046[7] = {
   175,
   275,
   375,
   475,
   575,
   675,
   775};
   Double_t g_ratio2_fy3046[7] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t g_ratio2_felx3046[7] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t g_ratio2_fely3046[7] = {
   0.3963623,
   0.2313766,
   0.2006702,
   0.1823035,
   0.1786801,
   0.1803272,
   0.2008074};
   Double_t g_ratio2_fehx3046[7] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t g_ratio2_fehy3046[7] = {
   0.3963623,
   0.2313766,
   0.2006702,
   0.1823035,
   0.1786801,
   0.1803272,
   0.2008074};
   grae = new TGraphAsymmErrors(7,g_ratio2_fx3046,g_ratio2_fy3046,g_ratio2_felx3046,g_ratio2_fehx3046,g_ratio2_fely3046,g_ratio2_fehy3046);
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
   
   TH1F *Graph_g_ratio23046 = new TH1F("Graph_g_ratio23046","",100,55,895);
   Graph_g_ratio23046->SetMinimum(0.5243653);
   Graph_g_ratio23046->SetMaximum(1.475635);
   Graph_g_ratio23046->SetDirectory(0);
   Graph_g_ratio23046->SetStats(0);
   Graph_g_ratio23046->SetLineWidth(2);
   Graph_g_ratio23046->SetMarkerStyle(20);
   Graph_g_ratio23046->SetMarkerSize(1.2);
   Graph_g_ratio23046->GetXaxis()->SetLabelFont(43);
   Graph_g_ratio23046->GetXaxis()->SetLabelSize(21);
   Graph_g_ratio23046->GetXaxis()->SetTitleSize(21);
   Graph_g_ratio23046->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23046->GetXaxis()->SetTitleFont(43);
   Graph_g_ratio23046->GetYaxis()->SetLabelFont(43);
   Graph_g_ratio23046->GetYaxis()->SetLabelSize(21);
   Graph_g_ratio23046->GetYaxis()->SetTitleSize(21);
   Graph_g_ratio23046->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23046->GetYaxis()->SetTitleFont(43);
   Graph_g_ratio23046->GetZaxis()->SetLabelFont(43);
   Graph_g_ratio23046->GetZaxis()->SetLabelSize(21);
   Graph_g_ratio23046->GetZaxis()->SetTitleSize(21);
   Graph_g_ratio23046->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_ratio23046);
   
   grae->Draw("e2");
   Double_t xAxis112[8] = {125, 225, 325, 425, 525, 625, 725, 825}; 
   
   TH1D *h_dummy2_copy__101 = new TH1D("h_dummy2_copy__101","Data/MC",7, xAxis112);
   h_dummy2_copy__101->SetMinimum(0.5);
   h_dummy2_copy__101->SetMaximum(1.5);
   h_dummy2_copy__101->SetEntries(1363497);
   h_dummy2_copy__101->SetDirectory(0);
   h_dummy2_copy__101->SetStats(0);
   h_dummy2_copy__101->SetMarkerStyle(20);
   h_dummy2_copy__101->SetMarkerSize(1.2);
   h_dummy2_copy__101->GetXaxis()->SetTitle("m_{eff} [GeV]");
   h_dummy2_copy__101->GetXaxis()->SetRange(1,70);
   h_dummy2_copy__101->GetXaxis()->SetLabelFont(43);
   h_dummy2_copy__101->GetXaxis()->SetLabelOffset(0.025);
   h_dummy2_copy__101->GetXaxis()->SetLabelSize(16.8);
   h_dummy2_copy__101->GetXaxis()->SetTitleSize(21);
   h_dummy2_copy__101->GetXaxis()->SetTitleOffset(5.05);
   h_dummy2_copy__101->GetXaxis()->SetTitleFont(43);
   h_dummy2_copy__101->GetYaxis()->SetTitle("Data / Bkg");
   h_dummy2_copy__101->GetYaxis()->SetNdivisions(-504);
   h_dummy2_copy__101->GetYaxis()->SetLabelFont(43);
   h_dummy2_copy__101->GetYaxis()->SetLabelOffset(0.02);
   h_dummy2_copy__101->GetYaxis()->SetLabelSize(16.8);
   h_dummy2_copy__101->GetYaxis()->SetTitleSize(21);
   h_dummy2_copy__101->GetYaxis()->SetTitleOffset(2.4);
   h_dummy2_copy__101->GetYaxis()->SetTitleFont(43);
   h_dummy2_copy__101->GetZaxis()->SetLabelFont(43);
   h_dummy2_copy__101->GetZaxis()->SetLabelSize(21);
   h_dummy2_copy__101->GetZaxis()->SetTitleSize(21);
   h_dummy2_copy__101->GetZaxis()->SetTitleFont(43);
   h_dummy2_copy__101->Draw("sameaxis");
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
   c_c1lep5jex3bex_meff->cd();
  
// ------------>Primitives in pad: pad0
   TPad *pad0 = new TPad("pad0", "pad0",0,0.2,1,1);
   pad0->Draw();
   pad0->cd();
   pad0->Range(4.012346,-799.6131,868.2099,7196.517);
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
   Double_t xAxis113[8] = {125, 225, 325, 425, 525, 625, 725, 825}; 
   
   TH1D *h_dummy__102 = new TH1D("h_dummy__102","",7, xAxis113);
   h_dummy__102->SetMinimum(0);
   h_dummy__102->SetMaximum(6796.711);
   h_dummy__102->SetEntries(1363497);
   h_dummy__102->SetDirectory(0);
   h_dummy__102->SetStats(0);
   h_dummy__102->SetMarkerStyle(20);
   h_dummy__102->SetMarkerSize(1.2);
   h_dummy__102->GetXaxis()->SetRange(1,70);
   h_dummy__102->GetXaxis()->SetLabelFont(43);
   h_dummy__102->GetXaxis()->SetLabelSize(0);
   h_dummy__102->GetXaxis()->SetTitleSize(21);
   h_dummy__102->GetXaxis()->SetTitleOffset(1.4);
   h_dummy__102->GetXaxis()->SetTitleFont(43);
   h_dummy__102->GetYaxis()->SetTitle("Events / 100 GeV");
   h_dummy__102->GetYaxis()->SetLabelFont(43);
   h_dummy__102->GetYaxis()->SetLabelSize(16.8);
   h_dummy__102->GetYaxis()->SetTitleSize(21);
   h_dummy__102->GetYaxis()->SetTitleOffset(2.4);
   h_dummy__102->GetYaxis()->SetTitleFont(43);
   h_dummy__102->GetZaxis()->SetLabelFont(43);
   h_dummy__102->GetZaxis()->SetLabelSize(21);
   h_dummy__102->GetZaxis()->SetTitleSize(21);
   h_dummy__102->GetZaxis()->SetTitleFont(43);
   h_dummy__102->Draw("HIST");
   
   THStack *h_stack = new THStack();
   h_stack->SetName("h_stack");
   h_stack->SetTitle("h_stack");
   Double_t xAxis114[8] = {125, 225, 325, 425, 525, 625, 725, 825}; 
   
   TH1F *h_stack_stack_12 = new TH1F("h_stack_stack_12","h_stack",7, xAxis114);
   h_stack_stack_12->SetMinimum(0);
   h_stack_stack_12->SetMaximum(3642.786);
   h_stack_stack_12->SetDirectory(0);
   h_stack_stack_12->SetStats(0);
   h_stack_stack_12->SetLineWidth(2);
   h_stack_stack_12->SetMarkerStyle(20);
   h_stack_stack_12->SetMarkerSize(1.2);
   h_stack_stack_12->GetXaxis()->SetLabelFont(43);
   h_stack_stack_12->GetXaxis()->SetLabelSize(21);
   h_stack_stack_12->GetXaxis()->SetTitleSize(21);
   h_stack_stack_12->GetXaxis()->SetTitleOffset(1.4);
   h_stack_stack_12->GetXaxis()->SetTitleFont(43);
   h_stack_stack_12->GetYaxis()->SetLabelFont(43);
   h_stack_stack_12->GetYaxis()->SetLabelSize(21);
   h_stack_stack_12->GetYaxis()->SetTitleSize(21);
   h_stack_stack_12->GetYaxis()->SetTitleOffset(1.4);
   h_stack_stack_12->GetYaxis()->SetTitleFont(43);
   h_stack_stack_12->GetZaxis()->SetLabelFont(43);
   h_stack_stack_12->GetZaxis()->SetLabelSize(21);
   h_stack_stack_12->GetZaxis()->SetTitleSize(21);
   h_stack_stack_12->GetZaxis()->SetTitleFont(43);
   h_stack->SetHistogram(h_stack_stack_12);
   
   Double_t xAxis115[8] = {125, 225, 325, 425, 525, 625, 725, 825}; 
   
   TH1D *c1lep5jex3bex_meff_topEW__103 = new TH1D("c1lep5jex3bex_meff_topEW__103","",7, xAxis115);
   c1lep5jex3bex_meff_topEW__103->SetBinContent(1,30.79155);
   c1lep5jex3bex_meff_topEW__103->SetBinContent(2,162.948);
   c1lep5jex3bex_meff_topEW__103->SetBinContent(3,305.2969);
   c1lep5jex3bex_meff_topEW__103->SetBinContent(4,304.5431);
   c1lep5jex3bex_meff_topEW__103->SetBinContent(5,210.2346);
   c1lep5jex3bex_meff_topEW__103->SetBinContent(6,133.0366);
   c1lep5jex3bex_meff_topEW__103->SetBinContent(7,66.50461);
   c1lep5jex3bex_meff_topEW__103->SetBinContent(8,98.28956);
   c1lep5jex3bex_meff_topEW__103->SetBinError(1,16.84659);
   c1lep5jex3bex_meff_topEW__103->SetBinError(2,28.7191);
   c1lep5jex3bex_meff_topEW__103->SetBinError(3,34.66635);
   c1lep5jex3bex_meff_topEW__103->SetBinError(4,35.37745);
   c1lep5jex3bex_meff_topEW__103->SetBinError(5,32.04072);
   c1lep5jex3bex_meff_topEW__103->SetBinError(6,25.14693);
   c1lep5jex3bex_meff_topEW__103->SetBinError(7,13.83542);
   c1lep5jex3bex_meff_topEW__103->SetBinError(8,21.85709);
   c1lep5jex3bex_meff_topEW__103->SetEntries(1334884);
   c1lep5jex3bex_meff_topEW__103->SetDirectory(0);
   c1lep5jex3bex_meff_topEW__103->SetStats(0);

   ci = TColor::GetColor("#66cc66");
   c1lep5jex3bex_meff_topEW__103->SetFillColor(ci);
   c1lep5jex3bex_meff_topEW__103->SetMarkerStyle(20);
   c1lep5jex3bex_meff_topEW__103->SetMarkerSize(1.2);
   c1lep5jex3bex_meff_topEW__103->GetXaxis()->SetTitle("m_{eff} [GeV]");
   c1lep5jex3bex_meff_topEW__103->GetXaxis()->SetRange(1,70);
   c1lep5jex3bex_meff_topEW__103->GetXaxis()->SetLabelFont(43);
   c1lep5jex3bex_meff_topEW__103->GetXaxis()->SetLabelSize(21);
   c1lep5jex3bex_meff_topEW__103->GetXaxis()->SetTitleSize(21);
   c1lep5jex3bex_meff_topEW__103->GetXaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_meff_topEW__103->GetXaxis()->SetTitleFont(43);
   c1lep5jex3bex_meff_topEW__103->GetYaxis()->SetLabelFont(43);
   c1lep5jex3bex_meff_topEW__103->GetYaxis()->SetLabelSize(21);
   c1lep5jex3bex_meff_topEW__103->GetYaxis()->SetTitleSize(21);
   c1lep5jex3bex_meff_topEW__103->GetYaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_meff_topEW__103->GetYaxis()->SetTitleFont(43);
   c1lep5jex3bex_meff_topEW__103->GetZaxis()->SetLabelFont(43);
   c1lep5jex3bex_meff_topEW__103->GetZaxis()->SetLabelSize(21);
   c1lep5jex3bex_meff_topEW__103->GetZaxis()->SetTitleSize(21);
   c1lep5jex3bex_meff_topEW__103->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep5jex3bex_meff_topEW,"");
   Double_t xAxis116[8] = {125, 225, 325, 425, 525, 625, 725, 825}; 
   
   TH1D *c1lep5jex3bex_meff_ttbarbb__104 = new TH1D("c1lep5jex3bex_meff_ttbarbb__104","",7, xAxis116);
   c1lep5jex3bex_meff_ttbarbb__104->SetBinContent(1,7.021551);
   c1lep5jex3bex_meff_ttbarbb__104->SetBinContent(2,392.9463);
   c1lep5jex3bex_meff_ttbarbb__104->SetBinContent(3,1319.224);
   c1lep5jex3bex_meff_ttbarbb__104->SetBinContent(4,1146.073);
   c1lep5jex3bex_meff_ttbarbb__104->SetBinContent(5,662.0389);
   c1lep5jex3bex_meff_ttbarbb__104->SetBinContent(6,337.5197);
   c1lep5jex3bex_meff_ttbarbb__104->SetBinContent(7,190.0429);
   c1lep5jex3bex_meff_ttbarbb__104->SetBinContent(8,267.3401);
   c1lep5jex3bex_meff_ttbarbb__104->SetBinError(1,1.57236);
   c1lep5jex3bex_meff_ttbarbb__104->SetBinError(2,12.36375);
   c1lep5jex3bex_meff_ttbarbb__104->SetBinError(3,23.28111);
   c1lep5jex3bex_meff_ttbarbb__104->SetBinError(4,22.01867);
   c1lep5jex3bex_meff_ttbarbb__104->SetBinError(5,15.71715);
   c1lep5jex3bex_meff_ttbarbb__104->SetBinError(6,11.33884);
   c1lep5jex3bex_meff_ttbarbb__104->SetBinError(7,8.754288);
   c1lep5jex3bex_meff_ttbarbb__104->SetBinError(8,10.9207);
   c1lep5jex3bex_meff_ttbarbb__104->SetEntries(15468);
   c1lep5jex3bex_meff_ttbarbb__104->SetDirectory(0);
   c1lep5jex3bex_meff_ttbarbb__104->SetStats(0);

   ci = TColor::GetColor("#6666cc");
   c1lep5jex3bex_meff_ttbarbb__104->SetFillColor(ci);
   c1lep5jex3bex_meff_ttbarbb__104->SetMarkerStyle(20);
   c1lep5jex3bex_meff_ttbarbb__104->SetMarkerSize(1.2);
   c1lep5jex3bex_meff_ttbarbb__104->GetXaxis()->SetTitle("m_{eff} [GeV]");
   c1lep5jex3bex_meff_ttbarbb__104->GetXaxis()->SetRange(1,70);
   c1lep5jex3bex_meff_ttbarbb__104->GetXaxis()->SetLabelFont(43);
   c1lep5jex3bex_meff_ttbarbb__104->GetXaxis()->SetLabelSize(21);
   c1lep5jex3bex_meff_ttbarbb__104->GetXaxis()->SetTitleSize(21);
   c1lep5jex3bex_meff_ttbarbb__104->GetXaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_meff_ttbarbb__104->GetXaxis()->SetTitleFont(43);
   c1lep5jex3bex_meff_ttbarbb__104->GetYaxis()->SetLabelFont(43);
   c1lep5jex3bex_meff_ttbarbb__104->GetYaxis()->SetLabelSize(21);
   c1lep5jex3bex_meff_ttbarbb__104->GetYaxis()->SetTitleSize(21);
   c1lep5jex3bex_meff_ttbarbb__104->GetYaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_meff_ttbarbb__104->GetYaxis()->SetTitleFont(43);
   c1lep5jex3bex_meff_ttbarbb__104->GetZaxis()->SetLabelFont(43);
   c1lep5jex3bex_meff_ttbarbb__104->GetZaxis()->SetLabelSize(21);
   c1lep5jex3bex_meff_ttbarbb__104->GetZaxis()->SetTitleSize(21);
   c1lep5jex3bex_meff_ttbarbb__104->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep5jex3bex_meff_ttbarbb,"");
   Double_t xAxis117[8] = {125, 225, 325, 425, 525, 625, 725, 825}; 
   
   TH1D *c1lep5jex3bex_meff_ttbarcc__105 = new TH1D("c1lep5jex3bex_meff_ttbarcc__105","",7, xAxis117);
   c1lep5jex3bex_meff_ttbarcc__105->SetBinContent(1,2.043868);
   c1lep5jex3bex_meff_ttbarcc__105->SetBinContent(2,142.1016);
   c1lep5jex3bex_meff_ttbarcc__105->SetBinContent(3,404.9661);
   c1lep5jex3bex_meff_ttbarcc__105->SetBinContent(4,341.811);
   c1lep5jex3bex_meff_ttbarcc__105->SetBinContent(5,189.3675);
   c1lep5jex3bex_meff_ttbarcc__105->SetBinContent(6,104.7159);
   c1lep5jex3bex_meff_ttbarcc__105->SetBinContent(7,53.75223);
   c1lep5jex3bex_meff_ttbarcc__105->SetBinContent(8,82.07005);
   c1lep5jex3bex_meff_ttbarcc__105->SetBinError(1,0.8681571);
   c1lep5jex3bex_meff_ttbarcc__105->SetBinError(2,8.582889);
   c1lep5jex3bex_meff_ttbarcc__105->SetBinError(3,13.65116);
   c1lep5jex3bex_meff_ttbarcc__105->SetBinError(4,12.64748);
   c1lep5jex3bex_meff_ttbarcc__105->SetBinError(5,9.25104);
   c1lep5jex3bex_meff_ttbarcc__105->SetBinError(6,7.28373);
   c1lep5jex3bex_meff_ttbarcc__105->SetBinError(7,5.707214);
   c1lep5jex3bex_meff_ttbarcc__105->SetBinError(8,8.025626);
   c1lep5jex3bex_meff_ttbarcc__105->SetEntries(4006);
   c1lep5jex3bex_meff_ttbarcc__105->SetDirectory(0);
   c1lep5jex3bex_meff_ttbarcc__105->SetStats(0);

   ci = TColor::GetColor("#ccccff");
   c1lep5jex3bex_meff_ttbarcc__105->SetFillColor(ci);
   c1lep5jex3bex_meff_ttbarcc__105->SetMarkerStyle(20);
   c1lep5jex3bex_meff_ttbarcc__105->SetMarkerSize(1.2);
   c1lep5jex3bex_meff_ttbarcc__105->GetXaxis()->SetTitle("m_{eff} [GeV]");
   c1lep5jex3bex_meff_ttbarcc__105->GetXaxis()->SetRange(1,70);
   c1lep5jex3bex_meff_ttbarcc__105->GetXaxis()->SetLabelFont(43);
   c1lep5jex3bex_meff_ttbarcc__105->GetXaxis()->SetLabelSize(21);
   c1lep5jex3bex_meff_ttbarcc__105->GetXaxis()->SetTitleSize(21);
   c1lep5jex3bex_meff_ttbarcc__105->GetXaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_meff_ttbarcc__105->GetXaxis()->SetTitleFont(43);
   c1lep5jex3bex_meff_ttbarcc__105->GetYaxis()->SetLabelFont(43);
   c1lep5jex3bex_meff_ttbarcc__105->GetYaxis()->SetLabelSize(21);
   c1lep5jex3bex_meff_ttbarcc__105->GetYaxis()->SetTitleSize(21);
   c1lep5jex3bex_meff_ttbarcc__105->GetYaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_meff_ttbarcc__105->GetYaxis()->SetTitleFont(43);
   c1lep5jex3bex_meff_ttbarcc__105->GetZaxis()->SetLabelFont(43);
   c1lep5jex3bex_meff_ttbarcc__105->GetZaxis()->SetLabelSize(21);
   c1lep5jex3bex_meff_ttbarcc__105->GetZaxis()->SetTitleSize(21);
   c1lep5jex3bex_meff_ttbarcc__105->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep5jex3bex_meff_ttbarcc,"");
   Double_t xAxis118[8] = {125, 225, 325, 425, 525, 625, 725, 825}; 
   
   TH1D *c1lep5jex3bex_meff_ttbarlight__106 = new TH1D("c1lep5jex3bex_meff_ttbarlight__106","",7, xAxis118);
   c1lep5jex3bex_meff_ttbarlight__106->SetBinContent(1,6.250218);
   c1lep5jex3bex_meff_ttbarlight__106->SetBinContent(2,476.0219);
   c1lep5jex3bex_meff_ttbarlight__106->SetBinContent(3,1093.79);
   c1lep5jex3bex_meff_ttbarlight__106->SetBinContent(4,769.5862);
   c1lep5jex3bex_meff_ttbarlight__106->SetBinContent(5,399.4638);
   c1lep5jex3bex_meff_ttbarlight__106->SetBinContent(6,206.785);
   c1lep5jex3bex_meff_ttbarlight__106->SetBinContent(7,105.8156);
   c1lep5jex3bex_meff_ttbarlight__106->SetBinContent(8,129.0119);
   c1lep5jex3bex_meff_ttbarlight__106->SetBinError(1,2.193201);
   c1lep5jex3bex_meff_ttbarlight__106->SetBinError(2,16.18876);
   c1lep5jex3bex_meff_ttbarlight__106->SetBinError(3,25.49381);
   c1lep5jex3bex_meff_ttbarlight__106->SetBinError(4,19.82231);
   c1lep5jex3bex_meff_ttbarlight__106->SetBinError(5,14.91147);
   c1lep5jex3bex_meff_ttbarlight__106->SetBinError(6,10.80775);
   c1lep5jex3bex_meff_ttbarlight__106->SetBinError(7,7.269911);
   c1lep5jex3bex_meff_ttbarlight__106->SetBinError(8,8.131969);
   c1lep5jex3bex_meff_ttbarlight__106->SetEntries(9132);
   c1lep5jex3bex_meff_ttbarlight__106->SetDirectory(0);
   c1lep5jex3bex_meff_ttbarlight__106->SetStats(0);
   c1lep5jex3bex_meff_ttbarlight__106->SetMarkerStyle(20);
   c1lep5jex3bex_meff_ttbarlight__106->SetMarkerSize(1.2);
   c1lep5jex3bex_meff_ttbarlight__106->GetXaxis()->SetTitle("m_{eff} [GeV]");
   c1lep5jex3bex_meff_ttbarlight__106->GetXaxis()->SetRange(1,70);
   c1lep5jex3bex_meff_ttbarlight__106->GetXaxis()->SetLabelFont(43);
   c1lep5jex3bex_meff_ttbarlight__106->GetXaxis()->SetLabelSize(21);
   c1lep5jex3bex_meff_ttbarlight__106->GetXaxis()->SetTitleSize(21);
   c1lep5jex3bex_meff_ttbarlight__106->GetXaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_meff_ttbarlight__106->GetXaxis()->SetTitleFont(43);
   c1lep5jex3bex_meff_ttbarlight__106->GetYaxis()->SetLabelFont(43);
   c1lep5jex3bex_meff_ttbarlight__106->GetYaxis()->SetLabelSize(21);
   c1lep5jex3bex_meff_ttbarlight__106->GetYaxis()->SetTitleSize(21);
   c1lep5jex3bex_meff_ttbarlight__106->GetYaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_meff_ttbarlight__106->GetYaxis()->SetTitleFont(43);
   c1lep5jex3bex_meff_ttbarlight__106->GetZaxis()->SetLabelFont(43);
   c1lep5jex3bex_meff_ttbarlight__106->GetZaxis()->SetLabelSize(21);
   c1lep5jex3bex_meff_ttbarlight__106->GetZaxis()->SetTitleSize(21);
   c1lep5jex3bex_meff_ttbarlight__106->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep5jex3bex_meff_ttbarlight,"");
   Double_t xAxis119[8] = {125, 225, 325, 425, 525, 625, 725, 825}; 
   
   TH1D *c1lep5jex3bex_meff_uHcW__107 = new TH1D("c1lep5jex3bex_meff_uHcW__107","",7, xAxis119);
   c1lep5jex3bex_meff_uHcW__107->SetBinContent(1,2.433899);
   c1lep5jex3bex_meff_uHcW__107->SetBinContent(2,173.9138);
   c1lep5jex3bex_meff_uHcW__107->SetBinContent(3,346.0428);
   c1lep5jex3bex_meff_uHcW__107->SetBinContent(4,246.3092);
   c1lep5jex3bex_meff_uHcW__107->SetBinContent(5,118.7369);
   c1lep5jex3bex_meff_uHcW__107->SetBinContent(6,57.82253);
   c1lep5jex3bex_meff_uHcW__107->SetBinContent(7,31.57154);
   c1lep5jex3bex_meff_uHcW__107->SetBinContent(8,34.97215);
   c1lep5jex3bex_meff_uHcW__107->SetBinError(1,1.123658);
   c1lep5jex3bex_meff_uHcW__107->SetBinError(2,12.64541);
   c1lep5jex3bex_meff_uHcW__107->SetBinError(3,17.88081);
   c1lep5jex3bex_meff_uHcW__107->SetBinError(4,15.67228);
   c1lep5jex3bex_meff_uHcW__107->SetBinError(5,10.48858);
   c1lep5jex3bex_meff_uHcW__107->SetBinError(6,7.621053);
   c1lep5jex3bex_meff_uHcW__107->SetBinError(7,5.556232);
   c1lep5jex3bex_meff_uHcW__107->SetBinError(8,6.633642);
   c1lep5jex3bex_meff_uHcW__107->SetEntries(5357);
   c1lep5jex3bex_meff_uHcW__107->SetDirectory(0);
   c1lep5jex3bex_meff_uHcW__107->SetStats(0);
   c1lep5jex3bex_meff_uHcW__107->SetFillColor(2);
   c1lep5jex3bex_meff_uHcW__107->SetLineColor(2);
   c1lep5jex3bex_meff_uHcW__107->SetMarkerStyle(20);
   c1lep5jex3bex_meff_uHcW__107->SetMarkerSize(1.2);
   c1lep5jex3bex_meff_uHcW__107->GetXaxis()->SetTitle("m_{eff} [GeV]");
   c1lep5jex3bex_meff_uHcW__107->GetXaxis()->SetRange(1,70);
   c1lep5jex3bex_meff_uHcW__107->GetXaxis()->SetLabelFont(43);
   c1lep5jex3bex_meff_uHcW__107->GetXaxis()->SetLabelSize(21);
   c1lep5jex3bex_meff_uHcW__107->GetXaxis()->SetTitleSize(21);
   c1lep5jex3bex_meff_uHcW__107->GetXaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_meff_uHcW__107->GetXaxis()->SetTitleFont(43);
   c1lep5jex3bex_meff_uHcW__107->GetYaxis()->SetLabelFont(43);
   c1lep5jex3bex_meff_uHcW__107->GetYaxis()->SetLabelSize(21);
   c1lep5jex3bex_meff_uHcW__107->GetYaxis()->SetTitleSize(21);
   c1lep5jex3bex_meff_uHcW__107->GetYaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_meff_uHcW__107->GetYaxis()->SetTitleFont(43);
   c1lep5jex3bex_meff_uHcW__107->GetZaxis()->SetLabelFont(43);
   c1lep5jex3bex_meff_uHcW__107->GetZaxis()->SetLabelSize(21);
   c1lep5jex3bex_meff_uHcW__107->GetZaxis()->SetTitleSize(21);
   c1lep5jex3bex_meff_uHcW__107->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep5jex3bex_meff_uHcW,"");
   h_stack->Draw("hist same");
   
   Double_t g_totErr_fx3047[7] = {
   175,
   275,
   375,
   475,
   575,
   675,
   775};
   Double_t g_totErr_fy3047[7] = {
   46.10719,
   1174.018,
   3123.278,
   2562.013,
   1461.105,
   782.0571,
   416.1153};
   Double_t g_totErr_felx3047[7] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t g_totErr_fely3047[7] = {
   18.27515,
   271.6403,
   626.7488,
   467.064,
   261.0703,
   141.0262,
   83.55901};
   Double_t g_totErr_fehx3047[7] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t g_totErr_fehy3047[7] = {
   18.27515,
   271.6403,
   626.7488,
   467.064,
   261.0703,
   141.0262,
   83.55901};
   grae = new TGraphAsymmErrors(7,g_totErr_fx3047,g_totErr_fy3047,g_totErr_felx3047,g_totErr_fehx3047,g_totErr_fely3047,g_totErr_fehy3047);
   grae->SetName("g_totErr");
   grae->SetTitle("");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(3354);
   grae->SetLineColor(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0);
   
   TH1F *Graph_g_totErr3047 = new TH1F("Graph_g_totErr3047","",100,55,895);
   Graph_g_totErr3047->SetMinimum(0);
   Graph_g_totErr3047->SetMaximum(4122.246);
   Graph_g_totErr3047->SetDirectory(0);
   Graph_g_totErr3047->SetStats(0);
   Graph_g_totErr3047->SetLineWidth(2);
   Graph_g_totErr3047->SetMarkerStyle(20);
   Graph_g_totErr3047->SetMarkerSize(1.2);
   Graph_g_totErr3047->GetXaxis()->SetLabelFont(43);
   Graph_g_totErr3047->GetXaxis()->SetLabelSize(21);
   Graph_g_totErr3047->GetXaxis()->SetTitleSize(21);
   Graph_g_totErr3047->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_totErr3047->GetXaxis()->SetTitleFont(43);
   Graph_g_totErr3047->GetYaxis()->SetLabelFont(43);
   Graph_g_totErr3047->GetYaxis()->SetLabelSize(21);
   Graph_g_totErr3047->GetYaxis()->SetTitleSize(21);
   Graph_g_totErr3047->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_totErr3047->GetYaxis()->SetTitleFont(43);
   Graph_g_totErr3047->GetZaxis()->SetLabelFont(43);
   Graph_g_totErr3047->GetZaxis()->SetLabelSize(21);
   Graph_g_totErr3047->GetZaxis()->SetTitleSize(21);
   Graph_g_totErr3047->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_totErr3047);
   
   grae->Draw("e2");
   
   Double_t Graph_from_c1lep5jex3bex_meff_Data_fx3048[7] = {
   175,
   275,
   375,
   475,
   575,
   675,
   775};
   Double_t Graph_from_c1lep5jex3bex_meff_Data_fy3048[7] = {
   27,
   1489,
   3715,
   2917,
   1633,
   865,
   441};
   Double_t Graph_from_c1lep5jex3bex_meff_Data_felx3048[7] = {
   49.9,
   49.9,
   49.9,
   49.9,
   49.9,
   49.9,
   49.9};
   Double_t Graph_from_c1lep5jex3bex_meff_Data_fely3048[7] = {
   5.196152,
   38.58756,
   60.9508,
   54.00926,
   40.41039,
   29.41088,
   21};
   Double_t Graph_from_c1lep5jex3bex_meff_Data_fehx3048[7] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t Graph_from_c1lep5jex3bex_meff_Data_fehy3048[7] = {
   5.196152,
   38.58756,
   60.9508,
   54.00926,
   40.41039,
   29.41088,
   21};
   grae = new TGraphAsymmErrors(7,Graph_from_c1lep5jex3bex_meff_Data_fx3048,Graph_from_c1lep5jex3bex_meff_Data_fy3048,Graph_from_c1lep5jex3bex_meff_Data_felx3048,Graph_from_c1lep5jex3bex_meff_Data_fehx3048,Graph_from_c1lep5jex3bex_meff_Data_fely3048,Graph_from_c1lep5jex3bex_meff_Data_fehy3048);
   grae->SetName("Graph_from_c1lep5jex3bex_meff_Data");
   grae->SetTitle("");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_c1lep5jex3bex_meff_Data3048 = new TH1F("Graph_Graph_from_c1lep5jex3bex_meff_Data3048","",100,55.11,894.99);
   Graph_Graph_from_c1lep5jex3bex_meff_Data3048->SetMinimum(0);
   Graph_Graph_from_c1lep5jex3bex_meff_Data3048->SetMaximum(4151.365);
   Graph_Graph_from_c1lep5jex3bex_meff_Data3048->SetDirectory(0);
   Graph_Graph_from_c1lep5jex3bex_meff_Data3048->SetStats(0);
   Graph_Graph_from_c1lep5jex3bex_meff_Data3048->SetLineWidth(2);
   Graph_Graph_from_c1lep5jex3bex_meff_Data3048->SetMarkerStyle(20);
   Graph_Graph_from_c1lep5jex3bex_meff_Data3048->SetMarkerSize(1.2);
   Graph_Graph_from_c1lep5jex3bex_meff_Data3048->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep5jex3bex_meff_Data3048->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep5jex3bex_meff_Data3048->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep5jex3bex_meff_Data3048->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep5jex3bex_meff_Data3048->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep5jex3bex_meff_Data3048->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep5jex3bex_meff_Data3048->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep5jex3bex_meff_Data3048->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep5jex3bex_meff_Data3048->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep5jex3bex_meff_Data3048->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep5jex3bex_meff_Data3048->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep5jex3bex_meff_Data3048->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep5jex3bex_meff_Data3048->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep5jex3bex_meff_Data3048->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_c1lep5jex3bex_meff_Data3048);
   
   grae->Draw("ep1 ");
   Double_t xAxis120[8] = {125, 225, 325, 425, 525, 625, 725, 825}; 
   
   TH1D *h_dummy_copy__108 = new TH1D("h_dummy_copy__108","",7, xAxis120);
   h_dummy_copy__108->SetEntries(1363497);
   h_dummy_copy__108->SetDirectory(0);
   h_dummy_copy__108->SetStats(0);
   h_dummy_copy__108->SetMarkerStyle(20);
   h_dummy_copy__108->SetMarkerSize(1.2);
   h_dummy_copy__108->GetXaxis()->SetTitle("m_{eff} [GeV]");
   h_dummy_copy__108->GetXaxis()->SetRange(1,70);
   h_dummy_copy__108->GetXaxis()->SetLabelFont(43);
   h_dummy_copy__108->GetXaxis()->SetLabelSize(21);
   h_dummy_copy__108->GetXaxis()->SetTitleSize(21);
   h_dummy_copy__108->GetXaxis()->SetTitleOffset(1.4);
   h_dummy_copy__108->GetXaxis()->SetTitleFont(43);
   h_dummy_copy__108->GetYaxis()->SetTitle("Events / 100 GeV");
   h_dummy_copy__108->GetYaxis()->SetLabelFont(43);
   h_dummy_copy__108->GetYaxis()->SetLabelSize(16.8);
   h_dummy_copy__108->GetYaxis()->SetTitleSize(21);
   h_dummy_copy__108->GetYaxis()->SetTitleOffset(2.4);
   h_dummy_copy__108->GetYaxis()->SetTitleFont(43);
   h_dummy_copy__108->GetZaxis()->SetLabelFont(43);
   h_dummy_copy__108->GetZaxis()->SetLabelSize(21);
   h_dummy_copy__108->GetZaxis()->SetTitleSize(21);
   h_dummy_copy__108->GetZaxis()->SetTitleFont(43);
   h_dummy_copy__108->Draw("sameaxis");
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
   TLegendEntry *entry=leg->AddEntry("c1lep5jex3bex_meff_Data","Data","lep");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep5jex3bex_meff_uHcW","t#bar{t}#rightarrowWbHc (BR=1%)","f");
   entry->SetFillColor(2);
   entry->SetFillStyle(1001);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep5jex3bex_meff_ttbarlight","t#bar{t}+light","f");
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep5jex3bex_meff_ttbarcc","t#bar{t}+cc","f");

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
   entry=leg->AddEntry("c1lep5jex3bex_meff_ttbarbb","t#bar{t}+bb","f");

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
   entry=leg->AddEntry("c1lep5jex3bex_meff_topEW","Non-t#bar{t}","f");

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
   c_c1lep5jex3bex_meff->cd();
   c_c1lep5jex3bex_meff->Modified();
   c_c1lep5jex3bex_meff->cd();
   c_c1lep5jex3bex_meff->SetSelected(c_c1lep5jex3bex_meff);
}
