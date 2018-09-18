void Summary()
{
//=========Macro generated from canvas: base_ebv2_signal_cH_uH_default_summary/base_ebv2_signal_cH_uH_default_summary
//=========  (Fri Jul 20 10:20:53 2018) by ROOT version6.04/14
   TCanvas *base_ebv2_signal_cH_uH_default_summary = new TCanvas("base_ebv2_signal_cH_uH_default_summary", "base_ebv2_signal_cH_uH_default_summary",0,0,900,850);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   base_ebv2_signal_cH_uH_default_summary->SetHighLightColor(2);
   base_ebv2_signal_cH_uH_default_summary->Range(0,0,1,1);
   base_ebv2_signal_cH_uH_default_summary->SetFillColor(0);
   base_ebv2_signal_cH_uH_default_summary->SetBorderMode(0);
   base_ebv2_signal_cH_uH_default_summary->SetBorderSize(2);
   base_ebv2_signal_cH_uH_default_summary->SetTickx(1);
   base_ebv2_signal_cH_uH_default_summary->SetTicky(1);
   base_ebv2_signal_cH_uH_default_summary->SetLeftMargin(0.16);
   base_ebv2_signal_cH_uH_default_summary->SetRightMargin(0.05);
   base_ebv2_signal_cH_uH_default_summary->SetTopMargin(0.05);
   base_ebv2_signal_cH_uH_default_summary->SetBottomMargin(0.16);
   base_ebv2_signal_cH_uH_default_summary->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0,1,0.28);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-1.058824,-0.0873016,9.529412,1.5);
   pad1->SetFillColor(0);
   pad1->SetFillStyle(4000);
   pad1->SetBorderMode(0);
   pad1->SetBorderSize(0);
   pad1->SetTickx(1);
   pad1->SetTicky(1);
   pad1->SetRightMargin(0.05);
   pad1->SetTopMargin(0);
   pad1->SetBottomMargin(0.37);
   pad1->SetFrameBorderMode(0);
   pad1->SetFrameBorderMode(0);
   
   TH1F *h_dummy2__109 = new TH1F("h_dummy2__109","Data/MC",9,0,9);
   h_dummy2__109->SetMinimum(0.5);
   h_dummy2__109->SetMaximum(1.5);
   h_dummy2__109->SetEntries(18);
   h_dummy2__109->SetDirectory(0);
   h_dummy2__109->SetStats(0);
   h_dummy2__109->SetLineWidth(2);
   h_dummy2__109->SetMarkerStyle(20);
   h_dummy2__109->SetMarkerSize(1.2);
   h_dummy2__109->GetXaxis()->SetBinLabel(1,"4j, 2b");
   h_dummy2__109->GetXaxis()->SetBinLabel(2,"5j, 2b");
   h_dummy2__109->GetXaxis()->SetBinLabel(3,"#geq6j, 2b");
   h_dummy2__109->GetXaxis()->SetBinLabel(4,"4j, 3b");
   h_dummy2__109->GetXaxis()->SetBinLabel(5,"5j, 3b");
   h_dummy2__109->GetXaxis()->SetBinLabel(6,"#geq6j, 3b");
   h_dummy2__109->GetXaxis()->SetBinLabel(7,"4j, 4b");
   h_dummy2__109->GetXaxis()->SetBinLabel(8,"5j, #geq4b");
   h_dummy2__109->GetXaxis()->SetBinLabel(9,"#geq6j, #geq4b");
   h_dummy2__109->GetXaxis()->SetBit(TAxis::kLabelsVert);
   h_dummy2__109->GetXaxis()->SetLabelFont(43);
   h_dummy2__109->GetXaxis()->SetLabelOffset(0.045);
   h_dummy2__109->GetXaxis()->SetLabelSize(19.95);
   h_dummy2__109->GetXaxis()->SetTitleSize(21);
   h_dummy2__109->GetXaxis()->SetTitleOffset(7.591946);
   h_dummy2__109->GetXaxis()->SetTitleFont(43);
   h_dummy2__109->GetYaxis()->SetTitle("Data / Bkg");
   h_dummy2__109->GetYaxis()->CenterTitle(true);
   h_dummy2__109->GetYaxis()->SetNdivisions(-504);
   h_dummy2__109->GetYaxis()->SetLabelFont(43);
   h_dummy2__109->GetYaxis()->SetLabelOffset(0.01);
   h_dummy2__109->GetYaxis()->SetLabelSize(19.95);
   h_dummy2__109->GetYaxis()->SetTitleSize(21);
   h_dummy2__109->GetYaxis()->SetTickLength(0.01);
   h_dummy2__109->GetYaxis()->SetTitleOffset(1.627312);
   h_dummy2__109->GetYaxis()->SetTitleFont(43);
   h_dummy2__109->GetZaxis()->SetLabelFont(43);
   h_dummy2__109->GetZaxis()->SetLabelSize(21);
   h_dummy2__109->GetZaxis()->SetTitleSize(21);
   h_dummy2__109->GetZaxis()->SetTitleFont(43);
   h_dummy2__109->Draw("HIST");
   
   Double_t Graph_from_h_ratio_fx3037[9] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5,
   5.5,
   6.5,
   7.5,
   8.5};
   Double_t Graph_from_h_ratio_fy3037[9] = {
   0.9878955,
   0.9678634,
   0.9671717,
   1.114024,
   1.154995,
   1.108697,
   1.088015,
   1.149501,
   0.984446};
   Double_t Graph_from_h_ratio_felx3037[9] = {
   0.499,
   0.499,
   0.499,
   0.499,
   0.499,
   0.499,
   0.499,
   0.499,
   0.499};
   Double_t Graph_from_h_ratio_fely3037[9] = {
   0.002845036,
   0.003999674,
   0.005105533,
   0.01049147,
   0.01067474,
   0.00908982,
   0.08201221,
   0.05324963,
   0.02694333};
   Double_t Graph_from_h_ratio_fehx3037[9] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t Graph_from_h_ratio_fehy3037[9] = {
   0.002845036,
   0.003999674,
   0.005105533,
   0.01049147,
   0.01067474,
   0.00908982,
   0.08201221,
   0.05324963,
   0.02694333};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(9,Graph_from_h_ratio_fx3037,Graph_from_h_ratio_fy3037,Graph_from_h_ratio_felx3037,Graph_from_h_ratio_fehx3037,Graph_from_h_ratio_fely3037,Graph_from_h_ratio_fehy3037);
   grae->SetName("Graph_from_h_ratio");
   grae->SetTitle("Data");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(24);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_h_ratio3037 = new TH1F("Graph_Graph_from_h_ratio3037","Data",100,0,9.8999);
   Graph_Graph_from_h_ratio3037->SetMinimum(0.9329778);
   Graph_Graph_from_h_ratio3037->SetMaximum(1.227276);
   Graph_Graph_from_h_ratio3037->SetDirectory(0);
   Graph_Graph_from_h_ratio3037->SetStats(0);
   Graph_Graph_from_h_ratio3037->SetLineWidth(2);
   Graph_Graph_from_h_ratio3037->SetMarkerStyle(20);
   Graph_Graph_from_h_ratio3037->SetMarkerSize(1.2);
   Graph_Graph_from_h_ratio3037->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3037->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3037->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3037->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3037->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3037->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3037->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3037->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3037->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3037->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3037->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3037->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3037->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3037->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_h_ratio3037);
   
   grae->Draw("pe0");
   TLine *line = new TLine(0,1,9,1);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t g_ratio2_fx3038[9] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5,
   5.5,
   6.5,
   7.5,
   8.5};
   Double_t g_ratio2_fy3038[9] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t g_ratio2_felx3038[9] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t g_ratio2_fely3038[9] = {
   0.1201517,
   0.1765058,
   0.2574606,
   0.1961233,
   0.1867492,
   0.1936562,
   0.270756,
   0.2421808,
   0.2093752};
   Double_t g_ratio2_fehx3038[9] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t g_ratio2_fehy3038[9] = {
   0.1201517,
   0.1765058,
   0.2574606,
   0.1961233,
   0.1867492,
   0.1936562,
   0.270756,
   0.2421808,
   0.2093752};
   grae = new TGraphAsymmErrors(9,g_ratio2_fx3038,g_ratio2_fy3038,g_ratio2_felx3038,g_ratio2_fehx3038,g_ratio2_fely3038,g_ratio2_fehy3038);
   grae->SetName("g_ratio2");
   grae->SetTitle("h_Tot_summary");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(3354);
   grae->SetLineColor(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0);
   
   TH1F *Graph_g_ratio23038 = new TH1F("Graph_g_ratio23038","h_Tot_summary",100,0,9.9);
   Graph_g_ratio23038->SetMinimum(0.6750928);
   Graph_g_ratio23038->SetMaximum(1.324907);
   Graph_g_ratio23038->SetDirectory(0);
   Graph_g_ratio23038->SetStats(0);
   Graph_g_ratio23038->SetLineWidth(2);
   Graph_g_ratio23038->SetMarkerStyle(20);
   Graph_g_ratio23038->SetMarkerSize(1.2);
   Graph_g_ratio23038->GetXaxis()->SetLabelFont(43);
   Graph_g_ratio23038->GetXaxis()->SetLabelSize(21);
   Graph_g_ratio23038->GetXaxis()->SetTitleSize(21);
   Graph_g_ratio23038->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23038->GetXaxis()->SetTitleFont(43);
   Graph_g_ratio23038->GetYaxis()->SetLabelFont(43);
   Graph_g_ratio23038->GetYaxis()->SetLabelSize(21);
   Graph_g_ratio23038->GetYaxis()->SetTitleSize(21);
   Graph_g_ratio23038->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23038->GetYaxis()->SetTitleFont(43);
   Graph_g_ratio23038->GetZaxis()->SetLabelFont(43);
   Graph_g_ratio23038->GetZaxis()->SetLabelSize(21);
   Graph_g_ratio23038->GetZaxis()->SetTitleSize(21);
   Graph_g_ratio23038->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_ratio23038);
   
   grae->Draw("e2");
   
   TH1F *h_dummy2_copy__110 = new TH1F("h_dummy2_copy__110","Data/MC",9,0,9);
   h_dummy2_copy__110->SetMinimum(0.5);
   h_dummy2_copy__110->SetMaximum(1.5);
   h_dummy2_copy__110->SetEntries(18);
   h_dummy2_copy__110->SetDirectory(0);
   h_dummy2_copy__110->SetStats(0);
   h_dummy2_copy__110->SetLineWidth(2);
   h_dummy2_copy__110->SetMarkerStyle(20);
   h_dummy2_copy__110->SetMarkerSize(1.2);
   h_dummy2_copy__110->GetXaxis()->SetBinLabel(1,"4j, 2b");
   h_dummy2_copy__110->GetXaxis()->SetBinLabel(2,"5j, 2b");
   h_dummy2_copy__110->GetXaxis()->SetBinLabel(3,"#geq6j, 2b");
   h_dummy2_copy__110->GetXaxis()->SetBinLabel(4,"4j, 3b");
   h_dummy2_copy__110->GetXaxis()->SetBinLabel(5,"5j, 3b");
   h_dummy2_copy__110->GetXaxis()->SetBinLabel(6,"#geq6j, 3b");
   h_dummy2_copy__110->GetXaxis()->SetBinLabel(7,"4j, 4b");
   h_dummy2_copy__110->GetXaxis()->SetBinLabel(8,"5j, #geq4b");
   h_dummy2_copy__110->GetXaxis()->SetBinLabel(9,"#geq6j, #geq4b");
   h_dummy2_copy__110->GetXaxis()->SetBit(TAxis::kLabelsVert);
   h_dummy2_copy__110->GetXaxis()->SetLabelFont(43);
   h_dummy2_copy__110->GetXaxis()->SetLabelOffset(0.045);
   h_dummy2_copy__110->GetXaxis()->SetLabelSize(19.95);
   h_dummy2_copy__110->GetXaxis()->SetTitleSize(21);
   h_dummy2_copy__110->GetXaxis()->SetTitleOffset(7.591946);
   h_dummy2_copy__110->GetXaxis()->SetTitleFont(43);
   h_dummy2_copy__110->GetYaxis()->SetTitle("Data / Bkg");
   h_dummy2_copy__110->GetYaxis()->CenterTitle(true);
   h_dummy2_copy__110->GetYaxis()->SetNdivisions(-504);
   h_dummy2_copy__110->GetYaxis()->SetLabelFont(43);
   h_dummy2_copy__110->GetYaxis()->SetLabelOffset(0.01);
   h_dummy2_copy__110->GetYaxis()->SetLabelSize(19.95);
   h_dummy2_copy__110->GetYaxis()->SetTitleSize(21);
   h_dummy2_copy__110->GetYaxis()->SetTickLength(0.01);
   h_dummy2_copy__110->GetYaxis()->SetTitleOffset(1.627312);
   h_dummy2_copy__110->GetYaxis()->SetTitleFont(43);
   h_dummy2_copy__110->GetZaxis()->SetLabelFont(43);
   h_dummy2_copy__110->GetZaxis()->SetLabelSize(21);
   h_dummy2_copy__110->GetZaxis()->SetTitleSize(21);
   h_dummy2_copy__110->GetZaxis()->SetTitleFont(43);
   h_dummy2_copy__110->Draw("sameaxis");
   line = new TLine(0.05,1,0.088,1);
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
   base_ebv2_signal_cH_uH_default_summary->cd();
  
