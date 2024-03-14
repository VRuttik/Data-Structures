#include <stdio.h>

// Function to sort the array containing 0s, 1s, and 2s
void sortArray(int arr[], int n) {
    int count[3] = {0}; // Initialize count of 0s, 1s, and 2s as 0

    // Count the number of 0s, 1s, and 2s in the array
    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
    }

    int i = 0;
    
    // For all 0s
    while (count[0] > 0) {
        arr[i++] = 0;
        count[0]--;
    }
    
    // For all 1s
    while (count[1] > 0) {
        arr[i++] = 1;
        count[1]--;
    }
    
    // For all 2s
    while (count[2] > 0) {
        arr[i++] = 2;
        count[2]--;
    }
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array (0, 1, or 2 only):\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Original Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    sortArray(arr, n);

    printf("Sorted Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
