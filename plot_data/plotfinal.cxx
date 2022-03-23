

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
    std::string regionName="";
    std::string ouputName="";
    std::string signalName="tuH";



//tuH 2j
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
h_ttV_postSB->SetFillColor(419);


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
h_smhiggs_postSB->SetFillColor(603);

double   total_bkg_error[] = {15.832815438666247, 14.229449273465098, 7.6097657516696655, 7.3113089219154022, 4.6583797780766156, 3.7085233370378075, 1.8590287846377425, 0.96379015051544514};

double  bkg_post[]={327.67780211289124, 315.55804185012767, 143.91553501328048, 132.45525788156425, 67.366693919691826, 37.102698140602328, 12.354378744337195, 3.2484697621162599};
double  bkg_error[]={15.812685986491903, 14.222583111852295, 7.5998672305975044, 7.2832654973975801, 4.6574104579252769, 3.6999086084148107, 1.693203881139953, 0.71319170598795067};
TH1*    h_bkg_post = new TH1D("h_bkg_post", "h_bkg_post", 8, BinEdges );
setBins(h_bkg_post,bkg_post);
setBinErrors(h_bkg_post,bkg_error);


double tuH_prefit[]={0.78455149636692245, 2.2843228512440374, 2.3404136698952578, 3.6665489355880134, 3.7043007900886442, 4.2235265028559814, 3.2757299677613867, 2.3068110672427151};
TH1* h_tuH_overlay = new TH1D("h_tuH_overlay", "h_tuH_overlay", 8, BinEdges );
setBins(h_tuH_overlay,tuH_prefit);

double fcnc_uh_prefit[]={0.47709401844395721, 1.6348493181244255, 1.723008079238356, 2.4925747912434826, 2.3626449265422473, 2.4732014702794296, 1.7772045155384315, 1.0989948992467655};
TH1* h_fcnc_uh_overlay = new TH1D("h_fcnc_uh_overlay", "h_fcnc_uh_overlay", 8, BinEdges );
setBins(h_fcnc_uh_overlay,fcnc_uh_prefit);


double fcnc_prod_uh_prefit[]={0.30745747792296546, 0.64947353311961176, 0.61740559065690204, 1.1739741443445311, 1.3416558635463973, 1.7503250325765518, 1.4985254522229552, 1.2078161679959496};
TH1* h_fcnc_prod_uh_overlay = new TH1D("h_fcnc_prod_uh_overlay", "h_fcnc_prod_uh_overlay", 8, BinEdges );
setBins(h_fcnc_prod_uh_overlay,fcnc_prod_uh_prefit);
//regionName="t_{h}#tau_{had}#tau_{had}-2j";
regionName="t_{h}\\tau_{\\text{had}}\\tau_{\\text{had}}\\text{-2j}";
ouputName="reg2mtau1b2jos";
signalName="tuH";



