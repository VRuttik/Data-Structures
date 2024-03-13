#include<stdio.h>

int main() {

    // Declare an array LA with initial values
    int LA[] = {1, 3, 5, 7, 8};
    
    // Declare variables for item to insert, position (k), and array size (n)
    int item = 10, k = 3, n = 5;

    // Declare variables for loop counters
    int i = 0, j = n;

    // Display the original array elements
    printf("\n The Original array elements are:\n");
    for (i = 0; i < n; i++) {
        printf("LA[%d] = %d\n", i, LA[i]);
    }

    // Increase the size of the array by 1
    n = n + 1;

    // Shift elements to the right from position k to the end of the array
    while (j >= k) {
        LA[j + 1] = LA[j];
        j = j - 1;
    }

    // Insert the item at position k
    LA[k] = item;

    // Display the array elements after insertion
    printf("The array elements after insertion: \n");
    for (i = 0; i < n; i++) {
        printf("LA[%d] = %d\n", i, LA[i]);
    }

    return 0; // indicate successful program execution
}
