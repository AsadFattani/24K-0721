#include <stdio.h>
#include <stdbool.h>

void recursiveBubbleSort(int arr[], int size) {
    bool sorted = true;
    for (int i = 0; i < size - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
            sorted = false;
        }
    }
    if (!sorted) {
        recursiveBubbleSort(arr, size - 1);
    }
}

// reused from problem 1 to print array
void printArrayRecursive(int arr[], int size) {
    if (size == 0) {
        return;
    }
    printf("%d ", arr[0]);
    printArrayRecursive(arr + 1, size - 1);
}

int main() {
    int arr[] = {2, 4, 1, 3, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Before sorting: [ ");
    printArrayRecursive(arr, size);
    printf("]\n");

    recursiveBubbleSort(arr, size);

    printf("\nAfter sorting: \n[ ");
    printArrayRecursive(arr, size);
    printf("]\n");

    return 0;
}



