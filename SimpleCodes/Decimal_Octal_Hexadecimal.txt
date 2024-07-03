#include <stdio.h>

int main() {
    int num;

    // Prompt user for input
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Display in decimal, octal, and hexadecimal notation
    printf("Decimal: %d\n", num);
    printf("Octal: %o\n", num);    // %o for octal
    printf("Hexadecimal: %x\n", num); // %x (or %X for uppercase) for hexadecimal

    return 0;
}
