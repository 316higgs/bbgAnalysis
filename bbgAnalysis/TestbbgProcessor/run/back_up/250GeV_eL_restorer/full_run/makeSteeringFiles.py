#!/usr/bin/python
import os,string,shutil,sys,re,utils,conf


def writeXMLs(pname):
        # input file list. This can be used for KEKCC hstage utility.
	inputfilelist = open("staging.lst",'w')
	# make a list that has only accepted file names.
	filteredlist = []
	utils.makeFilteredList(filteredlist,conf.LISTDIR,pname)
	nxmlfile = 0
	while (1):
		if (len(filteredlist)<=0):
			break
		else:
			nxmlfile += 1
			ofname = conf.XMLDIR + "/"+conf.OUTPUT_PREFIX+pname + "_" + str(nxmlfile) + ".xml"
			foutxml = open(ofname,'w')
			template = open(conf.TEMPLATEDIR+"/"+conf.TEMPLATEFILE,'r')
                        inputfilename=""
			for t in template:
				if re.search("__INPUTFILES__",t):
	
					for i in range(conf.nfilesInOneshot):
						if (len(filteredlist)==0):
							break
						if (conf.nfilesInOneshot>1 and i==0):
							fpath=conf.SPACE+filteredlist.pop()+"\n"
						elif (conf.nfilesInOneshot==1):
							fpath=conf.SPACE+filteredlist.pop()
					                inputfilename = fpath
						elif (i==conf.nfilesInOneshot-1) :
							fpath+=conf.SPACE+filteredlist.pop()
						else :
							if (len(filteredlist)==1):#last case 
								fpath+=conf.SPACE+filteredlist.pop()
							else:
								fpath+=conf.SPACE+filteredlist.pop()+"\n"
						inputfilelist.write(re.sub(conf.SPACE,"",fpath)+"\n")
					foutxml.write(re.sub("__INPUTFILES__",fpath,t))

                                        
				elif re.search("__OUTPUTROOTDIR__/__OUTPUTROOT__",t):		
					tmp = re.sub("__OUTPUTROOTDIR__",conf.OUTDIR_ROOT,t)
					tmp2 = re.sub("__OUTPUTROOT__",conf.OUTPUT_PREFIX+pname + "_" + str(nxmlfile) + ".root",tmp)
					foutxml.write(tmp2)
				elif re.search("__OUTPUTROOTDIR__/__OUTPUTROOT__",t):		
					tmp = re.sub("__OUTPUTROOTDIR__",conf.OUTDIR_ROOT,t)
					tmp2 = re.sub("__OUTPUTROOT__",conf.OUTPUT_PREFIX+pname + "_" + str(nxmlfile) + ".root",tmp)
					foutxml.write(tmp2)
				elif re.search("__OUTPUTROOTDIR__/__OUTPUTROOT2__",t):		
					tmp = re.sub("__OUTPUTROOTDIR__",conf.OUTDIR_ROOT,t)
					tmp2 = re.sub("__OUTPUTROOT2__",conf.OUTPUT_PREFIX2+pname + "_" + str(nxmlfile) + ".root",tmp)
					foutxml.write(tmp2)
				elif re.search("__OUTPUTROOTDIR__/__OUTPUTROOT3__",t):		
					tmp = re.sub("__OUTPUTROOTDIR__",conf.OUTDIR_ROOT,t)
					tmp2 = re.sub("__OUTPUTROOT3__",conf.OUTPUT_PREFIX3+pname + "_" + str(nxmlfile) + ".root",tmp)
					foutxml.write(tmp2)
				elif re.search("__OUTDIRJETTRACKPID__/__OUTPUTJETTRACKPID__",t):		
					tmp = re.sub("__OUTDIRJETTRACKPID__",conf.OUTDIR_JETTRACKPID,t)
					tmp2 = re.sub("__OUTPUTJETTRACKPID__",conf.OUTPUT_JETTRACKPID+pname+"_"+str(nxmlfile)+".txt",tmp)
					foutxml.write(tmp2)
				elif re.search("__INPUTPREFIX__",t):		
					tmp = re.sub("__INPUTPREFIX__",conf.INPUT_PREFIX,t)
					foutxml.write(tmp)
				elif re.search("__INPUTPREFIX2__",t):		
					tmp = re.sub("__INPUTPREFIX2__",conf.INPUT_PREFIX2,t)
					foutxml.write(tmp)
				elif re.search("__OUTPUTSLCIODIR__/__OUTPUTSLCIO__",t):		
					tmp = re.sub("__OUTPUTSLCIODIR__",conf.OUTDIR_SLCIO,t)
					if inputfilename=="" : 
						tmp2 = re.sub("__OUTPUTSLCIO__",conf.OUTPUT_PREFIX+pname + "_" + str(nxmlfile) + ".slcio",tmp)
					else :
						outputfilename = re.sub(".slcio","_NewVtx.slcio",inputfilename.split('/')[-1])
						tmp2 = re.sub("__OUTPUTSLCIO__",outputfilename,tmp)
					foutxml.write(tmp2)
				else:
					foutxml.write(t)


#writeXMLs(conf.PROCESS) 
