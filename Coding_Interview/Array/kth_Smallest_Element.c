#include <stdio.h>

// Function to swap two integers
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Partition function for QuickSort algorithm
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // Choose the pivot as the last element
    int i = low - 1; // Index of smaller element

    // Traverse through all elements of the array
    for (int j = low; j < high; j++) {
        // If current element is smaller than or equal to pivot
        if (arr[j] <= pivot) {
            i++; // Increment index of smaller element
            swap(&arr[i], &arr[j]); // Swap arr[i] and arr[j]
        }
    }
    swap(&arr[i + 1], &arr[high]); // Swap arr[i+1] and arr[high] (pivot)
    return i + 1; // Return the partitioning index
}

// QuickSelect algorithm to find Kth smallest element in the array within a range
int quickSelect(int arr[], int low, int high, int k) {
    if (low < high) {
        // Partition the array and get the partitioning index
        int pivotIndex = partition(arr, low, high);

        // If partitioning index is same as k, return the element at index k
        if (pivotIndex == k)
            return arr[pivotIndex];
        // If k is smaller than partitioning index, search in the left subarray
        else if (k < pivotIndex)
            return quickSelect(arr, low, pivotIndex - 1, k);
        // If k is larger than partitioning index, search in the right subarray
        else
            return quickSelect(arr, pivotIndex + 1, high, k);
    }
    // If low is equal to high, return the element at index low
    return arr[low];
}

int main() {
    int N; // Number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &N);

    int arr[N]; // Input array

    printf("Enter %d elements separated by spaces: ", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int K; // Kth smallest element to find
    printf("Enter the value of K: ");
    scanf("%d", &K);

    int L, R; // Range of indices in the array
    printf("Enter the range (L and R separated by space): ");
    scanf("%d %d", &L, &R);

    // Find the Kth smallest element within the range L to R
    int kthSmallest = quickSelect(arr, L, R, K - 1);

    // Print the Kth smallest element
    printf("The %dth smallest element in the given range is: %d\n", K, kthSmallest);

    return 0;
}
