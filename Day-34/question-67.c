#include <stdio.h>

int main() {
    int n, pos, value;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid array size! Please enter a positive integer.\n");
        return 1;
    }

    // Allocate size n + 1 to accommodate the new element
    int arr[n + 1];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position to insert (1 to %d): ", n + 1);
    scanf("%d", &pos);

    if (pos < 1 || pos > n + 1) {
        printf("Invalid position! Please enter a value between 1 and %d.\n", n + 1);
        return 1;
    }

    printf("Enter the value to insert: ");
    scanf("%d", &value);

    // Shift elements right starting from the end down to index (pos - 1)
    for (int i = n - 1; i >= pos - 1; i--) {
        arr[i + 1] = arr[i];
    }

    // Insert the new element at 0-based index (pos - 1)
    arr[pos - 1] = value;
    n++;

    printf("Array after insertion: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
