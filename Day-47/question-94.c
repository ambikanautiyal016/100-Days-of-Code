#include <stdio.h>
#include <ctype.h> // For isspace()

int main() {
    char str[500];
    int currLen = 0, maxLen = 0;
    int currStart = 0, maxStart = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; ; i++) {
        // Check if we reached a space, newline, or the end of the string
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\0') {
            if (currLen > maxLen) {
                maxLen = currLen;
                maxStart = currStart;
            }
            currLen = 0;          // Reset current word length
            currStart = i + 1;    // Next word could start at the next index

            if (str[i] == '\0') {
                break;            // Exit loop at the end of the string
            }
        } else {
            currLen++;
        }
    }

    printf("Longest word: ");
    for (int i = 0; i < maxLen; i++) {
        printf("%c", str[maxStart + i]);
    }
    printf("\nLength: %d\n", maxLen);

    return 0;
}
