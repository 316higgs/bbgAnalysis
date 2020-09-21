#include <TFile.h>
#include <TStyle.h>
#include <TF1.h>
#include <TCanvas.h>
#include <TColor.h>

void radiative_return_check() {
    //TFile* fin = new TFile("radiative_return_cut_bb.root");
    TFile* fin = new TFile("radiative_return_cut_ll.root");

    gStyle -> SetOptTitle(1);
    gStyle -> SetTitleBorderSize(0);
    gStyle -> SetTitleStyle(0);
    gStyle -> SetMarkerSize(0);

    //MC ISR energy
    TH1F* hist_isr_1 = (TH1F*)fin->Get("hist_isr_cut_0");
    hist_isr_1 -> SetXTitle("ISR Energy(GeV)");
    hist_isr_1 -> SetYTitle("Entries");
    TH1F* hist_isr_2 = (TH1F*)fin->Get("hist_isr_cut_1");
    TH1F* hist_isr_3 = (TH1F*)fin->Get("hist_isr_cut_2");
    TH1F* hist_isr_4 = (TH1F*)fin->Get("hist_isr_cut_3");
    hist_isr_1 -> SetLineWidth(2);
    hist_isr_2 -> SetLineWidth(2);
    hist_isr_3 -> SetLineWidth(2);
    hist_isr_4 -> SetLineWidth(2);
    hist_isr_1 -> SetLineStyle(1);
    hist_isr_2 -> SetLineStyle(2);
    hist_isr_3 -> SetLineStyle(7);
    hist_isr_4 -> SetLineStyle(4);
    hist_isr_1 -> SetLineColor(kGray+3);
    hist_isr_2 -> SetLineColor(kGray+3);
    hist_isr_3 -> SetLineColor(kGray+3);
    hist_isr_4 -> SetLineColor(kGray+3);

    //Kv
    TH1F* hist_Kv_1 = (TH1F*)fin->Get("hist_Kv_cut_0");
    hist_Kv_1 -> SetXTitle("Kv(GeV)");
    hist_Kv_1 -> SetYTitle("Entries");
    TH1F* hist_Kv_2 = (TH1F*)fin->Get("hist_Kv_cut_1");
    TH1F* hist_Kv_3 = (TH1F*)fin->Get("hist_Kv_cut_2");
    TH1F* hist_Kv_4 = (TH1F*)fin->Get("hist_Kv_cut_3");
    hist_Kv_1 -> SetLineWidth(2);
    hist_Kv_2 -> SetLineWidth(2);
    hist_Kv_3 -> SetLineWidth(2);
    hist_Kv_4 -> SetLineWidth(2);
    hist_Kv_1 -> SetLineStyle(1);
    hist_Kv_2 -> SetLineStyle(2);
    hist_Kv_3 -> SetLineStyle(7);
    hist_Kv_4 -> SetLineStyle(4);
    hist_Kv_1 -> SetLineColor(kOrange-8);
    hist_Kv_2 -> SetLineColor(kOrange-8);
    hist_Kv_3 -> SetLineColor(kOrange-8);
    hist_Kv_4 -> SetLineColor(kOrange-8);

    //Residual
    TH1F* hist_residual_1 = (TH1F*)fin->Get("hist_residual_cut_0");
    hist_residual_1 -> SetXTitle("250-PFOenergy(GeV)");
    hist_residual_1 -> SetYTitle("Entries");
    TH1F* hist_residual_2 = (TH1F*)fin->Get("hist_residual_cut_1");
    TH1F* hist_residual_3 = (TH1F*)fin->Get("hist_residual_cut_2");
    TH1F* hist_residual_4 = (TH1F*)fin->Get("hist_residual_cut_3");
    hist_residual_1 -> SetLineWidth(2);
    hist_residual_2 -> SetLineWidth(2);
    hist_residual_3 -> SetLineWidth(2);
    hist_residual_4 -> SetLineWidth(2);
    hist_residual_1 -> SetLineStyle(1);
    hist_residual_2 -> SetLineStyle(2);
    hist_residual_3 -> SetLineStyle(7);
    hist_residual_4 -> SetLineStyle(4);
    hist_residual_1 -> SetLineColor(kOrange-3);
    hist_residual_2 -> SetLineColor(kOrange-3);
    hist_residual_3 -> SetLineColor(kOrange-3);
    hist_residual_4 -> SetLineColor(kOrange-3);

    TCanvas* canvas = new TCanvas("canvas", "canvas", 2400, 1200);
    canvas->Divide(1,3);

    canvas -> cd(1);
    hist_isr_1 -> Draw();
    hist_isr_2 -> Draw("same");
    hist_isr_3 -> Draw("same");
    hist_isr_4 -> Draw("same");
    TLegend* legend = new TLegend(0.2, 0.3, 0.4, 0.2);
    legend -> AddEntry(hist_isr_1, "STEP0", "l");
    legend -> AddEntry(hist_isr_2, "STEP1", "l");
    legend -> AddEntry(hist_isr_3, "STEP2&3", "l");
    legend -> AddEntry(hist_isr_4, "STEP2&3+|costheta|<0.8", "l");
    legend -> SetLineColor(0);
    legend -> SetFillColor(0);
    legend -> SetShadowColor(0);
    legend -> Draw();

    canvas -> cd(2);
    hist_Kv_1 -> Draw();
    hist_Kv_2 -> Draw("same");
    hist_Kv_3 -> Draw("same");
    hist_Kv_4 -> Draw("same");
    TLegend* legend = new TLegend(0.2, 0.3, 0.4, 0.2);
    legend -> AddEntry(hist_Kv_1, "STEP0", "l");
    legend -> AddEntry(hist_Kv_2, "STEP1", "l");
    legend -> AddEntry(hist_Kv_3, "STEP2&3", "l");
    legend -> AddEntry(hist_Kv_4, "STEP2&3+|costheta|<0.8", "l");
    legend -> SetLineColor(0);
    legend -> SetFillColor(0);
    legend -> SetShadowColor(0);
    legend -> Draw();

    canvas -> cd(3);
    hist_residual_1 -> Draw();
    hist_residual_2 -> Draw("same");
    hist_residual_3 -> Draw("same");
    hist_residual_4 -> Draw("same");
    TLegend* legend = new TLegend(0.2, 0.3, 0.4, 0.2);
    legend -> AddEntry(hist_residual_1, "STEP0", "l");
    legend -> AddEntry(hist_residual_2, "STEP1", "l");
    legend -> AddEntry(hist_residual_3, "STEP2&3", "l");
    legend -> AddEntry(hist_residual_4, "STEP2&3+|costheta|<0.8", "l");
    legend -> SetLineColor(0);
    legend -> SetFillColor(0);
    legend -> SetShadowColor(0);
    legend -> Draw();
}