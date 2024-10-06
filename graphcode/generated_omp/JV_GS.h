#ifndef GENCPP_JV_GS_H
#define GENCPP_JV_GS_H
#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include<atomic>
#include<omp.h>
#include"../atomicUtil.h"
#include"../JV_GraphSAGE_GNN.cpp"

using namespace std;

void GNN_Train(GNN   &gnn , int total_epochs , int batch_size);

#endif
