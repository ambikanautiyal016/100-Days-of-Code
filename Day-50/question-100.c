#include <stdio.h>
#include <string.h>

int main() {
    char str;
    
    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) != NULL) {
        // Remove the trailing newline character added by fgets
        str[strcspn(str, "\n")] = '\0';
        
        int len = strlen(str);
        printf("All substrings are:\n");

        // Outer loop sets the starting index
        for (int i = 0; i < len; i++) {
            // Middle loop sets the ending index
            for (int j = i; j < len; j++) {
                // Inner loop prints characters from index i to j
                for (int k = i; k <= j; k++) {
                    printf("%c", str[k]);
                }
                printf("\n");
            }
        }
    }

    return 0;
}
