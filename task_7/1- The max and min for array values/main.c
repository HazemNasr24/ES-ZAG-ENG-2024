#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Number[10];
    int index = 0 ;
    printf("please enter 10 number : \n");
    for(index = 0 ; index < 10 ; index++){
        printf("number[%d] : ",index+1);
        scanf("%d",&Number[index]);
    }
    int max = Number[0];
    int min = Number[0];
   for(index = 0 ; index < 10 ; index++){
    if(Number[index] > max ) max = Number[index];
    if(Number[index] < min ) min = Number[index];

   }
   printf("Minimum value: %d\n", min);
   printf("Maximum value: %d\n", max);


    return 0;
}
