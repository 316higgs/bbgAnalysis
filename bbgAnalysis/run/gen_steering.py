#!/usr/bin/python
import os, shutil

# Configurations
# sample files
SAMPLEDIR="/hsm/ilc/grid/storm/prod/ilc/mc-dbd/ild/dst-merged/250-TDR_ws/2f-highM_Z_hadronic/ILD_o1_v05/v01-16-p10_250/"
# staging file
LISTDIR="/home/ilc/sedi/Marlin/BBG_Analysis/TestbbgProcessor/run"
# Run directly
RUNDIR="/home/ilc/sedi/Marlin/BBG_Analysis/TestbbgProcessor/run/250GeV_eL_restorer"


# Count sample files in /home/ilc/sedi/Marlin/BBG_Analysis/TestbbgProcessor/run/sedi_20200904.lst
samplefiles = sum([1 for _ in open(os.path.join(LISTDIR,"sedi_20200925.lst"))])

# Clean up
files = os.listdir(RUNDIR)
for i in range(len(files)):
	file = files[i]
	sample = "7637" in file
	if(sample==True):
		os.remove(file)


# i runs 0 to samplefiles-1
for i in range(samplefiles):
	if (os.path.exists(os.path.join(RUNDIR,"250GeV_eeqq_restorer_Xnum.xml"))==True):
		os.remove(os.path.join(RUNDIR,"250GeV_eeqq_restorer_Xnum.xml"))
	if (os.path.exists(os.path.join(RUNDIR,"250GeV_eeqq_restorer.xml"))==True):
		shutil.copy(os.path.join(RUNDIR,"250GeV_eeqq_restorer.xml"),os.path.join(RUNDIR,"250GeV_eeqq_restorer_Xnum.xml"))

		if (i<9):
			prefixnumber = "7637_0000"
			filename = "250GeV_eeqq_restorer_"+prefixnumber+str(i+1)+".xml"
			os.rename(os.path.join(RUNDIR,"250GeV_eeqq_restorer_Xnum.xml"),filename)
			steeringfile = os.path.join(RUNDIR,"250GeV_eeqq_restorer_"+prefixnumber+str(i+1)+".xml")
			with open(steeringfile,'r') as f:
				contents = f.read()
				contents = contents.replace("Xnum",prefixnumber+str(i+1))
			with open(steeringfile,'w') as f:
				f.write(contents)

		if (i>=9 and i<99):
			prefixnumber = "7637_000"
			filename = "250GeV_eeqq_restorer_"+prefixnumber+str(i+1)+".xml"
			os.rename(os.path.join(RUNDIR,"250GeV_eeqq_restorer_Xnum.xml"),filename)
			steeringfile = os.path.join(RUNDIR,"250GeV_eeqq_restorer_"+prefixnumber+str(i+1)+".xml")
			with open(steeringfile,'r') as f:
				contents = f.read()
				contents = contents.replace("Xnum",prefixnumber+str(i+1))
			with open(steeringfile,'w') as f:
				f.write(contents)

		if (i>=99 and i<samplefiles):
			prefixnumber = "7637_00"
			filename = "250GeV_eeqq_restorer_"+prefixnumber+str(i+1)+".xml"
			os.rename(os.path.join(RUNDIR,"250GeV_eeqq_restorer_Xnum.xml"),filename)
			steeringfile = os.path.join(RUNDIR,"250GeV_eeqq_restorer_"+prefixnumber+str(i+1)+".xml")
			with open(steeringfile,'r') as f:
				contents = f.read()
				contents = contents.replace("Xnum",prefixnumber+str(i+1))
			with open(steeringfile,'w') as f:
				f.write(contents)



