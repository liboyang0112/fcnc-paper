void c1lep5jex3bex_mbb_leading_bjets()
{
//=========Macro generated from canvas: c_c1lep5jex3bex_mbb_leading_bjets/c_c1lep5jex3bex_mbb_leading_bjets
//=========  (Thu Jul 19 17:38:08 2018) by ROOT version6.04/14
   TCanvas *c_c1lep5jex3bex_mbb_leading_bjets = new TCanvas("c_c1lep5jex3bex_mbb_leading_bjets", "c_c1lep5jex3bex_mbb_leading_bjets",0,0,600,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c_c1lep5jex3bex_mbb_leading_bjets->SetHighLightColor(2);
   c_c1lep5jex3bex_mbb_leading_bjets->Range(0,0,1,1);
   c_c1lep5jex3bex_mbb_leading_bjets->SetFillColor(0);
   c_c1lep5jex3bex_mbb_leading_bjets->SetBorderMode(0);
   c_c1lep5jex3bex_mbb_leading_bjets->SetBorderSize(2);
   c_c1lep5jex3bex_mbb_leading_bjets->SetTickx(1);
   c_c1lep5jex3bex_mbb_leading_bjets->SetTicky(1);
   c_c1lep5jex3bex_mbb_leading_bjets->SetLeftMargin(0.16);
   c_c1lep5jex3bex_mbb_leading_bjets->SetRightMargin(0.05);
   c_c1lep5jex3bex_mbb_leading_bjets->SetTopMargin(0.05);
   c_c1lep5jex3bex_mbb_leading_bjets->SetBottomMargin(0.16);
   c_c1lep5jex3bex_mbb_leading_bjets->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0,1,0.28);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-27.77778,-0.0873016,527.7778,1.5);
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
   Double_t xAxis411[10] = {50, 100, 150, 200, 250, 300, 350, 400, 450, 500}; 
   
   TH1D *h_dummy2__370 = new TH1D("h_dummy2__370","Data/MC",9, xAxis411);
   h_dummy2__370->SetMinimum(0.5);
   h_dummy2__370->SetMaximum(1.5);
   h_dummy2__370->SetEntries(1363468);
   h_dummy2__370->SetDirectory(0);
   h_dummy2__370->SetStats(0);
   h_dummy2__370->SetMarkerStyle(20);
   h_dummy2__370->SetMarkerSize(1.2);
   h_dummy2__370->GetXaxis()->SetTitle("m_{bb} leading b-jets [GeV]");
   h_dummy2__370->GetXaxis()->SetRange(1,1000);
   h_dummy2__370->GetXaxis()->SetLabelFont(43);
   h_dummy2__370->GetXaxis()->SetLabelOffset(0.025);
   h_dummy2__370->GetXaxis()->SetLabelSize(16.8);
   h_dummy2__370->GetXaxis()->SetTitleSize(21);
   h_dummy2__370->GetXaxis()->SetTitleOffset(5.05);
   h_dummy2__370->GetXaxis()->SetTitleFont(43);
   h_dummy2__370->GetYaxis()->SetTitle("Data / Bkg");
   h_dummy2__370->GetYaxis()->SetNdivisions(-504);
   h_dummy2__370->GetYaxis()->SetLabelFont(43);
   h_dummy2__370->GetYaxis()->SetLabelOffset(0.02);
   h_dummy2__370->GetYaxis()->SetLabelSize(16.8);
   h_dummy2__370->GetYaxis()->SetTitleSize(21);
   h_dummy2__370->GetYaxis()->SetTitleOffset(2.4);
   h_dummy2__370->GetYaxis()->SetTitleFont(43);
   h_dummy2__370->GetZaxis()->SetLabelFont(43);
   h_dummy2__370->GetZaxis()->SetLabelSize(21);
   h_dummy2__370->GetZaxis()->SetTitleSize(21);
   h_dummy2__370->GetZaxis()->SetTitleFont(43);
   h_dummy2__370->Draw("HIST");
   
   Double_t Graph_from_h_ratio_fx3165[9] = {
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475};
   Double_t Graph_from_h_ratio_fy3165[9] = {
   1.212637,
   1.17354,
   1.125644,
   1.127279,
   1.147446,
   1.04184,
   1.210984,
   1.14964,
   1.191457};
   Double_t Graph_from_h_ratio_felx3165[9] = {
   24.95,
   24.95,
   24.95,
   24.95,
   24.95,
   24.95,
   24.95,
   24.95,
   24.95};
   Double_t Graph_from_h_ratio_fely3165[9] = {
   0.02879082,
   0.02198241,
   0.02451691,
   0.02900968,
   0.03506206,
   0.04086433,
   0.05640116,
   0.0667089,
   0.08424873};
   Double_t Graph_from_h_ratio_fehx3165[9] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t Graph_from_h_ratio_fehy3165[9] = {
   0.02879082,
   0.02198241,
   0.02451691,
   0.02900968,
   0.03506206,
   0.04086433,
   0.05640116,
   0.0667089,
   0.08424873};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(9,Graph_from_h_ratio_fx3165,Graph_from_h_ratio_fy3165,Graph_from_h_ratio_felx3165,Graph_from_h_ratio_fehx3165,Graph_from_h_ratio_fely3165,Graph_from_h_ratio_fehy3165);
   grae->SetName("Graph_from_h_ratio");
   grae->SetTitle("");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(24);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_h_ratio3165 = new TH1F("Graph_Graph_from_h_ratio3165","",100,5.055,544.995);
   Graph_Graph_from_h_ratio3165->SetMinimum(0.9735027);
   Graph_Graph_from_h_ratio3165->SetMaximum(1.303179);
   Graph_Graph_from_h_ratio3165->SetDirectory(0);
   Graph_Graph_from_h_ratio3165->SetStats(0);
   Graph_Graph_from_h_ratio3165->SetLineWidth(2);
   Graph_Graph_from_h_ratio3165->SetMarkerStyle(20);
   Graph_Graph_from_h_ratio3165->SetMarkerSize(1.2);
   Graph_Graph_from_h_ratio3165->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3165->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3165->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3165->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3165->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3165->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3165->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3165->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3165->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3165->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3165->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3165->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3165->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3165->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_h_ratio3165);
   
   grae->Draw("pe0");
   TLine *line = new TLine(50,1,500,1);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t g_ratio2_fx3166[9] = {
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475};
   Double_t g_ratio2_fy3166[9] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t g_ratio2_felx3166[9] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t g_ratio2_fely3166[9] = {
   0.2080009,
   0.2056278,
   0.1874318,
   0.1790412,
   0.183167,
   0.1864372,
   0.1889036,
   0.1948092,
   0.1965528};
   Double_t g_ratio2_fehx3166[9] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t g_ratio2_fehy3166[9] = {
   0.2080009,
   0.2056278,
   0.1874318,
   0.1790412,
   0.183167,
   0.1864372,
   0.1889036,
   0.1948092,
   0.1965528};
   grae = new TGraphAsymmErrors(9,g_ratio2_fx3166,g_ratio2_fy3166,g_ratio2_felx3166,g_ratio2_fehx3166,g_ratio2_fely3166,g_ratio2_fehy3166);
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
   
   TH1F *Graph_g_ratio23166 = new TH1F("Graph_g_ratio23166","",100,5,545);
   Graph_g_ratio23166->SetMinimum(0.7503989);
   Graph_g_ratio23166->SetMaximum(1.249601);
   Graph_g_ratio23166->SetDirectory(0);
   Graph_g_ratio23166->SetStats(0);
   Graph_g_ratio23166->SetLineWidth(2);
   Graph_g_ratio23166->SetMarkerStyle(20);
   Graph_g_ratio23166->SetMarkerSize(1.2);
   Graph_g_ratio23166->GetXaxis()->SetLabelFont(43);
   Graph_g_ratio23166->GetXaxis()->SetLabelSize(21);
   Graph_g_ratio23166->GetXaxis()->SetTitleSize(21);
   Graph_g_ratio23166->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23166->GetXaxis()->SetTitleFont(43);
   Graph_g_ratio23166->GetYaxis()->SetLabelFont(43);
   Graph_g_ratio23166->GetYaxis()->SetLabelSize(21);
   Graph_g_ratio23166->GetYaxis()->SetTitleSize(21);
   Graph_g_ratio23166->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23166->GetYaxis()->SetTitleFont(43);
   Graph_g_ratio23166->GetZaxis()->SetLabelFont(43);
   Graph_g_ratio23166->GetZaxis()->SetLabelSize(21);
   Graph_g_ratio23166->GetZaxis()->SetTitleSize(21);
   Graph_g_ratio23166->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_ratio23166);
   
   grae->Draw("e2");
   Double_t xAxis412[10] = {50, 100, 150, 200, 250, 300, 350, 400, 450, 500}; 
   
   TH1D *h_dummy2_copy__371 = new TH1D("h_dummy2_copy__371","Data/MC",9, xAxis412);
   h_dummy2_copy__371->SetMinimum(0.5);
   h_dummy2_copy__371->SetMaximum(1.5);
   h_dummy2_copy__371->SetEntries(1363468);
   h_dummy2_copy__371->SetDirectory(0);
   h_dummy2_copy__371->SetStats(0);
   h_dummy2_copy__371->SetMarkerStyle(20);
   h_dummy2_copy__371->SetMarkerSize(1.2);
   h_dummy2_copy__371->GetXaxis()->SetTitle("m_{bb} leading b-jets [GeV]");
   h_dummy2_copy__371->GetXaxis()->SetRange(1,1000);
   h_dummy2_copy__371->GetXaxis()->SetLabelFont(43);
   h_dummy2_copy__371->GetXaxis()->SetLabelOffset(0.025);
   h_dummy2_copy__371->GetXaxis()->SetLabelSize(16.8);
   h_dummy2_copy__371->GetXaxis()->SetTitleSize(21);
   h_dummy2_copy__371->GetXaxis()->SetTitleOffset(5.05);
   h_dummy2_copy__371->GetXaxis()->SetTitleFont(43);
   h_dummy2_copy__371->GetYaxis()->SetTitle("Data / Bkg");
   h_dummy2_copy__371->GetYaxis()->SetNdivisions(-504);
   h_dummy2_copy__371->GetYaxis()->SetLabelFont(43);
   h_dummy2_copy__371->GetYaxis()->SetLabelOffset(0.02);
   h_dummy2_copy__371->GetYaxis()->SetLabelSize(16.8);
   h_dummy2_copy__371->GetYaxis()->SetTitleSize(21);
   h_dummy2_copy__371->GetYaxis()->SetTitleOffset(2.4);
   h_dummy2_copy__371->GetYaxis()->SetTitleFont(43);
   h_dummy2_copy__371->GetZaxis()->SetLabelFont(43);
   h_dummy2_copy__371->GetZaxis()->SetLabelSize(21);
   h_dummy2_copy__371->GetZaxis()->SetTitleSize(21);
   h_dummy2_copy__371->GetZaxis()->SetTitleFont(43);
   h_dummy2_copy__371->Draw("sameaxis");
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
   c_c1lep5jex3bex_mbb_leading_bjets->cd();
  
