#include <stdio.h>

int main() {
    int num, original, is_negative = 0;
    int first_digit, last_digit, middle_part, power = 1;

    printf("Enter an integer: ");
    scanf("%d", &num);

    original = num;

    if (num < 0) {
        is_negative = 1;
        num = -num;
    }

    // Single-digit numbers remain unchanged
    if (num < 10) {
        printf("Number after swapping first and last digit: %d\n", original);
        return 0;
    }

    last_digit = num % 10;

    // Find the first digit and the highest power of 10
    int temp = num;
    while (temp >= 10) {
        temp /= 10;
        power *= 10;
    }
    first_digit = temp;

    // Extract middle digits and reconstruct the swapped number
    middle_part = (num % power) / 10;
    int swapped = (last_digit * power) + (middle_part * 10) + first_digit;

    if (is_negative) {
        swapped = -swapped;
    }

    printf("Number after swapping first and last digit: %d\n", swapped);

    return 0;
}
