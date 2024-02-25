#include <stdio.h>

typedef struct {
    unsigned int hours;
    unsigned int mins;
    unsigned int seconds;
} period_t;

period_t period1;
period_t period2;

int main() {
    printf("Please enter hours, minutes, and seconds for the first period respectively: ");
    scanf("%u %u %u", &period1.hours, &period1.mins, &period1.seconds);
    printf("Please enter hours, minutes, and seconds for the second period respectively: ");
    scanf("%u %u %u", &period2.hours, &period2.mins, &period2.seconds);
    printf("Time difference: %u:%u:%u - %u:%u:%u = %d:%d:%d\n",
           period1.hours, period1.mins, period1.seconds,period2.hours, period2.mins, period2.seconds,
           period1.hours - period2.hours,period1.mins - period2.mins,period1.seconds - period2.seconds);

    return 0;
}
