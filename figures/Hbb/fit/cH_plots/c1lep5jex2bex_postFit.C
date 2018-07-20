void c1lep5jex2bex_postFit()
{
//=========Macro generated from canvas: c_c1lep5jex2bex_postFit/c_c1lep5jex2bex_postFit
//=========  (Fri Jul 20 11:23:09 2018) by ROOT version6.04/14
   TCanvas *c_c1lep5jex2bex_postFit = new TCanvas("c_c1lep5jex2bex_postFit", "c_c1lep5jex2bex_postFit",0,0,600,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c_c1lep5jex2bex_postFit->SetHighLightColor(2);
   c_c1lep5jex2bex_postFit->Range(0,0,1,1);
   c_c1lep5jex2bex_postFit->SetFillColor(0);
   c_c1lep5jex2bex_postFit->SetBorderMode(0);
   c_c1lep5jex2bex_postFit->SetBorderSize(2);
   c_c1lep5jex2bex_postFit->SetTickx(1);
   c_c1lep5jex2bex_postFit->SetTicky(1);
   c_c1lep5jex2bex_postFit->SetLeftMargin(0.16);
   c_c1lep5jex2bex_postFit->SetRightMargin(0.05);
   c_c1lep5jex2bex_postFit->SetTopMargin(0.05);
   c_c1lep5jex2bex_postFit->SetBottomMargin(0.16);
   c_c1lep5jex2bex_postFit->SetFrameBorderMode(0);
  
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
   Double_t xAxis31[2] = {0.6, 1}; 
   
   TH1D *h_dummy2__28 = new TH1D("h_dummy2__28","Data/MC",1, xAxis31);
   h_dummy2__28->SetMinimum(0.5);
   h_dummy2__28->SetMaximum(1.5);
   h_dummy2__28->SetEntries(2849809);
   h_dummy2__28->SetDirectory(0);
   h_dummy2__28->SetStats(0);
   h_dummy2__28->SetMarkerStyle(20);
   h_dummy2__28->SetMarkerSize(1.2);
   h_dummy2__28->GetXaxis()->SetTitle("LH discriminant");
   h_dummy2__28->GetXaxis()->SetRange(1,20);
   h_dummy2__28->GetXaxis()->SetLabelFont(43);
   h_dummy2__28->GetXaxis()->SetLabelOffset(0.025);
   h_dummy2__28->GetXaxis()->SetLabelSize(16.8);
   h_dummy2__28->GetXaxis()->SetTitleSize(21);
   h_dummy2__28->GetXaxis()->SetTitleOffset(5.05);
   h_dummy2__28->GetXaxis()->SetTitleFont(43);
   h_dummy2__28->GetYaxis()->SetTitle("Data / Pred");
   h_dummy2__28->GetYaxis()->CenterTitle(true);
   h_dummy2__28->GetYaxis()->SetNdivisions(-504);
   h_dummy2__28->GetYaxis()->SetLabelFont(43);
   h_dummy2__28->GetYaxis()->SetLabelOffset(0.02);
   h_dummy2__28->GetYaxis()->SetLabelSize(16.8);
   h_dummy2__28->GetYaxis()->SetTitleSize(21);
   h_dummy2__28->GetYaxis()->SetTitleOffset(2.4);
   h_dummy2__28->GetYaxis()->SetTitleFont(43);
   h_dummy2__28->GetZaxis()->SetLabelFont(43);
   h_dummy2__28->GetZaxis()->SetLabelSize(21);
   h_dummy2__28->GetZaxis()->SetTitleSize(21);
   h_dummy2__28->GetZaxis()->SetTitleFont(43);
   h_dummy2__28->Draw("HIST");
   
   Double_t Graph_from_h_ratio_fx3013[1] = {
   0.8};
   Double_t Graph_from_h_ratio_fy3013[1] = {
   0.9949802};
   Double_t Graph_from_h_ratio_felx3013[1] = {
   0.1996};
   Double_t Graph_from_h_ratio_fely3013[1] = {
   0.004111734};
   Double_t Graph_from_h_ratio_fehx3013[1] = {
   0.2};
   Double_t Graph_from_h_ratio_fehy3013[1] = {
   0.004111734};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(1,Graph_from_h_ratio_fx3013,Graph_from_h_ratio_fy3013,Graph_from_h_ratio_felx3013,Graph_from_h_ratio_fehx3013,Graph_from_h_ratio_fely3013,Graph_from_h_ratio_fehy3013);
   grae->SetName("Graph_from_h_ratio");
   grae->SetTitle("FcncDiscriminant");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(24);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_h_ratio3013 = new TH1F("Graph_Graph_from_h_ratio3013","FcncDiscriminant",100,0.56044,1.03996);
   Graph_Graph_from_h_ratio3013->SetMinimum(0.9900461);
   Graph_Graph_from_h_ratio3013->SetMaximum(0.9999143);
   Graph_Graph_from_h_ratio3013->SetDirectory(0);
   Graph_Graph_from_h_ratio3013->SetStats(0);
   Graph_Graph_from_h_ratio3013->SetLineWidth(2);
   Graph_Graph_from_h_ratio3013->SetMarkerStyle(20);
   Graph_Graph_from_h_ratio3013->SetMarkerSize(1.2);
   Graph_Graph_from_h_ratio3013->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3013->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3013->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3013->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3013->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3013->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3013->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3013->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3013->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3013->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3013->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3013->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3013->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3013->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_h_ratio3013);
   
   grae->Draw("pe0");
   TLine *line = new TLine(0.6,1,1,1);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t g_ratio2_fx3014[1] = {
   0.8};
   Double_t g_ratio2_fy3014[1] = {
   1};
   Double_t g_ratio2_felx3014[1] = {
   0.2};
   Double_t g_ratio2_fely3014[1] = {
   0.02523247};
   Double_t g_ratio2_fehx3014[1] = {
   0.2};
   Double_t g_ratio2_fehy3014[1] = {
   0.02523247};
   grae = new TGraphAsymmErrors(1,g_ratio2_fx3014,g_ratio2_fy3014,g_ratio2_felx3014,g_ratio2_fehx3014,g_ratio2_fely3014,g_ratio2_fehy3014);
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
   
   TH1F *Graph_g_ratio23014 = new TH1F("Graph_g_ratio23014","FcncDiscriminant",100,0.56,1.04);
   Graph_g_ratio23014->SetMinimum(0.969721);
   Graph_g_ratio23014->SetMaximum(1.030279);
   Graph_g_ratio23014->SetDirectory(0);
   Graph_g_ratio23014->SetStats(0);
   Graph_g_ratio23014->SetLineWidth(2);
   Graph_g_ratio23014->SetMarkerStyle(20);
   Graph_g_ratio23014->SetMarkerSize(1.2);
   Graph_g_ratio23014->GetXaxis()->SetLabelFont(43);
   Graph_g_ratio23014->GetXaxis()->SetLabelSize(21);
   Graph_g_ratio23014->GetXaxis()->SetTitleSize(21);
   Graph_g_ratio23014->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23014->GetXaxis()->SetTitleFont(43);
   Graph_g_ratio23014->GetYaxis()->SetLabelFont(43);
   Graph_g_ratio23014->GetYaxis()->SetLabelSize(21);
   Graph_g_ratio23014->GetYaxis()->SetTitleSize(21);
   Graph_g_ratio23014->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23014->GetYaxis()->SetTitleFont(43);
   Graph_g_ratio23014->GetZaxis()->SetLabelFont(43);
   Graph_g_ratio23014->GetZaxis()->SetLabelSize(21);
   Graph_g_ratio23014->GetZaxis()->SetTitleSize(21);
   Graph_g_ratio23014->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_ratio23014);
   
   grae->Draw("e2");
   Double_t xAxis32[2] = {0.6, 1}; 
   
   TH1D *h_dummy2_copy__29 = new TH1D("h_dummy2_copy__29","Data/MC",1, xAxis32);
   h_dummy2_copy__29->SetMinimum(0.5);
   h_dummy2_copy__29->SetMaximum(1.5);
   h_dummy2_copy__29->SetEntries(2849809);
   h_dummy2_copy__29->SetDirectory(0);
   h_dummy2_copy__29->SetStats(0);
   h_dummy2_copy__29->SetMarkerStyle(20);
   h_dummy2_copy__29->SetMarkerSize(1.2);
   h_dummy2_copy__29->GetXaxis()->SetTitle("LH discriminant");
   h_dummy2_copy__29->GetXaxis()->SetRange(1,20);
   h_dummy2_copy__29->GetXaxis()->SetLabelFont(43);
   h_dummy2_copy__29->GetXaxis()->SetLabelOffset(0.025);
   h_dummy2_copy__29->GetXaxis()->SetLabelSize(16.8);
   h_dummy2_copy__29->GetXaxis()->SetTitleSize(21);
   h_dummy2_copy__29->GetXaxis()->SetTitleOffset(5.05);
   h_dummy2_copy__29->GetXaxis()->SetTitleFont(43);
   h_dummy2_copy__29->GetYaxis()->SetTitle("Data / Pred");
   h_dummy2_copy__29->GetYaxis()->CenterTitle(true);
   h_dummy2_copy__29->GetYaxis()->SetNdivisions(-504);
   h_dummy2_copy__29->GetYaxis()->SetLabelFont(43);
   h_dummy2_copy__29->GetYaxis()->SetLabelOffset(0.02);
   h_dummy2_copy__29->GetYaxis()->SetLabelSize(16.8);
   h_dummy2_copy__29->GetYaxis()->SetTitleSize(21);
   h_dummy2_copy__29->GetYaxis()->SetTitleOffset(2.4);
   h_dummy2_copy__29->GetYaxis()->SetTitleFont(43);
   h_dummy2_copy__29->GetZaxis()->SetLabelFont(43);
   h_dummy2_copy__29->GetZaxis()->SetLabelSize(21);
   h_dummy2_copy__29->GetZaxis()->SetTitleSize(21);
   h_dummy2_copy__29->GetZaxis()->SetTitleFont(43);
   h_dummy2_copy__29->Draw("sameaxis");
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
   c_c1lep5jex2bex_postFit->cd();
  
