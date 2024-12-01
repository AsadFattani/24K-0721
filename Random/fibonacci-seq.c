#include <stdio.h>

int fibonacciSequence(int n){
    if(n == 0){
        return 0;
    } else if(n == 1){
        return 1;
    } else {
        return fibonacciSequence(n-1) + fibonacciSequence(n-2);
    }
}

int main(){
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("\nFibonacci Sequence: ");
    for(int i = 1; i < n; i++){
        printf("%d ", fibonacciSequence(i));
    }
    return 0;
}