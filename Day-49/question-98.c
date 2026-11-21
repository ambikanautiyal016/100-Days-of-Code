#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name;
    
    printf("Enter a full name: ");
    if (fgets(name, sizeof(name), stdin) != NULL) {
        // Remove the trailing newline character added by fgets
        name[strcspn(name, "\n")] = '\0';

        // Remove any trailing spaces at the very end
        int len = strlen(name);
        while (len > 0 && isspace((unsigned char)name[len - 1])) {
            name[--len] = '\0';
        }

        // Find the last space to locate where the surname begins
        char *last_space = strrchr(name, ' ');

        // If there is no space, the user only entered one name
        if (last_space == NULL) {
            if (len > 0) {
                name = toupper((unsigned char)name);
                printf("%s\n", name);
            }
            return 0;
        }

        // Print initials for everything BEFORE the last space
        int print_next = 1;
        for (char *p = name; p < last_space; p++) {
            if (isspace((unsigned char)*p)) {
                print_next = 1;
            } else if (print_next && isalpha((unsigned char)*p)) {
                printf("%c. ", toupper((unsigned char)*p));
                print_next = 0;
            }
        }

        // Print the surname (starting right after the last space)
        char *surname = last_space + 1;
        if (*surname != '\0') {
            *surname = toupper((unsigned char)*surname);
            printf("%s\n", surname);
        }
    }

    return 0;
}