// ------------>Primitives in pad: pad0
   TPad *pad0 = new TPad("pad0", "pad0",0,0.2,1,1);
   pad0->Draw();
   pad0->cd();
   pad0->Range(-1.058824,-0.9513572,9.529412,8.562214);
   pad0->SetFillColor(0);
   pad0->SetFillStyle(4000);
   pad0->SetBorderMode(0);
   pad0->SetBorderSize(0);
   pad0->SetLogy();
   pad0->SetTickx(1);
   pad0->SetTicky(1);
   pad0->SetRightMargin(0.05);
   pad0->SetTopMargin(0.05);
   pad0->SetFrameBorderMode(0);
   pad0->SetFrameBorderMode(0);
   
   TH1F *h_dummy__111 = new TH1F("h_dummy__111","h_Tot_summary",9,0,9);
   h_dummy__111->SetMinimum(1);
   h_dummy__111->SetMaximum(1.220493e+08);
   h_dummy__111->SetEntries(18);
   h_dummy__111->SetDirectory(0);
   h_dummy__111->SetStats(0);
   h_dummy__111->SetLineWidth(2);
   h_dummy__111->SetMarkerStyle(20);
   h_dummy__111->SetMarkerSize(1.2);
   h_dummy__111->GetXaxis()->SetBinLabel(1,"4j, 2b");
   h_dummy__111->GetXaxis()->SetBinLabel(2,"5j, 2b");
   h_dummy__111->GetXaxis()->SetBinLabel(3,"#geq6j, 2b");
   h_dummy__111->GetXaxis()->SetBinLabel(4,"4j, 3b");
   h_dummy__111->GetXaxis()->SetBinLabel(5,"5j, 3b");
   h_dummy__111->GetXaxis()->SetBinLabel(6,"#geq6j, 3b");
   h_dummy__111->GetXaxis()->SetBinLabel(7,"4j, 4b");
   h_dummy__111->GetXaxis()->SetBinLabel(8,"5j, #geq4b");
   h_dummy__111->GetXaxis()->SetBinLabel(9,"#geq6j, #geq4b");
   h_dummy__111->GetXaxis()->SetBit(TAxis::kLabelsDown);
   h_dummy__111->GetXaxis()->SetLabelFont(43);
   h_dummy__111->GetXaxis()->SetLabelSize(0);
   h_dummy__111->GetXaxis()->SetTitleSize(21);
   h_dummy__111->GetXaxis()->SetTickLength(0.02);
   h_dummy__111->GetXaxis()->SetTitleOffset(1.4);
   h_dummy__111->GetXaxis()->SetTitleFont(43);
   h_dummy__111->GetYaxis()->SetTitle("Events");
   h_dummy__111->GetYaxis()->SetLabelFont(43);
   h_dummy__111->GetYaxis()->SetLabelSize(19.95);
   h_dummy__111->GetYaxis()->SetTitleSize(21);
   h_dummy__111->GetYaxis()->SetTickLength(0.01);
   h_dummy__111->GetYaxis()->SetTitleOffset(1.627312);
   h_dummy__111->GetYaxis()->SetTitleFont(43);
   h_dummy__111->GetZaxis()->SetLabelFont(43);
   h_dummy__111->GetZaxis()->SetLabelSize(21);
   h_dummy__111->GetZaxis()->SetTitleSize(21);
   h_dummy__111->GetZaxis()->SetTitleFont(43);
   h_dummy__111->Draw("HIST");
   
   THStack *h_stack = new THStack();
   h_stack->SetName("h_stack");
   h_stack->SetTitle("h_stack");
   
   TH1F *h_stack_stack_10 = new TH1F("h_stack_stack_10","h_stack",9,0,9);
   h_stack_stack_10->SetMinimum(0.5159434);
   h_stack_stack_10->SetMaximum(240191);
   h_stack_stack_10->SetDirectory(0);
   h_stack_stack_10->SetStats(0);
   h_stack_stack_10->SetLineWidth(2);
   h_stack_stack_10->SetMarkerStyle(20);
   h_stack_stack_10->SetMarkerSize(1.2);
   h_stack_stack_10->GetXaxis()->SetLabelFont(43);
   h_stack_stack_10->GetXaxis()->SetLabelSize(21);
   h_stack_stack_10->GetXaxis()->SetTitleSize(21);
   h_stack_stack_10->GetXaxis()->SetTitleOffset(1.4);
   h_stack_stack_10->GetXaxis()->SetTitleFont(43);
   h_stack_stack_10->GetYaxis()->SetLabelFont(43);
   h_stack_stack_10->GetYaxis()->SetLabelSize(21);
   h_stack_stack_10->GetYaxis()->SetTitleSize(21);
   h_stack_stack_10->GetYaxis()->SetTitleOffset(1.4);
   h_stack_stack_10->GetYaxis()->SetTitleFont(43);
   h_stack_stack_10->GetZaxis()->SetLabelFont(43);
   h_stack_stack_10->GetZaxis()->SetLabelSize(21);
   h_stack_stack_10->GetZaxis()->SetTitleSize(21);
   h_stack_stack_10->GetZaxis()->SetTitleFont(43);
   h_stack->SetHistogram(h_stack_stack_10);
   
   
   TH1F *topEW__112 = new TH1F("topEW__112","Non-t#bar{t}",9,0,9);
   topEW__112->SetBinContent(1,22931.79);
   topEW__112->SetBinContent(2,10212.77);
   topEW__112->SetBinContent(3,5663.981);
   topEW__112->SetBinContent(4,1835.134);
   topEW__112->SetBinContent(5,1306.218);
   topEW__112->SetBinContent(6,1872.078);
   topEW__112->SetBinContent(7,52.88504);
   topEW__112->SetBinContent(8,62.20748);
   topEW__112->SetBinContent(9,207.2869);
   topEW__112->SetBinError(1,316.9396);
   topEW__112->SetBinError(2,213.5867);
   topEW__112->SetBinError(3,151.4219);
   topEW__112->SetBinError(4,90.33882);
   topEW__112->SetBinError(5,74.02037);
   topEW__112->SetBinError(6,92.54617);
   topEW__112->SetBinError(7,13.14724);
   topEW__112->SetBinError(8,5.932192);
   topEW__112->SetBinError(9,22.79764);
   topEW__112->SetEntries(117);
   topEW__112->SetDirectory(0);
   topEW__112->SetStats(0);

   ci = TColor::GetColor("#66cc66");
   topEW__112->SetFillColor(ci);
   topEW__112->SetMarkerStyle(20);
   topEW__112->SetMarkerSize(1.2);
   topEW__112->GetXaxis()->SetLabelFont(43);
   topEW__112->GetXaxis()->SetLabelSize(21);
   topEW__112->GetXaxis()->SetTitleSize(21);
   topEW__112->GetXaxis()->SetTitleOffset(1.4);
   topEW__112->GetXaxis()->SetTitleFont(43);
   topEW__112->GetYaxis()->SetLabelFont(43);
   topEW__112->GetYaxis()->SetLabelSize(21);
   topEW__112->GetYaxis()->SetTitleSize(21);
   topEW__112->GetYaxis()->SetTitleOffset(1.4);
   topEW__112->GetYaxis()->SetTitleFont(43);
   topEW__112->GetZaxis()->SetLabelFont(43);
   topEW__112->GetZaxis()->SetLabelSize(21);
   topEW__112->GetZaxis()->SetTitleSize(21);
   topEW__112->GetZaxis()->SetTitleFont(43);
   h_stack->Add(topEW,"");
   
   TH1F *ttbarbb__113 = new TH1F("ttbarbb__113","t#bar{t}+#geq1b",9,0,9);
   ttbarbb__113->SetBinContent(1,3620.167);
   ttbarbb__113->SetBinContent(2,3043.01);
   ttbarbb__113->SetBinContent(3,3266.823);
   ttbarbb__113->SetBinContent(4,2896.615);
   ttbarbb__113->SetBinContent(5,4322.206);
   ttbarbb__113->SetBinContent(6,7282.493);
   ttbarbb__113->SetBinContent(7,95.46673);
   ttbarbb__113->SetBinContent(8,309.8172);
   ttbarbb__113->SetBinContent(9,1105.328);
   ttbarbb__113->SetBinError(1,37.74998);
   ttbarbb__113->SetBinError(2,34.98916);
   ttbarbb__113->SetBinError(3,35.82434);
   ttbarbb__113->SetBinError(4,35.31256);
   ttbarbb__113->SetBinError(5,41.87677);
   ttbarbb__113->SetBinError(6,55.35741);
   ttbarbb__113->SetBinError(7,6.058113);
   ttbarbb__113->SetBinError(8,12.48774);
   ttbarbb__113->SetBinError(9,24.74525);
   ttbarbb__113->SetEntries(9);
   ttbarbb__113->SetDirectory(0);
   ttbarbb__113->SetStats(0);

   ci = TColor::GetColor("#6666cc");
   ttbarbb__113->SetFillColor(ci);
   ttbarbb__113->SetMarkerStyle(20);
   ttbarbb__113->SetMarkerSize(1.2);
   ttbarbb__113->GetXaxis()->SetLabelFont(43);
   ttbarbb__113->GetXaxis()->SetLabelSize(21);
   ttbarbb__113->GetXaxis()->SetTitleSize(21);
   ttbarbb__113->GetXaxis()->SetTitleOffset(1.4);
   ttbarbb__113->GetXaxis()->SetTitleFont(43);
   ttbarbb__113->GetYaxis()->SetLabelFont(43);
   ttbarbb__113->GetYaxis()->SetLabelSize(21);
   ttbarbb__113->GetYaxis()->SetTitleSize(21);
   ttbarbb__113->GetYaxis()->SetTitleOffset(1.4);
   ttbarbb__113->GetYaxis()->SetTitleFont(43);
   ttbarbb__113->GetZaxis()->SetLabelFont(43);
   ttbarbb__113->GetZaxis()->SetLabelSize(21);
   ttbarbb__113->GetZaxis()->SetTitleSize(21);
   ttbarbb__113->GetZaxis()->SetTitleFont(43);
   h_stack->Add(ttbarbb,"");
   
   TH1F *ttbarcc__114 = new TH1F("ttbarcc__114","t#bar{t}+#geq1c",9,0,9);
   ttbarcc__114->SetBinContent(1,8286.442);
   ttbarcc__114->SetBinContent(2,5931.531);
   ttbarcc__114->SetBinContent(3,5281.424);
   ttbarcc__114->SetBinContent(4,1052.65);
   ttbarcc__114->SetBinContent(5,1320.828);
   ttbarcc__114->SetBinContent(6,1814.255);
   ttbarcc__114->SetBinContent(7,3.168244);
   ttbarcc__114->SetBinContent(8,20.79517);
   ttbarcc__114->SetBinContent(9,28.98864);
   ttbarcc__114->SetBinError(1,57.19243);
   ttbarcc__114->SetBinError(2,48.0997);
   ttbarcc__114->SetBinError(3,45.05708);
   ttbarcc__114->SetBinError(4,21.38042);
   ttbarcc__114->SetBinError(5,25.61933);
   ttbarcc__114->SetBinError(6,29.8612);
   ttbarcc__114->SetBinError(7,1.207684);
   ttbarcc__114->SetBinError(8,5.00452);
   ttbarcc__114->SetBinError(9,3.767657);
   ttbarcc__114->SetEntries(9);
   ttbarcc__114->SetDirectory(0);
   ttbarcc__114->SetStats(0);

   ci = TColor::GetColor("#ccccff");
   ttbarcc__114->SetFillColor(ci);
   ttbarcc__114->SetMarkerStyle(20);
   ttbarcc__114->SetMarkerSize(1.2);
   ttbarcc__114->GetXaxis()->SetLabelFont(43);
   ttbarcc__114->GetXaxis()->SetLabelSize(21);
   ttbarcc__114->GetXaxis()->SetTitleSize(21);
   ttbarcc__114->GetXaxis()->SetTitleOffset(1.4);
   ttbarcc__114->GetXaxis()->SetTitleFont(43);
   ttbarcc__114->GetYaxis()->SetLabelFont(43);
   ttbarcc__114->GetYaxis()->SetLabelSize(21);
   ttbarcc__114->GetYaxis()->SetTitleSize(21);
   ttbarcc__114->GetYaxis()->SetTitleOffset(1.4);
   ttbarcc__114->GetYaxis()->SetTitleFont(43);
   ttbarcc__114->GetZaxis()->SetLabelFont(43);
   ttbarcc__114->GetZaxis()->SetLabelSize(21);
   ttbarcc__114->GetZaxis()->SetTitleSize(21);
   ttbarcc__114->GetZaxis()->SetTitleFont(43);
   h_stack->Add(ttbarcc,"");
   
   TH1F *ttbarlight__115 = new TH1F("ttbarlight__115","t#bar{t}+light-jets",9,0,9);
   ttbarlight__115->SetBinContent(1,87210.95);
   ttbarlight__115->SetBinContent(2,41314);
   ttbarlight__115->SetBinContent(3,22891.83);
   ttbarlight__115->SetBinContent(4,4336.567);
   ttbarlight__115->SetBinContent(5,3186.725);
   ttbarlight__115->SetBinContent(6,2449.625);
   ttbarlight__115->SetBinContent(7,10.24246);
   ttbarlight__115->SetBinContent(8,12.57325);
   ttbarlight__115->SetBinContent(9,14.48885);
   ttbarlight__115->SetBinError(1,185.1584);
   ttbarlight__115->SetBinError(2,126.8075);
   ttbarlight__115->SetBinError(3,94.60073);
   ttbarlight__115->SetBinError(4,48.14027);
   ttbarlight__115->SetBinError(5,42.04621);
   ttbarlight__115->SetBinError(6,37.39127);
   ttbarlight__115->SetBinError(7,3.777908);
   ttbarlight__115->SetBinError(8,3.454223);
   ttbarlight__115->SetBinError(9,3.500927);
   ttbarlight__115->SetEntries(9);
   ttbarlight__115->SetDirectory(0);
   ttbarlight__115->SetStats(0);
   ttbarlight__115->SetMarkerStyle(20);
   ttbarlight__115->SetMarkerSize(1.2);
   ttbarlight__115->GetXaxis()->SetLabelFont(43);
   ttbarlight__115->GetXaxis()->SetLabelSize(21);
   ttbarlight__115->GetXaxis()->SetTitleSize(21);
   ttbarlight__115->GetXaxis()->SetTitleOffset(1.4);
   ttbarlight__115->GetXaxis()->SetTitleFont(43);
   ttbarlight__115->GetYaxis()->SetLabelFont(43);
   ttbarlight__115->GetYaxis()->SetLabelSize(21);
   ttbarlight__115->GetYaxis()->SetTitleSize(21);
   ttbarlight__115->GetYaxis()->SetTitleOffset(1.4);
   ttbarlight__115->GetYaxis()->SetTitleFont(43);
   ttbarlight__115->GetZaxis()->SetLabelFont(43);
   ttbarlight__115->GetZaxis()->SetLabelSize(21);
   ttbarlight__115->GetZaxis()->SetTitleSize(21);
   ttbarlight__115->GetZaxis()->SetTitleFont(43);
   h_stack->Add(ttbarlight,"");
   h_stack->Draw("hist same");
   
   Double_t Graph_from_h_Tot_summary_fx3039[9] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5,
   5.5,
   6.5,
   7.5,
   8.5};
   Double_t Graph_from_h_Tot_summary_fy3039[9] = {
   122049.3,
   60501.31,
   37104.06,
   10120.97,
   10135.98,
   13418.45,
   161.7625,
   405.3931,
   1356.093};
   Double_t Graph_from_h_Tot_summary_felx3039[9] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t Graph_from_h_Tot_summary_fely3039[9] = {
   14664.43,
   10678.83,
   9552.836,
   1984.957,
   1892.885,
   2598.566,
   43.79816,
   98.17843,
   283.9321};
   Double_t Graph_from_h_Tot_summary_fehx3039[9] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t Graph_from_h_Tot_summary_fehy3039[9] = {
   14664.43,
   10678.83,
   9552.836,
   1984.957,
   1892.885,
   2598.566,
   43.79816,
   98.17843,
   283.9321};
   grae = new TGraphAsymmErrors(9,Graph_from_h_Tot_summary_fx3039,Graph_from_h_Tot_summary_fy3039,Graph_from_h_Tot_summary_felx3039,Graph_from_h_Tot_summary_fehx3039,Graph_from_h_Tot_summary_fely3039,Graph_from_h_Tot_summary_fehy3039);
   grae->SetName("Graph_from_h_Tot_summary");
   grae->SetTitle("h_Tot_summary");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(3354);
   grae->SetLineColor(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0);
   
   TH1F *Graph_Graph_from_h_Tot_summary3039 = new TH1F("Graph_Graph_from_h_Tot_summary3039","h_Tot_summary",100,0,9.9);
   Graph_Graph_from_h_Tot_summary3039->SetMinimum(106.1679);
   Graph_Graph_from_h_Tot_summary3039->SetMaximum(150373.4);
   Graph_Graph_from_h_Tot_summary3039->SetDirectory(0);
   Graph_Graph_from_h_Tot_summary3039->SetStats(0);
   Graph_Graph_from_h_Tot_summary3039->SetLineWidth(2);
   Graph_Graph_from_h_Tot_summary3039->SetMarkerStyle(20);
   Graph_Graph_from_h_Tot_summary3039->SetMarkerSize(1.2);
   Graph_Graph_from_h_Tot_summary3039->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_h_Tot_summary3039->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_h_Tot_summary3039->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_h_Tot_summary3039->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_Tot_summary3039->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_h_Tot_summary3039->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_h_Tot_summary3039->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_h_Tot_summary3039->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_h_Tot_summary3039->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_Tot_summary3039->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_h_Tot_summary3039->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_h_Tot_summary3039->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_h_Tot_summary3039->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_h_Tot_summary3039->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_h_Tot_summary3039);
   
   grae->Draw("e2");
   
   TH1F *uHbW__116 = new TH1F("uHbW__116","t#bar{t}#rightarrowWbHu",9,0,9);
   uHbW__116->SetBinContent(1,1946.434);
   uHbW__116->SetBinContent(2,1165.262);
   uHbW__116->SetBinContent(3,679.6425);
   uHbW__116->SetBinContent(4,1110.813);
   uHbW__116->SetBinContent(5,933.4817);
   uHbW__116->SetBinContent(6,566.5908);
   uHbW__116->SetBinContent(7,18.72668);
   uHbW__116->SetBinContent(8,23.2776);
   uHbW__116->SetBinContent(9,35.57217);
   uHbW__116->SetBinError(1,42.08728);
   uHbW__116->SetBinError(2,32.98434);
   uHbW__116->SetBinError(3,32.06103);
   uHbW__116->SetBinError(4,30.17524);
   uHbW__116->SetBinError(5,29.25997);
   uHbW__116->SetBinError(6,30.15664);
   uHbW__116->SetBinError(7,8.785305);
   uHbW__116->SetBinError(8,7.207257);
   uHbW__116->SetBinError(9,7.457337);
   uHbW__116->SetEntries(9);
   uHbW__116->SetDirectory(0);
   uHbW__116->SetStats(0);
   uHbW__116->SetFillStyle(0);
   uHbW__116->SetLineColor(4);
   uHbW__116->SetLineStyle(2);
   uHbW__116->SetLineWidth(4);
   uHbW__116->SetMarkerStyle(20);
   uHbW__116->SetMarkerSize(1.2);
   uHbW__116->GetXaxis()->SetLabelFont(43);
   uHbW__116->GetXaxis()->SetLabelSize(21);
   uHbW__116->GetXaxis()->SetTitleSize(21);
   uHbW__116->GetXaxis()->SetTitleOffset(1.4);
   uHbW__116->GetXaxis()->SetTitleFont(43);
   uHbW__116->GetYaxis()->SetLabelFont(43);
   uHbW__116->GetYaxis()->SetLabelSize(21);
   uHbW__116->GetYaxis()->SetTitleSize(21);
   uHbW__116->GetYaxis()->SetTitleOffset(1.4);
   uHbW__116->GetYaxis()->SetTitleFont(43);
   uHbW__116->GetZaxis()->SetLabelFont(43);
   uHbW__116->GetZaxis()->SetLabelSize(21);
   uHbW__116->GetZaxis()->SetTitleSize(21);
   uHbW__116->GetZaxis()->SetTitleFont(43);
   uHbW__116->Draw("HISTsame");
   
   TH1F *uHcW__117 = new TH1F("uHcW__117","t#bar{t}#rightarrowWbHc",9,0,9);
   uHcW__117->SetBinContent(1,1991.929);
   uHcW__117->SetBinContent(2,1259.901);
   uHcW__117->SetBinContent(3,765.2861);
   uHcW__117->SetBinContent(4,1261.145);
   uHcW__117->SetBinContent(5,1011.803);
   uHcW__117->SetBinContent(6,689.0325);
   uHcW__117->SetBinContent(7,24.79891);
   uHcW__117->SetBinContent(8,26.22766);
   uHcW__117->SetBinContent(9,58.78021);
   uHcW__117->SetBinError(1,42.38325);
   uHcW__117->SetBinError(2,35.08014);
   uHcW__117->SetBinError(3,32.26275);
   uHcW__117->SetBinError(4,32.70393);
   uHcW__117->SetBinError(5,31.13648);
   uHcW__117->SetBinError(6,31.52531);
   uHcW__117->SetBinError(7,4.885025);
   uHcW__117->SetBinError(8,6.276939);
   uHcW__117->SetBinError(9,8.09202);
   uHcW__117->SetEntries(9);
   uHcW__117->SetDirectory(0);
   uHcW__117->SetStats(0);
   uHcW__117->SetFillStyle(0);
   uHcW__117->SetLineColor(2);
   uHcW__117->SetLineStyle(7);
   uHcW__117->SetLineWidth(4);
   uHcW__117->SetMarkerStyle(20);
   uHcW__117->SetMarkerSize(1.2);
   uHcW__117->GetXaxis()->SetLabelFont(43);
   uHcW__117->GetXaxis()->SetLabelSize(21);
   uHcW__117->GetXaxis()->SetTitleSize(21);
   uHcW__117->GetXaxis()->SetTitleOffset(1.4);
   uHcW__117->GetXaxis()->SetTitleFont(43);
   uHcW__117->GetYaxis()->SetLabelFont(43);
   uHcW__117->GetYaxis()->SetLabelSize(21);
   uHcW__117->GetYaxis()->SetTitleSize(21);
   uHcW__117->GetYaxis()->SetTitleOffset(1.4);
   uHcW__117->GetYaxis()->SetTitleFont(43);
   uHcW__117->GetZaxis()->SetLabelFont(43);
   uHcW__117->GetZaxis()->SetLabelSize(21);
   uHcW__117->GetZaxis()->SetTitleSize(21);
   uHcW__117->GetZaxis()->SetTitleFont(43);
   uHcW__117->Draw("HISTsame");
   
   Double_t Graph_from_Data_fx3040[9] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5,
   5.5,
   6.5,
   7.5,
   8.5};
   Double_t Graph_from_Data_fy3040[9] = {
   120572,
   58557,
   35886,
   11275,
   11707,
   14877,
   176,
   466,
   1335};
   Double_t Graph_from_Data_felx3040[9] = {
   0.499,
   0.499,
   0.499,
   0.499,
   0.499,
   0.499,
   0.499,
   0.499,
   0.499};
   Double_t Graph_from_Data_fely3040[9] = {
   347.2348,
   241.9855,
   189.436,
   106.1838,
   108.1989,
   121.9713,
   13.2665,
   21.58703,
   36.53765};
   Double_t Graph_from_Data_fehx3040[9] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t Graph_from_Data_fehy3040[9] = {
   347.2348,
   241.9855,
   189.436,
   106.1838,
   108.1989,
   121.9713,
   13.2665,
   21.58703,
   36.53765};
   grae = new TGraphAsymmErrors(9,Graph_from_Data_fx3040,Graph_from_Data_fy3040,Graph_from_Data_felx3040,Graph_from_Data_fehx3040,Graph_from_Data_fely3040,Graph_from_Data_fehy3040);
   grae->SetName("Graph_from_Data");
   grae->SetTitle("Data");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_Data3040 = new TH1F("Graph_Graph_from_Data3040","Data",100,0,9.8999);
   Graph_Graph_from_Data3040->SetMinimum(146.4602);
   Graph_Graph_from_Data3040->SetMaximum(132994.9);
   Graph_Graph_from_Data3040->SetDirectory(0);
   Graph_Graph_from_Data3040->SetStats(0);
   Graph_Graph_from_Data3040->SetLineWidth(2);
   Graph_Graph_from_Data3040->SetMarkerStyle(20);
   Graph_Graph_from_Data3040->SetMarkerSize(1.2);
   Graph_Graph_from_Data3040->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_Data3040->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_Data3040->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_Data3040->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_Data3040->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_Data3040->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_Data3040->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_Data3040->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_Data3040->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_Data3040->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_Data3040->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_Data3040->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_Data3040->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_Data3040->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_Data3040);
   
   grae->Draw("ep1 ");
   
   TH1F *h_dummy_copy__118 = new TH1F("h_dummy_copy__118","h_Tot_summary",9,0,9);
   h_dummy_copy__118->SetEntries(18);
   h_dummy_copy__118->SetDirectory(0);
   h_dummy_copy__118->SetStats(0);
   h_dummy_copy__118->SetLineWidth(2);
   h_dummy_copy__118->SetMarkerStyle(20);
   h_dummy_copy__118->SetMarkerSize(1.2);
   h_dummy_copy__118->GetXaxis()->SetBinLabel(1,"4j, 2b");
   h_dummy_copy__118->GetXaxis()->SetBinLabel(2,"5j, 2b");
   h_dummy_copy__118->GetXaxis()->SetBinLabel(3,"#geq6j, 2b");
   h_dummy_copy__118->GetXaxis()->SetBinLabel(4,"4j, 3b");
   h_dummy_copy__118->GetXaxis()->SetBinLabel(5,"5j, 3b");
   h_dummy_copy__118->GetXaxis()->SetBinLabel(6,"#geq6j, 3b");
   h_dummy_copy__118->GetXaxis()->SetBinLabel(7,"4j, 4b");
   h_dummy_copy__118->GetXaxis()->SetBinLabel(8,"5j, #geq4b");
   h_dummy_copy__118->GetXaxis()->SetBinLabel(9,"#geq6j, #geq4b");
   h_dummy_copy__118->GetXaxis()->SetBit(TAxis::kLabelsDown);
   h_dummy_copy__118->GetXaxis()->SetLabelFont(43);
   h_dummy_copy__118->GetXaxis()->SetLabelSize(21);
   h_dummy_copy__118->GetXaxis()->SetTitleSize(21);
   h_dummy_copy__118->GetXaxis()->SetTickLength(0.02);
   h_dummy_copy__118->GetXaxis()->SetTitleOffset(1.4);
   h_dummy_copy__118->GetXaxis()->SetTitleFont(43);
   h_dummy_copy__118->GetYaxis()->SetTitle("Events");
   h_dummy_copy__118->GetYaxis()->SetLabelFont(43);
   h_dummy_copy__118->GetYaxis()->SetLabelSize(19.95);
   h_dummy_copy__118->GetYaxis()->SetTitleSize(21);
   h_dummy_copy__118->GetYaxis()->SetTickLength(0.01);
   h_dummy_copy__118->GetYaxis()->SetTitleOffset(1.627312);
   h_dummy_copy__118->GetYaxis()->SetTitleFont(43);
   h_dummy_copy__118->GetZaxis()->SetLabelFont(43);
   h_dummy_copy__118->GetZaxis()->SetLabelSize(21);
   h_dummy_copy__118->GetZaxis()->SetTitleSize(21);
   h_dummy_copy__118->GetZaxis()->SetTitleFont(43);
   h_dummy_copy__118->Draw("sameaxis");
      tex = new TLatex(0.12,0.88,"ATLAS");
