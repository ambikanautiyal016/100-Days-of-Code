#include <stdio.h>

int main() {
    char op;
    double num1, num2;

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &op);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    switch (op) {
        case '+':
            printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
            } else {
                printf("Error! Division by zero is not allowed.\n");
            }
            break;
        case '%':
            if ((int)num2 != 0) {
                printf("%d %% %d = %d\n", (int)num1, (int)num2, (int)num1 % (int)num2);
            } else {
                printf("Error! Modulo by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid operator! Please enter +, -, *, /, or %%.\n");
    }

    return 0;
}
