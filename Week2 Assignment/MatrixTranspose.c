//Transpose of matrix

#include <stdio.h>

int main() {
    int rows, cols,i,j;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols], transpose[cols][rows];

    
    printf("Enter elements of matrix:\n");
    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
            scanf("%d", &matrix[i][j]);

    
    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
            transpose[j][i] = matrix[i][j];

    
    printf("Transpose of the matrix:\n");
    for (i = 0; i < cols; i++) {
        for (j = 0; j < rows; j++)
            printf("%d ", transpose[i][j]);
        printf("\n");
    }

    return 0;
}

