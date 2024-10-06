#ifndef GENCPP_GRAPHSAGE_H
#define GENCPP_GRAPHSAGE_H
#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include<atomic>
#include<omp.h>
#include"../graph.cpp"
#include"../atomicUtil.h"
#include"../graphGNN_omp.hpp"

using namespace std;
env environment("omp", "static", "GraphSAGE");
void GraphSAGE(graph& g , GNN  gnn , int max_epochs , int batch_size , 
  vector<int> training_vertices , vector<int> testing_vertices , vector<int> labels);

#endif
