#include <stdio.h>

long long int power(int base, int exp) {
    if (exp == 0) {
        return 1;
    } else {
        return base * power(base, exp - 1);
    }
}

int main() {
    int base, exp;
    
    scanf("%d %d", &base, &exp);
    
    // long long int result = power(base, exp);
    
    printf("%lld", power(base, exp));
    
    return 0;
}