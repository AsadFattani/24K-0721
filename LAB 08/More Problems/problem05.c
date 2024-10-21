#include <stdio.h>

int main() {
    int n;
    
    printf("Enter n: ");
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++){
        for (int j = n; j >= i+2; j--){
            printf(" ");
        }
        for (int j = 0; j <= i; j+=2){
            printf("* ");
        }
        for (int j = 0; j <= i-1; j+=2){
            printf("* ");
        }
        
        printf("\n");
    }
    for (int i = n-2; i >= 0; i--){
        for (int j = n; j >= i+2; j--){
            printf(" ");
        }
        for (int j = 0; j <= i; j+=2){
            printf("* ");
        }
        for (int j = 0; j <= i-1; j+=2){
            printf("* ");
        }
        
        printf("\n");
    }
    }
    