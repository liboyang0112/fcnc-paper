void c1lep5jex4bin()
{
//=========Macro generated from canvas: c_c1lep5jex4bin/c_c1lep5jex4bin
//=========  (Thu Jul 19 17:38:02 2018) by ROOT version6.04/14
   TCanvas *c_c1lep5jex4bin = new TCanvas("c_c1lep5jex4bin", "c_c1lep5jex4bin",0,0,600,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c_c1lep5jex4bin->SetHighLightColor(2);
   c_c1lep5jex4bin->Range(0,0,1,1);
   c_c1lep5jex4bin->SetFillColor(0);
   c_c1lep5jex4bin->SetBorderMode(0);
   c_c1lep5jex4bin->SetBorderSize(2);
   c_c1lep5jex4bin->SetTickx(1);
   c_c1lep5jex4bin->SetTicky(1);
   c_c1lep5jex4bin->SetLeftMargin(0.16);
   c_c1lep5jex4bin->SetRightMargin(0.05);
   c_c1lep5jex4bin->SetTopMargin(0.05);
   c_c1lep5jex4bin->SetBottomMargin(0.16);
   c_c1lep5jex4bin->SetFrameBorderMode(0);
  
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
   Double_t xAxis51[3] = {0, 0.5, 1}; 
   
   TH1D *h_dummy2__46 = new TH1D("h_dummy2__46","Data/MC",2, xAxis51);
   h_dummy2__46->SetMinimum(0.5);
   h_dummy2__46->SetMaximum(1.5);
   h_dummy2__46->SetEntries(1221453);
   h_dummy2__46->SetDirectory(0);
   h_dummy2__46->SetStats(0);
   h_dummy2__46->SetMarkerStyle(20);
   h_dummy2__46->SetMarkerSize(1.2);
   h_dummy2__46->GetXaxis()->SetTitle("LH discriminant");
   h_dummy2__46->GetXaxis()->SetRange(1,20);
   h_dummy2__46->GetXaxis()->SetLabelFont(43);
   h_dummy2__46->GetXaxis()->SetLabelOffset(0.025);
   h_dummy2__46->GetXaxis()->SetLabelSize(16.8);
   h_dummy2__46->GetXaxis()->SetTitleSize(21);
   h_dummy2__46->GetXaxis()->SetTitleOffset(5.05);
   h_dummy2__46->GetXaxis()->SetTitleFont(43);
   h_dummy2__46->GetYaxis()->SetTitle("Data / Bkg");
   h_dummy2__46->GetYaxis()->SetNdivisions(-504);
   h_dummy2__46->GetYaxis()->SetLabelFont(43);
   h_dummy2__46->GetYaxis()->SetLabelOffset(0.02);
   h_dummy2__46->GetYaxis()->SetLabelSize(16.8);
   h_dummy2__46->GetYaxis()->SetTitleSize(21);
   h_dummy2__46->GetYaxis()->SetTitleOffset(2.4);
   h_dummy2__46->GetYaxis()->SetTitleFont(43);
   h_dummy2__46->GetZaxis()->SetLabelFont(43);
   h_dummy2__46->GetZaxis()->SetLabelSize(21);
   h_dummy2__46->GetZaxis()->SetTitleSize(21);
   h_dummy2__46->GetZaxis()->SetTitleFont(43);
   h_dummy2__46->Draw("HIST");
   
   Double_t Graph_from_h_ratio_fx3021[2] = {
   0.25,
   0.75};
   Double_t Graph_from_h_ratio_fy3021[2] = {
   1.216116,
   1.000062};
   Double_t Graph_from_h_ratio_felx3021[2] = {
   0.2495,
   0.2495};
   Double_t Graph_from_h_ratio_fely3021[2] = {
   0.06585639,
   0.08944823};
   Double_t Graph_from_h_ratio_fehx3021[2] = {
   0.25,
   0.25};
   Double_t Graph_from_h_ratio_fehy3021[2] = {
   0.06585639,
   0.08944823};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(2,Graph_from_h_ratio_fx3021,Graph_from_h_ratio_fy3021,Graph_from_h_ratio_felx3021,Graph_from_h_ratio_fehx3021,Graph_from_h_ratio_fely3021,Graph_from_h_ratio_fehy3021);
   grae->SetName("Graph_from_h_ratio");
   grae->SetTitle("FcncDiscriminant");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(24);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_h_ratio3021 = new TH1F("Graph_Graph_from_h_ratio3021","FcncDiscriminant",100,0,1.09995);
   Graph_Graph_from_h_ratio3021->SetMinimum(0.8734775);
   Graph_Graph_from_h_ratio3021->SetMaximum(1.319109);
   Graph_Graph_from_h_ratio3021->SetDirectory(0);
   Graph_Graph_from_h_ratio3021->SetStats(0);
   Graph_Graph_from_h_ratio3021->SetLineWidth(2);
   Graph_Graph_from_h_ratio3021->SetMarkerStyle(20);
   Graph_Graph_from_h_ratio3021->SetMarkerSize(1.2);
   Graph_Graph_from_h_ratio3021->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3021->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3021->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3021->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3021->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3021->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3021->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3021->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3021->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3021->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3021->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3021->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3021->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3021->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_h_ratio3021);
   
   grae->Draw("pe0");
   TLine *line = new TLine(0,1,1,1);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t g_ratio2_fx3022[2] = {
   0.25,
   0.75};
   Double_t g_ratio2_fy3022[2] = {
   1,
   1};
   Double_t g_ratio2_felx3022[2] = {
   0.25,
   0.25};
   Double_t g_ratio2_fely3022[2] = {
   0.2538321,
   0.2927364};
   Double_t g_ratio2_fehx3022[2] = {
   0.25,
   0.25};
   Double_t g_ratio2_fehy3022[2] = {
   0.2538321,
   0.2927364};
   grae = new TGraphAsymmErrors(2,g_ratio2_fx3022,g_ratio2_fy3022,g_ratio2_felx3022,g_ratio2_fehx3022,g_ratio2_fely3022,g_ratio2_fehy3022);
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
   
   TH1F *Graph_g_ratio23022 = new TH1F("Graph_g_ratio23022","FcncDiscriminant",100,0,1.1);
   Graph_g_ratio23022->SetMinimum(0.6487164);
   Graph_g_ratio23022->SetMaximum(1.351284);
   Graph_g_ratio23022->SetDirectory(0);
   Graph_g_ratio23022->SetStats(0);
   Graph_g_ratio23022->SetLineWidth(2);
   Graph_g_ratio23022->SetMarkerStyle(20);
   Graph_g_ratio23022->SetMarkerSize(1.2);
   Graph_g_ratio23022->GetXaxis()->SetLabelFont(43);
   Graph_g_ratio23022->GetXaxis()->SetLabelSize(21);
   Graph_g_ratio23022->GetXaxis()->SetTitleSize(21);
   Graph_g_ratio23022->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23022->GetXaxis()->SetTitleFont(43);
   Graph_g_ratio23022->GetYaxis()->SetLabelFont(43);
   Graph_g_ratio23022->GetYaxis()->SetLabelSize(21);
   Graph_g_ratio23022->GetYaxis()->SetTitleSize(21);
   Graph_g_ratio23022->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23022->GetYaxis()->SetTitleFont(43);
   Graph_g_ratio23022->GetZaxis()->SetLabelFont(43);
   Graph_g_ratio23022->GetZaxis()->SetLabelSize(21);
   Graph_g_ratio23022->GetZaxis()->SetTitleSize(21);
   Graph_g_ratio23022->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_ratio23022);
   
   grae->Draw("e2");
   Double_t xAxis52[3] = {0, 0.5, 1}; 
   
   TH1D *h_dummy2_copy__47 = new TH1D("h_dummy2_copy__47","Data/MC",2, xAxis52);
   h_dummy2_copy__47->SetMinimum(0.5);
   h_dummy2_copy__47->SetMaximum(1.5);
   h_dummy2_copy__47->SetEntries(1221453);
   h_dummy2_copy__47->SetDirectory(0);
   h_dummy2_copy__47->SetStats(0);
   h_dummy2_copy__47->SetMarkerStyle(20);
   h_dummy2_copy__47->SetMarkerSize(1.2);
   h_dummy2_copy__47->GetXaxis()->SetTitle("LH discriminant");
   h_dummy2_copy__47->GetXaxis()->SetRange(1,20);
   h_dummy2_copy__47->GetXaxis()->SetLabelFont(43);
   h_dummy2_copy__47->GetXaxis()->SetLabelOffset(0.025);
   h_dummy2_copy__47->GetXaxis()->SetLabelSize(16.8);
   h_dummy2_copy__47->GetXaxis()->SetTitleSize(21);
   h_dummy2_copy__47->GetXaxis()->SetTitleOffset(5.05);
   h_dummy2_copy__47->GetXaxis()->SetTitleFont(43);
   h_dummy2_copy__47->GetYaxis()->SetTitle("Data / Bkg");
   h_dummy2_copy__47->GetYaxis()->SetNdivisions(-504);
   h_dummy2_copy__47->GetYaxis()->SetLabelFont(43);
   h_dummy2_copy__47->GetYaxis()->SetLabelOffset(0.02);
   h_dummy2_copy__47->GetYaxis()->SetLabelSize(16.8);
   h_dummy2_copy__47->GetYaxis()->SetTitleSize(21);
   h_dummy2_copy__47->GetYaxis()->SetTitleOffset(2.4);
   h_dummy2_copy__47->GetYaxis()->SetTitleFont(43);
   h_dummy2_copy__47->GetZaxis()->SetLabelFont(43);
   h_dummy2_copy__47->GetZaxis()->SetLabelSize(21);
   h_dummy2_copy__47->GetZaxis()->SetTitleSize(21);
   h_dummy2_copy__47->GetZaxis()->SetTitleFont(43);
   h_dummy2_copy__47->Draw("sameaxis");
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
   c_c1lep5jex4bin->cd();
  
