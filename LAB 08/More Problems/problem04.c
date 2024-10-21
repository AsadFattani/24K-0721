#include <stdio.h>

#define n 3  // Define the n of the matrix

int main() {
    int matrix1[n][n], matrix2[n][n], result[n][n] = {0};  // Result matrix initialized to 0
    int i, j, k;

    // Input the first matrix
    printf("Enter elements of the first 3x3 matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input the second matrix
    printf("\nEnter elements of the second 3x3 matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Matrix multiplication
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            for (k = 0; k < n; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];  // Multiply and accumulate
            }
        }
    }

    // Display the result matrix
    printf("\nResultant 3x3 matrix after multiplication:\n");
    for (int i = 0; i < n; i++) {
        printf("[ ");
        for (int j = 0; j < n; j++) {
            printf("%4d", result[i][j]);
            if (j < n - 1) printf(", ");
        }
        printf(" ]\n");
    }

    return 0;
}
