#include <stdio.h>
#define n 3 // 3 x 3 matrix
#define pages 2 // 2 pages

int main() {

    int matrix[n][n][pages];
    int sum;

    for (int p = 0; p < pages; p++) {
        sum = 0;
        printf("Enter elements of the matrix ( PAGE %d ):\n", p + 1);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                printf("Element [%d][%d] of PAGE %d: ", i + 1, j + 1, p + 1);
                scanf("%d", &matrix[i][j][p]);
                sum += matrix[i][j][p];  
            }
        }
        printf("\nThe sum of PAGE %d is %d\n\n", p + 1, sum);
    }

    return 0;
}
