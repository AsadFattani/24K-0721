#include <stdio.h>

int main(){
    char operator;
    int num1, num2;

    printf("Enter number 1: ");
    scanf("%d", &num1);

    getchar();
    printf("Enter operator (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Enter number 2: ");
    scanf("%d", &num2);
    
    switch (operator){
        case '+':
            printf("The sum is %d\n ",num1 + num2);
            break;
        case '-':
            printf("The subb is %d\n ",num1 - num2);
            break;
        case '*':
            printf("The multi is %d\n ",num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("The division is %.2f\n", (float)num1 / num2);
            else
                printf("Error: Division by zero is not allowed.\n");
            break;
        default:
            printf("Invalid operator.\n");
            break;

    }
    return 0;
}
