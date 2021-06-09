#ifndef LIST
#define LIST 
#include "ex1.h"


typedef struct _list{
    Date *date;
    struct _list *next;
} list; 

list *insert(Date *k,list *l);
void print_list(list *l);

#endif