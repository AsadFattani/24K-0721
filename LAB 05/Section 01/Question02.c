#include <stdio.h>

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num < 0){
        printf("The number entered is a negative number");
    }else if (num == 0){
        printf("The number entered is zero");
    }else{
        if (num % 2 == 0){
            printf("The number entered is an even possitive number");
        }else{
            printf("The number entered is an odd possitive number");
        }
    }
    return 0;
}