/*
//3j tuH
double BinEdges[] = {-1, -0.40000000000000002, 0.10000000000000002, 0.30000000000000004, 0.49999999999999994, 0.64999999999999991, 0.75, 0.85000000000000009, 1};
double data_[]={328, 325, 112, 111, 81, 61, 21, 13};
TH1* h_data = new TH1D("h_data", "h_data", 8, BinEdges );
setBins(h_data,data_);

double tuH_[]={0.066888713387359952, 0.18820560817850995, 0.14896249592903998, 0.25590860705951435, 0.2916135538177313, 0.35087860190327608, 0.26519259265360762, 0.33011420453283685};
TH1* h_tuH = new TH1D("h_tuH", "h_tuH", 8, BinEdges );
setBins(h_tuH,tuH_);
h_tuH->SetLineWidth(1);
h_tuH->SetLineColor(1);
h_tuH->SetFillColor(kRed);


double onlyrealtau_postSB[]={20.276946613799179, 25.683937734067651, 12.907666778381596, 9.2754337186920637, 5.399849714687905, 4.4620106930046806, 1.7537667794710157, 0.816262052349912};
TH1* h_onlyrealtau_postSB = new TH1D("h_onlyrealtau_postSB", "h_onlyrealtau_postSB", 8, BinEdges );
setBins(h_onlyrealtau_postSB,onlyrealtau_postSB);
h_onlyrealtau_postSB->SetLineWidth(1);
h_onlyrealtau_postSB->SetLineColor(1);
h_onlyrealtau_postSB->SetFillColor(46);


double Diboson_postSB[]={4.3189459687585012, 2.9886592396543281, 0.79768423758624729, 1.1578709975053909, 0.72286413731353016, 0.52514371137183291, 0.14375308884209154, 0.090473429621463555};
TH1* h_Diboson_postSB = new TH1D("h_Diboson_postSB", "h_Diboson_postSB", 8, BinEdges );
setBins(h_Diboson_postSB,Diboson_postSB);
h_Diboson_postSB->SetLineWidth(1);
h_Diboson_postSB->SetLineColor(1);
h_Diboson_postSB->SetFillColor(7);


double faketau_postSB[]={48.495396402067499, 83.4430694004309, 40.67900096687184, 37.800462623490773, 30.99273462673224, 20.35053579512795, 8.8322700094008066, 2.2651090426362588};
TH1* h_faketau_postSB = new TH1D("h_faketau_postSB", "h_faketau_postSB", 8, BinEdges );
setBins(h_faketau_postSB,faketau_postSB);
h_faketau_postSB->SetLineWidth(1);
h_faketau_postSB->SetLineColor(1);
h_faketau_postSB->SetFillColor(47);

double ttbar_postSB[]={61.187086137979591, 69.814020062358381, 29.200186001816263, 25.719503550419073, 14.91639665654337, 13.197930053163827, 4.6441350300562645, 1.9278234747584706};
TH1* h_ttbar_postSB = new TH1D("h_ttbar_postSB", "h_ttbar_postSB", 8, BinEdges );
setBins(h_ttbar_postSB,ttbar_postSB);
h_ttbar_postSB->SetLineWidth(1);
h_ttbar_postSB->SetLineColor(1);
h_ttbar_postSB->SetFillColor(400);


double ztt_postSB[]={189.934547423075, 119.87619210655561, 33.944414756154579, 33.07231988354706, 18.491083274574784, 13.543439066202167, 5.179824837290564, 2.6924740996751675};
TH1* h_ztt_postSB = new TH1D("h_ztt_postSB", "h_ztt_postSB", 8, BinEdges );
setBins(h_ztt_postSB,ztt_postSB);
h_ztt_postSB->SetLineWidth(1);
h_ztt_postSB->SetLineColor(1);
h_ztt_postSB->SetFillColor(416);


double ttV_postSB[]={1.9649056523370685, 1.1789198188147936, 0.598732158811903, 0.46256683694113082, 0.50724419613749527, 0.48161599734841132, 0.1737923517707097, 0.087154631409702046};
TH1* h_ttV_postSB = new TH1D("h_ttV_postSB", "h_ttV_postSB", 8, BinEdges );
setBins(h_ttV_postSB,ttV_postSB);
h_ttV_postSB->SetLineWidth(1);
h_ttV_postSB->SetLineColor(1);
h_ttV_postSB->SetFillColor(419);


double rare_postSB[]={3.2356034777807867, 2.190066337724204, 1.2837063779724731, 0.90787223520200566, 0.97119474442038567, 1.1310243388696739, 0.33963449657392997, 0.1472486765805921};
TH1* h_rare_postSB = new TH1D("h_rare_postSB", "h_rare_postSB", 8, BinEdges );
setBins(h_rare_postSB,rare_postSB);
h_rare_postSB->SetLineWidth(1);
h_rare_postSB->SetLineColor(1);
h_rare_postSB->SetFillColor(616);


double smhiggs_postSB[]={1.6418686411380905, 3.9876391761295102, 3.1431697932333482, 3.9826794181256093, 4.0067295378328254, 4.2342399533617145, 2.7637272513572908, 2.1015511730523948};
TH1* h_smhiggs_postSB = new TH1D("h_smhiggs_postSB", "h_smhiggs_postSB", 8, BinEdges );
setBins(h_smhiggs_postSB,smhiggs_postSB);
h_smhiggs_postSB->SetLineWidth(1);
h_smhiggs_postSB->SetLineColor(1);
h_smhiggs_postSB->SetFillColor(603);

double   total_bkg_error[] = {15.90441615151868, 14.01537784259461, 7.6598117118184579, 7.238371906569709, 6.0843531775344273, 4.8712116070388625, 2.91422326446463, 2.808784224471184};

double  bkg_post[]={331.0445825477953, 309.56704804269265, 122.88409834305978, 112.80441306393084, 76.343899834998695, 58.15996592603355, 23.942327324088687, 10.217915777725576};
double  bkg_error[]={15.882386938068418, 13.894898076635725, 7.5137207829475363, 7.1163104706637235, 6.0883809139924994, 4.7245027479257926, 2.4968075131940983, 1.5643587366902794};
TH1*    h_bkg_post = new TH1D("h_bkg_post", "h_bkg_post", 8, BinEdges );
setBins(h_bkg_post,bkg_post);
setBinErrors(h_bkg_post,bkg_error);


double tuH_prefit[]={1.7965693275230399, 5.049753115777011, 4.0007964222538366, 6.9134251674835872, 7.9670035705125066, 9.6946946060884489, 7.4018253828881546, 9.3044681864476431};
TH1* h_tuH_overlay = new TH1D("h_tuH_overlay", "h_tuH_overlay", 8, BinEdges );
setBins(h_tuH_overlay,tuH_prefit);

double fcnc_uh_prefit[]={1.3051926893278294, 3.8549504009763593, 3.0703137857373988, 5.3299894123907006, 6.2732677619707307, 7.5269274261680916, 5.9949992648308275, 8.07704299065451};
TH1* h_fcnc_uh_overlay = new TH1D("h_fcnc_uh_overlay", "h_fcnc_uh_overlay", 8, BinEdges );
setBins(h_fcnc_uh_overlay,fcnc_uh_prefit);


double fcnc_prod_uh_prefit[]={0.49137663819521071, 1.1948027148006508, 0.9304826365164367, 1.5834357550928857, 1.6937358085417755, 2.1677671799203577, 1.4068261180573272, 1.2274251957931339};
TH1* h_fcnc_prod_uh_overlay = new TH1D("h_fcnc_prod_uh_overlay", "h_fcnc_prod_uh_overlay", 8, BinEdges );
setBins(h_fcnc_prod_uh_overlay,fcnc_prod_uh_prefit);

regionName="t_{h}#tau_{had}#tau_{had}-3j";
//regionName="t_{h}\\tau_{\\text{had}}\\tau_{\\text{had}}\\text{-3j}";
ouputName="reg2mtau1b3jos";
signalName="tuH";

*/


