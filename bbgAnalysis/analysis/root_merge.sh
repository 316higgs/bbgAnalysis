#!/usr/bin/bash

src_head="input_files/7637_00001_restorer.root"
for i in {2..9}
do
	src=" input_files/7637_0000${i}_restorer.root"
	src_head+=$src
done

for i in {10..99}
do
	src=" input_files/7637_000${i}_restorer.root"
	src_head+=$src
done

for i in {100..532}
do
	src=" input_files/7637_00${i}_restorer.root"
	src_head+=$src
done
#echo $src_head

hadd -f input_files/7637_merged_restorer.root $src_head

root -l -q analysis.cc+\(\"input_files/7637_merged_restorer.root\",0.8,0.8\)


#for i in {1..9}
#do
	#root -l -q analysis.cc+\(\"input_files/7637_0000${i}_restorer.root\",0.8,0.8\)
	#mv output_files/output_cambridge_Xnum_restorer_v02-01-02.root output_files/output_cambridge_7637_0000${i}_restorer_v02-01-02.root
	#echo Output : output_files/output_cambridge_7637_0000${i}_restorer_v02-01-02.root
#done

#for i in {10..50}
#do
	#root -l -q analysis.cc+\(\"input_files/7637_000${i}_restorer.root\",0.8,0.8\)
	#mv output_files/output_cambridge_Xnum_restorer_v02-01-02.root output_files/output_cambridge_7637_000${i}_restorer_v02-01-02.root
	#echo Output : output_files/output_cambridge_7637_000${i}_restorer_v02-01-02.root
#done

#for i in {100..523}
#do
	#root -l -q analysis.cc+\(\"input_files/7637_00${i}_restorer.root\",0.8,0.8\)
	#mv output_files/output_cambridge_Xnum_restorer_v02-01-02.root output_files/output_cambridge_7637_00${i}_restorer_v02-01-02.root
	#echo Output : output_files/output_cambridge_7637_00${i}_restorer_v02-01-02.root
#done
