#include <stdio.h>

int main() {
    int n, sum = 0;

    // Input the value of n
    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    // Calculate sum using a loop
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    // Display the result
    printf("Sum of the first %d natural numbers: %d\n", n, sum);

    return 0;
}
