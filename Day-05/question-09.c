#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time;
    double simple_interest, compound_interest, total_amount;

    printf("Enter principal amount: ");
    scanf("%lf", &principal);

    printf("Enter annual rate of interest (in %%): ");
    scanf("%lf", &rate);

    printf("Enter time (in years): ");
    scanf("%lf", &time);

    simple_interest = (principal * rate * time) / 100.0;
    total_amount = principal * pow(1.0 + (rate / 100.0), time);
    compound_interest = total_amount - principal;

    printf("\nSimple Interest: %.2f\n", simple_interest);
    printf("Compound Interest: %.2f\n", compound_interest);
    printf("Total Amount (with CI): %.2f\n", total_amount);

    return 0;
}
