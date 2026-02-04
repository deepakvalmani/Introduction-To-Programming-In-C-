#!/bin/bash
# ITP C++ Course - Compilation Script
# Compiles all C++ programs in the repository

echo "=== ITP C++ Course Compilation Script ==="
echo ""

# Function to compile a single file
compile_file() {
    local file=$1
    local output="${file%.*}"
    
    echo "Compiling: $file"
    g++ -std=c++17 -Wall -Wextra "$file" -o "$output"
    
    if [ $? -eq 0 ]; then
        echo "  ✓ Success: Created $output"
    else
        echo "  ✗ Failed: Compilation error"
    fi
}

# Main compilation logic
echo "Starting compilation..."
echo ""

# Find all .cpp files and compile them
find . -name "*.cpp" -type f | while read -r file; do
    # Skip if in solutions directory
    if [[ $file != *"/solutions/"* ]]; then
        compile_file "$file"
    fi
done

echo ""
echo "=== Compilation Complete ==="
echo "Run programs with: ./program_name"
