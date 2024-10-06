#include"GCN_test.h"

void GCN(graph& g , GNN  gnn , vector<int> neuronsPerHiddenLayer)
{
  gnn.initializeLayers_omp(neuronsPerHiddenLayer,"xaviers");

  int num_epoch = 1;
  bool x = true;
  while (x){
    if (num_epoch == 100 )
      {
      x = false;
    }
    num_epoch = num_epoch + 1;
    int layerr = 0;
    bool y = 0;
    while (y){
      layerr = layerr + 1;
      gnn.forwardPass_omp(layerr);

    }
    while (layerr){
      layerr--;
      gnn.backPropogation_omp(layerr);

    }
  }

}
