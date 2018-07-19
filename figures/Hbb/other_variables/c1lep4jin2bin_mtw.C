void c1lep4jin2bin_mtw()
{
//=========Macro generated from canvas: c_c1lep4jin2bin_mtw/c_c1lep4jin2bin_mtw
//=========  (Thu Jul 19 17:38:05 2018) by ROOT version6.04/14
   TCanvas *c_c1lep4jin2bin_mtw = new TCanvas("c_c1lep4jin2bin_mtw", "c_c1lep4jin2bin_mtw",0,0,600,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c_c1lep4jin2bin_mtw->SetHighLightColor(2);
   c_c1lep4jin2bin_mtw->Range(0,0,1,1);
   c_c1lep4jin2bin_mtw->SetFillColor(0);
   c_c1lep4jin2bin_mtw->SetBorderMode(0);
   c_c1lep4jin2bin_mtw->SetBorderSize(2);
   c_c1lep4jin2bin_mtw->SetTickx(1);
   c_c1lep4jin2bin_mtw->SetTicky(1);
   c_c1lep4jin2bin_mtw->SetLeftMargin(0.16);
   c_c1lep4jin2bin_mtw->SetRightMargin(0.05);
   c_c1lep4jin2bin_mtw->SetTopMargin(0.05);
   c_c1lep4jin2bin_mtw->SetBottomMargin(0.16);
   c_c1lep4jin2bin_mtw->SetFrameBorderMode(0);
  
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
   Double_t xAxis211[5] = {0, 50, 100, 150, 200}; 
   
   TH1D *h_dummy2__190 = new TH1D("h_dummy2__190","Data/MC",4, xAxis211);
   h_dummy2__190->SetMinimum(0.5);
   h_dummy2__190->SetMaximum(1.5);
   h_dummy2__190->SetEntries(1.123258e+07);
   h_dummy2__190->SetDirectory(0);
   h_dummy2__190->SetStats(0);
   h_dummy2__190->SetMarkerStyle(20);
   h_dummy2__190->SetMarkerSize(1.2);
   h_dummy2__190->GetXaxis()->SetTitle("m_{T}^{W} [GeV]");
   h_dummy2__190->GetXaxis()->SetRange(1,25);
   h_dummy2__190->GetXaxis()->SetLabelFont(43);
   h_dummy2__190->GetXaxis()->SetLabelOffset(0.025);
   h_dummy2__190->GetXaxis()->SetLabelSize(16.8);
   h_dummy2__190->GetXaxis()->SetTitleSize(21);
   h_dummy2__190->GetXaxis()->SetTitleOffset(5.05);
   h_dummy2__190->GetXaxis()->SetTitleFont(43);
   h_dummy2__190->GetYaxis()->SetTitle("Data / Bkg");
   h_dummy2__190->GetYaxis()->SetNdivisions(-504);
   h_dummy2__190->GetYaxis()->SetLabelFont(43);
   h_dummy2__190->GetYaxis()->SetLabelOffset(0.02);
   h_dummy2__190->GetYaxis()->SetLabelSize(16.8);
   h_dummy2__190->GetYaxis()->SetTitleSize(21);
   h_dummy2__190->GetYaxis()->SetTitleOffset(2.4);
   h_dummy2__190->GetYaxis()->SetTitleFont(43);
   h_dummy2__190->GetZaxis()->SetLabelFont(43);
   h_dummy2__190->GetZaxis()->SetLabelSize(21);
   h_dummy2__190->GetZaxis()->SetTitleSize(21);
   h_dummy2__190->GetZaxis()->SetTitleFont(43);
   h_dummy2__190->Draw("HIST");
   
   Double_t Graph_from_h_ratio_fx3085[4] = {
   25,
   75,
   125,
   175};
   Double_t Graph_from_h_ratio_fy3085[4] = {
   0.9398977,
   0.9618775,
   0.986765,
   0.9900263};
   Double_t Graph_from_h_ratio_felx3085[4] = {
   24.95,
   24.95,
   24.95,
   24.95};
   Double_t Graph_from_h_ratio_fely3085[4] = {
   0.002001296,
   0.001250852,
   0.004009749,
   0.007776941};
   Double_t Graph_from_h_ratio_fehx3085[4] = {
   25,
   25,
   25,
   25};
   Double_t Graph_from_h_ratio_fehy3085[4] = {
   0.002001296,
   0.001250852,
   0.004009749,
   0.007776941};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(4,Graph_from_h_ratio_fx3085,Graph_from_h_ratio_fy3085,Graph_from_h_ratio_felx3085,Graph_from_h_ratio_fehx3085,Graph_from_h_ratio_fely3085,Graph_from_h_ratio_fehy3085);
   grae->SetName("Graph_from_h_ratio");
   grae->SetTitle("");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(24);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_h_ratio3085 = new TH1F("Graph_Graph_from_h_ratio3085","",100,0,219.995);
   Graph_Graph_from_h_ratio3085->SetMinimum(0.9319057);
   Graph_Graph_from_h_ratio3085->SetMaximum(1.003794);
   Graph_Graph_from_h_ratio3085->SetDirectory(0);
   Graph_Graph_from_h_ratio3085->SetStats(0);
   Graph_Graph_from_h_ratio3085->SetLineWidth(2);
   Graph_Graph_from_h_ratio3085->SetMarkerStyle(20);
   Graph_Graph_from_h_ratio3085->SetMarkerSize(1.2);
   Graph_Graph_from_h_ratio3085->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3085->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3085->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3085->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3085->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3085->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3085->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3085->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3085->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3085->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3085->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3085->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3085->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3085->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_h_ratio3085);
   
   grae->Draw("pe0");
   TLine *line = new TLine(0,1,200,1);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t g_ratio2_fx3086[4] = {
   25,
   75,
   125,
   175};
   Double_t g_ratio2_fy3086[4] = {
   1,
   1,
   1,
   1};
   Double_t g_ratio2_felx3086[4] = {
   25,
   25,
   25,
   25};
   Double_t g_ratio2_fely3086[4] = {
   0.1230236,
   0.1241501,
   0.1366938,
   0.1540404};
   Double_t g_ratio2_fehx3086[4] = {
   25,
   25,
   25,
   25};
   Double_t g_ratio2_fehy3086[4] = {
   0.1230236,
   0.1241501,
   0.1366938,
   0.1540404};
   grae = new TGraphAsymmErrors(4,g_ratio2_fx3086,g_ratio2_fy3086,g_ratio2_felx3086,g_ratio2_fehx3086,g_ratio2_fely3086,g_ratio2_fehy3086);
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
   
   TH1F *Graph_g_ratio23086 = new TH1F("Graph_g_ratio23086","",100,0,220);
   Graph_g_ratio23086->SetMinimum(0.8151515);
   Graph_g_ratio23086->SetMaximum(1.184849);
   Graph_g_ratio23086->SetDirectory(0);
   Graph_g_ratio23086->SetStats(0);
   Graph_g_ratio23086->SetLineWidth(2);
   Graph_g_ratio23086->SetMarkerStyle(20);
   Graph_g_ratio23086->SetMarkerSize(1.2);
   Graph_g_ratio23086->GetXaxis()->SetLabelFont(43);
   Graph_g_ratio23086->GetXaxis()->SetLabelSize(21);
   Graph_g_ratio23086->GetXaxis()->SetTitleSize(21);
   Graph_g_ratio23086->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23086->GetXaxis()->SetTitleFont(43);
   Graph_g_ratio23086->GetYaxis()->SetLabelFont(43);
   Graph_g_ratio23086->GetYaxis()->SetLabelSize(21);
   Graph_g_ratio23086->GetYaxis()->SetTitleSize(21);
   Graph_g_ratio23086->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23086->GetYaxis()->SetTitleFont(43);
   Graph_g_ratio23086->GetZaxis()->SetLabelFont(43);
   Graph_g_ratio23086->GetZaxis()->SetLabelSize(21);
   Graph_g_ratio23086->GetZaxis()->SetTitleSize(21);
   Graph_g_ratio23086->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_ratio23086);
   
   grae->Draw("e2");
   Double_t xAxis212[5] = {0, 50, 100, 150, 200}; 
   
   TH1D *h_dummy2_copy__191 = new TH1D("h_dummy2_copy__191","Data/MC",4, xAxis212);
   h_dummy2_copy__191->SetMinimum(0.5);
   h_dummy2_copy__191->SetMaximum(1.5);
   h_dummy2_copy__191->SetEntries(1.123258e+07);
   h_dummy2_copy__191->SetDirectory(0);
   h_dummy2_copy__191->SetStats(0);
   h_dummy2_copy__191->SetMarkerStyle(20);
   h_dummy2_copy__191->SetMarkerSize(1.2);
   h_dummy2_copy__191->GetXaxis()->SetTitle("m_{T}^{W} [GeV]");
   h_dummy2_copy__191->GetXaxis()->SetRange(1,25);
   h_dummy2_copy__191->GetXaxis()->SetLabelFont(43);
   h_dummy2_copy__191->GetXaxis()->SetLabelOffset(0.025);
   h_dummy2_copy__191->GetXaxis()->SetLabelSize(16.8);
   h_dummy2_copy__191->GetXaxis()->SetTitleSize(21);
   h_dummy2_copy__191->GetXaxis()->SetTitleOffset(5.05);
   h_dummy2_copy__191->GetXaxis()->SetTitleFont(43);
   h_dummy2_copy__191->GetYaxis()->SetTitle("Data / Bkg");
   h_dummy2_copy__191->GetYaxis()->SetNdivisions(-504);
   h_dummy2_copy__191->GetYaxis()->SetLabelFont(43);
   h_dummy2_copy__191->GetYaxis()->SetLabelOffset(0.02);
   h_dummy2_copy__191->GetYaxis()->SetLabelSize(16.8);
   h_dummy2_copy__191->GetYaxis()->SetTitleSize(21);
   h_dummy2_copy__191->GetYaxis()->SetTitleOffset(2.4);
   h_dummy2_copy__191->GetYaxis()->SetTitleFont(43);
   h_dummy2_copy__191->GetZaxis()->SetLabelFont(43);
   h_dummy2_copy__191->GetZaxis()->SetLabelSize(21);
   h_dummy2_copy__191->GetZaxis()->SetTitleSize(21);
   h_dummy2_copy__191->GetZaxis()->SetTitleFont(43);
   h_dummy2_copy__191->Draw("sameaxis");
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
   c_c1lep4jin2bin_mtw->cd();
  
