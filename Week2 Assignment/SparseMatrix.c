//Check if matrix is sparse

#include <stdio.h>

int main() {
    int rows, cols, i, j;
    int count = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    printf("Enter matrix elements:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            if (matrix[i][j] == 0)
                count++;
        }
    }

    int total = rows * cols;

    if (count > total / 2)
        printf("The matrix is a sparse matrix.\n");
    else
        printf("The matrix is NOT a sparse matrix.\n");

    return 0;
}

