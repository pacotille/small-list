#include <stdlib.h>
#include <assert.h>
#include "GenericList.h"
#include "TrainList_test.h"


typedef struct Train {
 char *_name;
 double _size;
} Train;

typedef GenericList TrainList;

TrainList *TrainListCreate(){ 
  return GenericListCreate();
}

void TrainListAdd(TrainList *tl, Train *train){
  GenericListAdd(tl, train);
}

void *TrainListGet(TrainList *tl, int number){
  GenericListGet(tl, number );
}

void TrainListFree(TrainList *tl){
  GenericListFree(tl);
}

void test_TrainList()
{
  {
    TrainList *tl = TrainListCreate();
    TrainListFree(tl);
  }
  {
    TrainList *tl = TrainListCreate();
    Train *t1 = (Train *)malloc(sizeof(Train));
    TrainListAdd(tl, t1);
    Train *info = TrainListGet(tl, 0);
    assert( info == t1 );
    info = TrainListGet(tl, 1);
    assert( info == NULL );
    Train *t2 = (Train *)malloc(sizeof(Train));
    TrainListAdd(tl, t2);
    info = TrainListGet(tl, 0);
    assert( info == t2 );
    info = TrainListGet(tl, 1);
    assert( info == t1 );
    TrainListFree(tl);
    free(t1);
    free(t2);
  }
}

