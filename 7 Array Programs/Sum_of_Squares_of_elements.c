/*
28. Write a program that calculates the sum of squares of the elements. 
*/

#include<stdio.h>

int main(){

    int n, i;
    int sum = 0;

    printf("\nEnter the size of the array: ");
    scanf("%d", &n);

    if(n<0){
        printf("\nArray size cannot be negative.");
    }

    int arr[n];
    
    printf("\n Enter the array elements: ");
    for(i=0;i<n;i++){
        printf("[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    for(i=0;i<n;i++){
        sum += arr[i]*arr[i];
    }

    printf("\n The sum of squares of the elements is: %d", sum);
    
    return 0;
}
