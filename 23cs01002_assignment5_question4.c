#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter the size of the triangle: ");
    scanf("%d", &n);

    // Outer loop to iterate through each row
    for (i = 1; i <= n; i++) {
        // Inner loop to print spaces before the stars
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Inner loop to print stars
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
