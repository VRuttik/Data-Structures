// Search Insert Position. 

#include<stdio.h>

int searchInsert(int nums[], int n, int target){

    int left=0, right=n-1;

    while(left <= right){
        int mid = left + (right - left) / 2;

        if (nums[mid] == target)
        {
            return mid;
        }else if(nums[mid] < target){
            left = mid + 1;
        }else{
            right = mid-1;
        }
        
    }
    return left;
}

int main(){

    int n;
    printf("\n Enter the size of the array: ");
    scanf("%d", &n);

    int nums[n];

    printf("\n Enter %d elements in the sorted array: ", n);
    for(int i=0;i<n;i++){
        scanf("%d", &nums[i]);
    }

    int target;
    printf("\n Enter the target value: ");
    scanf("%d", &target);

    int result = searchInsert(nums, n, target);
    printf("Index to insert the target: %d\n", result);

    return 0;
}

