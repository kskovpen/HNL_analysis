
#include "../interface/Analysis_mc.h"

//_____________________________________________

int Analysis_mc::SR_bin_muon(int channel,double D2_delta_pv_sv,  double M_l2l3_combined ){
  int bin = -1;
  double value_mass_cut = 4.0 ;
  double value_displaced_first_cut = 0.5 ;
  double value_displaced_second_cut = 1.5 ;
  double value_displaced_third_cut = 4 ;
	
  bool mass_bool_less = false;	
  bool mass_bool_more = false; 	
  bool disp_bool_first = false;
  bool disp_bool_second = false;
  bool disp_bool_third = false;
  bool disp_bool_fourth = false;

  mass_bool_less = M_l2l3_combined < value_mass_cut;
  mass_bool_more = M_l2l3_combined >= value_mass_cut;
  disp_bool_first =  D2_delta_pv_sv < 	value_displaced_first_cut;
  disp_bool_second =  D2_delta_pv_sv > 	value_displaced_first_cut  && D2_delta_pv_sv < 	value_displaced_second_cut;
  disp_bool_third =  D2_delta_pv_sv  > 	value_displaced_second_cut && D2_delta_pv_sv < 	value_displaced_third_cut ;
  disp_bool_fourth =  D2_delta_pv_sv > 	value_displaced_third_cut;
	
		
  if (channel == 0 || channel == 1 || channel == 2  ){
    if (channel == 0){
      if (mass_bool_less && disp_bool_first)    bin =1;
      if (mass_bool_less && disp_bool_second)   bin =2;
      if (mass_bool_less && disp_bool_third)    bin =3;
      if (mass_bool_less && disp_bool_fourth)   bin =4;
      if (mass_bool_more && disp_bool_first)    bin =5;
      if (mass_bool_more && disp_bool_second)   bin =6;
      if (mass_bool_more && disp_bool_third)    bin =7;
      if (mass_bool_more && disp_bool_fourth)   bin =8;
	    
     /* if (less2 && less5)    bin =1;
      if (less2 && more5)    bin =2;
      if (more2_10 && less5) bin =3;
      if (more2_10 && more5) bin =4;
      if (more10 && less5)   bin =5;
      if (more10 && more5)   bin =6;*/	    

    }
    if (channel == 1){
      if (mass_bool_less && disp_bool_first)    bin =9;
      if (mass_bool_less && disp_bool_second)   bin =10;
      if (mass_bool_less && disp_bool_third)    bin =11;
      if (mass_bool_less && disp_bool_fourth)   bin =12;
      if (mass_bool_more && disp_bool_first)    bin =13;
      if (mass_bool_more && disp_bool_second)   bin =14;
      if (mass_bool_more && disp_bool_third)    bin =15;
      if (mass_bool_more && disp_bool_fourth)   bin =16;

    }
    if (channel == 2){
      if (mass_bool_less && disp_bool_first)    bin =17;
      if (mass_bool_less && disp_bool_second)   bin =18;
      if (mass_bool_less && disp_bool_third)    bin =19;
      if (mass_bool_less && disp_bool_fourth)   bin =20;
      if (mass_bool_more && disp_bool_first)    bin =21;
      if (mass_bool_more && disp_bool_second)   bin =22;
      if (mass_bool_more && disp_bool_third)    bin =23;
      if (mass_bool_more && disp_bool_fourth)   bin =24;
    }
  }
  return bin;
}
//_____________________________________________

