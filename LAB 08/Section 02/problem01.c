#include <stdio.h>

int main() {
    int n;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n][n];
    int matrix[n][n], transpose[n][n];

    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    printf("\n");

    printf("Original matrix:\n");
    for (int i = 0; i < n; i++) {
        printf("[ ");
        for (int j = 0; j < n; j++) {
            printf("%2d", matrix[i][j]);
            if (j < n - 1) printf(", ");
        }
        printf(" ]\n");
    }

    printf("\n");
    
    printf("Transpose of the matrix:\n");
    for (int i = 0; i < n; i++) {
        printf("[");
        for (int j = 0; j < n; j++) {
            printf("%2d", transpose[i][j]);
            if (j < n - 1) printf(", ");
        }
        printf(" ]\n");
    }


    return 0;
}


