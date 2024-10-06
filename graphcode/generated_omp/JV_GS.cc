// #include<stdio.h>
// #include<stdlib.h>
#include<limits.h>
#include<atomic>
#include<omp.h>
#include"../atomicUtil.h"
#include"../JV_GraphSAGE_GNN.cpp"
//#include"JV_GS.h"

void GNN_Train(string &graph_path,string &data_path, vector<int> hidden_sizes, vector<int> sample_sizes , int total_epochs , int batch_size)
{

  graph G("../../Datasets/PubMed/edgelist.txt");
  G.parseGraph();

  Dataset data("../../Datasets/PubMed",G);
  data.printDataStats();

  int input_size = data.input_feature_dim;
  int output_size = data.num_classes;

  string hidden_activation = "tanh";
  string output_activation = "softmax";
  string aggregation_type = "mean";
  
  //Creating the Model and initializing the weights.
  GNN gnn(hidden_sizes,sample_sizes,aggregation_type,input_size,output_size,hidden_activation,output_activation,data);
  gnn.printArchitecture();
  gnn.InitializeWeights();


  // RMSprop optim(model,lr,weight_decay);
  // model.optimiser = &optim;
  double lr = 1e-3;
  double weight_decay = 0.5;
    
  gnn.setOptimiser("RMSprop",lr,weight_decay);

  // gnn.InitializeWeights();

  int epoch = 0;
  bool training = true;
  while (training){
    int processed_vertex_count = 0;
    bool continue_epoch = true;
    while (continue_epoch){
      vector<double> y_pred_probs;
      int cur_vertex = gnn.getTrainVertexId(processed_vertex_count);
      y_pred_probs = gnn.forward(cur_vertex);
      gnn.backprop(cur_vertex,y_pred_probs);

      processed_vertex_count++;
      bool done = (processed_vertex_count == gnn.getTrainSetSize());
      if (processed_vertex_count / batch_size == 0 || done )
        {
        gnn.optimiser_step();

        if (done )
          {
          gnn.displayEpochStats();
          cout<<endl;

        }
        gnn.resetGrads();

      }
      continue_epoch = !done;
    }
    epoch = epoch + 1;
    if (epoch == total_epochs )
      training = false;
  }
  cout<<endl;
  gnn.evaluateModel();


}