int Analysis_mc::SR_bin_ele(int channel,double D2_delta_pv_sv,  double M_l2l3_combined ){
  int bin = -1;
  double value_mass_cut = 4.0 ;
  double value_displaced_first_cut = 0.5 ;
  double value_displaced_second_cut = 1.5 ;
  double value_displaced_third_cut = 4 ;
	
  bool mass_bool_less = false;	
  bool mass_bool_more = false; 	
  bool disp_bool_first = false;
  bool disp_bool_second = false;
  bool disp_bool_third = false;
  bool disp_bool_fourth = false;

  mass_bool_less = M_l2l3_combined < value_mass_cut;
  mass_bool_more = M_l2l3_combined >= value_mass_cut;
  disp_bool_first =  D2_delta_pv_sv < 	value_displaced_first_cut;
  disp_bool_second =  D2_delta_pv_sv > 	value_displaced_first_cut  && D2_delta_pv_sv < 	value_displaced_second_cut;
  disp_bool_third =  D2_delta_pv_sv  > 	value_displaced_second_cut && D2_delta_pv_sv < 	value_displaced_third_cut ;
  disp_bool_fourth =  D2_delta_pv_sv > 	value_displaced_third_cut;	
	
  if (channel == 3 || channel == 4 || channel == 5  ){
    if (channel == 3){
      if (mass_bool_less && disp_bool_first)    bin =1;
      if (mass_bool_less && disp_bool_second)   bin =2;
      if (mass_bool_less && disp_bool_third)    bin =3;
      if (mass_bool_less && disp_bool_fourth)   bin =4;
      if (mass_bool_more && disp_bool_first)    bin =5;
      if (mass_bool_more && disp_bool_second)   bin =6;
      if (mass_bool_more && disp_bool_third)    bin =7;
      if (mass_bool_more && disp_bool_fourth)   bin =8;
    }
    if (channel == 4){
      if (mass_bool_less && disp_bool_first)    bin =9;
      if (mass_bool_less && disp_bool_second)   bin =10;
      if (mass_bool_less && disp_bool_third)    bin =11;
      if (mass_bool_less && disp_bool_fourth)   bin =12;
      if (mass_bool_more && disp_bool_first)    bin =13;
      if (mass_bool_more && disp_bool_second)   bin =14;
      if (mass_bool_more && disp_bool_third)    bin =15;
      if (mass_bool_more && disp_bool_fourth)   bin =16;

    }
    if (channel == 5){
      if (mass_bool_less && disp_bool_first)    bin =17;
      if (mass_bool_less && disp_bool_second)   bin =18;
      if (mass_bool_less && disp_bool_third)    bin =19;
      if (mass_bool_less && disp_bool_fourth)   bin =20;
      if (mass_bool_more && disp_bool_first)    bin =21;
      if (mass_bool_more && disp_bool_second)   bin =22;
      if (mass_bool_more && disp_bool_third)    bin =23;
      if (mass_bool_more && disp_bool_fourth)   bin =24;

    }
  }
  return bin;
}
//_____________________________________________
int Analysis_mc::channel(int  flavors_3l[3], int  charge_3l[3]){
  int canale=-1;
  if (flavors_3l[0] == flavors_3l[1] && flavors_3l[0] == flavors_3l[2] ) {
    if (flavors_3l[0] == 0) canale = 3;
    if (flavors_3l[0] == 1) canale = 0;
  }
  if (flavors_3l[0] == 1){
    if (flavors_3l[1]==1 && flavors_3l[2]==0){
      if (charge_3l[0] != charge_3l[1]) canale = 1;	    
      if (charge_3l[0] == charge_3l[1]) canale = 2;
    }
    if (flavors_3l[2]==1 && flavors_3l[1]==0){
      if (charge_3l[0] != charge_3l[2]) canale = 1;	    
      if (charge_3l[0] == charge_3l[2]) canale = 2;
    }   
  }//mme

  if (flavors_3l[0] == 0){
    if (flavors_3l[1]==0 && flavors_3l[2]==1){
      if (charge_3l[0] != charge_3l[1]) canale = 4;	    
      if (charge_3l[0] == charge_3l[1]) canale = 5;
    }
    if (flavors_3l[2]==0 && flavors_3l[1]==1){
      if (charge_3l[0] != charge_3l[2]) canale = 4;	    
      if (charge_3l[0] == charge_3l[2]) canale = 5;
    }   
  }//eem

  // 0 = mmm
  // 1 = mme OS
  // 2 = mme SS
  // 3 = eee
  // 4 = eem OS
  // 5 = eem SS
  return canale;
  
}
//_____________________________________________ SF prompt ele
double Analysis_mc::SF_prompt_ele(TH2F *ele_sf_histogram[1], const unsigned leptonIndex){
   double sfValue = 1;  	
   int binx = ele_sf_histogram[0]->GetXaxis()->FindBin(_lEtaSC[leptonIndex]);
   int biny = 0.;
  if (_lPt[leptonIndex] > ele_sf_histogram[0]->GetYaxis()->GetBinUpEdge(ele_sf_histogram[0]->GetYaxis()->GetNbins()) )biny =  ele_sf_histogram[0]->GetYaxis()->GetNbins(); 
  else biny = ele_sf_histogram[0]->GetYaxis()->FindBin(std::max(_lPt[leptonIndex], ele_sf_histogram[0]->GetYaxis()->GetBinLowEdge(1))); 	
	
	
   sfValue = ele_sf_histogram[0]->GetBinContent(binx,biny);	
   return sfValue;	
}
//_____________________________________________ SF prompt ele
double Analysis_mc::SF_prompt_muon(TH2D *muon_sf_histogram[1], const unsigned leptonIndex){
   double sfValue = 1;
   int binx =0;
   int biny =0;	
   if (muon_sf_histogram[0]->GetXaxis()->GetXmax() > 4) { // it means that xaxis has pt so y axis has |eta|
	  biny = muon_sf_histogram[0]->GetYaxis()->FindBin(std::abs(_lEta[leptonIndex]));
          if (_lPt[leptonIndex] > muon_sf_histogram[0]->GetXaxis()->GetBinUpEdge(muon_sf_histogram[0]->GetXaxis()->GetNbins()) )binx =  muon_sf_histogram[0]->GetYaxis()->GetNbins(); 
          else binx = muon_sf_histogram[0]->GetXaxis()->FindBin(std::max(_lPt[leptonIndex], muon_sf_histogram[0]->GetXaxis()->GetBinLowEdge(1)));  
   }
   else { // it means that xaxis has eta so y axis has pt
	  binx = muon_sf_histogram[0]->GetXaxis()->FindBin(_lEta[leptonIndex]);
	  if (_lPt[leptonIndex] > muon_sf_histogram[0]->GetYaxis()->GetBinUpEdge(muon_sf_histogram[0]->GetYaxis()->GetNbins()) )biny =  muon_sf_histogram[0]->GetYaxis()->GetNbins(); 
          else biny = muon_sf_histogram[0]->GetYaxis()->FindBin(std::max(_lPt[leptonIndex], muon_sf_histogram[0]->GetYaxis()->GetBinLowEdge(1)));   
   }
   sfValue = muon_sf_histogram[0]->GetBinContent(binx,biny);	
   return sfValue;	
}
//_____________________________________________ SF prompt ele
double Analysis_mc::SF_prompt_ele_error(TH2F *ele_sf_histogram[1], const unsigned leptonIndex){
   double sfValue = 1;  	
   int binx = ele_sf_histogram[0]->GetXaxis()->FindBin(_lEtaSC[leptonIndex]);
   int biny=0.;	
     if (_lPt[leptonIndex] > ele_sf_histogram[0]->GetYaxis()->GetBinUpEdge(ele_sf_histogram[0]->GetYaxis()->GetNbins()) )biny =  ele_sf_histogram[0]->GetYaxis()->GetNbins(); 
  else biny = ele_sf_histogram[0]->GetYaxis()->FindBin(std::max(_lPt[leptonIndex], ele_sf_histogram[0]->GetYaxis()->GetBinLowEdge(1))); 	
   sfValue = ele_sf_histogram[0]->GetBinErrorLow(binx,biny);	
   return sfValue;	
}
//_____________________________________________ SF prompt ele
double Analysis_mc::SF_prompt_muon_error(TH2D *muon_sf_histogram[1], const unsigned leptonIndex){
   double sfValue = 1;  		
   int binx =0;
   int biny =0;	
   if (muon_sf_histogram[0]->GetXaxis()->GetXmax() > 4) { // it means that xaxis has pt so y axis has |eta|
	  biny = muon_sf_histogram[0]->GetYaxis()->FindBin(std::abs(_lEta[leptonIndex]));
          if (_lPt[leptonIndex] > muon_sf_histogram[0]->GetXaxis()->GetBinUpEdge(muon_sf_histogram[0]->GetXaxis()->GetNbins()) )binx =  muon_sf_histogram[0]->GetYaxis()->GetNbins(); 
          else binx = muon_sf_histogram[0]->GetXaxis()->FindBin(std::max(_lPt[leptonIndex], muon_sf_histogram[0]->GetXaxis()->GetBinLowEdge(1)));  
   }
   else { // it means that xaxis has eta so y axis has pt
	  binx = muon_sf_histogram[0]->GetXaxis()->FindBin(_lEta[leptonIndex]);
	  if (_lPt[leptonIndex] > muon_sf_histogram[0]->GetYaxis()->GetBinUpEdge(muon_sf_histogram[0]->GetYaxis()->GetNbins()) )biny =  muon_sf_histogram[0]->GetYaxis()->GetNbins(); 
          else biny = muon_sf_histogram[0]->GetYaxis()->FindBin(std::max(_lPt[leptonIndex], muon_sf_histogram[0]->GetYaxis()->GetBinLowEdge(1)));   
   }			
   sfValue = muon_sf_histogram[0]->GetBinErrorLow(binx,biny);	
   return sfValue;		
}

