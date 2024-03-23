#include<stdio.h>

// Function to find the length of the longest consecutive subsequence
int longestConsecutiveSubsequence(int arr[], int n){

    int max_length = 0;

    // Hashmap to store presence of elements 
    int hashmap[100000] = {0};

    // Fill hashmap with elements
    for(int i=0;i<n;i++){
        hashmap[arr[i]] = 1;
    }

    // Check each possible consecutive subsequence
    for(int i=0;i<n;i++){
        if(hashmap[arr[i] - 1] == 0){
            int j = arr[i];
            while(hashmap[j] != 0){
                j++;
            }

            int len = j - arr[i];
            max_length = (max_length < len) ? len : max_length;
        }
    }

    return max_length;
} 

int main(){

    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the %d positive integers: ", n);
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }

    int max_length = longestConsecutiveSubsequence(arr, n);
    printf("Length of the longest consecutive subsequence: %d\n", max_length);

    return 0;
}
