#include <stdio.h>

int main() {
    int rows, cols;
    int isSymmetric = 1; // Flag: 1 means symmetric, 0 means not symmetric

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    // A non-square matrix can never be symmetric
    if (rows != cols) {
        printf("The matrix is NOT symmetric (must be a square matrix).\n");
        return 0;
    }

    int matrix[rows][cols];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check only the upper triangle (j > i) against the lower triangle
    for (int i = 0; i < rows; i++) {
        for (int j = i + 1; j < cols; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
        if (!isSymmetric) {
            break; // Exit early once a mismatch is found
        }
    }

    if (isSymmetric) {
        printf("\nThe matrix IS symmetric.\n");
    } else {
        printf("\nThe matrix is NOT symmetric.\n");
    }

    return 0;
}
