#include <stdio.h>
#include <stdlib.h>

// Function to find the minimum length of subarray with sum greater than x
int smallestSubarrayLength(int arr[], int n, int x) {
    int minLength = n + 1;
    int start = 0, end = 0;
    int sum = 0;

    while (end < n) {
        // Keep adding array elements while the sum is less than or equal to x
        while (sum <= x && end < n) {
            sum += arr[end++];
        }

        // Update minLength if the current subarray length is smaller
        if (end - start < minLength) {
            minLength = end - start;
        }

        // Remove elements from the start of the subarray until the sum becomes smaller than x
        while (sum > x && start < n) {
            if (end - start < minLength) {
                minLength = end - start;
            }
            sum -= arr[start++];
        }
    }

    return minLength;
}

int main() {
    int n, x;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return -1;
    }

    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the target sum: ");
    scanf("%d", &x);

    // Find the minimum length of subarray with sum greater than x
    int minLength = smallestSubarrayLength(arr, n, x);

    if (minLength == n + 1) {
        printf("No subarray found\n");
    } else {
        printf("Minimum length subarray is %d\n", minLength);
    }

    free(arr);

    return 0;
}
