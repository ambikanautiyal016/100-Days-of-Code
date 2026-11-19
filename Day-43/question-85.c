#include <stdio.h>

int main() {
    char str[100];
    int length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // 1. Find the length of the string (excluding trailing '\n')
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }
    str[length] = '\0'; // Remove trailing newline if present

    // 2. Swap characters from both ends moving inward
    int left = 0;
    int right = length - 1;

    while (left < right) {
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;

        left++;
        right--;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}
