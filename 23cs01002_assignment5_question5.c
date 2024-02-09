#include <stdio.h>

int main() {
    char choice;
    int num, sum = 0;

    do {
        printf("Enter an integer: ");
        scanf("%d", &num);

        if (num % 2 == 0) {
            sum += num;
        }

        printf("Do you want to continue (Y/N)? ");
        scanf(" %c", &choice);

        if (choice != 'Y' && choice != 'y' && choice != 'N' && choice != 'n') {
            printf("Invalid input! Please enter 'Y' to continue or 'N' to stop.\n");
            continue;
        }

    } while (choice != 'N' && choice != 'n');

    printf("Sum of even integers: %d\n", sum);

    return 0;
}