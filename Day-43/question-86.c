#include <stdio.h>

int main() {
    char str;
    int length = 0;
    int isPalindrome = 1; // Flag: 1 = palindrome, 0 = not a palindrome

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // 1. Find string length and strip trailing newline
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }
    str[length] = '\0';

    // 2. Compare characters from both ends moving inward
    int left = 0;
    int right = length - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            isPalindrome = 0;
            break; // Exit early on first mismatch
        }
        left++;
        right--;
    }

    if (isPalindrome) {
        printf("\"%s\" IS a palindrome.\n", str);
    } else {
        printf("\"%s\" is NOT a palindrome.\n", str);
    }

    return 0;
}
