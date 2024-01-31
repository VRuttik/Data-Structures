// Print all subarrays with 0 sum. 

#include <stdio.h>

// Function to print all subarrays with a zero sum in a given array
void printAllSubArrays(int arr[], int n) {

    // Iterate through each element as a potential starting point
    for (int i = 0; i < n; i++) {
        
        int sum = 0;

        // Consider all subarrays starting from `i`
        for (int j = i; j < n; j++) {

            sum = sum + arr[j];

            // If the sum is zero, print the subarray
            if (sum == 0) {
                printf("Subarray [%d…%d]\n", i, j);
            }
        }
    }
}

int main(void) {

    int n;

    // Get the number of elements from the user
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n]; // Declare an array with the specified size

    // Get the elements of the array from the user
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Call the function to print all subarrays with zero sum
    printAllSubArrays(arr, n);

    return 0;
}
