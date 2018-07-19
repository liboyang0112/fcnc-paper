void c1lep6jin3bex_postFit()
{
//=========Macro generated from canvas: c_c1lep6jin3bex_postFit/c_c1lep6jin3bex_postFit
//=========  (Thu Jul 19 11:48:39 2018) by ROOT version6.04/14
   TCanvas *c_c1lep6jin3bex_postFit = new TCanvas("c_c1lep6jin3bex_postFit", "c_c1lep6jin3bex_postFit",0,0,600,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c_c1lep6jin3bex_postFit->SetHighLightColor(2);
   c_c1lep6jin3bex_postFit->Range(0,0,1,1);
   c_c1lep6jin3bex_postFit->SetFillColor(0);
   c_c1lep6jin3bex_postFit->SetBorderMode(0);
   c_c1lep6jin3bex_postFit->SetBorderSize(2);
   c_c1lep6jin3bex_postFit->SetTickx(1);
   c_c1lep6jin3bex_postFit->SetTicky(1);
   c_c1lep6jin3bex_postFit->SetLeftMargin(0.16);
   c_c1lep6jin3bex_postFit->SetRightMargin(0.05);
   c_c1lep6jin3bex_postFit->SetTopMargin(0.05);
   c_c1lep6jin3bex_postFit->SetBottomMargin(0.16);
   c_c1lep6jin3bex_postFit->SetFrameBorderMode(0);
  
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
   h_dummy2__64->SetEntries(1164642);
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
   0.9764972,
   1.009403,
   1.024734,
   0.9658676,
   1.028146,
   0.9963757,
   1.021661,
   1.004027,
   0.9748264,
   0.8797948};
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
   0.01760383,
   0.0214427,
   0.0242817,
   0.02385768,
   0.02447967,
   0.02406676,
   0.02775475,
   0.03458051,
   0.04837982,
   0.09715708};
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
   0.01760383,
   0.0214427,
   0.0242817,
   0.02385768,
   0.02447967,
   0.02406676,
   0.02775475,
   0.03458051,
   0.04837982,
   0.09715708};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(10,Graph_from_h_ratio_fx3029,Graph_from_h_ratio_fy3029,Graph_from_h_ratio_felx3029,Graph_from_h_ratio_fehx3029,Graph_from_h_ratio_fely3029,Graph_from_h_ratio_fehy3029);
   grae->SetName("Graph_from_h_ratio");
   grae->SetTitle("FcncDiscriminant");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(24);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_h_ratio3029 = new TH1F("Graph_Graph_from_h_ratio3029","FcncDiscriminant",100,0,1.09999);
   Graph_Graph_from_h_ratio3029->SetMinimum(0.7556389);
   Graph_Graph_from_h_ratio3029->SetMaximum(1.079625);
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
   0.04213729,
   0.04149242,
   0.04484234,
   0.04401389,
   0.04708589,
   0.05250864,
   0.05329427,
   0.05951191,
   0.07627117,
   0.1340034};
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
   0.04213729,
   0.04149242,
   0.04484234,
   0.04401389,
   0.04708589,
   0.05250864,
   0.05329427,
   0.05951191,
   0.07627117,
   0.1340034};
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
   Graph_g_ratio23030->SetMinimum(0.8391959);
   Graph_g_ratio23030->SetMaximum(1.160804);
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
   h_dummy2_copy__65->SetEntries(1164642);
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
   c_c1lep6jin3bex_postFit->cd();
  