tex->SetNDC();
   tex->SetTextFont(73);
   tex->SetTextSize(21);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.2755711,0.88,"Internal");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(21);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.12,0.8391241,"#sqrt{s} = 13 TeV, 36.1 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(21);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.12,0.7982482,"t#rightarrowH(b#bar{b})q search");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(21);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.12,0.7573723,"Pre-Fit");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(21);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TLegend *leg = new TLegend(0.6790589,0.63,0.92,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(43);
   leg->SetTextSize(21);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("Data","Data","lep");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("uHcW","t#bar{t}#rightarrowWbHc (BR=1%)","l");
   entry->SetLineColor(2);
   entry->SetLineStyle(7);
   entry->SetLineWidth(4);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("uHbW","t#bar{t}#rightarrowWbHu (BR=1%)","l");
   entry->SetLineColor(4);
   entry->SetLineStyle(2);
   entry->SetLineWidth(4);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("ttbarlight","t#bar{t}+light-jets","f");
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("ttbarcc","t#bar{t}+#geq1c","f");

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
   entry=leg->AddEntry("ttbarbb","t#bar{t}+#geq1b","f");

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
   entry=leg->AddEntry("topEW","Non-t#bar{t}","f");

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
   entry=leg->AddEntry("Graph_from_h_Tot_summary","Total Bkg unc.","f");

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
   base_ebv2_signal_cH_uH_default_summary->cd();
   base_ebv2_signal_cH_uH_default_summary->Modified();
   base_ebv2_signal_cH_uH_default_summary->cd();
   base_ebv2_signal_cH_uH_default_summary->SetSelected(base_ebv2_signal_cH_uH_default_summary);
}
