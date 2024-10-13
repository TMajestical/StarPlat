#!/bin/bash
#PBS -q rupesh_gpuq
#PBS -o logfile.log
#PBS -e errorfile.err
#PBS -l walltime=36:00:00
#PBS -l select=1:ncpus=20
tpdir=`echo $PBS_JOBID | cut -f 1 -d .`
tempdir=$HOME/scratch/job$tpdir
mkdir -p $tempdir
cd $tempdir

cp -R $PBS_O_WORKDIR/Datasets/ .
cp -R $PBS_O_WORKDIR/src/ .
cp -R $PBS_O_WORKDIR/graphcode/ .

#cp -R $PBS_O_WORKDIR/graphcode/atomicUtil.h graphcode/
#cp -R $PBS_O_WORKDIR/graphcode/graph_ompv2.hpp graphcode/
#cp -R $PBS_O_WORKDIR/graphcode/graph.cpp graphcode/
#cp -R $PBS_O_WORKDIR/graphcode/graph.hpp graphcode/
#cp -R $PBS_O_WORKDIR/graphcode/update.hpp graphcode/
#cp -R $PBS_O_WORKDIR/graphcode/JV_GraphSAGE_omp_parallel.cpp graphcode/

cp $PBS_O_WORKDIR/Test-Code.sh .

ls -R

export OMP_NUM_THREADS=20

#./src/StarPlat -s -f /src/JV_GS -b omp #regenerating the code, would mean the epoch timing part would be lost, hence avoiding it.
chmod +x Test-Code.sh
bash Test-Code.sh graphcode/generated_omp/GNN_test_main.cpp

cp ../job$tpdir/errorfile.err .
cp ../job$tpdir/logfile.log .
cp -ru ../job$tpdir/output_logs $PBS_O_WORKDIR/.

rm -r *