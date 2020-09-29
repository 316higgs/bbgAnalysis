#!/usr/bin/python
import os

STAGING=532

for i in range(STAGING):
	#if(i<9):
		#cmd = 'bsub -q s -o std.log -e err.log \"Marlin 250GeV_eeqq_restorer_7637_0000'+str(i+1)+'.xml\"'
		#print(cmd)
		#os.system(cmd)
	#if(i>=9 and i<99):
		#cmd = 'bsub -q s -o std.log -e err.log \"Marlin 250GeV_eeqq_restorer_7637_000'+str(i+1)+'.xml\"'
		#print(cmd)
		#os.system(cmd)
	#if(i>=523 and i<532):
		#cmd = 'bsub -q s -o std.log -e err.log \"Marlin 250GeV_eeqq_restorer_7637_00'+str(i+1)+'.xml\"'
		#print(cmd)
		#os.system(cmd)
    if(i==339 or i==352 or i==375 or i==421 or i==470 or i==486 or i==516):
		cmd = 'bsub -q s -o std.log -e err.log \"Marlin 250GeV_eeqq_restorer_7637_00'+str(i+1)+'.xml\"'
		print(cmd)
		os.system(cmd)
