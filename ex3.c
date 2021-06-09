#include <stdio.h>
#include "ex3.h"
#include <stdlib.h>

void print_person(Person *p){
    printf("%s,%s\n",p->x,p->y);
    print_date(p->d);
}

Person *create_person(char *a, char *b, Date *s) {
    Person *p=(Person *)malloc(sizeof(Person));
    p->x=a;
    p->y=b;
    p->d=s;
    return p;
}

void print_date(Date *d) {
    printf("%d/%d/%d\n", d->x,d->y,d->z);
}

Date *create_date(int a,int b, int c) {
    Date *res=(Date*)malloc(sizeof(Date));
    res->x=a;
    res->y=b;
    res->z=c;
    return res;
}

