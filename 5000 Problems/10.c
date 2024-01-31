/*
Remove Duplicates from Sorted Array.
*/

#include <stdio.h>

int removeDuplicates(int *nums, int numsSize) {
    if (numsSize <= 0) {
        return 0;
    }

    int uniqueIndex = 0;

    for (int i = 1; i < numsSize; i++) {
        if (nums[i] != nums[uniqueIndex]) {
            uniqueIndex++;
            nums[uniqueIndex] = nums[i];
        }
    }

    return uniqueIndex + 1;
}

int main() {
    int nums[100]; // Assuming a maximum array size of 100
    int numsSize;

    printf("Enter the size of the sorted array: ");
    scanf("%d", &numsSize);

    if (numsSize <= 0 || numsSize > 100) {
        printf("Invalid array size. Please enter a size between 1 and 100.\n");
        return 1;
    }

    printf("Enter the sorted elements of the array:\n");
    for (int i = 0; i < numsSize; i++) {
        scanf("%d", &nums[i]);
    }

    int result = removeDuplicates(nums, numsSize);

    printf("Modified array: [");
    for (int i = 0; i < result; i++) {
        printf("%d", nums[i]);
        if (i < result - 1) {
            printf(",");
        }
    }
    printf("]\n");

    return 0;
}
