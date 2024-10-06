#ifndef GENCPP_TEST_H
#define GENCPP_TEST_H
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <atomic>
#include <omp.h>

#include "JV_GS.cc"

using namespace std;


#endif


int main(int argc, char* argv[]) 
{
    // ios::sync_with_stdio(0);
    // cin.tie(0);

    string dataset;
    if(argc>1)
        dataset = argv[1];
        
    string dataset_dir = "../../Datasets/"+dataset;
    string graph_file = dataset_dir+"/edgelist.txt";
    char* graph_file_path = strdup(graph_file.c_str());
    
    //vector<int> hidden_sizes = {128};
    vector<int> hidden_sizes = {128};
    //vector<int> hidden_sizes = {64,64,64,64};
    
    // vector<int> sample_sizes = {30,25,20,10}; //sample sizes for each layer, starting with the input layer.
    vector<int> sample_sizes = {30,25};

    cout<<" and Starting Training...\n\n";

    //Defining the training hyperparmeters and training the model.
    int total_epochs = 60;
    int batch_size = 128;

    GNN_Train(graph_file,dataset_dir,hidden_sizes,sample_sizes,total_epochs,batch_size);
 
    return 0;
}