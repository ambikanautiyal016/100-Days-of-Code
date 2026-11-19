#include <stdio.h>

int main() {
    char str, target;
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter the character to find: ");
    scanf(" %c", &target); // Leading space skips any leftover newline in the buffer

    // Count occurrences of 'target' in the string
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == target) {
            count++;
        }
    }

    printf("Frequency of '%c' = %d\n", target, count);

    return 0;
}
