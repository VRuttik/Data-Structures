#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is a power of 2
bool isPowerOfTwo(int n) {
    // A number is a power of 2 if and only if it has only one bit set in its binary representation
    // If n is a power of 2, then (n & (n-1)) will be 0
    return n && !(n & (n - 1));
}

int main() {
    int N;

    // Input N from the user
    printf("Enter the value of N: ");
    scanf("%d", &N);

    // Check if N is a power of 2
    bool result = isPowerOfTwo(N);

    // Output the result
    if (result)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
