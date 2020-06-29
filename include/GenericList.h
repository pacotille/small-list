


typedef struct GenericCell {
  void        *_info;
  struct GenericCell *_next;
}GenericCell;

typedef struct GenericList {
  GenericCell *_begin;
}GenericList;

GenericList *GenericListCreate();
void GenericListAdd(GenericList *, void *info);
void GenericListDelete(GenericList *, int number);
void *GenericListGet(GenericList *gl, int number);
void GenericListFree(GenericList *gl);
