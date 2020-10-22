#!/usr/bin/python
import os

# Run directly
RUNDIR="/home/ilc/sedi/Marlin/BBG_Analysis/TestbbgProcessor/run/250GeV_eL_restorer"
STAGING=532

for i in range(STAGING):
	if(i<9):
		cmd = 'bsub -q s  -e /group/ilc/users/sedi/errlogs/err_'+str(i+1)+'.log \"Marlin GeneratedXML/250GeV_eeqq_restorer_7637_0000'+str(i+1)+'.xml\"'
		print(cmd)
		os.system(cmd)
		#if(os.path.exists(os.path.join(RUNDIR,"Eventcount.root"))==True):
			#cmd2 = 'mv Eventcount.root Eventcount_7637_0000'+str(i+1)+'.root'
			#print(cmd2)
			#os.system(cmd2)
	if(i>=9 and i<99):
		cmd = 'bsub -q s  -e /group/ilc/users/sedi/errlogs/err_'+str(i+1)+'.log \"Marlin GeneratedXML/250GeV_eeqq_restorer_7637_000'+str(i+1)+'.xml\"'
		print(cmd)
		os.system(cmd)
	if(i>=99 and i<532):
		cmd = 'bsub -q s  -e /group/ilc/users/sedi/errlogs/err_'+str(i+1)+'.log \"Marlin GeneratedXML/250GeV_eeqq_restorer_7637_00'+str(i+1)+'.xml\"'
		print(cmd)
		os.system(cmd)
	#if(i==409 or i==410):
		#cmd = 'bsub -q s -o stdlogs/std_'+str(i)+'.log -e errlogs/err_'+str(i)+'.log \"Marlin GeneratedXML/250GeV_eeqq_restorer_7637_00'+str(i)+'.xml\"'
		#cmd = 'bsub -q s  -e /group/ilc/users/sedi/errlogs/err_'+str(i)+'.log \"Marlin GeneratedXML/250GeV_eeqq_restorer_7637_00'+str(i)+'.xml\"'
		#print(cmd)
		#os.system(cmd)
