#include <stdio.h>
#include <stdlib.h>
void set_bit(int a, int b);
void clear_bit(int a, int b);
void toggle_bit(int a, int b);
void read_bit(int a, int b);

int main()
{
    int number , bit , option ;
    printf("please enter the number and bit(number - bit): ");
    scanf("%d-%d",&number,&bit);
    printf("please enter the option you need from 1 to 4 : \n");
    printf("1) SET BIT\n");
    printf("2) CLEAR BIT \n");
    printf("3) TOGGLE BIT \n");
    printf("4) READ BIT \n");
    scanf("%d",&option);
    switch (option)
    {
     case 1:
       set_bit(number , bit);
       break;
     case 2:
       clear_bit(number , bit);
       break;
     case 3:
       toggle_bit(number , bit);
       break;
     case 4:
       read_bit(number , bit);
       break;
    }



    return 0;
}

void set_bit(int a , int b){
    a = a | (1 << b);
    printf("the number after set bit %d is %d",b,a);
}

void clear_bit(int a , int b){
    a = a & (~(1 << b));
    printf("the number after clear bit %d is %d",b,a);
}

void toggle_bit(int a , int b){
    a = a ^ (1 << b);
    printf("the number toggle set bit %d is %d",b,a);
}

void read_bit(int a , int b){
    int original_a = a ;
    a = (a >>b) & 1;
    printf("the bit %d of %d is %d",b,original_a,a);
}
