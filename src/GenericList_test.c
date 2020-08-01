#include <stdlib.h>
#include <assert.h>
#include "GenericList.h"
#include "GenericList_test.h"




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
}


