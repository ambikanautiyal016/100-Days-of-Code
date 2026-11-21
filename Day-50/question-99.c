#include <stdio.h>

int main() {
    int day, month, year;
    
    // Array of 3-letter month abbreviations (index 0 left empty so 1 = Jan)
    const char *months[] = {
        "", "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };

    printf("Enter date (dd/mm/yyyy): ");
    // Read the three integer parts separated by slashes
    if (scanf("%d/%d/%d", &day, &month, &year) == 3) {
        
        // Validate that the month is between 1 and 12
        if (month >= 1 && month <= 12) {
            // %02d ensures single-digit days keep a leading zero (e.g., 05)
            printf("Formatted date: %02d-%s-%d\n", day, months[month], year);
        } else {
            printf("Invalid month entered.\n");
        }
        
    } else {
        printf("Invalid date format. Please use dd/mm/yyyy.\n");
    }

    return 0;
}
