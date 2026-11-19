#include <stdio.h>
#include <string.h>

int isRotation(const char *str1, const char *str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    // 1. Lengths must be equal (and non-empty)
    if (len1 != len2 || len1 == 0) {
        return 0;
    }

    // 2. Concatenate str1 with itself: temp = str1 + str1
    char temp[2 * len1 + 1];
    strcpy(temp, str1);
    strcat(temp, str1);

    // 3. If str2 is a substring of temp, it is a valid rotation
    return (strstr(temp, str2) != NULL);
}

int main() {
    char str1, str2;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; // Remove trailing newline

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0'; // Remove trailing newline

    if (isRotation(str1, str2)) {
        printf("\"%s\" IS a rotation of \"%s\".\n", str2, str1);
    } else {
        printf("\"%s\" is NOT a rotation of \"%s\".\n", str2, str1);
    }

    return 0;
}
