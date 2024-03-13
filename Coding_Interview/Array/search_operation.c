#include<stdio.h>

int main() {
    // Declare an array LA with initial values
    int LA[] = {1, 3, 5, 7, 8};
    int item = 5, n = 5; // item is the element to search, n is the initial size of the array
    int i = 0, j = 0;

    // Display the original array elements
    printf("The Original array elements are:\n");
    for(i = 0; i < n; i++) {
        printf("LA[%d] = %d\n", i, LA[i]);
    }

    // Search for the element in the array
    while(j < n) {
        if(LA[j] == item) {
            break; // Exit the loop if the element is found
        }
        j = j + 1;
    }

    // Check if the element was found or not
    if(j < n) {
        printf("Found element %d at position %d\n", item, j + 1);
    } else {
        printf("Element %d not found in the array\n", item);
    }

    return 0; // Indicate successful execution
}
