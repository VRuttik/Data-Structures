#include <stdio.h>
#include <stdlib.h>

// Function to compare integers (used for sorting)
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

// Function to find the median of an array
double findMedian(int *arr, int N) {
    // Sort the array
    qsort(arr, N, sizeof(int), compare);
    
    // If the size of the array is odd, return the middle element
    if (N % 2 == 1)
        return arr[N / 2];
    // If the size of the array is even, return the average of the middle two elements
    else
        return (arr[N / 2 - 1] + arr[N / 2]) / 2.0;
}

int main() {
    int N;

    printf("Enter the size of the array: ");
    scanf("%d", &N);
    
    int *arr = (int *)malloc(N * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return -1;
    }

    printf("Enter the elements of the array: ");
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    double median = findMedian(arr, N);
    printf("Median: %.1f\n", median);

    free(arr);

    return 0;
}
