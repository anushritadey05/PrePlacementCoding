//1.Insert an element to an array

#include <stdio.h>

int main() {
    int arr[100];
	int i; 
    int size, element;

    printf("Enter the number of elements in array: ");
    scanf("%d", &size);

    printf("Enter %d elements:\n", size);
    for(i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to insert at end: ");
    scanf("%d", &element);

    arr[size] = element; 
    size++;

    printf("Array after insertion:\n");
    for(i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

