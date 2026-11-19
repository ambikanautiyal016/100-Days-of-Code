#include <stdio.h>

int main() {
    int num, original, digit;
    long long sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("%d is not a strong number.\n", num);
        return 0;
    }

    original = num;

    while (num != 0) {
        digit = num % 10;

        long long fact = 1;
        for (int i = 1; i <= digit; i++) {
            fact *= i;
        }

        sum += fact;
        num /= 10;
    }

    if (sum == original) {
        printf("%d is a strong number.\n", original);
    } else {
        printf("%d is not a strong number.\n", original);
    }

    return 0;
}
