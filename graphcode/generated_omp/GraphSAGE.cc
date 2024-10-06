#include"GraphSAGE.h"

void GraphSAGE(graph& g , GNN  gnn , int max_epochs , int batch_size , 
  vector<int> training_vertices , vector<int> testing_vertices , vector<int> labels)
{
  gnn.initializeLayers_omp("xavier");

  int epoch = 1;
  bool training = true;
  while (training){
    if (num_epoch == max_epochs )
      {
      training = false;
    }
    epoch = epoch + 1;
    int cur_vertex = 0;
    bool continue_epoch = true;
    while (continue_epoch){
      bool batch_not_done = true;
      if (batch_not_done )
        {
        gnn.forward_omp(g,cur_vertex);

        gnn.backprop_omp(g,cur_vertex);

        cur_vertex = cur_vertex + 1;
        int remaining_in_batch = cur_vertex / batch_size;
        if (remaining_in_batch == 0 )
          {
          batch_not_done = false;
        }
      }
      if (!batch_not_done )
        gnn.optimize_omp("adam");

      if (cur_vertex == training_vertices.size() )
        {
        continue_epoch = false;
      }
    }
  }
  gnn.evaluate_omp();


}
