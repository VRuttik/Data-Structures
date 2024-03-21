#include <stdio.h>
#include <stdlib.h> // for abs()

int divideWithoutOperator(int dividend, int divisor) {
    // Handle division by zero case
    if (divisor == 0) {
        printf("Error: Division by zero!\n");
        return 0;
    }

    int quotient = 0;
    int sign = (dividend < 0) ^ (divisor < 0) ? -1 : 1; // Determine sign of result

    // Make both dividend and divisor positive to simplify calculations
    dividend = abs(dividend);
    divisor = abs(divisor);

    // Subtract divisor from dividend until dividend becomes less than divisor
    while (dividend >= divisor) {
        dividend -= divisor;
        quotient++;
    }

    return sign * quotient;
}

int main() {
    int dividend, divisor;

    // Input dividend and divisor from the user
    printf("Enter the dividend: ");
    scanf("%d", &dividend);
    printf("Enter the divisor: ");
    scanf("%d", &divisor);

    // Calculate the quotient without using multiplication, division, and mod operator
    int result = divideWithoutOperator(dividend, divisor);

    // Output the result
    printf("The quotient of %d divided by %d is: %d\n", dividend, divisor, result);

    return 0;
}
