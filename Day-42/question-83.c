#include <stdio.h>
#include <ctype.h> // For tolower() and isalpha()

int main() {
    char str[100];
    int vowels = 0, consonants = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        // Convert character to lowercase to handle both cases uniformly
        char ch = tolower((unsigned char)str[i]);

        // Check if the character is an alphabet letter (a-z)
        if (isalpha((unsigned char)ch)) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}
