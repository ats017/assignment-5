#include <stdio.h>

void printAllPermutations(int arr[], int start, int end);
void swap(int *a, int *b);

int main() {
    int number, digits[4];

    printf("Enter a 4-digit number: ");
    scanf("%d", &number);

    for (int i = 0; i < 4; i++) {
        digits[i] = number % 10;
        number /= 10;
    }

    printf("All possible numbers: \n");
    printAllPermutations(digits, 0, 3);

    return 0;
}

void printAllPermutations(int arr[], int start, int end) {
    int i;
    if (start == end) {
        for (i = 0; i <= end; i++) {
            printf("%d", arr[i]);
        }
        printf("\n");
    } else {
        for (i = start; i <= end; i++) {
            swap(&arr[start], &arr[i]);
            printAllPermutations(arr, start + 1, end);
            swap(&arr[start], &arr[i]);
        }
    }
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}