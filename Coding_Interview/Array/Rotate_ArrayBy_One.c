#include <stdio.h>

// Function to cyclically rotate an array by one position
void cyclicallyRotateByOne(int arr[], int n) {
    int temp = arr[n - 1]; // Store the last element of the array

    // Shift each element one position to the right
    for (int i = n - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    arr[0] = temp; // Place the last element at the beginning
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

    cyclicallyRotateByOne(arr, n);

    printf("Array after cyclically rotating by one: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