// ------------>Primitives in pad: pad0
   TPad *pad0 = new TPad("pad0", "pad0",0,0.2,1,1);
   pad0->Draw();
   pad0->cd();
   pad0->Range(-0.1728395,-667.283,1.061728,6005.547);
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
   h_dummy__66->SetMaximum(5671.905);
   h_dummy__66->SetEntries(1164642);
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
   h_stack_stack_8->SetMinimum(-1.794094);
   h_stack_stack_8->SetMaximum(3308.29);
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
   c1lep6jin3bex_topEW__67->SetBinContent(1,408.6011);
   c1lep6jin3bex_topEW__67->SetBinContent(2,298.3938);
   c1lep6jin3bex_topEW__67->SetBinContent(3,228.0694);
   c1lep6jin3bex_topEW__67->SetBinContent(4,189.2361);
   c1lep6jin3bex_topEW__67->SetBinContent(5,175.8788);
   c1lep6jin3bex_topEW__67->SetBinContent(6,177.4708);
   c1lep6jin3bex_topEW__67->SetBinContent(7,155.5298);
   c1lep6jin3bex_topEW__67->SetBinContent(8,113.1072);
   c1lep6jin3bex_topEW__67->SetBinContent(9,68.19554);
   c1lep6jin3bex_topEW__67->SetBinContent(10,19.76287);
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
   c1lep6jin3bex_topEW__67->SetEntries(1125976);
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
   c1lep6jin3bex_ttbarbb__68->SetBinContent(1,1897.959);
   c1lep6jin3bex_ttbarbb__68->SetBinContent(2,1215.721);
   c1lep6jin3bex_ttbarbb__68->SetBinContent(3,853.693);
   c1lep6jin3bex_ttbarbb__68->SetBinContent(4,837.5997);
   c1lep6jin3bex_ttbarbb__68->SetBinContent(5,789.3275);
   c1lep6jin3bex_ttbarbb__68->SetBinContent(6,728.494);
   c1lep6jin3bex_ttbarbb__68->SetBinContent(7,576.3987);
   c1lep6jin3bex_ttbarbb__68->SetBinContent(8,379.2541);
   c1lep6jin3bex_ttbarbb__68->SetBinContent(9,190.7989);
   c1lep6jin3bex_ttbarbb__68->SetBinContent(10,40.62848);
   c1lep6jin3bex_ttbarbb__68->SetBinError(1,32.20245);
   c1lep6jin3bex_ttbarbb__68->SetBinError(2,26.12895);
   c1lep6jin3bex_ttbarbb__68->SetBinError(3,21.34711);
   c1lep6jin3bex_ttbarbb__68->SetBinError(4,21.67608);
   c1lep6jin3bex_ttbarbb__68->SetBinError(5,21.11712);
   c1lep6jin3bex_ttbarbb__68->SetBinError(6,19.61255);
   c1lep6jin3bex_ttbarbb__68->SetBinError(7,18.33851);
   c1lep6jin3bex_ttbarbb__68->SetBinError(8,14.32673);
   c1lep6jin3bex_ttbarbb__68->SetBinError(9,11.22595);
   c1lep6jin3bex_ttbarbb__68->SetBinError(10,5.188594);
   c1lep6jin3bex_ttbarbb__68->SetEntries(26052);
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
   c1lep6jin3bex_ttbarcc__69->SetBinContent(1,598.0009);
   c1lep6jin3bex_ttbarcc__69->SetBinContent(2,407.6297);
   c1lep6jin3bex_ttbarcc__69->SetBinContent(3,351.0526);
   c1lep6jin3bex_ttbarcc__69->SetBinContent(4,330.9696);
   c1lep6jin3bex_ttbarcc__69->SetBinContent(5,361.0124);
   c1lep6jin3bex_ttbarcc__69->SetBinContent(6,399.2345);
   c1lep6jin3bex_ttbarcc__69->SetBinContent(7,281.5119);
   c1lep6jin3bex_ttbarcc__69->SetBinContent(8,166.9646);
   c1lep6jin3bex_ttbarcc__69->SetBinContent(9,76.88559);
   c1lep6jin3bex_ttbarcc__69->SetBinContent(10,14.74035);
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
   c1lep6jin3bex_ttbarcc__69->SetEntries(5640);
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
   c1lep6jin3bex_ttbarlight__70->SetBinContent(1,246.4973);
   c1lep6jin3bex_ttbarlight__70->SetBinContent(2,273.6134);
   c1lep6jin3bex_ttbarlight__70->SetBinContent(3,305.1977);
   c1lep6jin3bex_ttbarlight__70->SetBinContent(4,339.1146);
   c1lep6jin3bex_ttbarlight__70->SetBinContent(5,389.4908);
   c1lep6jin3bex_ttbarlight__70->SetBinContent(6,415.0354);
   c1lep6jin3bex_ttbarlight__70->SetBinContent(7,312.831);
   c1lep6jin3bex_ttbarlight__70->SetBinContent(8,180.2933);
   c1lep6jin3bex_ttbarlight__70->SetBinContent(9,80.60443);
   c1lep6jin3bex_ttbarlight__70->SetBinContent(10,18.07186);
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
   c1lep6jin3bex_ttbarlight__70->SetEntries(6964);
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
   c1lep6jin3bex_uHcW__71->SetBinContent(1,-0.3060537);
   c1lep6jin3bex_uHcW__71->SetBinContent(2,-0.5784693);
   c1lep6jin3bex_uHcW__71->SetBinContent(3,-0.490475);
   c1lep6jin3bex_uHcW__71->SetBinContent(4,-0.6690784);
   c1lep6jin3bex_uHcW__71->SetBinContent(5,-1.200886);
   c1lep6jin3bex_uHcW__71->SetBinContent(6,-1.475288);
   c1lep6jin3bex_uHcW__71->SetBinContent(7,-1.495208);
   c1lep6jin3bex_uHcW__71->SetBinContent(8,-1.591901);
   c1lep6jin3bex_uHcW__71->SetBinContent(9,-1.033948);
   c1lep6jin3bex_uHcW__71->SetBinContent(10,-0.3592683);
   c1lep6jin3bex_uHcW__71->SetBinError(1,0.1029644);
   c1lep6jin3bex_uHcW__71->SetBinError(2,0.1174059);
   c1lep6jin3bex_uHcW__71->SetBinError(3,0.1405361);
   c1lep6jin3bex_uHcW__71->SetBinError(4,0.1473118);
   c1lep6jin3bex_uHcW__71->SetBinError(5,0.1793124);
   c1lep6jin3bex_uHcW__71->SetBinError(6,0.1820895);
   c1lep6jin3bex_uHcW__71->SetBinError(7,0.223266);
   c1lep6jin3bex_uHcW__71->SetBinError(8,0.2021932);
   c1lep6jin3bex_uHcW__71->SetBinError(9,0.1398648);
   c1lep6jin3bex_uHcW__71->SetBinError(10,0.08814861);
   c1lep6jin3bex_uHcW__71->SetEntries(5550);
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
   
   Double_t g_totErr_postFit_fx3031[10] = {
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
   Double_t g_totErr_postFit_fy3031[10] = {
   3151.059,
   2195.358,
   1738.013,
   1696.92,
   1715.709,
   1720.235,
   1326.271,
   839.6192,
   416.4844,
   93.20356};
   Double_t g_totErr_postFit_felx3031[10] = {
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
   Double_t g_totErr_postFit_fely3031[10] = {
   132.7771,
   91.09073,
   77.93656,
   74.68805,
   80.78571,
   90.32719,
   70.68266,
   49.96734,
   31.76575,
   12.4896};
   Double_t g_totErr_postFit_fehx3031[10] = {
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
   Double_t g_totErr_postFit_fehy3031[10] = {
   132.7771,
   91.09073,
   77.93656,
   74.68805,
   80.78571,
   90.32719,
   70.68266,
   49.96734,
   31.76575,
   12.4896};
   grae = new TGraphAsymmErrors(10,g_totErr_postFit_fx3031,g_totErr_postFit_fy3031,g_totErr_postFit_felx3031,g_totErr_postFit_fehx3031,g_totErr_postFit_fely3031,g_totErr_postFit_fehy3031);
   grae->SetName("g_totErr_postFit");
   grae->SetTitle("FcncDiscriminant");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(3354);
   grae->SetLineColor(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0);
   
   TH1F *Graph_g_totErr_postFit3031 = new TH1F("Graph_g_totErr_postFit3031","FcncDiscriminant",100,0,1.1);
   Graph_g_totErr_postFit3031->SetMinimum(0);
   Graph_g_totErr_postFit3031->SetMaximum(3604.148);
   Graph_g_totErr_postFit3031->SetDirectory(0);
   Graph_g_totErr_postFit3031->SetStats(0);
   Graph_g_totErr_postFit3031->SetLineWidth(2);
   Graph_g_totErr_postFit3031->SetMarkerStyle(20);
   Graph_g_totErr_postFit3031->SetMarkerSize(1.2);
   Graph_g_totErr_postFit3031->GetXaxis()->SetLabelFont(43);
   Graph_g_totErr_postFit3031->GetXaxis()->SetLabelSize(21);
   Graph_g_totErr_postFit3031->GetXaxis()->SetTitleSize(21);
   Graph_g_totErr_postFit3031->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_totErr_postFit3031->GetXaxis()->SetTitleFont(43);
   Graph_g_totErr_postFit3031->GetYaxis()->SetLabelFont(43);
   Graph_g_totErr_postFit3031->GetYaxis()->SetLabelSize(21);
   Graph_g_totErr_postFit3031->GetYaxis()->SetTitleSize(21);
   Graph_g_totErr_postFit3031->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_totErr_postFit3031->GetYaxis()->SetTitleFont(43);
   Graph_g_totErr_postFit3031->GetZaxis()->SetLabelFont(43);
   Graph_g_totErr_postFit3031->GetZaxis()->SetLabelSize(21);
   Graph_g_totErr_postFit3031->GetZaxis()->SetTitleSize(21);
   Graph_g_totErr_postFit3031->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_totErr_postFit3031);
   
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
   h_dummy_copy__72->SetEntries(1164642);
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
      tex = new TLatex(0.18,0.68,"Post-Fit");
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
   TLegendEntry *entry=leg->AddEntry("c1lep6jin3bex_Data","Data","lep");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep6jin3bex_uHcW","t#bar{t}#rightarrowWbHc","f");
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
   c_c1lep6jin3bex_postFit->cd();
   c_c1lep6jin3bex_postFit->Modified();
   c_c1lep6jin3bex_postFit->cd();
   c_c1lep6jin3bex_postFit->SetSelected(c_c1lep6jin3bex_postFit);
}
