#include <stdio.h>

int main(){
    int number;
    printf("Enter a number: ");
    scanf ("%d", &number);
    if (number % 3 == 0) {
        printf("The number is a multiple of 3");
    } else {
        printf("The number is not a multiple of 3");
    }

    return 0;
}
