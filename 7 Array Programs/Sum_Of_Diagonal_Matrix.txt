/*
31. Write a program that computes the sum of the elements that are stored o the main diagonal of the matrix using pointers.
*/

#include <stdio.h>

int main() {
    int rows, cols, i, sum = 0;

    // Taking the size of the matrix from the user
    printf("Enter the number of rows and columns (matrix should be square): ");
    scanf("%d %d", &rows, &cols);

    if (rows != cols) {
        printf("Error: The matrix must be square.\n");
        return 1;
    }

    int matrix[rows][cols];

    // Taking matrix elements from the user
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("matrix[%d][%d] = ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Computing the sum of the elements on the main diagonal using pointers
    for (i = 0; i < rows; i++) {
        sum += *(*(matrix + i) + i);
    }

    printf("\nSum of the elements on the main diagonal: %d\n", sum);

    return 0;
}

