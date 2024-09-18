#include <stdio.h>

int main(){
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    num1 > num2 ? printf("%d is greater than %d", num1, num2) : num2 > num1 ? printf("%d is greater than %d", num2, num1) : printf("Both are equal");

}


