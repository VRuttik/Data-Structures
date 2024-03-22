#include<stdio.h>

// Function to rearrange the array elements aternatively
void rearrangedArray(int arr[], int n){

    int max_idx = n - 1;
    int min_idx = 0;
    int max_elem = arr[max_idx] + 1; // Store any element greter than the maximum element in the array

    // Traverse the array and modify the elements accordingly
    for(int i=0;i<n;i++){
        // If even index, select maximum element
        if(i % 2 == 0){
            arr[i] += (arr[max_idx] % max_elem) * max_elem;
            max_idx--;
        }
        else{
            arr[i] += (arr[min_idx] % max_elem) * max_elem;
            min_idx++;
        }
    }

    // Dividing the modified elements to get the rearranged array
    for(int i=0;i<n;i++){
        arr[i] /= max_elem;
    }
}

int main(){

    int n;

    // Input size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter the array elements: ");
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }

    // Rearrange the array elternatively
    rearrangedArray(arr, n);

    // Output the rearranged array
    printf("Rearranged array is: ");
    for(int i=0;i<n;i++){
        printf("%d ", arr[i]);
    }

    return 0;
}