#include <stdio.h>

int main (){
    int num = 65536, i = 1;
    while (num != 0){
        num = num / i;
        printf ("%d, ", num);
        i += 1;

    }
    
}