#include <stdio.h>
#include "ex1.h"
#include "list.h"
#include <stdlib.h>

list *insert(Date *k,list *l) {
    list *s=(list *)malloc(sizeof(list));
    s->date=k;
    s->next=l;
    return s;
}

void print_list(list *l){
    list *current=l;
    while(current->date){
        print_date(current->date);
        current=current->next;
    }
}
