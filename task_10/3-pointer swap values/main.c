#include <stdio.h>
#include <stdlib.h>

int main() {
    int x = 8, y = 9, z = 10;
    int *p = &x , *q = &y, *r = &z;

    printf("Values:\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("z = %d\n", z);
    printf("p = %p\n", p);
    printf("q = %p\n", q);
    printf("r = %p\n", r);
    printf("*p = %d\n", *p);
    printf("*q = %d\n", *q);
    printf("*r = %d\n", *r);

    int* temp = r;
    r = p;
    p = q;
    q = temp;

    printf("Values after swapping pointers:\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("z = %d\n", z);
    printf("p = %p\n", p);
    printf("q = %p\n", q);
    printf("r = %p\n", r);
    printf("*p = %d\n", *p);
    printf("*q = %d\n", *q);
    printf("*r = %d\n", *r);

    return 0;
}