//_____________________________________________ SF prompt muon trigger
double Analysis_mc::SF_trigger_muon(TH2F *muon_sf_histogram[1], const unsigned leptonIndex){
   double sfValue = 1;  
   int binx =0;
   int biny =0;	
   binx = muon_sf_histogram[0]->GetXaxis()->FindBin(std::abs(_lEta[leptonIndex]));
   if (_lPt[leptonIndex] > muon_sf_histogram[0]->GetYaxis()->GetBinUpEdge(muon_sf_histogram[0]->GetYaxis()->GetNbins()) )biny =  muon_sf_histogram[0]->GetYaxis()->GetNbins(); 
   else biny = muon_sf_histogram[0]->GetYaxis()->FindBin(std::max(_lPt[leptonIndex], muon_sf_histogram[0]->GetYaxis()->GetBinLowEdge(1))); 
   sfValue = muon_sf_histogram[0]->GetBinContent(binx,biny);
   return sfValue;	
}
//_____________________________________________ SF prompt muon trigger error
double Analysis_mc::SF_trigger_muon_error(TH2F *muon_sf_histogram[1], const unsigned leptonIndex){
     double sfValue = 1;  
   int binx =0;
   int biny =0;	
   binx = muon_sf_histogram[0]->GetXaxis()->FindBin(std::abs(_lEta[leptonIndex]));
   if (_lPt[leptonIndex] > muon_sf_histogram[0]->GetYaxis()->GetBinUpEdge(muon_sf_histogram[0]->GetYaxis()->GetNbins()) )biny =  muon_sf_histogram[0]->GetYaxis()->GetNbins(); 
   else biny = muon_sf_histogram[0]->GetYaxis()->FindBin(std::max(_lPt[leptonIndex], muon_sf_histogram[0]->GetYaxis()->GetBinLowEdge(1))); 
   sfValue = muon_sf_histogram[0]->GetBinErrorLow(binx,biny);	
   return sfValue;			
}

