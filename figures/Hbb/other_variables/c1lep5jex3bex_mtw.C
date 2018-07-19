void c1lep5jex3bex_mtw()
{
//=========Macro generated from canvas: c_c1lep5jex3bex_mtw/c_c1lep5jex3bex_mtw
//=========  (Thu Jul 19 17:38:05 2018) by ROOT version6.04/14
   TCanvas *c_c1lep5jex3bex_mtw = new TCanvas("c_c1lep5jex3bex_mtw", "c_c1lep5jex3bex_mtw",0,0,600,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c_c1lep5jex3bex_mtw->SetHighLightColor(2);
   c_c1lep5jex3bex_mtw->Range(0,0,1,1);
   c_c1lep5jex3bex_mtw->SetFillColor(0);
   c_c1lep5jex3bex_mtw->SetBorderMode(0);
   c_c1lep5jex3bex_mtw->SetBorderSize(2);
   c_c1lep5jex3bex_mtw->SetTickx(1);
   c_c1lep5jex3bex_mtw->SetTicky(1);
   c_c1lep5jex3bex_mtw->SetLeftMargin(0.16);
   c_c1lep5jex3bex_mtw->SetRightMargin(0.05);
   c_c1lep5jex3bex_mtw->SetTopMargin(0.05);
   c_c1lep5jex3bex_mtw->SetBottomMargin(0.16);
   c_c1lep5jex3bex_mtw->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0,1,0.28);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-34.5679,-0.0873016,212.3457,1.5);
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
   Double_t xAxis231[5] = {0, 50, 100, 150, 200}; 
   
   TH1D *h_dummy2__208 = new TH1D("h_dummy2__208","Data/MC",4, xAxis231);
   h_dummy2__208->SetMinimum(0.5);
   h_dummy2__208->SetMaximum(1.5);
   h_dummy2__208->SetEntries(1363513);
   h_dummy2__208->SetDirectory(0);
   h_dummy2__208->SetStats(0);
   h_dummy2__208->SetMarkerStyle(20);
   h_dummy2__208->SetMarkerSize(1.2);
   h_dummy2__208->GetXaxis()->SetTitle("m_{T}^{W} [GeV]");
   h_dummy2__208->GetXaxis()->SetRange(1,25);
   h_dummy2__208->GetXaxis()->SetLabelFont(43);
   h_dummy2__208->GetXaxis()->SetLabelOffset(0.025);
   h_dummy2__208->GetXaxis()->SetLabelSize(16.8);
   h_dummy2__208->GetXaxis()->SetTitleSize(21);
   h_dummy2__208->GetXaxis()->SetTitleOffset(5.05);
   h_dummy2__208->GetXaxis()->SetTitleFont(43);
   h_dummy2__208->GetYaxis()->SetTitle("Data / Bkg");
   h_dummy2__208->GetYaxis()->SetNdivisions(-504);
   h_dummy2__208->GetYaxis()->SetLabelFont(43);
   h_dummy2__208->GetYaxis()->SetLabelOffset(0.02);
   h_dummy2__208->GetYaxis()->SetLabelSize(16.8);
   h_dummy2__208->GetYaxis()->SetTitleSize(21);
   h_dummy2__208->GetYaxis()->SetTitleOffset(2.4);
   h_dummy2__208->GetYaxis()->SetTitleFont(43);
   h_dummy2__208->GetZaxis()->SetLabelFont(43);
   h_dummy2__208->GetZaxis()->SetLabelSize(21);
   h_dummy2__208->GetZaxis()->SetTitleSize(21);
   h_dummy2__208->GetZaxis()->SetTitleFont(43);
   h_dummy2__208->Draw("HIST");
   
   Double_t Graph_from_h_ratio_fx3093[4] = {
   25,
   75,
   125,
   175};
   Double_t Graph_from_h_ratio_fy3093[4] = {
   1.104273,
   1.167484,
   1.156538,
   1.268346};
   Double_t Graph_from_h_ratio_felx3093[4] = {
   24.95,
   24.95,
   24.95,
   24.95};
   Double_t Graph_from_h_ratio_fely3093[4] = {
   0.02064513,
   0.01343,
   0.03948354,
   0.07927164};
   Double_t Graph_from_h_ratio_fehx3093[4] = {
   25,
   25,
   25,
   25};
   Double_t Graph_from_h_ratio_fehy3093[4] = {
   0.02064513,
   0.01343,
   0.03948354,
   0.07927164};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(4,Graph_from_h_ratio_fx3093,Graph_from_h_ratio_fy3093,Graph_from_h_ratio_felx3093,Graph_from_h_ratio_fehx3093,Graph_from_h_ratio_fely3093,Graph_from_h_ratio_fehy3093);
   grae->SetName("Graph_from_h_ratio");
   grae->SetTitle("");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(24);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_h_ratio3093 = new TH1F("Graph_Graph_from_h_ratio3093","",100,0,219.995);
   Graph_Graph_from_h_ratio3093->SetMinimum(1.057229);
   Graph_Graph_from_h_ratio3093->SetMaximum(1.374017);
   Graph_Graph_from_h_ratio3093->SetDirectory(0);
   Graph_Graph_from_h_ratio3093->SetStats(0);
   Graph_Graph_from_h_ratio3093->SetLineWidth(2);
   Graph_Graph_from_h_ratio3093->SetMarkerStyle(20);
   Graph_Graph_from_h_ratio3093->SetMarkerSize(1.2);
   Graph_Graph_from_h_ratio3093->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3093->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3093->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3093->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3093->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3093->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3093->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3093->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3093->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3093->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3093->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3093->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3093->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3093->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_h_ratio3093);
   
   grae->Draw("pe0");
   TLine *line = new TLine(0,1,200,1);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t g_ratio2_fx3094[4] = {
   25,
   75,
   125,
   175};
   Double_t g_ratio2_fy3094[4] = {
   1,
   1,
   1,
   1};
   Double_t g_ratio2_felx3094[4] = {
   25,
   25,
   25,
   25};
   Double_t g_ratio2_fely3094[4] = {
   0.1826772,
   0.1899976,
   0.1926939,
   0.202796};
   Double_t g_ratio2_fehx3094[4] = {
   25,
   25,
   25,
   25};
   Double_t g_ratio2_fehy3094[4] = {
   0.1826772,
   0.1899976,
   0.1926939,
   0.202796};
   grae = new TGraphAsymmErrors(4,g_ratio2_fx3094,g_ratio2_fy3094,g_ratio2_felx3094,g_ratio2_fehx3094,g_ratio2_fely3094,g_ratio2_fehy3094);
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
   
   TH1F *Graph_g_ratio23094 = new TH1F("Graph_g_ratio23094","",100,0,220);
   Graph_g_ratio23094->SetMinimum(0.7566448);
   Graph_g_ratio23094->SetMaximum(1.243355);
   Graph_g_ratio23094->SetDirectory(0);
   Graph_g_ratio23094->SetStats(0);
   Graph_g_ratio23094->SetLineWidth(2);
   Graph_g_ratio23094->SetMarkerStyle(20);
   Graph_g_ratio23094->SetMarkerSize(1.2);
   Graph_g_ratio23094->GetXaxis()->SetLabelFont(43);
   Graph_g_ratio23094->GetXaxis()->SetLabelSize(21);
   Graph_g_ratio23094->GetXaxis()->SetTitleSize(21);
   Graph_g_ratio23094->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23094->GetXaxis()->SetTitleFont(43);
   Graph_g_ratio23094->GetYaxis()->SetLabelFont(43);
   Graph_g_ratio23094->GetYaxis()->SetLabelSize(21);
   Graph_g_ratio23094->GetYaxis()->SetTitleSize(21);
   Graph_g_ratio23094->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23094->GetYaxis()->SetTitleFont(43);
   Graph_g_ratio23094->GetZaxis()->SetLabelFont(43);
   Graph_g_ratio23094->GetZaxis()->SetLabelSize(21);
   Graph_g_ratio23094->GetZaxis()->SetTitleSize(21);
   Graph_g_ratio23094->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_ratio23094);
   
   grae->Draw("e2");
   Double_t xAxis232[5] = {0, 50, 100, 150, 200}; 
   
   TH1D *h_dummy2_copy__209 = new TH1D("h_dummy2_copy__209","Data/MC",4, xAxis232);
   h_dummy2_copy__209->SetMinimum(0.5);
   h_dummy2_copy__209->SetMaximum(1.5);
   h_dummy2_copy__209->SetEntries(1363513);
   h_dummy2_copy__209->SetDirectory(0);
   h_dummy2_copy__209->SetStats(0);
   h_dummy2_copy__209->SetMarkerStyle(20);
   h_dummy2_copy__209->SetMarkerSize(1.2);
   h_dummy2_copy__209->GetXaxis()->SetTitle("m_{T}^{W} [GeV]");
   h_dummy2_copy__209->GetXaxis()->SetRange(1,25);
   h_dummy2_copy__209->GetXaxis()->SetLabelFont(43);
   h_dummy2_copy__209->GetXaxis()->SetLabelOffset(0.025);
   h_dummy2_copy__209->GetXaxis()->SetLabelSize(16.8);
   h_dummy2_copy__209->GetXaxis()->SetTitleSize(21);
   h_dummy2_copy__209->GetXaxis()->SetTitleOffset(5.05);
   h_dummy2_copy__209->GetXaxis()->SetTitleFont(43);
   h_dummy2_copy__209->GetYaxis()->SetTitle("Data / Bkg");
   h_dummy2_copy__209->GetYaxis()->SetNdivisions(-504);
   h_dummy2_copy__209->GetYaxis()->SetLabelFont(43);
   h_dummy2_copy__209->GetYaxis()->SetLabelOffset(0.02);
   h_dummy2_copy__209->GetYaxis()->SetLabelSize(16.8);
   h_dummy2_copy__209->GetYaxis()->SetTitleSize(21);
   h_dummy2_copy__209->GetYaxis()->SetTitleOffset(2.4);
   h_dummy2_copy__209->GetYaxis()->SetTitleFont(43);
   h_dummy2_copy__209->GetZaxis()->SetLabelFont(43);
   h_dummy2_copy__209->GetZaxis()->SetLabelSize(21);
   h_dummy2_copy__209->GetZaxis()->SetTitleSize(21);
   h_dummy2_copy__209->GetZaxis()->SetTitleFont(43);
   h_dummy2_copy__209->Draw("sameaxis");
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
   c_c1lep5jex3bex_mtw->cd();
  
