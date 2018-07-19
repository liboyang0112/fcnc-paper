void c1lep4jex3bex_jets_pt()
{
//=========Macro generated from canvas: c_c1lep4jex3bex_jets_pt/c_c1lep4jex3bex_jets_pt
//=========  (Thu Jul 19 17:38:06 2018) by ROOT version6.04/14
   TCanvas *c_c1lep4jex3bex_jets_pt = new TCanvas("c_c1lep4jex3bex_jets_pt", "c_c1lep4jex3bex_jets_pt",0,0,600,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c_c1lep4jex3bex_jets_pt->SetHighLightColor(2);
   c_c1lep4jex3bex_jets_pt->Range(0,0,1,1);
   c_c1lep4jex3bex_jets_pt->SetFillColor(0);
   c_c1lep4jex3bex_jets_pt->SetBorderMode(0);
   c_c1lep4jex3bex_jets_pt->SetBorderSize(2);
   c_c1lep4jex3bex_jets_pt->SetTickx(1);
   c_c1lep4jex3bex_jets_pt->SetTicky(1);
   c_c1lep4jex3bex_jets_pt->SetLeftMargin(0.16);
   c_c1lep4jex3bex_jets_pt->SetRightMargin(0.05);
   c_c1lep4jex3bex_jets_pt->SetTopMargin(0.05);
   c_c1lep4jex3bex_jets_pt->SetBottomMargin(0.16);
   c_c1lep4jex3bex_jets_pt->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0,1,0.28);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-26.85185,-0.0873016,343.5185,1.5);
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
   Double_t xAxis261[7] = {25, 75, 125, 175, 225, 275, 325}; 
   
   TH1D *h_dummy2__235 = new TH1D("h_dummy2__235","Data/MC",6, xAxis261);
   h_dummy2__235->SetMinimum(0.5);
   h_dummy2__235->SetMaximum(1.5);
   h_dummy2__235->SetEntries(1.168362e+07);
   h_dummy2__235->SetDirectory(0);
   h_dummy2__235->SetStats(0);
   h_dummy2__235->SetMarkerStyle(20);
   h_dummy2__235->SetMarkerSize(1.2);
   h_dummy2__235->GetXaxis()->SetTitle("jets p_{T} [GeV]");
   h_dummy2__235->GetXaxis()->SetRange(1,100);
   h_dummy2__235->GetXaxis()->SetLabelFont(43);
   h_dummy2__235->GetXaxis()->SetLabelOffset(0.025);
   h_dummy2__235->GetXaxis()->SetLabelSize(16.8);
   h_dummy2__235->GetXaxis()->SetTitleSize(21);
   h_dummy2__235->GetXaxis()->SetTitleOffset(5.05);
   h_dummy2__235->GetXaxis()->SetTitleFont(43);
   h_dummy2__235->GetYaxis()->SetTitle("Data / Bkg");
   h_dummy2__235->GetYaxis()->SetNdivisions(-504);
   h_dummy2__235->GetYaxis()->SetLabelFont(43);
   h_dummy2__235->GetYaxis()->SetLabelOffset(0.02);
   h_dummy2__235->GetYaxis()->SetLabelSize(16.8);
   h_dummy2__235->GetYaxis()->SetTitleSize(21);
   h_dummy2__235->GetYaxis()->SetTitleOffset(2.4);
   h_dummy2__235->GetYaxis()->SetTitleFont(43);
   h_dummy2__235->GetZaxis()->SetLabelFont(43);
   h_dummy2__235->GetZaxis()->SetLabelSize(21);
   h_dummy2__235->GetZaxis()->SetTitleSize(21);
   h_dummy2__235->GetZaxis()->SetTitleFont(43);
   h_dummy2__235->Draw("HIST");
   
   Double_t Graph_from_h_ratio_fx3105[6] = {
   50,
   100,
   150,
   200,
   250,
   300};
   Double_t Graph_from_h_ratio_fy3105[6] = {
   1.115055,
   1.109137,
   1.078668,
   1.192528,
   1.154969,
   1.268252};
   Double_t Graph_from_h_ratio_felx3105[6] = {
   24.95,
   24.95,
   24.95,
   24.95,
   24.95,
   24.95};
   Double_t Graph_from_h_ratio_fely3105[6] = {
   0.006369975,
   0.01124709,
   0.01974973,
   0.03772991,
   0.06012528,
   0.09225176};
   Double_t Graph_from_h_ratio_fehx3105[6] = {
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t Graph_from_h_ratio_fehy3105[6] = {
   0.006369975,
   0.01124709,
   0.01974973,
   0.03772991,
   0.06012528,
   0.09225176};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(6,Graph_from_h_ratio_fx3105,Graph_from_h_ratio_fy3105,Graph_from_h_ratio_felx3105,Graph_from_h_ratio_fehx3105,Graph_from_h_ratio_fely3105,Graph_from_h_ratio_fehy3105);
   grae->SetName("Graph_from_h_ratio");
   grae->SetTitle("");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(24);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_h_ratio3105 = new TH1F("Graph_Graph_from_h_ratio3105","",100,0,354.995);
   Graph_Graph_from_h_ratio3105->SetMinimum(1.02876);
   Graph_Graph_from_h_ratio3105->SetMaximum(1.390662);
   Graph_Graph_from_h_ratio3105->SetDirectory(0);
   Graph_Graph_from_h_ratio3105->SetStats(0);
   Graph_Graph_from_h_ratio3105->SetLineWidth(2);
   Graph_Graph_from_h_ratio3105->SetMarkerStyle(20);
   Graph_Graph_from_h_ratio3105->SetMarkerSize(1.2);
   Graph_Graph_from_h_ratio3105->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3105->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3105->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3105->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3105->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3105->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3105->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3105->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3105->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3105->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3105->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3105->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3105->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3105->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_h_ratio3105);
   
   grae->Draw("pe0");
   TLine *line = new TLine(25,1,325,1);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t g_ratio2_fx3106[6] = {
   50,
   100,
   150,
   200,
   250,
   300};
   Double_t g_ratio2_fy3106[6] = {
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t g_ratio2_felx3106[6] = {
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t g_ratio2_fely3106[6] = {
   0.1957049,
   0.1883333,
   0.1899864,
   0.1981913,
   0.2133739,
   0.2259395};
   Double_t g_ratio2_fehx3106[6] = {
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t g_ratio2_fehy3106[6] = {
   0.1957049,
   0.1883333,
   0.1899864,
   0.1981913,
   0.2133739,
   0.2259395};
   grae = new TGraphAsymmErrors(6,g_ratio2_fx3106,g_ratio2_fy3106,g_ratio2_felx3106,g_ratio2_fehx3106,g_ratio2_fely3106,g_ratio2_fehy3106);
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
   
   TH1F *Graph_g_ratio23106 = new TH1F("Graph_g_ratio23106","",100,0,355);
   Graph_g_ratio23106->SetMinimum(0.7288726);
   Graph_g_ratio23106->SetMaximum(1.271127);
   Graph_g_ratio23106->SetDirectory(0);
   Graph_g_ratio23106->SetStats(0);
   Graph_g_ratio23106->SetLineWidth(2);
   Graph_g_ratio23106->SetMarkerStyle(20);
   Graph_g_ratio23106->SetMarkerSize(1.2);
   Graph_g_ratio23106->GetXaxis()->SetLabelFont(43);
   Graph_g_ratio23106->GetXaxis()->SetLabelSize(21);
   Graph_g_ratio23106->GetXaxis()->SetTitleSize(21);
   Graph_g_ratio23106->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23106->GetXaxis()->SetTitleFont(43);
   Graph_g_ratio23106->GetYaxis()->SetLabelFont(43);
   Graph_g_ratio23106->GetYaxis()->SetLabelSize(21);
   Graph_g_ratio23106->GetYaxis()->SetTitleSize(21);
   Graph_g_ratio23106->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23106->GetYaxis()->SetTitleFont(43);
   Graph_g_ratio23106->GetZaxis()->SetLabelFont(43);
   Graph_g_ratio23106->GetZaxis()->SetLabelSize(21);
   Graph_g_ratio23106->GetZaxis()->SetTitleSize(21);
   Graph_g_ratio23106->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_ratio23106);
   
   grae->Draw("e2");
   Double_t xAxis262[7] = {25, 75, 125, 175, 225, 275, 325}; 
   
   TH1D *h_dummy2_copy__236 = new TH1D("h_dummy2_copy__236","Data/MC",6, xAxis262);
   h_dummy2_copy__236->SetMinimum(0.5);
   h_dummy2_copy__236->SetMaximum(1.5);
   h_dummy2_copy__236->SetEntries(1.168362e+07);
   h_dummy2_copy__236->SetDirectory(0);
   h_dummy2_copy__236->SetStats(0);
   h_dummy2_copy__236->SetMarkerStyle(20);
   h_dummy2_copy__236->SetMarkerSize(1.2);
   h_dummy2_copy__236->GetXaxis()->SetTitle("jets p_{T} [GeV]");
   h_dummy2_copy__236->GetXaxis()->SetRange(1,100);
   h_dummy2_copy__236->GetXaxis()->SetLabelFont(43);
   h_dummy2_copy__236->GetXaxis()->SetLabelOffset(0.025);
   h_dummy2_copy__236->GetXaxis()->SetLabelSize(16.8);
   h_dummy2_copy__236->GetXaxis()->SetTitleSize(21);
   h_dummy2_copy__236->GetXaxis()->SetTitleOffset(5.05);
   h_dummy2_copy__236->GetXaxis()->SetTitleFont(43);
   h_dummy2_copy__236->GetYaxis()->SetTitle("Data / Bkg");
   h_dummy2_copy__236->GetYaxis()->SetNdivisions(-504);
   h_dummy2_copy__236->GetYaxis()->SetLabelFont(43);
   h_dummy2_copy__236->GetYaxis()->SetLabelOffset(0.02);
   h_dummy2_copy__236->GetYaxis()->SetLabelSize(16.8);
   h_dummy2_copy__236->GetYaxis()->SetTitleSize(21);
   h_dummy2_copy__236->GetYaxis()->SetTitleOffset(2.4);
   h_dummy2_copy__236->GetYaxis()->SetTitleFont(43);
   h_dummy2_copy__236->GetZaxis()->SetLabelFont(43);
   h_dummy2_copy__236->GetZaxis()->SetLabelSize(21);
   h_dummy2_copy__236->GetZaxis()->SetTitleSize(21);
   h_dummy2_copy__236->GetZaxis()->SetTitleFont(43);
   h_dummy2_copy__236->Draw("sameaxis");
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
   c_c1lep4jex3bex_jets_pt->cd();
  
// ------------>Primitives in pad: pad0
   TPad *pad0 = new TPad("pad0", "pad0",0,0.2,1,1);
   pad0->Draw();
   pad0->cd();
   pad0->Range(-26.85185,-6525.964,343.5185,58733.67);
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
   Double_t xAxis263[7] = {25, 75, 125, 175, 225, 275, 325}; 
   
   TH1D *h_dummy__237 = new TH1D("h_dummy__237","",6, xAxis263);
   h_dummy__237->SetMinimum(0);
   h_dummy__237->SetMaximum(55470.69);
   h_dummy__237->SetEntries(1.168362e+07);
   h_dummy__237->SetDirectory(0);
   h_dummy__237->SetStats(0);
   h_dummy__237->SetMarkerStyle(20);
   h_dummy__237->SetMarkerSize(1.2);
   h_dummy__237->GetXaxis()->SetRange(1,100);
   h_dummy__237->GetXaxis()->SetLabelFont(43);
   h_dummy__237->GetXaxis()->SetLabelSize(0);
   h_dummy__237->GetXaxis()->SetTitleSize(21);
   h_dummy__237->GetXaxis()->SetTitleOffset(1.4);
   h_dummy__237->GetXaxis()->SetTitleFont(43);
   h_dummy__237->GetYaxis()->SetTitle("Events / 50 GeV");
   h_dummy__237->GetYaxis()->SetLabelFont(43);
   h_dummy__237->GetYaxis()->SetLabelSize(16.8);
   h_dummy__237->GetYaxis()->SetTitleSize(21);
   h_dummy__237->GetYaxis()->SetTitleOffset(2.4);
   h_dummy__237->GetYaxis()->SetTitleFont(43);
   h_dummy__237->GetZaxis()->SetLabelFont(43);
   h_dummy__237->GetZaxis()->SetLabelSize(21);
   h_dummy__237->GetZaxis()->SetTitleSize(21);
   h_dummy__237->GetZaxis()->SetTitleFont(43);
   h_dummy__237->Draw("HIST");
   
   THStack *h_stack = new THStack();
   h_stack->SetName("h_stack");
   h_stack->SetTitle("h_stack");
   Double_t xAxis264[7] = {25, 75, 125, 175, 225, 275, 325}; 
   
   TH1F *h_stack_stack_27 = new TH1F("h_stack_stack_27","h_stack",6, xAxis264);
   h_stack_stack_27->SetMinimum(0);
   h_stack_stack_27->SetMaximum(32660.3);
   h_stack_stack_27->SetDirectory(0);
   h_stack_stack_27->SetStats(0);
   h_stack_stack_27->SetLineWidth(2);
   h_stack_stack_27->SetMarkerStyle(20);
   h_stack_stack_27->SetMarkerSize(1.2);
   h_stack_stack_27->GetXaxis()->SetLabelFont(43);
   h_stack_stack_27->GetXaxis()->SetLabelSize(21);
   h_stack_stack_27->GetXaxis()->SetTitleSize(21);
   h_stack_stack_27->GetXaxis()->SetTitleOffset(1.4);
   h_stack_stack_27->GetXaxis()->SetTitleFont(43);
   h_stack_stack_27->GetYaxis()->SetLabelFont(43);
   h_stack_stack_27->GetYaxis()->SetLabelSize(21);
   h_stack_stack_27->GetYaxis()->SetTitleSize(21);
   h_stack_stack_27->GetYaxis()->SetTitleOffset(1.4);
   h_stack_stack_27->GetYaxis()->SetTitleFont(43);
   h_stack_stack_27->GetZaxis()->SetLabelFont(43);
   h_stack_stack_27->GetZaxis()->SetLabelSize(21);
   h_stack_stack_27->GetZaxis()->SetTitleSize(21);
   h_stack_stack_27->GetZaxis()->SetTitleFont(43);
   h_stack->SetHistogram(h_stack_stack_27);
   
   Double_t xAxis265[7] = {25, 75, 125, 175, 225, 275, 325}; 
   
   TH1D *c1lep4jex3bex_jets_pt_topEW__238 = new TH1D("c1lep4jex3bex_jets_pt_topEW__238","",6, xAxis265);
   c1lep4jex3bex_jets_pt_topEW__238->SetBinContent(1,5113.769);
   c1lep4jex3bex_jets_pt_topEW__238->SetBinContent(2,1499.377);
   c1lep4jex3bex_jets_pt_topEW__238->SetBinContent(3,495.4056);
   c1lep4jex3bex_jets_pt_topEW__238->SetBinContent(4,125.595);
   c1lep4jex3bex_jets_pt_topEW__238->SetBinContent(5,40.9878);
   c1lep4jex3bex_jets_pt_topEW__238->SetBinContent(6,30.53917);
   c1lep4jex3bex_jets_pt_topEW__238->SetBinContent(7,34.78454);
   c1lep4jex3bex_jets_pt_topEW__238->SetBinError(1,152.3606);
   c1lep4jex3bex_jets_pt_topEW__238->SetBinError(2,84.40035);
   c1lep4jex3bex_jets_pt_topEW__238->SetBinError(3,45.79618);
   c1lep4jex3bex_jets_pt_topEW__238->SetBinError(4,15.14415);
   c1lep4jex3bex_jets_pt_topEW__238->SetBinError(5,3.683223);
   c1lep4jex3bex_jets_pt_topEW__238->SetBinError(6,5.653642);
   c1lep4jex3bex_jets_pt_topEW__238->SetBinError(7,8.659579);
   c1lep4jex3bex_jets_pt_topEW__238->SetEntries(1.158001e+07);
   c1lep4jex3bex_jets_pt_topEW__238->SetDirectory(0);
   c1lep4jex3bex_jets_pt_topEW__238->SetStats(0);

   ci = TColor::GetColor("#66cc66");
   c1lep4jex3bex_jets_pt_topEW__238->SetFillColor(ci);
   c1lep4jex3bex_jets_pt_topEW__238->SetMarkerStyle(20);
   c1lep4jex3bex_jets_pt_topEW__238->SetMarkerSize(1.2);
   c1lep4jex3bex_jets_pt_topEW__238->GetXaxis()->SetTitle("Jets p_{T} [GeV]");
   c1lep4jex3bex_jets_pt_topEW__238->GetXaxis()->SetRange(1,100);
   c1lep4jex3bex_jets_pt_topEW__238->GetXaxis()->SetLabelFont(43);
   c1lep4jex3bex_jets_pt_topEW__238->GetXaxis()->SetLabelSize(21);
   c1lep4jex3bex_jets_pt_topEW__238->GetXaxis()->SetTitleSize(21);
   c1lep4jex3bex_jets_pt_topEW__238->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_jets_pt_topEW__238->GetXaxis()->SetTitleFont(43);
   c1lep4jex3bex_jets_pt_topEW__238->GetYaxis()->SetLabelFont(43);
   c1lep4jex3bex_jets_pt_topEW__238->GetYaxis()->SetLabelSize(21);
   c1lep4jex3bex_jets_pt_topEW__238->GetYaxis()->SetTitleSize(21);
   c1lep4jex3bex_jets_pt_topEW__238->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_jets_pt_topEW__238->GetYaxis()->SetTitleFont(43);
   c1lep4jex3bex_jets_pt_topEW__238->GetZaxis()->SetLabelFont(43);
   c1lep4jex3bex_jets_pt_topEW__238->GetZaxis()->SetLabelSize(21);
   c1lep4jex3bex_jets_pt_topEW__238->GetZaxis()->SetTitleSize(21);
   c1lep4jex3bex_jets_pt_topEW__238->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jex3bex_jets_pt_topEW,"");
   Double_t xAxis266[7] = {25, 75, 125, 175, 225, 275, 325}; 
   
   TH1D *c1lep4jex3bex_jets_pt_ttbarbb__239 = new TH1D("c1lep4jex3bex_jets_pt_ttbarbb__239","",6, xAxis266);
   c1lep4jex3bex_jets_pt_ttbarbb__239->SetBinContent(1,7479.428);
   c1lep4jex3bex_jets_pt_ttbarbb__239->SetBinContent(2,2641.129);
   c1lep4jex3bex_jets_pt_ttbarbb__239->SetBinContent(3,884.4426);
   c1lep4jex3bex_jets_pt_ttbarbb__239->SetBinContent(4,320.075);
   c1lep4jex3bex_jets_pt_ttbarbb__239->SetBinContent(5,126.2914);
   c1lep4jex3bex_jets_pt_ttbarbb__239->SetBinContent(6,61.46196);
   c1lep4jex3bex_jets_pt_ttbarbb__239->SetBinContent(7,73.63367);
   c1lep4jex3bex_jets_pt_ttbarbb__239->SetBinError(1,56.52407);
   c1lep4jex3bex_jets_pt_ttbarbb__239->SetBinError(2,33.27308);
   c1lep4jex3bex_jets_pt_ttbarbb__239->SetBinError(3,19.99855);
   c1lep4jex3bex_jets_pt_ttbarbb__239->SetBinError(4,12.84251);
   c1lep4jex3bex_jets_pt_ttbarbb__239->SetBinError(5,7.39129);
   c1lep4jex3bex_jets_pt_ttbarbb__239->SetBinError(6,4.631675);
   c1lep4jex3bex_jets_pt_ttbarbb__239->SetBinError(7,6.699459);
   c1lep4jex3bex_jets_pt_ttbarbb__239->SetEntries(40664);
   c1lep4jex3bex_jets_pt_ttbarbb__239->SetDirectory(0);
   c1lep4jex3bex_jets_pt_ttbarbb__239->SetStats(0);

   ci = TColor::GetColor("#6666cc");
   c1lep4jex3bex_jets_pt_ttbarbb__239->SetFillColor(ci);
   c1lep4jex3bex_jets_pt_ttbarbb__239->SetMarkerStyle(20);
   c1lep4jex3bex_jets_pt_ttbarbb__239->SetMarkerSize(1.2);
   c1lep4jex3bex_jets_pt_ttbarbb__239->GetXaxis()->SetTitle("Jets p_{T} [GeV]");
   c1lep4jex3bex_jets_pt_ttbarbb__239->GetXaxis()->SetRange(1,100);
   c1lep4jex3bex_jets_pt_ttbarbb__239->GetXaxis()->SetLabelFont(43);
   c1lep4jex3bex_jets_pt_ttbarbb__239->GetXaxis()->SetLabelSize(21);
   c1lep4jex3bex_jets_pt_ttbarbb__239->GetXaxis()->SetTitleSize(21);
   c1lep4jex3bex_jets_pt_ttbarbb__239->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_jets_pt_ttbarbb__239->GetXaxis()->SetTitleFont(43);
   c1lep4jex3bex_jets_pt_ttbarbb__239->GetYaxis()->SetLabelFont(43);
   c1lep4jex3bex_jets_pt_ttbarbb__239->GetYaxis()->SetLabelSize(21);
   c1lep4jex3bex_jets_pt_ttbarbb__239->GetYaxis()->SetTitleSize(21);
   c1lep4jex3bex_jets_pt_ttbarbb__239->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_jets_pt_ttbarbb__239->GetYaxis()->SetTitleFont(43);
   c1lep4jex3bex_jets_pt_ttbarbb__239->GetZaxis()->SetLabelFont(43);
   c1lep4jex3bex_jets_pt_ttbarbb__239->GetZaxis()->SetLabelSize(21);
   c1lep4jex3bex_jets_pt_ttbarbb__239->GetZaxis()->SetTitleSize(21);
   c1lep4jex3bex_jets_pt_ttbarbb__239->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jex3bex_jets_pt_ttbarbb,"");
   Double_t xAxis267[7] = {25, 75, 125, 175, 225, 275, 325}; 
   
   TH1D *c1lep4jex3bex_jets_pt_ttbarcc__240 = new TH1D("c1lep4jex3bex_jets_pt_ttbarcc__240","",6, xAxis267);
   c1lep4jex3bex_jets_pt_ttbarcc__240->SetBinContent(1,2802.828);
   c1lep4jex3bex_jets_pt_ttbarcc__240->SetBinContent(2,927.1316);
   c1lep4jex3bex_jets_pt_ttbarcc__240->SetBinContent(3,314.552);
   c1lep4jex3bex_jets_pt_ttbarcc__240->SetBinContent(4,88.91807);
   c1lep4jex3bex_jets_pt_ttbarcc__240->SetBinContent(5,38.40952);
   c1lep4jex3bex_jets_pt_ttbarcc__240->SetBinContent(6,21.99131);
   c1lep4jex3bex_jets_pt_ttbarcc__240->SetBinContent(7,16.77025);
   c1lep4jex3bex_jets_pt_ttbarcc__240->SetBinError(1,34.96471);
   c1lep4jex3bex_jets_pt_ttbarcc__240->SetBinError(2,19.67534);
   c1lep4jex3bex_jets_pt_ttbarcc__240->SetBinError(3,12.30918);
   c1lep4jex3bex_jets_pt_ttbarcc__240->SetBinError(4,5.802256);
   c1lep4jex3bex_jets_pt_ttbarcc__240->SetBinError(5,3.862576);
   c1lep4jex3bex_jets_pt_ttbarcc__240->SetBinError(6,3.314496);
   c1lep4jex3bex_jets_pt_ttbarcc__240->SetBinError(7,2.784178);
   c1lep4jex3bex_jets_pt_ttbarcc__240->SetEntries(12824);
   c1lep4jex3bex_jets_pt_ttbarcc__240->SetDirectory(0);
   c1lep4jex3bex_jets_pt_ttbarcc__240->SetStats(0);

   ci = TColor::GetColor("#ccccff");
   c1lep4jex3bex_jets_pt_ttbarcc__240->SetFillColor(ci);
   c1lep4jex3bex_jets_pt_ttbarcc__240->SetMarkerStyle(20);
   c1lep4jex3bex_jets_pt_ttbarcc__240->SetMarkerSize(1.2);
   c1lep4jex3bex_jets_pt_ttbarcc__240->GetXaxis()->SetTitle("Jets p_{T} [GeV]");
   c1lep4jex3bex_jets_pt_ttbarcc__240->GetXaxis()->SetRange(1,100);
   c1lep4jex3bex_jets_pt_ttbarcc__240->GetXaxis()->SetLabelFont(43);
   c1lep4jex3bex_jets_pt_ttbarcc__240->GetXaxis()->SetLabelSize(21);
   c1lep4jex3bex_jets_pt_ttbarcc__240->GetXaxis()->SetTitleSize(21);
   c1lep4jex3bex_jets_pt_ttbarcc__240->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_jets_pt_ttbarcc__240->GetXaxis()->SetTitleFont(43);
   c1lep4jex3bex_jets_pt_ttbarcc__240->GetYaxis()->SetLabelFont(43);
   c1lep4jex3bex_jets_pt_ttbarcc__240->GetYaxis()->SetLabelSize(21);
   c1lep4jex3bex_jets_pt_ttbarcc__240->GetYaxis()->SetTitleSize(21);
   c1lep4jex3bex_jets_pt_ttbarcc__240->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_jets_pt_ttbarcc__240->GetYaxis()->SetTitleFont(43);
   c1lep4jex3bex_jets_pt_ttbarcc__240->GetZaxis()->SetLabelFont(43);
   c1lep4jex3bex_jets_pt_ttbarcc__240->GetZaxis()->SetLabelSize(21);
   c1lep4jex3bex_jets_pt_ttbarcc__240->GetZaxis()->SetTitleSize(21);
   c1lep4jex3bex_jets_pt_ttbarcc__240->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jex3bex_jets_pt_ttbarcc,"");
   Double_t xAxis268[7] = {25, 75, 125, 175, 225, 275, 325}; 
   
   TH1D *c1lep4jex3bex_jets_pt_ttbarlight__241 = new TH1D("c1lep4jex3bex_jets_pt_ttbarlight__241","",6, xAxis268);
   c1lep4jex3bex_jets_pt_ttbarlight__241->SetBinContent(1,12084.24);
   c1lep4jex3bex_jets_pt_ttbarlight__241->SetBinContent(2,3700.444);
   c1lep4jex3bex_jets_pt_ttbarlight__241->SetBinContent(3,1071.047);
   c1lep4jex3bex_jets_pt_ttbarlight__241->SetBinContent(4,303.1283);
   c1lep4jex3bex_jets_pt_ttbarlight__241->SetBinContent(5,113.8004);
   c1lep4jex3bex_jets_pt_ttbarlight__241->SetBinContent(6,35.03158);
   c1lep4jex3bex_jets_pt_ttbarlight__241->SetBinContent(7,38.58103);
   c1lep4jex3bex_jets_pt_ttbarlight__241->SetBinError(1,80.17593);
   c1lep4jex3bex_jets_pt_ttbarlight__241->SetBinError(2,45.08188);
   c1lep4jex3bex_jets_pt_ttbarlight__241->SetBinError(3,23.47075);
   c1lep4jex3bex_jets_pt_ttbarlight__241->SetBinError(4,12.54005);
   c1lep4jex3bex_jets_pt_ttbarlight__241->SetBinError(5,8.290019);
   c1lep4jex3bex_jets_pt_ttbarlight__241->SetBinError(6,4.008526);
   c1lep4jex3bex_jets_pt_ttbarlight__241->SetBinError(7,4.05774);
   c1lep4jex3bex_jets_pt_ttbarlight__241->SetEntries(50120);
   c1lep4jex3bex_jets_pt_ttbarlight__241->SetDirectory(0);
   c1lep4jex3bex_jets_pt_ttbarlight__241->SetStats(0);
   c1lep4jex3bex_jets_pt_ttbarlight__241->SetMarkerStyle(20);
   c1lep4jex3bex_jets_pt_ttbarlight__241->SetMarkerSize(1.2);
   c1lep4jex3bex_jets_pt_ttbarlight__241->GetXaxis()->SetTitle("Jets p_{T} [GeV]");
   c1lep4jex3bex_jets_pt_ttbarlight__241->GetXaxis()->SetRange(1,100);
   c1lep4jex3bex_jets_pt_ttbarlight__241->GetXaxis()->SetLabelFont(43);
   c1lep4jex3bex_jets_pt_ttbarlight__241->GetXaxis()->SetLabelSize(21);
   c1lep4jex3bex_jets_pt_ttbarlight__241->GetXaxis()->SetTitleSize(21);
   c1lep4jex3bex_jets_pt_ttbarlight__241->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_jets_pt_ttbarlight__241->GetXaxis()->SetTitleFont(43);
   c1lep4jex3bex_jets_pt_ttbarlight__241->GetYaxis()->SetLabelFont(43);
   c1lep4jex3bex_jets_pt_ttbarlight__241->GetYaxis()->SetLabelSize(21);
   c1lep4jex3bex_jets_pt_ttbarlight__241->GetYaxis()->SetTitleSize(21);
   c1lep4jex3bex_jets_pt_ttbarlight__241->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_jets_pt_ttbarlight__241->GetYaxis()->SetTitleFont(43);
   c1lep4jex3bex_jets_pt_ttbarlight__241->GetZaxis()->SetLabelFont(43);
   c1lep4jex3bex_jets_pt_ttbarlight__241->GetZaxis()->SetLabelSize(21);
   c1lep4jex3bex_jets_pt_ttbarlight__241->GetZaxis()->SetTitleSize(21);
   c1lep4jex3bex_jets_pt_ttbarlight__241->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jex3bex_jets_pt_ttbarlight,"");
   Double_t xAxis269[7] = {25, 75, 125, 175, 225, 275, 325}; 
   
   TH1D *c1lep4jex3bex_jets_pt_uHcW__242 = new TH1D("c1lep4jex3bex_jets_pt_uHcW__242","",6, xAxis269);
   c1lep4jex3bex_jets_pt_uHcW__242->SetBinContent(1,3624.785);
   c1lep4jex3bex_jets_pt_uHcW__242->SetBinContent(2,985.3778);
   c1lep4jex3bex_jets_pt_uHcW__242->SetBinContent(3,292.5709);
   c1lep4jex3bex_jets_pt_uHcW__242->SetBinContent(4,86.01012);
   c1lep4jex3bex_jets_pt_uHcW__242->SetBinContent(5,32.35986);
   c1lep4jex3bex_jets_pt_uHcW__242->SetBinContent(6,13.34476);
   c1lep4jex3bex_jets_pt_uHcW__242->SetBinContent(7,10.13256);
   c1lep4jex3bex_jets_pt_uHcW__242->SetBinError(1,55.57514);
   c1lep4jex3bex_jets_pt_uHcW__242->SetBinError(2,28.38204);
   c1lep4jex3bex_jets_pt_uHcW__242->SetBinError(3,16.49941);
   c1lep4jex3bex_jets_pt_uHcW__242->SetBinError(4,8.10808);
   c1lep4jex3bex_jets_pt_uHcW__242->SetBinError(5,5.073037);
   c1lep4jex3bex_jets_pt_uHcW__242->SetBinError(6,3.43862);
   c1lep4jex3bex_jets_pt_uHcW__242->SetBinError(7,2.918868);
   c1lep4jex3bex_jets_pt_uHcW__242->SetEntries(22236);
   c1lep4jex3bex_jets_pt_uHcW__242->SetDirectory(0);
   c1lep4jex3bex_jets_pt_uHcW__242->SetStats(0);
   c1lep4jex3bex_jets_pt_uHcW__242->SetFillColor(2);
   c1lep4jex3bex_jets_pt_uHcW__242->SetLineColor(2);
   c1lep4jex3bex_jets_pt_uHcW__242->SetMarkerStyle(20);
   c1lep4jex3bex_jets_pt_uHcW__242->SetMarkerSize(1.2);
   c1lep4jex3bex_jets_pt_uHcW__242->GetXaxis()->SetTitle("Jets p_{T} [GeV]");
   c1lep4jex3bex_jets_pt_uHcW__242->GetXaxis()->SetRange(1,100);
   c1lep4jex3bex_jets_pt_uHcW__242->GetXaxis()->SetLabelFont(43);
   c1lep4jex3bex_jets_pt_uHcW__242->GetXaxis()->SetLabelSize(21);
   c1lep4jex3bex_jets_pt_uHcW__242->GetXaxis()->SetTitleSize(21);
   c1lep4jex3bex_jets_pt_uHcW__242->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_jets_pt_uHcW__242->GetXaxis()->SetTitleFont(43);
   c1lep4jex3bex_jets_pt_uHcW__242->GetYaxis()->SetLabelFont(43);
   c1lep4jex3bex_jets_pt_uHcW__242->GetYaxis()->SetLabelSize(21);
   c1lep4jex3bex_jets_pt_uHcW__242->GetYaxis()->SetTitleSize(21);
   c1lep4jex3bex_jets_pt_uHcW__242->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_jets_pt_uHcW__242->GetYaxis()->SetTitleFont(43);
   c1lep4jex3bex_jets_pt_uHcW__242->GetZaxis()->SetLabelFont(43);
   c1lep4jex3bex_jets_pt_uHcW__242->GetZaxis()->SetLabelSize(21);
   c1lep4jex3bex_jets_pt_uHcW__242->GetZaxis()->SetTitleSize(21);
   c1lep4jex3bex_jets_pt_uHcW__242->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jex3bex_jets_pt_uHcW,"");
   h_stack->Draw("hist same");
   
   Double_t g_totErr_fx3107[6] = {
   50,
   100,
   150,
   200,
   250,
   300};
   Double_t g_totErr_fy3107[6] = {
   27480.26,
   8768.082,
   2765.447,
   837.7164,
   319.4891,
   149.024};
   Double_t g_totErr_felx3107[6] = {
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t g_totErr_fely3107[6] = {
   5378.022,
   1651.322,
   525.3974,
   166.0281,
   68.17065,
   33.67041};
   Double_t g_totErr_fehx3107[6] = {
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t g_totErr_fehy3107[6] = {
   5378.022,
   1651.322,
   525.3974,
   166.0281,
   68.17065,
   33.67041};
   grae = new TGraphAsymmErrors(6,g_totErr_fx3107,g_totErr_fy3107,g_totErr_felx3107,g_totErr_fehx3107,g_totErr_fely3107,g_totErr_fehy3107);
   grae->SetName("g_totErr");
   grae->SetTitle("");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(3354);
   grae->SetLineColor(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0);
   
   TH1F *Graph_g_totErr3107 = new TH1F("Graph_g_totErr3107","",100,0,355);
   Graph_g_totErr3107->SetMinimum(0);
   Graph_g_totErr3107->SetMaximum(36132.58);
   Graph_g_totErr3107->SetDirectory(0);
   Graph_g_totErr3107->SetStats(0);
   Graph_g_totErr3107->SetLineWidth(2);
   Graph_g_totErr3107->SetMarkerStyle(20);
   Graph_g_totErr3107->SetMarkerSize(1.2);
   Graph_g_totErr3107->GetXaxis()->SetLabelFont(43);
   Graph_g_totErr3107->GetXaxis()->SetLabelSize(21);
   Graph_g_totErr3107->GetXaxis()->SetTitleSize(21);
   Graph_g_totErr3107->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_totErr3107->GetXaxis()->SetTitleFont(43);
   Graph_g_totErr3107->GetYaxis()->SetLabelFont(43);
   Graph_g_totErr3107->GetYaxis()->SetLabelSize(21);
   Graph_g_totErr3107->GetYaxis()->SetTitleSize(21);
   Graph_g_totErr3107->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_totErr3107->GetYaxis()->SetTitleFont(43);
   Graph_g_totErr3107->GetZaxis()->SetLabelFont(43);
   Graph_g_totErr3107->GetZaxis()->SetLabelSize(21);
   Graph_g_totErr3107->GetZaxis()->SetTitleSize(21);
   Graph_g_totErr3107->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_totErr3107);
   
   grae->Draw("e2");
   
   Double_t Graph_from_c1lep4jex3bex_jets_pt_Data_fx3108[6] = {
   50,
   100,
   150,
   200,
   250,
   300};
   Double_t Graph_from_c1lep4jex3bex_jets_pt_Data_fy3108[6] = {
   30642,
   9725,
   2983,
   999,
   369,
   189};
   Double_t Graph_from_c1lep4jex3bex_jets_pt_Data_felx3108[6] = {
   24.95,
   24.95,
   24.95,
   24.95,
   24.95,
   24.95};
   Double_t Graph_from_c1lep4jex3bex_jets_pt_Data_fely3108[6] = {
   175.0486,
   98.61541,
   54.61685,
   31.60696,
   19.20937,
   13.74773};
   Double_t Graph_from_c1lep4jex3bex_jets_pt_Data_fehx3108[6] = {
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t Graph_from_c1lep4jex3bex_jets_pt_Data_fehy3108[6] = {
   175.0486,
   98.61541,
   54.61685,
   31.60696,
   19.20937,
   13.74773};
   grae = new TGraphAsymmErrors(6,Graph_from_c1lep4jex3bex_jets_pt_Data_fx3108,Graph_from_c1lep4jex3bex_jets_pt_Data_fy3108,Graph_from_c1lep4jex3bex_jets_pt_Data_felx3108,Graph_from_c1lep4jex3bex_jets_pt_Data_fehx3108,Graph_from_c1lep4jex3bex_jets_pt_Data_fely3108,Graph_from_c1lep4jex3bex_jets_pt_Data_fehy3108);
   grae->SetName("Graph_from_c1lep4jex3bex_jets_pt_Data");
   grae->SetTitle("");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_c1lep4jex3bex_jets_pt_Data3108 = new TH1F("Graph_Graph_from_c1lep4jex3bex_jets_pt_Data3108","",100,0,354.995);
   Graph_Graph_from_c1lep4jex3bex_jets_pt_Data3108->SetMinimum(0);
   Graph_Graph_from_c1lep4jex3bex_jets_pt_Data3108->SetMaximum(33881.23);
   Graph_Graph_from_c1lep4jex3bex_jets_pt_Data3108->SetDirectory(0);
   Graph_Graph_from_c1lep4jex3bex_jets_pt_Data3108->SetStats(0);
   Graph_Graph_from_c1lep4jex3bex_jets_pt_Data3108->SetLineWidth(2);
   Graph_Graph_from_c1lep4jex3bex_jets_pt_Data3108->SetMarkerStyle(20);
   Graph_Graph_from_c1lep4jex3bex_jets_pt_Data3108->SetMarkerSize(1.2);
   Graph_Graph_from_c1lep4jex3bex_jets_pt_Data3108->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep4jex3bex_jets_pt_Data3108->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep4jex3bex_jets_pt_Data3108->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep4jex3bex_jets_pt_Data3108->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep4jex3bex_jets_pt_Data3108->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep4jex3bex_jets_pt_Data3108->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep4jex3bex_jets_pt_Data3108->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep4jex3bex_jets_pt_Data3108->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep4jex3bex_jets_pt_Data3108->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep4jex3bex_jets_pt_Data3108->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep4jex3bex_jets_pt_Data3108->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep4jex3bex_jets_pt_Data3108->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep4jex3bex_jets_pt_Data3108->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep4jex3bex_jets_pt_Data3108->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_c1lep4jex3bex_jets_pt_Data3108);
   
   grae->Draw("ep1 ");
   Double_t xAxis270[7] = {25, 75, 125, 175, 225, 275, 325}; 
   
   TH1D *h_dummy_copy__243 = new TH1D("h_dummy_copy__243","",6, xAxis270);
   h_dummy_copy__243->SetEntries(1.168362e+07);
   h_dummy_copy__243->SetDirectory(0);
   h_dummy_copy__243->SetStats(0);
   h_dummy_copy__243->SetMarkerStyle(20);
   h_dummy_copy__243->SetMarkerSize(1.2);
   h_dummy_copy__243->GetXaxis()->SetTitle("jets p_{T} [GeV]");
   h_dummy_copy__243->GetXaxis()->SetRange(1,100);
   h_dummy_copy__243->GetXaxis()->SetLabelFont(43);
   h_dummy_copy__243->GetXaxis()->SetLabelSize(21);
   h_dummy_copy__243->GetXaxis()->SetTitleSize(21);
   h_dummy_copy__243->GetXaxis()->SetTitleOffset(1.4);
   h_dummy_copy__243->GetXaxis()->SetTitleFont(43);
   h_dummy_copy__243->GetYaxis()->SetTitle("Events / 50 GeV");
   h_dummy_copy__243->GetYaxis()->SetLabelFont(43);
   h_dummy_copy__243->GetYaxis()->SetLabelSize(16.8);
   h_dummy_copy__243->GetYaxis()->SetTitleSize(21);
   h_dummy_copy__243->GetYaxis()->SetTitleOffset(2.4);
   h_dummy_copy__243->GetYaxis()->SetTitleFont(43);
   h_dummy_copy__243->GetZaxis()->SetLabelFont(43);
   h_dummy_copy__243->GetZaxis()->SetLabelSize(21);
   h_dummy_copy__243->GetZaxis()->SetTitleSize(21);
   h_dummy_copy__243->GetZaxis()->SetTitleFont(43);
   h_dummy_copy__243->Draw("sameaxis");
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
   TLegendEntry *entry=leg->AddEntry("c1lep4jex3bex_jets_pt_Data","Data","lep");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep4jex3bex_jets_pt_uHcW","t#bar{t}#rightarrowWbHc (BR=1%)","f");
   entry->SetFillColor(2);
   entry->SetFillStyle(1001);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep4jex3bex_jets_pt_ttbarlight","t#bar{t}+light","f");
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep4jex3bex_jets_pt_ttbarcc","t#bar{t}+cc","f");

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
   entry=leg->AddEntry("c1lep4jex3bex_jets_pt_ttbarbb","t#bar{t}+bb","f");

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
   entry=leg->AddEntry("c1lep4jex3bex_jets_pt_topEW","Non-t#bar{t}","f");

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
   c_c1lep4jex3bex_jets_pt->cd();
   c_c1lep4jex3bex_jets_pt->Modified();
   c_c1lep4jex3bex_jets_pt->cd();
   c_c1lep4jex3bex_jets_pt->SetSelected(c_c1lep4jex3bex_jets_pt);
}
