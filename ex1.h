#ifndef DATE
#define DATE

typedef struct _Date {
    int x;
    int y;
    int z;
} Date;
Date *create_date(int a, int b, int c);
void print_date(Date *d);

#endif