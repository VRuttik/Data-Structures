#include <stdio.h>

#define MAX_SIZE 100

// Function to find the maximum of two numbers
int max(int a, int b) {
    return (a > b) ? a : b;
}

// Function to find the maximum area of a rectangle
int max_rectangle_area(int M[MAX_SIZE][MAX_SIZE], int n, int m) {
    int max_area = 0;

    // Calculate maximum area histogram for each row
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (M[i][j] == 1) {
                M[i][j] += M[i - 1][j];
            }
        }
    }

    // Calculate area using histogram approach
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int width = M[i][j];
            int k = j - 1;
            while (k >= 0 && M[i][k] >= M[i][j]) {
                width += M[i][j];
                k--;
            }
            k = j + 1;
            while (k < m && M[i][k] >= M[i][j]) {
                width += M[i][j];
                k++;
            }
            max_area = max(max_area, width);
        }
    }

    return max_area;
}

int main() {
    int n, m;
    printf("Enter the number of rows (n): ");
    scanf("%d", &n);
    printf("Enter the number of columns (m): ");
    scanf("%d", &m);

    int M[MAX_SIZE][MAX_SIZE];

    printf("Enter the elements of the matrix (0s and 1s):\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &M[i][j]);
        }
    }

    // Find the maximum area of a rectangle formed only of 1s in the matrix
    int result = max_rectangle_area(M, n, m);

    printf("Maximum area of a rectangle formed only of 1s: %d\n", result);

    return 0;
}