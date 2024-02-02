// Given a square matrix, calculate the absolute difference between the sums of its diagonals.

#include <stdio.h>
#include <stdlib.h>

int calculateDiagonalDifference(int n, int a[n][n]) {
    int rightDiagonalSum = 0;
    int leftDiagonalSum = 0;

    // Calculate the sum of the right diagonal
    for (int i = 0; i < n; i++) {
        rightDiagonalSum += a[i][i];
    }

    // Calculate the sum of the left diagonal
    for (int i = 0, j = n - 1; i < n; i++, j--) {
        leftDiagonalSum += a[i][j];
    }

    // Return the absolute difference between the sums
    return abs(rightDiagonalSum - leftDiagonalSum);
}

int main() {
    int n;
    scanf("%d", &n);

    int a[n][n];

    // Input matrix elements
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Calculate and print the absolute difference between the sums of the diagonals
    int diagonalDifference = calculateDiagonalDifference(n, a);
    printf("%d", diagonalDifference);

    return 0;
}