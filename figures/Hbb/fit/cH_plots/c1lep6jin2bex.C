void c1lep6jin2bex()
{
//=========Macro generated from canvas: c_c1lep6jin2bex/c_c1lep6jin2bex
//=========  (Thu Jul 19 11:17:24 2018) by ROOT version6.04/14
   TCanvas *c_c1lep6jin2bex = new TCanvas("c_c1lep6jin2bex", "c_c1lep6jin2bex",0,0,600,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c_c1lep6jin2bex->SetHighLightColor(2);
   c_c1lep6jin2bex->Range(0,0,1,1);
   c_c1lep6jin2bex->SetFillColor(0);
   c_c1lep6jin2bex->SetBorderMode(0);
   c_c1lep6jin2bex->SetBorderSize(2);
   c_c1lep6jin2bex->SetTickx(1);
   c_c1lep6jin2bex->SetTicky(1);
   c_c1lep6jin2bex->SetLeftMargin(0.16);
   c_c1lep6jin2bex->SetRightMargin(0.05);
   c_c1lep6jin2bex->SetTopMargin(0.05);
   c_c1lep6jin2bex->SetBottomMargin(0.16);
   c_c1lep6jin2bex->SetFrameBorderMode(0);
  
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
   Double_t xAxis61[2] = {0.6, 1}; 
   
   TH1D *h_dummy2__55 = new TH1D("h_dummy2__55","Data/MC",1, xAxis61);
   h_dummy2__55->SetMinimum(0.5);
   h_dummy2__55->SetMaximum(1.5);
   h_dummy2__55->SetEntries(2561961);
   h_dummy2__55->SetDirectory(0);
   h_dummy2__55->SetStats(0);
   h_dummy2__55->SetMarkerStyle(20);
   h_dummy2__55->SetMarkerSize(1.2);
   h_dummy2__55->GetXaxis()->SetTitle("LH discriminant");
   h_dummy2__55->GetXaxis()->SetRange(1,20);
   h_dummy2__55->GetXaxis()->SetLabelFont(43);
   h_dummy2__55->GetXaxis()->SetLabelOffset(0.025);
   h_dummy2__55->GetXaxis()->SetLabelSize(16.8);
   h_dummy2__55->GetXaxis()->SetTitleSize(21);
   h_dummy2__55->GetXaxis()->SetTitleOffset(5.05);
   h_dummy2__55->GetXaxis()->SetTitleFont(43);
   h_dummy2__55->GetYaxis()->SetTitle("Data / Bkg");
   h_dummy2__55->GetYaxis()->SetNdivisions(-504);
   h_dummy2__55->GetYaxis()->SetLabelFont(43);
   h_dummy2__55->GetYaxis()->SetLabelOffset(0.02);
   h_dummy2__55->GetYaxis()->SetLabelSize(16.8);
   h_dummy2__55->GetYaxis()->SetTitleSize(21);
   h_dummy2__55->GetYaxis()->SetTitleOffset(2.4);
   h_dummy2__55->GetYaxis()->SetTitleFont(43);
   h_dummy2__55->GetZaxis()->SetLabelFont(43);
   h_dummy2__55->GetZaxis()->SetLabelSize(21);
   h_dummy2__55->GetZaxis()->SetTitleSize(21);
   h_dummy2__55->GetZaxis()->SetTitleFont(43);
   h_dummy2__55->Draw("HIST");
   
   Double_t Graph_from_h_ratio_fx3025[1] = {
   0.8};
   Double_t Graph_from_h_ratio_fy3025[1] = {
   0.9671717};
   Double_t Graph_from_h_ratio_felx3025[1] = {
   0.1996};
   Double_t Graph_from_h_ratio_fely3025[1] = {
   0.005105533};
   Double_t Graph_from_h_ratio_fehx3025[1] = {
   0.2};
   Double_t Graph_from_h_ratio_fehy3025[1] = {
   0.005105533};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(1,Graph_from_h_ratio_fx3025,Graph_from_h_ratio_fy3025,Graph_from_h_ratio_felx3025,Graph_from_h_ratio_fehx3025,Graph_from_h_ratio_fely3025,Graph_from_h_ratio_fehy3025);
   grae->SetName("Graph_from_h_ratio");
   grae->SetTitle("FcncDiscriminant");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(24);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_h_ratio3025 = new TH1F("Graph_Graph_from_h_ratio3025","FcncDiscriminant",100,0.56044,1.03996);
   Graph_Graph_from_h_ratio3025->SetMinimum(0.9610451);
   Graph_Graph_from_h_ratio3025->SetMaximum(0.9732984);
   Graph_Graph_from_h_ratio3025->SetDirectory(0);
   Graph_Graph_from_h_ratio3025->SetStats(0);
   Graph_Graph_from_h_ratio3025->SetLineWidth(2);
   Graph_Graph_from_h_ratio3025->SetMarkerStyle(20);
   Graph_Graph_from_h_ratio3025->SetMarkerSize(1.2);
   Graph_Graph_from_h_ratio3025->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3025->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3025->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3025->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3025->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3025->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3025->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3025->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3025->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3025->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3025->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3025->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3025->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3025->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_h_ratio3025);
   
   grae->Draw("pe0");
   TLine *line = new TLine(0.6,1,1,1);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t g_ratio2_fx3026[1] = {
   0.8};
   Double_t g_ratio2_fy3026[1] = {
   1};
   Double_t g_ratio2_felx3026[1] = {
   0.2};
   Double_t g_ratio2_fely3026[1] = {
   0.2574607};
   Double_t g_ratio2_fehx3026[1] = {
   0.2};
   Double_t g_ratio2_fehy3026[1] = {
   0.2574607};
   grae = new TGraphAsymmErrors(1,g_ratio2_fx3026,g_ratio2_fy3026,g_ratio2_felx3026,g_ratio2_fehx3026,g_ratio2_fely3026,g_ratio2_fehy3026);
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
   
   TH1F *Graph_g_ratio23026 = new TH1F("Graph_g_ratio23026","FcncDiscriminant",100,0.56,1.04);
   Graph_g_ratio23026->SetMinimum(0.6910472);
   Graph_g_ratio23026->SetMaximum(1.308953);
   Graph_g_ratio23026->SetDirectory(0);
   Graph_g_ratio23026->SetStats(0);
   Graph_g_ratio23026->SetLineWidth(2);
   Graph_g_ratio23026->SetMarkerStyle(20);
   Graph_g_ratio23026->SetMarkerSize(1.2);
   Graph_g_ratio23026->GetXaxis()->SetLabelFont(43);
   Graph_g_ratio23026->GetXaxis()->SetLabelSize(21);
   Graph_g_ratio23026->GetXaxis()->SetTitleSize(21);
   Graph_g_ratio23026->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23026->GetXaxis()->SetTitleFont(43);
   Graph_g_ratio23026->GetYaxis()->SetLabelFont(43);
   Graph_g_ratio23026->GetYaxis()->SetLabelSize(21);
   Graph_g_ratio23026->GetYaxis()->SetTitleSize(21);
   Graph_g_ratio23026->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23026->GetYaxis()->SetTitleFont(43);
   Graph_g_ratio23026->GetZaxis()->SetLabelFont(43);
   Graph_g_ratio23026->GetZaxis()->SetLabelSize(21);
   Graph_g_ratio23026->GetZaxis()->SetTitleSize(21);
   Graph_g_ratio23026->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_ratio23026);
   
   grae->Draw("e2");
   Double_t xAxis62[2] = {0.6, 1}; 
   
   TH1D *h_dummy2_copy__56 = new TH1D("h_dummy2_copy__56","Data/MC",1, xAxis62);
   h_dummy2_copy__56->SetMinimum(0.5);
   h_dummy2_copy__56->SetMaximum(1.5);
   h_dummy2_copy__56->SetEntries(2561961);
   h_dummy2_copy__56->SetDirectory(0);
   h_dummy2_copy__56->SetStats(0);
   h_dummy2_copy__56->SetMarkerStyle(20);
   h_dummy2_copy__56->SetMarkerSize(1.2);
   h_dummy2_copy__56->GetXaxis()->SetTitle("LH discriminant");
   h_dummy2_copy__56->GetXaxis()->SetRange(1,20);
   h_dummy2_copy__56->GetXaxis()->SetLabelFont(43);
   h_dummy2_copy__56->GetXaxis()->SetLabelOffset(0.025);
   h_dummy2_copy__56->GetXaxis()->SetLabelSize(16.8);
   h_dummy2_copy__56->GetXaxis()->SetTitleSize(21);
   h_dummy2_copy__56->GetXaxis()->SetTitleOffset(5.05);
   h_dummy2_copy__56->GetXaxis()->SetTitleFont(43);
   h_dummy2_copy__56->GetYaxis()->SetTitle("Data / Bkg");
   h_dummy2_copy__56->GetYaxis()->SetNdivisions(-504);
   h_dummy2_copy__56->GetYaxis()->SetLabelFont(43);
   h_dummy2_copy__56->GetYaxis()->SetLabelOffset(0.02);
   h_dummy2_copy__56->GetYaxis()->SetLabelSize(16.8);
   h_dummy2_copy__56->GetYaxis()->SetTitleSize(21);
   h_dummy2_copy__56->GetYaxis()->SetTitleOffset(2.4);
   h_dummy2_copy__56->GetYaxis()->SetTitleFont(43);
   h_dummy2_copy__56->GetZaxis()->SetLabelFont(43);
   h_dummy2_copy__56->GetZaxis()->SetLabelSize(21);
   h_dummy2_copy__56->GetZaxis()->SetTitleSize(21);
   h_dummy2_copy__56->GetZaxis()->SetTitleFont(43);
   h_dummy2_copy__56->Draw("sameaxis");
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
   c_c1lep6jin2bex->cd();
  
