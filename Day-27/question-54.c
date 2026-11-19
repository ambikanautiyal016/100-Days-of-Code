#include <stdio.h>

int main() {
    int n = 4; // Number of rows in the upper half (peak = 2*n - 1 = 7 stars)

    // Upper half including the middle row
    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int space = 1; space <= n - i; space++) {
            printf(" ");
        }
        // Print stars
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half
    for (int i = n - 1; i >= 1; i--) {
        // Print leading spaces
        for (int space = 1; space <= n - i; space++) {
            printf(" ");
        }
        // Print stars
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
