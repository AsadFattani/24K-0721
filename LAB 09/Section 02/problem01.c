#include <stdio.h>
#include <string.h>

int main() {
    char desStr[20], sourceStr[20];
    int n;

    printf("Enter destination string: ");
    scanf("%s", &desStr);
    printf("Enter source string: ");
    scanf("%s", &sourceStr);
    printf("Enter the number of character you want to append: ");
    scanf("%d", &n);

    strncat(desStr, sourceStr, n);

    printf("\nThe new string is: %s", desStr);
    
    return 0;
}


