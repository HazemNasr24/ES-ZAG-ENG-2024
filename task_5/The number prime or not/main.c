#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number , ok ;
    printf("please enter number: ");
    scanf("%d",&number);
    for(int i =2 ; i<=number-1 ;++i){
            if(number%i != 0)
                ok = 1;
            if(number%i == 0){
                    ok = 0;
                    break;
                }
        }

      if(ok==1)
        printf("%d is a prime number",number);
      if(ok==0)
        printf("%d is not a prime number",number);
    return 0;
}
