#include <stdio.h>

int main() {
    int a, b;

    // Input two numbers
    printf("Enter the first number (a): ");
    scanf("%d", &a);

    printf("Enter the second number (b): ");
    scanf("%d", &b);

    printf("\nBefore swapping: a = %d, b = %d\n", a, b);

    // Swap without using a third variable
    a = a + b;
    b = a - b;
    a = a - b;

    // Display the swapped numbers
    printf("After swapping:  a = %d, b = %d\n", a, b);

    return 0;
}
