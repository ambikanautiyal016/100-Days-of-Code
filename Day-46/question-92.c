#include <stdio.h>

int main() {
    char str;
    int seen = {0}; // Tracks seen lowercase letters ('a' to 'z')
    char firstRepeating = '\0';

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Scan the string from left to right
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        // Process only lowercase alphabets ('a' to 'z')
        if (ch >= 'a' && ch <= 'z') {
            int index = ch - 'a'; // Map 'a'->0, 'b'->1, ..., 'z'->25

            if (seen[index] == 1) {
                firstRepeating = ch;
                break; // Stop immediately on the first repeated occurrence
            }
            seen[index] = 1;
        }
    }

    if (firstRepeating != '\0') {
        printf("First repeating lowercase alphabet: '%c'\n", firstRepeating);
    } else {
        printf("No repeating lowercase alphabet found.\n");
    }

    return 0;
}
