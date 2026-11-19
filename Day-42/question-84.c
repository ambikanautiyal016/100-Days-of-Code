#include <stdio.h>

int main() {
    char str;

    printf("Enter a lowercase string: ");
    fgets(str, sizeof(str), stdin);

    // Traverse the string until the null terminator
    for (int i = 0; str[i] != '\0'; i++) {
        // Check if the character is a lowercase letter
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32; // Or: str[i] -= ('a' - 'A');
        }
    }

    printf("Uppercase string: %s", str);

    return 0;
}
