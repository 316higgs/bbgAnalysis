# bbg_Analysis
Processor and root codes are stored.

1. bbgAnalysis : 
  Here, files which is used in analsis are stored.
  analysis.cc include observable.cc, so when you can run it by
    root -l -q analysis.cc+\(\"input_files/7637_00001_restorer.root\",0.8,0.8\)
  for instance.
  
  In observable.cc, there are several functions for our analysis.
  1. AnalysisR3()
    This is the function to reproduce the R3bl respect with 50 points ycut values.
    Here, we're considering inclusive and exclusive mode.
    However, you should use the next function to obtain R3bl vs ycuts rather than this one.
  2. AnalysisR3_cambridge()
    This is also the function to reproduce the R3bl respect with 50 points ycuts.
    Here, we're considering inclusive jet-clustering method.
  3. AnalysisR3_y23()
    This is the function to reproduce the certain R3bl value for specified ycut.
    This function tends to inconsistent with above function, so you should may extract certain R3bl for a ycut from R3bl vs ycuts plot.
  4. Efficiencies()
    This is the function to calculate flavor-tagging efficiency and its polar angular distribution.
  5. matching()
    This is the function to check the matching between MC generated Partons and reconstructed jets.
  6. AnalysisY23()
    In this function, you can see some colrelation between each level y23 etc.
  7. PreSelection()
    This function gives event selection steps.
    STEP0 : No Selection
    STEP1 : Cut Radiative return
    STEP2 : Extract clean bbbar event by double flavor-tagging
    STEP3 : Extract clean uds-udsbar event.
    Additionally, we'll add the condition comes from efficiency study.
