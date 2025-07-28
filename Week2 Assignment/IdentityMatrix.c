//Identity matrix check

#include <stdio.h>
#include <stdbool.h>

int main() {
    int n, i, j;
    bool isIdentity = true;

    printf("Enter the size of square matrix (n x n): ");
    scanf("%d", &n);

    int matrix[n][n];
    printf("Enter the matrix elements:\n");

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if ((i == j && matrix[i][j] != 1) || (i != j && matrix[i][j] != 0)) {
                isIdentity = false;
                break;
            }
        }
        if (!isIdentity)
            break;
    }

    if (isIdentity)
        printf("The matrix is an identity matrix.\n");
    else
        printf("The matrix is NOT an identity matrix.\n");

    return 0;
}

