#include <stdio.h>

int main() {
    int num, temp, sum = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Handle negative numbers by taking the absolute value
    temp = (num < 0) ? -num : num;

    while (temp != 0) {
        sum += temp % 10;
        temp /= 10;
    }

    printf("Sum of digits of %d = %d\n", num, sum);

    return 0;
}
