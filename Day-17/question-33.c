#include <stdio.h>

int main() {
    int num, original, remainder, digits = 0;
    long long sum = 0;

    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("%d is not an Armstrong number.\n", num);
        return 0;
    }

    original = num;

    // Step 1: Count the number of digits
    int temp = num;
    if (temp == 0) {
        digits = 1;
    } else {
        while (temp != 0) {
            temp /= 10;
            digits++;
        }
    }

    // Step 2: Calculate sum of each digit raised to the power of 'digits'
    temp = num;
    while (temp != 0) {
        remainder = temp % 10;

        long long power = 1;
        for (int i = 0; i < digits; i++) {
            power *= remainder;
        }

        sum += power;
        temp /= 10;
    }

    if (sum == original) {
        printf("%d is an Armstrong number.\n", original);
    } else {
        printf("%d is not an Armstrong number.\n", original);
    }

    return 0;
}
