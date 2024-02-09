#include <stdio.h>

int main() {
    int dividend, divisor, quotient = 0, remainder;

    printf("Enter dividend: ");
    scanf("%d", &dividend);

    printf("Enter divisor: ");
    scanf("%d", &divisor);

    // Subtract divisor from dividend until dividend becomes less than divisor
    while (dividend >= divisor) {
        dividend -= divisor;
        quotient++;
    }

    remainder = dividend;

    printf("Quotient = %d\n", quotient);
    printf("Remainder = %d\n", remainder);

    return 0;
}