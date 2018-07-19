void c1lep6jin3bex_mbb_leading_bjets()
{
//=========Macro generated from canvas: c_c1lep6jin3bex_mbb_leading_bjets/c_c1lep6jin3bex_mbb_leading_bjets
//=========  (Thu Jul 19 17:38:09 2018) by ROOT version6.04/14
   TCanvas *c_c1lep6jin3bex_mbb_leading_bjets = new TCanvas("c_c1lep6jin3bex_mbb_leading_bjets", "c_c1lep6jin3bex_mbb_leading_bjets",0,0,600,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c_c1lep6jin3bex_mbb_leading_bjets->SetHighLightColor(2);
   c_c1lep6jin3bex_mbb_leading_bjets->Range(0,0,1,1);
   c_c1lep6jin3bex_mbb_leading_bjets->SetFillColor(0);
   c_c1lep6jin3bex_mbb_leading_bjets->SetBorderMode(0);
   c_c1lep6jin3bex_mbb_leading_bjets->SetBorderSize(2);
   c_c1lep6jin3bex_mbb_leading_bjets->SetTickx(1);
   c_c1lep6jin3bex_mbb_leading_bjets->SetTicky(1);
   c_c1lep6jin3bex_mbb_leading_bjets->SetLeftMargin(0.16);
   c_c1lep6jin3bex_mbb_leading_bjets->SetRightMargin(0.05);
   c_c1lep6jin3bex_mbb_leading_bjets->SetTopMargin(0.05);
   c_c1lep6jin3bex_mbb_leading_bjets->SetBottomMargin(0.16);
   c_c1lep6jin3bex_mbb_leading_bjets->SetFrameBorderMode(0);
  
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
   Double_t xAxis421[10] = {50, 100, 150, 200, 250, 300, 350, 400, 450, 500}; 
   
   TH1D *h_dummy2__379 = new TH1D("h_dummy2__379","Data/MC",9, xAxis421);
   h_dummy2__379->SetMinimum(0.5);
   h_dummy2__379->SetMaximum(1.5);
   h_dummy2__379->SetEntries(1164462);
   h_dummy2__379->SetDirectory(0);
   h_dummy2__379->SetStats(0);
   h_dummy2__379->SetMarkerStyle(20);
   h_dummy2__379->SetMarkerSize(1.2);
   h_dummy2__379->GetXaxis()->SetTitle("m_{bb} leading b-jets [GeV]");
   h_dummy2__379->GetXaxis()->SetRange(1,1000);
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
   
   Double_t Graph_from_h_ratio_fx3169[9] = {
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475};
   Double_t Graph_from_h_ratio_fy3169[9] = {
   1.102696,
   1.094819,
   1.104323,
   1.119227,
   1.182085,
   1.065893,
   1.101256,
   1.159284,
   0.9791589};
   Double_t Graph_from_h_ratio_felx3169[9] = {
   24.95,
   24.95,
   24.95,
   24.95,
   24.95,
   24.95,
   24.95,
   24.95,
   24.95};
   Double_t Graph_from_h_ratio_fely3169[9] = {
   0.02420732,
   0.01950685,
   0.0215624,
   0.02497677,
   0.03125941,
   0.03461859,
   0.04280153,
   0.05296905,
   0.05691246};
   Double_t Graph_from_h_ratio_fehx3169[9] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t Graph_from_h_ratio_fehy3169[9] = {
   0.02420732,
   0.01950685,
   0.0215624,
   0.02497677,
   0.03125941,
   0.03461859,
   0.04280153,
   0.05296905,
   0.05691246};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(9,Graph_from_h_ratio_fx3169,Graph_from_h_ratio_fy3169,Graph_from_h_ratio_felx3169,Graph_from_h_ratio_fehx3169,Graph_from_h_ratio_fely3169,Graph_from_h_ratio_fehy3169);
   grae->SetName("Graph_from_h_ratio");
   grae->SetTitle("");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(24);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_h_ratio3169 = new TH1F("Graph_Graph_from_h_ratio3169","",100,5.055,544.995);
   Graph_Graph_from_h_ratio3169->SetMinimum(0.8931366);
   Graph_Graph_from_h_ratio3169->SetMaximum(1.242454);
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
   TLine *line = new TLine(50,1,500,1);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t g_ratio2_fx3170[9] = {
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475};
   Double_t g_ratio2_fy3170[9] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t g_ratio2_felx3170[9] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t g_ratio2_fely3170[9] = {
   0.2098628,
   0.211528,
   0.1958952,
   0.1951046,
   0.1976856,
   0.1974993,
   0.193845,
   0.1984818,
   0.2130916};
   Double_t g_ratio2_fehx3170[9] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t g_ratio2_fehy3170[9] = {
   0.2098628,
   0.211528,
   0.1958952,
   0.1951046,
   0.1976856,
   0.1974993,
   0.193845,
   0.1984818,
   0.2130916};
   grae = new TGraphAsymmErrors(9,g_ratio2_fx3170,g_ratio2_fy3170,g_ratio2_felx3170,g_ratio2_fehx3170,g_ratio2_fely3170,g_ratio2_fehy3170);
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
   
   TH1F *Graph_g_ratio23170 = new TH1F("Graph_g_ratio23170","",100,5,545);
   Graph_g_ratio23170->SetMinimum(0.7442901);
   Graph_g_ratio23170->SetMaximum(1.25571);
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
   Double_t xAxis422[10] = {50, 100, 150, 200, 250, 300, 350, 400, 450, 500}; 
   
   TH1D *h_dummy2_copy__380 = new TH1D("h_dummy2_copy__380","Data/MC",9, xAxis422);
   h_dummy2_copy__380->SetMinimum(0.5);
   h_dummy2_copy__380->SetMaximum(1.5);
   h_dummy2_copy__380->SetEntries(1164462);
   h_dummy2_copy__380->SetDirectory(0);
   h_dummy2_copy__380->SetStats(0);
   h_dummy2_copy__380->SetMarkerStyle(20);
   h_dummy2_copy__380->SetMarkerSize(1.2);
   h_dummy2_copy__380->GetXaxis()->SetTitle("m_{bb} leading b-jets [GeV]");
   h_dummy2_copy__380->GetXaxis()->SetRange(1,1000);
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
   c_c1lep6jin3bex_mbb_leading_bjets->cd();
  
// ------------>Primitives in pad: pad0
   TPad *pad0 = new TPad("pad0", "pad0",0,0.2,1,1);
   pad0->Draw();
   pad0->cd();
   pad0->Range(-27.77778,-678.9441,527.7778,6110.496);
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
   Double_t xAxis423[10] = {50, 100, 150, 200, 250, 300, 350, 400, 450, 500}; 
   
   TH1D *h_dummy__381 = new TH1D("h_dummy__381","",9, xAxis423);
   h_dummy__381->SetMinimum(0);
   h_dummy__381->SetMaximum(5771.024);
   h_dummy__381->SetEntries(1164462);
   h_dummy__381->SetDirectory(0);
   h_dummy__381->SetStats(0);
   h_dummy__381->SetMarkerStyle(20);
   h_dummy__381->SetMarkerSize(1.2);
   h_dummy__381->GetXaxis()->SetRange(1,1000);
   h_dummy__381->GetXaxis()->SetLabelFont(43);
   h_dummy__381->GetXaxis()->SetLabelSize(0);
   h_dummy__381->GetXaxis()->SetTitleSize(21);
   h_dummy__381->GetXaxis()->SetTitleOffset(1.4);
   h_dummy__381->GetXaxis()->SetTitleFont(43);
   h_dummy__381->GetYaxis()->SetTitle("Events / 50 GeV");
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
   Double_t xAxis424[10] = {50, 100, 150, 200, 250, 300, 350, 400, 450, 500}; 
   
   TH1F *h_stack_stack_43 = new TH1F("h_stack_stack_43","h_stack",9, xAxis424);
   h_stack_stack_43->SetMinimum(0);
   h_stack_stack_43->SetMaximum(3273.071);
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
   
   Double_t xAxis425[10] = {50, 100, 150, 200, 250, 300, 350, 400, 450, 500}; 
   
   TH1D *c1lep6jin3bex_mbb_leading_bjets_topEW__382 = new TH1D("c1lep6jin3bex_mbb_leading_bjets_topEW__382","",9, xAxis425);
   c1lep6jin3bex_mbb_leading_bjets_topEW__382->SetBinContent(0,67.15493);
   c1lep6jin3bex_mbb_leading_bjets_topEW__382->SetBinContent(1,365.4805);
   c1lep6jin3bex_mbb_leading_bjets_topEW__382->SetBinContent(2,394.3495);
   c1lep6jin3bex_mbb_leading_bjets_topEW__382->SetBinContent(3,298.1831);
   c1lep6jin3bex_mbb_leading_bjets_topEW__382->SetBinContent(4,221.6237);
   c1lep6jin3bex_mbb_leading_bjets_topEW__382->SetBinContent(5,144.0096);
   c1lep6jin3bex_mbb_leading_bjets_topEW__382->SetBinContent(6,109.2927);
   c1lep6jin3bex_mbb_leading_bjets_topEW__382->SetBinContent(7,75.39541);
   c1lep6jin3bex_mbb_leading_bjets_topEW__382->SetBinContent(8,59.36818);
   c1lep6jin3bex_mbb_leading_bjets_topEW__382->SetBinContent(9,50.59775);
   c1lep6jin3bex_mbb_leading_bjets_topEW__382->SetBinContent(10,87.61891);
   c1lep6jin3bex_mbb_leading_bjets_topEW__382->SetBinError(0,16.07892);
   c1lep6jin3bex_mbb_leading_bjets_topEW__382->SetBinError(1,46.05826);
   c1lep6jin3bex_mbb_leading_bjets_topEW__382->SetBinError(2,42.20362);
   c1lep6jin3bex_mbb_leading_bjets_topEW__382->SetBinError(3,37.04231);
   c1lep6jin3bex_mbb_leading_bjets_topEW__382->SetBinError(4,30.02064);
   c1lep6jin3bex_mbb_leading_bjets_topEW__382->SetBinError(5,22.82125);
   c1lep6jin3bex_mbb_leading_bjets_topEW__382->SetBinError(6,19.86472);
   c1lep6jin3bex_mbb_leading_bjets_topEW__382->SetBinError(7,17.76255);
   c1lep6jin3bex_mbb_leading_bjets_topEW__382->SetBinError(8,17.25045);
   c1lep6jin3bex_mbb_leading_bjets_topEW__382->SetBinError(9,16.23547);
   c1lep6jin3bex_mbb_leading_bjets_topEW__382->SetBinError(10,18.41505);
   c1lep6jin3bex_mbb_leading_bjets_topEW__382->SetEntries(1125827);
   c1lep6jin3bex_mbb_leading_bjets_topEW__382->SetDirectory(0);
   c1lep6jin3bex_mbb_leading_bjets_topEW__382->SetStats(0);

   ci = TColor::GetColor("#66cc66");
   c1lep6jin3bex_mbb_leading_bjets_topEW__382->SetFillColor(ci);
   c1lep6jin3bex_mbb_leading_bjets_topEW__382->SetMarkerStyle(20);
   c1lep6jin3bex_mbb_leading_bjets_topEW__382->SetMarkerSize(1.2);
   c1lep6jin3bex_mbb_leading_bjets_topEW__382->GetXaxis()->SetTitle("m(b,b) leading b-jets [GeV]");
   c1lep6jin3bex_mbb_leading_bjets_topEW__382->GetXaxis()->SetRange(1,1000);
   c1lep6jin3bex_mbb_leading_bjets_topEW__382->GetXaxis()->SetLabelFont(43);
   c1lep6jin3bex_mbb_leading_bjets_topEW__382->GetXaxis()->SetLabelSize(21);
   c1lep6jin3bex_mbb_leading_bjets_topEW__382->GetXaxis()->SetTitleSize(21);
   c1lep6jin3bex_mbb_leading_bjets_topEW__382->GetXaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_mbb_leading_bjets_topEW__382->GetXaxis()->SetTitleFont(43);
   c1lep6jin3bex_mbb_leading_bjets_topEW__382->GetYaxis()->SetLabelFont(43);
   c1lep6jin3bex_mbb_leading_bjets_topEW__382->GetYaxis()->SetLabelSize(21);
   c1lep6jin3bex_mbb_leading_bjets_topEW__382->GetYaxis()->SetTitleSize(21);
   c1lep6jin3bex_mbb_leading_bjets_topEW__382->GetYaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_mbb_leading_bjets_topEW__382->GetYaxis()->SetTitleFont(43);
   c1lep6jin3bex_mbb_leading_bjets_topEW__382->GetZaxis()->SetLabelFont(43);
   c1lep6jin3bex_mbb_leading_bjets_topEW__382->GetZaxis()->SetLabelSize(21);
   c1lep6jin3bex_mbb_leading_bjets_topEW__382->GetZaxis()->SetTitleSize(21);
   c1lep6jin3bex_mbb_leading_bjets_topEW__382->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep6jin3bex_mbb_leading_bjets_topEW,"");
   Double_t xAxis426[10] = {50, 100, 150, 200, 250, 300, 350, 400, 450, 500}; 
   
   TH1D *c1lep6jin3bex_mbb_leading_bjets_ttbarbb__383 = new TH1D("c1lep6jin3bex_mbb_leading_bjets_ttbarbb__383","",9, xAxis426);
   c1lep6jin3bex_mbb_leading_bjets_ttbarbb__383->SetBinContent(0,169.1368);
   c1lep6jin3bex_mbb_leading_bjets_ttbarbb__383->SetBinContent(1,900.4385);
   c1lep6jin3bex_mbb_leading_bjets_ttbarbb__383->SetBinContent(2,1382.514);
   c1lep6jin3bex_mbb_leading_bjets_ttbarbb__383->SetBinContent(3,1308.492);
   c1lep6jin3bex_mbb_leading_bjets_ttbarbb__383->SetBinContent(4,1024.233);
   c1lep6jin3bex_mbb_leading_bjets_ttbarbb__383->SetBinContent(5,702.9089);
   c1lep6jin3bex_mbb_leading_bjets_ttbarbb__383->SetBinContent(6,539.8149);
   c1lep6jin3bex_mbb_leading_bjets_ttbarbb__383->SetBinContent(7,365.867);
   c1lep6jin3bex_mbb_leading_bjets_ttbarbb__383->SetBinContent(8,248.1811);
   c1lep6jin3bex_mbb_leading_bjets_ttbarbb__383->SetBinContent(9,168.3168);
   c1lep6jin3bex_mbb_leading_bjets_ttbarbb__383->SetBinContent(10,472.5898);
   c1lep6jin3bex_mbb_leading_bjets_ttbarbb__383->SetBinError(0,8.048185);
   c1lep6jin3bex_mbb_leading_bjets_ttbarbb__383->SetBinError(1,19.29877);
   c1lep6jin3bex_mbb_leading_bjets_ttbarbb__383->SetBinError(2,24.83464);
   c1lep6jin3bex_mbb_leading_bjets_ttbarbb__383->SetBinError(3,23.4088);
   c1lep6jin3bex_mbb_leading_bjets_ttbarbb__383->SetBinError(4,20.08251);
   c1lep6jin3bex_mbb_leading_bjets_ttbarbb__383->SetBinError(5,17.18888);
   c1lep6jin3bex_mbb_leading_bjets_ttbarbb__383->SetBinError(6,16.10209);
   c1lep6jin3bex_mbb_leading_bjets_ttbarbb__383->SetBinError(7,12.15006);
   c1lep6jin3bex_mbb_leading_bjets_ttbarbb__383->SetBinError(8,10.58716);
   c1lep6jin3bex_mbb_leading_bjets_ttbarbb__383->SetBinError(9,7.704553);
   c1lep6jin3bex_mbb_leading_bjets_ttbarbb__383->SetBinError(10,13.61553);
   c1lep6jin3bex_mbb_leading_bjets_ttbarbb__383->SetEntries(26042);
   c1lep6jin3bex_mbb_leading_bjets_ttbarbb__383->SetDirectory(0);
   c1lep6jin3bex_mbb_leading_bjets_ttbarbb__383->SetStats(0);

   ci = TColor::GetColor("#6666cc");
   c1lep6jin3bex_mbb_leading_bjets_ttbarbb__383->SetFillColor(ci);
   c1lep6jin3bex_mbb_leading_bjets_ttbarbb__383->SetMarkerStyle(20);
   c1lep6jin3bex_mbb_leading_bjets_ttbarbb__383->SetMarkerSize(1.2);
   c1lep6jin3bex_mbb_leading_bjets_ttbarbb__383->GetXaxis()->SetTitle("m(b,b) leading b-jets [GeV]");
   c1lep6jin3bex_mbb_leading_bjets_ttbarbb__383->GetXaxis()->SetRange(1,1000);
   c1lep6jin3bex_mbb_leading_bjets_ttbarbb__383->GetXaxis()->SetLabelFont(43);
   c1lep6jin3bex_mbb_leading_bjets_ttbarbb__383->GetXaxis()->SetLabelSize(21);
   c1lep6jin3bex_mbb_leading_bjets_ttbarbb__383->GetXaxis()->SetTitleSize(21);
   c1lep6jin3bex_mbb_leading_bjets_ttbarbb__383->GetXaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_mbb_leading_bjets_ttbarbb__383->GetXaxis()->SetTitleFont(43);
   c1lep6jin3bex_mbb_leading_bjets_ttbarbb__383->GetYaxis()->SetLabelFont(43);
   c1lep6jin3bex_mbb_leading_bjets_ttbarbb__383->GetYaxis()->SetLabelSize(21);
   c1lep6jin3bex_mbb_leading_bjets_ttbarbb__383->GetYaxis()->SetTitleSize(21);
   c1lep6jin3bex_mbb_leading_bjets_ttbarbb__383->GetYaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_mbb_leading_bjets_ttbarbb__383->GetYaxis()->SetTitleFont(43);
   c1lep6jin3bex_mbb_leading_bjets_ttbarbb__383->GetZaxis()->SetLabelFont(43);
   c1lep6jin3bex_mbb_leading_bjets_ttbarbb__383->GetZaxis()->SetLabelSize(21);
   c1lep6jin3bex_mbb_leading_bjets_ttbarbb__383->GetZaxis()->SetTitleSize(21);
   c1lep6jin3bex_mbb_leading_bjets_ttbarbb__383->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep6jin3bex_mbb_leading_bjets_ttbarbb,"");
   Double_t xAxis427[10] = {50, 100, 150, 200, 250, 300, 350, 400, 450, 500}; 
   
   TH1D *c1lep6jin3bex_mbb_leading_bjets_ttbarcc__384 = new TH1D("c1lep6jin3bex_mbb_leading_bjets_ttbarcc__384","",9, xAxis427);
   c1lep6jin3bex_mbb_leading_bjets_ttbarcc__384->SetBinContent(0,34.216);
   c1lep6jin3bex_mbb_leading_bjets_ttbarcc__384->SetBinContent(1,228.0499);
   c1lep6jin3bex_mbb_leading_bjets_ttbarcc__384->SetBinContent(2,404.978);
   c1lep6jin3bex_mbb_leading_bjets_ttbarcc__384->SetBinContent(3,329.7061);
   c1lep6jin3bex_mbb_leading_bjets_ttbarcc__384->SetBinContent(4,252.0695);
   c1lep6jin3bex_mbb_leading_bjets_ttbarcc__384->SetBinContent(5,165.5366);
   c1lep6jin3bex_mbb_leading_bjets_ttbarcc__384->SetBinContent(6,121.6407);
   c1lep6jin3bex_mbb_leading_bjets_ttbarcc__384->SetBinContent(7,75.84947);
   c1lep6jin3bex_mbb_leading_bjets_ttbarcc__384->SetBinContent(8,51.69265);
   c1lep6jin3bex_mbb_leading_bjets_ttbarcc__384->SetBinContent(9,43.06445);
   c1lep6jin3bex_mbb_leading_bjets_ttbarcc__384->SetBinContent(10,107.4522);
   c1lep6jin3bex_mbb_leading_bjets_ttbarcc__384->SetBinError(0,3.210144);
   c1lep6jin3bex_mbb_leading_bjets_ttbarcc__384->SetBinError(1,9.497627);
   c1lep6jin3bex_mbb_leading_bjets_ttbarcc__384->SetBinError(2,14.91432);
   c1lep6jin3bex_mbb_leading_bjets_ttbarcc__384->SetBinError(3,12.96374);
   c1lep6jin3bex_mbb_leading_bjets_ttbarcc__384->SetBinError(4,11.5359);
   c1lep6jin3bex_mbb_leading_bjets_ttbarcc__384->SetBinError(5,8.187843);
   c1lep6jin3bex_mbb_leading_bjets_ttbarcc__384->SetBinError(6,7.560448);
   c1lep6jin3bex_mbb_leading_bjets_ttbarcc__384->SetBinError(7,6.080564);
   c1lep6jin3bex_mbb_leading_bjets_ttbarcc__384->SetBinError(8,4.621369);
   c1lep6jin3bex_mbb_leading_bjets_ttbarcc__384->SetBinError(9,4.35089);
   c1lep6jin3bex_mbb_leading_bjets_ttbarcc__384->SetBinError(10,8.133082);
   c1lep6jin3bex_mbb_leading_bjets_ttbarcc__384->SetEntries(5630);
   c1lep6jin3bex_mbb_leading_bjets_ttbarcc__384->SetDirectory(0);
   c1lep6jin3bex_mbb_leading_bjets_ttbarcc__384->SetStats(0);

   ci = TColor::GetColor("#ccccff");
   c1lep6jin3bex_mbb_leading_bjets_ttbarcc__384->SetFillColor(ci);
   c1lep6jin3bex_mbb_leading_bjets_ttbarcc__384->SetMarkerStyle(20);
   c1lep6jin3bex_mbb_leading_bjets_ttbarcc__384->SetMarkerSize(1.2);
   c1lep6jin3bex_mbb_leading_bjets_ttbarcc__384->GetXaxis()->SetTitle("m(b,b) leading b-jets [GeV]");
   c1lep6jin3bex_mbb_leading_bjets_ttbarcc__384->GetXaxis()->SetRange(1,1000);
   c1lep6jin3bex_mbb_leading_bjets_ttbarcc__384->GetXaxis()->SetLabelFont(43);
   c1lep6jin3bex_mbb_leading_bjets_ttbarcc__384->GetXaxis()->SetLabelSize(21);
   c1lep6jin3bex_mbb_leading_bjets_ttbarcc__384->GetXaxis()->SetTitleSize(21);
   c1lep6jin3bex_mbb_leading_bjets_ttbarcc__384->GetXaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_mbb_leading_bjets_ttbarcc__384->GetXaxis()->SetTitleFont(43);
   c1lep6jin3bex_mbb_leading_bjets_ttbarcc__384->GetYaxis()->SetLabelFont(43);
   c1lep6jin3bex_mbb_leading_bjets_ttbarcc__384->GetYaxis()->SetLabelSize(21);
   c1lep6jin3bex_mbb_leading_bjets_ttbarcc__384->GetYaxis()->SetTitleSize(21);
   c1lep6jin3bex_mbb_leading_bjets_ttbarcc__384->GetYaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_mbb_leading_bjets_ttbarcc__384->GetYaxis()->SetTitleFont(43);
   c1lep6jin3bex_mbb_leading_bjets_ttbarcc__384->GetZaxis()->SetLabelFont(43);
   c1lep6jin3bex_mbb_leading_bjets_ttbarcc__384->GetZaxis()->SetLabelSize(21);
   c1lep6jin3bex_mbb_leading_bjets_ttbarcc__384->GetZaxis()->SetTitleSize(21);
   c1lep6jin3bex_mbb_leading_bjets_ttbarcc__384->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep6jin3bex_mbb_leading_bjets_ttbarcc,"");
   Double_t xAxis428[10] = {50, 100, 150, 200, 250, 300, 350, 400, 450, 500}; 
   
   TH1D *c1lep6jin3bex_mbb_leading_bjets_ttbarlight__385 = new TH1D("c1lep6jin3bex_mbb_leading_bjets_ttbarlight__385","",9, xAxis428);
   c1lep6jin3bex_mbb_leading_bjets_ttbarlight__385->SetBinContent(0,53.22246);
   c1lep6jin3bex_mbb_leading_bjets_ttbarlight__385->SetBinContent(1,387.7828);
   c1lep6jin3bex_mbb_leading_bjets_ttbarlight__385->SetBinContent(2,695.3457);
   c1lep6jin3bex_mbb_leading_bjets_ttbarlight__385->SetBinContent(3,438.8286);
   c1lep6jin3bex_mbb_leading_bjets_ttbarlight__385->SetBinContent(4,296.1694);
   c1lep6jin3bex_mbb_leading_bjets_ttbarlight__385->SetBinContent(5,197.2715);
   c1lep6jin3bex_mbb_leading_bjets_ttbarlight__385->SetBinContent(6,118.6468);
   c1lep6jin3bex_mbb_leading_bjets_ttbarlight__385->SetBinContent(7,84.01986);
   c1lep6jin3bex_mbb_leading_bjets_ttbarlight__385->SetBinContent(8,53.94404);
   c1lep6jin3bex_mbb_leading_bjets_ttbarlight__385->SetBinContent(9,40.3213);
   c1lep6jin3bex_mbb_leading_bjets_ttbarlight__385->SetBinContent(10,84.07289);
   c1lep6jin3bex_mbb_leading_bjets_ttbarlight__385->SetBinError(0,6.192199);
   c1lep6jin3bex_mbb_leading_bjets_ttbarlight__385->SetBinError(1,16.23114);
   c1lep6jin3bex_mbb_leading_bjets_ttbarlight__385->SetBinError(2,19.08078);
   c1lep6jin3bex_mbb_leading_bjets_ttbarlight__385->SetBinError(3,15.82686);
   c1lep6jin3bex_mbb_leading_bjets_ttbarlight__385->SetBinError(4,12.29054);
   c1lep6jin3bex_mbb_leading_bjets_ttbarlight__385->SetBinError(5,9.948304);
   c1lep6jin3bex_mbb_leading_bjets_ttbarlight__385->SetBinError(6,7.530708);
   c1lep6jin3bex_mbb_leading_bjets_ttbarlight__385->SetBinError(7,7.793368);
   c1lep6jin3bex_mbb_leading_bjets_ttbarlight__385->SetBinError(8,5.159032);
   c1lep6jin3bex_mbb_leading_bjets_ttbarlight__385->SetBinError(9,6.082774);
   c1lep6jin3bex_mbb_leading_bjets_ttbarlight__385->SetBinError(10,7.117436);
   c1lep6jin3bex_mbb_leading_bjets_ttbarlight__385->SetEntries(6954);
   c1lep6jin3bex_mbb_leading_bjets_ttbarlight__385->SetDirectory(0);
   c1lep6jin3bex_mbb_leading_bjets_ttbarlight__385->SetStats(0);
   c1lep6jin3bex_mbb_leading_bjets_ttbarlight__385->SetMarkerStyle(20);
   c1lep6jin3bex_mbb_leading_bjets_ttbarlight__385->SetMarkerSize(1.2);
   c1lep6jin3bex_mbb_leading_bjets_ttbarlight__385->GetXaxis()->SetTitle("m(b,b) leading b-jets [GeV]");
   c1lep6jin3bex_mbb_leading_bjets_ttbarlight__385->GetXaxis()->SetRange(1,1000);
   c1lep6jin3bex_mbb_leading_bjets_ttbarlight__385->GetXaxis()->SetLabelFont(43);
   c1lep6jin3bex_mbb_leading_bjets_ttbarlight__385->GetXaxis()->SetLabelSize(21);
   c1lep6jin3bex_mbb_leading_bjets_ttbarlight__385->GetXaxis()->SetTitleSize(21);
   c1lep6jin3bex_mbb_leading_bjets_ttbarlight__385->GetXaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_mbb_leading_bjets_ttbarlight__385->GetXaxis()->SetTitleFont(43);
   c1lep6jin3bex_mbb_leading_bjets_ttbarlight__385->GetYaxis()->SetLabelFont(43);
   c1lep6jin3bex_mbb_leading_bjets_ttbarlight__385->GetYaxis()->SetLabelSize(21);
   c1lep6jin3bex_mbb_leading_bjets_ttbarlight__385->GetYaxis()->SetTitleSize(21);
   c1lep6jin3bex_mbb_leading_bjets_ttbarlight__385->GetYaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_mbb_leading_bjets_ttbarlight__385->GetYaxis()->SetTitleFont(43);
   c1lep6jin3bex_mbb_leading_bjets_ttbarlight__385->GetZaxis()->SetLabelFont(43);
   c1lep6jin3bex_mbb_leading_bjets_ttbarlight__385->GetZaxis()->SetLabelSize(21);
   c1lep6jin3bex_mbb_leading_bjets_ttbarlight__385->GetZaxis()->SetTitleSize(21);
   c1lep6jin3bex_mbb_leading_bjets_ttbarlight__385->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep6jin3bex_mbb_leading_bjets_ttbarlight,"");
   Double_t xAxis429[10] = {50, 100, 150, 200, 250, 300, 350, 400, 450, 500}; 
   
   TH1D *c1lep6jin3bex_mbb_leading_bjets_uHcW__386 = new TH1D("c1lep6jin3bex_mbb_leading_bjets_uHcW__386","",9, xAxis429);
   c1lep6jin3bex_mbb_leading_bjets_uHcW__386->SetBinContent(0,12.73657);
   c1lep6jin3bex_mbb_leading_bjets_uHcW__386->SetBinContent(1,102.23);
   c1lep6jin3bex_mbb_leading_bjets_uHcW__386->SetBinContent(2,240.0237);
   c1lep6jin3bex_mbb_leading_bjets_uHcW__386->SetBinContent(3,103.062);
   c1lep6jin3bex_mbb_leading_bjets_uHcW__386->SetBinContent(4,90.27738);
   c1lep6jin3bex_mbb_leading_bjets_uHcW__386->SetBinContent(5,53.71552);
   c1lep6jin3bex_mbb_leading_bjets_uHcW__386->SetBinContent(6,28.93316);
   c1lep6jin3bex_mbb_leading_bjets_uHcW__386->SetBinContent(7,17.88173);
   c1lep6jin3bex_mbb_leading_bjets_uHcW__386->SetBinContent(8,15.46889);
   c1lep6jin3bex_mbb_leading_bjets_uHcW__386->SetBinContent(9,11.76653);
   c1lep6jin3bex_mbb_leading_bjets_uHcW__386->SetBinContent(10,12.937);
   c1lep6jin3bex_mbb_leading_bjets_uHcW__386->SetBinError(0,3.313609);
   c1lep6jin3bex_mbb_leading_bjets_uHcW__386->SetBinError(1,11.55265);
   c1lep6jin3bex_mbb_leading_bjets_uHcW__386->SetBinError(2,17.54106);
   c1lep6jin3bex_mbb_leading_bjets_uHcW__386->SetBinError(3,13.57541);
   c1lep6jin3bex_mbb_leading_bjets_uHcW__386->SetBinError(4,11.70338);
   c1lep6jin3bex_mbb_leading_bjets_uHcW__386->SetBinError(5,9.638028);
   c1lep6jin3bex_mbb_leading_bjets_uHcW__386->SetBinError(6,6.767266);
   c1lep6jin3bex_mbb_leading_bjets_uHcW__386->SetBinError(7,4.897399);
   c1lep6jin3bex_mbb_leading_bjets_uHcW__386->SetBinError(8,4.188666);
   c1lep6jin3bex_mbb_leading_bjets_uHcW__386->SetBinError(9,3.969783);
   c1lep6jin3bex_mbb_leading_bjets_uHcW__386->SetBinError(10,4.947286);
   c1lep6jin3bex_mbb_leading_bjets_uHcW__386->SetEntries(5540);
   c1lep6jin3bex_mbb_leading_bjets_uHcW__386->SetDirectory(0);
   c1lep6jin3bex_mbb_leading_bjets_uHcW__386->SetStats(0);
   c1lep6jin3bex_mbb_leading_bjets_uHcW__386->SetFillColor(2);
   c1lep6jin3bex_mbb_leading_bjets_uHcW__386->SetLineColor(2);
   c1lep6jin3bex_mbb_leading_bjets_uHcW__386->SetMarkerStyle(20);
   c1lep6jin3bex_mbb_leading_bjets_uHcW__386->SetMarkerSize(1.2);
   c1lep6jin3bex_mbb_leading_bjets_uHcW__386->GetXaxis()->SetTitle("m(b,b) leading b-jets [GeV]");
   c1lep6jin3bex_mbb_leading_bjets_uHcW__386->GetXaxis()->SetRange(1,1000);
   c1lep6jin3bex_mbb_leading_bjets_uHcW__386->GetXaxis()->SetLabelFont(43);
   c1lep6jin3bex_mbb_leading_bjets_uHcW__386->GetXaxis()->SetLabelSize(21);
   c1lep6jin3bex_mbb_leading_bjets_uHcW__386->GetXaxis()->SetTitleSize(21);
   c1lep6jin3bex_mbb_leading_bjets_uHcW__386->GetXaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_mbb_leading_bjets_uHcW__386->GetXaxis()->SetTitleFont(43);
   c1lep6jin3bex_mbb_leading_bjets_uHcW__386->GetYaxis()->SetLabelFont(43);
   c1lep6jin3bex_mbb_leading_bjets_uHcW__386->GetYaxis()->SetLabelSize(21);
   c1lep6jin3bex_mbb_leading_bjets_uHcW__386->GetYaxis()->SetTitleSize(21);
   c1lep6jin3bex_mbb_leading_bjets_uHcW__386->GetYaxis()->SetTitleOffset(1.4);
   c1lep6jin3bex_mbb_leading_bjets_uHcW__386->GetYaxis()->SetTitleFont(43);
   c1lep6jin3bex_mbb_leading_bjets_uHcW__386->GetZaxis()->SetLabelFont(43);
   c1lep6jin3bex_mbb_leading_bjets_uHcW__386->GetZaxis()->SetLabelSize(21);
   c1lep6jin3bex_mbb_leading_bjets_uHcW__386->GetZaxis()->SetTitleSize(21);
   c1lep6jin3bex_mbb_leading_bjets_uHcW__386->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep6jin3bex_mbb_leading_bjets_uHcW,"");
   h_stack->Draw("hist same");
   
   Double_t g_totErr_fx3171[9] = {
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475};
   Double_t g_totErr_fy3171[9] = {
   1881.752,
   2877.187,
   2375.21,
   1794.096,
   1209.727,
   889.3952,
   601.1317,
   413.186,
   302.3003};
   Double_t g_totErr_felx3171[9] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t g_totErr_fely3171[9] = {
   394.9097,
   608.6055,
   465.2924,
   350.0363,
   239.1455,
   175.6549,
   116.5264,
   82.00992,
   64.41765};
   Double_t g_totErr_fehx3171[9] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t g_totErr_fehy3171[9] = {
   394.9097,
   608.6055,
   465.2924,
   350.0363,
   239.1455,
   175.6549,
   116.5264,
   82.00992,
   64.41765};
   grae = new TGraphAsymmErrors(9,g_totErr_fx3171,g_totErr_fy3171,g_totErr_felx3171,g_totErr_fehx3171,g_totErr_fely3171,g_totErr_fehy3171);
   grae->SetName("g_totErr");
   grae->SetTitle("");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(3354);
   grae->SetLineColor(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0);
   
   TH1F *Graph_g_totErr3171 = new TH1F("Graph_g_totErr3171","",100,5,545);
   Graph_g_totErr3171->SetMinimum(0);
   Graph_g_totErr3171->SetMaximum(3810.583);
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
   
   Double_t Graph_from_c1lep6jin3bex_mbb_leading_bjets_Data_fx3172[9] = {
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475};
   Double_t Graph_from_c1lep6jin3bex_mbb_leading_bjets_Data_fy3172[9] = {
   2075,
   3150,
   2623,
   2008,
   1430,
   948,
   662,
   479,
   296};
   Double_t Graph_from_c1lep6jin3bex_mbb_leading_bjets_Data_felx3172[9] = {
   24.95,
   24.95,
   24.95,
   24.95,
   24.95,
   24.95,
   24.95,
   24.95,
   24.95};
   Double_t Graph_from_c1lep6jin3bex_mbb_leading_bjets_Data_fely3172[9] = {
   45.55217,
   56.12486,
   51.21523,
   44.81071,
   37.81534,
   30.78961,
   25.72936,
   21.88607,
   17.20465};
   Double_t Graph_from_c1lep6jin3bex_mbb_leading_bjets_Data_fehx3172[9] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t Graph_from_c1lep6jin3bex_mbb_leading_bjets_Data_fehy3172[9] = {
   45.55217,
   56.12486,
   51.21523,
   44.81071,
   37.81534,
   30.78961,
   25.72936,
   21.88607,
   17.20465};
   grae = new TGraphAsymmErrors(9,Graph_from_c1lep6jin3bex_mbb_leading_bjets_Data_fx3172,Graph_from_c1lep6jin3bex_mbb_leading_bjets_Data_fy3172,Graph_from_c1lep6jin3bex_mbb_leading_bjets_Data_felx3172,Graph_from_c1lep6jin3bex_mbb_leading_bjets_Data_fehx3172,Graph_from_c1lep6jin3bex_mbb_leading_bjets_Data_fely3172,Graph_from_c1lep6jin3bex_mbb_leading_bjets_Data_fehy3172);
   grae->SetName("Graph_from_c1lep6jin3bex_mbb_leading_bjets_Data");
   grae->SetTitle("");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_c1lep6jin3bex_mbb_leading_bjets_Data3172 = new TH1F("Graph_Graph_from_c1lep6jin3bex_mbb_leading_bjets_Data3172","",100,5.055,544.995);
   Graph_Graph_from_c1lep6jin3bex_mbb_leading_bjets_Data3172->SetMinimum(0);
   Graph_Graph_from_c1lep6jin3bex_mbb_leading_bjets_Data3172->SetMaximum(3498.858);
   Graph_Graph_from_c1lep6jin3bex_mbb_leading_bjets_Data3172->SetDirectory(0);
   Graph_Graph_from_c1lep6jin3bex_mbb_leading_bjets_Data3172->SetStats(0);
   Graph_Graph_from_c1lep6jin3bex_mbb_leading_bjets_Data3172->SetLineWidth(2);
   Graph_Graph_from_c1lep6jin3bex_mbb_leading_bjets_Data3172->SetMarkerStyle(20);
   Graph_Graph_from_c1lep6jin3bex_mbb_leading_bjets_Data3172->SetMarkerSize(1.2);
   Graph_Graph_from_c1lep6jin3bex_mbb_leading_bjets_Data3172->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep6jin3bex_mbb_leading_bjets_Data3172->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep6jin3bex_mbb_leading_bjets_Data3172->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep6jin3bex_mbb_leading_bjets_Data3172->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep6jin3bex_mbb_leading_bjets_Data3172->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep6jin3bex_mbb_leading_bjets_Data3172->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep6jin3bex_mbb_leading_bjets_Data3172->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep6jin3bex_mbb_leading_bjets_Data3172->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep6jin3bex_mbb_leading_bjets_Data3172->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep6jin3bex_mbb_leading_bjets_Data3172->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep6jin3bex_mbb_leading_bjets_Data3172->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep6jin3bex_mbb_leading_bjets_Data3172->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep6jin3bex_mbb_leading_bjets_Data3172->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep6jin3bex_mbb_leading_bjets_Data3172->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_c1lep6jin3bex_mbb_leading_bjets_Data3172);
   
   grae->Draw("ep1 ");
   Double_t xAxis430[10] = {50, 100, 150, 200, 250, 300, 350, 400, 450, 500}; 
   
   TH1D *h_dummy_copy__387 = new TH1D("h_dummy_copy__387","",9, xAxis430);
   h_dummy_copy__387->SetEntries(1164462);
   h_dummy_copy__387->SetDirectory(0);
   h_dummy_copy__387->SetStats(0);
   h_dummy_copy__387->SetMarkerStyle(20);
   h_dummy_copy__387->SetMarkerSize(1.2);
   h_dummy_copy__387->GetXaxis()->SetTitle("m_{bb} leading b-jets [GeV]");
   h_dummy_copy__387->GetXaxis()->SetRange(1,1000);
   h_dummy_copy__387->GetXaxis()->SetLabelFont(43);
   h_dummy_copy__387->GetXaxis()->SetLabelSize(21);
   h_dummy_copy__387->GetXaxis()->SetTitleSize(21);
   h_dummy_copy__387->GetXaxis()->SetTitleOffset(1.4);
   h_dummy_copy__387->GetXaxis()->SetTitleFont(43);
   h_dummy_copy__387->GetYaxis()->SetTitle("Events / 50 GeV");
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
      tex = new TLatex(0.18,0.73,"#geq6j, 3b");
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
   TLegendEntry *entry=leg->AddEntry("c1lep6jin3bex_mbb_leading_bjets_Data","Data","lep");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep6jin3bex_mbb_leading_bjets_uHcW","t#bar{t}#rightarrowWbHc (BR=1%)","f");
   entry->SetFillColor(2);
   entry->SetFillStyle(1001);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep6jin3bex_mbb_leading_bjets_ttbarlight","t#bar{t}+light","f");
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep6jin3bex_mbb_leading_bjets_ttbarcc","t#bar{t}+cc","f");

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
   entry=leg->AddEntry("c1lep6jin3bex_mbb_leading_bjets_ttbarbb","t#bar{t}+bb","f");

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
   entry=leg->AddEntry("c1lep6jin3bex_mbb_leading_bjets_topEW","Non-t#bar{t}","f");

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
   c_c1lep6jin3bex_mbb_leading_bjets->cd();
   c_c1lep6jin3bex_mbb_leading_bjets->Modified();
   c_c1lep6jin3bex_mbb_leading_bjets->cd();
   c_c1lep6jin3bex_mbb_leading_bjets->SetSelected(c_c1lep6jin3bex_mbb_leading_bjets);
}
