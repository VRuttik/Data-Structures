/*
27. Write a program to interchange the second element with the second last element.. 
*/

#include<stdio.h>

int main(){

    int n, i;

    printf("\nEnter the size of the array: ");
    scanf("%d", &n);

    if(n<2){
        printf("Array size must be at least 2 for the interchange operation.\n");
        return 1;
    }

    int arr[n];

    printf("Enter %d integers:\n", n);
    for(i=0;i<n;i++){
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    int temp = arr[1];
    arr[1] = arr[n-2];
    arr[n-2] = temp;

    printf("\nThe array after interchanging the second element with the second last element is:\n");
    for(i=0;i<n;i++){
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    
    return 0;
}
