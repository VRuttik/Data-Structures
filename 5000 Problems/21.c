//  First Missing Positive.

#include<stdio.h>

void swap(int *a, int *b){
    
    int temp = *a;
    *a = *b;
    *b = temp;

}

int firstMissingPositive(int nums[], int n){

    for(int i=0;i<n;i++){
        while(nums[i]>0 && nums[i] <= n && nums[nums[i] - 1] != nums[i]){
            swap(&nums[i], &nums[nums[i] - 1]);
        }
    }

    for(int i=0;i<n;i++){
        if(nums[i] != i + 1){
            return i + 1;
        }
    }
    return n + 1;
}

int main(){

    int n;
    printf("\n Enter the size of the array: ");
    scanf("%d", &n);

    int nums[n];
    printf("\nEnter %d elements for the array:\n", n);
    for(int i=0;i<n;i++){
        scanf("%d", &nums[i]);
    }

    int result = firstMissingPositive(nums, n);
    printf("The smallest missing positive integer is: %d\n", result);

    return 0;
}