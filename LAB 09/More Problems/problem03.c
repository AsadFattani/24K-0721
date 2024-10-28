#include <stdio.h>
#include <math.h>

void check_prime(int n) {
    if (n <= 1) {
        printf("%d is not a prime number.\n", n);
        return;
    }
    
    int limit = sqrt(n);
    for (int i = 2; i <= limit; i++) {
        if (n % i == 0) {
            printf("%d is not a prime number.\n", n);
            return;
        }
    }

    printf("%d is a prime number.\n", n);
}

int main() {
    int num;

    printf("Enter an integer to check if it is prime: ");
    scanf("%d", &num);

    check_prime(num);

    return 0;
}
