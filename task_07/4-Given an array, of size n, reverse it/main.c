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

    printf("reverse of the array is :");

    for (int index= (size -1) ;index>=0;index--){
        printf(" %d\t ",Interger[index]);
    }
    printf("\n");
    return 0;
}
