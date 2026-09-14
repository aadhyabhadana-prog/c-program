#include <stdio.h>
#include <stdlib.h>
int main() {
    int r1, c1, r2, c2;
    printf("Enter rows and columns for the first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns for the second matrix: ");
    scanf("%d %d", &r2, &c2);
    if (c1 != r2) {
        printf("Error! Matrix multiplication is not possible.\n");
        printf("Columns of the first matrix (%d) must equal rows of the second matrix (%d).\n", c1, r2);
        return 1; 
    }
    int first[r1][c1];
    int second[r2][c2];
    int result[r1][c2];
    printf("\nEnter elements of the first matrix:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            printf("Enter element a[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &first[i][j]);
        }
    }
    printf("\nEnter elements of the second matrix:\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            printf("Enter element b[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &second[i][j]);
        }
    }
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                result[i][j] += first[i][k] * second[k][j];
            }
        }
    }
    printf("\nResultant Multiplied Matrix:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

