#include <stdio.h>

int minJumps(int arr[], int n) {
    if (n <= 1) // If there is only one element, no Jumps are needed.
        return 0;

    if (arr[0] == 0) // If the first element is 0, then it is not possible to reach the end.
        return -1;

    int maxReach = arr[0]; // Maximum index reachable in one jump
    int steps = arr[0];    // Steps left at current index
    int jumps = 1;          // Number of jumps needed.

    for (int i = 1; i < n; i++) {
        if (i > maxReach) // If current index exceeds the maximum reachable index, return -1;
            return -1;

        if (i == n - 1) // If reached the end of the array, return the number of jumps
            return jumps;

        maxReach = (maxReach > i + arr[i]) ? maxReach : i + arr[i]; // Update maxReach if current element allows to reach further
        steps--; // Decrement steps left

        if (steps == 0) { // If no more steps left, take a jump and update steps with the between current index and previous maxReach
            jumps++;

            if (i >= maxReach) // If after taking a jump, the current index is greater than maxReach, it means we can't reach the end.
                return -1;

            steps = maxReach - i;
        }
    }
    return -1; // Return -1 if we haven't reached the end of the array
}

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array separated by space: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Call the function and print the result
    int result = minJumps(arr, n);
    if (result != -1)
        printf("Minimum number of jumps: %d\n", result); // corrected printf statement
    else
        printf("It is not possible to reach the end of the array.\n");

    return 0;
}
