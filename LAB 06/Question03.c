#include <stdio.h>

int main (){
    int num;
    do{
        printf("Enter a number: ");
        scanf("%d", &num);
    }while(num == 0 || num == 1);

    for (int i = 2; (i <= num/2); i++){
        if (num % i == 0){
            printf("%d is a Composite number", num);
            return 0;
        }
    }
    printf("%d is a Prime number", num);
    

}

