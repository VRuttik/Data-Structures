#include <stdio.h>
#include <stdbool.h>

// Function to check if arr2[] is a subset of arr1[]
bool isSubset(int arr1[], int m, int arr2[], int n) {
    int i = 0, j = 0;

    // Traverse both arrays
    while (i < m && j < n) {
        // If the current element of arr2[] matches with the current element of arr1[], move to the next element in both arrays
        if (arr2[j] == arr1[i]) {
            j++;
        }
        // Move to the next element of arr1[]
        i++;
    }

    // If all elements of arr2[] are found in arr1[], then arr2[] is a subset of arr1[]
    return j == n;
}

int main() {
    int m, n;

    printf("Enter the size of the first array: ");
    scanf("%d", &m);
    int arr1[m];
    printf("Enter the elements of the first array: ");
    for (int i = 0; i < m; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of the second array: ");
    scanf("%d", &n);
    int arr2[n];
    printf("Enter the elements of the second array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    // Check if arr2[] is a subset of arr1[]
    if (isSubset(arr1, m, arr2, n)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
