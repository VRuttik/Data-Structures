#include <stdio.h>

// Function to count set bits in an integer
int countSetBits(int n) {
    int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}

// Function to calculate the total set bits from 1 to N
int totalSetBits(int N) {
    int total = 0;
    for (int i = 1; i <= N; i++) {
        total += countSetBits(i);
    }
    return total;
}

int main() {
    int N;

    // Input N from the user
    printf("Enter the value of N: ");
    scanf("%d", &N);

    // Calculate the total set bits
    int result = totalSetBits(N);

    // Output the result
    printf("The total set bits from 1 to %d is: %d\n", N, result);

    return 0;
}
