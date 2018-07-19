void c1lep5jex3bex_postFit()
{
//=========Macro generated from canvas: c_c1lep5jex3bex_postFit/c_c1lep5jex3bex_postFit
//=========  (Thu Jul 19 23:32:24 2018) by ROOT version6.04/14
   TCanvas *c_c1lep5jex3bex_postFit = new TCanvas("c_c1lep5jex3bex_postFit", "c_c1lep5jex3bex_postFit",0,0,600,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c_c1lep5jex3bex_postFit->SetHighLightColor(2);
   c_c1lep5jex3bex_postFit->Range(0,0,1,1);
   c_c1lep5jex3bex_postFit->SetFillColor(0);
   c_c1lep5jex3bex_postFit->SetBorderMode(0);
   c_c1lep5jex3bex_postFit->SetBorderSize(2);
   c_c1lep5jex3bex_postFit->SetTickx(1);
   c_c1lep5jex3bex_postFit->SetTicky(1);
   c_c1lep5jex3bex_postFit->SetLeftMargin(0.16);
   c_c1lep5jex3bex_postFit->SetRightMargin(0.05);
   c_c1lep5jex3bex_postFit->SetTopMargin(0.05);
   c_c1lep5jex3bex_postFit->SetBottomMargin(0.16);
   c_c1lep5jex3bex_postFit->SetFrameBorderMode(0);
  
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
   Double_t xAxis41[11] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1D *h_dummy2__37 = new TH1D("h_dummy2__37","Data/MC",10, xAxis41);
   h_dummy2__37->SetMinimum(0.5);
   h_dummy2__37->SetMaximum(1.5);
   h_dummy2__37->SetEntries(1363640);
   h_dummy2__37->SetDirectory(0);
   h_dummy2__37->SetStats(0);
   h_dummy2__37->SetMarkerStyle(20);
   h_dummy2__37->SetMarkerSize(1.2);
   h_dummy2__37->GetXaxis()->SetTitle("LH discriminant");
   h_dummy2__37->GetXaxis()->SetRange(1,20);
   h_dummy2__37->GetXaxis()->SetLabelFont(43);
   h_dummy2__37->GetXaxis()->SetLabelOffset(0.025);
   h_dummy2__37->GetXaxis()->SetLabelSize(16.8);
   h_dummy2__37->GetXaxis()->SetTitleSize(21);
   h_dummy2__37->GetXaxis()->SetTitleOffset(5.05);
   h_dummy2__37->GetXaxis()->SetTitleFont(43);
   h_dummy2__37->GetYaxis()->SetTitle("Data / Pred");
   h_dummy2__37->GetYaxis()->SetNdivisions(-504);
   h_dummy2__37->GetYaxis()->SetLabelFont(43);
   h_dummy2__37->GetYaxis()->SetLabelOffset(0.02);
   h_dummy2__37->GetYaxis()->SetLabelSize(16.8);
   h_dummy2__37->GetYaxis()->SetTitleSize(21);
   h_dummy2__37->GetYaxis()->SetTitleOffset(2.4);
   h_dummy2__37->GetYaxis()->SetTitleFont(43);
   h_dummy2__37->GetZaxis()->SetLabelFont(43);
   h_dummy2__37->GetZaxis()->SetLabelSize(21);
   h_dummy2__37->GetZaxis()->SetTitleSize(21);
   h_dummy2__37->GetZaxis()->SetTitleFont(43);
   h_dummy2__37->Draw("HIST");
   
   Double_t Graph_from_h_ratio_fx3017[10] = {
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
   Double_t Graph_from_h_ratio_fy3017[10] = {
   0.9709886,
   1.016396,
   1.002298,
   1.015525,
   0.9693083,
   0.9824202,
   1.043774,
   0.978516,
   1.117722,
   0.9896531};
   Double_t Graph_from_h_ratio_felx3017[10] = {
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
   Double_t Graph_from_h_ratio_fely3017[10] = {
   0.02139863,
   0.02580815,
   0.02626735,
   0.02731723,
   0.02654892,
   0.02624691,
   0.03013115,
   0.0362165,
   0.05161161,
   0.08816531};
   Double_t Graph_from_h_ratio_fehx3017[10] = {
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
   Double_t Graph_from_h_ratio_fehy3017[10] = {
   0.02139863,
   0.02580815,
   0.02626735,
   0.02731723,
   0.02654892,
   0.02624691,
   0.03013115,
   0.0362165,
   0.05161161,
   0.08816531};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(10,Graph_from_h_ratio_fx3017,Graph_from_h_ratio_fy3017,Graph_from_h_ratio_felx3017,Graph_from_h_ratio_fehx3017,Graph_from_h_ratio_fely3017,Graph_from_h_ratio_fehy3017);
   grae->SetName("Graph_from_h_ratio");
   grae->SetTitle("FcncDiscriminant");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(24);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_h_ratio3017 = new TH1F("Graph_Graph_from_h_ratio3017","FcncDiscriminant",100,0,1.09999);
   Graph_Graph_from_h_ratio3017->SetMinimum(0.8747032);
   Graph_Graph_from_h_ratio3017->SetMaximum(1.196118);
   Graph_Graph_from_h_ratio3017->SetDirectory(0);
   Graph_Graph_from_h_ratio3017->SetStats(0);
   Graph_Graph_from_h_ratio3017->SetLineWidth(2);
   Graph_Graph_from_h_ratio3017->SetMarkerStyle(20);
   Graph_Graph_from_h_ratio3017->SetMarkerSize(1.2);
   Graph_Graph_from_h_ratio3017->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3017->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3017->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3017->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3017->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3017->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3017->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3017->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3017->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3017->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3017->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3017->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3017->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3017->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_h_ratio3017);
   
   grae->Draw("pe0");
   TLine *line = new TLine(0,1,1,1);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t g_ratio2_fx3018[10] = {
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
   Double_t g_ratio2_fy3018[10] = {
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
   Double_t g_ratio2_felx3018[10] = {
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
   Double_t g_ratio2_fely3018[10] = {
   0.04578227,
   0.0490772,
   0.04225464,
   0.04398199,
   0.04472884,
   0.05228315,
   0.05902074,
   0.06537037,
   0.07922252,
   0.133532};
   Double_t g_ratio2_fehx3018[10] = {
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
   Double_t g_ratio2_fehy3018[10] = {
   0.04578227,
   0.0490772,
   0.04225464,
   0.04398199,
   0.04472884,
   0.05228315,
   0.05902074,
   0.06537037,
   0.07922252,
   0.133532};
   grae = new TGraphAsymmErrors(10,g_ratio2_fx3018,g_ratio2_fy3018,g_ratio2_felx3018,g_ratio2_fehx3018,g_ratio2_fely3018,g_ratio2_fehy3018);
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
   
   TH1F *Graph_g_ratio23018 = new TH1F("Graph_g_ratio23018","FcncDiscriminant",100,0,1.1);
   Graph_g_ratio23018->SetMinimum(0.8397616);
   Graph_g_ratio23018->SetMaximum(1.160238);
   Graph_g_ratio23018->SetDirectory(0);
   Graph_g_ratio23018->SetStats(0);
   Graph_g_ratio23018->SetLineWidth(2);
   Graph_g_ratio23018->SetMarkerStyle(20);
   Graph_g_ratio23018->SetMarkerSize(1.2);
   Graph_g_ratio23018->GetXaxis()->SetLabelFont(43);
   Graph_g_ratio23018->GetXaxis()->SetLabelSize(21);
   Graph_g_ratio23018->GetXaxis()->SetTitleSize(21);
   Graph_g_ratio23018->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23018->GetXaxis()->SetTitleFont(43);
   Graph_g_ratio23018->GetYaxis()->SetLabelFont(43);
   Graph_g_ratio23018->GetYaxis()->SetLabelSize(21);
   Graph_g_ratio23018->GetYaxis()->SetTitleSize(21);
   Graph_g_ratio23018->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23018->GetYaxis()->SetTitleFont(43);
   Graph_g_ratio23018->GetZaxis()->SetLabelFont(43);
   Graph_g_ratio23018->GetZaxis()->SetLabelSize(21);
   Graph_g_ratio23018->GetZaxis()->SetTitleSize(21);
   Graph_g_ratio23018->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_ratio23018);
   
   grae->Draw("e2");
   Double_t xAxis42[11] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1D *h_dummy2_copy__38 = new TH1D("h_dummy2_copy__38","Data/MC",10, xAxis42);
   h_dummy2_copy__38->SetMinimum(0.5);
   h_dummy2_copy__38->SetMaximum(1.5);
   h_dummy2_copy__38->SetEntries(1363640);
   h_dummy2_copy__38->SetDirectory(0);
   h_dummy2_copy__38->SetStats(0);
   h_dummy2_copy__38->SetMarkerStyle(20);
   h_dummy2_copy__38->SetMarkerSize(1.2);
   h_dummy2_copy__38->GetXaxis()->SetTitle("LH discriminant");
   h_dummy2_copy__38->GetXaxis()->SetRange(1,20);
   h_dummy2_copy__38->GetXaxis()->SetLabelFont(43);
   h_dummy2_copy__38->GetXaxis()->SetLabelOffset(0.025);
   h_dummy2_copy__38->GetXaxis()->SetLabelSize(16.8);
   h_dummy2_copy__38->GetXaxis()->SetTitleSize(21);
   h_dummy2_copy__38->GetXaxis()->SetTitleOffset(5.05);
   h_dummy2_copy__38->GetXaxis()->SetTitleFont(43);
   h_dummy2_copy__38->GetYaxis()->SetTitle("Data / Pred");
   h_dummy2_copy__38->GetYaxis()->SetNdivisions(-504);
   h_dummy2_copy__38->GetYaxis()->SetLabelFont(43);
   h_dummy2_copy__38->GetYaxis()->SetLabelOffset(0.02);
   h_dummy2_copy__38->GetYaxis()->SetLabelSize(16.8);
   h_dummy2_copy__38->GetYaxis()->SetTitleSize(21);
   h_dummy2_copy__38->GetYaxis()->SetTitleOffset(2.4);
   h_dummy2_copy__38->GetYaxis()->SetTitleFont(43);
   h_dummy2_copy__38->GetZaxis()->SetLabelFont(43);
   h_dummy2_copy__38->GetZaxis()->SetLabelSize(21);
   h_dummy2_copy__38->GetZaxis()->SetTitleSize(21);
   h_dummy2_copy__38->GetZaxis()->SetTitleFont(43);
   h_dummy2_copy__38->Draw("sameaxis");
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
   c_c1lep5jex3bex_postFit->cd();
  
// ------------>Primitives in pad: pad0
   TPad *pad0 = new TPad("pad0", "pad0",0,0.2,1,1);
   pad0->Draw();
   pad0->cd();
   pad0->Range(-0.1728395,-449.0512,1.061728,4041.46);
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
   Double_t xAxis43[11] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1D *h_dummy__39 = new TH1D("h_dummy__39","FcncDiscriminant",10, xAxis43);
   h_dummy__39->SetMinimum(0);
   h_dummy__39->SetMaximum(3816.935);
   h_dummy__39->SetEntries(1363640);
   h_dummy__39->SetDirectory(0);
   h_dummy__39->SetStats(0);
   h_dummy__39->SetMarkerStyle(20);
   h_dummy__39->SetMarkerSize(1.2);
   h_dummy__39->GetXaxis()->SetRange(1,20);
   h_dummy__39->GetXaxis()->SetLabelFont(43);
   h_dummy__39->GetXaxis()->SetLabelSize(0);
   h_dummy__39->GetXaxis()->SetTitleSize(21);
   h_dummy__39->GetXaxis()->SetTitleOffset(1.4);
   h_dummy__39->GetXaxis()->SetTitleFont(43);
   h_dummy__39->GetYaxis()->SetTitle("Events / 0.1");
   h_dummy__39->GetYaxis()->SetLabelFont(43);
   h_dummy__39->GetYaxis()->SetLabelSize(16.8);
   h_dummy__39->GetYaxis()->SetTitleSize(21);
   h_dummy__39->GetYaxis()->SetTitleOffset(2.4);
   h_dummy__39->GetYaxis()->SetTitleFont(43);
   h_dummy__39->GetZaxis()->SetLabelFont(43);
   h_dummy__39->GetZaxis()->SetLabelSize(21);
   h_dummy__39->GetZaxis()->SetTitleSize(21);
   h_dummy__39->GetZaxis()->SetTitleFont(43);
   h_dummy__39->Draw("HIST");
   
   THStack *h_stack = new THStack();
   h_stack->SetName("h_stack");
   h_stack->SetTitle("h_stack");
   Double_t xAxis44[11] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1F *h_stack_stack_5 = new TH1F("h_stack_stack_5","h_stack",10, xAxis44);
   h_stack_stack_5->SetMinimum(-2.883193);
   h_stack_stack_5->SetMaximum(2226.022);
   h_stack_stack_5->SetDirectory(0);
   h_stack_stack_5->SetStats(0);
   h_stack_stack_5->SetLineWidth(2);
   h_stack_stack_5->SetMarkerStyle(20);
   h_stack_stack_5->SetMarkerSize(1.2);
   h_stack_stack_5->GetXaxis()->SetLabelFont(43);
   h_stack_stack_5->GetXaxis()->SetLabelSize(21);
   h_stack_stack_5->GetXaxis()->SetTitleSize(21);
   h_stack_stack_5->GetXaxis()->SetTitleOffset(1.4);
   h_stack_stack_5->GetXaxis()->SetTitleFont(43);
   h_stack_stack_5->GetYaxis()->SetLabelFont(43);
   h_stack_stack_5->GetYaxis()->SetLabelSize(21);
   h_stack_stack_5->GetYaxis()->SetTitleSize(21);
   h_stack_stack_5->GetYaxis()->SetTitleOffset(1.4);
   h_stack_stack_5->GetYaxis()->SetTitleFont(43);
   h_stack_stack_5->GetZaxis()->SetLabelFont(43);
   h_stack_stack_5->GetZaxis()->SetLabelSize(21);
   h_stack_stack_5->GetZaxis()->SetTitleSize(21);
   h_stack_stack_5->GetZaxis()->SetTitleFont(43);
   h_stack->SetHistogram(h_stack_stack_5);
   
   Double_t xAxis45[11] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1D *c1lep5jex3bex_topEW__40 = new TH1D("c1lep5jex3bex_topEW__40","FcncDiscriminant",10, xAxis45);
   c1lep5jex3bex_topEW__40->SetBinContent(1,260.929);
   c1lep5jex3bex_topEW__40->SetBinContent(2,187.1766);
   c1lep5jex3bex_topEW__40->SetBinContent(3,166.0462);
   c1lep5jex3bex_topEW__40->SetBinContent(4,144.489);
   c1lep5jex3bex_topEW__40->SetBinContent(5,134.5549);
   c1lep5jex3bex_topEW__40->SetBinContent(6,134.338);
   c1lep5jex3bex_topEW__40->SetBinContent(7,108.5464);
   c1lep5jex3bex_topEW__40->SetBinContent(8,83.35858);
   c1lep5jex3bex_topEW__40->SetBinContent(9,57.6561);
   c1lep5jex3bex_topEW__40->SetBinContent(10,25.04738);
   c1lep5jex3bex_topEW__40->SetBinError(1,32.11408);
   c1lep5jex3bex_topEW__40->SetBinError(2,28.94531);
   c1lep5jex3bex_topEW__40->SetBinError(3,27.22149);
   c1lep5jex3bex_topEW__40->SetBinError(4,25.71711);
   c1lep5jex3bex_topEW__40->SetBinError(5,24.3179);
   c1lep5jex3bex_topEW__40->SetBinError(6,22.80901);
   c1lep5jex3bex_topEW__40->SetBinError(7,20.23754);
   c1lep5jex3bex_topEW__40->SetBinError(8,17.82531);
   c1lep5jex3bex_topEW__40->SetBinError(9,15.15019);
   c1lep5jex3bex_topEW__40->SetBinError(10,11.79198);
   c1lep5jex3bex_topEW__40->SetEntries(1334994);
   c1lep5jex3bex_topEW__40->SetDirectory(0);
   c1lep5jex3bex_topEW__40->SetStats(0);

   ci = TColor::GetColor("#66cc66");
   c1lep5jex3bex_topEW__40->SetFillColor(ci);
   c1lep5jex3bex_topEW__40->SetMarkerStyle(20);
   c1lep5jex3bex_topEW__40->SetMarkerSize(1.2);
   c1lep5jex3bex_topEW__40->GetXaxis()->SetRange(1,20);
   c1lep5jex3bex_topEW__40->GetXaxis()->SetLabelFont(43);
   c1lep5jex3bex_topEW__40->GetXaxis()->SetLabelSize(21);
   c1lep5jex3bex_topEW__40->GetXaxis()->SetTitleSize(21);
   c1lep5jex3bex_topEW__40->GetXaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_topEW__40->GetXaxis()->SetTitleFont(43);
   c1lep5jex3bex_topEW__40->GetYaxis()->SetLabelFont(43);
   c1lep5jex3bex_topEW__40->GetYaxis()->SetLabelSize(21);
   c1lep5jex3bex_topEW__40->GetYaxis()->SetTitleSize(21);
   c1lep5jex3bex_topEW__40->GetYaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_topEW__40->GetYaxis()->SetTitleFont(43);
   c1lep5jex3bex_topEW__40->GetZaxis()->SetLabelFont(43);
   c1lep5jex3bex_topEW__40->GetZaxis()->SetLabelSize(21);
   c1lep5jex3bex_topEW__40->GetZaxis()->SetTitleSize(21);
   c1lep5jex3bex_topEW__40->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep5jex3bex_topEW,"");
   Double_t xAxis46[11] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1D *c1lep5jex3bex_ttbarbb__41 = new TH1D("c1lep5jex3bex_ttbarbb__41","FcncDiscriminant",10, xAxis46);
   c1lep5jex3bex_ttbarbb__41->SetBinContent(1,1136.579);
   c1lep5jex3bex_ttbarbb__41->SetBinContent(2,730.5017);
   c1lep5jex3bex_ttbarbb__41->SetBinContent(3,626.4859);
   c1lep5jex3bex_ttbarbb__41->SetBinContent(4,538.0851);
   c1lep5jex3bex_ttbarbb__41->SetBinContent(5,514.4441);
   c1lep5jex3bex_ttbarbb__41->SetBinContent(6,483.9533);
   c1lep5jex3bex_ttbarbb__41->SetBinContent(7,409.0036);
   c1lep5jex3bex_ttbarbb__41->SetBinContent(8,283.2948);
   c1lep5jex3bex_ttbarbb__41->SetBinContent(9,145.4186);
   c1lep5jex3bex_ttbarbb__41->SetBinContent(10,46.19834);
   c1lep5jex3bex_ttbarbb__41->SetBinError(1,22.07773);
   c1lep5jex3bex_ttbarbb__41->SetBinError(2,18.38002);
   c1lep5jex3bex_ttbarbb__41->SetBinError(3,17.96599);
   c1lep5jex3bex_ttbarbb__41->SetBinError(4,16.63739);
   c1lep5jex3bex_ttbarbb__41->SetBinError(5,15.83266);
   c1lep5jex3bex_ttbarbb__41->SetBinError(6,15.0384);
   c1lep5jex3bex_ttbarbb__41->SetBinError(7,15.67661);
   c1lep5jex3bex_ttbarbb__41->SetBinError(8,12.78752);
   c1lep5jex3bex_ttbarbb__41->SetBinError(9,7.622787);
   c1lep5jex3bex_ttbarbb__41->SetBinError(10,4.182564);
   c1lep5jex3bex_ttbarbb__41->SetEntries(15478);
   c1lep5jex3bex_ttbarbb__41->SetDirectory(0);
   c1lep5jex3bex_ttbarbb__41->SetStats(0);

   ci = TColor::GetColor("#6666cc");
   c1lep5jex3bex_ttbarbb__41->SetFillColor(ci);
   c1lep5jex3bex_ttbarbb__41->SetMarkerStyle(20);
   c1lep5jex3bex_ttbarbb__41->SetMarkerSize(1.2);
   c1lep5jex3bex_ttbarbb__41->GetXaxis()->SetRange(1,20);
   c1lep5jex3bex_ttbarbb__41->GetXaxis()->SetLabelFont(43);
   c1lep5jex3bex_ttbarbb__41->GetXaxis()->SetLabelSize(21);
   c1lep5jex3bex_ttbarbb__41->GetXaxis()->SetTitleSize(21);
   c1lep5jex3bex_ttbarbb__41->GetXaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_ttbarbb__41->GetXaxis()->SetTitleFont(43);
   c1lep5jex3bex_ttbarbb__41->GetYaxis()->SetLabelFont(43);
   c1lep5jex3bex_ttbarbb__41->GetYaxis()->SetLabelSize(21);
   c1lep5jex3bex_ttbarbb__41->GetYaxis()->SetTitleSize(21);
   c1lep5jex3bex_ttbarbb__41->GetYaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_ttbarbb__41->GetYaxis()->SetTitleFont(43);
   c1lep5jex3bex_ttbarbb__41->GetZaxis()->SetLabelFont(43);
   c1lep5jex3bex_ttbarbb__41->GetZaxis()->SetLabelSize(21);
   c1lep5jex3bex_ttbarbb__41->GetZaxis()->SetTitleSize(21);
   c1lep5jex3bex_ttbarbb__41->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep5jex3bex_ttbarbb,"");
   Double_t xAxis47[11] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1D *c1lep5jex3bex_ttbarcc__42 = new TH1D("c1lep5jex3bex_ttbarcc__42","FcncDiscriminant",10, xAxis47);
   c1lep5jex3bex_ttbarcc__42->SetBinContent(1,401.1389);
   c1lep5jex3bex_ttbarcc__42->SetBinContent(2,263.8015);
   c1lep5jex3bex_ttbarcc__42->SetBinContent(3,239.8997);
   c1lep5jex3bex_ttbarcc__42->SetBinContent(4,221.0643);
   c1lep5jex3bex_ttbarcc__42->SetBinContent(5,210.4274);
   c1lep5jex3bex_ttbarcc__42->SetBinContent(6,245.0662);
   c1lep5jex3bex_ttbarcc__42->SetBinContent(7,196.3397);
   c1lep5jex3bex_ttbarcc__42->SetBinContent(8,128.8817);
   c1lep5jex3bex_ttbarcc__42->SetBinContent(9,78.04535);
   c1lep5jex3bex_ttbarcc__42->SetBinContent(10,21.07574);
   c1lep5jex3bex_ttbarcc__42->SetBinError(1,12.26435);
   c1lep5jex3bex_ttbarcc__42->SetBinError(2,8.374582);
   c1lep5jex3bex_ttbarcc__42->SetBinError(3,8.43894);
   c1lep5jex3bex_ttbarcc__42->SetBinError(4,8.183682);
   c1lep5jex3bex_ttbarcc__42->SetBinError(5,8.057841);
   c1lep5jex3bex_ttbarcc__42->SetBinError(6,8.906187);
   c1lep5jex3bex_ttbarcc__42->SetBinError(7,8.45452);
   c1lep5jex3bex_ttbarcc__42->SetBinError(8,6.884403);
   c1lep5jex3bex_ttbarcc__42->SetBinError(9,5.401685);
   c1lep5jex3bex_ttbarcc__42->SetBinError(10,2.304915);
   c1lep5jex3bex_ttbarcc__42->SetEntries(4016);
   c1lep5jex3bex_ttbarcc__42->SetDirectory(0);
   c1lep5jex3bex_ttbarcc__42->SetStats(0);

   ci = TColor::GetColor("#ccccff");
   c1lep5jex3bex_ttbarcc__42->SetFillColor(ci);
   c1lep5jex3bex_ttbarcc__42->SetMarkerStyle(20);
   c1lep5jex3bex_ttbarcc__42->SetMarkerSize(1.2);
   c1lep5jex3bex_ttbarcc__42->GetXaxis()->SetRange(1,20);
   c1lep5jex3bex_ttbarcc__42->GetXaxis()->SetLabelFont(43);
   c1lep5jex3bex_ttbarcc__42->GetXaxis()->SetLabelSize(21);
   c1lep5jex3bex_ttbarcc__42->GetXaxis()->SetTitleSize(21);
   c1lep5jex3bex_ttbarcc__42->GetXaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_ttbarcc__42->GetXaxis()->SetTitleFont(43);
   c1lep5jex3bex_ttbarcc__42->GetYaxis()->SetLabelFont(43);
   c1lep5jex3bex_ttbarcc__42->GetYaxis()->SetLabelSize(21);
   c1lep5jex3bex_ttbarcc__42->GetYaxis()->SetTitleSize(21);
   c1lep5jex3bex_ttbarcc__42->GetYaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_ttbarcc__42->GetYaxis()->SetTitleFont(43);
   c1lep5jex3bex_ttbarcc__42->GetZaxis()->SetLabelFont(43);
   c1lep5jex3bex_ttbarcc__42->GetZaxis()->SetLabelSize(21);
   c1lep5jex3bex_ttbarcc__42->GetZaxis()->SetTitleSize(21);
   c1lep5jex3bex_ttbarcc__42->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep5jex3bex_ttbarcc,"");
   Double_t xAxis48[11] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1D *c1lep5jex3bex_ttbarlight__43 = new TH1D("c1lep5jex3bex_ttbarlight__43","FcncDiscriminant",10, xAxis48);
   c1lep5jex3bex_ttbarlight__43->SetBinContent(1,321.8726);
   c1lep5jex3bex_ttbarlight__43->SetBinContent(2,344.501);
   c1lep5jex3bex_ttbarlight__43->SetBinContent(3,420.2294);
   c1lep5jex3bex_ttbarlight__43->SetBinContent(4,457.2341);
   c1lep5jex3bex_ttbarlight__43->SetBinContent(5,515.7811);
   c1lep5jex3bex_ttbarlight__43->SetBinContent(6,562.7126);
   c1lep5jex3bex_ttbarlight__43->SetBinContent(7,435.7849);
   c1lep5jex3bex_ttbarlight__43->SetBinContent(8,250.4926);
   c1lep5jex3bex_ttbarlight__43->SetBinContent(9,138.4833);
   c1lep5jex3bex_ttbarlight__43->SetBinContent(10,34.99587);
   c1lep5jex3bex_ttbarlight__43->SetBinError(1,16.84751);
   c1lep5jex3bex_ttbarlight__43->SetBinError(2,12.47106);
   c1lep5jex3bex_ttbarlight__43->SetBinError(3,13.84295);
   c1lep5jex3bex_ttbarlight__43->SetBinError(4,14.36694);
   c1lep5jex3bex_ttbarlight__43->SetBinError(5,15.47214);
   c1lep5jex3bex_ttbarlight__43->SetBinError(6,16.78383);
   c1lep5jex3bex_ttbarlight__43->SetBinError(7,14.50188);
   c1lep5jex3bex_ttbarlight__43->SetBinError(8,10.64775);
   c1lep5jex3bex_ttbarlight__43->SetBinError(9,8.471361);
   c1lep5jex3bex_ttbarlight__43->SetBinError(10,3.735671);
   c1lep5jex3bex_ttbarlight__43->SetEntries(9142);
   c1lep5jex3bex_ttbarlight__43->SetDirectory(0);
   c1lep5jex3bex_ttbarlight__43->SetStats(0);
   c1lep5jex3bex_ttbarlight__43->SetMarkerStyle(20);
   c1lep5jex3bex_ttbarlight__43->SetMarkerSize(1.2);
   c1lep5jex3bex_ttbarlight__43->GetXaxis()->SetRange(1,20);
   c1lep5jex3bex_ttbarlight__43->GetXaxis()->SetLabelFont(43);
   c1lep5jex3bex_ttbarlight__43->GetXaxis()->SetLabelSize(21);
   c1lep5jex3bex_ttbarlight__43->GetXaxis()->SetTitleSize(21);
   c1lep5jex3bex_ttbarlight__43->GetXaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_ttbarlight__43->GetXaxis()->SetTitleFont(43);
   c1lep5jex3bex_ttbarlight__43->GetYaxis()->SetLabelFont(43);
   c1lep5jex3bex_ttbarlight__43->GetYaxis()->SetLabelSize(21);
   c1lep5jex3bex_ttbarlight__43->GetYaxis()->SetTitleSize(21);
   c1lep5jex3bex_ttbarlight__43->GetYaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_ttbarlight__43->GetYaxis()->SetTitleFont(43);
   c1lep5jex3bex_ttbarlight__43->GetZaxis()->SetLabelFont(43);
   c1lep5jex3bex_ttbarlight__43->GetZaxis()->SetLabelSize(21);
   c1lep5jex3bex_ttbarlight__43->GetZaxis()->SetTitleSize(21);
   c1lep5jex3bex_ttbarlight__43->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep5jex3bex_ttbarlight,"");
   Double_t xAxis49[11] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1D *c1lep5jex3bex_uHcW__44 = new TH1D("c1lep5jex3bex_uHcW__44","FcncDiscriminant",10, xAxis49);
   c1lep5jex3bex_uHcW__44->SetBinContent(1,-0.4986032);
   c1lep5jex3bex_uHcW__44->SetBinContent(2,-0.6612728);
   c1lep5jex3bex_uHcW__44->SetBinContent(3,-0.8409875);
   c1lep5jex3bex_uHcW__44->SetBinContent(4,-0.8808062);
   c1lep5jex3bex_uHcW__44->SetBinContent(5,-1.598909);
   c1lep5jex3bex_uHcW__44->SetBinContent(6,-2.180307);
   c1lep5jex3bex_uHcW__44->SetBinContent(7,-2.676005);
   c1lep5jex3bex_uHcW__44->SetBinContent(8,-1.986334);
   c1lep5jex3bex_uHcW__44->SetBinContent(9,-1.860874);
   c1lep5jex3bex_uHcW__44->SetBinContent(10,-0.8310436);
   c1lep5jex3bex_uHcW__44->SetBinError(1,0.08960311);
   c1lep5jex3bex_uHcW__44->SetBinError(2,0.1029985);
   c1lep5jex3bex_uHcW__44->SetBinError(3,0.1264541);
   c1lep5jex3bex_uHcW__44->SetBinError(4,0.1353217);
   c1lep5jex3bex_uHcW__44->SetBinError(5,0.1784229);
   c1lep5jex3bex_uHcW__44->SetBinError(6,0.1992856);
   c1lep5jex3bex_uHcW__44->SetBinError(7,0.2071878);
   c1lep5jex3bex_uHcW__44->SetBinError(8,0.1840125);
   c1lep5jex3bex_uHcW__44->SetBinError(9,0.1756085);
   c1lep5jex3bex_uHcW__44->SetBinError(10,0.1048039);
   c1lep5jex3bex_uHcW__44->SetEntries(5367);
   c1lep5jex3bex_uHcW__44->SetDirectory(0);
   c1lep5jex3bex_uHcW__44->SetStats(0);
   c1lep5jex3bex_uHcW__44->SetFillColor(2);
   c1lep5jex3bex_uHcW__44->SetLineColor(2);
   c1lep5jex3bex_uHcW__44->SetMarkerStyle(20);
   c1lep5jex3bex_uHcW__44->SetMarkerSize(1.2);
   c1lep5jex3bex_uHcW__44->GetXaxis()->SetRange(1,20);
   c1lep5jex3bex_uHcW__44->GetXaxis()->SetLabelFont(43);
   c1lep5jex3bex_uHcW__44->GetXaxis()->SetLabelSize(21);
   c1lep5jex3bex_uHcW__44->GetXaxis()->SetTitleSize(21);
   c1lep5jex3bex_uHcW__44->GetXaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_uHcW__44->GetXaxis()->SetTitleFont(43);
   c1lep5jex3bex_uHcW__44->GetYaxis()->SetLabelFont(43);
   c1lep5jex3bex_uHcW__44->GetYaxis()->SetLabelSize(21);
   c1lep5jex3bex_uHcW__44->GetYaxis()->SetTitleSize(21);
   c1lep5jex3bex_uHcW__44->GetYaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_uHcW__44->GetYaxis()->SetTitleFont(43);
   c1lep5jex3bex_uHcW__44->GetZaxis()->SetLabelFont(43);
   c1lep5jex3bex_uHcW__44->GetZaxis()->SetLabelSize(21);
   c1lep5jex3bex_uHcW__44->GetZaxis()->SetTitleSize(21);
   c1lep5jex3bex_uHcW__44->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep5jex3bex_uHcW,"");
   h_stack->Draw("hist same");
   
   Double_t g_totErr_postFit_fx3019[10] = {
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
   Double_t g_totErr_postFit_fy3019[10] = {
   2120.519,
   1525.981,
   1452.661,
   1360.872,
   1375.207,
   1426.07,
   1149.675,
   746.0277,
   419.6034,
   127.3173};
   Double_t g_totErr_postFit_felx3019[10] = {
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
   Double_t g_totErr_postFit_fely3019[10] = {
   97.08218,
   74.89087,
   61.38168,
   59.85389,
   61.51143,
   74.55943,
   67.85464,
   48.7681,
   33.24204,
   17.00093};
   Double_t g_totErr_postFit_fehx3019[10] = {
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
   Double_t g_totErr_postFit_fehy3019[10] = {
   97.08218,
   74.89087,
   61.38168,
   59.85389,
   61.51143,
   74.55943,
   67.85464,
   48.7681,
   33.24204,
   17.00093};
   grae = new TGraphAsymmErrors(10,g_totErr_postFit_fx3019,g_totErr_postFit_fy3019,g_totErr_postFit_felx3019,g_totErr_postFit_fehx3019,g_totErr_postFit_fely3019,g_totErr_postFit_fehy3019);
   grae->SetName("g_totErr_postFit");
   grae->SetTitle("FcncDiscriminant");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(3354);
   grae->SetLineColor(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0);
   
   TH1F *Graph_g_totErr_postFit3019 = new TH1F("Graph_g_totErr_postFit3019","FcncDiscriminant",100,0,1.1);
   Graph_g_totErr_postFit3019->SetMinimum(0);
   Graph_g_totErr_postFit3019->SetMaximum(2428.33);
   Graph_g_totErr_postFit3019->SetDirectory(0);
   Graph_g_totErr_postFit3019->SetStats(0);
   Graph_g_totErr_postFit3019->SetLineWidth(2);
   Graph_g_totErr_postFit3019->SetMarkerStyle(20);
   Graph_g_totErr_postFit3019->SetMarkerSize(1.2);
   Graph_g_totErr_postFit3019->GetXaxis()->SetLabelFont(43);
   Graph_g_totErr_postFit3019->GetXaxis()->SetLabelSize(21);
   Graph_g_totErr_postFit3019->GetXaxis()->SetTitleSize(21);
   Graph_g_totErr_postFit3019->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_totErr_postFit3019->GetXaxis()->SetTitleFont(43);
   Graph_g_totErr_postFit3019->GetYaxis()->SetLabelFont(43);
   Graph_g_totErr_postFit3019->GetYaxis()->SetLabelSize(21);
   Graph_g_totErr_postFit3019->GetYaxis()->SetTitleSize(21);
   Graph_g_totErr_postFit3019->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_totErr_postFit3019->GetYaxis()->SetTitleFont(43);
   Graph_g_totErr_postFit3019->GetZaxis()->SetLabelFont(43);
   Graph_g_totErr_postFit3019->GetZaxis()->SetLabelSize(21);
   Graph_g_totErr_postFit3019->GetZaxis()->SetTitleSize(21);
   Graph_g_totErr_postFit3019->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_totErr_postFit3019);
   
   grae->Draw("e2");
   
   Double_t Graph_from_c1lep5jex3bex_Data_fx3020[10] = {
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
   Double_t Graph_from_c1lep5jex3bex_Data_fy3020[10] = {
   2059,
   1551,
   1456,
   1382,
   1333,
   1401,
   1200,
   730,
   469,
   126};
   Double_t Graph_from_c1lep5jex3bex_Data_felx3020[10] = {
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
   Double_t Graph_from_c1lep5jex3bex_Data_fely3020[10] = {
   45.37621,
   39.38274,
   38.15757,
   37.17526,
   36.51027,
   37.42993,
   34.64102,
   27.01851,
   21.65641,
   11.22497};
   Double_t Graph_from_c1lep5jex3bex_Data_fehx3020[10] = {
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
   Double_t Graph_from_c1lep5jex3bex_Data_fehy3020[10] = {
   45.37621,
   39.38274,
   38.15757,
   37.17526,
   36.51027,
   37.42993,
   34.64102,
   27.01851,
   21.65641,
   11.22497};
   grae = new TGraphAsymmErrors(10,Graph_from_c1lep5jex3bex_Data_fx3020,Graph_from_c1lep5jex3bex_Data_fy3020,Graph_from_c1lep5jex3bex_Data_felx3020,Graph_from_c1lep5jex3bex_Data_fehx3020,Graph_from_c1lep5jex3bex_Data_fely3020,Graph_from_c1lep5jex3bex_Data_fehy3020);
   grae->SetName("Graph_from_c1lep5jex3bex_Data");
   grae->SetTitle("FcncDiscriminant");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_c1lep5jex3bex_Data3020 = new TH1F("Graph_Graph_from_c1lep5jex3bex_Data3020","FcncDiscriminant",100,0,1.09999);
   Graph_Graph_from_c1lep5jex3bex_Data3020->SetMinimum(0);
   Graph_Graph_from_c1lep5jex3bex_Data3020->SetMaximum(2303.336);
   Graph_Graph_from_c1lep5jex3bex_Data3020->SetDirectory(0);
   Graph_Graph_from_c1lep5jex3bex_Data3020->SetStats(0);
   Graph_Graph_from_c1lep5jex3bex_Data3020->SetLineWidth(2);
   Graph_Graph_from_c1lep5jex3bex_Data3020->SetMarkerStyle(20);
   Graph_Graph_from_c1lep5jex3bex_Data3020->SetMarkerSize(1.2);
   Graph_Graph_from_c1lep5jex3bex_Data3020->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep5jex3bex_Data3020->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep5jex3bex_Data3020->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep5jex3bex_Data3020->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep5jex3bex_Data3020->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep5jex3bex_Data3020->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep5jex3bex_Data3020->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep5jex3bex_Data3020->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep5jex3bex_Data3020->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep5jex3bex_Data3020->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep5jex3bex_Data3020->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep5jex3bex_Data3020->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep5jex3bex_Data3020->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep5jex3bex_Data3020->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_c1lep5jex3bex_Data3020);
   
   grae->Draw("ep1 ");
   Double_t xAxis50[11] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1D *h_dummy_copy__45 = new TH1D("h_dummy_copy__45","FcncDiscriminant",10, xAxis50);
   h_dummy_copy__45->SetEntries(1363640);
   h_dummy_copy__45->SetDirectory(0);
   h_dummy_copy__45->SetStats(0);
   h_dummy_copy__45->SetMarkerStyle(20);
   h_dummy_copy__45->SetMarkerSize(1.2);
   h_dummy_copy__45->GetXaxis()->SetTitle("LH discriminant");
   h_dummy_copy__45->GetXaxis()->SetRange(1,20);
   h_dummy_copy__45->GetXaxis()->SetLabelFont(43);
   h_dummy_copy__45->GetXaxis()->SetLabelSize(21);
   h_dummy_copy__45->GetXaxis()->SetTitleSize(21);
   h_dummy_copy__45->GetXaxis()->SetTitleOffset(1.4);
   h_dummy_copy__45->GetXaxis()->SetTitleFont(43);
   h_dummy_copy__45->GetYaxis()->SetTitle("Events / 0.1");
   h_dummy_copy__45->GetYaxis()->SetLabelFont(43);
   h_dummy_copy__45->GetYaxis()->SetLabelSize(16.8);
   h_dummy_copy__45->GetYaxis()->SetTitleSize(21);
   h_dummy_copy__45->GetYaxis()->SetTitleOffset(2.4);
   h_dummy_copy__45->GetYaxis()->SetTitleFont(43);
   h_dummy_copy__45->GetZaxis()->SetLabelFont(43);
   h_dummy_copy__45->GetZaxis()->SetLabelSize(21);
   h_dummy_copy__45->GetZaxis()->SetTitleSize(21);
   h_dummy_copy__45->GetZaxis()->SetTitleFont(43);
   h_dummy_copy__45->Draw("sameaxis");
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
      tex = new TLatex(0.18,0.73,"5j, 3b");
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
   TLegendEntry *entry=leg->AddEntry("c1lep5jex3bex_Data","Data","lep");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep5jex3bex_uHcW","t#bar{t}#rightarrowWbHc","f");
   entry->SetFillColor(2);
   entry->SetFillStyle(1001);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep5jex3bex_ttbarlight","t#bar{t}+light-jets","f");
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep5jex3bex_ttbarcc","t#bar{t}+#geq1c","f");

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
   entry=leg->AddEntry("c1lep5jex3bex_ttbarbb","t#bar{t}+#geq1b","f");

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
   entry=leg->AddEntry("c1lep5jex3bex_topEW","Non-t#bar{t}","f");

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
   c_c1lep5jex3bex_postFit->cd();
   c_c1lep5jex3bex_postFit->Modified();
   c_c1lep5jex3bex_postFit->cd();
   c_c1lep5jex3bex_postFit->SetSelected(c_c1lep5jex3bex_postFit);
}
