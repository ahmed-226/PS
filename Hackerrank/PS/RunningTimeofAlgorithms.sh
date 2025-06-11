#!/bin/bash

read n
read -r line
arr=($line)


runningTime() {
    local -a arr=("$@")  
    local n=${#arr[@]}
    local shifts=0

    for ((i=1; i<n; i++)); do
        local current=${arr[$i]}
        local j=$((i-1))

        while [ $j -ge 0 ] && [ ${arr[$j]} -gt $current ]; do
            arr[$((j+1))]=${arr[$j]}
            j=$((j-1))
            ((shifts++))  
        done
        arr[$((j+1))]=$current  
    done

    echo $shifts
}


result=$(runningTime "${arr[@]}")
echo $result > "${OUTPUT_PATH:-/dev/stdout}"
