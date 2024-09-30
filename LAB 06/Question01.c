#include <stdio.h>

int main(){
    int num = 1, total = 0;
    while (num != 0){
        printf("\nEnter a number: "); 
        scanf("%d", &num); //assuming the input is a number
        total = total + num;
        printf("\nThe sum of numbers currently is: %d", total);
    }
}


