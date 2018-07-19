void c1lep5jex3bex_lep0_eta()
{
//=========Macro generated from canvas: c_c1lep5jex3bex_lep0_eta/c_c1lep5jex3bex_lep0_eta
//=========  (Thu Jul 19 17:38:07 2018) by ROOT version6.04/14
   TCanvas *c_c1lep5jex3bex_lep0_eta = new TCanvas("c_c1lep5jex3bex_lep0_eta", "c_c1lep5jex3bex_lep0_eta",0,0,600,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c_c1lep5jex3bex_lep0_eta->SetHighLightColor(2);
   c_c1lep5jex3bex_lep0_eta->Range(0,0,1,1);
   c_c1lep5jex3bex_lep0_eta->SetFillColor(0);
   c_c1lep5jex3bex_lep0_eta->SetBorderMode(0);
   c_c1lep5jex3bex_lep0_eta->SetBorderSize(2);
   c_c1lep5jex3bex_lep0_eta->SetTickx(1);
   c_c1lep5jex3bex_lep0_eta->SetTicky(1);
   c_c1lep5jex3bex_lep0_eta->SetLeftMargin(0.16);
   c_c1lep5jex3bex_lep0_eta->SetRightMargin(0.05);
   c_c1lep5jex3bex_lep0_eta->SetTopMargin(0.05);
   c_c1lep5jex3bex_lep0_eta->SetBottomMargin(0.16);
   c_c1lep5jex3bex_lep0_eta->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0,1,0.28);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-3.364198,-0.0873016,2.808642,1.5);
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
   Double_t xAxis311[11] = {-2.5, -2, -1.5, -1, -0.5, 0, 0.5, 1, 1.5, 2, 2.5}; 
   
   TH1D *h_dummy2__280 = new TH1D("h_dummy2__280","Data/MC",10, xAxis311);
   h_dummy2__280->SetMinimum(0.5);
   h_dummy2__280->SetMaximum(1.5);
   h_dummy2__280->SetEntries(1363542);
   h_dummy2__280->SetDirectory(0);
   h_dummy2__280->SetStats(0);
   h_dummy2__280->SetMarkerStyle(20);
   h_dummy2__280->SetMarkerSize(1.2);
   h_dummy2__280->GetXaxis()->SetTitle("lepton #eta");
   h_dummy2__280->GetXaxis()->SetRange(1,30);
   h_dummy2__280->GetXaxis()->SetLabelFont(43);
   h_dummy2__280->GetXaxis()->SetLabelOffset(0.025);
   h_dummy2__280->GetXaxis()->SetLabelSize(16.8);
   h_dummy2__280->GetXaxis()->SetTitleSize(21);
   h_dummy2__280->GetXaxis()->SetTitleOffset(5.05);
   h_dummy2__280->GetXaxis()->SetTitleFont(43);
   h_dummy2__280->GetYaxis()->SetTitle("Data / Bkg");
   h_dummy2__280->GetYaxis()->SetNdivisions(-504);
   h_dummy2__280->GetYaxis()->SetLabelFont(43);
   h_dummy2__280->GetYaxis()->SetLabelOffset(0.02);
   h_dummy2__280->GetYaxis()->SetLabelSize(16.8);
   h_dummy2__280->GetYaxis()->SetTitleSize(21);
   h_dummy2__280->GetYaxis()->SetTitleOffset(2.4);
   h_dummy2__280->GetYaxis()->SetTitleFont(43);
   h_dummy2__280->GetZaxis()->SetLabelFont(43);
   h_dummy2__280->GetZaxis()->SetLabelSize(21);
   h_dummy2__280->GetZaxis()->SetTitleSize(21);
   h_dummy2__280->GetZaxis()->SetTitleFont(43);
   h_dummy2__280->Draw("HIST");
   
   Double_t Graph_from_h_ratio_fx3125[10] = {
   -2.25,
   -1.75,
   -1.25,
   -0.75,
   -0.25,
   0.25,
   0.75,
   1.25,
   1.75,
   2.25};
   Double_t Graph_from_h_ratio_fy3125[10] = {
   1.18862,
   1.193108,
   1.180464,
   1.131023,
   1.203159,
   1.195621,
   1.179042,
   1.078922,
   1.06945,
   0.9467442};
   Double_t Graph_from_h_ratio_felx3125[10] = {
   0.2495,
   0.2495,
   0.2495,
   0.2495,
   0.2495,
   0.2495,
   0.2495,
   0.2495,
   0.2495,
   0.2495};
   Double_t Graph_from_h_ratio_fely3125[10] = {
   0.0578611,
   0.0468336,
   0.03298208,
   0.03242097,
   0.0251588,
   0.03076842,
   0.0261429,
   0.03420413,
   0.03539364,
   0.04962288};
   Double_t Graph_from_h_ratio_fehx3125[10] = {
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25};
   Double_t Graph_from_h_ratio_fehy3125[10] = {
   0.0578611,
   0.0468336,
   0.03298208,
   0.03242097,
   0.0251588,
   0.03076842,
   0.0261429,
   0.03420413,
   0.03539364,
   0.04962288};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(10,Graph_from_h_ratio_fx3125,Graph_from_h_ratio_fy3125,Graph_from_h_ratio_felx3125,Graph_from_h_ratio_fehx3125,Graph_from_h_ratio_fely3125,Graph_from_h_ratio_fehy3125);
   grae->SetName("Graph_from_h_ratio");
   grae->SetTitle("");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(24);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_h_ratio3125 = new TH1F("Graph_Graph_from_h_ratio3125","",100,-2.99945,2.99995);
   Graph_Graph_from_h_ratio3125->SetMinimum(0.8621854);
   Graph_Graph_from_h_ratio3125->SetMaximum(1.281417);
   Graph_Graph_from_h_ratio3125->SetDirectory(0);
   Graph_Graph_from_h_ratio3125->SetStats(0);
   Graph_Graph_from_h_ratio3125->SetLineWidth(2);
   Graph_Graph_from_h_ratio3125->SetMarkerStyle(20);
   Graph_Graph_from_h_ratio3125->SetMarkerSize(1.2);
   Graph_Graph_from_h_ratio3125->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3125->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3125->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3125->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3125->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3125->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3125->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3125->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3125->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3125->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3125->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3125->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3125->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3125->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_h_ratio3125);
   
   grae->Draw("pe0");
   TLine *line = new TLine(-2.5,1,2.5,1);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t g_ratio2_fx3126[10] = {
   -2.25,
   -1.75,
   -1.25,
   -0.75,
   -0.25,
   0.25,
   0.75,
   1.25,
   1.75,
   2.25};
   Double_t g_ratio2_fy3126[10] = {
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
   Double_t g_ratio2_felx3126[10] = {
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25};
   Double_t g_ratio2_fely3126[10] = {
   0.1866671,
   0.1884124,
   0.1921337,
   0.1918926,
   0.1930694,
   0.1910813,
   0.1889299,
   0.1857594,
   0.1833291,
   0.1737036};
   Double_t g_ratio2_fehx3126[10] = {
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25};
   Double_t g_ratio2_fehy3126[10] = {
   0.1866671,
   0.1884124,
   0.1921337,
   0.1918926,
   0.1930694,
   0.1910813,
   0.1889299,
   0.1857594,
   0.1833291,
   0.1737036};
   grae = new TGraphAsymmErrors(10,g_ratio2_fx3126,g_ratio2_fy3126,g_ratio2_felx3126,g_ratio2_fehx3126,g_ratio2_fely3126,g_ratio2_fehy3126);
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
   
   TH1F *Graph_g_ratio23126 = new TH1F("Graph_g_ratio23126","",100,-3,3);
   Graph_g_ratio23126->SetMinimum(0.7683167);
   Graph_g_ratio23126->SetMaximum(1.231683);
   Graph_g_ratio23126->SetDirectory(0);
   Graph_g_ratio23126->SetStats(0);
   Graph_g_ratio23126->SetLineWidth(2);
   Graph_g_ratio23126->SetMarkerStyle(20);
   Graph_g_ratio23126->SetMarkerSize(1.2);
   Graph_g_ratio23126->GetXaxis()->SetLabelFont(43);
   Graph_g_ratio23126->GetXaxis()->SetLabelSize(21);
   Graph_g_ratio23126->GetXaxis()->SetTitleSize(21);
   Graph_g_ratio23126->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23126->GetXaxis()->SetTitleFont(43);
   Graph_g_ratio23126->GetYaxis()->SetLabelFont(43);
   Graph_g_ratio23126->GetYaxis()->SetLabelSize(21);
   Graph_g_ratio23126->GetYaxis()->SetTitleSize(21);
   Graph_g_ratio23126->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23126->GetYaxis()->SetTitleFont(43);
   Graph_g_ratio23126->GetZaxis()->SetLabelFont(43);
   Graph_g_ratio23126->GetZaxis()->SetLabelSize(21);
   Graph_g_ratio23126->GetZaxis()->SetTitleSize(21);
   Graph_g_ratio23126->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_ratio23126);
   
   grae->Draw("e2");
   Double_t xAxis312[11] = {-2.5, -2, -1.5, -1, -0.5, 0, 0.5, 1, 1.5, 2, 2.5}; 
   
   TH1D *h_dummy2_copy__281 = new TH1D("h_dummy2_copy__281","Data/MC",10, xAxis312);
   h_dummy2_copy__281->SetMinimum(0.5);
   h_dummy2_copy__281->SetMaximum(1.5);
   h_dummy2_copy__281->SetEntries(1363542);
   h_dummy2_copy__281->SetDirectory(0);
   h_dummy2_copy__281->SetStats(0);
   h_dummy2_copy__281->SetMarkerStyle(20);
   h_dummy2_copy__281->SetMarkerSize(1.2);
   h_dummy2_copy__281->GetXaxis()->SetTitle("lepton #eta");
   h_dummy2_copy__281->GetXaxis()->SetRange(1,30);
   h_dummy2_copy__281->GetXaxis()->SetLabelFont(43);
   h_dummy2_copy__281->GetXaxis()->SetLabelOffset(0.025);
   h_dummy2_copy__281->GetXaxis()->SetLabelSize(16.8);
   h_dummy2_copy__281->GetXaxis()->SetTitleSize(21);
   h_dummy2_copy__281->GetXaxis()->SetTitleOffset(5.05);
   h_dummy2_copy__281->GetXaxis()->SetTitleFont(43);
   h_dummy2_copy__281->GetYaxis()->SetTitle("Data / Bkg");
   h_dummy2_copy__281->GetYaxis()->SetNdivisions(-504);
   h_dummy2_copy__281->GetYaxis()->SetLabelFont(43);
   h_dummy2_copy__281->GetYaxis()->SetLabelOffset(0.02);
   h_dummy2_copy__281->GetYaxis()->SetLabelSize(16.8);
   h_dummy2_copy__281->GetYaxis()->SetTitleSize(21);
   h_dummy2_copy__281->GetYaxis()->SetTitleOffset(2.4);
   h_dummy2_copy__281->GetYaxis()->SetTitleFont(43);
   h_dummy2_copy__281->GetZaxis()->SetLabelFont(43);
   h_dummy2_copy__281->GetZaxis()->SetLabelSize(21);
   h_dummy2_copy__281->GetZaxis()->SetTitleSize(21);
   h_dummy2_copy__281->GetZaxis()->SetTitleFont(43);
   h_dummy2_copy__281->Draw("sameaxis");
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
   c_c1lep5jex3bex_lep0_eta->cd();
  
