#include <stdio.h>

// Function to find the position of the only set bit
int findPosition(int N) {
    int position = 0, count = 0;
    while (N) {
        if (N & 1) {
            count++;
            if (count > 1) // More than one set bit found
                return -1;
            break; // Exit the loop once the set bit is found
        }
        position++;
        N >>= 1;
    }
    return count == 1 ? position + 1 : -1; // Position starts from 1
}

int main() {
    int N;

    // Input N from the user
    printf("Enter the value of N: ");
    scanf("%d", &N);

    // Find the position of the only set bit
    int result = findPosition(N);

    // Output the result
    printf("The position of the only set bit in %d is: %d\n", N, result);

    return 0;
}