/*

// tcH 3j
double BinEdges[] = {-1, -0.40000000000000002, 0.10000000000000002, 0.30000000000000004, 0.49999999999999994, 0.64999999999999991, 0.75, 0.85000000000000009, 1};
double data_[]={328, 325, 112, 111, 81, 61, 21, 13};
TH1* h_data = new TH1D("h_data", "h_data", 8, BinEdges );
setBins(h_data,data_);

double tuH_[]={0.16467682013054397, 0.48368119501027262, 0.38801745981078511, 0.57153484004465815, 0.68627821330648831, 0.8063056938925246, 0.68393967579967863, 0.85800948301448055};
TH1* h_tuH = new TH1D("h_tuH", "h_tuH", 8, BinEdges );
setBins(h_tuH,tuH_);
h_tuH->SetLineWidth(1);
h_tuH->SetLineColor(1);
h_tuH->SetFillColor(kRed);


double onlyrealtau_postSB[]={20.353568456803128, 25.761559712567152, 12.937290747490492, 9.2918346481079315, 5.408190445367473, 4.4687892225139052, 1.7564564770340652, 0.8175160260555443};
TH1* h_onlyrealtau_postSB = new TH1D("h_onlyrealtau_postSB", "h_onlyrealtau_postSB", 8, BinEdges );
setBins(h_onlyrealtau_postSB,onlyrealtau_postSB);
h_onlyrealtau_postSB->SetLineWidth(1);
h_onlyrealtau_postSB->SetLineColor(1);
h_onlyrealtau_postSB->SetFillColor(46);


double Diboson_postSB[]={4.3162561879494765, 2.9867690416773729, 0.79718258614361459, 1.1571364108197906, 0.72241152553333265, 0.52482672907260042, 0.14365436985916438, 0.09041144939937483};
TH1* h_Diboson_postSB = new TH1D("h_Diboson_postSB", "h_Diboson_postSB", 8, BinEdges );
setBins(h_Diboson_postSB,Diboson_postSB);
h_Diboson_postSB->SetLineWidth(1);
h_Diboson_postSB->SetLineColor(1);
h_Diboson_postSB->SetFillColor(7);


double faketau_postSB[]={48.517330610991849, 83.001326145928772, 40.372582627954856, 37.473314028947307, 30.722682668677411, 20.204801510259195, 8.743869245998086, 2.1721276255855448};
TH1* h_faketau_postSB = new TH1D("h_faketau_postSB", "h_faketau_postSB", 8, BinEdges );
setBins(h_faketau_postSB,faketau_postSB);
h_faketau_postSB->SetLineWidth(1);
h_faketau_postSB->SetLineColor(1);
h_faketau_postSB->SetFillColor(47);

double ttbar_postSB[]={61.287547427134591, 69.79647762494865, 29.090457431553681, 25.525869747991766, 14.773923401707384, 13.066344752293279, 4.5978955577527998, 1.9085584052615041};
TH1* h_ttbar_postSB = new TH1D("h_ttbar_postSB", "h_ttbar_postSB", 8, BinEdges );
setBins(h_ttbar_postSB,ttbar_postSB);
h_ttbar_postSB->SetLineWidth(1);
h_ttbar_postSB->SetLineColor(1);
h_ttbar_postSB->SetFillColor(400);


double ztt_postSB[]={189.74804876641772, 119.69851050969191, 33.879334584491716, 32.993958644814761, 18.439682032818936, 13.501188974418767, 5.1633291188861801, 2.6836912069394812};
TH1* h_ztt_postSB = new TH1D("h_ztt_postSB", "h_ztt_postSB", 8, BinEdges );
setBins(h_ztt_postSB,ztt_postSB);
h_ztt_postSB->SetLineWidth(1);
h_ztt_postSB->SetLineColor(1);
h_ztt_postSB->SetFillColor(416);


double ttV_postSB[]={1.9663527753481271, 1.1793404253320188, 0.59856515172859359, 0.46210965677467075, 0.50653044526262292, 0.48089594580005396, 0.17353444339890126, 0.08702078274470311};
TH1* h_ttV_postSB = new TH1D("h_ttV_postSB", "h_ttV_postSB", 8, BinEdges );
setBins(h_ttV_postSB,ttV_postSB);
h_ttV_postSB->SetLineWidth(1);
h_ttV_postSB->SetLineColor(1);
h_ttV_postSB->SetFillColor(419);


double rare_postSB[]={3.2263391066283278, 2.1837810431403994, 1.2800473378776636, 0.90524979795257465, 0.96840462357047263, 1.1277675264283249, 0.33867277502765253, 0.1468264973238487};
TH1* h_rare_postSB = new TH1D("h_rare_postSB", "h_rare_postSB", 8, BinEdges );
setBins(h_rare_postSB,rare_postSB);
h_rare_postSB->SetLineWidth(1);
h_rare_postSB->SetLineColor(1);
h_rare_postSB->SetFillColor(616);


double smhiggs_postSB[]={1.6417742101837538, 3.9856427494177646, 3.140169929510364, 3.9771636467211762, 3.9994685667330052, 4.2245191976424223, 2.7559545433661445, 2.0945989812917731};
TH1* h_smhiggs_postSB = new TH1D("h_smhiggs_postSB", "h_smhiggs_postSB", 8, BinEdges );
setBins(h_smhiggs_postSB,smhiggs_postSB);
h_smhiggs_postSB->SetLineWidth(1);
h_smhiggs_postSB->SetLineColor(1);
h_smhiggs_postSB->SetFillColor(603);

double   total_bkg_error[] = {15.897690067452709, 13.996365157031271, 7.6253922362948936, 7.2492129246503376, 6.0793109615294938, 4.8295646612334657, 3.0089948909344719, 3.0163572450871943};


double  bkg_post[]={331.04455985004779, 309.56702471143387, 122.88408918076068, 112.80440520979027, 76.34389536755377, 58.159962255092971, 23.9423259371212, 10.217915081278438};
double  bkg_error[]={15.882411391663476, 13.894887277347999, 7.5136902628823314, 7.1162917101205654, 6.0883733060907783, 4.7244966501584287, 2.4968066794373702, 1.5643553319000409};
TH1*    h_bkg_post = new TH1D("h_bkg_post", "h_bkg_post", 8, BinEdges );
setBins(h_bkg_post,bkg_post);
setBinErrors(h_bkg_post,bkg_error);


double tuH_prefit[]={1.458614344372051, 4.2821497383988021, 3.4401714389013871, 5.0858195896292884, 6.1384906372011123, 7.2622999072805845, 6.2164935760796673, 7.8856113270944208};
TH1* h_tuH_overlay = new TH1D("h_tuH_overlay", "h_tuH_overlay", 8, BinEdges );
setBins(h_tuH_overlay,tuH_prefit);

double fcnc_uh_prefit[]={1.3767345925251169, 4.0536797648423555, 3.2271297981021179, 4.7685180756243417, 5.7829003412219677, 6.8652594013856376, 5.9407191586641446, 7.6279851419966871};
TH1* h_fcnc_uh_overlay = new TH1D("h_fcnc_uh_overlay", "h_fcnc_uh_overlay", 8, BinEdges );
setBins(h_fcnc_uh_overlay,fcnc_uh_prefit);


double fcnc_prod_uh_prefit[]={0.08187975184693444, 0.22846997355644771, 0.21304164079926902, 0.31730151400494649, 0.35559029597914593, 0.39704050589494866, 0.2757744174155225, 0.25762618509773222};
TH1* h_fcnc_prod_uh_overlay = new TH1D("h_fcnc_prod_uh_overlay", "h_fcnc_prod_uh_overlay", 8, BinEdges );
setBins(h_fcnc_prod_uh_overlay,fcnc_prod_uh_prefit);
regionName="t_{h}\\tau_{\\text{had}}\\tau_{\\text{had}}\\text{-3j}";
//regionName="t_{h}#tau_{had}#tau_{had}-3j";
ouputName="reg2mtau1b3jos";
signalName="tcH";

*/





