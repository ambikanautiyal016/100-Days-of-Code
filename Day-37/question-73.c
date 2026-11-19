#include <stdio.h>

int main() {
    int rows, cols;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];
    int rowSum[rows]; // 1D array to store the sum of each row

    // Read matrix elements
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate row-wise sums and store them in rowSum[]
    for (int i = 0; i < rows; i++) {
        rowSum[i] = 0; // Initialize sum for the current row
        for (int j = 0; j < cols; j++) {
            rowSum[i] += matrix[i][j];
        }
    }

    // Print the matrix alongside each row's sum
    printf("\nMatrix and Row Sums:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("| Sum = %d\n", rowSum[i]);
    }

    return 0;
}
