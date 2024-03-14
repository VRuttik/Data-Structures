#include <stdio.h>

void findMinMax(int arr[], int n) {
    int min = arr[0]; // Initialize min with the first element
    int max = arr[0]; // Initialize max with the first element

    // Iterate through the array to find min and max
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i]; // Update min if current element is smaller
        }
        if (arr[i] > max) {
            max = arr[i]; // Update max if current element is larger
        }
    }

    // Print the minimum and maximum elements
    printf("%d %d\n", min, max);
}

int main() {
    int N;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &N);

    int A[N];
    printf("Enter %d elements separated by spaces: ", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    // Call the function to find and print min and max
    findMinMax(A, N);

    return 0;
}
