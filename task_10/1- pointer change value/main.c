#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number = 24;
    printf("old value: %d\n", number);
    int *ptr = &number;
    *ptr = 200;
    printf("new value: %d\n", number);
    return 0;
}
