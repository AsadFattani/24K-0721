#include <stdio.h>

int main() {
    int n;
    
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int arr[n];
    int count[n];

    for (int i = 0; i < n; i++) {
        count[i] = 0;
    }
    
    // Get array elements from the user
    printf("Enter the elements of the array (between 0 and %d):\n", n - 1);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
    }

    int foundDuplicate = 0;
    printf("Numbers ");
    for (int i = 0; i < n; i++) {
        if (count[i] > 1) {
            if (foundDuplicate) {
                printf(" and ");
            }
            printf("%d", i);
            foundDuplicate = 1;
        }
    }

    if (foundDuplicate) {
        printf(" in array occur more than once.\n");
    } else {
        printf("No duplicates found.\n");
    }


    return 0;
}
