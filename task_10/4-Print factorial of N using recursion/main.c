#include <stdio.h>
#include <stdlib.h>

int main() {
    int Number ,result;
    printf("please enter a number: ");
    scanf("%d", &Number);
    result = factorial(Number);
    printf("%d! = %d\n", Number, result);

    return 0;
}

int factorial(int n) {
    if (n == 0) {
        return 1;
    }else
    return n * factorial(n - 1);
}