/*
//2j tcH


double BinEdges[] = {-1, -0.40000000000000002, 0.10000000000000002, 0.30000000000000004, 0.49999999999999994, 0.64999999999999991, 0.75, 0.85000000000000009, 1};
double data_[]={332, 325, 136, 128, 74, 29, 4, 5};
TH1* h_data = new TH1D("h_data", "h_data", 8, BinEdges );
setBins(h_data,data_);

double tuH_[]={0.062017187386355949, 0.22213470405486674, 0.19772740566560315, 0.32182721026611916, 0.28319285953673834, 0.28474126565424318, 0.20629029271926139, 0.13791765552501437};
TH1* h_tuH = new TH1D("h_tuH", "h_tuH", 8, BinEdges );
setBins(h_tuH,tuH_);
h_tuH->SetLineWidth(1);
h_tuH->SetLineColor(1);
h_tuH->SetFillColor(kRed);


double onlyrealtau_postSB[]={10.291622437231799, 17.533890349823601, 9.1706056490887793, 9.4793143201861181, 5.1635059795836478, 3.0005942544242581, 0.96900558949909421, 0.39790369824592797};
TH1* h_onlyrealtau_postSB = new TH1D("h_onlyrealtau_postSB", "h_onlyrealtau_postSB", 8, BinEdges );
setBins(h_onlyrealtau_postSB,onlyrealtau_postSB);
h_onlyrealtau_postSB->SetLineWidth(1);
h_onlyrealtau_postSB->SetLineColor(1);
h_onlyrealtau_postSB->SetFillColor(46);


double Diboson_postSB[]={3.9728509385271731, 2.0773301339459285, 0.95173973771814235, 0.66330591561188901, 0.30569148591343792, 0.28429579431990515, 0.0090298231358650564, 0.068680636145894952};
TH1* h_Diboson_postSB = new TH1D("h_Diboson_postSB", "h_Diboson_postSB", 8, BinEdges );
setBins(h_Diboson_postSB,Diboson_postSB);
h_Diboson_postSB->SetLineWidth(1);
h_Diboson_postSB->SetLineColor(1);
h_Diboson_postSB->SetFillColor(7);


double faketau_postSB[]={40.116869997312889, 69.821375660041738, 40.885772767096171, 40.041634700382254, 18.854799370323818, 10.538564599570725, 2.9131572412373425, 0.2849248109916776};
TH1* h_faketau_postSB = new TH1D("h_faketau_postSB", "h_faketau_postSB", 8, BinEdges );
setBins(h_faketau_postSB,faketau_postSB);
h_faketau_postSB->SetLineWidth(1);
h_faketau_postSB->SetLineColor(1);
h_faketau_postSB->SetFillColor(47);

double ttbar_postSB[]={35.035589285516323, 82.064446216367344, 39.632608959143234, 35.230455164168212, 19.229362312995381, 6.9184224415937452, 2.6118555857203902, 0.53659544007790816};
TH1* h_ttbar_postSB = new TH1D("h_ttbar_postSB", "h_ttbar_postSB", 8, BinEdges );
setBins(h_ttbar_postSB,ttbar_postSB);
h_ttbar_postSB->SetLineWidth(1);
h_ttbar_postSB->SetLineColor(1);
h_ttbar_postSB->SetFillColor(400);


double ztt_postSB[]={232.23401231253411, 135.22429236633999, 48.224999167987299, 40.914444613100279, 18.689006765264267, 12.892841357266803, 3.6470666009385009, 0.99597544425879592};
TH1* h_ztt_postSB = new TH1D("h_ztt_postSB", "h_ztt_postSB", 8, BinEdges );
setBins(h_ztt_postSB,ztt_postSB);
h_ztt_postSB->SetLineWidth(1);
h_ztt_postSB->SetLineColor(1);
h_ztt_postSB->SetFillColor(416);


double ttV_postSB[]={0.24694334702259624, 0.1926110165357301, 0.14003684107159775, 0.088469763615446603, 0.030695553797847781, 0.029693085806500513, 0.0095259258471521897, 0.0091243629217856864};
TH1* h_ttV_postSB = new TH1D("h_ttV_postSB", "h_ttV_postSB", 8, BinEdges );
setBins(h_ttV_postSB,ttV_postSB);
h_ttV_postSB->SetLineWidth(1);
h_ttV_postSB->SetLineColor(1);
h_ttV_postSB->SetFillColor(419);


double rare_postSB[]={4.9362157688397872, 5.5418658623985824, 2.5719958756239496, 2.0336119701666626, 1.7489957071145434, 0.60136177158419679, 0.45724784519946932, 1.0139012754030424e-06};
TH1* h_rare_postSB = new TH1D("h_rare_postSB", "h_rare_postSB", 8, BinEdges );
setBins(h_rare_postSB,rare_postSB);
h_rare_postSB->SetLineWidth(1);
h_rare_postSB->SetLineColor(1);
h_rare_postSB->SetFillColor(616);


double smhiggs_postSB[]={0.95563117769872463, 2.8131471367063603, 1.987889939527228, 3.4644391363531466, 3.0657887481662844, 2.5422996837585266, 1.6571761394081341, 0.92933692965835202};
TH1* h_smhiggs_postSB = new TH1D("h_smhiggs_postSB", "h_smhiggs_postSB", 8, BinEdges );
setBins(h_smhiggs_postSB,smhiggs_postSB);
h_smhiggs_postSB->SetLineWidth(1);
h_smhiggs_postSB->SetLineColor(1);
h_smhiggs_postSB->SetFillColor(603);

double   total_bkg_error[] = {15.842690961502962, 14.238741266930198, 7.6008551832722731, 7.2858375364063273, 4.6576682202285866, 3.7002761623975333, 1.7690138996966598, 0.83977945500821205};


double  bkg_post[]={332.31865940652818, 329.56275306670994, 153.25197597664305, 142.99480835815737, 73.231496214609308, 40.678295110192259, 13.679121128888703, 3.5477030718283942};
double  bkg_error[]={15.73143369315099, 14.520096729544351, 7.8034701687960544, 7.5913204227973479, 4.7417221722083589, 3.8015135835988603, 1.7919914699983024, 0.87056945588171208};
TH1*    h_bkg_post = new TH1D("h_bkg_post", "h_bkg_post", 8, BinEdges );
setBins(h_bkg_post,bkg_post);
setBinErrors(h_bkg_post,bkg_error);


double tuH_prefit[]={0.54789039981172782, 1.9670637169824401, 1.7590624754405135, 2.8885121517053474, 2.5762622918332281, 2.6280297264723353, 1.9227239603690036, 1.2915800049150643};
TH1* h_tuH_overlay = new TH1D("h_tuH_overlay", "h_tuH_overlay", 8, BinEdges );
setBins(h_tuH_overlay,tuH_prefit);

double fcnc_uh_prefit[]={0.48413711837138407, 1.7908201568789057, 1.6027762163993295, 2.6453715077142896, 2.3242508768821843, 2.2976608060853998, 1.6616867483472335, 1.1171615188704656};
TH1* h_fcnc_uh_overlay = new TH1D("h_fcnc_uh_overlay", "h_fcnc_uh_overlay", 8, BinEdges );
setBins(h_fcnc_uh_overlay,fcnc_uh_prefit);


double fcnc_prod_uh_prefit[]={0.063753281440343687, 0.17624356010353445, 0.15628625904118418, 0.2431406439910585, 0.25201141495104362, 0.33036892038693555, 0.26103721202176983, 0.17441848604459886};
TH1* h_fcnc_prod_uh_overlay = new TH1D("h_fcnc_prod_uh_overlay", "h_fcnc_prod_uh_overlay", 8, BinEdges );
setBins(h_fcnc_prod_uh_overlay,fcnc_prod_uh_prefit);
regionName="t_{h}\\tau_{\\text{had}}\\tau_{\\text{had}}\\text{-2j}";
//regionName="t_{h}#tau_{had}#tau_{had}-2j";
ouputName="reg2mtau1b2jos";
signalName="tcH";

*/













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

