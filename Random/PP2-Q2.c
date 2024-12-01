#include <stdio.h>

void Analysis(int array[10][10]){
    int rowcount[10] = {0}, colcount[10] = {0}, rownum = 0, colnum = 0, disPark = 0;

    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            if (array[i][j] == 0){
                rowcount[i]++;
            }
            if (array[i][j] == 3){
                disPark++;
            }
        }
    }

    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            if (array[j][i] == 0){
                colcount[i]++;
            }   
        }
    }
    for (int i = 0; i < 10; i++){
        if (rowcount[i] > rowcount[rownum]){
            rownum = i;
        }
    }
    for (int i = 0; i < 10; i++){
        if (colcount[i] > colcount[colnum]){
            colnum = i;
        }
    }

    printf("The row with the most empty spaces is %d\n", rownum);
    if (disPark  >= 10){
        printf("The disabled parking is more than 10%%\n");
    }else{
        printf("The disabled parking is less than 10%%\n");
    }
    if (rowcount[rownum] > colcount[colnum]){
        printf("Row %d largest contiguous block of empty spaces", rownum);
    }else if (colcount[colnum] > rowcount[rownum]){
        printf("Column %d largest contiguous block of empty spaces", colnum);
    }else{
        printf("Row %d and Column %d largest contiguous block of empty spaces", rownum, colnum);
    }


}

int main(){
    int arr[10][10] = {{0, 0, 3, 0, 2, 0, 0, 0, 3, 0},
                       {4, 4, 1, 0, 0, 0, 0, 0, 1, 0},
                       {3, 0, 2, 0, 0, 3, 2, 0, 1, 0},
                       {0, 0, 1, 0, 0, 0, 0, 0, 1, 2},
                       {2, 0, 1, 0, 0, 0, 0, 3, 1, 0},
                       {0, 0, 0, 1, 0, 0, 0, 0, 0, 0},
                       {2, 3, 1, 0, 3, 0, 0, 3, 1, 2},
                       {0, 0, 2, 3, 0, 0, 0, 2, 1, 3},
                       {0, 0, 1, 0, 3, 0, 0, 0, 1, 0},
                       {3, 3, 1, 2, 3, 2, 0, 3, 1, 0}};

    Analysis(arr);

    return 0;
}