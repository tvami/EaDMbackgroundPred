#!/bin/bash

# Submit Condor jobs for 2DAlphabet VR1 processing

echo "=========================================="
echo "  Condor Submission for 2DA VR1 Analysis"
echo "=========================================="

# Step 1: Generate input file
echo ""
echo "[Step 1/3] Generating input file from histogram directory..."
python3 generate_condor_inputs.py

if [ $? -ne 0 ]; then
    echo "ERROR: Failed to generate input file!"
    exit 1
fi

# Step 2: Validate input file
echo ""
echo "[Step 2/3] Validating input file..."
if [ ! -f "input_2DA_VR1.txt" ]; then
    echo "ERROR: input_2DA_VR1.txt not found!"
    exit 1
fi

# Check if template config exists
template_config=$(tail -n +2 input_2DA_VR1.txt | head -1 | cut -d',' -f1 | tr -d ' ')
if [ ! -f "$template_config" ]; then
    echo "ERROR: Template config $template_config not found!"
    exit 1
fi

# Create logs directory
if [ ! -d "logs" ]; then
    echo "Creating logs directory..."
    mkdir -p logs
fi

# Count number of jobs
njobs=$(tail -n +2 input_2DA_VR1.txt | wc -l)
echo "Number of jobs to submit: $njobs"
echo "Template config: $template_config"

# Step 3: Submit to Condor
echo ""
echo "[Step 3/3] Submitting to Condor..."
condor_submit condor_2DA_VR1.cfg

echo ""
echo "=========================================="
echo "  Submission Complete!"
echo "=========================================="
