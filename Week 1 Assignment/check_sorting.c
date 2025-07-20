//6. Check if array is sorted

#include <stdio.h>

int main() {
    int arr[100], size, i, isSorted = 1;

    printf("Enter the number of elements in array: ");
    scanf("%d", &size);

    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < size - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            isSorted = 0;  
            break;
        }
    }

    if (isSorted) {
        printf("The array is sorted in ascending order.\n");
    } else {
        printf("The array is NOT sorted in ascending order.\n");
    }

    return 0;
}

