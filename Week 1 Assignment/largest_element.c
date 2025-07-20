// 2. Find largest element in array

#include <stdio.h>

int main() {
    int arr[100], size, i, max;

    printf("Enter the number of elements in array: ");
    scanf("%d", &size);

    printf("Enter %d elements:\n", size);
    for(i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    max = arr[0]; 

    for(i = 1; i < size; i++) {
        if(arr[i] > max) {
            max = arr[i];  
        }
    }

    printf("The largest element is: %d\n", max);

    return 0;
}

