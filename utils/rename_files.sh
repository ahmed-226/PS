#!/bin/bash

# Loop through all files in the current directory and its subdirectories
find . -type f | while read -r file; do
    # Get the directory and the base name of the file
    dir=$(dirname "$file")
    base=$(basename "$file")
    
    # Replace spaces with underscores in the base name
    new_base=$(echo "$base" | tr ' ' '_')
    
    # If the new base name is different from the original, rename the file
    if [ "$base" != "$new_base" ]; then
        mv "$file" "$dir/$new_base"
        echo "Renamed: $file -> $dir/$new_base"
    fi
done

echo "All files with spaces in their names have been renamed."