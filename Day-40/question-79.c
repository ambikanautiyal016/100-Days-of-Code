#include <stdio.h>

int main() {
    int rows, cols;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nDiagonal Traversal:\n");

    // There are (rows + cols - 1) total diagonals
    for (int d = 0; d < rows + cols - 1; d++) {
        // Determine the starting row and column for diagonal 'd'
        int r = (d < rows) ? d : rows - 1;
        int c = (d < rows) ? 0 : d - rows + 1;

        // Move up-right along the current diagonal
        while (r >= 0 && c < cols) {
            printf("%d ", matrix[r][c]);
            r--;
            c++;
        }
        printf("\n"); // Print each diagonal on a new line
    }

    return 0;
}
