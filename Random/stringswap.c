#include <stdio.h>
#include <string.h>

void strSwap(char val1[20], char val2[20]){
    char temp[20];

    printf("Before Swap");
    printf("\nThe first value is %s", val1);
    printf("\nThe first value is %s", val2);

    strcpy(temp, val1);
    strcpy(val1, val2);
    strcpy(val2, temp);

    printf("\n\nAfter Swap");
    printf("\nThe first value is %s", val1);
    printf("\nThe first value is %s", val2);


}

int main() {

    char str1[20] = "ali";
    char str2[20] = "amir";

    strSwap(str1, str2);
    
    return 0;
}


