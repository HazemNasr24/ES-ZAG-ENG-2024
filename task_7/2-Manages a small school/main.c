#include <stdio.h>
#include <stdlib.h>

unsigned int succ_degree = 5;
unsigned int grades[3][10] = {
    {5, 7, 3, 2, 1, 5, 4, 8,2, 9},
    {4, 6, 8, 2, 7, 5, 3, 6, 9, 4},
    {5, 3, 6, 7, 2, 3, 4, 6, 1, 8}
};

unsigned int passed = 0;
unsigned int failed = 0;
float sum = 0;
float num_of_stud = 0;

int main()
{
    unsigned int highest_grade = grades[0][0];
    unsigned int lowest_grade = grades[0][0];

    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 10; y++)
        {
            sum += grades[x][y];
            num_of_stud++;

            if (grades[x][y] > highest_grade)
            {
                highest_grade = grades[x][y];
            }

            if (grades[x][y] < lowest_grade)
            {
                lowest_grade = grades[x][y];
            }

            if (grades[x][y] < succ_degree)
                failed++;
            else
                passed++;
        }
    }

    printf("Number of passed students is: %d\n", passed);
    printf("Number of failed students is: %d\n", failed);
    printf("Highest grade is: %d\n", highest_grade);
    printf("Lowest grade is: %d\n", lowest_grade);
    printf("Average grade is: %.2f\n", (sum / num_of_stud));

    return 0;
}
