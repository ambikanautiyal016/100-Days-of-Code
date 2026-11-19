#include <stdio.h>

int main() {
    int num, temp, digit, has_odd = 0;
    long long product = 1;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Handle negative numbers by taking the absolute value
    temp = (num < 0) ? -num : num;

    while (temp != 0) {
        digit = temp % 10;
        if (digit % 2 != 0) {
            product *= digit;
            has_odd = 1;
        }
        temp /= 10;
    }

    if (has_odd) {
        printf("Product of odd digits of %d = %lld\n", num, product);
    } else {
        printf("No odd digits found in %d.\n", num);
    }

    return 0;
}
