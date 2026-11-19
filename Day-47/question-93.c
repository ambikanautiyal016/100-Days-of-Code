#include <stdio.h>
#include <string.h>

int areAnagrams(const char *str1, const char *str2) {
    // Strings of different lengths cannot be anagrams
    if (strlen(str1) != strlen(str2)) {
        return 0;
    }

    int count = {0}; // Frequency array for all extended ASCII characters

    // Increment count for str1 and decrement for str2 in a single loop
    for (int i = 0; str1[i] != '\0'; i++) {
        count[(unsigned char)str1[i]]++;
        count[(unsigned char)str2[i]]--;
    }

    // If all counts return to 0, both strings have identical character frequencies
    for (int i = 0; i < 256; i++) {
        if (count[i] != 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    char str1, str2;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; // Remove trailing newline

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0'; // Remove trailing newline

    if (areAnagrams(str1, str2)) {
        printf("\"%s\" and \"%s\" ARE anagrams.\n", str1, str2);
    } else {
        printf("\"%s\" and \"%s\" are NOT anagrams.\n", str1, str2);
    }

    return 0;
}
