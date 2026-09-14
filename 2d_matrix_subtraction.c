#include <stdio.h>
int main() {
    int rows, cols, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);
    int matrixA[rows][cols];
    int matrixB[rows][cols];
    int result[rows][cols];
    printf("\nEnter elements for Matrix A:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Enter element A[%d][%d]: ", i, j);
            scanf("%d", &matrixA[i][j]);
        }
    }
    printf("\nEnter elements for Matrix B:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Enter element B[%d][%d]: ", i, j);
            scanf("%d", &matrixB[i][j]);
        }
    }
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            result[i][j] = matrixA[i][j] - matrixB[i][j];
        }
    }
    printf("\nResultant Matrix (A - B):\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}

