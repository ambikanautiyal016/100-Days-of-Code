#include <stdio.h>

int main() {
    char str;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Traverse the string and replace every space with a hyphen
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            str[i] = '-';
        }
    }

    printf("Modified string: %s", str);

    return 0;
}