//_____________________________________________
void Analysis_mc::zCandidate(TLorentzVector pair[2],TLorentzVector other[1], TLorentzVector leep1, TLorentzVector leep2,TLorentzVector leep3, int  flavors_3l[3], int  charge_3l[3]){
  int ch_lepton1=charge_3l[0];
  int ch_lepton2=charge_3l[1];
  int ch_lepton3=charge_3l[2];
  int fl_lepton1=flavors_3l[0];
  int fl_lepton2=flavors_3l[1];
  int fl_lepton3=flavors_3l[2];
  
  // OSSF
  if (     ((ch_lepton1 != ch_lepton2)    && (fl_lepton1 == fl_lepton2))  || ((ch_lepton1 != ch_lepton3)   && (fl_lepton1 == fl_lepton3)) || ((ch_lepton2 != ch_lepton3)  && (fl_lepton3 == fl_lepton2)) ){ // ossf
    //cout<<"in function where kind is 1: "<<kind[0]<<endl;
        
    double i_m[3]={33333,33333,33333};
    double mass_inv=0;
    int index_inv=100;
    double min_mass=999;
    if ((ch_lepton1 != ch_lepton2)  && (fl_lepton1 == fl_lepton2)) i_m[0]= TMath:: Abs((leep1 + leep2).Mag() - 91.1876);
    if ((ch_lepton1 != ch_lepton3)  && (fl_lepton1 == fl_lepton3)) i_m[1]= TMath:: Abs((leep1 + leep3).Mag() - 91.1876);
    if ((ch_lepton2 != ch_lepton3)  && (fl_lepton3 == fl_lepton2)) i_m[2]= TMath:: Abs((leep2 + leep3).Mag() - 91.1876);
    for (int i =0; i < 3; i++){
      if (i_m[i] == 33333) continue;
      mass_inv = i_m[i];
      if (min_mass > mass_inv ){
	min_mass = mass_inv;
	index_inv = i;
      }
    }
    if (index_inv == 0) {
      pair[0].SetPtEtaPhiE( leep1.Pt(),  leep1.Eta(), leep1.Phi(), leep1.E());
      pair[1].SetPtEtaPhiE( leep2.Pt(),  leep2.Eta(), leep2.Phi(), leep2.E());
      other[0].SetPtEtaPhiE( leep3.Pt(),  leep3.Eta(), leep3.Phi(), leep3.E());
    }
    if (index_inv == 1) {
      pair[0].SetPtEtaPhiE( leep1.Pt(),  leep1.Eta(), leep1.Phi(), leep1.E());
      pair[1].SetPtEtaPhiE( leep3.Pt(),  leep3.Eta(), leep3.Phi(), leep3.E());
      other[0].SetPtEtaPhiE( leep2.Pt(),  leep2.Eta(), leep2.Phi(), leep2.E());
            
    }
    if (index_inv == 2) {
      pair[0].SetPtEtaPhiE( leep2.Pt(),  leep2.Eta(), leep2.Phi(), leep2.E());
      pair[1].SetPtEtaPhiE( leep3.Pt(),  leep3.Eta(), leep3.Phi(), leep3.E());
      other[0].SetPtEtaPhiE( leep1.Pt(),  leep1.Eta(), leep1.Phi(), leep1.E());
            
    }
  }// end ossf
  // No_OSSF
  else if (   ((ch_lepton1 + ch_lepton2) == 0  )  || ((ch_lepton1 + ch_lepton3) == 0   ) || ((ch_lepton3 + ch_lepton2) == 0   )   ){
    //cout<<"in function where kind is 0: "<<kind[0]<<endl;
    double i_m[3]={33333,33333,33333};
    double mass_inv=0;
    int index_inv=100;
    double min_mass=999;
    if ((ch_lepton1 != ch_lepton2) ) i_m[0]= TMath:: Abs((leep1 + leep2).Mag() - 91.1876);
    if ((ch_lepton1 != ch_lepton3)  ) i_m[1]= TMath:: Abs((leep1 + leep3).Mag() - 91.1876);
    if ((ch_lepton2 != ch_lepton3) ) i_m[2]= TMath:: Abs((leep2 + leep3).Mag() - 91.1876);
    for (int i =0; i < 3; i++){
      if (i_m[i] == 33333) continue;
      mass_inv = i_m[i];
      if (min_mass > mass_inv ){
	min_mass = mass_inv;
	index_inv = i;
      }
    }
    if (index_inv == 0) {
      pair[0].SetPtEtaPhiE( leep1.Pt(),  leep1.Eta(), leep1.Phi(), leep1.E());
      pair[1].SetPtEtaPhiE( leep2.Pt(),  leep2.Eta(), leep2.Phi(), leep2.E());
      other[0].SetPtEtaPhiE( leep3.Pt(),  leep3.Eta(), leep3.Phi(), leep3.E());
    }
    if (index_inv == 1) {
      pair[0].SetPtEtaPhiE( leep1.Pt(),  leep1.Eta(), leep1.Phi(), leep1.E());
      pair[1].SetPtEtaPhiE( leep3.Pt(),  leep3.Eta(), leep3.Phi(), leep3.E());
      other[0].SetPtEtaPhiE( leep2.Pt(),  leep2.Eta(), leep2.Phi(), leep2.E());
            
    }
    if (index_inv == 2) {
      pair[0].SetPtEtaPhiE( leep2.Pt(),  leep2.Eta(), leep2.Phi(), leep2.E());
      pair[1].SetPtEtaPhiE( leep3.Pt(),  leep3.Eta(), leep3.Phi(), leep3.E());
      other[0].SetPtEtaPhiE( leep1.Pt(),  leep1.Eta(), leep1.Phi(), leep1.E());
            
    }
        

  }
}
//______________________________________________
double Analysis_mc::FR_weight(TGraphAsymmErrors *fakeRate_mu_sFR[3],
			      TGraphAsymmErrors *fakeRate_e_sFR[3],
			      TGraphAsymmErrors *fakeRate_mumu_dFR[3],
			      TGraphAsymmErrors *fakeRate_ee_dFR[3],
			      TGraphAsymmErrors *fakeRate_emu_dFR[3],
			      bool   isSFR,
			      bool   isDFR,
			      double etaLepton,
			      double flavorsLepton,
			      double ptLepton,
			      double etaJet,
			      double flavorsJet,
			      double ptJet
			      ) {
  double factor=0;

  //std::cout<< "                   inside function for FR: "<<factor<<std::endl;
  if (isSFR && flavorsLepton == 0 )  factor =  sFR_factor_e  (*&fakeRate_e_sFR ,etaLepton, ptLepton);
  if (isSFR && flavorsLepton == 1 )  factor =  sFR_factor_mu (*&fakeRate_mu_sFR ,etaLepton, ptLepton);

  if (isDFR && flavorsJet == 0 )     factor =  dFR_factor_ee   (*&fakeRate_ee_dFR ,etaJet, ptJet);
  if (isDFR && flavorsJet == 1 )     factor =  dFR_factor_mumu (*&fakeRate_mumu_dFR ,etaJet, ptJet);
  if (isDFR && flavorsJet == 2 )     factor =  dFR_factor_emu  (*&fakeRate_emu_dFR ,etaJet, ptJet);
  //std::cout<< "                   return factor: "<<factor<<std::endl;

  return factor;
}