//lower pad, prefit data/B
TH1D hdataR_post("hdataR_post","hdataR_post",8, BinEdges);


hmc.Sumw2();
THStack *hsk = new THStack("BDT","BDT");
TLegend* lg1 = 0;
lg1 = new TLegend(0.55,0.918/maxfactor,0.84,0.92,"");
lg1->SetNColumns(2);

lg1->AddEntry(h_data,"data","LP");


lg1->AddEntry(h_tuH,signalName.c_str(),"F");

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
lg1->SetTextSize(gStyle->GetTextSize()*0.5);





cv.cd();

padhi->Draw();
padhi->SetBottomMargin(0.);
padhi->SetRightMargin(0.08);
padhi->SetLeftMargin(0.12);
padhi->cd();

padhi->SetLogy();

hsk->SetMinimum(0.1); //2j:0.1       3j:1
hsk->SetMaximum(120000);//2j:120000  3j:40000
hsk->Draw("hist");
hsk->GetXaxis()->SetTitle("BDT Discriminant");
hsk->GetXaxis()->SetLabelColor(kWhite);
hsk->GetYaxis()->SetTitle("Events");
hsk->GetYaxis()->SetTitleOffset(1.0);
hsk->GetYaxis()->SetTitleFont(42);
std::cout<<gStyle->GetTextFont()<<","<<std::endl;
hsk->GetYaxis()->SetLabelSize(hsk->GetYaxis()->GetLabelSize()*0.7);

