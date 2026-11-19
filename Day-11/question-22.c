#include <stdio.h>

int main() {
    double cost_price, selling_price, amount, percentage;

    printf("Enter Cost Price (CP): ");
    scanf("%lf", &cost_price);

    printf("Enter Selling Price (SP): ");
    scanf("%lf", &selling_price);

    if (cost_price <= 0) {
        printf("Invalid Cost Price! Cost price must be greater than zero.\n");
        return 1;
    }

    if (selling_price > cost_price) {
        amount = selling_price - cost_price;
        percentage = (amount / cost_price) * 100.0;
        printf("Profit: %.2f\n", amount);
        printf("Profit Percentage: %.2f%%\n", percentage);
    } else if (cost_price > selling_price) {
        amount = cost_price - selling_price;
        percentage = (amount / cost_price) * 100.0;
        printf("Loss: %.2f\n", amount);
        printf("Loss Percentage: %.2f%%\n", percentage);
    } else {
        printf("No Profit, No Loss (0.00%%).\n");
    }

    return 0;
}
