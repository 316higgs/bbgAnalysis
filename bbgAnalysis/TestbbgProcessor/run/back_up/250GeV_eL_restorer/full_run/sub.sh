#!/bin/bash

for i in {1..9}
do
	name=7637_0000$i
	cp 250GeV_eeqq_restorer_0.xml 250GeV_eeqq_restorer_$name.xml
	#echo "7637_0000"$name
	sed -i -e 's/xNAMEfile/'$name'/g' 250GeV_eeqq_restorer_$name.xml
done