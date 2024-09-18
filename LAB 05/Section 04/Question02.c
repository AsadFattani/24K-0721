#include <stdio.h>

int main() {
    int number, count = 0;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    while (number > 0) {
        count = count + (number & 1);  
        number = number >> 1;
    }

    printf("The number of 1s in the binary representation are: %d\n", count);

    return 0;
}



