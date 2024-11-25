// I added these comments to better understand
// the code during future revisions. Each comment
// explains the use case of the corresponding 
// line, written entirely by me for my own reference.

#include <stdio.h>
#include <stdlib.h>

// function to multiply two matrices
void multiplyMatrices(int **a, int **b, int **result, int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            result[i][j] = 0;
            for (int k = 0; k < n; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}// end multiplyMatrices

// function to print the resultant matrix
void printMatrix(int **matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}// end printMatrix


int main() {
    int m, n;

    // get the number of rows and columns of the matrices
    printf("Enter the number of rows of the first matrix: ");
    scanf("%d", &m);
    printf("Enter the number of columns of the first matrix (and rows of the second matrix): ");
    scanf("%d", &n);

    // allocate memory for the matrix 1 
    int **matrix1 = (int **)malloc(m * sizeof(int *));
    // allocate memory for the matrix 2
    int **matrix2 = (int **)malloc(n * sizeof(int *));
    // allocate memory for the resultant matrix
    int **result = (int **)malloc(m * sizeof(int *));

    // allocate memory for each row of the matrices
    for (int i = 0; i < m; i++) {
        matrix1[i] = (int *)malloc(n * sizeof(int));
        // as resultant is always m sized
        result[i] = (int *)malloc(m * sizeof(int));
    }

    // allocate memory for each row of the second matrix
    for (int i = 0; i < n; i++) {
        matrix2[i] = (int *)malloc(m * sizeof(int));
    }
    // end allocation

    // get the elements of the matrices
    printf("Enter elements of matrix 1:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    // get the elements of the second matrix
    printf("Enter elements of matrix 2:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    printf("Matrix 1:\n");
    printMatrix(matrix1, m, n);

    printf("Matrix 2:\n");
    printMatrix(matrix2, n, m);

    multiplyMatrices(matrix1, matrix2, result, m, n);

    printf("Resultant matrix:\n");
    printMatrix(result, m, m);

    // free the allocated memory
    for (int i = 0; i < m; i++) {
        free(matrix1[i]);
        free(result[i]);
    }
    for (int i = 0; i < n; i++) {
        free(matrix2[i]);
    }
    free(matrix1);
    free(matrix2);
    free(result);
    // end free

    return 0;
}