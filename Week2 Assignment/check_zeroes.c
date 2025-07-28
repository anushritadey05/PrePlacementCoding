//Count zeros in matrix

#include <stdio.h>

int main() {
    int rows, cols, i, j, zeroCount = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    printf("Enter matrix elements:\n");
    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            if (matrix[i][j] == 0)
                zeroCount++;
        }

    printf("Total number of zeros in the matrix: %d\n", zeroCount);

    return 0;
}

