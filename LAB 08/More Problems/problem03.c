#include <stdio.h>

#define n 3

int main() {
    int matrix[n][n];
    int i, j, k;
    int saddlePointFound = 0;

    printf("Enter the elements of the 3x3 matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        int minRow = matrix[i][0];
        int colIndex = 0;

        for (j = 1; j < n; j++) {
            if (matrix[i][j] < minRow) {
                minRow = matrix[i][j];
                colIndex = j;
            }
        }

        int isSaddlePoint = 1;
        for (k = 0; k < n; k++) {
            if (matrix[k][colIndex] > minRow) {
                isSaddlePoint = 0;  // It's not a saddle point
                break;
            }
        }

        if (isSaddlePoint) {
            printf("Saddle point found at [%d][%d]: %d\n", i + 1, colIndex + 1, minRow);
            saddlePointFound = 1;
        }
    }

    if (!saddlePointFound) {
        printf("No saddle point found in the matrix.\n");
    }

    return 0;
}
