#include <stdio.h>

int main() {
    int rows, cols;

    // 1. Get matrix dimensions from the user
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    // Declare a 2D array (Variable Length Array)
    int matrix[rows][cols];

    // 2. Read elements into the matrix
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // 3. Print the matrix in grid format
    printf("\nThe entered matrix is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}
