#include <stdio.h>

void is_even_odd(int n){
    if (n % 2 == 0){
        printf("%d is an even number", n);
    }else{
        printf("%d is an odd number", n);
    }
}

int main() {
    int num;

    printf("Enter a number to check: ");
    scanf("%d", &num);
    
    is_even_odd(num);

    return 0;
}


