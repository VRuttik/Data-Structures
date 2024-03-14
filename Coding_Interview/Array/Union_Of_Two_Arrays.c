#include <stdio.h>

// Function to find the union of two arrays
int findUnion(int arr1[], int arr2[], int m, int n) {
    int i = 0, j = 0;
    int count = 0;

    // Traverse both arrays simultaneously
    while (i < m && j < n) {
        // If the current element of the first array is smaller, print it
        if (arr1[i] < arr2[j]) {
            printf("%d ", arr1[i]);
            i++;
            count++;
        }
        // If the current element of the second array is smaller, print it
        else if (arr2[j] < arr1[i]) {
            printf("%d ", arr2[j]);
            j++;
            count++;
        }
        // If both elements are equal, print any of them and move both pointers
        else {
            printf("%d ", arr1[i]);
            i++;
            j++;
            count++;
        }
    }

    // Print the remaining elements of the first array, if any
    while (i < m) {
        printf("%d ", arr1[i]);
        i++;
        count++;
    }

    // Print the remaining elements of the second array, if any
    while (j < n) {
        printf("%d ", arr2[j]);
        j++;
        count++;
    }

    return count;
}

int main() {
    int m, n;
    printf("Enter the size of the first array: ");
    scanf("%d", &m);
    printf("Enter the size of the second array: ");
    scanf("%d", &n);

    int arr1[m], arr2[n];
    printf("Enter the elements of the first array:\n");
    for (int i = 0; i < m; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Enter the elements of the second array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    printf("Union of the arrays: ");
    int count = findUnion(arr1, arr2, m, n);
    printf("\nCount: %d\n", count);

    return 0;
}
