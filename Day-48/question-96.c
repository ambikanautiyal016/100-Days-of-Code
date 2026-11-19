#include <stdio.h>
#include <string.h>

// Helper function to reverse characters between indices 'left' and 'right'
void reverseSubstring(char str[], int left, int right) {
    while (left < right) {
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;
        left++;
        right--;
    }
}

int main() {
    char str;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove trailing newline

    int wordStart = 0;

    for (int i = 0; ; i++) {
        // When a space or null terminator is reached, reverse the preceding word
        if (str[i] == ' ' || str[i] == '\0') {
            reverseSubstring(str, wordStart, i - 1);
            wordStart = i + 1; // Next word begins after the space

            if (str[i] == '\0') {
                break;
            }
        }
    }

    printf("Modified sentence: %s\n", str);

    return 0;
}
