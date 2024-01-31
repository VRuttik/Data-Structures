/*
3Sum.

    Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

Notice that the solution set must not contain duplicate triplets.

 

Example 1:

Input: nums = [-1,0,1,2,-1,-4]
Output: [[-1,-1,2],[-1,0,1]]
Explanation: 
nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0.
nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0.
nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0.
The distinct triplets are [-1,0,1] and [-1,-1,2].
Notice that the order of the output and the order of the triplets does not matter.
Example 2:

Input: nums = [0,1,1]
Output: []
Explanation: The only possible triplet does not sum up to 0.
Example 3:

Input: nums = [0,0,0]
Output: [[0,0,0]]
Explanation: The only possible triplet sums up to 0.
*/

#include <stdio.h>

void findTriplets(int nums[], int numsSize) {
    for (int i = 0; i < numsSize - 2; i++) {
        for (int j = i + 1; j < numsSize - 1; j++) {
            for (int k = j + 1; k < numsSize; k++) {
                if (nums[i] + nums[j] + nums[k] == 0) {
                    printf("[%d, %d, %d]\n", nums[i], nums[j], nums[k]);
                }
            }
        }
    }
}

int main() {
    int nums[100]; // Assuming a maximum array size of 100
    int numsSize;

    printf("Enter the size of the array: ");
    scanf("%d", &numsSize);

    if (numsSize <= 0 || numsSize > 100) {
        printf("Invalid array size. Please enter a size between 1 and 100.\n");
        return 1;
    }

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < numsSize; i++) {
        scanf("%d", &nums[i]);
    }

    printf("Triplets with sum zero:\n");
    findTriplets(nums, numsSize);

    return 0;
}
