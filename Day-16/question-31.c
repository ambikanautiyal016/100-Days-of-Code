#include <stdio.h>

int main() {
    unsigned int num;
    int binary[32];
    int i = 0;

    printf("Enter a non-negative integer: ");
    scanf("%u", &num);

    if (num == 0) {
        printf("Binary: 0\n");
        return 0;
    }

    while (num > 0) {
        binary[i] = num % 2;
        num /= 2;
        i++;
    }

    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");

    return 0;
}
