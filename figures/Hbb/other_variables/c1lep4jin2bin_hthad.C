void c1lep4jin2bin_hthad()
{
//=========Macro generated from canvas: c_c1lep4jin2bin_hthad/c_c1lep4jin2bin_hthad
//=========  (Thu Jul 19 17:38:04 2018) by ROOT version6.04/14
   TCanvas *c_c1lep4jin2bin_hthad = new TCanvas("c_c1lep4jin2bin_hthad", "c_c1lep4jin2bin_hthad",0,0,600,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c_c1lep4jin2bin_hthad->SetHighLightColor(2);
   c_c1lep4jin2bin_hthad->Range(0,0,1,1);
   c_c1lep4jin2bin_hthad->SetFillColor(0);
   c_c1lep4jin2bin_hthad->SetBorderMode(0);
   c_c1lep4jin2bin_hthad->SetBorderSize(2);
   c_c1lep4jin2bin_hthad->SetTickx(1);
   c_c1lep4jin2bin_hthad->SetTicky(1);
   c_c1lep4jin2bin_hthad->SetLeftMargin(0.16);
   c_c1lep4jin2bin_hthad->SetRightMargin(0.05);
   c_c1lep4jin2bin_hthad->SetTopMargin(0.05);
   c_c1lep4jin2bin_hthad->SetBottomMargin(0.16);
   c_c1lep4jin2bin_hthad->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0,1,0.28);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-20.98765,-0.0873016,843.2099,1.5);
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
   Double_t xAxis131[8] = {100, 200, 300, 400, 500, 600, 700, 800}; 
   
   TH1D *h_dummy2__118 = new TH1D("h_dummy2__118","Data/MC",7, xAxis131);
   h_dummy2__118->SetMinimum(0.5);
   h_dummy2__118->SetMaximum(1.5);
   h_dummy2__118->SetEntries(1.12326e+07);
   h_dummy2__118->SetDirectory(0);
   h_dummy2__118->SetStats(0);
   h_dummy2__118->SetMarkerStyle(20);
   h_dummy2__118->SetMarkerSize(1.2);
   h_dummy2__118->GetXaxis()->SetTitle("H_{T}^{had.} [GeV]");
   h_dummy2__118->GetXaxis()->SetRange(1,100);
   h_dummy2__118->GetXaxis()->SetLabelFont(43);
   h_dummy2__118->GetXaxis()->SetLabelOffset(0.025);
   h_dummy2__118->GetXaxis()->SetLabelSize(16.8);
   h_dummy2__118->GetXaxis()->SetTitleSize(21);
   h_dummy2__118->GetXaxis()->SetTitleOffset(5.05);
   h_dummy2__118->GetXaxis()->SetTitleFont(43);
   h_dummy2__118->GetYaxis()->SetTitle("Data / Bkg");
   h_dummy2__118->GetYaxis()->SetNdivisions(-504);
   h_dummy2__118->GetYaxis()->SetLabelFont(43);
   h_dummy2__118->GetYaxis()->SetLabelOffset(0.02);
   h_dummy2__118->GetYaxis()->SetLabelSize(16.8);
   h_dummy2__118->GetYaxis()->SetTitleSize(21);
   h_dummy2__118->GetYaxis()->SetTitleOffset(2.4);
   h_dummy2__118->GetYaxis()->SetTitleFont(43);
   h_dummy2__118->GetZaxis()->SetLabelFont(43);
   h_dummy2__118->GetZaxis()->SetLabelSize(21);
   h_dummy2__118->GetZaxis()->SetTitleSize(21);
   h_dummy2__118->GetZaxis()->SetTitleFont(43);
   h_dummy2__118->Draw("HIST");
   
   Double_t Graph_from_h_ratio_fx3053[7] = {
   150,
   250,
   350,
   450,
   550,
   650,
   750};
   Double_t Graph_from_h_ratio_fy3053[7] = {
   1.017719,
   0.963591,
   0.9528363,
   0.9367962,
   0.9522437,
   0.946628,
   0.9504952};
   Double_t Graph_from_h_ratio_felx3053[7] = {
   49.9,
   49.9,
   49.9,
   49.9,
   49.9,
   49.9,
   49.9};
   Double_t Graph_from_h_ratio_fely3053[7] = {
   0.00338916,
   0.001666474,
   0.002001108,
   0.002740025,
   0.003904376,
   0.005372847,
   0.007300063};
   Double_t Graph_from_h_ratio_fehx3053[7] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t Graph_from_h_ratio_fehy3053[7] = {
   0.00338916,
   0.001666474,
   0.002001108,
   0.002740025,
   0.003904376,
   0.005372847,
   0.007300063};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(7,Graph_from_h_ratio_fx3053,Graph_from_h_ratio_fy3053,Graph_from_h_ratio_felx3053,Graph_from_h_ratio_fehx3053,Graph_from_h_ratio_fely3053,Graph_from_h_ratio_fehy3053);
   grae->SetName("Graph_from_h_ratio");
   grae->SetTitle("");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(24);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_h_ratio3053 = new TH1F("Graph_Graph_from_h_ratio3053","",100,30.11,869.99);
   Graph_Graph_from_h_ratio3053->SetMinimum(0.925351);
   Graph_Graph_from_h_ratio3053->SetMaximum(1.029813);
   Graph_Graph_from_h_ratio3053->SetDirectory(0);
   Graph_Graph_from_h_ratio3053->SetStats(0);
   Graph_Graph_from_h_ratio3053->SetLineWidth(2);
   Graph_Graph_from_h_ratio3053->SetMarkerStyle(20);
   Graph_Graph_from_h_ratio3053->SetMarkerSize(1.2);
   Graph_Graph_from_h_ratio3053->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3053->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3053->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3053->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3053->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3053->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3053->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3053->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3053->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3053->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3053->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3053->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3053->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3053->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_h_ratio3053);
   
   grae->Draw("pe0");
   TLine *line = new TLine(100,1,800,1);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t g_ratio2_fx3054[7] = {
   150,
   250,
   350,
   450,
   550,
   650,
   750};
   Double_t g_ratio2_fy3054[7] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t g_ratio2_felx3054[7] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t g_ratio2_fely3054[7] = {
   0.132539,
   0.1159341,
   0.1261004,
   0.1357658,
   0.1453087,
   0.1546941,
   0.1675701};
   Double_t g_ratio2_fehx3054[7] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t g_ratio2_fehy3054[7] = {
   0.132539,
   0.1159341,
   0.1261004,
   0.1357658,
   0.1453087,
   0.1546941,
   0.1675701};
   grae = new TGraphAsymmErrors(7,g_ratio2_fx3054,g_ratio2_fy3054,g_ratio2_felx3054,g_ratio2_fehx3054,g_ratio2_fely3054,g_ratio2_fehy3054);
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
   
   TH1F *Graph_g_ratio23054 = new TH1F("Graph_g_ratio23054","",100,30,870);
   Graph_g_ratio23054->SetMinimum(0.7989159);
   Graph_g_ratio23054->SetMaximum(1.201084);
   Graph_g_ratio23054->SetDirectory(0);
   Graph_g_ratio23054->SetStats(0);
   Graph_g_ratio23054->SetLineWidth(2);
   Graph_g_ratio23054->SetMarkerStyle(20);
   Graph_g_ratio23054->SetMarkerSize(1.2);
   Graph_g_ratio23054->GetXaxis()->SetLabelFont(43);
   Graph_g_ratio23054->GetXaxis()->SetLabelSize(21);
   Graph_g_ratio23054->GetXaxis()->SetTitleSize(21);
   Graph_g_ratio23054->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23054->GetXaxis()->SetTitleFont(43);
   Graph_g_ratio23054->GetYaxis()->SetLabelFont(43);
   Graph_g_ratio23054->GetYaxis()->SetLabelSize(21);
   Graph_g_ratio23054->GetYaxis()->SetTitleSize(21);
   Graph_g_ratio23054->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23054->GetYaxis()->SetTitleFont(43);
   Graph_g_ratio23054->GetZaxis()->SetLabelFont(43);
   Graph_g_ratio23054->GetZaxis()->SetLabelSize(21);
   Graph_g_ratio23054->GetZaxis()->SetTitleSize(21);
   Graph_g_ratio23054->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_ratio23054);
   
   grae->Draw("e2");
   Double_t xAxis132[8] = {100, 200, 300, 400, 500, 600, 700, 800}; 
   
   TH1D *h_dummy2_copy__119 = new TH1D("h_dummy2_copy__119","Data/MC",7, xAxis132);
   h_dummy2_copy__119->SetMinimum(0.5);
   h_dummy2_copy__119->SetMaximum(1.5);
   h_dummy2_copy__119->SetEntries(1.12326e+07);
   h_dummy2_copy__119->SetDirectory(0);
   h_dummy2_copy__119->SetStats(0);
   h_dummy2_copy__119->SetMarkerStyle(20);
   h_dummy2_copy__119->SetMarkerSize(1.2);
   h_dummy2_copy__119->GetXaxis()->SetTitle("H_{T}^{had.} [GeV]");
   h_dummy2_copy__119->GetXaxis()->SetRange(1,100);
   h_dummy2_copy__119->GetXaxis()->SetLabelFont(43);
   h_dummy2_copy__119->GetXaxis()->SetLabelOffset(0.025);
   h_dummy2_copy__119->GetXaxis()->SetLabelSize(16.8);
   h_dummy2_copy__119->GetXaxis()->SetTitleSize(21);
   h_dummy2_copy__119->GetXaxis()->SetTitleOffset(5.05);
   h_dummy2_copy__119->GetXaxis()->SetTitleFont(43);
   h_dummy2_copy__119->GetYaxis()->SetTitle("Data / Bkg");
   h_dummy2_copy__119->GetYaxis()->SetNdivisions(-504);
   h_dummy2_copy__119->GetYaxis()->SetLabelFont(43);
   h_dummy2_copy__119->GetYaxis()->SetLabelOffset(0.02);
   h_dummy2_copy__119->GetYaxis()->SetLabelSize(16.8);
   h_dummy2_copy__119->GetYaxis()->SetTitleSize(21);
   h_dummy2_copy__119->GetYaxis()->SetTitleOffset(2.4);
   h_dummy2_copy__119->GetYaxis()->SetTitleFont(43);
   h_dummy2_copy__119->GetZaxis()->SetLabelFont(43);
   h_dummy2_copy__119->GetZaxis()->SetLabelSize(21);
   h_dummy2_copy__119->GetZaxis()->SetTitleSize(21);
   h_dummy2_copy__119->GetZaxis()->SetTitleFont(43);
   h_dummy2_copy__119->Draw("sameaxis");
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
   c_c1lep4jin2bin_hthad->cd();
  
