#include<stdio.h>

long long merge(int arr[], int temp[], int left, int mid, int right) {
    int i, j, k;
    long long inv_count = 0;

    i = left; // Index for the left subarray
    j = mid; // Index for the right subarray
    k = left; // Index for the merged subarray

    // Merge the two subarrays while counting inversions
    while (i <= mid - 1 && j <= right) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        }
        else {
            temp[k++] = arr[j++];
            inv_count += (mid - i); // Count inversions
        }
    }

    // Copy the remaining elements of the left subarray, if any
    while (i <= mid - 1)
        temp[k++] = arr[i++];

    // Copy the remaining elements of the right subarray, if any
    while (j <= right)
        temp[k++] = arr[j++];

    // Copy back the merged elements to the original array
    for (i = left; i <= right; i++)
        arr[i] = temp[i];

    return inv_count;
}

long long mergeSort(int arr[], int temp[], int left, int right) {
    long long inv_count = 0;
    int mid;

    if (right > left) {
        mid = (right + left) / 2;

        // Recursive calls to divide the array into subarrays
        inv_count += mergeSort(arr, temp, left, mid); // Count inversions in left subarray
        inv_count += mergeSort(arr, temp, mid + 1, right); // Count inversions in right subarray

        // Merge the sorted subarrays and count inversions
        inv_count += merge(arr, temp, left, mid + 1, right);
    }

    return inv_count;
}

long long countInversions(int arr[], int n) {
    int temp[n]; // Temporary array for merge sort
    return mergeSort(arr, temp, 0, n - 1);
}

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array separated by space: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Call the function to count inversions and print the result
    long long inversions = countInversions(arr, n);
    printf("Inversion count: %lld\n", inversions);

    return 0;
}
