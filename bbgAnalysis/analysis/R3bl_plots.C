#include <TPaveStats.h>
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <TString.h>
#include <iostream>
#include <TFitResult.h>
#include <TF1.h>
#include <TSpectrum.h>
#include <sstream>
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include "TH1.h"
#include "TF1.h"
#include "TROOT.h"
#include "TStyle.h"
#include "TLatex.h"
#include "TMath.h"
#include "TSystemFile.h"
#include "../style/Style.C"
#include "../style/Labels.C"


void R3bl_plots() {

  TString folder="./";

  //TString filename = folder+"R3_cambridge_signal_eR.root";
  //TFile *f = new TFile(filename);
  TFile* f = new TFile("output_files/output_cambridge_merged_restorer_v02-01-02.root");

  //PS level
  TGraphErrors *R3b_ps[4];
  TGraphErrors *R3l_ps[4];
  TGraphErrors *R3bl_ps[4];

  //Hadron level
  TGraphErrors* R3b_hadron[4];
  TGraphErrors* R3l_hadron[4];
  TGraphErrors* R3bl_hadron[4];

  //Reco level
  TGraphErrors *R3b_reco[4];
  TGraphErrors *R3l_reco[4];
  TGraphErrors *R3bl_reco[4];

  double yR3bl_ps[4], yR3bl_reco[4], yR3bl_hadron[4];
  double eyR3bl_ps[4], eyR3bl_reco[4], eyR3bl_hadron[4];
  double x[4];

  for(int i=0; i<4; i++ ) {
    //PS level
    R3b_ps[i]=(TGraphErrors*)f->Get(TString::Format("R3b_PS_STEP%i",i));
    R3l_ps[i]=(TGraphErrors*)f->Get(TString::Format("R3l_PS_STEP%i",i));
    R3bl_ps[i]=(TGraphErrors*)f->Get(TString::Format("R3bl_PS_STEP%i",i));

    Double_t *y_ps = R3bl_ps[i]->GetY();
    Double_t *ey_ps = R3bl_ps[i]->GetEY();
    yR3bl_ps[i]=y_ps[10];   //R3bl for each ycuts
    eyR3bl_ps[i]=ey_ps[10]; //error

    //Hadron level
    R3b_hadron[i]=(TGraphErrors*)f->Get(TString::Format("R3b_Hadron_STEP%i",i));
    R3l_hadron[i]=(TGraphErrors*)f->Get(TString::Format("R3l_Hadron_STEP%i",i));
    R3bl_hadron[i]=(TGraphErrors*)f->Get(TString::Format("R3bl_Hadron_STEP%i",i));

    Double_t *y_hadron = R3bl_hadron[i]->GetY();
    Double_t *ey_hadron = R3bl_hadron[i]->GetEY();
    yR3bl_hadron[i]=y_hadron[10];   //R3bl for each ycuts
    eyR3bl_hadron[i]=ey_hadron[10]; //error

    //Reco level
    R3b_reco[i]=(TGraphErrors*)f->Get(TString::Format("R3b_Reco_STEP%i",i));
    R3l_reco[i]=(TGraphErrors*)f->Get(TString::Format("R3l_Reco_STEP%i",i));
    R3bl_reco[i]=(TGraphErrors*)f->Get(TString::Format("R3bl_Reco_STEP%i",i));

    Double_t *y_reco = R3bl_reco[i]->GetY();
    Double_t *ey_reco = R3bl_reco[i]->GetEY();
    yR3bl_reco[i]=y_reco[10];   //R3bl for each ycuts
    eyR3bl_reco[i]=ey_reco[10]; //error

    x[i]=i;
  }

  TCanvas* canvas5 = new TCanvas("R3bl_001", "R3bl_001", 800, 800);
  canvas5->cd();

  const Int_t LEVEL_PS=1;
  const Int_t LEVEL_HAD=1;
  const Int_t LEVEL_REC=1;
  Double_t r3bl_PS[LEVEL_PS] = {yR3bl_ps[3]};
  Double_t er3bl_PS[LEVEL_PS] = {eyR3bl_ps[3]};
  Double_t level_PS[LEVEL_PS] = {0.};
  Double_t elevel_PS[LEVEL_PS] = {0.};

  Double_t r3bl_HAD[LEVEL_HAD] = {yR3bl_hadron[3]};
  Double_t er3bl_HAD[LEVEL_HAD] = {eyR3bl_hadron[3]};
  Double_t level_HAD[LEVEL_HAD] = {1.};
  Double_t elevel_HAD[LEVEL_HAD] = {0.};

  Double_t r3bl_REC[LEVEL_REC] = {yR3bl_reco[3]};
  //std::cout << r3bl_REC[0] << std::endl;
  Double_t er3bl_REC[LEVEL_REC] = {eyR3bl_reco[3]};
  Double_t level_REC[LEVEL_REC] = {2.};
  Double_t elevel_REC[LEVEL_REC] = {0.};

  Double_t theo[LEVEL_PS] = {0.995};
  Double_t etheo[LEVEL_PS] = {0.0005};

  TGraphErrors *g_r3bl_PS = new TGraphErrors(LEVEL_PS, r3bl_PS, level_PS, er3bl_PS, elevel_PS);
  TGraphErrors *g_r3bl_HAD = new TGraphErrors(LEVEL_HAD, r3bl_HAD, level_HAD, er3bl_HAD, elevel_HAD);
  TGraphErrors *g_r3bl_REC = new TGraphErrors(LEVEL_REC, r3bl_REC, level_REC, er3bl_REC, elevel_REC);
  TGraphErrors *g_theo = new TGraphErrors(LEVEL_PS, theo, level_PS, etheo, elevel_PS);
  TLegend* legend = new TLegend(0.15,0.7,0.4,0.88);
  legend->SetTextSize(0.035);
  TH1F* frame = gPad->DrawFrame(0.97, -0.5, 1.06, 0.5);
  //frame -> SetYTitle("LEVEL");
  frame -> SetLabelOffset(1.3, "Y");
  frame->GetYaxis() -> SetTickSize(0);
  TLatex* xlabel = new TLatex();
  xlabel -> SetTextSize(0.035);
  xlabel -> DrawLatexNDC(0.68,0.02,"R_{3}^{bl}(ycut=0.01)");

  //g_r3bl_PS->GetYaxis()->SetTitle("LEVEL");
  //g_r3bl_PS->GetYaxis()->SetRangeUser(-0.5,4);
  //g_r3bl_PS->GetXaxis()->SetTitle("R_{3}^{bl}");
  //g_r3bl_PS->GetXaxis()->SetRangeUser(1.0,2.0);

  g_r3bl_PS->SetLineWidth(3);
  g_r3bl_PS->SetMarkerStyle(21);
  g_r3bl_PS->SetMarkerSize(2);
  g_r3bl_PS->SetMarkerColor(kPink-8);
  g_r3bl_PS->SetLineColor(kPink-8);

  g_r3bl_HAD->SetLineWidth(3);
  g_r3bl_HAD->SetMarkerStyle(20);
  g_r3bl_HAD->SetMarkerSize(2);
  g_r3bl_HAD->SetMarkerColor(kTeal+4);
  g_r3bl_HAD->SetLineColor(kTeal+4);

  g_r3bl_REC->SetLineWidth(3);
  g_r3bl_REC->SetMarkerStyle(22);
  g_r3bl_REC->SetMarkerSize(2);
  g_r3bl_REC->SetMarkerColor(kAzure+2);
  g_r3bl_REC->SetLineColor(kAzure+2);

  g_theo->SetLineWidth(3);
  g_theo->SetMarkerStyle(23);
  g_theo->SetMarkerSize(2);
  g_theo->SetMarkerColor(kOrange-8);
  g_theo->SetLineColor(kOrange-8);

  g_r3bl_PS->Draw("P");
  //g_r3bl_HAD->Draw("SAMEP");
  //g_r3bl_REC->Draw("SAMEP");
  g_theo->Draw("SAMEP");

  legend -> AddEntry(g_r3bl_PS, "STEP2&3 + |costheta|<0.8", "pl");
  //legend -> AddEntry(g_r3bl_HAD, "STEP2&3 + |costheta|<0.8", "pl");
  //legend -> AddEntry(g_r3bl_REC, "STEP2&3 + |costheta|<0.8", "pl");
  /*legend -> AddEntry(g_r3bl_PS, "STEP2&3", "pl");
  legend -> AddEntry(g_r3bl_HAD, "STEP2&3", "pl");
  legend -> AddEntry(g_r3bl_REC, "STEP2&3", "pl");*/
  legend -> AddEntry(g_theo, "Theory(0.995+-0.0005)", "pl");
  legend -> SetLineColor(0);
  legend -> SetFillColor(0);
  legend -> SetFillStyle(0);
  legend -> SetLineStyle(0);
  legend -> SetShadowColor(0);
  legend -> Draw();


  //R3bl for each steps (assume @ycut=0.01)
  /*TGraphErrors *R3_ps_step = new TGraphErrors(4,yR3bl_ps,x,eyR3bl_ps,0);
  TGraphErrors *R3_reco_step = new TGraphErrors(4,yR3bl_reco,x,eyR3bl_reco,0);
  TGraphErrors* R3_hadron_step = new TGraphErrors(4,yR3bl_hadron,x,eyR3bl_hadron,0);

					      
  SetQQbarStyle();
  gStyle->SetOptFit(0); 
  gStyle->SetOptStat(0);
  gStyle->SetOptTitle(0);
  
  gStyle->SetTitleBorderSize(0);
  gStyle->SetTitleStyle(0);
  gStyle->SetTitleX(0.2);
  gStyle->SetMarkerSize(1.5);*/
  // TGaxis::SetMaxDigits(2); 


  //PS level
  /*TCanvas * canvas1 = new TCanvas("R3bl_ps","R3bl_ps",800,800);
  canvas1->cd(1);
  //  gPad->SetLogy();
  TLegend *leg1 = new TLegend(0.3,0.2,0.65,0.35);
  leg1->SetTextSize(0.035);
  leg1->SetTextFont(42);

  R3bl_ps[0]->SetLineColor(kGray+2);
  R3bl_ps[1]->SetLineColor(kRed-4);
  R3bl_ps[2]->SetLineColor(kTeal+4);
  R3bl_ps[3]->SetLineColor(kAzure+2);
  
  for(int i=0; i<4; i++ ) {
    if(i==0) {
      R3bl_ps[i]->GetYaxis()->SetTitle("R_{3}^{bl}");
      R3bl_ps[i]->GetYaxis()->SetRangeUser(0.7,1.4);
      R3bl_ps[i]->GetXaxis()->SetTitle("y_{cut}");
    }
    //int color = 1+i;
    //R3bl_ps[i]->SetLineColor(kRed+color);
    R3bl_ps[i]->SetLineWidth(2);
    R3bl_ps[i]->SetLineStyle(1);
    if(i==0) R3bl_ps[i]->Draw("ac");
    else R3bl_ps[i]->Draw("c");

    leg1->AddEntry(R3bl_ps[i],TString::Format("PS - Cambridge --> Selection Step %i",i),"l");
  }

  leg1->SetFillStyle(0);
  leg1->SetLineWidth(0);
  leg1->SetLineColor(0);
  //  leg1->SetShadowColor(0);
  leg1->SetBorderSize(0);
  leg1->Draw();


  // ---------------------------------------

  //Reco level
  TCanvas * canvas2 = new TCanvas("R3bl_reco","R3bl_reco",800,800);
  canvas2->cd(1);
  //  gPad->SetLogy();
  TLegend *leg2 = new TLegend(0.3,0.2,0.65,0.35);
  leg2->SetTextSize(0.035);
  leg2->SetTextFont(42);

  R3bl_reco[0]->SetLineColor(kGray+2);
  R3bl_reco[1]->SetLineColor(kRed-4);
  R3bl_reco[2]->SetLineColor(kTeal+4);
  R3bl_reco[3]->SetLineColor(kAzure+2);
  
  for(int i=0; i<4; i++ ) {
    if(i==0) {
      R3bl_reco[i]->GetYaxis()->SetTitle("R_{3}^{bl}");
      R3bl_reco[i]->GetYaxis()->SetRangeUser(0.7,1.4);
      R3bl_reco[i]->GetXaxis()->SetTitle("y_{cut}");
    }
    //R3bl_reco[i]->SetLineColor(1+i);
    R3bl_reco[i]->SetLineWidth(2);
    R3bl_reco[i]->SetLineStyle(1);
    if(i==0) R3bl_reco[i]->Draw("ac");
    else R3bl_reco[i]->Draw("c");

    leg2->AddEntry(R3bl_reco[i],TString::Format("RECO - Cambridge --> Selection Step %i",i),"l");
  }

  leg2->SetFillStyle(0);
  leg2->SetLineWidth(0);
  leg2->SetLineColor(0);
  //  leg2->SetShadowColor(0);
  leg2->SetBorderSize(0);
  leg2->Draw();


  // ---------------------------------------

  //Hadron level plot
  TCanvas * canvas3 = new TCanvas("R3bl_hadron","R3bl_hadron",800,800);
  canvas3->cd(1);
  //  gPad->SetLogy();
  TLegend *leg3 = new TLegend(0.3,0.2,0.65,0.35);
  leg3->SetTextSize(0.035);
  leg3->SetTextFont(42);

  R3bl_hadron[0]->SetLineColor(kGray+2);
  R3bl_hadron[1]->SetLineColor(kRed-4);
  R3bl_hadron[2]->SetLineColor(kTeal+4);
  R3bl_hadron[3]->SetLineColor(kAzure+2);
  
  for(int i=0; i<4; i++ ) {
    if(i==0) {
      R3bl_hadron[i]->GetYaxis()->SetTitle("R_{3}^{bl}");
      R3bl_hadron[i]->GetYaxis()->SetRangeUser(0.7,1.4);
      R3bl_hadron[i]->GetXaxis()->SetTitle("y_{cut}");
    }
    //R3bl_hadron[i]->SetLineColor(1+i);
    R3bl_hadron[i]->SetLineWidth(2);
    R3bl_hadron[i]->SetLineStyle(1);
    if(i==0) R3bl_hadron[i]->Draw("ac");
    else R3bl_hadron[i]->Draw("c");

    leg3->AddEntry(R3bl_hadron[i],TString::Format("hadron - Cambridge --> Selection Step %i",i),"l");
  }

  leg3->SetFillStyle(0);
  leg3->SetLineWidth(0);
  leg3->SetLineColor(0);
  //  leg1->SetShadowColor(0);
  leg3->SetBorderSize(0);
  leg3->Draw();*/


  // ---------------------------------------

  /*TCanvas* canvas4 = new TCanvas("R3bl_final", "R3bl_final", 800, 800);
  canvas4 -> cd();
  TLegend* leg4 = new TLegend(0.3,0.2,0.65,0.35);
  leg4 -> SetTextSize(0.033);
  leg4 -> SetTextFont(42);

  R3bl_ps[3]->GetYaxis()->SetTitle("R_{3}^{bl}");
  R3bl_ps[3]->GetYaxis()->SetRangeUser(0.7,1.4);
  R3bl_ps[3]->GetXaxis()->SetTitle("y_{cut}");

  R3bl_ps[3]->SetLineColor(kPink-8);
  R3bl_hadron[3]->SetLineColor(kTeal+4);
  R3bl_reco[3]->SetLineColor(kAzure+2);
  R3bl_ps[3]->SetLineWidth(2);
  R3bl_hadron[3]->SetLineWidth(2);
  R3bl_reco[3]->SetLineWidth(2);

  R3bl_ps[3]->Draw("AC");
  R3bl_hadron[3]->Draw("C");
  R3bl_reco[3]->Draw("C");

  leg4->AddEntry(R3bl_ps[3],TString::Format("PS - Cambridge :STEP2&3 + |costheta|<0.8"),"l");
  leg4->AddEntry(R3bl_hadron[3],TString::Format("Hadron - Cambridge :STEP2&3 + |costheta|<0.8"),"l");
  leg4->AddEntry(R3bl_reco[3],TString::Format("Reco - Cambridge :STEP2&3 + |costheta|<0.8"),"l");

  leg4->SetFillStyle(0);
  leg4->SetLineWidth(0);
  leg4->SetLineColor(0);
  //  leg1->SetShadowColor(0);
  leg4->SetBorderSize(0);
  leg4->Draw();*/

  // ---------------------------------------



  /*TCanvas * canvas3 = new TCanvas("R3bl_001","R3bl_001",800,800);
  canvas3->cd(1);
  //  gPad->SetLogy();
  TLegend *leg3 = new TLegend(0.2,0.7,0.55,0.85);
  leg3->SetTextSize(0.035);
  leg3->SetTextFont(42);
  
  
  R3_reco_step->GetYaxis()->SetTitle("Reconstruction step");
  R3_reco_step->GetXaxis()->SetRangeUser(0.5,1.4);
  R3_reco_step->GetYaxis()->SetRangeUser(-0.5,4);
  R3_reco_step->GetXaxis()->SetTitle("R_{3}^{bl}(ycut=0.01)");

  R3_reco_step->SetLineColor(1);
  R3_reco_step->SetLineWidth(2);
  R3_reco_step->SetLineStyle(1);
  R3_reco_step->SetMarkerStyle(21);
  R3_reco_step->Draw("aep");

  R3_ps_step->SetLineColor(2);
  R3_ps_step->SetLineWidth(2);
  R3_ps_step->SetLineStyle(1);
  R3_ps_step->SetMarkerStyle(22);
  R3_ps_step->SetMarkerColor(2);
  R3_ps_step->Draw("ep");
  
  leg3->AddEntry(R3_ps_step ,"Parton Shower","lep");
  leg3->AddEntry(R3_reco_step ,"Reco Objects","lep");

  

  leg3->SetFillStyle(0);
  leg3->SetLineWidth(0);
  leg3->SetLineColor(0);
  //  leg3->SetShadowColor(0);
  leg3->SetBorderSize(0);
  leg3->Draw();*/

}
