#include <stdio.h>
#include "ex1.h"
#include "ex3.h"
#include <stdlib.h>


int main(){
    Date *d= create_date(14,8,1999);
    char *x="Pierre";
    char *y="Blachere";
    Person *p=create_person(x,y,d);
    print_person(p);
}
