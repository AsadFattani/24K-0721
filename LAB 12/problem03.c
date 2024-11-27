#include <stdio.h>
#include <stdlib.h>


int main(){
    int size, sum = 0;
    int *ptr;   

    printf("Enter the size of array: ");
    scanf("%d", &size);


    ptr = (int *)malloc(size * sizeof(int));

    for (int i = 0; i < size; i++){
        printf("Enter the element %d: ", i);
        scanf("%d", &ptr[i]);
        // we can use another for loop to get the sum
        sum += ptr[i];
    }
    printf("The sum of the elements is: %d\n", sum);
    free (ptr);
    return 0;
}




