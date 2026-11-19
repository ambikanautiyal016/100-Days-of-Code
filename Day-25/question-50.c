#include <stdio.h>

int main() {
    int rows = 5;

    for (int i = 1; i <= rows; i++) {
        // Print leading spaces
        for (int space = 1; space < i; space++) {
            printf(" ");
        }
        // Print stars
        for (int j = i; j <= rows; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
