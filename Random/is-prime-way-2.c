#include <stdio.h>
#include <stdbool.h>

bool is_prime(int n) {
    bool prime = true;

    if (n <= 1) {
        prime = false;
    } else if (n <= 3) {
        prime = true;
    } else if (n % 2 == 0 || n % 3 == 0) {
        prime = false;
    } else {
        for (int i = 5; i * i <= n; i += 6) {
            if (n % i == 0 || n % (i + 2) == 0) {
                prime = false;
                break;
            }
        }
    }

    return prime;
}

int main() {
    int num;

    printf("Enter an integer to check if it is prime: ");
    scanf("%d", &num);

    if (is_prime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
