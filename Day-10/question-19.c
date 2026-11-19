#include <stdio.h>

int main() {
    double a, b, c;

    printf("Enter the three side lengths of the triangle: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    // Check triangle validity using the Triangle Inequality Theorem
    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) {
            printf("The triangle is Equilateral.\n");
        } else if (a == b || b == c || a == c) {
            printf("The triangle is Isosceles.\n");
        } else {
            printf("The triangle is Scalene.\n");
        }
    } else {
        printf("Invalid triangle! The sum of any two sides must be greater than the third side.\n");
    }

    return 0;
}
