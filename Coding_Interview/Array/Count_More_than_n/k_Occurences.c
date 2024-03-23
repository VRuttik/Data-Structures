#include<stdio.h>
#include<stdlib.h>

// Function to find the count of elements in the array that appear more than n/k times
int countOccurences(int arr[], int n, int k) {
    int count = 0;

    // Calculate threshold for the element to be counted
    int threshold = n / k;

    // Hashmap to store count of each element
    int hashmap[100000] = {0};

    // Count frequency of each element
    for (int i = 0; i < n; i++)
        hashmap[arr[i]]++;

    // Traverse the hashmap to find elements appearing more than n/k times
    for (int i = 0; i < 100000; i++) {
        if (hashmap[i] > threshold)
            count++;
    }

    return count;
}

int main() {
    int n, k;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the %d integers: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter the value of k: ");
    scanf("%d", &k);

    int result = countOccurences(arr, n, k);
    printf("Count of elements appearing more than %d times: %d\n", n / k, result);

    return 0;
}
