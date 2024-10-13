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

    int max_threads = omp_get_max_threads();

    string dataset = "PubMed"; //default dataset
    if(argc>1)
        dataset = argv[1];

    if(argc>2)
        max_threads = stoi(argv[2]);

    omp_set_num_threads(max_threads);   
        
    string dataset_dir = "Datasets/"+dataset;
    string graph_file = dataset_dir+"/edgelist.txt";
    char* graph_file_path = strdup(graph_file.c_str());

    graph G(graph_file_path);
    G.parseGraph();

    Dataset data(dataset_dir,G);
    data.printDataStats();

    vector<int> hidden_sizes = {128};
    //vector<int> hidden_sizes = {64,64,64,64};
    
    // vector<int> sample_sizes = {30,25,20,10}; //sample sizes for each layer, starting with the input layer.
    vector<int> sample_sizes = {30,25};

    int input_size = data.input_feature_dim;
    int output_size = data.num_classes;

    string hidden_activation = "tanh";
    string output_activation = "softmax";
    string aggregation_type = "mean";
    
    //Creating the gnn and initializing the weights.
    GNN gnn(hidden_sizes,sample_sizes,aggregation_type,input_size,output_size,hidden_activation,output_activation,data);
    gnn.printArchitecture();
    cout<<"\nInitializing Model Parameters with Xavier Initialization and starting Training...\n\n";

    //Defining the training hyperparmeters and training the gnn.
    double lr = 1e-3;
    int total_epochs = 10;
    double weight_decay = 0.5;
    int batch_size = 128;

    Activation activ; //creating an instance of the activation class

    RMSprop optim(gnn,lr,weight_decay);
    gnn.optimiser = &optim;

    GNN_Train(gnn,total_epochs,batch_size);
 
    return 0;
}