#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    printf("Please enter the number of integers n: ");
    scanf("%d", &size);

    int Interger[size];


    for (int index = 0; index < size; index++) {
        printf("integer[%d]: ", index + 1);
        scanf("%d", &Interger[index]);
    }

    int sum = 0;
    for (int index = 0; index < size; index++) {
        sum += Interger[index];
    }

    printf("Sum of the integers: %d\n", sum);

    return 0;
}
