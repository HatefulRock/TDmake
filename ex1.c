
# include "ex1.h"
#include <stdio.h>
#include <stdlib.h>

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

int main(){
    Date *d=(Date *)malloc(sizeof(Date));
    d->x=5;
    d->y=12;
    d->z=1998;

    Date *q=create_date(1,10,1999);
    print_date(d);
}


