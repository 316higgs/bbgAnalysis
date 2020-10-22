#!/usr/bin/python

# samples will be chosen from the follwoing directory.
#LISTDIR="/home/ilc/yonamine/work/SGV/sgv/Nominal"
LISTDIR="/hsm/ilc/users/yonamine/physics/lcfiplus/vertexing_dbd_newvtx"
FILESUFFIX="slcio"
# samples will be chosen by searching the follwoing label in the file names.
PROCESSES=["Pbb","Pcc","Pqq"]

# number of files per one submit
nfilesInOneshot = 1; 

# no need to change below
# common
TEMPLATEXMLORIGDIR="/home/ilc/yonamine/work/LCFIPlusDev/run/XML_TEMPLATES"
LOGDIR = "log"
XMLDIR = "generatedXMLs"
TEMPLATEDIR = "templateXMLs"
OUTDIR_ROOT="root"
OUTDIR_SLCIO="slcio"
OUTDIR_JETTRACKPID="JetTrackPIDsLookupTable"
SPACE = "             "

# 1) VERTEXING
TEMPLATEFILE = "vertexing_sgv.xml"
OUTPUT_PREFIX="newvtx."