// ------------>Primitives in pad: pad0
   TPad *pad0 = new TPad("pad0", "pad0",0,0.2,1,1);
   pad0->Draw();
   pad0->cd();
   pad0->Range(-34.5679,-1618.715,212.3457,14568.43);
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
   Double_t xAxis233[5] = {0, 50, 100, 150, 200}; 
   
   TH1D *h_dummy__210 = new TH1D("h_dummy__210","",4, xAxis233);
   h_dummy__210->SetMinimum(0);
   h_dummy__210->SetMaximum(13759.08);
   h_dummy__210->SetEntries(1363513);
   h_dummy__210->SetDirectory(0);
   h_dummy__210->SetStats(0);
   h_dummy__210->SetMarkerStyle(20);
   h_dummy__210->SetMarkerSize(1.2);
   h_dummy__210->GetXaxis()->SetRange(1,25);
   h_dummy__210->GetXaxis()->SetLabelFont(43);
   h_dummy__210->GetXaxis()->SetLabelSize(0);
   h_dummy__210->GetXaxis()->SetTitleSize(21);
   h_dummy__210->GetXaxis()->SetTitleOffset(1.4);
   h_dummy__210->GetXaxis()->SetTitleFont(43);
   h_dummy__210->GetYaxis()->SetTitle("Events / 50 GeV");
   h_dummy__210->GetYaxis()->SetLabelFont(43);
   h_dummy__210->GetYaxis()->SetLabelSize(16.8);
   h_dummy__210->GetYaxis()->SetTitleSize(21);
   h_dummy__210->GetYaxis()->SetTitleOffset(2.4);
   h_dummy__210->GetYaxis()->SetTitleFont(43);
   h_dummy__210->GetZaxis()->SetLabelFont(43);
   h_dummy__210->GetZaxis()->SetLabelSize(21);
   h_dummy__210->GetZaxis()->SetTitleSize(21);
   h_dummy__210->GetZaxis()->SetTitleFont(43);
   h_dummy__210->Draw("HIST");
   
   THStack *h_stack = new THStack();
   h_stack->SetName("h_stack");
   h_stack->SetTitle("h_stack");
   Double_t xAxis234[5] = {0, 50, 100, 150, 200}; 
   
   TH1F *h_stack_stack_24 = new TH1F("h_stack_stack_24","h_stack",4, xAxis234);
   h_stack_stack_24->SetMinimum(0);
   h_stack_stack_24->SetMaximum(7524.145);
   h_stack_stack_24->SetDirectory(0);
   h_stack_stack_24->SetStats(0);
   h_stack_stack_24->SetLineWidth(2);
   h_stack_stack_24->SetMarkerStyle(20);
   h_stack_stack_24->SetMarkerSize(1.2);
   h_stack_stack_24->GetXaxis()->SetLabelFont(43);
   h_stack_stack_24->GetXaxis()->SetLabelSize(21);
   h_stack_stack_24->GetXaxis()->SetTitleSize(21);
   h_stack_stack_24->GetXaxis()->SetTitleOffset(1.4);
   h_stack_stack_24->GetXaxis()->SetTitleFont(43);
   h_stack_stack_24->GetYaxis()->SetLabelFont(43);
   h_stack_stack_24->GetYaxis()->SetLabelSize(21);
   h_stack_stack_24->GetYaxis()->SetTitleSize(21);
   h_stack_stack_24->GetYaxis()->SetTitleOffset(1.4);
   h_stack_stack_24->GetYaxis()->SetTitleFont(43);
   h_stack_stack_24->GetZaxis()->SetLabelFont(43);
   h_stack_stack_24->GetZaxis()->SetLabelSize(21);
   h_stack_stack_24->GetZaxis()->SetTitleSize(21);
   h_stack_stack_24->GetZaxis()->SetTitleFont(43);
   h_stack->SetHistogram(h_stack_stack_24);
   
   Double_t xAxis235[5] = {0, 50, 100, 150, 200}; 
   
   TH1D *c1lep5jex3bex_mtw_topEW__211 = new TH1D("c1lep5jex3bex_mtw_topEW__211","",4, xAxis235);
   c1lep5jex3bex_mtw_topEW__211->SetBinContent(1,418.3345);
   c1lep5jex3bex_mtw_topEW__211->SetBinContent(2,771.8002);
   c1lep5jex3bex_mtw_topEW__211->SetBinContent(3,84.40128);
   c1lep5jex3bex_mtw_topEW__211->SetBinContent(4,21.92389);
   c1lep5jex3bex_mtw_topEW__211->SetBinContent(5,9.821331);
   c1lep5jex3bex_mtw_topEW__211->SetBinError(1,49.49901);
   c1lep5jex3bex_mtw_topEW__211->SetBinError(2,55.01994);
   c1lep5jex3bex_mtw_topEW__211->SetBinError(3,17.34242);
   c1lep5jex3bex_mtw_topEW__211->SetBinError(4,1.953032);
   c1lep5jex3bex_mtw_topEW__211->SetBinError(5,2.093673);
   c1lep5jex3bex_mtw_topEW__211->SetEntries(1334903);
   c1lep5jex3bex_mtw_topEW__211->SetDirectory(0);
   c1lep5jex3bex_mtw_topEW__211->SetStats(0);

   ci = TColor::GetColor("#66cc66");
   c1lep5jex3bex_mtw_topEW__211->SetFillColor(ci);
   c1lep5jex3bex_mtw_topEW__211->SetMarkerStyle(20);
   c1lep5jex3bex_mtw_topEW__211->SetMarkerSize(1.2);
   c1lep5jex3bex_mtw_topEW__211->GetXaxis()->SetTitle("m_{T}(W) [GeV]");
   c1lep5jex3bex_mtw_topEW__211->GetXaxis()->SetRange(1,25);
   c1lep5jex3bex_mtw_topEW__211->GetXaxis()->SetLabelFont(43);
   c1lep5jex3bex_mtw_topEW__211->GetXaxis()->SetLabelSize(21);
   c1lep5jex3bex_mtw_topEW__211->GetXaxis()->SetTitleSize(21);
   c1lep5jex3bex_mtw_topEW__211->GetXaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_mtw_topEW__211->GetXaxis()->SetTitleFont(43);
   c1lep5jex3bex_mtw_topEW__211->GetYaxis()->SetLabelFont(43);
   c1lep5jex3bex_mtw_topEW__211->GetYaxis()->SetLabelSize(21);
   c1lep5jex3bex_mtw_topEW__211->GetYaxis()->SetTitleSize(21);
   c1lep5jex3bex_mtw_topEW__211->GetYaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_mtw_topEW__211->GetYaxis()->SetTitleFont(43);
   c1lep5jex3bex_mtw_topEW__211->GetZaxis()->SetLabelFont(43);
   c1lep5jex3bex_mtw_topEW__211->GetZaxis()->SetLabelSize(21);
   c1lep5jex3bex_mtw_topEW__211->GetZaxis()->SetTitleSize(21);
   c1lep5jex3bex_mtw_topEW__211->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep5jex3bex_mtw_topEW,"");
   Double_t xAxis236[5] = {0, 50, 100, 150, 200}; 
   
   TH1D *c1lep5jex3bex_mtw_ttbarbb__212 = new TH1D("c1lep5jex3bex_mtw_ttbarbb__212","",4, xAxis236);
   c1lep5jex3bex_mtw_ttbarbb__212->SetBinContent(1,1021.77);
   c1lep5jex3bex_mtw_ttbarbb__212->SetBinContent(2,2729.972);
   c1lep5jex3bex_mtw_ttbarbb__212->SetBinContent(3,373.054);
   c1lep5jex3bex_mtw_ttbarbb__212->SetBinContent(4,112.9576);
   c1lep5jex3bex_mtw_ttbarbb__212->SetBinContent(5,84.45248);
   c1lep5jex3bex_mtw_ttbarbb__212->SetBinError(1,20.32137);
   c1lep5jex3bex_mtw_ttbarbb__212->SetBinError(2,33.05612);
   c1lep5jex3bex_mtw_ttbarbb__212->SetBinError(3,12.92793);
   c1lep5jex3bex_mtw_ttbarbb__212->SetBinError(4,6.52741);
   c1lep5jex3bex_mtw_ttbarbb__212->SetBinError(5,6.185506);
   c1lep5jex3bex_mtw_ttbarbb__212->SetEntries(15468);
   c1lep5jex3bex_mtw_ttbarbb__212->SetDirectory(0);
   c1lep5jex3bex_mtw_ttbarbb__212->SetStats(0);

   ci = TColor::GetColor("#6666cc");
   c1lep5jex3bex_mtw_ttbarbb__212->SetFillColor(ci);
   c1lep5jex3bex_mtw_ttbarbb__212->SetMarkerStyle(20);
   c1lep5jex3bex_mtw_ttbarbb__212->SetMarkerSize(1.2);
   c1lep5jex3bex_mtw_ttbarbb__212->GetXaxis()->SetTitle("m_{T}(W) [GeV]");
   c1lep5jex3bex_mtw_ttbarbb__212->GetXaxis()->SetRange(1,25);
   c1lep5jex3bex_mtw_ttbarbb__212->GetXaxis()->SetLabelFont(43);
   c1lep5jex3bex_mtw_ttbarbb__212->GetXaxis()->SetLabelSize(21);
   c1lep5jex3bex_mtw_ttbarbb__212->GetXaxis()->SetTitleSize(21);
   c1lep5jex3bex_mtw_ttbarbb__212->GetXaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_mtw_ttbarbb__212->GetXaxis()->SetTitleFont(43);
   c1lep5jex3bex_mtw_ttbarbb__212->GetYaxis()->SetLabelFont(43);
   c1lep5jex3bex_mtw_ttbarbb__212->GetYaxis()->SetLabelSize(21);
   c1lep5jex3bex_mtw_ttbarbb__212->GetYaxis()->SetTitleSize(21);
   c1lep5jex3bex_mtw_ttbarbb__212->GetYaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_mtw_ttbarbb__212->GetYaxis()->SetTitleFont(43);
   c1lep5jex3bex_mtw_ttbarbb__212->GetZaxis()->SetLabelFont(43);
   c1lep5jex3bex_mtw_ttbarbb__212->GetZaxis()->SetLabelSize(21);
   c1lep5jex3bex_mtw_ttbarbb__212->GetZaxis()->SetTitleSize(21);
   c1lep5jex3bex_mtw_ttbarbb__212->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep5jex3bex_mtw_ttbarbb,"");
   Double_t xAxis237[5] = {0, 50, 100, 150, 200}; 
   
   TH1D *c1lep5jex3bex_mtw_ttbarcc__213 = new TH1D("c1lep5jex3bex_mtw_ttbarcc__213","",4, xAxis237);
   c1lep5jex3bex_mtw_ttbarcc__213->SetBinContent(1,315.0749);
   c1lep5jex3bex_mtw_ttbarcc__213->SetBinContent(2,868.1569);
   c1lep5jex3bex_mtw_ttbarcc__213->SetBinContent(3,94.21213);
   c1lep5jex3bex_mtw_ttbarcc__213->SetBinContent(4,22.84039);
   c1lep5jex3bex_mtw_ttbarcc__213->SetBinContent(5,20.54391);
   c1lep5jex3bex_mtw_ttbarcc__213->SetBinError(1,13.56142);
   c1lep5jex3bex_mtw_ttbarcc__213->SetBinError(2,20.17441);
   c1lep5jex3bex_mtw_ttbarcc__213->SetBinError(3,6.991984);
   c1lep5jex3bex_mtw_ttbarcc__213->SetBinError(4,3.01296);
   c1lep5jex3bex_mtw_ttbarcc__213->SetBinError(5,2.732299);
   c1lep5jex3bex_mtw_ttbarcc__213->SetEntries(4006);
   c1lep5jex3bex_mtw_ttbarcc__213->SetDirectory(0);
   c1lep5jex3bex_mtw_ttbarcc__213->SetStats(0);

   ci = TColor::GetColor("#ccccff");
   c1lep5jex3bex_mtw_ttbarcc__213->SetFillColor(ci);
   c1lep5jex3bex_mtw_ttbarcc__213->SetMarkerStyle(20);
   c1lep5jex3bex_mtw_ttbarcc__213->SetMarkerSize(1.2);
   c1lep5jex3bex_mtw_ttbarcc__213->GetXaxis()->SetTitle("m_{T}(W) [GeV]");
   c1lep5jex3bex_mtw_ttbarcc__213->GetXaxis()->SetRange(1,25);
   c1lep5jex3bex_mtw_ttbarcc__213->GetXaxis()->SetLabelFont(43);
   c1lep5jex3bex_mtw_ttbarcc__213->GetXaxis()->SetLabelSize(21);
   c1lep5jex3bex_mtw_ttbarcc__213->GetXaxis()->SetTitleSize(21);
   c1lep5jex3bex_mtw_ttbarcc__213->GetXaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_mtw_ttbarcc__213->GetXaxis()->SetTitleFont(43);
   c1lep5jex3bex_mtw_ttbarcc__213->GetYaxis()->SetLabelFont(43);
   c1lep5jex3bex_mtw_ttbarcc__213->GetYaxis()->SetLabelSize(21);
   c1lep5jex3bex_mtw_ttbarcc__213->GetYaxis()->SetTitleSize(21);
   c1lep5jex3bex_mtw_ttbarcc__213->GetYaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_mtw_ttbarcc__213->GetYaxis()->SetTitleFont(43);
   c1lep5jex3bex_mtw_ttbarcc__213->GetZaxis()->SetLabelFont(43);
   c1lep5jex3bex_mtw_ttbarcc__213->GetZaxis()->SetLabelSize(21);
   c1lep5jex3bex_mtw_ttbarcc__213->GetZaxis()->SetTitleSize(21);
   c1lep5jex3bex_mtw_ttbarcc__213->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep5jex3bex_mtw_ttbarcc,"");
   Double_t xAxis238[5] = {0, 50, 100, 150, 200}; 
   
   TH1D *c1lep5jex3bex_mtw_ttbarlight__214 = new TH1D("c1lep5jex3bex_mtw_ttbarlight__214","",4, xAxis238);
   c1lep5jex3bex_mtw_ttbarlight__214->SetBinContent(1,835.6642);
   c1lep5jex3bex_mtw_ttbarlight__214->SetBinContent(2,2102.967);
   c1lep5jex3bex_mtw_ttbarlight__214->SetBinContent(3,190.2021);
   c1lep5jex3bex_mtw_ttbarlight__214->SetBinContent(4,44.11578);
   c1lep5jex3bex_mtw_ttbarlight__214->SetBinContent(5,13.77577);
   c1lep5jex3bex_mtw_ttbarlight__214->SetBinError(1,20.84536);
   c1lep5jex3bex_mtw_ttbarlight__214->SetBinError(2,33.10712);
   c1lep5jex3bex_mtw_ttbarlight__214->SetBinError(3,14.02627);
   c1lep5jex3bex_mtw_ttbarlight__214->SetBinError(4,5.865252);
   c1lep5jex3bex_mtw_ttbarlight__214->SetBinError(5,2.477251);
   c1lep5jex3bex_mtw_ttbarlight__214->SetEntries(9132);
   c1lep5jex3bex_mtw_ttbarlight__214->SetDirectory(0);
   c1lep5jex3bex_mtw_ttbarlight__214->SetStats(0);
   c1lep5jex3bex_mtw_ttbarlight__214->SetMarkerStyle(20);
   c1lep5jex3bex_mtw_ttbarlight__214->SetMarkerSize(1.2);
   c1lep5jex3bex_mtw_ttbarlight__214->GetXaxis()->SetTitle("m_{T}(W) [GeV]");
   c1lep5jex3bex_mtw_ttbarlight__214->GetXaxis()->SetRange(1,25);
   c1lep5jex3bex_mtw_ttbarlight__214->GetXaxis()->SetLabelFont(43);
   c1lep5jex3bex_mtw_ttbarlight__214->GetXaxis()->SetLabelSize(21);
   c1lep5jex3bex_mtw_ttbarlight__214->GetXaxis()->SetTitleSize(21);
   c1lep5jex3bex_mtw_ttbarlight__214->GetXaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_mtw_ttbarlight__214->GetXaxis()->SetTitleFont(43);
   c1lep5jex3bex_mtw_ttbarlight__214->GetYaxis()->SetLabelFont(43);
   c1lep5jex3bex_mtw_ttbarlight__214->GetYaxis()->SetLabelSize(21);
   c1lep5jex3bex_mtw_ttbarlight__214->GetYaxis()->SetTitleSize(21);
   c1lep5jex3bex_mtw_ttbarlight__214->GetYaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_mtw_ttbarlight__214->GetYaxis()->SetTitleFont(43);
   c1lep5jex3bex_mtw_ttbarlight__214->GetZaxis()->SetLabelFont(43);
   c1lep5jex3bex_mtw_ttbarlight__214->GetZaxis()->SetLabelSize(21);
   c1lep5jex3bex_mtw_ttbarlight__214->GetZaxis()->SetTitleSize(21);
   c1lep5jex3bex_mtw_ttbarlight__214->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep5jex3bex_mtw_ttbarlight,"");
   Double_t xAxis239[5] = {0, 50, 100, 150, 200}; 
   
   TH1D *c1lep5jex3bex_mtw_uHcW__215 = new TH1D("c1lep5jex3bex_mtw_uHcW__215","",4, xAxis239);
   c1lep5jex3bex_mtw_uHcW__215->SetBinContent(1,249.6605);
   c1lep5jex3bex_mtw_uHcW__215->SetBinContent(2,692.9563);
   c1lep5jex3bex_mtw_uHcW__215->SetBinContent(3,53.48091);
   c1lep5jex3bex_mtw_uHcW__215->SetBinContent(4,12.79154);
   c1lep5jex3bex_mtw_uHcW__215->SetBinContent(5,2.913663);
   c1lep5jex3bex_mtw_uHcW__215->SetBinError(1,15.06082);
   c1lep5jex3bex_mtw_uHcW__215->SetBinError(2,25.78084);
   c1lep5jex3bex_mtw_uHcW__215->SetBinError(3,8.025701);
   c1lep5jex3bex_mtw_uHcW__215->SetBinError(4,3.082846);
   c1lep5jex3bex_mtw_uHcW__215->SetBinError(5,2.021);
   c1lep5jex3bex_mtw_uHcW__215->SetEntries(5357);
   c1lep5jex3bex_mtw_uHcW__215->SetDirectory(0);
   c1lep5jex3bex_mtw_uHcW__215->SetStats(0);
   c1lep5jex3bex_mtw_uHcW__215->SetFillColor(2);
   c1lep5jex3bex_mtw_uHcW__215->SetLineColor(2);
   c1lep5jex3bex_mtw_uHcW__215->SetMarkerStyle(20);
   c1lep5jex3bex_mtw_uHcW__215->SetMarkerSize(1.2);
   c1lep5jex3bex_mtw_uHcW__215->GetXaxis()->SetTitle("m_{T}(W) [GeV]");
   c1lep5jex3bex_mtw_uHcW__215->GetXaxis()->SetRange(1,25);
   c1lep5jex3bex_mtw_uHcW__215->GetXaxis()->SetLabelFont(43);
   c1lep5jex3bex_mtw_uHcW__215->GetXaxis()->SetLabelSize(21);
   c1lep5jex3bex_mtw_uHcW__215->GetXaxis()->SetTitleSize(21);
   c1lep5jex3bex_mtw_uHcW__215->GetXaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_mtw_uHcW__215->GetXaxis()->SetTitleFont(43);
   c1lep5jex3bex_mtw_uHcW__215->GetYaxis()->SetLabelFont(43);
   c1lep5jex3bex_mtw_uHcW__215->GetYaxis()->SetLabelSize(21);
   c1lep5jex3bex_mtw_uHcW__215->GetYaxis()->SetTitleSize(21);
   c1lep5jex3bex_mtw_uHcW__215->GetYaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_mtw_uHcW__215->GetYaxis()->SetTitleFont(43);
   c1lep5jex3bex_mtw_uHcW__215->GetZaxis()->SetLabelFont(43);
   c1lep5jex3bex_mtw_uHcW__215->GetZaxis()->SetLabelSize(21);
   c1lep5jex3bex_mtw_uHcW__215->GetZaxis()->SetTitleSize(21);
   c1lep5jex3bex_mtw_uHcW__215->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep5jex3bex_mtw_uHcW,"");
   h_stack->Draw("hist same");
   
   Double_t g_totErr_fx3095[4] = {
   25,
   75,
   125,
   175};
   Double_t g_totErr_fy3095[4] = {
   2590.844,
   6472.896,
   741.8695,
   201.8376};
   Double_t g_totErr_felx3095[4] = {
   25,
   25,
   25,
   25};
   Double_t g_totErr_fely3095[4] = {
   473.288,
   1229.834,
   142.9537,
   40.93186};
   Double_t g_totErr_fehx3095[4] = {
   25,
   25,
   25,
   25};
   Double_t g_totErr_fehy3095[4] = {
   473.288,
   1229.834,
   142.9537,
   40.93186};
   grae = new TGraphAsymmErrors(4,g_totErr_fx3095,g_totErr_fy3095,g_totErr_felx3095,g_totErr_fehx3095,g_totErr_fely3095,g_totErr_fehy3095);
   grae->SetName("g_totErr");
   grae->SetTitle("");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(3354);
   grae->SetLineColor(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0);
   
   TH1F *Graph_g_totErr3095 = new TH1F("Graph_g_totErr3095","",100,0,220);
   Graph_g_totErr3095->SetMinimum(0);
   Graph_g_totErr3095->SetMaximum(8456.913);
   Graph_g_totErr3095->SetDirectory(0);
   Graph_g_totErr3095->SetStats(0);
   Graph_g_totErr3095->SetLineWidth(2);
   Graph_g_totErr3095->SetMarkerStyle(20);
   Graph_g_totErr3095->SetMarkerSize(1.2);
   Graph_g_totErr3095->GetXaxis()->SetLabelFont(43);
   Graph_g_totErr3095->GetXaxis()->SetLabelSize(21);
   Graph_g_totErr3095->GetXaxis()->SetTitleSize(21);
   Graph_g_totErr3095->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_totErr3095->GetXaxis()->SetTitleFont(43);
   Graph_g_totErr3095->GetYaxis()->SetLabelFont(43);
   Graph_g_totErr3095->GetYaxis()->SetLabelSize(21);
   Graph_g_totErr3095->GetYaxis()->SetTitleSize(21);
   Graph_g_totErr3095->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_totErr3095->GetYaxis()->SetTitleFont(43);
   Graph_g_totErr3095->GetZaxis()->SetLabelFont(43);
   Graph_g_totErr3095->GetZaxis()->SetLabelSize(21);
   Graph_g_totErr3095->GetZaxis()->SetTitleSize(21);
   Graph_g_totErr3095->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_totErr3095);
   
   grae->Draw("e2");
   
   Double_t Graph_from_c1lep5jex3bex_mtw_Data_fx3096[4] = {
   25,
   75,
   125,
   175};
   Double_t Graph_from_c1lep5jex3bex_mtw_Data_fy3096[4] = {
   2861,
   7557,
   858,
   256};
   Double_t Graph_from_c1lep5jex3bex_mtw_Data_felx3096[4] = {
   24.95,
   24.95,
   24.95,
   24.95};
   Double_t Graph_from_c1lep5jex3bex_mtw_Data_fely3096[4] = {
   53.48832,
   86.93101,
   29.29164,
   16};
   Double_t Graph_from_c1lep5jex3bex_mtw_Data_fehx3096[4] = {
   25,
   25,
   25,
   25};
   Double_t Graph_from_c1lep5jex3bex_mtw_Data_fehy3096[4] = {
   53.48832,
   86.93101,
   29.29164,
   16};
   grae = new TGraphAsymmErrors(4,Graph_from_c1lep5jex3bex_mtw_Data_fx3096,Graph_from_c1lep5jex3bex_mtw_Data_fy3096,Graph_from_c1lep5jex3bex_mtw_Data_felx3096,Graph_from_c1lep5jex3bex_mtw_Data_fehx3096,Graph_from_c1lep5jex3bex_mtw_Data_fely3096,Graph_from_c1lep5jex3bex_mtw_Data_fehy3096);
   grae->SetName("Graph_from_c1lep5jex3bex_mtw_Data");
   grae->SetTitle("");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_c1lep5jex3bex_mtw_Data3096 = new TH1F("Graph_Graph_from_c1lep5jex3bex_mtw_Data3096","",100,0,219.995);
   Graph_Graph_from_c1lep5jex3bex_mtw_Data3096->SetMinimum(0);
   Graph_Graph_from_c1lep5jex3bex_mtw_Data3096->SetMaximum(8384.324);
   Graph_Graph_from_c1lep5jex3bex_mtw_Data3096->SetDirectory(0);
   Graph_Graph_from_c1lep5jex3bex_mtw_Data3096->SetStats(0);
   Graph_Graph_from_c1lep5jex3bex_mtw_Data3096->SetLineWidth(2);
   Graph_Graph_from_c1lep5jex3bex_mtw_Data3096->SetMarkerStyle(20);
   Graph_Graph_from_c1lep5jex3bex_mtw_Data3096->SetMarkerSize(1.2);
   Graph_Graph_from_c1lep5jex3bex_mtw_Data3096->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep5jex3bex_mtw_Data3096->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep5jex3bex_mtw_Data3096->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep5jex3bex_mtw_Data3096->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep5jex3bex_mtw_Data3096->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep5jex3bex_mtw_Data3096->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep5jex3bex_mtw_Data3096->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep5jex3bex_mtw_Data3096->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep5jex3bex_mtw_Data3096->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep5jex3bex_mtw_Data3096->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep5jex3bex_mtw_Data3096->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep5jex3bex_mtw_Data3096->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep5jex3bex_mtw_Data3096->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep5jex3bex_mtw_Data3096->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_c1lep5jex3bex_mtw_Data3096);
   
   grae->Draw("ep1 ");
   Double_t xAxis240[5] = {0, 50, 100, 150, 200}; 
   
   TH1D *h_dummy_copy__216 = new TH1D("h_dummy_copy__216","",4, xAxis240);
   h_dummy_copy__216->SetEntries(1363513);
   h_dummy_copy__216->SetDirectory(0);
   h_dummy_copy__216->SetStats(0);
   h_dummy_copy__216->SetMarkerStyle(20);
   h_dummy_copy__216->SetMarkerSize(1.2);
   h_dummy_copy__216->GetXaxis()->SetTitle("m_{T}^{W} [GeV]");
   h_dummy_copy__216->GetXaxis()->SetRange(1,25);
   h_dummy_copy__216->GetXaxis()->SetLabelFont(43);
   h_dummy_copy__216->GetXaxis()->SetLabelSize(21);
   h_dummy_copy__216->GetXaxis()->SetTitleSize(21);
   h_dummy_copy__216->GetXaxis()->SetTitleOffset(1.4);
   h_dummy_copy__216->GetXaxis()->SetTitleFont(43);
   h_dummy_copy__216->GetYaxis()->SetTitle("Events / 50 GeV");
   h_dummy_copy__216->GetYaxis()->SetLabelFont(43);
   h_dummy_copy__216->GetYaxis()->SetLabelSize(16.8);
   h_dummy_copy__216->GetYaxis()->SetTitleSize(21);
   h_dummy_copy__216->GetYaxis()->SetTitleOffset(2.4);
   h_dummy_copy__216->GetYaxis()->SetTitleFont(43);
   h_dummy_copy__216->GetZaxis()->SetLabelFont(43);
   h_dummy_copy__216->GetZaxis()->SetLabelSize(21);
   h_dummy_copy__216->GetZaxis()->SetTitleSize(21);
   h_dummy_copy__216->GetZaxis()->SetTitleFont(43);
   h_dummy_copy__216->Draw("sameaxis");
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
      tex = new TLatex(0.18,0.73,"5j, 3b");
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
   TLegendEntry *entry=leg->AddEntry("c1lep5jex3bex_mtw_Data","Data","lep");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep5jex3bex_mtw_uHcW","t#bar{t}#rightarrowWbHc (BR=1%)","f");
   entry->SetFillColor(2);
   entry->SetFillStyle(1001);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep5jex3bex_mtw_ttbarlight","t#bar{t}+light","f");
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep5jex3bex_mtw_ttbarcc","t#bar{t}+cc","f");

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
   entry=leg->AddEntry("c1lep5jex3bex_mtw_ttbarbb","t#bar{t}+bb","f");

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
   entry=leg->AddEntry("c1lep5jex3bex_mtw_topEW","Non-t#bar{t}","f");

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
   c_c1lep5jex3bex_mtw->cd();
   c_c1lep5jex3bex_mtw->Modified();
   c_c1lep5jex3bex_mtw->cd();
   c_c1lep5jex3bex_mtw->SetSelected(c_c1lep5jex3bex_mtw);
}
