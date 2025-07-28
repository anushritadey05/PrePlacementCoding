//Dynamic Array Operation

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int capacity = 2;  // initial capacity
    int size = 0;      // current size
    int i;

    // Allocate initial memory
    arr = (int *)malloc(capacity * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Insert elements with dynamic resizing
    for (i = 0; i < 5; i++) {
        if (size == capacity) {
            capacity *= 2;
            arr = (int *)realloc(arr, capacity * sizeof(int));
            if (arr == NULL) {
                printf("Memory reallocation failed!\n");
                return 1;
            }
        }
        arr[size++] = (i + 1) * 10;
    }

    // Print elements
    printf("Array elements: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    // Delete last element
    size--;
    printf("\nAfter deletion: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    // Access an element
    printf("\nElement at index 2: %d\n", arr[2]);

    // Free memory
    free(arr);
    return 0;
}

