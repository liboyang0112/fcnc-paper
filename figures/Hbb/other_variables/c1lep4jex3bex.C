void c1lep4jex3bex()
{
//=========Macro generated from canvas: c_c1lep4jex3bex/c_c1lep4jex3bex
//=========  (Thu Jul 19 17:38:02 2018) by ROOT version6.04/14
   TCanvas *c_c1lep4jex3bex = new TCanvas("c_c1lep4jex3bex", "c_c1lep4jex3bex",0,0,600,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c_c1lep4jex3bex->SetHighLightColor(2);
   c_c1lep4jex3bex->Range(0,0,1,1);
   c_c1lep4jex3bex->SetFillColor(0);
   c_c1lep4jex3bex->SetBorderMode(0);
   c_c1lep4jex3bex->SetBorderSize(2);
   c_c1lep4jex3bex->SetTickx(1);
   c_c1lep4jex3bex->SetTicky(1);
   c_c1lep4jex3bex->SetLeftMargin(0.16);
   c_c1lep4jex3bex->SetRightMargin(0.05);
   c_c1lep4jex3bex->SetTopMargin(0.05);
   c_c1lep4jex3bex->SetBottomMargin(0.16);
   c_c1lep4jex3bex->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0,1,0.28);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-0.1728395,-0.0873016,1.061728,1.5);
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
   Double_t xAxis11[11] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1D *h_dummy2__10 = new TH1D("h_dummy2__10","Data/MC",10, xAxis11);
   h_dummy2__10->SetMinimum(0.5);
   h_dummy2__10->SetMaximum(1.5);
   h_dummy2__10->SetEntries(2920927);
   h_dummy2__10->SetDirectory(0);
   h_dummy2__10->SetStats(0);
   h_dummy2__10->SetMarkerStyle(20);
   h_dummy2__10->SetMarkerSize(1.2);
   h_dummy2__10->GetXaxis()->SetTitle("LH discriminant");
   h_dummy2__10->GetXaxis()->SetRange(1,20);
   h_dummy2__10->GetXaxis()->SetLabelFont(43);
   h_dummy2__10->GetXaxis()->SetLabelOffset(0.025);
   h_dummy2__10->GetXaxis()->SetLabelSize(16.8);
   h_dummy2__10->GetXaxis()->SetTitleSize(21);
   h_dummy2__10->GetXaxis()->SetTitleOffset(5.05);
   h_dummy2__10->GetXaxis()->SetTitleFont(43);
   h_dummy2__10->GetYaxis()->SetTitle("Data / Bkg");
   h_dummy2__10->GetYaxis()->SetNdivisions(-504);
   h_dummy2__10->GetYaxis()->SetLabelFont(43);
   h_dummy2__10->GetYaxis()->SetLabelOffset(0.02);
   h_dummy2__10->GetYaxis()->SetLabelSize(16.8);
   h_dummy2__10->GetYaxis()->SetTitleSize(21);
   h_dummy2__10->GetYaxis()->SetTitleOffset(2.4);
   h_dummy2__10->GetYaxis()->SetTitleFont(43);
   h_dummy2__10->GetZaxis()->SetLabelFont(43);
   h_dummy2__10->GetZaxis()->SetLabelSize(21);
   h_dummy2__10->GetZaxis()->SetTitleSize(21);
   h_dummy2__10->GetZaxis()->SetTitleFont(43);
   h_dummy2__10->Draw("HIST");
   
   Double_t Graph_from_h_ratio_fx3005[10] = {
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95};
   Double_t Graph_from_h_ratio_fy3005[10] = {
   1.195462,
   1.12131,
   1.110333,
   1.154814,
   1.075047,
   1.074983,
   1.1067,
   1.105782,
   1.04801,
   1.014898};
   Double_t Graph_from_h_ratio_felx3005[10] = {
   0.0499,
   0.0499,
   0.0499,
   0.0499,
   0.0499,
   0.0499,
   0.0499,
   0.0499,
   0.0499,
   0.0499};
   Double_t Graph_from_h_ratio_fely3005[10] = {
   0.02895167,
   0.03027253,
   0.03132986,
   0.03107528,
   0.0293243,
   0.02798068,
   0.03225833,
   0.03835915,
   0.04569543,
   0.07054029};
   Double_t Graph_from_h_ratio_fehx3005[10] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t Graph_from_h_ratio_fehy3005[10] = {
   0.02895167,
   0.03027253,
   0.03132986,
   0.03107528,
   0.0293243,
   0.02798068,
   0.03225833,
   0.03835915,
   0.04569543,
   0.07054029};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(10,Graph_from_h_ratio_fx3005,Graph_from_h_ratio_fy3005,Graph_from_h_ratio_felx3005,Graph_from_h_ratio_fehx3005,Graph_from_h_ratio_fely3005,Graph_from_h_ratio_fehy3005);
   grae->SetName("Graph_from_h_ratio");
   grae->SetTitle("FcncDiscriminant");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(24);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_h_ratio3005 = new TH1F("Graph_Graph_from_h_ratio3005","FcncDiscriminant",100,0,1.09999);
   Graph_Graph_from_h_ratio3005->SetMinimum(0.9163521);
   Graph_Graph_from_h_ratio3005->SetMaximum(1.25242);
   Graph_Graph_from_h_ratio3005->SetDirectory(0);
   Graph_Graph_from_h_ratio3005->SetStats(0);
   Graph_Graph_from_h_ratio3005->SetLineWidth(2);
   Graph_Graph_from_h_ratio3005->SetMarkerStyle(20);
   Graph_Graph_from_h_ratio3005->SetMarkerSize(1.2);
   Graph_Graph_from_h_ratio3005->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3005->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3005->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3005->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3005->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3005->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3005->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3005->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3005->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3005->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3005->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3005->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3005->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3005->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_h_ratio3005);
   
   grae->Draw("pe0");
   TLine *line = new TLine(0,1,1,1);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t g_ratio2_fx3006[10] = {
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95};
   Double_t g_ratio2_fy3006[10] = {
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
   Double_t g_ratio2_felx3006[10] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t g_ratio2_fely3006[10] = {
   0.1767625,
   0.2003543,
   0.2071307,
   0.2112391,
   0.2104469,
   0.2167311,
   0.208245,
   0.2040406,
   0.2007729,
   0.2105265};
   Double_t g_ratio2_fehx3006[10] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t g_ratio2_fehy3006[10] = {
   0.1767625,
   0.2003543,
   0.2071307,
   0.2112391,
   0.2104469,
   0.2167311,
   0.208245,
   0.2040406,
   0.2007729,
   0.2105265};
   grae = new TGraphAsymmErrors(10,g_ratio2_fx3006,g_ratio2_fy3006,g_ratio2_felx3006,g_ratio2_fehx3006,g_ratio2_fely3006,g_ratio2_fehy3006);
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
   
   TH1F *Graph_g_ratio23006 = new TH1F("Graph_g_ratio23006","FcncDiscriminant",100,0,1.1);
   Graph_g_ratio23006->SetMinimum(0.7399227);
   Graph_g_ratio23006->SetMaximum(1.260077);
   Graph_g_ratio23006->SetDirectory(0);
   Graph_g_ratio23006->SetStats(0);
   Graph_g_ratio23006->SetLineWidth(2);
   Graph_g_ratio23006->SetMarkerStyle(20);
   Graph_g_ratio23006->SetMarkerSize(1.2);
   Graph_g_ratio23006->GetXaxis()->SetLabelFont(43);
   Graph_g_ratio23006->GetXaxis()->SetLabelSize(21);
   Graph_g_ratio23006->GetXaxis()->SetTitleSize(21);
   Graph_g_ratio23006->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23006->GetXaxis()->SetTitleFont(43);
   Graph_g_ratio23006->GetYaxis()->SetLabelFont(43);
   Graph_g_ratio23006->GetYaxis()->SetLabelSize(21);
   Graph_g_ratio23006->GetYaxis()->SetTitleSize(21);
   Graph_g_ratio23006->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23006->GetYaxis()->SetTitleFont(43);
   Graph_g_ratio23006->GetZaxis()->SetLabelFont(43);
   Graph_g_ratio23006->GetZaxis()->SetLabelSize(21);
   Graph_g_ratio23006->GetZaxis()->SetTitleSize(21);
   Graph_g_ratio23006->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_ratio23006);
   
   grae->Draw("e2");
   Double_t xAxis12[11] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1D *h_dummy2_copy__11 = new TH1D("h_dummy2_copy__11","Data/MC",10, xAxis12);
   h_dummy2_copy__11->SetMinimum(0.5);
   h_dummy2_copy__11->SetMaximum(1.5);
   h_dummy2_copy__11->SetEntries(2920927);
   h_dummy2_copy__11->SetDirectory(0);
   h_dummy2_copy__11->SetStats(0);
   h_dummy2_copy__11->SetMarkerStyle(20);
   h_dummy2_copy__11->SetMarkerSize(1.2);
   h_dummy2_copy__11->GetXaxis()->SetTitle("LH discriminant");
   h_dummy2_copy__11->GetXaxis()->SetRange(1,20);
   h_dummy2_copy__11->GetXaxis()->SetLabelFont(43);
   h_dummy2_copy__11->GetXaxis()->SetLabelOffset(0.025);
   h_dummy2_copy__11->GetXaxis()->SetLabelSize(16.8);
   h_dummy2_copy__11->GetXaxis()->SetTitleSize(21);
   h_dummy2_copy__11->GetXaxis()->SetTitleOffset(5.05);
   h_dummy2_copy__11->GetXaxis()->SetTitleFont(43);
   h_dummy2_copy__11->GetYaxis()->SetTitle("Data / Bkg");
   h_dummy2_copy__11->GetYaxis()->SetNdivisions(-504);
   h_dummy2_copy__11->GetYaxis()->SetLabelFont(43);
   h_dummy2_copy__11->GetYaxis()->SetLabelOffset(0.02);
   h_dummy2_copy__11->GetYaxis()->SetLabelSize(16.8);
   h_dummy2_copy__11->GetYaxis()->SetTitleSize(21);
   h_dummy2_copy__11->GetYaxis()->SetTitleOffset(2.4);
   h_dummy2_copy__11->GetYaxis()->SetTitleFont(43);
   h_dummy2_copy__11->GetZaxis()->SetLabelFont(43);
   h_dummy2_copy__11->GetZaxis()->SetLabelSize(21);
   h_dummy2_copy__11->GetZaxis()->SetTitleSize(21);
   h_dummy2_copy__11->GetZaxis()->SetTitleFont(43);
   h_dummy2_copy__11->Draw("sameaxis");
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
   c_c1lep4jex3bex->cd();
  
