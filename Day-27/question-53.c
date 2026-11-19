#include <stdio.h>

int main() {
    int n = 5; // Number of rows in the upper half (peak = 2*n - 1 = 9 stars)

    // Upper half including the middle row (1, 3, 5, 7, 9 stars)
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half (7, 5, 3, 1 stars)
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