// ------------>Primitives in pad: pad0
   TPad *pad0 = new TPad("pad0", "pad0",0,0.2,1,1);
   pad0->Draw();
   pad0->cd();
   pad0->Range(-20.98765,-73476.62,843.2099,661289.6);
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
   Double_t xAxis133[8] = {100, 200, 300, 400, 500, 600, 700, 800}; 
   
   TH1D *h_dummy__120 = new TH1D("h_dummy__120","",7, xAxis133);
   h_dummy__120->SetMinimum(0);
   h_dummy__120->SetMaximum(624551.2);
   h_dummy__120->SetEntries(1.12326e+07);
   h_dummy__120->SetDirectory(0);
   h_dummy__120->SetStats(0);
   h_dummy__120->SetMarkerStyle(20);
   h_dummy__120->SetMarkerSize(1.2);
   h_dummy__120->GetXaxis()->SetRange(1,100);
   h_dummy__120->GetXaxis()->SetLabelFont(43);
   h_dummy__120->GetXaxis()->SetLabelSize(0);
   h_dummy__120->GetXaxis()->SetTitleSize(21);
   h_dummy__120->GetXaxis()->SetTitleOffset(1.4);
   h_dummy__120->GetXaxis()->SetTitleFont(43);
   h_dummy__120->GetYaxis()->SetTitle("Events / 100 GeV");
   h_dummy__120->GetYaxis()->SetLabelFont(43);
   h_dummy__120->GetYaxis()->SetLabelSize(16.8);
   h_dummy__120->GetYaxis()->SetTitleSize(21);
   h_dummy__120->GetYaxis()->SetTitleOffset(2.4);
   h_dummy__120->GetYaxis()->SetTitleFont(43);
   h_dummy__120->GetZaxis()->SetLabelFont(43);
   h_dummy__120->GetZaxis()->SetLabelSize(21);
   h_dummy__120->GetZaxis()->SetTitleSize(21);
   h_dummy__120->GetZaxis()->SetTitleFont(43);
   h_dummy__120->Draw("HIST");
   
   THStack *h_stack = new THStack();
   h_stack->SetName("h_stack");
   h_stack->SetTitle("h_stack");
   Double_t xAxis134[8] = {100, 200, 300, 400, 500, 600, 700, 800}; 
   
   TH1F *h_stack_stack_14 = new TH1F("h_stack_stack_14","h_stack",7, xAxis134);
   h_stack_stack_14->SetMinimum(0);
   h_stack_stack_14->SetMaximum(368923.9);
   h_stack_stack_14->SetDirectory(0);
   h_stack_stack_14->SetStats(0);
   h_stack_stack_14->SetLineWidth(2);
   h_stack_stack_14->SetMarkerStyle(20);
   h_stack_stack_14->SetMarkerSize(1.2);
   h_stack_stack_14->GetXaxis()->SetLabelFont(43);
   h_stack_stack_14->GetXaxis()->SetLabelSize(21);
   h_stack_stack_14->GetXaxis()->SetTitleSize(21);
   h_stack_stack_14->GetXaxis()->SetTitleOffset(1.4);
   h_stack_stack_14->GetXaxis()->SetTitleFont(43);
   h_stack_stack_14->GetYaxis()->SetLabelFont(43);
   h_stack_stack_14->GetYaxis()->SetLabelSize(21);
   h_stack_stack_14->GetYaxis()->SetTitleSize(21);
   h_stack_stack_14->GetYaxis()->SetTitleOffset(1.4);
   h_stack_stack_14->GetYaxis()->SetTitleFont(43);
   h_stack_stack_14->GetZaxis()->SetLabelFont(43);
   h_stack_stack_14->GetZaxis()->SetLabelSize(21);
   h_stack_stack_14->GetZaxis()->SetTitleSize(21);
   h_stack_stack_14->GetZaxis()->SetTitleFont(43);
   h_stack->SetHistogram(h_stack_stack_14);
   
   Double_t xAxis135[8] = {100, 200, 300, 400, 500, 600, 700, 800}; 
   
   TH1D *c1lep4jin2bin_hthad_topEW__121 = new TH1D("c1lep4jin2bin_hthad_topEW__121","",7, xAxis135);
   c1lep4jin2bin_hthad_topEW__121->SetBinContent(1,17562.81);
   c1lep4jin2bin_hthad_topEW__121->SetBinContent(2,39181.48);
   c1lep4jin2bin_hthad_topEW__121->SetBinContent(3,24722.9);
   c1lep4jin2bin_hthad_topEW__121->SetBinContent(4,15327.67);
   c1lep4jin2bin_hthad_topEW__121->SetBinContent(5,7996.501);
   c1lep4jin2bin_hthad_topEW__121->SetBinContent(6,4542.523);
   c1lep4jin2bin_hthad_topEW__121->SetBinContent(7,2450.043);
   c1lep4jin2bin_hthad_topEW__121->SetBinContent(8,4302.769);
   c1lep4jin2bin_hthad_topEW__121->SetBinError(1,308.8863);
   c1lep4jin2bin_hthad_topEW__121->SetBinError(2,458.0386);
   c1lep4jin2bin_hthad_topEW__121->SetBinError(3,348.9228);
   c1lep4jin2bin_hthad_topEW__121->SetBinError(4,278.6668);
   c1lep4jin2bin_hthad_topEW__121->SetBinError(5,189.5289);
   c1lep4jin2bin_hthad_topEW__121->SetBinError(6,133.4137);
   c1lep4jin2bin_hthad_topEW__121->SetBinError(7,86.94219);
   c1lep4jin2bin_hthad_topEW__121->SetBinError(8,131.3975);
   c1lep4jin2bin_hthad_topEW__121->SetEntries(8198816);
   c1lep4jin2bin_hthad_topEW__121->SetDirectory(0);
   c1lep4jin2bin_hthad_topEW__121->SetStats(0);

   ci = TColor::GetColor("#66cc66");
   c1lep4jin2bin_hthad_topEW__121->SetFillColor(ci);
   c1lep4jin2bin_hthad_topEW__121->SetMarkerStyle(20);
   c1lep4jin2bin_hthad_topEW__121->SetMarkerSize(1.2);
   c1lep4jin2bin_hthad_topEW__121->GetXaxis()->SetTitle("H_{T}^{had} [GeV]");
   c1lep4jin2bin_hthad_topEW__121->GetXaxis()->SetRange(1,100);
   c1lep4jin2bin_hthad_topEW__121->GetXaxis()->SetLabelFont(43);
   c1lep4jin2bin_hthad_topEW__121->GetXaxis()->SetLabelSize(21);
   c1lep4jin2bin_hthad_topEW__121->GetXaxis()->SetTitleSize(21);
   c1lep4jin2bin_hthad_topEW__121->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_hthad_topEW__121->GetXaxis()->SetTitleFont(43);
   c1lep4jin2bin_hthad_topEW__121->GetYaxis()->SetLabelFont(43);
   c1lep4jin2bin_hthad_topEW__121->GetYaxis()->SetLabelSize(21);
   c1lep4jin2bin_hthad_topEW__121->GetYaxis()->SetTitleSize(21);
   c1lep4jin2bin_hthad_topEW__121->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_hthad_topEW__121->GetYaxis()->SetTitleFont(43);
   c1lep4jin2bin_hthad_topEW__121->GetZaxis()->SetLabelFont(43);
   c1lep4jin2bin_hthad_topEW__121->GetZaxis()->SetLabelSize(21);
   c1lep4jin2bin_hthad_topEW__121->GetZaxis()->SetTitleSize(21);
   c1lep4jin2bin_hthad_topEW__121->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jin2bin_hthad_topEW,"");
   Double_t xAxis136[8] = {100, 200, 300, 400, 500, 600, 700, 800}; 
   
   TH1D *c1lep4jin2bin_hthad_ttbarbb__122 = new TH1D("c1lep4jin2bin_hthad_ttbarbb__122","",7, xAxis136);
   c1lep4jin2bin_hthad_ttbarbb__122->SetBinContent(1,2453.592);
   c1lep4jin2bin_hthad_ttbarbb__122->SetBinContent(2,12860.34);
   c1lep4jin2bin_hthad_ttbarbb__122->SetBinContent(3,13812.89);
   c1lep4jin2bin_hthad_ttbarbb__122->SetBinContent(4,9487.881);
   c1lep4jin2bin_hthad_ttbarbb__122->SetBinContent(5,5844.81);
   c1lep4jin2bin_hthad_ttbarbb__122->SetBinContent(6,3407.183);
   c1lep4jin2bin_hthad_ttbarbb__122->SetBinContent(7,2120.092);
   c1lep4jin2bin_hthad_ttbarbb__122->SetBinContent(8,3754.553);
   c1lep4jin2bin_hthad_ttbarbb__122->SetBinError(1,30.28496);
   c1lep4jin2bin_hthad_ttbarbb__122->SetBinError(2,70.02253);
   c1lep4jin2bin_hthad_ttbarbb__122->SetBinError(3,73.95994);
   c1lep4jin2bin_hthad_ttbarbb__122->SetBinError(4,61.50424);
   c1lep4jin2bin_hthad_ttbarbb__122->SetBinError(5,49.37388);
   c1lep4jin2bin_hthad_ttbarbb__122->SetBinError(6,37.76663);
   c1lep4jin2bin_hthad_ttbarbb__122->SetBinError(7,29.25141);
   c1lep4jin2bin_hthad_ttbarbb__122->SetBinError(8,40.4593);
   c1lep4jin2bin_hthad_ttbarbb__122->SetEntries(197629);
   c1lep4jin2bin_hthad_ttbarbb__122->SetDirectory(0);
   c1lep4jin2bin_hthad_ttbarbb__122->SetStats(0);

   ci = TColor::GetColor("#6666cc");
   c1lep4jin2bin_hthad_ttbarbb__122->SetFillColor(ci);
   c1lep4jin2bin_hthad_ttbarbb__122->SetMarkerStyle(20);
   c1lep4jin2bin_hthad_ttbarbb__122->SetMarkerSize(1.2);
   c1lep4jin2bin_hthad_ttbarbb__122->GetXaxis()->SetTitle("H_{T}^{had} [GeV]");
   c1lep4jin2bin_hthad_ttbarbb__122->GetXaxis()->SetRange(1,100);
   c1lep4jin2bin_hthad_ttbarbb__122->GetXaxis()->SetLabelFont(43);
   c1lep4jin2bin_hthad_ttbarbb__122->GetXaxis()->SetLabelSize(21);
   c1lep4jin2bin_hthad_ttbarbb__122->GetXaxis()->SetTitleSize(21);
   c1lep4jin2bin_hthad_ttbarbb__122->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_hthad_ttbarbb__122->GetXaxis()->SetTitleFont(43);
   c1lep4jin2bin_hthad_ttbarbb__122->GetYaxis()->SetLabelFont(43);
   c1lep4jin2bin_hthad_ttbarbb__122->GetYaxis()->SetLabelSize(21);
   c1lep4jin2bin_hthad_ttbarbb__122->GetYaxis()->SetTitleSize(21);
   c1lep4jin2bin_hthad_ttbarbb__122->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_hthad_ttbarbb__122->GetYaxis()->SetTitleFont(43);
   c1lep4jin2bin_hthad_ttbarbb__122->GetZaxis()->SetLabelFont(43);
   c1lep4jin2bin_hthad_ttbarbb__122->GetZaxis()->SetLabelSize(21);
   c1lep4jin2bin_hthad_ttbarbb__122->GetZaxis()->SetTitleSize(21);
   c1lep4jin2bin_hthad_ttbarbb__122->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jin2bin_hthad_ttbarbb,"");
   Double_t xAxis137[8] = {100, 200, 300, 400, 500, 600, 700, 800}; 
   
   TH1D *c1lep4jin2bin_hthad_ttbarcc__123 = new TH1D("c1lep4jin2bin_hthad_ttbarcc__123","",7, xAxis137);
   c1lep4jin2bin_hthad_ttbarcc__123->SetBinContent(1,5125.315);
   c1lep4jin2bin_hthad_ttbarcc__123->SetBinContent(2,26144.68);
   c1lep4jin2bin_hthad_ttbarcc__123->SetBinContent(3,23068.36);
   c1lep4jin2bin_hthad_ttbarcc__123->SetBinContent(4,14037.13);
   c1lep4jin2bin_hthad_ttbarcc__123->SetBinContent(5,7844.792);
   c1lep4jin2bin_hthad_ttbarcc__123->SetBinContent(6,4487.389);
   c1lep4jin2bin_hthad_ttbarcc__123->SetBinContent(7,2581.575);
   c1lep4jin2bin_hthad_ttbarcc__123->SetBinContent(8,4193.159);
   c1lep4jin2bin_hthad_ttbarcc__123->SetBinError(1,44.89869);
   c1lep4jin2bin_hthad_ttbarcc__123->SetBinError(2,101.2602);
   c1lep4jin2bin_hthad_ttbarcc__123->SetBinError(3,94.96074);
   c1lep4jin2bin_hthad_ttbarcc__123->SetBinError(4,74.62964);
   c1lep4jin2bin_hthad_ttbarcc__123->SetBinError(5,55.49577);
   c1lep4jin2bin_hthad_ttbarcc__123->SetBinError(6,41.83225);
   c1lep4jin2bin_hthad_ttbarcc__123->SetBinError(7,31.881);
   c1lep4jin2bin_hthad_ttbarcc__123->SetBinError(8,40.46003);
   c1lep4jin2bin_hthad_ttbarcc__123->SetEntries(319744);
   c1lep4jin2bin_hthad_ttbarcc__123->SetDirectory(0);
   c1lep4jin2bin_hthad_ttbarcc__123->SetStats(0);

   ci = TColor::GetColor("#ccccff");
   c1lep4jin2bin_hthad_ttbarcc__123->SetFillColor(ci);
   c1lep4jin2bin_hthad_ttbarcc__123->SetMarkerStyle(20);
   c1lep4jin2bin_hthad_ttbarcc__123->SetMarkerSize(1.2);
   c1lep4jin2bin_hthad_ttbarcc__123->GetXaxis()->SetTitle("H_{T}^{had} [GeV]");
   c1lep4jin2bin_hthad_ttbarcc__123->GetXaxis()->SetRange(1,100);
   c1lep4jin2bin_hthad_ttbarcc__123->GetXaxis()->SetLabelFont(43);
   c1lep4jin2bin_hthad_ttbarcc__123->GetXaxis()->SetLabelSize(21);
   c1lep4jin2bin_hthad_ttbarcc__123->GetXaxis()->SetTitleSize(21);
   c1lep4jin2bin_hthad_ttbarcc__123->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_hthad_ttbarcc__123->GetXaxis()->SetTitleFont(43);
   c1lep4jin2bin_hthad_ttbarcc__123->GetYaxis()->SetLabelFont(43);
   c1lep4jin2bin_hthad_ttbarcc__123->GetYaxis()->SetLabelSize(21);
   c1lep4jin2bin_hthad_ttbarcc__123->GetYaxis()->SetTitleSize(21);
   c1lep4jin2bin_hthad_ttbarcc__123->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_hthad_ttbarcc__123->GetYaxis()->SetTitleFont(43);
   c1lep4jin2bin_hthad_ttbarcc__123->GetZaxis()->SetLabelFont(43);
   c1lep4jin2bin_hthad_ttbarcc__123->GetZaxis()->SetLabelSize(21);
   c1lep4jin2bin_hthad_ttbarcc__123->GetZaxis()->SetTitleSize(21);
   c1lep4jin2bin_hthad_ttbarcc__123->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jin2bin_hthad_ttbarcc,"");
   Double_t xAxis138[8] = {100, 200, 300, 400, 500, 600, 700, 800}; 
   
   TH1D *c1lep4jin2bin_hthad_ttbarlight__124 = new TH1D("c1lep4jin2bin_hthad_ttbarlight__124","",7, xAxis138);
   c1lep4jin2bin_hthad_ttbarlight__124->SetBinContent(1,63460.34);
   c1lep4jin2bin_hthad_ttbarlight__124->SetBinContent(2,268786.4);
   c1lep4jin2bin_hthad_ttbarlight__124->SetBinContent(3,176341.2);
   c1lep4jin2bin_hthad_ttbarlight__124->SetBinContent(4,85924.73);
   c1lep4jin2bin_hthad_ttbarlight__124->SetBinContent(5,40780.05);
   c1lep4jin2bin_hthad_ttbarlight__124->SetBinContent(6,20355.09);
   c1lep4jin2bin_hthad_ttbarlight__124->SetBinContent(7,10684.26);
   c1lep4jin2bin_hthad_ttbarlight__124->SetBinContent(8,14289.53);
   c1lep4jin2bin_hthad_ttbarlight__124->SetBinError(1,155.2198);
   c1lep4jin2bin_hthad_ttbarlight__124->SetBinError(2,323.2845);
   c1lep4jin2bin_hthad_ttbarlight__124->SetBinError(3,262.7551);
   c1lep4jin2bin_hthad_ttbarlight__124->SetBinError(4,183.743);
   c1lep4jin2bin_hthad_ttbarlight__124->SetBinError(5,125.401);
   c1lep4jin2bin_hthad_ttbarlight__124->SetBinError(6,88.03657);
   c1lep4jin2bin_hthad_ttbarlight__124->SetBinError(7,63.96858);
   c1lep4jin2bin_hthad_ttbarlight__124->SetBinError(8,73.90612);
   c1lep4jin2bin_hthad_ttbarlight__124->SetEntries(2516401);
   c1lep4jin2bin_hthad_ttbarlight__124->SetDirectory(0);
   c1lep4jin2bin_hthad_ttbarlight__124->SetStats(0);
   c1lep4jin2bin_hthad_ttbarlight__124->SetMarkerStyle(20);
   c1lep4jin2bin_hthad_ttbarlight__124->SetMarkerSize(1.2);
   c1lep4jin2bin_hthad_ttbarlight__124->GetXaxis()->SetTitle("H_{T}^{had} [GeV]");
   c1lep4jin2bin_hthad_ttbarlight__124->GetXaxis()->SetRange(1,100);
   c1lep4jin2bin_hthad_ttbarlight__124->GetXaxis()->SetLabelFont(43);
   c1lep4jin2bin_hthad_ttbarlight__124->GetXaxis()->SetLabelSize(21);
   c1lep4jin2bin_hthad_ttbarlight__124->GetXaxis()->SetTitleSize(21);
   c1lep4jin2bin_hthad_ttbarlight__124->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_hthad_ttbarlight__124->GetXaxis()->SetTitleFont(43);
   c1lep4jin2bin_hthad_ttbarlight__124->GetYaxis()->SetLabelFont(43);
   c1lep4jin2bin_hthad_ttbarlight__124->GetYaxis()->SetLabelSize(21);
   c1lep4jin2bin_hthad_ttbarlight__124->GetYaxis()->SetTitleSize(21);
   c1lep4jin2bin_hthad_ttbarlight__124->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_hthad_ttbarlight__124->GetYaxis()->SetTitleFont(43);
   c1lep4jin2bin_hthad_ttbarlight__124->GetZaxis()->SetLabelFont(43);
   c1lep4jin2bin_hthad_ttbarlight__124->GetZaxis()->SetLabelSize(21);
   c1lep4jin2bin_hthad_ttbarlight__124->GetZaxis()->SetTitleSize(21);
   c1lep4jin2bin_hthad_ttbarlight__124->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jin2bin_hthad_ttbarlight,"");
   Double_t xAxis139[8] = {100, 200, 300, 400, 500, 600, 700, 800}; 
   
   TH1D *c1lep4jin2bin_hthad_uHcW__125 = new TH1D("c1lep4jin2bin_hthad_uHcW__125","",7, xAxis139);
   c1lep4jin2bin_hthad_uHcW__125->SetBinContent(1,1257.297);
   c1lep4jin2bin_hthad_uHcW__125->SetBinContent(2,4383.142);
   c1lep4jin2bin_hthad_uHcW__125->SetBinContent(3,2888.191);
   c1lep4jin2bin_hthad_uHcW__125->SetBinContent(4,1551.75);
   c1lep4jin2bin_hthad_uHcW__125->SetBinContent(5,760.959);
   c1lep4jin2bin_hthad_uHcW__125->SetBinContent(6,375.649);
   c1lep4jin2bin_hthad_uHcW__125->SetBinContent(7,218.412);
   c1lep4jin2bin_hthad_uHcW__125->SetBinContent(8,229.6733);
   c1lep4jin2bin_hthad_uHcW__125->SetBinError(1,33.15687);
   c1lep4jin2bin_hthad_uHcW__125->SetBinError(2,62.19456);
   c1lep4jin2bin_hthad_uHcW__125->SetBinError(3,55.45822);
   c1lep4jin2bin_hthad_uHcW__125->SetBinError(4,43.56209);
   c1lep4jin2bin_hthad_uHcW__125->SetBinError(5,30.46516);
   c1lep4jin2bin_hthad_uHcW__125->SetBinError(6,24.5076);
   c1lep4jin2bin_hthad_uHcW__125->SetBinError(7,17.73825);
   c1lep4jin2bin_hthad_uHcW__125->SetBinError(8,22.1438);
   c1lep4jin2bin_hthad_uHcW__125->SetEntries(70178);
   c1lep4jin2bin_hthad_uHcW__125->SetDirectory(0);
   c1lep4jin2bin_hthad_uHcW__125->SetStats(0);
   c1lep4jin2bin_hthad_uHcW__125->SetFillColor(2);
   c1lep4jin2bin_hthad_uHcW__125->SetLineColor(2);
   c1lep4jin2bin_hthad_uHcW__125->SetMarkerStyle(20);
   c1lep4jin2bin_hthad_uHcW__125->SetMarkerSize(1.2);
   c1lep4jin2bin_hthad_uHcW__125->GetXaxis()->SetTitle("H_{T}^{had} [GeV]");
   c1lep4jin2bin_hthad_uHcW__125->GetXaxis()->SetRange(1,100);
   c1lep4jin2bin_hthad_uHcW__125->GetXaxis()->SetLabelFont(43);
   c1lep4jin2bin_hthad_uHcW__125->GetXaxis()->SetLabelSize(21);
   c1lep4jin2bin_hthad_uHcW__125->GetXaxis()->SetTitleSize(21);
   c1lep4jin2bin_hthad_uHcW__125->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_hthad_uHcW__125->GetXaxis()->SetTitleFont(43);
   c1lep4jin2bin_hthad_uHcW__125->GetYaxis()->SetLabelFont(43);
   c1lep4jin2bin_hthad_uHcW__125->GetYaxis()->SetLabelSize(21);
   c1lep4jin2bin_hthad_uHcW__125->GetYaxis()->SetTitleSize(21);
   c1lep4jin2bin_hthad_uHcW__125->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_hthad_uHcW__125->GetYaxis()->SetTitleFont(43);
   c1lep4jin2bin_hthad_uHcW__125->GetZaxis()->SetLabelFont(43);
   c1lep4jin2bin_hthad_uHcW__125->GetZaxis()->SetLabelSize(21);
   c1lep4jin2bin_hthad_uHcW__125->GetZaxis()->SetTitleSize(21);
   c1lep4jin2bin_hthad_uHcW__125->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jin2bin_hthad_uHcW,"");
   h_stack->Draw("hist same");
   
   Double_t g_totErr_fx3055[7] = {
   150,
   250,
   350,
   450,
   550,
   650,
   750};
   Double_t g_totErr_fy3055[7] = {
   88602.06,
   346972.9,
   237945.4,
   124777.4,
   62466.15,
   32792.18,
   17835.97};
   Double_t g_totErr_felx3055[7] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t g_totErr_fely3055[7] = {
   11743.23,
   40225.98,
   30005.01,
   16940.5,
   9076.873,
   5072.756,
   2988.774};
   Double_t g_totErr_fehx3055[7] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t g_totErr_fehy3055[7] = {
   11743.23,
   40225.98,
   30005.01,
   16940.5,
   9076.873,
   5072.756,
   2988.774};
   grae = new TGraphAsymmErrors(7,g_totErr_fx3055,g_totErr_fy3055,g_totErr_felx3055,g_totErr_fehx3055,g_totErr_fely3055,g_totErr_fehy3055);
   grae->SetName("g_totErr");
   grae->SetTitle("");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(3354);
   grae->SetLineColor(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0);
   
   TH1F *Graph_g_totErr3055 = new TH1F("Graph_g_totErr3055","",100,30,870);
   Graph_g_totErr3055->SetMinimum(0);
   Graph_g_totErr3055->SetMaximum(424434.1);
   Graph_g_totErr3055->SetDirectory(0);
   Graph_g_totErr3055->SetStats(0);
   Graph_g_totErr3055->SetLineWidth(2);
   Graph_g_totErr3055->SetMarkerStyle(20);
   Graph_g_totErr3055->SetMarkerSize(1.2);
   Graph_g_totErr3055->GetXaxis()->SetLabelFont(43);
   Graph_g_totErr3055->GetXaxis()->SetLabelSize(21);
   Graph_g_totErr3055->GetXaxis()->SetTitleSize(21);
   Graph_g_totErr3055->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_totErr3055->GetXaxis()->SetTitleFont(43);
   Graph_g_totErr3055->GetYaxis()->SetLabelFont(43);
   Graph_g_totErr3055->GetYaxis()->SetLabelSize(21);
   Graph_g_totErr3055->GetYaxis()->SetTitleSize(21);
   Graph_g_totErr3055->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_totErr3055->GetYaxis()->SetTitleFont(43);
   Graph_g_totErr3055->GetZaxis()->SetLabelFont(43);
   Graph_g_totErr3055->GetZaxis()->SetLabelSize(21);
   Graph_g_totErr3055->GetZaxis()->SetTitleSize(21);
   Graph_g_totErr3055->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_totErr3055);
   
   grae->Draw("e2");
   
   Double_t Graph_from_c1lep4jin2bin_hthad_Data_fx3056[7] = {
   150,
   250,
   350,
   450,
   550,
   650,
   750};
   Double_t Graph_from_c1lep4jin2bin_hthad_Data_fy3056[7] = {
   90172,
   334340,
   226723,
   116891,
   59483,
   31042,
   16953};
   Double_t Graph_from_c1lep4jin2bin_hthad_Data_felx3056[7] = {
   49.9,
   49.9,
   49.9,
   49.9,
   49.9,
   49.9,
   49.9};
   Double_t Graph_from_c1lep4jin2bin_hthad_Data_fely3056[7] = {
   300.2865,
   578.2214,
   476.1544,
   341.8933,
   243.8914,
   176.1874,
   130.2037};
   Double_t Graph_from_c1lep4jin2bin_hthad_Data_fehx3056[7] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t Graph_from_c1lep4jin2bin_hthad_Data_fehy3056[7] = {
   300.2865,
   578.2214,
   476.1544,
   341.8933,
   243.8914,
   176.1874,
   130.2037};
   grae = new TGraphAsymmErrors(7,Graph_from_c1lep4jin2bin_hthad_Data_fx3056,Graph_from_c1lep4jin2bin_hthad_Data_fy3056,Graph_from_c1lep4jin2bin_hthad_Data_felx3056,Graph_from_c1lep4jin2bin_hthad_Data_fehx3056,Graph_from_c1lep4jin2bin_hthad_Data_fely3056,Graph_from_c1lep4jin2bin_hthad_Data_fehy3056);
   grae->SetName("Graph_from_c1lep4jin2bin_hthad_Data");
   grae->SetTitle("");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_c1lep4jin2bin_hthad_Data3056 = new TH1F("Graph_Graph_from_c1lep4jin2bin_hthad_Data3056","",100,30.11,869.99);
   Graph_Graph_from_c1lep4jin2bin_hthad_Data3056->SetMinimum(0);
   Graph_Graph_from_c1lep4jin2bin_hthad_Data3056->SetMaximum(366727.8);
   Graph_Graph_from_c1lep4jin2bin_hthad_Data3056->SetDirectory(0);
   Graph_Graph_from_c1lep4jin2bin_hthad_Data3056->SetStats(0);
   Graph_Graph_from_c1lep4jin2bin_hthad_Data3056->SetLineWidth(2);
   Graph_Graph_from_c1lep4jin2bin_hthad_Data3056->SetMarkerStyle(20);
   Graph_Graph_from_c1lep4jin2bin_hthad_Data3056->SetMarkerSize(1.2);
   Graph_Graph_from_c1lep4jin2bin_hthad_Data3056->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep4jin2bin_hthad_Data3056->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep4jin2bin_hthad_Data3056->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep4jin2bin_hthad_Data3056->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep4jin2bin_hthad_Data3056->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep4jin2bin_hthad_Data3056->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep4jin2bin_hthad_Data3056->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep4jin2bin_hthad_Data3056->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep4jin2bin_hthad_Data3056->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep4jin2bin_hthad_Data3056->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep4jin2bin_hthad_Data3056->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep4jin2bin_hthad_Data3056->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep4jin2bin_hthad_Data3056->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep4jin2bin_hthad_Data3056->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_c1lep4jin2bin_hthad_Data3056);
   
   grae->Draw("ep1 ");
   Double_t xAxis140[8] = {100, 200, 300, 400, 500, 600, 700, 800}; 
   
   TH1D *h_dummy_copy__126 = new TH1D("h_dummy_copy__126","",7, xAxis140);
   h_dummy_copy__126->SetEntries(1.12326e+07);
   h_dummy_copy__126->SetDirectory(0);
   h_dummy_copy__126->SetStats(0);
   h_dummy_copy__126->SetMarkerStyle(20);
   h_dummy_copy__126->SetMarkerSize(1.2);
   h_dummy_copy__126->GetXaxis()->SetTitle("H_{T}^{had.} [GeV]");
   h_dummy_copy__126->GetXaxis()->SetRange(1,100);
   h_dummy_copy__126->GetXaxis()->SetLabelFont(43);
   h_dummy_copy__126->GetXaxis()->SetLabelSize(21);
   h_dummy_copy__126->GetXaxis()->SetTitleSize(21);
   h_dummy_copy__126->GetXaxis()->SetTitleOffset(1.4);
   h_dummy_copy__126->GetXaxis()->SetTitleFont(43);
   h_dummy_copy__126->GetYaxis()->SetTitle("Events / 100 GeV");
   h_dummy_copy__126->GetYaxis()->SetLabelFont(43);
   h_dummy_copy__126->GetYaxis()->SetLabelSize(16.8);
   h_dummy_copy__126->GetYaxis()->SetTitleSize(21);
   h_dummy_copy__126->GetYaxis()->SetTitleOffset(2.4);
   h_dummy_copy__126->GetYaxis()->SetTitleFont(43);
   h_dummy_copy__126->GetZaxis()->SetLabelFont(43);
   h_dummy_copy__126->GetZaxis()->SetLabelSize(21);
   h_dummy_copy__126->GetZaxis()->SetTitleSize(21);
   h_dummy_copy__126->GetZaxis()->SetTitleFont(43);
   h_dummy_copy__126->Draw("sameaxis");
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
   TLegendEntry *entry=leg->AddEntry("c1lep4jin2bin_hthad_Data","Data","lep");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep4jin2bin_hthad_uHcW","t#bar{t}#rightarrowWbHc (BR=1%)","f");
   entry->SetFillColor(2);
   entry->SetFillStyle(1001);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep4jin2bin_hthad_ttbarlight","t#bar{t}+light","f");
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep4jin2bin_hthad_ttbarcc","t#bar{t}+cc","f");

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
   entry=leg->AddEntry("c1lep4jin2bin_hthad_ttbarbb","t#bar{t}+bb","f");

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
   entry=leg->AddEntry("c1lep4jin2bin_hthad_topEW","Non-t#bar{t}","f");

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
   c_c1lep4jin2bin_hthad->cd();
   c_c1lep4jin2bin_hthad->Modified();
   c_c1lep4jin2bin_hthad->cd();
   c_c1lep4jin2bin_hthad->SetSelected(c_c1lep4jin2bin_hthad);
}
