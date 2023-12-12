#include <stdio.h>
#include <string.h>

int main() {
    char string[500];

    printf("Please enter a string: ");
    gets(string);

    int length = strlen(string);

    for (int i = 0; i <= (length - 1); i++) {
        if (string[i] != ' ') {
            printf("%c", string[i]);
        } else {
            printf("\n");
        }
    }

    return 0;
}
