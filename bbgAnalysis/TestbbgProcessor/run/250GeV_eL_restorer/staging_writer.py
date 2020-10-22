#!/usr/bin/python
import os, re

# Configurations
# sample files
SAMPLEDIR="/hsm/ilc/grid/storm/prod/ilc/mc-dbd/ild/dst-merged/250-TDR_ws/2f-highM_Z_hadronic/ILD_o1_v05/v01-16-p10_250/"
# staging file
LISTDIR="/home/ilc/sedi/Marlin/BBG_Analysis/TestbbgProcessor/run"
#STAGING=1


# Open the file with writing mode for staging
# Output is /home/ilc/sedi/Marlin/BBG_Analysis/TestbbgProcessor/run/sedi_20200904.lst
stagingfile = open(os.path.join(LISTDIR,"sedi_20200925.lst"),"w")

# Obtain all files in SAMPLEDIR
pre_files = os.listdir(SAMPLEDIR)
n=0
filelist=[]
for i in range(len(os.listdir(SAMPLEDIR))):
#for i in range(70):
    # Extract the file which has eL.pR in its file name
    pre_name = pre_files[i]
    judge = "eL.pR" in pre_name
    if (judge==True):
    	n+=1
        filelist.append("/ghi/fs02"+SAMPLEDIR.split('/hsm')[-1]+pre_name+"\n")

#for i in range(len(filelist)):
    #print(filelist[i])

m=0
num = lambda val : int(re.sub("\\D", "", val))
for i in range(len(sorted(filelist, key=num))):
#for i in range(STAGING):
    m+=1
    stagingfile.write(sorted(filelist, key=num)[i])

#else:
print("File Number : {0}".format(len(os.listdir(SAMPLEDIR))))
print("All sample file : {0}".format(n))
print("Wrote sample file : {0}".format(m))
