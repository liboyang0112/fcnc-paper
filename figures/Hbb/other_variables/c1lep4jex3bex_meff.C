void c1lep4jex3bex_meff()
{
//=========Macro generated from canvas: c_c1lep4jex3bex_meff/c_c1lep4jex3bex_meff
//=========  (Thu Jul 19 17:38:03 2018) by ROOT version6.04/14
   TCanvas *c_c1lep4jex3bex_meff = new TCanvas("c_c1lep4jex3bex_meff", "c_c1lep4jex3bex_meff",0,0,600,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c_c1lep4jex3bex_meff->SetHighLightColor(2);
   c_c1lep4jex3bex_meff->Range(0,0,1,1);
   c_c1lep4jex3bex_meff->SetFillColor(0);
   c_c1lep4jex3bex_meff->SetBorderMode(0);
   c_c1lep4jex3bex_meff->SetBorderSize(2);
   c_c1lep4jex3bex_meff->SetTickx(1);
   c_c1lep4jex3bex_meff->SetTicky(1);
   c_c1lep4jex3bex_meff->SetLeftMargin(0.16);
   c_c1lep4jex3bex_meff->SetRightMargin(0.05);
   c_c1lep4jex3bex_meff->SetTopMargin(0.05);
   c_c1lep4jex3bex_meff->SetBottomMargin(0.16);
   c_c1lep4jex3bex_meff->SetFrameBorderMode(0);
  
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
   Double_t xAxis101[8] = {125, 225, 325, 425, 525, 625, 725, 825}; 
   
   TH1D *h_dummy2__91 = new TH1D("h_dummy2__91","Data/MC",7, xAxis101);
   h_dummy2__91->SetMinimum(0.5);
   h_dummy2__91->SetMaximum(1.5);
   h_dummy2__91->SetEntries(2920963);
   h_dummy2__91->SetDirectory(0);
   h_dummy2__91->SetStats(0);
   h_dummy2__91->SetMarkerStyle(20);
   h_dummy2__91->SetMarkerSize(1.2);
   h_dummy2__91->GetXaxis()->SetTitle("m_{eff} [GeV]");
   h_dummy2__91->GetXaxis()->SetRange(1,70);
   h_dummy2__91->GetXaxis()->SetLabelFont(43);
   h_dummy2__91->GetXaxis()->SetLabelOffset(0.025);
   h_dummy2__91->GetXaxis()->SetLabelSize(16.8);
   h_dummy2__91->GetXaxis()->SetTitleSize(21);
   h_dummy2__91->GetXaxis()->SetTitleOffset(5.05);
   h_dummy2__91->GetXaxis()->SetTitleFont(43);
   h_dummy2__91->GetYaxis()->SetTitle("Data / Bkg");
   h_dummy2__91->GetYaxis()->SetNdivisions(-504);
   h_dummy2__91->GetYaxis()->SetLabelFont(43);
   h_dummy2__91->GetYaxis()->SetLabelOffset(0.02);
   h_dummy2__91->GetYaxis()->SetLabelSize(16.8);
   h_dummy2__91->GetYaxis()->SetTitleSize(21);
   h_dummy2__91->GetYaxis()->SetTitleOffset(2.4);
   h_dummy2__91->GetYaxis()->SetTitleFont(43);
   h_dummy2__91->GetZaxis()->SetLabelFont(43);
   h_dummy2__91->GetZaxis()->SetLabelSize(21);
   h_dummy2__91->GetZaxis()->SetTitleSize(21);
   h_dummy2__91->GetZaxis()->SetTitleFont(43);
   h_dummy2__91->Draw("HIST");
   
   Double_t Graph_from_h_ratio_fx3041[7] = {
   175,
   275,
   375,
   475,
   575,
   675,
   775};
   Double_t Graph_from_h_ratio_fy3041[7] = {
   0.803878,
   1.147767,
   1.137848,
   1.053891,
   1.077559,
   1.266395,
   1.153025};
   Double_t Graph_from_h_ratio_felx3041[7] = {
   49.9,
   49.9,
   49.9,
   49.9,
   49.9,
   49.9,
   49.9};
   Double_t Graph_from_h_ratio_fely3041[7] = {
   0.04438673,
   0.01930452,
   0.01840272,
   0.02438413,
   0.03668052,
   0.06201565,
   0.08072791};
   Double_t Graph_from_h_ratio_fehx3041[7] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t Graph_from_h_ratio_fehy3041[7] = {
   0.04438673,
   0.01930452,
   0.01840272,
   0.02438413,
   0.03668052,
   0.06201565,
   0.08072791};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(7,Graph_from_h_ratio_fx3041,Graph_from_h_ratio_fy3041,Graph_from_h_ratio_felx3041,Graph_from_h_ratio_fehx3041,Graph_from_h_ratio_fely3041,Graph_from_h_ratio_fehy3041);
   grae->SetName("Graph_from_h_ratio");
   grae->SetTitle("");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(24);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_h_ratio3041 = new TH1F("Graph_Graph_from_h_ratio3041","",100,55.11,894.99);
   Graph_Graph_from_h_ratio3041->SetMinimum(0.7025992);
   Graph_Graph_from_h_ratio3041->SetMaximum(1.385303);
   Graph_Graph_from_h_ratio3041->SetDirectory(0);
   Graph_Graph_from_h_ratio3041->SetStats(0);
   Graph_Graph_from_h_ratio3041->SetLineWidth(2);
   Graph_Graph_from_h_ratio3041->SetMarkerStyle(20);
   Graph_Graph_from_h_ratio3041->SetMarkerSize(1.2);
   Graph_Graph_from_h_ratio3041->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3041->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3041->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3041->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3041->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3041->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3041->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3041->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3041->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3041->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3041->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3041->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3041->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3041->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_h_ratio3041);
   
   grae->Draw("pe0");
   TLine *line = new TLine(125,1,825,1);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t g_ratio2_fx3042[7] = {
   175,
   275,
   375,
   475,
   575,
   675,
   775};
   Double_t g_ratio2_fy3042[7] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t g_ratio2_felx3042[7] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t g_ratio2_fely3042[7] = {
   0.1773584,
   0.2137614,
   0.1987528,
   0.1868326,
   0.1906666,
   0.2040158,
   0.2088032};
   Double_t g_ratio2_fehx3042[7] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t g_ratio2_fehy3042[7] = {
   0.1773584,
   0.2137614,
   0.1987528,
   0.1868326,
   0.1906666,
   0.2040158,
   0.2088032};
   grae = new TGraphAsymmErrors(7,g_ratio2_fx3042,g_ratio2_fy3042,g_ratio2_felx3042,g_ratio2_fehx3042,g_ratio2_fely3042,g_ratio2_fehy3042);
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
   
   TH1F *Graph_g_ratio23042 = new TH1F("Graph_g_ratio23042","",100,55,895);
   Graph_g_ratio23042->SetMinimum(0.7434863);
   Graph_g_ratio23042->SetMaximum(1.256514);
   Graph_g_ratio23042->SetDirectory(0);
   Graph_g_ratio23042->SetStats(0);
   Graph_g_ratio23042->SetLineWidth(2);
   Graph_g_ratio23042->SetMarkerStyle(20);
   Graph_g_ratio23042->SetMarkerSize(1.2);
   Graph_g_ratio23042->GetXaxis()->SetLabelFont(43);
   Graph_g_ratio23042->GetXaxis()->SetLabelSize(21);
   Graph_g_ratio23042->GetXaxis()->SetTitleSize(21);
   Graph_g_ratio23042->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23042->GetXaxis()->SetTitleFont(43);
   Graph_g_ratio23042->GetYaxis()->SetLabelFont(43);
   Graph_g_ratio23042->GetYaxis()->SetLabelSize(21);
   Graph_g_ratio23042->GetYaxis()->SetTitleSize(21);
   Graph_g_ratio23042->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23042->GetYaxis()->SetTitleFont(43);
   Graph_g_ratio23042->GetZaxis()->SetLabelFont(43);
   Graph_g_ratio23042->GetZaxis()->SetLabelSize(21);
   Graph_g_ratio23042->GetZaxis()->SetTitleSize(21);
   Graph_g_ratio23042->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_ratio23042);
   
   grae->Draw("e2");
   Double_t xAxis102[8] = {125, 225, 325, 425, 525, 625, 725, 825}; 
   
   TH1D *h_dummy2_copy__92 = new TH1D("h_dummy2_copy__92","Data/MC",7, xAxis102);
   h_dummy2_copy__92->SetMinimum(0.5);
   h_dummy2_copy__92->SetMaximum(1.5);
   h_dummy2_copy__92->SetEntries(2920963);
   h_dummy2_copy__92->SetDirectory(0);
   h_dummy2_copy__92->SetStats(0);
   h_dummy2_copy__92->SetMarkerStyle(20);
   h_dummy2_copy__92->SetMarkerSize(1.2);
   h_dummy2_copy__92->GetXaxis()->SetTitle("m_{eff} [GeV]");
   h_dummy2_copy__92->GetXaxis()->SetRange(1,70);
   h_dummy2_copy__92->GetXaxis()->SetLabelFont(43);
   h_dummy2_copy__92->GetXaxis()->SetLabelOffset(0.025);
   h_dummy2_copy__92->GetXaxis()->SetLabelSize(16.8);
   h_dummy2_copy__92->GetXaxis()->SetTitleSize(21);
   h_dummy2_copy__92->GetXaxis()->SetTitleOffset(5.05);
   h_dummy2_copy__92->GetXaxis()->SetTitleFont(43);
   h_dummy2_copy__92->GetYaxis()->SetTitle("Data / Bkg");
   h_dummy2_copy__92->GetYaxis()->SetNdivisions(-504);
   h_dummy2_copy__92->GetYaxis()->SetLabelFont(43);
   h_dummy2_copy__92->GetYaxis()->SetLabelOffset(0.02);
   h_dummy2_copy__92->GetYaxis()->SetLabelSize(16.8);
   h_dummy2_copy__92->GetYaxis()->SetTitleSize(21);
   h_dummy2_copy__92->GetYaxis()->SetTitleOffset(2.4);
   h_dummy2_copy__92->GetYaxis()->SetTitleFont(43);
   h_dummy2_copy__92->GetZaxis()->SetLabelFont(43);
   h_dummy2_copy__92->GetZaxis()->SetLabelSize(21);
   h_dummy2_copy__92->GetZaxis()->SetTitleSize(21);
   h_dummy2_copy__92->GetZaxis()->SetTitleFont(43);
   h_dummy2_copy__92->Draw("sameaxis");
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
   c_c1lep4jex3bex_meff->cd();
  
