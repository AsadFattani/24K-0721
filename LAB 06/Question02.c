#include <stdio.h>

int main (){
    int num ,count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    do{
        num = num / 10;
        count += 1;
    }while(num > 0);

    if (count >= 2){
        printf("Multiple");
    }else{
        printf("Not a multiple");
    }

}