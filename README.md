# bbg_Analysis
Processor and root codes are stored.

=== Contents
1. init_ilcsoft.sh   version : v02-00-01
2. data/             comes from https://ibox.ific.uv.es/nextcloud/index.php/s/aiyZyJFfzMHTNbq
3. lcfiweights/      comes from https://ibox.ific.uv.es/nextcloud/index.php/s/aiyZyJFfzMHTNbq
4. Gear file : GearOutput.xml   comes from QQbarAnalysis/scripts/
5. steering file : 250GeV_eeqq_norestorer.xml   sample file : 7637_00001.root
-> Run by Marlin 250GeV_eeqq_norestorer.xml
   -> Output 7637_00001_norestorer_v02-00-01.root
   
6. observable.cc
7. observable.h
8. analysis.cc
-> Run by root -l -q analysis.cc+\(\"input_files/7637_00001_restorer_v02-00-01.root\",0.8,0.8\)
　　-> Output R3_cambridge_signal.root
  
9. R3bl_plot.C
-> Run root -l R3bl_plot.C, and reproduce plots.
