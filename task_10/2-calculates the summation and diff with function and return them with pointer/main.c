#include <stdio.h>
#include <stdlib.h>

void calculate(int a, int b, int *sum, int *difference);

int main() {
    int number_1, number_2 , sum, difference;
    printf("please Enter first number: ");
    scanf("%d", &number_1);
    printf("please Enter second number: ");
    scanf("%d", &number_2);
    calculate(number_1, number_2, &sum, &difference);
    printf("the sum of two number is %d\n", sum);
    printf("the difference of two number is %d\n", difference);

    return 0;
}

void calculate(int a, int b, int *sum, int *difference) {
    *sum = a + b;
    *difference = a - b;
}
