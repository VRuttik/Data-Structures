#include <stdio.h>
#include <stdlib.h>

// Comparison function for qsort
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

// Function to find all unique quadruples that sum up to K
void findQuadruples(int arr[], int n, int K) {
    // Sort the array to ensure quadruples are internally sorted
    qsort(arr, n, sizeof(int), compare);

    // Fix the first element and use three pointer approach for the remaining elements
    for (int i = 0; i < n - 3; i++) {
        // Skip duplicates elements
        if (i > 0 && arr[i] == arr[i - 1]) {
            continue;
        }

        // Fix the second element
        for (int j = i + 1; j < n - 2; j++) {
            // Skip duplicates elements
            if (j > i + 1 && arr[j] == arr[j - 1]) {
                continue;
            }

            // Initialize two pointers from two ends of the array
            int left = j + 1;
            int right = n - 1;

            // Find remaining two elements using two pointer approach
            while (left < right) {
                int sum = arr[i] + arr[j] + arr[left] + arr[right];

                if (sum == K) {
                    printf("%d %d %d %d\n", arr[i], arr[j], arr[left], arr[right]);
                    
                    // Skip duplicates elements
                    while (left < right && arr[left] == arr[left + 1]) {
                        left++;
                    }

                    while (left < right && arr[right] == arr[right - 1]) {
                        right--;
                    }

                    // Move pointers to the next unique elements
                    left++;
                    right--;
                } else if (sum < K) {
                    left++; // Move towards higher values
                } else {
                    right--; // Move towards lower values
                }
            }
        }
    }
}

int main() {
    int n, K;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));

    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value of K: ");
    scanf("%d", &K);

    printf("Quadruples that sum up to %d are:\n", K);
    findQuadruples(arr, n, K);

    free(arr);
    return 0;
}
