//Rotate matrix by 90 degree

#include <stdio.h>

#define N 3  // Change this as needed

void rotate90Clockwise(int matrix[N][N]) {
    // First transpose the matrix
    int i,j,k;
    for (i = 0; i < N; i++) {
        for (j = i; j < N; j++) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }

    // Then reverse each row
    for (i = 0; i < N; i++) {
        for (j = 0, k = N - 1; j < k; j++, k--) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[i][k];
            matrix[i][k] = temp;
        }
    }
}

void printMatrix(int matrix[N][N]) {
	int i,j;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[N][N] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printf("Original Matrix:\n");
    printMatrix(matrix);

    rotate90Clockwise(matrix);

    printf("Matrix after 90-degree rotation:\n");
    printMatrix(matrix);

    return 0;
}


