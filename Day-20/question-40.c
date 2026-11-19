#include <stdio.h>
#include <string.h>

int main() {
    char binary[65];

    printf("Enter a binary number: ");
    scanf("%64s", binary);

    for (int i = 0; binary[i] != '\0'; i++) {
        if (binary[i] == '0') {
            binary[i] = '1';
        } else if (binary[i] == '1') {
            binary[i] = '0';
        } else {
            printf("Invalid input! Please enter only 0s and 1s.\n");
            return 1;
        }
    }

    printf("1's complement: %s\n", binary);

    return 0;
}
