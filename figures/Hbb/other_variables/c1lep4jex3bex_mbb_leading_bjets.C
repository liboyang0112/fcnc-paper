void c1lep4jex3bex_mbb_leading_bjets()
{
//=========Macro generated from canvas: c_c1lep4jex3bex_mbb_leading_bjets/c_c1lep4jex3bex_mbb_leading_bjets
//=========  (Thu Jul 19 17:38:08 2018) by ROOT version6.04/14
   TCanvas *c_c1lep4jex3bex_mbb_leading_bjets = new TCanvas("c_c1lep4jex3bex_mbb_leading_bjets", "c_c1lep4jex3bex_mbb_leading_bjets",0,0,600,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c_c1lep4jex3bex_mbb_leading_bjets->SetHighLightColor(2);
   c_c1lep4jex3bex_mbb_leading_bjets->Range(0,0,1,1);
   c_c1lep4jex3bex_mbb_leading_bjets->SetFillColor(0);
   c_c1lep4jex3bex_mbb_leading_bjets->SetBorderMode(0);
   c_c1lep4jex3bex_mbb_leading_bjets->SetBorderSize(2);
   c_c1lep4jex3bex_mbb_leading_bjets->SetTickx(1);
   c_c1lep4jex3bex_mbb_leading_bjets->SetTicky(1);
   c_c1lep4jex3bex_mbb_leading_bjets->SetLeftMargin(0.16);
   c_c1lep4jex3bex_mbb_leading_bjets->SetRightMargin(0.05);
   c_c1lep4jex3bex_mbb_leading_bjets->SetTopMargin(0.05);
   c_c1lep4jex3bex_mbb_leading_bjets->SetBottomMargin(0.16);
   c_c1lep4jex3bex_mbb_leading_bjets->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0,1,0.28);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-27.77778,-0.0873016,527.7778,1.5);
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
   Double_t xAxis401[10] = {50, 100, 150, 200, 250, 300, 350, 400, 450, 500}; 
   
   TH1D *h_dummy2__361 = new TH1D("h_dummy2__361","Data/MC",9, xAxis401);
   h_dummy2__361->SetMinimum(0.5);
   h_dummy2__361->SetMaximum(1.5);
   h_dummy2__361->SetEntries(2920911);
   h_dummy2__361->SetDirectory(0);
   h_dummy2__361->SetStats(0);
   h_dummy2__361->SetMarkerStyle(20);
   h_dummy2__361->SetMarkerSize(1.2);
   h_dummy2__361->GetXaxis()->SetTitle("m_{bb} leading b-jets [GeV]");
   h_dummy2__361->GetXaxis()->SetRange(1,1000);
   h_dummy2__361->GetXaxis()->SetLabelFont(43);
   h_dummy2__361->GetXaxis()->SetLabelOffset(0.025);
   h_dummy2__361->GetXaxis()->SetLabelSize(16.8);
   h_dummy2__361->GetXaxis()->SetTitleSize(21);
   h_dummy2__361->GetXaxis()->SetTitleOffset(5.05);
   h_dummy2__361->GetXaxis()->SetTitleFont(43);
   h_dummy2__361->GetYaxis()->SetTitle("Data / Bkg");
   h_dummy2__361->GetYaxis()->SetNdivisions(-504);
   h_dummy2__361->GetYaxis()->SetLabelFont(43);
   h_dummy2__361->GetYaxis()->SetLabelOffset(0.02);
   h_dummy2__361->GetYaxis()->SetLabelSize(16.8);
   h_dummy2__361->GetYaxis()->SetTitleSize(21);
   h_dummy2__361->GetYaxis()->SetTitleOffset(2.4);
   h_dummy2__361->GetYaxis()->SetTitleFont(43);
   h_dummy2__361->GetZaxis()->SetLabelFont(43);
   h_dummy2__361->GetZaxis()->SetLabelSize(21);
   h_dummy2__361->GetZaxis()->SetTitleSize(21);
   h_dummy2__361->GetZaxis()->SetTitleFont(43);
   h_dummy2__361->Draw("HIST");
   
   Double_t Graph_from_h_ratio_fx3161[9] = {
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475};
   Double_t Graph_from_h_ratio_fy3161[9] = {
   1.092662,
   1.083669,
   1.179059,
   1.088299,
   1.096068,
   1.200419,
   1.102858,
   1.053262,
   1.088709};
   Double_t Graph_from_h_ratio_felx3161[9] = {
   24.95,
   24.95,
   24.95,
   24.95,
   24.95,
   24.95,
   24.95,
   24.95,
   24.95};
   Double_t Graph_from_h_ratio_fely3161[9] = {
   0.02711396,
   0.0197817,
   0.02509772,
   0.02902389,
   0.03574978,
   0.0481324,
   0.05650111,
   0.06856149,
   0.0845002};
   Double_t Graph_from_h_ratio_fehx3161[9] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t Graph_from_h_ratio_fehy3161[9] = {
   0.02711396,
   0.0197817,
   0.02509772,
   0.02902389,
   0.03574978,
   0.0481324,
   0.05650111,
   0.06856149,
   0.0845002};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(9,Graph_from_h_ratio_fx3161,Graph_from_h_ratio_fy3161,Graph_from_h_ratio_felx3161,Graph_from_h_ratio_fehx3161,Graph_from_h_ratio_fely3161,Graph_from_h_ratio_fehy3161);
   grae->SetName("Graph_from_h_ratio");
   grae->SetTitle("");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(24);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_h_ratio3161 = new TH1F("Graph_Graph_from_h_ratio3161","",100,5.055,544.995);
   Graph_Graph_from_h_ratio3161->SetMinimum(0.9583151);
   Graph_Graph_from_h_ratio3161->SetMaximum(1.274936);
   Graph_Graph_from_h_ratio3161->SetDirectory(0);
   Graph_Graph_from_h_ratio3161->SetStats(0);
   Graph_Graph_from_h_ratio3161->SetLineWidth(2);
   Graph_Graph_from_h_ratio3161->SetMarkerStyle(20);
   Graph_Graph_from_h_ratio3161->SetMarkerSize(1.2);
   Graph_Graph_from_h_ratio3161->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3161->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3161->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3161->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3161->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3161->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3161->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3161->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3161->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3161->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3161->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3161->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3161->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3161->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_h_ratio3161);
   
   grae->Draw("pe0");
   TLine *line = new TLine(50,1,500,1);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t g_ratio2_fx3162[9] = {
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475};
   Double_t g_ratio2_fy3162[9] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t g_ratio2_felx3162[9] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t g_ratio2_fely3162[9] = {
   0.2108322,
   0.2056419,
   0.1985229,
   0.1888048,
   0.1907125,
   0.1878858,
   0.1937633,
   0.1935733,
   0.194729};
   Double_t g_ratio2_fehx3162[9] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t g_ratio2_fehy3162[9] = {
   0.2108322,
   0.2056419,
   0.1985229,
   0.1888048,
   0.1907125,
   0.1878858,
   0.1937633,
   0.1935733,
   0.194729};
   grae = new TGraphAsymmErrors(9,g_ratio2_fx3162,g_ratio2_fy3162,g_ratio2_felx3162,g_ratio2_fehx3162,g_ratio2_fely3162,g_ratio2_fehy3162);
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
   
   TH1F *Graph_g_ratio23162 = new TH1F("Graph_g_ratio23162","",100,5,545);
   Graph_g_ratio23162->SetMinimum(0.7470013);
   Graph_g_ratio23162->SetMaximum(1.252999);
   Graph_g_ratio23162->SetDirectory(0);
   Graph_g_ratio23162->SetStats(0);
   Graph_g_ratio23162->SetLineWidth(2);
   Graph_g_ratio23162->SetMarkerStyle(20);
   Graph_g_ratio23162->SetMarkerSize(1.2);
   Graph_g_ratio23162->GetXaxis()->SetLabelFont(43);
   Graph_g_ratio23162->GetXaxis()->SetLabelSize(21);
   Graph_g_ratio23162->GetXaxis()->SetTitleSize(21);
   Graph_g_ratio23162->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23162->GetXaxis()->SetTitleFont(43);
   Graph_g_ratio23162->GetYaxis()->SetLabelFont(43);
   Graph_g_ratio23162->GetYaxis()->SetLabelSize(21);
   Graph_g_ratio23162->GetYaxis()->SetTitleSize(21);
   Graph_g_ratio23162->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23162->GetYaxis()->SetTitleFont(43);
   Graph_g_ratio23162->GetZaxis()->SetLabelFont(43);
   Graph_g_ratio23162->GetZaxis()->SetLabelSize(21);
   Graph_g_ratio23162->GetZaxis()->SetTitleSize(21);
   Graph_g_ratio23162->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_ratio23162);
   
   grae->Draw("e2");
   Double_t xAxis402[10] = {50, 100, 150, 200, 250, 300, 350, 400, 450, 500}; 
   
   TH1D *h_dummy2_copy__362 = new TH1D("h_dummy2_copy__362","Data/MC",9, xAxis402);
   h_dummy2_copy__362->SetMinimum(0.5);
   h_dummy2_copy__362->SetMaximum(1.5);
   h_dummy2_copy__362->SetEntries(2920911);
   h_dummy2_copy__362->SetDirectory(0);
   h_dummy2_copy__362->SetStats(0);
   h_dummy2_copy__362->SetMarkerStyle(20);
   h_dummy2_copy__362->SetMarkerSize(1.2);
   h_dummy2_copy__362->GetXaxis()->SetTitle("m_{bb} leading b-jets [GeV]");
   h_dummy2_copy__362->GetXaxis()->SetRange(1,1000);
   h_dummy2_copy__362->GetXaxis()->SetLabelFont(43);
   h_dummy2_copy__362->GetXaxis()->SetLabelOffset(0.025);
   h_dummy2_copy__362->GetXaxis()->SetLabelSize(16.8);
   h_dummy2_copy__362->GetXaxis()->SetTitleSize(21);
   h_dummy2_copy__362->GetXaxis()->SetTitleOffset(5.05);
   h_dummy2_copy__362->GetXaxis()->SetTitleFont(43);
   h_dummy2_copy__362->GetYaxis()->SetTitle("Data / Bkg");
   h_dummy2_copy__362->GetYaxis()->SetNdivisions(-504);
   h_dummy2_copy__362->GetYaxis()->SetLabelFont(43);
   h_dummy2_copy__362->GetYaxis()->SetLabelOffset(0.02);
   h_dummy2_copy__362->GetYaxis()->SetLabelSize(16.8);
   h_dummy2_copy__362->GetYaxis()->SetTitleSize(21);
   h_dummy2_copy__362->GetYaxis()->SetTitleOffset(2.4);
   h_dummy2_copy__362->GetYaxis()->SetTitleFont(43);
   h_dummy2_copy__362->GetZaxis()->SetLabelFont(43);
   h_dummy2_copy__362->GetZaxis()->SetLabelSize(21);
   h_dummy2_copy__362->GetZaxis()->SetTitleSize(21);
   h_dummy2_copy__362->GetZaxis()->SetTitleFont(43);
   h_dummy2_copy__362->Draw("sameaxis");
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
   c_c1lep4jex3bex_mbb_leading_bjets->cd();
  
