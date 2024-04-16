#include<stdio.h>

// Function to count set bit in an integer
int countSetBits(int n){
    int count = 0;
    while(n){
        count += n & 1;
        n >>= 1;
    }
    return count;
}

// Custom comparison function for qsort
int compare(const void *a, const void *b){
    int x = *(const int *)a;
    int y = *(const int *)b;
    int count_x = countSetBits(x);
    int count_y = countSetBits(y);

    // If number of set bits are equal, maintain original order

    if(count_x == count_y){
        return 0;
    }
    else if(count_x < count_y){
        return 1; // Sort in descending order
    }
    else{
        return -1;
    }
}

int main(){

    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the array elements separated by space: ");
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }

    // Sorting the array based on set bit count
    qsort(arr, n, sizeof(int), compare);

    printf("The sorted array based on set bit count is: ");
    for(int i=0;i<n;i++){
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}