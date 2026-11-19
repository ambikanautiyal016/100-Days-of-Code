#include <stdio.h>

int main() {
    int n = 3; // Peak block size = 2*n - 1 (5 stars)

    // Upper half including middle (blocks of 1, 3, 5 stars)
    for (int i = 1; i <= n; i++) {
        int stars = 2 * i - 1;
        for (int j = 1; j <= stars; j++) {
            printf("*\n");
        }
        printf("\n");
    }

    // Lower half (blocks of 3, 1 stars)
    for (int i = n - 1; i >= 1; i--) {
        int stars = 2 * i - 1;
        for (int j = 1; j <= stars; j++) {
            printf("*\n");
        }
        if (i > 1) {
            printf("\n");
        }
    }

    return 0;
}
