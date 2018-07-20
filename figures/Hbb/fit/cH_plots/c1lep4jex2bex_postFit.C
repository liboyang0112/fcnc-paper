void c1lep4jex2bex_postFit()
{
//=========Macro generated from canvas: c_c1lep4jex2bex_postFit/c_c1lep4jex2bex_postFit
//=========  (Fri Jul 20 11:23:07 2018) by ROOT version6.04/14
   TCanvas *c_c1lep4jex2bex_postFit = new TCanvas("c_c1lep4jex2bex_postFit", "c_c1lep4jex2bex_postFit",0,0,600,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c_c1lep4jex2bex_postFit->SetHighLightColor(2);
   c_c1lep4jex2bex_postFit->Range(0,0,1,1);
   c_c1lep4jex2bex_postFit->SetFillColor(0);
   c_c1lep4jex2bex_postFit->SetBorderMode(0);
   c_c1lep4jex2bex_postFit->SetBorderSize(2);
   c_c1lep4jex2bex_postFit->SetTickx(1);
   c_c1lep4jex2bex_postFit->SetTicky(1);
   c_c1lep4jex2bex_postFit->SetLeftMargin(0.16);
   c_c1lep4jex2bex_postFit->SetRightMargin(0.05);
   c_c1lep4jex2bex_postFit->SetTopMargin(0.05);
   c_c1lep4jex2bex_postFit->SetBottomMargin(0.16);
   c_c1lep4jex2bex_postFit->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0,1,0.28);
   pad1->Draw();
   pad1->cd();
   pad1->Range(0.5308642,-0.0873016,1.024691,1.5);
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
   Double_t xAxis1[2] = {0.6, 1}; 
   
   TH1D *h_dummy2__1 = new TH1D("h_dummy2__1","Data/MC",1, xAxis1);
   h_dummy2__1->SetMinimum(0.5);
   h_dummy2__1->SetMaximum(1.5);
   h_dummy2__1->SetEntries(5042434);
   h_dummy2__1->SetDirectory(0);
   h_dummy2__1->SetStats(0);
   h_dummy2__1->SetMarkerStyle(20);
   h_dummy2__1->SetMarkerSize(1.2);
   h_dummy2__1->GetXaxis()->SetTitle("LH discriminant");
   h_dummy2__1->GetXaxis()->SetRange(1,20);
   h_dummy2__1->GetXaxis()->SetLabelFont(43);
   h_dummy2__1->GetXaxis()->SetLabelOffset(0.025);
   h_dummy2__1->GetXaxis()->SetLabelSize(16.8);
   h_dummy2__1->GetXaxis()->SetTitleSize(21);
   h_dummy2__1->GetXaxis()->SetTitleOffset(5.05);
   h_dummy2__1->GetXaxis()->SetTitleFont(43);
   h_dummy2__1->GetYaxis()->SetTitle("Data / Pred");
   h_dummy2__1->GetYaxis()->CenterTitle(true);
   h_dummy2__1->GetYaxis()->SetNdivisions(-504);
   h_dummy2__1->GetYaxis()->SetLabelFont(43);
   h_dummy2__1->GetYaxis()->SetLabelOffset(0.02);
   h_dummy2__1->GetYaxis()->SetLabelSize(16.8);
   h_dummy2__1->GetYaxis()->SetTitleSize(21);
   h_dummy2__1->GetYaxis()->SetTitleOffset(2.4);
   h_dummy2__1->GetYaxis()->SetTitleFont(43);
   h_dummy2__1->GetZaxis()->SetLabelFont(43);
   h_dummy2__1->GetZaxis()->SetLabelSize(21);
   h_dummy2__1->GetZaxis()->SetTitleSize(21);
   h_dummy2__1->GetZaxis()->SetTitleFont(43);
   h_dummy2__1->Draw("HIST");
   
   Double_t Graph_from_h_ratio_fx3001[1] = {
   0.8};
   Double_t Graph_from_h_ratio_fy3001[1] = {
   0.9955286};
   Double_t Graph_from_h_ratio_felx3001[1] = {
   0.1996};
   Double_t Graph_from_h_ratio_fely3001[1] = {
   0.002867019};
   Double_t Graph_from_h_ratio_fehx3001[1] = {
   0.2};
   Double_t Graph_from_h_ratio_fehy3001[1] = {
   0.002867019};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(1,Graph_from_h_ratio_fx3001,Graph_from_h_ratio_fy3001,Graph_from_h_ratio_felx3001,Graph_from_h_ratio_fehx3001,Graph_from_h_ratio_fely3001,Graph_from_h_ratio_fehy3001);
   grae->SetName("Graph_from_h_ratio");
   grae->SetTitle("FcncDiscriminant");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(24);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_h_ratio3001 = new TH1F("Graph_Graph_from_h_ratio3001","FcncDiscriminant",100,0.56044,1.03996);
   Graph_Graph_from_h_ratio3001->SetMinimum(0.9920882);
   Graph_Graph_from_h_ratio3001->SetMaximum(0.9989691);
   Graph_Graph_from_h_ratio3001->SetDirectory(0);
   Graph_Graph_from_h_ratio3001->SetStats(0);
   Graph_Graph_from_h_ratio3001->SetLineWidth(2);
   Graph_Graph_from_h_ratio3001->SetMarkerStyle(20);
   Graph_Graph_from_h_ratio3001->SetMarkerSize(1.2);
   Graph_Graph_from_h_ratio3001->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3001->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3001->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3001->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3001->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3001->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3001->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3001->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3001->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3001->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3001->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3001->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3001->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3001->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_h_ratio3001);
   
   grae->Draw("pe0");
   TLine *line = new TLine(0.6,1,1,1);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t g_ratio2_fx3002[1] = {
   0.8};
   Double_t g_ratio2_fy3002[1] = {
   1};
   Double_t g_ratio2_felx3002[1] = {
   0.2};
   Double_t g_ratio2_fely3002[1] = {
   0.01865469};
   Double_t g_ratio2_fehx3002[1] = {
   0.2};
   Double_t g_ratio2_fehy3002[1] = {
   0.01865469};
   grae = new TGraphAsymmErrors(1,g_ratio2_fx3002,g_ratio2_fy3002,g_ratio2_felx3002,g_ratio2_fehx3002,g_ratio2_fely3002,g_ratio2_fehy3002);
   grae->SetName("g_ratio2");
   grae->SetTitle("FcncDiscriminant");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(3354);
   grae->SetLineColor(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0);
   
   TH1F *Graph_g_ratio23002 = new TH1F("Graph_g_ratio23002","FcncDiscriminant",100,0.56,1.04);
   Graph_g_ratio23002->SetMinimum(0.9776144);
   Graph_g_ratio23002->SetMaximum(1.022386);
   Graph_g_ratio23002->SetDirectory(0);
   Graph_g_ratio23002->SetStats(0);
   Graph_g_ratio23002->SetLineWidth(2);
   Graph_g_ratio23002->SetMarkerStyle(20);
   Graph_g_ratio23002->SetMarkerSize(1.2);
   Graph_g_ratio23002->GetXaxis()->SetLabelFont(43);
   Graph_g_ratio23002->GetXaxis()->SetLabelSize(21);
   Graph_g_ratio23002->GetXaxis()->SetTitleSize(21);
   Graph_g_ratio23002->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23002->GetXaxis()->SetTitleFont(43);
   Graph_g_ratio23002->GetYaxis()->SetLabelFont(43);
   Graph_g_ratio23002->GetYaxis()->SetLabelSize(21);
   Graph_g_ratio23002->GetYaxis()->SetTitleSize(21);
   Graph_g_ratio23002->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23002->GetYaxis()->SetTitleFont(43);
   Graph_g_ratio23002->GetZaxis()->SetLabelFont(43);
   Graph_g_ratio23002->GetZaxis()->SetLabelSize(21);
   Graph_g_ratio23002->GetZaxis()->SetTitleSize(21);
   Graph_g_ratio23002->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_ratio23002);
   
   grae->Draw("e2");
   Double_t xAxis2[2] = {0.6, 1}; 
   
   TH1D *h_dummy2_copy__2 = new TH1D("h_dummy2_copy__2","Data/MC",1, xAxis2);
   h_dummy2_copy__2->SetMinimum(0.5);
   h_dummy2_copy__2->SetMaximum(1.5);
   h_dummy2_copy__2->SetEntries(5042434);
   h_dummy2_copy__2->SetDirectory(0);
   h_dummy2_copy__2->SetStats(0);
   h_dummy2_copy__2->SetMarkerStyle(20);
   h_dummy2_copy__2->SetMarkerSize(1.2);
   h_dummy2_copy__2->GetXaxis()->SetTitle("LH discriminant");
   h_dummy2_copy__2->GetXaxis()->SetRange(1,20);
   h_dummy2_copy__2->GetXaxis()->SetLabelFont(43);
   h_dummy2_copy__2->GetXaxis()->SetLabelOffset(0.025);
   h_dummy2_copy__2->GetXaxis()->SetLabelSize(16.8);
   h_dummy2_copy__2->GetXaxis()->SetTitleSize(21);
   h_dummy2_copy__2->GetXaxis()->SetTitleOffset(5.05);
   h_dummy2_copy__2->GetXaxis()->SetTitleFont(43);
   h_dummy2_copy__2->GetYaxis()->SetTitle("Data / Pred");
   h_dummy2_copy__2->GetYaxis()->CenterTitle(true);
   h_dummy2_copy__2->GetYaxis()->SetNdivisions(-504);
   h_dummy2_copy__2->GetYaxis()->SetLabelFont(43);
   h_dummy2_copy__2->GetYaxis()->SetLabelOffset(0.02);
   h_dummy2_copy__2->GetYaxis()->SetLabelSize(16.8);
   h_dummy2_copy__2->GetYaxis()->SetTitleSize(21);
   h_dummy2_copy__2->GetYaxis()->SetTitleOffset(2.4);
   h_dummy2_copy__2->GetYaxis()->SetTitleFont(43);
   h_dummy2_copy__2->GetZaxis()->SetLabelFont(43);
   h_dummy2_copy__2->GetZaxis()->SetLabelSize(21);
   h_dummy2_copy__2->GetZaxis()->SetTitleSize(21);
   h_dummy2_copy__2->GetZaxis()->SetTitleFont(43);
   h_dummy2_copy__2->Draw("sameaxis");
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
   c_c1lep4jex2bex_postFit->cd();
  
