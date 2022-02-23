

#include "./atlasrootstyle/AtlasLabels.C"
#include "./atlasrootstyle/AtlasStyle.C"



void setBins(TH1* tmp,double* BinEdges){

	for (int i =1;i<=tmp->GetNbinsX();i++){

		tmp->SetBinContent(i,BinEdges[i-1]);
	}
}

void setBinErrors(TH1* tmp,double* BinEdges){

	for (int i =1;i<=tmp->GetNbinsX();i++){

		tmp->SetBinError(i,BinEdges[i-1]);
	}
}

TGraphAsymmErrors* histToGraph(const TH1* h){
    TGraphAsymmErrors* gr = new TGraphAsymmErrors(h);
    for (int i = 0; i < gr->GetN(); i++) {
        gr->SetPointEXlow(i,0.499*h->GetBinWidth(i+1));
        gr->SetPointEXhigh(i,0.5*h->GetBinWidth(i+1));
        if(h->GetBinContent(i+1)==0){
            gr->SetPoint(i,gr->GetX()[i],-1);
            gr->SetPointError(i,0,0,0,0);
        }
    }
    gr->SetMarkerStyle(h->GetMarkerStyle());
    gr->SetMarkerSize(h->GetMarkerSize());
    gr->SetMarkerColor(h->GetMarkerColor());
    gr->SetLineWidth(h->GetLineWidth());
    gr->SetLineColor(h->GetLineColor());
    gr->SetLineStyle(h->GetLineStyle());
    return gr;
}






// void setBinErrors(THStack* tmp,double* BinEdges){
// 
// 	for (int i =1;i<=tmp->GetNbinsX();i++){
// 
// 		tmp->SetBinError(i,BinEdges[i-1]);
// 	}
// }
// 


