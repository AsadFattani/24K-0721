#include <stdio.h>
#include <stdlib.h>

int main(){
    int m, n;

    for(int i = 0; i < 2; i++){
        printf("Enter the number of rows of matrix %d: ", i+1);
        scanf("%d", &m);
        printf("Enter the number of columns of matrix %d: ", i+1);
        scanf("%d", &n);
    }
    int *matrices = (int*)malloc(m * n * sizeof(int));
    int *matrices = (int*)malloc(m * n * sizeof(int));


    

    

    return 0;
}
    





