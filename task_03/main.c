#include <stdio.h>
#include <stdlib.h>

int main()
{
    /****************** takes 5 inputs and prints the number that are divisible by 3 *****************/

     int num1, num2, num3, num4, num5;

    printf("Enter 5 numbers:\n");
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);

    printf("Numbers divisible by 3:\n");
      if (num1 % 3 == 0)
        printf("%d\n", num1);
      if (num2 % 3 == 0)
        printf("%d\n", num2);
      if (num3 % 3 == 0)
        printf("%d\n", num3);
      if (num4 % 3 == 0)
        printf("%d\n", num4);
      if (num5 % 3 == 0)
        printf("%d\n", num5);
    else
        printf("The Entered Numbers Isn't Divisible By 3\n");

    printf("===============================================\n");
   /************************** print Floyd's triangle ****************************/

    int rows , number=1 ;
    printf("enter the number of rows you need :");
    scanf("%d",&rows);
    for(int i=1;i<=rows ; ++i){
        for(int j=1;j<=i ; ++j){
            printf("%d ",number);
            ++number;
    }
    printf("\n");
    }

    printf("===============================================\n");
   /************************** calculate the power of a number ****************************/

    int power , num , result = 1 ;
    printf("enter the number and its power like this (number-power) :");
    scanf("%d-%d",&num,&power);
    for (int i ; i< power ; ++i){
        result *= num ;
    }
    printf("%d raised to the power of %d is %d\n",num,power,result);

    printf("===============================================\n");
   /************************** print the numbers from input "A" to input "B"  *******************************/

    int A , B , S ;
    printf("ENTER NUMBER A :");
    scanf("%d",&A);
    printf("ENTER NUMBER B :");
    scanf("%d",&B);

    for (int i=A;i<=B;++i){
        printf("%d",i);
        printf("\n");
    }


    printf("===============================================\n");
   /************************** calculate the factorial of a number entered by the user. ****************************/

    int fact , sum=1 , fact_print ;
    printf("please enter the number that you need the factorial of it:");
    scanf("%d",&fact);
    int original_fact = fact ;
    while(fact > 0){
        sum *= fact ;
        --fact ;
    }
    printf("%d! = %d\n",original_fact,sum);

    printf("===============================================\n");
   /************************** take numbers from user and find the max and min from them ****************************/

    int NUMBER , max=0 , min=0 ,choice ;
    printf("choose the No of numbers:");
    scanf("%d",&choice);
    if (choice<=0){
        printf("please enter valid number");
    }
    for (int i=1 ; i<=choice ; i++){
        printf("please enter number :");
        scanf("%d",&NUMBER);
      if(NUMBER>max)
        max = NUMBER ;
      if(NUMBER<max){
        min  = NUMBER ;
      }
     }

    printf("Maximum value: %d\n", max);
    printf("Minimum value: %d\n", min);

    return 0;
}
