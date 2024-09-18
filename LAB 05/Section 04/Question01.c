#include <stdio.h>

int main(){
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);


    printf("Before Swap\n1st number = %d, 2nd number = %d\n", num1, num2);

    num1 = num1 ^ num2;
    num2 = num1 ^ num2;
    num1 = num1 ^ num2;

    printf("After Swap\n1st number = %d, 2nd number = %d\n", num1, num2);
    return 0;
}