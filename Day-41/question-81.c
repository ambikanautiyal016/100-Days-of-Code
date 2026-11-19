#include <stdio.h>

int main() {
    char str[100];
    int count = 0;

    printf("Enter a string: ");
    // Read a full line including spaces
    fgets(str, sizeof(str), stdin);

    // Count characters until the null terminator or trailing newline
    while (str[count] != '\0' && str[count] != '\n') {
        count++;
    }

    printf("Length of the string = %d\n", count);

    return 0;
}
