#ifndef GENERICLIST_H
#define GENERICLIST_H



struct GenericList; 
typedef struct GenericList GenericList; 


GenericList *GenericListCreate();
void GenericListAdd(GenericList *, void *);
void *GenericListGet(GenericList *, int);
void GenericListFree(GenericList *);

#endif
