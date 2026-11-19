#include <stdio.h>

int main() {
    int num1, num2, a, b, temp, gcd;
    long long lcm;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 == 0 || num2 == 0) {
        printf("LCM of %d and %d is: 0\n", num1, num2);
        return 0;
    }

    // Use absolute values so negative inputs are handled properly
    a = (num1 < 0) ? -num1 : num1;
    b = (num2 < 0) ? -num2 : num2;

    int abs_a = a, abs_b = b;

    // Step 1: Find GCD using Euclidean algorithm
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    gcd = a;

    // Step 2: Calculate LCM using the formula (a * b) / GCD
    lcm = ((long long)abs_a / gcd) * abs_b;

    printf("LCM of %d and %d is: %lld\n", num1, num2, lcm);

    return 0;
}