// ------------>Primitives in pad: pad0
   TPad *pad0 = new TPad("pad0", "pad0",0,0.2,1,1);
   pad0->Draw();
   pad0->cd();
   pad0->Range(-0.1728395,-369.803,1.061728,3328.226);
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
   Double_t xAxis13[11] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1D *h_dummy__12 = new TH1D("h_dummy__12","FcncDiscriminant",10, xAxis13);
   h_dummy__12->SetMinimum(0);
   h_dummy__12->SetMaximum(3143.325);
   h_dummy__12->SetEntries(2920927);
   h_dummy__12->SetDirectory(0);
   h_dummy__12->SetStats(0);
   h_dummy__12->SetMarkerStyle(20);
   h_dummy__12->SetMarkerSize(1.2);
   h_dummy__12->GetXaxis()->SetRange(1,20);
   h_dummy__12->GetXaxis()->SetLabelFont(43);
   h_dummy__12->GetXaxis()->SetLabelSize(0);
   h_dummy__12->GetXaxis()->SetTitleSize(21);
   h_dummy__12->GetXaxis()->SetTitleOffset(1.4);
   h_dummy__12->GetXaxis()->SetTitleFont(43);
   h_dummy__12->GetYaxis()->SetTitle("Events");
   h_dummy__12->GetYaxis()->SetLabelFont(43);
   h_dummy__12->GetYaxis()->SetLabelSize(16.8);
   h_dummy__12->GetYaxis()->SetTitleSize(21);
   h_dummy__12->GetYaxis()->SetTitleOffset(2.4);
   h_dummy__12->GetYaxis()->SetTitleFont(43);
   h_dummy__12->GetZaxis()->SetLabelFont(43);
   h_dummy__12->GetZaxis()->SetLabelSize(21);
   h_dummy__12->GetZaxis()->SetTitleSize(21);
   h_dummy__12->GetZaxis()->SetTitleFont(43);
   h_dummy__12->Draw("HIST");
   
   THStack *h_stack = new THStack();
   h_stack->SetName("h_stack");
   h_stack->SetTitle("h_stack");
   Double_t xAxis14[11] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1F *h_stack_stack_2 = new TH1F("h_stack_stack_2","h_stack",10, xAxis14);
   h_stack_stack_2->SetMinimum(0);
   h_stack_stack_2->SetMaximum(1651.896);
   h_stack_stack_2->SetDirectory(0);
   h_stack_stack_2->SetStats(0);
   h_stack_stack_2->SetLineWidth(2);
   h_stack_stack_2->SetMarkerStyle(20);
   h_stack_stack_2->SetMarkerSize(1.2);
   h_stack_stack_2->GetXaxis()->SetLabelFont(43);
   h_stack_stack_2->GetXaxis()->SetLabelSize(21);
   h_stack_stack_2->GetXaxis()->SetTitleSize(21);
   h_stack_stack_2->GetXaxis()->SetTitleOffset(1.4);
   h_stack_stack_2->GetXaxis()->SetTitleFont(43);
   h_stack_stack_2->GetYaxis()->SetLabelFont(43);
   h_stack_stack_2->GetYaxis()->SetLabelSize(21);
   h_stack_stack_2->GetYaxis()->SetTitleSize(21);
   h_stack_stack_2->GetYaxis()->SetTitleOffset(1.4);
   h_stack_stack_2->GetYaxis()->SetTitleFont(43);
   h_stack_stack_2->GetZaxis()->SetLabelFont(43);
   h_stack_stack_2->GetZaxis()->SetLabelSize(21);
   h_stack_stack_2->GetZaxis()->SetTitleSize(21);
   h_stack_stack_2->GetZaxis()->SetTitleFont(43);
   h_stack->SetHistogram(h_stack_stack_2);
   
   Double_t xAxis15[11] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1D *c1lep4jex3bex_topEW__13 = new TH1D("c1lep4jex3bex_topEW__13","FcncDiscriminant",10, xAxis15);
   c1lep4jex3bex_topEW__13->SetBinContent(1,300.8504);
   c1lep4jex3bex_topEW__13->SetBinContent(2,224.0928);
   c1lep4jex3bex_topEW__13->SetBinContent(3,181.9348);
   c1lep4jex3bex_topEW__13->SetBinContent(4,197.4528);
   c1lep4jex3bex_topEW__13->SetBinContent(5,205.8922);
   c1lep4jex3bex_topEW__13->SetBinContent(6,205.3895);
   c1lep4jex3bex_topEW__13->SetBinContent(7,189.5464);
   c1lep4jex3bex_topEW__13->SetBinContent(8,157.1693);
   c1lep4jex3bex_topEW__13->SetBinContent(9,126.5338);
   c1lep4jex3bex_topEW__13->SetBinContent(10,46.27152);
   c1lep4jex3bex_topEW__13->SetBinError(1,32.90066);
   c1lep4jex3bex_topEW__13->SetBinError(2,29.98359);
   c1lep4jex3bex_topEW__13->SetBinError(3,28.32704);
   c1lep4jex3bex_topEW__13->SetBinError(4,30.34175);
   c1lep4jex3bex_topEW__13->SetBinError(5,31.49326);
   c1lep4jex3bex_topEW__13->SetBinError(6,31.44707);
   c1lep4jex3bex_topEW__13->SetBinError(7,30.40092);
   c1lep4jex3bex_topEW__13->SetBinError(8,27.63394);
   c1lep4jex3bex_topEW__13->SetBinError(9,24.12391);
   c1lep4jex3bex_topEW__13->SetBinError(10,14.35387);
   c1lep4jex3bex_topEW__13->SetEntries(2895015);
   c1lep4jex3bex_topEW__13->SetDirectory(0);
   c1lep4jex3bex_topEW__13->SetStats(0);

   ci = TColor::GetColor("#66cc66");
   c1lep4jex3bex_topEW__13->SetFillColor(ci);
   c1lep4jex3bex_topEW__13->SetMarkerStyle(20);
   c1lep4jex3bex_topEW__13->SetMarkerSize(1.2);
   c1lep4jex3bex_topEW__13->GetXaxis()->SetRange(1,20);
   c1lep4jex3bex_topEW__13->GetXaxis()->SetLabelFont(43);
   c1lep4jex3bex_topEW__13->GetXaxis()->SetLabelSize(21);
   c1lep4jex3bex_topEW__13->GetXaxis()->SetTitleSize(21);
   c1lep4jex3bex_topEW__13->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_topEW__13->GetXaxis()->SetTitleFont(43);
   c1lep4jex3bex_topEW__13->GetYaxis()->SetLabelFont(43);
   c1lep4jex3bex_topEW__13->GetYaxis()->SetLabelSize(21);
   c1lep4jex3bex_topEW__13->GetYaxis()->SetTitleSize(21);
   c1lep4jex3bex_topEW__13->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_topEW__13->GetYaxis()->SetTitleFont(43);
   c1lep4jex3bex_topEW__13->GetZaxis()->SetLabelFont(43);
   c1lep4jex3bex_topEW__13->GetZaxis()->SetLabelSize(21);
   c1lep4jex3bex_topEW__13->GetZaxis()->SetTitleSize(21);
   c1lep4jex3bex_topEW__13->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jex3bex_topEW,"");
   Double_t xAxis16[11] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1D *c1lep4jex3bex_ttbarbb__14 = new TH1D("c1lep4jex3bex_ttbarbb__14","FcncDiscriminant",10, xAxis16);
   c1lep4jex3bex_ttbarbb__14->SetBinContent(1,653.9987);
   c1lep4jex3bex_ttbarbb__14->SetBinContent(2,385.3638);
   c1lep4jex3bex_ttbarbb__14->SetBinContent(3,326.0531);
   c1lep4jex3bex_ttbarbb__14->SetBinContent(4,299.4253);
   c1lep4jex3bex_ttbarbb__14->SetBinContent(5,316.6269);
   c1lep4jex3bex_ttbarbb__14->SetBinContent(6,309.4508);
   c1lep4jex3bex_ttbarbb__14->SetBinContent(7,233.8999);
   c1lep4jex3bex_ttbarbb__14->SetBinContent(8,182.3038);
   c1lep4jex3bex_ttbarbb__14->SetBinContent(9,130.9199);
   c1lep4jex3bex_ttbarbb__14->SetBinContent(10,58.57333);
   c1lep4jex3bex_ttbarbb__14->SetBinError(1,16.29473);
   c1lep4jex3bex_ttbarbb__14->SetBinError(2,12.15207);
   c1lep4jex3bex_ttbarbb__14->SetBinError(3,12.06807);
   c1lep4jex3bex_ttbarbb__14->SetBinError(4,11.59011);
   c1lep4jex3bex_ttbarbb__14->SetBinError(5,12.29087);
   c1lep4jex3bex_ttbarbb__14->SetBinError(6,11.69366);
   c1lep4jex3bex_ttbarbb__14->SetBinError(7,9.455853);
   c1lep4jex3bex_ttbarbb__14->SetBinError(8,9.054921);
   c1lep4jex3bex_ttbarbb__14->SetBinError(9,7.077962);
   c1lep4jex3bex_ttbarbb__14->SetBinError(10,6.671394);
   c1lep4jex3bex_ttbarbb__14->SetEntries(10166);
   c1lep4jex3bex_ttbarbb__14->SetDirectory(0);
   c1lep4jex3bex_ttbarbb__14->SetStats(0);

   ci = TColor::GetColor("#6666cc");
   c1lep4jex3bex_ttbarbb__14->SetFillColor(ci);
   c1lep4jex3bex_ttbarbb__14->SetMarkerStyle(20);
   c1lep4jex3bex_ttbarbb__14->SetMarkerSize(1.2);
   c1lep4jex3bex_ttbarbb__14->GetXaxis()->SetRange(1,20);
   c1lep4jex3bex_ttbarbb__14->GetXaxis()->SetLabelFont(43);
   c1lep4jex3bex_ttbarbb__14->GetXaxis()->SetLabelSize(21);
   c1lep4jex3bex_ttbarbb__14->GetXaxis()->SetTitleSize(21);
   c1lep4jex3bex_ttbarbb__14->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_ttbarbb__14->GetXaxis()->SetTitleFont(43);
   c1lep4jex3bex_ttbarbb__14->GetYaxis()->SetLabelFont(43);
   c1lep4jex3bex_ttbarbb__14->GetYaxis()->SetLabelSize(21);
   c1lep4jex3bex_ttbarbb__14->GetYaxis()->SetTitleSize(21);
   c1lep4jex3bex_ttbarbb__14->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_ttbarbb__14->GetYaxis()->SetTitleFont(43);
   c1lep4jex3bex_ttbarbb__14->GetZaxis()->SetLabelFont(43);
   c1lep4jex3bex_ttbarbb__14->GetZaxis()->SetLabelSize(21);
   c1lep4jex3bex_ttbarbb__14->GetZaxis()->SetTitleSize(21);
   c1lep4jex3bex_ttbarbb__14->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jex3bex_ttbarbb,"");
   Double_t xAxis17[11] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1D *c1lep4jex3bex_ttbarcc__15 = new TH1D("c1lep4jex3bex_ttbarcc__15","FcncDiscriminant",10, xAxis17);
   c1lep4jex3bex_ttbarcc__15->SetBinContent(1,150.9606);
   c1lep4jex3bex_ttbarcc__15->SetBinContent(2,131.559);
   c1lep4jex3bex_ttbarcc__15->SetBinContent(3,117.8321);
   c1lep4jex3bex_ttbarcc__15->SetBinContent(4,113.3734);
   c1lep4jex3bex_ttbarcc__15->SetBinContent(5,128.8215);
   c1lep4jex3bex_ttbarcc__15->SetBinContent(6,157.8452);
   c1lep4jex3bex_ttbarcc__15->SetBinContent(7,101.5357);
   c1lep4jex3bex_ttbarcc__15->SetBinContent(8,79.34432);
   c1lep4jex3bex_ttbarcc__15->SetBinContent(9,48.37208);
   c1lep4jex3bex_ttbarcc__15->SetBinContent(10,23.00643);
   c1lep4jex3bex_ttbarcc__15->SetBinError(1,8.365246);
   c1lep4jex3bex_ttbarcc__15->SetBinError(2,7.910056);
   c1lep4jex3bex_ttbarcc__15->SetBinError(3,7.165155);
   c1lep4jex3bex_ttbarcc__15->SetBinError(4,6.791619);
   c1lep4jex3bex_ttbarcc__15->SetBinError(5,7.307813);
   c1lep4jex3bex_ttbarcc__15->SetBinError(6,8.529646);
   c1lep4jex3bex_ttbarcc__15->SetBinError(7,5.891608);
   c1lep4jex3bex_ttbarcc__15->SetBinError(8,5.943471);
   c1lep4jex3bex_ttbarcc__15->SetBinError(9,4.634295);
   c1lep4jex3bex_ttbarcc__15->SetBinError(10,3.072274);
   c1lep4jex3bex_ttbarcc__15->SetEntries(3206);
   c1lep4jex3bex_ttbarcc__15->SetDirectory(0);
   c1lep4jex3bex_ttbarcc__15->SetStats(0);

   ci = TColor::GetColor("#ccccff");
   c1lep4jex3bex_ttbarcc__15->SetFillColor(ci);
   c1lep4jex3bex_ttbarcc__15->SetMarkerStyle(20);
   c1lep4jex3bex_ttbarcc__15->SetMarkerSize(1.2);
   c1lep4jex3bex_ttbarcc__15->GetXaxis()->SetRange(1,20);
   c1lep4jex3bex_ttbarcc__15->GetXaxis()->SetLabelFont(43);
   c1lep4jex3bex_ttbarcc__15->GetXaxis()->SetLabelSize(21);
   c1lep4jex3bex_ttbarcc__15->GetXaxis()->SetTitleSize(21);
   c1lep4jex3bex_ttbarcc__15->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_ttbarcc__15->GetXaxis()->SetTitleFont(43);
   c1lep4jex3bex_ttbarcc__15->GetYaxis()->SetLabelFont(43);
   c1lep4jex3bex_ttbarcc__15->GetYaxis()->SetLabelSize(21);
   c1lep4jex3bex_ttbarcc__15->GetYaxis()->SetTitleSize(21);
   c1lep4jex3bex_ttbarcc__15->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_ttbarcc__15->GetYaxis()->SetTitleFont(43);
   c1lep4jex3bex_ttbarcc__15->GetZaxis()->SetLabelFont(43);
   c1lep4jex3bex_ttbarcc__15->GetZaxis()->SetLabelSize(21);
   c1lep4jex3bex_ttbarcc__15->GetZaxis()->SetTitleSize(21);
   c1lep4jex3bex_ttbarcc__15->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jex3bex_ttbarcc,"");
   Double_t xAxis18[11] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1D *c1lep4jex3bex_ttbarlight__16 = new TH1D("c1lep4jex3bex_ttbarlight__16","FcncDiscriminant",10, xAxis18);
   c1lep4jex3bex_ttbarlight__16->SetBinContent(1,320.4168);
   c1lep4jex3bex_ttbarlight__16->SetBinContent(2,482.5532);
   c1lep4jex3bex_ttbarlight__16->SetBinContent(3,505.3723);
   c1lep4jex3bex_ttbarlight__16->SetBinContent(4,585.6126);
   c1lep4jex3bex_ttbarlight__16->SetBinContent(5,598.8377);
   c1lep4jex3bex_ttbarlight__16->SetBinContent(6,700.3601);
   c1lep4jex3bex_ttbarlight__16->SetBinContent(7,538.5398);
   c1lep4jex3bex_ttbarlight__16->SetBinContent(8,332.687);
   c1lep4jex3bex_ttbarlight__16->SetBinContent(9,196.0777);
   c1lep4jex3bex_ttbarlight__16->SetBinContent(10,76.11011);
   c1lep4jex3bex_ttbarlight__16->SetBinError(1,13.67021);
   c1lep4jex3bex_ttbarlight__16->SetBinError(2,16.63737);
   c1lep4jex3bex_ttbarlight__16->SetBinError(3,15.84634);
   c1lep4jex3bex_ttbarlight__16->SetBinError(4,19.32741);
   c1lep4jex3bex_ttbarlight__16->SetBinError(5,17.29635);
   c1lep4jex3bex_ttbarlight__16->SetBinError(6,18.54253);
   c1lep4jex3bex_ttbarlight__16->SetBinError(7,16.77184);
   c1lep4jex3bex_ttbarlight__16->SetBinError(8,13.1831);
   c1lep4jex3bex_ttbarlight__16->SetBinError(9,9.660167);
   c1lep4jex3bex_ttbarlight__16->SetBinError(10,6.144685);
   c1lep4jex3bex_ttbarlight__16->SetEntries(12530);
   c1lep4jex3bex_ttbarlight__16->SetDirectory(0);
   c1lep4jex3bex_ttbarlight__16->SetStats(0);
   c1lep4jex3bex_ttbarlight__16->SetMarkerStyle(20);
   c1lep4jex3bex_ttbarlight__16->SetMarkerSize(1.2);
   c1lep4jex3bex_ttbarlight__16->GetXaxis()->SetRange(1,20);
   c1lep4jex3bex_ttbarlight__16->GetXaxis()->SetLabelFont(43);
   c1lep4jex3bex_ttbarlight__16->GetXaxis()->SetLabelSize(21);
   c1lep4jex3bex_ttbarlight__16->GetXaxis()->SetTitleSize(21);
   c1lep4jex3bex_ttbarlight__16->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_ttbarlight__16->GetXaxis()->SetTitleFont(43);
   c1lep4jex3bex_ttbarlight__16->GetYaxis()->SetLabelFont(43);
   c1lep4jex3bex_ttbarlight__16->GetYaxis()->SetLabelSize(21);
   c1lep4jex3bex_ttbarlight__16->GetYaxis()->SetTitleSize(21);
   c1lep4jex3bex_ttbarlight__16->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_ttbarlight__16->GetYaxis()->SetTitleFont(43);
   c1lep4jex3bex_ttbarlight__16->GetZaxis()->SetLabelFont(43);
   c1lep4jex3bex_ttbarlight__16->GetZaxis()->SetLabelSize(21);
   c1lep4jex3bex_ttbarlight__16->GetZaxis()->SetTitleSize(21);
   c1lep4jex3bex_ttbarlight__16->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jex3bex_ttbarlight,"");
   Double_t xAxis19[11] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1D *c1lep4jex3bex_uHcW__17 = new TH1D("c1lep4jex3bex_uHcW__17","FcncDiscriminant",10, xAxis19);
   c1lep4jex3bex_uHcW__17->SetBinContent(1,33.81483);
   c1lep4jex3bex_uHcW__17->SetBinContent(2,58.22368);
   c1lep4jex3bex_uHcW__17->SetBinContent(3,66.33759);
   c1lep4jex3bex_uHcW__17->SetBinContent(4,95.58885);
   c1lep4jex3bex_uHcW__17->SetBinContent(5,136.6424);
   c1lep4jex3bex_uHcW__17->SetBinContent(6,200.1888);
   c1lep4jex3bex_uHcW__17->SetBinContent(7,215.2698);
   c1lep4jex3bex_uHcW__17->SetBinContent(8,202.6676);
   c1lep4jex3bex_uHcW__17->SetBinContent(9,155.1135);
   c1lep4jex3bex_uHcW__17->SetBinContent(10,97.29834);
   c1lep4jex3bex_uHcW__17->SetBinError(1,5.880633);
   c1lep4jex3bex_uHcW__17->SetBinError(2,8.07952);
   c1lep4jex3bex_uHcW__17->SetBinError(3,6.907376);
   c1lep4jex3bex_uHcW__17->SetBinError(4,8.193771);
   c1lep4jex3bex_uHcW__17->SetBinError(5,10.19895);
   c1lep4jex3bex_uHcW__17->SetBinError(6,12.93881);
   c1lep4jex3bex_uHcW__17->SetBinError(7,12.49616);
   c1lep4jex3bex_uHcW__17->SetBinError(8,14.47447);
   c1lep4jex3bex_uHcW__17->SetBinError(9,11.67083);
   c1lep4jex3bex_uHcW__17->SetBinError(10,9.029555);
   c1lep4jex3bex_uHcW__17->SetEntries(5559);
   c1lep4jex3bex_uHcW__17->SetDirectory(0);
   c1lep4jex3bex_uHcW__17->SetStats(0);
   c1lep4jex3bex_uHcW__17->SetFillColor(2);
   c1lep4jex3bex_uHcW__17->SetLineColor(2);
   c1lep4jex3bex_uHcW__17->SetMarkerStyle(20);
   c1lep4jex3bex_uHcW__17->SetMarkerSize(1.2);
   c1lep4jex3bex_uHcW__17->GetXaxis()->SetRange(1,20);
   c1lep4jex3bex_uHcW__17->GetXaxis()->SetLabelFont(43);
   c1lep4jex3bex_uHcW__17->GetXaxis()->SetLabelSize(21);
   c1lep4jex3bex_uHcW__17->GetXaxis()->SetTitleSize(21);
   c1lep4jex3bex_uHcW__17->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_uHcW__17->GetXaxis()->SetTitleFont(43);
   c1lep4jex3bex_uHcW__17->GetYaxis()->SetLabelFont(43);
   c1lep4jex3bex_uHcW__17->GetYaxis()->SetLabelSize(21);
   c1lep4jex3bex_uHcW__17->GetYaxis()->SetTitleSize(21);
   c1lep4jex3bex_uHcW__17->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_uHcW__17->GetYaxis()->SetTitleFont(43);
   c1lep4jex3bex_uHcW__17->GetZaxis()->SetLabelFont(43);
   c1lep4jex3bex_uHcW__17->GetZaxis()->SetLabelSize(21);
   c1lep4jex3bex_uHcW__17->GetZaxis()->SetTitleSize(21);
   c1lep4jex3bex_uHcW__17->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jex3bex_uHcW,"");
   h_stack->Draw("hist same");
   
   Double_t g_totErr_fx3007[10] = {
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95};
   Double_t g_totErr_fy3007[10] = {
   1426.227,
   1223.569,
   1131.192,
   1195.864,
   1250.178,
   1373.046,
   1063.522,
   751.5044,
   501.9034,
   203.9614};
   Double_t g_totErr_felx3007[10] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t g_totErr_fely3007[10] = {
   252.1033,
   245.1472,
   234.3046,
   252.6132,
   263.0961,
   297.5816,
   221.4731,
   153.3374,
   100.7686,
   42.93928};
   Double_t g_totErr_fehx3007[10] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t g_totErr_fehy3007[10] = {
   252.1033,
   245.1472,
   234.3046,
   252.6132,
   263.0961,
   297.5816,
   221.4731,
   153.3374,
   100.7686,
   42.93928};
   grae = new TGraphAsymmErrors(10,g_totErr_fx3007,g_totErr_fy3007,g_totErr_felx3007,g_totErr_fehx3007,g_totErr_fely3007,g_totErr_fehy3007);
   grae->SetName("g_totErr");
   grae->SetTitle("FcncDiscriminant");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(3354);
   grae->SetLineColor(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0);
   
   TH1F *Graph_g_totErr3007 = new TH1F("Graph_g_totErr3007","FcncDiscriminant",100,0,1.1);
   Graph_g_totErr3007->SetMinimum(9.291334);
   Graph_g_totErr3007->SetMaximum(1830.061);
   Graph_g_totErr3007->SetDirectory(0);
   Graph_g_totErr3007->SetStats(0);
   Graph_g_totErr3007->SetLineWidth(2);
   Graph_g_totErr3007->SetMarkerStyle(20);
   Graph_g_totErr3007->SetMarkerSize(1.2);
   Graph_g_totErr3007->GetXaxis()->SetLabelFont(43);
   Graph_g_totErr3007->GetXaxis()->SetLabelSize(21);
   Graph_g_totErr3007->GetXaxis()->SetTitleSize(21);
   Graph_g_totErr3007->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_totErr3007->GetXaxis()->SetTitleFont(43);
   Graph_g_totErr3007->GetYaxis()->SetLabelFont(43);
   Graph_g_totErr3007->GetYaxis()->SetLabelSize(21);
   Graph_g_totErr3007->GetYaxis()->SetTitleSize(21);
   Graph_g_totErr3007->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_totErr3007->GetYaxis()->SetTitleFont(43);
   Graph_g_totErr3007->GetZaxis()->SetLabelFont(43);
   Graph_g_totErr3007->GetZaxis()->SetLabelSize(21);
   Graph_g_totErr3007->GetZaxis()->SetTitleSize(21);
   Graph_g_totErr3007->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_totErr3007);
   
   grae->Draw("e2");
   
   Double_t Graph_from_c1lep4jex3bex_Data_fx3008[10] = {
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95};
   Double_t Graph_from_c1lep4jex3bex_Data_fy3008[10] = {
   1705,
   1372,
   1256,
   1381,
   1344,
   1476,
   1177,
   831,
   526,
   207};
   Double_t Graph_from_c1lep4jex3bex_Data_felx3008[10] = {
   0.0499,
   0.0499,
   0.0499,
   0.0499,
   0.0499,
   0.0499,
   0.0499,
   0.0499,
   0.0499,
   0.0499};
   Double_t Graph_from_c1lep4jex3bex_Data_fely3008[10] = {
   41.29165,
   37.04052,
   35.44009,
   37.16181,
   36.66061,
   38.41875,
   34.30743,
   28.82707,
   22.93469,
   14.38749};
   Double_t Graph_from_c1lep4jex3bex_Data_fehx3008[10] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t Graph_from_c1lep4jex3bex_Data_fehy3008[10] = {
   41.29165,
   37.04052,
   35.44009,
   37.16181,
   36.66061,
   38.41875,
   34.30743,
   28.82707,
   22.93469,
   14.38749};
   grae = new TGraphAsymmErrors(10,Graph_from_c1lep4jex3bex_Data_fx3008,Graph_from_c1lep4jex3bex_Data_fy3008,Graph_from_c1lep4jex3bex_Data_felx3008,Graph_from_c1lep4jex3bex_Data_fehx3008,Graph_from_c1lep4jex3bex_Data_fely3008,Graph_from_c1lep4jex3bex_Data_fehy3008);
   grae->SetName("Graph_from_c1lep4jex3bex_Data");
   grae->SetTitle("FcncDiscriminant");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_c1lep4jex3bex_Data3008 = new TH1F("Graph_Graph_from_c1lep4jex3bex_Data3008","FcncDiscriminant",100,0,1.09999);
   Graph_Graph_from_c1lep4jex3bex_Data3008->SetMinimum(37.24459);
   Graph_Graph_from_c1lep4jex3bex_Data3008->SetMaximum(1901.66);
   Graph_Graph_from_c1lep4jex3bex_Data3008->SetDirectory(0);
   Graph_Graph_from_c1lep4jex3bex_Data3008->SetStats(0);
   Graph_Graph_from_c1lep4jex3bex_Data3008->SetLineWidth(2);
   Graph_Graph_from_c1lep4jex3bex_Data3008->SetMarkerStyle(20);
   Graph_Graph_from_c1lep4jex3bex_Data3008->SetMarkerSize(1.2);
   Graph_Graph_from_c1lep4jex3bex_Data3008->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep4jex3bex_Data3008->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep4jex3bex_Data3008->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep4jex3bex_Data3008->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep4jex3bex_Data3008->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep4jex3bex_Data3008->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep4jex3bex_Data3008->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep4jex3bex_Data3008->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep4jex3bex_Data3008->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep4jex3bex_Data3008->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep4jex3bex_Data3008->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep4jex3bex_Data3008->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep4jex3bex_Data3008->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep4jex3bex_Data3008->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_c1lep4jex3bex_Data3008);
   
   grae->Draw("ep1 ");
   Double_t xAxis20[11] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1D *h_dummy_copy__18 = new TH1D("h_dummy_copy__18","FcncDiscriminant",10, xAxis20);
   h_dummy_copy__18->SetEntries(2920927);
   h_dummy_copy__18->SetDirectory(0);
   h_dummy_copy__18->SetStats(0);
   h_dummy_copy__18->SetMarkerStyle(20);
   h_dummy_copy__18->SetMarkerSize(1.2);
   h_dummy_copy__18->GetXaxis()->SetTitle("LH discriminant");
   h_dummy_copy__18->GetXaxis()->SetRange(1,20);
   h_dummy_copy__18->GetXaxis()->SetLabelFont(43);
   h_dummy_copy__18->GetXaxis()->SetLabelSize(21);
   h_dummy_copy__18->GetXaxis()->SetTitleSize(21);
   h_dummy_copy__18->GetXaxis()->SetTitleOffset(1.4);
   h_dummy_copy__18->GetXaxis()->SetTitleFont(43);
   h_dummy_copy__18->GetYaxis()->SetTitle("Events");
   h_dummy_copy__18->GetYaxis()->SetLabelFont(43);
   h_dummy_copy__18->GetYaxis()->SetLabelSize(16.8);
   h_dummy_copy__18->GetYaxis()->SetTitleSize(21);
   h_dummy_copy__18->GetYaxis()->SetTitleOffset(2.4);
   h_dummy_copy__18->GetYaxis()->SetTitleFont(43);
   h_dummy_copy__18->GetZaxis()->SetLabelFont(43);
   h_dummy_copy__18->GetZaxis()->SetLabelSize(21);
   h_dummy_copy__18->GetZaxis()->SetTitleSize(21);
   h_dummy_copy__18->GetZaxis()->SetTitleFont(43);
   h_dummy_copy__18->Draw("sameaxis");
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
      tex = new TLatex(0.18,0.73,"4jex-3bex");
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
   TLegendEntry *entry=leg->AddEntry("c1lep4jex3bex_Data","Data","lep");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep4jex3bex_uHcW","t#bar{t}#rightarrowWbHc (BR=1%)","f");
   entry->SetFillColor(2);
   entry->SetFillStyle(1001);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep4jex3bex_ttbarlight","t#bar{t}+light","f");
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep4jex3bex_ttbarcc","t#bar{t}+cc","f");

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
   entry=leg->AddEntry("c1lep4jex3bex_ttbarbb","t#bar{t}+bb","f");

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
   entry=leg->AddEntry("c1lep4jex3bex_topEW","Non-t#bar{t}","f");

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
   c_c1lep4jex3bex->cd();
   c_c1lep4jex3bex->Modified();
   c_c1lep4jex3bex->cd();
   c_c1lep4jex3bex->SetSelected(c_c1lep4jex3bex);
}