// ------------>Primitives in pad: pad0
   TPad *pad0 = new TPad("pad0", "pad0",0,0.2,1,1);
   pad0->Draw();
   pad0->cd();
   pad0->Range(0.5308642,-25647.57,1.024691,230828.1);
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
   Double_t xAxis3[2] = {0.6, 1}; 
   
   TH1D *h_dummy__3 = new TH1D("h_dummy__3","FcncDiscriminant",1, xAxis3);
   h_dummy__3->SetMinimum(0);
   h_dummy__3->SetMaximum(218004.4);
   h_dummy__3->SetEntries(5042434);
   h_dummy__3->SetDirectory(0);
   h_dummy__3->SetStats(0);
   h_dummy__3->SetMarkerStyle(20);
   h_dummy__3->SetMarkerSize(1.2);
   h_dummy__3->GetXaxis()->SetRange(1,20);
   h_dummy__3->GetXaxis()->SetLabelFont(43);
   h_dummy__3->GetXaxis()->SetLabelSize(0);
   h_dummy__3->GetXaxis()->SetTitleSize(21);
   h_dummy__3->GetXaxis()->SetTitleOffset(1.4);
   h_dummy__3->GetXaxis()->SetTitleFont(43);
   h_dummy__3->GetYaxis()->SetTitle("Events / 1");
   h_dummy__3->GetYaxis()->SetLabelFont(43);
   h_dummy__3->GetYaxis()->SetLabelSize(16.8);
   h_dummy__3->GetYaxis()->SetTitleSize(21);
   h_dummy__3->GetYaxis()->SetTitleOffset(2.4);
   h_dummy__3->GetYaxis()->SetTitleFont(43);
   h_dummy__3->GetZaxis()->SetLabelFont(43);
   h_dummy__3->GetZaxis()->SetLabelSize(21);
   h_dummy__3->GetZaxis()->SetTitleSize(21);
   h_dummy__3->GetZaxis()->SetTitleFont(43);
   h_dummy__3->Draw("HIST");
   
   THStack *h_stack = new THStack();
   h_stack->SetName("h_stack");
   h_stack->SetTitle("h_stack");
   Double_t xAxis4[2] = {0.6, 1}; 
   
   TH1F *h_stack_stack_1 = new TH1F("h_stack_stack_1","h_stack",1, xAxis4);
   h_stack_stack_1->SetMinimum(-31.17306);
   h_stack_stack_1->SetMaximum(127137.2);
   h_stack_stack_1->SetDirectory(0);
   h_stack_stack_1->SetStats(0);
   h_stack_stack_1->SetLineWidth(2);
   h_stack_stack_1->SetMarkerStyle(20);
   h_stack_stack_1->SetMarkerSize(1.2);
   h_stack_stack_1->GetXaxis()->SetLabelFont(43);
   h_stack_stack_1->GetXaxis()->SetLabelSize(21);
   h_stack_stack_1->GetXaxis()->SetTitleSize(21);
   h_stack_stack_1->GetXaxis()->SetTitleOffset(1.4);
   h_stack_stack_1->GetXaxis()->SetTitleFont(43);
   h_stack_stack_1->GetYaxis()->SetLabelFont(43);
   h_stack_stack_1->GetYaxis()->SetLabelSize(21);
   h_stack_stack_1->GetYaxis()->SetTitleSize(21);
   h_stack_stack_1->GetYaxis()->SetTitleOffset(1.4);
   h_stack_stack_1->GetYaxis()->SetTitleFont(43);
   h_stack_stack_1->GetZaxis()->SetLabelFont(43);
   h_stack_stack_1->GetZaxis()->SetLabelSize(21);
   h_stack_stack_1->GetZaxis()->SetTitleSize(21);
   h_stack_stack_1->GetZaxis()->SetTitleFont(43);
   h_stack->SetHistogram(h_stack_stack_1);
   
   Double_t xAxis5[2] = {0.6, 1}; 
   
   TH1D *c1lep4jex2bex_topEW__4 = new TH1D("c1lep4jex2bex_topEW__4","FcncDiscriminant",1, xAxis5);
   c1lep4jex2bex_topEW__4->SetBinContent(0,35806.66);
   c1lep4jex2bex_topEW__4->SetBinContent(1,22529.39);
   c1lep4jex2bex_topEW__4->SetBinError(0,425.5218);
   c1lep4jex2bex_topEW__4->SetBinError(1,316.9396);
   c1lep4jex2bex_topEW__4->SetEntries(3655238);
   c1lep4jex2bex_topEW__4->SetDirectory(0);
   c1lep4jex2bex_topEW__4->SetStats(0);

   ci = TColor::GetColor("#66cc66");
   c1lep4jex2bex_topEW__4->SetFillColor(ci);
   c1lep4jex2bex_topEW__4->SetMarkerStyle(20);
   c1lep4jex2bex_topEW__4->SetMarkerSize(1.2);
   c1lep4jex2bex_topEW__4->GetXaxis()->SetRange(1,20);
   c1lep4jex2bex_topEW__4->GetXaxis()->SetLabelFont(43);
   c1lep4jex2bex_topEW__4->GetXaxis()->SetLabelSize(21);
   c1lep4jex2bex_topEW__4->GetXaxis()->SetTitleSize(21);
   c1lep4jex2bex_topEW__4->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jex2bex_topEW__4->GetXaxis()->SetTitleFont(43);
   c1lep4jex2bex_topEW__4->GetYaxis()->SetLabelFont(43);
   c1lep4jex2bex_topEW__4->GetYaxis()->SetLabelSize(21);
   c1lep4jex2bex_topEW__4->GetYaxis()->SetTitleSize(21);
   c1lep4jex2bex_topEW__4->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jex2bex_topEW__4->GetYaxis()->SetTitleFont(43);
   c1lep4jex2bex_topEW__4->GetZaxis()->SetLabelFont(43);
   c1lep4jex2bex_topEW__4->GetZaxis()->SetLabelSize(21);
   c1lep4jex2bex_topEW__4->GetZaxis()->SetTitleSize(21);
   c1lep4jex2bex_topEW__4->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jex2bex_topEW,"");
   Double_t xAxis6[2] = {0.6, 1}; 
   
   TH1D *c1lep4jex2bex_ttbarbb__5 = new TH1D("c1lep4jex2bex_ttbarbb__5","FcncDiscriminant",1, xAxis6);
   c1lep4jex2bex_ttbarbb__5->SetBinContent(0,8411.84);
   c1lep4jex2bex_ttbarbb__5->SetBinContent(1,4271.428);
   c1lep4jex2bex_ttbarbb__5->SetBinError(0,61.33396);
   c1lep4jex2bex_ttbarbb__5->SetBinError(1,44.03799);
   c1lep4jex2bex_ttbarbb__5->SetEntries(40230);
   c1lep4jex2bex_ttbarbb__5->SetDirectory(0);
   c1lep4jex2bex_ttbarbb__5->SetStats(0);

   ci = TColor::GetColor("#6666cc");
   c1lep4jex2bex_ttbarbb__5->SetFillColor(ci);
   c1lep4jex2bex_ttbarbb__5->SetMarkerStyle(20);
   c1lep4jex2bex_ttbarbb__5->SetMarkerSize(1.2);
   c1lep4jex2bex_ttbarbb__5->GetXaxis()->SetRange(1,20);
   c1lep4jex2bex_ttbarbb__5->GetXaxis()->SetLabelFont(43);
   c1lep4jex2bex_ttbarbb__5->GetXaxis()->SetLabelSize(21);
   c1lep4jex2bex_ttbarbb__5->GetXaxis()->SetTitleSize(21);
   c1lep4jex2bex_ttbarbb__5->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jex2bex_ttbarbb__5->GetXaxis()->SetTitleFont(43);
   c1lep4jex2bex_ttbarbb__5->GetYaxis()->SetLabelFont(43);
   c1lep4jex2bex_ttbarbb__5->GetYaxis()->SetLabelSize(21);
   c1lep4jex2bex_ttbarbb__5->GetYaxis()->SetTitleSize(21);
   c1lep4jex2bex_ttbarbb__5->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jex2bex_ttbarbb__5->GetYaxis()->SetTitleFont(43);
   c1lep4jex2bex_ttbarbb__5->GetZaxis()->SetLabelFont(43);
   c1lep4jex2bex_ttbarbb__5->GetZaxis()->SetLabelSize(21);
   c1lep4jex2bex_ttbarbb__5->GetZaxis()->SetTitleSize(21);
   c1lep4jex2bex_ttbarbb__5->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jex2bex_ttbarbb,"");
   Double_t xAxis7[2] = {0.6, 1}; 
   
   TH1D *c1lep4jex2bex_ttbarcc__6 = new TH1D("c1lep4jex2bex_ttbarcc__6","FcncDiscriminant",1, xAxis7);
   c1lep4jex2bex_ttbarcc__6->SetBinContent(0,19523.83);
   c1lep4jex2bex_ttbarcc__6->SetBinContent(1,11440.97);
   c1lep4jex2bex_ttbarcc__6->SetBinError(0,88.2067);
   c1lep4jex2bex_ttbarcc__6->SetBinError(1,57.19243);
   c1lep4jex2bex_ttbarcc__6->SetEntries(100349);
   c1lep4jex2bex_ttbarcc__6->SetDirectory(0);
   c1lep4jex2bex_ttbarcc__6->SetStats(0);

   ci = TColor::GetColor("#ccccff");
   c1lep4jex2bex_ttbarcc__6->SetFillColor(ci);
   c1lep4jex2bex_ttbarcc__6->SetMarkerStyle(20);
   c1lep4jex2bex_ttbarcc__6->SetMarkerSize(1.2);
   c1lep4jex2bex_ttbarcc__6->GetXaxis()->SetRange(1,20);
   c1lep4jex2bex_ttbarcc__6->GetXaxis()->SetLabelFont(43);
   c1lep4jex2bex_ttbarcc__6->GetXaxis()->SetLabelSize(21);
   c1lep4jex2bex_ttbarcc__6->GetXaxis()->SetTitleSize(21);
   c1lep4jex2bex_ttbarcc__6->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jex2bex_ttbarcc__6->GetXaxis()->SetTitleFont(43);
   c1lep4jex2bex_ttbarcc__6->GetYaxis()->SetLabelFont(43);
   c1lep4jex2bex_ttbarcc__6->GetYaxis()->SetLabelSize(21);
   c1lep4jex2bex_ttbarcc__6->GetYaxis()->SetTitleSize(21);
   c1lep4jex2bex_ttbarcc__6->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jex2bex_ttbarcc__6->GetYaxis()->SetTitleFont(43);
   c1lep4jex2bex_ttbarcc__6->GetZaxis()->SetLabelFont(43);
   c1lep4jex2bex_ttbarcc__6->GetZaxis()->SetLabelSize(21);
   c1lep4jex2bex_ttbarcc__6->GetZaxis()->SetTitleSize(21);
   c1lep4jex2bex_ttbarcc__6->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jex2bex_ttbarcc,"");
   Double_t xAxis8[2] = {0.6, 1}; 
   
   TH1D *c1lep4jex2bex_ttbarlight__7 = new TH1D("c1lep4jex2bex_ttbarlight__7","FcncDiscriminant",1, xAxis8);
   c1lep4jex2bex_ttbarlight__7->SetBinContent(0,252003.2);
   c1lep4jex2bex_ttbarlight__7->SetBinContent(1,82871.76);
   c1lep4jex2bex_ttbarlight__7->SetBinError(0,311.5232);
   c1lep4jex2bex_ttbarlight__7->SetBinError(1,185.1584);
   c1lep4jex2bex_ttbarlight__7->SetEntries(1246616);
   c1lep4jex2bex_ttbarlight__7->SetDirectory(0);
   c1lep4jex2bex_ttbarlight__7->SetStats(0);
   c1lep4jex2bex_ttbarlight__7->SetMarkerStyle(20);
   c1lep4jex2bex_ttbarlight__7->SetMarkerSize(1.2);
   c1lep4jex2bex_ttbarlight__7->GetXaxis()->SetRange(1,20);
   c1lep4jex2bex_ttbarlight__7->GetXaxis()->SetLabelFont(43);
   c1lep4jex2bex_ttbarlight__7->GetXaxis()->SetLabelSize(21);
   c1lep4jex2bex_ttbarlight__7->GetXaxis()->SetTitleSize(21);
   c1lep4jex2bex_ttbarlight__7->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jex2bex_ttbarlight__7->GetXaxis()->SetTitleFont(43);
   c1lep4jex2bex_ttbarlight__7->GetYaxis()->SetLabelFont(43);
   c1lep4jex2bex_ttbarlight__7->GetYaxis()->SetLabelSize(21);
   c1lep4jex2bex_ttbarlight__7->GetYaxis()->SetTitleSize(21);
   c1lep4jex2bex_ttbarlight__7->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jex2bex_ttbarlight__7->GetYaxis()->SetTitleFont(43);
   c1lep4jex2bex_ttbarlight__7->GetZaxis()->SetLabelFont(43);
   c1lep4jex2bex_ttbarlight__7->GetZaxis()->SetLabelSize(21);
   c1lep4jex2bex_ttbarlight__7->GetZaxis()->SetTitleSize(21);
   c1lep4jex2bex_ttbarlight__7->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jex2bex_ttbarlight,"");
   Double_t xAxis9[2] = {0.6, 1}; 
   
   TH1D *c1lep4jex2bex_uHcW__8 = new TH1D("c1lep4jex2bex_uHcW__8","FcncDiscriminant",1, xAxis9);
   c1lep4jex2bex_uHcW__8->SetBinContent(0,-31.77447);
   c1lep4jex2bex_uHcW__8->SetBinContent(1,-30.50191);
   c1lep4jex2bex_uHcW__8->SetBinError(0,0.6761444);
   c1lep4jex2bex_uHcW__8->SetBinError(1,0.6711451);
   c1lep4jex2bex_uHcW__8->SetEntries(20617);
   c1lep4jex2bex_uHcW__8->SetDirectory(0);
   c1lep4jex2bex_uHcW__8->SetStats(0);
   c1lep4jex2bex_uHcW__8->SetFillColor(2);
   c1lep4jex2bex_uHcW__8->SetLineColor(2);
   c1lep4jex2bex_uHcW__8->SetMarkerStyle(20);
   c1lep4jex2bex_uHcW__8->SetMarkerSize(1.2);
   c1lep4jex2bex_uHcW__8->GetXaxis()->SetRange(1,20);
   c1lep4jex2bex_uHcW__8->GetXaxis()->SetLabelFont(43);
   c1lep4jex2bex_uHcW__8->GetXaxis()->SetLabelSize(21);
   c1lep4jex2bex_uHcW__8->GetXaxis()->SetTitleSize(21);
   c1lep4jex2bex_uHcW__8->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jex2bex_uHcW__8->GetXaxis()->SetTitleFont(43);
   c1lep4jex2bex_uHcW__8->GetYaxis()->SetLabelFont(43);
   c1lep4jex2bex_uHcW__8->GetYaxis()->SetLabelSize(21);
   c1lep4jex2bex_uHcW__8->GetYaxis()->SetTitleSize(21);
   c1lep4jex2bex_uHcW__8->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jex2bex_uHcW__8->GetYaxis()->SetTitleFont(43);
   c1lep4jex2bex_uHcW__8->GetZaxis()->SetLabelFont(43);
   c1lep4jex2bex_uHcW__8->GetZaxis()->SetLabelSize(21);
   c1lep4jex2bex_uHcW__8->GetZaxis()->SetTitleSize(21);
   c1lep4jex2bex_uHcW__8->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jex2bex_uHcW,"");
   h_stack->Draw("hist same");
   
   Double_t g_totErr_postFit_fx3003[1] = {
   0.8};
   Double_t g_totErr_postFit_fy3003[1] = {
   121113.5};
   Double_t g_totErr_postFit_felx3003[1] = {
   0.2};
   Double_t g_totErr_postFit_fely3003[1] = {
   2259.336};
   Double_t g_totErr_postFit_fehx3003[1] = {
   0.2};
   Double_t g_totErr_postFit_fehy3003[1] = {
   2259.336};
   grae = new TGraphAsymmErrors(1,g_totErr_postFit_fx3003,g_totErr_postFit_fy3003,g_totErr_postFit_felx3003,g_totErr_postFit_fehx3003,g_totErr_postFit_fely3003,g_totErr_postFit_fehy3003);
   grae->SetName("g_totErr_postFit");
   grae->SetTitle("FcncDiscriminant");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(3354);
   grae->SetLineColor(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0);
   
   TH1F *Graph_g_totErr_postFit3003 = new TH1F("Graph_g_totErr_postFit3003","FcncDiscriminant",100,0.56,1.04);
   Graph_g_totErr_postFit3003->SetMinimum(118402.3);
   Graph_g_totErr_postFit3003->SetMaximum(123824.7);
   Graph_g_totErr_postFit3003->SetDirectory(0);
   Graph_g_totErr_postFit3003->SetStats(0);
   Graph_g_totErr_postFit3003->SetLineWidth(2);
   Graph_g_totErr_postFit3003->SetMarkerStyle(20);
   Graph_g_totErr_postFit3003->SetMarkerSize(1.2);
   Graph_g_totErr_postFit3003->GetXaxis()->SetLabelFont(43);
   Graph_g_totErr_postFit3003->GetXaxis()->SetLabelSize(21);
   Graph_g_totErr_postFit3003->GetXaxis()->SetTitleSize(21);
   Graph_g_totErr_postFit3003->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_totErr_postFit3003->GetXaxis()->SetTitleFont(43);
   Graph_g_totErr_postFit3003->GetYaxis()->SetLabelFont(43);
   Graph_g_totErr_postFit3003->GetYaxis()->SetLabelSize(21);
   Graph_g_totErr_postFit3003->GetYaxis()->SetTitleSize(21);
   Graph_g_totErr_postFit3003->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_totErr_postFit3003->GetYaxis()->SetTitleFont(43);
   Graph_g_totErr_postFit3003->GetZaxis()->SetLabelFont(43);
   Graph_g_totErr_postFit3003->GetZaxis()->SetLabelSize(21);
   Graph_g_totErr_postFit3003->GetZaxis()->SetTitleSize(21);
   Graph_g_totErr_postFit3003->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_totErr_postFit3003);
   
   grae->Draw("e2");
   
   Double_t Graph_from_c1lep4jex2bex_Data_fx3004[1] = {
   0.8};
   Double_t Graph_from_c1lep4jex2bex_Data_fy3004[1] = {
   120572};
   Double_t Graph_from_c1lep4jex2bex_Data_felx3004[1] = {
   0.1996};
   Double_t Graph_from_c1lep4jex2bex_Data_fely3004[1] = {
   347.2348};
   Double_t Graph_from_c1lep4jex2bex_Data_fehx3004[1] = {
   0.2};
   Double_t Graph_from_c1lep4jex2bex_Data_fehy3004[1] = {
   347.2348};
   grae = new TGraphAsymmErrors(1,Graph_from_c1lep4jex2bex_Data_fx3004,Graph_from_c1lep4jex2bex_Data_fy3004,Graph_from_c1lep4jex2bex_Data_felx3004,Graph_from_c1lep4jex2bex_Data_fehx3004,Graph_from_c1lep4jex2bex_Data_fely3004,Graph_from_c1lep4jex2bex_Data_fehy3004);
   grae->SetName("Graph_from_c1lep4jex2bex_Data");
   grae->SetTitle("FcncDiscriminant");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_c1lep4jex2bex_Data3004 = new TH1F("Graph_Graph_from_c1lep4jex2bex_Data3004","FcncDiscriminant",100,0.56044,1.03996);
   Graph_Graph_from_c1lep4jex2bex_Data3004->SetMinimum(120155.3);
   Graph_Graph_from_c1lep4jex2bex_Data3004->SetMaximum(120988.7);
   Graph_Graph_from_c1lep4jex2bex_Data3004->SetDirectory(0);
   Graph_Graph_from_c1lep4jex2bex_Data3004->SetStats(0);
   Graph_Graph_from_c1lep4jex2bex_Data3004->SetLineWidth(2);
   Graph_Graph_from_c1lep4jex2bex_Data3004->SetMarkerStyle(20);
   Graph_Graph_from_c1lep4jex2bex_Data3004->SetMarkerSize(1.2);
   Graph_Graph_from_c1lep4jex2bex_Data3004->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep4jex2bex_Data3004->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep4jex2bex_Data3004->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep4jex2bex_Data3004->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep4jex2bex_Data3004->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep4jex2bex_Data3004->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep4jex2bex_Data3004->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep4jex2bex_Data3004->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep4jex2bex_Data3004->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep4jex2bex_Data3004->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep4jex2bex_Data3004->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep4jex2bex_Data3004->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep4jex2bex_Data3004->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep4jex2bex_Data3004->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_c1lep4jex2bex_Data3004);
   
   grae->Draw("ep1 ");
   Double_t xAxis10[2] = {0.6, 1}; 
   
   TH1D *h_dummy_copy__9 = new TH1D("h_dummy_copy__9","FcncDiscriminant",1, xAxis10);
   h_dummy_copy__9->SetEntries(5042434);
   h_dummy_copy__9->SetDirectory(0);
   h_dummy_copy__9->SetStats(0);
   h_dummy_copy__9->SetMarkerStyle(20);
   h_dummy_copy__9->SetMarkerSize(1.2);
   h_dummy_copy__9->GetXaxis()->SetTitle("LH discriminant");
   h_dummy_copy__9->GetXaxis()->SetRange(1,20);
   h_dummy_copy__9->GetXaxis()->SetLabelFont(43);
   h_dummy_copy__9->GetXaxis()->SetLabelSize(21);
   h_dummy_copy__9->GetXaxis()->SetTitleSize(21);
   h_dummy_copy__9->GetXaxis()->SetTitleOffset(1.4);
   h_dummy_copy__9->GetXaxis()->SetTitleFont(43);
   h_dummy_copy__9->GetYaxis()->SetTitle("Events / 1");
   h_dummy_copy__9->GetYaxis()->SetLabelFont(43);
   h_dummy_copy__9->GetYaxis()->SetLabelSize(16.8);
   h_dummy_copy__9->GetYaxis()->SetTitleSize(21);
   h_dummy_copy__9->GetYaxis()->SetTitleOffset(2.4);
   h_dummy_copy__9->GetYaxis()->SetTitleFont(43);
   h_dummy_copy__9->GetZaxis()->SetLabelFont(43);
   h_dummy_copy__9->GetZaxis()->SetLabelSize(21);
   h_dummy_copy__9->GetZaxis()->SetTitleSize(21);
   h_dummy_copy__9->GetZaxis()->SetTitleFont(43);
   h_dummy_copy__9->Draw("sameaxis");
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
      tex = new TLatex(0.18,0.78,"t#rightarrowH(b#bar{b})q search");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(21);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.18,0.73,"4j, 2b");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(21);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.18,0.68,"Post-Fit");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(21);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TLegend *leg = new TLegend(0.5308,0.63,0.92,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(43);
   leg->SetTextSize(18.9);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("c1lep4jex2bex_Data","Data","lep");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep4jex2bex_uHcW","t#bar{t}#rightarrowWbHc","f");
   entry->SetFillColor(2);
   entry->SetFillStyle(1001);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep4jex2bex_ttbarlight","t#bar{t}+light-jets","f");
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep4jex2bex_ttbarcc","t#bar{t}+#geq1c","f");

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
   entry=leg->AddEntry("c1lep4jex2bex_ttbarbb","t#bar{t}+#geq1b","f");

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
   entry=leg->AddEntry("c1lep4jex2bex_topEW","Non-t#bar{t}","f");

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
   entry=leg->AddEntry("g_totErr_postFit","Total Bkg unc.","f");

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
   c_c1lep4jex2bex_postFit->cd();
   c_c1lep4jex2bex_postFit->Modified();
   c_c1lep4jex2bex_postFit->cd();
   c_c1lep4jex2bex_postFit->SetSelected(c_c1lep4jex2bex_postFit);
}
