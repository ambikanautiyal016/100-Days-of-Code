#include <stdio.h>

int main() {
    int n, key;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid array size! Please enter a positive integer.\n");
        return 1;
    }

    // Allocate size n + 1 to hold the extra element
    int arr[n + 1];

    printf("Enter %d elements in ascending sorted order:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &key);

    // Shift elements greater than 'key' one position to the right
    int i = n - 1;
    while (i >= 0 && arr[i] > key) {
        arr[i + 1] = arr[i];
        i--;
    }

    // Insert the new element at the vacated spot
    arr[i + 1] = key;
    n++;

    printf("Array after insertion: ");
    for (int j = 0; j < n; j++) {
        printf("%d ", arr[j]);
    }
    printf("\n");

    return 0;
}
