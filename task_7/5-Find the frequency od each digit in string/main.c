#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char string[500];

    printf("please enter string :");
    scanf("%s",string);

    int freq[10] = {0,0,0,0,0,0,0,0,0,0};
    int length = strlen(string);
    for (int index =0 ; index <= (length-1) ; index++){
           switch (string[index]) {
             case '0':
                 freq[0]++;
                  break;
             case '1':
                 freq[1]++;
                  break;
             case '2':
                 freq[2]++;
                  break;
             case '3':
                 freq[3]++;
                  break;
             case '4':
                 freq[4]++;
                  break;
             case '5':
                 freq[5]++;
                  break;
             case '6':
                 freq[6]++;
                  break;
             case '7':
                 freq[7]++;
                  break;
             case '8':
                freq[8]++;
                  break;
             case '9':
                 freq[9]++;
                  break;

    }
    }


    printf("frequency of each digit is : ");
    for (int j =0 ; j<= 9 ; j++){
        printf("%d", freq[j]);
    }


    return 0;

}
