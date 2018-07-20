void c1lep6jin4bin()
{
//=========Macro generated from canvas: c_c1lep6jin4bin/c_c1lep6jin4bin
//=========  (Fri Jul 20 18:09:26 2018) by ROOT version6.04/14
   TCanvas *c_c1lep6jin4bin = new TCanvas("c_c1lep6jin4bin", "c_c1lep6jin4bin",0,0,600,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c_c1lep6jin4bin->SetHighLightColor(2);
   c_c1lep6jin4bin->Range(0,0,1,1);
   c_c1lep6jin4bin->SetFillColor(0);
   c_c1lep6jin4bin->SetBorderMode(0);
   c_c1lep6jin4bin->SetBorderSize(2);
   c_c1lep6jin4bin->SetTickx(1);
   c_c1lep6jin4bin->SetTicky(1);
   c_c1lep6jin4bin->SetLeftMargin(0.16);
   c_c1lep6jin4bin->SetRightMargin(0.05);
   c_c1lep6jin4bin->SetTopMargin(0.05);
   c_c1lep6jin4bin->SetBottomMargin(0.16);
   c_c1lep6jin4bin->SetFrameBorderMode(0);
  
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
   Double_t xAxis81[3] = {0, 0.5, 1}; 
   
   TH1D *h_dummy2__73 = new TH1D("h_dummy2__73","Data/MC",2, xAxis81);
   h_dummy2__73->SetMinimum(0.5);
   h_dummy2__73->SetMaximum(1.5);
   h_dummy2__73->SetEntries(872895);
   h_dummy2__73->SetDirectory(0);
   h_dummy2__73->SetStats(0);
   h_dummy2__73->SetMarkerStyle(20);
   h_dummy2__73->SetMarkerSize(1.2);
   h_dummy2__73->GetXaxis()->SetTitle("LH discriminant");
   h_dummy2__73->GetXaxis()->SetRange(1,20);
   h_dummy2__73->GetXaxis()->SetLabelFont(43);
   h_dummy2__73->GetXaxis()->SetLabelOffset(0.025);
   h_dummy2__73->GetXaxis()->SetLabelSize(16.8);
   h_dummy2__73->GetXaxis()->SetTitleSize(21);
   h_dummy2__73->GetXaxis()->SetTitleOffset(5.05);
   h_dummy2__73->GetXaxis()->SetTitleFont(43);
   h_dummy2__73->GetYaxis()->SetTitle("Data / Bkg");
   h_dummy2__73->GetYaxis()->CenterTitle(true);
   h_dummy2__73->GetYaxis()->SetNdivisions(-504);
   h_dummy2__73->GetYaxis()->SetLabelFont(43);
   h_dummy2__73->GetYaxis()->SetLabelOffset(0.02);
   h_dummy2__73->GetYaxis()->SetLabelSize(16.8);
   h_dummy2__73->GetYaxis()->SetTitleSize(21);
   h_dummy2__73->GetYaxis()->SetTitleOffset(2.4);
   h_dummy2__73->GetYaxis()->SetTitleFont(43);
   h_dummy2__73->GetZaxis()->SetLabelFont(43);
   h_dummy2__73->GetZaxis()->SetLabelSize(21);
   h_dummy2__73->GetZaxis()->SetTitleSize(21);
   h_dummy2__73->GetZaxis()->SetTitleFont(43);
   h_dummy2__73->Draw("HIST");
   
   Double_t Graph_from_h_ratio_fx3033[2] = {
   0.25,
   0.75};
   Double_t Graph_from_h_ratio_fy3033[2] = {
   0.9982833,
   0.9469285};
   Double_t Graph_from_h_ratio_felx3033[2] = {
   0.2495,
   0.2495};
   Double_t Graph_from_h_ratio_fely3033[2] = {
   0.03174356,
   0.05090719};
   Double_t Graph_from_h_ratio_fehx3033[2] = {
   0.25,
   0.25};
   Double_t Graph_from_h_ratio_fehy3033[2] = {
   0.03174356,
   0.05090719};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(2,Graph_from_h_ratio_fx3033,Graph_from_h_ratio_fy3033,Graph_from_h_ratio_felx3033,Graph_from_h_ratio_fehx3033,Graph_from_h_ratio_fely3033,Graph_from_h_ratio_fehy3033);
   grae->SetName("Graph_from_h_ratio");
   grae->SetTitle("FcncDiscriminant");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(24);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_h_ratio3033 = new TH1F("Graph_Graph_from_h_ratio3033","FcncDiscriminant",100,0,1.09995);
   Graph_Graph_from_h_ratio3033->SetMinimum(0.8826207);
   Graph_Graph_from_h_ratio3033->SetMaximum(1.043427);
   Graph_Graph_from_h_ratio3033->SetDirectory(0);
   Graph_Graph_from_h_ratio3033->SetStats(0);
   Graph_Graph_from_h_ratio3033->SetLineWidth(2);
   Graph_Graph_from_h_ratio3033->SetMarkerStyle(20);
   Graph_Graph_from_h_ratio3033->SetMarkerSize(1.2);
   Graph_Graph_from_h_ratio3033->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3033->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3033->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3033->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3033->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3033->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3033->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3033->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3033->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_h_ratio3033->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_h_ratio3033->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_h_ratio3033->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_h_ratio3033->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_h_ratio3033->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_h_ratio3033);
   
   grae->Draw("pe0");
   TLine *line = new TLine(0,1,1,1);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   Double_t g_ratio2_fx3034[2] = {
   0.25,
   0.75};
   Double_t g_ratio2_fy3034[2] = {
   1,
   1};
   Double_t g_ratio2_felx3034[2] = {
   0.25,
   0.25};
   Double_t g_ratio2_fely3034[2] = {
   0.2071527,
   0.2317599};
   Double_t g_ratio2_fehx3034[2] = {
   0.25,
   0.25};
   Double_t g_ratio2_fehy3034[2] = {
   0.2071527,
   0.2317599};
   grae = new TGraphAsymmErrors(2,g_ratio2_fx3034,g_ratio2_fy3034,g_ratio2_felx3034,g_ratio2_fehx3034,g_ratio2_fely3034,g_ratio2_fehy3034);
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
   
   TH1F *Graph_g_ratio23034 = new TH1F("Graph_g_ratio23034","FcncDiscriminant",100,0,1.1);
   Graph_g_ratio23034->SetMinimum(0.7218881);
   Graph_g_ratio23034->SetMaximum(1.278112);
   Graph_g_ratio23034->SetDirectory(0);
   Graph_g_ratio23034->SetStats(0);
   Graph_g_ratio23034->SetLineWidth(2);
   Graph_g_ratio23034->SetMarkerStyle(20);
   Graph_g_ratio23034->SetMarkerSize(1.2);
   Graph_g_ratio23034->GetXaxis()->SetLabelFont(43);
   Graph_g_ratio23034->GetXaxis()->SetLabelSize(21);
   Graph_g_ratio23034->GetXaxis()->SetTitleSize(21);
   Graph_g_ratio23034->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23034->GetXaxis()->SetTitleFont(43);
   Graph_g_ratio23034->GetYaxis()->SetLabelFont(43);
   Graph_g_ratio23034->GetYaxis()->SetLabelSize(21);
   Graph_g_ratio23034->GetYaxis()->SetTitleSize(21);
   Graph_g_ratio23034->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_ratio23034->GetYaxis()->SetTitleFont(43);
   Graph_g_ratio23034->GetZaxis()->SetLabelFont(43);
   Graph_g_ratio23034->GetZaxis()->SetLabelSize(21);
   Graph_g_ratio23034->GetZaxis()->SetTitleSize(21);
   Graph_g_ratio23034->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_ratio23034);
   
   grae->Draw("e2");
   Double_t xAxis82[3] = {0, 0.5, 1}; 
   
   TH1D *h_dummy2_copy__74 = new TH1D("h_dummy2_copy__74","Data/MC",2, xAxis82);
   h_dummy2_copy__74->SetMinimum(0.5);
   h_dummy2_copy__74->SetMaximum(1.5);
   h_dummy2_copy__74->SetEntries(872895);
   h_dummy2_copy__74->SetDirectory(0);
   h_dummy2_copy__74->SetStats(0);
   h_dummy2_copy__74->SetMarkerStyle(20);
   h_dummy2_copy__74->SetMarkerSize(1.2);
   h_dummy2_copy__74->GetXaxis()->SetTitle("LH discriminant");
   h_dummy2_copy__74->GetXaxis()->SetRange(1,20);
   h_dummy2_copy__74->GetXaxis()->SetLabelFont(43);
   h_dummy2_copy__74->GetXaxis()->SetLabelOffset(0.025);
   h_dummy2_copy__74->GetXaxis()->SetLabelSize(16.8);
   h_dummy2_copy__74->GetXaxis()->SetTitleSize(21);
   h_dummy2_copy__74->GetXaxis()->SetTitleOffset(5.05);
   h_dummy2_copy__74->GetXaxis()->SetTitleFont(43);
   h_dummy2_copy__74->GetYaxis()->SetTitle("Data / Bkg");
   h_dummy2_copy__74->GetYaxis()->CenterTitle(true);
   h_dummy2_copy__74->GetYaxis()->SetNdivisions(-504);
   h_dummy2_copy__74->GetYaxis()->SetLabelFont(43);
   h_dummy2_copy__74->GetYaxis()->SetLabelOffset(0.02);
   h_dummy2_copy__74->GetYaxis()->SetLabelSize(16.8);
   h_dummy2_copy__74->GetYaxis()->SetTitleSize(21);
   h_dummy2_copy__74->GetYaxis()->SetTitleOffset(2.4);
   h_dummy2_copy__74->GetYaxis()->SetTitleFont(43);
   h_dummy2_copy__74->GetZaxis()->SetLabelFont(43);
   h_dummy2_copy__74->GetZaxis()->SetLabelSize(21);
   h_dummy2_copy__74->GetZaxis()->SetTitleSize(21);
   h_dummy2_copy__74->GetZaxis()->SetTitleFont(43);
   h_dummy2_copy__74->Draw("sameaxis");
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
   c_c1lep6jin4bin->cd();
  
