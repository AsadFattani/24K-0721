#include <stdio.h>

int main(){
    int num;

    printf("Enter a possitive number: ");
    scanf("%d", &num);

    while (num < 0){
        printf("Enter a possitive number: ");
        scanf("%d", &num);
    }

    if (num % 3 == 0 && num % 5 == 0){
        printf("%d is both divisible by both 3 and 5", num);
    }else if (num % 3 == 0 && num % 5 != 0 ){
        printf("%d is only divisible by 3", num);
    }else if (num % 3 != 0 && num % 5 == 0){
        printf("%d is only divisible by 5", num);
    }else{
        printf("%d is undevisible by both 3 and 5", num);
    }
    return 0;
}