//==================================================================
double Analysis_mc::dFR_factor_ee(TGraphAsymmErrors *fakeRate_e[3],                             
				  int eta,
				  double lptcone
				  ){
    
  const int nBinMu=5;
  const int nBinMu3=4;
    
  Double_t newBins_e1[nBinMu+1] = {10,25,40,55,70, 100};
  Double_t newBins_e3[nBinMu3+1] ={10,30,50,70, 100};

  //std::cout<<"                             it is ee: eta and pt  "<<eta<< "   "<<lptcone<< std::endl;
   
  TH1D *fakeRate_e_histo[3]; 
  fakeRate_e_histo[0]= new TH1D("fake_rate_e_histo_eta1","",nBinMu,newBins_e1);
  fakeRate_e_histo[1]= new TH1D("fake_rate_e_histo_eta2","",nBinMu,newBins_e1);
  fakeRate_e_histo[2]= new TH1D("fake_rate_e_histo_eta3","",nBinMu3,newBins_e3);  
  for (int i=0; i< 3; i++){
    if (i ==0 || i ==1) from_TGraph_to_TH1D(*&fakeRate_e[i],*&fakeRate_e_histo[i],nBinMu);
    if (i ==2) from_TGraph_to_TH1D(*&fakeRate_e[i],*&fakeRate_e_histo[i],nBinMu3);
  }
  //std::cout<<"                             check first bin eta1: "<< fakeRate_e_histo[0]->GetBinContent(fakeRate_e_histo[0]->FindBin(20))<<std::endl;

  double momentum = lptcone;
  double factore=0;
  if (momentum < 100){
    if (eta == 1)  factore = fakeRate_e_histo[0]->GetBinContent(fakeRate_e_histo[0]->FindBin(momentum));
    if (eta == 2)  factore = fakeRate_e_histo[1]->GetBinContent(fakeRate_e_histo[1]->FindBin(momentum));
    if (eta == 3)  factore = fakeRate_e_histo[2]->GetBinContent(fakeRate_e_histo[2]->FindBin(momentum));
  }//eta1
  else {
    if (eta == 1)  factore = fakeRate_e_histo[0]->GetBinContent(fakeRate_e_histo[0]->FindBin(90));
    if (eta == 2)  factore = fakeRate_e_histo[1]->GetBinContent(fakeRate_e_histo[1]->FindBin(90));
    if (eta == 3)  factore = fakeRate_e_histo[2]->GetBinContent(fakeRate_e_histo[2]->FindBin(90));
  }  
  delete fakeRate_e_histo[0];
  delete fakeRate_e_histo[1];
  delete fakeRate_e_histo[2];
  //std::cout<<"                             it is ee: factor "<<factore<<std::endl;

  return factore;  
}