//h_tuH->Draw("hist same");

for(Int_t j=1; j<hmc.GetNbinsX()+1; j++) {
    hmcR.SetBinContent(j,1);
    hmcR.SetBinError(j,hmc.GetBinContent(j)>0 ? hmc.GetBinError(j)/hmc.GetBinContent(j) : 0);
    hdataR.SetBinContent(j, hmc.GetBinContent(j)>0 ? h_data->GetBinContent(j)/hmc.GetBinContent(j) : 1);
    hdataR.SetBinError(j, ( h_data->GetBinContent(j)>0 && hmc.GetBinContent(j)>0 )? h_data->GetBinError(j)/hmc.GetBinContent(j) : 0);

    // B only fit

    hdataR_post.SetBinContent(j,h_bkg_post->GetBinContent(j)>0?h_data->GetBinContent(j)/h_bkg_post->GetBinContent(j) : 1 );
    hdataR_post.SetBinError(j, ( h_data->GetBinContent(j)>0 && h_bkg_post->GetBinContent(j)>0 )? h_data->GetBinError(j)/h_bkg_post->GetBinContent(j) : 0);
}

hmc.SetFillColor(kBlue-4);
hmc.SetLineColor(0);
hmc.SetMarkerStyle(1);
hmc.SetMarkerSize(0);
hmc.SetMarkerColor(1);
hmc.SetFillStyle(3004);

