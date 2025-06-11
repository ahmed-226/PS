#!/bin/bash

ROOT_DIR=$(pwd)

EXE_DIR="$ROOT_DIR/EXE"
mkdir -p "$EXE_DIR"

find "$ROOT_DIR" -type f -name "*.cpp" | while read -r cpp_file; do
    filename=$(basename "$cpp_file" .cpp)
    
    g++ "$cpp_file" -o "$EXE_DIR/$filename.exe"

    if [ $? -eq 0 ]; then
        echo "✅ Compiled: $cpp_file → $EXE_DIR/$filename.exe"
    else
        echo "❌ Failed to compile: $cpp_file"
    fi
done
