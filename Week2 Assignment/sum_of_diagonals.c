//Sum of diagonals

#include <stdio.h>

int main() {
    int n,i,j;
    printf("Enter the size of square matrix (n x n): ");
    scanf("%d", &n);

    int matrix[n][n];
    printf("Enter matrix elements:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);

    int mainDiagonal = 0, secondaryDiagonal = 0;

    for (i = 0; i < n; i++) {
        mainDiagonal += matrix[i][i];
        secondaryDiagonal += matrix[i][n - i - 1];
    }

    printf("Sum of main diagonal: %d\n", mainDiagonal);
    printf("Sum of secondary diagonal: %d\n", secondaryDiagonal);
    printf("Total diagonal sum: %d\n", mainDiagonal + secondaryDiagonal);

    return 0;
}

