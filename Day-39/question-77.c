#include <stdio.h>

int main() {
    int rows, cols;
    int isDistinct = 1; // Flag: 1 = all distinct, 0 = duplicate found

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    // Main diagonal is defined for a square matrix
    if (rows != cols) {
        printf("Please enter a square matrix (rows must equal columns).\n");
        return 0;
    }

    int matrix[rows][cols];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Compare each diagonal element matrix[i][i] with the rest of the diagonal
    for (int i = 0; i < rows - 1; i++) {
        for (int j = i + 1; j < rows; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                isDistinct = 0;
                break;
            }
        }
        if (!isDistinct) {
            break; // Exit early as soon as a duplicate is found
        }
    }

    if (isDistinct) {
        printf("\nAll main diagonal elements are DISTINCT.\n");
    } else {
        printf("\nMain diagonal elements are NOT distinct (duplicates found).\n");
    }

    return 0;
}