// ------------>Primitives in pad: pad0
   TPad *pad0 = new TPad("pad0", "pad0",0,0.2,1,1);
   pad0->Draw();
   pad0->cd();
   pad0->Range(-0.1728395,-216.095,1.061728,1944.854);
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
   Double_t xAxis83[3] = {0, 0.5, 1}; 
   
   TH1D *h_dummy__75 = new TH1D("h_dummy__75","FcncDiscriminant",2, xAxis83);
   h_dummy__75->SetMinimum(0);
   h_dummy__75->SetMaximum(1836.807);
   h_dummy__75->SetEntries(872895);
   h_dummy__75->SetDirectory(0);
   h_dummy__75->SetStats(0);
   h_dummy__75->SetMarkerStyle(20);
   h_dummy__75->SetMarkerSize(1.2);
   h_dummy__75->GetXaxis()->SetRange(1,20);
   h_dummy__75->GetXaxis()->SetLabelFont(43);
   h_dummy__75->GetXaxis()->SetLabelSize(0);
   h_dummy__75->GetXaxis()->SetTitleSize(21);
   h_dummy__75->GetXaxis()->SetTitleOffset(1.4);
   h_dummy__75->GetXaxis()->SetTitleFont(43);
   h_dummy__75->GetYaxis()->SetTitle("Events / 0.5");
   h_dummy__75->GetYaxis()->SetLabelFont(43);
   h_dummy__75->GetYaxis()->SetLabelSize(16.8);
   h_dummy__75->GetYaxis()->SetTitleSize(21);
   h_dummy__75->GetYaxis()->SetTitleOffset(2.4);
   h_dummy__75->GetYaxis()->SetTitleFont(43);
   h_dummy__75->GetZaxis()->SetLabelFont(43);
   h_dummy__75->GetZaxis()->SetLabelSize(21);
   h_dummy__75->GetZaxis()->SetTitleSize(21);
   h_dummy__75->GetZaxis()->SetTitleFont(43);
   h_dummy__75->Draw("HIST");
   
   THStack *h_stack = new THStack();
   h_stack->SetName("h_stack");
   h_stack->SetTitle("h_stack");
   Double_t xAxis84[3] = {0, 0.5, 1}; 
   
   TH1F *h_stack_stack_9 = new TH1F("h_stack_stack_9","h_stack",2, xAxis84);
   h_stack_stack_9->SetMinimum(0);
   h_stack_stack_9->SetMaximum(1071.673);
   h_stack_stack_9->SetDirectory(0);
   h_stack_stack_9->SetStats(0);
   h_stack_stack_9->SetLineWidth(2);
   h_stack_stack_9->SetMarkerStyle(20);
   h_stack_stack_9->SetMarkerSize(1.2);
   h_stack_stack_9->GetXaxis()->SetLabelFont(43);
   h_stack_stack_9->GetXaxis()->SetLabelSize(21);
   h_stack_stack_9->GetXaxis()->SetTitleSize(21);
   h_stack_stack_9->GetXaxis()->SetTitleOffset(1.4);
   h_stack_stack_9->GetXaxis()->SetTitleFont(43);
   h_stack_stack_9->GetYaxis()->SetLabelFont(43);
   h_stack_stack_9->GetYaxis()->SetLabelSize(21);
   h_stack_stack_9->GetYaxis()->SetTitleSize(21);
   h_stack_stack_9->GetYaxis()->SetTitleOffset(1.4);
   h_stack_stack_9->GetYaxis()->SetTitleFont(43);
   h_stack_stack_9->GetZaxis()->SetLabelFont(43);
   h_stack_stack_9->GetZaxis()->SetLabelSize(21);
   h_stack_stack_9->GetZaxis()->SetTitleSize(21);
   h_stack_stack_9->GetZaxis()->SetTitleFont(43);
   h_stack->SetHistogram(h_stack_stack_9);
   
   Double_t xAxis85[3] = {0, 0.5, 1}; 
   
   TH1D *c1lep6jin4bin_topEW__76 = new TH1D("c1lep6jin4bin_topEW__76","FcncDiscriminant",2, xAxis85);
   c1lep6jin4bin_topEW__76->SetBinContent(1,132.0058);
   c1lep6jin4bin_topEW__76->SetBinContent(2,75.28108);
   c1lep6jin4bin_topEW__76->SetBinError(1,15.09507);
   c1lep6jin4bin_topEW__76->SetBinError(2,17.08424);
   c1lep6jin4bin_topEW__76->SetEntries(869354);
   c1lep6jin4bin_topEW__76->SetDirectory(0);
   c1lep6jin4bin_topEW__76->SetStats(0);

   ci = TColor::GetColor("#66cc66");
   c1lep6jin4bin_topEW__76->SetFillColor(ci);
   c1lep6jin4bin_topEW__76->SetMarkerStyle(20);
   c1lep6jin4bin_topEW__76->SetMarkerSize(1.2);
   c1lep6jin4bin_topEW__76->GetXaxis()->SetRange(1,20);
   c1lep6jin4bin_topEW__76->GetXaxis()->SetLabelFont(43);
   c1lep6jin4bin_topEW__76->GetXaxis()->SetLabelSize(21);
   c1lep6jin4bin_topEW__76->GetXaxis()->SetTitleSize(21);
   c1lep6jin4bin_topEW__76->GetXaxis()->SetTitleOffset(1.4);
   c1lep6jin4bin_topEW__76->GetXaxis()->SetTitleFont(43);
   c1lep6jin4bin_topEW__76->GetYaxis()->SetLabelFont(43);
   c1lep6jin4bin_topEW__76->GetYaxis()->SetLabelSize(21);
   c1lep6jin4bin_topEW__76->GetYaxis()->SetTitleSize(21);
   c1lep6jin4bin_topEW__76->GetYaxis()->SetTitleOffset(1.4);
   c1lep6jin4bin_topEW__76->GetYaxis()->SetTitleFont(43);
   c1lep6jin4bin_topEW__76->GetZaxis()->SetLabelFont(43);
   c1lep6jin4bin_topEW__76->GetZaxis()->SetLabelSize(21);
   c1lep6jin4bin_topEW__76->GetZaxis()->SetTitleSize(21);
   c1lep6jin4bin_topEW__76->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep6jin4bin_topEW,"");
   Double_t xAxis86[3] = {0, 0.5, 1}; 
   
   TH1D *c1lep6jin4bin_ttbarbb__77 = new TH1D("c1lep6jin4bin_ttbarbb__77","FcncDiscriminant",2, xAxis86);
   c1lep6jin4bin_ttbarbb__77->SetBinContent(1,826.8054);
   c1lep6jin4bin_ttbarbb__77->SetBinContent(2,278.5228);
   c1lep6jin4bin_ttbarbb__77->SetBinError(1,21.8291);
   c1lep6jin4bin_ttbarbb__77->SetBinError(2,11.6541);
   c1lep6jin4bin_ttbarbb__77->SetEntries(3439);
   c1lep6jin4bin_ttbarbb__77->SetDirectory(0);
   c1lep6jin4bin_ttbarbb__77->SetStats(0);

   ci = TColor::GetColor("#6666cc");
   c1lep6jin4bin_ttbarbb__77->SetFillColor(ci);
   c1lep6jin4bin_ttbarbb__77->SetMarkerStyle(20);
   c1lep6jin4bin_ttbarbb__77->SetMarkerSize(1.2);
   c1lep6jin4bin_ttbarbb__77->GetXaxis()->SetRange(1,20);
   c1lep6jin4bin_ttbarbb__77->GetXaxis()->SetLabelFont(43);
   c1lep6jin4bin_ttbarbb__77->GetXaxis()->SetLabelSize(21);
   c1lep6jin4bin_ttbarbb__77->GetXaxis()->SetTitleSize(21);
   c1lep6jin4bin_ttbarbb__77->GetXaxis()->SetTitleOffset(1.4);
   c1lep6jin4bin_ttbarbb__77->GetXaxis()->SetTitleFont(43);
   c1lep6jin4bin_ttbarbb__77->GetYaxis()->SetLabelFont(43);
   c1lep6jin4bin_ttbarbb__77->GetYaxis()->SetLabelSize(21);
   c1lep6jin4bin_ttbarbb__77->GetYaxis()->SetTitleSize(21);
   c1lep6jin4bin_ttbarbb__77->GetYaxis()->SetTitleOffset(1.4);
   c1lep6jin4bin_ttbarbb__77->GetYaxis()->SetTitleFont(43);
   c1lep6jin4bin_ttbarbb__77->GetZaxis()->SetLabelFont(43);
   c1lep6jin4bin_ttbarbb__77->GetZaxis()->SetLabelSize(21);
   c1lep6jin4bin_ttbarbb__77->GetZaxis()->SetTitleSize(21);
   c1lep6jin4bin_ttbarbb__77->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep6jin4bin_ttbarbb,"");
   Double_t xAxis87[3] = {0, 0.5, 1}; 
   
   TH1D *c1lep6jin4bin_ttbarcc__78 = new TH1D("c1lep6jin4bin_ttbarcc__78","FcncDiscriminant",2, xAxis87);
   c1lep6jin4bin_ttbarcc__78->SetBinContent(1,23.35909);
   c1lep6jin4bin_ttbarcc__78->SetBinContent(2,5.629545);
   c1lep6jin4bin_ttbarcc__78->SetBinError(1,3.313798);
   c1lep6jin4bin_ttbarcc__78->SetBinError(2,1.792758);
   c1lep6jin4bin_ttbarcc__78->SetEntries(74);
   c1lep6jin4bin_ttbarcc__78->SetDirectory(0);
   c1lep6jin4bin_ttbarcc__78->SetStats(0);

   ci = TColor::GetColor("#ccccff");
   c1lep6jin4bin_ttbarcc__78->SetFillColor(ci);
   c1lep6jin4bin_ttbarcc__78->SetMarkerStyle(20);
   c1lep6jin4bin_ttbarcc__78->SetMarkerSize(1.2);
   c1lep6jin4bin_ttbarcc__78->GetXaxis()->SetRange(1,20);
   c1lep6jin4bin_ttbarcc__78->GetXaxis()->SetLabelFont(43);
   c1lep6jin4bin_ttbarcc__78->GetXaxis()->SetLabelSize(21);
   c1lep6jin4bin_ttbarcc__78->GetXaxis()->SetTitleSize(21);
   c1lep6jin4bin_ttbarcc__78->GetXaxis()->SetTitleOffset(1.4);
   c1lep6jin4bin_ttbarcc__78->GetXaxis()->SetTitleFont(43);
   c1lep6jin4bin_ttbarcc__78->GetYaxis()->SetLabelFont(43);
   c1lep6jin4bin_ttbarcc__78->GetYaxis()->SetLabelSize(21);
   c1lep6jin4bin_ttbarcc__78->GetYaxis()->SetTitleSize(21);
   c1lep6jin4bin_ttbarcc__78->GetYaxis()->SetTitleOffset(1.4);
   c1lep6jin4bin_ttbarcc__78->GetYaxis()->SetTitleFont(43);
   c1lep6jin4bin_ttbarcc__78->GetZaxis()->SetLabelFont(43);
   c1lep6jin4bin_ttbarcc__78->GetZaxis()->SetLabelSize(21);
   c1lep6jin4bin_ttbarcc__78->GetZaxis()->SetTitleSize(21);
   c1lep6jin4bin_ttbarcc__78->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep6jin4bin_ttbarcc,"");
   Double_t xAxis88[3] = {0, 0.5, 1}; 
   
   TH1D *c1lep6jin4bin_ttbarlight__79 = new TH1D("c1lep6jin4bin_ttbarlight__79","FcncDiscriminant",2, xAxis88);
   c1lep6jin4bin_ttbarlight__79->SetBinContent(1,8.530375);
   c1lep6jin4bin_ttbarlight__79->SetBinContent(2,5.958476);
   c1lep6jin4bin_ttbarlight__79->SetBinError(1,2.264338);
   c1lep6jin4bin_ttbarlight__79->SetBinError(2,2.670068);
   c1lep6jin4bin_ttbarlight__79->SetEntries(26);
   c1lep6jin4bin_ttbarlight__79->SetDirectory(0);
   c1lep6jin4bin_ttbarlight__79->SetStats(0);
   c1lep6jin4bin_ttbarlight__79->SetMarkerStyle(20);
   c1lep6jin4bin_ttbarlight__79->SetMarkerSize(1.2);
   c1lep6jin4bin_ttbarlight__79->GetXaxis()->SetRange(1,20);
   c1lep6jin4bin_ttbarlight__79->GetXaxis()->SetLabelFont(43);
   c1lep6jin4bin_ttbarlight__79->GetXaxis()->SetLabelSize(21);
   c1lep6jin4bin_ttbarlight__79->GetXaxis()->SetTitleSize(21);
   c1lep6jin4bin_ttbarlight__79->GetXaxis()->SetTitleOffset(1.4);
   c1lep6jin4bin_ttbarlight__79->GetXaxis()->SetTitleFont(43);
   c1lep6jin4bin_ttbarlight__79->GetYaxis()->SetLabelFont(43);
   c1lep6jin4bin_ttbarlight__79->GetYaxis()->SetLabelSize(21);
   c1lep6jin4bin_ttbarlight__79->GetYaxis()->SetTitleSize(21);
   c1lep6jin4bin_ttbarlight__79->GetYaxis()->SetTitleOffset(1.4);
   c1lep6jin4bin_ttbarlight__79->GetYaxis()->SetTitleFont(43);
   c1lep6jin4bin_ttbarlight__79->GetZaxis()->SetLabelFont(43);
   c1lep6jin4bin_ttbarlight__79->GetZaxis()->SetLabelSize(21);
   c1lep6jin4bin_ttbarlight__79->GetZaxis()->SetTitleSize(21);
   c1lep6jin4bin_ttbarlight__79->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep6jin4bin_ttbarlight,"");
   Double_t xAxis89[3] = {0, 0.5, 1}; 
   
   TH1D *c1lep6jin4bin_uHcW__80 = new TH1D("c1lep6jin4bin_uHcW__80","FcncDiscriminant",2, xAxis89);
   c1lep6jin4bin_uHcW__80->SetBinContent(1,29.93989);
   c1lep6jin4bin_uHcW__80->SetBinContent(2,28.84032);
   c1lep6jin4bin_uHcW__80->SetBinError(1,6.326547);
   c1lep6jin4bin_uHcW__80->SetBinError(2,5.045354);
   c1lep6jin4bin_uHcW__80->SetEntries(376);
   c1lep6jin4bin_uHcW__80->SetDirectory(0);
   c1lep6jin4bin_uHcW__80->SetStats(0);
   c1lep6jin4bin_uHcW__80->SetFillColor(2);
   c1lep6jin4bin_uHcW__80->SetLineColor(2);
   c1lep6jin4bin_uHcW__80->SetMarkerStyle(20);
   c1lep6jin4bin_uHcW__80->SetMarkerSize(1.2);
   c1lep6jin4bin_uHcW__80->GetXaxis()->SetRange(1,20);
   c1lep6jin4bin_uHcW__80->GetXaxis()->SetLabelFont(43);
   c1lep6jin4bin_uHcW__80->GetXaxis()->SetLabelSize(21);
   c1lep6jin4bin_uHcW__80->GetXaxis()->SetTitleSize(21);
   c1lep6jin4bin_uHcW__80->GetXaxis()->SetTitleOffset(1.4);
   c1lep6jin4bin_uHcW__80->GetXaxis()->SetTitleFont(43);
   c1lep6jin4bin_uHcW__80->GetYaxis()->SetLabelFont(43);
   c1lep6jin4bin_uHcW__80->GetYaxis()->SetLabelSize(21);
   c1lep6jin4bin_uHcW__80->GetYaxis()->SetTitleSize(21);
   c1lep6jin4bin_uHcW__80->GetYaxis()->SetTitleOffset(1.4);
   c1lep6jin4bin_uHcW__80->GetYaxis()->SetTitleFont(43);
   c1lep6jin4bin_uHcW__80->GetZaxis()->SetLabelFont(43);
   c1lep6jin4bin_uHcW__80->GetZaxis()->SetLabelSize(21);
   c1lep6jin4bin_uHcW__80->GetZaxis()->SetTitleSize(21);
   c1lep6jin4bin_uHcW__80->GetZaxis()->SetTitleFont(43);
   h_stack->Add(c1lep6jin4bin_uHcW,"");
   h_stack->Draw("hist same");
   
   Double_t g_totErr_fx3035[2] = {
   0.25,
   0.75};
   Double_t g_totErr_fy3035[2] = {
   990.7007,
   365.3919};
   Double_t g_totErr_felx3035[2] = {
   0.25,
   0.25};
   Double_t g_totErr_fely3035[2] = {
   205.2263,
   84.6832};
   Double_t g_totErr_fehx3035[2] = {
   0.25,
   0.25};
   Double_t g_totErr_fehy3035[2] = {
   205.2263,
   84.6832};
   grae = new TGraphAsymmErrors(2,g_totErr_fx3035,g_totErr_fy3035,g_totErr_felx3035,g_totErr_fehx3035,g_totErr_fely3035,g_totErr_fehy3035);
   grae->SetName("g_totErr");
   grae->SetTitle("FcncDiscriminant");

   ci = TColor::GetColor("#6666ff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(3354);
   grae->SetLineColor(0);
   grae->SetLineWidth(0);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0);
   
   TH1F *Graph_g_totErr3035 = new TH1F("Graph_g_totErr3035","FcncDiscriminant",100,0,1.1);
   Graph_g_totErr3035->SetMinimum(189.1869);
   Graph_g_totErr3035->SetMaximum(1287.449);
   Graph_g_totErr3035->SetDirectory(0);
   Graph_g_totErr3035->SetStats(0);
   Graph_g_totErr3035->SetLineWidth(2);
   Graph_g_totErr3035->SetMarkerStyle(20);
   Graph_g_totErr3035->SetMarkerSize(1.2);
   Graph_g_totErr3035->GetXaxis()->SetLabelFont(43);
   Graph_g_totErr3035->GetXaxis()->SetLabelSize(21);
   Graph_g_totErr3035->GetXaxis()->SetTitleSize(21);
   Graph_g_totErr3035->GetXaxis()->SetTitleOffset(1.4);
   Graph_g_totErr3035->GetXaxis()->SetTitleFont(43);
   Graph_g_totErr3035->GetYaxis()->SetLabelFont(43);
   Graph_g_totErr3035->GetYaxis()->SetLabelSize(21);
   Graph_g_totErr3035->GetYaxis()->SetTitleSize(21);
   Graph_g_totErr3035->GetYaxis()->SetTitleOffset(1.4);
   Graph_g_totErr3035->GetYaxis()->SetTitleFont(43);
   Graph_g_totErr3035->GetZaxis()->SetLabelFont(43);
   Graph_g_totErr3035->GetZaxis()->SetLabelSize(21);
   Graph_g_totErr3035->GetZaxis()->SetTitleSize(21);
   Graph_g_totErr3035->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_g_totErr3035);
   
   grae->Draw("e2");
   
   Double_t Graph_from_c1lep6jin4bin_Data_fx3036[2] = {
   0.25,
   0.75};
   Double_t Graph_from_c1lep6jin4bin_Data_fy3036[2] = {
   989,
   346};
   Double_t Graph_from_c1lep6jin4bin_Data_felx3036[2] = {
   0.2495,
   0.2495};
   Double_t Graph_from_c1lep6jin4bin_Data_fely3036[2] = {
   31.44837,
   18.60108};
   Double_t Graph_from_c1lep6jin4bin_Data_fehx3036[2] = {
   0.25,
   0.25};
   Double_t Graph_from_c1lep6jin4bin_Data_fehy3036[2] = {
   31.44837,
   18.60108};
   grae = new TGraphAsymmErrors(2,Graph_from_c1lep6jin4bin_Data_fx3036,Graph_from_c1lep6jin4bin_Data_fy3036,Graph_from_c1lep6jin4bin_Data_felx3036,Graph_from_c1lep6jin4bin_Data_fehx3036,Graph_from_c1lep6jin4bin_Data_fely3036,Graph_from_c1lep6jin4bin_Data_fehy3036);
   grae->SetName("Graph_from_c1lep6jin4bin_Data");
   grae->SetTitle("FcncDiscriminant");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_c1lep6jin4bin_Data3036 = new TH1F("Graph_Graph_from_c1lep6jin4bin_Data3036","FcncDiscriminant",100,0,1.09995);
   Graph_Graph_from_c1lep6jin4bin_Data3036->SetMinimum(258.094);
   Graph_Graph_from_c1lep6jin4bin_Data3036->SetMaximum(1089.753);
   Graph_Graph_from_c1lep6jin4bin_Data3036->SetDirectory(0);
   Graph_Graph_from_c1lep6jin4bin_Data3036->SetStats(0);
   Graph_Graph_from_c1lep6jin4bin_Data3036->SetLineWidth(2);
   Graph_Graph_from_c1lep6jin4bin_Data3036->SetMarkerStyle(20);
   Graph_Graph_from_c1lep6jin4bin_Data3036->SetMarkerSize(1.2);
   Graph_Graph_from_c1lep6jin4bin_Data3036->GetXaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep6jin4bin_Data3036->GetXaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep6jin4bin_Data3036->GetXaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep6jin4bin_Data3036->GetXaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep6jin4bin_Data3036->GetXaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep6jin4bin_Data3036->GetYaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep6jin4bin_Data3036->GetYaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep6jin4bin_Data3036->GetYaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep6jin4bin_Data3036->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph_from_c1lep6jin4bin_Data3036->GetYaxis()->SetTitleFont(43);
   Graph_Graph_from_c1lep6jin4bin_Data3036->GetZaxis()->SetLabelFont(43);
   Graph_Graph_from_c1lep6jin4bin_Data3036->GetZaxis()->SetLabelSize(21);
   Graph_Graph_from_c1lep6jin4bin_Data3036->GetZaxis()->SetTitleSize(21);
   Graph_Graph_from_c1lep6jin4bin_Data3036->GetZaxis()->SetTitleFont(43);
   grae->SetHistogram(Graph_Graph_from_c1lep6jin4bin_Data3036);
   
   grae->Draw("ep1 ");
   Double_t xAxis90[3] = {0, 0.5, 1}; 
   
   TH1D *h_dummy_copy__81 = new TH1D("h_dummy_copy__81","FcncDiscriminant",2, xAxis90);
   h_dummy_copy__81->SetEntries(872895);
   h_dummy_copy__81->SetDirectory(0);
   h_dummy_copy__81->SetStats(0);
   h_dummy_copy__81->SetMarkerStyle(20);
   h_dummy_copy__81->SetMarkerSize(1.2);
   h_dummy_copy__81->GetXaxis()->SetTitle("LH discriminant");
   h_dummy_copy__81->GetXaxis()->SetRange(1,20);
   h_dummy_copy__81->GetXaxis()->SetLabelFont(43);
   h_dummy_copy__81->GetXaxis()->SetLabelSize(21);
   h_dummy_copy__81->GetXaxis()->SetTitleSize(21);
   h_dummy_copy__81->GetXaxis()->SetTitleOffset(1.4);
   h_dummy_copy__81->GetXaxis()->SetTitleFont(43);
   h_dummy_copy__81->GetYaxis()->SetTitle("Events / 0.5");
   h_dummy_copy__81->GetYaxis()->SetLabelFont(43);
   h_dummy_copy__81->GetYaxis()->SetLabelSize(16.8);
   h_dummy_copy__81->GetYaxis()->SetTitleSize(21);
   h_dummy_copy__81->GetYaxis()->SetTitleOffset(2.4);
   h_dummy_copy__81->GetYaxis()->SetTitleFont(43);
   h_dummy_copy__81->GetZaxis()->SetLabelFont(43);
   h_dummy_copy__81->GetZaxis()->SetLabelSize(21);
   h_dummy_copy__81->GetZaxis()->SetTitleSize(21);
   h_dummy_copy__81->GetZaxis()->SetTitleFont(43);
   h_dummy_copy__81->Draw("sameaxis");
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
      tex = new TLatex(0.18,0.73,"#geq6j, #geq4b");
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
   
   TLegend *leg = new TLegend(0.5308,0.63,0.92,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(43);
   leg->SetTextSize(18.9);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("c1lep6jin4bin_Data","Data","lep");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep6jin4bin_uHcW","t#bar{t}#rightarrowWbHc (BR=1%)","f");
   entry->SetFillColor(2);
   entry->SetFillStyle(1001);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep6jin4bin_ttbarlight","t#bar{t}+light-jets","f");
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("c1lep6jin4bin_ttbarcc","t#bar{t}+#geq1c","f");

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
   entry=leg->AddEntry("c1lep6jin4bin_ttbarbb","t#bar{t}+#geq1b","f");

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
   entry=leg->AddEntry("c1lep6jin4bin_topEW","Non-t#bar{t}","f");

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
   c_c1lep6jin4bin->cd();
   c_c1lep6jin4bin->Modified();
   c_c1lep6jin4bin->cd();
   c_c1lep6jin4bin->SetSelected(c_c1lep6jin4bin);
}
