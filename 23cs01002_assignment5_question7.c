#include <stdio.h>

void bubble_sort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        // Last i elements are already in place
        for (j = 0; j < n - i - 1; j++) {
            // Swap if the element found is greater than the next element
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[10], i;

    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    // Sorting the array using bubble sort
    bubble_sort(arr, 10);

    printf("Sorted array:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
