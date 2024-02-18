#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.14
int main()
{

    //calculate the area of a circle
    float radius , area ;
    printf("please enter the radius :");
    scanf("%f",&radius);
    area = pi * radius * radius ;
    printf("the area of a circle wit radius %.2f is %.2f:",radius,area);

    printf("\n===================================================\n");
     printf("\n===================================================\n");



    //Print the minimum and the maximum numbers from 3 numbers .
    int M, L, N;
    printf("Enter three numbers M, L, and N: ");
    scanf("%d %d %d", &M, &L, &N);

    int min = M;
    if (L < min) {
        min = L;
    }

    if (N < min) {
        min = N;
    }

    printf("Minimum number: %d\n", min);

    int max = M;

    if (L > max) {
        max = L;
    }

    if (N > max) {
        max = N;
    }

    printf("Maximum number: %d\n", max);

    printf("\n===================================================\n");
     printf("\n===================================================\n");

     int A, B, C, D, X;

    printf("Enter the value of A: ");
    scanf("%d", &A);

    printf("Enter the value of B: ");
    scanf("%d", &B);

    printf("Enter the value of C: ");
    scanf("%d", &C);

    printf("Enter the value of D: ");
    scanf("%d", &D);

    X = (A * B) - (C * D);

    printf("Result of the equation X = ((A * B) - (C * D)): %d\n", X);



    return 0;
}
