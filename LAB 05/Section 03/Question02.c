#include <stdio.h>

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    num > 0 ? printf("It is a possitive number") : num < 0 ? printf("It is a negative number") : printf("It is zero");

}