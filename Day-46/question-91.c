#include <stdio.h>
#include <ctype.h> // For tolower()

// Helper function to check if a character is a vowel
int isVowel(char ch) {
    ch = tolower((unsigned char)ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int main() {
    char str;
    int j = 0; // Write index for non-vowel characters

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Traverse with read index 'i' and keep only non-vowels at 'j'
    for (int i = 0; str[i] != '\0'; i++) {
        if (!isVowel(str[i])) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0'; // Null-terminate the shortened string

    printf("String without vowels: %s", str);

    return 0;
}