if(signalName=="tcH") ATLASLabel(0.15,0.900,"Preliminary",kBlack,"#sqrt{s}=13 TeV,139 fb^{-1}","#it{FCNC tcH H#rightarrow#tau^{+}#tau^{-}}", regionName.c_str(),"Post-Fit");
if(signalName=="tuH") ATLASLabel(0.15,0.900,"Preliminary",kBlack,"#sqrt{s}=13 TeV,139 fb^{-1}","#it{FCNC tuH H#rightarrow#tau^{+}#tau^{-}}", regionName.c_str(),"Post-Fit");


lg1->AddEntry(&hmc,"Uncertainty","f");



hmc.Draw("E2same");
//lg1->Draw("same");
h_data->Draw("E same");


TLegend *lowlg =new TLegend(0.55,0.78,0.84,0.92,"");
lowlg->SetNColumns(2);
lowlg->AddEntry(&hdataR,"S+B fit","LP");
lowlg->AddEntry(&hdataR_post,"Bonly Fit","LP");
lowlg->SetBorderSize(0);
lowlg->SetFillStyle(0);

lowlg->SetTextFont(gStyle->GetTextFont());
lowlg->SetTextSize(gStyle->GetTextSize()*1.8);

padlow->SetFillStyle(4000);
//padlow->SetGrid(1,1);
padlow->SetTopMargin(0.);
padlow->SetBottomMargin(0.35);
padlow->SetRightMargin(0.08);
padlow->SetLeftMargin(0.12);
padlow->cd();
hdataR.SetMarkerStyle(20);
hdataR.SetMarkerSize(0.8);
hmcR.SetMaximum(1.5);
hmcR.SetMinimum(0.5);
//hmcR.GetYaxis()->SetRangeUser(0.5,1.55);
//hmcR.GetYaxis()->SetNdivisions(508,true);
hmcR.GetYaxis()->SetRangeUser(0.5,1.5);
hmcR.GetYaxis()->SetNdivisions(506,true);
hmcR.GetYaxis()->SetTitle("Data/Pred");
hmcR.GetYaxis()->SetTitleSize(0.1);
hmcR.GetYaxis()->SetTitleFont(42);
hmcR.GetYaxis()->SetLabelSize(0.08);
hmcR.GetYaxis()->CenterTitle();
hmcR.GetXaxis()->SetTitle("BDT Discriminant");
hmcR.GetXaxis()->SetTitleSize(0.08);
hmcR.GetXaxis()->SetTitleFont(42);
hmcR.GetXaxis()->SetLabelSize(0.08);
hmcR.SetFillColor(kBlue-4);
hmcR.SetLineColor(0);
hmcR.SetLineWidth(3);
hmcR.SetMarkerStyle(1);
hmcR.SetMarkerSize(0);
hmcR.SetMarkerColor(1);
hmcR.SetFillStyle(3004);
hmcR.GetYaxis()->SetTitleOffset(0.5);
hmcR.Draw("E2 same");
hdataR_post.SetMarkerStyle(22);
hdataR_post.SetMarkerSize(0.8);
hdataR_post.SetMarkerColor(kBlue);
hdataR_post.SetLineColor(kBlue);
hdataR.Draw("E same");
//hdataR_post.Draw("E same");

