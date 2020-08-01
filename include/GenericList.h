#ifndef GENERICLIST_H
#define GENERICLIST_H



typedef struct GenericList GenericList; 


GenericList *GenericListCreate();
void GenericListAdd(GenericList *, void *);
void *GenericListGet(GenericList *, int);
void GenericListFree(GenericList *);

#endif
