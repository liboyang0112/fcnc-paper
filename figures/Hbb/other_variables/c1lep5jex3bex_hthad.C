void c1lep5jex3bex_hthad()
{
//=========Macro generated from canvas: c_c1lep5jex3bex_hthad/c_c1lep5jex3bex_hthad
//=========  (Thu Jul 19 17:38:04 2018) by ROOT version6.04/14
   TCanvas *c_c1lep5jex3bex_hthad = new TCanvas("c_c1lep5jex3bex_hthad", "c_c1lep5jex3bex_hthad",0,0,600,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c_c1lep5jex3bex_hthad->SetHighLightColor(2);
   c_c1lep5jex3bex_hthad->Range(0,0,1,1);
   c_c1lep5jex3bex_hthad->SetFillColor(0);
   c_c1lep5jex3bex_hthad->SetBorderMode(0);
   c_c1lep5jex3bex_hthad->SetBorderSize(2);
   c_c1lep5jex3bex_hthad->SetTickx(1);
   c_c1lep5jex3bex_hthad->SetTicky(1);
   c_c1lep5jex3bex_hthad->SetLeftMargin(0.16);
   c_c1lep5jex3bex_hthad->SetRightMargin(0.05);
   c_c1lep5jex3bex_hthad->SetTopMargin(0.05);
   c_c1lep5jex3bex_hthad->SetBottomMargin(0.16);
   c_c1lep5jex3bex_hthad->SetFrameBorderMode(0);
  
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
   Double_t xAxis151[8] = {100, 200, 300, 400, 500, 600, 700, 800}; 
   
   TH1D *h_dummy2__136 = new TH1D("h_dummy2__136","Data/MC",7, xAxis151);
   h_dummy2__136->SetMinimum(0.5);
   h_dummy2__136->SetMaximum(1.5);
   h_dummy2__136->SetEntries(1363533);
   h_dummy2__136->SetDirectory(0);
   h_dummy2__136->SetStats(0);
   h_dummy2__136->SetMarkerStyle(20);
   h_dummy2__136->SetMarkerSize(1.2);
   h_dummy2__136->GetXaxis()->SetTitle("H_{T}^{had.} [GeV]");
   h_dummy2__136->GetXaxis()->SetRange(1,100);
   h_dummy2__136->GetXaxis()->SetLabelFont(43);
   h_dummy2__136->GetXaxis()->SetLabelOffset(0.025);
   h_dummy2__136->GetXaxis()->SetLabelSize(16.8);
   h_dummy2__136->GetXaxis()->SetTitleSize(21);
   h_dummy2__136->GetXaxis()->SetTitleOffset(5.05);
   h_dummy2__136->GetXaxis()->SetTitleFont(43);
   h_dummy2__136->GetYaxis()->SetTitle("Data / Bkg");
   h_dummy2__136->GetYaxis()->SetNdivisions(-504);
   h_dummy2__136->GetYaxis()->SetLabelFont(43);
   h_dummy2__136->GetYaxis()->SetLabelOffset(0.02);
   h_dummy2__136->GetYaxis()->SetLabelSize(16.8);
   h_dummy2__136->GetYaxis()->SetTitleSize(21);
   h_dummy2__136->GetYaxis()->SetTitleOffset(2.4);
   h_dummy2__136->GetYaxis()->SetTitleFont(43);
   h_dummy2__136->GetZaxis()->SetLabelFont(43);
   h_dummy2__136->GetZaxis()->SetLabelSize(21);
   h_dummy2__136->GetZaxis()->SetTitleSize(21);
   h_dummy2__136->GetZaxis()->SetTitleFont(43);
   h_dummy2__136->Draw("HIST");
   
   Double_t Graph_from_h_ratio_fx3061[7] = {
   150,
   250,
   350,
   450,
   550,
   650,
   750};
   Double_t Graph_from_h_ratio_fy3061[7] = {
   1.3984,
   1.196262,
   1.136957,
   1.14862,
   1.114734,
   1.018172,
   1.09122};
   Double_t Graph_from_h_ratio_felx3061[7] = {
   49.9,
   49.9,
   49.9,
   49.9,
   49.9,
   49.9,
   49.9};
   Double_t Graph_from_h_ratio_fely3061[7] = {
   0.08197566,
   0.018943,
   0.01858131,
   0.02600445,
   0.03740803,
   0.05084506,
   0.07407685};
   Double_t Graph_from_h_ratio_fehx3061[7] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t Graph_from_h_ratio_fehy3061[7] = {
   0.08197566,
   0.018943,
   0.01858131,
   0.02600445,
   0.03740803,
   0.05084506,
   0.07407685};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(7,Graph_from_h_ratio_fx3061,Graph_from_h_ratio_fy3061,Graph_from_h_ratio_felx3061,Graph_from_h_ratio_fehx3061,Graph_from_h_ratio_fely3061,Graph_from_h_ratio_fehy3061);
   grae->SetName("Graph_from_h_ratio");
   grae->SetTitle("");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(24);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_h_ratio3061 = new TH1F("Graph_Graph_from_h_ratio3061","",100,30.11,869.99);
   Graph_Graph_from_h_ratio3061->SetMinimum(0.9160216);
   Graph_Graph_from_h_ratio3061->SetMaximum(1.531681);
   Graph_Graph_from_h_ratio3061->SetDirectory(0);
   Graph_Graph_from_h_ratio3061->SetStats(0);
   Graph_Graph_from_h_ratio3061->SetLineWidth(2);
   Graph_Graph_from_h_ratio3061->SetMarkerStyle(20);
   Graph_Graph_from_h_ratio3061->SetMarkerSize(1.2);
   Graph_Graph_from_h_ratio3061->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3061->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3061->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3061->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3061->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3061->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3061->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3061->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3061->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3061->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3061->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3061->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3061->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3061->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_h_ratio3061);
   
   grae->Draw("pe0");
   TLine *line = new TLine(100,1,800,1);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t g_ratio2_fx3062[7] = {
   150,
   250,
   350,
   450,
   550,
   650,
   750};
   Double_t g_ratio2_fy3062[7] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t g_ratio2_felx3062[7] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t g_ratio2_fely3062[7] = {
   0.2710719,
   0.2071986,
   0.1877026,
   0.1813409,
   0.1821406,
   0.1991974,
   0.218219};
   Double_t g_ratio2_fehx3062[7] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t g_ratio2_fehy3062[7] = {
   0.2710719,
   0.2071986,
   0.1877026,
   0.1813409,
   0.1821406,
   0.1991974,
   0.218219};
   grae = new TGraphAsymmErrors(7,g_ratio2_fx3062,g_ratio2_fy3062,g_ratio2_felx3062,g_ratio2_fehx3062,g_ratio2_fely3062,g_ratio2_fehy3062);
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
   
   TH1F *Graph_g_ratio23062 = new TH1F("Graph_g_ratio23062","",100,30,870);
   Graph_g_ratio23062->SetMinimum(0.6747137);
   Graph_g_ratio23062->SetMaximum(1.325286);
   Graph_g_ratio23062->SetDirectory(0);
   Graph_g_ratio23062->SetStats(0);
   Graph_g_ratio23062->SetLineWidth(2);
   Graph_g_ratio23062->SetMarkerStyle(20);
   Graph_g_ratio23062->SetMarkerSize(1.2);
   Graph_g_ratio23062->GetXaxis()->SetLabelFont(43);
   Graph_g_ratio23062->GetXaxis()->SetLabelSize(21);
   Graph_g_ratio23062->GetXaxis()->SetTitleSize(21);
   Graph_g_ratio23062->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23062->GetXaxis()->SetTitleFont(43);
   Graph_g_ratio23062->GetYaxis()->SetLabelFont(43);
   Graph_g_ratio23062->GetYaxis()->SetLabelSize(21);
   Graph_g_ratio23062->GetYaxis()->SetTitleSize(21);
   Graph_g_ratio23062->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23062->GetYaxis()->SetTitleFont(43);
   Graph_g_ratio23062->GetZaxis()->SetLabelFont(43);
   Graph_g_ratio23062->GetZaxis()->SetLabelSize(21);
   Graph_g_ratio23062->GetZaxis()->SetTitleSize(21);
   Graph_g_ratio23062->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_ratio23062);
   
   grae->Draw("e2");
   Double_t xAxis152[8] = {100, 200, 300, 400, 500, 600, 700, 800}; 
   
   TH1D *h_dummy2_copy__137 = new TH1D("h_dummy2_copy__137","Data/MC",7, xAxis152);
   h_dummy2_copy__137->SetMinimum(0.5);
   h_dummy2_copy__137->SetMaximum(1.5);
   h_dummy2_copy__137->SetEntries(1363533);
   h_dummy2_copy__137->SetDirectory(0);
   h_dummy2_copy__137->SetStats(0);
   h_dummy2_copy__137->SetMarkerStyle(20);
   h_dummy2_copy__137->SetMarkerSize(1.2);
   h_dummy2_copy__137->GetXaxis()->SetTitle("H_{T}^{had.} [GeV]");
   h_dummy2_copy__137->GetXaxis()->SetRange(1,100);
   h_dummy2_copy__137->GetXaxis()->SetLabelFont(43);
   h_dummy2_copy__137->GetXaxis()->SetLabelOffset(0.025);
   h_dummy2_copy__137->GetXaxis()->SetLabelSize(16.8);
   h_dummy2_copy__137->GetXaxis()->SetTitleSize(21);
   h_dummy2_copy__137->GetXaxis()->SetTitleOffset(5.05);
   h_dummy2_copy__137->GetXaxis()->SetTitleFont(43);
   h_dummy2_copy__137->GetYaxis()->SetTitle("Data / Bkg");
   h_dummy2_copy__137->GetYaxis()->SetNdivisions(-504);
   h_dummy2_copy__137->GetYaxis()->SetLabelFont(43);
   h_dummy2_copy__137->GetYaxis()->SetLabelOffset(0.02);
   h_dummy2_copy__137->GetYaxis()->SetLabelSize(16.8);
   h_dummy2_copy__137->GetYaxis()->SetTitleSize(21);
   h_dummy2_copy__137->GetYaxis()->SetTitleOffset(2.4);
   h_dummy2_copy__137->GetYaxis()->SetTitleFont(43);
   h_dummy2_copy__137->GetZaxis()->SetLabelFont(43);
   h_dummy2_copy__137->GetZaxis()->SetLabelSize(21);
   h_dummy2_copy__137->GetZaxis()->SetTitleSize(21);
   h_dummy2_copy__137->GetZaxis()->SetTitleFont(43);
   h_dummy2_copy__137->Draw("sameaxis");
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
   c_c1lep5jex3bex_hthad->cd();
  
