#include <stdio.h>

void findNonRepeating(int arr[], int N) {
    int xor = arr[0];
    int i, x = 0, y = 0;
    
    // XOR of all elements gives XOR of the two non-repeating numbers
    for (i = 1; i < 2 * N + 2; i++) {
        xor ^= arr[i];
    }
    
    // Get the rightmost set bit in xor
    int setBit = xor & ~(xor - 1);
    
    // Divide the array elements into two groups based on the set bit
    for (i = 0; i < 2 * N + 2; i++) {
        if (arr[i] & setBit)
            x ^= arr[i]; // XOR of group having set bit at position 'setBit'
        else
            y ^= arr[i]; // XOR of group not having set bit at position 'setBit'
    }
    
    // Print the two non-repeating numbers in increasing order
    if (x < y)
        printf("%d %d\n", x, y);
    else
        printf("%d %d\n", y, x);
}

int main() {
    int N;
    printf("Enter the value of N: ");
    scanf("%d", &N);
    
    int arr[2 * N + 2];
    printf("Enter the array elements: ");
    for (int i = 0; i < 2 * N + 2; i++) {
        scanf("%d", &arr[i]);
    }
    
    findNonRepeating(arr, N);
    
    return 0;
}
