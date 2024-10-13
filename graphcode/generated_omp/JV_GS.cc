#include"JV_GS.h"

void GNN_Train(GNN  &gnn , int total_epochs , int batch_size)
{
  gnn.InitializeWeights();

  int epoch = 0;
  bool training = true;
  while (training){
    int processed_vertex_count = 0;
    bool continue_epoch = true;
    std::chrono::high_resolution_clock::time_point start,end;
    start = chrono::high_resolution_clock::now();
    cout<<"Epoch "<<fixed<<setprecision(3)<<epoch+1<<flush;
    while (continue_epoch){
      vector<double> y_pred_probs;
      int cur_vertex = gnn.getTrainVertexId(processed_vertex_count);
      y_pred_probs = gnn.forward(cur_vertex);
      gnn.backprop(cur_vertex,y_pred_probs);

      processed_vertex_count++;
      bool done = (processed_vertex_count == gnn.getTrainSetSize());
      if (processed_vertex_count % batch_size == 0 || done )
        {
        gnn.optimiser_step();

        if (done )
          {
          gnn.displayEpochStats();
          end = chrono::high_resolution_clock::now();
        }
        gnn.resetGrads();

      }
      continue_epoch = !done;
    }

    chrono::duration<double> time = end-start;
    cout<<" Time : "<<fixed<<setprecision(2)<<time.count()<<"s"<<endl;
    epoch = epoch + 1;
    if (epoch == total_epochs )
      training = false;
  }
  gnn.evaluateModel();


}
