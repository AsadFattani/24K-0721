#include <stdio.h>

void printArrayRecursive(int arr[], int size) {
    if (size == 0) {
        return;
    }
    printf("%d ", arr[0]);
    printArrayRecursive(arr + 1, size - 1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    printArrayRecursive(arr, size);
    return 0;
}



