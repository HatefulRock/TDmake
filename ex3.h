#ifndef PERSON
#define PERSON 
#include "ex1.h"

typedef struct _Person{
    char *x;
    char *y;
    Date *d;
} Person;

Person *create_person(char *a,char *b, Date *d);
void print_person(Person *d);
Date *create_date(int a,int b, int c);
void print_date(Date *d);


#endif