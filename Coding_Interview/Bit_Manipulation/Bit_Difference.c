#include <stdio.h>

// Function to count the number of bits to be flipped
int countBitsToFlip(int a, int b) {
    int xor_result = a ^ b;
    int count = 0;
    while (xor_result) {
        count += xor_result & 1;
        xor_result >>= 1;
    }
    return count;
}

int main() {
    int A, B;

    // Input A and B from the user
    printf("Enter the value of A: ");
    scanf("%d", &A);
    printf("Enter the value of B: ");
    scanf("%d", &B);

    // Calculate the number of bits to be flipped
    int result = countBitsToFlip(A, B);

    // Output the result
    printf("The number of bits needed to be flipped to convert A to B is: %d\n", result);

    return 0;
}
