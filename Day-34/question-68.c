#include <stdio.h>

int main() {
    int n, pos;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid array size! Please enter a positive integer.\n");
        return 1;
    }

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position to delete (1 to %d): ", n);
    scanf("%d", &pos);

    if (pos < 1 || pos > n) {
        printf("Invalid position! Please enter a value between 1 and %d.\n", n);
        return 1;
    }

    // Shift elements left starting from (pos - 1) to overwrite the deleted element
    for (int i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--; // Decrease logical array size

    printf("Array after deletion: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
