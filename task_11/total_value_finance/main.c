#include<stdio.h>

typedef struct {
    unsigned int salary;
    unsigned int bonus;
    unsigned int deduction;
} employee_t;

int main() {
    employee_t Ahmed;
    employee_t Waleed;
    employee_t Amr;
    printf("Please enter Ahmed's salary: ");
    scanf("%u", &Ahmed.salary);
    printf("Please enter Ahmed's bonus: ");
    scanf("%u", &Ahmed.bonus);
    printf("Please enter Ahmed's deduction: ");
    scanf("%u", &Ahmed.deduction);
    printf("Please enter Waleed's salary: ");
    scanf("%u", &Waleed.salary);
    printf("Please enter Waleed's bonus: ");
    scanf("%u", &Waleed.bonus);
    printf("Please enter Waleed's deduction: ");
    scanf("%u", &Waleed.deduction);
    printf("Please enter Amr's salary: ");
    scanf("%u", &Amr.salary);
    printf("Please enter Amr's bonus: ");
    scanf("%u", &Amr.bonus);
    printf("Please enter Amr's deduction: ");
    scanf("%u", &Amr.deduction);
    unsigned int ahmed_cash = Ahmed.salary + Ahmed.bonus - Ahmed.deduction;
    unsigned int Waleed_cash = Waleed.salary + Waleed.bonus - Waleed.deduction;
    unsigned int Amr_cash = Amr.salary + Amr.bonus - Amr.deduction;
    printf("Total value needed: %u\n", ahmed_cash + Waleed_cash + Amr_cash);
    return 0;
}
