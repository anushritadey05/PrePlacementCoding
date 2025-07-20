//3. Find second largest element

#include <stdio.h>

int main() {
    int arr[100], size, i;
    int first, second;

    printf("Enter the number of elements in array (at least 2): ");
    scanf("%d", &size);

    if (size < 2) {
        printf("Need at least two elements.\n");
        return 1;
    }

    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    if (arr[0] > arr[1]) {
        first = arr[0];
        second = arr[1];
    } else {
        first = arr[1];
        second = arr[0];
    }

    for (i = 2; i < size; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    if (first == second) {
        printf("All elements are equal or no second largest exists.\n");
    } else {
        printf("The second largest element is: %d\n", second);
    }

    return 0;
}