//==================================================================
double Analysis_mc::dFR_factor_emu(TGraphAsymmErrors *fakeRate_e[3],                             
				   int eta,
				   double lptcone
				   ){
    
  const int nBinMu=5;
  const int nBinMu3=4;
    
  Double_t newBins_e1[nBinMu+1] = {10,25,35,55,70, 100};
  Double_t newBins_e3[nBinMu3+1] = {10,20,45,70, 100};
  // std::cout<<"                             it is emu: eta and pt  "<<eta<< "   "<<lptcone<< std::endl;

  TH1D *fakeRate_e_histo[3]; 
  fakeRate_e_histo[0]= new TH1D("fake_rate_e_histo_eta1","",nBinMu,newBins_e1);
  fakeRate_e_histo[1]= new TH1D("fake_rate_e_histo_eta2","",nBinMu,newBins_e1);
  fakeRate_e_histo[2]= new TH1D("fake_rate_e_histo_eta3","",nBinMu3,newBins_e3);  
  for (int i=0; i< 3; i++){
    if (i ==0 || i ==1) from_TGraph_to_TH1D(*&fakeRate_e[i],*&fakeRate_e_histo[i],nBinMu);
    if (i ==2) from_TGraph_to_TH1D(*&fakeRate_e[i],*&fakeRate_e_histo[i],nBinMu3);
  }
  //std::cout<<"                             check first bin eta1: "<< fakeRate_e_histo[0]->GetBinContent(fakeRate_e_histo[0]->FindBin(20))<<std::endl;

  double momentum = lptcone;
  double factore=0;
  if (momentum < 100){
    if (eta == 1)  factore = fakeRate_e_histo[0]->GetBinContent(fakeRate_e_histo[0]->FindBin(momentum));
    if (eta == 2)  factore = fakeRate_e_histo[1]->GetBinContent(fakeRate_e_histo[1]->FindBin(momentum));
    if (eta == 3)  factore = fakeRate_e_histo[2]->GetBinContent(fakeRate_e_histo[2]->FindBin(momentum));
  }//eta1
  else {
    if (eta == 1)  factore = fakeRate_e_histo[0]->GetBinContent(fakeRate_e_histo[0]->FindBin(90));
    if (eta == 2)  factore = fakeRate_e_histo[1]->GetBinContent(fakeRate_e_histo[1]->FindBin(90));
    if (eta == 3)  factore = fakeRate_e_histo[2]->GetBinContent(fakeRate_e_histo[2]->FindBin(90));
  }  
  delete fakeRate_e_histo[0];
  delete fakeRate_e_histo[1];
  delete fakeRate_e_histo[2];
  //std::cout<<"                             it is emu: factor "<<factore<<std::endl;

  return factore;  
}

