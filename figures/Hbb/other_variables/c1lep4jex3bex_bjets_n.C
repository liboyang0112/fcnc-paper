void c1lep4jex3bex_bjets_n()
{
//=========Macro generated from canvas: c_c1lep4jex3bex_bjets_n/c_c1lep4jex3bex_bjets_n
//=========  (Thu Jul 19 16:48:44 2018) by ROOT version6.04/14
   TCanvas *c_c1lep4jex3bex_bjets_n = new TCanvas("c_c1lep4jex3bex_bjets_n", "c_c1lep4jex3bex_bjets_n",0,0,600,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c_c1lep4jex3bex_bjets_n->SetHighLightColor(2);
   c_c1lep4jex3bex_bjets_n->Range(0,0,1,1);
   c_c1lep4jex3bex_bjets_n->SetFillColor(0);
   c_c1lep4jex3bex_bjets_n->SetBorderMode(0);
   c_c1lep4jex3bex_bjets_n->SetBorderSize(2);
   c_c1lep4jex3bex_bjets_n->SetTickx(1);
   c_c1lep4jex3bex_bjets_n->SetTicky(1);
   c_c1lep4jex3bex_bjets_n->SetLeftMargin(0.16);
   c_c1lep4jex3bex_bjets_n->SetRightMargin(0.05);
   c_c1lep4jex3bex_bjets_n->SetTopMargin(0.05);
   c_c1lep4jex3bex_bjets_n->SetBottomMargin(0.16);
   c_c1lep4jex3bex_bjets_n->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0,1,0.28);
   pad1->Draw();
   pad1->cd();
   pad1->Range(0.9814815,-0.0873016,4.685185,1.5);
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
   Double_t xAxis421[4] = {1.5, 2.5, 3.5, 4.5}; 
   
   TH1D *h_dummy2__379 = new TH1D("h_dummy2__379","Data/MC",3, xAxis421);
   h_dummy2__379->SetMinimum(0.5);
   h_dummy2__379->SetMaximum(1.5);
   h_dummy2__379->SetEntries(2920965);
   h_dummy2__379->SetDirectory(0);
   h_dummy2__379->SetStats(0);
   h_dummy2__379->SetMarkerStyle(20);
   h_dummy2__379->SetMarkerSize(1.2);
   h_dummy2__379->GetXaxis()->SetTitle("N_{b}");
   h_dummy2__379->GetXaxis()->SetRange(1,9);
   h_dummy2__379->GetXaxis()->SetLabelFont(43);
   h_dummy2__379->GetXaxis()->SetLabelOffset(0.025);
   h_dummy2__379->GetXaxis()->SetLabelSize(16.8);
   h_dummy2__379->GetXaxis()->SetTitleSize(21);
   h_dummy2__379->GetXaxis()->SetTitleOffset(5.05);
   h_dummy2__379->GetXaxis()->SetTitleFont(43);
   h_dummy2__379->GetYaxis()->SetTitle("Data / Bkg");
   h_dummy2__379->GetYaxis()->SetNdivisions(-504);
   h_dummy2__379->GetYaxis()->SetLabelFont(43);
   h_dummy2__379->GetYaxis()->SetLabelOffset(0.02);
   h_dummy2__379->GetYaxis()->SetLabelSize(16.8);
   h_dummy2__379->GetYaxis()->SetTitleSize(21);
   h_dummy2__379->GetYaxis()->SetTitleOffset(2.4);
   h_dummy2__379->GetYaxis()->SetTitleFont(43);
   h_dummy2__379->GetZaxis()->SetLabelFont(43);
   h_dummy2__379->GetZaxis()->SetLabelSize(21);
   h_dummy2__379->GetZaxis()->SetTitleSize(21);
   h_dummy2__379->GetZaxis()->SetTitleFont(43);
   h_dummy2__379->Draw("HIST");
   
   Double_t Graph_from_h_ratio_fx3169[3] = {
   2,
   3,
   4};
   Double_t Graph_from_h_ratio_fy3169[3] = {
   0,
   1.114024,
   0};
   Double_t Graph_from_h_ratio_felx3169[3] = {
   0.499,
   0.499,
   0.499};
   Double_t Graph_from_h_ratio_fely3169[3] = {
   0,
   0.01049147,
   0};
   Double_t Graph_from_h_ratio_fehx3169[3] = {
   0.5,
   0.5,
   0.5};
   Double_t Graph_from_h_ratio_fehy3169[3] = {
   0,
   0.01049147,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(3,Graph_from_h_ratio_fx3169,Graph_from_h_ratio_fy3169,Graph_from_h_ratio_felx3169,Graph_from_h_ratio_fehx3169,Graph_from_h_ratio_fely3169,Graph_from_h_ratio_fehy3169);
   grae->SetName("Graph_from_h_ratio");
   grae->SetTitle("");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(24);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_h_ratio3169 = new TH1F("Graph_Graph_from_h_ratio3169","",100,1.2011,4.7999);
   Graph_Graph_from_h_ratio3169->SetMinimum(0);
   Graph_Graph_from_h_ratio3169->SetMaximum(1.236967);
   Graph_Graph_from_h_ratio3169->SetDirectory(0);
   Graph_Graph_from_h_ratio3169->SetStats(0);
   Graph_Graph_from_h_ratio3169->SetLineWidth(2);
   Graph_Graph_from_h_ratio3169->SetMarkerStyle(20);
   Graph_Graph_from_h_ratio3169->SetMarkerSize(1.2);
   Graph_Graph_from_h_ratio3169->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3169->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3169->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3169->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3169->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3169->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3169->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3169->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3169->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3169->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3169->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3169->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3169->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3169->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_h_ratio3169);
   
   grae->Draw("pe0");
   TLine *line = new TLine(1.5,1,4.5,1);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t g_ratio2_fx3170[3] = {
   2,
   3,
   4};
   Double_t g_ratio2_fy3170[3] = {
   1,
   1,
   1};
   Double_t g_ratio2_felx3170[3] = {
   0.5,
   0.5,
   0.5};
   Double_t g_ratio2_fely3170[3] = {
   4246439,
   0.1933613,
   4246439};
   Double_t g_ratio2_fehx3170[3] = {
   0.5,
   0.5,
   0.5};
   Double_t g_ratio2_fehy3170[3] = {
   4246439,
   0.1933613,
   4246439};
   grae = new TGraphAsymmErrors(3,g_ratio2_fx3170,g_ratio2_fy3170,g_ratio2_felx3170,g_ratio2_fehx3170,g_ratio2_fely3170,g_ratio2_fehy3170);
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
   
   TH1F *Graph_g_ratio23170 = new TH1F("Graph_g_ratio23170","",100,1.2,4.8);
   Graph_g_ratio23170->SetMinimum(-5095726);
   Graph_g_ratio23170->SetMaximum(5095728);
   Graph_g_ratio23170->SetDirectory(0);
   Graph_g_ratio23170->SetStats(0);
   Graph_g_ratio23170->SetLineWidth(2);
   Graph_g_ratio23170->SetMarkerStyle(20);
   Graph_g_ratio23170->SetMarkerSize(1.2);
   Graph_g_ratio23170->GetXaxis()->SetLabelFont(43);
   Graph_g_ratio23170->GetXaxis()->SetLabelSize(21);
   Graph_g_ratio23170->GetXaxis()->SetTitleSize(21);
   Graph_g_ratio23170->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23170->GetXaxis()->SetTitleFont(43);
   Graph_g_ratio23170->GetYaxis()->SetLabelFont(43);
   Graph_g_ratio23170->GetYaxis()->SetLabelSize(21);
   Graph_g_ratio23170->GetYaxis()->SetTitleSize(21);
   Graph_g_ratio23170->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23170->GetYaxis()->SetTitleFont(43);
   Graph_g_ratio23170->GetZaxis()->SetLabelFont(43);
   Graph_g_ratio23170->GetZaxis()->SetLabelSize(21);
   Graph_g_ratio23170->GetZaxis()->SetTitleSize(21);
   Graph_g_ratio23170->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_ratio23170);
   
   grae->Draw("e2");
   Double_t xAxis422[4] = {1.5, 2.5, 3.5, 4.5}; 
   
   TH1D *h_dummy2_copy__380 = new TH1D("h_dummy2_copy__380","Data/MC",3, xAxis422);
   h_dummy2_copy__380->SetMinimum(0.5);
   h_dummy2_copy__380->SetMaximum(1.5);
   h_dummy2_copy__380->SetEntries(2920965);
   h_dummy2_copy__380->SetDirectory(0);
   h_dummy2_copy__380->SetStats(0);
   h_dummy2_copy__380->SetMarkerStyle(20);
   h_dummy2_copy__380->SetMarkerSize(1.2);
   h_dummy2_copy__380->GetXaxis()->SetTitle("N_{b}");
   h_dummy2_copy__380->GetXaxis()->SetRange(1,9);
   h_dummy2_copy__380->GetXaxis()->SetLabelFont(43);
   h_dummy2_copy__380->GetXaxis()->SetLabelOffset(0.025);
   h_dummy2_copy__380->GetXaxis()->SetLabelSize(16.8);
   h_dummy2_copy__380->GetXaxis()->SetTitleSize(21);
   h_dummy2_copy__380->GetXaxis()->SetTitleOffset(5.05);
   h_dummy2_copy__380->GetXaxis()->SetTitleFont(43);
   h_dummy2_copy__380->GetYaxis()->SetTitle("Data / Bkg");
   h_dummy2_copy__380->GetYaxis()->SetNdivisions(-504);
   h_dummy2_copy__380->GetYaxis()->SetLabelFont(43);
   h_dummy2_copy__380->GetYaxis()->SetLabelOffset(0.02);
   h_dummy2_copy__380->GetYaxis()->SetLabelSize(16.8);
   h_dummy2_copy__380->GetYaxis()->SetTitleSize(21);
   h_dummy2_copy__380->GetYaxis()->SetTitleOffset(2.4);
   h_dummy2_copy__380->GetYaxis()->SetTitleFont(43);
   h_dummy2_copy__380->GetZaxis()->SetLabelFont(43);
   h_dummy2_copy__380->GetZaxis()->SetLabelSize(21);
   h_dummy2_copy__380->GetZaxis()->SetTitleSize(21);
   h_dummy2_copy__380->GetZaxis()->SetTitleFont(43);
   h_dummy2_copy__380->Draw("sameaxis");
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
   c_c1lep4jex3bex_bjets_n->cd();
  
