#include<stdio.h>

int main() {
    // Declare an array LA with initial values
    int LA[] = {1, 3, 5, 7, 8};
    int k = 3, n = 5; // k is the position to delete, n is the initial size of the array
    int i, j;

    // Display the original array elements
    printf("The original array elements are: \n");
    for(i = 0; i < n; i++) {
        printf("LA[%d] = %d\n", i, LA[i]);
    }

    j = k;

    // Delete the element at position k by shifting elements to the left
    while (j < n) {
        LA[j - 1] = LA[j];
        j = j + 1;
    }
    n = n - 1; // Update the size of the array after deletion

    // Display the array elements after deletion
    printf("The array elements after deletion: \n");
    for(i = 0; i < n; i++) {
        printf("LA[%d] = %d\n", i, LA[i]);
    }

    return 0; // Indicate successful execution
}
