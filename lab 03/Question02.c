
#include <stdio.h>
int main() {
    int int1;
    int int2;
    int temp;
    
    printf("Enter an integer: ");
	scanf("%d", &int1);
    printf("Enter another integer: ");
	scanf("%d", &int2);

    temp = int1;
    int1 = int2;
    int2 = temp;

    printf("After swapping\n");
    printf("Integer 1 is %d\n", int1);
    printf("Integer 2 is %d\n", int2);

    return 0;

}


