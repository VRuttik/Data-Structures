#include <stdio.h>

// Function to find the maximum of two integers
int max(int a, int b) {
    return (a > b) ? a : b;
}

// Function to find the maximum subarray sum using Kadane's algorithm
int maxSubArraySum(int arr[], int n) {
    int max_so_far = arr[0]; // Initialize maximum sum so far
    int curr_max = arr[0]; // Initialize current maximum sum

    // Traverse the array from the second element
    for (int i = 1; i < n; i++) {
        curr_max = max(arr[i], curr_max + arr[i]);
        max_so_far = max(max_so_far, curr_max);
    }
    return max_so_far;
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Maximum subarray sum: %d\n", maxSubArraySum(arr, n));

    return 0;
}
