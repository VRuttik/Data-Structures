// Count triplets with sum smaller than X

#include <stdio.h>

// Function to count triplets with sum smaller than target_sum
int count_triplets(int arr[], int n, int target_sum) {
    int count = 0;
    // Sort the array
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                if (arr[i] + arr[j] + arr[k] < target_sum)
                    count++;
            }
        }
    }
    return count;
}

int main() {
    int N, sum_target;
    printf("Enter the size of the array: ");
    scanf("%d", &N);
    int arr[N];
    printf("Enter the array elements separated by space: ");
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the target sum: ");
    scanf("%d", &sum_target);

    // Function call
    int result = count_triplets(arr, N, sum_target);
    printf("The count of triplets with sum smaller than %d is: %d\n", sum_target, result);

    return 0;
}
