#!/bin/bash

# Check if the filename is provided
if [ -z "$1" ]; then
  echo "Usage: $0 <cpp_filename>"
  exit 1
fi

# Get the filename and extension
filename=$(basename -- "$1")
output="${filename%.*}"

# Get the current date and time for directory structure (Month in 'MMM' format)
current_date=$(date +"%d-%b-%y")  # e.g., '2024-Sep-25'
current_time=$(date +"%H-%M-%S")  # e.g., '14-30-00'

# Define directory structure for logs and source
log_dir="output_logs/${current_date}/${current_time}"
source_dir="${log_dir}/source"

# Create the directory structure if it doesn't exist
mkdir -p "$log_dir"
mkdir -p "$source_dir"


# Compile the C++ code
g++ -O3 -fopenmp -std=c++17 -o "$output" "$1"
if [ $? -ne 0 ]; then
  echo "Compilation failed."
  exit 1
fi

# Copy the .cpp file and binary to the source directory
#cp "$1" "$source_dir/"

cp graphcode/JV* "$source_dir/"
cp graphcode/generated_omp/JV* "$source_dir/"
cp graphcode/generated_omp/GNN* "$source_dir/"
cp src/JV* "$source_dir/"
#cp "$output" "$source_dir/"

# Define the array of arguments to iterate over
 args=("PubMed" "Cora" "CiteSeer" "Amazon-Photo" "Flickr" "Amazon-Computers" "Reddit")
 #args=("Reddit")

# Run the compiled program with each argument and log output
for arg in "${args[@]}"; do
  logfile="${log_dir}/log_${arg}.txt"
  echo "Running with Dataset: $arg"
  "./$output" "$arg" > "$logfile"
  echo "Output logged to $logfile"
done

echo "Logs, binary, and source file saved in $log_dir"
