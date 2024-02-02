// 4Sum.

#include<stdio.h>

void findQuadruplets(int nums[], int n, int target){

    for(int a=0; a<n-3; a++){
        for (int b=a+1; b<n-2; b++){
            for (int c=b+1; c<n-1; c++){
                for (int d=c+1; d<n; d++){
                    
                    if (nums[a] + nums[b] + nums[c] + nums[d] == target){
                        printf("[%d %d %d %d]\n", nums[a], nums[b], nums[c], nums[d]);
                    }
                    
                }
                
            }
            
        }
        
    }
}

int main(){

    int n;
    printf("\nEnter the size of the array: ");
    scanf("%d", &n);

    int nums[n];

    printf("\nEnter %d elements for the array:\n", n);
    for(int i=0; i<n; i++){
        scanf("%d", &nums[i]);
    }

    int target;
    printf("\nEnter the target value: ");
    scanf("%d", &target);

    findQuadruplets(nums, n, target);
    return 0;
}
