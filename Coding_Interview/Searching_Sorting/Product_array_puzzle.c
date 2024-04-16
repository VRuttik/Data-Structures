#include<stdio.h>

void product_array(int nums[], int n, int P[]){
    int i, j;
    for(int i=0;i<n;i++){
        P[i] = 1;
        for(j=0;j<n;j++){
            if(i != j){
                P[i] *= nums[j];
            }
        }
    }
}

int main(){

    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int nums[n], P[n];
    printf("Enter the array elements separated by space: ");
    for(int i=0;i<n;i++){
        scanf("%d", &nums[i]);
    }

    product_array(nums, n, P);

    printf("The Product Array P is: ");
    for(int i=0;i<n;i++){
        printf("%d ", P[i]);
    }

    printf("\n");

    return 0;
}