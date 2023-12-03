#include <stdio.h>
#include <stdlib.h>

int main()
{
    /******************************** reverse a number in decimal ********************************/
    int Number ,original_Number , reversed=0 , bit ;
    printf("please enter the number: ");
    scanf("%d",&Number);
    original_Number = Number ;
    while(Number>0){
    bit = Number %10 ;
    Number /= 10 ;
    reversed = reversed*10 + bit ;
    }
        printf("reversed number of %d is %d\n",original_Number,reversed);

     printf("===========================================================================\n");
   /**take a number and a character from user if the number is even print the same character, if the number is odd print the other case of the character **/
     int NUM ;
     char ch ;
     printf("enter the number and character like this (number-ch): ");
     scanf("%d-%c",&NUM,&ch);
     if(NUM%2==0){
        printf("%c",ch);
     }
     else{
        if('A'<= ch && ch<='Z')
            printf("%c",ch+32);
        if('a'<= ch && ch <='z')
            printf("%c",ch-32);
     }
      printf("\n===========================================================================\n");
     /******************************** binary representation of a number ********************************/
      int decimal , binary, original_decimal ;
      printf("please enter the number: ");
      scanf("%d",&decimal);
      original_decimal = decimal ;
      printf("binary of %d is ",original_decimal);
      for(int i =15 ;i>=0 ;i--){
        binary = (decimal >> i);
        if(binary > 0){
        binary =  binary & 1 ;
        printf("%d",binary);
        }
      }

      printf("\n===========================================================================\n");
     /********************************  count the number of 1’s in an unsigned 32-bit integer ********************************/

      unsigned int integer ;
      int original_integer , y ,count = 0 ;
      printf("please enter an integer number: ");
      scanf("%d",&integer);
      original_integer = integer ;
      for(int i=31 ; i>=0;--i){
            y = (integer >> i) & 1 ;
        if(y==1)
            ++count ;

      }
      printf("number of 1 digits in %d is %d",original_integer,count);

       printf("\n===========================================================================\n");
     /******************************** sum numbers from 1 to 100 (without loop) ********************************/
     //Using the formula for the sum of an arithmetic series
     int n = 100;
     int sum = (n * (n + 1)) / 2;
    printf("Sum: %d", sum);

       printf("\n===========================================================================\n");
     /******************************** Print the last 2 digits Multiplication of 4 numbers ********************************/
      int A, B, C, D , result;
     printf("please enter four number like this(A,B,C,D): ");
     scanf("%d,%d,%d,%d", &A, &B, &C, &D);
     result = A * B * C * D ;
     result %= 100;
     printf("Output: %d\n",result);




    return 0;
}