void plotfinal(){

	SetAtlasStyle();
  	TGaxis::SetMaxDigits(3);
  	double maxfactor=1.7;
  	gStyle->SetErrorX();

  	TCanvas cv("cv","cv",600,800);

  	//gStyle->SetLogy();

	// hadhad 2j region
	// tuH signal
	// you need to overlay: tuH,fcnc_prod_uh,fcnc_uh
	// you need to stack tuH


	// post S+B fit yields
/*
Samples:
  - Name: tuH
    Yield: [0.028610341289485072, 0.083433685127537932, 0.085558637786144698, 0.13388856304061791, 0.13432137492931184, 0.15063614753569859, 0.11452879141050691, 0.079500063198789411]
  - Name: "only #tau_{sub} real"
    Yield: [10.27041169201434, 17.497660614171782, 9.1516918864629062, 9.4597380256225367, 5.1528703839916181, 2.9944258189368687, 0.96699380817575686, 0.39709038931260454]
  - Name: Diboson
    Yield: [3.9802214839168348, 2.081206074099025, 0.9535297879570056, 0.66450344346438583, 0.30627320166463184, 0.28482991801932939, 0.0090296024832292078, 0.068818787416729185]
  - Name: "Fake #tau MC"
    Yield: [40.017678034069036, 70.009583467271455, 41.088743080078217, 40.326705483174756, 18.979668510110841, 10.664907063155557, 2.9446649417889832, 0.29450088979071531]
  - Name: "#bar{t}t"
    Yield: [34.990654847722197, 81.969311148932718, 39.590911820821752, 35.198555636819073, 19.215241921286296, 6.9142044963342917, 2.6103265818468073, 0.53626429447503432]
  - Name: Z#rightarrow#tau#tau
    Yield: [232.32132527543985, 135.32023804519903, 48.27862656055548, 40.985373805518662, 18.73770979819799, 12.936925175266094, 3.6608157029452362, 0.99978476758591928]
  - Name: "#bar{t}tV"
    Yield: [0.24574562619603885, 0.19167686051311408, 0.13935495481591159, 0.08803933400747635, 0.030546362575180546, 0.029548907297170135, 0.0094788161580049348, 0.0090797961521966938]
  - Name: Rare
    Yield: [4.9362157688397872, 5.5418658623985824, 2.5719958756239496, 2.0336119701666626, 1.7489957071145434, 0.60136177158419679, 0.45724784519946932, 1.0139012754030424e-06]
  - Name: SM Higgs
    Yield: [0.95468097708694488, 2.8107735884570242, 1.9866358731569655, 3.46312323255043, 3.06973945273546, 2.5465972683000331, 1.6606356285824662, 0.93150804328435821]
Total:
  - Yield: [327.74554404657454, 315.50574934617026, 143.84704847725831, 132.35353949436461, 67.375366712605867, 37.123436566429234, 12.433721718590462, 3.3165480451176226]
    UncertaintyUp: [15.832815438666247, 14.229449273465098, 7.6097657516696655, 7.3113089219154022, 4.6583797780766156, 3.7085233370378075, 1.8590287846377425, 0.96379015051544514]
    UncertaintyDown: [-15.832815438666247, -14.229449273465098, -7.6097657516696655, -7.3113089219154022, -4.6583797780766156, -3.7085233370378075, -1.8590287846377425, -0.96379015051544514]
Data:
  - Yield: [332, 325, 136, 128, 74, 29, 4, 5]
Figure:
  - BinEdges: [-1, -0.40000000000000002, 0.10000000000000002, 0.30000000000000004, 0.49999999999999994, 0.64999999999999991, 0.75, 0.85000000000000009, 1]
    XaxisLabel: BDT Discriminant
    YaxisLabel: ""
*/

double BinEdges[] = {-1, -0.40000000000000002, 0.10000000000000002, 0.30000000000000004, 0.49999999999999994, 0.64999999999999991, 0.75, 0.85000000000000009, 1};
double data_[]={332, 325, 136, 128, 74, 29, 4, 5};
TH1* h_data = new TH1D("h_data", "h_data", 8, BinEdges );
setBins(h_data,data_);


double tuH_[]={0.028610341289485072, 0.083433685127537932, 0.085558637786144698, 0.13388856304061791, 0.13432137492931184, 0.15063614753569859, 0.11452879141050691, 0.079500063198789411};
TH1* h_tuH = new TH1D("h_tuH", "h_tuH", 8, BinEdges );
setBins(h_tuH,tuH_);
h_tuH->SetLineWidth(1);
h_tuH->SetLineColor(1);
h_tuH->SetFillColor(kRed);









double onlyrealtau_postSB[]={10.27041169201434, 17.497660614171782, 9.1516918864629062, 9.4597380256225367, 5.1528703839916181, 2.9944258189368687, 0.96699380817575686, 0.39709038931260454};
TH1* h_onlyrealtau_postSB = new TH1D("h_onlyrealtau_postSB", "h_onlyrealtau_postSB", 8, BinEdges );
setBins(h_onlyrealtau_postSB,onlyrealtau_postSB);
h_onlyrealtau_postSB->SetLineWidth(1);
h_onlyrealtau_postSB->SetLineColor(1);
h_onlyrealtau_postSB->SetFillColor(46);


double Diboson_postSB[]={3.9802214839168348, 2.081206074099025, 0.9535297879570056, 0.66450344346438583, 0.30627320166463184, 0.28482991801932939, 0.0090296024832292078, 0.068818787416729185};
TH1* h_Diboson_postSB = new TH1D("h_Diboson_postSB", "h_Diboson_postSB", 8, BinEdges );
setBins(h_Diboson_postSB,Diboson_postSB);
h_Diboson_postSB->SetLineWidth(1);
h_Diboson_postSB->SetLineColor(1);
h_Diboson_postSB->SetFillColor(7);


double faketau_postSB[]={40.017678034069036, 70.009583467271455, 41.088743080078217, 40.326705483174756, 18.979668510110841, 10.664907063155557, 2.9446649417889832, 0.29450088979071531};
TH1* h_faketau_postSB = new TH1D("h_faketau_postSB", "h_faketau_postSB", 8, BinEdges );
setBins(h_faketau_postSB,faketau_postSB);
h_faketau_postSB->SetLineWidth(1);
h_faketau_postSB->SetLineColor(1);
h_faketau_postSB->SetFillColor(47);

double ttbar_postSB[]={34.990654847722197, 81.969311148932718, 39.590911820821752, 35.198555636819073, 19.215241921286296, 6.9142044963342917, 2.6103265818468073, 0.53626429447503432};
TH1* h_ttbar_postSB = new TH1D("h_ttbar_postSB", "h_ttbar_postSB", 8, BinEdges );
setBins(h_ttbar_postSB,ttbar_postSB);
h_ttbar_postSB->SetLineWidth(1);
h_ttbar_postSB->SetLineColor(1);
h_ttbar_postSB->SetFillColor(400);


double ztt_postSB[]={232.32132527543985, 135.32023804519903, 48.27862656055548, 40.985373805518662, 18.73770979819799, 12.936925175266094, 3.6608157029452362, 0.99978476758591928};
TH1* h_ztt_postSB = new TH1D("h_ztt_postSB", "h_ztt_postSB", 8, BinEdges );
setBins(h_ztt_postSB,ztt_postSB);
h_ztt_postSB->SetLineWidth(1);
h_ztt_postSB->SetLineColor(1);
h_ztt_postSB->SetFillColor(416);


double ttV_postSB[]={0.24574562619603885, 0.19167686051311408, 0.13935495481591159, 0.08803933400747635, 0.030546362575180546, 0.029548907297170135, 0.0094788161580049348, 0.0090797961521966938};
TH1* h_ttV_postSB = new TH1D("h_ttV_postSB", "h_ttV_postSB", 8, BinEdges );
setBins(h_ttV_postSB,ttV_postSB);
h_ttV_postSB->SetLineWidth(1);
h_ttV_postSB->SetLineColor(1);
h_ttV_postSB->SetFillColor(4);


double rare_postSB[]={4.9362157688397872, 5.5418658623985824, 2.5719958756239496, 2.0336119701666626, 1.7489957071145434, 0.60136177158419679, 0.45724784519946932, 1.0139012754030424e-06};
TH1* h_rare_postSB = new TH1D("h_rare_postSB", "h_rare_postSB", 8, BinEdges );
setBins(h_rare_postSB,rare_postSB);
h_rare_postSB->SetLineWidth(1);
h_rare_postSB->SetLineColor(1);
h_rare_postSB->SetFillColor(616);


double smhiggs_postSB[]={0.95468097708694488, 2.8107735884570242, 1.9866358731569655, 3.46312323255043, 3.06973945273546, 2.5465972683000331, 1.6606356285824662, 0.93150804328435821};
TH1* h_smhiggs_postSB = new TH1D("h_smhiggs_postSB", "h_smhiggs_postSB", 8, BinEdges );
setBins(h_smhiggs_postSB,smhiggs_postSB);
h_smhiggs_postSB->SetLineWidth(1);
h_smhiggs_postSB->SetLineColor(1);
h_smhiggs_postSB->SetFillColor(880);


double   total_bkg_error[] = {15.832815438666247, 14.229449273465098, 7.6097657516696655, 7.3113089219154022, 4.6583797780766156, 3.7085233370378075, 1.8590287846377425, 0.96379015051544514};

	// prefit Bonly fit

/*

Samples:
  - Name: tcH
    Yield: [0.54789039981172782, 1.9670637169824401, 1.7590624754405135, 2.8885121517053474, 2.5762622918332281, 2.6280297264723353, 1.9227239603690036, 1.2915800049150643]
  - Name: tuH
    Yield: [0.78455149636692245, 2.2843228512440374, 2.3404136698952578, 3.6665489355880134, 3.7043007900886442, 4.2235265028559814, 3.2757299677613867, 2.3068110672427151]
  - Name: tt\rightarrow cHWb
    Yield: [0.48413711837138407, 1.7908201568789057, 1.6027762163993295, 2.6453715077142896, 2.3242508768821843, 2.2976608060853998, 1.6616867483472335, 1.1171615188704656]
  - Name: tt\rightarrow uHWb
    Yield: [0.47709401844395721, 1.6348493181244255, 1.723008079238356, 2.4925747912434826, 2.3626449265422473, 2.4732014702794296, 1.7772045155384315, 1.0989948992467655]
  - Name: cg\rightarrow tH
    Yield: [0.063753281440343687, 0.17624356010353445, 0.15628625904118418, 0.2431406439910585, 0.25201141495104362, 0.33036892038693555, 0.26103721202176983, 0.17441848604459886]
  - Name: ug\rightarrow tH
    Yield: [0.30745747792296546, 0.64947353311961176, 0.61740559065690204, 1.1739741443445311, 1.3416558635463973, 1.7503250325765518, 1.4985254522229552, 1.2078161679959496]
  - Name: "only #tau_{sub} real"
    Yield: [11.677986888913438, 19.897060504066758, 10.406135257999949, 10.756773093133233, 5.8589902087987866, 3.4045932179433294, 1.0997304107295349, 0.45141619071364403]
  - Name: Diboson
    Yield: [3.9593795344771934, 2.0726883471361361, 0.94881131380680017, 0.66241161129437387, 0.30475958186434582, 0.28345068742055446, 0.0091853633057326078, 0.068310310132801533]
  - Name: "Fake #tau MC"
    Yield: [53.244393912195257, 85.799206491424854, 49.450737680340126, 48.692026309138782, 23.001296396143516, 13.053497538036027, 3.8728128124903378, 0.47553959557990311]
  - Name: "#bar{t}t"
    Yield: [34.90451917424798, 82.121239279978909, 40.051670422253665, 36.095125802130497, 19.898042962788168, 7.1791228041984141, 2.709992952644825, 0.55684229359030724]
  - Name: Z#rightarrow#tau#tau
    Yield: [222.47805565842532, 131.27669420430482, 47.800330494386799, 41.371364698755315, 19.339585481946415, 13.586156935896724, 3.8650167096584482, 1.0548617694876157]
  - Name: "#bar{t}tV"
    Yield: [0.24696019323528162, 0.19260208052583039, 0.14006161056795463, 0.088503487640991807, 0.03069939580745995, 0.029693092323213932, 0.0095345873851329088, 0.0091262734495103359]
  - Name: Rare
    Yield: [4.8739455707462485, 5.4712595580133669, 2.5389088556711945, 2.007842270603414, 1.7261124952403277, 0.59356197334546223, 0.45131889410693377, 9.9999994338432072e-07]
  - Name: SM Higgs
    Yield: [0.93341342027179053, 2.731976999235485, 1.9153114716897335, 3.3207614167862261, 3.0720076765763942, 2.5482273567758966, 1.661529029646772, 0.93160640383212012]
Total:
  - Yield: [332.31865435251251, 329.56272746468613, 153.25196710671622, 142.99480868948285, 73.231494199165411, 40.678303605939618, 13.679120759967716, 3.5477038367858453]
    UncertaintyUp: [59.721039640670583, 57.134849763439782, 26.937866675500896, 25.367209722884642, 13.042370434565292, 7.5929480862222505, 3.2217130125259898, 0.9010351341442856]
    UncertaintyDown: [-59.721039640670583, -57.134849763439782, -26.937866675500896, -25.367209722884642, -13.042370434565292, -7.5929480862222505, -3.2217130125259898, -0.9010351341442856]
Data:
  - Yield: [332, 325, 136, 128, 74, 29, 4, 5]
Figure:
  - BinEdges: [-1, -0.40000000000000002, 0.10000000000000002, 0.30000000000000004, 0.49999999999999994, 0.64999999999999991, 0.75, 0.85000000000000009, 1]
    XaxisLabel: BDT Discriminant
    YaxisLabel: ""

*/

double tuH_prefit[]={0.78455149636692245, 2.2843228512440374, 2.3404136698952578, 3.6665489355880134, 3.7043007900886442, 4.2235265028559814, 3.2757299677613867, 2.3068110672427151};
TH1* h_tuH_overlay = new TH1D("h_tuH_overlay", "h_tuH_overlay", 8, BinEdges );
setBins(h_tuH_overlay,tuH_prefit);

double fcnc_uh_prefit[]={0.47709401844395721, 1.6348493181244255, 1.723008079238356, 2.4925747912434826, 2.3626449265422473, 2.4732014702794296, 1.7772045155384315, 1.0989948992467655};
TH1* h_fcnc_uh_overlay = new TH1D("h_fcnc_uh_overlay", "h_fcnc_uh_overlay", 8, BinEdges );
setBins(h_fcnc_uh_overlay,fcnc_uh_prefit);


double fcnc_prod_uh_prefit[]={0.30745747792296546, 0.64947353311961176, 0.61740559065690204, 1.1739741443445311, 1.3416558635463973, 1.7503250325765518, 1.4985254522229552, 1.2078161679959496};
TH1* h_fcnc_prod_uh_overlay = new TH1D("h_fcnc_prod_uh_overlay", "h_fcnc_prod_uh_overlay", 8, BinEdges );
setBins(h_fcnc_prod_uh_overlay,fcnc_prod_uh_prefit);


//h_data->Draw();



TPad *padlow = new TPad("lowpad","lowpad",0,0,  1,0.3);
TPad *padhi  = new TPad("hipad","hipad"  ,0,0.3,1,1);

TH1D hmc("hmc","hmc",8, BinEdges);
TH1D hmcR("hmcR","hmcR",8, BinEdges);
TH1D hdataR("hdataR","hdataR",8, BinEdges);

//padhi->SetLogy();

//h_rare_postSB->SetMinimum(0.001);
//h_ttV_postSB->SetMinimum(0.001);
//h_smhiggs_postSB->SetMinimum(0.001);
//h_Diboson_postSB->SetMinimum(0.001);
//h_onlyrealtau_postSB->SetMinimum(0.001);
//h_faketau_postSB->SetMinimum(0.001);
//h_ttbar_postSB->SetMinimum(0.001);
//h_ztt_postSB->SetMinimum(0.001);
//h_tuH->SetMinimum(0.001);
//h_data->SetMinimum(0.001);


//TH1D hdataR_pre("hdataR_pre","hdataR_pre",8, BinEdges);


hmc.Sumw2();
THStack *hsk = new THStack("BDT","BDT");
TLegend* lg1 = 0;
lg1 = new TLegend(0.38,0.918/maxfactor,0.84,0.92,"");
lg1->SetNColumns(2);

lg1->AddEntry(h_data,"data","LP");


lg1->AddEntry(h_tuH,"tuH","F");

hsk->Add(h_ttV_postSB);
hmc.Add(h_ttV_postSB);
lg1->AddEntry(h_ttV_postSB,"#bar{t}tV","F");


hsk->Add(h_smhiggs_postSB);
hmc.Add(h_smhiggs_postSB);
lg1->AddEntry(h_smhiggs_postSB,"SM Higgs","F");


hsk->Add(h_Diboson_postSB);
hmc.Add(h_Diboson_postSB);
lg1->AddEntry(h_Diboson_postSB,"Diboson","F");


hsk->Add(h_rare_postSB);
hmc.Add(h_rare_postSB);
lg1->AddEntry(h_rare_postSB,"Rare","F");


hsk->Add(h_onlyrealtau_postSB);
hmc.Add(h_onlyrealtau_postSB);
lg1->AddEntry(h_onlyrealtau_postSB,"#tau_{sub} real","F");


hsk->Add(h_faketau_postSB);
hmc.Add(h_faketau_postSB);
lg1->AddEntry(h_faketau_postSB,"Fake #tau","F");


hsk->Add(h_ttbar_postSB);
hmc.Add(h_ttbar_postSB);
lg1->AddEntry(h_ttbar_postSB,"#bar{t}t","F");


hsk->Add(h_ztt_postSB);
hmc.Add(h_ztt_postSB);
lg1->AddEntry(h_ztt_postSB,"Z#rightarrow#tau#tau","F");


hsk->Add(h_tuH);
hmc.Add(h_tuH);

setBinErrors(&hmc,total_bkg_error);
std::cout<<hmc.GetBinContent(7)<<std::endl;






h_data->SetMarkerStyle(20);
h_data->SetMarkerSize(1.4);
h_data->SetLineWidth(2);

lg1->SetBorderSize(0);
lg1->SetFillStyle(0);

lg1->SetTextFont(gStyle->GetTextFont());
lg1->SetTextSize(gStyle->GetTextSize());





cv.cd();

padhi->Draw();
padhi->SetBottomMargin(0.017);
padhi->SetRightMargin(0.08);
padhi->SetLeftMargin(0.12);
padhi->cd();

padhi->SetLogy();

hsk->SetMinimum(5);
hsk->SetMaximum(15000);
hsk->Draw("hist");
hsk->GetXaxis()->SetTitle("BDT Discriminant");
hsk->GetXaxis()->SetLabelColor(kWhite);

hsk->GetYaxis()->SetTitle("Events");
hsk->GetYaxis()->SetTitleOffset(1.2);
double tmp_label_size=hsk->GetYaxis()->GetLabelSize();
hsk->GetYaxis()->SetLabelSize(tmp_label_size*0.95);

//h_tuH->Draw("hist same");

for(Int_t j=1; j<hmc.GetNbinsX()+1; j++) {
    hmcR.SetBinContent(j,1);
    hmcR.SetBinError(j,hmc.GetBinContent(j)>0 ? hmc.GetBinError(j)/hmc.GetBinContent(j) : 0);
    hdataR.SetBinContent(j, hmc.GetBinContent(j)>0 ? h_data->GetBinContent(j)/hmc.GetBinContent(j) : 1);
    hdataR.SetBinError(j, ( h_data->GetBinContent(j)>0 && hmc.GetBinContent(j)>0 )? h_data->GetBinError(j)/hmc.GetBinContent(j) : 0);

    // B only fit
}

hmc.SetFillColor(1);
hmc.SetLineColor(0);
hmc.SetMarkerStyle(1);
hmc.SetMarkerSize(0);
hmc.SetMarkerColor(1);
hmc.SetFillStyle(3004);
ATLASLabel(0.15,0.900,"Internal",kBlack,"#sqrt{s}=13 TeV 139 fb^{-1}", "#it{FCNC tqH H#rightarrow#tau^{+}#tau^{-}}", "t_{h}#tau_{had}#tau_{had}-2j","Post-Fit");



hmc.Draw("E2same");
//lg1->Draw("same");
h_data->Draw("E same");




padlow->SetFillStyle(4000);
//padlow->SetGrid(1,1);
padlow->SetTopMargin(0.03);
padlow->SetBottomMargin(0.35);
padlow->SetRightMargin(0.08);
padlow->SetLeftMargin(0.12);
padlow->cd();
hdataR.SetMarkerStyle(20);
hdataR.SetMarkerSize(0.8);
hmcR.SetMaximum(1.5);
hmcR.SetMinimum(0.5);
hmcR.GetYaxis()->SetRangeUser(0.5,1.51);
hmcR.GetYaxis()->SetNdivisions(508,true);
hmcR.GetYaxis()->SetTitle("Data/Pred");
hmcR.GetYaxis()->SetLabelSize(tmp_label_size*0.95);
hmcR.GetYaxis()->CenterTitle();
hmcR.GetXaxis()->SetTitle("BDT Discriminant");
hmcR.SetFillColor(kBlue-4);
hmcR.SetLineColor(0);
hmcR.SetLineWidth(3);
hmcR.SetMarkerStyle(1);
hmcR.SetMarkerSize(0);
hmcR.SetMarkerColor(1);
hmcR.SetFillStyle(3004);
hmcR.GetYaxis()->SetTitleOffset(0.8);
hmcR.Draw("E2 same");
hdataR.Draw("E same");


TLine line;
line.SetLineColor(kBlack);
line.SetLineStyle(2);
line.DrawLine(hdataR.GetBinLowEdge(1), 1., hdataR.GetBinLowEdge(hdataR.GetNbinsX()+1), 1.);
cv.cd();
padlow->Draw();


padhi->cd();


//TLegend *lgsig = (TLegend*) lg1->Clone();
h_tuH_overlay->SetLineStyle(9);
h_tuH_overlay->SetLineWidth(3);
h_tuH_overlay->SetLineColor(46);
h_tuH_overlay->SetFillColor(0);

h_fcnc_uh_overlay->SetLineStyle(9);
h_fcnc_prod_uh_overlay->SetLineStyle(9);
h_fcnc_uh_overlay->SetLineWidth(3);
h_fcnc_prod_uh_overlay->SetLineWidth(3);
h_fcnc_uh_overlay->SetLineColor(36);
h_fcnc_prod_uh_overlay->SetLineColor(26);
h_fcnc_uh_overlay->SetFillColor(0);
h_fcnc_prod_uh_overlay->SetFillColor(0);



lg1->AddEntry(h_tuH_overlay,"tuH(x2)","L");
h_tuH_overlay->Scale(2);
h_tuH_overlay->Draw("hist same");

lg1->AddEntry(h_fcnc_prod_uh_overlay,"ug#rightarrowtH(x2)","L");
h_fcnc_prod_uh_overlay->Scale(2);
h_fcnc_prod_uh_overlay->Draw("hist same");

lg1->AddEntry(h_fcnc_uh_overlay,"t#bar{t}#rightarrowWbHu(x2)","L");
h_fcnc_uh_overlay->Scale(2);
h_fcnc_uh_overlay->Draw("hist same");



lg1->SetBorderSize(0);
lg1->SetFillStyle(0);
lg1->Draw("same");
//padhi->Update();
cv.SaveAs("had_2j.pdf");




}