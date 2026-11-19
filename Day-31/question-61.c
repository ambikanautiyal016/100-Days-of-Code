#include <stdio.h>

int main() {
    int n, key, found_index = -1;

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

    printf("Enter the element to search: ");
    scanf("%d", &key);

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            found_index = i;
            break;
        }
    }

    if (found_index != -1) {
        printf("Element %d found at index %d (position %d).\n", key, found_index, found_index + 1);
    } else {
        printf("Element %d not found in the array.\n", key);
    }

    return 0;
}
