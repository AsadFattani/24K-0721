#include <stdio.h>

int recursivelinearSearch(int arr[], int size, int search) {
    if (size == 0) {
        return -1;
    }else if (arr[size - 1] == search) {
        return size - 1;
    }
    return recursivelinearSearch(arr, size - 1, search);
}


int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]), search;

    printf("Enter the number to search: ");
    scanf("%d", &search);

    int result = recursivelinearSearch(arr, size, search);
    
    if (result == -1) {
        printf("Number not found\n");
    } else {
        printf("Number found at index: %d\n", result);
    }

    return 0;
}