// ------------>Primitives in pad: pad0
   TPad *pad0 = new TPad("pad0", "pad0",0,0.2,1,1);
   pad0->Draw();
   pad0->cd();
   pad0->Range(0.9814815,-2410.133,4.685185,21691.2);
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
   Double_t xAxis423[4] = {1.5, 2.5, 3.5, 4.5}; 
   
   TH1D *h_dummy__381 = new TH1D("h_dummy__381","",3, xAxis423);
   h_dummy__381->SetMinimum(0);
   h_dummy__381->SetMaximum(20486.13);
   h_dummy__381->SetEntries(2920965);
   h_dummy__381->SetDirectory(0);
   h_dummy__381->SetStats(0);
   h_dummy__381->SetMarkerStyle(20);
   h_dummy__381->SetMarkerSize(1.2);
   h_dummy__381->GetXaxis()->SetRange(1,9);
   h_dummy__381->GetXaxis()->SetLabelFont(43);
   h_dummy__381->GetXaxis()->SetLabelSize(0);
   h_dummy__381->GetXaxis()->SetTitleSize(21);
   h_dummy__381->GetXaxis()->SetTitleOffset(1.4);
   h_dummy__381->GetXaxis()->SetTitleFont(43);
   h_dummy__381->GetYaxis()->SetTitle("Events");
   h_dummy__381->GetYaxis()->SetLabelFont(43);
   h_dummy__381->GetYaxis()->SetLabelSize(16.8);
   h_dummy__381->GetYaxis()->SetTitleSize(21);
   h_dummy__381->GetYaxis()->SetTitleOffset(2.4);
   h_dummy__381->GetYaxis()->SetTitleFont(43);
   h_dummy__381->GetZaxis()->SetLabelFont(43);
   h_dummy__381->GetZaxis()->SetLabelSize(21);
   h_dummy__381->GetZaxis()->SetTitleSize(21);
   h_dummy__381->GetZaxis()->SetTitleFont(43);
   h_dummy__381->Draw("HIST");
   
   THStack *h_stack = new THStack();
   h_stack->SetName("h_stack");
   h_stack->SetTitle("h_stack");
   Double_t xAxis424[4] = {1.5, 2.5, 3.5, 4.5}; 
   
   TH1F *h_stack_stack_43 = new TH1F("h_stack_stack_43","h_stack",3, xAxis424);
   h_stack_stack_43->SetMinimum(-48.14027);
   h_stack_stack_43->SetMaximum(11289.12);
   h_stack_stack_43->SetDirectory(0);
   h_stack_stack_43->SetStats(0);
   h_stack_stack_43->SetLineWidth(2);
   h_stack_stack_43->SetMarkerStyle(20);
   h_stack_stack_43->SetMarkerSize(1.2);
   h_stack_stack_43->GetXaxis()->SetLabelFont(43);
   h_stack_stack_43->GetXaxis()->SetLabelSize(21);
   h_stack_stack_43->GetXaxis()->SetTitleSize(21);
   h_stack_stack_43->GetXaxis()->SetTitleOffset(1.4);
   h_stack_stack_43->GetXaxis()->SetTitleFont(43);
   h_stack_stack_43->GetYaxis()->SetLabelFont(43);
   h_stack_stack_43->GetYaxis()->SetLabelSize(21);
   h_stack_stack_43->GetYaxis()->SetTitleSize(21);
   h_stack_stack_43->GetYaxis()->SetTitleOffset(1.4);
   h_stack_stack_43->GetYaxis()->SetTitleFont(43);
   h_stack_stack_43->GetZaxis()->SetLabelFont(43);
   h_stack_stack_43->GetZaxis()->SetLabelSize(21);
   h_stack_stack_43->GetZaxis()->SetTitleSize(21);
   h_stack_stack_43->GetZaxis()->SetTitleFont(43);
   h_stack->SetHistogram(h_stack_stack_43);
   
   Double_t xAxis425[4] = {1.5, 2.5, 3.5, 4.5}; 
   
   TH1D *c1lep4jex3bex_bjets_n_topEW__382 = new TH1D("c1lep4jex3bex_bjets_n_topEW__382","",3, xAxis425);
   c1lep4jex3bex_bjets_n_topEW__382->SetBinContent(1,1.299998e-05);
   c1lep4jex3bex_bjets_n_topEW__382->SetBinContent(2,1835.133);
   c1lep4jex3bex_bjets_n_topEW__382->SetBinContent(3,1.299998e-05);
   c1lep4jex3bex_bjets_n_topEW__382->SetBinError(1,24.38558);
   c1lep4jex3bex_bjets_n_topEW__382->SetBinError(2,153.0216);
   c1lep4jex3bex_bjets_n_topEW__382->SetBinError(3,24.38558);
   c1lep4jex3bex_bjets_n_topEW__382->SetEntries(2895054);
   c1lep4jex3bex_bjets_n_topEW__382->SetDirectory(0);
   c1lep4jex3bex_bjets_n_topEW__382->SetStats(0);

   ci = TColor::GetColor("#66cc66");
   c1lep4jex3bex_bjets_n_topEW__382->SetFillColor(ci);
   c1lep4jex3bex_bjets_n_topEW__382->SetMarkerStyle(20);
   c1lep4jex3bex_bjets_n_topEW__382->SetMarkerSize(1.2);
   c1lep4jex3bex_bjets_n_topEW__382->GetXaxis()->SetTitle("Number of b-jets");
   c1lep4jex3bex_bjets_n_topEW__382->GetXaxis()->SetRange(1,9);
   c1lep4jex3bex_bjets_n_topEW__382->GetXaxis()->SetLabelFont(43);
   c1lep4jex3bex_bjets_n_topEW__382->GetXaxis()->SetLabelSize(21);
   c1lep4jex3bex_bjets_n_topEW__382->GetXaxis()->SetTitleSize(21);
   c1lep4jex3bex_bjets_n_topEW__382->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_bjets_n_topEW__382->GetXaxis()->SetTitleFont(43);
   c1lep4jex3bex_bjets_n_topEW__382->GetYaxis()->SetLabelFont(43);
   c1lep4jex3bex_bjets_n_topEW__382->GetYaxis()->SetLabelSize(21);
   c1lep4jex3bex_bjets_n_topEW__382->GetYaxis()->SetTitleSize(21);
   c1lep4jex3bex_bjets_n_topEW__382->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_bjets_n_topEW__382->GetYaxis()->SetTitleFont(43);
   c1lep4jex3bex_bjets_n_topEW__382->GetZaxis()->SetLabelFont(43);
   c1lep4jex3bex_bjets_n_topEW__382->GetZaxis()->SetLabelSize(21);
   c1lep4jex3bex_bjets_n_topEW__382->GetZaxis()->SetTitleSize(21);
   c1lep4jex3bex_bjets_n_topEW__382->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jex3bex_bjets_n_topEW,"");
   Double_t xAxis426[4] = {1.5, 2.5, 3.5, 4.5}; 
   
   TH1D *c1lep4jex3bex_bjets_n_ttbarbb__383 = new TH1D("c1lep4jex3bex_bjets_n_ttbarbb__383","",3, xAxis426);
   c1lep4jex3bex_bjets_n_ttbarbb__383->SetBinContent(1,1e-06);
   c1lep4jex3bex_bjets_n_ttbarbb__383->SetBinContent(2,2896.615);
   c1lep4jex3bex_bjets_n_ttbarbb__383->SetBinContent(3,1e-06);
   c1lep4jex3bex_bjets_n_ttbarbb__383->SetBinError(1,35.31256);
   c1lep4jex3bex_bjets_n_ttbarbb__383->SetBinError(2,35.31256);
   c1lep4jex3bex_bjets_n_ttbarbb__383->SetBinError(3,35.31256);
   c1lep4jex3bex_bjets_n_ttbarbb__383->SetEntries(10168);
   c1lep4jex3bex_bjets_n_ttbarbb__383->SetDirectory(0);
   c1lep4jex3bex_bjets_n_ttbarbb__383->SetStats(0);

   ci = TColor::GetColor("#6666cc");
   c1lep4jex3bex_bjets_n_ttbarbb__383->SetFillColor(ci);
   c1lep4jex3bex_bjets_n_ttbarbb__383->SetMarkerStyle(20);
   c1lep4jex3bex_bjets_n_ttbarbb__383->SetMarkerSize(1.2);
   c1lep4jex3bex_bjets_n_ttbarbb__383->GetXaxis()->SetTitle("Number of b-jets");
   c1lep4jex3bex_bjets_n_ttbarbb__383->GetXaxis()->SetRange(1,9);
   c1lep4jex3bex_bjets_n_ttbarbb__383->GetXaxis()->SetLabelFont(43);
   c1lep4jex3bex_bjets_n_ttbarbb__383->GetXaxis()->SetLabelSize(21);
   c1lep4jex3bex_bjets_n_ttbarbb__383->GetXaxis()->SetTitleSize(21);
   c1lep4jex3bex_bjets_n_ttbarbb__383->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_bjets_n_ttbarbb__383->GetXaxis()->SetTitleFont(43);
   c1lep4jex3bex_bjets_n_ttbarbb__383->GetYaxis()->SetLabelFont(43);
   c1lep4jex3bex_bjets_n_ttbarbb__383->GetYaxis()->SetLabelSize(21);
   c1lep4jex3bex_bjets_n_ttbarbb__383->GetYaxis()->SetTitleSize(21);
   c1lep4jex3bex_bjets_n_ttbarbb__383->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_bjets_n_ttbarbb__383->GetYaxis()->SetTitleFont(43);
   c1lep4jex3bex_bjets_n_ttbarbb__383->GetZaxis()->SetLabelFont(43);
   c1lep4jex3bex_bjets_n_ttbarbb__383->GetZaxis()->SetLabelSize(21);
   c1lep4jex3bex_bjets_n_ttbarbb__383->GetZaxis()->SetTitleSize(21);
   c1lep4jex3bex_bjets_n_ttbarbb__383->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jex3bex_bjets_n_ttbarbb,"");
   Double_t xAxis427[4] = {1.5, 2.5, 3.5, 4.5}; 
   
   TH1D *c1lep4jex3bex_bjets_n_ttbarcc__384 = new TH1D("c1lep4jex3bex_bjets_n_ttbarcc__384","",3, xAxis427);
   c1lep4jex3bex_bjets_n_ttbarcc__384->SetBinContent(1,1e-06);
   c1lep4jex3bex_bjets_n_ttbarcc__384->SetBinContent(2,1052.65);
   c1lep4jex3bex_bjets_n_ttbarcc__384->SetBinContent(3,1e-06);
   c1lep4jex3bex_bjets_n_ttbarcc__384->SetBinError(1,21.38042);
   c1lep4jex3bex_bjets_n_ttbarcc__384->SetBinError(2,21.38042);
   c1lep4jex3bex_bjets_n_ttbarcc__384->SetBinError(3,21.38042);
   c1lep4jex3bex_bjets_n_ttbarcc__384->SetEntries(3208);
   c1lep4jex3bex_bjets_n_ttbarcc__384->SetDirectory(0);
   c1lep4jex3bex_bjets_n_ttbarcc__384->SetStats(0);

   ci = TColor::GetColor("#ccccff");
   c1lep4jex3bex_bjets_n_ttbarcc__384->SetFillColor(ci);
   c1lep4jex3bex_bjets_n_ttbarcc__384->SetMarkerStyle(20);
   c1lep4jex3bex_bjets_n_ttbarcc__384->SetMarkerSize(1.2);
   c1lep4jex3bex_bjets_n_ttbarcc__384->GetXaxis()->SetTitle("Number of b-jets");
   c1lep4jex3bex_bjets_n_ttbarcc__384->GetXaxis()->SetRange(1,9);
   c1lep4jex3bex_bjets_n_ttbarcc__384->GetXaxis()->SetLabelFont(43);
   c1lep4jex3bex_bjets_n_ttbarcc__384->GetXaxis()->SetLabelSize(21);
   c1lep4jex3bex_bjets_n_ttbarcc__384->GetXaxis()->SetTitleSize(21);
   c1lep4jex3bex_bjets_n_ttbarcc__384->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_bjets_n_ttbarcc__384->GetXaxis()->SetTitleFont(43);
   c1lep4jex3bex_bjets_n_ttbarcc__384->GetYaxis()->SetLabelFont(43);
   c1lep4jex3bex_bjets_n_ttbarcc__384->GetYaxis()->SetLabelSize(21);
   c1lep4jex3bex_bjets_n_ttbarcc__384->GetYaxis()->SetTitleSize(21);
   c1lep4jex3bex_bjets_n_ttbarcc__384->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_bjets_n_ttbarcc__384->GetYaxis()->SetTitleFont(43);
   c1lep4jex3bex_bjets_n_ttbarcc__384->GetZaxis()->SetLabelFont(43);
   c1lep4jex3bex_bjets_n_ttbarcc__384->GetZaxis()->SetLabelSize(21);
   c1lep4jex3bex_bjets_n_ttbarcc__384->GetZaxis()->SetTitleSize(21);
   c1lep4jex3bex_bjets_n_ttbarcc__384->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jex3bex_bjets_n_ttbarcc,"");
   Double_t xAxis428[4] = {1.5, 2.5, 3.5, 4.5}; 
   
   TH1D *c1lep4jex3bex_bjets_n_ttbarlight__385 = new TH1D("c1lep4jex3bex_bjets_n_ttbarlight__385","",3, xAxis428);
   c1lep4jex3bex_bjets_n_ttbarlight__385->SetBinContent(1,1e-06);
   c1lep4jex3bex_bjets_n_ttbarlight__385->SetBinContent(2,4336.567);
   c1lep4jex3bex_bjets_n_ttbarlight__385->SetBinContent(3,1e-06);
   c1lep4jex3bex_bjets_n_ttbarlight__385->SetBinError(1,48.14027);
   c1lep4jex3bex_bjets_n_ttbarlight__385->SetBinError(2,48.14027);
   c1lep4jex3bex_bjets_n_ttbarlight__385->SetBinError(3,48.14027);
   c1lep4jex3bex_bjets_n_ttbarlight__385->SetEntries(12532);
   c1lep4jex3bex_bjets_n_ttbarlight__385->SetDirectory(0);
   c1lep4jex3bex_bjets_n_ttbarlight__385->SetStats(0);
   c1lep4jex3bex_bjets_n_ttbarlight__385->SetMarkerStyle(20);
   c1lep4jex3bex_bjets_n_ttbarlight__385->SetMarkerSize(1.2);
   c1lep4jex3bex_bjets_n_ttbarlight__385->GetXaxis()->SetTitle("Number of b-jets");
   c1lep4jex3bex_bjets_n_ttbarlight__385->GetXaxis()->SetRange(1,9);
   c1lep4jex3bex_bjets_n_ttbarlight__385->GetXaxis()->SetLabelFont(43);
   c1lep4jex3bex_bjets_n_ttbarlight__385->GetXaxis()->SetLabelSize(21);
   c1lep4jex3bex_bjets_n_ttbarlight__385->GetXaxis()->SetTitleSize(21);
   c1lep4jex3bex_bjets_n_ttbarlight__385->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_bjets_n_ttbarlight__385->GetXaxis()->SetTitleFont(43);
   c1lep4jex3bex_bjets_n_ttbarlight__385->GetYaxis()->SetLabelFont(43);
   c1lep4jex3bex_bjets_n_ttbarlight__385->GetYaxis()->SetLabelSize(21);
   c1lep4jex3bex_bjets_n_ttbarlight__385->GetYaxis()->SetTitleSize(21);
   c1lep4jex3bex_bjets_n_ttbarlight__385->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_bjets_n_ttbarlight__385->GetYaxis()->SetTitleFont(43);
   c1lep4jex3bex_bjets_n_ttbarlight__385->GetZaxis()->SetLabelFont(43);
   c1lep4jex3bex_bjets_n_ttbarlight__385->GetZaxis()->SetLabelSize(21);
   c1lep4jex3bex_bjets_n_ttbarlight__385->GetZaxis()->SetTitleSize(21);
   c1lep4jex3bex_bjets_n_ttbarlight__385->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jex3bex_bjets_n_ttbarlight,"");
   Double_t xAxis429[4] = {1.5, 2.5, 3.5, 4.5}; 
   
   TH1D *c1lep4jex3bex_bjets_n_uHcW__386 = new TH1D("c1lep4jex3bex_bjets_n_uHcW__386","",3, xAxis429);
   c1lep4jex3bex_bjets_n_uHcW__386->SetBinContent(2,630.5727);
   c1lep4jex3bex_bjets_n_uHcW__386->SetBinError(2,16.35196);
   c1lep4jex3bex_bjets_n_uHcW__386->SetEntries(5559);
   c1lep4jex3bex_bjets_n_uHcW__386->SetDirectory(0);
   c1lep4jex3bex_bjets_n_uHcW__386->SetStats(0);
   c1lep4jex3bex_bjets_n_uHcW__386->SetFillColor(2);
   c1lep4jex3bex_bjets_n_uHcW__386->SetLineColor(2);
   c1lep4jex3bex_bjets_n_uHcW__386->SetMarkerStyle(20);
   c1lep4jex3bex_bjets_n_uHcW__386->SetMarkerSize(1.2);
   c1lep4jex3bex_bjets_n_uHcW__386->GetXaxis()->SetTitle("Number of b-jets");
   c1lep4jex3bex_bjets_n_uHcW__386->GetXaxis()->SetRange(1,9);
   c1lep4jex3bex_bjets_n_uHcW__386->GetXaxis()->SetLabelFont(43);
   c1lep4jex3bex_bjets_n_uHcW__386->GetXaxis()->SetLabelSize(21);
   c1lep4jex3bex_bjets_n_uHcW__386->GetXaxis()->SetTitleSize(21);
   c1lep4jex3bex_bjets_n_uHcW__386->GetXaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_bjets_n_uHcW__386->GetXaxis()->SetTitleFont(43);
   c1lep4jex3bex_bjets_n_uHcW__386->GetYaxis()->SetLabelFont(43);
   c1lep4jex3bex_bjets_n_uHcW__386->GetYaxis()->SetLabelSize(21);
   c1lep4jex3bex_bjets_n_uHcW__386->GetYaxis()->SetTitleSize(21);
   c1lep4jex3bex_bjets_n_uHcW__386->GetYaxis()->SetTitleOffset(1.4);
   c1lep4jex3bex_bjets_n_uHcW__386->GetYaxis()->SetTitleFont(43);
   c1lep4jex3bex_bjets_n_uHcW__386->GetZaxis()->SetLabelFont(43);
   c1lep4jex3bex_bjets_n_uHcW__386->GetZaxis()->SetLabelSize(21);
   c1lep4jex3bex_bjets_n_uHcW__386->GetZaxis()->SetTitleSize(21);
   c1lep4jex3bex_bjets_n_uHcW__386->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep4jex3bex_bjets_n_uHcW,"");
   h_stack->Draw("hist same");
   
   Double_t g_totErr_fx3171[3] = {
   2,
   3,
   4};
   Double_t g_totErr_fy3171[3] = {
   1.599998e-05,
   10120.97,
   1.599998e-05};
   Double_t g_totErr_felx3171[3] = {
   0.5,
   0.5,
   0.5};
   Double_t g_totErr_fely3171[3] = {
   67.94293,
   1957.003,
   67.94293};
   Double_t g_totErr_fehx3171[3] = {
   0.5,
   0.5,
   0.5};
   Double_t g_totErr_fehy3171[3] = {
   67.94293,
   1957.003,
   67.94293};
   grae = new TGraphAsymmErrors(3,g_totErr_fx3171,g_totErr_fy3171,g_totErr_felx3171,g_totErr_fehx3171,g_totErr_fely3171,g_totErr_fehy3171);
   grae->SetName("g_totErr");
   grae->SetTitle("");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(3354);
   grae->SetLineColor(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0);
   
   TH1F *Graph_g_totErr3171 = new TH1F("Graph_g_totErr3171","",100,1.2,4.8);
   Graph_g_totErr3171->SetMinimum(-1282.534);
   Graph_g_totErr3171->SetMaximum(13292.56);
   Graph_g_totErr3171->SetDirectory(0);
   Graph_g_totErr3171->SetStats(0);
   Graph_g_totErr3171->SetLineWidth(2);
   Graph_g_totErr3171->SetMarkerStyle(20);
   Graph_g_totErr3171->SetMarkerSize(1.2);
   Graph_g_totErr3171->GetXaxis()->SetLabelFont(43);
   Graph_g_totErr3171->GetXaxis()->SetLabelSize(21);
   Graph_g_totErr3171->GetXaxis()->SetTitleSize(21);
   Graph_g_totErr3171->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_totErr3171->GetXaxis()->SetTitleFont(43);
   Graph_g_totErr3171->GetYaxis()->SetLabelFont(43);
   Graph_g_totErr3171->GetYaxis()->SetLabelSize(21);
   Graph_g_totErr3171->GetYaxis()->SetTitleSize(21);
   Graph_g_totErr3171->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_totErr3171->GetYaxis()->SetTitleFont(43);
   Graph_g_totErr3171->GetZaxis()->SetLabelFont(43);
   Graph_g_totErr3171->GetZaxis()->SetLabelSize(21);
   Graph_g_totErr3171->GetZaxis()->SetTitleSize(21);
   Graph_g_totErr3171->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_totErr3171);
   
   grae->Draw("e2");
   
   Double_t Graph_from_c1lep4jex3bex_bjets_n_Data_fx3172[3] = {
   2,
   3,
   4};
   Double_t Graph_from_c1lep4jex3bex_bjets_n_Data_fy3172[3] = {
   0,
   11275,
   0};
   Double_t Graph_from_c1lep4jex3bex_bjets_n_Data_felx3172[3] = {
   0.499,
   0.499,
   0.499};
   Double_t Graph_from_c1lep4jex3bex_bjets_n_Data_fely3172[3] = {
   0,
   106.1838,
   0};
   Double_t Graph_from_c1lep4jex3bex_bjets_n_Data_fehx3172[3] = {
   0.5,
   0.5,
   0.5};
   Double_t Graph_from_c1lep4jex3bex_bjets_n_Data_fehy3172[3] = {
   0,
   106.1838,
   0};
   grae = new TGraphAsymmErrors(3,Graph_from_c1lep4jex3bex_bjets_n_Data_fx3172,Graph_from_c1lep4jex3bex_bjets_n_Data_fy3172,Graph_from_c1lep4jex3bex_bjets_n_Data_felx3172,Graph_from_c1lep4jex3bex_bjets_n_Data_fehx3172,Graph_from_c1lep4jex3bex_bjets_n_Data_fely3172,Graph_from_c1lep4jex3bex_bjets_n_Data_fehy3172);
   grae->SetName("Graph_from_c1lep4jex3bex_bjets_n_Data");
   grae->SetTitle("");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_c1lep4jex3bex_bjets_n_Data3172 = new TH1F("Graph_Graph_from_c1lep4jex3bex_bjets_n_Data3172","",100,1.2011,4.7999);
   Graph_Graph_from_c1lep4jex3bex_bjets_n_Data3172->SetMinimum(0);
   Graph_Graph_from_c1lep4jex3bex_bjets_n_Data3172->SetMaximum(12519.3);
   Graph_Graph_from_c1lep4jex3bex_bjets_n_Data3172->SetDirectory(0);
   Graph_Graph_from_c1lep4jex3bex_bjets_n_Data3172->SetStats(0);
   Graph_Graph_from_c1lep4jex3bex_bjets_n_Data3172->SetLineWidth(2);
   Graph_Graph_from_c1lep4jex3bex_bjets_n_Data3172->SetMarkerStyle(20);
   Graph_Graph_from_c1lep4jex3bex_bjets_n_Data3172->SetMarkerSize(1.2);
   Graph_Graph_from_c1lep4jex3bex_bjets_n_Data3172->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep4jex3bex_bjets_n_Data3172->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep4jex3bex_bjets_n_Data3172->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep4jex3bex_bjets_n_Data3172->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep4jex3bex_bjets_n_Data3172->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep4jex3bex_bjets_n_Data3172->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep4jex3bex_bjets_n_Data3172->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep4jex3bex_bjets_n_Data3172->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep4jex3bex_bjets_n_Data3172->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep4jex3bex_bjets_n_Data3172->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep4jex3bex_bjets_n_Data3172->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep4jex3bex_bjets_n_Data3172->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep4jex3bex_bjets_n_Data3172->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep4jex3bex_bjets_n_Data3172->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_c1lep4jex3bex_bjets_n_Data3172);
   
   grae->Draw("ep1 ");
   Double_t xAxis430[4] = {1.5, 2.5, 3.5, 4.5}; 
   
   TH1D *h_dummy_copy__387 = new TH1D("h_dummy_copy__387","",3, xAxis430);
   h_dummy_copy__387->SetEntries(2920965);
   h_dummy_copy__387->SetDirectory(0);
   h_dummy_copy__387->SetStats(0);
   h_dummy_copy__387->SetMarkerStyle(20);
   h_dummy_copy__387->SetMarkerSize(1.2);
   h_dummy_copy__387->GetXaxis()->SetTitle("N_{b}");
   h_dummy_copy__387->GetXaxis()->SetRange(1,9);
   h_dummy_copy__387->GetXaxis()->SetLabelFont(43);
   h_dummy_copy__387->GetXaxis()->SetLabelSize(21);
   h_dummy_copy__387->GetXaxis()->SetTitleSize(21);
   h_dummy_copy__387->GetXaxis()->SetTitleOffset(1.4);
   h_dummy_copy__387->GetXaxis()->SetTitleFont(43);
   h_dummy_copy__387->GetYaxis()->SetTitle("Events");
   h_dummy_copy__387->GetYaxis()->SetLabelFont(43);
   h_dummy_copy__387->GetYaxis()->SetLabelSize(16.8);
   h_dummy_copy__387->GetYaxis()->SetTitleSize(21);
   h_dummy_copy__387->GetYaxis()->SetTitleOffset(2.4);
   h_dummy_copy__387->GetYaxis()->SetTitleFont(43);
   h_dummy_copy__387->GetZaxis()->SetLabelFont(43);
   h_dummy_copy__387->GetZaxis()->SetLabelSize(21);
   h_dummy_copy__387->GetZaxis()->SetTitleSize(21);
   h_dummy_copy__387->GetZaxis()->SetTitleFont(43);
   h_dummy_copy__387->Draw("sameaxis");
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
   TLegendEntry *entry=leg->AddEntry("c1lep4jex3bex_bjets_n_Data","Data","lep");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep4jex3bex_bjets_n_uHcW","t#rightarrow Hc","f");
   entry->SetFillColor(2);
   entry->SetFillStyle(1001);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep4jex3bex_bjets_n_ttbarlight","t#bar{t}+light","f");
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep4jex3bex_bjets_n_ttbarcc","t#bar{t}+cc","f");

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
   entry=leg->AddEntry("c1lep4jex3bex_bjets_n_ttbarbb","t#bar{t}+bb","f");

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
   entry=leg->AddEntry("c1lep4jex3bex_bjets_n_topEW","Non-t#bar{t}","f");

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
   c_c1lep4jex3bex_bjets_n->cd();
   c_c1lep4jex3bex_bjets_n->Modified();
   c_c1lep4jex3bex_bjets_n->cd();
   c_c1lep4jex3bex_bjets_n->SetSelected(c_c1lep4jex3bex_bjets_n);
}
