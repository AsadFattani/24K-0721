#include <stdio.h>

// this is going to print an array
// | 1 |  2 |  3 |  4 |  5 |                             
// | 1 |  3 |  5 |  7 |  9 |                             
// | 1 |  4 |  7 | 10 | 13 |                             
// | 1 |  5 |  9 | 13 | 17 |   

int main(){
    int arr[5][5];
    int i, j;

    for (int i = 0; i < 4; i++){
        int value = 1;
        for(int j = 0; j < 5; j++){
            arr[i][j] = value;
            value = value + i + 1;
        }
    }
    for (int i = 0; i < 4; i++){
    printf("|");
        for (int j = 0;j < 5; j++){
            printf("%2d | ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}