// ------------>Primitives in pad: pad0
   TPad *pad0 = new TPad("pad0", "pad0",0,0.2,1,1);
   pad0->Draw();
   pad0->cd();
   pad0->Range(-34.5679,-130185.2,212.3457,1171666);
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
   Double_t xAxis213[5] = {0, 50, 100, 150, 200}; 
   
   TH1D *h_dummy__192 = new TH1D("h_dummy__192","",4, xAxis213);
   h_dummy__192->SetMinimum(0);
   h_dummy__192->SetMaximum(1106574);
   h_dummy__192->SetEntries(1.123258e+07);
   h_dummy__192->SetDirectory(0);
   h_dummy__192->SetStats(0);
   h_dummy__192->SetMarkerStyle(20);
   h_dummy__192->SetMarkerSize(1.2);
   h_dummy__192->GetXaxis()->SetRange(1,25);
   h_dummy__192->GetXaxis()->SetLabelFont(43);
   h_dummy__192->GetXaxis()->SetLabelSize(0);
   h_dummy__192->GetXaxis()->SetTitleSize(21);
   h_dummy__192->GetXaxis()->SetTitleOffset(1.4);
   h_dummy__192->GetXaxis()->SetTitleFont(43);
   h_dummy__192->GetYaxis()->SetTitle("Events / 50 GeV");
   h_dummy__192->GetYaxis()->SetLabelFont(43);
   h_dummy__192->GetYaxis()->SetLabelSize(16.8);
   h_dummy__192->GetYaxis()->SetTitleSize(21);
   h_dummy__192->GetYaxis()->SetTitleOffset(2.4);
   h_dummy__192->GetYaxis()->SetTitleFont(43);
   h_dummy__192->GetZaxis()->SetLabelFont(43);
   h_dummy__192->GetZaxis()->SetLabelSize(21);
   h_dummy__192->GetZaxis()->SetTitleSize(21);
   h_dummy__192->GetZaxis()->SetTitleFont(43);
   h_dummy__192->Draw("HIST");
   
   THStack *h_stack = new THStack();
   h_stack->SetName("h_stack");
   h_stack->SetTitle("h_stack");
   Double_t xAxis214[5] = {0, 50, 100, 150, 200}; 
   
   TH1F *h_stack_stack_22 = new TH1F("h_stack_stack_22","h_stack",4, xAxis214);
   h_stack_stack_22->SetMinimum(0);
   h_stack_stack_22->SetMaximum(653819.6);
   h_stack_stack_22->SetDirectory(0);
   h_stack_stack_22->SetStats(0);
   h_stack_stack_22->SetLineWidth(2);
   h_stack_stack_22->SetMarkerStyle(20);
   h_stack_stack_22->SetMarkerSize(1.2);
   h_stack_stack_22->GetXaxis()->SetLabelFont(43);
   h_stack_stack_22->GetXaxis()->SetLabelSize(21);
   h_stack_stack_22->GetXaxis()->SetTitleSize(21);
   h_stack_stack_22->GetXaxis()->SetTitleOffset(1.4);
   h_stack_stack_22->GetXaxis()->SetTitleFont(43);
   h_stack_stack_22->GetYaxis()->SetLabelFont(43);
   h_stack_stack_22->GetYaxis()->SetLabelSize(21);
   h_stack_stack_22->GetYaxis()->SetTitleSize(21);
   h_stack_stack_22->GetYaxis()->SetTitleOffset(1.4);
   h_stack_stack_22->GetYaxis()->SetTitleFont(43);
   h_stack_stack_22->GetZaxis()->SetLabelFont(43);
   h_stack_stack_22->GetZaxis()->SetLabelSize(21);
   h_stack_stack_22->GetZaxis()->SetTitleSize(21);
   h_stack_stack_22->GetZaxis()->SetTitleFont(43);
   h_stack->SetHistogram(h_stack_stack_22);
   
   Double_t xAxis215[5] = {0, 50, 100, 150, 200}; 
   
   TH1D *c1lep4jin2bin_mtw_topEW__193 = new TH1D("c1lep4jin2bin_mtw_topEW__193","",4, xAxis215);
   c1lep4jin2bin_mtw_topEW__193->SetBinContent(1,34878.92);
   c1lep4jin2bin_mtw_topEW__193->SetBinContent(2,70476.8);
   c1lep4jin2bin_mtw_topEW__193->SetBinContent(3,7179.923);
   c1lep4jin2bin_mtw_topEW__193->SetBinContent(4,1977.342);
   c1lep4jin2bin_mtw_topEW__193->SetBinContent(5,1553.673);
   c1lep4jin2bin_mtw_topEW__193->SetBinError(1,457.7397);
   c1lep4jin2bin_mtw_topEW__193->SetBinError(2,572.0684);
   c1lep4jin2bin_mtw_topEW__193->SetBinError(3,177.2385);
   c1lep4jin2bin_mtw_topEW__193->SetBinError(4,80.01106);
   c1lep4jin2bin_mtw_topEW__193->SetBinError(5,89.99561);
   c1lep4jin2bin_mtw_topEW__193->SetEntries(8198804);
   c1lep4jin2bin_mtw_topEW__193->SetDirectory(0);
   c1lep4jin2bin_mtw_topEW__193->SetStats(0);

   ci = TColor::GetColor("#66cc66");
   c1lep4jin2bin_mtw_topEW__193->SetFillColor(ci);
   c1lep4jin2bin_mtw_topEW__193->SetMarkerStyle(20);
   c1lep4jin2bin_mtw_topEW__193->SetMarkerSize(1.2);
   c1lep4jin2bin_mtw_topEW__193->GetXaxis()->SetTitle("m_{T}(W) [GeV]");
   c1lep4jin2bin_mtw_topEW__193->GetXaxis()->SetRange(1,25);
   c1lep4jin2bin_mtw_topEW__193->GetXaxis()->SetLabelFont(43);
   c1lep4jin2bin_mtw_topEW__193->GetXaxis()->SetLabelSize(21);
   c1lep4jin2bin_mtw_topEW__193->GetXaxis()->SetTitleSize(21);
   c1lep4jin2bin_mtw_topEW__193->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_mtw_topEW__193->GetXaxis()->SetTitleFont(43);
   c1lep4jin2bin_mtw_topEW__193->GetYaxis()->SetLabelFont(43);
   c1lep4jin2bin_mtw_topEW__193->GetYaxis()->SetLabelSize(21);
   c1lep4jin2bin_mtw_topEW__193->GetYaxis()->SetTitleSize(21);
   c1lep4jin2bin_mtw_topEW__193->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_mtw_topEW__193->GetYaxis()->SetTitleFont(43);
   c1lep4jin2bin_mtw_topEW__193->GetZaxis()->SetLabelFont(43);
   c1lep4jin2bin_mtw_topEW__193->GetZaxis()->SetLabelSize(21);
   c1lep4jin2bin_mtw_topEW__193->GetZaxis()->SetTitleSize(21);
   c1lep4jin2bin_mtw_topEW__193->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jin2bin_mtw_topEW,"");
   Double_t xAxis216[5] = {0, 50, 100, 150, 200}; 
   
   TH1D *c1lep4jin2bin_mtw_ttbarbb__194 = new TH1D("c1lep4jin2bin_mtw_ttbarbb__194","",4, xAxis216);
   c1lep4jin2bin_mtw_ttbarbb__194->SetBinContent(1,13331.59);
   c1lep4jin2bin_mtw_ttbarbb__194->SetBinContent(2,33545.4);
   c1lep4jin2bin_mtw_ttbarbb__194->SetBinContent(3,4503.981);
   c1lep4jin2bin_mtw_ttbarbb__194->SetBinContent(4,1389.011);
   c1lep4jin2bin_mtw_ttbarbb__194->SetBinContent(5,971.3624);
   c1lep4jin2bin_mtw_ttbarbb__194->SetBinError(1,73.50203);
   c1lep4jin2bin_mtw_ttbarbb__194->SetBinError(2,114.7458);
   c1lep4jin2bin_mtw_ttbarbb__194->SetBinError(3,43.52559);
   c1lep4jin2bin_mtw_ttbarbb__194->SetBinError(4,23.89599);
   c1lep4jin2bin_mtw_ttbarbb__194->SetBinError(5,19.88054);
   c1lep4jin2bin_mtw_ttbarbb__194->SetEntries(197629);
   c1lep4jin2bin_mtw_ttbarbb__194->SetDirectory(0);
   c1lep4jin2bin_mtw_ttbarbb__194->SetStats(0);

   ci = TColor::GetColor("#6666cc");
   c1lep4jin2bin_mtw_ttbarbb__194->SetFillColor(ci);
   c1lep4jin2bin_mtw_ttbarbb__194->SetMarkerStyle(20);
   c1lep4jin2bin_mtw_ttbarbb__194->SetMarkerSize(1.2);
   c1lep4jin2bin_mtw_ttbarbb__194->GetXaxis()->SetTitle("m_{T}(W) [GeV]");
   c1lep4jin2bin_mtw_ttbarbb__194->GetXaxis()->SetRange(1,25);
   c1lep4jin2bin_mtw_ttbarbb__194->GetXaxis()->SetLabelFont(43);
   c1lep4jin2bin_mtw_ttbarbb__194->GetXaxis()->SetLabelSize(21);
   c1lep4jin2bin_mtw_ttbarbb__194->GetXaxis()->SetTitleSize(21);
   c1lep4jin2bin_mtw_ttbarbb__194->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_mtw_ttbarbb__194->GetXaxis()->SetTitleFont(43);
   c1lep4jin2bin_mtw_ttbarbb__194->GetYaxis()->SetLabelFont(43);
   c1lep4jin2bin_mtw_ttbarbb__194->GetYaxis()->SetLabelSize(21);
   c1lep4jin2bin_mtw_ttbarbb__194->GetYaxis()->SetTitleSize(21);
   c1lep4jin2bin_mtw_ttbarbb__194->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_mtw_ttbarbb__194->GetYaxis()->SetTitleFont(43);
   c1lep4jin2bin_mtw_ttbarbb__194->GetZaxis()->SetLabelFont(43);
   c1lep4jin2bin_mtw_ttbarbb__194->GetZaxis()->SetLabelSize(21);
   c1lep4jin2bin_mtw_ttbarbb__194->GetZaxis()->SetTitleSize(21);
   c1lep4jin2bin_mtw_ttbarbb__194->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jin2bin_mtw_ttbarbb,"");
   Double_t xAxis217[5] = {0, 50, 100, 150, 200}; 
   
   TH1D *c1lep4jin2bin_mtw_ttbarcc__195 = new TH1D("c1lep4jin2bin_mtw_ttbarcc__195","",4, xAxis217);
   c1lep4jin2bin_mtw_ttbarcc__195->SetBinContent(1,21539.13);
   c1lep4jin2bin_mtw_ttbarcc__195->SetBinContent(2,57214.17);
   c1lep4jin2bin_mtw_ttbarcc__195->SetBinContent(3,6051.047);
   c1lep4jin2bin_mtw_ttbarcc__195->SetBinContent(4,1602.585);
   c1lep4jin2bin_mtw_ttbarcc__195->SetBinContent(5,1075.458);
   c1lep4jin2bin_mtw_ttbarcc__195->SetBinError(1,91.57759);
   c1lep4jin2bin_mtw_ttbarcc__195->SetBinError(2,149.7452);
   c1lep4jin2bin_mtw_ttbarcc__195->SetBinError(3,49.53513);
   c1lep4jin2bin_mtw_ttbarcc__195->SetBinError(4,25.48574);
   c1lep4jin2bin_mtw_ttbarcc__195->SetBinError(5,20.65064);
   c1lep4jin2bin_mtw_ttbarcc__195->SetEntries(319744);
   c1lep4jin2bin_mtw_ttbarcc__195->SetDirectory(0);
   c1lep4jin2bin_mtw_ttbarcc__195->SetStats(0);

   ci = TColor::GetColor("#ccccff");
   c1lep4jin2bin_mtw_ttbarcc__195->SetFillColor(ci);
   c1lep4jin2bin_mtw_ttbarcc__195->SetMarkerStyle(20);
   c1lep4jin2bin_mtw_ttbarcc__195->SetMarkerSize(1.2);
   c1lep4jin2bin_mtw_ttbarcc__195->GetXaxis()->SetTitle("m_{T}(W) [GeV]");
   c1lep4jin2bin_mtw_ttbarcc__195->GetXaxis()->SetRange(1,25);
   c1lep4jin2bin_mtw_ttbarcc__195->GetXaxis()->SetLabelFont(43);
   c1lep4jin2bin_mtw_ttbarcc__195->GetXaxis()->SetLabelSize(21);
   c1lep4jin2bin_mtw_ttbarcc__195->GetXaxis()->SetTitleSize(21);
   c1lep4jin2bin_mtw_ttbarcc__195->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_mtw_ttbarcc__195->GetXaxis()->SetTitleFont(43);
   c1lep4jin2bin_mtw_ttbarcc__195->GetYaxis()->SetLabelFont(43);
   c1lep4jin2bin_mtw_ttbarcc__195->GetYaxis()->SetLabelSize(21);
   c1lep4jin2bin_mtw_ttbarcc__195->GetYaxis()->SetTitleSize(21);
   c1lep4jin2bin_mtw_ttbarcc__195->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_mtw_ttbarcc__195->GetYaxis()->SetTitleFont(43);
   c1lep4jin2bin_mtw_ttbarcc__195->GetZaxis()->SetLabelFont(43);
   c1lep4jin2bin_mtw_ttbarcc__195->GetZaxis()->SetLabelSize(21);
   c1lep4jin2bin_mtw_ttbarcc__195->GetZaxis()->SetTitleSize(21);
   c1lep4jin2bin_mtw_ttbarcc__195->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jin2bin_mtw_ttbarcc,"");
   Double_t xAxis218[5] = {0, 50, 100, 150, 200}; 
   
   TH1D *c1lep4jin2bin_mtw_ttbarlight__196 = new TH1D("c1lep4jin2bin_mtw_ttbarlight__196","",4, xAxis218);
   c1lep4jin2bin_mtw_ttbarlight__196->SetBinContent(1,164920.6);
   c1lep4jin2bin_mtw_ttbarlight__196->SetBinContent(2,453527);
   c1lep4jin2bin_mtw_ttbarlight__196->SetBinContent(3,43638.32);
   c1lep4jin2bin_mtw_ttbarlight__196->SetBinContent(4,11400.32);
   c1lep4jin2bin_mtw_ttbarlight__196->SetBinContent(5,7135.443);
   c1lep4jin2bin_mtw_ttbarlight__196->SetBinError(1,252.8836);
   c1lep4jin2bin_mtw_ttbarlight__196->SetBinError(2,418.6678);
   c1lep4jin2bin_mtw_ttbarlight__196->SetBinError(3,133.3261);
   c1lep4jin2bin_mtw_ttbarlight__196->SetBinError(4,67.93127);
   c1lep4jin2bin_mtw_ttbarlight__196->SetBinError(5,53.05076);
   c1lep4jin2bin_mtw_ttbarlight__196->SetEntries(2516401);
   c1lep4jin2bin_mtw_ttbarlight__196->SetDirectory(0);
   c1lep4jin2bin_mtw_ttbarlight__196->SetStats(0);
   c1lep4jin2bin_mtw_ttbarlight__196->SetMarkerStyle(20);
   c1lep4jin2bin_mtw_ttbarlight__196->SetMarkerSize(1.2);
   c1lep4jin2bin_mtw_ttbarlight__196->GetXaxis()->SetTitle("m_{T}(W) [GeV]");
   c1lep4jin2bin_mtw_ttbarlight__196->GetXaxis()->SetRange(1,25);
   c1lep4jin2bin_mtw_ttbarlight__196->GetXaxis()->SetLabelFont(43);
   c1lep4jin2bin_mtw_ttbarlight__196->GetXaxis()->SetLabelSize(21);
   c1lep4jin2bin_mtw_ttbarlight__196->GetXaxis()->SetTitleSize(21);
   c1lep4jin2bin_mtw_ttbarlight__196->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_mtw_ttbarlight__196->GetXaxis()->SetTitleFont(43);
   c1lep4jin2bin_mtw_ttbarlight__196->GetYaxis()->SetLabelFont(43);
   c1lep4jin2bin_mtw_ttbarlight__196->GetYaxis()->SetLabelSize(21);
   c1lep4jin2bin_mtw_ttbarlight__196->GetYaxis()->SetTitleSize(21);
   c1lep4jin2bin_mtw_ttbarlight__196->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_mtw_ttbarlight__196->GetYaxis()->SetTitleFont(43);
   c1lep4jin2bin_mtw_ttbarlight__196->GetZaxis()->SetLabelFont(43);
   c1lep4jin2bin_mtw_ttbarlight__196->GetZaxis()->SetLabelSize(21);
   c1lep4jin2bin_mtw_ttbarlight__196->GetZaxis()->SetTitleSize(21);
   c1lep4jin2bin_mtw_ttbarlight__196->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jin2bin_mtw_ttbarlight,"");
   Double_t xAxis219[5] = {0, 50, 100, 150, 200}; 
   
   TH1D *c1lep4jin2bin_mtw_uHcW__197 = new TH1D("c1lep4jin2bin_mtw_uHcW__197","",4, xAxis219);
   c1lep4jin2bin_mtw_uHcW__197->SetBinContent(1,2856.263);
   c1lep4jin2bin_mtw_uHcW__197->SetBinContent(2,7921.991);
   c1lep4jin2bin_mtw_uHcW__197->SetBinContent(3,711.7975);
   c1lep4jin2bin_mtw_uHcW__197->SetBinContent(4,127.5712);
   c1lep4jin2bin_mtw_uHcW__197->SetBinContent(5,47.45061);
   c1lep4jin2bin_mtw_uHcW__197->SetBinError(1,54.85542);
   c1lep4jin2bin_mtw_uHcW__197->SetBinError(2,90.90238);
   c1lep4jin2bin_mtw_uHcW__197->SetBinError(3,28.27039);
   c1lep4jin2bin_mtw_uHcW__197->SetBinError(4,12.04964);
   c1lep4jin2bin_mtw_uHcW__197->SetBinError(5,7.601572);
   c1lep4jin2bin_mtw_uHcW__197->SetEntries(70178);
   c1lep4jin2bin_mtw_uHcW__197->SetDirectory(0);
   c1lep4jin2bin_mtw_uHcW__197->SetStats(0);
   c1lep4jin2bin_mtw_uHcW__197->SetFillColor(2);
   c1lep4jin2bin_mtw_uHcW__197->SetLineColor(2);
   c1lep4jin2bin_mtw_uHcW__197->SetMarkerStyle(20);
   c1lep4jin2bin_mtw_uHcW__197->SetMarkerSize(1.2);
   c1lep4jin2bin_mtw_uHcW__197->GetXaxis()->SetTitle("m_{T}(W) [GeV]");
   c1lep4jin2bin_mtw_uHcW__197->GetXaxis()->SetRange(1,25);
   c1lep4jin2bin_mtw_uHcW__197->GetXaxis()->SetLabelFont(43);
   c1lep4jin2bin_mtw_uHcW__197->GetXaxis()->SetLabelSize(21);
   c1lep4jin2bin_mtw_uHcW__197->GetXaxis()->SetTitleSize(21);
   c1lep4jin2bin_mtw_uHcW__197->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_mtw_uHcW__197->GetXaxis()->SetTitleFont(43);
   c1lep4jin2bin_mtw_uHcW__197->GetYaxis()->SetLabelFont(43);
   c1lep4jin2bin_mtw_uHcW__197->GetYaxis()->SetLabelSize(21);
   c1lep4jin2bin_mtw_uHcW__197->GetYaxis()->SetTitleSize(21);
   c1lep4jin2bin_mtw_uHcW__197->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jin2bin_mtw_uHcW__197->GetYaxis()->SetTitleFont(43);
   c1lep4jin2bin_mtw_uHcW__197->GetZaxis()->SetLabelFont(43);
   c1lep4jin2bin_mtw_uHcW__197->GetZaxis()->SetLabelSize(21);
   c1lep4jin2bin_mtw_uHcW__197->GetZaxis()->SetTitleSize(21);
   c1lep4jin2bin_mtw_uHcW__197->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jin2bin_mtw_uHcW,"");
   h_stack->Draw("hist same");
   
   Double_t g_totErr_fx3087[4] = {
   25,
   75,
   125,
   175};
   Double_t g_totErr_fy3087[4] = {
   234670.2,
   614763.3,
   61373.28,
   16369.26};
   Double_t g_totErr_felx3087[4] = {
   25,
   25,
   25,
   25};
   Double_t g_totErr_fely3087[4] = {
   28869.98,
   76322.91,
   8389.346,
   2521.528};
   Double_t g_totErr_fehx3087[4] = {
   25,
   25,
   25,
   25};
   Double_t g_totErr_fehy3087[4] = {
   28869.98,
   76322.91,
   8389.346,
   2521.528};
   grae = new TGraphAsymmErrors(4,g_totErr_fx3087,g_totErr_fy3087,g_totErr_felx3087,g_totErr_fehx3087,g_totErr_fely3087,g_totErr_fehy3087);
   grae->SetName("g_totErr");
   grae->SetTitle("");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(3354);
   grae->SetLineColor(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0);
   
   TH1F *Graph_g_totErr3087 = new TH1F("Graph_g_totErr3087","",100,0,220);
   Graph_g_totErr3087->SetMinimum(0);
   Graph_g_totErr3087->SetMaximum(758810.1);
   Graph_g_totErr3087->SetDirectory(0);
   Graph_g_totErr3087->SetStats(0);
   Graph_g_totErr3087->SetLineWidth(2);
   Graph_g_totErr3087->SetMarkerStyle(20);
   Graph_g_totErr3087->SetMarkerSize(1.2);
   Graph_g_totErr3087->GetXaxis()->SetLabelFont(43);
   Graph_g_totErr3087->GetXaxis()->SetLabelSize(21);
   Graph_g_totErr3087->GetXaxis()->SetTitleSize(21);
   Graph_g_totErr3087->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_totErr3087->GetXaxis()->SetTitleFont(43);
   Graph_g_totErr3087->GetYaxis()->SetLabelFont(43);
   Graph_g_totErr3087->GetYaxis()->SetLabelSize(21);
   Graph_g_totErr3087->GetYaxis()->SetTitleSize(21);
   Graph_g_totErr3087->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_totErr3087->GetYaxis()->SetTitleFont(43);
   Graph_g_totErr3087->GetZaxis()->SetLabelFont(43);
   Graph_g_totErr3087->GetZaxis()->SetLabelSize(21);
   Graph_g_totErr3087->GetZaxis()->SetTitleSize(21);
   Graph_g_totErr3087->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_totErr3087);
   
   grae->Draw("e2");
   
   Double_t Graph_from_c1lep4jin2bin_mtw_Data_fx3088[4] = {
   25,
   75,
   125,
   175};
   Double_t Graph_from_c1lep4jin2bin_mtw_Data_fy3088[4] = {
   220566,
   591327,
   60561,
   16206};
   Double_t Graph_from_c1lep4jin2bin_mtw_Data_felx3088[4] = {
   24.95,
   24.95,
   24.95,
   24.95};
   Double_t Graph_from_c1lep4jin2bin_mtw_Data_fely3088[4] = {
   469.6445,
   768.9779,
   246.0914,
   127.3028};
   Double_t Graph_from_c1lep4jin2bin_mtw_Data_fehx3088[4] = {
   25,
   25,
   25,
   25};
   Double_t Graph_from_c1lep4jin2bin_mtw_Data_fehy3088[4] = {
   469.6445,
   768.9779,
   246.0914,
   127.3028};
   grae = new TGraphAsymmErrors(4,Graph_from_c1lep4jin2bin_mtw_Data_fx3088,Graph_from_c1lep4jin2bin_mtw_Data_fy3088,Graph_from_c1lep4jin2bin_mtw_Data_felx3088,Graph_from_c1lep4jin2bin_mtw_Data_fehx3088,Graph_from_c1lep4jin2bin_mtw_Data_fely3088,Graph_from_c1lep4jin2bin_mtw_Data_fehy3088);
   grae->SetName("Graph_from_c1lep4jin2bin_mtw_Data");
   grae->SetTitle("");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_c1lep4jin2bin_mtw_Data3088 = new TH1F("Graph_Graph_from_c1lep4jin2bin_mtw_Data3088","",100,0,219.995);
   Graph_Graph_from_c1lep4jin2bin_mtw_Data3088->SetMinimum(0);
   Graph_Graph_from_c1lep4jin2bin_mtw_Data3088->SetMaximum(649697.7);
   Graph_Graph_from_c1lep4jin2bin_mtw_Data3088->SetDirectory(0);
   Graph_Graph_from_c1lep4jin2bin_mtw_Data3088->SetStats(0);
   Graph_Graph_from_c1lep4jin2bin_mtw_Data3088->SetLineWidth(2);
   Graph_Graph_from_c1lep4jin2bin_mtw_Data3088->SetMarkerStyle(20);
   Graph_Graph_from_c1lep4jin2bin_mtw_Data3088->SetMarkerSize(1.2);
   Graph_Graph_from_c1lep4jin2bin_mtw_Data3088->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep4jin2bin_mtw_Data3088->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep4jin2bin_mtw_Data3088->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep4jin2bin_mtw_Data3088->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep4jin2bin_mtw_Data3088->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep4jin2bin_mtw_Data3088->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep4jin2bin_mtw_Data3088->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep4jin2bin_mtw_Data3088->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep4jin2bin_mtw_Data3088->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep4jin2bin_mtw_Data3088->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep4jin2bin_mtw_Data3088->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep4jin2bin_mtw_Data3088->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep4jin2bin_mtw_Data3088->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep4jin2bin_mtw_Data3088->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_c1lep4jin2bin_mtw_Data3088);
   
   grae->Draw("ep1 ");
   Double_t xAxis220[5] = {0, 50, 100, 150, 200}; 
   
   TH1D *h_dummy_copy__198 = new TH1D("h_dummy_copy__198","",4, xAxis220);
   h_dummy_copy__198->SetEntries(1.123258e+07);
   h_dummy_copy__198->SetDirectory(0);
   h_dummy_copy__198->SetStats(0);
   h_dummy_copy__198->SetMarkerStyle(20);
   h_dummy_copy__198->SetMarkerSize(1.2);
   h_dummy_copy__198->GetXaxis()->SetTitle("m_{T}^{W} [GeV]");
   h_dummy_copy__198->GetXaxis()->SetRange(1,25);
   h_dummy_copy__198->GetXaxis()->SetLabelFont(43);
   h_dummy_copy__198->GetXaxis()->SetLabelSize(21);
   h_dummy_copy__198->GetXaxis()->SetTitleSize(21);
   h_dummy_copy__198->GetXaxis()->SetTitleOffset(1.4);
   h_dummy_copy__198->GetXaxis()->SetTitleFont(43);
   h_dummy_copy__198->GetYaxis()->SetTitle("Events / 50 GeV");
   h_dummy_copy__198->GetYaxis()->SetLabelFont(43);
   h_dummy_copy__198->GetYaxis()->SetLabelSize(16.8);
   h_dummy_copy__198->GetYaxis()->SetTitleSize(21);
   h_dummy_copy__198->GetYaxis()->SetTitleOffset(2.4);
   h_dummy_copy__198->GetYaxis()->SetTitleFont(43);
   h_dummy_copy__198->GetZaxis()->SetLabelFont(43);
   h_dummy_copy__198->GetZaxis()->SetLabelSize(21);
   h_dummy_copy__198->GetZaxis()->SetTitleSize(21);
   h_dummy_copy__198->GetZaxis()->SetTitleFont(43);
   h_dummy_copy__198->Draw("sameaxis");
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
   TLegendEntry *entry=leg->AddEntry("c1lep4jin2bin_mtw_Data","Data","lep");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep4jin2bin_mtw_uHcW","t#bar{t}#rightarrowWbHc (BR=1%)","f");
   entry->SetFillColor(2);
   entry->SetFillStyle(1001);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep4jin2bin_mtw_ttbarlight","t#bar{t}+light","f");
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep4jin2bin_mtw_ttbarcc","t#bar{t}+cc","f");

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
   entry=leg->AddEntry("c1lep4jin2bin_mtw_ttbarbb","t#bar{t}+bb","f");

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
   entry=leg->AddEntry("c1lep4jin2bin_mtw_topEW","Non-t#bar{t}","f");

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
   c_c1lep4jin2bin_mtw->cd();
   c_c1lep4jin2bin_mtw->Modified();
   c_c1lep4jin2bin_mtw->cd();
   c_c1lep4jin2bin_mtw->SetSelected(c_c1lep4jin2bin_mtw);
}
