#include <stdlib.h>
#include <assert.h>
#include "GenericList.h"
#include "GenericList_test.h"



typedef struct Train {
 char *_name;
 double _size;
} Train;



void test_GenericList()
{
  {
    GenericList *tl = GenericListCreate();
    GenericListFree(tl);
  }
  {
    GenericList *tl = GenericListCreate();
    GenericListAdd(tl, NULL);
    void *info = GenericListGet(tl, 0);
    assert( info == NULL );
    info = GenericListGet(tl, 1);
    assert( info == NULL );
    GenericListAdd(tl, NULL);
    info = GenericListGet(tl, 0);
    assert( info == NULL );
    info = GenericListGet(tl, 1);
    assert( info == NULL );
    GenericListFree(tl);
  }
  {
    GenericList *tl = GenericListCreate();
    Train *t1 = (Train *)malloc(sizeof(Train));
    GenericListAdd(tl, t1);
    Train *info = GenericListGet(tl, 0);
    assert( info == t1 );
    info = GenericListGet(tl, 1);
    assert( info == NULL );
    Train *t2 = (Train *)malloc(sizeof(Train));
    GenericListAdd(tl, t2);
    info = GenericListGet(tl, 0);
    assert( info == t2 );
    info = GenericListGet(tl, 1);
    assert( info == t1 );
    GenericListFree(tl);
    free(t1);
    free(t2);
  }
}

