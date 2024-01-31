/*
Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

The overall run time complexity should be O(log (m+n)).

Example 1:

Input: nums1 = [1,3], nums2 = [2]
Output: 2.00000
Explanation: merged array = [1,2,3] and median is 2.
*/

#include <stdio.h>

double findMedianSortedArrays(int nums1[], int m, int nums2[], int n) {
    int totalSize = m + n;
    int mergedArray[totalSize];

    // Merge the two sorted arrays
    int i = 0, j = 0, k = 0;
    while (i < m && j < n) {
        if (nums1[i] <= nums2[j]) {
            mergedArray[k++] = nums1[i++];
        } else {
            mergedArray[k++] = nums2[j++];
        }
    }

    // Copy the remaining elements from nums1, if any
    while (i < m) {
        mergedArray[k++] = nums1[i++];
    }

    // Copy the remaining elements from nums2, if any
    while (j < n) {
        mergedArray[k++] = nums2[j++];
    }

    // Calculate the median based on the merged array
    if (totalSize % 2 == 0) {
        return (double)(mergedArray[totalSize / 2 - 1] + mergedArray[totalSize / 2]) / 2.0;
    } else {
        return (double)mergedArray[totalSize / 2];
    }
}

int main() {
    int m, n;

    // Take user input for the size of the first array
    printf("Enter the size of the first array: ");
    scanf("%d", &m);

    int nums1[m];

    // Take user input for the elements of the first array
    printf("Enter the elements of the first array in sorted order:\n");
    for (int i = 0; i < m; i++) {
        printf("Element[%d]: ", i);
        scanf("%d", &nums1[i]);
    }

    // Take user input for the size of the second array
    printf("Enter the size of the second array: ");
    scanf("%d", &n);

    int nums2[n];

    // Take user input for the elements of the second array
    printf("Enter the elements of the second array in sorted order:\n");
    for (int i = 0; i < n; i++) {
        printf("Element[%d]: ", i);
        scanf("%d", &nums2[i]);
    }

    // Calculate the median and display the output
    double result = findMedianSortedArrays(nums1, m, nums2, n);
    printf("Output: %lf\n", result);

    return 0;
}