// ------------>Primitives in pad: pad0
   TPad *pad0 = new TPad("pad0", "pad0",0,0.2,1,1);
   pad0->Draw();
   pad0->cd();
   pad0->Range(0.5308642,-7857.331,1.024691,70715.98);
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
   Double_t xAxis63[2] = {0.6, 1}; 
   
   TH1D *h_dummy__57 = new TH1D("h_dummy__57","FcncDiscriminant",1, xAxis63);
   h_dummy__57->SetMinimum(0);
   h_dummy__57->SetMaximum(66787.31);
   h_dummy__57->SetEntries(2561961);
   h_dummy__57->SetDirectory(0);
   h_dummy__57->SetStats(0);
   h_dummy__57->SetMarkerStyle(20);
   h_dummy__57->SetMarkerSize(1.2);
   h_dummy__57->GetXaxis()->SetRange(1,20);
   h_dummy__57->GetXaxis()->SetLabelFont(43);
   h_dummy__57->GetXaxis()->SetLabelSize(0);
   h_dummy__57->GetXaxis()->SetTitleSize(21);
   h_dummy__57->GetXaxis()->SetTitleOffset(1.4);
   h_dummy__57->GetXaxis()->SetTitleFont(43);
   h_dummy__57->GetYaxis()->SetTitle("Events / 1");
   h_dummy__57->GetYaxis()->SetLabelFont(43);
   h_dummy__57->GetYaxis()->SetLabelSize(16.8);
   h_dummy__57->GetYaxis()->SetTitleSize(21);
   h_dummy__57->GetYaxis()->SetTitleOffset(2.4);
   h_dummy__57->GetYaxis()->SetTitleFont(43);
   h_dummy__57->GetZaxis()->SetLabelFont(43);
   h_dummy__57->GetZaxis()->SetLabelSize(21);
   h_dummy__57->GetZaxis()->SetTitleSize(21);
   h_dummy__57->GetZaxis()->SetTitleFont(43);
   h_dummy__57->Draw("HIST");
   
   THStack *h_stack = new THStack();
   h_stack->SetName("h_stack");
   h_stack->SetTitle("h_stack");
   Double_t xAxis64[2] = {0.6, 1}; 
   
   TH1F *h_stack_stack_7 = new TH1F("h_stack_stack_7","h_stack",1, xAxis64);
   h_stack_stack_7->SetMinimum(0);
   h_stack_stack_7->SetMaximum(39762.82);
   h_stack_stack_7->SetDirectory(0);
   h_stack_stack_7->SetStats(0);
   h_stack_stack_7->SetLineWidth(2);
   h_stack_stack_7->SetMarkerStyle(20);
   h_stack_stack_7->SetMarkerSize(1.2);
   h_stack_stack_7->GetXaxis()->SetLabelFont(43);
   h_stack_stack_7->GetXaxis()->SetLabelSize(21);
   h_stack_stack_7->GetXaxis()->SetTitleSize(21);
   h_stack_stack_7->GetXaxis()->SetTitleOffset(1.4);
   h_stack_stack_7->GetXaxis()->SetTitleFont(43);
   h_stack_stack_7->GetYaxis()->SetLabelFont(43);
   h_stack_stack_7->GetYaxis()->SetLabelSize(21);
   h_stack_stack_7->GetYaxis()->SetTitleSize(21);
   h_stack_stack_7->GetYaxis()->SetTitleOffset(1.4);
   h_stack_stack_7->GetYaxis()->SetTitleFont(43);
   h_stack_stack_7->GetZaxis()->SetLabelFont(43);
   h_stack_stack_7->GetZaxis()->SetLabelSize(21);
   h_stack_stack_7->GetZaxis()->SetTitleSize(21);
   h_stack_stack_7->GetZaxis()->SetTitleFont(43);
   h_stack->SetHistogram(h_stack_stack_7);
   
   Double_t xAxis65[2] = {0.6, 1}; 
   
   TH1D *c1lep6jin2bex_topEW__58 = new TH1D("c1lep6jin2bex_topEW__58","FcncDiscriminant",1, xAxis65);
   c1lep6jin2bex_topEW__58->SetBinContent(0,15581.38);
   c1lep6jin2bex_topEW__58->SetBinContent(1,5663.981);
   c1lep6jin2bex_topEW__58->SetBinError(0,296.5742);
   c1lep6jin2bex_topEW__58->SetBinError(1,151.4219);
   c1lep6jin2bex_topEW__58->SetEntries(1906597);
   c1lep6jin2bex_topEW__58->SetDirectory(0);
   c1lep6jin2bex_topEW__58->SetStats(0);

   ci = TColor::GetColor("#66cc66");
   c1lep6jin2bex_topEW__58->SetFillColor(ci);
   c1lep6jin2bex_topEW__58->SetMarkerStyle(20);
   c1lep6jin2bex_topEW__58->SetMarkerSize(1.2);
   c1lep6jin2bex_topEW__58->GetXaxis()->SetRange(1,20);
   c1lep6jin2bex_topEW__58->GetXaxis()->SetLabelFont(43);
   c1lep6jin2bex_topEW__58->GetXaxis()->SetLabelSize(21);
   c1lep6jin2bex_topEW__58->GetXaxis()->SetTitleSize(21);
   c1lep6jin2bex_topEW__58->GetXaxis()->SetTitleOffset(1.4);
   c1lep6jin2bex_topEW__58->GetXaxis()->SetTitleFont(43);
   c1lep6jin2bex_topEW__58->GetYaxis()->SetLabelFont(43);
   c1lep6jin2bex_topEW__58->GetYaxis()->SetLabelSize(21);
   c1lep6jin2bex_topEW__58->GetYaxis()->SetTitleSize(21);
   c1lep6jin2bex_topEW__58->GetYaxis()->SetTitleOffset(1.4);
   c1lep6jin2bex_topEW__58->GetYaxis()->SetTitleFont(43);
   c1lep6jin2bex_topEW__58->GetZaxis()->SetLabelFont(43);
   c1lep6jin2bex_topEW__58->GetZaxis()->SetLabelSize(21);
   c1lep6jin2bex_topEW__58->GetZaxis()->SetTitleSize(21);
   c1lep6jin2bex_topEW__58->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep6jin2bex_topEW,"");
   Double_t xAxis66[2] = {0.6, 1}; 
   
   TH1D *c1lep6jin2bex_ttbarbb__59 = new TH1D("c1lep6jin2bex_ttbarbb__59","FcncDiscriminant",1, xAxis66);
   c1lep6jin2bex_ttbarbb__59->SetBinContent(0,11835.04);
   c1lep6jin2bex_ttbarbb__59->SetBinContent(1,3266.823);
   c1lep6jin2bex_ttbarbb__59->SetBinError(0,67.31682);
   c1lep6jin2bex_ttbarbb__59->SetBinError(1,35.82434);
   c1lep6jin2bex_ttbarbb__59->SetEntries(56775);
   c1lep6jin2bex_ttbarbb__59->SetDirectory(0);
   c1lep6jin2bex_ttbarbb__59->SetStats(0);

   ci = TColor::GetColor("#6666cc");
   c1lep6jin2bex_ttbarbb__59->SetFillColor(ci);
   c1lep6jin2bex_ttbarbb__59->SetMarkerStyle(20);
   c1lep6jin2bex_ttbarbb__59->SetMarkerSize(1.2);
   c1lep6jin2bex_ttbarbb__59->GetXaxis()->SetRange(1,20);
   c1lep6jin2bex_ttbarbb__59->GetXaxis()->SetLabelFont(43);
   c1lep6jin2bex_ttbarbb__59->GetXaxis()->SetLabelSize(21);
   c1lep6jin2bex_ttbarbb__59->GetXaxis()->SetTitleSize(21);
   c1lep6jin2bex_ttbarbb__59->GetXaxis()->SetTitleOffset(1.4);
   c1lep6jin2bex_ttbarbb__59->GetXaxis()->SetTitleFont(43);
   c1lep6jin2bex_ttbarbb__59->GetYaxis()->SetLabelFont(43);
   c1lep6jin2bex_ttbarbb__59->GetYaxis()->SetLabelSize(21);
   c1lep6jin2bex_ttbarbb__59->GetYaxis()->SetTitleSize(21);
   c1lep6jin2bex_ttbarbb__59->GetYaxis()->SetTitleOffset(1.4);
   c1lep6jin2bex_ttbarbb__59->GetYaxis()->SetTitleFont(43);
   c1lep6jin2bex_ttbarbb__59->GetZaxis()->SetLabelFont(43);
   c1lep6jin2bex_ttbarbb__59->GetZaxis()->SetLabelSize(21);
   c1lep6jin2bex_ttbarbb__59->GetZaxis()->SetTitleSize(21);
   c1lep6jin2bex_ttbarbb__59->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep6jin2bex_ttbarbb,"");
   Double_t xAxis67[2] = {0.6, 1}; 
   
   TH1D *c1lep6jin2bex_ttbarcc__60 = new TH1D("c1lep6jin2bex_ttbarcc__60","FcncDiscriminant",1, xAxis67);
   c1lep6jin2bex_ttbarcc__60->SetBinContent(0,23604.18);
   c1lep6jin2bex_ttbarcc__60->SetBinContent(1,5281.424);
   c1lep6jin2bex_ttbarcc__60->SetBinError(0,94.60846);
   c1lep6jin2bex_ttbarcc__60->SetBinError(1,45.05708);
   c1lep6jin2bex_ttbarcc__60->SetEntries(108765);
   c1lep6jin2bex_ttbarcc__60->SetDirectory(0);
   c1lep6jin2bex_ttbarcc__60->SetStats(0);

   ci = TColor::GetColor("#ccccff");
   c1lep6jin2bex_ttbarcc__60->SetFillColor(ci);
   c1lep6jin2bex_ttbarcc__60->SetMarkerStyle(20);
   c1lep6jin2bex_ttbarcc__60->SetMarkerSize(1.2);
   c1lep6jin2bex_ttbarcc__60->GetXaxis()->SetRange(1,20);
   c1lep6jin2bex_ttbarcc__60->GetXaxis()->SetLabelFont(43);
   c1lep6jin2bex_ttbarcc__60->GetXaxis()->SetLabelSize(21);
   c1lep6jin2bex_ttbarcc__60->GetXaxis()->SetTitleSize(21);
   c1lep6jin2bex_ttbarcc__60->GetXaxis()->SetTitleOffset(1.4);
   c1lep6jin2bex_ttbarcc__60->GetXaxis()->SetTitleFont(43);
   c1lep6jin2bex_ttbarcc__60->GetYaxis()->SetLabelFont(43);
   c1lep6jin2bex_ttbarcc__60->GetYaxis()->SetLabelSize(21);
   c1lep6jin2bex_ttbarcc__60->GetYaxis()->SetTitleSize(21);
   c1lep6jin2bex_ttbarcc__60->GetYaxis()->SetTitleOffset(1.4);
   c1lep6jin2bex_ttbarcc__60->GetYaxis()->SetTitleFont(43);
   c1lep6jin2bex_ttbarcc__60->GetZaxis()->SetLabelFont(43);
   c1lep6jin2bex_ttbarcc__60->GetZaxis()->SetLabelSize(21);
   c1lep6jin2bex_ttbarcc__60->GetZaxis()->SetTitleSize(21);
   c1lep6jin2bex_ttbarcc__60->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep6jin2bex_ttbarcc,"");
   Double_t xAxis68[2] = {0.6, 1}; 
   
   TH1D *c1lep6jin2bex_ttbarlight__61 = new TH1D("c1lep6jin2bex_ttbarlight__61","FcncDiscriminant",1, xAxis68);
   c1lep6jin2bex_ttbarlight__61->SetBinContent(0,106765.7);
   c1lep6jin2bex_ttbarlight__61->SetBinContent(1,22891.83);
   c1lep6jin2bex_ttbarlight__61->SetBinError(0,202.1863);
   c1lep6jin2bex_ttbarlight__61->SetBinError(1,94.60073);
   c1lep6jin2bex_ttbarlight__61->SetEntries(489823);
   c1lep6jin2bex_ttbarlight__61->SetDirectory(0);
   c1lep6jin2bex_ttbarlight__61->SetStats(0);
   c1lep6jin2bex_ttbarlight__61->SetMarkerStyle(20);
   c1lep6jin2bex_ttbarlight__61->SetMarkerSize(1.2);
   c1lep6jin2bex_ttbarlight__61->GetXaxis()->SetRange(1,20);
   c1lep6jin2bex_ttbarlight__61->GetXaxis()->SetLabelFont(43);
   c1lep6jin2bex_ttbarlight__61->GetXaxis()->SetLabelSize(21);
   c1lep6jin2bex_ttbarlight__61->GetXaxis()->SetTitleSize(21);
   c1lep6jin2bex_ttbarlight__61->GetXaxis()->SetTitleOffset(1.4);
   c1lep6jin2bex_ttbarlight__61->GetXaxis()->SetTitleFont(43);
   c1lep6jin2bex_ttbarlight__61->GetYaxis()->SetLabelFont(43);
   c1lep6jin2bex_ttbarlight__61->GetYaxis()->SetLabelSize(21);
   c1lep6jin2bex_ttbarlight__61->GetYaxis()->SetTitleSize(21);
   c1lep6jin2bex_ttbarlight__61->GetYaxis()->SetTitleOffset(1.4);
   c1lep6jin2bex_ttbarlight__61->GetYaxis()->SetTitleFont(43);
   c1lep6jin2bex_ttbarlight__61->GetZaxis()->SetLabelFont(43);
   c1lep6jin2bex_ttbarlight__61->GetZaxis()->SetLabelSize(21);
   c1lep6jin2bex_ttbarlight__61->GetZaxis()->SetTitleSize(21);
   c1lep6jin2bex_ttbarlight__61->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep6jin2bex_ttbarlight,"");
   Double_t xAxis69[2] = {0.6, 1}; 
   
   TH1D *c1lep6jin2bex_uHcW__62 = new TH1D("c1lep6jin2bex_uHcW__62","FcncDiscriminant",1, xAxis69);
   c1lep6jin2bex_uHcW__62->SetBinContent(0,1029.954);
   c1lep6jin2bex_uHcW__62->SetBinContent(1,765.2862);
   c1lep6jin2bex_uHcW__62->SetBinError(0,40.06208);
   c1lep6jin2bex_uHcW__62->SetBinError(1,32.26275);
   c1lep6jin2bex_uHcW__62->SetEntries(15712);
   c1lep6jin2bex_uHcW__62->SetDirectory(0);
   c1lep6jin2bex_uHcW__62->SetStats(0);
   c1lep6jin2bex_uHcW__62->SetFillColor(2);
   c1lep6jin2bex_uHcW__62->SetLineColor(2);
   c1lep6jin2bex_uHcW__62->SetMarkerStyle(20);
   c1lep6jin2bex_uHcW__62->SetMarkerSize(1.2);
   c1lep6jin2bex_uHcW__62->GetXaxis()->SetRange(1,20);
   c1lep6jin2bex_uHcW__62->GetXaxis()->SetLabelFont(43);
   c1lep6jin2bex_uHcW__62->GetXaxis()->SetLabelSize(21);
   c1lep6jin2bex_uHcW__62->GetXaxis()->SetTitleSize(21);
   c1lep6jin2bex_uHcW__62->GetXaxis()->SetTitleOffset(1.4);
   c1lep6jin2bex_uHcW__62->GetXaxis()->SetTitleFont(43);
   c1lep6jin2bex_uHcW__62->GetYaxis()->SetLabelFont(43);
   c1lep6jin2bex_uHcW__62->GetYaxis()->SetLabelSize(21);
   c1lep6jin2bex_uHcW__62->GetYaxis()->SetTitleSize(21);
   c1lep6jin2bex_uHcW__62->GetYaxis()->SetTitleOffset(1.4);
   c1lep6jin2bex_uHcW__62->GetYaxis()->SetTitleFont(43);
   c1lep6jin2bex_uHcW__62->GetZaxis()->SetLabelFont(43);
   c1lep6jin2bex_uHcW__62->GetZaxis()->SetLabelSize(21);
   c1lep6jin2bex_uHcW__62->GetZaxis()->SetTitleSize(21);
   c1lep6jin2bex_uHcW__62->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep6jin2bex_uHcW,"");
   h_stack->Draw("hist same");
   
   Double_t g_totErr_fx3027[1] = {
   0.8};
   Double_t g_totErr_fy3027[1] = {
   37104.06};
   Double_t g_totErr_felx3027[1] = {
   0.2};
   Double_t g_totErr_fely3027[1] = {
   9552.838};
   Double_t g_totErr_fehx3027[1] = {
   0.2};
   Double_t g_totErr_fehy3027[1] = {
   9552.838};
   grae = new TGraphAsymmErrors(1,g_totErr_fx3027,g_totErr_fy3027,g_totErr_felx3027,g_totErr_fehx3027,g_totErr_fely3027,g_totErr_fehy3027);
   grae->SetName("g_totErr");
   grae->SetTitle("FcncDiscriminant");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(3354);
   grae->SetLineColor(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0);
   
   TH1F *Graph_g_totErr3027 = new TH1F("Graph_g_totErr3027","FcncDiscriminant",100,0.56,1.04);
   Graph_g_totErr3027->SetMinimum(25640.66);
   Graph_g_totErr3027->SetMaximum(48567.47);
   Graph_g_totErr3027->SetDirectory(0);
   Graph_g_totErr3027->SetStats(0);
   Graph_g_totErr3027->SetLineWidth(2);
   Graph_g_totErr3027->SetMarkerStyle(20);
   Graph_g_totErr3027->SetMarkerSize(1.2);
   Graph_g_totErr3027->GetXaxis()->SetLabelFont(43);
   Graph_g_totErr3027->GetXaxis()->SetLabelSize(21);
   Graph_g_totErr3027->GetXaxis()->SetTitleSize(21);
   Graph_g_totErr3027->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_totErr3027->GetXaxis()->SetTitleFont(43);
   Graph_g_totErr3027->GetYaxis()->SetLabelFont(43);
   Graph_g_totErr3027->GetYaxis()->SetLabelSize(21);
   Graph_g_totErr3027->GetYaxis()->SetTitleSize(21);
   Graph_g_totErr3027->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_totErr3027->GetYaxis()->SetTitleFont(43);
   Graph_g_totErr3027->GetZaxis()->SetLabelFont(43);
   Graph_g_totErr3027->GetZaxis()->SetLabelSize(21);
   Graph_g_totErr3027->GetZaxis()->SetTitleSize(21);
   Graph_g_totErr3027->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_totErr3027);
   
   grae->Draw("e2");
   
   Double_t Graph_from_c1lep6jin2bex_Data_fx3028[1] = {
   0.8};
   Double_t Graph_from_c1lep6jin2bex_Data_fy3028[1] = {
   35886};
   Double_t Graph_from_c1lep6jin2bex_Data_felx3028[1] = {
   0.1996};
   Double_t Graph_from_c1lep6jin2bex_Data_fely3028[1] = {
   189.436};
   Double_t Graph_from_c1lep6jin2bex_Data_fehx3028[1] = {
   0.2};
   Double_t Graph_from_c1lep6jin2bex_Data_fehy3028[1] = {
   189.436};
   grae = new TGraphAsymmErrors(1,Graph_from_c1lep6jin2bex_Data_fx3028,Graph_from_c1lep6jin2bex_Data_fy3028,Graph_from_c1lep6jin2bex_Data_felx3028,Graph_from_c1lep6jin2bex_Data_fehx3028,Graph_from_c1lep6jin2bex_Data_fely3028,Graph_from_c1lep6jin2bex_Data_fehy3028);
   grae->SetName("Graph_from_c1lep6jin2bex_Data");
   grae->SetTitle("FcncDiscriminant");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_c1lep6jin2bex_Data3028 = new TH1F("Graph_Graph_from_c1lep6jin2bex_Data3028","FcncDiscriminant",100,0.56044,1.03996);
   Graph_Graph_from_c1lep6jin2bex_Data3028->SetMinimum(35658.68);
   Graph_Graph_from_c1lep6jin2bex_Data3028->SetMaximum(36113.32);
   Graph_Graph_from_c1lep6jin2bex_Data3028->SetDirectory(0);
   Graph_Graph_from_c1lep6jin2bex_Data3028->SetStats(0);
   Graph_Graph_from_c1lep6jin2bex_Data3028->SetLineWidth(2);
   Graph_Graph_from_c1lep6jin2bex_Data3028->SetMarkerStyle(20);
   Graph_Graph_from_c1lep6jin2bex_Data3028->SetMarkerSize(1.2);
   Graph_Graph_from_c1lep6jin2bex_Data3028->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep6jin2bex_Data3028->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep6jin2bex_Data3028->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep6jin2bex_Data3028->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep6jin2bex_Data3028->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep6jin2bex_Data3028->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep6jin2bex_Data3028->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep6jin2bex_Data3028->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep6jin2bex_Data3028->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep6jin2bex_Data3028->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep6jin2bex_Data3028->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep6jin2bex_Data3028->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep6jin2bex_Data3028->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep6jin2bex_Data3028->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_c1lep6jin2bex_Data3028);
   
   grae->Draw("ep1 ");
   Double_t xAxis70[2] = {0.6, 1}; 
   
   TH1D *h_dummy_copy__63 = new TH1D("h_dummy_copy__63","FcncDiscriminant",1, xAxis70);
   h_dummy_copy__63->SetEntries(2561961);
   h_dummy_copy__63->SetDirectory(0);
   h_dummy_copy__63->SetStats(0);
   h_dummy_copy__63->SetMarkerStyle(20);
   h_dummy_copy__63->SetMarkerSize(1.2);
   h_dummy_copy__63->GetXaxis()->SetTitle("LH discriminant");
   h_dummy_copy__63->GetXaxis()->SetRange(1,20);
   h_dummy_copy__63->GetXaxis()->SetLabelFont(43);
   h_dummy_copy__63->GetXaxis()->SetLabelSize(21);
   h_dummy_copy__63->GetXaxis()->SetTitleSize(21);
   h_dummy_copy__63->GetXaxis()->SetTitleOffset(1.4);
   h_dummy_copy__63->GetXaxis()->SetTitleFont(43);
   h_dummy_copy__63->GetYaxis()->SetTitle("Events / 1");
   h_dummy_copy__63->GetYaxis()->SetLabelFont(43);
   h_dummy_copy__63->GetYaxis()->SetLabelSize(16.8);
   h_dummy_copy__63->GetYaxis()->SetTitleSize(21);
   h_dummy_copy__63->GetYaxis()->SetTitleOffset(2.4);
   h_dummy_copy__63->GetYaxis()->SetTitleFont(43);
   h_dummy_copy__63->GetZaxis()->SetLabelFont(43);
   h_dummy_copy__63->GetZaxis()->SetLabelSize(21);
   h_dummy_copy__63->GetZaxis()->SetTitleSize(21);
   h_dummy_copy__63->GetZaxis()->SetTitleFont(43);
   h_dummy_copy__63->Draw("sameaxis");
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
      tex = new TLatex(0.18,0.73,"#geq6j, 2b");
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
   TLegendEntry *entry=leg->AddEntry("c1lep6jin2bex_Data","Data","lep");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep6jin2bex_uHcW","t#bar{t}#rightarrowWbHc (BR=1%)","f");
   entry->SetFillColor(2);
   entry->SetFillStyle(1001);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep6jin2bex_ttbarlight","t#bar{t}+light-jets","f");
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep6jin2bex_ttbarcc","t#bar{t}+#geq1c","f");

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
   entry=leg->AddEntry("c1lep6jin2bex_ttbarbb","t#bar{t}+#geq1b","f");

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
   entry=leg->AddEntry("c1lep6jin2bex_topEW","Non-t#bar{t}","f");

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
   c_c1lep6jin2bex->cd();
   c_c1lep6jin2bex->Modified();
   c_c1lep6jin2bex->cd();
   c_c1lep6jin2bex->SetSelected(c_c1lep6jin2bex);
}
