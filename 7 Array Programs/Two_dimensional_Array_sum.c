/*
29. Write a program to compute the sum and mean of the elements of a two dimensional array.
*/

#include <stdio.h>

int main() {
    int rows, cols, i, j, sum = 0;
    float mean;

    // Taking the size of the array from the user
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int arr[rows][cols];

    // Taking array elements from the user
    printf("Enter the elements of the array:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // Computing the sum of the elements
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            sum += arr[i][j];
        }
    }

    // Computing the mean of the elements
    mean = (float)sum / (rows * cols);

    printf("\nSum of the elements: %d\n", sum);
    printf("Mean of the elements: %.2f\n", mean);

    return 0;
}
