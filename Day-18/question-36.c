#include <stdio.h>

int main() {
    int a, b, num1, num2, temp;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 == 0 && num2 == 0) {
        printf("HCF (GCD) is undefined for both numbers being zero.\n");
        return 1;
    }

    // Use absolute values so negative inputs are handled properly
    a = (num1 < 0) ? -num1 : num1;
    b = (num2 < 0) ? -num2 : num2;

    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    printf("HCF (GCD) of %d and %d is: %d\n", num1, num2, a);

    return 0;
}