// ------------>Primitives in pad: pad0
   TPad *pad0 = new TPad("pad0", "pad0",0,0.2,1,1);
   pad0->Draw();
   pad0->cd();
   pad0->Range(-0.1728395,-76.12225,1.061728,685.1003);
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
   Double_t xAxis53[3] = {0, 0.5, 1}; 
   
   TH1D *h_dummy__48 = new TH1D("h_dummy__48","FcncDiscriminant",2, xAxis53);
   h_dummy__48->SetMinimum(0);
   h_dummy__48->SetMaximum(647.0391);
   h_dummy__48->SetEntries(1221453);
   h_dummy__48->SetDirectory(0);
   h_dummy__48->SetStats(0);
   h_dummy__48->SetMarkerStyle(20);
   h_dummy__48->SetMarkerSize(1.2);
   h_dummy__48->GetXaxis()->SetRange(1,20);
   h_dummy__48->GetXaxis()->SetLabelFont(43);
   h_dummy__48->GetXaxis()->SetLabelSize(0);
   h_dummy__48->GetXaxis()->SetTitleSize(21);
   h_dummy__48->GetXaxis()->SetTitleOffset(1.4);
   h_dummy__48->GetXaxis()->SetTitleFont(43);
   h_dummy__48->GetYaxis()->SetTitle("Events");
   h_dummy__48->GetYaxis()->SetLabelFont(43);
   h_dummy__48->GetYaxis()->SetLabelSize(16.8);
   h_dummy__48->GetYaxis()->SetTitleSize(21);
   h_dummy__48->GetYaxis()->SetTitleOffset(2.4);
   h_dummy__48->GetYaxis()->SetTitleFont(43);
   h_dummy__48->GetZaxis()->SetLabelFont(43);
   h_dummy__48->GetZaxis()->SetLabelSize(21);
   h_dummy__48->GetZaxis()->SetTitleSize(21);
   h_dummy__48->GetZaxis()->SetTitleFont(43);
   h_dummy__48->Draw("HIST");
   
   THStack *h_stack = new THStack();
   h_stack->SetName("h_stack");
   h_stack->SetTitle("h_stack");
   Double_t xAxis54[3] = {0, 0.5, 1}; 
   
   TH1F *h_stack_stack_6 = new TH1F("h_stack_stack_6","h_stack",2, xAxis54);
   h_stack_stack_6->SetMinimum(0);
   h_stack_stack_6->SetMaximum(303.8395);
   h_stack_stack_6->SetDirectory(0);
   h_stack_stack_6->SetStats(0);
   h_stack_stack_6->SetLineWidth(2);
   h_stack_stack_6->SetMarkerStyle(20);
   h_stack_stack_6->SetMarkerSize(1.2);
   h_stack_stack_6->GetXaxis()->SetLabelFont(43);
   h_stack_stack_6->GetXaxis()->SetLabelSize(21);
   h_stack_stack_6->GetXaxis()->SetTitleSize(21);
   h_stack_stack_6->GetXaxis()->SetTitleOffset(1.4);
   h_stack_stack_6->GetXaxis()->SetTitleFont(43);
   h_stack_stack_6->GetYaxis()->SetLabelFont(43);
   h_stack_stack_6->GetYaxis()->SetLabelSize(21);
   h_stack_stack_6->GetYaxis()->SetTitleSize(21);
   h_stack_stack_6->GetYaxis()->SetTitleOffset(1.4);
   h_stack_stack_6->GetYaxis()->SetTitleFont(43);
   h_stack_stack_6->GetZaxis()->SetLabelFont(43);
   h_stack_stack_6->GetZaxis()->SetLabelSize(21);
   h_stack_stack_6->GetZaxis()->SetTitleSize(21);
   h_stack_stack_6->GetZaxis()->SetTitleFont(43);
   h_stack->SetHistogram(h_stack_stack_6);
   
   Double_t xAxis55[3] = {0, 0.5, 1}; 
   
   TH1D *c1lep5jex4bin_topEW__49 = new TH1D("c1lep5jex4bin_topEW__49","FcncDiscriminant",2, xAxis55);
   c1lep5jex4bin_topEW__49->SetBinContent(1,41.59931);
   c1lep5jex4bin_topEW__49->SetBinContent(2,20.60817);
   c1lep5jex4bin_topEW__49->SetBinError(1,3.703205);
   c1lep5jex4bin_topEW__49->SetBinError(2,4.634347);
   c1lep5jex4bin_topEW__49->SetEntries(1220402);
   c1lep5jex4bin_topEW__49->SetDirectory(0);
   c1lep5jex4bin_topEW__49->SetStats(0);

   ci = TColor::GetColor("#66cc66");
   c1lep5jex4bin_topEW__49->SetFillColor(ci);
   c1lep5jex4bin_topEW__49->SetMarkerStyle(20);
   c1lep5jex4bin_topEW__49->SetMarkerSize(1.2);
   c1lep5jex4bin_topEW__49->GetXaxis()->SetRange(1,20);
   c1lep5jex4bin_topEW__49->GetXaxis()->SetLabelFont(43);
   c1lep5jex4bin_topEW__49->GetXaxis()->SetLabelSize(21);
   c1lep5jex4bin_topEW__49->GetXaxis()->SetTitleSize(21);
   c1lep5jex4bin_topEW__49->GetXaxis()->SetTitleOffset(1.4);
   c1lep5jex4bin_topEW__49->GetXaxis()->SetTitleFont(43);
   c1lep5jex4bin_topEW__49->GetYaxis()->SetLabelFont(43);
   c1lep5jex4bin_topEW__49->GetYaxis()->SetLabelSize(21);
   c1lep5jex4bin_topEW__49->GetYaxis()->SetTitleSize(21);
   c1lep5jex4bin_topEW__49->GetYaxis()->SetTitleOffset(1.4);
   c1lep5jex4bin_topEW__49->GetYaxis()->SetTitleFont(43);
   c1lep5jex4bin_topEW__49->GetZaxis()->SetLabelFont(43);
   c1lep5jex4bin_topEW__49->GetZaxis()->SetLabelSize(21);
   c1lep5jex4bin_topEW__49->GetZaxis()->SetTitleSize(21);
   c1lep5jex4bin_topEW__49->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep5jex4bin_topEW,"");
   Double_t xAxis56[3] = {0, 0.5, 1}; 
   
   TH1D *c1lep5jex4bin_ttbarbb__50 = new TH1D("c1lep5jex4bin_ttbarbb__50","FcncDiscriminant",2, xAxis56);
   c1lep5jex4bin_ttbarbb__50->SetBinContent(1,223.5452);
   c1lep5jex4bin_ttbarbb__50->SetBinContent(2,86.27198);
   c1lep5jex4bin_ttbarbb__50->SetBinError(1,10.74776);
   c1lep5jex4bin_ttbarbb__50->SetBinError(2,6.358415);
   c1lep5jex4bin_ttbarbb__50->SetEntries(990);
   c1lep5jex4bin_ttbarbb__50->SetDirectory(0);
   c1lep5jex4bin_ttbarbb__50->SetStats(0);

   ci = TColor::GetColor("#6666cc");
   c1lep5jex4bin_ttbarbb__50->SetFillColor(ci);
   c1lep5jex4bin_ttbarbb__50->SetMarkerStyle(20);
   c1lep5jex4bin_ttbarbb__50->SetMarkerSize(1.2);
   c1lep5jex4bin_ttbarbb__50->GetXaxis()->SetRange(1,20);
   c1lep5jex4bin_ttbarbb__50->GetXaxis()->SetLabelFont(43);
   c1lep5jex4bin_ttbarbb__50->GetXaxis()->SetLabelSize(21);
   c1lep5jex4bin_ttbarbb__50->GetXaxis()->SetTitleSize(21);
   c1lep5jex4bin_ttbarbb__50->GetXaxis()->SetTitleOffset(1.4);
   c1lep5jex4bin_ttbarbb__50->GetXaxis()->SetTitleFont(43);
   c1lep5jex4bin_ttbarbb__50->GetYaxis()->SetLabelFont(43);
   c1lep5jex4bin_ttbarbb__50->GetYaxis()->SetLabelSize(21);
   c1lep5jex4bin_ttbarbb__50->GetYaxis()->SetTitleSize(21);
   c1lep5jex4bin_ttbarbb__50->GetYaxis()->SetTitleOffset(1.4);
   c1lep5jex4bin_ttbarbb__50->GetYaxis()->SetTitleFont(43);
   c1lep5jex4bin_ttbarbb__50->GetZaxis()->SetLabelFont(43);
   c1lep5jex4bin_ttbarbb__50->GetZaxis()->SetLabelSize(21);
   c1lep5jex4bin_ttbarbb__50->GetZaxis()->SetTitleSize(21);
   c1lep5jex4bin_ttbarbb__50->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep5jex4bin_ttbarbb,"");
   Double_t xAxis57[3] = {0, 0.5, 1}; 
   
   TH1D *c1lep5jex4bin_ttbarcc__51 = new TH1D("c1lep5jex4bin_ttbarcc__51","FcncDiscriminant",2, xAxis57);
   c1lep5jex4bin_ttbarcc__51->SetBinContent(1,10.87956);
   c1lep5jex4bin_ttbarcc__51->SetBinContent(2,9.915609);
   c1lep5jex4bin_ttbarcc__51->SetBinError(1,3.089406);
   c1lep5jex4bin_ttbarcc__51->SetBinError(2,3.937104);
   c1lep5jex4bin_ttbarcc__51->SetEntries(38);
   c1lep5jex4bin_ttbarcc__51->SetDirectory(0);
   c1lep5jex4bin_ttbarcc__51->SetStats(0);

   ci = TColor::GetColor("#ccccff");
   c1lep5jex4bin_ttbarcc__51->SetFillColor(ci);
   c1lep5jex4bin_ttbarcc__51->SetMarkerStyle(20);
   c1lep5jex4bin_ttbarcc__51->SetMarkerSize(1.2);
   c1lep5jex4bin_ttbarcc__51->GetXaxis()->SetRange(1,20);
   c1lep5jex4bin_ttbarcc__51->GetXaxis()->SetLabelFont(43);
   c1lep5jex4bin_ttbarcc__51->GetXaxis()->SetLabelSize(21);
   c1lep5jex4bin_ttbarcc__51->GetXaxis()->SetTitleSize(21);
   c1lep5jex4bin_ttbarcc__51->GetXaxis()->SetTitleOffset(1.4);
   c1lep5jex4bin_ttbarcc__51->GetXaxis()->SetTitleFont(43);
   c1lep5jex4bin_ttbarcc__51->GetYaxis()->SetLabelFont(43);
   c1lep5jex4bin_ttbarcc__51->GetYaxis()->SetLabelSize(21);
   c1lep5jex4bin_ttbarcc__51->GetYaxis()->SetTitleSize(21);
   c1lep5jex4bin_ttbarcc__51->GetYaxis()->SetTitleOffset(1.4);
   c1lep5jex4bin_ttbarcc__51->GetYaxis()->SetTitleFont(43);
   c1lep5jex4bin_ttbarcc__51->GetZaxis()->SetLabelFont(43);
   c1lep5jex4bin_ttbarcc__51->GetZaxis()->SetLabelSize(21);
   c1lep5jex4bin_ttbarcc__51->GetZaxis()->SetTitleSize(21);
   c1lep5jex4bin_ttbarcc__51->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep5jex4bin_ttbarcc,"");
   Double_t xAxis58[3] = {0, 0.5, 1}; 
   
   TH1D *c1lep5jex4bin_ttbarlight__52 = new TH1D("c1lep5jex4bin_ttbarlight__52","FcncDiscriminant",2, xAxis58);
   c1lep5jex4bin_ttbarlight__52->SetBinContent(1,4.376727);
   c1lep5jex4bin_ttbarlight__52->SetBinContent(2,8.196527);
   c1lep5jex4bin_ttbarlight__52->SetBinError(1,1.394398);
   c1lep5jex4bin_ttbarlight__52->SetBinError(2,3.160271);
   c1lep5jex4bin_ttbarlight__52->SetEntries(21);
   c1lep5jex4bin_ttbarlight__52->SetDirectory(0);
   c1lep5jex4bin_ttbarlight__52->SetStats(0);
   c1lep5jex4bin_ttbarlight__52->SetMarkerStyle(20);
   c1lep5jex4bin_ttbarlight__52->SetMarkerSize(1.2);
   c1lep5jex4bin_ttbarlight__52->GetXaxis()->SetRange(1,20);
   c1lep5jex4bin_ttbarlight__52->GetXaxis()->SetLabelFont(43);
   c1lep5jex4bin_ttbarlight__52->GetXaxis()->SetLabelSize(21);
   c1lep5jex4bin_ttbarlight__52->GetXaxis()->SetTitleSize(21);
   c1lep5jex4bin_ttbarlight__52->GetXaxis()->SetTitleOffset(1.4);
   c1lep5jex4bin_ttbarlight__52->GetXaxis()->SetTitleFont(43);
   c1lep5jex4bin_ttbarlight__52->GetYaxis()->SetLabelFont(43);
   c1lep5jex4bin_ttbarlight__52->GetYaxis()->SetLabelSize(21);
   c1lep5jex4bin_ttbarlight__52->GetYaxis()->SetTitleSize(21);
   c1lep5jex4bin_ttbarlight__52->GetYaxis()->SetTitleOffset(1.4);
   c1lep5jex4bin_ttbarlight__52->GetYaxis()->SetTitleFont(43);
   c1lep5jex4bin_ttbarlight__52->GetZaxis()->SetLabelFont(43);
   c1lep5jex4bin_ttbarlight__52->GetZaxis()->SetLabelSize(21);
   c1lep5jex4bin_ttbarlight__52->GetZaxis()->SetTitleSize(21);
   c1lep5jex4bin_ttbarlight__52->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep5jex4bin_ttbarlight,"");
   Double_t xAxis59[3] = {0, 0.5, 1}; 
   
   TH1D *c1lep5jex4bin_uHcW__53 = new TH1D("c1lep5jex4bin_uHcW__53","FcncDiscriminant",2, xAxis59);
   c1lep5jex4bin_uHcW__53->SetBinContent(1,8.970161);
   c1lep5jex4bin_uHcW__53->SetBinContent(2,17.25749);
   c1lep5jex4bin_uHcW__53->SetBinError(1,3.833096);
   c1lep5jex4bin_uHcW__53->SetBinError(2,4.970648);
   c1lep5jex4bin_uHcW__53->SetEntries(199);
   c1lep5jex4bin_uHcW__53->SetDirectory(0);
   c1lep5jex4bin_uHcW__53->SetStats(0);
   c1lep5jex4bin_uHcW__53->SetFillColor(2);
   c1lep5jex4bin_uHcW__53->SetLineColor(2);
   c1lep5jex4bin_uHcW__53->SetMarkerStyle(20);
   c1lep5jex4bin_uHcW__53->SetMarkerSize(1.2);
   c1lep5jex4bin_uHcW__53->GetXaxis()->SetRange(1,20);
   c1lep5jex4bin_uHcW__53->GetXaxis()->SetLabelFont(43);
   c1lep5jex4bin_uHcW__53->GetXaxis()->SetLabelSize(21);
   c1lep5jex4bin_uHcW__53->GetXaxis()->SetTitleSize(21);
   c1lep5jex4bin_uHcW__53->GetXaxis()->SetTitleOffset(1.4);
   c1lep5jex4bin_uHcW__53->GetXaxis()->SetTitleFont(43);
   c1lep5jex4bin_uHcW__53->GetYaxis()->SetLabelFont(43);
   c1lep5jex4bin_uHcW__53->GetYaxis()->SetLabelSize(21);
   c1lep5jex4bin_uHcW__53->GetYaxis()->SetTitleSize(21);
   c1lep5jex4bin_uHcW__53->GetYaxis()->SetTitleOffset(1.4);
   c1lep5jex4bin_uHcW__53->GetYaxis()->SetTitleFont(43);
   c1lep5jex4bin_uHcW__53->GetZaxis()->SetLabelFont(43);
   c1lep5jex4bin_uHcW__53->GetZaxis()->SetLabelSize(21);
   c1lep5jex4bin_uHcW__53->GetZaxis()->SetTitleSize(21);
   c1lep5jex4bin_uHcW__53->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep5jex4bin_uHcW,"");
   h_stack->Draw("hist same");
   
   Double_t g_totErr_fx3023[2] = {
   0.25,
   0.75};
   Double_t g_totErr_fy3023[2] = {
   280.4008,
   124.9923};
   Double_t g_totErr_felx3023[2] = {
   0.25,
   0.25};
   Double_t g_totErr_fely3023[2] = {
   71.17472,
   36.58979};
   Double_t g_totErr_fehx3023[2] = {
   0.25,
   0.25};
   Double_t g_totErr_fehy3023[2] = {
   71.17472,
   36.58979};
   grae = new TGraphAsymmErrors(2,g_totErr_fx3023,g_totErr_fy3023,g_totErr_felx3023,g_totErr_fehx3023,g_totErr_fely3023,g_totErr_fehy3023);
   grae->SetName("g_totErr");
   grae->SetTitle("FcncDiscriminant");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(3354);
   grae->SetLineColor(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0);
   
   TH1F *Graph_g_totErr3023 = new TH1F("Graph_g_totErr3023","FcncDiscriminant",100,0,1.1);
   Graph_g_totErr3023->SetMinimum(62.0852);
   Graph_g_totErr3023->SetMaximum(377.8928);
   Graph_g_totErr3023->SetDirectory(0);
   Graph_g_totErr3023->SetStats(0);
   Graph_g_totErr3023->SetLineWidth(2);
   Graph_g_totErr3023->SetMarkerStyle(20);
   Graph_g_totErr3023->SetMarkerSize(1.2);
   Graph_g_totErr3023->GetXaxis()->SetLabelFont(43);
   Graph_g_totErr3023->GetXaxis()->SetLabelSize(21);
   Graph_g_totErr3023->GetXaxis()->SetTitleSize(21);
   Graph_g_totErr3023->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_totErr3023->GetXaxis()->SetTitleFont(43);
   Graph_g_totErr3023->GetYaxis()->SetLabelFont(43);
   Graph_g_totErr3023->GetYaxis()->SetLabelSize(21);
   Graph_g_totErr3023->GetYaxis()->SetTitleSize(21);
   Graph_g_totErr3023->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_totErr3023->GetYaxis()->SetTitleFont(43);
   Graph_g_totErr3023->GetZaxis()->SetLabelFont(43);
   Graph_g_totErr3023->GetZaxis()->SetLabelSize(21);
   Graph_g_totErr3023->GetZaxis()->SetTitleSize(21);
   Graph_g_totErr3023->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_totErr3023);
   
   grae->Draw("e2");
   
   Double_t Graph_from_c1lep5jex4bin_Data_fx3024[2] = {
   0.25,
   0.75};
   Double_t Graph_from_c1lep5jex4bin_Data_fy3024[2] = {
   341,
   125};
   Double_t Graph_from_c1lep5jex4bin_Data_felx3024[2] = {
   0.2495,
   0.2495};
   Double_t Graph_from_c1lep5jex4bin_Data_fely3024[2] = {
   18.46619,
   11.18034};
   Double_t Graph_from_c1lep5jex4bin_Data_fehx3024[2] = {
   0.25,
   0.25};
   Double_t Graph_from_c1lep5jex4bin_Data_fehy3024[2] = {
   18.46619,
   11.18034};
   grae = new TGraphAsymmErrors(2,Graph_from_c1lep5jex4bin_Data_fx3024,Graph_from_c1lep5jex4bin_Data_fy3024,Graph_from_c1lep5jex4bin_Data_felx3024,Graph_from_c1lep5jex4bin_Data_fehx3024,Graph_from_c1lep5jex4bin_Data_fely3024,Graph_from_c1lep5jex4bin_Data_fehy3024);
   grae->SetName("Graph_from_c1lep5jex4bin_Data");
   grae->SetTitle("FcncDiscriminant");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_c1lep5jex4bin_Data3024 = new TH1F("Graph_Graph_from_c1lep5jex4bin_Data3024","FcncDiscriminant",100,0,1.09995);
   Graph_Graph_from_c1lep5jex4bin_Data3024->SetMinimum(89.25501);
   Graph_Graph_from_c1lep5jex4bin_Data3024->SetMaximum(384.0308);
   Graph_Graph_from_c1lep5jex4bin_Data3024->SetDirectory(0);
   Graph_Graph_from_c1lep5jex4bin_Data3024->SetStats(0);
   Graph_Graph_from_c1lep5jex4bin_Data3024->SetLineWidth(2);
   Graph_Graph_from_c1lep5jex4bin_Data3024->SetMarkerStyle(20);
   Graph_Graph_from_c1lep5jex4bin_Data3024->SetMarkerSize(1.2);
   Graph_Graph_from_c1lep5jex4bin_Data3024->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep5jex4bin_Data3024->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep5jex4bin_Data3024->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep5jex4bin_Data3024->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep5jex4bin_Data3024->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep5jex4bin_Data3024->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep5jex4bin_Data3024->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep5jex4bin_Data3024->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep5jex4bin_Data3024->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep5jex4bin_Data3024->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep5jex4bin_Data3024->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep5jex4bin_Data3024->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep5jex4bin_Data3024->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep5jex4bin_Data3024->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_c1lep5jex4bin_Data3024);
   
   grae->Draw("ep1 ");
   Double_t xAxis60[3] = {0, 0.5, 1}; 
   
   TH1D *h_dummy_copy__54 = new TH1D("h_dummy_copy__54","FcncDiscriminant",2, xAxis60);
   h_dummy_copy__54->SetEntries(1221453);
   h_dummy_copy__54->SetDirectory(0);
   h_dummy_copy__54->SetStats(0);
   h_dummy_copy__54->SetMarkerStyle(20);
   h_dummy_copy__54->SetMarkerSize(1.2);
   h_dummy_copy__54->GetXaxis()->SetTitle("LH discriminant");
   h_dummy_copy__54->GetXaxis()->SetRange(1,20);
   h_dummy_copy__54->GetXaxis()->SetLabelFont(43);
   h_dummy_copy__54->GetXaxis()->SetLabelSize(21);
   h_dummy_copy__54->GetXaxis()->SetTitleSize(21);
   h_dummy_copy__54->GetXaxis()->SetTitleOffset(1.4);
   h_dummy_copy__54->GetXaxis()->SetTitleFont(43);
   h_dummy_copy__54->GetYaxis()->SetTitle("Events");
   h_dummy_copy__54->GetYaxis()->SetLabelFont(43);
   h_dummy_copy__54->GetYaxis()->SetLabelSize(16.8);
   h_dummy_copy__54->GetYaxis()->SetTitleSize(21);
   h_dummy_copy__54->GetYaxis()->SetTitleOffset(2.4);
   h_dummy_copy__54->GetYaxis()->SetTitleFont(43);
   h_dummy_copy__54->GetZaxis()->SetLabelFont(43);
   h_dummy_copy__54->GetZaxis()->SetLabelSize(21);
   h_dummy_copy__54->GetZaxis()->SetTitleSize(21);
   h_dummy_copy__54->GetZaxis()->SetTitleFont(43);
   h_dummy_copy__54->Draw("sameaxis");
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
      tex = new TLatex(0.18,0.73,"5jex-4bin");
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
   TLegendEntry *entry=leg->AddEntry("c1lep5jex4bin_Data","Data","lep");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep5jex4bin_uHcW","t#bar{t}#rightarrowWbHc (BR=1%)","f");
   entry->SetFillColor(2);
   entry->SetFillStyle(1001);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep5jex4bin_ttbarlight","t#bar{t}+light","f");
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep5jex4bin_ttbarcc","t#bar{t}+cc","f");

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
   entry=leg->AddEntry("c1lep5jex4bin_ttbarbb","t#bar{t}+bb","f");

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
   entry=leg->AddEntry("c1lep5jex4bin_topEW","Non-t#bar{t}","f");

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
   c_c1lep5jex4bin->cd();
   c_c1lep5jex4bin->Modified();
   c_c1lep5jex4bin->cd();
   c_c1lep5jex4bin->SetSelected(c_c1lep5jex4bin);
}
