#!/bin/bash

path=$1

if [ "${path}" == "" ];then
	path=$(pwd)
	echo "clear path : ${path}"
fi

for file in $(ls ${path})
do
	result=$(echo ${file}|grep -F '.')
	if [ "${result}" == "" ];then
		echo "rm file : ${file}"
		rm ${file}
	fi
done
