// Find a pair with the given sum in an array

#include <stdio.h>

void findPair(int nums[], int n, int target) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                printf("Pair found: %d %d", nums[i], nums[j]);
                return;
            }
        }
    }
    printf("Pair not found.");
}

int main(void) {
    int target, noElements;

    printf("\nEnter the sum: ");
    scanf("%d", &target);
    printf("\nEnter the number of elements in the array: ");
    scanf("%d", &noElements);

    int nums[noElements]; // Fixed array declaration

    printf("\nEnter the array: ");
    for (int i = 0; i < noElements; i++) {
        scanf("%d", &nums[i]);
    }

    findPair(nums, noElements, target);

    return 0;
}
