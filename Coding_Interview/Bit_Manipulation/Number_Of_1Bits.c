#include <stdio.h>

int countSetBits(int N) {
    int count = 0;
    while (N > 0) {
        count += N & 1;
        N >>= 1;
    }
    return count;
}

int main() {
    int N;
    printf("Enter a positive integer: ");
    scanf("%d", &N);

    int result = countSetBits(N);
    printf("Count of set bits: %d\n", result);

    return 0;
}
