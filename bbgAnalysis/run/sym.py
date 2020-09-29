#!/usr/bin/python
import os

# sample files
SAMPLEDIR="/hsm/ilc/grid/storm/prod/ilc/mc-dbd/ild/dst-merged/250-TDR_ws/2f-highM_Z_hadronic/ILD_o1_v05/v01-16-p10_250/"
STAGING=50

pre_files = os.listdir(SAMPLEDIR)

for i in range(STAGING):
	if(i<9):
		sym = "ln -s "+SAMPLEDIR+"rv01-16-p10_250.sv01-14-01-p00.mILD_o1_v05.E250-TDR_ws.I110011.P2f-highM_z_h.eL.pR_dst_7637_0000"+str(i+1)+"_DST.slcio"
		os.system(sym)
	if(i>=9 and i<99):
		sym = "ln -s "+SAMPLEDIR+"rv01-16-p10_250.sv01-14-01-p00.mILD_o1_v05.E250-TDR_ws.I110011.P2f-highM_z_h.eL.pR_dst_7637_000"+str(i+1)+"_DST.slcio"
		os.system(sym)
	if(i>=99):
		sym = "ln -s "+SAMPLEDIR+"rv01-16-p10_250.sv01-14-01-p00.mILD_o1_v05.E250-TDR_ws.I110011.P2f-highM_z_h.eL.pR_dst_7637_00"+str(i+1)+"_DST.slcio"
		os.system(sym)
    