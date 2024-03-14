// Move all negative elements to end.

#include <stdio.h>

// Function to move negative elements to the end of the array
void moveNegativesToEnd(int arr[], int n) {
    int left = 0; // Pointer to traverse from left
    int right = n - 1; // Pointer to traverse from right

    while (left <= right) {
        // If the left element is negative and the right element is positive, swap them
        if (arr[left] < 0 && arr[right] >= 0) {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;
            right--;
        }
        // If the left element is positive, move to the next element
        else if (arr[left] >= 0) {
            left++;
        }
        // If the right element is negative, move to the previous element
        else if (arr[right] < 0) {
            right--;
        }
    }
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Original Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    moveNegativesToEnd(arr, n);

    printf("Array after moving negative elements to end: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
