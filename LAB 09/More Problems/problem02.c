#include <stdio.h>

void swapIntegers(int num1, int num2){
    int temp;

    printf("\n");
    printf("Before Swap");
    printf("\nFirst number is %d ", num1);
    printf("\nSecond number is %d ", num2);

    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("\n");
    printf("\nAfter Swap");
    printf("\nFirst number is %d ", num1);
    printf("\nSecond number is %d ", num2);
    
}

int main() {
    int num1, num2;

    printf("Enter Numbers to swap!");
    printf("\nEnter first num: ");
    scanf("%d", &num1);
    printf("Enter second num: ");
    scanf("%d", &num2);

    swapIntegers(num1, num2);
    
    return 0;
}