// ------------>Primitives in pad: pad0
   TPad *pad0 = new TPad("pad0", "pad0",0,0.2,1,1);
   pad0->Draw();
   pad0->cd();
   pad0->Range(-20.98765,-857.8907,843.2099,7721.016);
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
   Double_t xAxis153[8] = {100, 200, 300, 400, 500, 600, 700, 800}; 
   
   TH1D *h_dummy__138 = new TH1D("h_dummy__138","",7, xAxis153);
   h_dummy__138->SetMinimum(0);
   h_dummy__138->SetMaximum(7292.071);
   h_dummy__138->SetEntries(1363533);
   h_dummy__138->SetDirectory(0);
   h_dummy__138->SetStats(0);
   h_dummy__138->SetMarkerStyle(20);
   h_dummy__138->SetMarkerSize(1.2);
   h_dummy__138->GetXaxis()->SetRange(1,100);
   h_dummy__138->GetXaxis()->SetLabelFont(43);
   h_dummy__138->GetXaxis()->SetLabelSize(0);
   h_dummy__138->GetXaxis()->SetTitleSize(21);
   h_dummy__138->GetXaxis()->SetTitleOffset(1.4);
   h_dummy__138->GetXaxis()->SetTitleFont(43);
   h_dummy__138->GetYaxis()->SetTitle("Events / 100 GeV");
   h_dummy__138->GetYaxis()->SetLabelFont(43);
   h_dummy__138->GetYaxis()->SetLabelSize(16.8);
   h_dummy__138->GetYaxis()->SetTitleSize(21);
   h_dummy__138->GetYaxis()->SetTitleOffset(2.4);
   h_dummy__138->GetYaxis()->SetTitleFont(43);
   h_dummy__138->GetZaxis()->SetLabelFont(43);
   h_dummy__138->GetZaxis()->SetLabelSize(21);
   h_dummy__138->GetZaxis()->SetTitleSize(21);
   h_dummy__138->GetZaxis()->SetTitleFont(43);
   h_dummy__138->Draw("HIST");
   
   THStack *h_stack = new THStack();
   h_stack->SetName("h_stack");
   h_stack->SetTitle("h_stack");
   Double_t xAxis154[8] = {100, 200, 300, 400, 500, 600, 700, 800}; 
   
   TH1F *h_stack_stack_16 = new TH1F("h_stack_stack_16","h_stack",7, xAxis154);
   h_stack_stack_16->SetMinimum(0);
   h_stack_stack_16->SetMaximum(3916.674);
   h_stack_stack_16->SetDirectory(0);
   h_stack_stack_16->SetStats(0);
   h_stack_stack_16->SetLineWidth(2);
   h_stack_stack_16->SetMarkerStyle(20);
   h_stack_stack_16->SetMarkerSize(1.2);
   h_stack_stack_16->GetXaxis()->SetLabelFont(43);
   h_stack_stack_16->GetXaxis()->SetLabelSize(21);
   h_stack_stack_16->GetXaxis()->SetTitleSize(21);
   h_stack_stack_16->GetXaxis()->SetTitleOffset(1.4);
   h_stack_stack_16->GetXaxis()->SetTitleFont(43);
   h_stack_stack_16->GetYaxis()->SetLabelFont(43);
   h_stack_stack_16->GetYaxis()->SetLabelSize(21);
   h_stack_stack_16->GetYaxis()->SetTitleSize(21);
   h_stack_stack_16->GetYaxis()->SetTitleOffset(1.4);
   h_stack_stack_16->GetYaxis()->SetTitleFont(43);
   h_stack_stack_16->GetZaxis()->SetLabelFont(43);
   h_stack_stack_16->GetZaxis()->SetLabelSize(21);
   h_stack_stack_16->GetZaxis()->SetTitleSize(21);
   h_stack_stack_16->GetZaxis()->SetTitleFont(43);
   h_stack->SetHistogram(h_stack_stack_16);
   
   Double_t xAxis155[8] = {100, 200, 300, 400, 500, 600, 700, 800}; 
   
   TH1D *c1lep5jex3bex_hthad_topEW__139 = new TH1D("c1lep5jex3bex_hthad_topEW__139","",7, xAxis155);
   c1lep5jex3bex_hthad_topEW__139->SetBinContent(1,52.40949);
   c1lep5jex3bex_hthad_topEW__139->SetBinContent(2,429.1053);
   c1lep5jex3bex_hthad_topEW__139->SetBinContent(3,320.4012);
   c1lep5jex3bex_hthad_topEW__139->SetBinContent(4,207.5519);
   c1lep5jex3bex_hthad_topEW__139->SetBinContent(5,138.0686);
   c1lep5jex3bex_hthad_topEW__139->SetBinContent(6,77.02965);
   c1lep5jex3bex_hthad_topEW__139->SetBinContent(7,38.75269);
   c1lep5jex3bex_hthad_topEW__139->SetBinContent(8,42.48784);
   c1lep5jex3bex_hthad_topEW__139->SetBinError(1,18.06582);
   c1lep5jex3bex_hthad_topEW__139->SetBinError(2,47.54798);
   c1lep5jex3bex_hthad_topEW__139->SetBinError(3,33.06444);
   c1lep5jex3bex_hthad_topEW__139->SetBinError(4,29.41714);
   c1lep5jex3bex_hthad_topEW__139->SetBinError(5,24.6027);
   c1lep5jex3bex_hthad_topEW__139->SetBinError(6,19.58566);
   c1lep5jex3bex_hthad_topEW__139->SetBinError(7,12.61103);
   c1lep5jex3bex_hthad_topEW__139->SetBinError(8,10.79443);
   c1lep5jex3bex_hthad_topEW__139->SetEntries(1334920);
   c1lep5jex3bex_hthad_topEW__139->SetDirectory(0);
   c1lep5jex3bex_hthad_topEW__139->SetStats(0);

   ci = TColor::GetColor("#66cc66");
   c1lep5jex3bex_hthad_topEW__139->SetFillColor(ci);
   c1lep5jex3bex_hthad_topEW__139->SetMarkerStyle(20);
   c1lep5jex3bex_hthad_topEW__139->SetMarkerSize(1.2);
   c1lep5jex3bex_hthad_topEW__139->GetXaxis()->SetTitle("H_{T}^{had} [GeV]");
   c1lep5jex3bex_hthad_topEW__139->GetXaxis()->SetRange(1,100);
   c1lep5jex3bex_hthad_topEW__139->GetXaxis()->SetLabelFont(43);
   c1lep5jex3bex_hthad_topEW__139->GetXaxis()->SetLabelSize(21);
   c1lep5jex3bex_hthad_topEW__139->GetXaxis()->SetTitleSize(21);
   c1lep5jex3bex_hthad_topEW__139->GetXaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_hthad_topEW__139->GetXaxis()->SetTitleFont(43);
   c1lep5jex3bex_hthad_topEW__139->GetYaxis()->SetLabelFont(43);
   c1lep5jex3bex_hthad_topEW__139->GetYaxis()->SetLabelSize(21);
   c1lep5jex3bex_hthad_topEW__139->GetYaxis()->SetTitleSize(21);
   c1lep5jex3bex_hthad_topEW__139->GetYaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_hthad_topEW__139->GetYaxis()->SetTitleFont(43);
   c1lep5jex3bex_hthad_topEW__139->GetZaxis()->SetLabelFont(43);
   c1lep5jex3bex_hthad_topEW__139->GetZaxis()->SetLabelSize(21);
   c1lep5jex3bex_hthad_topEW__139->GetZaxis()->SetTitleSize(21);
   c1lep5jex3bex_hthad_topEW__139->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep5jex3bex_hthad_topEW,"");
   Double_t xAxis156[8] = {100, 200, 300, 400, 500, 600, 700, 800}; 
   
   TH1D *c1lep5jex3bex_hthad_ttbarbb__140 = new TH1D("c1lep5jex3bex_hthad_ttbarbb__140","",7, xAxis156);
   c1lep5jex3bex_hthad_ttbarbb__140->SetBinContent(1,61.34982);
   c1lep5jex3bex_hthad_ttbarbb__140->SetBinContent(2,1298.996);
   c1lep5jex3bex_hthad_ttbarbb__140->SetBinContent(3,1472.225);
   c1lep5jex3bex_hthad_ttbarbb__140->SetBinContent(4,788.9827);
   c1lep5jex3bex_hthad_ttbarbb__140->SetBinContent(5,351.3106);
   c1lep5jex3bex_hthad_ttbarbb__140->SetBinContent(6,166.2009);
   c1lep5jex3bex_hthad_ttbarbb__140->SetBinContent(7,93.1722);
   c1lep5jex3bex_hthad_ttbarbb__140->SetBinContent(8,89.96978);
   c1lep5jex3bex_hthad_ttbarbb__140->SetBinError(1,4.187678);
   c1lep5jex3bex_hthad_ttbarbb__140->SetBinError(2,23.06311);
   c1lep5jex3bex_hthad_ttbarbb__140->SetBinError(3,24.90003);
   c1lep5jex3bex_hthad_ttbarbb__140->SetBinError(4,17.67922);
   c1lep5jex3bex_hthad_ttbarbb__140->SetBinError(5,11.88174);
   c1lep5jex3bex_hthad_ttbarbb__140->SetBinError(6,7.933785);
   c1lep5jex3bex_hthad_ttbarbb__140->SetBinError(7,5.872308);
   c1lep5jex3bex_hthad_ttbarbb__140->SetBinError(8,5.748891);
   c1lep5jex3bex_hthad_ttbarbb__140->SetEntries(15468);
   c1lep5jex3bex_hthad_ttbarbb__140->SetDirectory(0);
   c1lep5jex3bex_hthad_ttbarbb__140->SetStats(0);

   ci = TColor::GetColor("#6666cc");
   c1lep5jex3bex_hthad_ttbarbb__140->SetFillColor(ci);
   c1lep5jex3bex_hthad_ttbarbb__140->SetMarkerStyle(20);
   c1lep5jex3bex_hthad_ttbarbb__140->SetMarkerSize(1.2);
   c1lep5jex3bex_hthad_ttbarbb__140->GetXaxis()->SetTitle("H_{T}^{had} [GeV]");
   c1lep5jex3bex_hthad_ttbarbb__140->GetXaxis()->SetRange(1,100);
   c1lep5jex3bex_hthad_ttbarbb__140->GetXaxis()->SetLabelFont(43);
   c1lep5jex3bex_hthad_ttbarbb__140->GetXaxis()->SetLabelSize(21);
   c1lep5jex3bex_hthad_ttbarbb__140->GetXaxis()->SetTitleSize(21);
   c1lep5jex3bex_hthad_ttbarbb__140->GetXaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_hthad_ttbarbb__140->GetXaxis()->SetTitleFont(43);
   c1lep5jex3bex_hthad_ttbarbb__140->GetYaxis()->SetLabelFont(43);
   c1lep5jex3bex_hthad_ttbarbb__140->GetYaxis()->SetLabelSize(21);
   c1lep5jex3bex_hthad_ttbarbb__140->GetYaxis()->SetTitleSize(21);
   c1lep5jex3bex_hthad_ttbarbb__140->GetYaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_hthad_ttbarbb__140->GetYaxis()->SetTitleFont(43);
   c1lep5jex3bex_hthad_ttbarbb__140->GetZaxis()->SetLabelFont(43);
   c1lep5jex3bex_hthad_ttbarbb__140->GetZaxis()->SetLabelSize(21);
   c1lep5jex3bex_hthad_ttbarbb__140->GetZaxis()->SetTitleSize(21);
   c1lep5jex3bex_hthad_ttbarbb__140->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep5jex3bex_hthad_ttbarbb,"");
   Double_t xAxis157[8] = {100, 200, 300, 400, 500, 600, 700, 800}; 
   
   TH1D *c1lep5jex3bex_hthad_ttbarcc__141 = new TH1D("c1lep5jex3bex_hthad_ttbarcc__141","",7, xAxis157);
   c1lep5jex3bex_hthad_ttbarcc__141->SetBinContent(1,24.81325);
   c1lep5jex3bex_hthad_ttbarcc__141->SetBinContent(2,406.4519);
   c1lep5jex3bex_hthad_ttbarcc__141->SetBinContent(3,443.9833);
   c1lep5jex3bex_hthad_ttbarcc__141->SetBinContent(4,225.2943);
   c1lep5jex3bex_hthad_ttbarcc__141->SetBinContent(5,100.2684);
   c1lep5jex3bex_hthad_ttbarcc__141->SetBinContent(6,60.16603);
   c1lep5jex3bex_hthad_ttbarcc__141->SetBinContent(7,26.08524);
   c1lep5jex3bex_hthad_ttbarcc__141->SetBinContent(8,33.76591);
   c1lep5jex3bex_hthad_ttbarcc__141->SetBinError(1,4.468907);
   c1lep5jex3bex_hthad_ttbarcc__141->SetBinError(2,13.47151);
   c1lep5jex3bex_hthad_ttbarcc__141->SetBinError(3,14.55756);
   c1lep5jex3bex_hthad_ttbarcc__141->SetBinError(4,10.22452);
   c1lep5jex3bex_hthad_ttbarcc__141->SetBinError(5,6.795955);
   c1lep5jex3bex_hthad_ttbarcc__141->SetBinError(6,6.036321);
   c1lep5jex3bex_hthad_ttbarcc__141->SetBinError(7,4.279319);
   c1lep5jex3bex_hthad_ttbarcc__141->SetBinError(8,6.12368);
   c1lep5jex3bex_hthad_ttbarcc__141->SetEntries(4006);
   c1lep5jex3bex_hthad_ttbarcc__141->SetDirectory(0);
   c1lep5jex3bex_hthad_ttbarcc__141->SetStats(0);

   ci = TColor::GetColor("#ccccff");
   c1lep5jex3bex_hthad_ttbarcc__141->SetFillColor(ci);
   c1lep5jex3bex_hthad_ttbarcc__141->SetMarkerStyle(20);
   c1lep5jex3bex_hthad_ttbarcc__141->SetMarkerSize(1.2);
   c1lep5jex3bex_hthad_ttbarcc__141->GetXaxis()->SetTitle("H_{T}^{had} [GeV]");
   c1lep5jex3bex_hthad_ttbarcc__141->GetXaxis()->SetRange(1,100);
   c1lep5jex3bex_hthad_ttbarcc__141->GetXaxis()->SetLabelFont(43);
   c1lep5jex3bex_hthad_ttbarcc__141->GetXaxis()->SetLabelSize(21);
   c1lep5jex3bex_hthad_ttbarcc__141->GetXaxis()->SetTitleSize(21);
   c1lep5jex3bex_hthad_ttbarcc__141->GetXaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_hthad_ttbarcc__141->GetXaxis()->SetTitleFont(43);
   c1lep5jex3bex_hthad_ttbarcc__141->GetYaxis()->SetLabelFont(43);
   c1lep5jex3bex_hthad_ttbarcc__141->GetYaxis()->SetLabelSize(21);
   c1lep5jex3bex_hthad_ttbarcc__141->GetYaxis()->SetTitleSize(21);
   c1lep5jex3bex_hthad_ttbarcc__141->GetYaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_hthad_ttbarcc__141->GetYaxis()->SetTitleFont(43);
   c1lep5jex3bex_hthad_ttbarcc__141->GetZaxis()->SetLabelFont(43);
   c1lep5jex3bex_hthad_ttbarcc__141->GetZaxis()->SetLabelSize(21);
   c1lep5jex3bex_hthad_ttbarcc__141->GetZaxis()->SetTitleSize(21);
   c1lep5jex3bex_hthad_ttbarcc__141->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep5jex3bex_hthad_ttbarcc,"");
   Double_t xAxis158[8] = {100, 200, 300, 400, 500, 600, 700, 800}; 
   
   TH1D *c1lep5jex3bex_hthad_ttbarlight__142 = new TH1D("c1lep5jex3bex_hthad_ttbarlight__142","",7, xAxis158);
   c1lep5jex3bex_hthad_ttbarlight__142->SetBinContent(1,69.52239);
   c1lep5jex3bex_hthad_ttbarlight__142->SetBinContent(2,1199.165);
   c1lep5jex3bex_hthad_ttbarlight__142->SetBinContent(3,1056.39);
   c1lep5jex3bex_hthad_ttbarlight__142->SetBinContent(4,476.7318);
   c1lep5jex3bex_hthad_ttbarlight__142->SetBinContent(5,206.9549);
   c1lep5jex3bex_hthad_ttbarlight__142->SetBinContent(6,90.44671);
   c1lep5jex3bex_hthad_ttbarlight__142->SetBinContent(7,40.84983);
   c1lep5jex3bex_hthad_ttbarlight__142->SetBinContent(8,46.66413);
   c1lep5jex3bex_hthad_ttbarlight__142->SetBinError(1,6.179325);
   c1lep5jex3bex_hthad_ttbarlight__142->SetBinError(2,27.16894);
   c1lep5jex3bex_hthad_ttbarlight__142->SetBinError(3,22.87245);
   c1lep5jex3bex_hthad_ttbarlight__142->SetBinError(4,16.8941);
   c1lep5jex3bex_hthad_ttbarlight__142->SetBinError(5,10.06308);
   c1lep5jex3bex_hthad_ttbarlight__142->SetBinError(6,6.264103);
   c1lep5jex3bex_hthad_ttbarlight__142->SetBinError(7,4.275843);
   c1lep5jex3bex_hthad_ttbarlight__142->SetBinError(8,4.919562);
   c1lep5jex3bex_hthad_ttbarlight__142->SetEntries(9132);
   c1lep5jex3bex_hthad_ttbarlight__142->SetDirectory(0);
   c1lep5jex3bex_hthad_ttbarlight__142->SetStats(0);
   c1lep5jex3bex_hthad_ttbarlight__142->SetMarkerStyle(20);
   c1lep5jex3bex_hthad_ttbarlight__142->SetMarkerSize(1.2);
   c1lep5jex3bex_hthad_ttbarlight__142->GetXaxis()->SetTitle("H_{T}^{had} [GeV]");
   c1lep5jex3bex_hthad_ttbarlight__142->GetXaxis()->SetRange(1,100);
   c1lep5jex3bex_hthad_ttbarlight__142->GetXaxis()->SetLabelFont(43);
   c1lep5jex3bex_hthad_ttbarlight__142->GetXaxis()->SetLabelSize(21);
   c1lep5jex3bex_hthad_ttbarlight__142->GetXaxis()->SetTitleSize(21);
   c1lep5jex3bex_hthad_ttbarlight__142->GetXaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_hthad_ttbarlight__142->GetXaxis()->SetTitleFont(43);
   c1lep5jex3bex_hthad_ttbarlight__142->GetYaxis()->SetLabelFont(43);
   c1lep5jex3bex_hthad_ttbarlight__142->GetYaxis()->SetLabelSize(21);
   c1lep5jex3bex_hthad_ttbarlight__142->GetYaxis()->SetTitleSize(21);
   c1lep5jex3bex_hthad_ttbarlight__142->GetYaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_hthad_ttbarlight__142->GetYaxis()->SetTitleFont(43);
   c1lep5jex3bex_hthad_ttbarlight__142->GetZaxis()->SetLabelFont(43);
   c1lep5jex3bex_hthad_ttbarlight__142->GetZaxis()->SetLabelSize(21);
   c1lep5jex3bex_hthad_ttbarlight__142->GetZaxis()->SetTitleSize(21);
   c1lep5jex3bex_hthad_ttbarlight__142->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep5jex3bex_hthad_ttbarlight,"");
   Double_t xAxis159[8] = {100, 200, 300, 400, 500, 600, 700, 800}; 
   
   TH1D *c1lep5jex3bex_hthad_uHcW__143 = new TH1D("c1lep5jex3bex_hthad_uHcW__143","",7, xAxis159);
   c1lep5jex3bex_hthad_uHcW__143->SetBinContent(1,23.85185);
   c1lep5jex3bex_hthad_uHcW__143->SetBinContent(2,396.4486);
   c1lep5jex3bex_hthad_uHcW__143->SetBinContent(3,337.2534);
   c1lep5jex3bex_hthad_uHcW__143->SetBinContent(4,138.2639);
   c1lep5jex3bex_hthad_uHcW__143->SetBinContent(5,62.95678);
   c1lep5jex3bex_hthad_uHcW__143->SetBinContent(6,22.97177);
   c1lep5jex3bex_hthad_uHcW__143->SetBinContent(7,15.55223);
   c1lep5jex3bex_hthad_uHcW__143->SetBinContent(8,14.50428);
   c1lep5jex3bex_hthad_uHcW__143->SetBinError(1,5.90269);
   c1lep5jex3bex_hthad_uHcW__143->SetBinError(2,18.42083);
   c1lep5jex3bex_hthad_uHcW__143->SetBinError(3,18.20428);
   c1lep5jex3bex_hthad_uHcW__143->SetBinError(4,11.84465);
   c1lep5jex3bex_hthad_uHcW__143->SetBinError(5,7.68533);
   c1lep5jex3bex_hthad_uHcW__143->SetBinError(6,5.824471);
   c1lep5jex3bex_hthad_uHcW__143->SetBinError(7,3.853487);
   c1lep5jex3bex_hthad_uHcW__143->SetBinError(8,3.972669);
   c1lep5jex3bex_hthad_uHcW__143->SetEntries(5357);
   c1lep5jex3bex_hthad_uHcW__143->SetDirectory(0);
   c1lep5jex3bex_hthad_uHcW__143->SetStats(0);
   c1lep5jex3bex_hthad_uHcW__143->SetFillColor(2);
   c1lep5jex3bex_hthad_uHcW__143->SetLineColor(2);
   c1lep5jex3bex_hthad_uHcW__143->SetMarkerStyle(20);
   c1lep5jex3bex_hthad_uHcW__143->SetMarkerSize(1.2);
   c1lep5jex3bex_hthad_uHcW__143->GetXaxis()->SetTitle("H_{T}^{had} [GeV]");
   c1lep5jex3bex_hthad_uHcW__143->GetXaxis()->SetRange(1,100);
   c1lep5jex3bex_hthad_uHcW__143->GetXaxis()->SetLabelFont(43);
   c1lep5jex3bex_hthad_uHcW__143->GetXaxis()->SetLabelSize(21);
   c1lep5jex3bex_hthad_uHcW__143->GetXaxis()->SetTitleSize(21);
   c1lep5jex3bex_hthad_uHcW__143->GetXaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_hthad_uHcW__143->GetXaxis()->SetTitleFont(43);
   c1lep5jex3bex_hthad_uHcW__143->GetYaxis()->SetLabelFont(43);
   c1lep5jex3bex_hthad_uHcW__143->GetYaxis()->SetLabelSize(21);
   c1lep5jex3bex_hthad_uHcW__143->GetYaxis()->SetTitleSize(21);
   c1lep5jex3bex_hthad_uHcW__143->GetYaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_hthad_uHcW__143->GetYaxis()->SetTitleFont(43);
   c1lep5jex3bex_hthad_uHcW__143->GetZaxis()->SetLabelFont(43);
   c1lep5jex3bex_hthad_uHcW__143->GetZaxis()->SetLabelSize(21);
   c1lep5jex3bex_hthad_uHcW__143->GetZaxis()->SetTitleSize(21);
   c1lep5jex3bex_hthad_uHcW__143->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep5jex3bex_hthad_uHcW,"");
   h_stack->Draw("hist same");
   
   Double_t g_totErr_fx3063[7] = {
   150,
   250,
   350,
   450,
   550,
   650,
   750};
   Double_t g_totErr_fy3063[7] = {
   208.095,
   3333.718,
   3292.999,
   1698.561,
   796.6025,
   393.8433,
   198.86};
   Double_t g_totErr_felx3063[7] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t g_totErr_fely3063[7] = {
   56.4087,
   690.7416,
   618.1045,
   308.0186,
   145.0937,
   78.45256,
   43.39502};
   Double_t g_totErr_fehx3063[7] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t g_totErr_fehy3063[7] = {
   56.4087,
   690.7416,
   618.1045,
   308.0186,
   145.0937,
   78.45256,
   43.39502};
   grae = new TGraphAsymmErrors(7,g_totErr_fx3063,g_totErr_fy3063,g_totErr_felx3063,g_totErr_fehx3063,g_totErr_fely3063,g_totErr_fehy3063);
   grae->SetName("g_totErr");
   grae->SetTitle("");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(3354);
   grae->SetLineColor(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0);
   
   TH1F *Graph_g_totErr3063 = new TH1F("Graph_g_totErr3063","",100,30,870);
   Graph_g_totErr3063->SetMinimum(0);
   Graph_g_totErr3063->SetMaximum(4411.736);
   Graph_g_totErr3063->SetDirectory(0);
   Graph_g_totErr3063->SetStats(0);
   Graph_g_totErr3063->SetLineWidth(2);
   Graph_g_totErr3063->SetMarkerStyle(20);
   Graph_g_totErr3063->SetMarkerSize(1.2);
   Graph_g_totErr3063->GetXaxis()->SetLabelFont(43);
   Graph_g_totErr3063->GetXaxis()->SetLabelSize(21);
   Graph_g_totErr3063->GetXaxis()->SetTitleSize(21);
   Graph_g_totErr3063->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_totErr3063->GetXaxis()->SetTitleFont(43);
   Graph_g_totErr3063->GetYaxis()->SetLabelFont(43);
   Graph_g_totErr3063->GetYaxis()->SetLabelSize(21);
   Graph_g_totErr3063->GetYaxis()->SetTitleSize(21);
   Graph_g_totErr3063->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_totErr3063->GetYaxis()->SetTitleFont(43);
   Graph_g_totErr3063->GetZaxis()->SetLabelFont(43);
   Graph_g_totErr3063->GetZaxis()->SetLabelSize(21);
   Graph_g_totErr3063->GetZaxis()->SetTitleSize(21);
   Graph_g_totErr3063->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_totErr3063);
   
   grae->Draw("e2");
   
   Double_t Graph_from_c1lep5jex3bex_hthad_Data_fx3064[7] = {
   150,
   250,
   350,
   450,
   550,
   650,
   750};
   Double_t Graph_from_c1lep5jex3bex_hthad_Data_fy3064[7] = {
   291,
   3988,
   3744,
   1951,
   888,
   401,
   217};
   Double_t Graph_from_c1lep5jex3bex_hthad_Data_felx3064[7] = {
   49.9,
   49.9,
   49.9,
   49.9,
   49.9,
   49.9,
   49.9};
   Double_t Graph_from_c1lep5jex3bex_hthad_Data_fely3064[7] = {
   17.05872,
   63.15061,
   61.18823,
   44.17013,
   29.79933,
   20.02498,
   14.73092};
   Double_t Graph_from_c1lep5jex3bex_hthad_Data_fehx3064[7] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t Graph_from_c1lep5jex3bex_hthad_Data_fehy3064[7] = {
   17.05872,
   63.15061,
   61.18823,
   44.17013,
   29.79933,
   20.02498,
   14.73092};
   grae = new TGraphAsymmErrors(7,Graph_from_c1lep5jex3bex_hthad_Data_fx3064,Graph_from_c1lep5jex3bex_hthad_Data_fy3064,Graph_from_c1lep5jex3bex_hthad_Data_felx3064,Graph_from_c1lep5jex3bex_hthad_Data_fehx3064,Graph_from_c1lep5jex3bex_hthad_Data_fely3064,Graph_from_c1lep5jex3bex_hthad_Data_fehy3064);
   grae->SetName("Graph_from_c1lep5jex3bex_hthad_Data");
   grae->SetTitle("");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_c1lep5jex3bex_hthad_Data3064 = new TH1F("Graph_Graph_from_c1lep5jex3bex_hthad_Data3064","",100,30.11,869.99);
   Graph_Graph_from_c1lep5jex3bex_hthad_Data3064->SetMinimum(0);
   Graph_Graph_from_c1lep5jex3bex_hthad_Data3064->SetMaximum(4436.039);
   Graph_Graph_from_c1lep5jex3bex_hthad_Data3064->SetDirectory(0);
   Graph_Graph_from_c1lep5jex3bex_hthad_Data3064->SetStats(0);
   Graph_Graph_from_c1lep5jex3bex_hthad_Data3064->SetLineWidth(2);
   Graph_Graph_from_c1lep5jex3bex_hthad_Data3064->SetMarkerStyle(20);
   Graph_Graph_from_c1lep5jex3bex_hthad_Data3064->SetMarkerSize(1.2);
   Graph_Graph_from_c1lep5jex3bex_hthad_Data3064->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep5jex3bex_hthad_Data3064->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep5jex3bex_hthad_Data3064->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep5jex3bex_hthad_Data3064->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep5jex3bex_hthad_Data3064->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep5jex3bex_hthad_Data3064->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep5jex3bex_hthad_Data3064->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep5jex3bex_hthad_Data3064->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep5jex3bex_hthad_Data3064->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep5jex3bex_hthad_Data3064->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep5jex3bex_hthad_Data3064->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep5jex3bex_hthad_Data3064->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep5jex3bex_hthad_Data3064->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep5jex3bex_hthad_Data3064->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_c1lep5jex3bex_hthad_Data3064);
   
   grae->Draw("ep1 ");
   Double_t xAxis160[8] = {100, 200, 300, 400, 500, 600, 700, 800}; 
   
   TH1D *h_dummy_copy__144 = new TH1D("h_dummy_copy__144","",7, xAxis160);
   h_dummy_copy__144->SetEntries(1363533);
   h_dummy_copy__144->SetDirectory(0);
   h_dummy_copy__144->SetStats(0);
   h_dummy_copy__144->SetMarkerStyle(20);
   h_dummy_copy__144->SetMarkerSize(1.2);
   h_dummy_copy__144->GetXaxis()->SetTitle("H_{T}^{had.} [GeV]");
   h_dummy_copy__144->GetXaxis()->SetRange(1,100);
   h_dummy_copy__144->GetXaxis()->SetLabelFont(43);
   h_dummy_copy__144->GetXaxis()->SetLabelSize(21);
   h_dummy_copy__144->GetXaxis()->SetTitleSize(21);
   h_dummy_copy__144->GetXaxis()->SetTitleOffset(1.4);
   h_dummy_copy__144->GetXaxis()->SetTitleFont(43);
   h_dummy_copy__144->GetYaxis()->SetTitle("Events / 100 GeV");
   h_dummy_copy__144->GetYaxis()->SetLabelFont(43);
   h_dummy_copy__144->GetYaxis()->SetLabelSize(16.8);
   h_dummy_copy__144->GetYaxis()->SetTitleSize(21);
   h_dummy_copy__144->GetYaxis()->SetTitleOffset(2.4);
   h_dummy_copy__144->GetYaxis()->SetTitleFont(43);
   h_dummy_copy__144->GetZaxis()->SetLabelFont(43);
   h_dummy_copy__144->GetZaxis()->SetLabelSize(21);
   h_dummy_copy__144->GetZaxis()->SetTitleSize(21);
   h_dummy_copy__144->GetZaxis()->SetTitleFont(43);
   h_dummy_copy__144->Draw("sameaxis");
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
   TLegendEntry *entry=leg->AddEntry("c1lep5jex3bex_hthad_Data","Data","lep");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep5jex3bex_hthad_uHcW","t#bar{t}#rightarrowWbHc (BR=1%)","f");
   entry->SetFillColor(2);
   entry->SetFillStyle(1001);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep5jex3bex_hthad_ttbarlight","t#bar{t}+light","f");
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep5jex3bex_hthad_ttbarcc","t#bar{t}+cc","f");

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
   entry=leg->AddEntry("c1lep5jex3bex_hthad_ttbarbb","t#bar{t}+bb","f");

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
   entry=leg->AddEntry("c1lep5jex3bex_hthad_topEW","Non-t#bar{t}","f");

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
   c_c1lep5jex3bex_hthad->cd();
   c_c1lep5jex3bex_hthad->Modified();
   c_c1lep5jex3bex_hthad->cd();
   c_c1lep5jex3bex_hthad->SetSelected(c_c1lep5jex3bex_hthad);
}
