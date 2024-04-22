#include <stdio.h>
#include <stdlib.h>

double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    // Ensure nums1 is the smaller array
    if (nums1Size > nums2Size) {
        int* tempNums = nums1;
        nums1 = nums2;
        nums2 = tempNums;

        int tempSize = nums1Size;
        nums1Size = nums2Size;
        nums2Size = tempSize;
    }

    int imin = 0, imax = nums1Size, halfLen = (nums1Size + nums2Size + 1) / 2;

    while (imin <= imax) {
        int i = (imin + imax) / 2;
        int j = halfLen - i;

        if (i < nums1Size && nums2[j - 1] > nums1[i]) {
            // i is too small, increase it
            imin = i + 1;
        } else if (i > 0 && nums1[i - 1] > nums2[j]) {
            // i is too big, decrease it
            imax = i - 1;
        } else {
            // i is perfect
            int maxOfLeft;
            if (i == 0) {
                maxOfLeft = nums2[j - 1];
            } else if (j == 0) {
                maxOfLeft = nums1[i - 1];
            } else {
                maxOfLeft = nums1[i - 1] > nums2[j - 1] ? nums1[i - 1] : nums2[j - 1];
            }

            if ((nums1Size + nums2Size) % 2 == 1) {
                return maxOfLeft;
            }

            int minOfRight;
            if (i == nums1Size) {
                minOfRight = nums2[j];
            } else if (j == nums2Size) {
                minOfRight = nums1[i];
            } else {
                minOfRight = nums1[i] < nums2[j] ? nums1[i] : nums2[j];
            }

            return (maxOfLeft + minOfRight) / 2.0;
        }
    }

    return 0.0;
}

int main() {
    int m, n;

    printf("Enter the size of the first array: ");
    scanf("%d", &m);
    int* array1 = (int*)malloc(m * sizeof(int));
    if (array1 == NULL) {
        printf("Memory allocation failed\n");
        return -1;
    }
    printf("Enter the elements of the first array: ");
    for (int i = 0; i < m; ++i) {
        scanf("%d", &array1[i]);
    }

    printf("Enter the size of the second array: ");
    scanf("%d", &n);
    int* array2 = (int*)malloc(n * sizeof(int));
    if (array2 == NULL) {
        printf("Memory allocation failed\n");
        free(array1);
        return -1;
    }
    printf("Enter the elements of the second array: ");
    for (int i = 0; i < n; ++i) {
        scanf("%d", &array2[i]);
    }

    double median = findMedianSortedArrays(array1, m, array2, n);
    printf("Median: %.1f\n", median);

    free(array1);
    free(array2);
    
    return 0;
}
