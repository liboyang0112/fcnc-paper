void c1lep6jin3bex()
{
//=========Macro generated from canvas: c_c1lep6jin3bex/c_c1lep6jin3bex
//=========  (Thu Jul 19 23:20:15 2018) by ROOT version6.04/14
   TCanvas *c_c1lep6jin3bex = new TCanvas("c_c1lep6jin3bex", "c_c1lep6jin3bex",0,0,600,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c_c1lep6jin3bex->SetHighLightColor(2);
   c_c1lep6jin3bex->Range(0,0,1,1);
   c_c1lep6jin3bex->SetFillColor(0);
   c_c1lep6jin3bex->SetBorderMode(0);
   c_c1lep6jin3bex->SetBorderSize(2);
   c_c1lep6jin3bex->SetTickx(1);
   c_c1lep6jin3bex->SetTicky(1);
   c_c1lep6jin3bex->SetLeftMargin(0.16);
   c_c1lep6jin3bex->SetRightMargin(0.05);
   c_c1lep6jin3bex->SetTopMargin(0.05);
   c_c1lep6jin3bex->SetBottomMargin(0.16);
   c_c1lep6jin3bex->SetFrameBorderMode(0);
  
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
   Double_t xAxis71[11] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1D *h_dummy2__64 = new TH1D("h_dummy2__64","Data/MC",10, xAxis71);
   h_dummy2__64->SetMinimum(0.5);
   h_dummy2__64->SetMaximum(1.5);
   h_dummy2__64->SetEntries(1164482);
   h_dummy2__64->SetDirectory(0);
   h_dummy2__64->SetStats(0);
   h_dummy2__64->SetMarkerStyle(20);
   h_dummy2__64->SetMarkerSize(1.2);
   h_dummy2__64->GetXaxis()->SetTitle("LH discriminant");
   h_dummy2__64->GetXaxis()->SetRange(1,20);
   h_dummy2__64->GetXaxis()->SetLabelFont(43);
   h_dummy2__64->GetXaxis()->SetLabelOffset(0.025);
   h_dummy2__64->GetXaxis()->SetLabelSize(16.8);
   h_dummy2__64->GetXaxis()->SetTitleSize(21);
   h_dummy2__64->GetXaxis()->SetTitleOffset(5.05);
   h_dummy2__64->GetXaxis()->SetTitleFont(43);
   h_dummy2__64->GetYaxis()->SetTitle("Data / Bkg");
   h_dummy2__64->GetYaxis()->SetNdivisions(-504);
   h_dummy2__64->GetYaxis()->SetLabelFont(43);
   h_dummy2__64->GetYaxis()->SetLabelOffset(0.02);
   h_dummy2__64->GetYaxis()->SetLabelSize(16.8);
   h_dummy2__64->GetYaxis()->SetTitleSize(21);
   h_dummy2__64->GetYaxis()->SetTitleOffset(2.4);
   h_dummy2__64->GetYaxis()->SetTitleFont(43);
   h_dummy2__64->GetZaxis()->SetLabelFont(43);
   h_dummy2__64->GetZaxis()->SetLabelSize(21);
   h_dummy2__64->GetZaxis()->SetTitleSize(21);
   h_dummy2__64->GetZaxis()->SetTitleFont(43);
   h_dummy2__64->Draw("HIST");
   
   Double_t Graph_from_h_ratio_fx3029[10] = {
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
   Double_t Graph_from_h_ratio_fy3029[10] = {
   1.084311,
   1.121509,
   1.144099,
   1.068546,
   1.144781,
   1.113668,
   1.130701,
   1.099609,
   1.061627,
   0.944179};
   Double_t Graph_from_h_ratio_felx3029[10] = {
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
   Double_t Graph_from_h_ratio_fely3029[10] = {
   0.01954744,
   0.02382418,
   0.02711014,
   0.02639391,
   0.02725669,
   0.02689988,
   0.03071695,
   0.03787254,
   0.05268767,
   0.1042671};
   Double_t Graph_from_h_ratio_fehx3029[10] = {
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
   Double_t Graph_from_h_ratio_fehy3029[10] = {
   0.01954744,
   0.02382418,
   0.02711014,
   0.02639391,
   0.02725669,
   0.02689988,
   0.03071695,
   0.03787254,
   0.05268767,
   0.1042671};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(10,Graph_from_h_ratio_fx3029,Graph_from_h_ratio_fy3029,Graph_from_h_ratio_felx3029,Graph_from_h_ratio_fehx3029,Graph_from_h_ratio_fely3029,Graph_from_h_ratio_fehy3029);
   grae->SetName("Graph_from_h_ratio");
   grae->SetTitle("FcncDiscriminant");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(24);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_h_ratio3029 = new TH1F("Graph_Graph_from_h_ratio3029","FcncDiscriminant",100,0,1.09999);
   Graph_Graph_from_h_ratio3029->SetMinimum(0.8066993);
   Graph_Graph_from_h_ratio3029->SetMaximum(1.20525);
   Graph_Graph_from_h_ratio3029->SetDirectory(0);
   Graph_Graph_from_h_ratio3029->SetStats(0);
   Graph_Graph_from_h_ratio3029->SetLineWidth(2);
   Graph_Graph_from_h_ratio3029->SetMarkerStyle(20);
   Graph_Graph_from_h_ratio3029->SetMarkerSize(1.2);
   Graph_Graph_from_h_ratio3029->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3029->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3029->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3029->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3029->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3029->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3029->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3029->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3029->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3029->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3029->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3029->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3029->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3029->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_h_ratio3029);
   
   grae->Draw("pe0");
   TLine *line = new TLine(0,1,1,1);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t g_ratio2_fx3030[10] = {
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
   Double_t g_ratio2_fy3030[10] = {
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
   Double_t g_ratio2_felx3030[10] = {
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
   Double_t g_ratio2_fely3030[10] = {
   0.18038,
   0.1855681,
   0.1964579,
   0.20067,
   0.2097903,
   0.219298,
   0.2156661,
   0.2111951,
   0.206975,
   0.2378559};
   Double_t g_ratio2_fehx3030[10] = {
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
   Double_t g_ratio2_fehy3030[10] = {
   0.18038,
   0.1855681,
   0.1964579,
   0.20067,
   0.2097903,
   0.219298,
   0.2156661,
   0.2111951,
   0.206975,
   0.2378559};
   grae = new TGraphAsymmErrors(10,g_ratio2_fx3030,g_ratio2_fy3030,g_ratio2_felx3030,g_ratio2_fehx3030,g_ratio2_fely3030,g_ratio2_fehy3030);
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
   
   TH1F *Graph_g_ratio23030 = new TH1F("Graph_g_ratio23030","FcncDiscriminant",100,0,1.1);
   Graph_g_ratio23030->SetMinimum(0.7145729);
   Graph_g_ratio23030->SetMaximum(1.285427);
   Graph_g_ratio23030->SetDirectory(0);
   Graph_g_ratio23030->SetStats(0);
   Graph_g_ratio23030->SetLineWidth(2);
   Graph_g_ratio23030->SetMarkerStyle(20);
   Graph_g_ratio23030->SetMarkerSize(1.2);
   Graph_g_ratio23030->GetXaxis()->SetLabelFont(43);
   Graph_g_ratio23030->GetXaxis()->SetLabelSize(21);
   Graph_g_ratio23030->GetXaxis()->SetTitleSize(21);
   Graph_g_ratio23030->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23030->GetXaxis()->SetTitleFont(43);
   Graph_g_ratio23030->GetYaxis()->SetLabelFont(43);
   Graph_g_ratio23030->GetYaxis()->SetLabelSize(21);
   Graph_g_ratio23030->GetYaxis()->SetTitleSize(21);
   Graph_g_ratio23030->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23030->GetYaxis()->SetTitleFont(43);
   Graph_g_ratio23030->GetZaxis()->SetLabelFont(43);
   Graph_g_ratio23030->GetZaxis()->SetLabelSize(21);
   Graph_g_ratio23030->GetZaxis()->SetTitleSize(21);
   Graph_g_ratio23030->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_ratio23030);
   
   grae->Draw("e2");
   Double_t xAxis72[11] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1D *h_dummy2_copy__65 = new TH1D("h_dummy2_copy__65","Data/MC",10, xAxis72);
   h_dummy2_copy__65->SetMinimum(0.5);
   h_dummy2_copy__65->SetMaximum(1.5);
   h_dummy2_copy__65->SetEntries(1164482);
   h_dummy2_copy__65->SetDirectory(0);
   h_dummy2_copy__65->SetStats(0);
   h_dummy2_copy__65->SetMarkerStyle(20);
   h_dummy2_copy__65->SetMarkerSize(1.2);
   h_dummy2_copy__65->GetXaxis()->SetTitle("LH discriminant");
   h_dummy2_copy__65->GetXaxis()->SetRange(1,20);
   h_dummy2_copy__65->GetXaxis()->SetLabelFont(43);
   h_dummy2_copy__65->GetXaxis()->SetLabelOffset(0.025);
   h_dummy2_copy__65->GetXaxis()->SetLabelSize(16.8);
   h_dummy2_copy__65->GetXaxis()->SetTitleSize(21);
   h_dummy2_copy__65->GetXaxis()->SetTitleOffset(5.05);
   h_dummy2_copy__65->GetXaxis()->SetTitleFont(43);
   h_dummy2_copy__65->GetYaxis()->SetTitle("Data / Bkg");
   h_dummy2_copy__65->GetYaxis()->SetNdivisions(-504);
   h_dummy2_copy__65->GetYaxis()->SetLabelFont(43);
   h_dummy2_copy__65->GetYaxis()->SetLabelOffset(0.02);
   h_dummy2_copy__65->GetYaxis()->SetLabelSize(16.8);
   h_dummy2_copy__65->GetYaxis()->SetTitleSize(21);
   h_dummy2_copy__65->GetYaxis()->SetTitleOffset(2.4);
   h_dummy2_copy__65->GetYaxis()->SetTitleFont(43);
   h_dummy2_copy__65->GetZaxis()->SetLabelFont(43);
   h_dummy2_copy__65->GetZaxis()->SetLabelSize(21);
   h_dummy2_copy__65->GetZaxis()->SetTitleSize(21);
   h_dummy2_copy__65->GetZaxis()->SetTitleFont(43);
   h_dummy2_copy__65->Draw("sameaxis");
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
   c_c1lep6jin3bex->cd();
  
// ------------>Primitives in pad: pad0
   TPad *pad0 = new TPad("pad0", "pad0",0,0.2,1,1);
   pad0->Draw();
   pad0->cd();
   pad0->Range(-0.1728395,-663.3468,1.061728,5970.121);
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
   Double_t xAxis73[11] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1D *h_dummy__66 = new TH1D("h_dummy__66","FcncDiscriminant",10, xAxis73);
   h_dummy__66->SetMinimum(0);
   h_dummy__66->SetMaximum(5638.447);
   h_dummy__66->SetEntries(1164482);
   h_dummy__66->SetDirectory(0);
   h_dummy__66->SetStats(0);
   h_dummy__66->SetMarkerStyle(20);
   h_dummy__66->SetMarkerSize(1.2);
   h_dummy__66->GetXaxis()->SetRange(1,20);
   h_dummy__66->GetXaxis()->SetLabelFont(43);
   h_dummy__66->GetXaxis()->SetLabelSize(0);
   h_dummy__66->GetXaxis()->SetTitleSize(21);
   h_dummy__66->GetXaxis()->SetTitleOffset(1.4);
   h_dummy__66->GetXaxis()->SetTitleFont(43);
   h_dummy__66->GetYaxis()->SetTitle("Events / 0.1");
   h_dummy__66->GetYaxis()->SetLabelFont(43);
   h_dummy__66->GetYaxis()->SetLabelSize(16.8);
   h_dummy__66->GetYaxis()->SetTitleSize(21);
   h_dummy__66->GetYaxis()->SetTitleOffset(2.4);
   h_dummy__66->GetYaxis()->SetTitleFont(43);
   h_dummy__66->GetZaxis()->SetLabelFont(43);
   h_dummy__66->GetZaxis()->SetLabelSize(21);
   h_dummy__66->GetZaxis()->SetTitleSize(21);
   h_dummy__66->GetZaxis()->SetTitleFont(43);
   h_dummy__66->Draw("HIST");
   
   THStack *h_stack = new THStack();
   h_stack->SetName("h_stack");
   h_stack->SetTitle("h_stack");
   Double_t xAxis74[11] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1F *h_stack_stack_8 = new TH1F("h_stack_stack_8","h_stack",10, xAxis74);
   h_stack_stack_8->SetMinimum(0);
   h_stack_stack_8->SetMaximum(3003.957);
   h_stack_stack_8->SetDirectory(0);
   h_stack_stack_8->SetStats(0);
   h_stack_stack_8->SetLineWidth(2);
   h_stack_stack_8->SetMarkerStyle(20);
   h_stack_stack_8->SetMarkerSize(1.2);
   h_stack_stack_8->GetXaxis()->SetLabelFont(43);
   h_stack_stack_8->GetXaxis()->SetLabelSize(21);
   h_stack_stack_8->GetXaxis()->SetTitleSize(21);
   h_stack_stack_8->GetXaxis()->SetTitleOffset(1.4);
   h_stack_stack_8->GetXaxis()->SetTitleFont(43);
   h_stack_stack_8->GetYaxis()->SetLabelFont(43);
   h_stack_stack_8->GetYaxis()->SetLabelSize(21);
   h_stack_stack_8->GetYaxis()->SetTitleSize(21);
   h_stack_stack_8->GetYaxis()->SetTitleOffset(1.4);
   h_stack_stack_8->GetYaxis()->SetTitleFont(43);
   h_stack_stack_8->GetZaxis()->SetLabelFont(43);
   h_stack_stack_8->GetZaxis()->SetLabelSize(21);
   h_stack_stack_8->GetZaxis()->SetTitleSize(21);
   h_stack_stack_8->GetZaxis()->SetTitleFont(43);
   h_stack->SetHistogram(h_stack_stack_8);
   
   Double_t xAxis75[11] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1D *c1lep6jin3bex_topEW__67 = new TH1D("c1lep6jin3bex_topEW__67","FcncDiscriminant",10, xAxis75);
   c1lep6jin3bex_topEW__67->SetBinContent(1,412.832);
   c1lep6jin3bex_topEW__67->SetBinContent(2,300.4585);
   c1lep6jin3bex_topEW__67->SetBinContent(3,231.764);
   c1lep6jin3bex_topEW__67->SetBinContent(4,196.3455);
   c1lep6jin3bex_topEW__67->SetBinContent(5,182.3227);
   c1lep6jin3bex_topEW__67->SetBinContent(6,181.5344);
   c1lep6jin3bex_topEW__67->SetBinContent(7,159.5338);
   c1lep6jin3bex_topEW__67->SetBinContent(8,117.4485);
   c1lep6jin3bex_topEW__67->SetBinContent(9,69.37839);
   c1lep6jin3bex_topEW__67->SetBinContent(10,20.46015);
   c1lep6jin3bex_topEW__67->SetBinError(1,45.17478);
   c1lep6jin3bex_topEW__67->SetBinError(2,38.63945);
   c1lep6jin3bex_topEW__67->SetBinError(3,32.56866);
   c1lep6jin3bex_topEW__67->SetBinError(4,29.33271);
   c1lep6jin3bex_topEW__67->SetBinError(5,26.7731);
   c1lep6jin3bex_topEW__67->SetBinError(6,26.80593);
   c1lep6jin3bex_topEW__67->SetBinError(7,25.67784);
   c1lep6jin3bex_topEW__67->SetBinError(8,23.33849);
   c1lep6jin3bex_topEW__67->SetBinError(9,19.57786);
   c1lep6jin3bex_topEW__67->SetBinError(10,9.338841);
   c1lep6jin3bex_topEW__67->SetEntries(1125846);
   c1lep6jin3bex_topEW__67->SetDirectory(0);
   c1lep6jin3bex_topEW__67->SetStats(0);

   ci = TColor::GetColor("#66cc66");
   c1lep6jin3bex_topEW__67->SetFillColor(ci);
   c1lep6jin3bex_topEW__67->SetMarkerStyle(20);
   c1lep6jin3bex_topEW__67->SetMarkerSize(1.2);
   c1lep6jin3bex_topEW__67->GetXaxis()->SetRange(1,20);
   c1lep6jin3bex_topEW__67->GetXaxis()->SetLabelFont(43);
   c1lep6jin3bex_topEW__67->GetXaxis()->SetLabelSize(21);
   c1lep6jin3bex_topEW__67->GetXaxis()->SetTitleSize(21);
   c1lep6jin3bex_topEW__67->GetXaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_topEW__67->GetXaxis()->SetTitleFont(43);
   c1lep6jin3bex_topEW__67->GetYaxis()->SetLabelFont(43);
   c1lep6jin3bex_topEW__67->GetYaxis()->SetLabelSize(21);
   c1lep6jin3bex_topEW__67->GetYaxis()->SetTitleSize(21);
   c1lep6jin3bex_topEW__67->GetYaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_topEW__67->GetYaxis()->SetTitleFont(43);
   c1lep6jin3bex_topEW__67->GetZaxis()->SetLabelFont(43);
   c1lep6jin3bex_topEW__67->GetZaxis()->SetLabelSize(21);
   c1lep6jin3bex_topEW__67->GetZaxis()->SetTitleSize(21);
   c1lep6jin3bex_topEW__67->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep6jin3bex_topEW,"");
   Double_t xAxis76[11] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1D *c1lep6jin3bex_ttbarbb__68 = new TH1D("c1lep6jin3bex_ttbarbb__68","FcncDiscriminant",10, xAxis76);
   c1lep6jin3bex_ttbarbb__68->SetBinContent(1,1809.123);
   c1lep6jin3bex_ttbarbb__68->SetBinContent(2,1165.274);
   c1lep6jin3bex_ttbarbb__68->SetBinContent(3,821.9681);
   c1lep6jin3bex_ttbarbb__68->SetBinContent(4,813.3373);
   c1lep6jin3bex_ttbarbb__68->SetBinContent(5,771.6309);
   c1lep6jin3bex_ttbarbb__68->SetBinContent(6,723.1853);
   c1lep6jin3bex_ttbarbb__68->SetBinContent(7,571.2759);
   c1lep6jin3bex_ttbarbb__68->SetBinContent(8,376.1305);
   c1lep6jin3bex_ttbarbb__68->SetBinContent(9,189.8303);
   c1lep6jin3bex_ttbarbb__68->SetBinContent(10,40.73788);
   c1lep6jin3bex_ttbarbb__68->SetBinError(1,27.60439);
   c1lep6jin3bex_ttbarbb__68->SetBinError(2,22.3981);
   c1lep6jin3bex_ttbarbb__68->SetBinError(3,18.29904);
   c1lep6jin3bex_ttbarbb__68->SetBinError(4,18.58104);
   c1lep6jin3bex_ttbarbb__68->SetBinError(5,18.10189);
   c1lep6jin3bex_ttbarbb__68->SetBinError(6,16.81215);
   c1lep6jin3bex_ttbarbb__68->SetBinError(7,15.72003);
   c1lep6jin3bex_ttbarbb__68->SetBinError(8,12.28107);
   c1lep6jin3bex_ttbarbb__68->SetBinError(9,9.623044);
   c1lep6jin3bex_ttbarbb__68->SetBinError(10,4.447735);
   c1lep6jin3bex_ttbarbb__68->SetEntries(26042);
   c1lep6jin3bex_ttbarbb__68->SetDirectory(0);
   c1lep6jin3bex_ttbarbb__68->SetStats(0);

   ci = TColor::GetColor("#6666cc");
   c1lep6jin3bex_ttbarbb__68->SetFillColor(ci);
   c1lep6jin3bex_ttbarbb__68->SetMarkerStyle(20);
   c1lep6jin3bex_ttbarbb__68->SetMarkerSize(1.2);
   c1lep6jin3bex_ttbarbb__68->GetXaxis()->SetRange(1,20);
   c1lep6jin3bex_ttbarbb__68->GetXaxis()->SetLabelFont(43);
   c1lep6jin3bex_ttbarbb__68->GetXaxis()->SetLabelSize(21);
   c1lep6jin3bex_ttbarbb__68->GetXaxis()->SetTitleSize(21);
   c1lep6jin3bex_ttbarbb__68->GetXaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_ttbarbb__68->GetXaxis()->SetTitleFont(43);
   c1lep6jin3bex_ttbarbb__68->GetYaxis()->SetLabelFont(43);
   c1lep6jin3bex_ttbarbb__68->GetYaxis()->SetLabelSize(21);
   c1lep6jin3bex_ttbarbb__68->GetYaxis()->SetTitleSize(21);
   c1lep6jin3bex_ttbarbb__68->GetYaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_ttbarbb__68->GetYaxis()->SetTitleFont(43);
   c1lep6jin3bex_ttbarbb__68->GetZaxis()->SetLabelFont(43);
   c1lep6jin3bex_ttbarbb__68->GetZaxis()->SetLabelSize(21);
   c1lep6jin3bex_ttbarbb__68->GetZaxis()->SetTitleSize(21);
   c1lep6jin3bex_ttbarbb__68->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep6jin3bex_ttbarbb,"");
   Double_t xAxis77[11] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1D *c1lep6jin3bex_ttbarcc__69 = new TH1D("c1lep6jin3bex_ttbarcc__69","FcncDiscriminant",10, xAxis77);
   c1lep6jin3bex_ttbarcc__69->SetBinContent(1,369.4021);
   c1lep6jin3bex_ttbarcc__69->SetBinContent(2,249.6812);
   c1lep6jin3bex_ttbarcc__69->SetBinContent(3,211.8065);
   c1lep6jin3bex_ttbarcc__69->SetBinContent(4,201.0945);
   c1lep6jin3bex_ttbarcc__69->SetBinContent(5,214.9838);
   c1lep6jin3bex_ttbarcc__69->SetBinContent(6,238.1201);
   c1lep6jin3bex_ttbarcc__69->SetBinContent(7,170.8014);
   c1lep6jin3bex_ttbarcc__69->SetBinContent(8,102.3774);
   c1lep6jin3bex_ttbarcc__69->SetBinContent(9,46.99067);
   c1lep6jin3bex_ttbarcc__69->SetBinContent(10,8.997552);
   c1lep6jin3bex_ttbarcc__69->SetBinError(1,12.82641);
   c1lep6jin3bex_ttbarcc__69->SetBinError(2,11.13432);
   c1lep6jin3bex_ttbarcc__69->SetBinError(3,11.16824);
   c1lep6jin3bex_ttbarcc__69->SetBinError(4,9.074813);
   c1lep6jin3bex_ttbarcc__69->SetBinError(5,9.7656);
   c1lep6jin3bex_ttbarcc__69->SetBinError(6,12.55939);
   c1lep6jin3bex_ttbarcc__69->SetBinError(7,8.483466);
   c1lep6jin3bex_ttbarcc__69->SetBinError(8,6.89908);
   c1lep6jin3bex_ttbarcc__69->SetBinError(9,4.508312);
   c1lep6jin3bex_ttbarcc__69->SetBinError(10,1.767207);
   c1lep6jin3bex_ttbarcc__69->SetEntries(5630);
   c1lep6jin3bex_ttbarcc__69->SetDirectory(0);
   c1lep6jin3bex_ttbarcc__69->SetStats(0);

   ci = TColor::GetColor("#ccccff");
   c1lep6jin3bex_ttbarcc__69->SetFillColor(ci);
   c1lep6jin3bex_ttbarcc__69->SetMarkerStyle(20);
   c1lep6jin3bex_ttbarcc__69->SetMarkerSize(1.2);
   c1lep6jin3bex_ttbarcc__69->GetXaxis()->SetRange(1,20);
   c1lep6jin3bex_ttbarcc__69->GetXaxis()->SetLabelFont(43);
   c1lep6jin3bex_ttbarcc__69->GetXaxis()->SetLabelSize(21);
   c1lep6jin3bex_ttbarcc__69->GetXaxis()->SetTitleSize(21);
   c1lep6jin3bex_ttbarcc__69->GetXaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_ttbarcc__69->GetXaxis()->SetTitleFont(43);
   c1lep6jin3bex_ttbarcc__69->GetYaxis()->SetLabelFont(43);
   c1lep6jin3bex_ttbarcc__69->GetYaxis()->SetLabelSize(21);
   c1lep6jin3bex_ttbarcc__69->GetYaxis()->SetTitleSize(21);
   c1lep6jin3bex_ttbarcc__69->GetYaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_ttbarcc__69->GetYaxis()->SetTitleFont(43);
   c1lep6jin3bex_ttbarcc__69->GetZaxis()->SetLabelFont(43);
   c1lep6jin3bex_ttbarcc__69->GetZaxis()->SetLabelSize(21);
   c1lep6jin3bex_ttbarcc__69->GetZaxis()->SetTitleSize(21);
   c1lep6jin3bex_ttbarcc__69->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep6jin3bex_ttbarcc,"");
   Double_t xAxis78[11] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1D *c1lep6jin3bex_ttbarlight__70 = new TH1D("c1lep6jin3bex_ttbarlight__70","FcncDiscriminant",10, xAxis78);
   c1lep6jin3bex_ttbarlight__70->SetBinContent(1,246.391);
   c1lep6jin3bex_ttbarlight__70->SetBinContent(2,260.4946);
   c1lep6jin3bex_ttbarlight__70->SetBinContent(3,291.1445);
   c1lep6jin3bex_ttbarlight__70->SetBinContent(4,323.0831);
   c1lep6jin3bex_ttbarlight__70->SetBinContent(5,371.9686);
   c1lep6jin3bex_ttbarlight__70->SetBinContent(6,396.2185);
   c1lep6jin3bex_ttbarlight__70->SetBinContent(7,296.7605);
   c1lep6jin3bex_ttbarlight__70->SetBinContent(8,170.6799);
   c1lep6jin3bex_ttbarlight__70->SetBinContent(9,76.23247);
   c1lep6jin3bex_ttbarlight__70->SetBinContent(10,16.65235);
   c1lep6jin3bex_ttbarlight__70->SetBinError(1,12.57286);
   c1lep6jin3bex_ttbarlight__70->SetBinError(2,13.18649);
   c1lep6jin3bex_ttbarlight__70->SetBinError(3,12.79229);
   c1lep6jin3bex_ttbarlight__70->SetBinError(4,14.10261);
   c1lep6jin3bex_ttbarlight__70->SetBinError(5,13.90997);
   c1lep6jin3bex_ttbarlight__70->SetBinError(6,14.84602);
   c1lep6jin3bex_ttbarlight__70->SetBinError(7,11.78642);
   c1lep6jin3bex_ttbarlight__70->SetBinError(8,9.378805);
   c1lep6jin3bex_ttbarlight__70->SetBinError(9,7.459683);
   c1lep6jin3bex_ttbarlight__70->SetBinError(10,2.683277);
   c1lep6jin3bex_ttbarlight__70->SetEntries(6954);
   c1lep6jin3bex_ttbarlight__70->SetDirectory(0);
   c1lep6jin3bex_ttbarlight__70->SetStats(0);
   c1lep6jin3bex_ttbarlight__70->SetMarkerStyle(20);
   c1lep6jin3bex_ttbarlight__70->SetMarkerSize(1.2);
   c1lep6jin3bex_ttbarlight__70->GetXaxis()->SetRange(1,20);
   c1lep6jin3bex_ttbarlight__70->GetXaxis()->SetLabelFont(43);
   c1lep6jin3bex_ttbarlight__70->GetXaxis()->SetLabelSize(21);
   c1lep6jin3bex_ttbarlight__70->GetXaxis()->SetTitleSize(21);
   c1lep6jin3bex_ttbarlight__70->GetXaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_ttbarlight__70->GetXaxis()->SetTitleFont(43);
   c1lep6jin3bex_ttbarlight__70->GetYaxis()->SetLabelFont(43);
   c1lep6jin3bex_ttbarlight__70->GetYaxis()->SetLabelSize(21);
   c1lep6jin3bex_ttbarlight__70->GetYaxis()->SetTitleSize(21);
   c1lep6jin3bex_ttbarlight__70->GetYaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_ttbarlight__70->GetYaxis()->SetTitleFont(43);
   c1lep6jin3bex_ttbarlight__70->GetZaxis()->SetLabelFont(43);
   c1lep6jin3bex_ttbarlight__70->GetZaxis()->SetLabelSize(21);
   c1lep6jin3bex_ttbarlight__70->GetZaxis()->SetTitleSize(21);
   c1lep6jin3bex_ttbarlight__70->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep6jin3bex_ttbarlight,"");
   Double_t xAxis79[11] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1D *c1lep6jin3bex_uHcW__71 = new TH1D("c1lep6jin3bex_uHcW__71","FcncDiscriminant",10, xAxis79);
   c1lep6jin3bex_uHcW__71->SetBinContent(1,23.1639);
   c1lep6jin3bex_uHcW__71->SetBinContent(2,41.2524);
   c1lep6jin3bex_uHcW__71->SetBinContent(3,38.0965);
   c1lep6jin3bex_uHcW__71->SetBinContent(4,50.49175);
   c1lep6jin3bex_uHcW__71->SetBinContent(5,92.70065);
   c1lep6jin3bex_uHcW__71->SetBinContent(6,112.0203);
   c1lep6jin3bex_uHcW__71->SetBinContent(7,111.8908);
   c1lep6jin3bex_uHcW__71->SetBinContent(8,116.5659);
   c1lep6jin3bex_uHcW__71->SetBinContent(9,77.44448);
   c1lep6jin3bex_uHcW__71->SetBinContent(10,25.40578);
   c1lep6jin3bex_uHcW__71->SetBinError(1,6.50227);
   c1lep6jin3bex_uHcW__71->SetBinError(2,7.414262);
   c1lep6jin3bex_uHcW__71->SetBinError(3,8.874946);
   c1lep6jin3bex_uHcW__71->SetBinError(4,9.302836);
   c1lep6jin3bex_uHcW__71->SetBinError(5,11.3237);
   c1lep6jin3bex_uHcW__71->SetBinError(6,11.49907);
   c1lep6jin3bex_uHcW__71->SetBinError(7,14.09939);
   c1lep6jin3bex_uHcW__71->SetBinError(8,12.76863);
   c1lep6jin3bex_uHcW__71->SetBinError(9,8.832555);
   c1lep6jin3bex_uHcW__71->SetBinError(10,5.566642);
   c1lep6jin3bex_uHcW__71->SetEntries(5540);
   c1lep6jin3bex_uHcW__71->SetDirectory(0);
   c1lep6jin3bex_uHcW__71->SetStats(0);
   c1lep6jin3bex_uHcW__71->SetFillColor(2);
   c1lep6jin3bex_uHcW__71->SetLineColor(2);
   c1lep6jin3bex_uHcW__71->SetMarkerStyle(20);
   c1lep6jin3bex_uHcW__71->SetMarkerSize(1.2);
   c1lep6jin3bex_uHcW__71->GetXaxis()->SetRange(1,20);
   c1lep6jin3bex_uHcW__71->GetXaxis()->SetLabelFont(43);
   c1lep6jin3bex_uHcW__71->GetXaxis()->SetLabelSize(21);
   c1lep6jin3bex_uHcW__71->GetXaxis()->SetTitleSize(21);
   c1lep6jin3bex_uHcW__71->GetXaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_uHcW__71->GetXaxis()->SetTitleFont(43);
   c1lep6jin3bex_uHcW__71->GetYaxis()->SetLabelFont(43);
   c1lep6jin3bex_uHcW__71->GetYaxis()->SetLabelSize(21);
   c1lep6jin3bex_uHcW__71->GetYaxis()->SetTitleSize(21);
   c1lep6jin3bex_uHcW__71->GetYaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_uHcW__71->GetYaxis()->SetTitleFont(43);
   c1lep6jin3bex_uHcW__71->GetZaxis()->SetLabelFont(43);
   c1lep6jin3bex_uHcW__71->GetZaxis()->SetLabelSize(21);
   c1lep6jin3bex_uHcW__71->GetZaxis()->SetTitleSize(21);
   c1lep6jin3bex_uHcW__71->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep6jin3bex_uHcW,"");
   h_stack->Draw("hist same");
   
   Double_t g_totErr_fx3031[10] = {
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
   Double_t g_totErr_fy3031[10] = {
   2837.748,
   1975.909,
   1556.683,
   1533.86,
   1540.906,
   1539.058,
   1198.372,
   766.6363,
   382.4318,
   86.84794};
   Double_t g_totErr_felx3031[10] = {
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
   Double_t g_totErr_fely3031[10] = {
   511.8729,
   366.6656,
   305.8227,
   307.7997,
   323.2671,
   337.5125,
   258.4481,
   161.9098,
   79.15382,
   20.6573};
   Double_t g_totErr_fehx3031[10] = {
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
   Double_t g_totErr_fehy3031[10] = {
   511.8729,
   366.6656,
   305.8227,
   307.7997,
   323.2671,
   337.5125,
   258.4481,
   161.9098,
   79.15382,
   20.6573};
   grae = new TGraphAsymmErrors(10,g_totErr_fx3031,g_totErr_fy3031,g_totErr_felx3031,g_totErr_fehx3031,g_totErr_fely3031,g_totErr_fehy3031);
   grae->SetName("g_totErr");
   grae->SetTitle("FcncDiscriminant");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(3354);
   grae->SetLineColor(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0);
   
   TH1F *Graph_g_totErr3031 = new TH1F("Graph_g_totErr3031","FcncDiscriminant",100,0,1.1);
   Graph_g_totErr3031->SetMinimum(0);
   Graph_g_totErr3031->SetMaximum(3677.964);
   Graph_g_totErr3031->SetDirectory(0);
   Graph_g_totErr3031->SetStats(0);
   Graph_g_totErr3031->SetLineWidth(2);
   Graph_g_totErr3031->SetMarkerStyle(20);
   Graph_g_totErr3031->SetMarkerSize(1.2);
   Graph_g_totErr3031->GetXaxis()->SetLabelFont(43);
   Graph_g_totErr3031->GetXaxis()->SetLabelSize(21);
   Graph_g_totErr3031->GetXaxis()->SetTitleSize(21);
   Graph_g_totErr3031->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_totErr3031->GetXaxis()->SetTitleFont(43);
   Graph_g_totErr3031->GetYaxis()->SetLabelFont(43);
   Graph_g_totErr3031->GetYaxis()->SetLabelSize(21);
   Graph_g_totErr3031->GetYaxis()->SetTitleSize(21);
   Graph_g_totErr3031->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_totErr3031->GetYaxis()->SetTitleFont(43);
   Graph_g_totErr3031->GetZaxis()->SetLabelFont(43);
   Graph_g_totErr3031->GetZaxis()->SetLabelSize(21);
   Graph_g_totErr3031->GetZaxis()->SetTitleSize(21);
   Graph_g_totErr3031->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_totErr3031);
   
   grae->Draw("e2");
   
   Double_t Graph_from_c1lep6jin3bex_Data_fx3032[10] = {
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
   Double_t Graph_from_c1lep6jin3bex_Data_fy3032[10] = {
   3077,
   2216,
   1781,
   1639,
   1764,
   1714,
   1355,
   843,
   406,
   82};
   Double_t Graph_from_c1lep6jin3bex_Data_felx3032[10] = {
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
   Double_t Graph_from_c1lep6jin3bex_Data_fely3032[10] = {
   55.47071,
   47.07441,
   42.2019,
   40.48456,
   42,
   41.40048,
   36.81032,
   29.03446,
   20.14944,
   9.055385};
   Double_t Graph_from_c1lep6jin3bex_Data_fehx3032[10] = {
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
   Double_t Graph_from_c1lep6jin3bex_Data_fehy3032[10] = {
   55.47071,
   47.07441,
   42.2019,
   40.48456,
   42,
   41.40048,
   36.81032,
   29.03446,
   20.14944,
   9.055385};
   grae = new TGraphAsymmErrors(10,Graph_from_c1lep6jin3bex_Data_fx3032,Graph_from_c1lep6jin3bex_Data_fy3032,Graph_from_c1lep6jin3bex_Data_felx3032,Graph_from_c1lep6jin3bex_Data_fehx3032,Graph_from_c1lep6jin3bex_Data_fely3032,Graph_from_c1lep6jin3bex_Data_fehy3032);
   grae->SetName("Graph_from_c1lep6jin3bex_Data");
   grae->SetTitle("FcncDiscriminant");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_c1lep6jin3bex_Data3032 = new TH1F("Graph_Graph_from_c1lep6jin3bex_Data3032","FcncDiscriminant",100,0,1.09999);
   Graph_Graph_from_c1lep6jin3bex_Data3032->SetMinimum(0);
   Graph_Graph_from_c1lep6jin3bex_Data3032->SetMaximum(3438.423);
   Graph_Graph_from_c1lep6jin3bex_Data3032->SetDirectory(0);
   Graph_Graph_from_c1lep6jin3bex_Data3032->SetStats(0);
   Graph_Graph_from_c1lep6jin3bex_Data3032->SetLineWidth(2);
   Graph_Graph_from_c1lep6jin3bex_Data3032->SetMarkerStyle(20);
   Graph_Graph_from_c1lep6jin3bex_Data3032->SetMarkerSize(1.2);
   Graph_Graph_from_c1lep6jin3bex_Data3032->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep6jin3bex_Data3032->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep6jin3bex_Data3032->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep6jin3bex_Data3032->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep6jin3bex_Data3032->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep6jin3bex_Data3032->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep6jin3bex_Data3032->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep6jin3bex_Data3032->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep6jin3bex_Data3032->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep6jin3bex_Data3032->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep6jin3bex_Data3032->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep6jin3bex_Data3032->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep6jin3bex_Data3032->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep6jin3bex_Data3032->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_c1lep6jin3bex_Data3032);
   
   grae->Draw("ep1 ");
   Double_t xAxis80[11] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1D *h_dummy_copy__72 = new TH1D("h_dummy_copy__72","FcncDiscriminant",10, xAxis80);
   h_dummy_copy__72->SetEntries(1164482);
   h_dummy_copy__72->SetDirectory(0);
   h_dummy_copy__72->SetStats(0);
   h_dummy_copy__72->SetMarkerStyle(20);
   h_dummy_copy__72->SetMarkerSize(1.2);
   h_dummy_copy__72->GetXaxis()->SetTitle("LH discriminant");
   h_dummy_copy__72->GetXaxis()->SetRange(1,20);
   h_dummy_copy__72->GetXaxis()->SetLabelFont(43);
   h_dummy_copy__72->GetXaxis()->SetLabelSize(21);
   h_dummy_copy__72->GetXaxis()->SetTitleSize(21);
   h_dummy_copy__72->GetXaxis()->SetTitleOffset(1.4);
   h_dummy_copy__72->GetXaxis()->SetTitleFont(43);
   h_dummy_copy__72->GetYaxis()->SetTitle("Events / 0.1");
   h_dummy_copy__72->GetYaxis()->SetLabelFont(43);
   h_dummy_copy__72->GetYaxis()->SetLabelSize(16.8);
   h_dummy_copy__72->GetYaxis()->SetTitleSize(21);
   h_dummy_copy__72->GetYaxis()->SetTitleOffset(2.4);
   h_dummy_copy__72->GetYaxis()->SetTitleFont(43);
   h_dummy_copy__72->GetZaxis()->SetLabelFont(43);
   h_dummy_copy__72->GetZaxis()->SetLabelSize(21);
   h_dummy_copy__72->GetZaxis()->SetTitleSize(21);
   h_dummy_copy__72->GetZaxis()->SetTitleFont(43);
   h_dummy_copy__72->Draw("sameaxis");
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
   
   TLegend *leg = new TLegend(0.5308,0.63,0.92,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(43);
   leg->SetTextSize(18.9);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("c1lep6jin3bex_Data","Data","lep");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep6jin3bex_uHcW","t#bar{t}#rightarrowWbHc (BR=1%)","f");
   entry->SetFillColor(2);
   entry->SetFillStyle(1001);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep6jin3bex_ttbarlight","t#bar{t}+light-jets","f");
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep6jin3bex_ttbarcc","t#bar{t}+#geq1c","f");

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
   entry=leg->AddEntry("c1lep6jin3bex_ttbarbb","t#bar{t}+#geq1b","f");

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
   entry=leg->AddEntry("c1lep6jin3bex_topEW","Non-t#bar{t}","f");

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
   c_c1lep6jin3bex->cd();
   c_c1lep6jin3bex->Modified();
   c_c1lep6jin3bex->cd();
   c_c1lep6jin3bex->SetSelected(c_c1lep6jin3bex);
}
