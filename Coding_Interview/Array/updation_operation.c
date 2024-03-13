#include<stdio.h>

int main() {
    // Declare an array LA with initial values
    int LA[] = {1, 3, 5, 7, 8};
    int k = 3, n = 5, item = 10; // k is the position to update, n is the initial size of the array, item is the new value
    int i;

    // Display the original array elements
    printf("The Original array elements are: \n");
    for(i = 0; i < n; i++) {
        printf("LA[%d] = %d\n", i, LA[i]);
    }

    // Update the element at position k with the new value (item)
    LA[k - 1] = item;

    // Display the array elements after updating
    printf("The array elements after updation:\n");
    for(i = 0; i < n; i++) {
        printf("LA[%d] = %d\n", i, LA[i]);
    }

    return 0; // Indicate successful execution
}
