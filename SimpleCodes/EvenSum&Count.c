/*
2. Write a program to print the count of even numbers between 1-200. Also print
the their sum.
*/

#include <stdio.h>

int main() {
    int evenSum = 0;
    int count = 0;

    for (int i = 1; i <= 200; i++) {
        if (i % 2 == 0) {
            evenSum += i;
            count++;
        }
    }

    printf("Even Sum: %d\n", evenSum);
    printf("Even Count: %d\n", count);

    return 0;
}
