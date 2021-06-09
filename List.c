#include <stdio.h>
#include "ex1.h"
#include "list.h"
#include <stdlib.h>


void tmain() {
    list *l=(list *)malloc(sizeof(list));
    l->date=create_date(16,10,2021);
    l->next=NULL;
    Date *d=create_date(14,8,1999);
    print_list(l);
    l=insert(d,l);
    print_list(l);
}