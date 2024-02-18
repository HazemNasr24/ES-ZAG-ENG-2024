#include <stdio.h>
#include <stdlib.h>
#include "main.h"
int main()
{
    unsigned int option;
    unsigned int N_var=0;
  printf("please enter the number :");
  scanf("%i",&Var);
  printf("please enter num of bit :");
  scanf("%i",&Bitno);
  printf("please select operation:\n1.set \n2.clear \n3.toggle \n");
  scanf("%i",&option);
switch(option){
    case 1:
    N_var= Set_Bit(Var,Bitno);
    break;
    case 2:
    N_var = Clear_Bit(Var,Bitno);
      break;
    case 3:
    N_var = Toggle_Bit(Var,Bitno);
      break;
    }
printf("Result= %i\n", N_var);
    return 0;
}