//==================================================================
double Analysis_mc::dFR_factor_mumu(TGraphAsymmErrors *fakeRate_e[3],                             
				    int eta,
				    double lptcone
				    ){
    
  const int nBinMu=5;
  //const int nBinMu3=4;
  Double_t newBins_e1[nBinMu+1] = {10,25,35,55,70, 100};
  //  std::cout<<"                             it is mumu: eta and pt  "<<eta<< "   "<<lptcone<< std::endl;

  TH1D *fakeRate_e_histo[3];  
  fakeRate_e_histo[0]= new TH1D("fake_rate_e_histo_eta1","",nBinMu,newBins_e1);
  fakeRate_e_histo[1]= new TH1D("fake_rate_e_histo_eta2","",nBinMu,newBins_e1);
  fakeRate_e_histo[2]= new TH1D("fake_rate_e_histo_eta3","",nBinMu,newBins_e1);  
  for (int i=0; i< 3; i++){
    from_TGraph_to_TH1D(*&fakeRate_e[i],*&fakeRate_e_histo[i],nBinMu);
  }

  //std::cout<<"                             check first bin eta1: "<< fakeRate_e_histo[0]->GetBinContent(fakeRate_e_histo[0]->FindBin(20))<<std::endl;
  
  double momentum = lptcone;
  double factore=0;
  if (momentum < 100){
    if (eta == 1)  factore = fakeRate_e_histo[0]->GetBinContent(fakeRate_e_histo[0]->FindBin(momentum));
    if (eta == 2)  factore = fakeRate_e_histo[1]->GetBinContent(fakeRate_e_histo[1]->FindBin(momentum));
    if (eta == 3)  factore = fakeRate_e_histo[2]->GetBinContent(fakeRate_e_histo[2]->FindBin(momentum));
  }//eta1
  else {
    if (eta == 1)  factore = fakeRate_e_histo[0]->GetBinContent(fakeRate_e_histo[0]->FindBin(90));
    if (eta == 2)  factore = fakeRate_e_histo[1]->GetBinContent(fakeRate_e_histo[1]->FindBin(90));
    if (eta == 3)  factore = fakeRate_e_histo[2]->GetBinContent(fakeRate_e_histo[2]->FindBin(90));
  }  
  delete fakeRate_e_histo[0];
  delete fakeRate_e_histo[1];
  delete fakeRate_e_histo[2];
  //   std::cout<<"                             it is mumu: factor "<<factore<<std::endl;

  return factore;  
}


//______________________________________________
double Analysis_mc::sFR_factor_e (TGraphAsymmErrors *fakeRate[3],                             
				  double eta,                          
				  double lptcone
				  ){
  eta = fabs(eta);
  TH1D *fakeRate_histo[3];
  Double_t newBins[6] = {10, 15, 25, 35, 50, 70};
  fakeRate_histo[0]= new TH1D("fake_rate_e_histo_eta1","",5,newBins);
  fakeRate_histo[1]= new TH1D("fake_rate_e_histo_eta2","",5,newBins);
  fakeRate_histo[2]= new TH1D("fake_rate_e_histo_eta3","",5,newBins);
  for (int i=0; i< 3; i++){
    from_TGraph_to_TH1D(*&fakeRate[i],*&fakeRate_histo[i],5);
  }
  double momentum = lptcone;
  double factore=0;
  if (momentum < 70){
    if (eta < 0.8){
      factore = fakeRate_histo[0]->GetBinContent(fakeRate_histo[0]->FindBin(momentum));
    }//eta1
    else if (eta > 0.8 && eta<1.479){
      factore = fakeRate_histo[1]->GetBinContent(fakeRate_histo[1]->FindBin(momentum));
    }//eta1
    else {
      factore = fakeRate_histo[2]->GetBinContent(fakeRate_histo[2]->FindBin(momentum));
    }//eta1
  }// <70
  else {
    if (eta < 0.8){
      factore = fakeRate_histo[0]->GetBinContent(fakeRate_histo[0]->FindBin(68));
    }//eta1
    else if (eta > 0.8 && eta<1.479){
      factore = fakeRate_histo[1]->GetBinContent(fakeRate_histo[1]->FindBin(68));
    }//eta1
    else {
      factore = fakeRate_histo[2]->GetBinContent(fakeRate_histo[2]->FindBin(68));
    }//eta1
  }
 
  delete fakeRate_histo[0];
  delete fakeRate_histo[1];
  delete fakeRate_histo[2];
  return factore;
}


