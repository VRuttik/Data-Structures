#include <stdio.h>
#include <stdlib.h>

// Function to minimize the maximum difference between heights
int minimizeHeightDifference(int arr[], int n, int k);

// Comparison function for qsort
int compare(const void* a, const void* b);

// Macro to find the maximum of two numbers
#define max(a, b) (((a) > (b)) ? (a) : (b))

// Macro to find the minimum of two numbers
#define min(a, b) (((a) < (b)) ? (a) : (b))

int main() {
    int k, n;
    printf("Enter the value of K: ");
    scanf("%d", &k);
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Minimum height difference after modification: %d\n", minimizeHeightDifference(arr, n, k));

    return 0;
}

// Function to minimize the maximum difference between heights
int minimizeHeightDifference(int arr[], int n, int k) {
    // If there is only one element, return 0 as the difference is already minimized
    if (n == 1)
        return 0;

    // Sort the array to simplify the calculations
    qsort(arr, n, sizeof(int), compare);

    int min_diff, max_diff;

    // Initialize the result with the difference between the first and last elements
    int result = arr[n - 1] - arr[0];

    // Traverse the array from left to right
    for (int i = 1; i < n; i++) {
        if (arr[i] >= k) {
            // Update the elements to minimize the height difference
            max_diff = max(arr[i - 1] + k, arr[n - 1] - k);
            min_diff = min(arr[0] + k, arr[i] - k);
            result = min(result, max_diff - min_diff);
        }
    }

    return result;
}

// Comparison function for qsort
int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}
