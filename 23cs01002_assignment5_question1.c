#include <stdio.h>

int main() {
    int num, temp, digit, count = 0, sum = 0;
    int freq[10] = {0};

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    // Counting number of digits and summing unique digits
    while (temp != 0) {
        digit = temp % 10;
        freq[digit]++;
        if (freq[digit] == 1) {
            sum += digit;
        }
        count++;
        temp /= 10;
    }

    printf("Number of digits: %d\n", count);
    printf("Sum of all unique digits: %d\n", sum);

    return 0;
}