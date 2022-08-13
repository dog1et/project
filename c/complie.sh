#/bin/bash

input_file=$1
output_file=$2

if [ "${output_file}" == "" ];then
	output_file=`echo ${input_file}|awk -F '.' '{print $1}'`
fi

gcc ${input_file} -o ${output_file} -fpermissive  -lstdc++

chmod 777 ${output_file}
