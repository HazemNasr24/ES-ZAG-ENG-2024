#include <stdio.h>
#include <stdlib.h>
double calc_sum(int arr[], int size);

int main() {
    int size, i;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements separated by space: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    double avg = calc_sum(arr, size) / size ;
    printf("Average = %.6lf\n", avg);
    return 0;
}

double calc_sum(int arr[], int size) {
    if (size <= 0) {
        return 0;
    } else {
        return (calc_sum(arr, size - 1) + arr[size - 1]);
    }
}
