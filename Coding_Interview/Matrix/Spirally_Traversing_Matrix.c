#include <stdio.h>

// Function to perform spirally traversing of the matrix
void spiralTraversal(int matrix[][100], int m, int n) {
    int i, k = 0, l = 0;

    while (k < m && l < n) {
        // Print the first row from the remaining rows
        for (i = l; i < n; ++i) {
            printf("%d ", matrix[k][i]);
        }
        k++;

        // Print the last column from the remaining columns
        for (i = k; i < m; ++i) {
            printf("%d ", matrix[i][n - 1]);
        }
        n--;

        // Print the last row from the remaining rows
        if (k < m) {
            for (i = n - 1; i >= l; --i) {
                printf("%d ", matrix[m - 1][i]);
            }
            m--;
        }

        // Print the first column from the remaining columns
        if (l < n) {
            for (i = m - 1; i >= k; --i) {
                printf("%d ", matrix[i][l]);
            }
            l++;
        }
    }
}

int main() {
    int r, c, matrix[100][100];

    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &r, &c);

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Spiral traversal of the matrix:\n");
    spiralTraversal(matrix, r, c);

    return 0;
}
