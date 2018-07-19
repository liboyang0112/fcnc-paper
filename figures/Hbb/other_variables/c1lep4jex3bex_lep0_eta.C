void c1lep4jex3bex_lep0_eta()
{
//=========Macro generated from canvas: c_c1lep4jex3bex_lep0_eta/c_c1lep4jex3bex_lep0_eta
//=========  (Thu Jul 19 17:38:06 2018) by ROOT version6.04/14
   TCanvas *c_c1lep4jex3bex_lep0_eta = new TCanvas("c_c1lep4jex3bex_lep0_eta", "c_c1lep4jex3bex_lep0_eta",0,0,600,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c_c1lep4jex3bex_lep0_eta->SetHighLightColor(2);
   c_c1lep4jex3bex_lep0_eta->Range(0,0,1,1);
   c_c1lep4jex3bex_lep0_eta->SetFillColor(0);
   c_c1lep4jex3bex_lep0_eta->SetBorderMode(0);
   c_c1lep4jex3bex_lep0_eta->SetBorderSize(2);
   c_c1lep4jex3bex_lep0_eta->SetTickx(1);
   c_c1lep4jex3bex_lep0_eta->SetTicky(1);
   c_c1lep4jex3bex_lep0_eta->SetLeftMargin(0.16);
   c_c1lep4jex3bex_lep0_eta->SetRightMargin(0.05);
   c_c1lep4jex3bex_lep0_eta->SetTopMargin(0.05);
   c_c1lep4jex3bex_lep0_eta->SetBottomMargin(0.16);
   c_c1lep4jex3bex_lep0_eta->SetFrameBorderMode(0);
  
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
   Double_t xAxis301[11] = {-2.5, -2, -1.5, -1, -0.5, 0, 0.5, 1, 1.5, 2, 2.5}; 
   
   TH1D *h_dummy2__271 = new TH1D("h_dummy2__271","Data/MC",10, xAxis301);
   h_dummy2__271->SetMinimum(0.5);
   h_dummy2__271->SetMaximum(1.5);
   h_dummy2__271->SetEntries(2920988);
   h_dummy2__271->SetDirectory(0);
   h_dummy2__271->SetStats(0);
   h_dummy2__271->SetMarkerStyle(20);
   h_dummy2__271->SetMarkerSize(1.2);
   h_dummy2__271->GetXaxis()->SetTitle("lepton #eta");
   h_dummy2__271->GetXaxis()->SetRange(1,30);
   h_dummy2__271->GetXaxis()->SetLabelFont(43);
   h_dummy2__271->GetXaxis()->SetLabelOffset(0.025);
   h_dummy2__271->GetXaxis()->SetLabelSize(16.8);
   h_dummy2__271->GetXaxis()->SetTitleSize(21);
   h_dummy2__271->GetXaxis()->SetTitleOffset(5.05);
   h_dummy2__271->GetXaxis()->SetTitleFont(43);
   h_dummy2__271->GetYaxis()->SetTitle("Data / Bkg");
   h_dummy2__271->GetYaxis()->SetNdivisions(-504);
   h_dummy2__271->GetYaxis()->SetLabelFont(43);
   h_dummy2__271->GetYaxis()->SetLabelOffset(0.02);
   h_dummy2__271->GetYaxis()->SetLabelSize(16.8);
   h_dummy2__271->GetYaxis()->SetTitleSize(21);
   h_dummy2__271->GetYaxis()->SetTitleOffset(2.4);
   h_dummy2__271->GetYaxis()->SetTitleFont(43);
   h_dummy2__271->GetZaxis()->SetLabelFont(43);
   h_dummy2__271->GetZaxis()->SetLabelSize(21);
   h_dummy2__271->GetZaxis()->SetTitleSize(21);
   h_dummy2__271->GetZaxis()->SetTitleFont(43);
   h_dummy2__271->Draw("HIST");
   
   Double_t Graph_from_h_ratio_fx3121[10] = {
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
   Double_t Graph_from_h_ratio_fy3121[10] = {
   0.8742475,
   1.158898,
   1.057983,
   1.14173,
   1.173551,
   1.079823,
   1.175879,
   1.137684,
   1.116664,
   0.9249188};
   Double_t Graph_from_h_ratio_felx3121[10] = {
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
   Double_t Graph_from_h_ratio_fely3121[10] = {
   0.04426924,
   0.04617159,
   0.03010547,
   0.03247537,
   0.02523327,
   0.02944363,
   0.02660116,
   0.03578047,
   0.03703739,
   0.04769905};
   Double_t Graph_from_h_ratio_fehx3121[10] = {
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
   Double_t Graph_from_h_ratio_fehy3121[10] = {
   0.04426924,
   0.04617159,
   0.03010547,
   0.03247537,
   0.02523327,
   0.02944363,
   0.02660116,
   0.03578047,
   0.03703739,
   0.04769905};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(10,Graph_from_h_ratio_fx3121,Graph_from_h_ratio_fy3121,Graph_from_h_ratio_felx3121,Graph_from_h_ratio_fehx3121,Graph_from_h_ratio_fely3121,Graph_from_h_ratio_fehy3121);
   grae->SetName("Graph_from_h_ratio");
   grae->SetTitle("");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(24);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_h_ratio3121 = new TH1F("Graph_Graph_from_h_ratio3121","",100,-2.99945,2.99995);
   Graph_Graph_from_h_ratio3121->SetMinimum(0.7924691);
   Graph_Graph_from_h_ratio3121->SetMaximum(1.242579);
   Graph_Graph_from_h_ratio3121->SetDirectory(0);
   Graph_Graph_from_h_ratio3121->SetStats(0);
   Graph_Graph_from_h_ratio3121->SetLineWidth(2);
   Graph_Graph_from_h_ratio3121->SetMarkerStyle(20);
   Graph_Graph_from_h_ratio3121->SetMarkerSize(1.2);
   Graph_Graph_from_h_ratio3121->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3121->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3121->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3121->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3121->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3121->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3121->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3121->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3121->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3121->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3121->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3121->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3121->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3121->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_h_ratio3121);
   
   grae->Draw("pe0");
   TLine *line = new TLine(-2.5,1,2.5,1);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t g_ratio2_fx3122[10] = {
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
   Double_t g_ratio2_fy3122[10] = {
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
   Double_t g_ratio2_felx3122[10] = {
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
   Double_t g_ratio2_fely3122[10] = {
   0.1722021,
   0.1921626,
   0.1970687,
   0.2030207,
   0.2035462,
   0.1992356,
   0.2017772,
   0.1935458,
   0.1913291,
   0.178687};
   Double_t g_ratio2_fehx3122[10] = {
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
   Double_t g_ratio2_fehy3122[10] = {
   0.1722021,
   0.1921626,
   0.1970687,
   0.2030207,
   0.2035462,
   0.1992356,
   0.2017772,
   0.1935458,
   0.1913291,
   0.178687};
   grae = new TGraphAsymmErrors(10,g_ratio2_fx3122,g_ratio2_fy3122,g_ratio2_felx3122,g_ratio2_fehx3122,g_ratio2_fely3122,g_ratio2_fehy3122);
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
   
   TH1F *Graph_g_ratio23122 = new TH1F("Graph_g_ratio23122","",100,-3,3);
   Graph_g_ratio23122->SetMinimum(0.7557445);
   Graph_g_ratio23122->SetMaximum(1.244255);
   Graph_g_ratio23122->SetDirectory(0);
   Graph_g_ratio23122->SetStats(0);
   Graph_g_ratio23122->SetLineWidth(2);
   Graph_g_ratio23122->SetMarkerStyle(20);
   Graph_g_ratio23122->SetMarkerSize(1.2);
   Graph_g_ratio23122->GetXaxis()->SetLabelFont(43);
   Graph_g_ratio23122->GetXaxis()->SetLabelSize(21);
   Graph_g_ratio23122->GetXaxis()->SetTitleSize(21);
   Graph_g_ratio23122->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23122->GetXaxis()->SetTitleFont(43);
   Graph_g_ratio23122->GetYaxis()->SetLabelFont(43);
   Graph_g_ratio23122->GetYaxis()->SetLabelSize(21);
   Graph_g_ratio23122->GetYaxis()->SetTitleSize(21);
   Graph_g_ratio23122->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23122->GetYaxis()->SetTitleFont(43);
   Graph_g_ratio23122->GetZaxis()->SetLabelFont(43);
   Graph_g_ratio23122->GetZaxis()->SetLabelSize(21);
   Graph_g_ratio23122->GetZaxis()->SetTitleSize(21);
   Graph_g_ratio23122->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_ratio23122);
   
   grae->Draw("e2");
   Double_t xAxis302[11] = {-2.5, -2, -1.5, -1, -0.5, 0, 0.5, 1, 1.5, 2, 2.5}; 
   
   TH1D *h_dummy2_copy__272 = new TH1D("h_dummy2_copy__272","Data/MC",10, xAxis302);
   h_dummy2_copy__272->SetMinimum(0.5);
   h_dummy2_copy__272->SetMaximum(1.5);
   h_dummy2_copy__272->SetEntries(2920988);
   h_dummy2_copy__272->SetDirectory(0);
   h_dummy2_copy__272->SetStats(0);
   h_dummy2_copy__272->SetMarkerStyle(20);
   h_dummy2_copy__272->SetMarkerSize(1.2);
   h_dummy2_copy__272->GetXaxis()->SetTitle("lepton #eta");
   h_dummy2_copy__272->GetXaxis()->SetRange(1,30);
   h_dummy2_copy__272->GetXaxis()->SetLabelFont(43);
   h_dummy2_copy__272->GetXaxis()->SetLabelOffset(0.025);
   h_dummy2_copy__272->GetXaxis()->SetLabelSize(16.8);
   h_dummy2_copy__272->GetXaxis()->SetTitleSize(21);
   h_dummy2_copy__272->GetXaxis()->SetTitleOffset(5.05);
   h_dummy2_copy__272->GetXaxis()->SetTitleFont(43);
   h_dummy2_copy__272->GetYaxis()->SetTitle("Data / Bkg");
   h_dummy2_copy__272->GetYaxis()->SetNdivisions(-504);
   h_dummy2_copy__272->GetYaxis()->SetLabelFont(43);
   h_dummy2_copy__272->GetYaxis()->SetLabelOffset(0.02);
   h_dummy2_copy__272->GetYaxis()->SetLabelSize(16.8);
   h_dummy2_copy__272->GetYaxis()->SetTitleSize(21);
   h_dummy2_copy__272->GetYaxis()->SetTitleOffset(2.4);
   h_dummy2_copy__272->GetYaxis()->SetTitleFont(43);
   h_dummy2_copy__272->GetZaxis()->SetLabelFont(43);
   h_dummy2_copy__272->GetZaxis()->SetLabelSize(21);
   h_dummy2_copy__272->GetZaxis()->SetTitleSize(21);
   h_dummy2_copy__272->GetZaxis()->SetTitleFont(43);
   h_dummy2_copy__272->Draw("sameaxis");
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
   c_c1lep4jex3bex_lep0_eta->cd();
  
// ------------>Primitives in pad: pad0
   TPad *pad0 = new TPad("pad0", "pad0",0,0.2,1,1);
   pad0->Draw();
   pad0->cd();
   pad0->Range(-3.364198,-467.8959,2.808642,4211.062);
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
   Double_t xAxis303[11] = {-2.5, -2, -1.5, -1, -0.5, 0, 0.5, 1, 1.5, 2, 2.5}; 
   
   TH1D *h_dummy__273 = new TH1D("h_dummy__273","",10, xAxis303);
   h_dummy__273->SetMinimum(0);
   h_dummy__273->SetMaximum(3977.115);
   h_dummy__273->SetEntries(2920988);
   h_dummy__273->SetDirectory(0);
   h_dummy__273->SetStats(0);
   h_dummy__273->SetMarkerStyle(20);
   h_dummy__273->SetMarkerSize(1.2);
   h_dummy__273->GetXaxis()->SetRange(1,30);
   h_dummy__273->GetXaxis()->SetLabelFont(43);
   h_dummy__273->GetXaxis()->SetLabelSize(0);
   h_dummy__273->GetXaxis()->SetTitleSize(21);
   h_dummy__273->GetXaxis()->SetTitleOffset(1.4);
   h_dummy__273->GetXaxis()->SetTitleFont(43);
   h_dummy__273->GetYaxis()->SetTitle("Events");
   h_dummy__273->GetYaxis()->SetLabelFont(43);
   h_dummy__273->GetYaxis()->SetLabelSize(16.8);
   h_dummy__273->GetYaxis()->SetTitleSize(21);
   h_dummy__273->GetYaxis()->SetTitleOffset(2.4);
   h_dummy__273->GetYaxis()->SetTitleFont(43);
   h_dummy__273->GetZaxis()->SetLabelFont(43);
   h_dummy__273->GetZaxis()->SetLabelSize(21);
   h_dummy__273->GetZaxis()->SetTitleSize(21);
   h_dummy__273->GetZaxis()->SetTitleFont(43);
   h_dummy__273->Draw("HIST");
   
   THStack *h_stack = new THStack();
   h_stack->SetName("h_stack");
   h_stack->SetTitle("h_stack");
   Double_t xAxis304[11] = {-2.5, -2, -1.5, -1, -0.5, 0, 0.5, 1, 1.5, 2, 2.5}; 
   
   TH1F *h_stack_stack_31 = new TH1F("h_stack_stack_31","h_stack",10, xAxis304);
   h_stack_stack_31->SetMinimum(0);
   h_stack_stack_31->SetMaximum(2199.625);
   h_stack_stack_31->SetDirectory(0);
   h_stack_stack_31->SetStats(0);
   h_stack_stack_31->SetLineWidth(2);
   h_stack_stack_31->SetMarkerStyle(20);
   h_stack_stack_31->SetMarkerSize(1.2);
   h_stack_stack_31->GetXaxis()->SetLabelFont(43);
   h_stack_stack_31->GetXaxis()->SetLabelSize(21);
   h_stack_stack_31->GetXaxis()->SetTitleSize(21);
   h_stack_stack_31->GetXaxis()->SetTitleOffset(1.4);
   h_stack_stack_31->GetXaxis()->SetTitleFont(43);
   h_stack_stack_31->GetYaxis()->SetLabelFont(43);
   h_stack_stack_31->GetYaxis()->SetLabelSize(21);
   h_stack_stack_31->GetYaxis()->SetTitleSize(21);
   h_stack_stack_31->GetYaxis()->SetTitleOffset(1.4);
   h_stack_stack_31->GetYaxis()->SetTitleFont(43);
   h_stack_stack_31->GetZaxis()->SetLabelFont(43);
   h_stack_stack_31->GetZaxis()->SetLabelSize(21);
   h_stack_stack_31->GetZaxis()->SetTitleSize(21);
   h_stack_stack_31->GetZaxis()->SetTitleFont(43);
   h_stack->SetHistogram(h_stack_stack_31);
   
   Double_t xAxis305[11] = {-2.5, -2, -1.5, -1, -0.5, 0, 0.5, 1, 1.5, 2, 2.5}; 
   
   TH1D *c1lep4jex3bex_lep0_eta_topEW__274 = new TH1D("c1lep4jex3bex_lep0_eta_topEW__274","",10, xAxis305);
   c1lep4jex3bex_lep0_eta_topEW__274->SetBinContent(1,172.6285);
   c1lep4jex3bex_lep0_eta_topEW__274->SetBinContent(2,125.0065);
   c1lep4jex3bex_lep0_eta_topEW__274->SetBinContent(3,210.1421);
   c1lep4jex3bex_lep0_eta_topEW__274->SetBinContent(4,163.0509);
   c1lep4jex3bex_lep0_eta_topEW__274->SetBinContent(5,254.7346);
   c1lep4jex3bex_lep0_eta_topEW__274->SetBinContent(6,194.5877);
   c1lep4jex3bex_lep0_eta_topEW__274->SetBinContent(7,238.6736);
   c1lep4jex3bex_lep0_eta_topEW__274->SetBinContent(8,159.6616);
   c1lep4jex3bex_lep0_eta_topEW__274->SetBinContent(9,177.8278);
   c1lep4jex3bex_lep0_eta_topEW__274->SetBinContent(10,136.4988);
   c1lep4jex3bex_lep0_eta_topEW__274->SetBinContent(11,2.279454);
   c1lep4jex3bex_lep0_eta_topEW__274->SetBinError(1,30.92474);
   c1lep4jex3bex_lep0_eta_topEW__274->SetBinError(2,25.27465);
   c1lep4jex3bex_lep0_eta_topEW__274->SetBinError(3,30.09863);
   c1lep4jex3bex_lep0_eta_topEW__274->SetBinError(4,26.09155);
   c1lep4jex3bex_lep0_eta_topEW__274->SetBinError(5,30.61654);
   c1lep4jex3bex_lep0_eta_topEW__274->SetBinError(6,29.61479);
   c1lep4jex3bex_lep0_eta_topEW__274->SetBinError(7,29.13449);
   c1lep4jex3bex_lep0_eta_topEW__274->SetBinError(8,27.83265);
   c1lep4jex3bex_lep0_eta_topEW__274->SetBinError(9,28.15216);
   c1lep4jex3bex_lep0_eta_topEW__274->SetBinError(10,28.05755);
   c1lep4jex3bex_lep0_eta_topEW__274->SetBinError(11,1.467686);
   c1lep4jex3bex_lep0_eta_topEW__274->SetEntries(2895076);
   c1lep4jex3bex_lep0_eta_topEW__274->SetDirectory(0);
   c1lep4jex3bex_lep0_eta_topEW__274->SetStats(0);

   ci = TColor::GetColor("#66cc66");
   c1lep4jex3bex_lep0_eta_topEW__274->SetFillColor(ci);
   c1lep4jex3bex_lep0_eta_topEW__274->SetMarkerStyle(20);
   c1lep4jex3bex_lep0_eta_topEW__274->SetMarkerSize(1.2);
   c1lep4jex3bex_lep0_eta_topEW__274->GetXaxis()->SetTitle("Lepton #eta");
   c1lep4jex3bex_lep0_eta_topEW__274->GetXaxis()->SetRange(1,30);
   c1lep4jex3bex_lep0_eta_topEW__274->GetXaxis()->SetLabelFont(43);
   c1lep4jex3bex_lep0_eta_topEW__274->GetXaxis()->SetLabelSize(21);
   c1lep4jex3bex_lep0_eta_topEW__274->GetXaxis()->SetTitleSize(21);
   c1lep4jex3bex_lep0_eta_topEW__274->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_lep0_eta_topEW__274->GetXaxis()->SetTitleFont(43);
   c1lep4jex3bex_lep0_eta_topEW__274->GetYaxis()->SetLabelFont(43);
   c1lep4jex3bex_lep0_eta_topEW__274->GetYaxis()->SetLabelSize(21);
   c1lep4jex3bex_lep0_eta_topEW__274->GetYaxis()->SetTitleSize(21);
   c1lep4jex3bex_lep0_eta_topEW__274->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_lep0_eta_topEW__274->GetYaxis()->SetTitleFont(43);
   c1lep4jex3bex_lep0_eta_topEW__274->GetZaxis()->SetLabelFont(43);
   c1lep4jex3bex_lep0_eta_topEW__274->GetZaxis()->SetLabelSize(21);
   c1lep4jex3bex_lep0_eta_topEW__274->GetZaxis()->SetTitleSize(21);
   c1lep4jex3bex_lep0_eta_topEW__274->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jex3bex_lep0_eta_topEW,"");
   Double_t xAxis306[11] = {-2.5, -2, -1.5, -1, -0.5, 0, 0.5, 1, 1.5, 2, 2.5}; 
   
   TH1D *c1lep4jex3bex_lep0_eta_ttbarbb__275 = new TH1D("c1lep4jex3bex_lep0_eta_ttbarbb__275","",10, xAxis306);
   c1lep4jex3bex_lep0_eta_ttbarbb__275->SetBinContent(1,106.8249);
   c1lep4jex3bex_lep0_eta_ttbarbb__275->SetBinContent(2,146.7229);
   c1lep4jex3bex_lep0_eta_ttbarbb__275->SetBinContent(3,329.7321);
   c1lep4jex3bex_lep0_eta_ttbarbb__275->SetBinContent(4,327.2724);
   c1lep4jex3bex_lep0_eta_ttbarbb__275->SetBinContent(5,534.5203);
   c1lep4jex3bex_lep0_eta_ttbarbb__275->SetBinContent(6,359.7349);
   c1lep4jex3bex_lep0_eta_ttbarbb__275->SetBinContent(7,497.1854);
   c1lep4jex3bex_lep0_eta_ttbarbb__275->SetBinContent(8,260.629);
   c1lep4jex3bex_lep0_eta_ttbarbb__275->SetBinContent(9,228.1368);
   c1lep4jex3bex_lep0_eta_ttbarbb__275->SetBinContent(10,99.66916);
   c1lep4jex3bex_lep0_eta_ttbarbb__275->SetBinContent(11,6.187386);
   c1lep4jex3bex_lep0_eta_ttbarbb__275->SetBinError(1,8.002958);
   c1lep4jex3bex_lep0_eta_ttbarbb__275->SetBinError(2,7.517127);
   c1lep4jex3bex_lep0_eta_ttbarbb__275->SetBinError(3,11.45518);
   c1lep4jex3bex_lep0_eta_ttbarbb__275->SetBinError(4,12.16668);
   c1lep4jex3bex_lep0_eta_ttbarbb__275->SetBinError(5,14.97546);
   c1lep4jex3bex_lep0_eta_ttbarbb__275->SetBinError(6,11.87193);
   c1lep4jex3bex_lep0_eta_ttbarbb__275->SetBinError(7,15.40353);
   c1lep4jex3bex_lep0_eta_ttbarbb__275->SetBinError(8,10.09273);
   c1lep4jex3bex_lep0_eta_ttbarbb__275->SetBinError(9,9.447312);
   c1lep4jex3bex_lep0_eta_ttbarbb__275->SetBinError(10,7.203515);
   c1lep4jex3bex_lep0_eta_ttbarbb__275->SetBinError(11,1.300699);
   c1lep4jex3bex_lep0_eta_ttbarbb__275->SetEntries(10166);
   c1lep4jex3bex_lep0_eta_ttbarbb__275->SetDirectory(0);
   c1lep4jex3bex_lep0_eta_ttbarbb__275->SetStats(0);

   ci = TColor::GetColor("#6666cc");
   c1lep4jex3bex_lep0_eta_ttbarbb__275->SetFillColor(ci);
   c1lep4jex3bex_lep0_eta_ttbarbb__275->SetMarkerStyle(20);
   c1lep4jex3bex_lep0_eta_ttbarbb__275->SetMarkerSize(1.2);
   c1lep4jex3bex_lep0_eta_ttbarbb__275->GetXaxis()->SetTitle("Lepton #eta");
   c1lep4jex3bex_lep0_eta_ttbarbb__275->GetXaxis()->SetRange(1,30);
   c1lep4jex3bex_lep0_eta_ttbarbb__275->GetXaxis()->SetLabelFont(43);
   c1lep4jex3bex_lep0_eta_ttbarbb__275->GetXaxis()->SetLabelSize(21);
   c1lep4jex3bex_lep0_eta_ttbarbb__275->GetXaxis()->SetTitleSize(21);
   c1lep4jex3bex_lep0_eta_ttbarbb__275->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_lep0_eta_ttbarbb__275->GetXaxis()->SetTitleFont(43);
   c1lep4jex3bex_lep0_eta_ttbarbb__275->GetYaxis()->SetLabelFont(43);
   c1lep4jex3bex_lep0_eta_ttbarbb__275->GetYaxis()->SetLabelSize(21);
   c1lep4jex3bex_lep0_eta_ttbarbb__275->GetYaxis()->SetTitleSize(21);
   c1lep4jex3bex_lep0_eta_ttbarbb__275->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_lep0_eta_ttbarbb__275->GetYaxis()->SetTitleFont(43);
   c1lep4jex3bex_lep0_eta_ttbarbb__275->GetZaxis()->SetLabelFont(43);
   c1lep4jex3bex_lep0_eta_ttbarbb__275->GetZaxis()->SetLabelSize(21);
   c1lep4jex3bex_lep0_eta_ttbarbb__275->GetZaxis()->SetTitleSize(21);
   c1lep4jex3bex_lep0_eta_ttbarbb__275->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jex3bex_lep0_eta_ttbarbb,"");
   Double_t xAxis307[11] = {-2.5, -2, -1.5, -1, -0.5, 0, 0.5, 1, 1.5, 2, 2.5}; 
   
   TH1D *c1lep4jex3bex_lep0_eta_ttbarcc__276 = new TH1D("c1lep4jex3bex_lep0_eta_ttbarcc__276","",10, xAxis307);
   c1lep4jex3bex_lep0_eta_ttbarcc__276->SetBinContent(1,33.20303);
   c1lep4jex3bex_lep0_eta_ttbarcc__276->SetBinContent(2,52.39316);
   c1lep4jex3bex_lep0_eta_ttbarcc__276->SetBinContent(3,122.033);
   c1lep4jex3bex_lep0_eta_ttbarcc__276->SetBinContent(4,119.0944);
   c1lep4jex3bex_lep0_eta_ttbarcc__276->SetBinContent(5,201.3772);
   c1lep4jex3bex_lep0_eta_ttbarcc__276->SetBinContent(6,141.8749);
   c1lep4jex3bex_lep0_eta_ttbarcc__276->SetBinContent(7,176.0496);
   c1lep4jex3bex_lep0_eta_ttbarcc__276->SetBinContent(8,91.32097);
   c1lep4jex3bex_lep0_eta_ttbarcc__276->SetBinContent(9,82.4068);
   c1lep4jex3bex_lep0_eta_ttbarcc__276->SetBinContent(10,29.88904);
   c1lep4jex3bex_lep0_eta_ttbarcc__276->SetBinContent(11,3.008125);
   c1lep4jex3bex_lep0_eta_ttbarcc__276->SetBinError(1,4.42611);
   c1lep4jex3bex_lep0_eta_ttbarcc__276->SetBinError(2,4.782317);
   c1lep4jex3bex_lep0_eta_ttbarcc__276->SetBinError(3,8.084954);
   c1lep4jex3bex_lep0_eta_ttbarcc__276->SetBinError(4,7.062416);
   c1lep4jex3bex_lep0_eta_ttbarcc__276->SetBinError(5,9.247123);
   c1lep4jex3bex_lep0_eta_ttbarcc__276->SetBinError(6,7.889429);
   c1lep4jex3bex_lep0_eta_ttbarcc__276->SetBinError(7,8.109943);
   c1lep4jex3bex_lep0_eta_ttbarcc__276->SetBinError(8,6.287489);
   c1lep4jex3bex_lep0_eta_ttbarcc__276->SetBinError(9,5.880104);
   c1lep4jex3bex_lep0_eta_ttbarcc__276->SetBinError(10,3.216727);
   c1lep4jex3bex_lep0_eta_ttbarcc__276->SetBinError(11,1.19917);
   c1lep4jex3bex_lep0_eta_ttbarcc__276->SetEntries(3206);
   c1lep4jex3bex_lep0_eta_ttbarcc__276->SetDirectory(0);
   c1lep4jex3bex_lep0_eta_ttbarcc__276->SetStats(0);

   ci = TColor::GetColor("#ccccff");
   c1lep4jex3bex_lep0_eta_ttbarcc__276->SetFillColor(ci);
   c1lep4jex3bex_lep0_eta_ttbarcc__276->SetMarkerStyle(20);
   c1lep4jex3bex_lep0_eta_ttbarcc__276->SetMarkerSize(1.2);
   c1lep4jex3bex_lep0_eta_ttbarcc__276->GetXaxis()->SetTitle("Lepton #eta");
   c1lep4jex3bex_lep0_eta_ttbarcc__276->GetXaxis()->SetRange(1,30);
   c1lep4jex3bex_lep0_eta_ttbarcc__276->GetXaxis()->SetLabelFont(43);
   c1lep4jex3bex_lep0_eta_ttbarcc__276->GetXaxis()->SetLabelSize(21);
   c1lep4jex3bex_lep0_eta_ttbarcc__276->GetXaxis()->SetTitleSize(21);
   c1lep4jex3bex_lep0_eta_ttbarcc__276->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_lep0_eta_ttbarcc__276->GetXaxis()->SetTitleFont(43);
   c1lep4jex3bex_lep0_eta_ttbarcc__276->GetYaxis()->SetLabelFont(43);
   c1lep4jex3bex_lep0_eta_ttbarcc__276->GetYaxis()->SetLabelSize(21);
   c1lep4jex3bex_lep0_eta_ttbarcc__276->GetYaxis()->SetTitleSize(21);
   c1lep4jex3bex_lep0_eta_ttbarcc__276->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_lep0_eta_ttbarcc__276->GetYaxis()->SetTitleFont(43);
   c1lep4jex3bex_lep0_eta_ttbarcc__276->GetZaxis()->SetLabelFont(43);
   c1lep4jex3bex_lep0_eta_ttbarcc__276->GetZaxis()->SetLabelSize(21);
   c1lep4jex3bex_lep0_eta_ttbarcc__276->GetZaxis()->SetTitleSize(21);
   c1lep4jex3bex_lep0_eta_ttbarcc__276->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jex3bex_lep0_eta_ttbarcc,"");
   Double_t xAxis308[11] = {-2.5, -2, -1.5, -1, -0.5, 0, 0.5, 1, 1.5, 2, 2.5}; 
   
   TH1D *c1lep4jex3bex_lep0_eta_ttbarlight__277 = new TH1D("c1lep4jex3bex_lep0_eta_ttbarlight__277","",10, xAxis308);
   c1lep4jex3bex_lep0_eta_ttbarlight__277->SetBinContent(1,133.4414);
   c1lep4jex3bex_lep0_eta_ttbarlight__277->SetBinContent(2,219.4975);
   c1lep4jex3bex_lep0_eta_ttbarlight__277->SetBinContent(3,505.4079);
   c1lep4jex3bex_lep0_eta_ttbarlight__277->SetBinContent(4,473.1501);
   c1lep4jex3bex_lep0_eta_ttbarlight__277->SetBinContent(5,852.4924);
   c1lep4jex3bex_lep0_eta_ttbarlight__277->SetBinContent(6,549.3772);
   c1lep4jex3bex_lep0_eta_ttbarlight__277->SetBinContent(7,749.8263);
   c1lep4jex3bex_lep0_eta_ttbarlight__277->SetBinContent(8,377.0359);
   c1lep4jex3bex_lep0_eta_ttbarlight__277->SetBinContent(9,325.6607);
   c1lep4jex3bex_lep0_eta_ttbarlight__277->SetBinContent(10,140.4651);
   c1lep4jex3bex_lep0_eta_ttbarlight__277->SetBinContent(11,10.21276);
   c1lep4jex3bex_lep0_eta_ttbarlight__277->SetBinError(1,8.881166);
   c1lep4jex3bex_lep0_eta_ttbarlight__277->SetBinError(2,10.17994);
   c1lep4jex3bex_lep0_eta_ttbarlight__277->SetBinError(3,16.70387);
   c1lep4jex3bex_lep0_eta_ttbarlight__277->SetBinError(4,15.51374);
   c1lep4jex3bex_lep0_eta_ttbarlight__277->SetBinError(5,22.9649);
   c1lep4jex3bex_lep0_eta_ttbarlight__277->SetBinError(6,16.54808);
   c1lep4jex3bex_lep0_eta_ttbarlight__277->SetBinError(7,19.00474);
   c1lep4jex3bex_lep0_eta_ttbarlight__277->SetBinError(8,14.3414);
   c1lep4jex3bex_lep0_eta_ttbarlight__277->SetBinError(9,12.94954);
   c1lep4jex3bex_lep0_eta_ttbarlight__277->SetBinError(10,8.655229);
   c1lep4jex3bex_lep0_eta_ttbarlight__277->SetBinError(11,2.144576);
   c1lep4jex3bex_lep0_eta_ttbarlight__277->SetEntries(12530);
   c1lep4jex3bex_lep0_eta_ttbarlight__277->SetDirectory(0);
   c1lep4jex3bex_lep0_eta_ttbarlight__277->SetStats(0);
   c1lep4jex3bex_lep0_eta_ttbarlight__277->SetMarkerStyle(20);
   c1lep4jex3bex_lep0_eta_ttbarlight__277->SetMarkerSize(1.2);
   c1lep4jex3bex_lep0_eta_ttbarlight__277->GetXaxis()->SetTitle("Lepton #eta");
   c1lep4jex3bex_lep0_eta_ttbarlight__277->GetXaxis()->SetRange(1,30);
   c1lep4jex3bex_lep0_eta_ttbarlight__277->GetXaxis()->SetLabelFont(43);
   c1lep4jex3bex_lep0_eta_ttbarlight__277->GetXaxis()->SetLabelSize(21);
   c1lep4jex3bex_lep0_eta_ttbarlight__277->GetXaxis()->SetTitleSize(21);
   c1lep4jex3bex_lep0_eta_ttbarlight__277->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_lep0_eta_ttbarlight__277->GetXaxis()->SetTitleFont(43);
   c1lep4jex3bex_lep0_eta_ttbarlight__277->GetYaxis()->SetLabelFont(43);
   c1lep4jex3bex_lep0_eta_ttbarlight__277->GetYaxis()->SetLabelSize(21);
   c1lep4jex3bex_lep0_eta_ttbarlight__277->GetYaxis()->SetTitleSize(21);
   c1lep4jex3bex_lep0_eta_ttbarlight__277->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_lep0_eta_ttbarlight__277->GetYaxis()->SetTitleFont(43);
   c1lep4jex3bex_lep0_eta_ttbarlight__277->GetZaxis()->SetLabelFont(43);
   c1lep4jex3bex_lep0_eta_ttbarlight__277->GetZaxis()->SetLabelSize(21);
   c1lep4jex3bex_lep0_eta_ttbarlight__277->GetZaxis()->SetTitleSize(21);
   c1lep4jex3bex_lep0_eta_ttbarlight__277->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jex3bex_lep0_eta_ttbarlight,"");
   Double_t xAxis309[11] = {-2.5, -2, -1.5, -1, -0.5, 0, 0.5, 1, 1.5, 2, 2.5}; 
   
   TH1D *c1lep4jex3bex_lep0_eta_uHcW__278 = new TH1D("c1lep4jex3bex_lep0_eta_uHcW__278","",10, xAxis309);
   c1lep4jex3bex_lep0_eta_uHcW__278->SetBinContent(1,44.86134);
   c1lep4jex3bex_lep0_eta_uHcW__278->SetBinContent(2,61.39496);
   c1lep4jex3bex_lep0_eta_uHcW__278->SetBinContent(3,131.4982);
   c1lep4jex3bex_lep0_eta_uHcW__278->SetBinContent(4,139.7118);
   c1lep4jex3bex_lep0_eta_uHcW__278->SetBinContent(5,251.7567);
   c1lep4jex3bex_lep0_eta_uHcW__278->SetBinContent(6,152.3867);
   c1lep4jex3bex_lep0_eta_uHcW__278->SetBinContent(7,221.3407);
   c1lep4jex3bex_lep0_eta_uHcW__278->SetBinContent(8,107.5431);
   c1lep4jex3bex_lep0_eta_uHcW__278->SetBinContent(9,112.9229);
   c1lep4jex3bex_lep0_eta_uHcW__278->SetBinContent(10,36.96862);
   c1lep4jex3bex_lep0_eta_uHcW__278->SetBinContent(11,0.7602991);
   c1lep4jex3bex_lep0_eta_uHcW__278->SetBinError(1,5.32824);
   c1lep4jex3bex_lep0_eta_uHcW__278->SetBinError(2,7.195375);
   c1lep4jex3bex_lep0_eta_uHcW__278->SetBinError(3,10.67204);
   c1lep4jex3bex_lep0_eta_uHcW__278->SetBinError(4,10.84895);
   c1lep4jex3bex_lep0_eta_uHcW__278->SetBinError(5,15.06616);
   c1lep4jex3bex_lep0_eta_uHcW__278->SetBinError(6,11.49783);
   c1lep4jex3bex_lep0_eta_uHcW__278->SetBinError(7,13.26002);
   c1lep4jex3bex_lep0_eta_uHcW__278->SetBinError(8,9.325463);
   c1lep4jex3bex_lep0_eta_uHcW__278->SetBinError(9,10.43571);
   c1lep4jex3bex_lep0_eta_uHcW__278->SetBinError(10,5.009598);
   c1lep4jex3bex_lep0_eta_uHcW__278->SetBinError(11,1.345138);
   c1lep4jex3bex_lep0_eta_uHcW__278->SetEntries(5559);
   c1lep4jex3bex_lep0_eta_uHcW__278->SetDirectory(0);
   c1lep4jex3bex_lep0_eta_uHcW__278->SetStats(0);
   c1lep4jex3bex_lep0_eta_uHcW__278->SetFillColor(2);
   c1lep4jex3bex_lep0_eta_uHcW__278->SetLineColor(2);
   c1lep4jex3bex_lep0_eta_uHcW__278->SetMarkerStyle(20);
   c1lep4jex3bex_lep0_eta_uHcW__278->SetMarkerSize(1.2);
   c1lep4jex3bex_lep0_eta_uHcW__278->GetXaxis()->SetTitle("Lepton #eta");
   c1lep4jex3bex_lep0_eta_uHcW__278->GetXaxis()->SetRange(1,30);
   c1lep4jex3bex_lep0_eta_uHcW__278->GetXaxis()->SetLabelFont(43);
   c1lep4jex3bex_lep0_eta_uHcW__278->GetXaxis()->SetLabelSize(21);
   c1lep4jex3bex_lep0_eta_uHcW__278->GetXaxis()->SetTitleSize(21);
   c1lep4jex3bex_lep0_eta_uHcW__278->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_lep0_eta_uHcW__278->GetXaxis()->SetTitleFont(43);
   c1lep4jex3bex_lep0_eta_uHcW__278->GetYaxis()->SetLabelFont(43);
   c1lep4jex3bex_lep0_eta_uHcW__278->GetYaxis()->SetLabelSize(21);
   c1lep4jex3bex_lep0_eta_uHcW__278->GetYaxis()->SetTitleSize(21);
   c1lep4jex3bex_lep0_eta_uHcW__278->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_lep0_eta_uHcW__278->GetYaxis()->SetTitleFont(43);
   c1lep4jex3bex_lep0_eta_uHcW__278->GetZaxis()->SetLabelFont(43);
   c1lep4jex3bex_lep0_eta_uHcW__278->GetZaxis()->SetLabelSize(21);
   c1lep4jex3bex_lep0_eta_uHcW__278->GetZaxis()->SetTitleSize(21);
   c1lep4jex3bex_lep0_eta_uHcW__278->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jex3bex_lep0_eta_uHcW,"");
   h_stack->Draw("hist same");
   
   Double_t g_totErr_fx3123[10] = {
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
   Double_t g_totErr_fy3123[10] = {
   446.0979,
   543.62,
   1167.315,
   1082.568,
   1843.124,
   1245.575,
   1661.735,
   888.6474,
   814.0321,
   406.5222};
   Double_t g_totErr_felx3123[10] = {
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
   Double_t g_totErr_fely3123[10] = {
   76.819,
   104.4634,
   230.0413,
   219.7837,
   375.161,
   248.1628,
   335.3001,
   171.994,
   155.7481,
   72.64022};
   Double_t g_totErr_fehx3123[10] = {
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
   Double_t g_totErr_fehy3123[10] = {
   76.819,
   104.4634,
   230.0413,
   219.7837,
   375.161,
   248.1628,
   335.3001,
   171.994,
   155.7481,
   72.64022};
   grae = new TGraphAsymmErrors(10,g_totErr_fx3123,g_totErr_fy3123,g_totErr_felx3123,g_totErr_fehx3123,g_totErr_fely3123,g_totErr_fehy3123);
   grae->SetName("g_totErr");
   grae->SetTitle("");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(3354);
   grae->SetLineColor(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0);
   
   TH1F *Graph_g_totErr3123 = new TH1F("Graph_g_totErr3123","",100,-3,3);
   Graph_g_totErr3123->SetMinimum(145.4416);
   Graph_g_totErr3123->SetMaximum(2406.726);
   Graph_g_totErr3123->SetDirectory(0);
   Graph_g_totErr3123->SetStats(0);
   Graph_g_totErr3123->SetLineWidth(2);
   Graph_g_totErr3123->SetMarkerStyle(20);
   Graph_g_totErr3123->SetMarkerSize(1.2);
   Graph_g_totErr3123->GetXaxis()->SetLabelFont(43);
   Graph_g_totErr3123->GetXaxis()->SetLabelSize(21);
   Graph_g_totErr3123->GetXaxis()->SetTitleSize(21);
   Graph_g_totErr3123->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_totErr3123->GetXaxis()->SetTitleFont(43);
   Graph_g_totErr3123->GetYaxis()->SetLabelFont(43);
   Graph_g_totErr3123->GetYaxis()->SetLabelSize(21);
   Graph_g_totErr3123->GetYaxis()->SetTitleSize(21);
   Graph_g_totErr3123->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_totErr3123->GetYaxis()->SetTitleFont(43);
   Graph_g_totErr3123->GetZaxis()->SetLabelFont(43);
   Graph_g_totErr3123->GetZaxis()->SetLabelSize(21);
   Graph_g_totErr3123->GetZaxis()->SetTitleSize(21);
   Graph_g_totErr3123->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_totErr3123);
   
   grae->Draw("e2");
   
   Double_t Graph_from_c1lep4jex3bex_lep0_eta_Data_fx3124[10] = {
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
   Double_t Graph_from_c1lep4jex3bex_lep0_eta_Data_fy3124[10] = {
   390,
   630,
   1235,
   1236,
   2163,
   1345,
   1954,
   1011,
   909,
   376};
   Double_t Graph_from_c1lep4jex3bex_lep0_eta_Data_felx3124[10] = {
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
   Double_t Graph_from_c1lep4jex3bex_lep0_eta_Data_fely3124[10] = {
   19.74842,
   25.0998,
   35.14257,
   35.15679,
   46.50806,
   36.67424,
   44.20407,
   31.79623,
   30.14963,
   19.39072};
   Double_t Graph_from_c1lep4jex3bex_lep0_eta_Data_fehx3124[10] = {
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
   Double_t Graph_from_c1lep4jex3bex_lep0_eta_Data_fehy3124[10] = {
   19.74842,
   25.0998,
   35.14257,
   35.15679,
   46.50806,
   36.67424,
   44.20407,
   31.79623,
   30.14963,
   19.39072};
   grae = new TGraphAsymmErrors(10,Graph_from_c1lep4jex3bex_lep0_eta_Data_fx3124,Graph_from_c1lep4jex3bex_lep0_eta_Data_fy3124,Graph_from_c1lep4jex3bex_lep0_eta_Data_felx3124,Graph_from_c1lep4jex3bex_lep0_eta_Data_fehx3124,Graph_from_c1lep4jex3bex_lep0_eta_Data_fely3124,Graph_from_c1lep4jex3bex_lep0_eta_Data_fehy3124);
   grae->SetName("Graph_from_c1lep4jex3bex_lep0_eta_Data");
   grae->SetTitle("");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_c1lep4jex3bex_lep0_eta_Data3124 = new TH1F("Graph_Graph_from_c1lep4jex3bex_lep0_eta_Data3124","",100,-2.99945,2.99995);
   Graph_Graph_from_c1lep4jex3bex_lep0_eta_Data3124->SetMinimum(171.3194);
   Graph_Graph_from_c1lep4jex3bex_lep0_eta_Data3124->SetMaximum(2394.798);
   Graph_Graph_from_c1lep4jex3bex_lep0_eta_Data3124->SetDirectory(0);
   Graph_Graph_from_c1lep4jex3bex_lep0_eta_Data3124->SetStats(0);
   Graph_Graph_from_c1lep4jex3bex_lep0_eta_Data3124->SetLineWidth(2);
   Graph_Graph_from_c1lep4jex3bex_lep0_eta_Data3124->SetMarkerStyle(20);
   Graph_Graph_from_c1lep4jex3bex_lep0_eta_Data3124->SetMarkerSize(1.2);
   Graph_Graph_from_c1lep4jex3bex_lep0_eta_Data3124->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep4jex3bex_lep0_eta_Data3124->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep4jex3bex_lep0_eta_Data3124->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep4jex3bex_lep0_eta_Data3124->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep4jex3bex_lep0_eta_Data3124->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep4jex3bex_lep0_eta_Data3124->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep4jex3bex_lep0_eta_Data3124->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep4jex3bex_lep0_eta_Data3124->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep4jex3bex_lep0_eta_Data3124->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep4jex3bex_lep0_eta_Data3124->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep4jex3bex_lep0_eta_Data3124->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep4jex3bex_lep0_eta_Data3124->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep4jex3bex_lep0_eta_Data3124->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep4jex3bex_lep0_eta_Data3124->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_c1lep4jex3bex_lep0_eta_Data3124);
   
   grae->Draw("ep1 ");
   Double_t xAxis310[11] = {-2.5, -2, -1.5, -1, -0.5, 0, 0.5, 1, 1.5, 2, 2.5}; 
   
   TH1D *h_dummy_copy__279 = new TH1D("h_dummy_copy__279","",10, xAxis310);
   h_dummy_copy__279->SetEntries(2920988);
   h_dummy_copy__279->SetDirectory(0);
   h_dummy_copy__279->SetStats(0);
   h_dummy_copy__279->SetMarkerStyle(20);
   h_dummy_copy__279->SetMarkerSize(1.2);
   h_dummy_copy__279->GetXaxis()->SetTitle("lepton #eta");
   h_dummy_copy__279->GetXaxis()->SetRange(1,30);
   h_dummy_copy__279->GetXaxis()->SetLabelFont(43);
   h_dummy_copy__279->GetXaxis()->SetLabelSize(21);
   h_dummy_copy__279->GetXaxis()->SetTitleSize(21);
   h_dummy_copy__279->GetXaxis()->SetTitleOffset(1.4);
   h_dummy_copy__279->GetXaxis()->SetTitleFont(43);
   h_dummy_copy__279->GetYaxis()->SetTitle("Events");
   h_dummy_copy__279->GetYaxis()->SetLabelFont(43);
   h_dummy_copy__279->GetYaxis()->SetLabelSize(16.8);
   h_dummy_copy__279->GetYaxis()->SetTitleSize(21);
   h_dummy_copy__279->GetYaxis()->SetTitleOffset(2.4);
   h_dummy_copy__279->GetYaxis()->SetTitleFont(43);
   h_dummy_copy__279->GetZaxis()->SetLabelFont(43);
   h_dummy_copy__279->GetZaxis()->SetLabelSize(21);
   h_dummy_copy__279->GetZaxis()->SetTitleSize(21);
   h_dummy_copy__279->GetZaxis()->SetTitleFont(43);
   h_dummy_copy__279->Draw("sameaxis");
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
   TLegendEntry *entry=leg->AddEntry("c1lep4jex3bex_lep0_eta_Data","Data","lep");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep4jex3bex_lep0_eta_uHcW","t#bar{t}#rightarrowWbHc (BR=1%)","f");
   entry->SetFillColor(2);
   entry->SetFillStyle(1001);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep4jex3bex_lep0_eta_ttbarlight","t#bar{t}+light","f");
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep4jex3bex_lep0_eta_ttbarcc","t#bar{t}+cc","f");

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
   entry=leg->AddEntry("c1lep4jex3bex_lep0_eta_ttbarbb","t#bar{t}+bb","f");

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
   entry=leg->AddEntry("c1lep4jex3bex_lep0_eta_topEW","Non-t#bar{t}","f");

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
   c_c1lep4jex3bex_lep0_eta->cd();
   c_c1lep4jex3bex_lep0_eta->Modified();
   c_c1lep4jex3bex_lep0_eta->cd();
   c_c1lep4jex3bex_lep0_eta->SetSelected(c_c1lep4jex3bex_lep0_eta);
}
