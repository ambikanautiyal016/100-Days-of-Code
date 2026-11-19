#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        double numerator = 2.0 * i;
        double denominator = 4.0 * i - 1.0;
        sum += numerator / denominator;
    }

    printf("Sum of the series up to %d terms = %.4f\n", n, sum);

    return 0;
}
