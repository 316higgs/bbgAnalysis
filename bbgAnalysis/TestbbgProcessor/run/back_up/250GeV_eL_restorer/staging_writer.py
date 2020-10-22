#!/usr/bin/python
import os

# Configurations
# sample files
SAMPLEDIR="/hsm/ilc/grid/storm/prod/ilc/mc-dbd/ild/dst-merged/250-TDR_ws/2f-highM_Z_hadronic/ILD_o1_v05/v01-16-p10_250/"
# staging file
LISTDIR="/home/ilc/sedi/Marlin/BBG_Analysis/TestbbgProcessor/run"


# Open the file with writing mode for staging
# Output is /home/ilc/sedi/Marlin/BBG_Analysis/TestbbgProcessor/run/sedi_20200904.lst
stagingfile = open(os.path.join(LISTDIR,"sedi_20200904.lst"),"w")

# Obtain all files in SAMPLEDIR
pre_files = os.listdir(SAMPLEDIR)
n=0;

for i in range(len(os.listdir(SAMPLEDIR))):
    #print("[{0}]  ".format(i+1)+pre_files[i])
    # Extract the file which has eL.pR in its file name
    pre_name = pre_files[i]
    judge = "eL.pR" in pre_name
    if (judge==True):
    	n+=1
    	#print("  --->Considering file"+"\n")
    	stagingfile.write("/ghi/fs02"+SAMPLEDIR.split('/hsm')[-1]+pre_name+"\n")
else:
	print("File Number : {0}".format(len(os.listdir(SAMPLEDIR))))
	print("Extracted : {0}".format(n))
