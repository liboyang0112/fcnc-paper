void c1lep6jin3bex_meff()
{
//=========Macro generated from canvas: c_c1lep6jin3bex_meff/c_c1lep6jin3bex_meff
//=========  (Thu Jul 19 17:38:04 2018) by ROOT version6.04/14
   TCanvas *c_c1lep6jin3bex_meff = new TCanvas("c_c1lep6jin3bex_meff", "c_c1lep6jin3bex_meff",0,0,600,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c_c1lep6jin3bex_meff->SetHighLightColor(2);
   c_c1lep6jin3bex_meff->Range(0,0,1,1);
   c_c1lep6jin3bex_meff->SetFillColor(0);
   c_c1lep6jin3bex_meff->SetBorderMode(0);
   c_c1lep6jin3bex_meff->SetBorderSize(2);
   c_c1lep6jin3bex_meff->SetTickx(1);
   c_c1lep6jin3bex_meff->SetTicky(1);
   c_c1lep6jin3bex_meff->SetLeftMargin(0.16);
   c_c1lep6jin3bex_meff->SetRightMargin(0.05);
   c_c1lep6jin3bex_meff->SetTopMargin(0.05);
   c_c1lep6jin3bex_meff->SetBottomMargin(0.16);
   c_c1lep6jin3bex_meff->SetFrameBorderMode(0);
  
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
   Double_t xAxis121[8] = {125, 225, 325, 425, 525, 625, 725, 825}; 
   
   TH1D *h_dummy2__109 = new TH1D("h_dummy2__109","Data/MC",7, xAxis121);
   h_dummy2__109->SetMinimum(0.5);
   h_dummy2__109->SetMaximum(1.5);
   h_dummy2__109->SetEntries(1164495);
   h_dummy2__109->SetDirectory(0);
   h_dummy2__109->SetStats(0);
   h_dummy2__109->SetMarkerStyle(20);
   h_dummy2__109->SetMarkerSize(1.2);
   h_dummy2__109->GetXaxis()->SetTitle("m_{eff} [GeV]");
   h_dummy2__109->GetXaxis()->SetRange(1,70);
   h_dummy2__109->GetXaxis()->SetLabelFont(43);
   h_dummy2__109->GetXaxis()->SetLabelOffset(0.025);
   h_dummy2__109->GetXaxis()->SetLabelSize(16.8);
   h_dummy2__109->GetXaxis()->SetTitleSize(21);
   h_dummy2__109->GetXaxis()->SetTitleOffset(5.05);
   h_dummy2__109->GetXaxis()->SetTitleFont(43);
   h_dummy2__109->GetYaxis()->SetTitle("Data / Bkg");
   h_dummy2__109->GetYaxis()->SetNdivisions(-504);
   h_dummy2__109->GetYaxis()->SetLabelFont(43);
   h_dummy2__109->GetYaxis()->SetLabelOffset(0.02);
   h_dummy2__109->GetYaxis()->SetLabelSize(16.8);
   h_dummy2__109->GetYaxis()->SetTitleSize(21);
   h_dummy2__109->GetYaxis()->SetTitleOffset(2.4);
   h_dummy2__109->GetYaxis()->SetTitleFont(43);
   h_dummy2__109->GetZaxis()->SetLabelFont(43);
   h_dummy2__109->GetZaxis()->SetLabelSize(21);
   h_dummy2__109->GetZaxis()->SetTitleSize(21);
   h_dummy2__109->GetZaxis()->SetTitleFont(43);
   h_dummy2__109->Draw("HIST");
   
   Double_t Graph_from_h_ratio_fx3049[7] = {
   175,
   275,
   375,
   475,
   575,
   675,
   775};
   Double_t Graph_from_h_ratio_fy3049[7] = {
   0,
   1.219929,
   1.234937,
   1.165056,
   1.14579,
   1.099114,
   0.9675983};
   Double_t Graph_from_h_ratio_felx3049[7] = {
   49.9,
   49.9,
   49.9,
   49.9,
   49.9,
   49.9,
   49.9};
   Double_t Graph_from_h_ratio_fely3049[7] = {
   0,
   0.07777981,
   0.02780938,
   0.02081453,
   0.02129883,
   0.02357832,
   0.02596235};
   Double_t Graph_from_h_ratio_fehx3049[7] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t Graph_from_h_ratio_fehy3049[7] = {
   0,
   0.07777981,
   0.02780938,
   0.02081453,
   0.02129883,
   0.02357832,
   0.02596235};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(7,Graph_from_h_ratio_fx3049,Graph_from_h_ratio_fy3049,Graph_from_h_ratio_felx3049,Graph_from_h_ratio_fehx3049,Graph_from_h_ratio_fely3049,Graph_from_h_ratio_fehy3049);
   grae->SetName("Graph_from_h_ratio");
   grae->SetTitle("");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(24);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_h_ratio3049 = new TH1F("Graph_Graph_from_h_ratio3049","",100,55.11,894.99);
   Graph_Graph_from_h_ratio3049->SetMinimum(0);
   Graph_Graph_from_h_ratio3049->SetMaximum(1.427479);
   Graph_Graph_from_h_ratio3049->SetDirectory(0);
   Graph_Graph_from_h_ratio3049->SetStats(0);
   Graph_Graph_from_h_ratio3049->SetLineWidth(2);
   Graph_Graph_from_h_ratio3049->SetMarkerStyle(20);
   Graph_Graph_from_h_ratio3049->SetMarkerSize(1.2);
   Graph_Graph_from_h_ratio3049->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3049->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3049->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3049->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3049->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3049->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3049->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3049->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3049->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3049->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3049->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3049->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3049->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3049->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_h_ratio3049);
   
   grae->Draw("pe0");
   TLine *line = new TLine(125,1,825,1);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t g_ratio2_fx3050[7] = {
   175,
   275,
   375,
   475,
   575,
   675,
   775};
   Double_t g_ratio2_fy3050[7] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t g_ratio2_felx3050[7] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t g_ratio2_fely3050[7] = {
   1094.711,
   0.2511589,
   0.2368352,
   0.208985,
   0.1939954,
   0.1912439,
   0.1947768};
   Double_t g_ratio2_fehx3050[7] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t g_ratio2_fehy3050[7] = {
   1094.711,
   0.2511589,
   0.2368352,
   0.208985,
   0.1939954,
   0.1912439,
   0.1947768};
   grae = new TGraphAsymmErrors(7,g_ratio2_fx3050,g_ratio2_fy3050,g_ratio2_felx3050,g_ratio2_fehx3050,g_ratio2_fely3050,g_ratio2_fehy3050);
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
   
   TH1F *Graph_g_ratio23050 = new TH1F("Graph_g_ratio23050","",100,55,895);
   Graph_g_ratio23050->SetMinimum(-1312.653);
   Graph_g_ratio23050->SetMaximum(1314.653);
   Graph_g_ratio23050->SetDirectory(0);
   Graph_g_ratio23050->SetStats(0);
   Graph_g_ratio23050->SetLineWidth(2);
   Graph_g_ratio23050->SetMarkerStyle(20);
   Graph_g_ratio23050->SetMarkerSize(1.2);
   Graph_g_ratio23050->GetXaxis()->SetLabelFont(43);
   Graph_g_ratio23050->GetXaxis()->SetLabelSize(21);
   Graph_g_ratio23050->GetXaxis()->SetTitleSize(21);
   Graph_g_ratio23050->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23050->GetXaxis()->SetTitleFont(43);
   Graph_g_ratio23050->GetYaxis()->SetLabelFont(43);
   Graph_g_ratio23050->GetYaxis()->SetLabelSize(21);
   Graph_g_ratio23050->GetYaxis()->SetTitleSize(21);
   Graph_g_ratio23050->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23050->GetYaxis()->SetTitleFont(43);
   Graph_g_ratio23050->GetZaxis()->SetLabelFont(43);
   Graph_g_ratio23050->GetZaxis()->SetLabelSize(21);
   Graph_g_ratio23050->GetZaxis()->SetTitleSize(21);
   Graph_g_ratio23050->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_ratio23050);
   
   grae->Draw("e2");
   Double_t xAxis122[8] = {125, 225, 325, 425, 525, 625, 725, 825}; 
   
   TH1D *h_dummy2_copy__110 = new TH1D("h_dummy2_copy__110","Data/MC",7, xAxis122);
   h_dummy2_copy__110->SetMinimum(0.5);
   h_dummy2_copy__110->SetMaximum(1.5);
   h_dummy2_copy__110->SetEntries(1164495);
   h_dummy2_copy__110->SetDirectory(0);
   h_dummy2_copy__110->SetStats(0);
   h_dummy2_copy__110->SetMarkerStyle(20);
   h_dummy2_copy__110->SetMarkerSize(1.2);
   h_dummy2_copy__110->GetXaxis()->SetTitle("m_{eff} [GeV]");
   h_dummy2_copy__110->GetXaxis()->SetRange(1,70);
   h_dummy2_copy__110->GetXaxis()->SetLabelFont(43);
   h_dummy2_copy__110->GetXaxis()->SetLabelOffset(0.025);
   h_dummy2_copy__110->GetXaxis()->SetLabelSize(16.8);
   h_dummy2_copy__110->GetXaxis()->SetTitleSize(21);
   h_dummy2_copy__110->GetXaxis()->SetTitleOffset(5.05);
   h_dummy2_copy__110->GetXaxis()->SetTitleFont(43);
   h_dummy2_copy__110->GetYaxis()->SetTitle("Data / Bkg");
   h_dummy2_copy__110->GetYaxis()->SetNdivisions(-504);
   h_dummy2_copy__110->GetYaxis()->SetLabelFont(43);
   h_dummy2_copy__110->GetYaxis()->SetLabelOffset(0.02);
   h_dummy2_copy__110->GetYaxis()->SetLabelSize(16.8);
   h_dummy2_copy__110->GetYaxis()->SetTitleSize(21);
   h_dummy2_copy__110->GetYaxis()->SetTitleOffset(2.4);
   h_dummy2_copy__110->GetYaxis()->SetTitleFont(43);
   h_dummy2_copy__110->GetZaxis()->SetLabelFont(43);
   h_dummy2_copy__110->GetZaxis()->SetLabelSize(21);
   h_dummy2_copy__110->GetZaxis()->SetTitleSize(21);
   h_dummy2_copy__110->GetZaxis()->SetTitleFont(43);
   h_dummy2_copy__110->Draw("sameaxis");
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
   c_c1lep6jin3bex_meff->cd();
  
