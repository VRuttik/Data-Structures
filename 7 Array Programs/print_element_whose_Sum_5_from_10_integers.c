/*
26. Write a program that reads an array of 10 integers. Display all the pairs of elements whose sum is 5. 
*/

#include<stdio.h>

int main(){

    int arr[10], i, j;

    printf("\nEnter 10 integers: ");
    for(i=0;i<10;i++){
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    int found = 0;

    printf("\nPairs of elements whose sum is 5:\n");
    for(i=0;i<10;i++){
        for(j=i+1;j<10;j++){

            if(arr[i] + arr[j] == 5){
                printf("[%d] + [%d] = 5\n", arr[i], arr[j]);
                found=1;
            }
        }
    }

    if(!found) {
        printf("No pairs found!\n");
    }

    return 0;
}
