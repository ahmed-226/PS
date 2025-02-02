#!/bin/bash

OUT_DIR="EXE"

if [ ! -d "$OUT_DIR" ]; then
    echo "Error: Please run this script from the root directory of the project."
    exit 1
fi

mkdir -p $OUT_DIR

for dir in */; do
    find "$dir" -type f -name "*.exe" -exec mv {} $OUT_DIR \;
done

echo "All .exe files have been moved to the $OUT_DIR directory."