// ------------>Primitives in pad: pad0
   TPad *pad0 = new TPad("pad0", "pad0",0,0.2,1,1);
   pad0->Draw();
   pad0->cd();
   pad0->Range(4.012346,-675.312,868.2099,6077.807);
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
   Double_t xAxis123[8] = {125, 225, 325, 425, 525, 625, 725, 825}; 
   
   TH1D *h_dummy__111 = new TH1D("h_dummy__111","",7, xAxis123);
   h_dummy__111->SetMinimum(0);
   h_dummy__111->SetMaximum(5740.151);
   h_dummy__111->SetEntries(1164495);
   h_dummy__111->SetDirectory(0);
   h_dummy__111->SetStats(0);
   h_dummy__111->SetMarkerStyle(20);
   h_dummy__111->SetMarkerSize(1.2);
   h_dummy__111->GetXaxis()->SetRange(1,70);
   h_dummy__111->GetXaxis()->SetLabelFont(43);
   h_dummy__111->GetXaxis()->SetLabelSize(0);
   h_dummy__111->GetXaxis()->SetTitleSize(21);
   h_dummy__111->GetXaxis()->SetTitleOffset(1.4);
   h_dummy__111->GetXaxis()->SetTitleFont(43);
   h_dummy__111->GetYaxis()->SetTitle("Events / 100 GeV");
   h_dummy__111->GetYaxis()->SetLabelFont(43);
   h_dummy__111->GetYaxis()->SetLabelSize(16.8);
   h_dummy__111->GetYaxis()->SetTitleSize(21);
   h_dummy__111->GetYaxis()->SetTitleOffset(2.4);
   h_dummy__111->GetYaxis()->SetTitleFont(43);
   h_dummy__111->GetZaxis()->SetLabelFont(43);
   h_dummy__111->GetZaxis()->SetLabelSize(21);
   h_dummy__111->GetZaxis()->SetTitleSize(21);
   h_dummy__111->GetZaxis()->SetTitleFont(43);
   h_dummy__111->Draw("HIST");
   
   THStack *h_stack = new THStack();
   h_stack->SetName("h_stack");
   h_stack->SetTitle("h_stack");
   Double_t xAxis124[8] = {125, 225, 325, 425, 525, 625, 725, 825}; 
   
   TH1F *h_stack_stack_13 = new TH1F("h_stack_stack_13","h_stack",7, xAxis124);
   h_stack_stack_13->SetMinimum(-6.030924);
   h_stack_stack_13->SetMaximum(3021.141);
   h_stack_stack_13->SetDirectory(0);
   h_stack_stack_13->SetStats(0);
   h_stack_stack_13->SetLineWidth(2);
   h_stack_stack_13->SetMarkerStyle(20);
   h_stack_stack_13->SetMarkerSize(1.2);
   h_stack_stack_13->GetXaxis()->SetLabelFont(43);
   h_stack_stack_13->GetXaxis()->SetLabelSize(21);
   h_stack_stack_13->GetXaxis()->SetTitleSize(21);
   h_stack_stack_13->GetXaxis()->SetTitleOffset(1.4);
   h_stack_stack_13->GetXaxis()->SetTitleFont(43);
   h_stack_stack_13->GetYaxis()->SetLabelFont(43);
   h_stack_stack_13->GetYaxis()->SetLabelSize(21);
   h_stack_stack_13->GetYaxis()->SetTitleSize(21);
   h_stack_stack_13->GetYaxis()->SetTitleOffset(1.4);
   h_stack_stack_13->GetYaxis()->SetTitleFont(43);
   h_stack_stack_13->GetZaxis()->SetLabelFont(43);
   h_stack_stack_13->GetZaxis()->SetLabelSize(21);
   h_stack_stack_13->GetZaxis()->SetTitleSize(21);
   h_stack_stack_13->GetZaxis()->SetTitleFont(43);
   h_stack->SetHistogram(h_stack_stack_13);
   
   Double_t xAxis125[8] = {125, 225, 325, 425, 525, 625, 725, 825}; 
   
   TH1D *c1lep6jin3bex_meff_topEW__112 = new TH1D("c1lep6jin3bex_meff_topEW__112","",7, xAxis125);
   c1lep6jin3bex_meff_topEW__112->SetBinContent(1,0.007918875);
   c1lep6jin3bex_meff_topEW__112->SetBinContent(2,49.44268);
   c1lep6jin3bex_meff_topEW__112->SetBinContent(3,172.6632);
   c1lep6jin3bex_meff_topEW__112->SetBinContent(4,287.941);
   c1lep6jin3bex_meff_topEW__112->SetBinContent(5,305.4009);
   c1lep6jin3bex_meff_topEW__112->SetBinContent(6,285.6764);
   c1lep6jin3bex_meff_topEW__112->SetBinContent(7,249.9241);
   c1lep6jin3bex_meff_topEW__112->SetBinContent(8,527.9366);
   c1lep6jin3bex_meff_topEW__112->SetBinError(1,0.9212418);
   c1lep6jin3bex_meff_topEW__112->SetBinError(2,19.23078);
   c1lep6jin3bex_meff_topEW__112->SetBinError(3,28.91791);
   c1lep6jin3bex_meff_topEW__112->SetBinError(4,33.94688);
   c1lep6jin3bex_meff_topEW__112->SetBinError(5,36.34124);
   c1lep6jin3bex_meff_topEW__112->SetBinError(6,37.01805);
   c1lep6jin3bex_meff_topEW__112->SetBinError(7,36.82561);
   c1lep6jin3bex_meff_topEW__112->SetBinError(8,51.38945);
   c1lep6jin3bex_meff_topEW__112->SetEntries(1125859);
   c1lep6jin3bex_meff_topEW__112->SetDirectory(0);
   c1lep6jin3bex_meff_topEW__112->SetStats(0);

   ci = TColor::GetColor("#66cc66");
   c1lep6jin3bex_meff_topEW__112->SetFillColor(ci);
   c1lep6jin3bex_meff_topEW__112->SetMarkerStyle(20);
   c1lep6jin3bex_meff_topEW__112->SetMarkerSize(1.2);
   c1lep6jin3bex_meff_topEW__112->GetXaxis()->SetTitle("m_{eff} [GeV]");
   c1lep6jin3bex_meff_topEW__112->GetXaxis()->SetRange(1,70);
   c1lep6jin3bex_meff_topEW__112->GetXaxis()->SetLabelFont(43);
   c1lep6jin3bex_meff_topEW__112->GetXaxis()->SetLabelSize(21);
   c1lep6jin3bex_meff_topEW__112->GetXaxis()->SetTitleSize(21);
   c1lep6jin3bex_meff_topEW__112->GetXaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_meff_topEW__112->GetXaxis()->SetTitleFont(43);
   c1lep6jin3bex_meff_topEW__112->GetYaxis()->SetLabelFont(43);
   c1lep6jin3bex_meff_topEW__112->GetYaxis()->SetLabelSize(21);
   c1lep6jin3bex_meff_topEW__112->GetYaxis()->SetTitleSize(21);
   c1lep6jin3bex_meff_topEW__112->GetYaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_meff_topEW__112->GetYaxis()->SetTitleFont(43);
   c1lep6jin3bex_meff_topEW__112->GetZaxis()->SetLabelFont(43);
   c1lep6jin3bex_meff_topEW__112->GetZaxis()->SetLabelSize(21);
   c1lep6jin3bex_meff_topEW__112->GetZaxis()->SetTitleSize(21);
   c1lep6jin3bex_meff_topEW__112->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep6jin3bex_meff_topEW,"");
   Double_t xAxis126[8] = {125, 225, 325, 425, 525, 625, 725, 825}; 
   
   TH1D *c1lep6jin3bex_meff_ttbarbb__113 = new TH1D("c1lep6jin3bex_meff_ttbarbb__113","",7, xAxis126);
   c1lep6jin3bex_meff_ttbarbb__113->SetBinContent(1,1e-06);
   c1lep6jin3bex_meff_ttbarbb__113->SetBinContent(2,82.86558);
   c1lep6jin3bex_meff_ttbarbb__113->SetBinContent(3,783.2442);
   c1lep6jin3bex_meff_ttbarbb__113->SetBinContent(4,1436.015);
   c1lep6jin3bex_meff_ttbarbb__113->SetBinContent(5,1410.722);
   c1lep6jin3bex_meff_ttbarbb__113->SetBinContent(6,1114.409);
   c1lep6jin3bex_meff_ttbarbb__113->SetBinContent(7,768.4326);
   c1lep6jin3bex_meff_ttbarbb__113->SetBinContent(8,1686.804);
   c1lep6jin3bex_meff_ttbarbb__113->SetBinError(1,5.68751);
   c1lep6jin3bex_meff_ttbarbb__113->SetBinError(2,5.68751);
   c1lep6jin3bex_meff_ttbarbb__113->SetBinError(3,18.01504);
   c1lep6jin3bex_meff_ttbarbb__113->SetBinError(4,23.97148);
   c1lep6jin3bex_meff_ttbarbb__113->SetBinError(5,24.01733);
   c1lep6jin3bex_meff_ttbarbb__113->SetBinError(6,23.06634);
   c1lep6jin3bex_meff_ttbarbb__113->SetBinError(7,16.92422);
   c1lep6jin3bex_meff_ttbarbb__113->SetBinError(8,27.15887);
   c1lep6jin3bex_meff_ttbarbb__113->SetEntries(26043);
   c1lep6jin3bex_meff_ttbarbb__113->SetDirectory(0);
   c1lep6jin3bex_meff_ttbarbb__113->SetStats(0);

   ci = TColor::GetColor("#6666cc");
   c1lep6jin3bex_meff_ttbarbb__113->SetFillColor(ci);
   c1lep6jin3bex_meff_ttbarbb__113->SetMarkerStyle(20);
   c1lep6jin3bex_meff_ttbarbb__113->SetMarkerSize(1.2);
   c1lep6jin3bex_meff_ttbarbb__113->GetXaxis()->SetTitle("m_{eff} [GeV]");
   c1lep6jin3bex_meff_ttbarbb__113->GetXaxis()->SetRange(1,70);
   c1lep6jin3bex_meff_ttbarbb__113->GetXaxis()->SetLabelFont(43);
   c1lep6jin3bex_meff_ttbarbb__113->GetXaxis()->SetLabelSize(21);
   c1lep6jin3bex_meff_ttbarbb__113->GetXaxis()->SetTitleSize(21);
   c1lep6jin3bex_meff_ttbarbb__113->GetXaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_meff_ttbarbb__113->GetXaxis()->SetTitleFont(43);
   c1lep6jin3bex_meff_ttbarbb__113->GetYaxis()->SetLabelFont(43);
   c1lep6jin3bex_meff_ttbarbb__113->GetYaxis()->SetLabelSize(21);
   c1lep6jin3bex_meff_ttbarbb__113->GetYaxis()->SetTitleSize(21);
   c1lep6jin3bex_meff_ttbarbb__113->GetYaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_meff_ttbarbb__113->GetYaxis()->SetTitleFont(43);
   c1lep6jin3bex_meff_ttbarbb__113->GetZaxis()->SetLabelFont(43);
   c1lep6jin3bex_meff_ttbarbb__113->GetZaxis()->SetLabelSize(21);
   c1lep6jin3bex_meff_ttbarbb__113->GetZaxis()->SetTitleSize(21);
   c1lep6jin3bex_meff_ttbarbb__113->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep6jin3bex_meff_ttbarbb,"");
   Double_t xAxis127[8] = {125, 225, 325, 425, 525, 625, 725, 825}; 
   
   TH1D *c1lep6jin3bex_meff_ttbarcc__114 = new TH1D("c1lep6jin3bex_meff_ttbarcc__114","",7, xAxis127);
   c1lep6jin3bex_meff_ttbarcc__114->SetBinContent(1,1e-06);
   c1lep6jin3bex_meff_ttbarcc__114->SetBinContent(2,18.20972);
   c1lep6jin3bex_meff_ttbarcc__114->SetBinContent(3,213.0894);
   c1lep6jin3bex_meff_ttbarcc__114->SetBinContent(4,378.7874);
   c1lep6jin3bex_meff_ttbarcc__114->SetBinContent(5,335.415);
   c1lep6jin3bex_meff_ttbarcc__114->SetBinContent(6,269.4956);
   c1lep6jin3bex_meff_ttbarcc__114->SetBinContent(7,201.9639);
   c1lep6jin3bex_meff_ttbarcc__114->SetBinContent(8,397.2943);
   c1lep6jin3bex_meff_ttbarcc__114->SetBinError(1,2.374392);
   c1lep6jin3bex_meff_ttbarcc__114->SetBinError(2,2.374392);
   c1lep6jin3bex_meff_ttbarcc__114->SetBinError(3,11.8579);
   c1lep6jin3bex_meff_ttbarcc__114->SetBinError(4,13.44383);
   c1lep6jin3bex_meff_ttbarcc__114->SetBinError(5,11.96744);
   c1lep6jin3bex_meff_ttbarcc__114->SetBinError(6,11.50707);
   c1lep6jin3bex_meff_ttbarcc__114->SetBinError(7,10.76889);
   c1lep6jin3bex_meff_ttbarcc__114->SetBinError(8,13.15696);
   c1lep6jin3bex_meff_ttbarcc__114->SetEntries(5631);
   c1lep6jin3bex_meff_ttbarcc__114->SetDirectory(0);
   c1lep6jin3bex_meff_ttbarcc__114->SetStats(0);

   ci = TColor::GetColor("#ccccff");
   c1lep6jin3bex_meff_ttbarcc__114->SetFillColor(ci);
   c1lep6jin3bex_meff_ttbarcc__114->SetMarkerStyle(20);
   c1lep6jin3bex_meff_ttbarcc__114->SetMarkerSize(1.2);
   c1lep6jin3bex_meff_ttbarcc__114->GetXaxis()->SetTitle("m_{eff} [GeV]");
   c1lep6jin3bex_meff_ttbarcc__114->GetXaxis()->SetRange(1,70);
   c1lep6jin3bex_meff_ttbarcc__114->GetXaxis()->SetLabelFont(43);
   c1lep6jin3bex_meff_ttbarcc__114->GetXaxis()->SetLabelSize(21);
   c1lep6jin3bex_meff_ttbarcc__114->GetXaxis()->SetTitleSize(21);
   c1lep6jin3bex_meff_ttbarcc__114->GetXaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_meff_ttbarcc__114->GetXaxis()->SetTitleFont(43);
   c1lep6jin3bex_meff_ttbarcc__114->GetYaxis()->SetLabelFont(43);
   c1lep6jin3bex_meff_ttbarcc__114->GetYaxis()->SetLabelSize(21);
   c1lep6jin3bex_meff_ttbarcc__114->GetYaxis()->SetTitleSize(21);
   c1lep6jin3bex_meff_ttbarcc__114->GetYaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_meff_ttbarcc__114->GetYaxis()->SetTitleFont(43);
   c1lep6jin3bex_meff_ttbarcc__114->GetZaxis()->SetLabelFont(43);
   c1lep6jin3bex_meff_ttbarcc__114->GetZaxis()->SetLabelSize(21);
   c1lep6jin3bex_meff_ttbarcc__114->GetZaxis()->SetTitleSize(21);
   c1lep6jin3bex_meff_ttbarcc__114->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep6jin3bex_meff_ttbarcc,"");
   Double_t xAxis128[8] = {125, 225, 325, 425, 525, 625, 725, 825}; 
   
   TH1D *c1lep6jin3bex_meff_ttbarlight__115 = new TH1D("c1lep6jin3bex_meff_ttbarlight__115","",7, xAxis128);
   c1lep6jin3bex_meff_ttbarlight__115->SetBinContent(1,9.999999e-07);
   c1lep6jin3bex_meff_ttbarlight__115->SetBinContent(2,51.13317);
   c1lep6jin3bex_meff_ttbarlight__115->SetBinContent(3,427.846);
   c1lep6jin3bex_meff_ttbarlight__115->SetBinContent(4,586.3981);
   c1lep6jin3bex_meff_ttbarlight__115->SetBinContent(5,474.2304);
   c1lep6jin3bex_meff_ttbarlight__115->SetBinContent(6,307.4655);
   c1lep6jin3bex_meff_ttbarlight__115->SetBinContent(7,215.1924);
   c1lep6jin3bex_meff_ttbarlight__115->SetBinContent(8,387.3596);
   c1lep6jin3bex_meff_ttbarlight__115->SetBinError(1,6.030925);
   c1lep6jin3bex_meff_ttbarlight__115->SetBinError(2,6.030925);
   c1lep6jin3bex_meff_ttbarlight__115->SetBinError(3,16.02085);
   c1lep6jin3bex_meff_ttbarlight__115->SetBinError(4,18.69141);
   c1lep6jin3bex_meff_ttbarlight__115->SetBinError(5,15.97892);
   c1lep6jin3bex_meff_ttbarlight__115->SetBinError(6,13.46562);
   c1lep6jin3bex_meff_ttbarlight__115->SetBinError(7,10.01397);
   c1lep6jin3bex_meff_ttbarlight__115->SetBinError(8,14.79086);
   c1lep6jin3bex_meff_ttbarlight__115->SetEntries(6955);
   c1lep6jin3bex_meff_ttbarlight__115->SetDirectory(0);
   c1lep6jin3bex_meff_ttbarlight__115->SetStats(0);
   c1lep6jin3bex_meff_ttbarlight__115->SetMarkerStyle(20);
   c1lep6jin3bex_meff_ttbarlight__115->SetMarkerSize(1.2);
   c1lep6jin3bex_meff_ttbarlight__115->GetXaxis()->SetTitle("m_{eff} [GeV]");
   c1lep6jin3bex_meff_ttbarlight__115->GetXaxis()->SetRange(1,70);
   c1lep6jin3bex_meff_ttbarlight__115->GetXaxis()->SetLabelFont(43);
   c1lep6jin3bex_meff_ttbarlight__115->GetXaxis()->SetLabelSize(21);
   c1lep6jin3bex_meff_ttbarlight__115->GetXaxis()->SetTitleSize(21);
   c1lep6jin3bex_meff_ttbarlight__115->GetXaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_meff_ttbarlight__115->GetXaxis()->SetTitleFont(43);
   c1lep6jin3bex_meff_ttbarlight__115->GetYaxis()->SetLabelFont(43);
   c1lep6jin3bex_meff_ttbarlight__115->GetYaxis()->SetLabelSize(21);
   c1lep6jin3bex_meff_ttbarlight__115->GetYaxis()->SetTitleSize(21);
   c1lep6jin3bex_meff_ttbarlight__115->GetYaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_meff_ttbarlight__115->GetYaxis()->SetTitleFont(43);
   c1lep6jin3bex_meff_ttbarlight__115->GetZaxis()->SetLabelFont(43);
   c1lep6jin3bex_meff_ttbarlight__115->GetZaxis()->SetLabelSize(21);
   c1lep6jin3bex_meff_ttbarlight__115->GetZaxis()->SetTitleSize(21);
   c1lep6jin3bex_meff_ttbarlight__115->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep6jin3bex_meff_ttbarlight,"");
   Double_t xAxis129[8] = {125, 225, 325, 425, 525, 625, 725, 825}; 
   
   TH1D *c1lep6jin3bex_meff_uHcW__116 = new TH1D("c1lep6jin3bex_meff_uHcW__116","",7, xAxis129);
   c1lep6jin3bex_meff_uHcW__116->SetBinContent(2,25.52266);
   c1lep6jin3bex_meff_uHcW__116->SetBinContent(3,91.42394);
   c1lep6jin3bex_meff_uHcW__116->SetBinContent(4,188.1358);
   c1lep6jin3bex_meff_uHcW__116->SetBinContent(5,129.0101);
   c1lep6jin3bex_meff_uHcW__116->SetBinContent(6,99.01102);
   c1lep6jin3bex_meff_uHcW__116->SetBinContent(7,62.1246);
   c1lep6jin3bex_meff_uHcW__116->SetBinContent(8,93.80438);
   c1lep6jin3bex_meff_uHcW__116->SetBinError(2,3.919576);
   c1lep6jin3bex_meff_uHcW__116->SetBinError(3,11.87961);
   c1lep6jin3bex_meff_uHcW__116->SetBinError(4,15.14571);
   c1lep6jin3bex_meff_uHcW__116->SetBinError(5,14.1117);
   c1lep6jin3bex_meff_uHcW__116->SetBinError(6,11.70605);
   c1lep6jin3bex_meff_uHcW__116->SetBinError(7,9.717319);
   c1lep6jin3bex_meff_uHcW__116->SetBinError(8,13.31791);
   c1lep6jin3bex_meff_uHcW__116->SetEntries(5540);
   c1lep6jin3bex_meff_uHcW__116->SetDirectory(0);
   c1lep6jin3bex_meff_uHcW__116->SetStats(0);
   c1lep6jin3bex_meff_uHcW__116->SetFillColor(2);
   c1lep6jin3bex_meff_uHcW__116->SetLineColor(2);
   c1lep6jin3bex_meff_uHcW__116->SetMarkerStyle(20);
   c1lep6jin3bex_meff_uHcW__116->SetMarkerSize(1.2);
   c1lep6jin3bex_meff_uHcW__116->GetXaxis()->SetTitle("m_{eff} [GeV]");
   c1lep6jin3bex_meff_uHcW__116->GetXaxis()->SetRange(1,70);
   c1lep6jin3bex_meff_uHcW__116->GetXaxis()->SetLabelFont(43);
   c1lep6jin3bex_meff_uHcW__116->GetXaxis()->SetLabelSize(21);
   c1lep6jin3bex_meff_uHcW__116->GetXaxis()->SetTitleSize(21);
   c1lep6jin3bex_meff_uHcW__116->GetXaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_meff_uHcW__116->GetXaxis()->SetTitleFont(43);
   c1lep6jin3bex_meff_uHcW__116->GetYaxis()->SetLabelFont(43);
   c1lep6jin3bex_meff_uHcW__116->GetYaxis()->SetLabelSize(21);
   c1lep6jin3bex_meff_uHcW__116->GetYaxis()->SetTitleSize(21);
   c1lep6jin3bex_meff_uHcW__116->GetYaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_meff_uHcW__116->GetYaxis()->SetTitleFont(43);
   c1lep6jin3bex_meff_uHcW__116->GetZaxis()->SetLabelFont(43);
   c1lep6jin3bex_meff_uHcW__116->GetZaxis()->SetLabelSize(21);
   c1lep6jin3bex_meff_uHcW__116->GetZaxis()->SetTitleSize(21);
   c1lep6jin3bex_meff_uHcW__116->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep6jin3bex_meff_uHcW,"");
   h_stack->Draw("hist same");
   
   Double_t g_totErr_fx3051[7] = {
   175,
   275,
   375,
   475,
   575,
   675,
   775};
   Double_t g_totErr_fy3051[7] = {
   0.007921875,
   201.6511,
   1596.843,
   2689.142,
   2525.768,
   1977.047,
   1435.513};
   Double_t g_totErr_felx3051[7] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t g_totErr_fely3051[7] = {
   8.672161,
   50.64649,
   378.1886,
   561.9902,
   489.9873,
   378.0981,
   279.6046};
   Double_t g_totErr_fehx3051[7] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t g_totErr_fehy3051[7] = {
   8.672161,
   50.64649,
   378.1886,
   561.9902,
   489.9873,
   378.0981,
   279.6046};
   grae = new TGraphAsymmErrors(7,g_totErr_fx3051,g_totErr_fy3051,g_totErr_felx3051,g_totErr_fehx3051,g_totErr_fely3051,g_totErr_fehy3051);
   grae->SetName("g_totErr");
   grae->SetTitle("");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(3354);
   grae->SetLineColor(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0);
   
   TH1F *Graph_g_totErr3051 = new TH1F("Graph_g_totErr3051","",100,55,895);
   Graph_g_totErr3051->SetMinimum(-334.6438);
   Graph_g_totErr3051->SetMaximum(3577.111);
   Graph_g_totErr3051->SetDirectory(0);
   Graph_g_totErr3051->SetStats(0);
   Graph_g_totErr3051->SetLineWidth(2);
   Graph_g_totErr3051->SetMarkerStyle(20);
   Graph_g_totErr3051->SetMarkerSize(1.2);
   Graph_g_totErr3051->GetXaxis()->SetLabelFont(43);
   Graph_g_totErr3051->GetXaxis()->SetLabelSize(21);
   Graph_g_totErr3051->GetXaxis()->SetTitleSize(21);
   Graph_g_totErr3051->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_totErr3051->GetXaxis()->SetTitleFont(43);
   Graph_g_totErr3051->GetYaxis()->SetLabelFont(43);
   Graph_g_totErr3051->GetYaxis()->SetLabelSize(21);
   Graph_g_totErr3051->GetYaxis()->SetTitleSize(21);
   Graph_g_totErr3051->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_totErr3051->GetYaxis()->SetTitleFont(43);
   Graph_g_totErr3051->GetZaxis()->SetLabelFont(43);
   Graph_g_totErr3051->GetZaxis()->SetLabelSize(21);
   Graph_g_totErr3051->GetZaxis()->SetTitleSize(21);
   Graph_g_totErr3051->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_totErr3051);
   
   grae->Draw("e2");
   
   Double_t Graph_from_c1lep6jin3bex_meff_Data_fx3052[7] = {
   175,
   275,
   375,
   475,
   575,
   675,
   775};
   Double_t Graph_from_c1lep6jin3bex_meff_Data_fy3052[7] = {
   0,
   246,
   1972,
   3133,
   2894,
   2173,
   1389};
   Double_t Graph_from_c1lep6jin3bex_meff_Data_felx3052[7] = {
   49.9,
   49.9,
   49.9,
   49.9,
   49.9,
   49.9,
   49.9};
   Double_t Graph_from_c1lep6jin3bex_meff_Data_fely3052[7] = {
   0,
   15.68439,
   44.40721,
   55.97321,
   53.79591,
   46.61545,
   37.26929};
   Double_t Graph_from_c1lep6jin3bex_meff_Data_fehx3052[7] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t Graph_from_c1lep6jin3bex_meff_Data_fehy3052[7] = {
   0,
   15.68439,
   44.40721,
   55.97321,
   53.79591,
   46.61545,
   37.26929};
   grae = new TGraphAsymmErrors(7,Graph_from_c1lep6jin3bex_meff_Data_fx3052,Graph_from_c1lep6jin3bex_meff_Data_fy3052,Graph_from_c1lep6jin3bex_meff_Data_felx3052,Graph_from_c1lep6jin3bex_meff_Data_fehx3052,Graph_from_c1lep6jin3bex_meff_Data_fely3052,Graph_from_c1lep6jin3bex_meff_Data_fehy3052);
   grae->SetName("Graph_from_c1lep6jin3bex_meff_Data");
   grae->SetTitle("");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_c1lep6jin3bex_meff_Data3052 = new TH1F("Graph_Graph_from_c1lep6jin3bex_meff_Data3052","",100,55.11,894.99);
   Graph_Graph_from_c1lep6jin3bex_meff_Data3052->SetMinimum(0);
   Graph_Graph_from_c1lep6jin3bex_meff_Data3052->SetMaximum(3507.871);
   Graph_Graph_from_c1lep6jin3bex_meff_Data3052->SetDirectory(0);
   Graph_Graph_from_c1lep6jin3bex_meff_Data3052->SetStats(0);
   Graph_Graph_from_c1lep6jin3bex_meff_Data3052->SetLineWidth(2);
   Graph_Graph_from_c1lep6jin3bex_meff_Data3052->SetMarkerStyle(20);
   Graph_Graph_from_c1lep6jin3bex_meff_Data3052->SetMarkerSize(1.2);
   Graph_Graph_from_c1lep6jin3bex_meff_Data3052->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep6jin3bex_meff_Data3052->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep6jin3bex_meff_Data3052->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep6jin3bex_meff_Data3052->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep6jin3bex_meff_Data3052->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep6jin3bex_meff_Data3052->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep6jin3bex_meff_Data3052->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep6jin3bex_meff_Data3052->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep6jin3bex_meff_Data3052->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep6jin3bex_meff_Data3052->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep6jin3bex_meff_Data3052->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep6jin3bex_meff_Data3052->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep6jin3bex_meff_Data3052->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep6jin3bex_meff_Data3052->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_c1lep6jin3bex_meff_Data3052);
   
   grae->Draw("ep1 ");
   Double_t xAxis130[8] = {125, 225, 325, 425, 525, 625, 725, 825}; 
   
   TH1D *h_dummy_copy__117 = new TH1D("h_dummy_copy__117","",7, xAxis130);
   h_dummy_copy__117->SetEntries(1164495);
   h_dummy_copy__117->SetDirectory(0);
   h_dummy_copy__117->SetStats(0);
   h_dummy_copy__117->SetMarkerStyle(20);
   h_dummy_copy__117->SetMarkerSize(1.2);
   h_dummy_copy__117->GetXaxis()->SetTitle("m_{eff} [GeV]");
   h_dummy_copy__117->GetXaxis()->SetRange(1,70);
   h_dummy_copy__117->GetXaxis()->SetLabelFont(43);
   h_dummy_copy__117->GetXaxis()->SetLabelSize(21);
   h_dummy_copy__117->GetXaxis()->SetTitleSize(21);
   h_dummy_copy__117->GetXaxis()->SetTitleOffset(1.4);
   h_dummy_copy__117->GetXaxis()->SetTitleFont(43);
   h_dummy_copy__117->GetYaxis()->SetTitle("Events / 100 GeV");
   h_dummy_copy__117->GetYaxis()->SetLabelFont(43);
   h_dummy_copy__117->GetYaxis()->SetLabelSize(16.8);
   h_dummy_copy__117->GetYaxis()->SetTitleSize(21);
   h_dummy_copy__117->GetYaxis()->SetTitleOffset(2.4);
   h_dummy_copy__117->GetYaxis()->SetTitleFont(43);
   h_dummy_copy__117->GetZaxis()->SetLabelFont(43);
   h_dummy_copy__117->GetZaxis()->SetLabelSize(21);
   h_dummy_copy__117->GetZaxis()->SetTitleSize(21);
   h_dummy_copy__117->GetZaxis()->SetTitleFont(43);
   h_dummy_copy__117->Draw("sameaxis");
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
      tex = new TLatex(0.18,0.73,"#geq6j, 3b");
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
   TLegendEntry *entry=leg->AddEntry("c1lep6jin3bex_meff_Data","Data","lep");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep6jin3bex_meff_uHcW","t#bar{t}#rightarrowWbHc (BR=1%)","f");
   entry->SetFillColor(2);
   entry->SetFillStyle(1001);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep6jin3bex_meff_ttbarlight","t#bar{t}+light","f");
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep6jin3bex_meff_ttbarcc","t#bar{t}+cc","f");

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
   entry=leg->AddEntry("c1lep6jin3bex_meff_ttbarbb","t#bar{t}+bb","f");

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
   entry=leg->AddEntry("c1lep6jin3bex_meff_topEW","Non-t#bar{t}","f");

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
   c_c1lep6jin3bex_meff->cd();
   c_c1lep6jin3bex_meff->Modified();
   c_c1lep6jin3bex_meff->cd();
   c_c1lep6jin3bex_meff->SetSelected(c_c1lep6jin3bex_meff);
}