// ------------>Primitives in pad: pad0
   TPad *pad0 = new TPad("pad0", "pad0",0,0.2,1,1);
   pad0->Draw();
   pad0->cd();
   pad0->Range(4.012346,-822.67,868.2099,7404.029);
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
   Double_t xAxis103[8] = {125, 225, 325, 425, 525, 625, 725, 825}; 
   
   TH1D *h_dummy__93 = new TH1D("h_dummy__93","",7, xAxis103);
   h_dummy__93->SetMinimum(0);
   h_dummy__93->SetMaximum(6992.694);
   h_dummy__93->SetEntries(2920963);
   h_dummy__93->SetDirectory(0);
   h_dummy__93->SetStats(0);
   h_dummy__93->SetMarkerStyle(20);
   h_dummy__93->SetMarkerSize(1.2);
   h_dummy__93->GetXaxis()->SetRange(1,70);
   h_dummy__93->GetXaxis()->SetLabelFont(43);
   h_dummy__93->GetXaxis()->SetLabelSize(0);
   h_dummy__93->GetXaxis()->SetTitleSize(21);
   h_dummy__93->GetXaxis()->SetTitleOffset(1.4);
   h_dummy__93->GetXaxis()->SetTitleFont(43);
   h_dummy__93->GetYaxis()->SetTitle("Events / 100 GeV");
   h_dummy__93->GetYaxis()->SetLabelFont(43);
   h_dummy__93->GetYaxis()->SetLabelSize(16.8);
   h_dummy__93->GetYaxis()->SetTitleSize(21);
   h_dummy__93->GetYaxis()->SetTitleOffset(2.4);
   h_dummy__93->GetYaxis()->SetTitleFont(43);
   h_dummy__93->GetZaxis()->SetLabelFont(43);
   h_dummy__93->GetZaxis()->SetLabelSize(21);
   h_dummy__93->GetZaxis()->SetTitleSize(21);
   h_dummy__93->GetZaxis()->SetTitleFont(43);
   h_dummy__93->Draw("HIST");
   
   THStack *h_stack = new THStack();
   h_stack->SetName("h_stack");
   h_stack->SetTitle("h_stack");
   Double_t xAxis104[8] = {125, 225, 325, 425, 525, 625, 725, 825}; 
   
   TH1F *h_stack_stack_11 = new TH1F("h_stack_stack_11","h_stack",7, xAxis104);
   h_stack_stack_11->SetMinimum(0);
   h_stack_stack_11->SetMaximum(3919.678);
   h_stack_stack_11->SetDirectory(0);
   h_stack_stack_11->SetStats(0);
   h_stack_stack_11->SetLineWidth(2);
   h_stack_stack_11->SetMarkerStyle(20);
   h_stack_stack_11->SetMarkerSize(1.2);
   h_stack_stack_11->GetXaxis()->SetLabelFont(43);
   h_stack_stack_11->GetXaxis()->SetLabelSize(21);
   h_stack_stack_11->GetXaxis()->SetTitleSize(21);
   h_stack_stack_11->GetXaxis()->SetTitleOffset(1.4);
   h_stack_stack_11->GetXaxis()->SetTitleFont(43);
   h_stack_stack_11->GetYaxis()->SetLabelFont(43);
   h_stack_stack_11->GetYaxis()->SetLabelSize(21);
   h_stack_stack_11->GetYaxis()->SetTitleSize(21);
   h_stack_stack_11->GetYaxis()->SetTitleOffset(1.4);
   h_stack_stack_11->GetYaxis()->SetTitleFont(43);
   h_stack_stack_11->GetZaxis()->SetLabelFont(43);
   h_stack_stack_11->GetZaxis()->SetLabelSize(21);
   h_stack_stack_11->GetZaxis()->SetTitleSize(21);
   h_stack_stack_11->GetZaxis()->SetTitleFont(43);
   h_stack->SetHistogram(h_stack_stack_11);
   
   Double_t xAxis105[8] = {125, 225, 325, 425, 525, 625, 725, 825}; 
   
   TH1D *c1lep4jex3bex_meff_topEW__94 = new TH1D("c1lep4jex3bex_meff_topEW__94","",7, xAxis105);
   c1lep4jex3bex_meff_topEW__94->SetBinContent(1,247.267);
   c1lep4jex3bex_meff_topEW__94->SetBinContent(2,543.6698);
   c1lep4jex3bex_meff_topEW__94->SetBinContent(3,484.1817);
   c1lep4jex3bex_meff_topEW__94->SetBinContent(4,315.5172);
   c1lep4jex3bex_meff_topEW__94->SetBinContent(5,135.1722);
   c1lep4jex3bex_meff_topEW__94->SetBinContent(6,49.28233);
   c1lep4jex3bex_meff_topEW__94->SetBinContent(7,25.73525);
   c1lep4jex3bex_meff_topEW__94->SetBinContent(8,34.34821);
   c1lep4jex3bex_meff_topEW__94->SetBinError(1,40.3778);
   c1lep4jex3bex_meff_topEW__94->SetBinError(2,48.63833);
   c1lep4jex3bex_meff_topEW__94->SetBinError(3,45.41006);
   c1lep4jex3bex_meff_topEW__94->SetBinError(4,37.40837);
   c1lep4jex3bex_meff_topEW__94->SetBinError(5,23.18157);
   c1lep4jex3bex_meff_topEW__94->SetBinError(6,9.480507);
   c1lep4jex3bex_meff_topEW__94->SetBinError(7,2.900525);
   c1lep4jex3bex_meff_topEW__94->SetBinError(8,9.42659);
   c1lep4jex3bex_meff_topEW__94->SetEntries(2895054);
   c1lep4jex3bex_meff_topEW__94->SetDirectory(0);
   c1lep4jex3bex_meff_topEW__94->SetStats(0);

   ci = TColor::GetColor("#66cc66");
   c1lep4jex3bex_meff_topEW__94->SetFillColor(ci);
   c1lep4jex3bex_meff_topEW__94->SetMarkerStyle(20);
   c1lep4jex3bex_meff_topEW__94->SetMarkerSize(1.2);
   c1lep4jex3bex_meff_topEW__94->GetXaxis()->SetTitle("m_{eff} [GeV]");
   c1lep4jex3bex_meff_topEW__94->GetXaxis()->SetRange(1,70);
   c1lep4jex3bex_meff_topEW__94->GetXaxis()->SetLabelFont(43);
   c1lep4jex3bex_meff_topEW__94->GetXaxis()->SetLabelSize(21);
   c1lep4jex3bex_meff_topEW__94->GetXaxis()->SetTitleSize(21);
   c1lep4jex3bex_meff_topEW__94->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_meff_topEW__94->GetXaxis()->SetTitleFont(43);
   c1lep4jex3bex_meff_topEW__94->GetYaxis()->SetLabelFont(43);
   c1lep4jex3bex_meff_topEW__94->GetYaxis()->SetLabelSize(21);
   c1lep4jex3bex_meff_topEW__94->GetYaxis()->SetTitleSize(21);
   c1lep4jex3bex_meff_topEW__94->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_meff_topEW__94->GetYaxis()->SetTitleFont(43);
   c1lep4jex3bex_meff_topEW__94->GetZaxis()->SetLabelFont(43);
   c1lep4jex3bex_meff_topEW__94->GetZaxis()->SetLabelSize(21);
   c1lep4jex3bex_meff_topEW__94->GetZaxis()->SetTitleSize(21);
   c1lep4jex3bex_meff_topEW__94->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jex3bex_meff_topEW,"");
   Double_t xAxis106[8] = {125, 225, 325, 425, 525, 625, 725, 825}; 
   
   TH1D *c1lep4jex3bex_meff_ttbarbb__95 = new TH1D("c1lep4jex3bex_meff_ttbarbb__95","",7, xAxis106);
   c1lep4jex3bex_meff_ttbarbb__95->SetBinContent(1,43.53163);
   c1lep4jex3bex_meff_ttbarbb__95->SetBinContent(2,697.2953);
   c1lep4jex3bex_meff_ttbarbb__95->SetBinContent(3,1001.527);
   c1lep4jex3bex_meff_ttbarbb__95->SetBinContent(4,596.3421);
   c1lep4jex3bex_meff_ttbarbb__95->SetBinContent(5,277.9615);
   c1lep4jex3bex_meff_ttbarbb__95->SetBinContent(6,134.0229);
   c1lep4jex3bex_meff_ttbarbb__95->SetBinContent(7,64.52776);
   c1lep4jex3bex_meff_ttbarbb__95->SetBinContent(8,81.40719);
   c1lep4jex3bex_meff_ttbarbb__95->SetBinError(1,4.290822);
   c1lep4jex3bex_meff_ttbarbb__95->SetBinError(2,16.73469);
   c1lep4jex3bex_meff_ttbarbb__95->SetBinError(3,20.20248);
   c1lep4jex3bex_meff_ttbarbb__95->SetBinError(4,16.84423);
   c1lep4jex3bex_meff_ttbarbb__95->SetBinError(5,11.19673);
   c1lep4jex3bex_meff_ttbarbb__95->SetBinError(6,7.07105);
   c1lep4jex3bex_meff_ttbarbb__95->SetBinError(7,5.993062);
   c1lep4jex3bex_meff_ttbarbb__95->SetBinError(8,6.73527);
   c1lep4jex3bex_meff_ttbarbb__95->SetEntries(10166);
   c1lep4jex3bex_meff_ttbarbb__95->SetDirectory(0);
   c1lep4jex3bex_meff_ttbarbb__95->SetStats(0);

   ci = TColor::GetColor("#6666cc");
   c1lep4jex3bex_meff_ttbarbb__95->SetFillColor(ci);
   c1lep4jex3bex_meff_ttbarbb__95->SetMarkerStyle(20);
   c1lep4jex3bex_meff_ttbarbb__95->SetMarkerSize(1.2);
   c1lep4jex3bex_meff_ttbarbb__95->GetXaxis()->SetTitle("m_{eff} [GeV]");
   c1lep4jex3bex_meff_ttbarbb__95->GetXaxis()->SetRange(1,70);
   c1lep4jex3bex_meff_ttbarbb__95->GetXaxis()->SetLabelFont(43);
   c1lep4jex3bex_meff_ttbarbb__95->GetXaxis()->SetLabelSize(21);
   c1lep4jex3bex_meff_ttbarbb__95->GetXaxis()->SetTitleSize(21);
   c1lep4jex3bex_meff_ttbarbb__95->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_meff_ttbarbb__95->GetXaxis()->SetTitleFont(43);
   c1lep4jex3bex_meff_ttbarbb__95->GetYaxis()->SetLabelFont(43);
   c1lep4jex3bex_meff_ttbarbb__95->GetYaxis()->SetLabelSize(21);
   c1lep4jex3bex_meff_ttbarbb__95->GetYaxis()->SetTitleSize(21);
   c1lep4jex3bex_meff_ttbarbb__95->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_meff_ttbarbb__95->GetYaxis()->SetTitleFont(43);
   c1lep4jex3bex_meff_ttbarbb__95->GetZaxis()->SetLabelFont(43);
   c1lep4jex3bex_meff_ttbarbb__95->GetZaxis()->SetLabelSize(21);
   c1lep4jex3bex_meff_ttbarbb__95->GetZaxis()->SetTitleSize(21);
   c1lep4jex3bex_meff_ttbarbb__95->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jex3bex_meff_ttbarbb,"");
   Double_t xAxis107[8] = {125, 225, 325, 425, 525, 625, 725, 825}; 
   
   TH1D *c1lep4jex3bex_meff_ttbarcc__96 = new TH1D("c1lep4jex3bex_meff_ttbarcc__96","",7, xAxis107);
   c1lep4jex3bex_meff_ttbarcc__96->SetBinContent(1,21.06073);
   c1lep4jex3bex_meff_ttbarcc__96->SetBinContent(2,306.4412);
   c1lep4jex3bex_meff_ttbarcc__96->SetBinContent(3,368.6431);
   c1lep4jex3bex_meff_ttbarcc__96->SetBinContent(4,185.2162);
   c1lep4jex3bex_meff_ttbarcc__96->SetBinContent(5,92.52871);
   c1lep4jex3bex_meff_ttbarcc__96->SetBinContent(6,40.94841);
   c1lep4jex3bex_meff_ttbarcc__96->SetBinContent(7,16.43861);
   c1lep4jex3bex_meff_ttbarcc__96->SetBinContent(8,21.37327);
   c1lep4jex3bex_meff_ttbarcc__96->SetBinError(1,2.885667);
   c1lep4jex3bex_meff_ttbarcc__96->SetBinError(2,11.90019);
   c1lep4jex3bex_meff_ttbarcc__96->SetBinError(3,12.76561);
   c1lep4jex3bex_meff_ttbarcc__96->SetBinError(4,8.514709);
   c1lep4jex3bex_meff_ttbarcc__96->SetBinError(5,6.428071);
   c1lep4jex3bex_meff_ttbarcc__96->SetBinError(6,3.959798);
   c1lep4jex3bex_meff_ttbarcc__96->SetBinError(7,2.401763);
   c1lep4jex3bex_meff_ttbarcc__96->SetBinError(8,2.991826);
   c1lep4jex3bex_meff_ttbarcc__96->SetEntries(3206);
   c1lep4jex3bex_meff_ttbarcc__96->SetDirectory(0);
   c1lep4jex3bex_meff_ttbarcc__96->SetStats(0);

   ci = TColor::GetColor("#ccccff");
   c1lep4jex3bex_meff_ttbarcc__96->SetFillColor(ci);
   c1lep4jex3bex_meff_ttbarcc__96->SetMarkerStyle(20);
   c1lep4jex3bex_meff_ttbarcc__96->SetMarkerSize(1.2);
   c1lep4jex3bex_meff_ttbarcc__96->GetXaxis()->SetTitle("m_{eff} [GeV]");
   c1lep4jex3bex_meff_ttbarcc__96->GetXaxis()->SetRange(1,70);
   c1lep4jex3bex_meff_ttbarcc__96->GetXaxis()->SetLabelFont(43);
   c1lep4jex3bex_meff_ttbarcc__96->GetXaxis()->SetLabelSize(21);
   c1lep4jex3bex_meff_ttbarcc__96->GetXaxis()->SetTitleSize(21);
   c1lep4jex3bex_meff_ttbarcc__96->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_meff_ttbarcc__96->GetXaxis()->SetTitleFont(43);
   c1lep4jex3bex_meff_ttbarcc__96->GetYaxis()->SetLabelFont(43);
   c1lep4jex3bex_meff_ttbarcc__96->GetYaxis()->SetLabelSize(21);
   c1lep4jex3bex_meff_ttbarcc__96->GetYaxis()->SetTitleSize(21);
   c1lep4jex3bex_meff_ttbarcc__96->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_meff_ttbarcc__96->GetYaxis()->SetTitleFont(43);
   c1lep4jex3bex_meff_ttbarcc__96->GetZaxis()->SetLabelFont(43);
   c1lep4jex3bex_meff_ttbarcc__96->GetZaxis()->SetLabelSize(21);
   c1lep4jex3bex_meff_ttbarcc__96->GetZaxis()->SetTitleSize(21);
   c1lep4jex3bex_meff_ttbarcc__96->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jex3bex_meff_ttbarcc,"");
   Double_t xAxis108[8] = {125, 225, 325, 425, 525, 625, 725, 825}; 
   
   TH1D *c1lep4jex3bex_meff_ttbarlight__97 = new TH1D("c1lep4jex3bex_meff_ttbarlight__97","",7, xAxis108);
   c1lep4jex3bex_meff_ttbarlight__97->SetBinContent(1,96.16277);
   c1lep4jex3bex_meff_ttbarlight__97->SetBinContent(2,1532.487);
   c1lep4jex3bex_meff_ttbarlight__97->SetBinContent(3,1505.499);
   c1lep4jex3bex_meff_ttbarlight__97->SetBinContent(4,675.4038);
   c1lep4jex3bex_meff_ttbarlight__97->SetBinContent(5,295.2221);
   c1lep4jex3bex_meff_ttbarlight__97->SetBinContent(6,105.0274);
   c1lep4jex3bex_meff_ttbarlight__97->SetBinContent(7,70.22427);
   c1lep4jex3bex_meff_ttbarlight__97->SetBinContent(8,56.54091);
   c1lep4jex3bex_meff_ttbarlight__97->SetBinError(1,6.847209);
   c1lep4jex3bex_meff_ttbarlight__97->SetBinError(2,28.18076);
   c1lep4jex3bex_meff_ttbarlight__97->SetBinError(3,29.51876);
   c1lep4jex3bex_meff_ttbarlight__97->SetBinError(4,18.22883);
   c1lep4jex3bex_meff_ttbarlight__97->SetBinError(5,12.18361);
   c1lep4jex3bex_meff_ttbarlight__97->SetBinError(6,7.075015);
   c1lep4jex3bex_meff_ttbarlight__97->SetBinError(7,6.672582);
   c1lep4jex3bex_meff_ttbarlight__97->SetBinError(8,5.457006);
   c1lep4jex3bex_meff_ttbarlight__97->SetEntries(12530);
   c1lep4jex3bex_meff_ttbarlight__97->SetDirectory(0);
   c1lep4jex3bex_meff_ttbarlight__97->SetStats(0);
   c1lep4jex3bex_meff_ttbarlight__97->SetMarkerStyle(20);
   c1lep4jex3bex_meff_ttbarlight__97->SetMarkerSize(1.2);
   c1lep4jex3bex_meff_ttbarlight__97->GetXaxis()->SetTitle("m_{eff} [GeV]");
   c1lep4jex3bex_meff_ttbarlight__97->GetXaxis()->SetRange(1,70);
   c1lep4jex3bex_meff_ttbarlight__97->GetXaxis()->SetLabelFont(43);
   c1lep4jex3bex_meff_ttbarlight__97->GetXaxis()->SetLabelSize(21);
   c1lep4jex3bex_meff_ttbarlight__97->GetXaxis()->SetTitleSize(21);
   c1lep4jex3bex_meff_ttbarlight__97->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_meff_ttbarlight__97->GetXaxis()->SetTitleFont(43);
   c1lep4jex3bex_meff_ttbarlight__97->GetYaxis()->SetLabelFont(43);
   c1lep4jex3bex_meff_ttbarlight__97->GetYaxis()->SetLabelSize(21);
   c1lep4jex3bex_meff_ttbarlight__97->GetYaxis()->SetTitleSize(21);
   c1lep4jex3bex_meff_ttbarlight__97->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_meff_ttbarlight__97->GetYaxis()->SetTitleFont(43);
   c1lep4jex3bex_meff_ttbarlight__97->GetZaxis()->SetLabelFont(43);
   c1lep4jex3bex_meff_ttbarlight__97->GetZaxis()->SetLabelSize(21);
   c1lep4jex3bex_meff_ttbarlight__97->GetZaxis()->SetTitleSize(21);
   c1lep4jex3bex_meff_ttbarlight__97->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jex3bex_meff_ttbarlight,"");
   Double_t xAxis109[8] = {125, 225, 325, 425, 525, 625, 725, 825}; 
   
   TH1D *c1lep4jex3bex_meff_uHcW__98 = new TH1D("c1lep4jex3bex_meff_uHcW__98","",7, xAxis109);
   c1lep4jex3bex_meff_uHcW__98->SetBinContent(1,33.18599);
   c1lep4jex3bex_meff_uHcW__98->SetBinContent(2,512.5566);
   c1lep4jex3bex_meff_uHcW__98->SetBinContent(3,373.1757);
   c1lep4jex3bex_meff_uHcW__98->SetBinContent(4,194.1789);
   c1lep4jex3bex_meff_uHcW__98->SetBinContent(5,83.55128);
   c1lep4jex3bex_meff_uHcW__98->SetBinContent(6,33.20323);
   c1lep4jex3bex_meff_uHcW__98->SetBinContent(7,13.8912);
   c1lep4jex3bex_meff_uHcW__98->SetBinContent(8,17.4024);
   c1lep4jex3bex_meff_uHcW__98->SetBinError(1,5.952584);
   c1lep4jex3bex_meff_uHcW__98->SetBinError(2,20.62273);
   c1lep4jex3bex_meff_uHcW__98->SetBinError(3,17.55133);
   c1lep4jex3bex_meff_uHcW__98->SetBinError(4,13.34009);
   c1lep4jex3bex_meff_uHcW__98->SetBinError(5,8.24735);
   c1lep4jex3bex_meff_uHcW__98->SetBinError(6,5.770579);
   c1lep4jex3bex_meff_uHcW__98->SetBinError(7,3.082293);
   c1lep4jex3bex_meff_uHcW__98->SetBinError(8,3.462666);
   c1lep4jex3bex_meff_uHcW__98->SetEntries(5559);
   c1lep4jex3bex_meff_uHcW__98->SetDirectory(0);
   c1lep4jex3bex_meff_uHcW__98->SetStats(0);
   c1lep4jex3bex_meff_uHcW__98->SetFillColor(2);
   c1lep4jex3bex_meff_uHcW__98->SetLineColor(2);
   c1lep4jex3bex_meff_uHcW__98->SetMarkerStyle(20);
   c1lep4jex3bex_meff_uHcW__98->SetMarkerSize(1.2);
   c1lep4jex3bex_meff_uHcW__98->GetXaxis()->SetTitle("m_{eff} [GeV]");
   c1lep4jex3bex_meff_uHcW__98->GetXaxis()->SetRange(1,70);
   c1lep4jex3bex_meff_uHcW__98->GetXaxis()->SetLabelFont(43);
   c1lep4jex3bex_meff_uHcW__98->GetXaxis()->SetLabelSize(21);
   c1lep4jex3bex_meff_uHcW__98->GetXaxis()->SetTitleSize(21);
   c1lep4jex3bex_meff_uHcW__98->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_meff_uHcW__98->GetXaxis()->SetTitleFont(43);
   c1lep4jex3bex_meff_uHcW__98->GetYaxis()->SetLabelFont(43);
   c1lep4jex3bex_meff_uHcW__98->GetYaxis()->SetLabelSize(21);
   c1lep4jex3bex_meff_uHcW__98->GetYaxis()->SetTitleSize(21);
   c1lep4jex3bex_meff_uHcW__98->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_meff_uHcW__98->GetYaxis()->SetTitleFont(43);
   c1lep4jex3bex_meff_uHcW__98->GetZaxis()->SetLabelFont(43);
   c1lep4jex3bex_meff_uHcW__98->GetZaxis()->SetLabelSize(21);
   c1lep4jex3bex_meff_uHcW__98->GetZaxis()->SetTitleSize(21);
   c1lep4jex3bex_meff_uHcW__98->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jex3bex_meff_uHcW,"");
   h_stack->Draw("hist same");
   
   Double_t g_totErr_fx3043[7] = {
   175,
   275,
   375,
   475,
   575,
   675,
   775};
   Double_t g_totErr_fy3043[7] = {
   408.0221,
   3079.893,
   3359.851,
   1772.479,
   800.8846,
   329.281,
   176.9259};
   Double_t g_totErr_felx3043[7] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t g_totErr_fely3043[7] = {
   72.36614,
   658.3624,
   667.7798,
   331.1569,
   152.7019,
   67.17852,
   36.94269};
   Double_t g_totErr_fehx3043[7] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t g_totErr_fehy3043[7] = {
   72.36614,
   658.3624,
   667.7798,
   331.1569,
   152.7019,
   67.17852,
   36.94269};
   grae = new TGraphAsymmErrors(7,g_totErr_fx3043,g_totErr_fy3043,g_totErr_felx3043,g_totErr_fehx3043,g_totErr_fely3043,g_totErr_fehy3043);
   grae->SetName("g_totErr");
   grae->SetTitle("");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(3354);
   grae->SetLineColor(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0);
   
   TH1F *Graph_g_totErr3043 = new TH1F("Graph_g_totErr3043","",100,55,895);
   Graph_g_totErr3043->SetMinimum(0);
   Graph_g_totErr3043->SetMaximum(4416.396);
   Graph_g_totErr3043->SetDirectory(0);
   Graph_g_totErr3043->SetStats(0);
   Graph_g_totErr3043->SetLineWidth(2);
   Graph_g_totErr3043->SetMarkerStyle(20);
   Graph_g_totErr3043->SetMarkerSize(1.2);
   Graph_g_totErr3043->GetXaxis()->SetLabelFont(43);
   Graph_g_totErr3043->GetXaxis()->SetLabelSize(21);
   Graph_g_totErr3043->GetXaxis()->SetTitleSize(21);
   Graph_g_totErr3043->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_totErr3043->GetXaxis()->SetTitleFont(43);
   Graph_g_totErr3043->GetYaxis()->SetLabelFont(43);
   Graph_g_totErr3043->GetYaxis()->SetLabelSize(21);
   Graph_g_totErr3043->GetYaxis()->SetTitleSize(21);
   Graph_g_totErr3043->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_totErr3043->GetYaxis()->SetTitleFont(43);
   Graph_g_totErr3043->GetZaxis()->SetLabelFont(43);
   Graph_g_totErr3043->GetZaxis()->SetLabelSize(21);
   Graph_g_totErr3043->GetZaxis()->SetTitleSize(21);
   Graph_g_totErr3043->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_totErr3043);
   
   grae->Draw("e2");
   
   Double_t Graph_from_c1lep4jex3bex_meff_Data_fx3044[7] = {
   175,
   275,
   375,
   475,
   575,
   675,
   775};
   Double_t Graph_from_c1lep4jex3bex_meff_Data_fy3044[7] = {
   328,
   3535,
   3823,
   1868,
   863,
   417,
   204};
   Double_t Graph_from_c1lep4jex3bex_meff_Data_felx3044[7] = {
   49.9,
   49.9,
   49.9,
   49.9,
   49.9,
   49.9,
   49.9};
   Double_t Graph_from_c1lep4jex3bex_meff_Data_fely3044[7] = {
   18.11077,
   59.45587,
   61.83041,
   43.22037,
   29.37686,
   20.42058,
   14.28286};
   Double_t Graph_from_c1lep4jex3bex_meff_Data_fehx3044[7] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t Graph_from_c1lep4jex3bex_meff_Data_fehy3044[7] = {
   18.11077,
   59.45587,
   61.83041,
   43.22037,
   29.37686,
   20.42058,
   14.28286};
   grae = new TGraphAsymmErrors(7,Graph_from_c1lep4jex3bex_meff_Data_fx3044,Graph_from_c1lep4jex3bex_meff_Data_fy3044,Graph_from_c1lep4jex3bex_meff_Data_felx3044,Graph_from_c1lep4jex3bex_meff_Data_fehx3044,Graph_from_c1lep4jex3bex_meff_Data_fely3044,Graph_from_c1lep4jex3bex_meff_Data_fehy3044);
   grae->SetName("Graph_from_c1lep4jex3bex_meff_Data");
   grae->SetTitle("");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_c1lep4jex3bex_meff_Data3044 = new TH1F("Graph_Graph_from_c1lep4jex3bex_meff_Data3044","",100,55.11,894.99);
   Graph_Graph_from_c1lep4jex3bex_meff_Data3044->SetMinimum(0);
   Graph_Graph_from_c1lep4jex3bex_meff_Data3044->SetMaximum(4254.342);
   Graph_Graph_from_c1lep4jex3bex_meff_Data3044->SetDirectory(0);
   Graph_Graph_from_c1lep4jex3bex_meff_Data3044->SetStats(0);
   Graph_Graph_from_c1lep4jex3bex_meff_Data3044->SetLineWidth(2);
   Graph_Graph_from_c1lep4jex3bex_meff_Data3044->SetMarkerStyle(20);
   Graph_Graph_from_c1lep4jex3bex_meff_Data3044->SetMarkerSize(1.2);
   Graph_Graph_from_c1lep4jex3bex_meff_Data3044->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep4jex3bex_meff_Data3044->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep4jex3bex_meff_Data3044->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep4jex3bex_meff_Data3044->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep4jex3bex_meff_Data3044->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep4jex3bex_meff_Data3044->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep4jex3bex_meff_Data3044->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep4jex3bex_meff_Data3044->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep4jex3bex_meff_Data3044->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep4jex3bex_meff_Data3044->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep4jex3bex_meff_Data3044->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep4jex3bex_meff_Data3044->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep4jex3bex_meff_Data3044->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep4jex3bex_meff_Data3044->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_c1lep4jex3bex_meff_Data3044);
   
   grae->Draw("ep1 ");
   Double_t xAxis110[8] = {125, 225, 325, 425, 525, 625, 725, 825}; 
   
   TH1D *h_dummy_copy__99 = new TH1D("h_dummy_copy__99","",7, xAxis110);
   h_dummy_copy__99->SetEntries(2920963);
   h_dummy_copy__99->SetDirectory(0);
   h_dummy_copy__99->SetStats(0);
   h_dummy_copy__99->SetMarkerStyle(20);
   h_dummy_copy__99->SetMarkerSize(1.2);
   h_dummy_copy__99->GetXaxis()->SetTitle("m_{eff} [GeV]");
   h_dummy_copy__99->GetXaxis()->SetRange(1,70);
   h_dummy_copy__99->GetXaxis()->SetLabelFont(43);
   h_dummy_copy__99->GetXaxis()->SetLabelSize(21);
   h_dummy_copy__99->GetXaxis()->SetTitleSize(21);
   h_dummy_copy__99->GetXaxis()->SetTitleOffset(1.4);
   h_dummy_copy__99->GetXaxis()->SetTitleFont(43);
   h_dummy_copy__99->GetYaxis()->SetTitle("Events / 100 GeV");
   h_dummy_copy__99->GetYaxis()->SetLabelFont(43);
   h_dummy_copy__99->GetYaxis()->SetLabelSize(16.8);
   h_dummy_copy__99->GetYaxis()->SetTitleSize(21);
   h_dummy_copy__99->GetYaxis()->SetTitleOffset(2.4);
   h_dummy_copy__99->GetYaxis()->SetTitleFont(43);
   h_dummy_copy__99->GetZaxis()->SetLabelFont(43);
   h_dummy_copy__99->GetZaxis()->SetLabelSize(21);
   h_dummy_copy__99->GetZaxis()->SetTitleSize(21);
   h_dummy_copy__99->GetZaxis()->SetTitleFont(43);
   h_dummy_copy__99->Draw("sameaxis");
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
   TLegendEntry *entry=leg->AddEntry("c1lep4jex3bex_meff_Data","Data","lep");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep4jex3bex_meff_uHcW","t#bar{t}#rightarrowWbHc (BR=1%)","f");
   entry->SetFillColor(2);
   entry->SetFillStyle(1001);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep4jex3bex_meff_ttbarlight","t#bar{t}+light","f");
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep4jex3bex_meff_ttbarcc","t#bar{t}+cc","f");

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
   entry=leg->AddEntry("c1lep4jex3bex_meff_ttbarbb","t#bar{t}+bb","f");

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
   entry=leg->AddEntry("c1lep4jex3bex_meff_topEW","Non-t#bar{t}","f");

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
   c_c1lep4jex3bex_meff->cd();
   c_c1lep4jex3bex_meff->Modified();
   c_c1lep4jex3bex_meff->cd();
   c_c1lep4jex3bex_meff->SetSelected(c_c1lep4jex3bex_meff);
}