// ------------>Primitives in pad: pad0
   TPad *pad0 = new TPad("pad0", "pad0",0,0.2,1,1);
   pad0->Draw();
   pad0->cd();
   pad0->Range(-27.77778,-647.1067,527.7778,5823.96);
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
   Double_t xAxis403[10] = {50, 100, 150, 200, 250, 300, 350, 400, 450, 500}; 
   
   TH1D *h_dummy__363 = new TH1D("h_dummy__363","",9, xAxis403);
   h_dummy__363->SetMinimum(0);
   h_dummy__363->SetMaximum(5500.407);
   h_dummy__363->SetEntries(2920911);
   h_dummy__363->SetDirectory(0);
   h_dummy__363->SetStats(0);
   h_dummy__363->SetMarkerStyle(20);
   h_dummy__363->SetMarkerSize(1.2);
   h_dummy__363->GetXaxis()->SetRange(1,1000);
   h_dummy__363->GetXaxis()->SetLabelFont(43);
   h_dummy__363->GetXaxis()->SetLabelSize(0);
   h_dummy__363->GetXaxis()->SetTitleSize(21);
   h_dummy__363->GetXaxis()->SetTitleOffset(1.4);
   h_dummy__363->GetXaxis()->SetTitleFont(43);
   h_dummy__363->GetYaxis()->SetTitle("Events / 50 GeV");
   h_dummy__363->GetYaxis()->SetLabelFont(43);
   h_dummy__363->GetYaxis()->SetLabelSize(16.8);
   h_dummy__363->GetYaxis()->SetTitleSize(21);
   h_dummy__363->GetYaxis()->SetTitleOffset(2.4);
   h_dummy__363->GetYaxis()->SetTitleFont(43);
   h_dummy__363->GetZaxis()->SetLabelFont(43);
   h_dummy__363->GetZaxis()->SetLabelSize(21);
   h_dummy__363->GetZaxis()->SetTitleSize(21);
   h_dummy__363->GetZaxis()->SetTitleFont(43);
   h_dummy__363->Draw("HIST");
   
   THStack *h_stack = new THStack();
   h_stack->SetName("h_stack");
   h_stack->SetTitle("h_stack");
   Double_t xAxis404[10] = {50, 100, 150, 200, 250, 300, 350, 400, 450, 500}; 
   
   TH1F *h_stack_stack_41 = new TH1F("h_stack_stack_41","h_stack",9, xAxis404);
   h_stack_stack_41->SetMinimum(0);
   h_stack_stack_41->SetMaximum(3395.949);
   h_stack_stack_41->SetDirectory(0);
   h_stack_stack_41->SetStats(0);
   h_stack_stack_41->SetLineWidth(2);
   h_stack_stack_41->SetMarkerStyle(20);
   h_stack_stack_41->SetMarkerSize(1.2);
   h_stack_stack_41->GetXaxis()->SetLabelFont(43);
   h_stack_stack_41->GetXaxis()->SetLabelSize(21);
   h_stack_stack_41->GetXaxis()->SetTitleSize(21);
   h_stack_stack_41->GetXaxis()->SetTitleOffset(1.4);
   h_stack_stack_41->GetXaxis()->SetTitleFont(43);
   h_stack_stack_41->GetYaxis()->SetLabelFont(43);
   h_stack_stack_41->GetYaxis()->SetLabelSize(21);
   h_stack_stack_41->GetYaxis()->SetTitleSize(21);
   h_stack_stack_41->GetYaxis()->SetTitleOffset(1.4);
   h_stack_stack_41->GetYaxis()->SetTitleFont(43);
   h_stack_stack_41->GetZaxis()->SetLabelFont(43);
   h_stack_stack_41->GetZaxis()->SetLabelSize(21);
   h_stack_stack_41->GetZaxis()->SetTitleSize(21);
   h_stack_stack_41->GetZaxis()->SetTitleFont(43);
   h_stack->SetHistogram(h_stack_stack_41);
   
   Double_t xAxis405[10] = {50, 100, 150, 200, 250, 300, 350, 400, 450, 500}; 
   
   TH1D *c1lep4jex3bex_mbb_leading_bjets_topEW__364 = new TH1D("c1lep4jex3bex_mbb_leading_bjets_topEW__364","",9, xAxis405);
   c1lep4jex3bex_mbb_leading_bjets_topEW__364->SetBinContent(0,84.61916);
   c1lep4jex3bex_mbb_leading_bjets_topEW__364->SetBinContent(1,319.9393);
   c1lep4jex3bex_mbb_leading_bjets_topEW__364->SetBinContent(2,501.4969);
   c1lep4jex3bex_mbb_leading_bjets_topEW__364->SetBinContent(3,268.1584);
   c1lep4jex3bex_mbb_leading_bjets_topEW__364->SetBinContent(4,206.6037);
   c1lep4jex3bex_mbb_leading_bjets_topEW__364->SetBinContent(5,147.7751);
   c1lep4jex3bex_mbb_leading_bjets_topEW__364->SetBinContent(6,94.1026);
   c1lep4jex3bex_mbb_leading_bjets_topEW__364->SetBinContent(7,53.28514);
   c1lep4jex3bex_mbb_leading_bjets_topEW__364->SetBinContent(8,45.71922);
   c1lep4jex3bex_mbb_leading_bjets_topEW__364->SetBinContent(9,35.41372);
   c1lep4jex3bex_mbb_leading_bjets_topEW__364->SetBinContent(10,71.18239);
   c1lep4jex3bex_mbb_leading_bjets_topEW__364->SetBinError(0,16.44535);
   c1lep4jex3bex_mbb_leading_bjets_topEW__364->SetBinError(1,37.46996);
   c1lep4jex3bex_mbb_leading_bjets_topEW__364->SetBinError(2,50.01899);
   c1lep4jex3bex_mbb_leading_bjets_topEW__364->SetBinError(3,33.87148);
   c1lep4jex3bex_mbb_leading_bjets_topEW__364->SetBinError(4,30.0372);
   c1lep4jex3bex_mbb_leading_bjets_topEW__364->SetBinError(5,25.37737);
   c1lep4jex3bex_mbb_leading_bjets_topEW__364->SetBinError(6,20.90952);
   c1lep4jex3bex_mbb_leading_bjets_topEW__364->SetBinError(7,15.657);
   c1lep4jex3bex_mbb_leading_bjets_topEW__364->SetBinError(8,14.10202);
   c1lep4jex3bex_mbb_leading_bjets_topEW__364->SetBinError(9,12.91324);
   c1lep4jex3bex_mbb_leading_bjets_topEW__364->SetBinError(10,13.92069);
   c1lep4jex3bex_mbb_leading_bjets_topEW__364->SetEntries(2895000);
   c1lep4jex3bex_mbb_leading_bjets_topEW__364->SetDirectory(0);
   c1lep4jex3bex_mbb_leading_bjets_topEW__364->SetStats(0);

   ci = TColor::GetColor("#66cc66");
   c1lep4jex3bex_mbb_leading_bjets_topEW__364->SetFillColor(ci);
   c1lep4jex3bex_mbb_leading_bjets_topEW__364->SetMarkerStyle(20);
   c1lep4jex3bex_mbb_leading_bjets_topEW__364->SetMarkerSize(1.2);
   c1lep4jex3bex_mbb_leading_bjets_topEW__364->GetXaxis()->SetTitle("m(b,b) leading b-jets [GeV]");
   c1lep4jex3bex_mbb_leading_bjets_topEW__364->GetXaxis()->SetRange(1,1000);
   c1lep4jex3bex_mbb_leading_bjets_topEW__364->GetXaxis()->SetLabelFont(43);
   c1lep4jex3bex_mbb_leading_bjets_topEW__364->GetXaxis()->SetLabelSize(21);
   c1lep4jex3bex_mbb_leading_bjets_topEW__364->GetXaxis()->SetTitleSize(21);
   c1lep4jex3bex_mbb_leading_bjets_topEW__364->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_mbb_leading_bjets_topEW__364->GetXaxis()->SetTitleFont(43);
   c1lep4jex3bex_mbb_leading_bjets_topEW__364->GetYaxis()->SetLabelFont(43);
   c1lep4jex3bex_mbb_leading_bjets_topEW__364->GetYaxis()->SetLabelSize(21);
   c1lep4jex3bex_mbb_leading_bjets_topEW__364->GetYaxis()->SetTitleSize(21);
   c1lep4jex3bex_mbb_leading_bjets_topEW__364->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_mbb_leading_bjets_topEW__364->GetYaxis()->SetTitleFont(43);
   c1lep4jex3bex_mbb_leading_bjets_topEW__364->GetZaxis()->SetLabelFont(43);
   c1lep4jex3bex_mbb_leading_bjets_topEW__364->GetZaxis()->SetLabelSize(21);
   c1lep4jex3bex_mbb_leading_bjets_topEW__364->GetZaxis()->SetTitleSize(21);
   c1lep4jex3bex_mbb_leading_bjets_topEW__364->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jex3bex_mbb_leading_bjets_topEW,"");
   Double_t xAxis406[10] = {50, 100, 150, 200, 250, 300, 350, 400, 450, 500}; 
   
   TH1D *c1lep4jex3bex_mbb_leading_bjets_ttbarbb__365 = new TH1D("c1lep4jex3bex_mbb_leading_bjets_ttbarbb__365","",9, xAxis406);
   c1lep4jex3bex_mbb_leading_bjets_ttbarbb__365->SetBinContent(0,70.00217);
   c1lep4jex3bex_mbb_leading_bjets_ttbarbb__365->SetBinContent(1,356.4019);
   c1lep4jex3bex_mbb_leading_bjets_ttbarbb__365->SetBinContent(2,617.8942);
   c1lep4jex3bex_mbb_leading_bjets_ttbarbb__365->SetBinContent(3,558.888);
   c1lep4jex3bex_mbb_leading_bjets_ttbarbb__365->SetBinContent(4,416.374);
   c1lep4jex3bex_mbb_leading_bjets_ttbarbb__365->SetBinContent(5,282.8677);
   c1lep4jex3bex_mbb_leading_bjets_ttbarbb__365->SetBinContent(6,182.0082);
   c1lep4jex3bex_mbb_leading_bjets_ttbarbb__365->SetBinContent(7,134.4214);
   c1lep4jex3bex_mbb_leading_bjets_ttbarbb__365->SetBinContent(8,81.01704);
   c1lep4jex3bex_mbb_leading_bjets_ttbarbb__365->SetBinContent(9,55.24325);
   c1lep4jex3bex_mbb_leading_bjets_ttbarbb__365->SetBinContent(10,141.4976);
   c1lep4jex3bex_mbb_leading_bjets_ttbarbb__365->SetBinError(0,5.166605);
   c1lep4jex3bex_mbb_leading_bjets_ttbarbb__365->SetBinError(1,12.52495);
   c1lep4jex3bex_mbb_leading_bjets_ttbarbb__365->SetBinError(2,16.53444);
   c1lep4jex3bex_mbb_leading_bjets_ttbarbb__365->SetBinError(3,16.12468);
   c1lep4jex3bex_mbb_leading_bjets_ttbarbb__365->SetBinError(4,12.39648);
   c1lep4jex3bex_mbb_leading_bjets_ttbarbb__365->SetBinError(5,10.30416);
   c1lep4jex3bex_mbb_leading_bjets_ttbarbb__365->SetBinError(6,8.262971);
   c1lep4jex3bex_mbb_leading_bjets_ttbarbb__365->SetBinError(7,8.052274);
   c1lep4jex3bex_mbb_leading_bjets_ttbarbb__365->SetBinError(8,5.554401);
   c1lep4jex3bex_mbb_leading_bjets_ttbarbb__365->SetBinError(9,5.748707);
   c1lep4jex3bex_mbb_leading_bjets_ttbarbb__365->SetBinError(10,8.552902);
   c1lep4jex3bex_mbb_leading_bjets_ttbarbb__365->SetEntries(10166);
   c1lep4jex3bex_mbb_leading_bjets_ttbarbb__365->SetDirectory(0);
   c1lep4jex3bex_mbb_leading_bjets_ttbarbb__365->SetStats(0);

   ci = TColor::GetColor("#6666cc");
   c1lep4jex3bex_mbb_leading_bjets_ttbarbb__365->SetFillColor(ci);
   c1lep4jex3bex_mbb_leading_bjets_ttbarbb__365->SetMarkerStyle(20);
   c1lep4jex3bex_mbb_leading_bjets_ttbarbb__365->SetMarkerSize(1.2);
   c1lep4jex3bex_mbb_leading_bjets_ttbarbb__365->GetXaxis()->SetTitle("m(b,b) leading b-jets [GeV]");
   c1lep4jex3bex_mbb_leading_bjets_ttbarbb__365->GetXaxis()->SetRange(1,1000);
   c1lep4jex3bex_mbb_leading_bjets_ttbarbb__365->GetXaxis()->SetLabelFont(43);
   c1lep4jex3bex_mbb_leading_bjets_ttbarbb__365->GetXaxis()->SetLabelSize(21);
   c1lep4jex3bex_mbb_leading_bjets_ttbarbb__365->GetXaxis()->SetTitleSize(21);
   c1lep4jex3bex_mbb_leading_bjets_ttbarbb__365->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_mbb_leading_bjets_ttbarbb__365->GetXaxis()->SetTitleFont(43);
   c1lep4jex3bex_mbb_leading_bjets_ttbarbb__365->GetYaxis()->SetLabelFont(43);
   c1lep4jex3bex_mbb_leading_bjets_ttbarbb__365->GetYaxis()->SetLabelSize(21);
   c1lep4jex3bex_mbb_leading_bjets_ttbarbb__365->GetYaxis()->SetTitleSize(21);
   c1lep4jex3bex_mbb_leading_bjets_ttbarbb__365->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_mbb_leading_bjets_ttbarbb__365->GetYaxis()->SetTitleFont(43);
   c1lep4jex3bex_mbb_leading_bjets_ttbarbb__365->GetZaxis()->SetLabelFont(43);
   c1lep4jex3bex_mbb_leading_bjets_ttbarbb__365->GetZaxis()->SetLabelSize(21);
   c1lep4jex3bex_mbb_leading_bjets_ttbarbb__365->GetZaxis()->SetTitleSize(21);
   c1lep4jex3bex_mbb_leading_bjets_ttbarbb__365->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jex3bex_mbb_leading_bjets_ttbarbb,"");
   Double_t xAxis407[10] = {50, 100, 150, 200, 250, 300, 350, 400, 450, 500}; 
   
   TH1D *c1lep4jex3bex_mbb_leading_bjets_ttbarcc__366 = new TH1D("c1lep4jex3bex_mbb_leading_bjets_ttbarcc__366","",9, xAxis407);
   c1lep4jex3bex_mbb_leading_bjets_ttbarcc__366->SetBinContent(0,21.65436);
   c1lep4jex3bex_mbb_leading_bjets_ttbarcc__366->SetBinContent(1,150.4627);
   c1lep4jex3bex_mbb_leading_bjets_ttbarcc__366->SetBinContent(2,272.2924);
   c1lep4jex3bex_mbb_leading_bjets_ttbarcc__366->SetBinContent(3,195.7744);
   c1lep4jex3bex_mbb_leading_bjets_ttbarcc__366->SetBinContent(4,132.6384);
   c1lep4jex3bex_mbb_leading_bjets_ttbarcc__366->SetBinContent(5,106.646);
   c1lep4jex3bex_mbb_leading_bjets_ttbarcc__366->SetBinContent(6,56.81657);
   c1lep4jex3bex_mbb_leading_bjets_ttbarcc__366->SetBinContent(7,39.60654);
   c1lep4jex3bex_mbb_leading_bjets_ttbarcc__366->SetBinContent(8,25.2117);
   c1lep4jex3bex_mbb_leading_bjets_ttbarcc__366->SetBinContent(9,12.76932);
   c1lep4jex3bex_mbb_leading_bjets_ttbarcc__366->SetBinContent(10,38.77771);
   c1lep4jex3bex_mbb_leading_bjets_ttbarcc__366->SetBinError(0,3.953087);
   c1lep4jex3bex_mbb_leading_bjets_ttbarcc__366->SetBinError(1,8.227816);
   c1lep4jex3bex_mbb_leading_bjets_ttbarcc__366->SetBinError(2,10.58754);
   c1lep4jex3bex_mbb_leading_bjets_ttbarcc__366->SetBinError(3,9.03692);
   c1lep4jex3bex_mbb_leading_bjets_ttbarcc__366->SetBinError(4,7.552582);
   c1lep4jex3bex_mbb_leading_bjets_ttbarcc__366->SetBinError(5,7.502194);
   c1lep4jex3bex_mbb_leading_bjets_ttbarcc__366->SetBinError(6,4.679359);
   c1lep4jex3bex_mbb_leading_bjets_ttbarcc__366->SetBinError(7,3.819515);
   c1lep4jex3bex_mbb_leading_bjets_ttbarcc__366->SetBinError(8,3.464121);
   c1lep4jex3bex_mbb_leading_bjets_ttbarcc__366->SetBinError(9,2.133454);
   c1lep4jex3bex_mbb_leading_bjets_ttbarcc__366->SetBinError(10,3.698009);
   c1lep4jex3bex_mbb_leading_bjets_ttbarcc__366->SetEntries(3206);
   c1lep4jex3bex_mbb_leading_bjets_ttbarcc__366->SetDirectory(0);
   c1lep4jex3bex_mbb_leading_bjets_ttbarcc__366->SetStats(0);

   ci = TColor::GetColor("#ccccff");
   c1lep4jex3bex_mbb_leading_bjets_ttbarcc__366->SetFillColor(ci);
   c1lep4jex3bex_mbb_leading_bjets_ttbarcc__366->SetMarkerStyle(20);
   c1lep4jex3bex_mbb_leading_bjets_ttbarcc__366->SetMarkerSize(1.2);
   c1lep4jex3bex_mbb_leading_bjets_ttbarcc__366->GetXaxis()->SetTitle("m(b,b) leading b-jets [GeV]");
   c1lep4jex3bex_mbb_leading_bjets_ttbarcc__366->GetXaxis()->SetRange(1,1000);
   c1lep4jex3bex_mbb_leading_bjets_ttbarcc__366->GetXaxis()->SetLabelFont(43);
   c1lep4jex3bex_mbb_leading_bjets_ttbarcc__366->GetXaxis()->SetLabelSize(21);
   c1lep4jex3bex_mbb_leading_bjets_ttbarcc__366->GetXaxis()->SetTitleSize(21);
   c1lep4jex3bex_mbb_leading_bjets_ttbarcc__366->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_mbb_leading_bjets_ttbarcc__366->GetXaxis()->SetTitleFont(43);
   c1lep4jex3bex_mbb_leading_bjets_ttbarcc__366->GetYaxis()->SetLabelFont(43);
   c1lep4jex3bex_mbb_leading_bjets_ttbarcc__366->GetYaxis()->SetLabelSize(21);
   c1lep4jex3bex_mbb_leading_bjets_ttbarcc__366->GetYaxis()->SetTitleSize(21);
   c1lep4jex3bex_mbb_leading_bjets_ttbarcc__366->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_mbb_leading_bjets_ttbarcc__366->GetYaxis()->SetTitleFont(43);
   c1lep4jex3bex_mbb_leading_bjets_ttbarcc__366->GetZaxis()->SetLabelFont(43);
   c1lep4jex3bex_mbb_leading_bjets_ttbarcc__366->GetZaxis()->SetLabelSize(21);
   c1lep4jex3bex_mbb_leading_bjets_ttbarcc__366->GetZaxis()->SetTitleSize(21);
   c1lep4jex3bex_mbb_leading_bjets_ttbarcc__366->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jex3bex_mbb_leading_bjets_ttbarcc,"");
   Double_t xAxis408[10] = {50, 100, 150, 200, 250, 300, 350, 400, 450, 500}; 
   
   TH1D *c1lep4jex3bex_mbb_leading_bjets_ttbarlight__367 = new TH1D("c1lep4jex3bex_mbb_leading_bjets_ttbarlight__367","",9, xAxis408);
   c1lep4jex3bex_mbb_leading_bjets_ttbarlight__367->SetBinContent(0,87.15848);
   c1lep4jex3bex_mbb_leading_bjets_ttbarlight__367->SetBinContent(1,659.4743);
   c1lep4jex3bex_mbb_leading_bjets_ttbarlight__367->SetBinContent(2,1377.612);
   c1lep4jex3bex_mbb_leading_bjets_ttbarlight__367->SetBinContent(3,849.0113);
   c1lep4jex3bex_mbb_leading_bjets_ttbarlight__367->SetBinContent(4,536.308);
   c1lep4jex3bex_mbb_leading_bjets_ttbarlight__367->SetBinContent(5,320.3225);
   c1lep4jex3bex_mbb_leading_bjets_ttbarlight__367->SetBinContent(6,185.2252);
   c1lep4jex3bex_mbb_leading_bjets_ttbarlight__367->SetBinContent(7,118.1531);
   c1lep4jex3bex_mbb_leading_bjets_ttbarlight__367->SetBinContent(8,72.11791);
   c1lep4jex3bex_mbb_leading_bjets_ttbarlight__367->SetBinContent(9,49.04789);
   c1lep4jex3bex_mbb_leading_bjets_ttbarlight__367->SetBinContent(10,82.13615);
   c1lep4jex3bex_mbb_leading_bjets_ttbarlight__367->SetBinError(0,6.729577);
   c1lep4jex3bex_mbb_leading_bjets_ttbarlight__367->SetBinError(1,19.45318);
   c1lep4jex3bex_mbb_leading_bjets_ttbarlight__367->SetBinError(2,26.48977);
   c1lep4jex3bex_mbb_leading_bjets_ttbarlight__367->SetBinError(3,22.57848);
   c1lep4jex3bex_mbb_leading_bjets_ttbarlight__367->SetBinError(4,16.59076);
   c1lep4jex3bex_mbb_leading_bjets_ttbarlight__367->SetBinError(5,12.69915);
   c1lep4jex3bex_mbb_leading_bjets_ttbarlight__367->SetBinError(6,9.364046);
   c1lep4jex3bex_mbb_leading_bjets_ttbarlight__367->SetBinError(7,7.066791);
   c1lep4jex3bex_mbb_leading_bjets_ttbarlight__367->SetBinError(8,6.176623);
   c1lep4jex3bex_mbb_leading_bjets_ttbarlight__367->SetBinError(9,5.056976);
   c1lep4jex3bex_mbb_leading_bjets_ttbarlight__367->SetBinError(10,6.663798);
   c1lep4jex3bex_mbb_leading_bjets_ttbarlight__367->SetEntries(12530);
   c1lep4jex3bex_mbb_leading_bjets_ttbarlight__367->SetDirectory(0);
   c1lep4jex3bex_mbb_leading_bjets_ttbarlight__367->SetStats(0);
   c1lep4jex3bex_mbb_leading_bjets_ttbarlight__367->SetMarkerStyle(20);
   c1lep4jex3bex_mbb_leading_bjets_ttbarlight__367->SetMarkerSize(1.2);
   c1lep4jex3bex_mbb_leading_bjets_ttbarlight__367->GetXaxis()->SetTitle("m(b,b) leading b-jets [GeV]");
   c1lep4jex3bex_mbb_leading_bjets_ttbarlight__367->GetXaxis()->SetRange(1,1000);
   c1lep4jex3bex_mbb_leading_bjets_ttbarlight__367->GetXaxis()->SetLabelFont(43);
   c1lep4jex3bex_mbb_leading_bjets_ttbarlight__367->GetXaxis()->SetLabelSize(21);
   c1lep4jex3bex_mbb_leading_bjets_ttbarlight__367->GetXaxis()->SetTitleSize(21);
   c1lep4jex3bex_mbb_leading_bjets_ttbarlight__367->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_mbb_leading_bjets_ttbarlight__367->GetXaxis()->SetTitleFont(43);
   c1lep4jex3bex_mbb_leading_bjets_ttbarlight__367->GetYaxis()->SetLabelFont(43);
   c1lep4jex3bex_mbb_leading_bjets_ttbarlight__367->GetYaxis()->SetLabelSize(21);
   c1lep4jex3bex_mbb_leading_bjets_ttbarlight__367->GetYaxis()->SetTitleSize(21);
   c1lep4jex3bex_mbb_leading_bjets_ttbarlight__367->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_mbb_leading_bjets_ttbarlight__367->GetYaxis()->SetTitleFont(43);
   c1lep4jex3bex_mbb_leading_bjets_ttbarlight__367->GetZaxis()->SetLabelFont(43);
   c1lep4jex3bex_mbb_leading_bjets_ttbarlight__367->GetZaxis()->SetLabelSize(21);
   c1lep4jex3bex_mbb_leading_bjets_ttbarlight__367->GetZaxis()->SetTitleSize(21);
   c1lep4jex3bex_mbb_leading_bjets_ttbarlight__367->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jex3bex_mbb_leading_bjets_ttbarlight,"");
   Double_t xAxis409[10] = {50, 100, 150, 200, 250, 300, 350, 400, 450, 500}; 
   
   TH1D *c1lep4jex3bex_mbb_leading_bjets_uHcW__368 = new TH1D("c1lep4jex3bex_mbb_leading_bjets_uHcW__368","",9, xAxis409);
   c1lep4jex3bex_mbb_leading_bjets_uHcW__368->SetBinContent(0,24.30219);
   c1lep4jex3bex_mbb_leading_bjets_uHcW__368->SetBinContent(1,183.9836);
   c1lep4jex3bex_mbb_leading_bjets_uHcW__368->SetBinContent(2,464.9415);
   c1lep4jex3bex_mbb_leading_bjets_uHcW__368->SetBinContent(3,235.8078);
   c1lep4jex3bex_mbb_leading_bjets_uHcW__368->SetBinContent(4,142.5722);
   c1lep4jex3bex_mbb_leading_bjets_uHcW__368->SetBinContent(5,76.91619);
   c1lep4jex3bex_mbb_leading_bjets_uHcW__368->SetBinContent(6,50.05078);
   c1lep4jex3bex_mbb_leading_bjets_uHcW__368->SetBinContent(7,33.67278);
   c1lep4jex3bex_mbb_leading_bjets_uHcW__368->SetBinContent(8,13.99912);
   c1lep4jex3bex_mbb_leading_bjets_uHcW__368->SetBinContent(9,12.41201);
   c1lep4jex3bex_mbb_leading_bjets_uHcW__368->SetBinContent(10,22.48718);
   c1lep4jex3bex_mbb_leading_bjets_uHcW__368->SetBinError(0,3.557619);
   c1lep4jex3bex_mbb_leading_bjets_uHcW__368->SetBinError(1,12.30465);
   c1lep4jex3bex_mbb_leading_bjets_uHcW__368->SetBinError(2,19.62833);
   c1lep4jex3bex_mbb_leading_bjets_uHcW__368->SetBinError(3,14.45545);
   c1lep4jex3bex_mbb_leading_bjets_uHcW__368->SetBinError(4,11.93977);
   c1lep4jex3bex_mbb_leading_bjets_uHcW__368->SetBinError(5,8.010442);
   c1lep4jex3bex_mbb_leading_bjets_uHcW__368->SetBinError(6,5.313434);
   c1lep4jex3bex_mbb_leading_bjets_uHcW__368->SetBinError(7,5.936211);
   c1lep4jex3bex_mbb_leading_bjets_uHcW__368->SetBinError(8,3.2636);
   c1lep4jex3bex_mbb_leading_bjets_uHcW__368->SetBinError(9,2.557521);
   c1lep4jex3bex_mbb_leading_bjets_uHcW__368->SetBinError(10,4.885274);
   c1lep4jex3bex_mbb_leading_bjets_uHcW__368->SetEntries(5559);
   c1lep4jex3bex_mbb_leading_bjets_uHcW__368->SetDirectory(0);
   c1lep4jex3bex_mbb_leading_bjets_uHcW__368->SetStats(0);
   c1lep4jex3bex_mbb_leading_bjets_uHcW__368->SetFillColor(2);
   c1lep4jex3bex_mbb_leading_bjets_uHcW__368->SetLineColor(2);
   c1lep4jex3bex_mbb_leading_bjets_uHcW__368->SetMarkerStyle(20);
   c1lep4jex3bex_mbb_leading_bjets_uHcW__368->SetMarkerSize(1.2);
   c1lep4jex3bex_mbb_leading_bjets_uHcW__368->GetXaxis()->SetTitle("m(b,b) leading b-jets [GeV]");
   c1lep4jex3bex_mbb_leading_bjets_uHcW__368->GetXaxis()->SetRange(1,1000);
   c1lep4jex3bex_mbb_leading_bjets_uHcW__368->GetXaxis()->SetLabelFont(43);
   c1lep4jex3bex_mbb_leading_bjets_uHcW__368->GetXaxis()->SetLabelSize(21);
   c1lep4jex3bex_mbb_leading_bjets_uHcW__368->GetXaxis()->SetTitleSize(21);
   c1lep4jex3bex_mbb_leading_bjets_uHcW__368->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_mbb_leading_bjets_uHcW__368->GetXaxis()->SetTitleFont(43);
   c1lep4jex3bex_mbb_leading_bjets_uHcW__368->GetYaxis()->SetLabelFont(43);
   c1lep4jex3bex_mbb_leading_bjets_uHcW__368->GetYaxis()->SetLabelSize(21);
   c1lep4jex3bex_mbb_leading_bjets_uHcW__368->GetYaxis()->SetTitleSize(21);
   c1lep4jex3bex_mbb_leading_bjets_uHcW__368->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_mbb_leading_bjets_uHcW__368->GetYaxis()->SetTitleFont(43);
   c1lep4jex3bex_mbb_leading_bjets_uHcW__368->GetZaxis()->SetLabelFont(43);
   c1lep4jex3bex_mbb_leading_bjets_uHcW__368->GetZaxis()->SetLabelSize(21);
   c1lep4jex3bex_mbb_leading_bjets_uHcW__368->GetZaxis()->SetTitleSize(21);
   c1lep4jex3bex_mbb_leading_bjets_uHcW__368->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jex3bex_mbb_leading_bjets_uHcW,"");
   h_stack->Draw("hist same");
   
   Double_t g_totErr_fx3163[9] = {
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475};
   Double_t g_totErr_fy3163[9] = {
   1486.278,
   2769.296,
   1871.832,
   1291.924,
   857.6113,
   518.1526,
   345.4661,
   224.0659,
   152.4742};
   Double_t g_totErr_felx3163[9] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t g_totErr_fely3163[9] = {
   313.3553,
   569.4833,
   371.6016,
   243.9215,
   163.5572,
   97.35354,
   66.93866,
   43.37318,
   29.69115};
   Double_t g_totErr_fehx3163[9] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t g_totErr_fehy3163[9] = {
   313.3553,
   569.4833,
   371.6016,
   243.9215,
   163.5572,
   97.35354,
   66.93866,
   43.37318,
   29.69115};
   grae = new TGraphAsymmErrors(9,g_totErr_fx3163,g_totErr_fy3163,g_totErr_felx3163,g_totErr_fehx3163,g_totErr_fely3163,g_totErr_fehy3163);
   grae->SetName("g_totErr");
   grae->SetTitle("");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(3354);
   grae->SetLineColor(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0);
   
   TH1F *Graph_g_totErr3163 = new TH1F("Graph_g_totErr3163","",100,5,545);
   Graph_g_totErr3163->SetMinimum(0);
   Graph_g_totErr3163->SetMaximum(3660.379);
   Graph_g_totErr3163->SetDirectory(0);
   Graph_g_totErr3163->SetStats(0);
   Graph_g_totErr3163->SetLineWidth(2);
   Graph_g_totErr3163->SetMarkerStyle(20);
   Graph_g_totErr3163->SetMarkerSize(1.2);
   Graph_g_totErr3163->GetXaxis()->SetLabelFont(43);
   Graph_g_totErr3163->GetXaxis()->SetLabelSize(21);
   Graph_g_totErr3163->GetXaxis()->SetTitleSize(21);
   Graph_g_totErr3163->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_totErr3163->GetXaxis()->SetTitleFont(43);
   Graph_g_totErr3163->GetYaxis()->SetLabelFont(43);
   Graph_g_totErr3163->GetYaxis()->SetLabelSize(21);
   Graph_g_totErr3163->GetYaxis()->SetTitleSize(21);
   Graph_g_totErr3163->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_totErr3163->GetYaxis()->SetTitleFont(43);
   Graph_g_totErr3163->GetZaxis()->SetLabelFont(43);
   Graph_g_totErr3163->GetZaxis()->SetLabelSize(21);
   Graph_g_totErr3163->GetZaxis()->SetTitleSize(21);
   Graph_g_totErr3163->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_totErr3163);
   
   grae->Draw("e2");
   
   Double_t Graph_from_c1lep4jex3bex_mbb_leading_bjets_Data_fx3164[9] = {
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475};
   Double_t Graph_from_c1lep4jex3bex_mbb_leading_bjets_Data_fy3164[9] = {
   1624,
   3001,
   2207,
   1406,
   940,
   622,
   381,
   236,
   166};
   Double_t Graph_from_c1lep4jex3bex_mbb_leading_bjets_Data_felx3164[9] = {
   24.95,
   24.95,
   24.95,
   24.95,
   24.95,
   24.95,
   24.95,
   24.95,
   24.95};
   Double_t Graph_from_c1lep4jex3bex_mbb_leading_bjets_Data_fely3164[9] = {
   40.29888,
   54.78138,
   46.97872,
   37.49667,
   30.65942,
   24.93993,
   19.51922,
   15.36229,
   12.8841};
   Double_t Graph_from_c1lep4jex3bex_mbb_leading_bjets_Data_fehx3164[9] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t Graph_from_c1lep4jex3bex_mbb_leading_bjets_Data_fehy3164[9] = {
   40.29888,
   54.78138,
   46.97872,
   37.49667,
   30.65942,
   24.93993,
   19.51922,
   15.36229,
   12.8841};
   grae = new TGraphAsymmErrors(9,Graph_from_c1lep4jex3bex_mbb_leading_bjets_Data_fx3164,Graph_from_c1lep4jex3bex_mbb_leading_bjets_Data_fy3164,Graph_from_c1lep4jex3bex_mbb_leading_bjets_Data_felx3164,Graph_from_c1lep4jex3bex_mbb_leading_bjets_Data_fehx3164,Graph_from_c1lep4jex3bex_mbb_leading_bjets_Data_fely3164,Graph_from_c1lep4jex3bex_mbb_leading_bjets_Data_fehy3164);
   grae->SetName("Graph_from_c1lep4jex3bex_mbb_leading_bjets_Data");
   grae->SetTitle("");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_c1lep4jex3bex_mbb_leading_bjets_Data3164 = new TH1F("Graph_Graph_from_c1lep4jex3bex_mbb_leading_bjets_Data3164","",100,5.055,544.995);
   Graph_Graph_from_c1lep4jex3bex_mbb_leading_bjets_Data3164->SetMinimum(0);
   Graph_Graph_from_c1lep4jex3bex_mbb_leading_bjets_Data3164->SetMaximum(3346.048);
   Graph_Graph_from_c1lep4jex3bex_mbb_leading_bjets_Data3164->SetDirectory(0);
   Graph_Graph_from_c1lep4jex3bex_mbb_leading_bjets_Data3164->SetStats(0);
   Graph_Graph_from_c1lep4jex3bex_mbb_leading_bjets_Data3164->SetLineWidth(2);
   Graph_Graph_from_c1lep4jex3bex_mbb_leading_bjets_Data3164->SetMarkerStyle(20);
   Graph_Graph_from_c1lep4jex3bex_mbb_leading_bjets_Data3164->SetMarkerSize(1.2);
   Graph_Graph_from_c1lep4jex3bex_mbb_leading_bjets_Data3164->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep4jex3bex_mbb_leading_bjets_Data3164->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep4jex3bex_mbb_leading_bjets_Data3164->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep4jex3bex_mbb_leading_bjets_Data3164->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep4jex3bex_mbb_leading_bjets_Data3164->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep4jex3bex_mbb_leading_bjets_Data3164->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep4jex3bex_mbb_leading_bjets_Data3164->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep4jex3bex_mbb_leading_bjets_Data3164->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep4jex3bex_mbb_leading_bjets_Data3164->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep4jex3bex_mbb_leading_bjets_Data3164->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep4jex3bex_mbb_leading_bjets_Data3164->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep4jex3bex_mbb_leading_bjets_Data3164->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep4jex3bex_mbb_leading_bjets_Data3164->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep4jex3bex_mbb_leading_bjets_Data3164->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_c1lep4jex3bex_mbb_leading_bjets_Data3164);
   
   grae->Draw("ep1 ");
   Double_t xAxis410[10] = {50, 100, 150, 200, 250, 300, 350, 400, 450, 500}; 
   
   TH1D *h_dummy_copy__369 = new TH1D("h_dummy_copy__369","",9, xAxis410);
   h_dummy_copy__369->SetEntries(2920911);
   h_dummy_copy__369->SetDirectory(0);
   h_dummy_copy__369->SetStats(0);
   h_dummy_copy__369->SetMarkerStyle(20);
   h_dummy_copy__369->SetMarkerSize(1.2);
   h_dummy_copy__369->GetXaxis()->SetTitle("m_{bb} leading b-jets [GeV]");
   h_dummy_copy__369->GetXaxis()->SetRange(1,1000);
   h_dummy_copy__369->GetXaxis()->SetLabelFont(43);
   h_dummy_copy__369->GetXaxis()->SetLabelSize(21);
   h_dummy_copy__369->GetXaxis()->SetTitleSize(21);
   h_dummy_copy__369->GetXaxis()->SetTitleOffset(1.4);
   h_dummy_copy__369->GetXaxis()->SetTitleFont(43);
   h_dummy_copy__369->GetYaxis()->SetTitle("Events / 50 GeV");
   h_dummy_copy__369->GetYaxis()->SetLabelFont(43);
   h_dummy_copy__369->GetYaxis()->SetLabelSize(16.8);
   h_dummy_copy__369->GetYaxis()->SetTitleSize(21);
   h_dummy_copy__369->GetYaxis()->SetTitleOffset(2.4);
   h_dummy_copy__369->GetYaxis()->SetTitleFont(43);
   h_dummy_copy__369->GetZaxis()->SetLabelFont(43);
   h_dummy_copy__369->GetZaxis()->SetLabelSize(21);
   h_dummy_copy__369->GetZaxis()->SetTitleSize(21);
   h_dummy_copy__369->GetZaxis()->SetTitleFont(43);
   h_dummy_copy__369->Draw("sameaxis");
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
      tex = new TLatex(0.18,0.73,"4j, 3b");
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
   TLegendEntry *entry=leg->AddEntry("c1lep4jex3bex_mbb_leading_bjets_Data","Data","lep");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep4jex3bex_mbb_leading_bjets_uHcW","t#bar{t}#rightarrowWbHc (BR=1%)","f");
   entry->SetFillColor(2);
   entry->SetFillStyle(1001);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep4jex3bex_mbb_leading_bjets_ttbarlight","t#bar{t}+light","f");
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep4jex3bex_mbb_leading_bjets_ttbarcc","t#bar{t}+cc","f");

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
   entry=leg->AddEntry("c1lep4jex3bex_mbb_leading_bjets_ttbarbb","t#bar{t}+bb","f");

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
   entry=leg->AddEntry("c1lep4jex3bex_mbb_leading_bjets_topEW","Non-t#bar{t}","f");

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
   c_c1lep4jex3bex_mbb_leading_bjets->cd();
   c_c1lep4jex3bex_mbb_leading_bjets->Modified();
   c_c1lep4jex3bex_mbb_leading_bjets->cd();
   c_c1lep4jex3bex_mbb_leading_bjets->SetSelected(c_c1lep4jex3bex_mbb_leading_bjets);
}
