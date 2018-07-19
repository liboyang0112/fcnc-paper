void c1lep4jin2bin_lep0_eta()
{
//=========Macro generated from canvas: c_c1lep4jin2bin_lep0_eta/c_c1lep4jin2bin_lep0_eta
//=========  (Thu Jul 19 17:38:06 2018) by ROOT version6.04/14
   TCanvas *c_c1lep4jin2bin_lep0_eta = new TCanvas("c_c1lep4jin2bin_lep0_eta", "c_c1lep4jin2bin_lep0_eta",0,0,600,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c_c1lep4jin2bin_lep0_eta->SetHighLightColor(2);
   c_c1lep4jin2bin_lep0_eta->Range(0,0,1,1);
   c_c1lep4jin2bin_lep0_eta->SetFillColor(0);
   c_c1lep4jin2bin_lep0_eta->SetBorderMode(0);
   c_c1lep4jin2bin_lep0_eta->SetBorderSize(2);
   c_c1lep4jin2bin_lep0_eta->SetTickx(1);
   c_c1lep4jin2bin_lep0_eta->SetTicky(1);
   c_c1lep4jin2bin_lep0_eta->SetLeftMargin(0.16);
   c_c1lep4jin2bin_lep0_eta->SetRightMargin(0.05);
   c_c1lep4jin2bin_lep0_eta->SetTopMargin(0.05);
   c_c1lep4jin2bin_lep0_eta->SetBottomMargin(0.16);
   c_c1lep4jin2bin_lep0_eta->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0,1,0.28);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-3.364198,-0.0873016,2.808642,1.5);
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
   Double_t xAxis291[11] = {-2.5, -2, -1.5, -1, -0.5, 0, 0.5, 1, 1.5, 2, 2.5}; 
   
   TH1D *h_dummy2__262 = new TH1D("h_dummy2__262","Data/MC",10, xAxis291);
   h_dummy2__262->SetMinimum(0.5);
   h_dummy2__262->SetMaximum(1.5);
   h_dummy2__262->SetEntries(1.123265e+07);
   h_dummy2__262->SetDirectory(0);
   h_dummy2__262->SetStats(0);
   h_dummy2__262->SetMarkerStyle(20);
   h_dummy2__262->SetMarkerSize(1.2);
   h_dummy2__262->GetXaxis()->SetTitle("lepton #eta");
   h_dummy2__262->GetXaxis()->SetRange(1,30);
   h_dummy2__262->GetXaxis()->SetLabelFont(43);
   h_dummy2__262->GetXaxis()->SetLabelOffset(0.025);
   h_dummy2__262->GetXaxis()->SetLabelSize(16.8);
   h_dummy2__262->GetXaxis()->SetTitleSize(21);
   h_dummy2__262->GetXaxis()->SetTitleOffset(5.05);
   h_dummy2__262->GetXaxis()->SetTitleFont(43);
   h_dummy2__262->GetYaxis()->SetTitle("Data / Bkg");
   h_dummy2__262->GetYaxis()->SetNdivisions(-504);
   h_dummy2__262->GetYaxis()->SetLabelFont(43);
   h_dummy2__262->GetYaxis()->SetLabelOffset(0.02);
   h_dummy2__262->GetYaxis()->SetLabelSize(16.8);
   h_dummy2__262->GetYaxis()->SetTitleSize(21);
   h_dummy2__262->GetYaxis()->SetTitleOffset(2.4);
   h_dummy2__262->GetYaxis()->SetTitleFont(43);
   h_dummy2__262->GetZaxis()->SetLabelFont(43);
   h_dummy2__262->GetZaxis()->SetLabelSize(21);
   h_dummy2__262->GetZaxis()->SetTitleSize(21);
   h_dummy2__262->GetZaxis()->SetTitleFont(43);
   h_dummy2__262->Draw("HIST");
   
   Double_t Graph_from_h_ratio_fx3117[10] = {
   -2.25,
   -1.75,
   -1.25,
   -0.75,
   -0.25,
   0.25,
   0.75,
   1.25,
   1.75,
   2.25};
   Double_t Graph_from_h_ratio_fy3117[10] = {
   0.9115783,
   0.9310839,
   0.9509003,
   0.9680234,
   0.9825878,
   0.9622274,
   0.9796153,
   0.9447716,
   0.9263483,
   0.9213986};
   Double_t Graph_from_h_ratio_felx3117[10] = {
   0.2495,
   0.2495,
   0.2495,
   0.2495,
   0.2495,
   0.2495,
   0.2495,
   0.2495,
   0.2495,
   0.2495};
   Double_t Graph_from_h_ratio_fely3117[10] = {
   0.00509771,
   0.00422827,
   0.002988746,
   0.003104346,
   0.002379398,
   0.002870761,
   0.002492272,
   0.003366806,
   0.003451793,
   0.005358508};
   Double_t Graph_from_h_ratio_fehx3117[10] = {
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25};
   Double_t Graph_from_h_ratio_fehy3117[10] = {
   0.00509771,
   0.00422827,
   0.002988746,
   0.003104346,
   0.002379398,
   0.002870761,
   0.002492272,
   0.003366806,
   0.003451793,
   0.005358508};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(10,Graph_from_h_ratio_fx3117,Graph_from_h_ratio_fy3117,Graph_from_h_ratio_felx3117,Graph_from_h_ratio_fehx3117,Graph_from_h_ratio_fely3117,Graph_from_h_ratio_fehy3117);
   grae->SetName("Graph_from_h_ratio");
   grae->SetTitle("");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(24);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_h_ratio3117 = new TH1F("Graph_Graph_from_h_ratio3117","",100,-2.99945,2.99995);
   Graph_Graph_from_h_ratio3117->SetMinimum(0.8986319);
   Graph_Graph_from_h_ratio3117->SetMaximum(0.9928158);
   Graph_Graph_from_h_ratio3117->SetDirectory(0);
   Graph_Graph_from_h_ratio3117->SetStats(0);
   Graph_Graph_from_h_ratio3117->SetLineWidth(2);
   Graph_Graph_from_h_ratio3117->SetMarkerStyle(20);
   Graph_Graph_from_h_ratio3117->SetMarkerSize(1.2);
   Graph_Graph_from_h_ratio3117->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3117->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3117->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3117->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3117->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3117->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3117->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3117->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3117->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3117->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3117->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3117->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3117->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3117->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_h_ratio3117);
   
   grae->Draw("pe0");
   TLine *line = new TLine(-2.5,1,2.5,1);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t g_ratio2_fx3118[10] = {
   -2.25,
   -1.75,
   -1.25,
   -0.75,
   -0.25,
   0.25,
   0.75,
   1.25,
   1.75,
   2.25};
   Double_t g_ratio2_fy3118[10] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t g_ratio2_felx3118[10] = {
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25};
   Double_t g_ratio2_fely3118[10] = {
   0.1149327,
   0.1182768,
   0.122891,
   0.1253205,
   0.1261964,
   0.1249452,
   0.1256355,
   0.1227069,
   0.1179673,
   0.1164722};
   Double_t g_ratio2_fehx3118[10] = {
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25};
   Double_t g_ratio2_fehy3118[10] = {
   0.1149327,
   0.1182768,
   0.122891,
   0.1253205,
   0.1261964,
   0.1249452,
   0.1256355,
   0.1227069,
   0.1179673,
   0.1164722};
   grae = new TGraphAsymmErrors(10,g_ratio2_fx3118,g_ratio2_fy3118,g_ratio2_felx3118,g_ratio2_fehx3118,g_ratio2_fely3118,g_ratio2_fehy3118);
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
   
   TH1F *Graph_g_ratio23118 = new TH1F("Graph_g_ratio23118","",100,-3,3);
   Graph_g_ratio23118->SetMinimum(0.8485643);
   Graph_g_ratio23118->SetMaximum(1.151436);
   Graph_g_ratio23118->SetDirectory(0);
   Graph_g_ratio23118->SetStats(0);
   Graph_g_ratio23118->SetLineWidth(2);
   Graph_g_ratio23118->SetMarkerStyle(20);
   Graph_g_ratio23118->SetMarkerSize(1.2);
   Graph_g_ratio23118->GetXaxis()->SetLabelFont(43);
   Graph_g_ratio23118->GetXaxis()->SetLabelSize(21);
   Graph_g_ratio23118->GetXaxis()->SetTitleSize(21);
   Graph_g_ratio23118->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23118->GetXaxis()->SetTitleFont(43);
   Graph_g_ratio23118->GetYaxis()->SetLabelFont(43);
   Graph_g_ratio23118->GetYaxis()->SetLabelSize(21);
   Graph_g_ratio23118->GetYaxis()->SetTitleSize(21);
   Graph_g_ratio23118->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23118->GetYaxis()->SetTitleFont(43);
   Graph_g_ratio23118->GetZaxis()->SetLabelFont(43);
   Graph_g_ratio23118->GetZaxis()->SetLabelSize(21);
   Graph_g_ratio23118->GetZaxis()->SetTitleSize(21);
   Graph_g_ratio23118->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_ratio23118);
   
   grae->Draw("e2");
   Double_t xAxis292[11] = {-2.5, -2, -1.5, -1, -0.5, 0, 0.5, 1, 1.5, 2, 2.5}; 
   
   TH1D *h_dummy2_copy__263 = new TH1D("h_dummy2_copy__263","Data/MC",10, xAxis292);
   h_dummy2_copy__263->SetMinimum(0.5);
   h_dummy2_copy__263->SetMaximum(1.5);
   h_dummy2_copy__263->SetEntries(1.123265e+07);
   h_dummy2_copy__263->SetDirectory(0);
   h_dummy2_copy__263->SetStats(0);
   h_dummy2_copy__263->SetMarkerStyle(20);
   h_dummy2_copy__263->SetMarkerSize(1.2);
   h_dummy2_copy__263->GetXaxis()->SetTitle("lepton #eta");
   h_dummy2_copy__263->GetXaxis()->SetRange(1,30);
   h_dummy2_copy__263->GetXaxis()->SetLabelFont(43);
   h_dummy2_copy__263->GetXaxis()->SetLabelOffset(0.025);
   h_dummy2_copy__263->GetXaxis()->SetLabelSize(16.8);
   h_dummy2_copy__263->GetXaxis()->SetTitleSize(21);
   h_dummy2_copy__263->GetXaxis()->SetTitleOffset(5.05);
   h_dummy2_copy__263->GetXaxis()->SetTitleFont(43);
   h_dummy2_copy__263->GetYaxis()->SetTitle("Data / Bkg");
   h_dummy2_copy__263->GetYaxis()->SetNdivisions(-504);
   h_dummy2_copy__263->GetYaxis()->SetLabelFont(43);
   h_dummy2_copy__263->GetYaxis()->SetLabelOffset(0.02);
   h_dummy2_copy__263->GetYaxis()->SetLabelSize(16.8);
   h_dummy2_copy__263->GetYaxis()->SetTitleSize(21);
   h_dummy2_copy__263->GetYaxis()->SetTitleOffset(2.4);
   h_dummy2_copy__263->GetYaxis()->SetTitleFont(43);
   h_dummy2_copy__263->GetZaxis()->SetLabelFont(43);
   h_dummy2_copy__263->GetZaxis()->SetLabelSize(21);
   h_dummy2_copy__263->GetZaxis()->SetTitleSize(21);
   h_dummy2_copy__263->GetZaxis()->SetTitleFont(43);
   h_dummy2_copy__263->Draw("sameaxis");
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
   c_c1lep4jin2bin_lep0_eta->cd();
  