std::cout<<hdataR.GetBinContent(8)<<std::endl;
std::cout<<hdataR_post.GetBinContent(8)<<std::endl;
//lowlg->Draw("same");

TLine line;
line.SetLineColor(kBlack);
line.SetLineStyle(2);
line.DrawLine(hdataR.GetBinLowEdge(1), 1., hdataR.GetBinLowEdge(hdataR.GetNbinsX()+1), 1.);
cv.cd();
padlow->Draw();


padhi->cd();


//TLegend *lgsig = (TLegend*) lg1->Clone();
h_tuH_overlay->SetLineStyle(9);
h_tuH_overlay->SetLineWidth(5);
h_tuH_overlay->SetLineColor(kBlue+4);
h_tuH_overlay->SetFillColor(0);

h_fcnc_uh_overlay->SetLineStyle(9);
h_fcnc_prod_uh_overlay->SetLineStyle(9);
h_fcnc_uh_overlay->SetLineWidth(5);
h_fcnc_prod_uh_overlay->SetLineWidth(5);
h_fcnc_uh_overlay->SetLineColor(kBlue-5);
h_fcnc_prod_uh_overlay->SetLineColor(kBlue-10);
h_fcnc_uh_overlay->SetFillColor(0);
h_fcnc_prod_uh_overlay->SetFillColor(0);



lg1->AddEntry(h_tuH_overlay,signalName=="tuH"?"tuH(0.1%)x2":"tcH(0.1%)x2","L");
h_tuH_overlay->Scale(2);
h_tuH_overlay->Draw("hist same");


lg1->AddEntry(h_fcnc_prod_uh_overlay,signalName=="tuH"?"ug#rightarrowtH(0.1%)x2":"cg#rightarrowtH(0.1%)x2","L");
h_fcnc_prod_uh_overlay->Scale(2);
h_fcnc_prod_uh_overlay->Draw("hist same");

TH1F* dummy = new TH1F();
lg1->AddEntry(dummy ,"","");

lg1->AddEntry(h_fcnc_uh_overlay,signalName=="tuH"?"t#bar{t}#rightarrowWbHu(0.1%)x2":"t#bar{t}#rightarrowWbHc(0.1%)x2","L");
h_fcnc_uh_overlay->Scale(2);
h_fcnc_uh_overlay->Draw("hist same");





lg1->SetBorderSize(0);
lg1->SetFillStyle(0);
lg1->Draw("same");
//padhi->Update();
cv.SaveAs((signalName+"_"+ouputName+".eps").c_str());




}