#include <stdio.h>

int main (){
    int a = 1, b = 2 ,c = 0;
    for (int i = 0; i <= 5; i++){
        printf("%d ", a);
        // printf("\n%d", b);
        c = b;
        b = a + b;
        a = c;
    }
} 



