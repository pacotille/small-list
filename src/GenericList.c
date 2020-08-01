#include <stdlib.h>
#include "GenericList.h"

typedef struct GenericCell {
  void        *_info;
  struct GenericCell *_next;
}GenericCell;

typedef struct GenericList {
  GenericCell *_begin;
}GenericList;



GenericList *GenericListCreate()
{
  GenericList *auxgl = (GenericList *)malloc(sizeof(GenericList));
  auxgl->_begin = NULL;
  return  auxgl;
}


void GenericListAdd(GenericList *gl, void *info)
{
  GenericCell *auxgcell = (GenericCell *)malloc(sizeof(GenericCell));
  auxgcell->_info = info;
  auxgcell->_next = NULL;

  if(gl->_begin == NULL)
    gl->_begin = auxgcell;
  else 
   {
    auxgcell->_next = gl->_begin;
    gl->_begin = auxgcell;
   }
}

void *GenericListGet(GenericList *gl, int number)
{
  GenericCell *aux = gl->_begin; 
  int nb = 0;
  while( aux != NULL)
  {
    if( nb == number )
      return aux->_info;
    aux = aux->_next;
    nb++;
  }
  return NULL;
}


void GenericListFree(GenericList *gl)
{
  GenericCell *aux = NULL; 
  while( gl->_begin != NULL )
  {
    aux = gl->_begin; 
    gl->_begin = gl->_begin->_next;
    free(aux);
  }
  free(gl);
}