//______________________________________________
double Analysis_mc::sFR_factor_mu (TGraphAsymmErrors *fakeRate[3],                             
				   double eta,                          
				   double lptcone
				   ){
  eta = fabs(eta);
  TH1D *fakeRate_histo[3];
  Double_t newBins[7] = {5,10, 15, 25, 35, 50, 70};
  fakeRate_histo[0]= new TH1D("fake_rate_e_histo_eta1","",6,newBins);
  fakeRate_histo[1]= new TH1D("fake_rate_e_histo_eta2","",6,newBins);
  fakeRate_histo[2]= new TH1D("fake_rate_e_histo_eta3","",6,newBins);
  for (int i=0; i< 3; i++){
    from_TGraph_to_TH1D(*&fakeRate[i],*&fakeRate_histo[i],6);
  }
  double momentum = lptcone;
  double factore=0;
  if (momentum < 70){
    if (eta < 0.8){
      factore = fakeRate_histo[0]->GetBinContent(fakeRate_histo[0]->FindBin(momentum));
    }//eta1
    else if (eta > 0.8 && eta<1.479){
      factore = fakeRate_histo[1]->GetBinContent(fakeRate_histo[1]->FindBin(momentum));
    }//eta1
    else {
      factore = fakeRate_histo[2]->GetBinContent(fakeRate_histo[2]->FindBin(momentum));
    }//eta1
  }// <70
  else {
    if (eta < 0.8){
      factore = fakeRate_histo[0]->GetBinContent(fakeRate_histo[0]->FindBin(68));
    }//eta1
    else if (eta > 0.8 && eta<1.479){
      factore = fakeRate_histo[1]->GetBinContent(fakeRate_histo[1]->FindBin(68));
    }//eta1
    else {
      factore = fakeRate_histo[2]->GetBinContent(fakeRate_histo[2]->FindBin(68));
    }//eta1
  }
 
  delete fakeRate_histo[0];
  delete fakeRate_histo[1];
  delete fakeRate_histo[2];
  return factore;
}

//___________________________________________________________________

void Analysis_mc::from_TGraph_to_TH1D (TGraphAsymmErrors *graph, TH1D *histo, int number_point){
    
  const int numero= number_point;
    
  double x_graph[numero];
  double y_graph[numero];
  for (int i =0; i <number_point; i ++){
    x_graph[i]=0;
    y_graph[i]=0;
  }
  
  for (int i =0; i <number_point; i ++){
    graph -> GetPoint(i, x_graph[i], y_graph[i]);
    //std::cout<<"                                                          "<<i<<") "<<x_graph[i]<<"   "<<y_graph[i]<<std::endl;
    histo->SetBinContent (i+1, x_graph[i],  y_graph[i]);        
  }
}




//___________________________________________________________________
void Analysis_mc::printDataCard(const double obsYield, const double sigYield, const std::string& sigName, const double* bkgYield, const unsigned nBkg, const std::string* bkgNames, const std::vector<std::vector<double> >& systUnc, const unsigned nSyst, const std::string* systNames, const std::string* systDist, const std::string& cardName, const bool shapeCard, const std::string& shapeFileName,int number_bin){

  //stream for writing card
  std::ofstream card;

  //add .txt to name if no file extension is given
  card.open(cardName + ((cardName.find(".") == std::string::npos) ? ".txt" : "") ); //add .txt to name if no file extension is given

  //define number of channels, background sources and systematics
  card << "imax 1 number of channels \n";
  card << "jmax " << nBkg << " number of backgrounds \n";
  card << "kmax " << nSyst << " number of nuisance parameters (sources of systematical uncertainties) \n";
  card << "---------------------------------------------------------------------------------------- \n";

  //define the channels and the number of observed events
  card << "bin bin1 \n";
  card << "observation " << obsYield << "\n";

  //define all backgrounds and their yields
  card << "---------------------------------------------------------------------------------------- \n";
  if(shapeCard){
    card << "shapes * * " << shapeFileName + ".root  $PROCESS $PROCESS_$SYSTEMATIC\n";
    card << "---------------------------------------------------------------------------------------- \n";
  }
  card << "bin   ";
  for(unsigned proc = 0; proc < nBkg + 1; ++proc){
    card << "	" << "bin1";
  }
  card << "\n";
  card << "process";
  card << "	" << sigName;
  for(unsigned bkg = 0; bkg < nBkg; ++bkg){
    card << "	" << bkgNames[bkg];
  }
  card << "\n";
  card << "process";
  for(unsigned bkg = 0; bkg < nBkg + 1; ++bkg){
    card << "	" << bkg;
  }
  card << "\n";
  card <<	"rate";
  card << "	" << sigYield;
  for(unsigned bkg = 0; bkg < nBkg; ++bkg){
    if(bkgYield[bkg] <= 0) card << "	" << "0.00";
    else card << "	" << bkgYield[bkg];
  }
  card << "\n";
  card << "---------------------------------------------------------------------------------------- \n";

  //define sources of systematic uncertainty, what distibution they follow and how large their effect is
  for(unsigned syst = 0; syst < nSyst; ++syst){
    if (number_bin<10 )card << systNames[syst]+"0"+std::to_string(number_bin) << "	" << systDist[syst];
    if (number_bin>=10)card << systNames[syst]+std::to_string(number_bin) << "	" << systDist[syst];

    for(unsigned proc = 0; proc < nBkg + 1; ++proc){
      card << "	";
      if(systUnc[syst][proc] == 0) card << "-";
      else card << systUnc[syst][proc];
    }
    card << "\n";
  }
  card.close();		
}