// ------------>Primitives in pad: pad0
   TPad *pad0 = new TPad("pad0", "pad0",0,0.2,1,1);
   pad0->Draw();
   pad0->cd();
   pad0->Range(-27.77778,-614.8346,527.7778,5533.511);
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
   Double_t xAxis413[10] = {50, 100, 150, 200, 250, 300, 350, 400, 450, 500}; 
   
   TH1D *h_dummy__372 = new TH1D("h_dummy__372","",9, xAxis413);
   h_dummy__372->SetMinimum(0);
   h_dummy__372->SetMaximum(5226.094);
   h_dummy__372->SetEntries(1363468);
   h_dummy__372->SetDirectory(0);
   h_dummy__372->SetStats(0);
   h_dummy__372->SetMarkerStyle(20);
   h_dummy__372->SetMarkerSize(1.2);
   h_dummy__372->GetXaxis()->SetRange(1,1000);
   h_dummy__372->GetXaxis()->SetLabelFont(43);
   h_dummy__372->GetXaxis()->SetLabelSize(0);
   h_dummy__372->GetXaxis()->SetTitleSize(21);
   h_dummy__372->GetXaxis()->SetTitleOffset(1.4);
   h_dummy__372->GetXaxis()->SetTitleFont(43);
   h_dummy__372->GetYaxis()->SetTitle("Events / 50 GeV");
   h_dummy__372->GetYaxis()->SetLabelFont(43);
   h_dummy__372->GetYaxis()->SetLabelSize(16.8);
   h_dummy__372->GetYaxis()->SetTitleSize(21);
   h_dummy__372->GetYaxis()->SetTitleOffset(2.4);
   h_dummy__372->GetYaxis()->SetTitleFont(43);
   h_dummy__372->GetZaxis()->SetLabelFont(43);
   h_dummy__372->GetZaxis()->SetLabelSize(21);
   h_dummy__372->GetZaxis()->SetTitleSize(21);
   h_dummy__372->GetZaxis()->SetTitleFont(43);
   h_dummy__372->Draw("HIST");
   
   THStack *h_stack = new THStack();
   h_stack->SetName("h_stack");
   h_stack->SetTitle("h_stack");
   Double_t xAxis414[10] = {50, 100, 150, 200, 250, 300, 350, 400, 450, 500}; 
   
   TH1F *h_stack_stack_42 = new TH1F("h_stack_stack_42","h_stack",9, xAxis414);
   h_stack_stack_42->SetMinimum(0);
   h_stack_stack_42->SetMaximum(2918.524);
   h_stack_stack_42->SetDirectory(0);
   h_stack_stack_42->SetStats(0);
   h_stack_stack_42->SetLineWidth(2);
   h_stack_stack_42->SetMarkerStyle(20);
   h_stack_stack_42->SetMarkerSize(1.2);
   h_stack_stack_42->GetXaxis()->SetLabelFont(43);
   h_stack_stack_42->GetXaxis()->SetLabelSize(21);
   h_stack_stack_42->GetXaxis()->SetTitleSize(21);
   h_stack_stack_42->GetXaxis()->SetTitleOffset(1.4);
   h_stack_stack_42->GetXaxis()->SetTitleFont(43);
   h_stack_stack_42->GetYaxis()->SetLabelFont(43);
   h_stack_stack_42->GetYaxis()->SetLabelSize(21);
   h_stack_stack_42->GetYaxis()->SetTitleSize(21);
   h_stack_stack_42->GetYaxis()->SetTitleOffset(1.4);
   h_stack_stack_42->GetYaxis()->SetTitleFont(43);
   h_stack_stack_42->GetZaxis()->SetLabelFont(43);
   h_stack_stack_42->GetZaxis()->SetLabelSize(21);
   h_stack_stack_42->GetZaxis()->SetTitleSize(21);
   h_stack_stack_42->GetZaxis()->SetTitleFont(43);
   h_stack->SetHistogram(h_stack_stack_42);
   
   Double_t xAxis415[10] = {50, 100, 150, 200, 250, 300, 350, 400, 450, 500}; 
   
   TH1D *c1lep5jex3bex_mbb_leading_bjets_topEW__373 = new TH1D("c1lep5jex3bex_mbb_leading_bjets_topEW__373","",9, xAxis415);
   c1lep5jex3bex_mbb_leading_bjets_topEW__373->SetBinContent(0,85.45052);
   c1lep5jex3bex_mbb_leading_bjets_topEW__373->SetBinContent(1,236.694);
   c1lep5jex3bex_mbb_leading_bjets_topEW__373->SetBinContent(2,266.729);
   c1lep5jex3bex_mbb_leading_bjets_topEW__373->SetBinContent(3,209.8491);
   c1lep5jex3bex_mbb_leading_bjets_topEW__373->SetBinContent(4,160.3343);
   c1lep5jex3bex_mbb_leading_bjets_topEW__373->SetBinContent(5,111.4599);
   c1lep5jex3bex_mbb_leading_bjets_topEW__373->SetBinContent(6,80.68358);
   c1lep5jex3bex_mbb_leading_bjets_topEW__373->SetBinContent(7,50.83798);
   c1lep5jex3bex_mbb_leading_bjets_topEW__373->SetBinContent(8,37.21792);
   c1lep5jex3bex_mbb_leading_bjets_topEW__373->SetBinContent(9,28.158);
   c1lep5jex3bex_mbb_leading_bjets_topEW__373->SetBinContent(10,38.85088);
   c1lep5jex3bex_mbb_leading_bjets_topEW__373->SetBinError(0,16.755);
   c1lep5jex3bex_mbb_leading_bjets_topEW__373->SetBinError(1,33.31784);
   c1lep5jex3bex_mbb_leading_bjets_topEW__373->SetBinError(2,32.29914);
   c1lep5jex3bex_mbb_leading_bjets_topEW__373->SetBinError(3,30.05968);
   c1lep5jex3bex_mbb_leading_bjets_topEW__373->SetBinError(4,26.78982);
   c1lep5jex3bex_mbb_leading_bjets_topEW__373->SetBinError(5,22.65149);
   c1lep5jex3bex_mbb_leading_bjets_topEW__373->SetBinError(6,18.509);
   c1lep5jex3bex_mbb_leading_bjets_topEW__373->SetBinError(7,14.18783);
   c1lep5jex3bex_mbb_leading_bjets_topEW__373->SetBinError(8,11.86911);
   c1lep5jex3bex_mbb_leading_bjets_topEW__373->SetBinError(9,11.36603);
   c1lep5jex3bex_mbb_leading_bjets_topEW__373->SetBinError(10,10.73837);
   c1lep5jex3bex_mbb_leading_bjets_topEW__373->SetEntries(1334853);
   c1lep5jex3bex_mbb_leading_bjets_topEW__373->SetDirectory(0);
   c1lep5jex3bex_mbb_leading_bjets_topEW__373->SetStats(0);

   ci = TColor::GetColor("#66cc66");
   c1lep5jex3bex_mbb_leading_bjets_topEW__373->SetFillColor(ci);
   c1lep5jex3bex_mbb_leading_bjets_topEW__373->SetMarkerStyle(20);
   c1lep5jex3bex_mbb_leading_bjets_topEW__373->SetMarkerSize(1.2);
   c1lep5jex3bex_mbb_leading_bjets_topEW__373->GetXaxis()->SetTitle("m(b,b) leading b-jets [GeV]");
   c1lep5jex3bex_mbb_leading_bjets_topEW__373->GetXaxis()->SetRange(1,1000);
   c1lep5jex3bex_mbb_leading_bjets_topEW__373->GetXaxis()->SetLabelFont(43);
   c1lep5jex3bex_mbb_leading_bjets_topEW__373->GetXaxis()->SetLabelSize(21);
   c1lep5jex3bex_mbb_leading_bjets_topEW__373->GetXaxis()->SetTitleSize(21);
   c1lep5jex3bex_mbb_leading_bjets_topEW__373->GetXaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_mbb_leading_bjets_topEW__373->GetXaxis()->SetTitleFont(43);
   c1lep5jex3bex_mbb_leading_bjets_topEW__373->GetYaxis()->SetLabelFont(43);
   c1lep5jex3bex_mbb_leading_bjets_topEW__373->GetYaxis()->SetLabelSize(21);
   c1lep5jex3bex_mbb_leading_bjets_topEW__373->GetYaxis()->SetTitleSize(21);
   c1lep5jex3bex_mbb_leading_bjets_topEW__373->GetYaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_mbb_leading_bjets_topEW__373->GetYaxis()->SetTitleFont(43);
   c1lep5jex3bex_mbb_leading_bjets_topEW__373->GetZaxis()->SetLabelFont(43);
   c1lep5jex3bex_mbb_leading_bjets_topEW__373->GetZaxis()->SetLabelSize(21);
   c1lep5jex3bex_mbb_leading_bjets_topEW__373->GetZaxis()->SetTitleSize(21);
   c1lep5jex3bex_mbb_leading_bjets_topEW__373->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep5jex3bex_mbb_leading_bjets_topEW,"");
   Double_t xAxis416[10] = {50, 100, 150, 200, 250, 300, 350, 400, 450, 500}; 
   
   TH1D *c1lep5jex3bex_mbb_leading_bjets_ttbarbb__374 = new TH1D("c1lep5jex3bex_mbb_leading_bjets_ttbarbb__374","",9, xAxis416);
   c1lep5jex3bex_mbb_leading_bjets_ttbarbb__374->SetBinContent(0,119.2414);
   c1lep5jex3bex_mbb_leading_bjets_ttbarbb__374->SetBinContent(1,539.8217);
   c1lep5jex3bex_mbb_leading_bjets_ttbarbb__374->SetBinContent(2,900.9036);
   c1lep5jex3bex_mbb_leading_bjets_ttbarbb__374->SetBinContent(3,810.6792);
   c1lep5jex3bex_mbb_leading_bjets_ttbarbb__374->SetBinContent(4,613.7028);
   c1lep5jex3bex_mbb_leading_bjets_ttbarbb__374->SetBinContent(5,442.7568);
   c1lep5jex3bex_mbb_leading_bjets_ttbarbb__374->SetBinContent(6,294.9897);
   c1lep5jex3bex_mbb_leading_bjets_ttbarbb__374->SetBinContent(7,189.772);
   c1lep5jex3bex_mbb_leading_bjets_ttbarbb__374->SetBinContent(8,122.9125);
   c1lep5jex3bex_mbb_leading_bjets_ttbarbb__374->SetBinContent(9,81.2536);
   c1lep5jex3bex_mbb_leading_bjets_ttbarbb__374->SetBinContent(10,206.173);
   c1lep5jex3bex_mbb_leading_bjets_ttbarbb__374->SetBinError(0,7.298439);
   c1lep5jex3bex_mbb_leading_bjets_ttbarbb__374->SetBinError(1,15.08429);
   c1lep5jex3bex_mbb_leading_bjets_ttbarbb__374->SetBinError(2,19.62357);
   c1lep5jex3bex_mbb_leading_bjets_ttbarbb__374->SetBinError(3,17.39018);
   c1lep5jex3bex_mbb_leading_bjets_ttbarbb__374->SetBinError(4,16.4519);
   c1lep5jex3bex_mbb_leading_bjets_ttbarbb__374->SetBinError(5,13.40479);
   c1lep5jex3bex_mbb_leading_bjets_ttbarbb__374->SetBinError(6,10.50302);
   c1lep5jex3bex_mbb_leading_bjets_ttbarbb__374->SetBinError(7,8.759551);
   c1lep5jex3bex_mbb_leading_bjets_ttbarbb__374->SetBinError(8,6.763727);
   c1lep5jex3bex_mbb_leading_bjets_ttbarbb__374->SetBinError(9,5.359993);
   c1lep5jex3bex_mbb_leading_bjets_ttbarbb__374->SetBinError(10,8.572292);
   c1lep5jex3bex_mbb_leading_bjets_ttbarbb__374->SetEntries(15468);
   c1lep5jex3bex_mbb_leading_bjets_ttbarbb__374->SetDirectory(0);
   c1lep5jex3bex_mbb_leading_bjets_ttbarbb__374->SetStats(0);

   ci = TColor::GetColor("#6666cc");
   c1lep5jex3bex_mbb_leading_bjets_ttbarbb__374->SetFillColor(ci);
   c1lep5jex3bex_mbb_leading_bjets_ttbarbb__374->SetMarkerStyle(20);
   c1lep5jex3bex_mbb_leading_bjets_ttbarbb__374->SetMarkerSize(1.2);
   c1lep5jex3bex_mbb_leading_bjets_ttbarbb__374->GetXaxis()->SetTitle("m(b,b) leading b-jets [GeV]");
   c1lep5jex3bex_mbb_leading_bjets_ttbarbb__374->GetXaxis()->SetRange(1,1000);
   c1lep5jex3bex_mbb_leading_bjets_ttbarbb__374->GetXaxis()->SetLabelFont(43);
   c1lep5jex3bex_mbb_leading_bjets_ttbarbb__374->GetXaxis()->SetLabelSize(21);
   c1lep5jex3bex_mbb_leading_bjets_ttbarbb__374->GetXaxis()->SetTitleSize(21);
   c1lep5jex3bex_mbb_leading_bjets_ttbarbb__374->GetXaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_mbb_leading_bjets_ttbarbb__374->GetXaxis()->SetTitleFont(43);
   c1lep5jex3bex_mbb_leading_bjets_ttbarbb__374->GetYaxis()->SetLabelFont(43);
   c1lep5jex3bex_mbb_leading_bjets_ttbarbb__374->GetYaxis()->SetLabelSize(21);
   c1lep5jex3bex_mbb_leading_bjets_ttbarbb__374->GetYaxis()->SetTitleSize(21);
   c1lep5jex3bex_mbb_leading_bjets_ttbarbb__374->GetYaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_mbb_leading_bjets_ttbarbb__374->GetYaxis()->SetTitleFont(43);
   c1lep5jex3bex_mbb_leading_bjets_ttbarbb__374->GetZaxis()->SetLabelFont(43);
   c1lep5jex3bex_mbb_leading_bjets_ttbarbb__374->GetZaxis()->SetLabelSize(21);
   c1lep5jex3bex_mbb_leading_bjets_ttbarbb__374->GetZaxis()->SetTitleSize(21);
   c1lep5jex3bex_mbb_leading_bjets_ttbarbb__374->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep5jex3bex_mbb_leading_bjets_ttbarbb,"");
   Double_t xAxis417[10] = {50, 100, 150, 200, 250, 300, 350, 400, 450, 500}; 
   
   TH1D *c1lep5jex3bex_mbb_leading_bjets_ttbarcc__375 = new TH1D("c1lep5jex3bex_mbb_leading_bjets_ttbarcc__375","",9, xAxis417);
   c1lep5jex3bex_mbb_leading_bjets_ttbarcc__375->SetBinContent(0,28.18889);
   c1lep5jex3bex_mbb_leading_bjets_ttbarcc__375->SetBinContent(1,182.299);
   c1lep5jex3bex_mbb_leading_bjets_ttbarcc__375->SetBinContent(2,298.8986);
   c1lep5jex3bex_mbb_leading_bjets_ttbarcc__375->SetBinContent(3,256.4063);
   c1lep5jex3bex_mbb_leading_bjets_ttbarcc__375->SetBinContent(4,175.5058);
   c1lep5jex3bex_mbb_leading_bjets_ttbarcc__375->SetBinContent(5,131.346);
   c1lep5jex3bex_mbb_leading_bjets_ttbarcc__375->SetBinContent(6,84.96518);
   c1lep5jex3bex_mbb_leading_bjets_ttbarcc__375->SetBinContent(7,49.75759);
   c1lep5jex3bex_mbb_leading_bjets_ttbarcc__375->SetBinContent(8,34.94184);
   c1lep5jex3bex_mbb_leading_bjets_ttbarcc__375->SetBinContent(9,18.37102);
   c1lep5jex3bex_mbb_leading_bjets_ttbarcc__375->SetBinContent(10,60.14801);
   c1lep5jex3bex_mbb_leading_bjets_ttbarcc__375->SetBinError(0,3.764794);
   c1lep5jex3bex_mbb_leading_bjets_ttbarcc__375->SetBinError(1,10.07975);
   c1lep5jex3bex_mbb_leading_bjets_ttbarcc__375->SetBinError(2,11.52998);
   c1lep5jex3bex_mbb_leading_bjets_ttbarcc__375->SetBinError(3,11.32435);
   c1lep5jex3bex_mbb_leading_bjets_ttbarcc__375->SetBinError(4,9.048254);
   c1lep5jex3bex_mbb_leading_bjets_ttbarcc__375->SetBinError(5,7.752159);
   c1lep5jex3bex_mbb_leading_bjets_ttbarcc__375->SetBinError(6,6.45947);
   c1lep5jex3bex_mbb_leading_bjets_ttbarcc__375->SetBinError(7,4.925816);
   c1lep5jex3bex_mbb_leading_bjets_ttbarcc__375->SetBinError(8,3.730875);
   c1lep5jex3bex_mbb_leading_bjets_ttbarcc__375->SetBinError(9,2.892485);
   c1lep5jex3bex_mbb_leading_bjets_ttbarcc__375->SetBinError(10,7.010892);
   c1lep5jex3bex_mbb_leading_bjets_ttbarcc__375->SetEntries(4006);
   c1lep5jex3bex_mbb_leading_bjets_ttbarcc__375->SetDirectory(0);
   c1lep5jex3bex_mbb_leading_bjets_ttbarcc__375->SetStats(0);

   ci = TColor::GetColor("#ccccff");
   c1lep5jex3bex_mbb_leading_bjets_ttbarcc__375->SetFillColor(ci);
   c1lep5jex3bex_mbb_leading_bjets_ttbarcc__375->SetMarkerStyle(20);
   c1lep5jex3bex_mbb_leading_bjets_ttbarcc__375->SetMarkerSize(1.2);
   c1lep5jex3bex_mbb_leading_bjets_ttbarcc__375->GetXaxis()->SetTitle("m(b,b) leading b-jets [GeV]");
   c1lep5jex3bex_mbb_leading_bjets_ttbarcc__375->GetXaxis()->SetRange(1,1000);
   c1lep5jex3bex_mbb_leading_bjets_ttbarcc__375->GetXaxis()->SetLabelFont(43);
   c1lep5jex3bex_mbb_leading_bjets_ttbarcc__375->GetXaxis()->SetLabelSize(21);
   c1lep5jex3bex_mbb_leading_bjets_ttbarcc__375->GetXaxis()->SetTitleSize(21);
   c1lep5jex3bex_mbb_leading_bjets_ttbarcc__375->GetXaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_mbb_leading_bjets_ttbarcc__375->GetXaxis()->SetTitleFont(43);
   c1lep5jex3bex_mbb_leading_bjets_ttbarcc__375->GetYaxis()->SetLabelFont(43);
   c1lep5jex3bex_mbb_leading_bjets_ttbarcc__375->GetYaxis()->SetLabelSize(21);
   c1lep5jex3bex_mbb_leading_bjets_ttbarcc__375->GetYaxis()->SetTitleSize(21);
   c1lep5jex3bex_mbb_leading_bjets_ttbarcc__375->GetYaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_mbb_leading_bjets_ttbarcc__375->GetYaxis()->SetTitleFont(43);
   c1lep5jex3bex_mbb_leading_bjets_ttbarcc__375->GetZaxis()->SetLabelFont(43);
   c1lep5jex3bex_mbb_leading_bjets_ttbarcc__375->GetZaxis()->SetLabelSize(21);
   c1lep5jex3bex_mbb_leading_bjets_ttbarcc__375->GetZaxis()->SetTitleSize(21);
   c1lep5jex3bex_mbb_leading_bjets_ttbarcc__375->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep5jex3bex_mbb_leading_bjets_ttbarcc,"");
   Double_t xAxis418[10] = {50, 100, 150, 200, 250, 300, 350, 400, 450, 500}; 
   
   TH1D *c1lep5jex3bex_mbb_leading_bjets_ttbarlight__376 = new TH1D("c1lep5jex3bex_mbb_leading_bjets_ttbarlight__376","",9, xAxis418);
   c1lep5jex3bex_mbb_leading_bjets_ttbarlight__376->SetBinContent(0,61.65998);
   c1lep5jex3bex_mbb_leading_bjets_ttbarlight__376->SetBinContent(1,504.1128);
   c1lep5jex3bex_mbb_leading_bjets_ttbarlight__376->SetBinContent(2,962.0191);
   c1lep5jex3bex_mbb_leading_bjets_ttbarlight__376->SetBinContent(3,595.7716);
   c1lep5jex3bex_mbb_leading_bjets_ttbarlight__376->SetBinContent(4,389.9658);
   c1lep5jex3bex_mbb_leading_bjets_ttbarlight__376->SetBinContent(5,247.8148);
   c1lep5jex3bex_mbb_leading_bjets_ttbarlight__376->SetBinContent(6,163.2577);
   c1lep5jex3bex_mbb_leading_bjets_ttbarlight__376->SetBinContent(7,90.31446);
   c1lep5jex3bex_mbb_leading_bjets_ttbarlight__376->SetBinContent(8,63.26943);
   c1lep5jex3bex_mbb_leading_bjets_ttbarlight__376->SetBinContent(9,40.07907);
   c1lep5jex3bex_mbb_leading_bjets_ttbarlight__376->SetBinContent(10,68.4601);
   c1lep5jex3bex_mbb_leading_bjets_ttbarlight__376->SetBinError(0,5.436354);
   c1lep5jex3bex_mbb_leading_bjets_ttbarlight__376->SetBinError(1,16.30977);
   c1lep5jex3bex_mbb_leading_bjets_ttbarlight__376->SetBinError(2,22.15922);
   c1lep5jex3bex_mbb_leading_bjets_ttbarlight__376->SetBinError(3,17.93287);
   c1lep5jex3bex_mbb_leading_bjets_ttbarlight__376->SetBinError(4,14.18457);
   c1lep5jex3bex_mbb_leading_bjets_ttbarlight__376->SetBinError(5,11.83022);
   c1lep5jex3bex_mbb_leading_bjets_ttbarlight__376->SetBinError(6,13.43354);
   c1lep5jex3bex_mbb_leading_bjets_ttbarlight__376->SetBinError(7,6.384419);
   c1lep5jex3bex_mbb_leading_bjets_ttbarlight__376->SetBinError(8,6.942039);
   c1lep5jex3bex_mbb_leading_bjets_ttbarlight__376->SetBinError(9,4.260132);
   c1lep5jex3bex_mbb_leading_bjets_ttbarlight__376->SetBinError(10,5.566435);
   c1lep5jex3bex_mbb_leading_bjets_ttbarlight__376->SetEntries(9132);
   c1lep5jex3bex_mbb_leading_bjets_ttbarlight__376->SetDirectory(0);
   c1lep5jex3bex_mbb_leading_bjets_ttbarlight__376->SetStats(0);
   c1lep5jex3bex_mbb_leading_bjets_ttbarlight__376->SetMarkerStyle(20);
   c1lep5jex3bex_mbb_leading_bjets_ttbarlight__376->SetMarkerSize(1.2);
   c1lep5jex3bex_mbb_leading_bjets_ttbarlight__376->GetXaxis()->SetTitle("m(b,b) leading b-jets [GeV]");
   c1lep5jex3bex_mbb_leading_bjets_ttbarlight__376->GetXaxis()->SetRange(1,1000);
   c1lep5jex3bex_mbb_leading_bjets_ttbarlight__376->GetXaxis()->SetLabelFont(43);
   c1lep5jex3bex_mbb_leading_bjets_ttbarlight__376->GetXaxis()->SetLabelSize(21);
   c1lep5jex3bex_mbb_leading_bjets_ttbarlight__376->GetXaxis()->SetTitleSize(21);
   c1lep5jex3bex_mbb_leading_bjets_ttbarlight__376->GetXaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_mbb_leading_bjets_ttbarlight__376->GetXaxis()->SetTitleFont(43);
   c1lep5jex3bex_mbb_leading_bjets_ttbarlight__376->GetYaxis()->SetLabelFont(43);
   c1lep5jex3bex_mbb_leading_bjets_ttbarlight__376->GetYaxis()->SetLabelSize(21);
   c1lep5jex3bex_mbb_leading_bjets_ttbarlight__376->GetYaxis()->SetTitleSize(21);
   c1lep5jex3bex_mbb_leading_bjets_ttbarlight__376->GetYaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_mbb_leading_bjets_ttbarlight__376->GetYaxis()->SetTitleFont(43);
   c1lep5jex3bex_mbb_leading_bjets_ttbarlight__376->GetZaxis()->SetLabelFont(43);
   c1lep5jex3bex_mbb_leading_bjets_ttbarlight__376->GetZaxis()->SetLabelSize(21);
   c1lep5jex3bex_mbb_leading_bjets_ttbarlight__376->GetZaxis()->SetTitleSize(21);
   c1lep5jex3bex_mbb_leading_bjets_ttbarlight__376->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep5jex3bex_mbb_leading_bjets_ttbarlight,"");
   Double_t xAxis419[10] = {50, 100, 150, 200, 250, 300, 350, 400, 450, 500}; 
   
   TH1D *c1lep5jex3bex_mbb_leading_bjets_uHcW__377 = new TH1D("c1lep5jex3bex_mbb_leading_bjets_uHcW__377","",9, xAxis419);
   c1lep5jex3bex_mbb_leading_bjets_uHcW__377->SetBinContent(0,18.93689);
   c1lep5jex3bex_mbb_leading_bjets_uHcW__377->SetBinContent(1,146.906);
   c1lep5jex3bex_mbb_leading_bjets_uHcW__377->SetBinContent(2,350.9968);
   c1lep5jex3bex_mbb_leading_bjets_uHcW__377->SetBinContent(3,211.0077);
   c1lep5jex3bex_mbb_leading_bjets_uHcW__377->SetBinContent(4,129.2479);
   c1lep5jex3bex_mbb_leading_bjets_uHcW__377->SetBinContent(5,57.70693);
   c1lep5jex3bex_mbb_leading_bjets_uHcW__377->SetBinContent(6,33.74116);
   c1lep5jex3bex_mbb_leading_bjets_uHcW__377->SetBinContent(7,17.85393);
   c1lep5jex3bex_mbb_leading_bjets_uHcW__377->SetBinContent(8,18.86242);
   c1lep5jex3bex_mbb_leading_bjets_uHcW__377->SetBinContent(9,9.267681);
   c1lep5jex3bex_mbb_leading_bjets_uHcW__377->SetBinContent(10,17.27555);
   c1lep5jex3bex_mbb_leading_bjets_uHcW__377->SetBinError(0,4.52669);
   c1lep5jex3bex_mbb_leading_bjets_uHcW__377->SetBinError(1,11.85818);
   c1lep5jex3bex_mbb_leading_bjets_uHcW__377->SetBinError(2,17.11742);
   c1lep5jex3bex_mbb_leading_bjets_uHcW__377->SetBinError(3,14.5033);
   c1lep5jex3bex_mbb_leading_bjets_uHcW__377->SetBinError(4,11.39828);
   c1lep5jex3bex_mbb_leading_bjets_uHcW__377->SetBinError(5,7.9003);
   c1lep5jex3bex_mbb_leading_bjets_uHcW__377->SetBinError(6,6.944297);
   c1lep5jex3bex_mbb_leading_bjets_uHcW__377->SetBinError(7,4.27069);
   c1lep5jex3bex_mbb_leading_bjets_uHcW__377->SetBinError(8,3.698534);
   c1lep5jex3bex_mbb_leading_bjets_uHcW__377->SetBinError(9,2.788216);
   c1lep5jex3bex_mbb_leading_bjets_uHcW__377->SetBinError(10,4.976996);
   c1lep5jex3bex_mbb_leading_bjets_uHcW__377->SetEntries(5357);
   c1lep5jex3bex_mbb_leading_bjets_uHcW__377->SetDirectory(0);
   c1lep5jex3bex_mbb_leading_bjets_uHcW__377->SetStats(0);
   c1lep5jex3bex_mbb_leading_bjets_uHcW__377->SetFillColor(2);
   c1lep5jex3bex_mbb_leading_bjets_uHcW__377->SetLineColor(2);
   c1lep5jex3bex_mbb_leading_bjets_uHcW__377->SetMarkerStyle(20);
   c1lep5jex3bex_mbb_leading_bjets_uHcW__377->SetMarkerSize(1.2);
   c1lep5jex3bex_mbb_leading_bjets_uHcW__377->GetXaxis()->SetTitle("m(b,b) leading b-jets [GeV]");
   c1lep5jex3bex_mbb_leading_bjets_uHcW__377->GetXaxis()->SetRange(1,1000);
   c1lep5jex3bex_mbb_leading_bjets_uHcW__377->GetXaxis()->SetLabelFont(43);
   c1lep5jex3bex_mbb_leading_bjets_uHcW__377->GetXaxis()->SetLabelSize(21);
   c1lep5jex3bex_mbb_leading_bjets_uHcW__377->GetXaxis()->SetTitleSize(21);
   c1lep5jex3bex_mbb_leading_bjets_uHcW__377->GetXaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_mbb_leading_bjets_uHcW__377->GetXaxis()->SetTitleFont(43);
   c1lep5jex3bex_mbb_leading_bjets_uHcW__377->GetYaxis()->SetLabelFont(43);
   c1lep5jex3bex_mbb_leading_bjets_uHcW__377->GetYaxis()->SetLabelSize(21);
   c1lep5jex3bex_mbb_leading_bjets_uHcW__377->GetYaxis()->SetTitleSize(21);
   c1lep5jex3bex_mbb_leading_bjets_uHcW__377->GetYaxis()->SetTitleOffset(1.4);
   c1lep5jex3bex_mbb_leading_bjets_uHcW__377->GetYaxis()->SetTitleFont(43);
   c1lep5jex3bex_mbb_leading_bjets_uHcW__377->GetZaxis()->SetLabelFont(43);
   c1lep5jex3bex_mbb_leading_bjets_uHcW__377->GetZaxis()->SetLabelSize(21);
   c1lep5jex3bex_mbb_leading_bjets_uHcW__377->GetZaxis()->SetTitleSize(21);
   c1lep5jex3bex_mbb_leading_bjets_uHcW__377->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep5jex3bex_mbb_leading_bjets_uHcW,"");
   h_stack->Draw("hist same");
   
   Double_t g_totErr_fx3167[9] = {
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475};
   Double_t g_totErr_fy3167[9] = {
   1462.927,
   2428.55,
   1872.706,
   1339.509,
   933.3774,
   623.8962,
   380.682,
   258.3417,
   167.8617};
   Double_t g_totErr_felx3167[9] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t g_totErr_fely3167[9] = {
   304.2903,
   499.3775,
   351.0046,
   239.8272,
   170.9639,
   116.3174,
   71.91221,
   50.32733,
   32.99368};
   Double_t g_totErr_fehx3167[9] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t g_totErr_fehy3167[9] = {
   304.2903,
   499.3775,
   351.0046,
   239.8272,
   170.9639,
   116.3174,
   71.91221,
   50.32733,
   32.99368};
   grae = new TGraphAsymmErrors(9,g_totErr_fx3167,g_totErr_fy3167,g_totErr_felx3167,g_totErr_fehx3167,g_totErr_fely3167,g_totErr_fehy3167);
   grae->SetName("g_totErr");
   grae->SetTitle("");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(3354);
   grae->SetLineColor(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0);
   
   TH1F *Graph_g_totErr3167 = new TH1F("Graph_g_totErr3167","",100,5,545);
   Graph_g_totErr3167->SetMinimum(0);
   Graph_g_totErr3167->SetMaximum(3207.234);
   Graph_g_totErr3167->SetDirectory(0);
   Graph_g_totErr3167->SetStats(0);
   Graph_g_totErr3167->SetLineWidth(2);
   Graph_g_totErr3167->SetMarkerStyle(20);
   Graph_g_totErr3167->SetMarkerSize(1.2);
   Graph_g_totErr3167->GetXaxis()->SetLabelFont(43);
   Graph_g_totErr3167->GetXaxis()->SetLabelSize(21);
   Graph_g_totErr3167->GetXaxis()->SetTitleSize(21);
   Graph_g_totErr3167->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_totErr3167->GetXaxis()->SetTitleFont(43);
   Graph_g_totErr3167->GetYaxis()->SetLabelFont(43);
   Graph_g_totErr3167->GetYaxis()->SetLabelSize(21);
   Graph_g_totErr3167->GetYaxis()->SetTitleSize(21);
   Graph_g_totErr3167->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_totErr3167->GetYaxis()->SetTitleFont(43);
   Graph_g_totErr3167->GetZaxis()->SetLabelFont(43);
   Graph_g_totErr3167->GetZaxis()->SetLabelSize(21);
   Graph_g_totErr3167->GetZaxis()->SetTitleSize(21);
   Graph_g_totErr3167->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_totErr3167);
   
   grae->Draw("e2");
   
   Double_t Graph_from_c1lep5jex3bex_mbb_leading_bjets_Data_fx3168[9] = {
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475};
   Double_t Graph_from_c1lep5jex3bex_mbb_leading_bjets_Data_fy3168[9] = {
   1774,
   2850,
   2108,
   1510,
   1071,
   650,
   461,
   297,
   200};
   Double_t Graph_from_c1lep5jex3bex_mbb_leading_bjets_Data_felx3168[9] = {
   24.95,
   24.95,
   24.95,
   24.95,
   24.95,
   24.95,
   24.95,
   24.95,
   24.95};
   Double_t Graph_from_c1lep5jex3bex_mbb_leading_bjets_Data_fely3168[9] = {
   42.11888,
   53.38539,
   45.91296,
   38.85872,
   32.72614,
   25.4951,
   21.47091,
   17.23369,
   14.14214};
   Double_t Graph_from_c1lep5jex3bex_mbb_leading_bjets_Data_fehx3168[9] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t Graph_from_c1lep5jex3bex_mbb_leading_bjets_Data_fehy3168[9] = {
   42.11888,
   53.38539,
   45.91296,
   38.85872,
   32.72614,
   25.4951,
   21.47091,
   17.23369,
   14.14214};
   grae = new TGraphAsymmErrors(9,Graph_from_c1lep5jex3bex_mbb_leading_bjets_Data_fx3168,Graph_from_c1lep5jex3bex_mbb_leading_bjets_Data_fy3168,Graph_from_c1lep5jex3bex_mbb_leading_bjets_Data_felx3168,Graph_from_c1lep5jex3bex_mbb_leading_bjets_Data_fehx3168,Graph_from_c1lep5jex3bex_mbb_leading_bjets_Data_fely3168,Graph_from_c1lep5jex3bex_mbb_leading_bjets_Data_fehy3168);
   grae->SetName("Graph_from_c1lep5jex3bex_mbb_leading_bjets_Data");
   grae->SetTitle("");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_c1lep5jex3bex_mbb_leading_bjets_Data3168 = new TH1F("Graph_Graph_from_c1lep5jex3bex_mbb_leading_bjets_Data3168","",100,5.055,544.995);
   Graph_Graph_from_c1lep5jex3bex_mbb_leading_bjets_Data3168->SetMinimum(0);
   Graph_Graph_from_c1lep5jex3bex_mbb_leading_bjets_Data3168->SetMaximum(3175.138);
   Graph_Graph_from_c1lep5jex3bex_mbb_leading_bjets_Data3168->SetDirectory(0);
   Graph_Graph_from_c1lep5jex3bex_mbb_leading_bjets_Data3168->SetStats(0);
   Graph_Graph_from_c1lep5jex3bex_mbb_leading_bjets_Data3168->SetLineWidth(2);
   Graph_Graph_from_c1lep5jex3bex_mbb_leading_bjets_Data3168->SetMarkerStyle(20);
   Graph_Graph_from_c1lep5jex3bex_mbb_leading_bjets_Data3168->SetMarkerSize(1.2);
   Graph_Graph_from_c1lep5jex3bex_mbb_leading_bjets_Data3168->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep5jex3bex_mbb_leading_bjets_Data3168->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep5jex3bex_mbb_leading_bjets_Data3168->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep5jex3bex_mbb_leading_bjets_Data3168->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep5jex3bex_mbb_leading_bjets_Data3168->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep5jex3bex_mbb_leading_bjets_Data3168->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep5jex3bex_mbb_leading_bjets_Data3168->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep5jex3bex_mbb_leading_bjets_Data3168->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep5jex3bex_mbb_leading_bjets_Data3168->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep5jex3bex_mbb_leading_bjets_Data3168->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep5jex3bex_mbb_leading_bjets_Data3168->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep5jex3bex_mbb_leading_bjets_Data3168->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep5jex3bex_mbb_leading_bjets_Data3168->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep5jex3bex_mbb_leading_bjets_Data3168->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_c1lep5jex3bex_mbb_leading_bjets_Data3168);
   
   grae->Draw("ep1 ");
   Double_t xAxis420[10] = {50, 100, 150, 200, 250, 300, 350, 400, 450, 500}; 
   
   TH1D *h_dummy_copy__378 = new TH1D("h_dummy_copy__378","",9, xAxis420);
   h_dummy_copy__378->SetEntries(1363468);
   h_dummy_copy__378->SetDirectory(0);
   h_dummy_copy__378->SetStats(0);
   h_dummy_copy__378->SetMarkerStyle(20);
   h_dummy_copy__378->SetMarkerSize(1.2);
   h_dummy_copy__378->GetXaxis()->SetTitle("m_{bb} leading b-jets [GeV]");
   h_dummy_copy__378->GetXaxis()->SetRange(1,1000);
   h_dummy_copy__378->GetXaxis()->SetLabelFont(43);
   h_dummy_copy__378->GetXaxis()->SetLabelSize(21);
   h_dummy_copy__378->GetXaxis()->SetTitleSize(21);
   h_dummy_copy__378->GetXaxis()->SetTitleOffset(1.4);
   h_dummy_copy__378->GetXaxis()->SetTitleFont(43);
   h_dummy_copy__378->GetYaxis()->SetTitle("Events / 50 GeV");
   h_dummy_copy__378->GetYaxis()->SetLabelFont(43);
   h_dummy_copy__378->GetYaxis()->SetLabelSize(16.8);
   h_dummy_copy__378->GetYaxis()->SetTitleSize(21);
   h_dummy_copy__378->GetYaxis()->SetTitleOffset(2.4);
   h_dummy_copy__378->GetYaxis()->SetTitleFont(43);
   h_dummy_copy__378->GetZaxis()->SetLabelFont(43);
   h_dummy_copy__378->GetZaxis()->SetLabelSize(21);
   h_dummy_copy__378->GetZaxis()->SetTitleSize(21);
   h_dummy_copy__378->GetZaxis()->SetTitleFont(43);
   h_dummy_copy__378->Draw("sameaxis");
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
   TLegendEntry *entry=leg->AddEntry("c1lep5jex3bex_mbb_leading_bjets_Data","Data","lep");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep5jex3bex_mbb_leading_bjets_uHcW","t#bar{t}#rightarrowWbHc (BR=1%)","f");
   entry->SetFillColor(2);
   entry->SetFillStyle(1001);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep5jex3bex_mbb_leading_bjets_ttbarlight","t#bar{t}+light","f");
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep5jex3bex_mbb_leading_bjets_ttbarcc","t#bar{t}+cc","f");

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
   entry=leg->AddEntry("c1lep5jex3bex_mbb_leading_bjets_ttbarbb","t#bar{t}+bb","f");

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
   entry=leg->AddEntry("c1lep5jex3bex_mbb_leading_bjets_topEW","Non-t#bar{t}","f");

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
   c_c1lep5jex3bex_mbb_leading_bjets->cd();
   c_c1lep5jex3bex_mbb_leading_bjets->Modified();
   c_c1lep5jex3bex_mbb_leading_bjets->cd();
   c_c1lep5jex3bex_mbb_leading_bjets->SetSelected(c_c1lep5jex3bex_mbb_leading_bjets);
}