// ------------>Primitives in pad: pad0
   TPad *pad0 = new TPad("pad0", "pad0",0,0.2,1,1);
   pad0->Draw();
   pad0->cd();
   pad0->Range(-3.364198,-494.433,2.808642,4449.897);
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
   Double_t xAxis313[11] = {-2.5, -2, -1.5, -1, -0.5, 0, 0.5, 1, 1.5, 2, 2.5}; 
   
   TH1D *h_dummy__282 = new TH1D("h_dummy__282","",10, xAxis313);
   h_dummy__282->SetMinimum(0);
   h_dummy__282->SetMaximum(4202.68);
   h_dummy__282->SetEntries(1363542);
   h_dummy__282->SetDirectory(0);
   h_dummy__282->SetStats(0);
   h_dummy__282->SetMarkerStyle(20);
   h_dummy__282->SetMarkerSize(1.2);
   h_dummy__282->GetXaxis()->SetRange(1,30);
   h_dummy__282->GetXaxis()->SetLabelFont(43);
   h_dummy__282->GetXaxis()->SetLabelSize(0);
   h_dummy__282->GetXaxis()->SetTitleSize(21);
   h_dummy__282->GetXaxis()->SetTitleOffset(1.4);
   h_dummy__282->GetXaxis()->SetTitleFont(43);
   h_dummy__282->GetYaxis()->SetTitle("Events");
   h_dummy__282->GetYaxis()->SetLabelFont(43);
   h_dummy__282->GetYaxis()->SetLabelSize(16.8);
   h_dummy__282->GetYaxis()->SetTitleSize(21);
   h_dummy__282->GetYaxis()->SetTitleOffset(2.4);
   h_dummy__282->GetYaxis()->SetTitleFont(43);
   h_dummy__282->GetZaxis()->SetLabelFont(43);
   h_dummy__282->GetZaxis()->SetLabelSize(21);
   h_dummy__282->GetZaxis()->SetTitleSize(21);
   h_dummy__282->GetZaxis()->SetTitleFont(43);
   h_dummy__282->Draw("HIST");
   
   THStack *h_stack = new THStack();
   h_stack->SetName("h_stack");
   h_stack->SetTitle("h_stack");
   Double_t xAxis314[11] = {-2.5, -2, -1.5, -1, -0.5, 0, 0.5, 1, 1.5, 2, 2.5}; 
   
   TH1F *h_stack_stack_32 = new TH1F("h_stack_stack_32","h_stack",10, xAxis314);
   h_stack_stack_32->SetMinimum(0);
   h_stack_stack_32->SetMaximum(2203.748);
   h_stack_stack_32->SetDirectory(0);
   h_stack_stack_32->SetStats(0);
   h_stack_stack_32->SetLineWidth(2);
   h_stack_stack_32->SetMarkerStyle(20);
   h_stack_stack_32->SetMarkerSize(1.2);
   h_stack_stack_32->GetXaxis()->SetLabelFont(43);
   h_stack_stack_32->GetXaxis()->SetLabelSize(21);
   h_stack_stack_32->GetXaxis()->SetTitleSize(21);
   h_stack_stack_32->GetXaxis()->SetTitleOffset(1.4);
   h_stack_stack_32->GetXaxis()->SetTitleFont(43);
   h_stack_stack_32->GetYaxis()->SetLabelFont(43);
   h_stack_stack_32->GetYaxis()->SetLabelSize(21);
   h_stack_stack_32->GetYaxis()->SetTitleSize(21);
   h_stack_stack_32->GetYaxis()->SetTitleOffset(1.4);
   h_stack_stack_32->GetYaxis()->SetTitleFont(43);
   h_stack_stack_32->GetZaxis()->SetLabelFont(43);
   h_stack_stack_32->GetZaxis()->SetLabelSize(21);
   h_stack_stack_32->GetZaxis()->SetTitleSize(21);
   h_stack_stack_32->GetZaxis()->SetTitleFont(43);
   h_stack->SetHistogram(h_stack_stack_32);
   
   Double_t xAxis315[11] = {-2.5, -2, -1.5, -1, -0.5, 0, 0.5, 1, 1.5, 2, 2.5}; 
   
   TH1D *c1lep5jex3bex_lep0_eta_topEW__283 = new TH1D("c1lep5jex3bex_lep0_eta_topEW__283","",10, xAxis315);
   c1lep5jex3bex_lep0_eta_topEW__283->SetBinContent(1,74.6226);
   c1lep5jex3bex_lep0_eta_topEW__283->SetBinContent(2,97.32669);
   c1lep5jex3bex_lep0_eta_topEW__283->SetBinContent(3,135.1751);
   c1lep5jex3bex_lep0_eta_topEW__283->SetBinContent(4,119.324);
   c1lep5jex3bex_lep0_eta_topEW__283->SetBinContent(5,172.7679);
   c1lep5jex3bex_lep0_eta_topEW__283->SetBinContent(6,128.1809);
   c1lep5jex3bex_lep0_eta_topEW__283->SetBinContent(7,185.9491);
   c1lep5jex3bex_lep0_eta_topEW__283->SetBinContent(8,135.2664);
   c1lep5jex3bex_lep0_eta_topEW__283->SetBinContent(9,148.2691);
   c1lep5jex3bex_lep0_eta_topEW__283->SetBinContent(10,108.5897);
   c1lep5jex3bex_lep0_eta_topEW__283->SetBinContent(11,0.9859975);
   c1lep5jex3bex_lep0_eta_topEW__283->SetBinError(1,19.12868);
   c1lep5jex3bex_lep0_eta_topEW__283->SetBinError(2,20.56141);
   c1lep5jex3bex_lep0_eta_topEW__283->SetBinError(3,21.64947);
   c1lep5jex3bex_lep0_eta_topEW__283->SetBinError(4,21.79698);
   c1lep5jex3bex_lep0_eta_topEW__283->SetBinError(5,22.38417);
   c1lep5jex3bex_lep0_eta_topEW__283->SetBinError(6,22.50691);
   c1lep5jex3bex_lep0_eta_topEW__283->SetBinError(7,24.7484);
   c1lep5jex3bex_lep0_eta_topEW__283->SetBinError(8,25.76218);
   c1lep5jex3bex_lep0_eta_topEW__283->SetBinError(9,27.2948);
   c1lep5jex3bex_lep0_eta_topEW__283->SetBinError(10,27.91511);
   c1lep5jex3bex_lep0_eta_topEW__283->SetBinError(11,1.057955);
   c1lep5jex3bex_lep0_eta_topEW__283->SetEntries(1334926);
   c1lep5jex3bex_lep0_eta_topEW__283->SetDirectory(0);
   c1lep5jex3bex_lep0_eta_topEW__283->SetStats(0);

   ci = TColor::GetColor("#66cc66");
   c1lep5jex3bex_lep0_eta_topEW__283->SetFillColor(ci);
   c1lep5jex3bex_lep0_eta_topEW__283->SetMarkerStyle(20);
   c1lep5jex3bex_lep0_eta_topEW__283->SetMarkerSize(1.2);
   c1lep5jex3bex_lep0_eta_topEW__283->GetXaxis()->SetTitle("Lepton #eta");
   c1lep5jex3bex_lep0_eta_topEW__283->GetXaxis()->SetRange(1,30);
   c1lep5jex3bex_lep0_eta_topEW__283->GetXaxis()->SetLabelFont(43);
   c1lep5jex3bex_lep0_eta_topEW__283->GetXaxis()->SetLabelSize(21);
   c1lep5jex3bex_lep0_eta_topEW__283->GetXaxis()->SetTitleSize(21);
   c1lep5jex3bex_lep0_eta_topEW__283->GetXaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_lep0_eta_topEW__283->GetXaxis()->SetTitleFont(43);
   c1lep5jex3bex_lep0_eta_topEW__283->GetYaxis()->SetLabelFont(43);
   c1lep5jex3bex_lep0_eta_topEW__283->GetYaxis()->SetLabelSize(21);
   c1lep5jex3bex_lep0_eta_topEW__283->GetYaxis()->SetTitleSize(21);
   c1lep5jex3bex_lep0_eta_topEW__283->GetYaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_lep0_eta_topEW__283->GetYaxis()->SetTitleFont(43);
   c1lep5jex3bex_lep0_eta_topEW__283->GetZaxis()->SetLabelFont(43);
   c1lep5jex3bex_lep0_eta_topEW__283->GetZaxis()->SetLabelSize(21);
   c1lep5jex3bex_lep0_eta_topEW__283->GetZaxis()->SetTitleSize(21);
   c1lep5jex3bex_lep0_eta_topEW__283->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep5jex3bex_lep0_eta_topEW,"");
   Double_t xAxis316[11] = {-2.5, -2, -1.5, -1, -0.5, 0, 0.5, 1, 1.5, 2, 2.5}; 
   
   TH1D *c1lep5jex3bex_lep0_eta_ttbarbb__284 = new TH1D("c1lep5jex3bex_lep0_eta_ttbarbb__284","",10, xAxis316);
   c1lep5jex3bex_lep0_eta_ttbarbb__284->SetBinContent(1,142.3084);
   c1lep5jex3bex_lep0_eta_ttbarbb__284->SetBinContent(2,224.6678);
   c1lep5jex3bex_lep0_eta_ttbarbb__284->SetBinContent(3,448.3434);
   c1lep5jex3bex_lep0_eta_ttbarbb__284->SetBinContent(4,473.8928);
   c1lep5jex3bex_lep0_eta_ttbarbb__284->SetBinContent(5,834.028);
   c1lep5jex3bex_lep0_eta_ttbarbb__284->SetBinContent(6,548.0148);
   c1lep5jex3bex_lep0_eta_ttbarbb__284->SetBinContent(7,752.4126);
   c1lep5jex3bex_lep0_eta_ttbarbb__284->SetBinContent(8,401.3961);
   c1lep5jex3bex_lep0_eta_ttbarbb__284->SetBinContent(9,335.8757);
   c1lep5jex3bex_lep0_eta_ttbarbb__284->SetBinContent(10,149.1973);
   c1lep5jex3bex_lep0_eta_ttbarbb__284->SetBinContent(11,12.06955);
   c1lep5jex3bex_lep0_eta_ttbarbb__284->SetBinError(1,7.948796);
   c1lep5jex3bex_lep0_eta_ttbarbb__284->SetBinError(2,9.699966);
   c1lep5jex3bex_lep0_eta_ttbarbb__284->SetBinError(3,12.62358);
   c1lep5jex3bex_lep0_eta_ttbarbb__284->SetBinError(4,14.22405);
   c1lep5jex3bex_lep0_eta_ttbarbb__284->SetBinError(5,18.0255);
   c1lep5jex3bex_lep0_eta_ttbarbb__284->SetBinError(6,14.37268);
   c1lep5jex3bex_lep0_eta_ttbarbb__284->SetBinError(7,17.43866);
   c1lep5jex3bex_lep0_eta_ttbarbb__284->SetBinError(8,12.92274);
   c1lep5jex3bex_lep0_eta_ttbarbb__284->SetBinError(9,11.99794);
   c1lep5jex3bex_lep0_eta_ttbarbb__284->SetBinError(10,9.083666);
   c1lep5jex3bex_lep0_eta_ttbarbb__284->SetBinError(11,2.377561);
   c1lep5jex3bex_lep0_eta_ttbarbb__284->SetEntries(15468);
   c1lep5jex3bex_lep0_eta_ttbarbb__284->SetDirectory(0);
   c1lep5jex3bex_lep0_eta_ttbarbb__284->SetStats(0);

   ci = TColor::GetColor("#6666cc");
   c1lep5jex3bex_lep0_eta_ttbarbb__284->SetFillColor(ci);
   c1lep5jex3bex_lep0_eta_ttbarbb__284->SetMarkerStyle(20);
   c1lep5jex3bex_lep0_eta_ttbarbb__284->SetMarkerSize(1.2);
   c1lep5jex3bex_lep0_eta_ttbarbb__284->GetXaxis()->SetTitle("Lepton #eta");
   c1lep5jex3bex_lep0_eta_ttbarbb__284->GetXaxis()->SetRange(1,30);
   c1lep5jex3bex_lep0_eta_ttbarbb__284->GetXaxis()->SetLabelFont(43);
   c1lep5jex3bex_lep0_eta_ttbarbb__284->GetXaxis()->SetLabelSize(21);
   c1lep5jex3bex_lep0_eta_ttbarbb__284->GetXaxis()->SetTitleSize(21);
   c1lep5jex3bex_lep0_eta_ttbarbb__284->GetXaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_lep0_eta_ttbarbb__284->GetXaxis()->SetTitleFont(43);
   c1lep5jex3bex_lep0_eta_ttbarbb__284->GetYaxis()->SetLabelFont(43);
   c1lep5jex3bex_lep0_eta_ttbarbb__284->GetYaxis()->SetLabelSize(21);
   c1lep5jex3bex_lep0_eta_ttbarbb__284->GetYaxis()->SetTitleSize(21);
   c1lep5jex3bex_lep0_eta_ttbarbb__284->GetYaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_lep0_eta_ttbarbb__284->GetYaxis()->SetTitleFont(43);
   c1lep5jex3bex_lep0_eta_ttbarbb__284->GetZaxis()->SetLabelFont(43);
   c1lep5jex3bex_lep0_eta_ttbarbb__284->GetZaxis()->SetLabelSize(21);
   c1lep5jex3bex_lep0_eta_ttbarbb__284->GetZaxis()->SetTitleSize(21);
   c1lep5jex3bex_lep0_eta_ttbarbb__284->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep5jex3bex_lep0_eta_ttbarbb,"");
   Double_t xAxis317[11] = {-2.5, -2, -1.5, -1, -0.5, 0, 0.5, 1, 1.5, 2, 2.5}; 
   
   TH1D *c1lep5jex3bex_lep0_eta_ttbarcc__285 = new TH1D("c1lep5jex3bex_lep0_eta_ttbarcc__285","",10, xAxis317);
   c1lep5jex3bex_lep0_eta_ttbarcc__285->SetBinContent(1,37.95971);
   c1lep5jex3bex_lep0_eta_ttbarcc__285->SetBinContent(2,65.9983);
   c1lep5jex3bex_lep0_eta_ttbarcc__285->SetBinContent(3,142.877);
   c1lep5jex3bex_lep0_eta_ttbarcc__285->SetBinContent(4,157.1392);
   c1lep5jex3bex_lep0_eta_ttbarcc__285->SetBinContent(5,262.8029);
   c1lep5jex3bex_lep0_eta_ttbarcc__285->SetBinContent(6,175.9918);
   c1lep5jex3bex_lep0_eta_ttbarcc__285->SetBinContent(7,219.3233);
   c1lep5jex3bex_lep0_eta_ttbarcc__285->SetBinContent(8,122.6386);
   c1lep5jex3bex_lep0_eta_ttbarcc__285->SetBinContent(9,104.309);
   c1lep5jex3bex_lep0_eta_ttbarcc__285->SetBinContent(10,29.23519);
   c1lep5jex3bex_lep0_eta_ttbarcc__285->SetBinContent(11,2.55317);
   c1lep5jex3bex_lep0_eta_ttbarcc__285->SetBinError(1,3.756733);
   c1lep5jex3bex_lep0_eta_ttbarcc__285->SetBinError(2,5.607153);
   c1lep5jex3bex_lep0_eta_ttbarcc__285->SetBinError(3,7.732802);
   c1lep5jex3bex_lep0_eta_ttbarcc__285->SetBinError(4,9.233779);
   c1lep5jex3bex_lep0_eta_ttbarcc__285->SetBinError(5,11.83509);
   c1lep5jex3bex_lep0_eta_ttbarcc__285->SetBinError(6,10.29543);
   c1lep5jex3bex_lep0_eta_ttbarcc__285->SetBinError(7,9.476066);
   c1lep5jex3bex_lep0_eta_ttbarcc__285->SetBinError(8,7.739024);
   c1lep5jex3bex_lep0_eta_ttbarcc__285->SetBinError(9,7.453224);
   c1lep5jex3bex_lep0_eta_ttbarcc__285->SetBinError(10,3.698842);
   c1lep5jex3bex_lep0_eta_ttbarcc__285->SetBinError(11,0.8673475);
   c1lep5jex3bex_lep0_eta_ttbarcc__285->SetEntries(4006);
   c1lep5jex3bex_lep0_eta_ttbarcc__285->SetDirectory(0);
   c1lep5jex3bex_lep0_eta_ttbarcc__285->SetStats(0);

   ci = TColor::GetColor("#ccccff");
   c1lep5jex3bex_lep0_eta_ttbarcc__285->SetFillColor(ci);
   c1lep5jex3bex_lep0_eta_ttbarcc__285->SetMarkerStyle(20);
   c1lep5jex3bex_lep0_eta_ttbarcc__285->SetMarkerSize(1.2);
   c1lep5jex3bex_lep0_eta_ttbarcc__285->GetXaxis()->SetTitle("Lepton #eta");
   c1lep5jex3bex_lep0_eta_ttbarcc__285->GetXaxis()->SetRange(1,30);
   c1lep5jex3bex_lep0_eta_ttbarcc__285->GetXaxis()->SetLabelFont(43);
   c1lep5jex3bex_lep0_eta_ttbarcc__285->GetXaxis()->SetLabelSize(21);
   c1lep5jex3bex_lep0_eta_ttbarcc__285->GetXaxis()->SetTitleSize(21);
   c1lep5jex3bex_lep0_eta_ttbarcc__285->GetXaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_lep0_eta_ttbarcc__285->GetXaxis()->SetTitleFont(43);
   c1lep5jex3bex_lep0_eta_ttbarcc__285->GetYaxis()->SetLabelFont(43);
   c1lep5jex3bex_lep0_eta_ttbarcc__285->GetYaxis()->SetLabelSize(21);
   c1lep5jex3bex_lep0_eta_ttbarcc__285->GetYaxis()->SetTitleSize(21);
   c1lep5jex3bex_lep0_eta_ttbarcc__285->GetYaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_lep0_eta_ttbarcc__285->GetYaxis()->SetTitleFont(43);
   c1lep5jex3bex_lep0_eta_ttbarcc__285->GetZaxis()->SetLabelFont(43);
   c1lep5jex3bex_lep0_eta_ttbarcc__285->GetZaxis()->SetLabelSize(21);
   c1lep5jex3bex_lep0_eta_ttbarcc__285->GetZaxis()->SetTitleSize(21);
   c1lep5jex3bex_lep0_eta_ttbarcc__285->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep5jex3bex_lep0_eta_ttbarcc,"");
   Double_t xAxis318[11] = {-2.5, -2, -1.5, -1, -0.5, 0, 0.5, 1, 1.5, 2, 2.5}; 
   
   TH1D *c1lep5jex3bex_lep0_eta_ttbarlight__286 = new TH1D("c1lep5jex3bex_lep0_eta_ttbarlight__286","",10, xAxis318);
   c1lep5jex3bex_lep0_eta_ttbarlight__286->SetBinContent(1,100.1429);
   c1lep5jex3bex_lep0_eta_ttbarlight__286->SetBinContent(2,155.9645);
   c1lep5jex3bex_lep0_eta_ttbarlight__286->SetBinContent(3,358.7715);
   c1lep5jex3bex_lep0_eta_ttbarlight__286->SetBinContent(4,325.6614);
   c1lep5jex3bex_lep0_eta_ttbarlight__286->SetBinContent(5,631.2305);
   c1lep5jex3bex_lep0_eta_ttbarlight__286->SetBinContent(6,410.7542);
   c1lep5jex3bex_lep0_eta_ttbarlight__286->SetBinContent(7,567.4447);
   c1lep5jex3bex_lep0_eta_ttbarlight__286->SetBinContent(8,262.9156);
   c1lep5jex3bex_lep0_eta_ttbarlight__286->SetBinContent(9,265.2558);
   c1lep5jex3bex_lep0_eta_ttbarlight__286->SetBinContent(10,97.45337);
   c1lep5jex3bex_lep0_eta_ttbarlight__286->SetBinContent(11,11.13042);
   c1lep5jex3bex_lep0_eta_ttbarlight__286->SetBinError(1,8.405874);
   c1lep5jex3bex_lep0_eta_ttbarlight__286->SetBinError(2,8.565705);
   c1lep5jex3bex_lep0_eta_ttbarlight__286->SetBinError(3,13.08002);
   c1lep5jex3bex_lep0_eta_ttbarlight__286->SetBinError(4,12.39298);
   c1lep5jex3bex_lep0_eta_ttbarlight__286->SetBinError(5,17.69969);
   c1lep5jex3bex_lep0_eta_ttbarlight__286->SetBinError(6,15.06521);
   c1lep5jex3bex_lep0_eta_ttbarlight__286->SetBinError(7,19.23936);
   c1lep5jex3bex_lep0_eta_ttbarlight__286->SetBinError(8,12.16696);
   c1lep5jex3bex_lep0_eta_ttbarlight__286->SetBinError(9,13.39834);
   c1lep5jex3bex_lep0_eta_ttbarlight__286->SetBinError(10,7.451241);
   c1lep5jex3bex_lep0_eta_ttbarlight__286->SetBinError(11,2.391073);
   c1lep5jex3bex_lep0_eta_ttbarlight__286->SetEntries(9132);
   c1lep5jex3bex_lep0_eta_ttbarlight__286->SetDirectory(0);
   c1lep5jex3bex_lep0_eta_ttbarlight__286->SetStats(0);
   c1lep5jex3bex_lep0_eta_ttbarlight__286->SetMarkerStyle(20);
   c1lep5jex3bex_lep0_eta_ttbarlight__286->SetMarkerSize(1.2);
   c1lep5jex3bex_lep0_eta_ttbarlight__286->GetXaxis()->SetTitle("Lepton #eta");
   c1lep5jex3bex_lep0_eta_ttbarlight__286->GetXaxis()->SetRange(1,30);
   c1lep5jex3bex_lep0_eta_ttbarlight__286->GetXaxis()->SetLabelFont(43);
   c1lep5jex3bex_lep0_eta_ttbarlight__286->GetXaxis()->SetLabelSize(21);
   c1lep5jex3bex_lep0_eta_ttbarlight__286->GetXaxis()->SetTitleSize(21);
   c1lep5jex3bex_lep0_eta_ttbarlight__286->GetXaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_lep0_eta_ttbarlight__286->GetXaxis()->SetTitleFont(43);
   c1lep5jex3bex_lep0_eta_ttbarlight__286->GetYaxis()->SetLabelFont(43);
   c1lep5jex3bex_lep0_eta_ttbarlight__286->GetYaxis()->SetLabelSize(21);
   c1lep5jex3bex_lep0_eta_ttbarlight__286->GetYaxis()->SetTitleSize(21);
   c1lep5jex3bex_lep0_eta_ttbarlight__286->GetYaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_lep0_eta_ttbarlight__286->GetYaxis()->SetTitleFont(43);
   c1lep5jex3bex_lep0_eta_ttbarlight__286->GetZaxis()->SetLabelFont(43);
   c1lep5jex3bex_lep0_eta_ttbarlight__286->GetZaxis()->SetLabelSize(21);
   c1lep5jex3bex_lep0_eta_ttbarlight__286->GetZaxis()->SetTitleSize(21);
   c1lep5jex3bex_lep0_eta_ttbarlight__286->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep5jex3bex_lep0_eta_ttbarlight,"");
   Double_t xAxis319[11] = {-2.5, -2, -1.5, -1, -0.5, 0, 0.5, 1, 1.5, 2, 2.5}; 
   
   TH1D *c1lep5jex3bex_lep0_eta_uHcW__287 = new TH1D("c1lep5jex3bex_lep0_eta_uHcW__287","",10, xAxis319);
   c1lep5jex3bex_lep0_eta_uHcW__287->SetBinContent(1,33.67899);
   c1lep5jex3bex_lep0_eta_uHcW__287->SetBinContent(2,56.94937);
   c1lep5jex3bex_lep0_eta_uHcW__287->SetBinContent(3,118.1442);
   c1lep5jex3bex_lep0_eta_uHcW__287->SetBinContent(4,89.52884);
   c1lep5jex3bex_lep0_eta_uHcW__287->SetBinContent(5,197.9786);
   c1lep5jex3bex_lep0_eta_uHcW__287->SetBinContent(6,131.9883);
   c1lep5jex3bex_lep0_eta_uHcW__287->SetBinContent(7,193.5396);
   c1lep5jex3bex_lep0_eta_uHcW__287->SetBinContent(8,92.16591);
   c1lep5jex3bex_lep0_eta_uHcW__287->SetBinContent(9,75.8568);
   c1lep5jex3bex_lep0_eta_uHcW__287->SetBinContent(10,19.37269);
   c1lep5jex3bex_lep0_eta_uHcW__287->SetBinContent(11,2.599587);
   c1lep5jex3bex_lep0_eta_uHcW__287->SetBinError(1,6.13055);
   c1lep5jex3bex_lep0_eta_uHcW__287->SetBinError(2,6.88394);
   c1lep5jex3bex_lep0_eta_uHcW__287->SetBinError(3,10.24755);
   c1lep5jex3bex_lep0_eta_uHcW__287->SetBinError(4,8.867403);
   c1lep5jex3bex_lep0_eta_uHcW__287->SetBinError(5,13.28288);
   c1lep5jex3bex_lep0_eta_uHcW__287->SetBinError(6,12.02252);
   c1lep5jex3bex_lep0_eta_uHcW__287->SetBinError(7,13.30086);
   c1lep5jex3bex_lep0_eta_uHcW__287->SetBinError(8,10.02717);
   c1lep5jex3bex_lep0_eta_uHcW__287->SetBinError(9,8.722122);
   c1lep5jex3bex_lep0_eta_uHcW__287->SetBinError(10,5.039878);
   c1lep5jex3bex_lep0_eta_uHcW__287->SetBinError(11,0.9778504);
   c1lep5jex3bex_lep0_eta_uHcW__287->SetEntries(5357);
   c1lep5jex3bex_lep0_eta_uHcW__287->SetDirectory(0);
   c1lep5jex3bex_lep0_eta_uHcW__287->SetStats(0);
   c1lep5jex3bex_lep0_eta_uHcW__287->SetFillColor(2);
   c1lep5jex3bex_lep0_eta_uHcW__287->SetLineColor(2);
   c1lep5jex3bex_lep0_eta_uHcW__287->SetMarkerStyle(20);
   c1lep5jex3bex_lep0_eta_uHcW__287->SetMarkerSize(1.2);
   c1lep5jex3bex_lep0_eta_uHcW__287->GetXaxis()->SetTitle("Lepton #eta");
   c1lep5jex3bex_lep0_eta_uHcW__287->GetXaxis()->SetRange(1,30);
   c1lep5jex3bex_lep0_eta_uHcW__287->GetXaxis()->SetLabelFont(43);
   c1lep5jex3bex_lep0_eta_uHcW__287->GetXaxis()->SetLabelSize(21);
   c1lep5jex3bex_lep0_eta_uHcW__287->GetXaxis()->SetTitleSize(21);
   c1lep5jex3bex_lep0_eta_uHcW__287->GetXaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_lep0_eta_uHcW__287->GetXaxis()->SetTitleFont(43);
   c1lep5jex3bex_lep0_eta_uHcW__287->GetYaxis()->SetLabelFont(43);
   c1lep5jex3bex_lep0_eta_uHcW__287->GetYaxis()->SetLabelSize(21);
   c1lep5jex3bex_lep0_eta_uHcW__287->GetYaxis()->SetTitleSize(21);
   c1lep5jex3bex_lep0_eta_uHcW__287->GetYaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_lep0_eta_uHcW__287->GetYaxis()->SetTitleFont(43);
   c1lep5jex3bex_lep0_eta_uHcW__287->GetZaxis()->SetLabelFont(43);
   c1lep5jex3bex_lep0_eta_uHcW__287->GetZaxis()->SetLabelSize(21);
   c1lep5jex3bex_lep0_eta_uHcW__287->GetZaxis()->SetTitleSize(21);
   c1lep5jex3bex_lep0_eta_uHcW__287->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep5jex3bex_lep0_eta_uHcW,"");
   h_stack->Draw("hist same");
   
   Double_t g_totErr_fx3127[10] = {
   -2.25,
   -1.75,
   -1.25,
   -0.75,
   -0.25,
   0.25,
   0.75,
   1.25,
   1.75,
   2.25};
   Double_t g_totErr_fy3127[10] = {
   355.0336,
   543.9573,
   1085.167,
   1076.017,
   1900.829,
   1262.942,
   1725.13,
   922.2166,
   853.7096,
   384.4755};
   Double_t g_totErr_felx3127[10] = {
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25};
   Double_t g_totErr_fely3127[10] = {
   66.27312,
   102.4883,
   208.4971,
   206.4798,
   366.992,
   241.3245,
   325.9286,
   171.3104,
   156.5098,
   66.78477};
   Double_t g_totErr_fehx3127[10] = {
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25};
   Double_t g_totErr_fehy3127[10] = {
   66.27312,
   102.4883,
   208.4971,
   206.4798,
   366.992,
   241.3245,
   325.9286,
   171.3104,
   156.5098,
   66.78477};
   grae = new TGraphAsymmErrors(10,g_totErr_fx3127,g_totErr_fy3127,g_totErr_felx3127,g_totErr_fehx3127,g_totErr_fely3127,g_totErr_fehy3127);
   grae->SetName("g_totErr");
   grae->SetTitle("");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(3354);
   grae->SetLineColor(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0);
   
   TH1F *Graph_g_totErr3127 = new TH1F("Graph_g_totErr3127","",100,-3,3);
   Graph_g_totErr3127->SetMinimum(90.85446);
   Graph_g_totErr3127->SetMaximum(2465.727);
   Graph_g_totErr3127->SetDirectory(0);
   Graph_g_totErr3127->SetStats(0);
   Graph_g_totErr3127->SetLineWidth(2);
   Graph_g_totErr3127->SetMarkerStyle(20);
   Graph_g_totErr3127->SetMarkerSize(1.2);
   Graph_g_totErr3127->GetXaxis()->SetLabelFont(43);
   Graph_g_totErr3127->GetXaxis()->SetLabelSize(21);
   Graph_g_totErr3127->GetXaxis()->SetTitleSize(21);
   Graph_g_totErr3127->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_totErr3127->GetXaxis()->SetTitleFont(43);
   Graph_g_totErr3127->GetYaxis()->SetLabelFont(43);
   Graph_g_totErr3127->GetYaxis()->SetLabelSize(21);
   Graph_g_totErr3127->GetYaxis()->SetTitleSize(21);
   Graph_g_totErr3127->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_totErr3127->GetYaxis()->SetTitleFont(43);
   Graph_g_totErr3127->GetZaxis()->SetLabelFont(43);
   Graph_g_totErr3127->GetZaxis()->SetLabelSize(21);
   Graph_g_totErr3127->GetZaxis()->SetTitleSize(21);
   Graph_g_totErr3127->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_totErr3127);
   
   grae->Draw("e2");
   
   Double_t Graph_from_c1lep5jex3bex_lep0_eta_Data_fx3128[10] = {
   -2.25,
   -1.75,
   -1.25,
   -0.75,
   -0.25,
   0.25,
   0.75,
   1.25,
   1.75,
   2.25};
   Double_t Graph_from_c1lep5jex3bex_lep0_eta_Data_fy3128[10] = {
   422,
   649,
   1281,
   1217,
   2287,
   1510,
   2034,
   995,
   913,
   364};
   Double_t Graph_from_c1lep5jex3bex_lep0_eta_Data_felx3128[10] = {
   0.2495,
   0.2495,
   0.2495,
   0.2495,
   0.2495,
   0.2495,
   0.2495,
   0.2495,
   0.2495,
   0.2495};
   Double_t Graph_from_c1lep5jex3bex_lep0_eta_Data_fely3128[10] = {
   20.54264,
   25.47548,
   35.79106,
   34.88553,
   47.82259,
   38.85872,
   45.09989,
   31.54362,
   30.21589,
   19.07878};
   Double_t Graph_from_c1lep5jex3bex_lep0_eta_Data_fehx3128[10] = {
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25,
   0.25};
   Double_t Graph_from_c1lep5jex3bex_lep0_eta_Data_fehy3128[10] = {
   20.54264,
   25.47548,
   35.79106,
   34.88553,
   47.82259,
   38.85872,
   45.09989,
   31.54362,
   30.21589,
   19.07878};
   grae = new TGraphAsymmErrors(10,Graph_from_c1lep5jex3bex_lep0_eta_Data_fx3128,Graph_from_c1lep5jex3bex_lep0_eta_Data_fy3128,Graph_from_c1lep5jex3bex_lep0_eta_Data_felx3128,Graph_from_c1lep5jex3bex_lep0_eta_Data_fehx3128,Graph_from_c1lep5jex3bex_lep0_eta_Data_fely3128,Graph_from_c1lep5jex3bex_lep0_eta_Data_fehy3128);
   grae->SetName("Graph_from_c1lep5jex3bex_lep0_eta_Data");
   grae->SetTitle("");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_c1lep5jex3bex_lep0_eta_Data3128 = new TH1F("Graph_Graph_from_c1lep5jex3bex_lep0_eta_Data3128","",100,-2.99945,2.99995);
   Graph_Graph_from_c1lep5jex3bex_lep0_eta_Data3128->SetMinimum(145.9311);
   Graph_Graph_from_c1lep5jex3bex_lep0_eta_Data3128->SetMaximum(2533.813);
   Graph_Graph_from_c1lep5jex3bex_lep0_eta_Data3128->SetDirectory(0);
   Graph_Graph_from_c1lep5jex3bex_lep0_eta_Data3128->SetStats(0);
   Graph_Graph_from_c1lep5jex3bex_lep0_eta_Data3128->SetLineWidth(2);
   Graph_Graph_from_c1lep5jex3bex_lep0_eta_Data3128->SetMarkerStyle(20);
   Graph_Graph_from_c1lep5jex3bex_lep0_eta_Data3128->SetMarkerSize(1.2);
   Graph_Graph_from_c1lep5jex3bex_lep0_eta_Data3128->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep5jex3bex_lep0_eta_Data3128->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep5jex3bex_lep0_eta_Data3128->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep5jex3bex_lep0_eta_Data3128->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep5jex3bex_lep0_eta_Data3128->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep5jex3bex_lep0_eta_Data3128->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep5jex3bex_lep0_eta_Data3128->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep5jex3bex_lep0_eta_Data3128->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep5jex3bex_lep0_eta_Data3128->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep5jex3bex_lep0_eta_Data3128->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep5jex3bex_lep0_eta_Data3128->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep5jex3bex_lep0_eta_Data3128->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep5jex3bex_lep0_eta_Data3128->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep5jex3bex_lep0_eta_Data3128->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_c1lep5jex3bex_lep0_eta_Data3128);
   
   grae->Draw("ep1 ");
   Double_t xAxis320[11] = {-2.5, -2, -1.5, -1, -0.5, 0, 0.5, 1, 1.5, 2, 2.5}; 
   
   TH1D *h_dummy_copy__288 = new TH1D("h_dummy_copy__288","",10, xAxis320);
   h_dummy_copy__288->SetEntries(1363542);
   h_dummy_copy__288->SetDirectory(0);
   h_dummy_copy__288->SetStats(0);
   h_dummy_copy__288->SetMarkerStyle(20);
   h_dummy_copy__288->SetMarkerSize(1.2);
   h_dummy_copy__288->GetXaxis()->SetTitle("lepton #eta");
   h_dummy_copy__288->GetXaxis()->SetRange(1,30);
   h_dummy_copy__288->GetXaxis()->SetLabelFont(43);
   h_dummy_copy__288->GetXaxis()->SetLabelSize(21);
   h_dummy_copy__288->GetXaxis()->SetTitleSize(21);
   h_dummy_copy__288->GetXaxis()->SetTitleOffset(1.4);
   h_dummy_copy__288->GetXaxis()->SetTitleFont(43);
   h_dummy_copy__288->GetYaxis()->SetTitle("Events");
   h_dummy_copy__288->GetYaxis()->SetLabelFont(43);
   h_dummy_copy__288->GetYaxis()->SetLabelSize(16.8);
   h_dummy_copy__288->GetYaxis()->SetTitleSize(21);
   h_dummy_copy__288->GetYaxis()->SetTitleOffset(2.4);
   h_dummy_copy__288->GetYaxis()->SetTitleFont(43);
   h_dummy_copy__288->GetZaxis()->SetLabelFont(43);
   h_dummy_copy__288->GetZaxis()->SetLabelSize(21);
   h_dummy_copy__288->GetZaxis()->SetTitleSize(21);
   h_dummy_copy__288->GetZaxis()->SetTitleFont(43);
   h_dummy_copy__288->Draw("sameaxis");
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
   TLegendEntry *entry=leg->AddEntry("c1lep5jex3bex_lep0_eta_Data","Data","lep");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep5jex3bex_lep0_eta_uHcW","t#bar{t}#rightarrowWbHc (BR=1%)","f");
   entry->SetFillColor(2);
   entry->SetFillStyle(1001);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep5jex3bex_lep0_eta_ttbarlight","t#bar{t}+light","f");
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep5jex3bex_lep0_eta_ttbarcc","t#bar{t}+cc","f");

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
   entry=leg->AddEntry("c1lep5jex3bex_lep0_eta_ttbarbb","t#bar{t}+bb","f");

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
   entry=leg->AddEntry("c1lep5jex3bex_lep0_eta_topEW","Non-t#bar{t}","f");

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
   c_c1lep5jex3bex_lep0_eta->cd();
   c_c1lep5jex3bex_lep0_eta->Modified();
   c_c1lep5jex3bex_lep0_eta->cd();
   c_c1lep5jex3bex_lep0_eta->SetSelected(c_c1lep5jex3bex_lep0_eta);
}
