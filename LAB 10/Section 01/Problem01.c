#include <stdio.h>

int digitSum(int num){
    if (num / 10 == 0){
        return 1;
    }else{
        return num % 10 + digitSum(num / 10);
    }
}


int main() {
    int num;

    printf("Enter the number: ");
    scanf("%d", &num);

    printf("%d", digitSum(num));

    return 0;
}


