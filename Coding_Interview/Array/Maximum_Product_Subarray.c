#include <stdio.h>

// Function to find the maximum product subarray
int maxProductSubarray(int arr[], int n) {
    if (n == 0)
        return 0;

    int max_ending_here = 1;
    int min_ending_here = 1;
    int max_so_far = 1;
    int flag = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            max_ending_here *= arr[i];
            min_ending_here = (min_ending_here * arr[i] < 1) ? min_ending_here * arr[i] : 1;
            flag = 1;
        }
        else if (arr[i] == 0) {
            max_ending_here = 1;
            min_ending_here = 1;
        }
        else {
            int temp = max_ending_here;
            max_ending_here = (min_ending_here * arr[i] > 1) ? min_ending_here * arr[i] : 1;
            min_ending_here = temp * arr[i];
        }

        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
    }

    if (flag == 0 && max_so_far == 1)
        return 0;

    return max_so_far;
}

int main() {
    int N;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &N);

    int Arr[N];

    // Input array elements
    printf("Enter the elements of the array: ");
    for (int i = 0; i < N; i++)
        scanf("%d", &Arr[i]);

    // Find the product of the maximum product subarray
    int result = maxProductSubarray(Arr, N);

    // Output the result
    printf("Product of maximum product subarray: %d\n", result);

    return 0;
}