// ------------>Primitives in pad: pad0
   TPad *pad0 = new TPad("pad0", "pad0",0,0.2,1,1);
   pad0->Draw();
   pad0->cd();
   pad0->Range(-3.364198,-36752.82,2.808642,330775.4);
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
   Double_t xAxis293[11] = {-2.5, -2, -1.5, -1, -0.5, 0, 0.5, 1, 1.5, 2, 2.5}; 
   
   TH1D *h_dummy__264 = new TH1D("h_dummy__264","",10, xAxis293);
   h_dummy__264->SetMinimum(0);
   h_dummy__264->SetMaximum(312399);
   h_dummy__264->SetEntries(1.123265e+07);
   h_dummy__264->SetDirectory(0);
   h_dummy__264->SetStats(0);
   h_dummy__264->SetMarkerStyle(20);
   h_dummy__264->SetMarkerSize(1.2);
   h_dummy__264->GetXaxis()->SetRange(1,30);
   h_dummy__264->GetXaxis()->SetLabelFont(43);
   h_dummy__264->GetXaxis()->SetLabelSize(0);
   h_dummy__264->GetXaxis()->SetTitleSize(21);
   h_dummy__264->GetXaxis()->SetTitleOffset(1.4);
   h_dummy__264->GetXaxis()->SetTitleFont(43);
   h_dummy__264->GetYaxis()->SetTitle("Events");
   h_dummy__264->GetYaxis()->SetLabelFont(43);
   h_dummy__264->GetYaxis()->SetLabelSize(16.8);
   h_dummy__264->GetYaxis()->SetTitleSize(21);
   h_dummy__264->GetYaxis()->SetTitleOffset(2.4);
   h_dummy__264->GetYaxis()->SetTitleFont(43);
   h_dummy__264->GetZaxis()->SetLabelFont(43);
   h_dummy__264->GetZaxis()->SetLabelSize(21);
   h_dummy__264->GetZaxis()->SetTitleSize(21);
   h_dummy__264->GetZaxis()->SetTitleFont(43);
   h_dummy__264->Draw("HIST");
   
   THStack *h_stack = new THStack();
   h_stack->SetName("h_stack");
   h_stack->SetTitle("h_stack");
   Double_t xAxis294[11] = {-2.5, -2, -1.5, -1, -0.5, 0, 0.5, 1, 1.5, 2, 2.5}; 
   
   TH1F *h_stack_stack_30 = new TH1F("h_stack_stack_30","h_stack",10, xAxis294);
   h_stack_stack_30->SetMinimum(0);
   h_stack_stack_30->SetMaximum(184568.9);
   h_stack_stack_30->SetDirectory(0);
   h_stack_stack_30->SetStats(0);
   h_stack_stack_30->SetLineWidth(2);
   h_stack_stack_30->SetMarkerStyle(20);
   h_stack_stack_30->SetMarkerSize(1.2);
   h_stack_stack_30->GetXaxis()->SetLabelFont(43);
   h_stack_stack_30->GetXaxis()->SetLabelSize(21);
   h_stack_stack_30->GetXaxis()->SetTitleSize(21);
   h_stack_stack_30->GetXaxis()->SetTitleOffset(1.4);
   h_stack_stack_30->GetXaxis()->SetTitleFont(43);
   h_stack_stack_30->GetYaxis()->SetLabelFont(43);
   h_stack_stack_30->GetYaxis()->SetLabelSize(21);
   h_stack_stack_30->GetYaxis()->SetTitleSize(21);
   h_stack_stack_30->GetYaxis()->SetTitleOffset(1.4);
   h_stack_stack_30->GetYaxis()->SetTitleFont(43);
   h_stack_stack_30->GetZaxis()->SetLabelFont(43);
   h_stack_stack_30->GetZaxis()->SetLabelSize(21);
   h_stack_stack_30->GetZaxis()->SetTitleSize(21);
   h_stack_stack_30->GetZaxis()->SetTitleFont(43);
   h_stack->SetHistogram(h_stack_stack_30);
   
   Double_t xAxis295[11] = {-2.5, -2, -1.5, -1, -0.5, 0, 0.5, 1, 1.5, 2, 2.5}; 
   
   TH1D *c1lep4jin2bin_lep0_eta_topEW__265 = new TH1D("c1lep4jin2bin_lep0_eta_topEW__265","",10, xAxis295);
   c1lep4jin2bin_lep0_eta_topEW__265->SetBinContent(1,9346.767);
   c1lep4jin2bin_lep0_eta_topEW__265->SetBinContent(2,9743.612);
   c1lep4jin2bin_lep0_eta_topEW__265->SetBinContent(3,13691.66);
   c1lep4jin2bin_lep0_eta_topEW__265->SetBinContent(4,9868.655);
   c1lep4jin2bin_lep0_eta_topEW__265->SetBinContent(5,14978.12);
   c1lep4jin2bin_lep0_eta_topEW__265->SetBinContent(6,10893.94);
   c1lep4jin2bin_lep0_eta_topEW__265->SetBinContent(7,14301.64);
   c1lep4jin2bin_lep0_eta_topEW__265->SetBinContent(8,10086.9);
   c1lep4jin2bin_lep0_eta_topEW__265->SetBinContent(9,14479.64);
   c1lep4jin2bin_lep0_eta_topEW__265->SetBinContent(10,7958.993);
   c1lep4jin2bin_lep0_eta_topEW__265->SetBinContent(11,715.7785);
   c1lep4jin2bin_lep0_eta_topEW__265->SetBinError(1,273.7518);
   c1lep4jin2bin_lep0_eta_topEW__265->SetBinError(2,251.6713);
   c1lep4jin2bin_lep0_eta_topEW__265->SetBinError(3,262.186);
   c1lep4jin2bin_lep0_eta_topEW__265->SetBinError(4,194.3545);
   c1lep4jin2bin_lep0_eta_topEW__265->SetBinError(5,223.2206);
   c1lep4jin2bin_lep0_eta_topEW__265->SetBinError(6,197.5077);
   c1lep4jin2bin_lep0_eta_topEW__265->SetBinError(7,212.5578);
   c1lep4jin2bin_lep0_eta_topEW__265->SetBinError(8,215.6032);
   c1lep4jin2bin_lep0_eta_topEW__265->SetBinError(9,318.0463);
   c1lep4jin2bin_lep0_eta_topEW__265->SetBinError(10,231.4743);
   c1lep4jin2bin_lep0_eta_topEW__265->SetBinError(11,51.66585);
   c1lep4jin2bin_lep0_eta_topEW__265->SetEntries(8198870);
   c1lep4jin2bin_lep0_eta_topEW__265->SetDirectory(0);
   c1lep4jin2bin_lep0_eta_topEW__265->SetStats(0);

   ci = TColor::GetColor("#66cc66");
   c1lep4jin2bin_lep0_eta_topEW__265->SetFillColor(ci);
   c1lep4jin2bin_lep0_eta_topEW__265->SetMarkerStyle(20);
   c1lep4jin2bin_lep0_eta_topEW__265->SetMarkerSize(1.2);
   c1lep4jin2bin_lep0_eta_topEW__265->GetXaxis()->SetTitle("Lepton #eta");
   c1lep4jin2bin_lep0_eta_topEW__265->GetXaxis()->SetRange(1,30);
   c1lep4jin2bin_lep0_eta_topEW__265->GetXaxis()->SetLabelFont(43);
   c1lep4jin2bin_lep0_eta_topEW__265->GetXaxis()->SetLabelSize(21);
   c1lep4jin2bin_lep0_eta_topEW__265->GetXaxis()->SetTitleSize(21);
   c1lep4jin2bin_lep0_eta_topEW__265->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_lep0_eta_topEW__265->GetXaxis()->SetTitleFont(43);
   c1lep4jin2bin_lep0_eta_topEW__265->GetYaxis()->SetLabelFont(43);
   c1lep4jin2bin_lep0_eta_topEW__265->GetYaxis()->SetLabelSize(21);
   c1lep4jin2bin_lep0_eta_topEW__265->GetYaxis()->SetTitleSize(21);
   c1lep4jin2bin_lep0_eta_topEW__265->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_lep0_eta_topEW__265->GetYaxis()->SetTitleFont(43);
   c1lep4jin2bin_lep0_eta_topEW__265->GetZaxis()->SetLabelFont(43);
   c1lep4jin2bin_lep0_eta_topEW__265->GetZaxis()->SetLabelSize(21);
   c1lep4jin2bin_lep0_eta_topEW__265->GetZaxis()->SetTitleSize(21);
   c1lep4jin2bin_lep0_eta_topEW__265->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jin2bin_lep0_eta_topEW,"");
   Double_t xAxis296[11] = {-2.5, -2, -1.5, -1, -0.5, 0, 0.5, 1, 1.5, 2, 2.5}; 
   
   TH1D *c1lep4jin2bin_lep0_eta_ttbarbb__266 = new TH1D("c1lep4jin2bin_lep0_eta_ttbarbb__266","",10, xAxis296);
   c1lep4jin2bin_lep0_eta_ttbarbb__266->SetBinContent(1,1813.463);
   c1lep4jin2bin_lep0_eta_ttbarbb__266->SetBinContent(2,2837.011);
   c1lep4jin2bin_lep0_eta_ttbarbb__266->SetBinContent(3,6022.566);
   c1lep4jin2bin_lep0_eta_ttbarbb__266->SetBinContent(4,5865.705);
   c1lep4jin2bin_lep0_eta_ttbarbb__266->SetBinContent(5,10329.76);
   c1lep4jin2bin_lep0_eta_ttbarbb__266->SetBinContent(6,6800.328);
   c1lep4jin2bin_lep0_eta_ttbarbb__266->SetBinContent(7,9259.969);
   c1lep4jin2bin_lep0_eta_ttbarbb__266->SetBinContent(8,4802.802);
   c1lep4jin2bin_lep0_eta_ttbarbb__266->SetBinContent(9,4238.796);
   c1lep4jin2bin_lep0_eta_ttbarbb__266->SetBinContent(10,1628.281);
   c1lep4jin2bin_lep0_eta_ttbarbb__266->SetBinContent(11,142.659);
   c1lep4jin2bin_lep0_eta_ttbarbb__266->SetBinError(1,28.15786);
   c1lep4jin2bin_lep0_eta_ttbarbb__266->SetBinError(2,33.55262);
   c1lep4jin2bin_lep0_eta_ttbarbb__266->SetBinError(3,48.62189);
   c1lep4jin2bin_lep0_eta_ttbarbb__266->SetBinError(4,47.88117);
   c1lep4jin2bin_lep0_eta_ttbarbb__266->SetBinError(5,64.60499);
   c1lep4jin2bin_lep0_eta_ttbarbb__266->SetBinError(6,51.02305);
   c1lep4jin2bin_lep0_eta_ttbarbb__266->SetBinError(7,60.95543);
   c1lep4jin2bin_lep0_eta_ttbarbb__266->SetBinError(8,43.88601);
   c1lep4jin2bin_lep0_eta_ttbarbb__266->SetBinError(9,41.58892);
   c1lep4jin2bin_lep0_eta_ttbarbb__266->SetBinError(10,25.57176);
   c1lep4jin2bin_lep0_eta_ttbarbb__266->SetBinError(11,7.23059);
   c1lep4jin2bin_lep0_eta_ttbarbb__266->SetEntries(197629);
   c1lep4jin2bin_lep0_eta_ttbarbb__266->SetDirectory(0);
   c1lep4jin2bin_lep0_eta_ttbarbb__266->SetStats(0);

   ci = TColor::GetColor("#6666cc");
   c1lep4jin2bin_lep0_eta_ttbarbb__266->SetFillColor(ci);
   c1lep4jin2bin_lep0_eta_ttbarbb__266->SetMarkerStyle(20);
   c1lep4jin2bin_lep0_eta_ttbarbb__266->SetMarkerSize(1.2);
   c1lep4jin2bin_lep0_eta_ttbarbb__266->GetXaxis()->SetTitle("Lepton #eta");
   c1lep4jin2bin_lep0_eta_ttbarbb__266->GetXaxis()->SetRange(1,30);
   c1lep4jin2bin_lep0_eta_ttbarbb__266->GetXaxis()->SetLabelFont(43);
   c1lep4jin2bin_lep0_eta_ttbarbb__266->GetXaxis()->SetLabelSize(21);
   c1lep4jin2bin_lep0_eta_ttbarbb__266->GetXaxis()->SetTitleSize(21);
   c1lep4jin2bin_lep0_eta_ttbarbb__266->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_lep0_eta_ttbarbb__266->GetXaxis()->SetTitleFont(43);
   c1lep4jin2bin_lep0_eta_ttbarbb__266->GetYaxis()->SetLabelFont(43);
   c1lep4jin2bin_lep0_eta_ttbarbb__266->GetYaxis()->SetLabelSize(21);
   c1lep4jin2bin_lep0_eta_ttbarbb__266->GetYaxis()->SetTitleSize(21);
   c1lep4jin2bin_lep0_eta_ttbarbb__266->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_lep0_eta_ttbarbb__266->GetYaxis()->SetTitleFont(43);
   c1lep4jin2bin_lep0_eta_ttbarbb__266->GetZaxis()->SetLabelFont(43);
   c1lep4jin2bin_lep0_eta_ttbarbb__266->GetZaxis()->SetLabelSize(21);
   c1lep4jin2bin_lep0_eta_ttbarbb__266->GetZaxis()->SetTitleSize(21);
   c1lep4jin2bin_lep0_eta_ttbarbb__266->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jin2bin_lep0_eta_ttbarbb,"");
   Double_t xAxis297[11] = {-2.5, -2, -1.5, -1, -0.5, 0, 0.5, 1, 1.5, 2, 2.5}; 
   
   TH1D *c1lep4jin2bin_lep0_eta_ttbarcc__267 = new TH1D("c1lep4jin2bin_lep0_eta_ttbarcc__267","",10, xAxis297);
   c1lep4jin2bin_lep0_eta_ttbarcc__267->SetBinContent(1,2611.462);
   c1lep4jin2bin_lep0_eta_ttbarcc__267->SetBinContent(2,4503.567);
   c1lep4jin2bin_lep0_eta_ttbarcc__267->SetBinContent(3,9799.241);
   c1lep4jin2bin_lep0_eta_ttbarcc__267->SetBinContent(4,9746.724);
   c1lep4jin2bin_lep0_eta_ttbarcc__267->SetBinContent(5,17065.45);
   c1lep4jin2bin_lep0_eta_ttbarcc__267->SetBinContent(6,11420.47);
   c1lep4jin2bin_lep0_eta_ttbarcc__267->SetBinContent(7,15292.3);
   c1lep4jin2bin_lep0_eta_ttbarcc__267->SetBinContent(8,7745.379);
   c1lep4jin2bin_lep0_eta_ttbarcc__267->SetBinContent(9,6661.409);
   c1lep4jin2bin_lep0_eta_ttbarcc__267->SetBinContent(10,2437.115);
   c1lep4jin2bin_lep0_eta_ttbarcc__267->SetBinContent(11,199.2774);
   c1lep4jin2bin_lep0_eta_ttbarcc__267->SetBinError(1,32.51399);
   c1lep4jin2bin_lep0_eta_ttbarcc__267->SetBinError(2,43.38988);
   c1lep4jin2bin_lep0_eta_ttbarcc__267->SetBinError(3,61.65132);
   c1lep4jin2bin_lep0_eta_ttbarcc__267->SetBinError(4,61.60256);
   c1lep4jin2bin_lep0_eta_ttbarcc__267->SetBinError(5,81.6329);
   c1lep4jin2bin_lep0_eta_ttbarcc__267->SetBinError(6,66.32249);
   c1lep4jin2bin_lep0_eta_ttbarcc__267->SetBinError(7,76.66852);
   c1lep4jin2bin_lep0_eta_ttbarcc__267->SetBinError(8,55.73719);
   c1lep4jin2bin_lep0_eta_ttbarcc__267->SetBinError(9,52.42819);
   c1lep4jin2bin_lep0_eta_ttbarcc__267->SetBinError(10,30.563);
   c1lep4jin2bin_lep0_eta_ttbarcc__267->SetBinError(11,8.606229);
   c1lep4jin2bin_lep0_eta_ttbarcc__267->SetEntries(319744);
   c1lep4jin2bin_lep0_eta_ttbarcc__267->SetDirectory(0);
   c1lep4jin2bin_lep0_eta_ttbarcc__267->SetStats(0);

   ci = TColor::GetColor("#ccccff");
   c1lep4jin2bin_lep0_eta_ttbarcc__267->SetFillColor(ci);
   c1lep4jin2bin_lep0_eta_ttbarcc__267->SetMarkerStyle(20);
   c1lep4jin2bin_lep0_eta_ttbarcc__267->SetMarkerSize(1.2);
   c1lep4jin2bin_lep0_eta_ttbarcc__267->GetXaxis()->SetTitle("Lepton #eta");
   c1lep4jin2bin_lep0_eta_ttbarcc__267->GetXaxis()->SetRange(1,30);
   c1lep4jin2bin_lep0_eta_ttbarcc__267->GetXaxis()->SetLabelFont(43);
   c1lep4jin2bin_lep0_eta_ttbarcc__267->GetXaxis()->SetLabelSize(21);
   c1lep4jin2bin_lep0_eta_ttbarcc__267->GetXaxis()->SetTitleSize(21);
   c1lep4jin2bin_lep0_eta_ttbarcc__267->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_lep0_eta_ttbarcc__267->GetXaxis()->SetTitleFont(43);
   c1lep4jin2bin_lep0_eta_ttbarcc__267->GetYaxis()->SetLabelFont(43);
   c1lep4jin2bin_lep0_eta_ttbarcc__267->GetYaxis()->SetLabelSize(21);
   c1lep4jin2bin_lep0_eta_ttbarcc__267->GetYaxis()->SetTitleSize(21);
   c1lep4jin2bin_lep0_eta_ttbarcc__267->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_lep0_eta_ttbarcc__267->GetYaxis()->SetTitleFont(43);
   c1lep4jin2bin_lep0_eta_ttbarcc__267->GetZaxis()->SetLabelFont(43);
   c1lep4jin2bin_lep0_eta_ttbarcc__267->GetZaxis()->SetLabelSize(21);
   c1lep4jin2bin_lep0_eta_ttbarcc__267->GetZaxis()->SetTitleSize(21);
   c1lep4jin2bin_lep0_eta_ttbarcc__267->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jin2bin_lep0_eta_ttbarcc,"");
   Double_t xAxis298[11] = {-2.5, -2, -1.5, -1, -0.5, 0, 0.5, 1, 1.5, 2, 2.5}; 
   
   TH1D *c1lep4jin2bin_lep0_eta_ttbarlight__268 = new TH1D("c1lep4jin2bin_lep0_eta_ttbarlight__268","",10, xAxis298);
   c1lep4jin2bin_lep0_eta_ttbarlight__268->SetBinContent(1,21307.03);
   c1lep4jin2bin_lep0_eta_ttbarlight__268->SetBinContent(2,34994.9);
   c1lep4jin2bin_lep0_eta_ttbarlight__268->SetBinContent(3,76939.33);
   c1lep4jin2bin_lep0_eta_ttbarlight__268->SetBinContent(4,74967.93);
   c1lep4jin2bin_lep0_eta_ttbarlight__268->SetBinContent(5,131181.7);
   c1lep4jin2bin_lep0_eta_ttbarlight__268->SetBinContent(6,87642.49);
   c1lep4jin2bin_lep0_eta_ttbarlight__268->SetBinContent(7,118858);
   c1lep4jin2bin_lep0_eta_ttbarlight__268->SetBinContent(8,60712.05);
   c1lep4jin2bin_lep0_eta_ttbarlight__268->SetBinContent(9,52367.36);
   c1lep4jin2bin_lep0_eta_ttbarlight__268->SetBinContent(10,20064.87);
   c1lep4jin2bin_lep0_eta_ttbarlight__268->SetBinContent(11,1586.02);
   c1lep4jin2bin_lep0_eta_ttbarlight__268->SetBinError(1,92.10312);
   c1lep4jin2bin_lep0_eta_ttbarlight__268->SetBinError(2,117.4717);
   c1lep4jin2bin_lep0_eta_ttbarlight__268->SetBinError(3,173.7043);
   c1lep4jin2bin_lep0_eta_ttbarlight__268->SetBinError(4,169.279);
   c1lep4jin2bin_lep0_eta_ttbarlight__268->SetBinError(5,225.1935);
   c1lep4jin2bin_lep0_eta_ttbarlight__268->SetBinError(6,183.3146);
   c1lep4jin2bin_lep0_eta_ttbarlight__268->SetBinError(7,213.1737);
   c1lep4jin2bin_lep0_eta_ttbarlight__268->SetBinError(8,155.4496);
   c1lep4jin2bin_lep0_eta_ttbarlight__268->SetBinError(9,144.1449);
   c1lep4jin2bin_lep0_eta_ttbarlight__268->SetBinError(10,89.55354);
   c1lep4jin2bin_lep0_eta_ttbarlight__268->SetBinError(11,24.5977);
   c1lep4jin2bin_lep0_eta_ttbarlight__268->SetEntries(2516401);
   c1lep4jin2bin_lep0_eta_ttbarlight__268->SetDirectory(0);
   c1lep4jin2bin_lep0_eta_ttbarlight__268->SetStats(0);
   c1lep4jin2bin_lep0_eta_ttbarlight__268->SetMarkerStyle(20);
   c1lep4jin2bin_lep0_eta_ttbarlight__268->SetMarkerSize(1.2);
   c1lep4jin2bin_lep0_eta_ttbarlight__268->GetXaxis()->SetTitle("Lepton #eta");
   c1lep4jin2bin_lep0_eta_ttbarlight__268->GetXaxis()->SetRange(1,30);
   c1lep4jin2bin_lep0_eta_ttbarlight__268->GetXaxis()->SetLabelFont(43);
   c1lep4jin2bin_lep0_eta_ttbarlight__268->GetXaxis()->SetLabelSize(21);
   c1lep4jin2bin_lep0_eta_ttbarlight__268->GetXaxis()->SetTitleSize(21);
   c1lep4jin2bin_lep0_eta_ttbarlight__268->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_lep0_eta_ttbarlight__268->GetXaxis()->SetTitleFont(43);
   c1lep4jin2bin_lep0_eta_ttbarlight__268->GetYaxis()->SetLabelFont(43);
   c1lep4jin2bin_lep0_eta_ttbarlight__268->GetYaxis()->SetLabelSize(21);
   c1lep4jin2bin_lep0_eta_ttbarlight__268->GetYaxis()->SetTitleSize(21);
   c1lep4jin2bin_lep0_eta_ttbarlight__268->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_lep0_eta_ttbarlight__268->GetYaxis()->SetTitleFont(43);
   c1lep4jin2bin_lep0_eta_ttbarlight__268->GetZaxis()->SetLabelFont(43);
   c1lep4jin2bin_lep0_eta_ttbarlight__268->GetZaxis()->SetLabelSize(21);
   c1lep4jin2bin_lep0_eta_ttbarlight__268->GetZaxis()->SetTitleSize(21);
   c1lep4jin2bin_lep0_eta_ttbarlight__268->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jin2bin_lep0_eta_ttbarlight,"");
   Double_t xAxis299[11] = {-2.5, -2, -1.5, -1, -0.5, 0, 0.5, 1, 1.5, 2, 2.5}; 
   
   TH1D *c1lep4jin2bin_lep0_eta_uHcW__269 = new TH1D("c1lep4jin2bin_lep0_eta_uHcW__269","",10, xAxis299);
   c1lep4jin2bin_lep0_eta_uHcW__269->SetBinContent(1,404.037);
   c1lep4jin2bin_lep0_eta_uHcW__269->SetBinContent(2,635.0305);
   c1lep4jin2bin_lep0_eta_uHcW__269->SetBinContent(3,1323.943);
   c1lep4jin2bin_lep0_eta_uHcW__269->SetBinContent(4,1272.725);
   c1lep4jin2bin_lep0_eta_uHcW__269->SetBinContent(5,2224.966);
   c1lep4jin2bin_lep0_eta_uHcW__269->SetBinContent(6,1447.68);
   c1lep4jin2bin_lep0_eta_uHcW__269->SetBinContent(7,2046.862);
   c1lep4jin2bin_lep0_eta_uHcW__269->SetBinContent(8,1006.156);
   c1lep4jin2bin_lep0_eta_uHcW__269->SetBinContent(9,934.8196);
   c1lep4jin2bin_lep0_eta_uHcW__269->SetBinContent(10,344.0921);
   c1lep4jin2bin_lep0_eta_uHcW__269->SetBinContent(11,24.76147);
   c1lep4jin2bin_lep0_eta_uHcW__269->SetBinError(1,20.75067);
   c1lep4jin2bin_lep0_eta_uHcW__269->SetBinError(2,25.52248);
   c1lep4jin2bin_lep0_eta_uHcW__269->SetBinError(3,37.59009);
   c1lep4jin2bin_lep0_eta_uHcW__269->SetBinError(4,35.51847);
   c1lep4jin2bin_lep0_eta_uHcW__269->SetBinError(5,48.16216);
   c1lep4jin2bin_lep0_eta_uHcW__269->SetBinError(6,40.93291);
   c1lep4jin2bin_lep0_eta_uHcW__269->SetBinError(7,45.90801);
   c1lep4jin2bin_lep0_eta_uHcW__269->SetBinError(8,32.45354);
   c1lep4jin2bin_lep0_eta_uHcW__269->SetBinError(9,31.53695);
   c1lep4jin2bin_lep0_eta_uHcW__269->SetBinError(10,18.54247);
   c1lep4jin2bin_lep0_eta_uHcW__269->SetBinError(11,4.869509);
   c1lep4jin2bin_lep0_eta_uHcW__269->SetEntries(70178);
   c1lep4jin2bin_lep0_eta_uHcW__269->SetDirectory(0);
   c1lep4jin2bin_lep0_eta_uHcW__269->SetStats(0);
   c1lep4jin2bin_lep0_eta_uHcW__269->SetFillColor(2);
   c1lep4jin2bin_lep0_eta_uHcW__269->SetLineColor(2);
   c1lep4jin2bin_lep0_eta_uHcW__269->SetMarkerStyle(20);
   c1lep4jin2bin_lep0_eta_uHcW__269->SetMarkerSize(1.2);
   c1lep4jin2bin_lep0_eta_uHcW__269->GetXaxis()->SetTitle("Lepton #eta");
   c1lep4jin2bin_lep0_eta_uHcW__269->GetXaxis()->SetRange(1,30);
   c1lep4jin2bin_lep0_eta_uHcW__269->GetXaxis()->SetLabelFont(43);
   c1lep4jin2bin_lep0_eta_uHcW__269->GetXaxis()->SetLabelSize(21);
   c1lep4jin2bin_lep0_eta_uHcW__269->GetXaxis()->SetTitleSize(21);
   c1lep4jin2bin_lep0_eta_uHcW__269->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_lep0_eta_uHcW__269->GetXaxis()->SetTitleFont(43);
   c1lep4jin2bin_lep0_eta_uHcW__269->GetYaxis()->SetLabelFont(43);
   c1lep4jin2bin_lep0_eta_uHcW__269->GetYaxis()->SetLabelSize(21);
   c1lep4jin2bin_lep0_eta_uHcW__269->GetYaxis()->SetTitleSize(21);
   c1lep4jin2bin_lep0_eta_uHcW__269->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_lep0_eta_uHcW__269->GetYaxis()->SetTitleFont(43);
   c1lep4jin2bin_lep0_eta_uHcW__269->GetZaxis()->SetLabelFont(43);
   c1lep4jin2bin_lep0_eta_uHcW__269->GetZaxis()->SetLabelSize(21);
   c1lep4jin2bin_lep0_eta_uHcW__269->GetZaxis()->SetTitleSize(21);
   c1lep4jin2bin_lep0_eta_uHcW__269->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jin2bin_lep0_eta_uHcW,"");
   h_stack->Draw("hist same");
   
   Double_t g_totErr_fx3119[10] = {
   -2.25,
   -1.75,
   -1.25,
   -0.75,
   -0.25,
   0.25,
   0.75,
   1.25,
   1.75,
   2.25};
   Double_t g_totErr_fy3119[10] = {
   35078.72,
   52079.09,
   106452.8,
   100449,
   173555,
   116757.2,
   157711.9,
   83347.13,
   77747.21,
   32089.26};
   Double_t g_totErr_felx3119[10] = {
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25};
   Double_t g_totErr_fely3119[10] = {
   4031.691,
   6159.75,
   13082.1,
   12588.32,
   21902.01,
   14588.25,
   19814.21,
   10227.27,
   9171.626,
   3737.505};
   Double_t g_totErr_fehx3119[10] = {
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25};
   Double_t g_totErr_fehy3119[10] = {
   4031.691,
   6159.75,
   13082.1,
   12588.32,
   21902.01,
   14588.25,
   19814.21,
   10227.27,
   9171.626,
   3737.505};
   grae = new TGraphAsymmErrors(10,g_totErr_fx3119,g_totErr_fy3119,g_totErr_felx3119,g_totErr_fehx3119,g_totErr_fely3119,g_totErr_fehy3119);
   grae->SetName("g_totErr");
   grae->SetTitle("");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(3354);
   grae->SetLineColor(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0);
   
   TH1F *Graph_g_totErr3119 = new TH1F("Graph_g_totErr3119","",100,-3,3);
   Graph_g_totErr3119->SetMinimum(11641.23);
   Graph_g_totErr3119->SetMaximum(212167.5);
   Graph_g_totErr3119->SetDirectory(0);
   Graph_g_totErr3119->SetStats(0);
   Graph_g_totErr3119->SetLineWidth(2);
   Graph_g_totErr3119->SetMarkerStyle(20);
   Graph_g_totErr3119->SetMarkerSize(1.2);
   Graph_g_totErr3119->GetXaxis()->SetLabelFont(43);
   Graph_g_totErr3119->GetXaxis()->SetLabelSize(21);
   Graph_g_totErr3119->GetXaxis()->SetTitleSize(21);
   Graph_g_totErr3119->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_totErr3119->GetXaxis()->SetTitleFont(43);
   Graph_g_totErr3119->GetYaxis()->SetLabelFont(43);
   Graph_g_totErr3119->GetYaxis()->SetLabelSize(21);
   Graph_g_totErr3119->GetYaxis()->SetTitleSize(21);
   Graph_g_totErr3119->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_totErr3119->GetYaxis()->SetTitleFont(43);
   Graph_g_totErr3119->GetZaxis()->SetLabelFont(43);
   Graph_g_totErr3119->GetZaxis()->SetLabelSize(21);
   Graph_g_totErr3119->GetZaxis()->SetTitleSize(21);
   Graph_g_totErr3119->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_totErr3119);
   
   grae->Draw("e2");
   
   Double_t Graph_from_c1lep4jin2bin_lep0_eta_Data_fx3120[10] = {
   -2.25,
   -1.75,
   -1.25,
   -0.75,
   -0.25,
   0.25,
   0.75,
   1.25,
   1.75,
   2.25};
   Double_t Graph_from_c1lep4jin2bin_lep0_eta_Data_fy3120[10] = {
   31977,
   48490,
   101226,
   97237,
   170533,
   112347,
   154497,
   78744,
   72021,
   29567};
   Double_t Graph_from_c1lep4jin2bin_lep0_eta_Data_felx3120[10] = {
   0.2495,
   0.2495,
   0.2495,
   0.2495,
   0.2495,
   0.2495,
   0.2495,
   0.2495,
   0.2495,
   0.2495};
   Double_t Graph_from_c1lep4jin2bin_lep0_eta_Data_fely3120[10] = {
   178.8211,
   220.2045,
   318.1603,
   311.8285,
   412.9564,
   335.182,
   393.0611,
   280.6136,
   268.3673,
   171.9506};
   Double_t Graph_from_c1lep4jin2bin_lep0_eta_Data_fehx3120[10] = {
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25};
   Double_t Graph_from_c1lep4jin2bin_lep0_eta_Data_fehy3120[10] = {
   178.8211,
   220.2045,
   318.1603,
   311.8285,
   412.9564,
   335.182,
   393.0611,
   280.6136,
   268.3673,
   171.9506};
   grae = new TGraphAsymmErrors(10,Graph_from_c1lep4jin2bin_lep0_eta_Data_fx3120,Graph_from_c1lep4jin2bin_lep0_eta_Data_fy3120,Graph_from_c1lep4jin2bin_lep0_eta_Data_felx3120,Graph_from_c1lep4jin2bin_lep0_eta_Data_fehx3120,Graph_from_c1lep4jin2bin_lep0_eta_Data_fely3120,Graph_from_c1lep4jin2bin_lep0_eta_Data_fehy3120);
   grae->SetName("Graph_from_c1lep4jin2bin_lep0_eta_Data");
   grae->SetTitle("");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_c1lep4jin2bin_lep0_eta_Data3120 = new TH1F("Graph_Graph_from_c1lep4jin2bin_lep0_eta_Data3120","",100,-2.99945,2.99995);
   Graph_Graph_from_c1lep4jin2bin_lep0_eta_Data3120->SetMinimum(15239.96);
   Graph_Graph_from_c1lep4jin2bin_lep0_eta_Data3120->SetMaximum(185101);
   Graph_Graph_from_c1lep4jin2bin_lep0_eta_Data3120->SetDirectory(0);
   Graph_Graph_from_c1lep4jin2bin_lep0_eta_Data3120->SetStats(0);
   Graph_Graph_from_c1lep4jin2bin_lep0_eta_Data3120->SetLineWidth(2);
   Graph_Graph_from_c1lep4jin2bin_lep0_eta_Data3120->SetMarkerStyle(20);
   Graph_Graph_from_c1lep4jin2bin_lep0_eta_Data3120->SetMarkerSize(1.2);
   Graph_Graph_from_c1lep4jin2bin_lep0_eta_Data3120->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep4jin2bin_lep0_eta_Data3120->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep4jin2bin_lep0_eta_Data3120->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep4jin2bin_lep0_eta_Data3120->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep4jin2bin_lep0_eta_Data3120->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep4jin2bin_lep0_eta_Data3120->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep4jin2bin_lep0_eta_Data3120->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep4jin2bin_lep0_eta_Data3120->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep4jin2bin_lep0_eta_Data3120->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep4jin2bin_lep0_eta_Data3120->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep4jin2bin_lep0_eta_Data3120->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep4jin2bin_lep0_eta_Data3120->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep4jin2bin_lep0_eta_Data3120->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep4jin2bin_lep0_eta_Data3120->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_c1lep4jin2bin_lep0_eta_Data3120);
   
   grae->Draw("ep1 ");
   Double_t xAxis300[11] = {-2.5, -2, -1.5, -1, -0.5, 0, 0.5, 1, 1.5, 2, 2.5}; 
   
   TH1D *h_dummy_copy__270 = new TH1D("h_dummy_copy__270","",10, xAxis300);
   h_dummy_copy__270->SetEntries(1.123265e+07);
   h_dummy_copy__270->SetDirectory(0);
   h_dummy_copy__270->SetStats(0);
   h_dummy_copy__270->SetMarkerStyle(20);
   h_dummy_copy__270->SetMarkerSize(1.2);
   h_dummy_copy__270->GetXaxis()->SetTitle("lepton #eta");
   h_dummy_copy__270->GetXaxis()->SetRange(1,30);
   h_dummy_copy__270->GetXaxis()->SetLabelFont(43);
   h_dummy_copy__270->GetXaxis()->SetLabelSize(21);
   h_dummy_copy__270->GetXaxis()->SetTitleSize(21);
   h_dummy_copy__270->GetXaxis()->SetTitleOffset(1.4);
   h_dummy_copy__270->GetXaxis()->SetTitleFont(43);
   h_dummy_copy__270->GetYaxis()->SetTitle("Events");
   h_dummy_copy__270->GetYaxis()->SetLabelFont(43);
   h_dummy_copy__270->GetYaxis()->SetLabelSize(16.8);
   h_dummy_copy__270->GetYaxis()->SetTitleSize(21);
   h_dummy_copy__270->GetYaxis()->SetTitleOffset(2.4);
   h_dummy_copy__270->GetYaxis()->SetTitleFont(43);
   h_dummy_copy__270->GetZaxis()->SetLabelFont(43);
   h_dummy_copy__270->GetZaxis()->SetLabelSize(21);
   h_dummy_copy__270->GetZaxis()->SetTitleSize(21);
   h_dummy_copy__270->GetZaxis()->SetTitleFont(43);
   h_dummy_copy__270->Draw("sameaxis");
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
   TLegendEntry *entry=leg->AddEntry("c1lep4jin2bin_lep0_eta_Data","Data","lep");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep4jin2bin_lep0_eta_uHcW","t#bar{t}#rightarrowWbHc (BR=1%)","f");
   entry->SetFillColor(2);
   entry->SetFillStyle(1001);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep4jin2bin_lep0_eta_ttbarlight","t#bar{t}+light","f");
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep4jin2bin_lep0_eta_ttbarcc","t#bar{t}+cc","f");

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
   entry=leg->AddEntry("c1lep4jin2bin_lep0_eta_ttbarbb","t#bar{t}+bb","f");

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
   entry=leg->AddEntry("c1lep4jin2bin_lep0_eta_topEW","Non-t#bar{t}","f");

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
   c_c1lep4jin2bin_lep0_eta->cd();
   c_c1lep4jin2bin_lep0_eta->Modified();
   c_c1lep4jin2bin_lep0_eta->cd();
   c_c1lep4jin2bin_lep0_eta->SetSelected(c_c1lep4jin2bin_lep0_eta);
}
