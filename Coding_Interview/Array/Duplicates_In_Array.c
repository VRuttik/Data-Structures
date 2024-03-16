#include<stdio.h>

void findDuplicates(int arr[], int n){
    int found = 0; // Flag to indicate if duplicates are found

    // Traverse the array from the first element to the second last element
    for(int i=0;i<n;i++){
        // Check if the current element is already marked as a duplicate
        if(arr[i] == -1)
            continue;

        // Check if the current element is pereated in the array
        for(int j=i+1;j<n;j++){
            if(arr[i] == arr[j]){
                found = 1; // Set flag to indicate duplicates are found
                printf("%d ", arr[i]); // Print the duplicate  element
                arr[j] = -1;
            }
        }
    }

    // If no duplicates found, print -1
    if(!found)
       printf("-1"); 
}

int main(){

    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array separated by space: ");
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }

    printf("Duplicates in the array: ");
    findDuplicates(arr, n);

    return 0;
}