#include <stdio.h>

void product (int num1, int num2){
    printf("The Product of %d and %d is %d", num1, num2, num1 * num2);
}

int main() {
    int num1, num2;

    printf("Enter a number: ");
    scanf("%d", &num1);
    printf("Enter another number: ");
    scanf("%d", &num2);


    product(num1, num2);

    return 0;
}


