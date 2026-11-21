#include <stdio.h>
#include <ctype.h>

int main() {
    char name[100];
    
    printf("Enter a full name: ");
    // fgets safely reads a full line including spaces
    if (fgets(name, sizeof(name), stdin) != NULL) {
        
        // Print the first character if it's not a space
        if (name[0] != ' ' && name[0] != '\n') {
            printf("%c ", toupper(name[0]));
        }

        // Loop through the rest of the string
        for (int i = 1; name[i] != '\0'; i++) {
            // If current char is a space and next char is a letter
            if (name[i] == ' ' && isalpha(name[i + 1])) {
                printf("%c ", toupper(name[i + 1]));
            }
        }
        printf("\n");
    }

    return 0;
}
