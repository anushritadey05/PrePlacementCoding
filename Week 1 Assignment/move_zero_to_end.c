//4. Move all zeros to end

#include <stdio.h>

int main() {
    int arr[100], size, i, j = 0;

    printf("Enter the number of elements in array: ");
    scanf("%d", &size);

    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int result[100];

    for (i = 0; i < size; i++) {
        if (arr[i] != 0) {
            result[j++] = arr[i];
        }
    }

    while (j < size) {
        result[j++] = 0;
    }

    printf("Array after moving all zeros to the end:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", result[i]);
    }

    return 0;
}

