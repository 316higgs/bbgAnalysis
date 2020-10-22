#!/usr/bin/python
import os,shutil,conf,utils,makeSteeringFiles

# This is the main script.
			
# prepare directories if necessary
utils.makeDirectory(conf.TEMPLATEDIR)
utils.makeDirectory(conf.XMLDIR)
utils.makeDirectory(conf.OUTDIR_ROOT)
utils.makeDirectory(conf.OUTDIR_SLCIO)
utils.makeDirectory(conf.OUTDIR_JETTRACKPID)

# copy xml to this directory
if not os.path.exists(conf.TEMPLATEDIR+"/"+conf.TEMPLATEFILE):
	shutil.copy(conf.TEMPLATEXMLORIGDIR+"/"+conf.TEMPLATEFILE,conf.TEMPLATEDIR+"/"+conf.TEMPLATEFILE)

for proc in conf.PROCESSES:
	makeSteeringFiles.writeXMLs(proc);

