#include <stdio.h>

// Function to search for an element in a row-column sorted matrix
int searchMatrix(int matrix[][100], int n, int m, int x) {
    int i = 0, j = m - 1; // Start from the top-right corner of the matrix

    // Traverse the matrix
    while (i < n && j >= 0) {
        if (matrix[i][j] == x) // If the element is found
            return 1;
        else if (matrix[i][j] < x) // If the current element is less than x, move down
            i++;
        else // If the current element is greater than x, move left
            j--;
    }

    return 0; // If the element is not found
}

int main() {
    int n, m, x, matrix[100][100];

    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &n, &m);

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Enter the element to search: ");
    scanf("%d", &x);

    if (searchMatrix(matrix, n, m, x))
        printf("%d is present in the matrix.\n", x);
    else
        printf("%d is not present in the matrix.\n", x);

    return 0;
}