// ------------>Primitives in pad: pad0
   TPad *pad0 = new TPad("pad0", "pad0",0,0.2,1,1);
   pad0->Draw();
   pad0->cd();
   pad0->Range(0.5308642,-12462.87,1.024691,112165.8);
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
   Double_t xAxis33[2] = {0.6, 1}; 
   
   TH1D *h_dummy__30 = new TH1D("h_dummy__30","FcncDiscriminant",1, xAxis33);
   h_dummy__30->SetMinimum(0);
   h_dummy__30->SetMaximum(105934.4);
   h_dummy__30->SetEntries(2849809);
   h_dummy__30->SetDirectory(0);
   h_dummy__30->SetStats(0);
   h_dummy__30->SetMarkerStyle(20);
   h_dummy__30->SetMarkerSize(1.2);
   h_dummy__30->GetXaxis()->SetRange(1,20);
   h_dummy__30->GetXaxis()->SetLabelFont(43);
   h_dummy__30->GetXaxis()->SetLabelSize(0);
   h_dummy__30->GetXaxis()->SetTitleSize(21);
   h_dummy__30->GetXaxis()->SetTitleOffset(1.4);
   h_dummy__30->GetXaxis()->SetTitleFont(43);
   h_dummy__30->GetYaxis()->SetTitle("Events / 1");
   h_dummy__30->GetYaxis()->SetLabelFont(43);
   h_dummy__30->GetYaxis()->SetLabelSize(16.8);
   h_dummy__30->GetYaxis()->SetTitleSize(21);
   h_dummy__30->GetYaxis()->SetTitleOffset(2.4);
   h_dummy__30->GetYaxis()->SetTitleFont(43);
   h_dummy__30->GetZaxis()->SetLabelFont(43);
   h_dummy__30->GetZaxis()->SetLabelSize(21);
   h_dummy__30->GetZaxis()->SetTitleSize(21);
   h_dummy__30->GetZaxis()->SetTitleFont(43);
   h_dummy__30->Draw("HIST");
   
   THStack *h_stack = new THStack();
   h_stack->SetName("h_stack");
   h_stack->SetTitle("h_stack");
   Double_t xAxis34[2] = {0.6, 1}; 
   
   TH1F *h_stack_stack_4 = new TH1F("h_stack_stack_4","h_stack",1, xAxis34);
   h_stack_stack_4->SetMinimum(-19.36508);
   h_stack_stack_4->SetMaximum(61775.3);
   h_stack_stack_4->SetDirectory(0);
   h_stack_stack_4->SetStats(0);
   h_stack_stack_4->SetLineWidth(2);
   h_stack_stack_4->SetMarkerStyle(20);
   h_stack_stack_4->SetMarkerSize(1.2);
   h_stack_stack_4->GetXaxis()->SetLabelFont(43);
   h_stack_stack_4->GetXaxis()->SetLabelSize(21);
   h_stack_stack_4->GetXaxis()->SetTitleSize(21);
   h_stack_stack_4->GetXaxis()->SetTitleOffset(1.4);
   h_stack_stack_4->GetXaxis()->SetTitleFont(43);
   h_stack_stack_4->GetYaxis()->SetLabelFont(43);
   h_stack_stack_4->GetYaxis()->SetLabelSize(21);
   h_stack_stack_4->GetYaxis()->SetTitleSize(21);
   h_stack_stack_4->GetYaxis()->SetTitleOffset(1.4);
   h_stack_stack_4->GetYaxis()->SetTitleFont(43);
   h_stack_stack_4->GetZaxis()->SetLabelFont(43);
   h_stack_stack_4->GetZaxis()->SetLabelSize(21);
   h_stack_stack_4->GetZaxis()->SetTitleSize(21);
   h_stack_stack_4->GetZaxis()->SetTitleFont(43);
   h_stack->SetHistogram(h_stack_stack_4);
   
   Double_t xAxis35[2] = {0.6, 1}; 
   
   TH1D *c1lep5jex2bex_topEW__31 = new TH1D("c1lep5jex2bex_topEW__31","FcncDiscriminant",1, xAxis35);
   c1lep5jex2bex_topEW__31->SetBinContent(0,20537.84);
   c1lep5jex2bex_topEW__31->SetBinContent(1,9084.032);
   c1lep5jex2bex_topEW__31->SetBinError(0,340.0511);
   c1lep5jex2bex_topEW__31->SetBinError(1,213.5867);
   c1lep5jex2bex_topEW__31->SetEntries(1956641);
   c1lep5jex2bex_topEW__31->SetDirectory(0);
   c1lep5jex2bex_topEW__31->SetStats(0);

   ci = TColor::GetColor("#66cc66");
   c1lep5jex2bex_topEW__31->SetFillColor(ci);
   c1lep5jex2bex_topEW__31->SetMarkerStyle(20);
   c1lep5jex2bex_topEW__31->SetMarkerSize(1.2);
   c1lep5jex2bex_topEW__31->GetXaxis()->SetRange(1,20);
   c1lep5jex2bex_topEW__31->GetXaxis()->SetLabelFont(43);
   c1lep5jex2bex_topEW__31->GetXaxis()->SetLabelSize(21);
   c1lep5jex2bex_topEW__31->GetXaxis()->SetTitleSize(21);
   c1lep5jex2bex_topEW__31->GetXaxis()->SetTitleOffset(1.4);
   c1lep5jex2bex_topEW__31->GetXaxis()->SetTitleFont(43);
   c1lep5jex2bex_topEW__31->GetYaxis()->SetLabelFont(43);
   c1lep5jex2bex_topEW__31->GetYaxis()->SetLabelSize(21);
   c1lep5jex2bex_topEW__31->GetYaxis()->SetTitleSize(21);
   c1lep5jex2bex_topEW__31->GetYaxis()->SetTitleOffset(1.4);
   c1lep5jex2bex_topEW__31->GetYaxis()->SetTitleFont(43);
   c1lep5jex2bex_topEW__31->GetZaxis()->SetLabelFont(43);
   c1lep5jex2bex_topEW__31->GetZaxis()->SetLabelSize(21);
   c1lep5jex2bex_topEW__31->GetZaxis()->SetTitleSize(21);
   c1lep5jex2bex_topEW__31->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep5jex2bex_topEW,"");
   Double_t xAxis36[2] = {0.6, 1}; 
   
   TH1D *c1lep5jex2bex_ttbarbb__32 = new TH1D("c1lep5jex2bex_ttbarbb__32","FcncDiscriminant",1, xAxis36);
   c1lep5jex2bex_ttbarbb__32->SetBinContent(0,10211.72);
   c1lep5jex2bex_ttbarbb__32->SetBinContent(1,3407.014);
   c1lep5jex2bex_ttbarbb__32->SetBinError(0,67.3315);
   c1lep5jex2bex_ttbarbb__32->SetBinError(1,40.8173);
   c1lep5jex2bex_ttbarbb__32->SetEntries(44207);
   c1lep5jex2bex_ttbarbb__32->SetDirectory(0);
   c1lep5jex2bex_ttbarbb__32->SetStats(0);

   ci = TColor::GetColor("#6666cc");
   c1lep5jex2bex_ttbarbb__32->SetFillColor(ci);
   c1lep5jex2bex_ttbarbb__32->SetMarkerStyle(20);
   c1lep5jex2bex_ttbarbb__32->SetMarkerSize(1.2);
   c1lep5jex2bex_ttbarbb__32->GetXaxis()->SetRange(1,20);
   c1lep5jex2bex_ttbarbb__32->GetXaxis()->SetLabelFont(43);
   c1lep5jex2bex_ttbarbb__32->GetXaxis()->SetLabelSize(21);
   c1lep5jex2bex_ttbarbb__32->GetXaxis()->SetTitleSize(21);
   c1lep5jex2bex_ttbarbb__32->GetXaxis()->SetTitleOffset(1.4);
   c1lep5jex2bex_ttbarbb__32->GetXaxis()->SetTitleFont(43);
   c1lep5jex2bex_ttbarbb__32->GetYaxis()->SetLabelFont(43);
   c1lep5jex2bex_ttbarbb__32->GetYaxis()->SetLabelSize(21);
   c1lep5jex2bex_ttbarbb__32->GetYaxis()->SetTitleSize(21);
   c1lep5jex2bex_ttbarbb__32->GetYaxis()->SetTitleOffset(1.4);
   c1lep5jex2bex_ttbarbb__32->GetYaxis()->SetTitleFont(43);
   c1lep5jex2bex_ttbarbb__32->GetZaxis()->SetLabelFont(43);
   c1lep5jex2bex_ttbarbb__32->GetZaxis()->SetLabelSize(21);
   c1lep5jex2bex_ttbarbb__32->GetZaxis()->SetTitleSize(21);
   c1lep5jex2bex_ttbarbb__32->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep5jex2bex_ttbarbb,"");
   Double_t xAxis37[2] = {0.6, 1}; 
   
   TH1D *c1lep5jex2bex_ttbarcc__33 = new TH1D("c1lep5jex2bex_ttbarcc__33","FcncDiscriminant",1, xAxis37);
   c1lep5jex2bex_ttbarcc__33->SetBinContent(0,20614.31);
   c1lep5jex2bex_ttbarcc__33->SetBinContent(1,8351.12);
   c1lep5jex2bex_ttbarcc__33->SetBinError(0,89.15178);
   c1lep5jex2bex_ttbarcc__33->SetBinError(1,48.0997);
   c1lep5jex2bex_ttbarcc__33->SetEntries(97670);
   c1lep5jex2bex_ttbarcc__33->SetDirectory(0);
   c1lep5jex2bex_ttbarcc__33->SetStats(0);

   ci = TColor::GetColor("#ccccff");
   c1lep5jex2bex_ttbarcc__33->SetFillColor(ci);
   c1lep5jex2bex_ttbarcc__33->SetMarkerStyle(20);
   c1lep5jex2bex_ttbarcc__33->SetMarkerSize(1.2);
   c1lep5jex2bex_ttbarcc__33->GetXaxis()->SetRange(1,20);
   c1lep5jex2bex_ttbarcc__33->GetXaxis()->SetLabelFont(43);
   c1lep5jex2bex_ttbarcc__33->GetXaxis()->SetLabelSize(21);
   c1lep5jex2bex_ttbarcc__33->GetXaxis()->SetTitleSize(21);
   c1lep5jex2bex_ttbarcc__33->GetXaxis()->SetTitleOffset(1.4);
   c1lep5jex2bex_ttbarcc__33->GetXaxis()->SetTitleFont(43);
   c1lep5jex2bex_ttbarcc__33->GetYaxis()->SetLabelFont(43);
   c1lep5jex2bex_ttbarcc__33->GetYaxis()->SetLabelSize(21);
   c1lep5jex2bex_ttbarcc__33->GetYaxis()->SetTitleSize(21);
   c1lep5jex2bex_ttbarcc__33->GetYaxis()->SetTitleOffset(1.4);
   c1lep5jex2bex_ttbarcc__33->GetYaxis()->SetTitleFont(43);
   c1lep5jex2bex_ttbarcc__33->GetZaxis()->SetLabelFont(43);
   c1lep5jex2bex_ttbarcc__33->GetZaxis()->SetLabelSize(21);
   c1lep5jex2bex_ttbarcc__33->GetZaxis()->SetTitleSize(21);
   c1lep5jex2bex_ttbarcc__33->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep5jex2bex_ttbarcc,"");
   Double_t xAxis38[2] = {0.6, 1}; 
   
   TH1D *c1lep5jex2bex_ttbarlight__34 = new TH1D("c1lep5jex2bex_ttbarlight__34","FcncDiscriminant",1, xAxis38);
   c1lep5jex2bex_ttbarlight__34->SetBinContent(0,160425.7);
   c1lep5jex2bex_ttbarlight__34->SetBinContent(1,38010.26);
   c1lep5jex2bex_ttbarlight__34->SetBinError(0,248.348);
   c1lep5jex2bex_ttbarlight__34->SetBinError(1,126.8075);
   c1lep5jex2bex_ttbarlight__34->SetEntries(751290);
   c1lep5jex2bex_ttbarlight__34->SetDirectory(0);
   c1lep5jex2bex_ttbarlight__34->SetStats(0);
   c1lep5jex2bex_ttbarlight__34->SetMarkerStyle(20);
   c1lep5jex2bex_ttbarlight__34->SetMarkerSize(1.2);
   c1lep5jex2bex_ttbarlight__34->GetXaxis()->SetRange(1,20);
   c1lep5jex2bex_ttbarlight__34->GetXaxis()->SetLabelFont(43);
   c1lep5jex2bex_ttbarlight__34->GetXaxis()->SetLabelSize(21);
   c1lep5jex2bex_ttbarlight__34->GetXaxis()->SetTitleSize(21);
   c1lep5jex2bex_ttbarlight__34->GetXaxis()->SetTitleOffset(1.4);
   c1lep5jex2bex_ttbarlight__34->GetXaxis()->SetTitleFont(43);
   c1lep5jex2bex_ttbarlight__34->GetYaxis()->SetLabelFont(43);
   c1lep5jex2bex_ttbarlight__34->GetYaxis()->SetLabelSize(21);
   c1lep5jex2bex_ttbarlight__34->GetYaxis()->SetTitleSize(21);
   c1lep5jex2bex_ttbarlight__34->GetYaxis()->SetTitleOffset(1.4);
   c1lep5jex2bex_ttbarlight__34->GetYaxis()->SetTitleFont(43);
   c1lep5jex2bex_ttbarlight__34->GetZaxis()->SetLabelFont(43);
   c1lep5jex2bex_ttbarlight__34->GetZaxis()->SetLabelSize(21);
   c1lep5jex2bex_ttbarlight__34->GetZaxis()->SetTitleSize(21);
   c1lep5jex2bex_ttbarlight__34->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep5jex2bex_ttbarlight,"");
   Double_t xAxis39[2] = {0.6, 1}; 
   
   TH1D *c1lep5jex2bex_uHcW__35 = new TH1D("c1lep5jex2bex_uHcW__35","FcncDiscriminant",1, xAxis39);
   c1lep5jex2bex_uHcW__35->SetBinContent(0,-24.38039);
   c1lep5jex2bex_uHcW__35->SetBinContent(1,-18.80958);
   c1lep5jex2bex_uHcW__35->SetBinError(0,0.6367469);
   c1lep5jex2bex_uHcW__35->SetBinError(1,0.5554992);
   c1lep5jex2bex_uHcW__35->SetEntries(16715);
   c1lep5jex2bex_uHcW__35->SetDirectory(0);
   c1lep5jex2bex_uHcW__35->SetStats(0);
   c1lep5jex2bex_uHcW__35->SetFillColor(2);
   c1lep5jex2bex_uHcW__35->SetLineColor(2);
   c1lep5jex2bex_uHcW__35->SetMarkerStyle(20);
   c1lep5jex2bex_uHcW__35->SetMarkerSize(1.2);
   c1lep5jex2bex_uHcW__35->GetXaxis()->SetRange(1,20);
   c1lep5jex2bex_uHcW__35->GetXaxis()->SetLabelFont(43);
   c1lep5jex2bex_uHcW__35->GetXaxis()->SetLabelSize(21);
   c1lep5jex2bex_uHcW__35->GetXaxis()->SetTitleSize(21);
   c1lep5jex2bex_uHcW__35->GetXaxis()->SetTitleOffset(1.4);
   c1lep5jex2bex_uHcW__35->GetXaxis()->SetTitleFont(43);
   c1lep5jex2bex_uHcW__35->GetYaxis()->SetLabelFont(43);
   c1lep5jex2bex_uHcW__35->GetYaxis()->SetLabelSize(21);
   c1lep5jex2bex_uHcW__35->GetYaxis()->SetTitleSize(21);
   c1lep5jex2bex_uHcW__35->GetYaxis()->SetTitleOffset(1.4);
   c1lep5jex2bex_uHcW__35->GetYaxis()->SetTitleFont(43);
   c1lep5jex2bex_uHcW__35->GetZaxis()->SetLabelFont(43);
   c1lep5jex2bex_uHcW__35->GetZaxis()->SetLabelSize(21);
   c1lep5jex2bex_uHcW__35->GetZaxis()->SetTitleSize(21);
   c1lep5jex2bex_uHcW__35->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep5jex2bex_uHcW,"");
   h_stack->Draw("hist same");
   
   Double_t g_totErr_postFit_fx3015[1] = {
   0.8};
   Double_t g_totErr_postFit_fy3015[1] = {
   58852.43};
   Double_t g_totErr_postFit_felx3015[1] = {
   0.2};
   Double_t g_totErr_postFit_fely3015[1] = {
   1484.992};
   Double_t g_totErr_postFit_fehx3015[1] = {
   0.2};
   Double_t g_totErr_postFit_fehy3015[1] = {
   1484.992};
   grae = new TGraphAsymmErrors(1,g_totErr_postFit_fx3015,g_totErr_postFit_fy3015,g_totErr_postFit_felx3015,g_totErr_postFit_fehx3015,g_totErr_postFit_fely3015,g_totErr_postFit_fehy3015);
   grae->SetName("g_totErr_postFit");
   grae->SetTitle("FcncDiscriminant");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(3354);
   grae->SetLineColor(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0);
   
   TH1F *Graph_g_totErr_postFit3015 = new TH1F("Graph_g_totErr_postFit3015","FcncDiscriminant",100,0.56,1.04);
   Graph_g_totErr_postFit3015->SetMinimum(57070.44);
   Graph_g_totErr_postFit3015->SetMaximum(60634.42);
   Graph_g_totErr_postFit3015->SetDirectory(0);
   Graph_g_totErr_postFit3015->SetStats(0);
   Graph_g_totErr_postFit3015->SetLineWidth(2);
   Graph_g_totErr_postFit3015->SetMarkerStyle(20);
   Graph_g_totErr_postFit3015->SetMarkerSize(1.2);
   Graph_g_totErr_postFit3015->GetXaxis()->SetLabelFont(43);
   Graph_g_totErr_postFit3015->GetXaxis()->SetLabelSize(21);
   Graph_g_totErr_postFit3015->GetXaxis()->SetTitleSize(21);
   Graph_g_totErr_postFit3015->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_totErr_postFit3015->GetXaxis()->SetTitleFont(43);
   Graph_g_totErr_postFit3015->GetYaxis()->SetLabelFont(43);
   Graph_g_totErr_postFit3015->GetYaxis()->SetLabelSize(21);
   Graph_g_totErr_postFit3015->GetYaxis()->SetTitleSize(21);
   Graph_g_totErr_postFit3015->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_totErr_postFit3015->GetYaxis()->SetTitleFont(43);
   Graph_g_totErr_postFit3015->GetZaxis()->SetLabelFont(43);
   Graph_g_totErr_postFit3015->GetZaxis()->SetLabelSize(21);
   Graph_g_totErr_postFit3015->GetZaxis()->SetTitleSize(21);
   Graph_g_totErr_postFit3015->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_totErr_postFit3015);
   
   grae->Draw("e2");
   
   Double_t Graph_from_c1lep5jex2bex_Data_fx3016[1] = {
   0.8};
   Double_t Graph_from_c1lep5jex2bex_Data_fy3016[1] = {
   58557};
   Double_t Graph_from_c1lep5jex2bex_Data_felx3016[1] = {
   0.1996};
   Double_t Graph_from_c1lep5jex2bex_Data_fely3016[1] = {
   241.9855};
   Double_t Graph_from_c1lep5jex2bex_Data_fehx3016[1] = {
   0.2};
   Double_t Graph_from_c1lep5jex2bex_Data_fehy3016[1] = {
   241.9855};
   grae = new TGraphAsymmErrors(1,Graph_from_c1lep5jex2bex_Data_fx3016,Graph_from_c1lep5jex2bex_Data_fy3016,Graph_from_c1lep5jex2bex_Data_felx3016,Graph_from_c1lep5jex2bex_Data_fehx3016,Graph_from_c1lep5jex2bex_Data_fely3016,Graph_from_c1lep5jex2bex_Data_fehy3016);
   grae->SetName("Graph_from_c1lep5jex2bex_Data");
   grae->SetTitle("FcncDiscriminant");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_c1lep5jex2bex_Data3016 = new TH1F("Graph_Graph_from_c1lep5jex2bex_Data3016","FcncDiscriminant",100,0.56044,1.03996);
   Graph_Graph_from_c1lep5jex2bex_Data3016->SetMinimum(58266.62);
   Graph_Graph_from_c1lep5jex2bex_Data3016->SetMaximum(58847.38);
   Graph_Graph_from_c1lep5jex2bex_Data3016->SetDirectory(0);
   Graph_Graph_from_c1lep5jex2bex_Data3016->SetStats(0);
   Graph_Graph_from_c1lep5jex2bex_Data3016->SetLineWidth(2);
   Graph_Graph_from_c1lep5jex2bex_Data3016->SetMarkerStyle(20);
   Graph_Graph_from_c1lep5jex2bex_Data3016->SetMarkerSize(1.2);
   Graph_Graph_from_c1lep5jex2bex_Data3016->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep5jex2bex_Data3016->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep5jex2bex_Data3016->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep5jex2bex_Data3016->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep5jex2bex_Data3016->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep5jex2bex_Data3016->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep5jex2bex_Data3016->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep5jex2bex_Data3016->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep5jex2bex_Data3016->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep5jex2bex_Data3016->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep5jex2bex_Data3016->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep5jex2bex_Data3016->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep5jex2bex_Data3016->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep5jex2bex_Data3016->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_c1lep5jex2bex_Data3016);
   
   grae->Draw("ep1 ");
   Double_t xAxis40[2] = {0.6, 1}; 
   
   TH1D *h_dummy_copy__36 = new TH1D("h_dummy_copy__36","FcncDiscriminant",1, xAxis40);
   h_dummy_copy__36->SetEntries(2849809);
   h_dummy_copy__36->SetDirectory(0);
   h_dummy_copy__36->SetStats(0);
   h_dummy_copy__36->SetMarkerStyle(20);
   h_dummy_copy__36->SetMarkerSize(1.2);
   h_dummy_copy__36->GetXaxis()->SetTitle("LH discriminant");
   h_dummy_copy__36->GetXaxis()->SetRange(1,20);
   h_dummy_copy__36->GetXaxis()->SetLabelFont(43);
   h_dummy_copy__36->GetXaxis()->SetLabelSize(21);
   h_dummy_copy__36->GetXaxis()->SetTitleSize(21);
   h_dummy_copy__36->GetXaxis()->SetTitleOffset(1.4);
   h_dummy_copy__36->GetXaxis()->SetTitleFont(43);
   h_dummy_copy__36->GetYaxis()->SetTitle("Events / 1");
   h_dummy_copy__36->GetYaxis()->SetLabelFont(43);
   h_dummy_copy__36->GetYaxis()->SetLabelSize(16.8);
   h_dummy_copy__36->GetYaxis()->SetTitleSize(21);
   h_dummy_copy__36->GetYaxis()->SetTitleOffset(2.4);
   h_dummy_copy__36->GetYaxis()->SetTitleFont(43);
   h_dummy_copy__36->GetZaxis()->SetLabelFont(43);
   h_dummy_copy__36->GetZaxis()->SetLabelSize(21);
   h_dummy_copy__36->GetZaxis()->SetTitleSize(21);
   h_dummy_copy__36->GetZaxis()->SetTitleFont(43);
   h_dummy_copy__36->Draw("sameaxis");
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
      tex = new TLatex(0.18,0.73,"5j, 2b");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(21);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.18,0.68,"Post-Fit");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(21);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TLegend *leg = new TLegend(0.5308,0.63,0.92,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(43);
   leg->SetTextSize(18.9);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("c1lep5jex2bex_Data","Data","lep");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep5jex2bex_uHcW","t#bar{t}#rightarrowWbHc","f");
   entry->SetFillColor(2);
   entry->SetFillStyle(1001);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep5jex2bex_ttbarlight","t#bar{t}+light-jets","f");
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep5jex2bex_ttbarcc","t#bar{t}+#geq1c","f");

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
   entry=leg->AddEntry("c1lep5jex2bex_ttbarbb","t#bar{t}+#geq1b","f");

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
   entry=leg->AddEntry("c1lep5jex2bex_topEW","Non-t#bar{t}","f");

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
   entry=leg->AddEntry("g_totErr_postFit","Total Bkg unc.","f");

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
   c_c1lep5jex2bex_postFit->cd();
   c_c1lep5jex2bex_postFit->Modified();
   c_c1lep5jex2bex_postFit->cd();
   c_c1lep5jex2bex_postFit->SetSelected(c_c1lep5jex2bex_postFit);
}
